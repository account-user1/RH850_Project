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
extern VAR(float32, AUTOMATIC) PwrDiscnct_Ip_BattVltg;
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Ip_BattVltgAdcFaild;
extern VAR(float32, AUTOMATIC) PwrDiscnct_Ip_BattVltgSwd1;
extern VAR(float32, AUTOMATIC) PwrDiscnct_Ip_ChrgPmpDiag;
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Ip_ChrgPmpDiagAdcFaild;
extern VAR(float32, AUTOMATIC) PwrDiscnct_Ip_MotVelMrf;
extern VAR(float32, AUTOMATIC) PwrDiscnct_Ip_PwrDiscnctSwtDiag;
extern VAR(uint8, AUTOMATIC) PwrDiscnct_Ip_StrtUpSt;
extern VAR(SysSt1, AUTOMATIC) PwrDiscnct_Ip_SysSt;

/* Outputs */
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Op_PwrDiscnctATestCmpl;
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Op_PwrDiscnctBTestCmpl;
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Op_PwrDiscnctClsd;

/* Calibrations */
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctBattVltgExtdNormThd;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctBattVltgNonExtdThd;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctChrgMinDeltaExtOper;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctChrgMinDeltaNonOper;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctChrgMinDeltaNormOper;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctChrgPmpDiagOpenThd;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctDeltaSwtClsThd;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctDeltaVltgClsThd;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctDeltaVltgOpenThd;
extern CONST(uint16, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctFltFailStep;
extern CONST(uint16, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctFltPassStep;
extern CONST(uint16, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctFltThd;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctMtrMtnThd;
extern CONST(uint16, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctPwrDiscnctRtFltFailStep;
extern CONST(uint16, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctPwrDiscnctRtFltPassStep;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_PwrDiscnctSwtDiagOpenThd;
extern CONST(float32, AUTOMATIC) PwrDiscnct_Cal_BattVltgSwdMax;

/* PIMs */
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Pim_FirstRunCmpl;
extern VAR(uint8, AUTOMATIC) PwrDiscnct_Pim_Ntc042PrmByte;
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Pim_PwrDiscnctClsdSts;
extern VAR(uint16, AUTOMATIC) PwrDiscnct_Pim_PwrDiscnctFltAtInitErrAcc;
extern VAR(PwrDiscnctSts1, AUTOMATIC) PwrDiscnct_Pim_PwrDiscnctSt;
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Pim_PwrDiscnctTestACmpl;
extern VAR(boolean, AUTOMATIC) PwrDiscnct_Pim_PwrDiscnctTestBCmpl;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) PwrDiscnct_Srv_CnvSnpshtData_f32_SnpshtDataCnvd;
extern VAR(float32, AUTOMATIC) PwrDiscnct_Srv_CnvSnpshtData_f32_SnpshtData;
extern VAR(NtcNr1, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) PwrDiscnct_Srv_SetNtcStsAndSnpshtData_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_BattVltg_Val
# undef Rte_Read_BattVltg_Val
#endif
#define Rte_Read_BattVltg_Val(data) (*(data) = PwrDiscnct_Ip_BattVltg)

#ifdef Rte_Read_BattVltgAdcFaild_Logl
# undef Rte_Read_BattVltgAdcFaild_Logl
#endif
#define Rte_Read_BattVltgAdcFaild_Logl(data) (*(data) = PwrDiscnct_Ip_BattVltgAdcFaild)

#ifdef Rte_Read_BattVltgSwd1_Val
# undef Rte_Read_BattVltgSwd1_Val
#endif
#define Rte_Read_BattVltgSwd1_Val(data) (*(data) = PwrDiscnct_Ip_BattVltgSwd1)

#ifdef Rte_Read_ChrgPmpDiag_Val
# undef Rte_Read_ChrgPmpDiag_Val
#endif
#define Rte_Read_ChrgPmpDiag_Val(data) (*(data) = PwrDiscnct_Ip_ChrgPmpDiag)

#ifdef Rte_Read_ChrgPmpDiagAdcFaild_Logl
# undef Rte_Read_ChrgPmpDiagAdcFaild_Logl
#endif
#define Rte_Read_ChrgPmpDiagAdcFaild_Logl(data) (*(data) = PwrDiscnct_Ip_ChrgPmpDiagAdcFaild)

#ifdef Rte_Read_MotVelMrf_Val
# undef Rte_Read_MotVelMrf_Val
#endif
#define Rte_Read_MotVelMrf_Val(data) (*(data) = PwrDiscnct_Ip_MotVelMrf)

#ifdef Rte_Read_PwrDiscnctSwtDiag_Val
# undef Rte_Read_PwrDiscnctSwtDiag_Val
#endif
#define Rte_Read_PwrDiscnctSwtDiag_Val(data) (*(data) = PwrDiscnct_Ip_PwrDiscnctSwtDiag)

#ifdef Rte_Read_StrtUpSt_Val
# undef Rte_Read_StrtUpSt_Val
#endif
#define Rte_Read_StrtUpSt_Val(data) (*(data) = PwrDiscnct_Ip_StrtUpSt)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = PwrDiscnct_Ip_SysSt)


/*** Output Stubs ***/

#ifdef Rte_Write_PwrDiscnctATestCmpl_Logl
# undef Rte_Write_PwrDiscnctATestCmpl_Logl
#endif
#define Rte_Write_PwrDiscnctATestCmpl_Logl(data) (PwrDiscnct_Op_PwrDiscnctATestCmpl = (data))

#ifdef Rte_Write_PwrDiscnctBTestCmpl_Logl
# undef Rte_Write_PwrDiscnctBTestCmpl_Logl
#endif
#define Rte_Write_PwrDiscnctBTestCmpl_Logl(data) (PwrDiscnct_Op_PwrDiscnctBTestCmpl = (data))

#ifdef Rte_Write_PwrDiscnctClsd_Logl
# undef Rte_Write_PwrDiscnctClsd_Logl
#endif
#define Rte_Write_PwrDiscnctClsd_Logl(data) (PwrDiscnct_Op_PwrDiscnctClsd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_PwrDiscnctBattVltgExtdNormThd_Val
# undef Rte_Prm_PwrDiscnctBattVltgExtdNormThd_Val
#endif
#define Rte_Prm_PwrDiscnctBattVltgExtdNormThd_Val() (PwrDiscnct_Cal_PwrDiscnctBattVltgExtdNormThd)

#ifdef Rte_Prm_PwrDiscnctBattVltgNonExtdThd_Val
# undef Rte_Prm_PwrDiscnctBattVltgNonExtdThd_Val
#endif
#define Rte_Prm_PwrDiscnctBattVltgNonExtdThd_Val() (PwrDiscnct_Cal_PwrDiscnctBattVltgNonExtdThd)

#ifdef Rte_Prm_PwrDiscnctChrgMinDeltaExtOper_Val
# undef Rte_Prm_PwrDiscnctChrgMinDeltaExtOper_Val
#endif
#define Rte_Prm_PwrDiscnctChrgMinDeltaExtOper_Val() (PwrDiscnct_Cal_PwrDiscnctChrgMinDeltaExtOper)

#ifdef Rte_Prm_PwrDiscnctChrgMinDeltaNonOper_Val
# undef Rte_Prm_PwrDiscnctChrgMinDeltaNonOper_Val
#endif
#define Rte_Prm_PwrDiscnctChrgMinDeltaNonOper_Val() (PwrDiscnct_Cal_PwrDiscnctChrgMinDeltaNonOper)

#ifdef Rte_Prm_PwrDiscnctChrgMinDeltaNormOper_Val
# undef Rte_Prm_PwrDiscnctChrgMinDeltaNormOper_Val
#endif
#define Rte_Prm_PwrDiscnctChrgMinDeltaNormOper_Val() (PwrDiscnct_Cal_PwrDiscnctChrgMinDeltaNormOper)

#ifdef Rte_Prm_PwrDiscnctChrgPmpDiagOpenThd_Val
# undef Rte_Prm_PwrDiscnctChrgPmpDiagOpenThd_Val
#endif
#define Rte_Prm_PwrDiscnctChrgPmpDiagOpenThd_Val() (PwrDiscnct_Cal_PwrDiscnctChrgPmpDiagOpenThd)

#ifdef Rte_Prm_PwrDiscnctDeltaSwtClsThd_Val
# undef Rte_Prm_PwrDiscnctDeltaSwtClsThd_Val
#endif
#define Rte_Prm_PwrDiscnctDeltaSwtClsThd_Val() (PwrDiscnct_Cal_PwrDiscnctDeltaSwtClsThd)

#ifdef Rte_Prm_PwrDiscnctDeltaVltgClsThd_Val
# undef Rte_Prm_PwrDiscnctDeltaVltgClsThd_Val
#endif
#define Rte_Prm_PwrDiscnctDeltaVltgClsThd_Val() (PwrDiscnct_Cal_PwrDiscnctDeltaVltgClsThd)

#ifdef Rte_Prm_PwrDiscnctDeltaVltgOpenThd_Val
# undef Rte_Prm_PwrDiscnctDeltaVltgOpenThd_Val
#endif
#define Rte_Prm_PwrDiscnctDeltaVltgOpenThd_Val() (PwrDiscnct_Cal_PwrDiscnctDeltaVltgOpenThd)

#ifdef Rte_Prm_PwrDiscnctFltFailStep_Val
# undef Rte_Prm_PwrDiscnctFltFailStep_Val
#endif
#define Rte_Prm_PwrDiscnctFltFailStep_Val() (PwrDiscnct_Cal_PwrDiscnctFltFailStep)

#ifdef Rte_Prm_PwrDiscnctFltPassStep_Val
# undef Rte_Prm_PwrDiscnctFltPassStep_Val
#endif
#define Rte_Prm_PwrDiscnctFltPassStep_Val() (PwrDiscnct_Cal_PwrDiscnctFltPassStep)

#ifdef Rte_Prm_PwrDiscnctFltThd_Val
# undef Rte_Prm_PwrDiscnctFltThd_Val
#endif
#define Rte_Prm_PwrDiscnctFltThd_Val() (PwrDiscnct_Cal_PwrDiscnctFltThd)

#ifdef Rte_Prm_PwrDiscnctMtrMtnThd_Val
# undef Rte_Prm_PwrDiscnctMtrMtnThd_Val
#endif
#define Rte_Prm_PwrDiscnctMtrMtnThd_Val() (PwrDiscnct_Cal_PwrDiscnctMtrMtnThd)

#ifdef Rte_Prm_PwrDiscnctPwrDiscnctRtFltFailStep_Val
# undef Rte_Prm_PwrDiscnctPwrDiscnctRtFltFailStep_Val
#endif
#define Rte_Prm_PwrDiscnctPwrDiscnctRtFltFailStep_Val() (PwrDiscnct_Cal_PwrDiscnctPwrDiscnctRtFltFailStep)

#ifdef Rte_Prm_PwrDiscnctPwrDiscnctRtFltPassStep_Val
# undef Rte_Prm_PwrDiscnctPwrDiscnctRtFltPassStep_Val
#endif
#define Rte_Prm_PwrDiscnctPwrDiscnctRtFltPassStep_Val() (PwrDiscnct_Cal_PwrDiscnctPwrDiscnctRtFltPassStep)

#ifdef Rte_Prm_PwrDiscnctSwtDiagOpenThd_Val
# undef Rte_Prm_PwrDiscnctSwtDiagOpenThd_Val
#endif
#define Rte_Prm_PwrDiscnctSwtDiagOpenThd_Val() (PwrDiscnct_Cal_PwrDiscnctSwtDiagOpenThd)

#ifdef Rte_Prm_BattVltgSwdMax_Val
# undef Rte_Prm_BattVltgSwdMax_Val
#endif
#define Rte_Prm_BattVltgSwdMax_Val() (PwrDiscnct_Cal_BattVltgSwdMax)


/*** PIM Stubs ***/

#ifdef Rte_Pim_FirstRunCmpl
# undef Rte_Pim_FirstRunCmpl
#endif
#define Rte_Pim_FirstRunCmpl() (&PwrDiscnct_Pim_FirstRunCmpl)

#ifdef Rte_Pim_Ntc042PrmByte
# undef Rte_Pim_Ntc042PrmByte
#endif
#define Rte_Pim_Ntc042PrmByte() (&PwrDiscnct_Pim_Ntc042PrmByte)

#ifdef Rte_Pim_PwrDiscnctClsdSts
# undef Rte_Pim_PwrDiscnctClsdSts
#endif
#define Rte_Pim_PwrDiscnctClsdSts() (&PwrDiscnct_Pim_PwrDiscnctClsdSts)

#ifdef Rte_Pim_PwrDiscnctFltAtInitErrAcc
# undef Rte_Pim_PwrDiscnctFltAtInitErrAcc
#endif
#define Rte_Pim_PwrDiscnctFltAtInitErrAcc() (&PwrDiscnct_Pim_PwrDiscnctFltAtInitErrAcc)

#ifdef Rte_Pim_PwrDiscnctSt
# undef Rte_Pim_PwrDiscnctSt
#endif
#define Rte_Pim_PwrDiscnctSt() (&PwrDiscnct_Pim_PwrDiscnctSt)

#ifdef Rte_Pim_PwrDiscnctTestACmpl
# undef Rte_Pim_PwrDiscnctTestACmpl
#endif
#define Rte_Pim_PwrDiscnctTestACmpl() (&PwrDiscnct_Pim_PwrDiscnctTestACmpl)

#ifdef Rte_Pim_PwrDiscnctTestBCmpl
# undef Rte_Pim_PwrDiscnctTestBCmpl
#endif
#define Rte_Pim_PwrDiscnctTestBCmpl() (&PwrDiscnct_Pim_PwrDiscnctTestBCmpl)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
