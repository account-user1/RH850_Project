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
extern VAR(sint8, AUTOMATIC) HwAg1Meas_Ip_HwAg1Polarity;
extern VAR(HwAgSnsrTyp1, AUTOMATIC) HwAg1Meas_Ip_HwAg1SnsrTyp;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Ip_RegInpRSENT2CS;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Ip_RegInpRSENT2FND;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Ip_RegInpRSENT2FRS;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Ip_RegInpRSENT2FRXD;
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Ip_RegInpRSENT2NRS;

/* Outputs */
extern VAR(float32, AUTOMATIC) HwAg1Meas_Op_HwAg1;
extern VAR(SigQlfr1, AUTOMATIC) HwAg1Meas_Op_HwAg1Qlfr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Op_HwAg1RollgCntr;
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Op_RegOutRSENT2NRC;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Op_RegOutRSENT2SPCT;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasHwAg1IfFltFailStep;
extern CONST(uint16, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasHwAg1IfFltPassStep;
extern CONST(uint16, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr0PrtclFltFailStep;
extern CONST(uint16, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr0PrtclFltPassStep;
extern CONST(uint16, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr1PrtclFltFailStep;
extern CONST(uint16, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr1PrtclFltPassStep;
extern CONST(uint8, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasSnsr0Rev[22];
extern CONST(uint8, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasSnsr1Rev[22];
extern CONST(sint16, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasStep[22];
extern CONST(uint8, AUTOMATIC) HwAg1Meas_Cal_HwAg1MeasVrnrErrThd;

/* PIMs */
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Pim_HwAg1IfFltLtch;
extern VAR(HwAgOffsRec1, AUTOMATIC) HwAg1Meas_Pim_HwAg1Offs;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr0Abs;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr0CS;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr0FRXD;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr0Rel;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr1Abs;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr1CS;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr1FRXD;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Pim_dHwAg1MeasSnsr1Rel;
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Pim_HwAg1InitStepSeqNrCmpl;
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Pim_HwAg1LtchClr;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Pim_HwAg1PrevHwAg1;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1PrevRollCnt;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1PrevStepSeqNr;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Pim_HwAg1RawDataAvlStrtTi;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr0ComStsErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr0IdErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr0IntSnsrErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr0NoMsgErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr1ComStsErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr1IdErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr1IntSnsrErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1Snsr1NoMsgErrCntr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_HwAg1SnsrTrigNr;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Pim_PrevHwAg1;
extern VAR(SigQlfr1, AUTOMATIC) HwAg1Meas_Pim_PrevHwAg1Qlfr;
extern VAR(uint16, AUTOMATIC) HwAg1Meas_Pim_PrevHwAg1Snsr0Raw;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_PrevHwAg1Snsr0TestOk;
extern VAR(uint16, AUTOMATIC) HwAg1Meas_Pim_PrevHwAg1Snsr1Raw;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Pim_PrevHwAg1Snsr1TestOk;

/* IRVs */
extern VAR(uint16, AUTOMATIC) HwAg1Meas_Irv_HwAg1Snsr0Raw;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Irv_HwAg1Snsr0TestOk;
extern VAR(uint16, AUTOMATIC) HwAg1Meas_Irv_HwAg1Snsr1Raw;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Irv_HwAg1Snsr1TestOk;

/* Arguments and Returns */
extern VAR(NtcNr1, AUTOMATIC) HwAg1Meas_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) HwAg1Meas_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) HwAg1Meas_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Srv_GetRefTmr1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Srv_GetTiSpan1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwAg1Meas_Srv_GetTiSpan1MicroSec32bit_TiSpan;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Srv_HwAg1IfFltLtch_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) HwAg1Meas_Srv_HwAg1IfFltLtch_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Srv_HwAg1IfFltLtch_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) HwAg1Meas_Srv_HwAg1IfFltLtch_SetRamBlockStatus_Return;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Srv_HwAg1Offs_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) HwAg1Meas_Srv_HwAg1Offs_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Srv_HwAg1Offs_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) HwAg1Meas_Srv_HwAg1Offs_SetRamBlockStatus_Return;
extern VAR(Std_ReturnType, AUTOMATIC) HwAg1Meas_Srv_IoHwAb_SetFctPrphlHwAg1_Return;
extern VAR(NtcNr1, AUTOMATIC) HwAg1Meas_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) HwAg1Meas_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwAg1Meas_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) HwAg1Meas_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) HwAg1Meas_Srv_SetNtcSts_Return;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Cli_HwAg1ReadTrim_HwAgReadTrimData;
extern VAR(boolean, AUTOMATIC) HwAg1Meas_Cli_HwAg1TrimPrfmdSts_HwAgOffsTrimPrfmdStsData;
extern VAR(float32, AUTOMATIC) HwAg1Meas_Cli_HwAg1WrTrim_HwAgWrOffsTrimData;


