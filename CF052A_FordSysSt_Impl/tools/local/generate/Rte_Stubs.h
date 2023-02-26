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
extern VAR(boolean, AUTOMATIC) FordSysSt_Ip_SysStWrmIninCmpl;
extern VAR(boolean, AUTOMATIC) FordSysSt_Ip_SysStReqEnaOvrd;
extern VAR(LoaSt1, AUTOMATIC) FordSysSt_Ip_LoaSt;
extern VAR(SysSt1, AUTOMATIC) FordSysSt_Ip_SysSt;
extern VAR(Ford_PwPckTq_D_Stat, AUTOMATIC) FordSysSt_Ip_FordVehPwrpkTqSts;
extern VAR(float32, AUTOMATIC) FordSysSt_Ip_FordVehSpd;
extern VAR(boolean, AUTOMATIC) FordSysSt_Ip_FordVehSpdVld;
extern VAR(FordVltgOperSt1, AUTOMATIC) FordSysSt_Ip_FordVltgOperSt;
extern VAR(float32, AUTOMATIC) FordSysSt_Ip_FordVltgOperRamp;
extern VAR(float32, AUTOMATIC) FordSysSt_Ip_FordVltgOperScar;

/* Outputs */
extern VAR(Ford_EPAS_Failure, AUTOMATIC) FordSysSt_Op_FordEpsFailr;
extern VAR(FordEpsSysSt1, AUTOMATIC) FordSysSt_Op_FordEpsSysSt;
extern VAR(boolean, AUTOMATIC) FordSysSt_Op_FordPwrSplyEnaReq;
extern VAR(Ford_SteMdule_D_Stat, AUTOMATIC) FordSysSt_Op_FordSteerModlSts;
extern VAR(float32, AUTOMATIC) FordSysSt_Op_OperScaFctr;
extern VAR(float32, AUTOMATIC) FordSysSt_Op_OperRampRate;

/* Calibrations */
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_NormLimpHomeScar;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_InitLimpHomeScar;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_LimdAssiScar;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_LimdAssiRamp;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_NormLimpHomeRamp;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_InitLimpHomeRamp;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_LimdAssiRampUpRate;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_LimdAssiRampUpRateFaild;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_FullAssiRampUpRate;
extern CONST(float32, AUTOMATIC) FordSysSt_Cal_ShtdwnRamp;

/* PIMs */
extern VAR(Ford_EPAS_Failure, AUTOMATIC) FordSysSt_Pim_FordEpsFailrPrev;
extern VAR(FordEpsSysSt1, AUTOMATIC) FordSysSt_Pim_FordEpsSysStPrev;
extern VAR(boolean, AUTOMATIC) FordSysSt_Pim_SysStReqEnaPrev;
extern VAR(boolean, AUTOMATIC) FordSysSt_Pim_PwrSplyEnaReqPrev;
extern VAR(Ford_SteMdule_D_Stat, AUTOMATIC) FordSysSt_Pim_FordSteerModlStsPrev;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) FordSysSt_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) FordSysSt_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) FordSysSt_Srv_GetNtcQlfrSts_Return;
extern VAR(boolean, AUTOMATIC) FordSysSt_Srv_GetGpioMcuEna_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) FordSysSt_Srv_GetGpioMcuEna_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_SysStWrmIninCmpl_Logl
# undef Rte_Read_SysStWrmIninCmpl_Logl
#endif
#define Rte_Read_SysStWrmIninCmpl_Logl(data) (*(data) = FordSysSt_Ip_SysStWrmIninCmpl)

#ifdef Rte_Read_SysStReqEnaOvrd_Logl
# undef Rte_Read_SysStReqEnaOvrd_Logl
#endif
#define Rte_Read_SysStReqEnaOvrd_Logl(data) (*(data) = FordSysSt_Ip_SysStReqEnaOvrd)

#ifdef Rte_Read_LoaSt_Val
# undef Rte_Read_LoaSt_Val
#endif
#define Rte_Read_LoaSt_Val(data) (*(data) = FordSysSt_Ip_LoaSt)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = FordSysSt_Ip_SysSt)

#ifdef Rte_Read_FordVehPwrpkTqSts_Val
# undef Rte_Read_FordVehPwrpkTqSts_Val
#endif
#define Rte_Read_FordVehPwrpkTqSts_Val(data) (*(data) = FordSysSt_Ip_FordVehPwrpkTqSts)

#ifdef Rte_Read_FordVehSpd_Val
# undef Rte_Read_FordVehSpd_Val
#endif
#define Rte_Read_FordVehSpd_Val(data) (*(data) = FordSysSt_Ip_FordVehSpd)

#ifdef Rte_Read_FordVehSpdVld_Logl
# undef Rte_Read_FordVehSpdVld_Logl
#endif
#define Rte_Read_FordVehSpdVld_Logl(data) (*(data) = FordSysSt_Ip_FordVehSpdVld)

#ifdef Rte_Read_FordVltgOperSt_Val
# undef Rte_Read_FordVltgOperSt_Val
#endif
#define Rte_Read_FordVltgOperSt_Val(data) (*(data) = FordSysSt_Ip_FordVltgOperSt)

#ifdef Rte_Read_FordVltgOperRamp_Val
# undef Rte_Read_FordVltgOperRamp_Val
#endif
#define Rte_Read_FordVltgOperRamp_Val(data) (*(data) = FordSysSt_Ip_FordVltgOperRamp)

#ifdef Rte_Read_FordVltgOperScar_Val
# undef Rte_Read_FordVltgOperScar_Val
#endif
#define Rte_Read_FordVltgOperScar_Val(data) (*(data) = FordSysSt_Ip_FordVltgOperScar)


