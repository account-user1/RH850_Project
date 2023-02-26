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
extern VAR(boolean, AUTOMATIC) EotProtn_Ip_EotProtnDi;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_HwAg;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_HwAgAuthy;
extern VAR(boolean, AUTOMATIC) EotProtn_Ip_HwAgCcwDetd;
extern VAR(boolean, AUTOMATIC) EotProtn_Ip_HwAgCwDetd;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_HwAgEotCcw;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_HwAgEotCw;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_HwTq;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_MotVelCrf;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_SysMotTqCmdSca;
extern VAR(float32, AUTOMATIC) EotProtn_Ip_VehSpd;

/* Outputs */
extern VAR(float32, AUTOMATIC) EotProtn_Op_EotActvCmd;
extern VAR(float32, AUTOMATIC) EotProtn_Op_EotAssiSca;
extern VAR(float32, AUTOMATIC) EotProtn_Op_EotDampgCmd;
extern VAR(float32, AUTOMATIC) EotProtn_Op_EotMotTqLim;

/* Calibrations */
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnActvRegnBypMaxThd;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnDampgSlew;
extern CONST(u9p7, AUTOMATIC) EotProtn_Cal_EotProtnDampgVehSpdTbl[4];
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnDeltaTqThd;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnDftPosn;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnEntrGainAuthyThd;
extern CONST(u9p7, AUTOMATIC) EotProtn_Cal_EotProtnEntrGainVehSpdTbl[5];
extern CONST(u12p4, AUTOMATIC) EotProtn_Cal_EotProtnEntrGainX[4][5];
extern CONST(u1p15, AUTOMATIC) EotProtn_Cal_EotProtnEntrGainY[4][5];
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnEntrStLpFilFrq;
extern CONST(u0p16, AUTOMATIC) EotProtn_Cal_EotProtnExitDampgY[2][4];
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnExitStLpFilFrq;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnHwAgGain;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnHwAgMax;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnHwAgMin;
extern CONST(u12p4, AUTOMATIC) EotProtn_Cal_EotProtnHwDegDampgX[2][4];
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnHwTqLpFilFrq;
extern CONST(u4p12, AUTOMATIC) EotProtn_Cal_EotProtnHwTqScaX[2];
extern CONST(u1p15, AUTOMATIC) EotProtn_Cal_EotProtnLoAuthyEntrGainY[4][5];
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnMotSpdIncptSca;
extern CONST(u12p4, AUTOMATIC) EotProtn_Cal_EotProtnMotSpdIncptX[2];
extern CONST(u12p4, AUTOMATIC) EotProtn_Cal_EotProtnMotSpdIncptY[2];
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnMotVelGain;
extern CONST(u0p16, AUTOMATIC) EotProtn_Cal_EotProtnNormDampgY[2][4];
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnPosnRampStep;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnRackTrvlLimrAuthyThd;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnRackTrvlLimrAuthyThdLimd;
extern CONST(boolean, AUTOMATIC) EotProtn_Cal_EotProtnRackTrvlLimrEna;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnRackTrvlLimrRng;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnRackTrvlLimrRngLimd;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnRackTrvlLimrVehSpdThd;
extern CONST(boolean, AUTOMATIC) EotProtn_Cal_EotProtnRunEotVelImpctAndSoftEndStop;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnSoftEndStopAuthyThd;
extern CONST(boolean, AUTOMATIC) EotProtn_Cal_EotProtnSoftEndStopEna;
extern CONST(float32, AUTOMATIC) EotProtn_Cal_EotProtnSoftEndStopVehSpdThd;

/* PIMs */
extern VAR(float32, AUTOMATIC) EotProtn_Pim_dEotProtnDampg;
extern VAR(boolean, AUTOMATIC) EotProtn_Pim_dEotProtnDetd;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_dEotProtnEntrGain;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_dEotProtnEotAssiSca;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_dEotProtnEotGain;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_dEotProtnExitGain;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_dEotProtnLimPosn;
extern VAR(boolean, AUTOMATIC) EotProtn_Pim_dEotProtnRackTrvlLimrDi;
extern VAR(FilLpRec1, AUTOMATIC) EotProtn_Pim_EotAssiScaLpFil;
extern VAR(FilLpRec1, AUTOMATIC) EotProtn_Pim_HwTqLpFil;
extern VAR(uint8, AUTOMATIC) EotProtn_Pim_NewSoftEndStopSt;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_PrevEotAssiSca;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_PrevEotDampg;
extern VAR(float32, AUTOMATIC) EotProtn_Pim_PrevImpctPosn;
extern VAR(boolean, AUTOMATIC) EotProtn_Pim_PrevRackTrvlLimrEna;
extern VAR(boolean, AUTOMATIC) EotProtn_Pim_PrevRackTrvlLimrInin;
extern VAR(uint8, AUTOMATIC) EotProtn_Pim_PrevSoftEndStopSt;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_EotProtnDi_Logl
# undef Rte_Read_EotProtnDi_Logl
#endif
#define Rte_Read_EotProtnDi_Logl(data) (*(data) = EotProtn_Ip_EotProtnDi)

