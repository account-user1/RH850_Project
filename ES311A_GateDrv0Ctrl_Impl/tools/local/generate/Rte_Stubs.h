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
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Ip_Ivtr1PwrDiscnctFltSts;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Ip_PhaOnTiMeasdA;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Ip_PhaOnTiMeasdB;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Ip_PhaOnTiMeasdC;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Ip_PhaOnTiSumA;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Ip_PhaOnTiSumB;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Ip_PhaOnTiSumC;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Ip_StrtUpSt;
extern VAR(SysSt1, AUTOMATIC) GateDrv0Ctrl_Ip_SysSt;

/* Outputs */
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Op_DiagcStsIvtr1Inactv;
extern VAR(IvtrFetFltPha1, AUTOMATIC) GateDrv0Ctrl_Op_IvtrFetFltPha;
extern VAR(IvtrFetFltTyp1, AUTOMATIC) GateDrv0Ctrl_Op_IvtrFetFltTyp;
extern VAR(float32, AUTOMATIC) GateDrv0Ctrl_Op_MotDrvErrA;
extern VAR(float32, AUTOMATIC) GateDrv0Ctrl_Op_MotDrvErrB;
extern VAR(float32, AUTOMATIC) GateDrv0Ctrl_Op_MotDrvErrC;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Op_MotDrvr0IninTestCmpl;