/*** Input Stubs ***/

#ifdef Rte_Read_HwAg1Polarity_Val
# undef Rte_Read_HwAg1Polarity_Val
#endif
#define Rte_Read_HwAg1Polarity_Val(data) (*(data) = HwAg1Meas_Ip_HwAg1Polarity)

#ifdef Rte_Read_HwAg1SnsrTyp_Val
# undef Rte_Read_HwAg1SnsrTyp_Val
#endif
#define Rte_Read_HwAg1SnsrTyp_Val(data) (*(data) = HwAg1Meas_Ip_HwAg1SnsrTyp)

#ifdef Rte_Read_RegInpRSENT2CS_Val
# undef Rte_Read_RegInpRSENT2CS_Val
#endif
#define Rte_Read_RegInpRSENT2CS_Val(data) (*(data) = HwAg1Meas_Ip_RegInpRSENT2CS)

#ifdef Rte_Read_RegInpRSENT2FND_Val
# undef Rte_Read_RegInpRSENT2FND_Val
#endif
#define Rte_Read_RegInpRSENT2FND_Val(data) (*(data) = HwAg1Meas_Ip_RegInpRSENT2FND)

#ifdef Rte_Read_RegInpRSENT2FRS_Val
# undef Rte_Read_RegInpRSENT2FRS_Val
#endif
#define Rte_Read_RegInpRSENT2FRS_Val(data) (*(data) = HwAg1Meas_Ip_RegInpRSENT2FRS)

#ifdef Rte_Read_RegInpRSENT2FRXD_Val
# undef Rte_Read_RegInpRSENT2FRXD_Val
#endif
#define Rte_Read_RegInpRSENT2FRXD_Val(data) (*(data) = HwAg1Meas_Ip_RegInpRSENT2FRXD)

#ifdef Rte_Read_RegInpRSENT2NRS_Logl
# undef Rte_Read_RegInpRSENT2NRS_Logl
#endif
#define Rte_Read_RegInpRSENT2NRS_Logl(data) (*(data) = HwAg1Meas_Ip_RegInpRSENT2NRS)


/*** Output Stubs ***/

#ifdef Rte_Write_HwAg1_Val
# undef Rte_Write_HwAg1_Val
#endif
#define Rte_Write_HwAg1_Val(data) (HwAg1Meas_Op_HwAg1 = (data))

#ifdef Rte_Write_HwAg1Qlfr_Val
# undef Rte_Write_HwAg1Qlfr_Val
#endif
#define Rte_Write_HwAg1Qlfr_Val(data) (HwAg1Meas_Op_HwAg1Qlfr = (data))

#ifdef Rte_Write_HwAg1RollgCntr_Val
# undef Rte_Write_HwAg1RollgCntr_Val
#endif
#define Rte_Write_HwAg1RollgCntr_Val(data) (HwAg1Meas_Op_HwAg1RollgCntr = (data))

#ifdef Rte_Write_RegOutRSENT2NRC_Logl
# undef Rte_Write_RegOutRSENT2NRC_Logl
#endif
#define Rte_Write_RegOutRSENT2NRC_Logl(data) (HwAg1Meas_Op_RegOutRSENT2NRC = (data))

#ifdef Rte_Write_RegOutRSENT2SPCT_Val
# undef Rte_Write_RegOutRSENT2SPCT_Val
#endif
#define Rte_Write_RegOutRSENT2SPCT_Val(data) (HwAg1Meas_Op_RegOutRSENT2SPCT = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val
# undef Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val
#endif
#define Rte_Prm_HwAg1MeasHwAg1IfFltFailStep_Val() (HwAg1Meas_Cal_HwAg1MeasHwAg1IfFltFailStep)

