/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "Rel98-AssistanceData-Extension.h"

static asn_TYPE_member_t asn_MBR_Rel98_AssistanceData_Extension_1[] = {
    {ATF_POINTER, 3,
        offsetof(struct Rel98_AssistanceData_Extension, rel98_Ext_ExpOTD),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_Rel98_Ext_ExpOTD,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "rel98-Ext-ExpOTD"},
    {ATF_POINTER, 2,
        offsetof(struct Rel98_AssistanceData_Extension,
            gpsTimeAssistanceMeasurementRequest),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NULL, 0,                       /* Defer constraints checking to the member type */
        0,                                      /* No PER visible constraints */
        0, "gpsTimeAssistanceMeasurementRequest"},
    {ATF_POINTER, 1,
        offsetof(struct Rel98_AssistanceData_Extension,
            gpsReferenceTimeUncertainty),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_GPSReferenceTimeUncertainty,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "gpsReferenceTimeUncertainty"},
};
static int asn_MAP_Rel98_AssistanceData_Extension_oms_1[] = {0, 1, 2};
static ber_tlv_tag_t asn_DEF_Rel98_AssistanceData_Extension_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_Rel98_AssistanceData_Extension_tag2el_1[] =
    {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
            0}, /* rel98-Ext-ExpOTD at 879 */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
            0}, /* gpsTimeAssistanceMeasurementRequest at 881 */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0,
            0} /* gpsReferenceTimeUncertainty at 882 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Rel98_AssistanceData_Extension_specs_1 =
    {
        sizeof(struct Rel98_AssistanceData_Extension),
        offsetof(struct Rel98_AssistanceData_Extension, _asn_ctx),
        asn_MAP_Rel98_AssistanceData_Extension_tag2el_1,
        3,                                            /* Count of tags in the map */
        asn_MAP_Rel98_AssistanceData_Extension_oms_1, /* Optional members */
        1,
        2, /* Root/Additions */
        0, /* Start extensions */
        4  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Rel98_AssistanceData_Extension = {
    "Rel98-AssistanceData-Extension",
    "Rel98-AssistanceData-Extension",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0, /* Use generic outmost tag fetcher */
    asn_DEF_Rel98_AssistanceData_Extension_tags_1,
    sizeof(asn_DEF_Rel98_AssistanceData_Extension_tags_1) /
        sizeof(asn_DEF_Rel98_AssistanceData_Extension_tags_1[0]), /* 1 */
    asn_DEF_Rel98_AssistanceData_Extension_tags_1,                /* Same as above */
    sizeof(asn_DEF_Rel98_AssistanceData_Extension_tags_1) /
        sizeof(asn_DEF_Rel98_AssistanceData_Extension_tags_1[0]), /* 1 */
    0,                                                            /* No PER visible constraints */
    asn_MBR_Rel98_AssistanceData_Extension_1,
    3,                                              /* Elements count */
    &asn_SPC_Rel98_AssistanceData_Extension_specs_1 /* Additional specs */
};
