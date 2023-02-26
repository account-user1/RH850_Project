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
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordBrkOscnRednEnad;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordClrDiagcFlgProxy;
extern VAR(uint8, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordEvasSteerAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordLaneCentrAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordLaneKeepAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordPullDriftCmpEnad;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordTqSteerCmpEnad;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordTrfcJamAssiEnad;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Ip_FordTrlrBackUpAssiEnad;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehLatACmpd;
extern VAR(uint16, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehLatACmpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehLatACmpdVld;
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehLgtACmpd;
extern VAR(uint16, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehLgtACmpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehLgtACmpdVld;
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehSpdOverGnd;
extern VAR(uint16, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehSpdOverGndRaw;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehSpdOverGndVld;
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehYawRateCmpd;
extern VAR(uint16, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehYawRateCmpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Op_FordVehYawRateCmpdVld;

/* Calibrations */
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdCanDtcInhbThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdLatACmpdVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdLgtACmpdVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdMissMsgFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdMissMsgPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdOverGndInvldSigFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdOverGndInvldSigPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehLatACmpdVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehLatACmpdVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehSpdOverGndVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg077BusHiSpd_Cal_FordMsg077BusHiSpdYawRateCmpdVldMissThd;

/* PIMs */
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_CanDtcInhbRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Pim_DiagcClrProxyFlgPrev;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLatACmpdInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLatACmpdInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLatACmpdPrev;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLatACmpdVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLatACmpdVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLatACmpdVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLatACmpdVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLgtACmpdInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLgtACmpdInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLgtACmpdPrev;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLgtACmpdVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLgtACmpdVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLgtACmpdVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehLgtACmpdVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehMsg77Miss;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehSpdOverGndInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehSpdOverGndInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehSpdOverGndPrev;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehSpdOverGndVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehSpdOverGndVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehSpdOverGndVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehSpdOverGndVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehYawRateCmpdInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehYawRateCmpdInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehYawRateCmpdPrev;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehYawRateCmpdVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehYawRateCmpdVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehYawRateCmpdVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg077BusHiSpd_Pim_FordVehYawRateCmpdVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg077BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg077BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg077BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg077BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg077BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg077BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