#ifdef Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val
# undef Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val
#endif
#define Rte_Prm_HwAg1MeasHwAg1IfFltPassStep_Val() (HwAg1Meas_Cal_HwAg1MeasHwAg1IfFltPassStep)

#ifdef Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val
# undef Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val
#endif
#define Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltFailStep_Val() (HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr0PrtclFltFailStep)

#ifdef Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val
# undef Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val
#endif
#define Rte_Prm_HwAg1MeasHwAg1Snsr0PrtclFltPassStep_Val() (HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr0PrtclFltPassStep)

#ifdef Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val
# undef Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val
#endif
#define Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltFailStep_Val() (HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr1PrtclFltFailStep)

#ifdef Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val
# undef Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val
#endif
#define Rte_Prm_HwAg1MeasHwAg1Snsr1PrtclFltPassStep_Val() (HwAg1Meas_Cal_HwAg1MeasHwAg1Snsr1PrtclFltPassStep)

#ifdef Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D
# undef Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D
#endif
#define Rte_Prm_HwAg1MeasSnsr0Rev_Ary1D() (&(HwAg1Meas_Cal_HwAg1MeasSnsr0Rev[0]))

#ifdef Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D
# undef Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D
#endif
#define Rte_Prm_HwAg1MeasSnsr1Rev_Ary1D() (&(HwAg1Meas_Cal_HwAg1MeasSnsr1Rev[0]))

#ifdef Rte_Prm_HwAg1MeasStep_Ary1D
# undef Rte_Prm_HwAg1MeasStep_Ary1D
#endif
#define Rte_Prm_HwAg1MeasStep_Ary1D() (&(HwAg1Meas_Cal_HwAg1MeasStep[0]))

#ifdef Rte_Prm_HwAg1MeasVrnrErrThd_Val
# undef Rte_Prm_HwAg1MeasVrnrErrThd_Val
#endif
#define Rte_Prm_HwAg1MeasVrnrErrThd_Val() (HwAg1Meas_Cal_HwAg1MeasVrnrErrThd)


/*** PIM Stubs ***/

#ifdef Rte_Pim_HwAg1IfFltLtch
# undef Rte_Pim_HwAg1IfFltLtch
#endif
#define Rte_Pim_HwAg1IfFltLtch() (&HwAg1Meas_Pim_HwAg1IfFltLtch)

#ifdef Rte_Pim_HwAg1Offs
# undef Rte_Pim_HwAg1Offs
#endif
#define Rte_Pim_HwAg1Offs() (&HwAg1Meas_Pim_HwAg1Offs)

#ifdef Rte_Pim_dHwAg1MeasSnsr0Abs
# undef Rte_Pim_dHwAg1MeasSnsr0Abs
#endif
#define Rte_Pim_dHwAg1MeasSnsr0Abs() (&HwAg1Meas_Pim_dHwAg1MeasSnsr0Abs)

#ifdef Rte_Pim_dHwAg1MeasSnsr0CS
# undef Rte_Pim_dHwAg1MeasSnsr0CS
#endif
#define Rte_Pim_dHwAg1MeasSnsr0CS() (&HwAg1Meas_Pim_dHwAg1MeasSnsr0CS)

#ifdef Rte_Pim_dHwAg1MeasSnsr0FRXD
# undef Rte_Pim_dHwAg1MeasSnsr0FRXD
#endif
#define Rte_Pim_dHwAg1MeasSnsr0FRXD() (&HwAg1Meas_Pim_dHwAg1MeasSnsr0FRXD)

#ifdef Rte_Pim_dHwAg1MeasSnsr0Rel
# undef Rte_Pim_dHwAg1MeasSnsr0Rel
#endif
#define Rte_Pim_dHwAg1MeasSnsr0Rel() (&HwAg1Meas_Pim_dHwAg1MeasSnsr0Rel)

#ifdef Rte_Pim_dHwAg1MeasSnsr1Abs
# undef Rte_Pim_dHwAg1MeasSnsr1Abs
#endif
#define Rte_Pim_dHwAg1MeasSnsr1Abs() (&HwAg1Meas_Pim_dHwAg1MeasSnsr1Abs)

