/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_AssiSumLim.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiSumLim_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    AssiSumLim_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = AssiSumLim_Srv_GetNtcQlfrSts_NtcQlfr;
    return AssiSumLim_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AssiSumLim_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    AssiSumLim_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    AssiSumLim_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    AssiSumLim_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    AssiSumLim_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return AssiSumLim_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    AssiSumLimInit1();
    AssiSumLimPer1();
    AssiSumLim_Cli_SetManTqCmd_Return = SetManTqCmd_Oper(AssiSumLim_Cli_SetManTqCmd_ManTqCmd, AssiSumLim_Cli_SetManTqCmd_ManTqCmdEna);
}

