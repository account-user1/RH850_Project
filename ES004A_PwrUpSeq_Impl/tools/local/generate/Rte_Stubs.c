/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_PwrUpSeq.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrUpSeq_IoHwAb_SetGpioPwrTurnOffCtrl_Oper(boolean PinSt_Arg)
{
    PwrUpSeq_Srv_IoHwAb_SetGpioPwrTurnOffCtrl_PinSt = PinSt_Arg;
    return PwrUpSeq_Srv_IoHwAb_SetGpioPwrTurnOffCtrl_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    PwrUpSeqInit1();
    PwrUpSeqPer1();
    PwrTurnOffCtrl_Oper(PwrUpSeq_Cli_PwrTurnOffCtrl_PinSt);
}

