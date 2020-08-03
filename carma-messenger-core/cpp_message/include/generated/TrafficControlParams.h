/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_CARMA2.asn1"
 * 	`asn1c -pdu=MessageFrame -fcompound-names -gen-PER`
 */

#ifndef	_TrafficControlParams_H_
#define	_TrafficControlParams_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TrafficControlSchedule.h"
#include <BOOLEAN.h>
#include "TrafficControlDetail.h"
#include "TrafficControlVehClass.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrafficControlParams */
typedef struct TrafficControlParams {
	struct TrafficControlParams__vclasses {
		A_SEQUENCE_OF(TrafficControlVehClass_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} vclasses;
	TrafficControlSchedule_t	 schedule;
	BOOLEAN_t	 regulatory;
	TrafficControlDetail_t	 detail;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficControlParams_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficControlParams;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficControlParams_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficControlParams_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficControlParams_H_ */
#include <asn_internal.h>
