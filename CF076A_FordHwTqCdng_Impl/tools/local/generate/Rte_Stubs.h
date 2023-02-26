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
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_AssiCmd;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_AssiCmdBas;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_AvlMotTq;
extern VAR(uint8, AUTOMATIC) FordHwTqCdng_Ip_EcuId;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_FordVehSpd;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_HwTq;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_HwTqHysOvrl;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_HwTqOvrl;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_MotTqCmd;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Ip_MotTqCmdPwrLimd;

/* Outputs */
extern VAR(s23pm8, AUTOMATIC) FordHwTqCdng_Op_FordAppldFinalMotTq;
extern VAR(boolean, AUTOMATIC) FordHwTqCdng_Op_FordAppldFinalMotTqVld;
extern VAR(s8p7, AUTOMATIC) FordHwTqCdng_Op_FordBoostCrvAssiTq;
extern VAR(s5p10, AUTOMATIC) FordHwTqCdng_Op_FordBoostCrvInpTq;
extern VAR(s5p10, AUTOMATIC) FordHwTqCdng_Op_FordInpTqRaw;
extern VAR(boolean, AUTOMATIC) FordHwTqCdng_Op_FordInpTqRawVld;
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Op_FordMaxAsscTq;
extern VAR(s23pm8, AUTOMATIC) FordHwTqCdng_Op_FordReqdFinalMotTq;

/* Calibrations */
extern CONST(u16p0, AUTOMATIC) FordHwTqCdng_Cal_FordHwTqCdngAppldFinalMotTqVldTiThd;
extern CONST(u16p0, AUTOMATIC) FordHwTqCdng_Cal_FordHwTqCdngInpTqRawVldTiThd;
extern CONST(u4p12, AUTOMATIC) FordHwTqCdng_Cal_PwrLimrStdOperMotEnvlpY[6];
extern CONST(float32, AUTOMATIC) FordHwTqCdng_Cal_SysGlbPrmSysKineRat;

/* PIMs */
extern VAR(float32, AUTOMATIC) FordHwTqCdng_Pim_dFordHwTqCdngFildBoostCrvAssiTq;
extern VAR(uint32, AUTOMATIC) FordHwTqCdng_Pim_AppldFinalMotTqVldRefTi;
extern VAR(uint32, AUTOMATIC) FordHwTqCdng_Pim_InpTqRawVldRefTi;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) FordHwTqCdng_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) FordHwTqCdng_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) FordHwTqCdng_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) FordHwTqCdng_Srv_GetRefTmr100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordHwTqCdng_Srv_GetTiSpan100MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) FordHwTqCdng_Srv_GetTiSpan100MicroSec32bit_TiSpan;


/*** Input Stubs ***/

#ifdef Rte_Read_AssiCmd_Val
# undef Rte_Read_AssiCmd_Val
#else
#error Rte_Read_AssiCmd_Val is missing
#endif
#define Rte_Read_AssiCmd_Val(data) (*(data) = FordHwTqCdng_Ip_AssiCmd)

#ifdef Rte_Read_AssiCmdBas_Val
# undef Rte_Read_AssiCmdBas_Val
#else
#error Rte_Read_AssiCmdBas_Val is missing
#endif
#define Rte_Read_AssiCmdBas_Val(data) (*(data) = FordHwTqCdng_Ip_AssiCmdBas)

#ifdef Rte_Read_AvlMotTq_Val
# undef Rte_Read_AvlMotTq_Val
#else
#error Rte_Read_AvlMotTq_Val is missing
#endif
#define Rte_Read_AvlMotTq_Val(data) (*(data) = FordHwTqCdng_Ip_AvlMotTq)

#ifdef Rte_Read_EcuId_Val
# undef Rte_Read_EcuId_Val
#else
#error Rte_Read_EcuId_Val is missing
#endif
#define Rte_Read_EcuId_Val(data) (*(data) = FordHwTqCdng_Ip_EcuId)

#ifdef Rte_Read_FordVehSpd_Val
# undef Rte_Read_FordVehSpd_Val
#else
#error Rte_Read_FordVehSpd_Val is missing
#endif
#define Rte_Read_FordVehSpd_Val(data) (*(data) = FordHwTqCdng_Ip_FordVehSpd)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#else
#error Rte_Read_HwTq_Val is missing
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = FordHwTqCdng_Ip_HwTq)

#ifdef Rte_Read_HwTqHysOvrl_Val
# undef Rte_Read_HwTqHysOvrl_Val
#else
#error Rte_Read_HwTqHysOvrl_Val is missing
#endif
#define Rte_Read_HwTqHysOvrl_Val(data) (*(data) = FordHwTqCdng_Ip_HwTqHysOvrl)

#ifdef Rte_Read_HwTqOvrl_Val
# undef Rte_Read_HwTqOvrl_Val
#else
#error Rte_Read_HwTqOvrl_Val is missing
#endif
#define Rte_Read_HwTqOvrl_Val(data) (*(data) = FordHwTqCdng_Ip_HwTqOvrl)

#ifdef Rte_Read_MotTqCmd_Val
# undef Rte_Read_MotTqCmd_Val
#else
#error Rte_Read_MotTqCmd_Val is missing
#endif
#define Rte_Read_MotTqCmd_Val(data) (*(data) = FordHwTqCdng_Ip_MotTqCmd)

#ifdef Rte_Read_MotTqCmdPwrLimd_Val
# undef Rte_Read_MotTqCmdPwrLimd_Val
#else
#error Rte_Read_MotTqCmdPwrLimd_Val is missing
#endif
#define Rte_Read_MotTqCmdPwrLimd_Val(data) (*(data) = FordHwTqCdng_Ip_MotTqCmdPwrLimd)


