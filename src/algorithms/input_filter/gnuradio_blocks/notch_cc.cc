/*!
 * \file notch_cc.cc
 * \brief Implements a multi state notch filter algorithm
 * \author Antonio Ramos (antonio.ramosdet(at)gmail.com)
 *
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019 (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * -------------------------------------------------------------------------
 */

#include "notch_cc.h"
#include "gnss_sdr_make_unique.h"
#include <boost/math/distributions/chi_squared.hpp>
#include <gnuradio/io_signature.h>
#include <volk/volk.h>
#include <algorithm>
#include <cmath>
#include <cstring>


notch_sptr make_notch_filter(float pfa, float p_c_factor,
    int32_t length_, int32_t n_segments_est, int32_t n_segments_reset)
{
    return notch_sptr(new Notch(pfa, p_c_factor, length_, n_segments_est, n_segments_reset));
}


Notch::Notch(float pfa,
    float p_c_factor,
    int32_t length_,
    int32_t n_segments_est,
    int32_t n_segments_reset) : gr::block("Notch",
                                    gr::io_signature::make(1, 1, sizeof(gr_complex)),
                                    gr::io_signature::make(1, 1, sizeof(gr_complex)))
{
    const int32_t alignment_multiple = volk_get_alignment() / sizeof(gr_complex);
    set_alignment(std::max(1, alignment_multiple));
    set_history(2);
    this->pfa = pfa;
    noise_pow_est = 0.0;
    this->p_c_factor = gr_complex(p_c_factor, 0.0);
    this->length_ = length_;   // Set the number of samples per segment
    filter_state_ = false;     // Initial state of the filter
    n_deg_fred = 2 * length_;  // Number of dregrees of freedom
    n_segments = 0;
    this->n_segments_est = n_segments_est;      // Set the number of segments for noise power estimation
    this->n_segments_reset = n_segments_reset;  // Set the period (in segments) when the noise power is estimated
    z_0 = gr_complex(0.0, 0.0);
    boost::math::chi_squared_distribution<float> my_dist_(n_deg_fred);
    thres_ = boost::math::quantile(boost::math::complement(my_dist_, pfa));
    c_samples = volk_gnsssdr::vector<gr_complex>(length_);
    angle_ = volk_gnsssdr::vector<float>(length_);
    power_spect = volk_gnsssdr::vector<float>(length_);
    last_out = gr_complex(0.0, 0.0);
    d_fft = std::make_unique<gr::fft::fft_complex>(length_, true);
}


void Notch::forecast(int noutput_items __attribute__((unused)), gr_vector_int &ninput_items_required)
{
    for (int &aux : ninput_items_required)
        {
            aux = length_;
        }
}


int Notch::general_work(int noutput_items, gr_vector_int &ninput_items __attribute__((unused)),
    gr_vector_const_void_star &input_items, gr_vector_void_star &output_items)
{
    int32_t index_out = 0;
    float sig2dB = 0.0;
    float sig2lin = 0.0;
    lv_32fc_t dot_prod_;
    const auto *in = reinterpret_cast<const gr_complex *>(input_items[0]);
    auto *out = reinterpret_cast<gr_complex *>(output_items[0]);
    in++;
    while ((index_out + length_) < noutput_items)
        {
            if ((n_segments < n_segments_est) && (filter_state_ == false))
                {
                    memcpy(d_fft->get_inbuf(), in, sizeof(gr_complex) * length_);
                    d_fft->execute();
                    volk_32fc_s32f_power_spectrum_32f(power_spect.data(), d_fft->get_outbuf(), 1.0, length_);
                    volk_32f_s32f_calc_spectral_noise_floor_32f(&sig2dB, power_spect.data(), 15.0, length_);
                    sig2lin = std::pow(10.0F, (sig2dB / 10.0F)) / (static_cast<float>(n_deg_fred));
                    noise_pow_est = (static_cast<float>(n_segments) * noise_pow_est + sig2lin) / (static_cast<float>(n_segments + 1));
                    memcpy(out, in, sizeof(gr_complex) * length_);
                }
            else
                {
                    volk_32fc_x2_conjugate_dot_prod_32fc(&dot_prod_, in, in, length_);
                    if ((lv_creal(dot_prod_) / noise_pow_est) > thres_)
                        {
                            if (filter_state_ == false)
                                {
                                    filter_state_ = true;
                                    last_out = gr_complex(0.0, 0.0);
                                }
                            volk_32fc_x2_multiply_conjugate_32fc(c_samples.data(), in, (in - 1), length_);
                            volk_32fc_s32f_atan2_32f(angle_.data(), c_samples.data(), static_cast<float>(1.0), length_);
                            for (int32_t aux = 0; aux < length_; aux++)
                                {
                                    z_0 = std::exp(gr_complex(0.0, 1.0) * (*(angle_.data() + aux)));
                                    *(out + aux) = *(in + aux) - z_0 * (*(in + aux - 1)) + p_c_factor * z_0 * last_out;
                                    last_out = *(out + aux);
                                }
                        }
                    else
                        {
                            if (n_segments > n_segments_reset)
                                {
                                    n_segments = 0;
                                }
                            filter_state_ = false;
                            memcpy(out, in, sizeof(gr_complex) * length_);
                        }
                }
            index_out += length_;
            n_segments++;
            in += length_;
            out += length_;
        }
    consume_each(index_out);
    return index_out;
}
