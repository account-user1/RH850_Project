/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_FordCmdArbn.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordCmdArbn_GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 * Data_Arg, ImcArbnRxSts1 * Sts_Arg)
{
    FordCmdArbn_Srv_GetSigImcData_u08_SigId = SigId_Arg;
    *Data_Arg = FordCmdArbn_Srv_GetSigImcData_u08_Data;
    *Sts_Arg = FordCmdArbn_Srv_GetSigImcData_u08_Sts;
    return FordCmdArbn_Srv_GetSigImcData_u08_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    FordCmdArbnInit1();
    FordCmdArbnPer1();
    FordCmdArbnPer2();
}

