/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Adcf1CfgAndUse.c
 *        Config:  C:/myWork/CM321A_Adcf1CfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  Adcf1CfgAndUse
 *  Generated at:  Wed Aug  2 11:44:45 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Adcf1CfgAndUse>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name  : Adcf1CfgAndUse.c
* Module Description: Nexteer ADCf1 Initialization
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:           %
* %derived_by:        %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 08/03/17  1        MB      Initial Version                                                                EA4#10928
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Adcf1CfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "ADCF1_RegDefns.h"
#include "Adcf1CfgAndUse.h"
#include "Adcf1CfgAndUse_Cfg.h"

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
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_Adcf1DiagcEndPtr(void)
 *   uint8 *Rte_Pim_Adcf1DiagcStrtPtr(void)
 *
 *********************************************************************************************************************/


#define Adcf1CfgAndUse_START_SEC_CODE
#include "Adcf1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1CfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1CfgAndUsePer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUsePer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1CfgAndUsePer1
 *********************************************************************************************************************/
	ADCF1SGCR3 = 0U;
	ADCF1SGCR2 = 0U;
	ADCF1SGCR1 = 0U;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1CfgAndUsePer2
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
 *   Std_ReturnType Rte_Read_AdcDiagcEndPtrOutp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AdcDiagcStrtPtrOutp_Val(uint8 *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1CfgAndUsePer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUsePer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1CfgAndUsePer2
 *********************************************************************************************************************/


	VAR(uint8, AUTOMATIC) AdcDiagcStrtPtrOutp_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) AdcDiagcEndPtrOutp_Cnt_T_u08;

	 (void)Rte_Read_AdcDiagcStrtPtrOutp_Val(&AdcDiagcStrtPtrOutp_Cnt_T_u08);
	 (void)Rte_Read_AdcDiagcEndPtrOutp_Val(&AdcDiagcEndPtrOutp_Cnt_T_u08);

