/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_ShtdwnMech.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ShtdwnMech_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt_Arg)
{
    ShtdwnMech_Srv_IoHwAb_SetGpioSysFlt2A_PinSt = PinSt_Arg;
    return ShtdwnMech_Srv_IoHwAb_SetGpioSysFlt2A_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    ShtdwnMechInit1();
    ShtdwnMechPer1();
}

