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
extern VAR(float32, AUTOMATIC) Dampg_Ip_AssiCmdBas;
extern VAR(float32, AUTOMATIC) Dampg_Ip_AssiMechT;
extern VAR(boolean, AUTOMATIC) Dampg_Ip_DampgCmdBasDi;
extern VAR(float32, AUTOMATIC) Dampg_Ip_DampgCmdOvrl;
extern VAR(float32, AUTOMATIC) Dampg_Ip_DampgCmdSca;
extern VAR(float32, AUTOMATIC) Dampg_Ip_HwTq;
extern VAR(float32, AUTOMATIC) Dampg_Ip_MotVelCrf;
extern VAR(float32, AUTOMATIC) Dampg_Ip_VehSpd;

/* Outputs */
extern VAR(float32, AUTOMATIC) Dampg_Op_DampgCmdBas;

/* Calibrations */
extern CONST(u8p8, AUTOMATIC) Dampg_Cal_DampgHwTqX[2];
extern CONST(u1p15, AUTOMATIC) Dampg_Cal_DampgHwTqY[2];
extern CONST(u4p12, AUTOMATIC) Dampg_Cal_DampgHydAssiLim[12];
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgHydBasCoeff1;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgHydBasCoeff2;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgHydBasCoeff3;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgHydBasCoeff4;
extern CONST(u4p12, AUTOMATIC) Dampg_Cal_DampgHydCoeff1ScaY[12];
extern CONST(u4p12, AUTOMATIC) Dampg_Cal_DampgHydCoeff2ScaY[12];
extern CONST(u4p12, AUTOMATIC) Dampg_Cal_DampgHydCoeff3ScaY[12];
extern CONST(u4p12, AUTOMATIC) Dampg_Cal_DampgHydCoeff4ScaY[12];
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgHydOutpLim;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgMotVelLpFilFrq;
extern CONST(u12p4, AUTOMATIC) Dampg_Cal_DampgMotVelX[12][13];
extern CONST(u5p11, AUTOMATIC) Dampg_Cal_DampgMotVelY[12][13];
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgQuad13Mplr;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgQuad24Mplr;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgQuadHwTqBacklsh;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgQuadHwTqLpFilFrq;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgQuadMotVelBacklsh;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgQuadMotVelLpFilFrq;
extern CONST(float32, AUTOMATIC) Dampg_Cal_DampgQuadScaLpFilFrq;
extern CONST(s8p7, AUTOMATIC) Dampg_Cal_DampgTScaX[14];
extern CONST(u4p12, AUTOMATIC) Dampg_Cal_DampgTScaY[14];
extern CONST(u9p7, AUTOMATIC) Dampg_Cal_SysGlbPrmVehSpdBilnrSeln[12];

/* PIMs */
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgAssiMechTSca;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgCoeff1Term;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgCoeff2Term;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgCoeff3Term;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgCoeff4Term;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgHwTqSca;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgMotVelDampgCmd;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgQuadHwTqBacklsh;
extern VAR(float32, AUTOMATIC) Dampg_Pim_dDampgQuadMotVelBacklsh;
extern VAR(FilLpRec1, AUTOMATIC) Dampg_Pim_MotVelDampgLpFil;
extern VAR(float32, AUTOMATIC) Dampg_Pim_PrevHwTqBacklshOutp;
extern VAR(float32, AUTOMATIC) Dampg_Pim_PrevMotVelBacklshOutp;
extern VAR(FilLpRec1, AUTOMATIC) Dampg_Pim_QuadDampgHwTqLpFil;
extern VAR(FilLpRec1, AUTOMATIC) Dampg_Pim_QuadDampgMotVelLpFil;
extern VAR(FilLpRec1, AUTOMATIC) Dampg_Pim_QuadDampgScaLpFil;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AssiCmdBas_Val
# undef Rte_Read_AssiCmdBas_Val
#endif
#define Rte_Read_AssiCmdBas_Val(data) (*(data) = Dampg_Ip_AssiCmdBas)

#ifdef Rte_Read_AssiMechT_Val
# undef Rte_Read_AssiMechT_Val
#endif
#define Rte_Read_AssiMechT_Val(data) (*(data) = Dampg_Ip_AssiMechT)

