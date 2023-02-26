/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_EcmOutpAndDiagc.h"
#include "float.h"


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    EcmOutpAndDiagcInit1();
    EcmOutpAndDiagcInit2();
    EcmOutpAndDiagcInit3();
    CtrlErrOut_Oper(EcmOutpAndDiagc_Cli_CtrlErrOut_PinSt, EcmOutpAndDiagc_Cli_CtrlErrOut_TrigReg);
}

