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
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Ip_AssiCmdBas;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Ip_HwTq;
extern VAR(boolean, AUTOMATIC) InertiaCmpVel_Ip_InertiaCmpDecelGainDi;
extern VAR(boolean, AUTOMATIC) InertiaCmpVel_Ip_InertiaCmpVelCmdDi;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Ip_MotVelCrf;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Ip_VehLgtA;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Ip_VehSpd;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Ip_WhlImbRejctnAmp;

/* Outputs */
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Op_InertiaCmpVelCmd;

/* Calibrations */
extern CONST(u4p12, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgCoeffX[10];
extern CONST(u0p16, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY[10];
extern CONST(u0p16, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgRollgY[10];
extern CONST(u0p16, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY[10];
extern CONST(u0p16, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgStatY[10];
extern CONST(u2p14, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelCmdScaY[12];
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGain;
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGainFallSlew;
extern CONST(u11p5, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGainRisngSlewX[6];
extern CONST(u13p3, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGainRisngSlewY[6];
extern CONST(u7p9, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgFilFrq[12];
extern CONST(u7p9, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgFilFrqWhlImbRejctnOn[12];
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgGainOffThd;
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgGainOnThd;
extern CONST(u1p15, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgSpdBlndY[12];
extern CONST(u4p12, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgWhlImbRejctnBlndX[5];
extern CONST(u1p15, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDampgWhlImbRejctnBlndY[5];
extern CONST(boolean, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelDecelGainEnaCal;
extern CONST(u4p12, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelModWhlImbRejctnBlndX[2];
extern CONST(u1p15, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelModWhlImbRejctnBlndY[2];
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelMotInertia;
extern CONST(u12p4, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelMotVelBasdOutpScagX[2];
extern CONST(u1p15, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelMotVelBasdOutpScagY[2];
extern CONST(u1p15, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelNotchBlndY[12];
extern CONST(FilNotchGainRec1, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelNotchFilStruct[1];
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelTqSnsrVelFilFrq;
extern CONST(u2p14, AUTOMATIC) InertiaCmpVel_Cal_InertiaCmpVelTqSnsrVelSca[12];
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_SysGlbPrmSysKineRat;
extern CONST(float32, AUTOMATIC) InertiaCmpVel_Cal_SysGlbPrmTorsBarStfn;
extern CONST(u9p7, AUTOMATIC) InertiaCmpVel_Cal_SysGlbPrmVehSpdBilnrSeln[12];

/* PIMs */
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelAssiBasdDampgCoeff;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelCalcdInertiaCmp;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelFilFrq;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelMotVelBasdOutpScag;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelNotScadDrvrVel;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelNotchBlndVal;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelNotchInpVal;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelNotchOutpVal;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelRawDecelGain;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelScadDrvrVel;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_dInertiaCmpVelTqSnsrVelFildVal;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_DecelGain;
extern VAR(boolean, AUTOMATIC) InertiaCmpVel_Pim_NotchFilChk;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_PreScagCmpCmdPrev1;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_PreScagCmpCmdPrev2;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_ScaDrvrVelPrev1;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_ScaDrvrVelPrev2;
extern VAR(float32, AUTOMATIC) InertiaCmpVel_Pim_TqSnsrAgPrev;
extern VAR(FilLpRec1, AUTOMATIC) InertiaCmpVel_Pim_TqSnsrVelFil;
extern VAR(FilNotchStRec1, AUTOMATIC) InertiaCmpVel_Pim_TqSnsrVelFilNotchSt;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AssiCmdBas_Val
# undef Rte_Read_AssiCmdBas_Val
#endif
#define Rte_Read_AssiCmdBas_Val(data) (*(data) = InertiaCmpVel_Ip_AssiCmdBas)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = InertiaCmpVel_Ip_HwTq)

#ifdef Rte_Read_InertiaCmpDecelGainDi_Logl
# undef Rte_Read_InertiaCmpDecelGainDi_Logl
#endif
#define Rte_Read_InertiaCmpDecelGainDi_Logl(data) (*(data) = InertiaCmpVel_Ip_InertiaCmpDecelGainDi)

#ifdef Rte_Read_InertiaCmpVelCmdDi_Logl
# undef Rte_Read_InertiaCmpVelCmdDi_Logl
#endif
#define Rte_Read_InertiaCmpVelCmdDi_Logl(data) (*(data) = InertiaCmpVel_Ip_InertiaCmpVelCmdDi)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = InertiaCmpVel_Ip_MotVelCrf)

#ifdef Rte_Read_VehLgtA_Val
# undef Rte_Read_VehLgtA_Val
#endif
#define Rte_Read_VehLgtA_Val(data) (*(data) = InertiaCmpVel_Ip_VehLgtA)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = InertiaCmpVel_Ip_VehSpd)

#ifdef Rte_Read_WhlImbRejctnAmp_Val
# undef Rte_Read_WhlImbRejctnAmp_Val
#endif
#define Rte_Read_WhlImbRejctnAmp_Val(data) (*(data) = InertiaCmpVel_Ip_WhlImbRejctnAmp)


/*** Output Stubs ***/

#ifdef Rte_Write_InertiaCmpVelCmd_Val
# undef Rte_Write_InertiaCmpVelCmd_Val
#endif
#define Rte_Write_InertiaCmpVelCmd_Val(data) (InertiaCmpVel_Op_InertiaCmpVelCmd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D
# undef Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgCoeffX[0]))

#ifdef Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D
# undef Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY[0]))

#ifdef Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D
# undef Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgRollgY[0]))

#ifdef Rte_Prm_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D
# undef Rte_Prm_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY[0]))

#ifdef Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D
# undef Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelAssiBasdDampgStatY[0]))

#ifdef Rte_Prm_InertiaCmpVelCmdScaY_Ary1D
# undef Rte_Prm_InertiaCmpVelCmdScaY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelCmdScaY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelCmdScaY[0]))

#ifdef Rte_Prm_InertiaCmpVelDampgDecelGain_Val
# undef Rte_Prm_InertiaCmpVelDampgDecelGain_Val
#endif
#define Rte_Prm_InertiaCmpVelDampgDecelGain_Val() (InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGain)

#ifdef Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val
# undef Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val
#endif
#define Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val() (InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGainFallSlew)

#ifdef Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D
# undef Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGainRisngSlewX[0]))

#ifdef Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D
# undef Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelDampgDecelGainRisngSlewY[0]))

#ifdef Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D
# undef Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelDampgFilFrq[0]))

#ifdef Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D
# undef Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelDampgFilFrqWhlImbRejctnOn[0]))

#ifdef Rte_Prm_InertiaCmpVelDampgGainOffThd_Val
# undef Rte_Prm_InertiaCmpVelDampgGainOffThd_Val
#endif
#define Rte_Prm_InertiaCmpVelDampgGainOffThd_Val() (InertiaCmpVel_Cal_InertiaCmpVelDampgGainOffThd)

#ifdef Rte_Prm_InertiaCmpVelDampgGainOnThd_Val
# undef Rte_Prm_InertiaCmpVelDampgGainOnThd_Val
#endif
#define Rte_Prm_InertiaCmpVelDampgGainOnThd_Val() (InertiaCmpVel_Cal_InertiaCmpVelDampgGainOnThd)

#ifdef Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D
# undef Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelDampgSpdBlndY[0]))

#ifdef Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D
# undef Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelDampgWhlImbRejctnBlndX[0]))

#ifdef Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D
# undef Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelDampgWhlImbRejctnBlndY[0]))

#ifdef Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl
# undef Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl
#endif
#define Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl() (InertiaCmpVel_Cal_InertiaCmpVelDecelGainEnaCal)

#ifdef Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D
# undef Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelModWhlImbRejctnBlndX[0]))

#ifdef Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D
# undef Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelModWhlImbRejctnBlndY[0]))

#ifdef Rte_Prm_InertiaCmpVelMotInertia_Val
# undef Rte_Prm_InertiaCmpVelMotInertia_Val
#endif
#define Rte_Prm_InertiaCmpVelMotInertia_Val() (InertiaCmpVel_Cal_InertiaCmpVelMotInertia)

#ifdef Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D
# undef Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelMotVelBasdOutpScagX[0]))

#ifdef Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D
# undef Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelMotVelBasdOutpScagY[0]))

#ifdef Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D
# undef Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelNotchBlndY[0]))

#ifdef Rte_Prm_InertiaCmpVelNotchFilStruct_Ary1D
# undef Rte_Prm_InertiaCmpVelNotchFilStruct_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelNotchFilStruct_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelNotchFilStruct[0]))

#ifdef Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val
# undef Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val
#endif
#define Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val() (InertiaCmpVel_Cal_InertiaCmpVelTqSnsrVelFilFrq)

#ifdef Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D
# undef Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D
#endif
#define Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D() (&(InertiaCmpVel_Cal_InertiaCmpVelTqSnsrVelSca[0]))

#ifdef Rte_Prm_SysGlbPrmSysKineRat_Val
# undef Rte_Prm_SysGlbPrmSysKineRat_Val
#endif
#define Rte_Prm_SysGlbPrmSysKineRat_Val() (InertiaCmpVel_Cal_SysGlbPrmSysKineRat)

#ifdef Rte_Prm_SysGlbPrmTorsBarStfn_Val
# undef Rte_Prm_SysGlbPrmTorsBarStfn_Val
#endif
#define Rte_Prm_SysGlbPrmTorsBarStfn_Val() (InertiaCmpVel_Cal_SysGlbPrmTorsBarStfn)

#ifdef Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D
# undef Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D
#endif
#define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D() (&(InertiaCmpVel_Cal_SysGlbPrmVehSpdBilnrSeln[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff
# undef Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff
#endif
#define Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff() (&InertiaCmpVel_Pim_dInertiaCmpVelAssiBasdDampgCoeff)

#ifdef Rte_Pim_dInertiaCmpVelCalcdInertiaCmp
# undef Rte_Pim_dInertiaCmpVelCalcdInertiaCmp
#endif
#define Rte_Pim_dInertiaCmpVelCalcdInertiaCmp() (&InertiaCmpVel_Pim_dInertiaCmpVelCalcdInertiaCmp)

#ifdef Rte_Pim_dInertiaCmpVelFilFrq
# undef Rte_Pim_dInertiaCmpVelFilFrq
#endif
#define Rte_Pim_dInertiaCmpVelFilFrq() (&InertiaCmpVel_Pim_dInertiaCmpVelFilFrq)

#ifdef Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag
# undef Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag
#endif
#define Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag() (&InertiaCmpVel_Pim_dInertiaCmpVelMotVelBasdOutpScag)

#ifdef Rte_Pim_dInertiaCmpVelNotScadDrvrVel
# undef Rte_Pim_dInertiaCmpVelNotScadDrvrVel
#endif
#define Rte_Pim_dInertiaCmpVelNotScadDrvrVel() (&InertiaCmpVel_Pim_dInertiaCmpVelNotScadDrvrVel)

#ifdef Rte_Pim_dInertiaCmpVelNotchBlndVal
# undef Rte_Pim_dInertiaCmpVelNotchBlndVal
#endif
#define Rte_Pim_dInertiaCmpVelNotchBlndVal() (&InertiaCmpVel_Pim_dInertiaCmpVelNotchBlndVal)

#ifdef Rte_Pim_dInertiaCmpVelNotchInpVal
# undef Rte_Pim_dInertiaCmpVelNotchInpVal
#endif
#define Rte_Pim_dInertiaCmpVelNotchInpVal() (&InertiaCmpVel_Pim_dInertiaCmpVelNotchInpVal)

#ifdef Rte_Pim_dInertiaCmpVelNotchOutpVal
# undef Rte_Pim_dInertiaCmpVelNotchOutpVal
#endif
#define Rte_Pim_dInertiaCmpVelNotchOutpVal() (&InertiaCmpVel_Pim_dInertiaCmpVelNotchOutpVal)

#ifdef Rte_Pim_dInertiaCmpVelRawDecelGain
# undef Rte_Pim_dInertiaCmpVelRawDecelGain
#endif
#define Rte_Pim_dInertiaCmpVelRawDecelGain() (&InertiaCmpVel_Pim_dInertiaCmpVelRawDecelGain)

#ifdef Rte_Pim_dInertiaCmpVelScadDrvrVel
# undef Rte_Pim_dInertiaCmpVelScadDrvrVel
#endif
#define Rte_Pim_dInertiaCmpVelScadDrvrVel() (&InertiaCmpVel_Pim_dInertiaCmpVelScadDrvrVel)

#ifdef Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal
# undef Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal
#endif
#define Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal() (&InertiaCmpVel_Pim_dInertiaCmpVelTqSnsrVelFildVal)

#ifdef Rte_Pim_DecelGain
# undef Rte_Pim_DecelGain
#endif
#define Rte_Pim_DecelGain() (&InertiaCmpVel_Pim_DecelGain)

#ifdef Rte_Pim_NotchFilChk
# undef Rte_Pim_NotchFilChk
#endif
#define Rte_Pim_NotchFilChk() (&InertiaCmpVel_Pim_NotchFilChk)

#ifdef Rte_Pim_PreScagCmpCmdPrev1
# undef Rte_Pim_PreScagCmpCmdPrev1
#endif
#define Rte_Pim_PreScagCmpCmdPrev1() (&InertiaCmpVel_Pim_PreScagCmpCmdPrev1)

#ifdef Rte_Pim_PreScagCmpCmdPrev2
# undef Rte_Pim_PreScagCmpCmdPrev2
#endif
#define Rte_Pim_PreScagCmpCmdPrev2() (&InertiaCmpVel_Pim_PreScagCmpCmdPrev2)

#ifdef Rte_Pim_ScaDrvrVelPrev1
# undef Rte_Pim_ScaDrvrVelPrev1
#endif
#define Rte_Pim_ScaDrvrVelPrev1() (&InertiaCmpVel_Pim_ScaDrvrVelPrev1)

#ifdef Rte_Pim_ScaDrvrVelPrev2
# undef Rte_Pim_ScaDrvrVelPrev2
#endif
#define Rte_Pim_ScaDrvrVelPrev2() (&InertiaCmpVel_Pim_ScaDrvrVelPrev2)

#ifdef Rte_Pim_TqSnsrAgPrev
# undef Rte_Pim_TqSnsrAgPrev
#endif
#define Rte_Pim_TqSnsrAgPrev() (&InertiaCmpVel_Pim_TqSnsrAgPrev)

#ifdef Rte_Pim_TqSnsrVelFil
# undef Rte_Pim_TqSnsrVelFil
#endif
#define Rte_Pim_TqSnsrVelFil() (&InertiaCmpVel_Pim_TqSnsrVelFil)

#ifdef Rte_Pim_TqSnsrVelFilNotchSt
# undef Rte_Pim_TqSnsrVelFilNotchSt
#endif
#define Rte_Pim_TqSnsrVelFilNotchSt() (&InertiaCmpVel_Pim_TqSnsrVelFilNotchSt)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
