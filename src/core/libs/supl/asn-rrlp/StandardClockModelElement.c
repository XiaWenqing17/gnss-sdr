/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "StandardClockModelElement.h"

static int memb_stanClockTocLSB_constraint_1(
    asn_TYPE_descriptor_t *td, const void *sptr,
    asn_app_constraint_failed_f *ctfailcb, void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 511))
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

static int memb_stanClockAF2_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= -2048 && value <= 2047))
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

static int memb_stanClockAF1_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= -131072 && value <= 131071))
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

static int memb_stanClockAF0_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= -134217728 && value <= 134217727))
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

static int memb_stanClockTgd_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= -512 && value <= 511))
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

static int memb_stanModelID_constraint_1(asn_TYPE_descriptor_t *td,
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

    if ((value >= 0 && value <= 1))
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

static asn_per_constraints_t ASN_PER_MEMB_STAN_CLOCK_TOC_LSB_CONSTR_2 = {
    {APC_CONSTRAINED, 9, 9, 0, 511} /* (0..511) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_STAN_CLOCK_A_F2_CONSTR_3 = {
    {APC_CONSTRAINED, 12, 12, -2048, 2047} /* (-2048..2047) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_STAN_CLOCK_A_F1_CONSTR_4 = {
    {APC_CONSTRAINED, 18, -1, -131072, 131071} /* (-131072..131071) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_STAN_CLOCK_A_F0_CONSTR_5 = {
    {APC_CONSTRAINED, 28, -1, -134217728,
        134217727} /* (-134217728..134217727) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_STAN_CLOCK_TGD_CONSTR_6 = {
    {APC_CONSTRAINED, 10, 10, -512, 511} /* (-512..511) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_STAN_MODEL_ID_CONSTR_7 = {
    {APC_CONSTRAINED, 1, 1, 0, 1} /* (0..1) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_StandardClockModelElement_1[] = {
    {ATF_NOFLAGS, 0,
        offsetof(struct StandardClockModelElement, stanClockTocLSB),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_stanClockTocLSB_constraint_1,
        &ASN_PER_MEMB_STAN_CLOCK_TOC_LSB_CONSTR_2, 0, "stanClockTocLSB"},
    {ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, stanClockAF2),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_stanClockAF2_constraint_1,
        &ASN_PER_MEMB_STAN_CLOCK_A_F2_CONSTR_3, 0, "stanClockAF2"},
    {ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, stanClockAF1),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_stanClockAF1_constraint_1,
        &ASN_PER_MEMB_STAN_CLOCK_A_F1_CONSTR_4, 0, "stanClockAF1"},
    {ATF_NOFLAGS, 0, offsetof(struct StandardClockModelElement, stanClockAF0),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_stanClockAF0_constraint_1,
        &ASN_PER_MEMB_STAN_CLOCK_A_F0_CONSTR_5, 0, "stanClockAF0"},
    {ATF_POINTER, 2, offsetof(struct StandardClockModelElement, stanClockTgd),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_stanClockTgd_constraint_1,
        &ASN_PER_MEMB_STAN_CLOCK_TGD_CONSTR_6, 0, "stanClockTgd"},
    {ATF_POINTER, 1, offsetof(struct StandardClockModelElement, stanModelID),
        (ASN_TAG_CLASS_CONTEXT | (5 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger, memb_stanModelID_constraint_1,
        &ASN_PER_MEMB_STAN_MODEL_ID_CONSTR_7, 0, "stanModelID"},
};
static int asn_MAP_StandardClockModelElement_oms_1[] = {4, 5};
static ber_tlv_tag_t asn_DEF_StandardClockModelElement_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_StandardClockModelElement_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* stanClockTocLSB at 1281 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* stanClockAF2 at 1282 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* stanClockAF1 at 1283 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* stanClockAF0 at 1284 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* stanClockTgd at 1285 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}  /* stanModelID at 1286 */
};
static asn_SEQUENCE_specifics_t asn_SPC_StandardClockModelElement_specs_1 = {
    sizeof(struct StandardClockModelElement),
    offsetof(struct StandardClockModelElement, _asn_ctx),
    asn_MAP_StandardClockModelElement_tag2el_1,
    6,                                       /* Count of tags in the map */
    asn_MAP_StandardClockModelElement_oms_1, /* Optional members */
    2,
    0, /* Root/Additions */
    5, /* Start extensions */
    7  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_StandardClockModelElement = {
    "StandardClockModelElement",
    "StandardClockModelElement",
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
    asn_DEF_StandardClockModelElement_tags_1,
    sizeof(asn_DEF_StandardClockModelElement_tags_1) /
        sizeof(asn_DEF_StandardClockModelElement_tags_1[0]), /* 1 */
    asn_DEF_StandardClockModelElement_tags_1,                /* Same as above */
    sizeof(asn_DEF_StandardClockModelElement_tags_1) /
        sizeof(asn_DEF_StandardClockModelElement_tags_1[0]), /* 1 */
    0,                                                       /* No PER visible constraints */
    asn_MBR_StandardClockModelElement_1,
    6,                                         /* Elements count */
    &asn_SPC_StandardClockModelElement_specs_1 /* Additional specs */
};
