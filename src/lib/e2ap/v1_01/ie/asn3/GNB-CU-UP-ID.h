/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v01.01.asn1"
 * 	`asn1c -gen-APER -no-gen-BER -no-gen-JER -no-gen-OER -gen-UPER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_GNB_CU_UP_ID_H_
#define	_GNB_CU_UP_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GNB-CU-UP-ID */
typedef INTEGER_t	 GNB_CU_UP_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GNB_CU_UP_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GNB_CU_UP_ID;
asn_struct_free_f GNB_CU_UP_ID_free;
asn_struct_print_f GNB_CU_UP_ID_print;
asn_constr_check_f GNB_CU_UP_ID_constraint;
xer_type_decoder_f GNB_CU_UP_ID_decode_xer;
xer_type_encoder_f GNB_CU_UP_ID_encode_xer;
per_type_decoder_f GNB_CU_UP_ID_decode_uper;
per_type_encoder_f GNB_CU_UP_ID_encode_uper;
per_type_decoder_f GNB_CU_UP_ID_decode_aper;
per_type_encoder_f GNB_CU_UP_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_CU_UP_ID_H_ */
#include <asn_internal.h>
