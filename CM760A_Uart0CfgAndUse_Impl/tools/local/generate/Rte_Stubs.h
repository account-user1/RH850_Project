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
extern VAR(uint16, AUTOMATIC) Uart0CfgAndUse_Pim_PrevDmaTrfCnt;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0100MilliSecBufCnt[2048];
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0100MilliSecReadCmpl;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart010MilliSecBufCnt[2048];
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart010MilliSecReadCmpl;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart02MilliSecBufCnt[2048];
extern VAR(uint32, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0DiagcFrmErrCntr;
extern VAR(uint32, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0DiagcOvrrunErrCntr;
extern VAR(uint32, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0DiagcParErrCntr;
extern VAR(uint32, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0DiagcRxMaxDataErrCntr;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0NrOfPnd100MilliSecFrmCnt;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0NrOfPnd10MilliSecFrmCnt;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Pim_Uart0RxPrevLoopDataUnread;

/* Arguments and Returns */
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Srv_GetTxRateGroup_RateGroup;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Srv_GetTxRateGroup_Buf[2048];
extern VAR(Std_ReturnType, AUTOMATIC) Uart0CfgAndUse_Srv_GetTxRateGroup_Return;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Srv_SetRxSigGroup_SigGroup;
extern VAR(ImcArbnRxDataSrc1, AUTOMATIC) Uart0CfgAndUse_Srv_SetRxSigGroup_DataSrc;
extern VAR(uint8, AUTOMATIC) Uart0CfgAndUse_Srv_SetRxSigGroup_Buf[8];
extern VAR(Std_ReturnType, AUTOMATIC) Uart0CfgAndUse_Srv_SetRxSigGroup_Return;


/*** PIM Stubs ***/

#ifdef Rte_Pim_PrevDmaTrfCnt
# undef Rte_Pim_PrevDmaTrfCnt
#endif
#define Rte_Pim_PrevDmaTrfCnt() (&Uart0CfgAndUse_Pim_PrevDmaTrfCnt)

#ifdef Rte_Pim_Uart0100MilliSecBufCnt
# undef Rte_Pim_Uart0100MilliSecBufCnt
#endif
#define Rte_Pim_Uart0100MilliSecBufCnt() (&(Uart0CfgAndUse_Pim_Uart0100MilliSecBufCnt[0]))

#ifdef Rte_Pim_Uart0100MilliSecReadCmpl
# undef Rte_Pim_Uart0100MilliSecReadCmpl
#endif
#define Rte_Pim_Uart0100MilliSecReadCmpl() (&Uart0CfgAndUse_Pim_Uart0100MilliSecReadCmpl)

#ifdef Rte_Pim_Uart010MilliSecBufCnt
# undef Rte_Pim_Uart010MilliSecBufCnt
#endif
#define Rte_Pim_Uart010MilliSecBufCnt() (&(Uart0CfgAndUse_Pim_Uart010MilliSecBufCnt[0]))

#ifdef Rte_Pim_Uart010MilliSecReadCmpl
# undef Rte_Pim_Uart010MilliSecReadCmpl
#endif
#define Rte_Pim_Uart010MilliSecReadCmpl() (&Uart0CfgAndUse_Pim_Uart010MilliSecReadCmpl)

#ifdef Rte_Pim_Uart02MilliSecBufCnt
# undef Rte_Pim_Uart02MilliSecBufCnt
#endif
#define Rte_Pim_Uart02MilliSecBufCnt() (&(Uart0CfgAndUse_Pim_Uart02MilliSecBufCnt[0]))

#ifdef Rte_Pim_Uart0DiagcFrmErrCntr
# undef Rte_Pim_Uart0DiagcFrmErrCntr
#endif
#define Rte_Pim_Uart0DiagcFrmErrCntr() (&Uart0CfgAndUse_Pim_Uart0DiagcFrmErrCntr)

#ifdef Rte_Pim_Uart0DiagcOvrrunErrCntr
# undef Rte_Pim_Uart0DiagcOvrrunErrCntr
#endif
#define Rte_Pim_Uart0DiagcOvrrunErrCntr() (&Uart0CfgAndUse_Pim_Uart0DiagcOvrrunErrCntr)

#ifdef Rte_Pim_Uart0DiagcParErrCntr
# undef Rte_Pim_Uart0DiagcParErrCntr
#endif
#define Rte_Pim_Uart0DiagcParErrCntr() (&Uart0CfgAndUse_Pim_Uart0DiagcParErrCntr)

#ifdef Rte_Pim_Uart0DiagcRxMaxDataErrCntr
# undef Rte_Pim_Uart0DiagcRxMaxDataErrCntr
#endif
#define Rte_Pim_Uart0DiagcRxMaxDataErrCntr() (&Uart0CfgAndUse_Pim_Uart0DiagcRxMaxDataErrCntr)

#ifdef Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt
# undef Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt
#endif
#define Rte_Pim_Uart0NrOfPnd100MilliSecFrmCnt() (&Uart0CfgAndUse_Pim_Uart0NrOfPnd100MilliSecFrmCnt)

#ifdef Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt
# undef Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt
#endif
#define Rte_Pim_Uart0NrOfPnd10MilliSecFrmCnt() (&Uart0CfgAndUse_Pim_Uart0NrOfPnd10MilliSecFrmCnt)

#ifdef Rte_Pim_Uart0RxPrevLoopDataUnread
# undef Rte_Pim_Uart0RxPrevLoopDataUnread
#endif
#define Rte_Pim_Uart0RxPrevLoopDataUnread() (&Uart0CfgAndUse_Pim_Uart0RxPrevLoopDataUnread)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
