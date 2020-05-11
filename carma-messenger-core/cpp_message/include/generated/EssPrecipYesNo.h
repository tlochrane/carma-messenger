/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NTCIP"
 * 	found in "/home/qswawrq/J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_EssPrecipYesNo_H_
#define	_EssPrecipYesNo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EssPrecipYesNo {
	EssPrecipYesNo_precip	= 1,
	EssPrecipYesNo_noPrecip	= 2,
	EssPrecipYesNo_error	= 3
} e_EssPrecipYesNo;

/* EssPrecipYesNo */
typedef long	 EssPrecipYesNo_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EssPrecipYesNo_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EssPrecipYesNo;
extern const asn_INTEGER_specifics_t asn_SPC_EssPrecipYesNo_specs_1;
asn_struct_free_f EssPrecipYesNo_free;
asn_struct_print_f EssPrecipYesNo_print;
asn_constr_check_f EssPrecipYesNo_constraint;
ber_type_decoder_f EssPrecipYesNo_decode_ber;
der_type_encoder_f EssPrecipYesNo_encode_der;
xer_type_decoder_f EssPrecipYesNo_decode_xer;
xer_type_encoder_f EssPrecipYesNo_encode_xer;
oer_type_decoder_f EssPrecipYesNo_decode_oer;
oer_type_encoder_f EssPrecipYesNo_encode_oer;
per_type_decoder_f EssPrecipYesNo_decode_uper;
per_type_encoder_f EssPrecipYesNo_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EssPrecipYesNo_H_ */
#include <asn_internal.h>
