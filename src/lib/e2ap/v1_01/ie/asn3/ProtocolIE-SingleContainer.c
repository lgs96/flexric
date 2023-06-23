/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "ProtocolIE-SingleContainer.h"

/*
 * This type is implemented using RICaction_ToBeSetup_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RICaction_Admitted_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RICaction_NotAdmitted_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2connectionUpdate_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2connectionUpdateRemove_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2connectionSetupFailed_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigUpdate_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using E2nodeComponentConfigUpdateAck_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RANfunction_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RANfunctionID_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using RANfunctionIDcause_ItemIEs,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P0 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P0_tags_1,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P0_tags_1)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P0_tags_1[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P0_tags_1)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RICaction_ToBeSetup_ItemIEs_1,
	3,	/* Elements count */
	&asn_SPC_RICaction_ToBeSetup_ItemIEs_specs_1	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P1_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P1 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P1_tags_2,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P1_tags_2)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P1_tags_2[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P1_tags_2,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P1_tags_2)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P1_tags_2[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RICaction_Admitted_ItemIEs_5,
	3,	/* Elements count */
	&asn_SPC_RICaction_Admitted_ItemIEs_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P2_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P2 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P2_tags_3,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P2_tags_3)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P2_tags_3[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P2_tags_3,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P2_tags_3)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P2_tags_3[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RICaction_NotAdmitted_ItemIEs_9,
	3,	/* Elements count */
	&asn_SPC_RICaction_NotAdmitted_ItemIEs_specs_9	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P3_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P3 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P3_tags_4,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P3_tags_4)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P3_tags_4[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P3_tags_4,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P3_tags_4)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P3_tags_4[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2connectionUpdate_ItemIEs_13,
	3,	/* Elements count */
	&asn_SPC_E2connectionUpdate_ItemIEs_specs_13	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P4_tags_5[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P4 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P4_tags_5,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P4_tags_5)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P4_tags_5[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P4_tags_5,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P4_tags_5)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P4_tags_5[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2connectionUpdateRemove_ItemIEs_17,
	3,	/* Elements count */
	&asn_SPC_E2connectionUpdateRemove_ItemIEs_specs_17	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P5_tags_6[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P5 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P5_tags_6,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P5_tags_6)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P5_tags_6[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P5_tags_6,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P5_tags_6)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P5_tags_6[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2connectionSetupFailed_ItemIEs_21,
	3,	/* Elements count */
	&asn_SPC_E2connectionSetupFailed_ItemIEs_specs_21	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P6_tags_7[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P6 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P6_tags_7,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P6_tags_7)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P6_tags_7[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P6_tags_7,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P6_tags_7)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P6_tags_7[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2nodeComponentConfigUpdate_ItemIEs_25,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigUpdate_ItemIEs_specs_25	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P7_tags_8[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P7 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P7_tags_8,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P7_tags_8)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P7_tags_8[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P7_tags_8,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P7_tags_8)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P7_tags_8[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2nodeComponentConfigUpdateAck_ItemIEs_29,
	3,	/* Elements count */
	&asn_SPC_E2nodeComponentConfigUpdateAck_ItemIEs_specs_29	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P8_tags_9[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P8 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P8_tags_9,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P8_tags_9)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P8_tags_9[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P8_tags_9,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P8_tags_9)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P8_tags_9[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RANfunction_ItemIEs_33,
	3,	/* Elements count */
	&asn_SPC_RANfunction_ItemIEs_specs_33	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P9_tags_10[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P9 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P9_tags_10,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P9_tags_10)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P9_tags_10[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P9_tags_10,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P9_tags_10)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P9_tags_10[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RANfunctionID_ItemIEs_37,
	3,	/* Elements count */
	&asn_SPC_RANfunctionID_ItemIEs_specs_37	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_ProtocolIE_SingleContainer_1480P10_tags_11[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ProtocolIE_SingleContainer_1480P10 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_ProtocolIE_SingleContainer_1480P10_tags_11,
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P10_tags_11)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P10_tags_11[0]), /* 1 */
	asn_DEF_ProtocolIE_SingleContainer_1480P10_tags_11,	/* Same as above */
	sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P10_tags_11)
		/sizeof(asn_DEF_ProtocolIE_SingleContainer_1480P10_tags_11[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RANfunctionIDcause_ItemIEs_41,
	3,	/* Elements count */
	&asn_SPC_RANfunctionIDcause_ItemIEs_specs_41	/* Additional specs */
};

