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


/*** Extern Statements ***/

/* Inputs */
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordAbsPrsnt;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordActvNiblCtrlEnad;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordBrkOscnRednEnad;
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordInvldMsgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordMfgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordMissMsgDiagcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordTqSteerCmpEnad;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Ip_FordTrlrBackupAssiEnad;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Ip_Ford_WhlFl_W_Meas;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Ip_Ford_WhlFr_W_Meas;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Ip_Ford_WhlRl_W_Meas;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Ip_Ford_WhlRr_W_Meas;

/* Outputs */
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehFrntLeWhlSpd;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehFrntLeWhlSpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehFrntLeWhlSpdVld;
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehFrntRiWhlSpd;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehFrntRiWhlSpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehFrntRiWhlSpdVld;
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehReLeWhlSpd;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehReLeWhlSpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehReLeWhlSpdVld;
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehReRiWhlSpd;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehReRiWhlSpdRaw;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Op_FordVehReRiWhlSpdVld;

/* Calibrations */
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdMissMsgFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdMissMsgPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlVldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlVldFaildThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlVldMissThd;
extern CONST(u16p0, AUTOMATIC) FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlVldPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdPrev;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdPrev;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehMsg217Miss;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehMsg217Rxd;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdPrev;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdInvldPassdRefTi;
extern VAR(float32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdPrev;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg217BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg217BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg217BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg217BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg217BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg217BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordAbsPrsnt_Logl
# undef Rte_Read_FordAbsPrsnt_Logl
#endif
#define Rte_Read_FordAbsPrsnt_Logl(data) (*(data) = FordMsg217BusHiSpd_Ip_FordAbsPrsnt)

#ifdef Rte_Read_FordActvNiblCtrlEnad_Logl
# undef Rte_Read_FordActvNiblCtrlEnad_Logl
#endif
#define Rte_Read_FordActvNiblCtrlEnad_Logl(data) (*(data) = FordMsg217BusHiSpd_Ip_FordActvNiblCtrlEnad)

#ifdef Rte_Read_FordBrkOscnRednEnad_Logl
# undef Rte_Read_FordBrkOscnRednEnad_Logl
#endif
#define Rte_Read_FordBrkOscnRednEnad_Logl(data) (*(data) = FordMsg217BusHiSpd_Ip_FordBrkOscnRednEnad)

#ifdef Rte_Read_FordCanDtcInhb_Val
# undef Rte_Read_FordCanDtcInhb_Val
#endif
#define Rte_Read_FordCanDtcInhb_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordInvldMsgDiagcInhb_Val
# undef Rte_Read_FordInvldMsgDiagcInhb_Val
#endif
#define Rte_Read_FordInvldMsgDiagcInhb_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_FordInvldMsgDiagcInhb)

#ifdef Rte_Read_FordMfgDiagcInhb_Val
# undef Rte_Read_FordMfgDiagcInhb_Val
#endif
#define Rte_Read_FordMfgDiagcInhb_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_FordMfgDiagcInhb)

#ifdef Rte_Read_FordMissMsgDiagcInhb_Val
# undef Rte_Read_FordMissMsgDiagcInhb_Val
#endif
#define Rte_Read_FordMissMsgDiagcInhb_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_FordMissMsgDiagcInhb)

#ifdef Rte_Read_FordTqSteerCmpEnad_Logl
# undef Rte_Read_FordTqSteerCmpEnad_Logl
#endif
#define Rte_Read_FordTqSteerCmpEnad_Logl(data) (*(data) = FordMsg217BusHiSpd_Ip_FordTqSteerCmpEnad)

#ifdef Rte_Read_FordTrlrBackupAssiEnad_Logl
# undef Rte_Read_FordTrlrBackupAssiEnad_Logl
#endif
#define Rte_Read_FordTrlrBackupAssiEnad_Logl(data) (*(data) = FordMsg217BusHiSpd_Ip_FordTrlrBackupAssiEnad)

#ifdef Rte_Read_Ford_WhlFl_W_Meas_Val
# undef Rte_Read_Ford_WhlFl_W_Meas_Val
#endif
#define Rte_Read_Ford_WhlFl_W_Meas_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_Ford_WhlFl_W_Meas)

#ifdef Rte_Read_Ford_WhlFr_W_Meas_Val
# undef Rte_Read_Ford_WhlFr_W_Meas_Val
#endif
#define Rte_Read_Ford_WhlFr_W_Meas_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_Ford_WhlFr_W_Meas)

#ifdef Rte_Read_Ford_WhlRl_W_Meas_Val
# undef Rte_Read_Ford_WhlRl_W_Meas_Val
#endif
#define Rte_Read_Ford_WhlRl_W_Meas_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_Ford_WhlRl_W_Meas)

#ifdef Rte_Read_Ford_WhlRr_W_Meas_Val
# undef Rte_Read_Ford_WhlRr_W_Meas_Val
#endif
#define Rte_Read_Ford_WhlRr_W_Meas_Val(data) (*(data) = FordMsg217BusHiSpd_Ip_Ford_WhlRr_W_Meas)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehFrntLeWhlSpd_Val
# undef Rte_Write_FordVehFrntLeWhlSpd_Val
#endif
#define Rte_Write_FordVehFrntLeWhlSpd_Val(data) (FordMsg217BusHiSpd_Op_FordVehFrntLeWhlSpd = (data))

#ifdef Rte_Write_FordVehFrntLeWhlSpdRaw_Val
# undef Rte_Write_FordVehFrntLeWhlSpdRaw_Val
#endif
#define Rte_Write_FordVehFrntLeWhlSpdRaw_Val(data) (FordMsg217BusHiSpd_Op_FordVehFrntLeWhlSpdRaw = (data))

#ifdef Rte_Write_FordVehFrntLeWhlSpdVld_Logl
# undef Rte_Write_FordVehFrntLeWhlSpdVld_Logl
#endif
#define Rte_Write_FordVehFrntLeWhlSpdVld_Logl(data) (FordMsg217BusHiSpd_Op_FordVehFrntLeWhlSpdVld = (data))

#ifdef Rte_Write_FordVehFrntRiWhlSpd_Val
# undef Rte_Write_FordVehFrntRiWhlSpd_Val
#endif
#define Rte_Write_FordVehFrntRiWhlSpd_Val(data) (FordMsg217BusHiSpd_Op_FordVehFrntRiWhlSpd = (data))

#ifdef Rte_Write_FordVehFrntRiWhlSpdRaw_Val
# undef Rte_Write_FordVehFrntRiWhlSpdRaw_Val
#endif
#define Rte_Write_FordVehFrntRiWhlSpdRaw_Val(data) (FordMsg217BusHiSpd_Op_FordVehFrntRiWhlSpdRaw = (data))

#ifdef Rte_Write_FordVehFrntRiWhlSpdVld_Logl
# undef Rte_Write_FordVehFrntRiWhlSpdVld_Logl
#endif
#define Rte_Write_FordVehFrntRiWhlSpdVld_Logl(data) (FordMsg217BusHiSpd_Op_FordVehFrntRiWhlSpdVld = (data))

#ifdef Rte_Write_FordVehReLeWhlSpd_Val
# undef Rte_Write_FordVehReLeWhlSpd_Val
#endif
#define Rte_Write_FordVehReLeWhlSpd_Val(data) (FordMsg217BusHiSpd_Op_FordVehReLeWhlSpd = (data))

#ifdef Rte_Write_FordVehReLeWhlSpdRaw_Val
# undef Rte_Write_FordVehReLeWhlSpdRaw_Val
#endif
#define Rte_Write_FordVehReLeWhlSpdRaw_Val(data) (FordMsg217BusHiSpd_Op_FordVehReLeWhlSpdRaw = (data))

#ifdef Rte_Write_FordVehReLeWhlSpdVld_Logl
# undef Rte_Write_FordVehReLeWhlSpdVld_Logl
#endif
#define Rte_Write_FordVehReLeWhlSpdVld_Logl(data) (FordMsg217BusHiSpd_Op_FordVehReLeWhlSpdVld = (data))

#ifdef Rte_Write_FordVehReRiWhlSpd_Val
# undef Rte_Write_FordVehReRiWhlSpd_Val
#endif
#define Rte_Write_FordVehReRiWhlSpd_Val(data) (FordMsg217BusHiSpd_Op_FordVehReRiWhlSpd = (data))

#ifdef Rte_Write_FordVehReRiWhlSpdRaw_Val
# undef Rte_Write_FordVehReRiWhlSpdRaw_Val
#endif
#define Rte_Write_FordVehReRiWhlSpdRaw_Val(data) (FordMsg217BusHiSpd_Op_FordVehReRiWhlSpdRaw = (data))

#ifdef Rte_Write_FordVehReRiWhlSpdVld_Logl
# undef Rte_Write_FordVehReRiWhlSpdVld_Logl
#endif
#define Rte_Write_FordVehReRiWhlSpdVld_Logl(data) (FordMsg217BusHiSpd_Op_FordVehReRiWhlSpdVld = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlVldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlVldMissThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntLeWhlVldPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlVldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlVldMissThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdFrntRiWhlVldPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdMissMsgPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlVldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlVldMissThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReLeWhlVldPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlVldFaildThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlVldMissThd)

#ifdef Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val
# undef Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val() (FordMsg217BusHiSpd_Cal_FordMsg217BusHiSpdReRiWhlVldPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg217BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi
# undef Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi
# undef Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdPrev
# undef Rte_Pim_FordVehFrntLeWhlSpdPrev
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdPrev() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdPrev)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdRawPrev
# undef Rte_Pim_FordVehFrntLeWhlSpdRawPrev
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdRawPrev() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdRawPrev)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi
# undef Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldFaildRefTi)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi
# undef Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldMissRefTi)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi
# undef Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldPassdRefTi)

