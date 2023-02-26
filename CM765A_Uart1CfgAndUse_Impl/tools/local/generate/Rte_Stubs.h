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

/* PIMs */
extern VAR(uint16, AUTOMATIC) Uart1CfgAndUse_Pim_PrevDmaTrfCnt;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1100MilliSecBufCnt[2048];
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1100MilliSecReadCmpl;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart110MilliSecBufCnt[2048];
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart110MilliSecReadCmpl;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart12MilliSecBufCnt[2048];
extern VAR(uint32, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1DiagcFrmErrCntr;
extern VAR(uint32, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1DiagcOvrrunErrCntr;
extern VAR(uint32, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1DiagcParErrCntr;
extern VAR(uint32, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1DiagcRxMaxDataErrCntr;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1NrOfPnd100MilliSecFrmCnt;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1NrOfPnd10MilliSecFrmCnt;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Pim_Uart1RxPrevLoopDataUnread;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Srv_GetTxRateGroup_RateGroup;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Srv_GetTxRateGroup_Buf[2048];
extern VAR(Std_ReturnType, AUTOMATIC) Uart1CfgAndUse_Srv_GetTxRateGroup_Return;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Srv_SetRxSigGroup_SigGroup;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) Uart1CfgAndUse_Srv_SetRxSigGroup_DataSrc;
extern VAR(uint8, AUTOMATIC) Uart1CfgAndUse_Srv_SetRxSigGroup_Buf[8];
extern VAR(Std_ReturnType, AUTOMATIC) Uart1CfgAndUse_Srv_SetRxSigGroup_Return;


/*** PIM Stubs ***/

#ifdef Rte_Pim_PrevDmaTrfCnt
# undef Rte_Pim_PrevDmaTrfCnt
#endif
#define Rte_Pim_PrevDmaTrfCnt() (&Uart1CfgAndUse_Pim_PrevDmaTrfCnt)

#ifdef Rte_Pim_Uart1100MilliSecBufCnt
# undef Rte_Pim_Uart1100MilliSecBufCnt
#endif
#define Rte_Pim_Uart1100MilliSecBufCnt() (&(Uart1CfgAndUse_Pim_Uart1100MilliSecBufCnt[0]))

#ifdef Rte_Pim_Uart1100MilliSecReadCmpl
# undef Rte_Pim_Uart1100MilliSecReadCmpl
#endif
#define Rte_Pim_Uart1100MilliSecReadCmpl() (&Uart1CfgAndUse_Pim_Uart1100MilliSecReadCmpl)

#ifdef Rte_Pim_Uart110MilliSecBufCnt
# undef Rte_Pim_Uart110MilliSecBufCnt
#endif
#define Rte_Pim_Uart110MilliSecBufCnt() (&(Uart1CfgAndUse_Pim_Uart110MilliSecBufCnt[0]))

#ifdef Rte_Pim_Uart110MilliSecReadCmpl
# undef Rte_Pim_Uart110MilliSecReadCmpl
#endif
#define Rte_Pim_Uart110MilliSecReadCmpl() (&Uart1CfgAndUse_Pim_Uart110MilliSecReadCmpl)

#ifdef Rte_Pim_Uart12MilliSecBufCnt
# undef Rte_Pim_Uart12MilliSecBufCnt
#endif
#define Rte_Pim_Uart12MilliSecBufCnt() (&(Uart1CfgAndUse_Pim_Uart12MilliSecBufCnt[0]))

#ifdef Rte_Pim_Uart1DiagcFrmErrCntr
# undef Rte_Pim_Uart1DiagcFrmErrCntr
#endif
#define Rte_Pim_Uart1DiagcFrmErrCntr() (&Uart1CfgAndUse_Pim_Uart1DiagcFrmErrCntr)

#ifdef Rte_Pim_Uart1DiagcOvrrunErrCntr
# undef Rte_Pim_Uart1DiagcOvrrunErrCntr
#endif
#define Rte_Pim_Uart1DiagcOvrrunErrCntr() (&Uart1CfgAndUse_Pim_Uart1DiagcOvrrunErrCntr)

#ifdef Rte_Pim_Uart1DiagcParErrCntr
# undef Rte_Pim_Uart1DiagcParErrCntr
#endif
#define Rte_Pim_Uart1DiagcParErrCntr() (&Uart1CfgAndUse_Pim_Uart1DiagcParErrCntr)

#ifdef Rte_Pim_Uart1DiagcRxMaxDataErrCntr
# undef Rte_Pim_Uart1DiagcRxMaxDataErrCntr
#endif
#define Rte_Pim_Uart1DiagcRxMaxDataErrCntr() (&Uart1CfgAndUse_Pim_Uart1DiagcRxMaxDataErrCntr)

#ifdef Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt
# undef Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt
#endif
#define Rte_Pim_Uart1NrOfPnd100MilliSecFrmCnt() (&Uart1CfgAndUse_Pim_Uart1NrOfPnd100MilliSecFrmCnt)

#ifdef Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt
# undef Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt
#endif
#define Rte_Pim_Uart1NrOfPnd10MilliSecFrmCnt() (&Uart1CfgAndUse_Pim_Uart1NrOfPnd10MilliSecFrmCnt)

#ifdef Rte_Pim_Uart1RxPrevLoopDataUnread
# undef Rte_Pim_Uart1RxPrevLoopDataUnread
#endif
#define Rte_Pim_Uart1RxPrevLoopDataUnread() (&Uart1CfgAndUse_Pim_Uart1RxPrevLoopDataUnread)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
