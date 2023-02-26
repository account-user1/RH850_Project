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
extern VAR(uint8, AUTOMATIC) FordMsg215BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg215BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg215BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg215BusHiSpd_Ip_FordTrlrBackupAssiEnad;

/* Outputs */
extern VAR(boolean, AUTOMATIC) FordMsg215BusHiSpd_Op_FordVehTrlrAidModReqVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg215BusHiSpd_Cal_FordMsg215BusHiSpdFordVehTrlrAidModReqVldNotRxdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg215BusHiSpd_Cal_FordMsg215BusHiSpdFordVehTrlrAidModReqVldRxdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg215BusHiSpd_Cal_FordMsg215BusHiSpdMissMsgFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg215BusHiSpd_Cal_FordMsg215BusHiSpdMissMsgPassdTiThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg215BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg215BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg215BusHiSpd_Pim_FordVehMsg215Miss;
extern VAR(uint32, AUTOMATIC) FordMsg215BusHiSpd_Pim_FordVehMsg215MissTmr;
extern VAR(uint32, AUTOMATIC) FordMsg215BusHiSpd_Pim_FordVehMsg215NotRxdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg215BusHiSpd_Pim_FordVehMsg215RxdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg215BusHiSpd_Pim_FordVehMsg215RxdTmr;
extern VAR(Ford_TrlrAidMde_D_Rq, AUTOMATIC) FordMsg215BusHiSpd_Pim_FordVehTrlrAidModReqPrev;
extern VAR(boolean, AUTOMATIC) FordMsg215BusHiSpd_Pim_FordVehTrlrAidModReqVldPrev;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg215BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg215BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg215BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg215BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg215BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg215BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg215BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg215BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
