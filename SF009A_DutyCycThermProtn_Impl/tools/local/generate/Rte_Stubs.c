/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_DutyCycThermProtn.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DutyCycThermProtn_FilStVal_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = DutyCycThermProtn_Srv_FilStVal_GetErrorStatus_RequestResultPtr;
    return DutyCycThermProtn_Srv_FilStVal_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DutyCycThermProtn_FilStVal_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    DutyCycThermProtn_Srv_FilStVal_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return DutyCycThermProtn_Srv_FilStVal_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DutyCycThermProtn_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    DutyCycThermProtn_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    DutyCycThermProtn_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    DutyCycThermProtn_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    DutyCycThermProtn_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return DutyCycThermProtn_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    DutyCycThermProtnInit1();
    DutyCycThermProtnPer1();
}

