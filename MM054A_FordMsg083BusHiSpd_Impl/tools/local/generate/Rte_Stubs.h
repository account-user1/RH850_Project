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
extern VAR(uint8, AUTOMATIC) FordMsg083BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg083BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg083BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg083BusHiSpd_Ip_FordLaneDetnWarnEnad;
extern VAR(Ford_TurnLghtSwtch_D_Stat, AUTOMATIC) FordMsg083BusHiSpd_Ip_Ford_TurnLghtSwtch_D_Stat1;

/* Outputs */
extern VAR(Ford_TurnLghtSwtch_D_Stat, AUTOMATIC) FordMsg083BusHiSpd_Op_FordVehTurnSigSwtStsRaw;
extern VAR(boolean, AUTOMATIC) FordMsg083BusHiSpd_Op_FordVehTurnSigVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg083BusHiSpd_Cal_FordMsg083BusHiSpdFordVehTurnSigVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg083BusHiSpd_Cal_FordMsg083BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg083BusHiSpd_Cal_FordMsg083BusHiSpdMissMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg083BusHiSpd_Cal_FordMsg083BusHiSpdVehTurnSigVldMissMsgThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg083BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg083BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg083BusHiSpd_Pim_FordVehMsg083Miss;
extern VAR(Ford_TurnLghtSwtch_D_Stat, AUTOMATIC) FordMsg083BusHiSpd_Pim_FordVehTurnSigSwtStsRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg083BusHiSpd_Pim_FordVehTurnSigVldMissMsgRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg083BusHiSpd_Pim_FordVehTurnSigVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg083BusHiSpd_Pim_FordVehTurnSigVldRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg083BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg083BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg083BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg083BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg083BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg083BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg083BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg083BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg083BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg083BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
