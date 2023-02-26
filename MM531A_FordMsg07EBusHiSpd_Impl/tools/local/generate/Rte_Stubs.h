/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H

#include "math_stubs.h"

/*** Extern Statements ***/

/* Inputs */
extern VAR(float32, AUTOMATIC) FordMsg07EBusHiSpd_Ip_CmpdSteerPinionAg;
extern VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC) FordMsg07EBusHiSpd_Ip_CmpdSteerPinionAgQlyFac;
extern VAR(Ford_StePw_B_Rq, AUTOMATIC) FordMsg07EBusHiSpd_Ip_FordVehSteerPwrReq;
extern VAR(float32, AUTOMATIC) FordMsg07EBusHiSpd_Ip_RelSteerPinionAg;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg07EBusHiSpd_Pim_SteerPinionAgCntrPrev;

/* Arguments and Returns */


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
