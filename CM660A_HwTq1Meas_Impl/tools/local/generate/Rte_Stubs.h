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
extern VAR(sint8, AUTOMATIC) HwTq1Meas_Ip_HwTq1Polarity;

/* Outputs */
extern VAR(float32, AUTOMATIC) HwTq1Meas_Op_HwTq1;
extern VAR(SigQlfr1, AUTOMATIC) HwTq1Meas_Op_HwTq1Qlfr;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Op_HwTq1RollgCntr;
extern VAR(float32, AUTOMATIC) HwTq1Meas_Op_RackLimrCcwEotSig1;
extern VAR(float32, AUTOMATIC) HwTq1Meas_Op_RackLimrCwEotSig1;
extern VAR(boolean, AUTOMATIC) HwTq1Meas_Op_RackLimrEotSig1Avl;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) HwTq1Meas_Cal_HwTq1MeasHwTq1PrtclFltFailStep;
extern CONST(uint16, AUTOMATIC) HwTq1Meas_Cal_HwTq1MeasHwTq1PrtclFltPassStep;

/* PIMs */
extern VAR(HwTqOffsRec1, AUTOMATIC) HwTq1Meas_Pim_HwTq1Offs;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Pim_HwTq1ComStsErrCntr;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Pim_HwTq1IntSnsrErrCntr;
extern VAR(float32, AUTOMATIC) HwTq1Meas_Pim_HwTq1MeasPrevHwTq1;
extern VAR(uint32, AUTOMATIC) HwTq1Meas_Pim_HwTq1MsgMissRxCnt;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Pim_HwTq1MeasPrevRollgCntr;
extern VAR(float32, AUTOMATIC) HwTq1Meas_Pim_RackLimrCcwEot1;
extern VAR(float32, AUTOMATIC) HwTq1Meas_Pim_RackLimrCwEot1;
extern VAR(boolean, AUTOMATIC) HwTq1Meas_Pim_RackLimrEot1Avl;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Pim_RackLimrEot1Data0;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Pim_RackLimrEot1Data1;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Pim_RackLimrEot1Data2;
extern VAR(boolean, AUTOMATIC) HwTq1Meas_Pim_RackLimrEot1Id2DataReadCmpl;
extern VAR(boolean, AUTOMATIC) HwTq1Meas_Pim_RackLimrEot1Id3DataReadCmpl;
extern VAR(boolean, AUTOMATIC) HwTq1Meas_Pim_RackLimrEot1Id4DataReadCmpl;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) HwTq1Meas_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) HwTq1Meas_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq1Meas_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) HwTq1Meas_Srv_GetRefTmr1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwTq1Meas_Srv_GetTiSpan1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwTq1Meas_Srv_GetTiSpan1MicroSec32bit_TiSpan;
extern VAR(boolean, AUTOMATIC) HwTq1Meas_Srv_HwTq1Offs_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq1Meas_Srv_HwTq1Offs_SetRamBlockStatus_Return;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq1Meas_Srv_IoHwAb_SetFctPrphlHwTq1_Return;
extern VAR(NtcNr1, AUTOMATIC) HwTq1Meas_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) HwTq1Meas_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwTq1Meas_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) HwTq1Meas_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq1Meas_Srv_SetNtcSts_Return;
extern VAR(float32, AUTOMATIC) HwTq1Meas_Cli_HwTq1MeasHwTq1ReadTrim_HwTqReadTrimData;
extern VAR(boolean, AUTOMATIC) HwTq1Meas_Cli_HwTq1MeasHwTq1TrimPrfmdSts_HwTqOffsTrimPrfmdStsData;
extern VAR(float32, AUTOMATIC) HwTq1Meas_Cli_HwTq1MeasHwTq1WrTrim_HwTqWrOffsTrimData;


/*** Input Stubs ***/

#ifdef Rte_Read_HwTq1Polarity_Val
# undef Rte_Read_HwTq1Polarity_Val
#else
#error Rte_Read_HwTq1Polarity_Val is missing
#endif
#define Rte_Read_HwTq1Polarity_Val(data) (*(data) = HwTq1Meas_Ip_HwTq1Polarity)