#ifdef Rte_Read_HwAg_Val
# undef Rte_Read_HwAg_Val
#endif
#define Rte_Read_HwAg_Val(data) (*(data) = EotProtn_Ip_HwAg)

#ifdef Rte_Read_HwAgAuthy_Val
# undef Rte_Read_HwAgAuthy_Val
#endif
#define Rte_Read_HwAgAuthy_Val(data) (*(data) = EotProtn_Ip_HwAgAuthy)

#ifdef Rte_Read_HwAgCcwDetd_Logl
# undef Rte_Read_HwAgCcwDetd_Logl
#endif
#define Rte_Read_HwAgCcwDetd_Logl(data) (*(data) = EotProtn_Ip_HwAgCcwDetd)

#ifdef Rte_Read_HwAgCwDetd_Logl
# undef Rte_Read_HwAgCwDetd_Logl
#endif
#define Rte_Read_HwAgCwDetd_Logl(data) (*(data) = EotProtn_Ip_HwAgCwDetd)

#ifdef Rte_Read_HwAgEotCcw_Val
# undef Rte_Read_HwAgEotCcw_Val
#endif
#define Rte_Read_HwAgEotCcw_Val(data) (*(data) = EotProtn_Ip_HwAgEotCcw)

#ifdef Rte_Read_HwAgEotCw_Val
# undef Rte_Read_HwAgEotCw_Val
#endif
#define Rte_Read_HwAgEotCw_Val(data) (*(data) = EotProtn_Ip_HwAgEotCw)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = EotProtn_Ip_HwTq)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = EotProtn_Ip_MotVelCrf)

#ifdef Rte_Read_SysMotTqCmdSca_Val
# undef Rte_Read_SysMotTqCmdSca_Val
#endif
#define Rte_Read_SysMotTqCmdSca_Val(data) (*(data) = EotProtn_Ip_SysMotTqCmdSca)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = EotProtn_Ip_VehSpd)


/*** Output Stubs ***/

#ifdef Rte_Write_EotActvCmd_Val
# undef Rte_Write_EotActvCmd_Val
#endif
#define Rte_Write_EotActvCmd_Val(data) (EotProtn_Op_EotActvCmd = (data))

#ifdef Rte_Write_EotAssiSca_Val
# undef Rte_Write_EotAssiSca_Val
#endif
#define Rte_Write_EotAssiSca_Val(data) (EotProtn_Op_EotAssiSca = (data))

#ifdef Rte_Write_EotDampgCmd_Val
# undef Rte_Write_EotDampgCmd_Val
#endif
#define Rte_Write_EotDampgCmd_Val(data) (EotProtn_Op_EotDampgCmd = (data))

#ifdef Rte_Write_EotMotTqLim_Val
# undef Rte_Write_EotMotTqLim_Val
#endif
#define Rte_Write_EotMotTqLim_Val(data) (EotProtn_Op_EotMotTqLim = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_EotProtnActvRegnBypMaxThd_Val
# undef Rte_Prm_EotProtnActvRegnBypMaxThd_Val
#endif
#define Rte_Prm_EotProtnActvRegnBypMaxThd_Val() (EotProtn_Cal_EotProtnActvRegnBypMaxThd)

#ifdef Rte_Prm_EotProtnDampgSlew_Val
# undef Rte_Prm_EotProtnDampgSlew_Val
#endif
#define Rte_Prm_EotProtnDampgSlew_Val() (EotProtn_Cal_EotProtnDampgSlew)

#ifdef Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D
# undef Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D
#endif
#define Rte_Prm_EotProtnDampgVehSpdTbl_Ary1D() (&(EotProtn_Cal_EotProtnDampgVehSpdTbl[0]))

#ifdef Rte_Prm_EotProtnDeltaTqThd_Val
# undef Rte_Prm_EotProtnDeltaTqThd_Val
#endif
#define Rte_Prm_EotProtnDeltaTqThd_Val() (EotProtn_Cal_EotProtnDeltaTqThd)

