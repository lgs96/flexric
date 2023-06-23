/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_E2nodeComponentConfigUpdateGNB_H_
#define	_E2nodeComponentConfigUpdateGNB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2nodeComponentConfigUpdateGNB */
typedef struct E2nodeComponentConfigUpdateGNB {
	OCTET_STRING_t	*ngAPconfigUpdate;	/* OPTIONAL */
	OCTET_STRING_t	*xnAPconfigUpdate;	/* OPTIONAL */
	OCTET_STRING_t	*e1APconfigUpdate;	/* OPTIONAL */
	OCTET_STRING_t	*f1APconfigUpdate;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2nodeComponentConfigUpdateGNB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigUpdateGNB;
extern asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentConfigUpdateGNB_specs_1;
extern asn_TYPE_member_t asn_MBR_E2nodeComponentConfigUpdateGNB_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _E2nodeComponentConfigUpdateGNB_H_ */
#include <asn_internal.h>
