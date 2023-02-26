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
extern VAR(sint8, AUTOMATIC) HwTq8Meas_Ip_HwTq8Polarity;

/* Outputs */
extern VAR(float32, AUTOMATIC) HwTq8Meas_Op_HwTq8;
extern VAR(SigQlfr1, AUTOMATIC) HwTq8Meas_Op_HwTq8Qlfr;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Op_HwTq8RollgCntr;
extern VAR(float32, AUTOMATIC) HwTq8Meas_Op_RackLimrCcwEotSig8;
extern VAR(float32, AUTOMATIC) HwTq8Meas_Op_RackLimrCwEotSig8;
extern VAR(boolean, AUTOMATIC) HwTq8Meas_Op_RackLimrEotSig8Avl;

/* Calibrations */
extern CONST(uint16, AUTOMATIC) HwTq8Meas_Cal_HwTq8MeasHwTq8PrtclFltFailStep;
extern CONST(uint16, AUTOMATIC) HwTq8Meas_Cal_HwTq8MeasHwTq8PrtclFltPassStep;

/* PIMs */
extern VAR(HwTqOffsRec1, AUTOMATIC) HwTq8Meas_Pim_HwTq8Offs;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Pim_HwTq8ComStsErrCntr;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Pim_HwTq8IntSnsrErrCntr;
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Pim_HwTq8MsgMissRxCnt;
extern VAR(float32, AUTOMATIC) HwTq8Meas_Pim_HwTq8PrevHwTq8;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Pim_HwTq8PrevRollgCntr;
extern VAR(float32, AUTOMATIC) HwTq8Meas_Pim_RackLimrCcwEot8;
extern VAR(float32, AUTOMATIC) HwTq8Meas_Pim_RackLimrCwEot8;
extern VAR(boolean, AUTOMATIC) HwTq8Meas_Pim_RackLimrEot8Avl;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Pim_RackLimrEot8Data0;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Pim_RackLimrEot8Data1;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Pim_RackLimrEot8Data2;
extern VAR(boolean, AUTOMATIC) HwTq8Meas_Pim_RackLimrEot8Id2DataReadCmpl;
extern VAR(boolean, AUTOMATIC) HwTq8Meas_Pim_RackLimrEot8Id3DataReadCmpl;
extern VAR(boolean, AUTOMATIC) HwTq8Meas_Pim_RackLimrEot8Id4DataReadCmpl;

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Srv_CnvSnpshtData_u08_SnpshtDataCnvd;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Srv_CnvSnpshtData_u08_SnpshtData;
extern VAR(NtcNr1, AUTOMATIC) HwTq8Meas_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) HwTq8Meas_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq8Meas_Srv_GetNtcQlfrSts_Return;
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Srv_GetRefTmr1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Srv_GetTiSpan1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Srv_GetTiSpan1MicroSec32bit_TiSpan;
extern VAR(boolean, AUTOMATIC) HwTq8Meas_Srv_HwTq8Offs_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq8Meas_Srv_HwTq8Offs_SetRamBlockStatus_Return;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq8Meas_Srv_IoHwAb_SetFctPrphlHwTq8_Return;
extern VAR(NtcNr1, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) HwTq8Meas_Srv_SetNtcStsAndSnpshtData_Return;
extern VAR(float32, AUTOMATIC) HwTq8Meas_Cli_HwTq8ReadTrim_HwTqReadTrimData;
extern VAR(boolean, AUTOMATIC) HwTq8Meas_Cli_HwTq8TrimPrfmdSts_HwTqOffsTrimPrfmdStsData;
extern VAR(float32, AUTOMATIC) HwTq8Meas_Cli_HwTq8WrTrim_HwTqWrOffsTrimData;


/*** Input Stubs ***/

#ifdef Rte_Read_HwTq8Polarity_Val
# undef Rte_Read_HwTq8Polarity_Val
#endif
#define Rte_Read_HwTq8Polarity_Val(data) (*(data) = HwTq8Meas_Ip_HwTq8Polarity)


/*** Output Stubs ***/

#ifdef Rte_Write_HwTq8_Val
# undef Rte_Write_HwTq8_Val
#endif
#define Rte_Write_HwTq8_Val(data) (HwTq8Meas_Op_HwTq8 = (data))

#ifdef Rte_Write_HwTq8Qlfr_Val
# undef Rte_Write_HwTq8Qlfr_Val
#endif
#define Rte_Write_HwTq8Qlfr_Val(data) (HwTq8Meas_Op_HwTq8Qlfr = (data))

#ifdef Rte_Write_HwTq8RollgCntr_Val
# undef Rte_Write_HwTq8RollgCntr_Val
#endif
#define Rte_Write_HwTq8RollgCntr_Val(data) (HwTq8Meas_Op_HwTq8RollgCntr = (data))

#ifdef Rte_Write_RackLimrCcwEotSig8_Val
# undef Rte_Write_RackLimrCcwEotSig8_Val
#endif
#define Rte_Write_RackLimrCcwEotSig8_Val(data) (HwTq8Meas_Op_RackLimrCcwEotSig8 = (data))

#ifdef Rte_Write_RackLimrCwEotSig8_Val
# undef Rte_Write_RackLimrCwEotSig8_Val
#endif
#define Rte_Write_RackLimrCwEotSig8_Val(data) (HwTq8Meas_Op_RackLimrCwEotSig8 = (data))