#ifdef Rte_Pim_dHwAg1MeasSnsr1CS
# undef Rte_Pim_dHwAg1MeasSnsr1CS
#endif
#define Rte_Pim_dHwAg1MeasSnsr1CS() (&HwAg1Meas_Pim_dHwAg1MeasSnsr1CS)

#ifdef Rte_Pim_dHwAg1MeasSnsr1FRXD
# undef Rte_Pim_dHwAg1MeasSnsr1FRXD
#endif
#define Rte_Pim_dHwAg1MeasSnsr1FRXD() (&HwAg1Meas_Pim_dHwAg1MeasSnsr1FRXD)

#ifdef Rte_Pim_dHwAg1MeasSnsr1Rel
# undef Rte_Pim_dHwAg1MeasSnsr1Rel
#endif
#define Rte_Pim_dHwAg1MeasSnsr1Rel() (&HwAg1Meas_Pim_dHwAg1MeasSnsr1Rel)

#ifdef Rte_Pim_HwAg1InitStepSeqNrCmpl
# undef Rte_Pim_HwAg1InitStepSeqNrCmpl
#endif
#define Rte_Pim_HwAg1InitStepSeqNrCmpl() (&HwAg1Meas_Pim_HwAg1InitStepSeqNrCmpl)

#ifdef Rte_Pim_HwAg1LtchClr
# undef Rte_Pim_HwAg1LtchClr
#endif
#define Rte_Pim_HwAg1LtchClr() (&HwAg1Meas_Pim_HwAg1LtchClr)

#ifdef Rte_Pim_HwAg1PrevHwAg1
# undef Rte_Pim_HwAg1PrevHwAg1
#endif
#define Rte_Pim_HwAg1PrevHwAg1() (&HwAg1Meas_Pim_HwAg1PrevHwAg1)

#ifdef Rte_Pim_HwAg1PrevRollCnt
# undef Rte_Pim_HwAg1PrevRollCnt
#endif
#define Rte_Pim_HwAg1PrevRollCnt() (&HwAg1Meas_Pim_HwAg1PrevRollCnt)

#ifdef Rte_Pim_HwAg1PrevStepSeqNr
# undef Rte_Pim_HwAg1PrevStepSeqNr
#endif
#define Rte_Pim_HwAg1PrevStepSeqNr() (&HwAg1Meas_Pim_HwAg1PrevStepSeqNr)

#ifdef Rte_Pim_HwAg1RawDataAvlStrtTi
# undef Rte_Pim_HwAg1RawDataAvlStrtTi
#endif
#define Rte_Pim_HwAg1RawDataAvlStrtTi() (&HwAg1Meas_Pim_HwAg1RawDataAvlStrtTi)

#ifdef Rte_Pim_HwAg1Snsr0ComStsErrCntr
# undef Rte_Pim_HwAg1Snsr0ComStsErrCntr
#endif
#define Rte_Pim_HwAg1Snsr0ComStsErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr0ComStsErrCntr)

#ifdef Rte_Pim_HwAg1Snsr0IdErrCntr
# undef Rte_Pim_HwAg1Snsr0IdErrCntr
#endif
#define Rte_Pim_HwAg1Snsr0IdErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr0IdErrCntr)

#ifdef Rte_Pim_HwAg1Snsr0IntSnsrErrCntr
# undef Rte_Pim_HwAg1Snsr0IntSnsrErrCntr
#endif
#define Rte_Pim_HwAg1Snsr0IntSnsrErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr0IntSnsrErrCntr)

#ifdef Rte_Pim_HwAg1Snsr0NoMsgErrCntr
# undef Rte_Pim_HwAg1Snsr0NoMsgErrCntr
#endif
#define Rte_Pim_HwAg1Snsr0NoMsgErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr0NoMsgErrCntr)

#ifdef Rte_Pim_HwAg1Snsr1ComStsErrCntr
# undef Rte_Pim_HwAg1Snsr1ComStsErrCntr
#endif
#define Rte_Pim_HwAg1Snsr1ComStsErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr1ComStsErrCntr)

