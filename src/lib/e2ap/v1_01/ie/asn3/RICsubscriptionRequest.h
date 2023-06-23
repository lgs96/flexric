/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_RICsubscriptionRequest_H_
#define	_RICsubscriptionRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RICsubscriptionRequest */
typedef struct RICsubscriptionRequest {
	ProtocolIE_Container_1478P0_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICsubscriptionRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICsubscriptionRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RICsubscriptionRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RICsubscriptionRequest_H_ */
#include <asn_internal.h>
