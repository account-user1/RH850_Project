/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_TEstimn.h"
#include "float.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TEstimn_TFilStVal_GetErrorStatus(uint8 * RequestResultPtr_Arg)
{
    *RequestResultPtr_Arg = TEstimn_Srv_TFilStVal_GetErrorStatus_RequestResultPtr;
    return TEstimn_Srv_TFilStVal_GetErrorStatus_Return;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TEstimn_TFilStVal_SetRamBlockStatus(boolean BlockChanged_Arg)
{
    TEstimn_Srv_TFilStVal_SetRamBlockStatus_BlockChanged = BlockChanged_Arg;
    return TEstimn_Srv_TFilStVal_SetRamBlockStatus_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    TEstimnInit1();
    TEstimnPer1();
}

