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
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_ClrDiagcFlgProxy;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordAbsPrsnt;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordBrkOscnRednEnad;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordCanDtcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordEpsLifeCycMod;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordInvldMsgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordMfgDiagcInhb;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordMissMsgDiagcInhb;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordTqSteerCmpEnad;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Ip_FordTrlrBackupAssiEnad;
extern VAR(Ford_GearRvrse_D_Actl, AUTOMATIC) FordMsg202BusHiSpd_Ip_Ford_GearRvrse_D_Actl1;
extern VAR(Ford_VehVActlEng_D_Qf, AUTOMATIC) FordMsg202BusHiSpd_Ip_Ford_VehVActlEng_D_Qf1;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_Ford_VehVActlEng_No_Cnt;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Ip_Ford_VehVActlEng_No_Cs;
extern VAR(Ford_VehVTrlrAid_B_Avail, AUTOMATIC) FordMsg202BusHiSpd_Ip_Ford_VehVTrlrAid_B_Avail1;
extern VAR(uint16, AUTOMATIC) FordMsg202BusHiSpd_Ip_Ford_Veh_V_ActlEng;

/* Outputs */
extern VAR(Ford_GearRvrse_D_Actl, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehGearRvsSts;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehGearRvsStsRaw;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehGearRvsStsVld;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehSpdChksEngModl;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehSpdCntrEngModl;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehSpdEngModLoQlyVld;
extern VAR(float32, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehSpdEngModl;
extern VAR(uint16, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehSpdEngModlRaw;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehSpdEngModlVld;
extern VAR(Ford_VehVActlEng_D_Qf, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehSpdQlyFacEngModl;
extern VAR(Ford_VehVTrlrAid_B_Avail, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehTrlrAidAvl;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehTrlrAidAvlRaw;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Op_FordVehTrlrBackupAssiAvlVld;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModLoQlyVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModLoQlyVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModLoQlyVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModlVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModlVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsVldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsVldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdMissMsgPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd;
extern CONST(uint16, AUTOMATIC) FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd;

/* PIMs */
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Pim_ClrDiagcFlgProxyPrev;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Pim_FirstTranVldFlg;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsInvldPassdRefTi;
extern VAR(Ford_GearRvrse_D_Actl, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsPrev;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldPrev;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehMsg202Miss;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehMsg202Rxd;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdChksEngModlPrev;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdCntrEngModlPrev;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldPrev;
extern VAR(float32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModlPrev;
extern VAR(uint16, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModlRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModlVldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModlVldMissRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdEngModlVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi;
extern VAR(Ford_VehVActlEng_D_Qf, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehSpdQlyFacEngModlPrev;
extern VAR(Ford_VehVTrlrAid_B_Avail, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehTrlrAidAvlPrev;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehTrlrAidAvlRawPrev;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi;
extern VAR(boolean, AUTOMATIC) FordMsg202BusHiSpd_Pim_FordVehTrlrBackupAssiAvlVldPrev;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_MissMsgFaildRefTi;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Pim_MissMsgPassdRefTi;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordMsg202BusHiSpd_Srv_GetTiSpan100MicroSec32bit_TiSpan;
extern VAR(NtcNr1, AUTOMATIC) FordMsg202BusHiSpd_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) FordMsg202BusHiSpd_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) FordMsg202BusHiSpd_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) FordMsg202BusHiSpd_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) FordMsg202BusHiSpd_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_ClrDiagcFlgProxy_Val
# undef Rte_Read_ClrDiagcFlgProxy_Val
#endif
#define Rte_Read_ClrDiagcFlgProxy_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_ClrDiagcFlgProxy)

#ifdef Rte_Read_FordAbsPrsnt_Logl
# undef Rte_Read_FordAbsPrsnt_Logl
#endif
#define Rte_Read_FordAbsPrsnt_Logl(data) (*(data) = FordMsg202BusHiSpd_Ip_FordAbsPrsnt)

#ifdef Rte_Read_FordBrkOscnRednEnad_Logl
# undef Rte_Read_FordBrkOscnRednEnad_Logl
#endif
#define Rte_Read_FordBrkOscnRednEnad_Logl(data) (*(data) = FordMsg202BusHiSpd_Ip_FordBrkOscnRednEnad)

#ifdef Rte_Read_FordCanDtcInhb_Val
# undef Rte_Read_FordCanDtcInhb_Val
#endif
#define Rte_Read_FordCanDtcInhb_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_FordCanDtcInhb)

#ifdef Rte_Read_FordEpsLifeCycMod_Val
# undef Rte_Read_FordEpsLifeCycMod_Val
#endif
#define Rte_Read_FordEpsLifeCycMod_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_FordEpsLifeCycMod)

#ifdef Rte_Read_FordInvldMsgDiagcInhb_Val
# undef Rte_Read_FordInvldMsgDiagcInhb_Val
#endif
#define Rte_Read_FordInvldMsgDiagcInhb_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_FordInvldMsgDiagcInhb)

#ifdef Rte_Read_FordMfgDiagcInhb_Val
# undef Rte_Read_FordMfgDiagcInhb_Val
#endif
#define Rte_Read_FordMfgDiagcInhb_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_FordMfgDiagcInhb)

#ifdef Rte_Read_FordMissMsgDiagcInhb_Val
# undef Rte_Read_FordMissMsgDiagcInhb_Val
#endif
#define Rte_Read_FordMissMsgDiagcInhb_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_FordMissMsgDiagcInhb)

#ifdef Rte_Read_FordTqSteerCmpEnad_Logl
# undef Rte_Read_FordTqSteerCmpEnad_Logl
#endif
#define Rte_Read_FordTqSteerCmpEnad_Logl(data) (*(data) = FordMsg202BusHiSpd_Ip_FordTqSteerCmpEnad)

#ifdef Rte_Read_FordTrlrBackupAssiEnad_Logl
# undef Rte_Read_FordTrlrBackupAssiEnad_Logl
#endif
#define Rte_Read_FordTrlrBackupAssiEnad_Logl(data) (*(data) = FordMsg202BusHiSpd_Ip_FordTrlrBackupAssiEnad)

#ifdef Rte_Read_Ford_GearRvrse_D_Actl1_Val
# undef Rte_Read_Ford_GearRvrse_D_Actl1_Val
#endif
#define Rte_Read_Ford_GearRvrse_D_Actl1_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_Ford_GearRvrse_D_Actl1)

#ifdef Rte_Read_Ford_VehVActlEng_D_Qf1_Val
# undef Rte_Read_Ford_VehVActlEng_D_Qf1_Val
#endif
#define Rte_Read_Ford_VehVActlEng_D_Qf1_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_Ford_VehVActlEng_D_Qf1)

#ifdef Rte_Read_Ford_VehVActlEng_No_Cnt_Val
# undef Rte_Read_Ford_VehVActlEng_No_Cnt_Val
#endif
#define Rte_Read_Ford_VehVActlEng_No_Cnt_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_Ford_VehVActlEng_No_Cnt)

#ifdef Rte_Read_Ford_VehVActlEng_No_Cs_Val
# undef Rte_Read_Ford_VehVActlEng_No_Cs_Val
#endif
#define Rte_Read_Ford_VehVActlEng_No_Cs_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_Ford_VehVActlEng_No_Cs)

#ifdef Rte_Read_Ford_VehVTrlrAid_B_Avail1_Val
# undef Rte_Read_Ford_VehVTrlrAid_B_Avail1_Val
#endif
#define Rte_Read_Ford_VehVTrlrAid_B_Avail1_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_Ford_VehVTrlrAid_B_Avail1)

#ifdef Rte_Read_Ford_Veh_V_ActlEng_Val
# undef Rte_Read_Ford_Veh_V_ActlEng_Val
#endif
#define Rte_Read_Ford_Veh_V_ActlEng_Val(data) (*(data) = FordMsg202BusHiSpd_Ip_Ford_Veh_V_ActlEng)


/*** Output Stubs ***/

#ifdef Rte_Write_FordVehGearRvsSts_Val
# undef Rte_Write_FordVehGearRvsSts_Val
#endif
#define Rte_Write_FordVehGearRvsSts_Val(data) (FordMsg202BusHiSpd_Op_FordVehGearRvsSts = (data))

#ifdef Rte_Write_FordVehGearRvsStsRaw_Val
# undef Rte_Write_FordVehGearRvsStsRaw_Val
#endif
#define Rte_Write_FordVehGearRvsStsRaw_Val(data) (FordMsg202BusHiSpd_Op_FordVehGearRvsStsRaw = (data))

#ifdef Rte_Write_FordVehGearRvsStsVld_Logl
# undef Rte_Write_FordVehGearRvsStsVld_Logl
#endif
#define Rte_Write_FordVehGearRvsStsVld_Logl(data) (FordMsg202BusHiSpd_Op_FordVehGearRvsStsVld = (data))

#ifdef Rte_Write_FordVehSpdChksEngModl_Val
# undef Rte_Write_FordVehSpdChksEngModl_Val
#endif
#define Rte_Write_FordVehSpdChksEngModl_Val(data) (FordMsg202BusHiSpd_Op_FordVehSpdChksEngModl = (data))

#ifdef Rte_Write_FordVehSpdCntrEngModl_Val
# undef Rte_Write_FordVehSpdCntrEngModl_Val
#endif
#define Rte_Write_FordVehSpdCntrEngModl_Val(data) (FordMsg202BusHiSpd_Op_FordVehSpdCntrEngModl = (data))

#ifdef Rte_Write_FordVehSpdEngModLoQlyVld_Logl
# undef Rte_Write_FordVehSpdEngModLoQlyVld_Logl
#endif
#define Rte_Write_FordVehSpdEngModLoQlyVld_Logl(data) (FordMsg202BusHiSpd_Op_FordVehSpdEngModLoQlyVld = (data))

#ifdef Rte_Write_FordVehSpdEngModl_Val
# undef Rte_Write_FordVehSpdEngModl_Val
#endif
#define Rte_Write_FordVehSpdEngModl_Val(data) (FordMsg202BusHiSpd_Op_FordVehSpdEngModl = (data))

#ifdef Rte_Write_FordVehSpdEngModlRaw_Val
# undef Rte_Write_FordVehSpdEngModlRaw_Val
#endif
#define Rte_Write_FordVehSpdEngModlRaw_Val(data) (FordMsg202BusHiSpd_Op_FordVehSpdEngModlRaw = (data))

#ifdef Rte_Write_FordVehSpdEngModlVld_Logl
# undef Rte_Write_FordVehSpdEngModlVld_Logl
#endif
#define Rte_Write_FordVehSpdEngModlVld_Logl(data) (FordMsg202BusHiSpd_Op_FordVehSpdEngModlVld = (data))

#ifdef Rte_Write_FordVehSpdQlyFacEngModl_Val
# undef Rte_Write_FordVehSpdQlyFacEngModl_Val
#endif
#define Rte_Write_FordVehSpdQlyFacEngModl_Val(data) (FordMsg202BusHiSpd_Op_FordVehSpdQlyFacEngModl = (data))

#ifdef Rte_Write_FordVehTrlrAidAvl_Val
# undef Rte_Write_FordVehTrlrAidAvl_Val
#endif
#define Rte_Write_FordVehTrlrAidAvl_Val(data) (FordMsg202BusHiSpd_Op_FordVehTrlrAidAvl = (data))

#ifdef Rte_Write_FordVehTrlrAidAvlRaw_Val
# undef Rte_Write_FordVehTrlrAidAvlRaw_Val
#endif
#define Rte_Write_FordVehTrlrAidAvlRaw_Val(data) (FordMsg202BusHiSpd_Op_FordVehTrlrAidAvlRaw = (data))

#ifdef Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl
# undef Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl
#endif
#define Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl(data) (FordMsg202BusHiSpd_Op_FordVehTrlrBackupAssiAvlVld = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModLoQlyVldFaildThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModLoQlyVldMissThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModLoQlyVldPassdThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModlVldFaildThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdEngModlVldMissThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsInvldFaildThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsInvldPassdThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsVldFaildThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsVldMissThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdGearRvsStsVldPassdThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdMissMsgPassdThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd)

#ifdef Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val
# undef Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val
#endif
#define Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val() (FordMsg202BusHiSpd_Cal_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_ClrDiagcFlgProxyPrev
# undef Rte_Pim_ClrDiagcFlgProxyPrev
#endif
#define Rte_Pim_ClrDiagcFlgProxyPrev() (&FordMsg202BusHiSpd_Pim_ClrDiagcFlgProxyPrev)

#ifdef Rte_Pim_FirstTranVldFlg
# undef Rte_Pim_FirstTranVldFlg
#endif
#define Rte_Pim_FirstTranVldFlg() (&FordMsg202BusHiSpd_Pim_FirstTranVldFlg)

#ifdef Rte_Pim_FordVehGearRvsStsInvldFaildRefTi
# undef Rte_Pim_FordVehGearRvsStsInvldFaildRefTi
#endif
#define Rte_Pim_FordVehGearRvsStsInvldFaildRefTi() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsInvldFaildRefTi)

#ifdef Rte_Pim_FordVehGearRvsStsInvldPassdRefTi
# undef Rte_Pim_FordVehGearRvsStsInvldPassdRefTi
#endif
#define Rte_Pim_FordVehGearRvsStsInvldPassdRefTi() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsInvldPassdRefTi)

#ifdef Rte_Pim_FordVehGearRvsStsPrev
# undef Rte_Pim_FordVehGearRvsStsPrev
#endif
#define Rte_Pim_FordVehGearRvsStsPrev() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsPrev)

#ifdef Rte_Pim_FordVehGearRvsStsRawPrev
# undef Rte_Pim_FordVehGearRvsStsRawPrev
#endif
#define Rte_Pim_FordVehGearRvsStsRawPrev() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsRawPrev)

#ifdef Rte_Pim_FordVehGearRvsStsVldFaildRefTi
# undef Rte_Pim_FordVehGearRvsStsVldFaildRefTi
#endif
#define Rte_Pim_FordVehGearRvsStsVldFaildRefTi() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldFaildRefTi)

#ifdef Rte_Pim_FordVehGearRvsStsVldMissRefTi
# undef Rte_Pim_FordVehGearRvsStsVldMissRefTi
#endif
#define Rte_Pim_FordVehGearRvsStsVldMissRefTi() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldMissRefTi)

#ifdef Rte_Pim_FordVehGearRvsStsVldPassdRefTi
# undef Rte_Pim_FordVehGearRvsStsVldPassdRefTi
#endif
#define Rte_Pim_FordVehGearRvsStsVldPassdRefTi() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldPassdRefTi)

#ifdef Rte_Pim_FordVehGearRvsStsVldPrev
# undef Rte_Pim_FordVehGearRvsStsVldPrev
#endif
#define Rte_Pim_FordVehGearRvsStsVldPrev() (&FordMsg202BusHiSpd_Pim_FordVehGearRvsStsVldPrev)

#ifdef Rte_Pim_FordVehMsg202Miss
# undef Rte_Pim_FordVehMsg202Miss
#endif
#define Rte_Pim_FordVehMsg202Miss() (&FordMsg202BusHiSpd_Pim_FordVehMsg202Miss)

#ifdef Rte_Pim_FordVehMsg202Rxd
# undef Rte_Pim_FordVehMsg202Rxd
#endif
#define Rte_Pim_FordVehMsg202Rxd() (&FordMsg202BusHiSpd_Pim_FordVehMsg202Rxd)

#ifdef Rte_Pim_FordVehSpdChksEngModlPrev
# undef Rte_Pim_FordVehSpdChksEngModlPrev
#endif
#define Rte_Pim_FordVehSpdChksEngModlPrev() (&FordMsg202BusHiSpd_Pim_FordVehSpdChksEngModlPrev)

#ifdef Rte_Pim_FordVehSpdCntrEngModlPrev
# undef Rte_Pim_FordVehSpdCntrEngModlPrev
#endif
#define Rte_Pim_FordVehSpdCntrEngModlPrev() (&FordMsg202BusHiSpd_Pim_FordVehSpdCntrEngModlPrev)

#ifdef Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi
# undef Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi
#endif
#define Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldFaildRefTi)

#ifdef Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi
# undef Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi
#endif
#define Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldMissRefTi)

#ifdef Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi
# undef Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi
#endif
#define Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldPassdRefTi)

#ifdef Rte_Pim_FordVehSpdEngModLoQlyVldPrev
# undef Rte_Pim_FordVehSpdEngModLoQlyVldPrev
#endif
#define Rte_Pim_FordVehSpdEngModLoQlyVldPrev() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModLoQlyVldPrev)

#ifdef Rte_Pim_FordVehSpdEngModlPrev
# undef Rte_Pim_FordVehSpdEngModlPrev
#endif
#define Rte_Pim_FordVehSpdEngModlPrev() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModlPrev)

#ifdef Rte_Pim_FordVehSpdEngModlRawPrev
# undef Rte_Pim_FordVehSpdEngModlRawPrev
#endif
#define Rte_Pim_FordVehSpdEngModlRawPrev() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModlRawPrev)

#ifdef Rte_Pim_FordVehSpdEngModlVldFaildRefTi
# undef Rte_Pim_FordVehSpdEngModlVldFaildRefTi
#endif
#define Rte_Pim_FordVehSpdEngModlVldFaildRefTi() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModlVldFaildRefTi)

#ifdef Rte_Pim_FordVehSpdEngModlVldMissRefTi
# undef Rte_Pim_FordVehSpdEngModlVldMissRefTi
#endif
#define Rte_Pim_FordVehSpdEngModlVldMissRefTi() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModlVldMissRefTi)

#ifdef Rte_Pim_FordVehSpdEngModlVldPrev
# undef Rte_Pim_FordVehSpdEngModlVldPrev
#endif
#define Rte_Pim_FordVehSpdEngModlVldPrev() (&FordMsg202BusHiSpd_Pim_FordVehSpdEngModlVldPrev)

#ifdef Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi
# undef Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi
#endif
#define Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi() (&FordMsg202BusHiSpd_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi)

#ifdef Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi
# undef Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi
#endif
#define Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi() (&FordMsg202BusHiSpd_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi)

#ifdef Rte_Pim_FordVehSpdQlyFacEngModlPrev
# undef Rte_Pim_FordVehSpdQlyFacEngModlPrev
#endif
#define Rte_Pim_FordVehSpdQlyFacEngModlPrev() (&FordMsg202BusHiSpd_Pim_FordVehSpdQlyFacEngModlPrev)

#ifdef Rte_Pim_FordVehTrlrAidAvlPrev
# undef Rte_Pim_FordVehTrlrAidAvlPrev
#endif
#define Rte_Pim_FordVehTrlrAidAvlPrev() (&FordMsg202BusHiSpd_Pim_FordVehTrlrAidAvlPrev)

#ifdef Rte_Pim_FordVehTrlrAidAvlRawPrev
# undef Rte_Pim_FordVehTrlrAidAvlRawPrev
#endif
#define Rte_Pim_FordVehTrlrAidAvlRawPrev() (&FordMsg202BusHiSpd_Pim_FordVehTrlrAidAvlRawPrev)

#ifdef Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi
# undef Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi
#endif
#define Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi() (&FordMsg202BusHiSpd_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi)

#ifdef Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi
# undef Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi
#endif
#define Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi() (&FordMsg202BusHiSpd_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi)

#ifdef Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev
# undef Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev
#endif
#define Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev() (&FordMsg202BusHiSpd_Pim_FordVehTrlrBackupAssiAvlVldPrev)

#ifdef Rte_Pim_MissMsgFaildRefTi
# undef Rte_Pim_MissMsgFaildRefTi
#endif
#define Rte_Pim_MissMsgFaildRefTi() (&FordMsg202BusHiSpd_Pim_MissMsgFaildRefTi)

#ifdef Rte_Pim_MissMsgPassdRefTi
# undef Rte_Pim_MissMsgPassdRefTi
#endif
#define Rte_Pim_MissMsgPassdRefTi() (&FordMsg202BusHiSpd_Pim_MissMsgPassdRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
