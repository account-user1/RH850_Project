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
extern VAR(uint8, AUTOMATIC) FordMsg07DBusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Ip_FordBrkOscnRednEnad;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg07DBusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Ip_FordTrlrBackUpAssiEnad;
extern VAR(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Ip_Ford_BrkTot_Tq_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Ip_Ford_VehVertComp_A_Actl;

/* Outputs */
extern VAR(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Op_FordVehActBrkTqRaw;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Op_FordVehBrkTqVld;
extern VAR(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Op_FordVehVertACmpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Op_FordVehVertAVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdFordVehActBrkTqInvldThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdFordVehActBrkTqVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdMissMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Cal_FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg07DBusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FirstTranVldFlg;
extern VAR(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehActBrkTqRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehActBrkTqSigInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehActBrkTqSigInvldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehActBrkTqVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehActBrkTqVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehBrkTqVldMissMsgRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehBrkTqVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehMsg07DMiss;
extern VAR(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehVertACmpdRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehVertACmpdSigInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehVertACmpdSigInvldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehVertACmpdSigVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehVertACmpdSigVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehVertAVldMissMsgRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg07DBusHiSpd_Pim_FordVehVertAVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg07DBusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg07DBusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg07DBusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg07DBusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg07DBusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg07DBusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