#ifdef Rte_Pim_HwAg1Snsr1IdErrCntr
# undef Rte_Pim_HwAg1Snsr1IdErrCntr
#endif
#define Rte_Pim_HwAg1Snsr1IdErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr1IdErrCntr)

#ifdef Rte_Pim_HwAg1Snsr1IntSnsrErrCntr
# undef Rte_Pim_HwAg1Snsr1IntSnsrErrCntr
#endif
#define Rte_Pim_HwAg1Snsr1IntSnsrErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr1IntSnsrErrCntr)

#ifdef Rte_Pim_HwAg1Snsr1NoMsgErrCntr
# undef Rte_Pim_HwAg1Snsr1NoMsgErrCntr
#endif
#define Rte_Pim_HwAg1Snsr1NoMsgErrCntr() (&HwAg1Meas_Pim_HwAg1Snsr1NoMsgErrCntr)

#ifdef Rte_Pim_HwAg1SnsrTrigNr
# undef Rte_Pim_HwAg1SnsrTrigNr
#endif
#define Rte_Pim_HwAg1SnsrTrigNr() (&HwAg1Meas_Pim_HwAg1SnsrTrigNr)

#ifdef Rte_Pim_PrevHwAg1
# undef Rte_Pim_PrevHwAg1
#endif
#define Rte_Pim_PrevHwAg1() (&HwAg1Meas_Pim_PrevHwAg1)

#ifdef Rte_Pim_PrevHwAg1Qlfr
# undef Rte_Pim_PrevHwAg1Qlfr
#endif
#define Rte_Pim_PrevHwAg1Qlfr() (&HwAg1Meas_Pim_PrevHwAg1Qlfr)

#ifdef Rte_Pim_PrevHwAg1Snsr0Raw
# undef Rte_Pim_PrevHwAg1Snsr0Raw
#endif
#define Rte_Pim_PrevHwAg1Snsr0Raw() (&HwAg1Meas_Pim_PrevHwAg1Snsr0Raw)

#ifdef Rte_Pim_PrevHwAg1Snsr0TestOk
# undef Rte_Pim_PrevHwAg1Snsr0TestOk
#endif
#define Rte_Pim_PrevHwAg1Snsr0TestOk() (&HwAg1Meas_Pim_PrevHwAg1Snsr0TestOk)

#ifdef Rte_Pim_PrevHwAg1Snsr1Raw
# undef Rte_Pim_PrevHwAg1Snsr1Raw
#endif
#define Rte_Pim_PrevHwAg1Snsr1Raw() (&HwAg1Meas_Pim_PrevHwAg1Snsr1Raw)

#ifdef Rte_Pim_PrevHwAg1Snsr1TestOk
# undef Rte_Pim_PrevHwAg1Snsr1TestOk
#endif
#define Rte_Pim_PrevHwAg1Snsr1TestOk() (&HwAg1Meas_Pim_PrevHwAg1Snsr1TestOk)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw
# undef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw
#endif
#define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0Raw() (HwAg1Meas_Irv_HwAg1Snsr0Raw)

#ifdef Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw
# undef Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw
#endif
#define Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0Raw(data) (HwAg1Meas_Irv_HwAg1Snsr0Raw = (data))

#ifdef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk
# undef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk
#endif
#define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr0TestOk() (HwAg1Meas_Irv_HwAg1Snsr0TestOk)

#ifdef Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk
# undef Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk
#endif
#define Rte_IrvWrite_HwAg1MeasPer2_HwAg1Snsr0TestOk(data) (HwAg1Meas_Irv_HwAg1Snsr0TestOk = (data))

#ifdef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw
# undef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw
#endif
#define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1Raw() (HwAg1Meas_Irv_HwAg1Snsr1Raw)

#ifdef Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw
# undef Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw
#endif
#define Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1Raw(data) (HwAg1Meas_Irv_HwAg1Snsr1Raw = (data))

#ifdef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk
# undef Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk
#endif
#define Rte_IrvRead_HwAg1MeasPer4_HwAg1Snsr1TestOk() (HwAg1Meas_Irv_HwAg1Snsr1TestOk)

#ifdef Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk
# undef Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk
#endif
#define Rte_IrvWrite_HwAg1MeasPer3_HwAg1Snsr1TestOk(data) (HwAg1Meas_Irv_HwAg1Snsr1TestOk = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
