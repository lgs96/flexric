/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap_v2_03.asn"
 * 	`asn1c -fcompound-names`
 */

#include "RICaction-NotAdmitted-Item.h"

asn_TYPE_member_t asn_MBR_RICaction_NotAdmitted_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICaction_NotAdmitted_Item, ricActionID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactionID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ricActionID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICaction_NotAdmitted_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
};
static const ber_tlv_tag_t asn_DEF_RICaction_NotAdmitted_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICaction_NotAdmitted_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricActionID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cause */
};
asn_SEQUENCE_specifics_t asn_SPC_RICaction_NotAdmitted_Item_specs_1 = {
	sizeof(struct RICaction_NotAdmitted_Item),
	offsetof(struct RICaction_NotAdmitted_Item, _asn_ctx),
	asn_MAP_RICaction_NotAdmitted_Item_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICaction_NotAdmitted_Item = {
	"RICaction-NotAdmitted-Item",
	"RICaction-NotAdmitted-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_RICaction_NotAdmitted_Item_tags_1,
	sizeof(asn_DEF_RICaction_NotAdmitted_Item_tags_1)
		/sizeof(asn_DEF_RICaction_NotAdmitted_Item_tags_1[0]), /* 1 */
	asn_DEF_RICaction_NotAdmitted_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICaction_NotAdmitted_Item_tags_1)
		/sizeof(asn_DEF_RICaction_NotAdmitted_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RICaction_NotAdmitted_Item_1,
	2,	/* Elements count */
	&asn_SPC_RICaction_NotAdmitted_Item_specs_1	/* Additional specs */
};

