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
extern VAR(uint8, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(boolean, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_FordEvasSteerAssiEnad;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_Ford_CmbbObjDistLat_L_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_Ford_CmbbObjDistLong_L_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_Ford_CmbbObjRelLat_V_Actl;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Ip_Ford_CmbbObjRelLong_V_Actl;

/* Outputs */
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehCllsnMtgtnByBrkgLatDstRaw;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehCllsnMtgtnByBrkgLgtDstRaw;
extern VAR(Ford_CmbbObjConfdnc_D_Stat, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw;
extern VAR(Ford_CmbbObjClass_D_Stat, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehCllsnMtgtnByBrkgObjTypClassnRaw;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehCllsnMtgtnByBrkgRelLatVelRaw;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehCllsnMtgtnByBrkgRelLgtVelRaw;
extern VAR(uint8, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehCllsnMtgtnByBrkgTiToCllsnRaw;
extern VAR(Ford_EsaEnbl_D2_Rq, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehEvasSteerAssiEnadReqRaw;
extern VAR(boolean, AUTOMATIC) FordMsg3D7BusHiSpd_Op_FordVehEvasSteerAssiImgProcrModlAVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdLatDstInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdLatDstInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdLatDstRawVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdLgtDstInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdLgtDstInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdLgtDstRawVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdMissMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Cal_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev;
extern VAR(Ford_CmbbObjConfdnc_D_Stat, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev;
extern VAR(Ford_CmbbObjClass_D_Stat, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi;
extern VAR(uint8, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev;
extern VAR(Ford_EsaEnbl_D2_Rq, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehEvasSteerAssiEnadReqRawPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_FordVehMsg3D7Miss;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_ImgProcrModlAVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_LatDstRawVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_LgtDstRawVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_MissMsgPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_RelLatVelRawVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_RelLgtVelRawVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Pim_TiToCllsnRawVldFaildRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg3D7BusHiSpd_Srv_SetNtcSts_Return;


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