/*** Output Stubs ***/

#ifdef Rte_Write_HwTq1_Val
# undef Rte_Write_HwTq1_Val
#else
#error Rte_Write_HwTq1_Val is missing
#endif
#define Rte_Write_HwTq1_Val(data) (HwTq1Meas_Op_HwTq1 = (data))

#ifdef Rte_Write_HwTq1Qlfr_Val
# undef Rte_Write_HwTq1Qlfr_Val
#else
#error Rte_Write_HwTq1Qlfr_Val is missing
#endif
#define Rte_Write_HwTq1Qlfr_Val(data) (HwTq1Meas_Op_HwTq1Qlfr = (data))

#ifdef Rte_Write_HwTq1RollgCntr_Val
# undef Rte_Write_HwTq1RollgCntr_Val
#else
#error Rte_Write_HwTq1RollgCntr_Val is missing
#endif
#define Rte_Write_HwTq1RollgCntr_Val(data) (HwTq1Meas_Op_HwTq1RollgCntr = (data))

#ifdef Rte_Write_RackLimrCcwEotSig1_Val
# undef Rte_Write_RackLimrCcwEotSig1_Val
#else
#error Rte_Write_RackLimrCcwEotSig1_Val is missing
#endif
#define Rte_Write_RackLimrCcwEotSig1_Val(data) (HwTq1Meas_Op_RackLimrCcwEotSig1 = (data))

#ifdef Rte_Write_RackLimrCwEotSig1_Val
# undef Rte_Write_RackLimrCwEotSig1_Val
#else
#error Rte_Write_RackLimrCwEotSig1_Val is missing
#endif
#define Rte_Write_RackLimrCwEotSig1_Val(data) (HwTq1Meas_Op_RackLimrCwEotSig1 = (data))

#ifdef Rte_Write_RackLimrEotSig1Avl_Logl
# undef Rte_Write_RackLimrEotSig1Avl_Logl
#else
#error Rte_Write_RackLimrEotSig1Avl_Logl is missing
#endif
#define Rte_Write_RackLimrEotSig1Avl_Logl(data) (HwTq1Meas_Op_RackLimrEotSig1Avl = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val
# undef Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val
#else
#error Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val is missing
#endif
#define Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val() (HwTq1Meas_Cal_HwTq1MeasHwTq1PrtclFltFailStep)

#ifdef Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val
# undef Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val
#else
#error Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val is missing
#endif
#define Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val() (HwTq1Meas_Cal_HwTq1MeasHwTq1PrtclFltPassStep)


/*** PIM Stubs ***/

#ifdef Rte_Pim_HwTq1Offs
# undef Rte_Pim_HwTq1Offs
#else
#error Rte_Pim_HwTq1Offs is missing
#endif
#define Rte_Pim_HwTq1Offs() (&HwTq1Meas_Pim_HwTq1Offs)

#ifdef Rte_Pim_HwTq1ComStsErrCntr
# undef Rte_Pim_HwTq1ComStsErrCntr
#else
#error Rte_Pim_HwTq1ComStsErrCntr is missing
#endif
#define Rte_Pim_HwTq1ComStsErrCntr() (&HwTq1Meas_Pim_HwTq1ComStsErrCntr)

#ifdef Rte_Pim_HwTq1IntSnsrErrCntr
# undef Rte_Pim_HwTq1IntSnsrErrCntr
#else
#error Rte_Pim_HwTq1IntSnsrErrCntr is missing
#endif
#define Rte_Pim_HwTq1IntSnsrErrCntr() (&HwTq1Meas_Pim_HwTq1IntSnsrErrCntr)

#ifdef Rte_Pim_HwTq1MeasPrevHwTq1
# undef Rte_Pim_HwTq1MeasPrevHwTq1
#else
#error Rte_Pim_HwTq1MeasPrevHwTq1 is missing
#endif
#define Rte_Pim_HwTq1MeasPrevHwTq1() (&HwTq1Meas_Pim_HwTq1MeasPrevHwTq1)

