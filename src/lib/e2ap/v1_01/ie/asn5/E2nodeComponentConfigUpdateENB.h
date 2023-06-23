/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_E2nodeComponentConfigUpdateENB_H_
#define	_E2nodeComponentConfigUpdateENB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2nodeComponentConfigUpdateENB */
typedef struct E2nodeComponentConfigUpdateENB {
	OCTET_STRING_t	*s1APconfigUpdate;	/* OPTIONAL */
	OCTET_STRING_t	*x2APconfigUpdate;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2nodeComponentConfigUpdateENB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2nodeComponentConfigUpdateENB;
extern asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentConfigUpdateENB_specs_1;
extern asn_TYPE_member_t asn_MBR_E2nodeComponentConfigUpdateENB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _E2nodeComponentConfigUpdateENB_H_ */
#include <asn_internal.h>
