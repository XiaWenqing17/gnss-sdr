/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _GANSSGenericAssistDataElement_H
#define _GANSSGenericAssistDataElement_H

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct SeqOfGANSSTimeModel;
    struct GANSSDiffCorrections;
    struct GANSSNavModel;
    struct GANSSRealTimeIntegrity;
    struct GANSSDataBitAssist;
    struct GANSSRefMeasurementAssist;
    struct GANSSAlmanacModel;
    struct GANSSUTCModel;

    /* GANSSGenericAssistDataElement */
    typedef struct GANSSGenericAssistDataElement
    {
        long *ganssID /* OPTIONAL */;
        struct SeqOfGANSSTimeModel *ganssTimeModel /* OPTIONAL */;
        struct GANSSDiffCorrections *ganssDiffCorrections /* OPTIONAL */;
        struct GANSSNavModel *ganssNavigationModel /* OPTIONAL */;
        struct GANSSRealTimeIntegrity *ganssRealTimeIntegrity /* OPTIONAL */;
        struct GANSSDataBitAssist *ganssDataBitAssist /* OPTIONAL */;
        struct GANSSRefMeasurementAssist
            *ganssRefMeasurementAssist /* OPTIONAL */;
        struct GANSSAlmanacModel *ganssAlmanacModel /* OPTIONAL */;
        struct GANSSUTCModel *ganssUTCModel /* OPTIONAL */;
        /*
         * This type is extensible,
         * possible extensions are below.
         */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSGenericAssistDataElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSGenericAssistDataElement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSAlmanacModel.h"
#include "GANSSDataBitAssist.h"
#include "GANSSDiffCorrections.h"
#include "GANSSNavModel.h"
#include "GANSSRealTimeIntegrity.h"
#include "GANSSRefMeasurementAssist.h"
#include "GANSSUTCModel.h"
#include "SeqOfGANSSTimeModel.h"

#endif /* _GANSSGenericAssistDataElement_H_ */
#include <asn_internal.h>
