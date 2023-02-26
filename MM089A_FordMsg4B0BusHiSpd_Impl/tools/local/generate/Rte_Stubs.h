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
extern VAR(uint8, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_FordBrkOscnRednEnad;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_FordEvasSteerAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_FordLaneCentrAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_FordTqSteerCmpEnad;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_LaneDetnWarnEnad;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_LaneKeepAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Ip_TrfcJamAssiEnad;

/* Outputs */
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Op_FordVehYawStabyVld;

/* Calibrations */
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdCanDtcInhbTiThd;
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdMsgFltNtcDiagcTiThd;
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdMsgFltTiThd;
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdMsgMissNtcDiagcTiThd;
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdMsgMissTiThd;
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdMsgRxdNtcDiagcTiThd;
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdMsgVldNtcDiagcTiThd;
extern CONST(u16p0, AUTOMATIC) FordMsg4B0BusHiSpd_Cal_FordMsg4B0BusHiSpdMsgVldTiThd;

/* PIMs */
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_CanDtcInhbRefTi;
extern VAR(uint8, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_FordMsg4B0Miss;
extern VAR(uint16, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_FordVehYawStabyRawPrev;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_FordVehYawStabyVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_IniVehYawStabyInvld;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgFltNtcDiagcRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgFltRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgMissNtcDiagcRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgNoDataExistNtcDiagcRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgNoDataExistRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgNotRxdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgRxdNtcDiagcRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgVldNtcDiagcRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Pim_MsgVldRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg4B0BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
