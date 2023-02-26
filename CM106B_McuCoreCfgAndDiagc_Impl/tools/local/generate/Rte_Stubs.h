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
extern VAR(boolean, AUTOMATIC) McuCoreCfgAndDiagc_Pim_dMcuCoreCfgAndDiagcBistRunCmpl;

/* Arguments and Returns */


/*** PIM Stubs ***/

#ifdef Rte_Pim_dMcuCoreCfgAndDiagcBistRunCmpl
# undef Rte_Pim_dMcuCoreCfgAndDiagcBistRunCmpl
#endif
#define Rte_Pim_dMcuCoreCfgAndDiagcBistRunCmpl() (&McuCoreCfgAndDiagc_Pim_dMcuCoreCfgAndDiagcBistRunCmpl)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
