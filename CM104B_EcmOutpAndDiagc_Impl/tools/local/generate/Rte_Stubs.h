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
extern VAR(boolean, AUTOMATIC) EcmOutpAndDiagc_Pim_dEcmVrfyErrOutpCtrlCmpl;
extern VAR(boolean, AUTOMATIC) EcmOutpAndDiagc_Pim_dEcmVrfyIntrptGennCmpl;

/* Arguments and Returns */
extern VAR(boolean, AUTOMATIC) EcmOutpAndDiagc_Cli_CtrlErrOut_PinSt;
extern VAR(TrigReg1, AUTOMATIC) EcmOutpAndDiagc_Cli_CtrlErrOut_TrigReg;


/*** PIM Stubs ***/

#ifdef Rte_Pim_dEcmVrfyErrOutpCtrlCmpl
# undef Rte_Pim_dEcmVrfyErrOutpCtrlCmpl
#endif
#define Rte_Pim_dEcmVrfyErrOutpCtrlCmpl() (&EcmOutpAndDiagc_Pim_dEcmVrfyErrOutpCtrlCmpl)

#ifdef Rte_Pim_dEcmVrfyIntrptGennCmpl
# undef Rte_Pim_dEcmVrfyIntrptGennCmpl
#endif
#define Rte_Pim_dEcmVrfyIntrptGennCmpl() (&EcmOutpAndDiagc_Pim_dEcmVrfyIntrptGennCmpl)


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
