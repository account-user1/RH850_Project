/******************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_DiagcMgrStub_Stubs.c
* Module Description: Stubs for Polyspace analysis.
* Project:            CBD
* Author:             Shruthi Raghavan
******************************************************************************************************************/

#include "Rte_DiagcMgrStub.h"

/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgrStub_Stub(void)
{
    DiagcMgrStubInit1();
    GetDiagcDataStub_Oper(&DiagcMgrStub_Cli_GetDiagcDataStub_DiagcData);
    GetNtcDebCntrStub_Oper(DiagcMgrStub_Cli_GetNtcDebCntrStub_DebCntrIdx,&DiagcMgrStub_Cli_GetNtcDebCntrStub_DebCntr);
    GetNtcInfoStub_Oper(DiagcMgrStub_Cli_GetNtcInfoStub_NtcInfoIdx,&DiagcMgrStub_Cli_GetNtcInfoStub_NtcInfo);
}

