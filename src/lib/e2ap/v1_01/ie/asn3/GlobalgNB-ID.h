/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_GlobalgNB_ID_H_
#define	_GlobalgNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMN-Identity.h"
#include "GNB-ID-Choice.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GlobalgNB-ID */
typedef struct GlobalgNB_ID {
	PLMN_Identity_t	 plmn_id;
	GNB_ID_Choice_t	 gnb_id;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GlobalgNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GlobalgNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_GlobalgNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GlobalgNB_ID_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _GlobalgNB_ID_H_ */
#include <asn_internal.h>
