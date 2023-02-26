/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_EcuTMeas.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_CnvSnpshtData_f32_Oper(uint32 * SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
{
    EcuTMeas_Srv_CnvSnpshtData_f32_SnpshtData = SnpshtData_Arg;
    *SnpshtDataCnvd_Arg = EcuTMeas_Srv_CnvSnpshtData_f32_SnpshtDataCnvd;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_CnvSnpshtData_logl_Oper(uint32 * SnpshtDataCnvd_Arg, boolean SnpshtData_Arg)
{
    EcuTMeas_Srv_CnvSnpshtData_logl_SnpshtData = SnpshtData_Arg;
    *SnpshtDataCnvd_Arg = EcuTMeas_Srv_CnvSnpshtData_logl_SnpshtDataCnvd;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_GetNtcActv_Oper(NtcNr1 NtcNr_Arg, boolean * NtcActv_Arg)
{
    EcuTMeas_Srv_GetNtcActv_NtcNr = NtcNr_Arg;
    *NtcActv_Arg = EcuTMeas_Srv_GetNtcActv_NtcActv;
    return EcuTMeas_Srv_GetNtcActv_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
{
    EcuTMeas_Srv_SetNtcStsAndSnpshtData_NtcNr = NtcNr_Arg;
    EcuTMeas_Srv_SetNtcStsAndSnpshtData_NtcStInfo = NtcStInfo_Arg;
    EcuTMeas_Srv_SetNtcStsAndSnpshtData_NtcSts = NtcSts_Arg;
    EcuTMeas_Srv_SetNtcStsAndSnpshtData_DebStep = DebStep_Arg;
    EcuTMeas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    EcuTMeas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    EcuTMeas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    return EcuTMeas_Srv_SetNtcStsAndSnpshtData_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    EcuTMeasInit1();
    EcuTMeasPer1();
}

