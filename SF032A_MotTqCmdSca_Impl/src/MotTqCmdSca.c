/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotTqCmdSca.c
 *     SW-C Type:  MotTqCmdSca
 *  Generated at:  Mon Mar 14 15:57:01 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotTqCmdSca>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotTqCmdSca.c
* Module Description: Implementation of Motor Torque Command Scale SF032A. 
* Project           : CBD 
* Author            : Kannappa Chidambaram (Tata Elxsi)
************************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date        Rev      Author   Change Description                                                              SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  -----------
* 01/20/16     1        KNCD    Initial Version                                                          	  EA4#2729
* 03/10/16     2        KK     	Corrected NVM port interface (Fix of EA4#3625)								  EA4#4294
* 03/14/16     3        KK     	Updated as per FDD v 1.2.0   (Fix of EA4#3624)				     		  	  EA4#4308
***********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_MotTqCmdSca.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "SysGlbPrm.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include 
statements */
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
 * Boolean: Boolean
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
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MotTqScaFac(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotTqCmdScaMax_Val(void)
 *   float32 Rte_Prm_MotTqCmdScaMin_Val(void)
 *
 *********************************************************************************************************************/


#define MotTqCmdSca_START_SEC_CODE
#include "MotTqCmdSca_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotTqCmdSca_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotTqCmdSca>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMotTqCmdSca_Oper(float32 *MotTqCmdSca_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotTqCmdSca_CODE) GetMotTqCmdSca_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTTQCMDSCA_APPL_VAR) MotTqCmdSca_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotTqCmdSca_Oper
 *********************************************************************************************************************/
	/* REQ: SF032A #11 I */ /* REQ: SF032A #30 I */ /* REQ: SF032A #50 I */ /* REQ: SF032A #51 I */
	*MotTqCmdSca_Arg = *Rte_Pim_MotTqScaFac();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotTqCmdScaInit1
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
 *   Std_ReturnType Rte_Call_MotTqScaFac_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotTqScaFac_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, MotTqCmdSca_CODE) MotTqCmdScaInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotTqCmdScaInit1
 *********************************************************************************************************************/
 
	VAR(NvM_RequestResultType, AUTOMATIC) MotTqCmdScaErrSts_Cnt_T_enum;
	
    /*** Read NVMErrorStatus ***/
	
	(void)Rte_Call_MotTqScaFac_GetErrorStatus(&MotTqCmdScaErrSts_Cnt_T_enum);	/* REQ: SF032A #47 I */
 
	/* REQ: SF032A #47 I */ /* REQ: SF032A #48 I */
	if( (MotTqCmdScaErrSts_Cnt_T_enum != NVM_REQ_OK) || 
		((*Rte_Pim_MotTqScaFac() < Rte_Prm_MotTqCmdScaMin_Val()) || 			/* REQ: SF032A #48 I */
		 (*Rte_Pim_MotTqScaFac() > Rte_Prm_MotTqCmdScaMax_Val())) ) 			/* REQ: SF032A #48 I */
	{
		*Rte_Pim_MotTqScaFac()	=	1.0F;
        /*** Set NVMRAMBlockStatus to TRUE ***/
		(void)Rte_Call_MotTqScaFac_SetRamBlockStatus(TRUE);
	}	
	/* ENDREQ: SF032A #47 */ /* ENDREQ: SF032A #48 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotTqCmdScaPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotTqCmdMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmdMrfScad_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, MotTqCmdSca_CODE) MotTqCmdScaPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotTqCmdScaPer1
 *********************************************************************************************************************/
		
	VAR(float32, AUTOMATIC) MotTqCmdMrf_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqCmdMrfScad_MotNwtMtr_T_f32;
		
	/* REQ: SF032A #34 I */
	/*** Read inputs from RTE ***/ 
    (void)Rte_Read_MotTqCmdMrf_Val(&MotTqCmdMrf_MotNwtMtr_T_f32);
    	
	MotTqCmdMrfScad_MotNwtMtr_T_f32	= ( (MotTqCmdMrf_MotNwtMtr_T_f32) * (*Rte_Pim_MotTqScaFac()) );
	/* ENDREQ: SF032A #34 */
	
	/* REQ: SF032A #36 I */
	/*** Range Limit and Write output to RTE ***/ 
	(void)Rte_Write_MotTqCmdMrfScad_Val(Lim_f32(MotTqCmdMrfScad_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32));

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotTqCmdSca_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotTqCmdSca>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotTqScaFac_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotTqScaFac_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetMotTqCmdSca_Oper(float32 MotTqCmdSca_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotTqCmdSca_CODE) SetMotTqCmdSca_Oper(float32 MotTqCmdSca_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotTqCmdSca_Oper
 *********************************************************************************************************************/
	/* REQ: SF032A #13 I */	/* REQ: SF032A #14 I */	/* REQ: SF032A #45 I */
	*Rte_Pim_MotTqScaFac()	=	Lim_f32(MotTqCmdSca_Arg, Rte_Prm_MotTqCmdScaMin_Val(), Rte_Prm_MotTqCmdScaMax_Val());
	(void)Rte_Call_MotTqScaFac_SetRamBlockStatus(TRUE);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotTqCmdSca_STOP_SEC_CODE
#include "MotTqCmdSca_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
