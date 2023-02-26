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
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Ip_FordTrlrBackupAssiEnad;

/* Outputs */
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrHitchAgVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrHitchRateVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrTarVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_FordVehTrlrTrakgStVld;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Op_TrlrAidStsThreePrsntInt;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdDiagMsgMissTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgRateInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdHitchAgRateInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdPrsntFlgMsgMissTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdRcvrDiagMsgMissTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdRcvrPrsntFlgTmrThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrackStInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrackStInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchAgVldInvldMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchAgVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchRateVldInvldMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrHitchRateVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrHitchAgVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrHitchRateVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrTarVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrRcvrTrackStVldThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTarVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTrackStVldInvldMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg459BusHiSpd_Cal_FordMsg459BusHiSpdTrlrTrackStVldMissMsgThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehMsg459Miss;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehMsg459MissTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehMsg459RxdTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStFaildTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrAidTrackStPassdTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgFaildTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgPassdTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgRateFaildTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgRatePassdTmr;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchAgVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrHitchRateVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrTarVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_FordVehTrlrTrackStVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg459BusHiSpd_Pim_TrlrAidStsThreePrsntIntPrev;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg459BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg459BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