#ifdef Rte_Read_DampgCmdBasDi_Logl
# undef Rte_Read_DampgCmdBasDi_Logl
#endif
#define Rte_Read_DampgCmdBasDi_Logl(data) (*(data) = Dampg_Ip_DampgCmdBasDi)

#ifdef Rte_Read_DampgCmdOvrl_Val
# undef Rte_Read_DampgCmdOvrl_Val
#endif
#define Rte_Read_DampgCmdOvrl_Val(data) (*(data) = Dampg_Ip_DampgCmdOvrl)

#ifdef Rte_Read_DampgCmdSca_Val
# undef Rte_Read_DampgCmdSca_Val
#endif
#define Rte_Read_DampgCmdSca_Val(data) (*(data) = Dampg_Ip_DampgCmdSca)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = Dampg_Ip_HwTq)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = Dampg_Ip_MotVelCrf)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = Dampg_Ip_VehSpd)


/*** Output Stubs ***/

#ifdef Rte_Write_DampgCmdBas_Val
# undef Rte_Write_DampgCmdBas_Val
#endif
#define Rte_Write_DampgCmdBas_Val(data) (Dampg_Op_DampgCmdBas = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DampgHwTqX_Ary1D
# undef Rte_Prm_DampgHwTqX_Ary1D
#endif
#define Rte_Prm_DampgHwTqX_Ary1D() (&(Dampg_Cal_DampgHwTqX[0]))

#ifdef Rte_Prm_DampgHwTqY_Ary1D
# undef Rte_Prm_DampgHwTqY_Ary1D
#endif
#define Rte_Prm_DampgHwTqY_Ary1D() (&(Dampg_Cal_DampgHwTqY[0]))

#ifdef Rte_Prm_DampgHydAssiLim_Ary1D
# undef Rte_Prm_DampgHydAssiLim_Ary1D
#endif
#define Rte_Prm_DampgHydAssiLim_Ary1D() (&(Dampg_Cal_DampgHydAssiLim[0]))

#ifdef Rte_Prm_DampgHydBasCoeff1_Val
# undef Rte_Prm_DampgHydBasCoeff1_Val
#endif
#define Rte_Prm_DampgHydBasCoeff1_Val() (Dampg_Cal_DampgHydBasCoeff1)

#ifdef Rte_Prm_DampgHydBasCoeff2_Val
# undef Rte_Prm_DampgHydBasCoeff2_Val
#endif
#define Rte_Prm_DampgHydBasCoeff2_Val() (Dampg_Cal_DampgHydBasCoeff2)

#ifdef Rte_Prm_DampgHydBasCoeff3_Val
# undef Rte_Prm_DampgHydBasCoeff3_Val
#endif
#define Rte_Prm_DampgHydBasCoeff3_Val() (Dampg_Cal_DampgHydBasCoeff3)

#ifdef Rte_Prm_DampgHydBasCoeff4_Val
# undef Rte_Prm_DampgHydBasCoeff4_Val
#endif
#define Rte_Prm_DampgHydBasCoeff4_Val() (Dampg_Cal_DampgHydBasCoeff4)

#ifdef Rte_Prm_DampgHydCoeff1ScaY_Ary1D
# undef Rte_Prm_DampgHydCoeff1ScaY_Ary1D
#endif
#define Rte_Prm_DampgHydCoeff1ScaY_Ary1D() (&(Dampg_Cal_DampgHydCoeff1ScaY[0]))

#ifdef Rte_Prm_DampgHydCoeff2ScaY_Ary1D
# undef Rte_Prm_DampgHydCoeff2ScaY_Ary1D
#endif
#define Rte_Prm_DampgHydCoeff2ScaY_Ary1D() (&(Dampg_Cal_DampgHydCoeff2ScaY[0]))

#ifdef Rte_Prm_DampgHydCoeff3ScaY_Ary1D
# undef Rte_Prm_DampgHydCoeff3ScaY_Ary1D
#endif
#define Rte_Prm_DampgHydCoeff3ScaY_Ary1D() (&(Dampg_Cal_DampgHydCoeff3ScaY[0]))