#ifdef Rte_Prm_EotProtnDftPosn_Val
# undef Rte_Prm_EotProtnDftPosn_Val
#endif
#define Rte_Prm_EotProtnDftPosn_Val() (EotProtn_Cal_EotProtnDftPosn)

#ifdef Rte_Prm_EotProtnEntrGainAuthyThd_Val
# undef Rte_Prm_EotProtnEntrGainAuthyThd_Val
#endif
#define Rte_Prm_EotProtnEntrGainAuthyThd_Val() (EotProtn_Cal_EotProtnEntrGainAuthyThd)

#ifdef Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D
# undef Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D
#endif
#define Rte_Prm_EotProtnEntrGainVehSpdTbl_Ary1D() (&(EotProtn_Cal_EotProtnEntrGainVehSpdTbl[0]))

#ifdef Rte_Prm_EotProtnEntrGainX_Ary2D
# undef Rte_Prm_EotProtnEntrGainX_Ary2D
#endif
#define Rte_Prm_EotProtnEntrGainX_Ary2D() (&(EotProtn_Cal_EotProtnEntrGainX[0][0]))

#ifdef Rte_Prm_EotProtnEntrGainY_Ary2D
# undef Rte_Prm_EotProtnEntrGainY_Ary2D
#endif
#define Rte_Prm_EotProtnEntrGainY_Ary2D() (&(EotProtn_Cal_EotProtnEntrGainY[0][0]))

#ifdef Rte_Prm_EotProtnEntrStLpFilFrq_Val
# undef Rte_Prm_EotProtnEntrStLpFilFrq_Val
#endif
#define Rte_Prm_EotProtnEntrStLpFilFrq_Val() (EotProtn_Cal_EotProtnEntrStLpFilFrq)

#ifdef Rte_Prm_EotProtnExitDampgY_Ary2D
# undef Rte_Prm_EotProtnExitDampgY_Ary2D
#endif
#define Rte_Prm_EotProtnExitDampgY_Ary2D() (&(EotProtn_Cal_EotProtnExitDampgY[0][0]))

#ifdef Rte_Prm_EotProtnExitStLpFilFrq_Val
# undef Rte_Prm_EotProtnExitStLpFilFrq_Val
#endif
#define Rte_Prm_EotProtnExitStLpFilFrq_Val() (EotProtn_Cal_EotProtnExitStLpFilFrq)

#ifdef Rte_Prm_EotProtnHwAgGain_Val
# undef Rte_Prm_EotProtnHwAgGain_Val
#endif
#define Rte_Prm_EotProtnHwAgGain_Val() (EotProtn_Cal_EotProtnHwAgGain)

#ifdef Rte_Prm_EotProtnHwAgMax_Val
# undef Rte_Prm_EotProtnHwAgMax_Val
#endif
#define Rte_Prm_EotProtnHwAgMax_Val() (EotProtn_Cal_EotProtnHwAgMax)

#ifdef Rte_Prm_EotProtnHwAgMin_Val
# undef Rte_Prm_EotProtnHwAgMin_Val
#endif
#define Rte_Prm_EotProtnHwAgMin_Val() (EotProtn_Cal_EotProtnHwAgMin)

#ifdef Rte_Prm_EotProtnHwDegDampgX_Ary2D
# undef Rte_Prm_EotProtnHwDegDampgX_Ary2D
#endif
#define Rte_Prm_EotProtnHwDegDampgX_Ary2D() (&(EotProtn_Cal_EotProtnHwDegDampgX[0][0]))

#ifdef Rte_Prm_EotProtnHwTqLpFilFrq_Val
# undef Rte_Prm_EotProtnHwTqLpFilFrq_Val
#endif
#define Rte_Prm_EotProtnHwTqLpFilFrq_Val() (EotProtn_Cal_EotProtnHwTqLpFilFrq)

#ifdef Rte_Prm_EotProtnHwTqScaX_Ary1D
# undef Rte_Prm_EotProtnHwTqScaX_Ary1D
#endif
#define Rte_Prm_EotProtnHwTqScaX_Ary1D() (&(EotProtn_Cal_EotProtnHwTqScaX[0]))

#ifdef Rte_Prm_EotProtnLoAuthyEntrGainY_Ary2D
# undef Rte_Prm_EotProtnLoAuthyEntrGainY_Ary2D
#endif
#define Rte_Prm_EotProtnLoAuthyEntrGainY_Ary2D() (&(EotProtn_Cal_EotProtnLoAuthyEntrGainY[0][0]))

