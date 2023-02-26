/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_CDD_DmaCfgAndUse.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_Adc1CfgAndUseAdc1EnaCnvn_Oper()
{
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_GetRefTmr1MicroSec32bit_Oper(uint32 * RefTmr_Arg)
{
    *RefTmr_Arg = DmaCfgAndUse_Srv_GetRefTmr1MicroSec32bit_RefTmr;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 * TiSpan_Arg)
{
    DmaCfgAndUse_Srv_GetTiSpan1MicroSec32bit_RefTmr = RefTmr_Arg;
    *TiSpan_Arg = DmaCfgAndUse_Srv_GetTiSpan1MicroSec32bit_TiSpan;
    return DmaCfgAndUse_Srv_GetTiSpan1MicroSec32bit_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_ReadErrInjReg_Oper(uint32 * ErrId_Arg)
{
    *ErrId_Arg = DmaCfgAndUse_Srv_ReadErrInjReg_ErrId;
    return (Std_ReturnType)0U;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_DmaCfgAndUse_StrtErrInjCntr_Oper()
{
    return (Std_ReturnType)0U;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    DmaCfgAndUseInit1();
    DmaCfgAndUsePer1();
    DmaEna2MilliSecToMotCtrlTrf_Oper();
    DmaCfgAndUse_Cli_DmaWaitForMotCtrlTo2MilliSecTrf_Return = DmaWaitForMotCtrlTo2MilliSecTrf_Oper();
}

