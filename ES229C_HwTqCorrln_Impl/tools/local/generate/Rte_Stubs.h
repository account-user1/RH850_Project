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
extern VAR(float32, AUTOMATIC) HwTqCorrln_Ip_HwTqA;
extern VAR(SigQlfr1, AUTOMATIC) HwTqCorrln_Ip_HwTqAQlfr;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Ip_HwTqARollgCntr;
extern VAR(float32, AUTOMATIC) HwTqCorrln_Ip_HwTqB;
extern VAR(SigQlfr1, AUTOMATIC) HwTqCorrln_Ip_HwTqBQlfr;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Ip_HwTqBRollgCntr;
extern VAR(float32, AUTOMATIC) HwTqCorrln_Ip_HwTqC;
extern VAR(SigQlfr1, AUTOMATIC) HwTqCorrln_Ip_HwTqCQlfr;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Ip_HwTqCRollgCntr;
extern VAR(float32, AUTOMATIC) HwTqCorrln_Ip_HwTqD;
extern VAR(SigQlfr1, AUTOMATIC) HwTqCorrln_Ip_HwTqDQlfr;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Ip_HwTqDRollgCntr;

/* Outputs */
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Op_HwTqCorrlnSts;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Op_HwTqIdptSig;

/* Calibrations */
extern CONST(float32, AUTOMATIC) HwTqCorrln_Cal_HwTqCorrlnImdtCorrlnChkFailThd;
extern CONST(uint16, AUTOMATIC) HwTqCorrln_Cal_HwTqCorrlnNtcFailStep;
extern CONST(uint16, AUTOMATIC) HwTqCorrln_Cal_HwTqCorrlnNtcPassStep;
extern CONST(uint8, AUTOMATIC) HwTqCorrln_Cal_HwTqArbnHwTqMaxStallCnt;

/* PIMs */
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_dHwTqCorrlnAvl;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_dHwTqCorrlnImdtCorrlnSts;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqARollgCntrPrev;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqAStallCntrPrev;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqBRollgCntrPrev;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqBStallCntrPrev;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqCRollgCntrPrev;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqCStallCntrPrev;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqDRollgCntrPrev;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Pim_HwTqDStallCntrPrev;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) HwTqCorrln_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) HwTqCorrln_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) HwTqCorrln_Srv_GetNtcQlfrSts_Return;
extern VAR(NtcNr1, AUTOMATIC) HwTqCorrln_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) HwTqCorrln_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwTqCorrln_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) HwTqCorrln_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) HwTqCorrln_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_HwTqA_Val
# undef Rte_Read_HwTqA_Val
#endif
#define Rte_Read_HwTqA_Val(data) (*(data) = HwTqCorrln_Ip_HwTqA)

#ifdef Rte_Read_HwTqAQlfr_Val
# undef Rte_Read_HwTqAQlfr_Val
#endif
#define Rte_Read_HwTqAQlfr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqAQlfr)

#ifdef Rte_Read_HwTqARollgCntr_Val
# undef Rte_Read_HwTqARollgCntr_Val
#endif
#define Rte_Read_HwTqARollgCntr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqARollgCntr)

#ifdef Rte_Read_HwTqB_Val
# undef Rte_Read_HwTqB_Val
#endif
#define Rte_Read_HwTqB_Val(data) (*(data) = HwTqCorrln_Ip_HwTqB)

#ifdef Rte_Read_HwTqBQlfr_Val
# undef Rte_Read_HwTqBQlfr_Val
#endif
#define Rte_Read_HwTqBQlfr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqBQlfr)

#ifdef Rte_Read_HwTqBRollgCntr_Val
# undef Rte_Read_HwTqBRollgCntr_Val
#endif
#define Rte_Read_HwTqBRollgCntr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqBRollgCntr)

#ifdef Rte_Read_HwTqC_Val
# undef Rte_Read_HwTqC_Val
#endif
#define Rte_Read_HwTqC_Val(data) (*(data) = HwTqCorrln_Ip_HwTqC)

#ifdef Rte_Read_HwTqCQlfr_Val
# undef Rte_Read_HwTqCQlfr_Val
#endif
#define Rte_Read_HwTqCQlfr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqCQlfr)

#ifdef Rte_Read_HwTqCRollgCntr_Val
# undef Rte_Read_HwTqCRollgCntr_Val
#endif
#define Rte_Read_HwTqCRollgCntr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqCRollgCntr)

#ifdef Rte_Read_HwTqD_Val
# undef Rte_Read_HwTqD_Val
#endif
#define Rte_Read_HwTqD_Val(data) (*(data) = HwTqCorrln_Ip_HwTqD)

#ifdef Rte_Read_HwTqDQlfr_Val
# undef Rte_Read_HwTqDQlfr_Val
#endif
#define Rte_Read_HwTqDQlfr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqDQlfr)

