/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_DiagcMgr.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_DiagcMgrApplCrc_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    DiagcMgr_Srv_DiagcMgrApplCrc_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return DiagcMgr_Srv_DiagcMgrApplCrc_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_DiagcMgrLtchCntrAry_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    DiagcMgr_Srv_DiagcMgrLtchCntrAry_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return DiagcMgr_Srv_DiagcMgrLtchCntrAry_SetRamBlockStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl0_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl0_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl1_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl1_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl2_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl2_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl3_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl3_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl4_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl4_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl5_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl5_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl6_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl6_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl7_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl7_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl8_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl8_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl9_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl9_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetDiagcDataAppl10_Oper(DiagcDataRec2 * DiagcData_Arg)
{
    *DiagcData_Arg = DiagcMgr_Srv_GetDiagcDataAppl10_DiagcData;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetMcuDiagcSpplData_Oper(uint32 * McuDiagcData1_Arg)
{
    *McuDiagcData1_Arg = DiagcMgr_Srv_GetMcuDiagcSpplData_McuDiagcData1;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl0_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl0_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl0_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl1_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl1_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl1_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl2_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl2_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl2_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl3_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl3_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl3_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl4_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl4_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl4_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl5_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl5_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl5_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl6_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl6_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl6_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl7_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl7_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl7_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl8_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl8_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl8_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl9_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl9_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl9_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcDebCntrAppl10_Oper(uint8 DebCntrIdx_Arg, sint16 * DebCntr_Arg)
{
    DiagcMgr_Srv_GetNtcDebCntrAppl10_DebCntrIdx = DebCntrIdx_Arg;
    *DebCntr_Arg = DiagcMgr_Srv_GetNtcDebCntrAppl10_DebCntr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl0_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl0_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl0_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl1_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl1_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl1_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl2_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl2_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl2_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl3_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl3_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl3_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl4_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl4_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl4_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl5_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl5_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl5_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl6_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl6_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl6_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl7_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl7_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl7_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl8_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl8_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl8_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl9_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl9_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl9_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_GetNtcInfoAppl10_Oper(uint8 NtcInfoIdx_Arg, NtcInfoRec4 * NtcInfo_Arg)
{
    DiagcMgr_Srv_GetNtcInfoAppl10_NtcInfoIdx = NtcInfoIdx_Arg;
    *NtcInfo_Arg = DiagcMgr_Srv_GetNtcInfoAppl10_NtcInfo;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DiagcMgr_SnpshtDataAry_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    DiagcMgr_Srv_SnpshtDataAry_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return DiagcMgr_Srv_SnpshtDataAry_SetRamBlockStatus_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_DiagcMgr_Stub(void)
{
    DiagcMgrInit1();
    DiagcMgrPer1();
    DiagcMgrPer2();
    ClrAllDiagc_Oper();
    ClrLtchCntrData_Oper();
    ClrSnpshtData_Oper();
    CnvSnpshtData_f32_Oper(&DiagcMgr_Cli_CnvSnpshtData_f32_SnpshtDataCnvd, DiagcMgr_Cli_CnvSnpshtData_f32_SnpshtData);
    CnvSnpshtData_logl_Oper(&DiagcMgr_Cli_CnvSnpshtData_logl_SnpshtDataCnvd, DiagcMgr_Cli_CnvSnpshtData_logl_SnpshtData);
    CnvSnpshtData_s08_Oper(&DiagcMgr_Cli_CnvSnpshtData_s08_SnpshtDataCnvd, DiagcMgr_Cli_CnvSnpshtData_s08_SnpshtData);
    CnvSnpshtData_s16_Oper(&DiagcMgr_Cli_CnvSnpshtData_s16_SnpshtDataCnvd, DiagcMgr_Cli_CnvSnpshtData_s16_SnpshtData);
    CnvSnpshtData_s32_Oper(&DiagcMgr_Cli_CnvSnpshtData_s32_SnpshtDataCnvd, DiagcMgr_Cli_CnvSnpshtData_s32_SnpshtData);
    CnvSnpshtData_u08_Oper(&DiagcMgr_Cli_CnvSnpshtData_u08_SnpshtDataCnvd, DiagcMgr_Cli_CnvSnpshtData_u08_SnpshtData);
    CnvSnpshtData_u16_Oper(&DiagcMgr_Cli_CnvSnpshtData_u16_SnpshtDataCnvd, DiagcMgr_Cli_CnvSnpshtData_u16_SnpshtData);
    DiagcMgrIninCore_Oper(DiagcMgr_Cli_DiagcMgrIninCore_ApplIdx, DiagcMgr_Cli_DiagcMgrIninCore_NtcInfoArySize, &DiagcMgr_Cli_DiagcMgrIninCore_NtcInfoAry[0], &DiagcMgr_Cli_DiagcMgrIninCore_DiagcData, &DiagcMgr_Cli_DiagcMgrIninCore_ProxySetNtcData);
    DiagcMgrPwrDwn();
    GetNtcActvCore_Oper(DiagcMgr_Cli_GetNtcActvCore_NtcNr, &DiagcMgr_Cli_GetNtcActvCore_NtcActv);
    GetNtcQlfrStsCore_Oper(DiagcMgr_Cli_GetNtcQlfrStsCore_NtcNr, &DiagcMgr_Cli_GetNtcQlfrStsCore_NtcQlfr);
    GetNtcStsCore_Oper(DiagcMgr_Cli_GetNtcStsCore_NtcNr, &DiagcMgr_Cli_GetNtcStsCore_NtcInfoSts);
    ReadLtchCntrData_Oper(&DiagcMgr_Cli_ReadLtchCntrData_ReadLtchCntrAry[0]);
    ReadNtcFltAry_Oper(&DiagcMgr_Cli_ReadNtcFltAry_DiagcMgrReadFltInfo[0]);
    ReadNtcInfoAndDebCntr_Oper(DiagcMgr_Cli_ReadNtcInfoAndDebCntr_NtcNr, &DiagcMgr_Cli_ReadNtcInfoAndDebCntr_NtcInfo, &DiagcMgr_Cli_ReadNtcInfoAndDebCntr_DebCntr);
    ReadSnpshtData_Oper(&DiagcMgr_Cli_ReadSnpshtData_ReadSnpshtAry[0]);
    RestoreDiagcMgrLtchCntrAryDft();
    RestoreNtcFltAryDft();
    RestoreSnpshtAryDft();
    DiagcMgr_Cli_SetNtcStsCore_Return = SetNtcStsCore_Oper(DiagcMgr_Cli_SetNtcStsCore_NtcNr, DiagcMgr_Cli_SetNtcStsCore_NtcStInfo, DiagcMgr_Cli_SetNtcStsCore_NtcSts, DiagcMgr_Cli_SetNtcStsCore_DebStep, &DiagcMgr_Cli_SetNtcStsCore_DiagcData, &DiagcMgr_Cli_SetNtcStsCore_ProxySetNtcData, &DiagcMgr_Cli_SetNtcStsCore_NtcInfo, &DiagcMgr_Cli_SetNtcStsCore_NtcInfoDebCntr, DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtData0, DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtData1, DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtData2, DiagcMgr_Cli_SetNtcStsCore_SpclSnpshtDataPrsnt);
    UpdDtcEnaCdn(DiagcMgr_Cli_UpdDtcEnaCdn_DtcEnaCdnSts, DiagcMgr_Cli_UpdDtcEnaCdn_DtcEnaCdnId);
}

