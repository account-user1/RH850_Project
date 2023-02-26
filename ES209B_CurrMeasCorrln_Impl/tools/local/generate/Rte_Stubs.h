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
extern VAR(boolean, AUTOMATIC) CurrMeasCorrln_Ip_DiagcStsIvtr1Inactv;
extern VAR(float32, AUTOMATIC) CurrMeasCorrln_Ip_MotCurrCorrdA;
extern VAR(float32, AUTOMATIC) CurrMeasCorrln_Ip_MotCurrCorrdB;
extern VAR(float32, AUTOMATIC) CurrMeasCorrln_Ip_MotCurrCorrdC;
extern VAR(MotCurrEolCalSt2, AUTOMATIC) CurrMeasCorrln_Ip_MotCurrEolCalSt;
extern VAR(uint8, AUTOMATIC) CurrMeasCorrln_Ip_MotCurrRollgCntr1;
extern VAR(SysSt1, AUTOMATIC) CurrMeasCorrln_Ip_SysSt;

/* Outputs */
extern VAR(uint8, AUTOMATIC) CurrMeasCorrln_Op_CurrMeasCorrlnSts;
extern VAR(uint8, AUTOMATIC) CurrMeasCorrln_Op_CurrMeasIdptSig;
extern VAR(float32, AUTOMATIC) CurrMeasCorrln_Op_CurrMotSumABC;

/* Calibrations */
extern CONST(float32, AUTOMATIC) CurrMeasCorrln_Cal_CurrMeasCorrlnMaxErrCurr;
extern CONST(uint8, AUTOMATIC) CurrMeasCorrln_Cal_CurrMeasCorrlnMaxStallCntr;
extern CONST(uint16, AUTOMATIC) CurrMeasCorrln_Cal_CurrMeasCorrlnNtc0x04DFailStep;
extern CONST(uint16, AUTOMATIC) CurrMeasCorrln_Cal_CurrMeasCorrlnNtc0x04DPassStep;

/* PIMs */
extern VAR(boolean, AUTOMATIC) CurrMeasCorrln_Pim_LongTermCorrlnStsABC;
extern VAR(uint8, AUTOMATIC) CurrMeasCorrln_Pim_Snsr0RollgCntPrev;
extern VAR(uint8, AUTOMATIC) CurrMeasCorrln_Pim_Snsr0StallCntPrev;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) CurrMeasCorrln_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) CurrMeasCorrln_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) CurrMeasCorrln_Srv_GetNtcQlfrSts_Return;
extern VAR(NtcNr1, AUTOMATIC) CurrMeasCorrln_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) CurrMeasCorrln_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) CurrMeasCorrln_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) CurrMeasCorrln_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) CurrMeasCorrln_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_DiagcStsIvtr1Inactv_Logl
# undef Rte_Read_DiagcStsIvtr1Inactv_Logl
#else
#error Rte_Read_DiagcStsIvtr1Inactv_Logl is missing
#endif
#define Rte_Read_DiagcStsIvtr1Inactv_Logl(data) (*(data) = CurrMeasCorrln_Ip_DiagcStsIvtr1Inactv)

#ifdef Rte_Read_MotCurrCorrdA_Val
# undef Rte_Read_MotCurrCorrdA_Val
#else
#error Rte_Read_MotCurrCorrdA_Val is missing
#endif
#define Rte_Read_MotCurrCorrdA_Val(data) (*(data) = CurrMeasCorrln_Ip_MotCurrCorrdA)

#ifdef Rte_Read_MotCurrCorrdB_Val
# undef Rte_Read_MotCurrCorrdB_Val
#else
#error Rte_Read_MotCurrCorrdB_Val is missing
#endif
#define Rte_Read_MotCurrCorrdB_Val(data) (*(data) = CurrMeasCorrln_Ip_MotCurrCorrdB)

#ifdef Rte_Read_MotCurrCorrdC_Val
# undef Rte_Read_MotCurrCorrdC_Val
#else
#error Rte_Read_MotCurrCorrdC_Val is missing
#endif
#define Rte_Read_MotCurrCorrdC_Val(data) (*(data) = CurrMeasCorrln_Ip_MotCurrCorrdC)