#ifdef Rte_Read_HwTqDRollgCntr_Val
# undef Rte_Read_HwTqDRollgCntr_Val
#endif
#define Rte_Read_HwTqDRollgCntr_Val(data) (*(data) = HwTqCorrln_Ip_HwTqDRollgCntr)


/*** Output Stubs ***/

#ifdef Rte_Write_HwTqCorrlnSts_Val
# undef Rte_Write_HwTqCorrlnSts_Val
#endif
#define Rte_Write_HwTqCorrlnSts_Val(data) (HwTqCorrln_Op_HwTqCorrlnSts = (data))

#ifdef Rte_Write_HwTqIdptSig_Val
# undef Rte_Write_HwTqIdptSig_Val
#endif
#define Rte_Write_HwTqIdptSig_Val(data) (HwTqCorrln_Op_HwTqIdptSig = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_HwTqCorrlnImdtCorrlnChkFailThd_Val
# undef Rte_Prm_HwTqCorrlnImdtCorrlnChkFailThd_Val
#endif
#define Rte_Prm_HwTqCorrlnImdtCorrlnChkFailThd_Val() (HwTqCorrln_Cal_HwTqCorrlnImdtCorrlnChkFailThd)

#ifdef Rte_Prm_HwTqCorrlnNtcFailStep_Val
# undef Rte_Prm_HwTqCorrlnNtcFailStep_Val
#endif
#define Rte_Prm_HwTqCorrlnNtcFailStep_Val() (HwTqCorrln_Cal_HwTqCorrlnNtcFailStep)

#ifdef Rte_Prm_HwTqCorrlnNtcPassStep_Val
# undef Rte_Prm_HwTqCorrlnNtcPassStep_Val
#endif
#define Rte_Prm_HwTqCorrlnNtcPassStep_Val() (HwTqCorrln_Cal_HwTqCorrlnNtcPassStep)

#ifdef Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val
# undef Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val
#endif
#define Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val() (HwTqCorrln_Cal_HwTqArbnHwTqMaxStallCnt)


/*** PIM Stubs ***/

#ifdef Rte_Pim_dHwTqCorrlnAvl
# undef Rte_Pim_dHwTqCorrlnAvl
#endif
#define Rte_Pim_dHwTqCorrlnAvl() (&HwTqCorrln_Pim_dHwTqCorrlnAvl)

#ifdef Rte_Pim_dHwTqCorrlnImdtCorrlnSts
# undef Rte_Pim_dHwTqCorrlnImdtCorrlnSts
#endif
#define Rte_Pim_dHwTqCorrlnImdtCorrlnSts() (&HwTqCorrln_Pim_dHwTqCorrlnImdtCorrlnSts)

#ifdef Rte_Pim_HwTqARollgCntrPrev
# undef Rte_Pim_HwTqARollgCntrPrev
#endif
#define Rte_Pim_HwTqARollgCntrPrev() (&HwTqCorrln_Pim_HwTqARollgCntrPrev)

#ifdef Rte_Pim_HwTqAStallCntrPrev
# undef Rte_Pim_HwTqAStallCntrPrev
#endif
#define Rte_Pim_HwTqAStallCntrPrev() (&HwTqCorrln_Pim_HwTqAStallCntrPrev)

#ifdef Rte_Pim_HwTqBRollgCntrPrev
# undef Rte_Pim_HwTqBRollgCntrPrev
#endif
#define Rte_Pim_HwTqBRollgCntrPrev() (&HwTqCorrln_Pim_HwTqBRollgCntrPrev)

#ifdef Rte_Pim_HwTqBStallCntrPrev
# undef Rte_Pim_HwTqBStallCntrPrev
#endif
#define Rte_Pim_HwTqBStallCntrPrev() (&HwTqCorrln_Pim_HwTqBStallCntrPrev)

#ifdef Rte_Pim_HwTqCRollgCntrPrev
# undef Rte_Pim_HwTqCRollgCntrPrev
#endif
#define Rte_Pim_HwTqCRollgCntrPrev() (&HwTqCorrln_Pim_HwTqCRollgCntrPrev)

#ifdef Rte_Pim_HwTqCStallCntrPrev
# undef Rte_Pim_HwTqCStallCntrPrev
#endif
#define Rte_Pim_HwTqCStallCntrPrev() (&HwTqCorrln_Pim_HwTqCStallCntrPrev)

#ifdef Rte_Pim_HwTqDRollgCntrPrev
# undef Rte_Pim_HwTqDRollgCntrPrev
#endif
#define Rte_Pim_HwTqDRollgCntrPrev() (&HwTqCorrln_Pim_HwTqDRollgCntrPrev)

#ifdef Rte_Pim_HwTqDStallCntrPrev
# undef Rte_Pim_HwTqDStallCntrPrev
#endif
#define Rte_Pim_HwTqDStallCntrPrev() (&HwTqCorrln_Pim_HwTqDStallCntrPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
