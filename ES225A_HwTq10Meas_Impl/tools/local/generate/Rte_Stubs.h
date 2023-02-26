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
extern VAR(sint8, AUTOMATIC) HwTq10Meas_Ip_HwTq10Polarity;

/* Outputs */
extern VAR(float32, AUTOMATIC) HwTq10Meas_Op_HwTq10;
extern VAR(SigQlfr1, AUTOMATIC) HwTq10Meas_Op_HwTq10Qlfr;
extern VAR(uint8, AUTOMATIC) HwTq10Meas_Op_HwTq10RollgCntr;

/* PIMs */
extern VAR(HwTqOffsRec1, AUTOMATIC) HwTq10Meas_Pim_HwTq10Offs;
extern VAR(float32, AUTOMATIC) HwTq10Meas_Pim_HwTq10PrevHwTq;
extern VAR(uint16, AUTOMATIC) HwTq10Meas_Pim_HwTq10RawDataBuf[5];
extern VAR(uint8, AUTOMATIC) HwTq10Meas_Pim_HwTq10RollgCntrPrev;
extern VAR(uint32, AUTOMATIC) HwTq10Meas_Pim_HwTq10TiStamp;
extern VAR(uint32, AUTOMATIC) HwTq10Meas_Pim_HwTq10TiStampPrev;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) HwTq10Meas_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) HwTq10Meas_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq10Meas_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) HwTq10Meas_Srv_GtmGetSent1Data_BufStrt[32];
extern VAR(Std_ReturnType, AUTOMATIC) HwTq10Meas_Srv_GtmGetSent1Data_Return;
extern VAR(uint8, AUTOMATIC) HwTq10Meas_Srv_HwTq10Offs_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq10Meas_Srv_HwTq10Offs_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) HwTq10Meas_Srv_HwTq10Offs_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq10Meas_Srv_HwTq10Offs_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) HwTq10Meas_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) HwTq10Meas_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwTq10Meas_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) HwTq10Meas_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq10Meas_Srv_SetNtcSts_Return;
extern VAR(NtcNr1, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq10Meas_Srv_SetNtcStsAndSnpshtData_Return;
extern VAR(float32, AUTOMATIC) HwTq10Meas_Cli_HwTq10MeasHwTq10ReadTrim_HwTqReadTrimData;
extern VAR(boolean, AUTOMATIC) HwTq10Meas_Cli_HwTq10MeasHwTq10TrimPrfmdSts_HwTqOffsTrimPrfmdStsData;
extern VAR(float32, AUTOMATIC) HwTq10Meas_Cli_HwTq10MeasHwTq10WrTrim_HwTqWrOffsTrimData;


/*** Input Stubs ***/

#ifdef Rte_Read_HwTq10Polarity_Val
# undef Rte_Read_HwTq10Polarity_Val
#endif
#define Rte_Read_HwTq10Polarity_Val(data) (*(data) = HwTq10Meas_Ip_HwTq10Polarity)


/*** Output Stubs ***/

#ifdef Rte_Write_HwTq10_Val
# undef Rte_Write_HwTq10_Val
#endif
#define Rte_Write_HwTq10_Val(data) (HwTq10Meas_Op_HwTq10 = (data))

#ifdef Rte_Write_HwTq10Qlfr_Val
# undef Rte_Write_HwTq10Qlfr_Val
#endif
#define Rte_Write_HwTq10Qlfr_Val(data) (HwTq10Meas_Op_HwTq10Qlfr = (data))

#ifdef Rte_Write_HwTq10RollgCntr_Val
# undef Rte_Write_HwTq10RollgCntr_Val
#endif
#define Rte_Write_HwTq10RollgCntr_Val(data) (HwTq10Meas_Op_HwTq10RollgCntr = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_HwTq10Offs
# undef Rte_Pim_HwTq10Offs
#endif
#define Rte_Pim_HwTq10Offs() (&HwTq10Meas_Pim_HwTq10Offs)

#ifdef Rte_Pim_HwTq10PrevHwTq
# undef Rte_Pim_HwTq10PrevHwTq
#endif
#define Rte_Pim_HwTq10PrevHwTq() (&HwTq10Meas_Pim_HwTq10PrevHwTq)

#ifdef Rte_Pim_HwTq10RawDataBuf
# undef Rte_Pim_HwTq10RawDataBuf
#endif
#define Rte_Pim_HwTq10RawDataBuf() (&(HwTq10Meas_Pim_HwTq10RawDataBuf[0]))

#ifdef Rte_Pim_HwTq10RollgCntrPrev
# undef Rte_Pim_HwTq10RollgCntrPrev
#endif
#define Rte_Pim_HwTq10RollgCntrPrev() (&HwTq10Meas_Pim_HwTq10RollgCntrPrev)

#ifdef Rte_Pim_HwTq10TiStamp
# undef Rte_Pim_HwTq10TiStamp
#endif
#define Rte_Pim_HwTq10TiStamp() (&HwTq10Meas_Pim_HwTq10TiStamp)

#ifdef Rte_Pim_HwTq10TiStampPrev
# undef Rte_Pim_HwTq10TiStampPrev
#endif
#define Rte_Pim_HwTq10TiStampPrev() (&HwTq10Meas_Pim_HwTq10TiStampPrev)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
