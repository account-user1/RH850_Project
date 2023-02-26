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
extern VAR(sint8, AUTOMATIC) DrvrTqEstimn_Ip_AssiMechPolarity;
extern VAR(float32, AUTOMATIC) DrvrTqEstimn_Ip_HwAg;
extern VAR(float32, AUTOMATIC) DrvrTqEstimn_Ip_HwTq;
extern VAR(float32, AUTOMATIC) DrvrTqEstimn_Ip_MotTqCmdPwrLimd;
extern VAR(float32, AUTOMATIC) DrvrTqEstimn_Ip_MotVelCrf;

/* Outputs */
extern VAR(float32, AUTOMATIC) DrvrTqEstimn_Op_DrvrTqEstimd;

/* Calibrations */
extern CONST(float32, AUTOMATIC) DrvrTqEstimn_Cal_DrvrTqEstimnMtrxA[5][5];
extern CONST(float32, AUTOMATIC) DrvrTqEstimn_Cal_DrvrTqEstimnMtrxB[4][5];
extern CONST(float32, AUTOMATIC) DrvrTqEstimn_Cal_DrvrTqEstimnMtrxC[5];
extern CONST(float32, AUTOMATIC) DrvrTqEstimn_Cal_DrvrTqEstimnMtrxD[4];
extern CONST(float32, AUTOMATIC) DrvrTqEstimn_Cal_SysGlbPrmSysKineRat;
extern CONST(float32, AUTOMATIC) DrvrTqEstimn_Cal_SysGlbPrmSysTqRat;

/* PIMs */
extern VAR(float32, AUTOMATIC) DrvrTqEstimn_Pim_DrvrTqStPrev[5];

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AssiMechPolarity_Val
# undef Rte_Read_AssiMechPolarity_Val
#endif
#define Rte_Read_AssiMechPolarity_Val(data) (*(data) = DrvrTqEstimn_Ip_AssiMechPolarity)

#ifdef Rte_Read_HwAg_Val
# undef Rte_Read_HwAg_Val
#endif
#define Rte_Read_HwAg_Val(data) (*(data) = DrvrTqEstimn_Ip_HwAg)

#ifdef Rte_Read_HwTq_Val
# undef Rte_Read_HwTq_Val
#endif
#define Rte_Read_HwTq_Val(data) (*(data) = DrvrTqEstimn_Ip_HwTq)

#ifdef Rte_Read_MotTqCmdPwrLimd_Val
# undef Rte_Read_MotTqCmdPwrLimd_Val
#endif
#define Rte_Read_MotTqCmdPwrLimd_Val(data) (*(data) = DrvrTqEstimn_Ip_MotTqCmdPwrLimd)

#ifdef Rte_Read_MotVelCrf_Val
# undef Rte_Read_MotVelCrf_Val
#endif
#define Rte_Read_MotVelCrf_Val(data) (*(data) = DrvrTqEstimn_Ip_MotVelCrf)


/*** Output Stubs ***/

#ifdef Rte_Write_DrvrTqEstimd_Val
# undef Rte_Write_DrvrTqEstimd_Val
#endif
#define Rte_Write_DrvrTqEstimd_Val(data) (DrvrTqEstimn_Op_DrvrTqEstimd = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_DrvrTqEstimnMtrxA_Ary2D
# undef Rte_Prm_DrvrTqEstimnMtrxA_Ary2D
#endif
#define Rte_Prm_DrvrTqEstimnMtrxA_Ary2D() (&(DrvrTqEstimn_Cal_DrvrTqEstimnMtrxA[0][0]))

#ifdef Rte_Prm_DrvrTqEstimnMtrxB_Ary2D
# undef Rte_Prm_DrvrTqEstimnMtrxB_Ary2D
#endif
#define Rte_Prm_DrvrTqEstimnMtrxB_Ary2D() (&(DrvrTqEstimn_Cal_DrvrTqEstimnMtrxB[0][0]))

#ifdef Rte_Prm_DrvrTqEstimnMtrxC_Ary1D
# undef Rte_Prm_DrvrTqEstimnMtrxC_Ary1D
#endif
#define Rte_Prm_DrvrTqEstimnMtrxC_Ary1D() (&(DrvrTqEstimn_Cal_DrvrTqEstimnMtrxC[0]))

#ifdef Rte_Prm_DrvrTqEstimnMtrxD_Ary1D
# undef Rte_Prm_DrvrTqEstimnMtrxD_Ary1D
#endif
#define Rte_Prm_DrvrTqEstimnMtrxD_Ary1D() (&(DrvrTqEstimn_Cal_DrvrTqEstimnMtrxD[0]))

#ifdef Rte_Prm_SysGlbPrmSysKineRat_Val
# undef Rte_Prm_SysGlbPrmSysKineRat_Val
#endif
#define Rte_Prm_SysGlbPrmSysKineRat_Val() (DrvrTqEstimn_Cal_SysGlbPrmSysKineRat)

#ifdef Rte_Prm_SysGlbPrmSysTqRat_Val
# undef Rte_Prm_SysGlbPrmSysTqRat_Val
#endif
#define Rte_Prm_SysGlbPrmSysTqRat_Val() (DrvrTqEstimn_Cal_SysGlbPrmSysTqRat)


/*** PIM Stubs ***/

#ifdef Rte_Pim_DrvrTqStPrev
# undef Rte_Pim_DrvrTqStPrev
#endif
#define Rte_Pim_DrvrTqStPrev() (&(DrvrTqEstimn_Pim_DrvrTqStPrev[0]))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
