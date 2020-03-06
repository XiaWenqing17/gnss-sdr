/*!
 * \file gps_l1_ca_dll_pll_tracking_gpu.h
 * \brief Implementation of an adapter of a DLL+PLL tracking loop block using GPU accelerated functions
 * for GPS L1 C/A to a TrackingInterface
 * \author Javier Arribas, 2015. jarribas(at)cttc.es
 *
 * Code DLL + carrier PLL according to the algorithms described in:
 * K.Borre, D.M.Akos, N.Bertelsen, P.Rinder, and S.H.Jensen,
 * A Software-Defined GPS and Galileo Receiver. A Single-Frequency
 * Approach, Birkhauser, 2007
 *
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019  (see AUTHORS file for a list of contributors)
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

#ifndef GNSS_SDR_GPS_L1_CA_DLL_PLL_TRACKING_GPU_H
#define GNSS_SDR_GPS_L1_CA_DLL_PLL_TRACKING_GPU_H

#include "gps_l1_ca_dll_pll_tracking_gpu_cc.h"
#include "tracking_interface.h"
#include <string>


class ConfigurationInterface;

/*!
 * \brief This class implements a code DLL + carrier PLL tracking loop using GPU accelerated functions
 */
class GpsL1CaDllPllTrackingGPU : public TrackingInterface
{
public:
    GpsL1CaDllPllTrackingGPU(ConfigurationInterface* configuration,
        std::string role,
        unsigned int in_streams,
        unsigned int out_streams);

    virtual ~GpsL1CaDllPllTrackingGPU();

    inline std::string role() override
    {
        return role_;
    }

    //! Returns "GPS_L1_CA_DLL_PLL_Tracking_GPU"
    inline std::string implementation() override
    {
        return "GPS_L1_CA_DLL_PLL_Tracking_GPU";
    }

    inline size_t item_size() override
    {
        return item_size_;
    }

    void connect(gr::top_block_sptr top_block) override;
    void disconnect(gr::top_block_sptr top_block) override;
    gr::basic_block_sptr get_left_block() override;
    gr::basic_block_sptr get_right_block() override;

    /*!
     * \brief Set tracking channel unique ID
     */
    void set_channel(unsigned int channel) override;

    /*!
     * \brief Set acquisition/tracking common Gnss_Synchro object pointer
     * to efficiently exchange synchronization data between acquisition and tracking blocks
     */
    void set_gnss_synchro(Gnss_Synchro* p_gnss_synchro) override;

    void start_tracking() override;

    /*!
     * \brief Stop running tracking
     */
    void stop_tracking() override;

private:
    gps_l1_ca_dll_pll_tracking_gpu_cc_sptr tracking_;
    size_t item_size_;
    unsigned int channel_;
    std::string role_;
    unsigned int in_streams_;
    unsigned int out_streams_;
};

#endif  // GNSS_SDR_GPS_L1_CA_DLL_PLL_TRACKING_GPU_H
