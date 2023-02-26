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
extern VAR(uint8, AUTOMATIC) TmplMonr_Ip_StrtUpSt;
extern VAR(SysSt1, AUTOMATIC) TmplMonr_Ip_SysSt;

/* Outputs */
extern VAR(boolean, AUTOMATIC) TmplMonr_Op_TmplMonrIninTestCmpl;

/* PIMs */
extern VAR(uint32, AUTOMATIC) TmplMonr_Pim_AvrgElpdTiMicroSec;
extern VAR(uint8, AUTOMATIC) TmplMonr_Pim_TmplMonrIninCntr;
extern VAR(boolean, AUTOMATIC) TmplMonr_Pim_TmplMonrIninTestCmplFlg;
extern VAR(uint8, AUTOMATIC) TmplMonr_Pim_TmplMonrNtc40PrmByte;
extern VAR(boolean, AUTOMATIC) TmplMonr_Pim_TmplMonrSpiReadWrOrderFlg1;
extern VAR(boolean, AUTOMATIC) TmplMonr_Pim_TmplMonrSpiReadWrOrderFlg2;
extern VAR(uint8, AUTOMATIC) TmplMonr_Pim_TmplMonrWdgRstrtCnt;
extern VAR(uint16, AUTOMATIC) TmplMonr_Pim_TrsmErrCntr;
extern VAR(uint8, AUTOMATIC) TmplMonr_Pim_TrsmErrNtcThd;

/* IRVs */
extern VAR(uint32, AUTOMATIC) TmplMonr_Irv_ElpdTiMicroSec;

/* Arguments and Returns */
extern VAR(boolean, AUTOMATIC) TmplMonr_Srv_CtrlErrOut_PinSt;
extern VAR(TrigReg1, AUTOMATIC) TmplMonr_Srv_CtrlErrOut_TrigReg;
extern VAR(uint32, AUTOMATIC) TmplMonr_Srv_GetRefTmr1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) TmplMonr_Srv_GetTiSpan1MicroSec32bit_RefTmr;
extern VAR(uint32, AUTOMATIC) TmplMonr_Srv_GetTiSpan1MicroSec32bit_TiSpan;
extern VAR(boolean, AUTOMATIC) TmplMonr_Srv_IoHwAb_GetGpioPwrOutpEnaFb_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) TmplMonr_Srv_IoHwAb_GetGpioPwrOutpEnaFb_Return;
extern VAR(boolean, AUTOMATIC) TmplMonr_Srv_IoHwAb_SetGpioTmplMonrWdg_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) TmplMonr_Srv_IoHwAb_SetGpioTmplMonrWdg_Return;
extern VAR(NtcNr1, AUTOMATIC) TmplMonr_Srv_SetNtcSts_NtcNr;
extern VAR(uint8, AUTOMATIC) TmplMonr_Srv_SetNtcSts_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) TmplMonr_Srv_SetNtcSts_NtcSts;
extern VAR(uint16, AUTOMATIC) TmplMonr_Srv_SetNtcSts_DebStep;
extern VAR(Std_ReturnType, AUTOMATIC) TmplMonr_Srv_SetNtcSts_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_StrtUpSt_Val
# undef Rte_Read_StrtUpSt_Val
#endif
#define Rte_Read_StrtUpSt_Val(data) (*(data) = TmplMonr_Ip_StrtUpSt)

#ifdef Rte_Read_SysSt_Val
# undef Rte_Read_SysSt_Val
#endif
#define Rte_Read_SysSt_Val(data) (*(data) = TmplMonr_Ip_SysSt)


/*** Output Stubs ***/

#ifdef Rte_Write_TmplMonrIninTestCmpl_Logl
# undef Rte_Write_TmplMonrIninTestCmpl_Logl
#endif
#define Rte_Write_TmplMonrIninTestCmpl_Logl(data) (TmplMonr_Op_TmplMonrIninTestCmpl = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_AvrgElpdTiMicroSec
# undef Rte_Pim_AvrgElpdTiMicroSec
#endif
#define Rte_Pim_AvrgElpdTiMicroSec() (&TmplMonr_Pim_AvrgElpdTiMicroSec)

#ifdef Rte_Pim_TmplMonrIninCntr
# undef Rte_Pim_TmplMonrIninCntr
#endif
#define Rte_Pim_TmplMonrIninCntr() (&TmplMonr_Pim_TmplMonrIninCntr)

#ifdef Rte_Pim_TmplMonrIninTestCmplFlg
# undef Rte_Pim_TmplMonrIninTestCmplFlg
#endif
#define Rte_Pim_TmplMonrIninTestCmplFlg() (&TmplMonr_Pim_TmplMonrIninTestCmplFlg)

#ifdef Rte_Pim_TmplMonrNtc40PrmByte
# undef Rte_Pim_TmplMonrNtc40PrmByte
#endif
#define Rte_Pim_TmplMonrNtc40PrmByte() (&TmplMonr_Pim_TmplMonrNtc40PrmByte)

#ifdef Rte_Pim_TmplMonrSpiReadWrOrderFlg1
# undef Rte_Pim_TmplMonrSpiReadWrOrderFlg1
#endif
#define Rte_Pim_TmplMonrSpiReadWrOrderFlg1() (&TmplMonr_Pim_TmplMonrSpiReadWrOrderFlg1)

#ifdef Rte_Pim_TmplMonrSpiReadWrOrderFlg2
# undef Rte_Pim_TmplMonrSpiReadWrOrderFlg2
#endif
#define Rte_Pim_TmplMonrSpiReadWrOrderFlg2() (&TmplMonr_Pim_TmplMonrSpiReadWrOrderFlg2)

#ifdef Rte_Pim_TmplMonrWdgRstrtCnt
# undef Rte_Pim_TmplMonrWdgRstrtCnt
#endif
#define Rte_Pim_TmplMonrWdgRstrtCnt() (&TmplMonr_Pim_TmplMonrWdgRstrtCnt)

#ifdef Rte_Pim_TrsmErrCntr
# undef Rte_Pim_TrsmErrCntr
#endif
#define Rte_Pim_TrsmErrCntr() (&TmplMonr_Pim_TrsmErrCntr)

#ifdef Rte_Pim_TrsmErrNtcThd
# undef Rte_Pim_TrsmErrNtcThd
#endif
#define Rte_Pim_TrsmErrNtcThd() (&TmplMonr_Pim_TrsmErrNtcThd)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_TmplMonrPer2_ElpdTiMicroSec
# undef Rte_IrvRead_TmplMonrPer2_ElpdTiMicroSec
#endif
#define Rte_IrvRead_TmplMonrPer2_ElpdTiMicroSec() (TmplMonr_Irv_ElpdTiMicroSec)

#ifdef Rte_IrvWrite_TmplMonrPer1_ElpdTiMicroSec
# undef Rte_IrvWrite_TmplMonrPer1_ElpdTiMicroSec
#endif
#define Rte_IrvWrite_TmplMonrPer1_ElpdTiMicroSec(data) (TmplMonr_Irv_ElpdTiMicroSec = (data))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
