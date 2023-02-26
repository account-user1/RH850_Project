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
extern VAR(sint8, AUTOMATIC) HwTq9Meas_Ip_HwTq9Polarity;

/* Outputs */
extern VAR(float32, AUTOMATIC) HwTq9Meas_Op_HwTq9;
extern VAR(SigQlfr1, AUTOMATIC) HwTq9Meas_Op_HwTq9Qlfr;
extern VAR(uint8, AUTOMATIC) HwTq9Meas_Op_HwTq9RollgCntr;

/* PIMs */
extern VAR(HwTqOffsRec1, AUTOMATIC) HwTq9Meas_Pim_HwTq9Offs;
extern VAR(float32, AUTOMATIC) HwTq9Meas_Pim_HwTq9PrevHwTq;
extern VAR(uint16, AUTOMATIC) HwTq9Meas_Pim_HwTq9RawDataBuf[5];
extern VAR(uint8, AUTOMATIC) HwTq9Meas_Pim_HwTq9RollgCntrPrev;
extern VAR(uint32, AUTOMATIC) HwTq9Meas_Pim_HwTq9TiStamp;
extern VAR(uint32, AUTOMATIC) HwTq9Meas_Pim_HwTq9TiStampPrev;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) HwTq9Meas_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) HwTq9Meas_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq9Meas_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) HwTq9Meas_Srv_GtmGetSent0Data_BufStrt[32];
extern VAR(Std_ReturnType, AUTOMATIC) HwTq9Meas_Srv_GtmGetSent0Data_Return;
extern VAR(uint8, AUTOMATIC) HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq9Meas_Srv_HwTq9Offs_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq9Meas_Srv_HwTq9Offs_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) HwTq9Meas_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) HwTq9Meas_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwTq9Meas_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) HwTq9Meas_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq9Meas_Srv_SetNtcSts_Return;
extern VAR(NtcNr1, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq9Meas_Srv_SetNtcStsAndSnpshtData_Return;
extern VAR(float32, AUTOMATIC) HwTq9Meas_Cli_HwTq9MeasHwTq9ReadTrim_HwTqReadTrimData;
extern VAR(boolean, AUTOMATIC) HwTq9Meas_Cli_HwTq9MeasHwTq9TrimPrfmdSts_HwTqOffsTrimPrfmdStsData;
extern VAR(float32, AUTOMATIC) HwTq9Meas_Cli_HwTq9MeasHwTq9WrTrim_HwTqWrOffsTrimData;


/*** Input Stubs ***/

#ifdef Rte_Read_HwTq9Polarity_Val
# undef Rte_Read_HwTq9Polarity_Val
#endif
#define Rte_Read_HwTq9Polarity_Val(data) (*(data) = HwTq9Meas_Ip_HwTq9Polarity)


/*** Output Stubs ***/

#ifdef Rte_Write_HwTq9_Val
# undef Rte_Write_HwTq9_Val
#endif
#define Rte_Write_HwTq9_Val(data) (HwTq9Meas_Op_HwTq9 = (data))

#ifdef Rte_Write_HwTq9Qlfr_Val
# undef Rte_Write_HwTq9Qlfr_Val
#endif
#define Rte_Write_HwTq9Qlfr_Val(data) (HwTq9Meas_Op_HwTq9Qlfr = (data))

#ifdef Rte_Write_HwTq9RollgCntr_Val
# undef Rte_Write_HwTq9RollgCntr_Val
#endif
#define Rte_Write_HwTq9RollgCntr_Val(data) (HwTq9Meas_Op_HwTq9RollgCntr = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_HwTq9Offs
# undef Rte_Pim_HwTq9Offs
#endif
#define Rte_Pim_HwTq9Offs() (&HwTq9Meas_Pim_HwTq9Offs)

#ifdef Rte_Pim_HwTq9PrevHwTq
# undef Rte_Pim_HwTq9PrevHwTq
#endif
#define Rte_Pim_HwTq9PrevHwTq() (&HwTq9Meas_Pim_HwTq9PrevHwTq)

#ifdef Rte_Pim_HwTq9RawDataBuf
# undef Rte_Pim_HwTq9RawDataBuf
#endif
#define Rte_Pim_HwTq9RawDataBuf() (&(HwTq9Meas_Pim_HwTq9RawDataBuf[0]))

#ifdef Rte_Pim_HwTq9RollgCntrPrev
# undef Rte_Pim_HwTq9RollgCntrPrev
#endif
#define Rte_Pim_HwTq9RollgCntrPrev() (&HwTq9Meas_Pim_HwTq9RollgCntrPrev)

#ifdef Rte_Pim_HwTq9TiStamp
# undef Rte_Pim_HwTq9TiStamp
#endif
#define Rte_Pim_HwTq9TiStamp() (&HwTq9Meas_Pim_HwTq9TiStamp)

#ifdef Rte_Pim_HwTq9TiStampPrev
# undef Rte_Pim_HwTq9TiStampPrev
#endif
#define Rte_Pim_HwTq9TiStampPrev() (&HwTq9Meas_Pim_HwTq9TiStampPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
