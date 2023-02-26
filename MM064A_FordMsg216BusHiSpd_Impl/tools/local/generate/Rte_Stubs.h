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
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Ip_FordBrkOscnRednEnad;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Ip_FordTqSteerCmpEnad;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Ip_FordTrlrBackUpAssiEnad;
extern VAR(Ford_WhlDirFl_D_Actl, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlDirFl_D_Actl1;
extern VAR(Ford_WhlDirFr_D_Actl, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlDirFr_D_Actl1;
extern VAR(Ford_WhlDirRl_D_Actl, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlDirRl_D_Actl1;
extern VAR(Ford_WhlDirRr_D_Actl, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlDirRr_D_Actl1;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlRotatFl_No_Cnt;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlRotatFr_No_Cnt;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlRotatRl_No_Cnt;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Ip_Ford_WhlRotatRr_No_Cnt;

/* Outputs */
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehFrntLeWhlCntrDirVld;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehFrntLeWhlDirRaw;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehFrntLeWhlRollgCntr;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehFrntRiWhlCntrDirVld;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehFrntRiWhlDirRaw;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehFrntRiWhlRollgCntr;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehReLeWhlCntrDirVld;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehReLeWhlDirRaw;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehReLeWhlRollgCntr;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehReRiWhlCntrDirVld;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehReRiWhlDirRaw;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Op_FordVehReRiWhlRollgCntr;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdMissMsgFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdMissMsgPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdReLeWhlVldMissMsgThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd;
extern CONST(uint16, AUTOMATIC) FordMsg216BusHiSpd_Cal_FordMsg216BusHiSpdReRiWhlVldMissMsgThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehFrntLeWhlCntrDirVldPrev;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehFrntLeWhlDirRawPrev;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehFrntLeWhlRollgCntrPrev;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehFrntRiWhlCntrDirVldPrev;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehFrntRiWhlDirRawPrev;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehFrntRiWhlRollgCntrPrev;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehMsg064Miss;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehReLeWhlCntrDirVldPrev;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehReLeWhlDirRawPrev;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehReLeWhlRollgCntrPrev;
extern VAR(boolean, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehReRiWhlCntrDirVldPrev;
extern VAR(FordVehWhlDirRaw1, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehReRiWhlDirRawPrev;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Pim_FordVehReRiWhlRollgCntrPrev;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_FrntLeWhlCntrDirVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_FrntLeWhlCntrDirVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_FrntLeWhlVldMissMsgRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_FrntRiWhlCntrDirVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_FrntRiWhlCntrDirVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_FrntRiWhlVldMissMsgRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_MissMsgPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_ReLeWhlCntrDirVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_ReLeWhlCntrDirVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_ReLeWhlVldMissMsgRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_ReRiWhlCntrDirVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_ReRiWhlCntrDirVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Pim_ReRiWhlVldMissMsgRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg216BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg216BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg216BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg216BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg216BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg216BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