/* Per-instance memory local storage variables */
if((AdcDiagcStrtPtrOutp_Cnt_T_u08 != *Rte_Pim_Adcf1DiagcStrtPtr())||
   (AdcDiagcEndPtrOutp_Cnt_T_u08 != *Rte_Pim_Adcf1DiagcEndPtr()))
   {
	/* validity */

	if((AdcDiagcStrtPtrOutp_Cnt_T_u08 >= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMIN_CNT_U08) &&
	   (AdcDiagcStrtPtrOutp_Cnt_T_u08 <= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08) &&
	   (AdcDiagcEndPtrOutp_Cnt_T_u08 >= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMIN_CNT_U08) &&
	   (AdcDiagcEndPtrOutp_Cnt_T_u08 <= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08) &&
	   (AdcDiagcStrtPtrOutp_Cnt_T_u08  <= AdcDiagcEndPtrOutp_Cnt_T_u08) &&
	   (ADCF1SGSR1 == 0U))
	   {
			/* Update Scan Group 1 Start and End Pointer */
			ADCF1SGVCSP1 = AdcDiagcStrtPtrOutp_Cnt_T_u08;
			ADCF1SGVCEP1 = AdcDiagcEndPtrOutp_Cnt_T_u08;
			
			/* Update the previous value data store with the current value fo the start and end pointer */
			*Rte_Pim_Adcf1DiagcStrtPtr() = AdcDiagcStrtPtrOutp_Cnt_T_u08;
			*Rte_Pim_Adcf1DiagcEndPtr() = AdcDiagcEndPtrOutp_Cnt_T_u08;
		}
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1CfgAndUse_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1CfgAndUse_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUse_Init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1CfgAndUse_Init
 *********************************************************************************************************************/
    ADCF1VCR0 			= ADCF1CFGANDUSE_ADCF1VCR00_CNT_U32;
	ADCF1VCR1 			= ADCF1CFGANDUSE_ADCF1VCR01_CNT_U32;
	ADCF1VCR2 			= ADCF1CFGANDUSE_ADCF1VCR02_CNT_U32;
	ADCF1VCR3 			= ADCF1CFGANDUSE_ADCF1VCR03_CNT_U32;
	ADCF1VCR4 			= ADCF1CFGANDUSE_ADCF1VCR04_CNT_U32;
	ADCF1VCR5 			= ADCF1CFGANDUSE_ADCF1VCR05_CNT_U32;
	ADCF1VCR6 			= ADCF1CFGANDUSE_ADCF1VCR06_CNT_U32;
	ADCF1VCR7 			= ADCF1CFGANDUSE_ADCF1VCR07_CNT_U32;
	ADCF1VCR8 			= ADCF1CFGANDUSE_ADCF1VCR08_CNT_U32;
	ADCF1VCR9 			= ADCF1CFGANDUSE_ADCF1VCR09_CNT_U32;
	ADCF1VCR10 			= ADCF1CFGANDUSE_ADCF1VCR10_CNT_U32;
	ADCF1VCR11 			= ADCF1CFGANDUSE_ADCF1VCR11_CNT_U32;
	ADCF1VCR12 			= ADCF1CFGANDUSE_ADCF1VCR12_CNT_U32;
	ADCF1VCR13 			= ADCF1CFGANDUSE_ADCF1VCR13_CNT_U32;
	ADCF1VCR14 			= ADCF1CFGANDUSE_ADCF1VCR14_CNT_U32;
	ADCF1VCR15 			= ADCF1CFGANDUSE_ADCF1VCR15_CNT_U32;
	ADCF1VCR16 			= ADCF1CFGANDUSE_ADCF1VCR16_CNT_U32;
	ADCF1VCR17 			= ADCF1CFGANDUSE_ADCF1VCR17_CNT_U32;
	ADCF1VCR18			= ADCF1CFGANDUSE_ADCF1VCR18_CNT_U32;
	ADCF1VCR19 			= ADCF1CFGANDUSE_ADCF1VCR19_CNT_U32;
	ADCF1VCR20			= ADCF1CFGANDUSE_ADCF1VCR20_CNT_U32;
	ADCF1VCR21			= ADCF1CFGANDUSE_ADCF1VCR21_CNT_U32;
	ADCF1VCR22 			= ADCF1CFGANDUSE_ADCF1VCR22_CNT_U32;
	ADCF1VCR23 			= ADCF1CFGANDUSE_ADCF1VCR23_CNT_U32;
	ADCF1ADCR1_SUSMTD 	= 0U;
	ADCF1ADCR2_ADDNT 	= 0U;
	ADCF1ADCR2_DFMT		= 1U;
	ADCF1SFTCR_IDEIE 	= 0U;
	ADCF1SFTCR_PEIE 	= 0U;
	ADCF1SFTCR_OWEIE 	= 0U;
	ADCF1SFTCR_ULEIE 	= 0U;
	ADCF1SFTCR_RDCLRE 	= 1U;
	ADCF1ULLMTBR0 		= 0U;
	ADCF1ULLMTBR1 		= 0U;
	ADCF1ULLMTBR2 		= 0U;
	ADCF1SGSTCR0 		= 0U;
	ADCF1SGCR0 			= 0U;
	ADCF1SGVCSP0 		= 0U;
	ADCF1SGVCEP0 		= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08; /* 23 */
	ADCF1SGMCYCR0 		= 0U;
	ADCF1ULLMSR0 		= 0U;
	ADCF1SGSTCR1 		= 0U;
	ADCF1SGCR1 			= ADCF1CFGANDUSE_ADCF1SGSWENACNVNANDDMAINTRPT_CNT_U08; /* 17 */
	ADCF1SGVCSP1 		= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08; /* 23 */
	ADCF1SGVCEP1 		= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08; /* 23 */
	ADCF1SGMCYCR1 		= 0U;
	ADCF1ULLMSR1 		= 0U;
	ADCF1SGSTCR2 		= 0U;
	ADCF1SGCR2 			= ADCF1CFGANDUSE_ADCF1SGSWENACNVN_CNT_U08; /* 1 */
	ADCF1SGVCSP2 		= ADCF1CFGANDUSE_ADCF1SGVCSP2_CNT_U08;
	ADCF1SGVCEP2 		= ADCF1CFGANDUSE_ADCF1SGVCEP2_CNT_U08;
	ADCF1SGMCYCR2 		= 0U;
	ADCF1ULLMSR2 		= 0U;
	ADCF1SGSTCR3 		= 0U;
	ADCF1SGCR3 			= ADCF1CFGANDUSE_ADCF1SGSWENACNVN_CNT_U08; /* 1 */
	ADCF1SGVCSP3 		= ADCF1CFGANDUSE_ADCF1SGVCSP3_CNT_U08;
	ADCF1SGVCEP3 		= ADCF1CFGANDUSE_ADCF1SGVCEP3_CNT_U08;
	ADCF1SGMCYCR3 		= 0U;
	ADCF1ULLMSR3 		= 0U;
	ADCF1SGSTCR4 		= 0U;
	ADCF1SGCR4 			= 0U;
	ADCF1SGVCSP4 		= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08;
	ADCF1SGVCEP4 		= ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08;
	ADCF1SGMCYCR4 		= 0U;
	ADCF1ULLMSR4 		= 0U;

	ADCF1SGSTCR0 = ADCF1CFGANDUSE_ADCF1SGSWENACNVN_CNT_U08;
	
	*Rte_Pim_Adcf1DiagcEndPtr() = ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08;
	*Rte_Pim_Adcf1DiagcStrtPtr() = ADCF1CFGANDUSE_ADCF1DIAGCSCANGROUPMAX_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1EnaCnvn_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Adcf1EnaCnvn>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Adcf1EnaCnvn_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1EnaCnvn_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Adcf1CfgAndUse_CODE) Adcf1EnaCnvn_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf1EnaCnvn_Oper
 *********************************************************************************************************************/

ADCF1SGCR3 = ADCF1CFGANDUSE_ADCF1SGSWENACNVN_CNT_U08;
ADCF1SGCR2 = ADCF1CFGANDUSE_ADCF1SGSWENACNVN_CNT_U08;
ADCF1SGCR1 = ADCF1CFGANDUSE_ADCF1SGSWENACNVNANDDMAINTRPT_CNT_U08;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Adcf1CfgAndUse_STOP_SEC_CODE
#include "Adcf1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
