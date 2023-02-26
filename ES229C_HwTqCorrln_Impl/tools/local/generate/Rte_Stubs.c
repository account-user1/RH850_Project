/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_HwTqCorrln.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTqCorrln_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    HwTqCorrln_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = HwTqCorrln_Srv_GetNtcQlfrSts_NtcQlfr;
    return HwTqCorrln_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTqCorrln_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    HwTqCorrln_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    HwTqCorrln_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    HwTqCorrln_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    HwTqCorrln_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return HwTqCorrln_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    HwTqCorrlnInit1();
    HwTqCorrlnPer1();
}

