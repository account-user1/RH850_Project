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
extern VAR(uint8, AUTOMATIC) FordBlaBoxIfCmp2_Ip_EcuId;
extern VAR(FordArbnCmd1, AUTOMATIC) FordBlaBoxIfCmp2_Ip_FordEvasSteerAssiArbnCmd;
extern VAR(FordArbnCmd1, AUTOMATIC) FordBlaBoxIfCmp2_Ip_FordSteerTqDstbcRejctnArbnCmd;
extern VAR(uint16, AUTOMATIC) FordBlaBoxIfCmp2_Ip_FordWrSrvBrkPlsRednActvnCntr;
extern VAR(uint32, AUTOMATIC) FordBlaBoxIfCmp2_Ip_FordWrSrvEvasSteerAssiIntSts;
extern VAR(uint32, AUTOMATIC) FordBlaBoxIfCmp2_Ip_FordWrSrvSteerTqDstbcRejctnIntSts;
extern VAR(uint16, AUTOMATIC) FordBlaBoxIfCmp2_Ip_FordWrSrvTqSteerCmpActvnCntr;

/* Outputs */
extern VAR(uint16, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordBrkPlsRednActvnCntr;
extern VAR(FordFeatSt1, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordEvasSteerAssiFeatSt;
extern VAR(uint32, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordEvasSteerAssiIntSts;
extern VAR(float32, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordEvasSteerAssiTqReq;
extern VAR(uint32, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordEvasSteerAssiSwVers;
extern VAR(FordFeatSt1, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnFeatSt;
extern VAR(uint32, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnIntSts;
extern VAR(float32, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnTqReq;
extern VAR(uint32, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnSwVers;
extern VAR(uint16, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordTqSteerCmpActvnCntr;
extern VAR(uint8, AUTOMATIC) FordBlaBoxIfCmp2_Op_FordVehEvasSteerAssiSts;

/* PIMs */
extern VAR(boolean, AUTOMATIC) FordBlaBoxIfCmp2_Pim_EvasSteerAssiFctCallTog;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_EcuId_Val
# undef Rte_Read_EcuId_Val
#else
#error Rte_Read_EcuId_Val is missing
#endif
#define Rte_Read_EcuId_Val(data) (*(data) = FordBlaBoxIfCmp2_Ip_EcuId)

#ifdef Rte_Read_FordEvasSteerAssiArbnCmd_Val
# undef Rte_Read_FordEvasSteerAssiArbnCmd_Val
#else
#error Rte_Read_FordEvasSteerAssiArbnCmd_Val is missing
#endif
#define Rte_Read_FordEvasSteerAssiArbnCmd_Val(data) (*(data) = FordBlaBoxIfCmp2_Ip_FordEvasSteerAssiArbnCmd)

#ifdef Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val
# undef Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val
#else
#error Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val is missing
#endif
#define Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(data) (*(data) = FordBlaBoxIfCmp2_Ip_FordSteerTqDstbcRejctnArbnCmd)

#ifdef Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val
# undef Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val
#else
#error Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val is missing
#endif
#define Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val(data) (*(data) = FordBlaBoxIfCmp2_Ip_FordWrSrvBrkPlsRednActvnCntr)

#ifdef Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val
# undef Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val
#else
#error Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val is missing
#endif
#define Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val(data) (*(data) = FordBlaBoxIfCmp2_Ip_FordWrSrvEvasSteerAssiIntSts)

#ifdef Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val
# undef Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val
#else
#error Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val is missing
#endif
#define Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val(data) (*(data) = FordBlaBoxIfCmp2_Ip_FordWrSrvSteerTqDstbcRejctnIntSts)

#ifdef Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val
# undef Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val
#else
#error Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val is missing
#endif
#define Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val(data) (*(data) = FordBlaBoxIfCmp2_Ip_FordWrSrvTqSteerCmpActvnCntr)


/*** Output Stubs ***/

#ifdef Rte_Write_FordBrkPlsRednActvnCntr_Val
# undef Rte_Write_FordBrkPlsRednActvnCntr_Val
#else
#error Rte_Write_FordBrkPlsRednActvnCntr_Val is missing
#endif
#define Rte_Write_FordBrkPlsRednActvnCntr_Val(data) (FordBlaBoxIfCmp2_Op_FordBrkPlsRednActvnCntr = (data))

#ifdef Rte_Write_FordEvasSteerAssiFeatSt_Val
# undef Rte_Write_FordEvasSteerAssiFeatSt_Val
#else
#error Rte_Write_FordEvasSteerAssiFeatSt_Val is missing
#endif
#define Rte_Write_FordEvasSteerAssiFeatSt_Val(data) (FordBlaBoxIfCmp2_Op_FordEvasSteerAssiFeatSt = (data))

#ifdef Rte_Write_FordEvasSteerAssiIntSts_Val
# undef Rte_Write_FordEvasSteerAssiIntSts_Val
#else
#error Rte_Write_FordEvasSteerAssiIntSts_Val is missing
#endif
#define Rte_Write_FordEvasSteerAssiIntSts_Val(data) (FordBlaBoxIfCmp2_Op_FordEvasSteerAssiIntSts = (data))

#ifdef Rte_Write_FordEvasSteerAssiTqReq_Val
# undef Rte_Write_FordEvasSteerAssiTqReq_Val
#else
#error Rte_Write_FordEvasSteerAssiTqReq_Val is missing
#endif
#define Rte_Write_FordEvasSteerAssiTqReq_Val(data) (FordBlaBoxIfCmp2_Op_FordEvasSteerAssiTqReq = (data))

#ifdef Rte_Write_FordEvasSteerAssiSwVers_Val
# undef Rte_Write_FordEvasSteerAssiSwVers_Val
#else
#error Rte_Write_FordEvasSteerAssiSwVers_Val is missing
#endif
#define Rte_Write_FordEvasSteerAssiSwVers_Val(data) (FordBlaBoxIfCmp2_Op_FordEvasSteerAssiSwVers = (data))

#ifdef Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val
# undef Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val
#else
#error Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val is missing
#endif
#define Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val(data) (FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnFeatSt = (data))

#ifdef Rte_Write_FordSteerTqDstbcRejctnIntSts_Val
# undef Rte_Write_FordSteerTqDstbcRejctnIntSts_Val
#else
#error Rte_Write_FordSteerTqDstbcRejctnIntSts_Val is missing
#endif
#define Rte_Write_FordSteerTqDstbcRejctnIntSts_Val(data) (FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnIntSts = (data))

#ifdef Rte_Write_FordSteerTqDstbcRejctnTqReq_Val
# undef Rte_Write_FordSteerTqDstbcRejctnTqReq_Val
#else
#error Rte_Write_FordSteerTqDstbcRejctnTqReq_Val is missing
#endif
#define Rte_Write_FordSteerTqDstbcRejctnTqReq_Val(data) (FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnTqReq = (data))

#ifdef Rte_Write_FordSteerTqDstbcRejctnSwVers_Val
# undef Rte_Write_FordSteerTqDstbcRejctnSwVers_Val
#else
#error Rte_Write_FordSteerTqDstbcRejctnSwVers_Val is missing
#endif
#define Rte_Write_FordSteerTqDstbcRejctnSwVers_Val(data) (FordBlaBoxIfCmp2_Op_FordSteerTqDstbcRejctnSwVers = (data))

#ifdef Rte_Write_FordTqSteerCmpActvnCntr_Val
# undef Rte_Write_FordTqSteerCmpActvnCntr_Val
#else
#error Rte_Write_FordTqSteerCmpActvnCntr_Val is missing
#endif
#define Rte_Write_FordTqSteerCmpActvnCntr_Val(data) (FordBlaBoxIfCmp2_Op_FordTqSteerCmpActvnCntr = (data))

#ifdef Rte_Write_FordVehEvasSteerAssiSts_Val
# undef Rte_Write_FordVehEvasSteerAssiSts_Val
#else
#error Rte_Write_FordVehEvasSteerAssiSts_Val is missing
#endif
#define Rte_Write_FordVehEvasSteerAssiSts_Val(data) (FordBlaBoxIfCmp2_Op_FordVehEvasSteerAssiSts = (data))


/*** PIM Stubs ***/

#ifdef Rte_Pim_EvasSteerAssiFctCallTog
# undef Rte_Pim_EvasSteerAssiFctCallTog
#else
#error Rte_Pim_EvasSteerAssiFctCallTog is missing
#endif
#define Rte_Pim_EvasSteerAssiFctCallTog() (&FordBlaBoxIfCmp2_Pim_EvasSteerAssiFctCallTog)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
