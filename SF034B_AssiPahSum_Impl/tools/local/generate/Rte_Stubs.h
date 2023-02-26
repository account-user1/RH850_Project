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
extern VAR(float32, AUTOMATIC) AssiPahSum_Ip_AssiCmdBas;
extern VAR(float32, AUTOMATIC) AssiPahSum_Ip_AssiHiFrqCmd;
extern VAR(float32, AUTOMATIC) AssiPahSum_Ip_HysCmpCmd;

/* Outputs */
extern VAR(float32, AUTOMATIC) AssiPahSum_Op_AssiCmdSum;

/* Calibrations */
extern CONST(float32, AUTOMATIC) AssiPahSum_Cal_AssiPahSumHysCmpLim;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AssiCmdBas_Val
# undef Rte_Read_AssiCmdBas_Val
#endif
#define Rte_Read_AssiCmdBas_Val(data) (*(data) = AssiPahSum_Ip_AssiCmdBas)

#ifdef Rte_Read_AssiHiFrqCmd_Val
# undef Rte_Read_AssiHiFrqCmd_Val
#endif
#define Rte_Read_AssiHiFrqCmd_Val(data) (*(data) = AssiPahSum_Ip_AssiHiFrqCmd)

#ifdef Rte_Read_HysCmpCmd_Val
# undef Rte_Read_HysCmpCmd_Val
#endif
#define Rte_Read_HysCmpCmd_Val(data) (*(data) = AssiPahSum_Ip_HysCmpCmd)


/*** Output Stubs ***/

#ifdef Rte_Write_AssiCmdSum_Val
# undef Rte_Write_AssiCmdSum_Val
#endif
#define Rte_Write_AssiCmdSum_Val(data) (AssiPahSum_Op_AssiCmdSum = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_AssiPahSumHysCmpLim_Val
# undef Rte_Prm_AssiPahSumHysCmpLim_Val
#endif
#define Rte_Prm_AssiPahSumHysCmpLim_Val() (AssiPahSum_Cal_AssiPahSumHysCmpLim)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
