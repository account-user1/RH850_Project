/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_PwrDiscnct.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrDiscnct_CnvSnpshtData_f32_Oper(uint32 * SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
{
    PwrDiscnct_Srv_CnvSnpshtData_f32_SnpshtData = SnpshtData_Arg;
    *SnpshtDataCnvd_Arg = PwrDiscnct_Srv_CnvSnpshtData_f32_SnpshtDataCnvd;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrDiscnct_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
{
    PwrDiscnct_Srv_SetNtcStsAndSnpshtData_NtcNr = NtcNr_Arg;
    PwrDiscnct_Srv_SetNtcStsAndSnpshtData_NtcStInfo = NtcStInfo_Arg;
    PwrDiscnct_Srv_SetNtcStsAndSnpshtData_NtcSts = NtcSts_Arg;
    PwrDiscnct_Srv_SetNtcStsAndSnpshtData_DebStep = DebStep_Arg;
    PwrDiscnct_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    PwrDiscnct_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    PwrDiscnct_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    return PwrDiscnct_Srv_SetNtcStsAndSnpshtData_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    PwrDiscnctInit1();
    PwrDiscnctPer1();
}

