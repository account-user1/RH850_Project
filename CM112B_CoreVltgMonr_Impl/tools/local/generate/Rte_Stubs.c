/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_CoreVltgMonr.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_CoreVltgMonr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    CoreVltgMonr_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    CoreVltgMonr_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    CoreVltgMonr_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    CoreVltgMonr_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return CoreVltgMonr_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    CoreVltgMonrInit1();
    CoreVltgMonrInit2();
}

