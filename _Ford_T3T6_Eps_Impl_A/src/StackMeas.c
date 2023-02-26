/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StackMeas.c
 *        Config:  C:/Users/gz324f/Desktop/working/component/Ford999A_StackMeas_Impl/tools/Component.dpa
 *     SW-C Type:  StackMeas
 *  Generated at:  Mon Apr  2 16:53:32 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StackMeas>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: StackMeas.c
* Module Description: Measures Task and Category 2 ISR stack usage
* Project           : StackMeas
* Author            : Xin Liu
************************************************************************************************************************
* Version Control:
* %version:         2 %
* %derived_by:      gz324f %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/22/18  1        XL        Initial creation

***********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_StackMeas.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Os.h"
#include "Os_Task_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_TaskInt.h"
#include "Os_Thread_Types.h"
#include "Os_ThreadInt.h"
#include "Os_Stack_Types.h"
#include "Os_StackInt.h"
#include "Os_Hal_Core_Types.h"
#include "StackMeas.h"

extern uint8 CCT_Range_01_Address[];

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Ary1D_u8_48: Array with 48 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_StackMeasApplCrc(void)
 *   uint8 *Rte_Pim_StackMeasRes(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_48
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 *Rte_CData_StackMeasResDft(void)
 *     Returnvalue: uint8* is of type Ary1D_u8_48
 *
 *********************************************************************************************************************/


#define StackMeas_START_SEC_CODE
#include "StackMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StackMeasClr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StackMeasClr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_StackMeasRes_RestoreBlockDefaults(dtRef_VOID DstPtr_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StackMeasClr_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StackMeasClr_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StackMeas_CODE) StackMeasClr_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StackMeasClr_Oper
 *********************************************************************************************************************/

	//(void)Rte_Call_StackMeasRes_RestoreBlockDefaults(NULL_PTR);
	VAR(uint8, AUTOMATIC) i;

	for (i=0;i<48;i++)
	{
		Rte_Pim_StackMeasRes()[i] = 0U;
	}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StackMeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_StackMeasApplCrc_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_StackMeasApplCrc_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_StackMeasRes_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_StackMeasRes_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StackMeasInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StackMeas_CODE) StackMeasInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StackMeasInit1
 *********************************************************************************************************************/
	
	if ((*Rte_Pim_StackMeasApplCrc()) != *((uint32*)((uint32)(CCT_Range_01_Address))))
	{
		StackMeasClr_Oper();
		*Rte_Pim_StackMeasApplCrc() = *((uint32*)((uint32)(CCT_Range_01_Address)));
		(void)Rte_Call_StackMeasApplCrc_SetRamBlockStatus(TRUE);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StackMeasRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Operation> of PortPrototype <StackMeasRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StackMeasRead_Oper(uint8 *StackMeasRes_Arg)
 *     Argument StackMeasRes_Arg: uint8* is of type Ary1D_u8_48
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: StackMeasRead_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, StackMeas_CODE) StackMeasRead_Oper(P2VAR(uint8, AUTOMATIC, RTE_STACKMEAS_APPL_VAR) StackMeasRes_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StackMeasRead_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) i;

	for (i=0; i<48; i++)
	{
		StackMeasRes_Arg[i] = Rte_Pim_StackMeasRes()[i];
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StackMeas_STOP_SEC_CODE
#include "StackMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AUTOMATIC) MeasStack(void)
{
		VAR(uint8, AUTOMATIC) i;
		VAR(uint8, AUTOMATIC) StackUsage_Cnt_T_u8;
		VAR(float32, AUTOMATIC) StackSize_Cnt_T_f32;
		VAR(float32, AUTOMATIC) StackUsage_Cnt_T_f32;
		
		for (i=0; i<OS_TASKID_COUNT; i++)
		{
			StackSize_Cnt_T_f32 = (float32)((uint32)(OsCfg_TaskRefs[i]->Thread.Stack->HighAddress)
										- (uint32)(OsCfg_TaskRefs[i]->Thread.Stack->LowAddress));
			StackUsage_Cnt_T_f32 = (float32)Os_GetTaskStackUsage((TaskType)i);
			/* Convert usage to percentage then scale to 0~255 range */
			StackUsage_Cnt_T_u8 = (uint8)((StackUsage_Cnt_T_f32 / StackSize_Cnt_T_f32) * 255.0f);
			Rte_Pim_StackMeasRes()[i] = ((StackUsage_Cnt_T_u8 > Rte_Pim_StackMeasRes()[i]) ? StackUsage_Cnt_T_u8 : Rte_Pim_StackMeasRes()[i]);
		}

		for (i=0; i<OS_ISRID_COUNT; i++)
		{
			StackSize_Cnt_T_f32 = (float32)((uint32)(OsCfg_IsrRefs[i]->Thread.Stack->HighAddress)
										- (uint32)(OsCfg_IsrRefs[i]->Thread.Stack->LowAddress));
			StackUsage_Cnt_T_f32 = (float32)Os_GetISRStackUsage((ISRType)i);
			/* Convert usage to percentage then scale to 0~255 range */
			StackUsage_Cnt_T_u8 = (uint8)((StackUsage_Cnt_T_f32 / StackSize_Cnt_T_f32) * 255.0f);
			Rte_Pim_StackMeasRes()[i+OS_TASKID_COUNT] = ((StackUsage_Cnt_T_u8 > Rte_Pim_StackMeasRes()[i+OS_TASKID_COUNT]) ? StackUsage_Cnt_T_u8 : Rte_Pim_StackMeasRes()[i+1]);
		}

		(void)Rte_Call_StackMeasRes_SetRamBlockStatus(TRUE);
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
