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
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Ip_FordAbsPrsnt;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_FordInvldMsgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_FordMfgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_FordMissMsgDiagcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Ip_FordTrlrBackupAssiEnad;
extern VAR(Ford_LsmcBrkDecel_D_Stat, AUTOMATIC) FordMsg415BusHiSpd_Ip_Ford_LsmcBrkDecel_D_Stat1;
extern VAR(Ford_VehVActlBrk_D_Qf, AUTOMATIC) FordMsg415BusHiSpd_Ip_Ford_VehVActlBrk_D_Qf1;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_Ford_VehVActlBrk_No_Cnt;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Ip_Ford_VehVActlBrk_No_Cs;
extern VAR(uint16, AUTOMATIC) FordMsg415BusHiSpd_Ip_Ford_Veh_V_ActlBrk;

/* Outputs */
extern VAR(Ford_LsmcBrkDecel_D_Stat, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehLoSpdMtnCtrlBrkSprtSts;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehLoSpdMtnCtrlBrkSprtStsRaw;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehLoSpdMtnCtrlBrkSprtVld;
extern VAR(float32, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehSpdBrkModl;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehSpdBrkModlLoQlyVld;
extern VAR(uint16, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehSpdBrkModlRaw;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehSpdBrkModlVld;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehSpdChksBrkModl;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehSpdCntrBrkModl;
extern VAR(Ford_VehVActlBrk_D_Qf, AUTOMATIC) FordMsg415BusHiSpd_Op_FordVehSpdQlyFacBrkModl;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkSprtVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkSprtVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdChksBrkModlInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdChksBrkModlInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdMissMsgFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdMissMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd;

/* PIMs */
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkModlLoQlyVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkModlLoQlyVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkModlLoQlyVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkModlVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkModlVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkModlVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkSprtVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_BrkSprtVldPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_ChksBrkModlInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_ChksBrkModlInvldPassdRefTi;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_CntrBrkModlInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_CntrBrkModlInvldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(Ford_LsmcBrkDecel_D_Stat, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehMsg415Miss;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehMsg415Rxd;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlLoQlyVldPrev;
extern VAR(float32, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlPrev;
extern VAR(uint16, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlRawPrev;
extern VAR(boolean, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlVldPrev;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehSpdChksBrkModlPrev;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehSpdCntrBrkModlPrev;
extern VAR(Ford_VehVActlBrk_D_Qf, AUTOMATIC) FordMsg415BusHiSpd_Pim_FordVehSpdQlyFacBrkModlPrev;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_MissMsgPassdRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_QlyFacBrkModlInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Pim_QlyFacBrkModlInvldPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg415BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg415BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg415BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg415BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg415BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg415BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordAbsPrsnt_Logl
# undef Rte_Read_FordAbsPrsnt_Logl
#endif
#define Rte_Read_FordAbsPrsnt_Logl(data) (*(data) = FordMsg415BusHiSpd_Ip_FordAbsPrsnt)

#ifdef Rte_Read_FordCanDtcInhb_Val
# undef Rte_Read_FordCanDtcInhb_Val
#endif
#define Rte_Read_FordCanDtcInhb_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordInvldMsgDiagcInhb_Val
# undef Rte_Read_FordInvldMsgDiagcInhb_Val
#endif
#define Rte_Read_FordInvldMsgDiagcInhb_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_FordInvldMsgDiagcInhb)

#ifdef Rte_Read_FordMfgDiagcInhb_Val
# undef Rte_Read_FordMfgDiagcInhb_Val
#endif
#define Rte_Read_FordMfgDiagcInhb_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_FordMfgDiagcInhb)

#ifdef Rte_Read_FordMissMsgDiagcInhb_Val
# undef Rte_Read_FordMissMsgDiagcInhb_Val
#endif
#define Rte_Read_FordMissMsgDiagcInhb_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_FordMissMsgDiagcInhb)

#ifdef Rte_Read_FordTrlrBackupAssiEnad_Logl
# undef Rte_Read_FordTrlrBackupAssiEnad_Logl
#endif
#define Rte_Read_FordTrlrBackupAssiEnad_Logl(data) (*(data) = FordMsg415BusHiSpd_Ip_FordTrlrBackupAssiEnad)

#ifdef Rte_Read_Ford_LsmcBrkDecel_D_Stat1_Val
# undef Rte_Read_Ford_LsmcBrkDecel_D_Stat1_Val
#endif
#define Rte_Read_Ford_LsmcBrkDecel_D_Stat1_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_Ford_LsmcBrkDecel_D_Stat1)

#ifdef Rte_Read_Ford_VehVActlBrk_D_Qf1_Val
# undef Rte_Read_Ford_VehVActlBrk_D_Qf1_Val
#endif
#define Rte_Read_Ford_VehVActlBrk_D_Qf1_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_Ford_VehVActlBrk_D_Qf1)

#ifdef Rte_Read_Ford_VehVActlBrk_No_Cnt_Val
# undef Rte_Read_Ford_VehVActlBrk_No_Cnt_Val
#endif
#define Rte_Read_Ford_VehVActlBrk_No_Cnt_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_Ford_VehVActlBrk_No_Cnt)

#ifdef Rte_Read_Ford_VehVActlBrk_No_Cs_Val
# undef Rte_Read_Ford_VehVActlBrk_No_Cs_Val
#endif
#define Rte_Read_Ford_VehVActlBrk_No_Cs_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_Ford_VehVActlBrk_No_Cs)

#ifdef Rte_Read_Ford_Veh_V_ActlBrk_Val
# undef Rte_Read_Ford_Veh_V_ActlBrk_Val
#endif
#define Rte_Read_Ford_Veh_V_ActlBrk_Val(data) (*(data) = FordMsg415BusHiSpd_Ip_Ford_Veh_V_ActlBrk)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehLoSpdMtnCtrlBrkSprtSts_Val
# undef Rte_Write_FordVehLoSpdMtnCtrlBrkSprtSts_Val
#endif
#define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtSts_Val(data) (FordMsg415BusHiSpd_Op_FordVehLoSpdMtnCtrlBrkSprtSts = (data))

#ifdef Rte_Write_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val
# undef Rte_Write_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val
#endif
#define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(data) (FordMsg415BusHiSpd_Op_FordVehLoSpdMtnCtrlBrkSprtStsRaw = (data))

#ifdef Rte_Write_FordVehLoSpdMtnCtrlBrkSprtVld_Logl
# undef Rte_Write_FordVehLoSpdMtnCtrlBrkSprtVld_Logl
#endif
#define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(data) (FordMsg415BusHiSpd_Op_FordVehLoSpdMtnCtrlBrkSprtVld = (data))

#ifdef Rte_Write_FordVehSpdBrkModl_Val
# undef Rte_Write_FordVehSpdBrkModl_Val
#endif
#define Rte_Write_FordVehSpdBrkModl_Val(data) (FordMsg415BusHiSpd_Op_FordVehSpdBrkModl = (data))

#ifdef Rte_Write_FordVehSpdBrkModlLoQlyVld_Logl
# undef Rte_Write_FordVehSpdBrkModlLoQlyVld_Logl
#endif
#define Rte_Write_FordVehSpdBrkModlLoQlyVld_Logl(data) (FordMsg415BusHiSpd_Op_FordVehSpdBrkModlLoQlyVld = (data))

#ifdef Rte_Write_FordVehSpdBrkModlRaw_Val
# undef Rte_Write_FordVehSpdBrkModlRaw_Val
#endif
#define Rte_Write_FordVehSpdBrkModlRaw_Val(data) (FordMsg415BusHiSpd_Op_FordVehSpdBrkModlRaw = (data))

#ifdef Rte_Write_FordVehSpdBrkModlVld_Logl
# undef Rte_Write_FordVehSpdBrkModlVld_Logl
#endif
#define Rte_Write_FordVehSpdBrkModlVld_Logl(data) (FordMsg415BusHiSpd_Op_FordVehSpdBrkModlVld = (data))

#ifdef Rte_Write_FordVehSpdChksBrkModl_Val
# undef Rte_Write_FordVehSpdChksBrkModl_Val
#endif
#define Rte_Write_FordVehSpdChksBrkModl_Val(data) (FordMsg415BusHiSpd_Op_FordVehSpdChksBrkModl = (data))

#ifdef Rte_Write_FordVehSpdCntrBrkModl_Val
# undef Rte_Write_FordVehSpdCntrBrkModl_Val
#endif
#define Rte_Write_FordVehSpdCntrBrkModl_Val(data) (FordMsg415BusHiSpd_Op_FordVehSpdCntrBrkModl = (data))

#ifdef Rte_Write_FordVehSpdQlyFacBrkModl_Val
# undef Rte_Write_FordVehSpdQlyFacBrkModl_Val
#endif
#define Rte_Write_FordVehSpdQlyFacBrkModl_Val(data) (FordMsg415BusHiSpd_Op_FordVehSpdQlyFacBrkModl = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkModlVldFaildThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkModlVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkModlVldFaildThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlVldFaildThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkModlVldMissThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkModlVldMissThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkModlVldMissThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlVldMissThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkModlVldPassdThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkModlVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkModlVldPassdThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkModlVldPassdThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkSprtVldMissThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkSprtVldMissThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkSprtVldMissThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkSprtVldMissThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdBrkSprtVldPassdThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdChksBrkModlInvldFaildThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdChksBrkModlInvldPassdThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdMissMsgFaildThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdMissMsgFaildThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdMissMsgFaildThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdMissMsgFaildThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdMissMsgPassdThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdMissMsgPassdThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd)

#ifdef Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val
# undef Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val
#endif
#define Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val() (FordMsg415BusHiSpd_Cal_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_BrkModlLoQlyVldFaildRefTi
# undef Rte_Pim_BrkModlLoQlyVldFaildRefTi
#endif
#define Rte_Pim_BrkModlLoQlyVldFaildRefTi() (&FordMsg415BusHiSpd_Pim_BrkModlLoQlyVldFaildRefTi)

#ifdef Rte_Pim_BrkModlLoQlyVldMissRefTi
# undef Rte_Pim_BrkModlLoQlyVldMissRefTi
#endif
#define Rte_Pim_BrkModlLoQlyVldMissRefTi() (&FordMsg415BusHiSpd_Pim_BrkModlLoQlyVldMissRefTi)

#ifdef Rte_Pim_BrkModlLoQlyVldPassdRefTi
# undef Rte_Pim_BrkModlLoQlyVldPassdRefTi
#endif
#define Rte_Pim_BrkModlLoQlyVldPassdRefTi() (&FordMsg415BusHiSpd_Pim_BrkModlLoQlyVldPassdRefTi)

#ifdef Rte_Pim_BrkModlVldFaildRefTi
# undef Rte_Pim_BrkModlVldFaildRefTi
#endif
#define Rte_Pim_BrkModlVldFaildRefTi() (&FordMsg415BusHiSpd_Pim_BrkModlVldFaildRefTi)

#ifdef Rte_Pim_BrkModlVldMissRefTi
# undef Rte_Pim_BrkModlVldMissRefTi
#endif
#define Rte_Pim_BrkModlVldMissRefTi() (&FordMsg415BusHiSpd_Pim_BrkModlVldMissRefTi)

#ifdef Rte_Pim_BrkModlVldPassdRefTi
# undef Rte_Pim_BrkModlVldPassdRefTi
#endif
#define Rte_Pim_BrkModlVldPassdRefTi() (&FordMsg415BusHiSpd_Pim_BrkModlVldPassdRefTi)

#ifdef Rte_Pim_BrkSprtVldMissRefTi
# undef Rte_Pim_BrkSprtVldMissRefTi
#endif
#define Rte_Pim_BrkSprtVldMissRefTi() (&FordMsg415BusHiSpd_Pim_BrkSprtVldMissRefTi)

#ifdef Rte_Pim_BrkSprtVldPassdRefTi
# undef Rte_Pim_BrkSprtVldPassdRefTi
#endif
#define Rte_Pim_BrkSprtVldPassdRefTi() (&FordMsg415BusHiSpd_Pim_BrkSprtVldPassdRefTi)

#ifdef Rte_Pim_ChksBrkModlInvldFaildRefTi
# undef Rte_Pim_ChksBrkModlInvldFaildRefTi
#endif
#define Rte_Pim_ChksBrkModlInvldFaildRefTi() (&FordMsg415BusHiSpd_Pim_ChksBrkModlInvldFaildRefTi)

#ifdef Rte_Pim_ChksBrkModlInvldPassdRefTi
# undef Rte_Pim_ChksBrkModlInvldPassdRefTi
#endif
#define Rte_Pim_ChksBrkModlInvldPassdRefTi() (&FordMsg415BusHiSpd_Pim_ChksBrkModlInvldPassdRefTi)

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg415BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_CntrBrkModlInvldFaildRefTi
# undef Rte_Pim_CntrBrkModlInvldFaildRefTi
#endif
#define Rte_Pim_CntrBrkModlInvldFaildRefTi() (&FordMsg415BusHiSpd_Pim_CntrBrkModlInvldFaildRefTi)

#ifdef Rte_Pim_CntrBrkModlInvldPassdRefTi
# undef Rte_Pim_CntrBrkModlInvldPassdRefTi
#endif
#define Rte_Pim_CntrBrkModlInvldPassdRefTi() (&FordMsg415BusHiSpd_Pim_CntrBrkModlInvldPassdRefTi)

#ifdef Rte_Pim_FirstTranVldFlg
# undef Rte_Pim_FirstTranVldFlg
#endif
#define Rte_Pim_FirstTranVldFlg() (&FordMsg415BusHiSpd_Pim_FirstTranVldFlg)

#ifdef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev
# undef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev
#endif
#define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev() (&FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev)

#ifdef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev
# undef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev
#endif
#define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev() (&FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev)

#ifdef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg
# undef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg
#endif
#define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg() (&FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg)

#ifdef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev
# undef Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev
#endif
#define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev() (&FordMsg415BusHiSpd_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev)

#ifdef Rte_Pim_FordVehMsg415Miss
# undef Rte_Pim_FordVehMsg415Miss
#endif
#define Rte_Pim_FordVehMsg415Miss() (&FordMsg415BusHiSpd_Pim_FordVehMsg415Miss)

#ifdef Rte_Pim_FordVehMsg415Rxd
# undef Rte_Pim_FordVehMsg415Rxd
#endif
#define Rte_Pim_FordVehMsg415Rxd() (&FordMsg415BusHiSpd_Pim_FordVehMsg415Rxd)

#ifdef Rte_Pim_FordVehSpdBrkModlLoQlyVldPrev
# undef Rte_Pim_FordVehSpdBrkModlLoQlyVldPrev
#endif
#define Rte_Pim_FordVehSpdBrkModlLoQlyVldPrev() (&FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlLoQlyVldPrev)

#ifdef Rte_Pim_FordVehSpdBrkModlPrev
# undef Rte_Pim_FordVehSpdBrkModlPrev
#endif
#define Rte_Pim_FordVehSpdBrkModlPrev() (&FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlPrev)

#ifdef Rte_Pim_FordVehSpdBrkModlRawPrev
# undef Rte_Pim_FordVehSpdBrkModlRawPrev
#endif
#define Rte_Pim_FordVehSpdBrkModlRawPrev() (&FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlRawPrev)

#ifdef Rte_Pim_FordVehSpdBrkModlVldPrev
# undef Rte_Pim_FordVehSpdBrkModlVldPrev
#endif
#define Rte_Pim_FordVehSpdBrkModlVldPrev() (&FordMsg415BusHiSpd_Pim_FordVehSpdBrkModlVldPrev)

#ifdef Rte_Pim_FordVehSpdChksBrkModlPrev
# undef Rte_Pim_FordVehSpdChksBrkModlPrev
#endif
#define Rte_Pim_FordVehSpdChksBrkModlPrev() (&FordMsg415BusHiSpd_Pim_FordVehSpdChksBrkModlPrev)

#ifdef Rte_Pim_FordVehSpdCntrBrkModlPrev
# undef Rte_Pim_FordVehSpdCntrBrkModlPrev
#endif
#define Rte_Pim_FordVehSpdCntrBrkModlPrev() (&FordMsg415BusHiSpd_Pim_FordVehSpdCntrBrkModlPrev)

#ifdef Rte_Pim_FordVehSpdQlyFacBrkModlPrev
# undef Rte_Pim_FordVehSpdQlyFacBrkModlPrev
#endif
#define Rte_Pim_FordVehSpdQlyFacBrkModlPrev() (&FordMsg415BusHiSpd_Pim_FordVehSpdQlyFacBrkModlPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg415BusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg415BusHiSpd_Pim_MissMsgPassdRefTi)

#ifdef Rte_Pim_QlyFacBrkModlInvldFaildRefTi
# undef Rte_Pim_QlyFacBrkModlInvldFaildRefTi
#endif
#define Rte_Pim_QlyFacBrkModlInvldFaildRefTi() (&FordMsg415BusHiSpd_Pim_QlyFacBrkModlInvldFaildRefTi)

#ifdef Rte_Pim_QlyFacBrkModlInvldPassdRefTi
# undef Rte_Pim_QlyFacBrkModlInvldPassdRefTi
#endif
#define Rte_Pim_QlyFacBrkModlInvldPassdRefTi() (&FordMsg415BusHiSpd_Pim_QlyFacBrkModlInvldPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
