/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_MotAg5Meas.h"
#include "float.h"


/*** IRV Stub ***/

FUNC(void, RTE_CODE) Rte_Stub_MemCpy(void * destination, const void * source, uint16 length)
{
    unsigned char * dst = (unsigned char *)destination;
    unsigned char * src = (unsigned char *)source;
    unsigned long i;
    for(i = 0UL; i < length; i++)
    {
        dst[i] = src[i];
    }
}

/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_CnvSnpshtData_f32_Oper(uint32 * SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
{
    MotAg5Meas_Srv_CnvSnpshtData_f32_SnpshtData = SnpshtData_Arg;
    *SnpshtDataCnvd_Arg = MotAg5Meas_Srv_CnvSnpshtData_f32_SnpshtDataCnvd;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_CnvSnpshtData_logl_Oper(uint32 * SnpshtDataCnvd_Arg, boolean SnpshtData_Arg)
{
    MotAg5Meas_Srv_CnvSnpshtData_logl_SnpshtData = SnpshtData_Arg;
    *SnpshtDataCnvd_Arg = MotAg5Meas_Srv_CnvSnpshtData_logl_SnpshtDataCnvd;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 * NtcQlfr_Arg)
{
    MotAg5Meas_Srv_GetNtcQlfrSts_NtcNr = NtcNr_Arg;
    *NtcQlfr_Arg = MotAg5Meas_Srv_GetNtcQlfrSts_NtcQlfr;
    return MotAg5Meas_Srv_GetNtcQlfrSts_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5EolPrm_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = MotAg5Meas_Srv_MotAg5EolPrm_GetErrorStatus_RequestResultPtr;
    return MotAg5Meas_Srv_MotAg5EolPrm_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5EolPrm_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    MotAg5Meas_Srv_MotAg5EolPrm_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return MotAg5Meas_Srv_MotAg5EolPrm_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5StVari_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = MotAg5Meas_Srv_MotAg5StVari_GetErrorStatus_RequestResultPtr;
    return MotAg5Meas_Srv_MotAg5StVari_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_MotAg5StVari_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    MotAg5Meas_Srv_MotAg5StVari_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return MotAg5Meas_Srv_MotAg5StVari_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAg5Meas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
{
    MotAg5Meas_Srv_SetNtcStsAndSnpshtData_NtcNr = NtcNr_Arg;
    MotAg5Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo = NtcStInfo_Arg;
    MotAg5Meas_Srv_SetNtcStsAndSnpshtData_NtcSts = NtcSts_Arg;
    MotAg5Meas_Srv_SetNtcStsAndSnpshtData_DebStep = DebStep_Arg;
    MotAg5Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0 = SpclSnpshtData0_Arg;
    MotAg5Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1 = SpclSnpshtData1_Arg;
    MotAg5Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2 = SpclSnpshtData2_Arg;
    return MotAg5Meas_Srv_SetNtcStsAndSnpshtData_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    MotAg5MeasInit1();
    MotAg5MeasPer1();
    MotAg5MeasPer2();
    MotAg5MeasPer3();
    MotAg5EolPrmRead_Oper(&MotAg5Meas_Cli_MotAg5EolPrmRead_MotAg5EolPrmData);
    MotAg5EolPrmWr_Oper(&MotAg5Meas_Cli_MotAg5EolPrmWr_MotAg5EolPrmData);
}

