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
extern VAR(boolean, AUTOMATIC) ShtdwnMech_Ip_DiagcStsIvtr1Inactv;
extern VAR(uint8, AUTOMATIC) ShtdwnMech_Ip_StrtUpSt;

/* Arguments and Returns */
extern VAR(boolean, AUTOMATIC) ShtdwnMech_Srv_IoHwAb_SetGpioSysFlt2A_PinSt;
extern VAR(Std_ReturnType, AUTOMATIC) ShtdwnMech_Srv_IoHwAb_SetGpioSysFlt2A_Return;


/*** Input Stubs ***/

#ifdef Rte_Read_DiagcStsIvtr1Inactv_Logl
# undef Rte_Read_DiagcStsIvtr1Inactv_Logl
#endif
#define Rte_Read_DiagcStsIvtr1Inactv_Logl(data) (*(data) = ShtdwnMech_Ip_DiagcStsIvtr1Inactv)

#ifdef Rte_Read_StrtUpSt_Val
# undef Rte_Read_StrtUpSt_Val
#endif
#define Rte_Read_StrtUpSt_Val(data) (*(data) = ShtdwnMech_Ip_StrtUpSt)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
