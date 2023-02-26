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
extern VAR(uint8, AUTOMATIC) FordMsg2FDBusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg2FDBusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg2FDBusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg2FDBusHiSpd_Ip_FordEvasSteerAssiEnad;

/* Outputs */
extern VAR(boolean, AUTOMATIC) FordMsg2FDBusHiSpd_Op_FordVehEvasSteerAssiReqVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg2FDBusHiSpd_Cal_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldNotRxdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg2FDBusHiSpd_Cal_FordMsg2FDBusHiSpdFordVehEvasSteerAssiReqVldRxdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg2FDBusHiSpd_Cal_FordMsg2FDBusHiSpdMissMsgFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg2FDBusHiSpd_Cal_FordMsg2FDBusHiSpdMissMsgPassdTiThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FirstTranVldFlg;
extern VAR(Ford_EsaOn_B_Rq, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FordVehEvasSteerAssiReqPrev;
extern VAR(boolean, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FordVehEvasSteerAssiReqVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FordVehMsg2FDMiss;
extern VAR(uint32, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FordVehMsg2FDMissTmr;
extern VAR(uint32, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FordVehMsg2FDNotRxdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FordVehMsg2FDRxdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg2FDBusHiSpd_Pim_FordVehMsg2FDRxdTmr;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg2FDBusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
