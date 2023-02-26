/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotRplCoggCmd.c
 *     SW-C Type:  CDD_MotRplCoggCmd
 *  Generated at:  Thu Feb 11 03:57:36 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotRplCoggCmd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotRplCoggCmd.c
* Module Description: Implementation of Motor Ripple Cogging Command Complex Driver
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/10/16  1        Selva       Initial Version                                                                EA4#3002
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  s1p14
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

 *********************************************************************************************************************/

#include "Rte_CDD_MotRplCoggCmd.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********Local Macros**********/
#include "NxtrMath.h"

#define  ITRNIDXCON_CNT_U08    128U
 
#define   	PimMotCoggCmdY  (*(Ary1D_s1p14_512 *) (Rte_Pim_MotCoggCmdY()))
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
 * s1p14: Integer in interval [-32768...32767]
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
 * Ary1D_s1p14_128: Array with 128 element(s) of type s1p14
 * Ary1D_s1p14_512: Array with 512 element(s) of type s1p14
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotRplCoggCmdMotCoggCmd(void)
 *   float32 *Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim(void)
 *   float32 *Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim(void)
 *   uint16 *Rte_Pim_dMotRplCoggCmdCoggIdx(void)
 *   s1p14 *Rte_Pim_MotCoggCmdY(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_MotRplCoggCmd_START_SEC_CODE
#include "CDD_MotRplCoggCmd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotCoggCmdPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotCoggCmdPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMotCoggCmdPrm_Oper(s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotRplCoggCmd_CODE) GetMotCoggCmdPrm_Oper(P2VAR(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, CDD_MotRplCoggCmd_CODE) GetMotCoggCmdPrm_Oper(P2VAR(Ary1D_s1p14_128, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotCoggCmdPrm_Oper
 *********************************************************************************************************************/
	VAR(uint8, AUTOMATIC) i;
	
	for(i=0U;i<ITRNIDXCON_CNT_U08;i++)
	{
		(MotCoggCmdY_Arg)[i] = ((Rte_Pim_MotCoggCmdY()))[i+(Idx_Arg*ITRNIDXCON_CNT_U08)];  /* REQ: SF107A #33 I */
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCmdInit1
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
 *   Std_ReturnType Rte_Call_MotCoggCmdY_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotCoggCmdY_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CDD_MotRplCoggCmd_CODE) MotRplCoggCmdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCmdInit1
 *********************************************************************************************************************/
  
   VAR(NvM_RequestResultType,AUTOMATIC) NVMStatusReqRes_Cnt_T_enum;
   VAR(uint16,AUTOMATIC) i;
   
   /* REQ: SF107A #61 I */
     
   (void)Rte_Call_MotCoggCmdY_GetErrorStatus(&NVMStatusReqRes_Cnt_T_enum);
   
   if(NVMStatusReqRes_Cnt_T_enum !=  NVM_REQ_OK)
   {
	    
	    for( i=0U; i<TblSize_m(PimMotCoggCmdY);i++)
		{
			Rte_Pim_MotCoggCmdY()[i] = 0;
		}
	   (void)Rte_Call_MotCoggCmdY_SetRamBlockStatus(TRUE);
   }
   /* ENDREQ: SF107A #61 I */  
  
 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotCoggCmdPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotCoggCmdPrm>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotCoggCmdY_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetMotCoggCmdPrm_Oper(const s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotRplCoggCmd_CODE) SetMotCoggCmdPrm_Oper(P2CONST(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, CDD_MotRplCoggCmd_CODE) SetMotCoggCmdPrm_Oper(P2CONST(Ary1D_s1p14_128, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotCoggCmdPrm_Oper
 *********************************************************************************************************************/
	VAR(uint8, AUTOMATIC) i;
	
	for(i=0U;i<ITRNIDXCON_CNT_U08;i++)
	{
		((Rte_Pim_MotCoggCmdY()))[i+(Idx_Arg*ITRNIDXCON_CNT_U08)]=(MotCoggCmdY_Arg)[i]; /* REQ: SF107A #32 I */
	}
	(void)Rte_Call_MotCoggCmdY_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotRplCoggCmd_STOP_SEC_CODE
#include "CDD_MotRplCoggCmd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
