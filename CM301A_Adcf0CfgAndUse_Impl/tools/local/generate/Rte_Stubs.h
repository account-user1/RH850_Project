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
extern VAR(uint8, AUTOMATIC) Adcf0CfgAndUse_Pim_Adcf0DiagcEndPtr;
extern VAR(uint8, AUTOMATIC) Adcf0CfgAndUse_Pim_Adcf0DiagcStrtPtr;

/* Arguments and Returns */


/*** PIM Stubs ***/

#ifdef Rte_Pim_Adcf0DiagcEndPtr
# undef Rte_Pim_Adcf0DiagcEndPtr
#endif
#define Rte_Pim_Adcf0DiagcEndPtr() (&Adcf0CfgAndUse_Pim_Adcf0DiagcEndPtr)

#ifdef Rte_Pim_Adcf0DiagcStrtPtr
# undef Rte_Pim_Adcf0DiagcStrtPtr
#endif
#define Rte_Pim_Adcf0DiagcStrtPtr() (&Adcf0CfgAndUse_Pim_Adcf0DiagcStrtPtr)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