#ifdef Rte_Pim_HwTq1MsgMissRxCnt
# undef Rte_Pim_HwTq1MsgMissRxCnt
#else
#error Rte_Pim_HwTq1MsgMissRxCnt is missing
#endif
#define Rte_Pim_HwTq1MsgMissRxCnt() (&HwTq1Meas_Pim_HwTq1MsgMissRxCnt)

#ifdef Rte_Pim_HwTq1MeasPrevRollgCntr
# undef Rte_Pim_HwTq1MeasPrevRollgCntr
#else
#error Rte_Pim_HwTq1MeasPrevRollgCntr is missing
#endif
#define Rte_Pim_HwTq1MeasPrevRollgCntr() (&HwTq1Meas_Pim_HwTq1MeasPrevRollgCntr)

#ifdef Rte_Pim_RackLimrCcwEot1
# undef Rte_Pim_RackLimrCcwEot1
#else
#error Rte_Pim_RackLimrCcwEot1 is missing
#endif
#define Rte_Pim_RackLimrCcwEot1() (&HwTq1Meas_Pim_RackLimrCcwEot1)

#ifdef Rte_Pim_RackLimrCwEot1
# undef Rte_Pim_RackLimrCwEot1
#else
#error Rte_Pim_RackLimrCwEot1 is missing
#endif
#define Rte_Pim_RackLimrCwEot1() (&HwTq1Meas_Pim_RackLimrCwEot1)

#ifdef Rte_Pim_RackLimrEot1Avl
# undef Rte_Pim_RackLimrEot1Avl
#else
#error Rte_Pim_RackLimrEot1Avl is missing
#endif
#define Rte_Pim_RackLimrEot1Avl() (&HwTq1Meas_Pim_RackLimrEot1Avl)

#ifdef Rte_Pim_RackLimrEot1Data0
# undef Rte_Pim_RackLimrEot1Data0
#else
#error Rte_Pim_RackLimrEot1Data0 is missing
#endif
#define Rte_Pim_RackLimrEot1Data0() (&HwTq1Meas_Pim_RackLimrEot1Data0)

#ifdef Rte_Pim_RackLimrEot1Data1
# undef Rte_Pim_RackLimrEot1Data1
#else
#error Rte_Pim_RackLimrEot1Data1 is missing
#endif
#define Rte_Pim_RackLimrEot1Data1() (&HwTq1Meas_Pim_RackLimrEot1Data1)

#ifdef Rte_Pim_RackLimrEot1Data2
# undef Rte_Pim_RackLimrEot1Data2
#else
#error Rte_Pim_RackLimrEot1Data2 is missing
#endif
#define Rte_Pim_RackLimrEot1Data2() (&HwTq1Meas_Pim_RackLimrEot1Data2)

#ifdef Rte_Pim_RackLimrEot1Id2DataReadCmpl
# undef Rte_Pim_RackLimrEot1Id2DataReadCmpl
#else
#error Rte_Pim_RackLimrEot1Id2DataReadCmpl is missing
#endif
#define Rte_Pim_RackLimrEot1Id2DataReadCmpl() (&HwTq1Meas_Pim_RackLimrEot1Id2DataReadCmpl)

#ifdef Rte_Pim_RackLimrEot1Id3DataReadCmpl
# undef Rte_Pim_RackLimrEot1Id3DataReadCmpl
#else
#error Rte_Pim_RackLimrEot1Id3DataReadCmpl is missing
#endif
#define Rte_Pim_RackLimrEot1Id3DataReadCmpl() (&HwTq1Meas_Pim_RackLimrEot1Id3DataReadCmpl)

#ifdef Rte_Pim_RackLimrEot1Id4DataReadCmpl
# undef Rte_Pim_RackLimrEot1Id4DataReadCmpl
#else
#error Rte_Pim_RackLimrEot1Id4DataReadCmpl is missing
#endif
#define Rte_Pim_RackLimrEot1Id4DataReadCmpl() (&HwTq1Meas_Pim_RackLimrEot1Id4DataReadCmpl)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
