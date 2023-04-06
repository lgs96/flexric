/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03.asn"
 * 	`asn1c -gen-PER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "UEIdentification-RANParameter-Item.h"

#include "RANParameter-Definition.h"
asn_TYPE_member_t asn_MBR_UEIdentification_RANParameter_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEIdentification_RANParameter_Item, ranParameter_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranParameter-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UEIdentification_RANParameter_Item, ranParameter_name),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranParameter-name"
		},
	{ ATF_POINTER, 1, offsetof(struct UEIdentification_RANParameter_Item, ranParameter_Definition),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_Definition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranParameter-Definition"
		},
};
static const int asn_MAP_UEIdentification_RANParameter_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_UEIdentification_RANParameter_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEIdentification_RANParameter_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranParameter-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ranParameter-name */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ranParameter-Definition */
};
asn_SEQUENCE_specifics_t asn_SPC_UEIdentification_RANParameter_Item_specs_1 = {
	sizeof(struct UEIdentification_RANParameter_Item),
	offsetof(struct UEIdentification_RANParameter_Item, _asn_ctx),
	asn_MAP_UEIdentification_RANParameter_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UEIdentification_RANParameter_Item_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEIdentification_RANParameter_Item = {
	"UEIdentification-RANParameter-Item",
	"UEIdentification-RANParameter-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_UEIdentification_RANParameter_Item_tags_1,
	sizeof(asn_DEF_UEIdentification_RANParameter_Item_tags_1)
		/sizeof(asn_DEF_UEIdentification_RANParameter_Item_tags_1[0]), /* 1 */
	asn_DEF_UEIdentification_RANParameter_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEIdentification_RANParameter_Item_tags_1)
		/sizeof(asn_DEF_UEIdentification_RANParameter_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEIdentification_RANParameter_Item_1,
	3,	/* Elements count */
	&asn_SPC_UEIdentification_RANParameter_Item_specs_1	/* Additional specs */
};
