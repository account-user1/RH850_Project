/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwAgArbn.c
 *     SW-C Type:  HwAgArbn
 *  Generated at:  Tue Nov  1 14:10:59 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwAgArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: HwAgArbn.c
* Module Description: Implementation of HwAgArbn FDD ES238B
* Project           : CBD  
* Author            : Matthew Leser
*****************************************************************************
* Version Control:
* %version:          1
* %derived_by:       nz2796
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 10/31/16	1		 ML		   Initial Version																   EA4#7058																   
******************************************************************************/
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
  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_HwAgArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrMath.h"
 
  /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
 #define HWAGARBNMAXSTALL_CNT_U08 	200U
 #define MAXSTALLCNT_CNT_U08		255U
 #define CORRLNSTSMASKSIG_CNT_U08 	0x01u
 #define HWAGLIM_HWDEG_F32          900.0F
 
 static FUNC(boolean, HwTqArbn_CODE) CorrlnSigAvlChkRev(uint8 SigRollgCnt_Cnt_T_u08,
														SigQlfr1 SigQlfr_Cnt_T_enum,
														P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) LstRollgCnt_Cnt_T_u08,
														P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) StallCnt_Cnt_T_u08);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
 * SigQlfr1: Enumeration of integer in interval [0...255] with enumerators
 *   SIGQLFR_NORES (0U)
 *   SIGQLFR_PASSD (1U)
 *   SIGQLFR_FAILD (2U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwAgPrev(void)
 *   uint8 *Rte_Pim_HwAgARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwAgAStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwAgArbnAgAAvl(void)
 *
 *********************************************************************************************************************/


#define HwAgArbn_START_SEC_CODE
#include "HwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgArbnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwAgA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwAgARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwAgCorrlnSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAg_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, HwAgArbn_CODE) HwAgArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwAgArbnPer1
 *********************************************************************************************************************/
	
	 VAR(float32,  AUTOMATIC) HwAg_HwDeg_T_f32;
	 VAR(float32,  AUTOMATIC) HwAgA_HwDeg_T_f32;
	 VAR(uint8,    AUTOMATIC) HwAgARollgCntr_Cnt_T_u08;
	 VAR(uint8,    AUTOMATIC) HwAgCorrlnSt_Cnt_T_u08;
	 VAR(SigQlfr1, AUTOMATIC) HwAgAQlfr_Cnt_T_enum;
	 VAR(boolean,  AUTOMATIC) SigAAvl_Cnt_T_lgc;
	 VAR(boolean,  AUTOMATIC) HwAgAAvl_Cnt_T_lgc;
	 
	 /* Read Inputs */
	 (void)Rte_Read_HwAgA_Val(&HwAgA_HwDeg_T_f32);
	 (void)Rte_Read_HwAgARollgCntr_Val(&HwAgARollgCntr_Cnt_T_u08);
	 (void)Rte_Read_HwAgCorrlnSt_Val(&HwAgCorrlnSt_Cnt_T_u08);
	 (void)Rte_Read_HwAgAQlfr_Val(&HwAgAQlfr_Cnt_T_enum);
	 
	 /* HwAgAAvlChk */
	 SigAAvl_Cnt_T_lgc = CorrlnSigAvlChkRev(HwAgARollgCntr_Cnt_T_u08,
										    HwAgAQlfr_Cnt_T_enum,
										    Rte_Pim_HwAgAStallCntrPrev(),
										    Rte_Pim_HwAgARollgCntrPrev());
	
	 /* Determine HwAgArbnAgAvl */
	 if(((HwAgCorrlnSt_Cnt_T_u08 & CORRLNSTSMASKSIG_CNT_U08) == 1u) && (SigAAvl_Cnt_T_lgc == TRUE))
	 {
		 HwAgAAvl_Cnt_T_lgc = TRUE;
	 }
	 else
	 {
		 HwAgAAvl_Cnt_T_lgc = FALSE;
	 }
	 
	 *Rte_Pim_dHwAgArbnAgAAvl() = HwAgAAvl_Cnt_T_lgc;
	 
	 /* Arbitration */
	 
	 if(HwAgAAvl_Cnt_T_lgc == TRUE)
	 {
		 HwAg_HwDeg_T_f32 = HwAgA_HwDeg_T_f32;
	 }
	 else
	 {
		 HwAg_HwDeg_T_f32 = *Rte_Pim_HwAgPrev();
	 }
	 
	 *Rte_Pim_HwAgPrev() = HwAg_HwDeg_T_f32;
	 
	 /* Output Limiting */
	 HwAg_HwDeg_T_f32 = Lim_f32(HwAg_HwDeg_T_f32, -HWAGLIM_HWDEG_F32, HWAGLIM_HWDEG_F32);
	
	 /* Write Output */
	 (void)Rte_Write_HwAg_Val(HwAg_HwDeg_T_f32);
	 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwAgArbn_STOP_SEC_CODE
#include "HwAgArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
* Name:        		CorrlnSigAvlChkRev
* Description: 		Check availability of the signal based on 'RollingCounter', 'StallCounter' and 'SignalQualifier'.
* Inputs:      		SigRollgCnt_Cnt_T_u08
					SigQlfr_Cnt_T_enum          		
* Inputs/Outputs:	*LstRollgCnt_Cnt_T_u08
					*StallCnt_Cnt_T_u08
* Outputs:          SigAvl_Cnt_T_lgc 
* Usage Notes: 		None
**********************************************************************************************************************/

 static FUNC(boolean, HwTqArbn_CODE) CorrlnSigAvlChkRev(uint8 SigRollgCnt_Cnt_T_u08, 
														SigQlfr1 SigQlfr_Cnt_T_enum,
														P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) LstRollgCnt_Cnt_T_u08,
														P2VAR(uint8, AUTOMATIC, HwAgArbn_APPL_VAR) StallCnt_Cnt_T_u08)
{
	VAR (boolean, AUTOMATIC) SigAvl_Cnt_T_lgc;
	
	if(SigRollgCnt_Cnt_T_u08 == *LstRollgCnt_Cnt_T_u08)
	{
		if((*StallCnt_Cnt_T_u08) < MAXSTALLCNT_CNT_U08)
		{
			*StallCnt_Cnt_T_u08 = *StallCnt_Cnt_T_u08 + 1U;
		}

	}
	else
	{
		*StallCnt_Cnt_T_u08 = 0U;
	}
	
	*LstRollgCnt_Cnt_T_u08 = SigRollgCnt_Cnt_T_u08;
	
	if((*StallCnt_Cnt_T_u08) >= HWAGARBNMAXSTALL_CNT_U08)
	{
		SigAvl_Cnt_T_lgc = FALSE;
	}
	else
	{
		if(SigQlfr_Cnt_T_enum < SIGQLFR_FAILD)
		{
			SigAvl_Cnt_T_lgc = TRUE;
		}
		else
		{
			SigAvl_Cnt_T_lgc = FALSE;
		}
	}
	return SigAvl_Cnt_T_lgc;
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