/*** Output Stubs ***/

#ifdef Rte_Write_FordEpsFailr_Val
# undef Rte_Write_FordEpsFailr_Val
#endif
#define Rte_Write_FordEpsFailr_Val(data) (FordSysSt_Op_FordEpsFailr = (data))

#ifdef Rte_Write_FordEpsSysSt_Val
# undef Rte_Write_FordEpsSysSt_Val
#endif
#define Rte_Write_FordEpsSysSt_Val(data) (FordSysSt_Op_FordEpsSysSt = (data))

#ifdef Rte_Write_FordPwrSplyEnaReq_Logl
# undef Rte_Write_FordPwrSplyEnaReq_Logl
#endif
#define Rte_Write_FordPwrSplyEnaReq_Logl(data) (FordSysSt_Op_FordPwrSplyEnaReq = (data))

#ifdef Rte_Write_FordSteerModlSts_Val
# undef Rte_Write_FordSteerModlSts_Val
#endif
#define Rte_Write_FordSteerModlSts_Val(data) (FordSysSt_Op_FordSteerModlSts = (data))

#ifdef Rte_Write_OperScaFctr_Val
# undef Rte_Write_OperScaFctr_Val
#endif
#define Rte_Write_OperScaFctr_Val(data) (FordSysSt_Op_OperScaFctr = (data))

#ifdef Rte_Write_OperRampRate_Val
# undef Rte_Write_OperRampRate_Val
#endif
#define Rte_Write_OperRampRate_Val(data) (FordSysSt_Op_OperRampRate = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_NormLimpHomeScar_Val
# undef Rte_Prm_NormLimpHomeScar_Val
#endif
#define Rte_Prm_NormLimpHomeScar_Val() (FordSysSt_Cal_NormLimpHomeScar)

#ifdef Rte_Prm_InitLimpHomeScar_Val
# undef Rte_Prm_InitLimpHomeScar_Val
#endif
#define Rte_Prm_InitLimpHomeScar_Val() (FordSysSt_Cal_InitLimpHomeScar)

#ifdef Rte_Prm_LimdAssiScar_Val
# undef Rte_Prm_LimdAssiScar_Val
#endif
#define Rte_Prm_LimdAssiScar_Val() (FordSysSt_Cal_LimdAssiScar)

#ifdef Rte_Prm_LimdAssiRamp_Val
# undef Rte_Prm_LimdAssiRamp_Val
#endif
#define Rte_Prm_LimdAssiRamp_Val() (FordSysSt_Cal_LimdAssiRamp)

#ifdef Rte_Prm_NormLimpHomeRamp_Val
# undef Rte_Prm_NormLimpHomeRamp_Val
#endif
#define Rte_Prm_NormLimpHomeRamp_Val() (FordSysSt_Cal_NormLimpHomeRamp)

#ifdef Rte_Prm_InitLimpHomeRamp_Val
# undef Rte_Prm_InitLimpHomeRamp_Val
#endif
#define Rte_Prm_InitLimpHomeRamp_Val() (FordSysSt_Cal_InitLimpHomeRamp)

#ifdef Rte_Prm_LimdAssiRampUpRate_Val
# undef Rte_Prm_LimdAssiRampUpRate_Val
#endif
#define Rte_Prm_LimdAssiRampUpRate_Val() (FordSysSt_Cal_LimdAssiRampUpRate)

#ifdef Rte_Prm_LimdAssiRampUpRateFaild_Val
# undef Rte_Prm_LimdAssiRampUpRateFaild_Val
#endif
#define Rte_Prm_LimdAssiRampUpRateFaild_Val() (FordSysSt_Cal_LimdAssiRampUpRateFaild)

#ifdef Rte_Prm_FullAssiRampUpRate_Val
# undef Rte_Prm_FullAssiRampUpRate_Val
#endif
#define Rte_Prm_FullAssiRampUpRate_Val() (FordSysSt_Cal_FullAssiRampUpRate)

#ifdef Rte_Prm_ShtdwnRamp_Val
# undef Rte_Prm_ShtdwnRamp_Val
#endif
#define Rte_Prm_ShtdwnRamp_Val() (FordSysSt_Cal_ShtdwnRamp)


/*** PIM Stubs ***/

#ifdef Rte_Pim_FordEpsFailrPrev
# undef Rte_Pim_FordEpsFailrPrev
#endif
#define Rte_Pim_FordEpsFailrPrev() (&FordSysSt_Pim_FordEpsFailrPrev)

#ifdef Rte_Pim_FordEpsSysStPrev
# undef Rte_Pim_FordEpsSysStPrev
#endif
#define Rte_Pim_FordEpsSysStPrev() (&FordSysSt_Pim_FordEpsSysStPrev)

#ifdef Rte_Pim_SysStReqEnaPrev
# undef Rte_Pim_SysStReqEnaPrev
#endif
#define Rte_Pim_SysStReqEnaPrev() (&FordSysSt_Pim_SysStReqEnaPrev)

#ifdef Rte_Pim_PwrSplyEnaReqPrev
# undef Rte_Pim_PwrSplyEnaReqPrev
#endif
#define Rte_Pim_PwrSplyEnaReqPrev() (&FordSysSt_Pim_PwrSplyEnaReqPrev)

#ifdef Rte_Pim_FordSteerModlStsPrev
# undef Rte_Pim_FordSteerModlStsPrev
#endif
#define Rte_Pim_FordSteerModlStsPrev() (&FordSysSt_Pim_FordSteerModlStsPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
