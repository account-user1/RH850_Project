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
extern VAR(uint8, AUTOMATIC) Adcf1CfgAndUse_Ip_AdcDiagcEndPtrOutp;
extern VAR(uint8, AUTOMATIC) Adcf1CfgAndUse_Ip_AdcDiagcStrtPtrOutp;

/* PIMs */
extern VAR(uint8, AUTOMATIC) Adcf1CfgAndUse_Pim_Adcf1DiagcEndPtr;
extern VAR(uint8, AUTOMATIC) Adcf1CfgAndUse_Pim_Adcf1DiagcStrtPtr;

/* Arguments and Returns */


/*** Input Stubs ***/

#ifdef Rte_Read_AdcDiagcEndPtrOutp_Val
# undef Rte_Read_AdcDiagcEndPtrOutp_Val
#endif
#define Rte_Read_AdcDiagcEndPtrOutp_Val(data) (*(data) = Adcf1CfgAndUse_Ip_AdcDiagcEndPtrOutp)

#ifdef Rte_Read_AdcDiagcStrtPtrOutp_Val
# undef Rte_Read_AdcDiagcStrtPtrOutp_Val
#endif
#define Rte_Read_AdcDiagcStrtPtrOutp_Val(data) (*(data) = Adcf1CfgAndUse_Ip_AdcDiagcStrtPtrOutp)


/*** PIM Stubs ***/

#ifdef Rte_Pim_Adcf1DiagcEndPtr
# undef Rte_Pim_Adcf1DiagcEndPtr
#endif
#define Rte_Pim_Adcf1DiagcEndPtr() (&Adcf1CfgAndUse_Pim_Adcf1DiagcEndPtr)

#ifdef Rte_Pim_Adcf1DiagcStrtPtr
# undef Rte_Pim_Adcf1DiagcStrtPtr
#endif
#define Rte_Pim_Adcf1DiagcStrtPtr() (&Adcf1CfgAndUse_Pim_Adcf1DiagcStrtPtr)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