/* Calibrations */
extern CONST(float32, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlErrFilFrq;
extern CONST(uint32, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlErrOffs;
extern CONST(uint32, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlErrThd;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x050FailStep;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x050PassStep;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x051FailStep;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x051PassStep;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x055FailStep;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x055PassStep;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg2WrVal;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg3WrVal;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg4WrVal;
extern CONST(uint16, AUTOMATIC) GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg7WrVal;

/* PIMs */
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0Diag0Val;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0Diag1Val;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0Diag2Val;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0StsVal;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0CfgCnt;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0CfgSecAtmpt;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0Diag0Val;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0Diag1Val;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0Diag2Val;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0OffStChkIdx;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0OffStChkSecAtmpt;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0OffStCnt;
extern VAR(FilLpRec1, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0PhaAFilLp;
extern VAR(FilLpRec1, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0PhaBFilLp;
extern VAR(FilLpRec1, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0PhaCFilLp;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0PhaOnTiSumAPrev;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0PhaOnTiSumBPrev;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0PhaOnTiSumCPrev;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0SpiErrSecAtmpt;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0SpiTrsmErrCntr;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0St;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0StsVal;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0VrfyRes0Val;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Pim_GateDrv0VrfyRes1Val;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Pim_Ivtr0BootstrpSplyFltPrmVal;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Pim_Ivtr0GenericFltPrmVal;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Pim_Ivtr0InactvSts;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Pim_Ivtr0OffStChkCmpl;
extern VAR(IvtrFetFltPha1, AUTOMATIC) GateDrv0Ctrl_Pim_IvtrFetFltPhaDataStore;
extern VAR(IvtrFetFltTyp1, AUTOMATIC) GateDrv0Ctrl_Pim_IvtrFetFltTypDataStore;

/* IRVs */
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Irv_GateDrv0Ena;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Irv_GateDrv0PhaReasbnDiagcEna;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Irv_Ivtr0PhyFltInpActv;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) GateDrv0Ctrl_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) GateDrv0Ctrl_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) GateDrv0Ctrl_Srv_GetNtcQlfrSts_Return;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Srv_IoHwAb_GetGpioMotDrvr0Diag_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GateDrv0Ctrl_Srv_IoHwAb_GetGpioMotDrvr0Diag_Return;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Srv_IoHwAb_SetGpioGateDrv0Rst_PinSt;
extern VAR(boolean, AUTOMATIC) GateDrv0Ctrl_Srv_IoHwAb_SetGpioSysFlt2A_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) GateDrv0Ctrl_Srv_IoHwAb_SetGpioSysFlt2A_Return;
extern VAR(NtcNr1, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcSts_Return;
extern VAR(NtcNr1, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) GateDrv0Ctrl_Srv_SetNtcStsAndSnpshtData_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_Ivtr1PwrDiscnctFltSts_Logl
# undef Rte_Read_Ivtr1PwrDiscnctFltSts_Logl
#else
#error Rte_Read_Ivtr1PwrDiscnctFltSts_Logl is missing
#endif
#define Rte_Read_Ivtr1PwrDiscnctFltSts_Logl(data) (*(data) = GateDrv0Ctrl_Ip_Ivtr1PwrDiscnctFltSts)

#ifdef Rte_Read_PhaOnTiMeasdA_Val
# undef Rte_Read_PhaOnTiMeasdA_Val
#else
#error Rte_Read_PhaOnTiMeasdA_Val is missing
#endif
#define Rte_Read_PhaOnTiMeasdA_Val(data) (*(data) = GateDrv0Ctrl_Ip_PhaOnTiMeasdA)

#ifdef Rte_Read_PhaOnTiMeasdB_Val
# undef Rte_Read_PhaOnTiMeasdB_Val
#else
#error Rte_Read_PhaOnTiMeasdB_Val is missing
#endif
#define Rte_Read_PhaOnTiMeasdB_Val(data) (*(data) = GateDrv0Ctrl_Ip_PhaOnTiMeasdB)

#ifdef Rte_Read_PhaOnTiMeasdC_Val
# undef Rte_Read_PhaOnTiMeasdC_Val
#else
#error Rte_Read_PhaOnTiMeasdC_Val is missing
#endif
#define Rte_Read_PhaOnTiMeasdC_Val(data) (*(data) = GateDrv0Ctrl_Ip_PhaOnTiMeasdC)

#ifdef Rte_Read_PhaOnTiSumA_Val
# undef Rte_Read_PhaOnTiSumA_Val
#else
#error Rte_Read_PhaOnTiSumA_Val is missing
#endif
#define Rte_Read_PhaOnTiSumA_Val(data) (*(data) = GateDrv0Ctrl_Ip_PhaOnTiSumA)

#ifdef Rte_Read_PhaOnTiSumB_Val
# undef Rte_Read_PhaOnTiSumB_Val
#else
#error Rte_Read_PhaOnTiSumB_Val is missing
#endif
#define Rte_Read_PhaOnTiSumB_Val(data) (*(data) = GateDrv0Ctrl_Ip_PhaOnTiSumB)

#ifdef Rte_Read_PhaOnTiSumC_Val
# undef Rte_Read_PhaOnTiSumC_Val
#else
#error Rte_Read_PhaOnTiSumC_Val is missing
#endif
#define Rte_Read_PhaOnTiSumC_Val(data) (*(data) = GateDrv0Ctrl_Ip_PhaOnTiSumC)

#ifdef Rte_Read_StrtUpSt_Val
# undef Rte_Read_StrtUpSt_Val
#else
#error Rte_Read_StrtUpSt_Val is missing
#endif
#define Rte_Read_StrtUpSt_Val(data) (*(data) = GateDrv0Ctrl_Ip_StrtUpSt)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#else
#error Rte_Read_SysSt_Val is missing
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = GateDrv0Ctrl_Ip_SysSt)


/*** Output Stubs ***/

#ifdef Rte_Write_DiagcStsIvtr1Inactv_Logl
# undef Rte_Write_DiagcStsIvtr1Inactv_Logl
#else
#error Rte_Write_DiagcStsIvtr1Inactv_Logl is missing
#endif
#define Rte_Write_DiagcStsIvtr1Inactv_Logl(data) (GateDrv0Ctrl_Op_DiagcStsIvtr1Inactv = (data))

#ifdef Rte_Write_IvtrFetFltPha_Val
# undef Rte_Write_IvtrFetFltPha_Val
#else
#error Rte_Write_IvtrFetFltPha_Val is missing
#endif
#define Rte_Write_IvtrFetFltPha_Val(data) (GateDrv0Ctrl_Op_IvtrFetFltPha = (data))

#ifdef Rte_Write_IvtrFetFltTyp_Val
# undef Rte_Write_IvtrFetFltTyp_Val
#else
#error Rte_Write_IvtrFetFltTyp_Val is missing
#endif
#define Rte_Write_IvtrFetFltTyp_Val(data) (GateDrv0Ctrl_Op_IvtrFetFltTyp = (data))

#ifdef Rte_Write_MotDrvErrA_Val
# undef Rte_Write_MotDrvErrA_Val
#else
#error Rte_Write_MotDrvErrA_Val is missing
#endif
#define Rte_Write_MotDrvErrA_Val(data) (GateDrv0Ctrl_Op_MotDrvErrA = (data))

#ifdef Rte_Write_MotDrvErrB_Val
# undef Rte_Write_MotDrvErrB_Val
#else
#error Rte_Write_MotDrvErrB_Val is missing
#endif
#define Rte_Write_MotDrvErrB_Val(data) (GateDrv0Ctrl_Op_MotDrvErrB = (data))

#ifdef Rte_Write_MotDrvErrC_Val
# undef Rte_Write_MotDrvErrC_Val
#else
#error Rte_Write_MotDrvErrC_Val is missing
#endif
#define Rte_Write_MotDrvErrC_Val(data) (GateDrv0Ctrl_Op_MotDrvErrC = (data))

#ifdef Rte_Write_MotDrvr0IninTestCmpl_Logl
# undef Rte_Write_MotDrvr0IninTestCmpl_Logl
#else
#error Rte_Write_MotDrvr0IninTestCmpl_Logl is missing
#endif
#define Rte_Write_MotDrvr0IninTestCmpl_Logl(data) (GateDrv0Ctrl_Op_MotDrvr0IninTestCmpl = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_GateDrv0CtrlErrFilFrq_Val
# undef Rte_Prm_GateDrv0CtrlErrFilFrq_Val
#else
#error Rte_Prm_GateDrv0CtrlErrFilFrq_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlErrFilFrq_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlErrFilFrq)

#ifdef Rte_Prm_GateDrv0CtrlErrOffs_Val
# undef Rte_Prm_GateDrv0CtrlErrOffs_Val
#else
#error Rte_Prm_GateDrv0CtrlErrOffs_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlErrOffs_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlErrOffs)

#ifdef Rte_Prm_GateDrv0CtrlErrThd_Val
# undef Rte_Prm_GateDrv0CtrlErrThd_Val
#else
#error Rte_Prm_GateDrv0CtrlErrThd_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlErrThd_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlErrThd)

#ifdef Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val
# undef Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val
#else
#error Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x050FailStep)

#ifdef Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val
# undef Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val
#else
#error Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x050PassStep)

#ifdef Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val
# undef Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val
#else
#error Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x051FailStep)

#ifdef Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val
# undef Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val
#else
#error Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x051PassStep)

#ifdef Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val
# undef Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val
#else
#error Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x055FailStep)

#ifdef Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val
# undef Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val
#else
#error Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlNtcNr0x055PassStep)

#ifdef Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val
# undef Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val
#else
#error Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg2WrVal)

#ifdef Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val
# undef Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val
#else
#error Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg3WrVal)

#ifdef Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val
# undef Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val
#else
#error Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg4WrVal)

#ifdef Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val
# undef Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val
#else
#error Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val is missing
#endif
#define Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val() (GateDrv0Ctrl_Cal_GateDrv0CtrlUnit0Cfg7WrVal)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val
# undef Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0Diag0Val)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val
# undef Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0Diag1Val)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val
# undef Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0Diag2Val)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx
# undef Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp
# undef Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp
# undef Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp
# undef Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0StsVal
# undef Rte_Pim_dGateDrv0CtrlGateDrv0StsVal
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0StsVal is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0StsVal() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0StsVal)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val
# undef Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val)

#ifdef Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val
# undef Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val
#else
#error Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val is missing
#endif
#define Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val() (&GateDrv0Ctrl_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val)

#ifdef Rte_Pim_GateDrv0CfgCnt
# undef Rte_Pim_GateDrv0CfgCnt
#else
#error Rte_Pim_GateDrv0CfgCnt is missing
#endif
#define Rte_Pim_GateDrv0CfgCnt() (&GateDrv0Ctrl_Pim_GateDrv0CfgCnt)

#ifdef Rte_Pim_GateDrv0CfgSecAtmpt
# undef Rte_Pim_GateDrv0CfgSecAtmpt
#else
#error Rte_Pim_GateDrv0CfgSecAtmpt is missing
#endif
#define Rte_Pim_GateDrv0CfgSecAtmpt() (&GateDrv0Ctrl_Pim_GateDrv0CfgSecAtmpt)

#ifdef Rte_Pim_GateDrv0Diag0Val
# undef Rte_Pim_GateDrv0Diag0Val
#else
#error Rte_Pim_GateDrv0Diag0Val is missing
#endif
#define Rte_Pim_GateDrv0Diag0Val() (&GateDrv0Ctrl_Pim_GateDrv0Diag0Val)

#ifdef Rte_Pim_GateDrv0Diag1Val
# undef Rte_Pim_GateDrv0Diag1Val
#else
#error Rte_Pim_GateDrv0Diag1Val is missing
#endif
#define Rte_Pim_GateDrv0Diag1Val() (&GateDrv0Ctrl_Pim_GateDrv0Diag1Val)

#ifdef Rte_Pim_GateDrv0Diag2Val
# undef Rte_Pim_GateDrv0Diag2Val
#else
#error Rte_Pim_GateDrv0Diag2Val is missing
#endif
#define Rte_Pim_GateDrv0Diag2Val() (&GateDrv0Ctrl_Pim_GateDrv0Diag2Val)

#ifdef Rte_Pim_GateDrv0OffStChkIdx
# undef Rte_Pim_GateDrv0OffStChkIdx
#else
#error Rte_Pim_GateDrv0OffStChkIdx is missing
#endif
#define Rte_Pim_GateDrv0OffStChkIdx() (&GateDrv0Ctrl_Pim_GateDrv0OffStChkIdx)

#ifdef Rte_Pim_GateDrv0OffStChkSecAtmpt
# undef Rte_Pim_GateDrv0OffStChkSecAtmpt
#else
#error Rte_Pim_GateDrv0OffStChkSecAtmpt is missing
#endif
#define Rte_Pim_GateDrv0OffStChkSecAtmpt() (&GateDrv0Ctrl_Pim_GateDrv0OffStChkSecAtmpt)

#ifdef Rte_Pim_GateDrv0OffStCnt
# undef Rte_Pim_GateDrv0OffStCnt
#else
#error Rte_Pim_GateDrv0OffStCnt is missing
#endif
#define Rte_Pim_GateDrv0OffStCnt() (&GateDrv0Ctrl_Pim_GateDrv0OffStCnt)

#ifdef Rte_Pim_GateDrv0PhaAFilLp
# undef Rte_Pim_GateDrv0PhaAFilLp
#else
#error Rte_Pim_GateDrv0PhaAFilLp is missing
#endif
#define Rte_Pim_GateDrv0PhaAFilLp() (&GateDrv0Ctrl_Pim_GateDrv0PhaAFilLp)

#ifdef Rte_Pim_GateDrv0PhaBFilLp
# undef Rte_Pim_GateDrv0PhaBFilLp
#else
#error Rte_Pim_GateDrv0PhaBFilLp is missing
#endif
#define Rte_Pim_GateDrv0PhaBFilLp() (&GateDrv0Ctrl_Pim_GateDrv0PhaBFilLp)

#ifdef Rte_Pim_GateDrv0PhaCFilLp
# undef Rte_Pim_GateDrv0PhaCFilLp
#else
#error Rte_Pim_GateDrv0PhaCFilLp is missing
#endif
#define Rte_Pim_GateDrv0PhaCFilLp() (&GateDrv0Ctrl_Pim_GateDrv0PhaCFilLp)

#ifdef Rte_Pim_GateDrv0PhaOnTiSumAPrev
# undef Rte_Pim_GateDrv0PhaOnTiSumAPrev
#else
#error Rte_Pim_GateDrv0PhaOnTiSumAPrev is missing
#endif
#define Rte_Pim_GateDrv0PhaOnTiSumAPrev() (&GateDrv0Ctrl_Pim_GateDrv0PhaOnTiSumAPrev)

#ifdef Rte_Pim_GateDrv0PhaOnTiSumBPrev
# undef Rte_Pim_GateDrv0PhaOnTiSumBPrev
#else
#error Rte_Pim_GateDrv0PhaOnTiSumBPrev is missing
#endif
#define Rte_Pim_GateDrv0PhaOnTiSumBPrev() (&GateDrv0Ctrl_Pim_GateDrv0PhaOnTiSumBPrev)

#ifdef Rte_Pim_GateDrv0PhaOnTiSumCPrev
# undef Rte_Pim_GateDrv0PhaOnTiSumCPrev
#else
#error Rte_Pim_GateDrv0PhaOnTiSumCPrev is missing
#endif
#define Rte_Pim_GateDrv0PhaOnTiSumCPrev() (&GateDrv0Ctrl_Pim_GateDrv0PhaOnTiSumCPrev)

#ifdef Rte_Pim_GateDrv0SpiErrSecAtmpt
# undef Rte_Pim_GateDrv0SpiErrSecAtmpt
#else
#error Rte_Pim_GateDrv0SpiErrSecAtmpt is missing
#endif
#define Rte_Pim_GateDrv0SpiErrSecAtmpt() (&GateDrv0Ctrl_Pim_GateDrv0SpiErrSecAtmpt)

#ifdef Rte_Pim_GateDrv0SpiTrsmErrCntr
# undef Rte_Pim_GateDrv0SpiTrsmErrCntr
#else
#error Rte_Pim_GateDrv0SpiTrsmErrCntr is missing
#endif
#define Rte_Pim_GateDrv0SpiTrsmErrCntr() (&GateDrv0Ctrl_Pim_GateDrv0SpiTrsmErrCntr)

#ifdef Rte_Pim_GateDrv0St
# undef Rte_Pim_GateDrv0St
#else
#error Rte_Pim_GateDrv0St is missing
#endif
#define Rte_Pim_GateDrv0St() (&GateDrv0Ctrl_Pim_GateDrv0St)

#ifdef Rte_Pim_GateDrv0StsVal
# undef Rte_Pim_GateDrv0StsVal
#else
#error Rte_Pim_GateDrv0StsVal is missing
#endif
#define Rte_Pim_GateDrv0StsVal() (&GateDrv0Ctrl_Pim_GateDrv0StsVal)

#ifdef Rte_Pim_GateDrv0VrfyRes0Val
# undef Rte_Pim_GateDrv0VrfyRes0Val
#else
#error Rte_Pim_GateDrv0VrfyRes0Val is missing
#endif
#define Rte_Pim_GateDrv0VrfyRes0Val() (&GateDrv0Ctrl_Pim_GateDrv0VrfyRes0Val)

#ifdef Rte_Pim_GateDrv0VrfyRes1Val
# undef Rte_Pim_GateDrv0VrfyRes1Val
#else
#error Rte_Pim_GateDrv0VrfyRes1Val is missing
#endif
#define Rte_Pim_GateDrv0VrfyRes1Val() (&GateDrv0Ctrl_Pim_GateDrv0VrfyRes1Val)

#ifdef Rte_Pim_Ivtr0BootstrpSplyFltPrmVal
# undef Rte_Pim_Ivtr0BootstrpSplyFltPrmVal
#else
#error Rte_Pim_Ivtr0BootstrpSplyFltPrmVal is missing
#endif
#define Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() (&GateDrv0Ctrl_Pim_Ivtr0BootstrpSplyFltPrmVal)

#ifdef Rte_Pim_Ivtr0GenericFltPrmVal
# undef Rte_Pim_Ivtr0GenericFltPrmVal
#else
#error Rte_Pim_Ivtr0GenericFltPrmVal is missing
#endif
#define Rte_Pim_Ivtr0GenericFltPrmVal() (&GateDrv0Ctrl_Pim_Ivtr0GenericFltPrmVal)

#ifdef Rte_Pim_Ivtr0InactvSts
# undef Rte_Pim_Ivtr0InactvSts
#else
#error Rte_Pim_Ivtr0InactvSts is missing
#endif
#define Rte_Pim_Ivtr0InactvSts() (&GateDrv0Ctrl_Pim_Ivtr0InactvSts)

#ifdef Rte_Pim_Ivtr0OffStChkCmpl
# undef Rte_Pim_Ivtr0OffStChkCmpl
#else
#error Rte_Pim_Ivtr0OffStChkCmpl is missing
#endif
#define Rte_Pim_Ivtr0OffStChkCmpl() (&GateDrv0Ctrl_Pim_Ivtr0OffStChkCmpl)

#ifdef Rte_Pim_IvtrFetFltPhaDataStore
# undef Rte_Pim_IvtrFetFltPhaDataStore
#else
#error Rte_Pim_IvtrFetFltPhaDataStore is missing
#endif
#define Rte_Pim_IvtrFetFltPhaDataStore() (&GateDrv0Ctrl_Pim_IvtrFetFltPhaDataStore)

#ifdef Rte_Pim_IvtrFetFltTypDataStore
# undef Rte_Pim_IvtrFetFltTypDataStore
#else
#error Rte_Pim_IvtrFetFltTypDataStore is missing
#endif
#define Rte_Pim_IvtrFetFltTypDataStore() (&GateDrv0Ctrl_Pim_IvtrFetFltTypDataStore)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena
# undef Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena
#else
#error GateDrv0Ena is missing
#endif
#define Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena() (GateDrv0Ctrl_Irv_GateDrv0Ena)

#ifdef Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena
# undef Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena
#else
#error GateDrv0Ena is missing
#endif
#define Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena(data) (GateDrv0Ctrl_Irv_GateDrv0Ena = (data))

#ifdef Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0PhaReasbnDiagcEna
# undef Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0PhaReasbnDiagcEna
#else
#error GateDrv0PhaReasbnDiagcEna is missing
#endif
#define Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0PhaReasbnDiagcEna() (GateDrv0Ctrl_Irv_GateDrv0PhaReasbnDiagcEna)

#ifdef Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0PhaReasbnDiagcEna
# undef Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0PhaReasbnDiagcEna
#else
#error GateDrv0PhaReasbnDiagcEna is missing
#endif
#define Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0PhaReasbnDiagcEna(data) (GateDrv0Ctrl_Irv_GateDrv0PhaReasbnDiagcEna = (data))

#ifdef Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv
# undef Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv
#else
#error Ivtr0PhyFltInpActv is missing
#endif
#define Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv() (GateDrv0Ctrl_Irv_Ivtr0PhyFltInpActv)

#ifdef Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv
# undef Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv
#else
#error Ivtr0PhyFltInpActv is missing
#endif
#define Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv(data) (GateDrv0Ctrl_Irv_Ivtr0PhyFltInpActv = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