#ifdef Rte_Pim_FordVehFrntLeWhlSpdVldPrev
# undef Rte_Pim_FordVehFrntLeWhlSpdVldPrev
#endif
#define Rte_Pim_FordVehFrntLeWhlSpdVldPrev() (&FordMsg217BusHiSpd_Pim_FordVehFrntLeWhlSpdVldPrev)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi
# undef Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi
# undef Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdPrev
# undef Rte_Pim_FordVehFrntRiWhlSpdPrev
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdPrev() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdPrev)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdRawPrev
# undef Rte_Pim_FordVehFrntRiWhlSpdRawPrev
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdRawPrev() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdRawPrev)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi
# undef Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldFaildRefTi)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi
# undef Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldMissRefTi)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi
# undef Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldPassdRefTi)

#ifdef Rte_Pim_FordVehFrntRiWhlSpdVldPrev
# undef Rte_Pim_FordVehFrntRiWhlSpdVldPrev
#endif
#define Rte_Pim_FordVehFrntRiWhlSpdVldPrev() (&FordMsg217BusHiSpd_Pim_FordVehFrntRiWhlSpdVldPrev)

#ifdef Rte_Pim_FordVehMsg217Miss
# undef Rte_Pim_FordVehMsg217Miss
#endif
#define Rte_Pim_FordVehMsg217Miss() (&FordMsg217BusHiSpd_Pim_FordVehMsg217Miss)

