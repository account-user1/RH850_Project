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
extern VAR(uint8, AUTOMATIC) FordMsg230BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg230BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(Ford_GearLvrPos_D_Actl, AUTOMATIC) FordMsg230BusHiSpd_Ip_Ford_GearLvrPos_D_Actl1;

/* Outputs */
extern VAR(Ford_GearLvrPos_D_Actl, AUTOMATIC) FordMsg230BusHiSpd_Op_FordVehGearLvrPosn;
extern VAR(boolean, AUTOMATIC) FordMsg230BusHiSpd_Op_FordVehGearLvrPosnVldInt;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg230BusHiSpd_Cal_FordMsg230BusHiSpdFordVehGearLvrPosnFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg230BusHiSpd_Cal_FordMsg230BusHiSpdFordVehGearLvrPosnPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg230BusHiSpd_Cal_FordMsg230BusHiSpdGearLvrPosnMissTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg230BusHiSpd_Cal_FordMsg230BusHiSpdInvldSigFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg230BusHiSpd_Cal_FordMsg230BusHiSpdInvldSigPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg230BusHiSpd_Cal_FordMsg230BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg230BusHiSpd_Cal_FordMsg230BusHiSpdMissMsgPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg230BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg230BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Pim_FordVehGearLvrPosnInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Pim_FordVehGearLvrPosnInvldPassdRefTi;
extern VAR(Ford_GearLvrPos_D_Actl, AUTOMATIC) FordMsg230BusHiSpd_Pim_FordVehGearLvrPosnPrev;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Pim_FordVehGearLvrPosnVldFaildRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg230BusHiSpd_Pim_FordVehGearLvrPosnVldIntPrev;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Pim_FordVehGearLvrPosnVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg230BusHiSpd_Pim_FordVehMsg230Miss;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Pim_GearLvrPosnVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg230BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg230BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg230BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg230BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg230BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg230BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