#ifdef Rte_Prm_EotProtnMotSpdIncptSca_Val
# undef Rte_Prm_EotProtnMotSpdIncptSca_Val
#endif
#define Rte_Prm_EotProtnMotSpdIncptSca_Val() (EotProtn_Cal_EotProtnMotSpdIncptSca)

#ifdef Rte_Prm_EotProtnMotSpdIncptX_Ary1D
# undef Rte_Prm_EotProtnMotSpdIncptX_Ary1D
#endif
#define Rte_Prm_EotProtnMotSpdIncptX_Ary1D() (&(EotProtn_Cal_EotProtnMotSpdIncptX[0]))

#ifdef Rte_Prm_EotProtnMotSpdIncptY_Ary1D
# undef Rte_Prm_EotProtnMotSpdIncptY_Ary1D
#endif
#define Rte_Prm_EotProtnMotSpdIncptY_Ary1D() (&(EotProtn_Cal_EotProtnMotSpdIncptY[0]))

#ifdef Rte_Prm_EotProtnMotVelGain_Val
# undef Rte_Prm_EotProtnMotVelGain_Val
#endif
#define Rte_Prm_EotProtnMotVelGain_Val() (EotProtn_Cal_EotProtnMotVelGain)

#ifdef Rte_Prm_EotProtnNormDampgY_Ary2D
# undef Rte_Prm_EotProtnNormDampgY_Ary2D
#endif
#define Rte_Prm_EotProtnNormDampgY_Ary2D() (&(EotProtn_Cal_EotProtnNormDampgY[0][0]))

#ifdef Rte_Prm_EotProtnPosnRampStep_Val
# undef Rte_Prm_EotProtnPosnRampStep_Val
#endif
#define Rte_Prm_EotProtnPosnRampStep_Val() (EotProtn_Cal_EotProtnPosnRampStep)

#ifdef Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val
# undef Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val
#endif
#define Rte_Prm_EotProtnRackTrvlLimrAuthyThd_Val() (EotProtn_Cal_EotProtnRackTrvlLimrAuthyThd)

#ifdef Rte_Prm_EotProtnRackTrvlLimrAuthyThdLimd_Val
# undef Rte_Prm_EotProtnRackTrvlLimrAuthyThdLimd_Val
#endif
#define Rte_Prm_EotProtnRackTrvlLimrAuthyThdLimd_Val() (EotProtn_Cal_EotProtnRackTrvlLimrAuthyThdLimd)

#ifdef Rte_Prm_EotProtnRackTrvlLimrEna_Logl
# undef Rte_Prm_EotProtnRackTrvlLimrEna_Logl
#endif
#define Rte_Prm_EotProtnRackTrvlLimrEna_Logl() (EotProtn_Cal_EotProtnRackTrvlLimrEna)

#ifdef Rte_Prm_EotProtnRackTrvlLimrRng_Val
# undef Rte_Prm_EotProtnRackTrvlLimrRng_Val
#endif
#define Rte_Prm_EotProtnRackTrvlLimrRng_Val() (EotProtn_Cal_EotProtnRackTrvlLimrRng)

#ifdef Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val
# undef Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val
#endif
#define Rte_Prm_EotProtnRackTrvlLimrRngLimd_Val() (EotProtn_Cal_EotProtnRackTrvlLimrRngLimd)

#ifdef Rte_Prm_EotProtnRackTrvlLimrVehSpdThd_Val
# undef Rte_Prm_EotProtnRackTrvlLimrVehSpdThd_Val
#endif
#define Rte_Prm_EotProtnRackTrvlLimrVehSpdThd_Val() (EotProtn_Cal_EotProtnRackTrvlLimrVehSpdThd)

#ifdef Rte_Prm_EotProtnRunEotVelImpctAndSoftEndStop_Logl
# undef Rte_Prm_EotProtnRunEotVelImpctAndSoftEndStop_Logl
#endif
#define Rte_Prm_EotProtnRunEotVelImpctAndSoftEndStop_Logl() (EotProtn_Cal_EotProtnRunEotVelImpctAndSoftEndStop)

#ifdef Rte_Prm_EotProtnSoftEndStopAuthyThd_Val
# undef Rte_Prm_EotProtnSoftEndStopAuthyThd_Val
#endif
#define Rte_Prm_EotProtnSoftEndStopAuthyThd_Val() (EotProtn_Cal_EotProtnSoftEndStopAuthyThd)

#ifdef Rte_Prm_EotProtnSoftEndStopEna_Logl
# undef Rte_Prm_EotProtnSoftEndStopEna_Logl
#endif
#define Rte_Prm_EotProtnSoftEndStopEna_Logl() (EotProtn_Cal_EotProtnSoftEndStopEna)