#ifdef Rte_Write_RackLimrEotSig8Avl_Logl
# undef Rte_Write_RackLimrEotSig8Avl_Logl
#endif
#define Rte_Write_RackLimrEotSig8Avl_Logl(data) (HwTq8Meas_Op_RackLimrEotSig8Avl = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_HwTq8MeasHwTq8PrtclFltFailStep_Val
# undef Rte_Prm_HwTq8MeasHwTq8PrtclFltFailStep_Val
#endif
#define Rte_Prm_HwTq8MeasHwTq8PrtclFltFailStep_Val() (HwTq8Meas_Cal_HwTq8MeasHwTq8PrtclFltFailStep)

#ifdef Rte_Prm_HwTq8MeasHwTq8PrtclFltPassStep_Val
# undef Rte_Prm_HwTq8MeasHwTq8PrtclFltPassStep_Val
#endif
#define Rte_Prm_HwTq8MeasHwTq8PrtclFltPassStep_Val() (HwTq8Meas_Cal_HwTq8MeasHwTq8PrtclFltPassStep)


/*** PIM Stubs ***/

#ifdef Rte_Pim_HwTq8Offs
# undef Rte_Pim_HwTq8Offs
#endif
#define Rte_Pim_HwTq8Offs() (&HwTq8Meas_Pim_HwTq8Offs)

#ifdef Rte_Pim_HwTq8ComStsErrCntr
# undef Rte_Pim_HwTq8ComStsErrCntr
#endif
#define Rte_Pim_HwTq8ComStsErrCntr() (&HwTq8Meas_Pim_HwTq8ComStsErrCntr)

#ifdef Rte_Pim_HwTq8IntSnsrErrCntr
# undef Rte_Pim_HwTq8IntSnsrErrCntr
#endif
#define Rte_Pim_HwTq8IntSnsrErrCntr() (&HwTq8Meas_Pim_HwTq8IntSnsrErrCntr)

#ifdef Rte_Pim_HwTq8MsgMissRxCnt
# undef Rte_Pim_HwTq8MsgMissRxCnt
#endif
#define Rte_Pim_HwTq8MsgMissRxCnt() (&HwTq8Meas_Pim_HwTq8MsgMissRxCnt)

#ifdef Rte_Pim_HwTq8PrevHwTq8
# undef Rte_Pim_HwTq8PrevHwTq8
#endif
#define Rte_Pim_HwTq8PrevHwTq8() (&HwTq8Meas_Pim_HwTq8PrevHwTq8)

#ifdef Rte_Pim_HwTq8PrevRollgCntr
# undef Rte_Pim_HwTq8PrevRollgCntr
#endif
#define Rte_Pim_HwTq8PrevRollgCntr() (&HwTq8Meas_Pim_HwTq8PrevRollgCntr)

#ifdef Rte_Pim_RackLimrCcwEot8
# undef Rte_Pim_RackLimrCcwEot8
#endif
#define Rte_Pim_RackLimrCcwEot8() (&HwTq8Meas_Pim_RackLimrCcwEot8)

#ifdef Rte_Pim_RackLimrCwEot8
# undef Rte_Pim_RackLimrCwEot8
#endif
#define Rte_Pim_RackLimrCwEot8() (&HwTq8Meas_Pim_RackLimrCwEot8)

#ifdef Rte_Pim_RackLimrEot8Avl
# undef Rte_Pim_RackLimrEot8Avl
#endif
#define Rte_Pim_RackLimrEot8Avl() (&HwTq8Meas_Pim_RackLimrEot8Avl)

#ifdef Rte_Pim_RackLimrEot8Data0
# undef Rte_Pim_RackLimrEot8Data0
#endif
#define Rte_Pim_RackLimrEot8Data0() (&HwTq8Meas_Pim_RackLimrEot8Data0)

#ifdef Rte_Pim_RackLimrEot8Data1
# undef Rte_Pim_RackLimrEot8Data1
#endif
#define Rte_Pim_RackLimrEot8Data1() (&HwTq8Meas_Pim_RackLimrEot8Data1)

#ifdef Rte_Pim_RackLimrEot8Data2
# undef Rte_Pim_RackLimrEot8Data2
#endif
#define Rte_Pim_RackLimrEot8Data2() (&HwTq8Meas_Pim_RackLimrEot8Data2)

#ifdef Rte_Pim_RackLimrEot8Id2DataReadCmpl
# undef Rte_Pim_RackLimrEot8Id2DataReadCmpl
#endif
#define Rte_Pim_RackLimrEot8Id2DataReadCmpl() (&HwTq8Meas_Pim_RackLimrEot8Id2DataReadCmpl)

#ifdef Rte_Pim_RackLimrEot8Id3DataReadCmpl
# undef Rte_Pim_RackLimrEot8Id3DataReadCmpl
#endif
#define Rte_Pim_RackLimrEot8Id3DataReadCmpl() (&HwTq8Meas_Pim_RackLimrEot8Id3DataReadCmpl)

#ifdef Rte_Pim_RackLimrEot8Id4DataReadCmpl
# undef Rte_Pim_RackLimrEot8Id4DataReadCmpl
#endif
#define Rte_Pim_RackLimrEot8Id4DataReadCmpl() (&HwTq8Meas_Pim_RackLimrEot8Id4DataReadCmpl)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
