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
extern VAR(uint8, AUTOMATIC) FordMsg091BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg091BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint16, AUTOMATIC) FordMsg091BusHiSpd_Ip_Ford_VehYaw_W_Actl;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg091BusHiSpd_Op_FordVehYawRate;
extern VAR(uint16, AUTOMATIC) FordMsg091BusHiSpd_Op_FordVehYawRateRaw;
extern VAR(boolean, AUTOMATIC) FordMsg091BusHiSpd_Op_FordVehYawRateRawVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg091BusHiSpd_Cal_FordMsg091BusHiSpdInvldMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg091BusHiSpd_Cal_FordMsg091BusHiSpdInvldMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg091BusHiSpd_Cal_FordMsg091BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg091BusHiSpd_Cal_FordMsg091BusHiSpdMissMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg091BusHiSpd_Cal_FordMsg091BusHiSpdYawRateRawVldMissFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg091BusHiSpd_Cal_FordMsg091BusHiSpdYawRateRawVldSigFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg091BusHiSpd_Cal_FordMsg091BusHiSpdYawRateRawVldSigPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg091BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg091BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg091BusHiSpd_Pim_FordVehMsg091Miss;
extern VAR(float32, AUTOMATIC) FordMsg091BusHiSpd_Pim_FordVehYawRatePrev;
extern VAR(uint16, AUTOMATIC) FordMsg091BusHiSpd_Pim_FordVehYawRateRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Pim_FordVehYawRateRawVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Pim_FordVehYawRateRawVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Pim_FordVehYawRateRawVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg091BusHiSpd_Pim_FordVehYawRateRawVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Pim_InvldMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Pim_InvldMsgPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg091BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg091BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg091BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg091BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg091BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg091BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
