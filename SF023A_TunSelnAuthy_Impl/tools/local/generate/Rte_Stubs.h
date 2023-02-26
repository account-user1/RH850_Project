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
extern VAR(float32, AUTOMATIC) TunSelnAuthy_Ip_HwTq;
extern VAR(float32, AUTOMATIC) TunSelnAuthy_Ip_HwVel;
extern VAR(boolean, AUTOMATIC) TunSelnAuthy_Ip_TunSelnRtDi;
extern VAR(float32, AUTOMATIC) TunSelnAuthy_Ip_VehSpd;

/* Calibrations */
extern CONST(u4p12, AUTOMATIC) TunSelnAuthy_Cal_TunSelnAuthyHwTqY[6];
extern CONST(u6p10, AUTOMATIC) TunSelnAuthy_Cal_TunSelnAuthyHwVelY[6];
extern CONST(boolean, AUTOMATIC) TunSelnAuthy_Cal_TunSelnAuthyTunSelnRtDiCmd;
extern CONST(u9p7, AUTOMATIC) TunSelnAuthy_Cal_TunSelnAuthyVehSpdX[6];

/* Arguments and Returns */
extern VAR(Std_ReturnType, AUTOMATIC) TunSelnAuthy_Cli_RtCalChgReq_Return;
extern VAR(Std_ReturnType, AUTOMATIC) TunSelnAuthy_Cli_XcpCalChgReq_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = TunSelnAuthy_Ip_HwTq)

#ifdef Rte_Read_HwVel_Val
# undef Rte_Read_HwVel_Val
#endif
#define Rte_Read_HwVel_Val(data) (*(data) = TunSelnAuthy_Ip_HwVel)

#ifdef Rte_Read_TunSelnRtDi_Logl
# undef Rte_Read_TunSelnRtDi_Logl
#endif
#define Rte_Read_TunSelnRtDi_Logl(data) (*(data) = TunSelnAuthy_Ip_TunSelnRtDi)

#ifdef Rte_Read_VehSpd_Val
# undef Rte_Read_VehSpd_Val
#endif
#define Rte_Read_VehSpd_Val(data) (*(data) = TunSelnAuthy_Ip_VehSpd)


/*** Calibration Stubs ***/

#ifdef Rte_Prm_TunSelnAuthyHwTqY_Ary1D
# undef Rte_Prm_TunSelnAuthyHwTqY_Ary1D
#endif
#define Rte_Prm_TunSelnAuthyHwTqY_Ary1D() (&(TunSelnAuthy_Cal_TunSelnAuthyHwTqY[0]))

#ifdef Rte_Prm_TunSelnAuthyHwVelY_Ary1D
# undef Rte_Prm_TunSelnAuthyHwVelY_Ary1D
#endif
#define Rte_Prm_TunSelnAuthyHwVelY_Ary1D() (&(TunSelnAuthy_Cal_TunSelnAuthyHwVelY[0]))

#ifdef Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl
# undef Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl
#endif
#define Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl() (TunSelnAuthy_Cal_TunSelnAuthyTunSelnRtDiCmd)

#ifdef Rte_Prm_TunSelnAuthyVehSpdX_Ary1D
# undef Rte_Prm_TunSelnAuthyVehSpdX_Ary1D
#endif
#define Rte_Prm_TunSelnAuthyVehSpdX_Ary1D() (&(TunSelnAuthy_Cal_TunSelnAuthyVehSpdX[0]))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