#ifdef Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val
# undef Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val
#endif
#define Rte_Prm_EotProtnSoftEndStopVehSpdThd_Val() (EotProtn_Cal_EotProtnSoftEndStopVehSpdThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dEotProtnDampg
# undef Rte_Pim_dEotProtnDampg
#endif
#define Rte_Pim_dEotProtnDampg() (&EotProtn_Pim_dEotProtnDampg)

#ifdef Rte_Pim_dEotProtnDetd
# undef Rte_Pim_dEotProtnDetd
#endif
#define Rte_Pim_dEotProtnDetd() (&EotProtn_Pim_dEotProtnDetd)

#ifdef Rte_Pim_dEotProtnEntrGain
# undef Rte_Pim_dEotProtnEntrGain
#endif
#define Rte_Pim_dEotProtnEntrGain() (&EotProtn_Pim_dEotProtnEntrGain)

#ifdef Rte_Pim_dEotProtnEotAssiSca
# undef Rte_Pim_dEotProtnEotAssiSca
#endif
#define Rte_Pim_dEotProtnEotAssiSca() (&EotProtn_Pim_dEotProtnEotAssiSca)

#ifdef Rte_Pim_dEotProtnEotGain
# undef Rte_Pim_dEotProtnEotGain
#endif
#define Rte_Pim_dEotProtnEotGain() (&EotProtn_Pim_dEotProtnEotGain)

#ifdef Rte_Pim_dEotProtnExitGain
# undef Rte_Pim_dEotProtnExitGain
#endif
#define Rte_Pim_dEotProtnExitGain() (&EotProtn_Pim_dEotProtnExitGain)

#ifdef Rte_Pim_dEotProtnLimPosn
# undef Rte_Pim_dEotProtnLimPosn
#endif
#define Rte_Pim_dEotProtnLimPosn() (&EotProtn_Pim_dEotProtnLimPosn)

#ifdef Rte_Pim_dEotProtnRackTrvlLimrDi
# undef Rte_Pim_dEotProtnRackTrvlLimrDi
#endif
#define Rte_Pim_dEotProtnRackTrvlLimrDi() (&EotProtn_Pim_dEotProtnRackTrvlLimrDi)

#ifdef Rte_Pim_EotAssiScaLpFil
# undef Rte_Pim_EotAssiScaLpFil
#endif
#define Rte_Pim_EotAssiScaLpFil() (&EotProtn_Pim_EotAssiScaLpFil)

#ifdef Rte_Pim_HwTqLpFil
# undef Rte_Pim_HwTqLpFil
#endif
#define Rte_Pim_HwTqLpFil() (&EotProtn_Pim_HwTqLpFil)

#ifdef Rte_Pim_NewSoftEndStopSt
# undef Rte_Pim_NewSoftEndStopSt
#endif
#define Rte_Pim_NewSoftEndStopSt() (&EotProtn_Pim_NewSoftEndStopSt)

#ifdef Rte_Pim_PrevEotAssiSca
# undef Rte_Pim_PrevEotAssiSca
#endif
#define Rte_Pim_PrevEotAssiSca() (&EotProtn_Pim_PrevEotAssiSca)

#ifdef Rte_Pim_PrevEotDampg
# undef Rte_Pim_PrevEotDampg
#endif
#define Rte_Pim_PrevEotDampg() (&EotProtn_Pim_PrevEotDampg)

#ifdef Rte_Pim_PrevImpctPosn
# undef Rte_Pim_PrevImpctPosn
#endif
#define Rte_Pim_PrevImpctPosn() (&EotProtn_Pim_PrevImpctPosn)

#ifdef Rte_Pim_PrevRackTrvlLimrEna
# undef Rte_Pim_PrevRackTrvlLimrEna
#endif
#define Rte_Pim_PrevRackTrvlLimrEna() (&EotProtn_Pim_PrevRackTrvlLimrEna)

#ifdef Rte_Pim_PrevRackTrvlLimrInin
# undef Rte_Pim_PrevRackTrvlLimrInin
#endif
#define Rte_Pim_PrevRackTrvlLimrInin() (&EotProtn_Pim_PrevRackTrvlLimrInin)

#ifdef Rte_Pim_PrevSoftEndStopSt
# undef Rte_Pim_PrevSoftEndStopSt
#endif
#define Rte_Pim_PrevSoftEndStopSt() (&EotProtn_Pim_PrevSoftEndStopSt)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