#ifdef Rte_Pim_FordVehMsg217Rxd
# undef Rte_Pim_FordVehMsg217Rxd
#endif
#define Rte_Pim_FordVehMsg217Rxd() (&FordMsg217BusHiSpd_Pim_FordVehMsg217Rxd)

#ifdef Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi
# undef Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi
#endif
#define Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdInvldFaildRefTi)

#ifdef Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi
# undef Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi
#endif
#define Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdInvldPassdRefTi)

#ifdef Rte_Pim_FordVehReLeWhlSpdPrev
# undef Rte_Pim_FordVehReLeWhlSpdPrev
#endif
#define Rte_Pim_FordVehReLeWhlSpdPrev() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdPrev)

#ifdef Rte_Pim_FordVehReLeWhlSpdRawPrev
# undef Rte_Pim_FordVehReLeWhlSpdRawPrev
#endif
#define Rte_Pim_FordVehReLeWhlSpdRawPrev() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdRawPrev)

#ifdef Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi
# undef Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi
#endif
#define Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldFaildRefTi)

#ifdef Rte_Pim_FordVehReLeWhlSpdVldMissRefTi
# undef Rte_Pim_FordVehReLeWhlSpdVldMissRefTi
#endif
#define Rte_Pim_FordVehReLeWhlSpdVldMissRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldMissRefTi)

#ifdef Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi
# undef Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi
#endif
#define Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldPassdRefTi)

#ifdef Rte_Pim_FordVehReLeWhlSpdVldPrev
# undef Rte_Pim_FordVehReLeWhlSpdVldPrev
#endif
#define Rte_Pim_FordVehReLeWhlSpdVldPrev() (&FordMsg217BusHiSpd_Pim_FordVehReLeWhlSpdVldPrev)

#ifdef Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi
# undef Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi
#endif
#define Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdInvldFaildRefTi)

#ifdef Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi
# undef Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi
#endif
#define Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdInvldPassdRefTi)

#ifdef Rte_Pim_FordVehReRiWhlSpdPrev
# undef Rte_Pim_FordVehReRiWhlSpdPrev
#endif
#define Rte_Pim_FordVehReRiWhlSpdPrev() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdPrev)

#ifdef Rte_Pim_FordVehReRiWhlSpdRawPrev
# undef Rte_Pim_FordVehReRiWhlSpdRawPrev
#endif
#define Rte_Pim_FordVehReRiWhlSpdRawPrev() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdRawPrev)

#ifdef Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi
# undef Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi
#endif
#define Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldFaildRefTi)

#ifdef Rte_Pim_FordVehReRiWhlSpdVldMissRefTi
# undef Rte_Pim_FordVehReRiWhlSpdVldMissRefTi
#endif
#define Rte_Pim_FordVehReRiWhlSpdVldMissRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldMissRefTi)

#ifdef Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi
# undef Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi
#endif
#define Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldPassdRefTi)

#ifdef Rte_Pim_FordVehReRiWhlSpdVldPrev
# undef Rte_Pim_FordVehReRiWhlSpdVldPrev
#endif
#define Rte_Pim_FordVehReRiWhlSpdVldPrev() (&FordMsg217BusHiSpd_Pim_FordVehReRiWhlSpdVldPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg217BusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg217BusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
