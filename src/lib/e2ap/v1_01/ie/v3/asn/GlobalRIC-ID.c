/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap_v3_01.asn"
 * 	`asn1c -fcompound-names`
 */

#include "GlobalRIC-ID.h"

static int
memb_ric_ID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ric_ID_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	20	/* (SIZE(20..20)) */};
static asn_per_constraints_t asn_PER_memb_ric_ID_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  20,  20 }	/* (SIZE(20..20)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GlobalRIC_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalRIC_ID, pLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMN-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalRIC_ID, ric_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ric_ID_constr_3, &asn_PER_memb_ric_ID_constr_3,  memb_ric_ID_constraint_1 },
		0, 0, /* No default value */
		"ric-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_GlobalRIC_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GlobalRIC_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ric-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_GlobalRIC_ID_specs_1 = {
	sizeof(struct GlobalRIC_ID),
	offsetof(struct GlobalRIC_ID, _asn_ctx),
	asn_MAP_GlobalRIC_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GlobalRIC_ID = {
	"GlobalRIC-ID",
	"GlobalRIC-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_GlobalRIC_ID_tags_1,
	sizeof(asn_DEF_GlobalRIC_ID_tags_1)
		/sizeof(asn_DEF_GlobalRIC_ID_tags_1[0]), /* 1 */
	asn_DEF_GlobalRIC_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_GlobalRIC_ID_tags_1)
		/sizeof(asn_DEF_GlobalRIC_ID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GlobalRIC_ID_1,
	2,	/* Elements count */
	&asn_SPC_GlobalRIC_ID_specs_1	/* Additional specs */
};
