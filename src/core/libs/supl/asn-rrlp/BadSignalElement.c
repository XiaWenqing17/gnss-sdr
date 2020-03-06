/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "BadSignalElement.h"

static int memb_badSignalID_constraint_1(asn_TYPE_descriptor_t *td,
    const void *sptr,
    asn_app_constraint_failed_f *ctfailcb,
    void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 3))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                td->name, __FILE__, __LINE__);
            return -1;
        }
}

static asn_per_constraints_t ASN_PER_MEMB_BAD_SIGNAL_ID_CONSTR_3 = {
    {APC_CONSTRAINED, 2, 2, 0, 3} /* (0..3) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_BadSignalElement_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct BadSignalElement, badSVID),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_SVID, 0,                       /* Defer constraints checking to the member type */
        0,                                      /* No PER visible constraints */
        0, "badSVID"},
    {ATF_POINTER, 1, offsetof(struct BadSignalElement, badSignalID),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_badSignalID_constraint_1,
        &ASN_PER_MEMB_BAD_SIGNAL_ID_CONSTR_3, 0, "badSignalID"},
};
static int asn_MAP_BadSignalElement_oms_1[] = {1};
static ber_tlv_tag_t asn_DEF_BadSignalElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_BadSignalElement_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* badSVID at 1300 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* badSignalID at 1301 */
};
static asn_SEQUENCE_specifics_t asn_SPC_BadSignalElement_specs_1 = {
    sizeof(struct BadSignalElement),
    offsetof(struct BadSignalElement, _asn_ctx),
    asn_MAP_BadSignalElement_tag2el_1,
    2,                              /* Count of tags in the map */
    asn_MAP_BadSignalElement_oms_1, /* Optional members */
    1,
    0,  /* Root/Additions */
    -1, /* Start extensions */
    -1  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_BadSignalElement = {
    "BadSignalElement",
    "BadSignalElement",
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
    asn_DEF_BadSignalElement_tags_1,
    sizeof(asn_DEF_BadSignalElement_tags_1) /
        sizeof(asn_DEF_BadSignalElement_tags_1[0]), /* 1 */
    asn_DEF_BadSignalElement_tags_1,                /* Same as above */
    sizeof(asn_DEF_BadSignalElement_tags_1) /
        sizeof(asn_DEF_BadSignalElement_tags_1[0]), /* 1 */
    0,                                              /* No PER visible constraints */
    asn_MBR_BadSignalElement_1,
    2,                                /* Elements count */
    &asn_SPC_BadSignalElement_specs_1 /* Additional specs */
};