#ifdef Rte_Read_MotCurrEolCalSt_Val
# undef Rte_Read_MotCurrEolCalSt_Val
#else
#error Rte_Read_MotCurrEolCalSt_Val is missing
#endif
#define Rte_Read_MotCurrEolCalSt_Val(data) (*(data) = CurrMeasCorrln_Ip_MotCurrEolCalSt)

#ifdef Rte_Read_MotCurrRollgCntr1_Val
# undef Rte_Read_MotCurrRollgCntr1_Val
#else
#error Rte_Read_MotCurrRollgCntr1_Val is missing
#endif
#define Rte_Read_MotCurrRollgCntr1_Val(data) (*(data) = CurrMeasCorrln_Ip_MotCurrRollgCntr1)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#else
#error Rte_Read_SysSt_Val is missing
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = CurrMeasCorrln_Ip_SysSt)


/*** Output Stubs ***/

#ifdef Rte_Write_CurrMeasCorrlnSts_Val
# undef Rte_Write_CurrMeasCorrlnSts_Val
#else
#error Rte_Write_CurrMeasCorrlnSts_Val is missing
#endif
#define Rte_Write_CurrMeasCorrlnSts_Val(data) (CurrMeasCorrln_Op_CurrMeasCorrlnSts = (data))

#ifdef Rte_Write_CurrMeasIdptSig_Val
# undef Rte_Write_CurrMeasIdptSig_Val
#else
#error Rte_Write_CurrMeasIdptSig_Val is missing
#endif
#define Rte_Write_CurrMeasIdptSig_Val(data) (CurrMeasCorrln_Op_CurrMeasIdptSig = (data))

#ifdef Rte_Write_CurrMotSumABC_Val
# undef Rte_Write_CurrMotSumABC_Val
#else
#error Rte_Write_CurrMotSumABC_Val is missing
#endif
#define Rte_Write_CurrMotSumABC_Val(data) (CurrMeasCorrln_Op_CurrMotSumABC = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val
# undef Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val
#else
#error Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val is missing
#endif
#define Rte_Prm_CurrMeasCorrlnMaxErrCurr_Val() (CurrMeasCorrln_Cal_CurrMeasCorrlnMaxErrCurr)

#ifdef Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val
# undef Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val
#else
#error Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val is missing
#endif
#define Rte_Prm_CurrMeasCorrlnMaxStallCntr_Val() (CurrMeasCorrln_Cal_CurrMeasCorrlnMaxStallCntr)

#ifdef Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val
# undef Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val
#else
#error Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val is missing
#endif
#define Rte_Prm_CurrMeasCorrlnNtc0x04DFailStep_Val() (CurrMeasCorrln_Cal_CurrMeasCorrlnNtc0x04DFailStep)

#ifdef Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val
# undef Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val
#else
#error Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val is missing
#endif
#define Rte_Prm_CurrMeasCorrlnNtc0x04DPassStep_Val() (CurrMeasCorrln_Cal_CurrMeasCorrlnNtc0x04DPassStep)


/*** PIM Stubs ***/

#ifdef Rte_Pim_LongTermCorrlnStsABC
# undef Rte_Pim_LongTermCorrlnStsABC
#else
#error Rte_Pim_LongTermCorrlnStsABC is missing
#endif
#define Rte_Pim_LongTermCorrlnStsABC() (&CurrMeasCorrln_Pim_LongTermCorrlnStsABC)

#ifdef Rte_Pim_Snsr0RollgCntPrev
# undef Rte_Pim_Snsr0RollgCntPrev
#else
#error Rte_Pim_Snsr0RollgCntPrev is missing
#endif
#define Rte_Pim_Snsr0RollgCntPrev() (&CurrMeasCorrln_Pim_Snsr0RollgCntPrev)

#ifdef Rte_Pim_Snsr0StallCntPrev
# undef Rte_Pim_Snsr0StallCntPrev
#else
#error Rte_Pim_Snsr0StallCntPrev is missing
#endif
#define Rte_Pim_Snsr0StallCntPrev() (&CurrMeasCorrln_Pim_Snsr0StallCntPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