#ifdef Rte_Prm_DampgHydCoeff4ScaY_Ary1D
# undef Rte_Prm_DampgHydCoeff4ScaY_Ary1D
#endif
#define Rte_Prm_DampgHydCoeff4ScaY_Ary1D() (&(Dampg_Cal_DampgHydCoeff4ScaY[0]))

#ifdef Rte_Prm_DampgHydOutpLim_Val
# undef Rte_Prm_DampgHydOutpLim_Val
#endif
#define Rte_Prm_DampgHydOutpLim_Val() (Dampg_Cal_DampgHydOutpLim)

#ifdef Rte_Prm_DampgMotVelLpFilFrq_Val
# undef Rte_Prm_DampgMotVelLpFilFrq_Val
#endif
#define Rte_Prm_DampgMotVelLpFilFrq_Val() (Dampg_Cal_DampgMotVelLpFilFrq)

#ifdef Rte_Prm_DampgMotVelX_Ary2D
# undef Rte_Prm_DampgMotVelX_Ary2D
#endif
#define Rte_Prm_DampgMotVelX_Ary2D() (&(Dampg_Cal_DampgMotVelX[0][0]))

#ifdef Rte_Prm_DampgMotVelY_Ary2D
# undef Rte_Prm_DampgMotVelY_Ary2D
#endif
#define Rte_Prm_DampgMotVelY_Ary2D() (&(Dampg_Cal_DampgMotVelY[0][0]))

#ifdef Rte_Prm_DampgQuad13Mplr_Val
# undef Rte_Prm_DampgQuad13Mplr_Val
#endif
#define Rte_Prm_DampgQuad13Mplr_Val() (Dampg_Cal_DampgQuad13Mplr)

#ifdef Rte_Prm_DampgQuad24Mplr_Val
# undef Rte_Prm_DampgQuad24Mplr_Val
#endif
#define Rte_Prm_DampgQuad24Mplr_Val() (Dampg_Cal_DampgQuad24Mplr)

#ifdef Rte_Prm_DampgQuadHwTqBacklsh_Val
# undef Rte_Prm_DampgQuadHwTqBacklsh_Val
#endif
#define Rte_Prm_DampgQuadHwTqBacklsh_Val() (Dampg_Cal_DampgQuadHwTqBacklsh)

#ifdef Rte_Prm_DampgQuadHwTqLpFilFrq_Val
# undef Rte_Prm_DampgQuadHwTqLpFilFrq_Val
#endif
#define Rte_Prm_DampgQuadHwTqLpFilFrq_Val() (Dampg_Cal_DampgQuadHwTqLpFilFrq)

#ifdef Rte_Prm_DampgQuadMotVelBacklsh_Val
# undef Rte_Prm_DampgQuadMotVelBacklsh_Val
#endif
#define Rte_Prm_DampgQuadMotVelBacklsh_Val() (Dampg_Cal_DampgQuadMotVelBacklsh)

#ifdef Rte_Prm_DampgQuadMotVelLpFilFrq_Val
# undef Rte_Prm_DampgQuadMotVelLpFilFrq_Val
#endif
#define Rte_Prm_DampgQuadMotVelLpFilFrq_Val() (Dampg_Cal_DampgQuadMotVelLpFilFrq)

#ifdef Rte_Prm_DampgQuadScaLpFilFrq_Val
# undef Rte_Prm_DampgQuadScaLpFilFrq_Val
#endif
#define Rte_Prm_DampgQuadScaLpFilFrq_Val() (Dampg_Cal_DampgQuadScaLpFilFrq)

#ifdef Rte_Prm_DampgTScaX_Ary1D
# undef Rte_Prm_DampgTScaX_Ary1D
#endif
#define Rte_Prm_DampgTScaX_Ary1D() (&(Dampg_Cal_DampgTScaX[0]))

#ifdef Rte_Prm_DampgTScaY_Ary1D
# undef Rte_Prm_DampgTScaY_Ary1D
#endif
#define Rte_Prm_DampgTScaY_Ary1D() (&(Dampg_Cal_DampgTScaY[0]))

