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
extern VAR(float32, AUTOMATIC) Assi_Ip_AssiCmdBasSca;
extern VAR(float32, AUTOMATIC) Assi_Ip_AssiLnrGain;
extern VAR(boolean, AUTOMATIC) Assi_Ip_AssiLnrGainEna;
extern VAR(float32, AUTOMATIC) Assi_Ip_HwTq;
extern VAR(float32, AUTOMATIC) Assi_Ip_HwTqHysOvrl;
extern VAR(float32, AUTOMATIC) Assi_Ip_HwTqOvrl;
extern VAR(float32, AUTOMATIC) Assi_Ip_ThermLimSlowFilMax;
extern VAR(float32, AUTOMATIC) Assi_Ip_VehSpd;
extern VAR(float32, AUTOMATIC) Assi_Ip_WhlImbRejctnAmp;

/* Outputs */
extern VAR(float32, AUTOMATIC) Assi_Op_AssiCmdBas;

/* Calibrations */
extern CONST(u8p8, AUTOMATIC) Assi_Cal_AssiMotTqWhlImbRejctnMaxX[12][20];
extern CONST(s4p11, AUTOMATIC) Assi_Cal_AssiMotTqWhlImbRejctnMaxY[12][20];
extern CONST(u8p8, AUTOMATIC) Assi_Cal_AssiMotTqWhlImbRejctnMinX[12][20];
extern CONST(s4p11, AUTOMATIC) Assi_Cal_AssiMotTqWhlImbRejctnMinY[12][20];
extern CONST(u16p0, AUTOMATIC) Assi_Cal_AssiThermScaX[2];
extern CONST(u2p14, AUTOMATIC) Assi_Cal_AssiThermScaY[2];
extern CONST(u5p11, AUTOMATIC) Assi_Cal_AssiWhlImbRejctnBlndScaX[12][5];
extern CONST(u2p14, AUTOMATIC) Assi_Cal_AssiWhlImbRejctnBlndScaY[12][5];
extern CONST(u9p7, AUTOMATIC) Assi_Cal_SysGlbPrmVehSpdBilnrSeln[12];

/* PIMs */
extern VAR(float32, AUTOMATIC) Assi_Pim_dAssiThermAssiSca;
extern VAR(float32, AUTOMATIC) Assi_Pim_dAssiWhlImbRejctnBlnd;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AssiCmdBasSca_Val
# undef Rte_Read_AssiCmdBasSca_Val
#endif
#define Rte_Read_AssiCmdBasSca_Val(data) (*(data) = Assi_Ip_AssiCmdBasSca)

#ifdef Rte_Read_AssiLnrGain_Val
# undef Rte_Read_AssiLnrGain_Val
#endif
#define Rte_Read_AssiLnrGain_Val(data) (*(data) = Assi_Ip_AssiLnrGain)

#ifdef Rte_Read_AssiLnrGainEna_Logl
# undef Rte_Read_AssiLnrGainEna_Logl
#endif
#define Rte_Read_AssiLnrGainEna_Logl(data) (*(data) = Assi_Ip_AssiLnrGainEna)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = Assi_Ip_HwTq)

#ifdef Rte_Read_HwTqHysOvrl_Val
# undef Rte_Read_HwTqHysOvrl_Val
#endif
#define Rte_Read_HwTqHysOvrl_Val(data) (*(data) = Assi_Ip_HwTqHysOvrl)

#ifdef Rte_Read_HwTqOvrl_Val
# undef Rte_Read_HwTqOvrl_Val
#endif
#define Rte_Read_HwTqOvrl_Val(data) (*(data) = Assi_Ip_HwTqOvrl)

#ifdef Rte_Read_ThermLimSlowFilMax_Val
# undef Rte_Read_ThermLimSlowFilMax_Val
#endif
#define Rte_Read_ThermLimSlowFilMax_Val(data) (*(data) = Assi_Ip_ThermLimSlowFilMax)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = Assi_Ip_VehSpd)

#ifdef Rte_Read_WhlImbRejctnAmp_Val
# undef Rte_Read_WhlImbRejctnAmp_Val
#endif
#define Rte_Read_WhlImbRejctnAmp_Val(data) (*(data) = Assi_Ip_WhlImbRejctnAmp)


/*** Output Stubs ***/

#ifdef Rte_Write_AssiCmdBas_Val
# undef Rte_Write_AssiCmdBas_Val
#endif
#define Rte_Write_AssiCmdBas_Val(data) (Assi_Op_AssiCmdBas = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D
# undef Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D
#endif
#define Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D() (&(Assi_Cal_AssiMotTqWhlImbRejctnMaxX[0][0]))

#ifdef Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D
# undef Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D
#endif
#define Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D() (&(Assi_Cal_AssiMotTqWhlImbRejctnMaxY[0][0]))

#ifdef Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D
# undef Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D
#endif
#define Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D() (&(Assi_Cal_AssiMotTqWhlImbRejctnMinX[0][0]))

#ifdef Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D
# undef Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D
#endif
#define Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D() (&(Assi_Cal_AssiMotTqWhlImbRejctnMinY[0][0]))

#ifdef Rte_Prm_AssiThermScaX_Ary1D
# undef Rte_Prm_AssiThermScaX_Ary1D
#endif
#define Rte_Prm_AssiThermScaX_Ary1D() (&(Assi_Cal_AssiThermScaX[0]))

#ifdef Rte_Prm_AssiThermScaY_Ary1D
# undef Rte_Prm_AssiThermScaY_Ary1D
#endif
#define Rte_Prm_AssiThermScaY_Ary1D() (&(Assi_Cal_AssiThermScaY[0]))

#ifdef Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D
# undef Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D
#endif
#define Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D() (&(Assi_Cal_AssiWhlImbRejctnBlndScaX[0][0]))

#ifdef Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D
# undef Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D
#endif
#define Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D() (&(Assi_Cal_AssiWhlImbRejctnBlndScaY[0][0]))

#ifdef Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D
# undef Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D
#endif
#define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D() (&(Assi_Cal_SysGlbPrmVehSpdBilnrSeln[0]))


/*** PIM Stubs ***/

#ifdef Rte_Pim_dAssiThermAssiSca
# undef Rte_Pim_dAssiThermAssiSca
#endif
#define Rte_Pim_dAssiThermAssiSca() (&Assi_Pim_dAssiThermAssiSca)

#ifdef Rte_Pim_dAssiWhlImbRejctnBlnd
# undef Rte_Pim_dAssiWhlImbRejctnBlnd
#endif
#define Rte_Pim_dAssiWhlImbRejctnBlnd() (&Assi_Pim_dAssiWhlImbRejctnBlnd)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
