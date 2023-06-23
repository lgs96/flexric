/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RANfunctionID_Item_H_
#define	_RANfunctionID_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANfunctionID.h"
#include "RANfunctionRevision.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANfunctionID-Item */
typedef struct RANfunctionID_Item {
	RANfunctionID_t	 ranFunctionID;
	RANfunctionRevision_t	 ranFunctionRevision;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANfunctionID_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANfunctionID_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_RANfunctionID_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_RANfunctionID_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RANfunctionID_Item_H_ */
#include <asn_internal.h>