#ifdef Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D
# undef Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D
#endif
#define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D() (&(Dampg_Cal_SysGlbPrmVehSpdBilnrSeln[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dDampgAssiMechTSca
# undef Rte_Pim_dDampgAssiMechTSca
#endif
#define Rte_Pim_dDampgAssiMechTSca() (&Dampg_Pim_dDampgAssiMechTSca)

#ifdef Rte_Pim_dDampgCoeff1Term
# undef Rte_Pim_dDampgCoeff1Term
#endif
#define Rte_Pim_dDampgCoeff1Term() (&Dampg_Pim_dDampgCoeff1Term)

#ifdef Rte_Pim_dDampgCoeff2Term
# undef Rte_Pim_dDampgCoeff2Term
#endif
#define Rte_Pim_dDampgCoeff2Term() (&Dampg_Pim_dDampgCoeff2Term)

#ifdef Rte_Pim_dDampgCoeff3Term
# undef Rte_Pim_dDampgCoeff3Term
#endif
#define Rte_Pim_dDampgCoeff3Term() (&Dampg_Pim_dDampgCoeff3Term)

#ifdef Rte_Pim_dDampgCoeff4Term
# undef Rte_Pim_dDampgCoeff4Term
#endif
#define Rte_Pim_dDampgCoeff4Term() (&Dampg_Pim_dDampgCoeff4Term)

#ifdef Rte_Pim_dDampgHwTqSca
# undef Rte_Pim_dDampgHwTqSca
#endif
#define Rte_Pim_dDampgHwTqSca() (&Dampg_Pim_dDampgHwTqSca)

#ifdef Rte_Pim_dDampgMotVelDampgCmd
# undef Rte_Pim_dDampgMotVelDampgCmd
#endif
#define Rte_Pim_dDampgMotVelDampgCmd() (&Dampg_Pim_dDampgMotVelDampgCmd)

#ifdef Rte_Pim_dDampgQuadHwTqBacklsh
# undef Rte_Pim_dDampgQuadHwTqBacklsh
#endif
#define Rte_Pim_dDampgQuadHwTqBacklsh() (&Dampg_Pim_dDampgQuadHwTqBacklsh)

#ifdef Rte_Pim_dDampgQuadMotVelBacklsh
# undef Rte_Pim_dDampgQuadMotVelBacklsh
#endif
#define Rte_Pim_dDampgQuadMotVelBacklsh() (&Dampg_Pim_dDampgQuadMotVelBacklsh)

#ifdef Rte_Pim_MotVelDampgLpFil
# undef Rte_Pim_MotVelDampgLpFil
#endif
#define Rte_Pim_MotVelDampgLpFil() (&Dampg_Pim_MotVelDampgLpFil)

#ifdef Rte_Pim_PrevHwTqBacklshOutp
# undef Rte_Pim_PrevHwTqBacklshOutp
#endif
#define Rte_Pim_PrevHwTqBacklshOutp() (&Dampg_Pim_PrevHwTqBacklshOutp)

#ifdef Rte_Pim_PrevMotVelBacklshOutp
# undef Rte_Pim_PrevMotVelBacklshOutp
#endif
#define Rte_Pim_PrevMotVelBacklshOutp() (&Dampg_Pim_PrevMotVelBacklshOutp)

#ifdef Rte_Pim_QuadDampgHwTqLpFil
# undef Rte_Pim_QuadDampgHwTqLpFil
#endif
#define Rte_Pim_QuadDampgHwTqLpFil() (&Dampg_Pim_QuadDampgHwTqLpFil)

#ifdef Rte_Pim_QuadDampgMotVelLpFil
# undef Rte_Pim_QuadDampgMotVelLpFil
#endif
#define Rte_Pim_QuadDampgMotVelLpFil() (&Dampg_Pim_QuadDampgMotVelLpFil)

#ifdef Rte_Pim_QuadDampgScaLpFil
# undef Rte_Pim_QuadDampgScaLpFil
#endif
#define Rte_Pim_QuadDampgScaLpFil() (&Dampg_Pim_QuadDampgScaLpFil)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