/*** Output Stubs ***/

#ifdef Rte_Write_FordAppldFinalMotTq_Val
# undef Rte_Write_FordAppldFinalMotTq_Val
#else
#error Rte_Write_FordAppldFinalMotTq_Val is missing
#endif
#define Rte_Write_FordAppldFinalMotTq_Val(data) (FordHwTqCdng_Op_FordAppldFinalMotTq = (data))

#ifdef Rte_Write_FordAppldFinalMotTqVld_Logl
# undef Rte_Write_FordAppldFinalMotTqVld_Logl
#else
#error Rte_Write_FordAppldFinalMotTqVld_Logl is missing
#endif
#define Rte_Write_FordAppldFinalMotTqVld_Logl(data) (FordHwTqCdng_Op_FordAppldFinalMotTqVld = (data))

#ifdef Rte_Write_FordBoostCrvAssiTq_Val
# undef Rte_Write_FordBoostCrvAssiTq_Val
#else
#error Rte_Write_FordBoostCrvAssiTq_Val is missing
#endif
#define Rte_Write_FordBoostCrvAssiTq_Val(data) (FordHwTqCdng_Op_FordBoostCrvAssiTq = (data))

#ifdef Rte_Write_FordBoostCrvInpTq_Val
# undef Rte_Write_FordBoostCrvInpTq_Val
#else
#error Rte_Write_FordBoostCrvInpTq_Val is missing
#endif
#define Rte_Write_FordBoostCrvInpTq_Val(data) (FordHwTqCdng_Op_FordBoostCrvInpTq = (data))

#ifdef Rte_Write_FordInpTqRaw_Val
# undef Rte_Write_FordInpTqRaw_Val
#else
#error Rte_Write_FordInpTqRaw_Val is missing
#endif
#define Rte_Write_FordInpTqRaw_Val(data) (FordHwTqCdng_Op_FordInpTqRaw = (data))

#ifdef Rte_Write_FordInpTqRawVld_Logl
# undef Rte_Write_FordInpTqRawVld_Logl
#else
#error Rte_Write_FordInpTqRawVld_Logl is missing
#endif
#define Rte_Write_FordInpTqRawVld_Logl(data) (FordHwTqCdng_Op_FordInpTqRawVld = (data))

#ifdef Rte_Write_FordMaxAsscTq_Val
# undef Rte_Write_FordMaxAsscTq_Val
#else
#error Rte_Write_FordMaxAsscTq_Val is missing
#endif
#define Rte_Write_FordMaxAsscTq_Val(data) (FordHwTqCdng_Op_FordMaxAsscTq = (data))

#ifdef Rte_Write_FordReqdFinalMotTq_Val
# undef Rte_Write_FordReqdFinalMotTq_Val
#else
#error Rte_Write_FordReqdFinalMotTq_Val is missing
#endif
#define Rte_Write_FordReqdFinalMotTq_Val(data) (FordHwTqCdng_Op_FordReqdFinalMotTq = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_FordHwTqCdngAppldFinalMotTqVldTiThd_Val
# undef Rte_Prm_FordHwTqCdngAppldFinalMotTqVldTiThd_Val
#else
#error Rte_Prm_FordHwTqCdngAppldFinalMotTqVldTiThd_Val is missing
#endif
#define Rte_Prm_FordHwTqCdngAppldFinalMotTqVldTiThd_Val() (FordHwTqCdng_Cal_FordHwTqCdngAppldFinalMotTqVldTiThd)

#ifdef Rte_Prm_FordHwTqCdngInpTqRawVldTiThd_Val
# undef Rte_Prm_FordHwTqCdngInpTqRawVldTiThd_Val
#else
#error Rte_Prm_FordHwTqCdngInpTqRawVldTiThd_Val is missing
#endif
#define Rte_Prm_FordHwTqCdngInpTqRawVldTiThd_Val() (FordHwTqCdng_Cal_FordHwTqCdngInpTqRawVldTiThd)

#ifdef Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D
# undef Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D
#else
#error Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D is missing
#endif
#define Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D() (&(FordHwTqCdng_Cal_PwrLimrStdOperMotEnvlpY[0]))

#ifdef Rte_Prm_SysGlbPrmSysKineRat_Val
# undef Rte_Prm_SysGlbPrmSysKineRat_Val
#else
#error Rte_Prm_SysGlbPrmSysKineRat_Val is missing
#endif
#define Rte_Prm_SysGlbPrmSysKineRat_Val() (FordHwTqCdng_Cal_SysGlbPrmSysKineRat)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dFordHwTqCdngFildBoostCrvAssiTq
# undef Rte_Pim_dFordHwTqCdngFildBoostCrvAssiTq
#else
#error Rte_Pim_dFordHwTqCdngFildBoostCrvAssiTq is missing
#endif
#define Rte_Pim_dFordHwTqCdngFildBoostCrvAssiTq() (&FordHwTqCdng_Pim_dFordHwTqCdngFildBoostCrvAssiTq)

#ifdef Rte_Pim_AppldFinalMotTqVldRefTi
# undef Rte_Pim_AppldFinalMotTqVldRefTi
#else
#error Rte_Pim_AppldFinalMotTqVldRefTi is missing
#endif
#define Rte_Pim_AppldFinalMotTqVldRefTi() (&FordHwTqCdng_Pim_AppldFinalMotTqVldRefTi)

#ifdef Rte_Pim_InpTqRawVldRefTi
# undef Rte_Pim_InpTqRawVldRefTi
#else
#error Rte_Pim_InpTqRawVldRefTi is missing
#endif
#define Rte_Pim_InpTqRawVldRefTi() (&FordHwTqCdng_Pim_InpTqRawVldRefTi)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
