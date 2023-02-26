/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name  : Dcm_Callouts.c
* Module Description: Dcm Related Callouts
* Project           : Ford T3T6
* Author            : Bobby O'Steen
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       wz7x3j %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/26/17  1        BDO       Initial Version - Temporary file until component is created 
**********************************************************************************************************************/

#include "Std_Types.h"

#include "ComStack_Cfg.h"
#include "Rte_Dcm_Type.h"
#include "Dcm_Cfg.h"
#include "Dcm_CoreTypes.h"
#include "Dcm_Lcfg.h"




//TODO: TEMPORARY file to define Diagnostic Service handlers until customer specific Diagnostic Service Handler component is created
Std_ReturnType START_RTN_0202_On_Demand_Self_Test(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Out_RoutineInfo, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode)
{
    return E_OK;
}

Std_ReturnType STOP_RTN_0202_On_Demand_Self_Test(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Out_RoutineInfo, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode)
{
	return E_OK;
}

Std_ReturnType READ_RESULTS_RTN_0202_On_Demand_Self_Test(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Out_RoutineInfo, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Out_Results_Response_Sequence, P2VAR(uint16, AUTOMATIC, DCM_VAR_NOINIT) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode)
{
	return E_OK;
}

Std_ReturnType Dcm_DiagnosticService_0x00(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
	return E_OK;
}

FUNC(Dcm_EcuStartModeType, DCM_CALLOUT_CODE) Dcm_GetProgConditions(Dcm_ProgConditionsPtrType progConditions)
{
	return E_OK;
}

FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SetProgConditions(Dcm_ProgConditionsPtrType progConditions)
{
	return E_OK;
}

FUNC(void, DCM_CALLOUT_CODE) Dcm_Confirmation(Dcm_IdContextType idContext
                                             ,PduIdType dcmRxPduId
                                             ,Dcm_ConfirmationStatusType status)
{
												 
}