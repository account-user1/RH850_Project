/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HwTqArbn.c
 *     SW-C Type:  HwTqArbn
 *  Generated at:  Mon Feb 20 14:52:26 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HwTqArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HwTqArbn.c
* Module Description: Implementation of Handwheel Torque Arbitration FDD ES228C
* Project           : CBD
* Author            : Matthew Leser
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz2796 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 02/20/17   1       ML        Initial version                                                                EA4#9633
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
  SigQlfr1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_HwTqArbn.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrMath.h"
#include "ElecGlbPrm.h" 

#define MINHWTQDENOM_ULS_F32						(1.5F)
#define BITMASKA_CNT_U08							(0X01U)
#define BITMASKB_CNT_U08							(0X02U)
#define BITMASKC_CNT_U08							(0X04U)
#define BITMASKD_CNT_U08							(0X08U)
 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */ 
 
static FUNC(boolean, HWTQARBN_CODE) HwTqSigAvl(uint8 HwTqRollgCntr_Cnt_T_u08,
											   SigQlfr1 HwTqQlfr_Cnt_T_enum,
											   boolean CorrlSig_Cnt_T_logl,
											   P2VAR(uint8, AUTOMATIC, AUTOMATIC) RollgCntrPrev_Cnt_T_u08,
											   P2VAR(uint8, AUTOMATIC, AUTOMATIC) StallCntr_Cnt_T_u08);
											
static FUNC(void, HWTQARBN_CODE) HwTqContrbn(boolean HwTqAvl_Cnt_T_logl,
											 float32 HwTqContrbn_HwNwtMtr_T_f32,
											 P2VAR(float32, AUTOMATIC, AUTOMATIC) HwTqNumCntrbn_HwNwtMtr_T_f32,
											 P2VAR(float32, AUTOMATIC, AUTOMATIC) HwTqDenomCntrbn_Uls_T_f32);
											 
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
 *   float32 *Rte_Pim_HwTqPrev(void)
 *   float32 *Rte_Pim_dHwTqArbnHwTqDenom(void)
 *   float32 *Rte_Pim_dHwTqArbnHwTqNumer(void)
 *   uint8 *Rte_Pim_HwTqARollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqAStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqBStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqCStallCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDRollgCntrPrev(void)
 *   uint8 *Rte_Pim_HwTqDStallCntrPrev(void)
 *   boolean *Rte_Pim_dHwTqArbnAAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnBAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnCAvl(void)
 *   boolean *Rte_Pim_dHwTqArbnDAvl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val(void)
 *
 *********************************************************************************************************************/


#define HwTqArbn_START_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, HwTqArbn_CODE) HwTqArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqArbnInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTqArbnPer1
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
 *   Std_ReturnType Rte_Read_HwTqA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqAQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqARollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqB_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqBQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqBRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqC_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqCQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqCRollgCntr_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_HwTqD_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqDQlfr_Val(SigQlfr1 *data)
 *   Std_ReturnType Rte_Read_HwTqDRollgCntr_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, HwTqArbn_CODE) HwTqArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HwTqArbnPer1
 *********************************************************************************************************************/

 VAR(float32, AUTOMATIC) HwTqA_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqB_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqC_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqD_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqNum_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqDenom_Uls_T_f32;
 VAR(float32, AUTOMATIC) TmpHwTq_HwNwtMtr_T_f32;
 
 VAR(SigQlfr1, AUTOMATIC) HwTqAQlfr_Cnt_T_enum;
 VAR(SigQlfr1, AUTOMATIC) HwTqBQlfr_Cnt_T_enum;
 VAR(SigQlfr1, AUTOMATIC) HwTqCQlfr_Cnt_T_enum;
 VAR(SigQlfr1, AUTOMATIC) HwTqDQlfr_Cnt_T_enum;

 VAR(uint8, AUTOMATIC) HwTqARollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqBRollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqCRollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqDRollgCntr_Cnt_T_u08;
 VAR(uint8, AUTOMATIC) HwTqCorrlnSts_Cnt_T_u08;
 
 VAR(boolean, AUTOMATIC) CorrlnSigA_Cnt_T_logl = FALSE;
 VAR(boolean, AUTOMATIC) CorrlnSigB_Cnt_T_logl = FALSE;
 VAR(boolean, AUTOMATIC) CorrlnSigC_Cnt_T_logl = FALSE;
 VAR(boolean, AUTOMATIC) CorrlnSigD_Cnt_T_logl = FALSE;
 VAR(boolean, AUTOMATIC) HwTqArbnAAvl_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqArbnBAvl_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqArbnCAvl_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) HwTqArbnDAvl_Cnt_T_logl;
 
 (void)Rte_Read_HwTqA_Val(&HwTqA_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqB_Val(&HwTqB_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqC_Val(&HwTqC_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqD_Val(&HwTqD_HwNwtMtr_T_f32);
 (void)Rte_Read_HwTqAQlfr_Val(&HwTqAQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqBQlfr_Val(&HwTqBQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqCQlfr_Val(&HwTqCQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqDQlfr_Val(&HwTqDQlfr_Cnt_T_enum);
 (void)Rte_Read_HwTqARollgCntr_Val(&HwTqARollgCntr_Cnt_T_u08);
 (void)Rte_Read_HwTqBRollgCntr_Val(&HwTqBRollgCntr_Cnt_T_u08);
 (void)Rte_Read_HwTqCRollgCntr_Val(&HwTqCRollgCntr_Cnt_T_u08);
 (void)Rte_Read_HwTqDRollgCntr_Val(&HwTqDRollgCntr_Cnt_T_u08);
 (void)Rte_Read_HwTqCorrlnSts_Val(&HwTqCorrlnSts_Cnt_T_u08);
 
 /*** Signal Availability ***/
 
	/*** Extract Correlation Fault Status Bits ***/
	
	if(BITMASKA_CNT_U08 == (HwTqCorrlnSts_Cnt_T_u08 & BITMASKA_CNT_U08))
	{
		CorrlnSigA_Cnt_T_logl = TRUE;
	}
	if(BITMASKB_CNT_U08 == (HwTqCorrlnSts_Cnt_T_u08 & BITMASKB_CNT_U08))
	{
		CorrlnSigB_Cnt_T_logl = TRUE;
	}
	if(BITMASKC_CNT_U08 == (HwTqCorrlnSts_Cnt_T_u08 & BITMASKC_CNT_U08))
	{
		CorrlnSigC_Cnt_T_logl = TRUE;
	}
	if(BITMASKD_CNT_U08 == (HwTqCorrlnSts_Cnt_T_u08 & BITMASKD_CNT_U08))
	{
		CorrlnSigD_Cnt_T_logl = TRUE;
	}
 
 HwTqArbnAAvl_Cnt_T_logl   = HwTqSigAvl(HwTqARollgCntr_Cnt_T_u08,
									   HwTqAQlfr_Cnt_T_enum,
									   CorrlnSigA_Cnt_T_logl,
									   Rte_Pim_HwTqARollgCntrPrev(),
									   Rte_Pim_HwTqAStallCntrPrev());
 *Rte_Pim_dHwTqArbnAAvl() = HwTqArbnAAvl_Cnt_T_logl;
 
 HwTqArbnBAvl_Cnt_T_logl   = HwTqSigAvl(HwTqBRollgCntr_Cnt_T_u08,
									   HwTqBQlfr_Cnt_T_enum,
									   CorrlnSigB_Cnt_T_logl,
									   Rte_Pim_HwTqBRollgCntrPrev(),
									   Rte_Pim_HwTqBStallCntrPrev());
 *Rte_Pim_dHwTqArbnBAvl() = HwTqArbnBAvl_Cnt_T_logl;
 
 HwTqArbnCAvl_Cnt_T_logl   = HwTqSigAvl(HwTqCRollgCntr_Cnt_T_u08,
									   HwTqCQlfr_Cnt_T_enum,
									   CorrlnSigC_Cnt_T_logl,
									   Rte_Pim_HwTqCRollgCntrPrev(),
									   Rte_Pim_HwTqCStallCntrPrev());
 *Rte_Pim_dHwTqArbnCAvl() = HwTqArbnCAvl_Cnt_T_logl;
 
 HwTqArbnDAvl_Cnt_T_logl   = HwTqSigAvl(HwTqDRollgCntr_Cnt_T_u08,
									   HwTqDQlfr_Cnt_T_enum,
									   CorrlnSigD_Cnt_T_logl,
									   Rte_Pim_HwTqDRollgCntrPrev(),
									   Rte_Pim_HwTqDStallCntrPrev());
 *Rte_Pim_dHwTqArbnDAvl() = HwTqArbnDAvl_Cnt_T_logl;
 
 /*** Arbitration ***/
 
	/*** Determine HwTq Numer and Denom ***/
	
	HwTqNum_HwNwtMtr_T_f32 = 0.0F;
	HwTqDenom_Uls_T_f32 = 0.0F;
	
	HwTqContrbn(HwTqArbnAAvl_Cnt_T_logl,
				HwTqA_HwNwtMtr_T_f32,
				&HwTqNum_HwNwtMtr_T_f32,
				&HwTqDenom_Uls_T_f32);
	HwTqContrbn(HwTqArbnBAvl_Cnt_T_logl,
				HwTqB_HwNwtMtr_T_f32,
				&HwTqNum_HwNwtMtr_T_f32,
				&HwTqDenom_Uls_T_f32);
	HwTqContrbn(HwTqArbnCAvl_Cnt_T_logl,
				HwTqC_HwNwtMtr_T_f32,
				&HwTqNum_HwNwtMtr_T_f32,
				&HwTqDenom_Uls_T_f32);
	HwTqContrbn(HwTqArbnDAvl_Cnt_T_logl,
				HwTqD_HwNwtMtr_T_f32,
				&HwTqNum_HwNwtMtr_T_f32,
				&HwTqDenom_Uls_T_f32);
		
	*Rte_Pim_dHwTqArbnHwTqNumer() = HwTqNum_HwNwtMtr_T_f32;
	*Rte_Pim_dHwTqArbnHwTqDenom() = HwTqDenom_Uls_T_f32;
	
	/*** Calculate HwTq ***/
	
	if(HwTqDenom_Uls_T_f32 >= MINHWTQDENOM_ULS_F32)
	{
		TmpHwTq_HwNwtMtr_T_f32 = HwTqNum_HwNwtMtr_T_f32/HwTqDenom_Uls_T_f32;
	}
	else
	{
		TmpHwTq_HwNwtMtr_T_f32 = *Rte_Pim_HwTqPrev();
	}
	
	HwTq_HwNwtMtr_T_f32 = Lim_f32(TmpHwTq_HwNwtMtr_T_f32, ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32, ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32);
	*Rte_Pim_HwTqPrev() = HwTq_HwNwtMtr_T_f32;
	
	(void)Rte_Write_HwTq_Val(HwTq_HwNwtMtr_T_f32);
				
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HwTqArbn_STOP_SEC_CODE
#include "HwTqArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/****************************************************************************************************
* Name          :   HwTqSigAvl
* Description   :   This function implements the "HwTq Signal Avlability" blocks for A, B, C, & D                 
* Inputs        :   HwTqRollgCntr_Cnt_T_u08, *RollgCntrPrev_Cnt_T_u08, HwTqQlfr_Cnt_T_enum,
*					CorrlSig_Cnt_T_logl, *StallCntr_Cnt_T_u08		
* Outputs       :   HwTqArbnAvl_Cnt_T_logl, *RollgCntrPrev_Cnt_T_u08, *StallCntr_Cnt_T_u08
* Usage Notes   :	None
****************************************************************************************************/
static FUNC(boolean, HWTQARBN_CODE) HwTqSigAvl(uint8 HwTqRollgCntr_Cnt_T_u08,
											   SigQlfr1 HwTqQlfr_Cnt_T_enum,
											   boolean CorrlSig_Cnt_T_logl,
											   P2VAR(uint8, AUTOMATIC, AUTOMATIC) RollgCntrPrev_Cnt_T_u08,
											   P2VAR(uint8, AUTOMATIC, AUTOMATIC) StallCntr_Cnt_T_u08)
{
	
	VAR(boolean, AUTOMATIC) HwTqArbnAvl_Cnt_T_logl = FALSE;
	
	if(HwTqRollgCntr_Cnt_T_u08 == (*RollgCntrPrev_Cnt_T_u08))
	{
		if((*StallCntr_Cnt_T_u08) < Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val())
		{
			*StallCntr_Cnt_T_u08 = *StallCntr_Cnt_T_u08 + 1U;
		}	
	}
	else
	{
		*StallCntr_Cnt_T_u08 = 0U;
	}
	
	*RollgCntrPrev_Cnt_T_u08 = HwTqRollgCntr_Cnt_T_u08;
	
	if(((*StallCntr_Cnt_T_u08) < Rte_Prm_HwTqArbnHwTqMaxStallCnt_Val()) &&
		(HwTqQlfr_Cnt_T_enum < SIGQLFR_FAILD) &&
		(CorrlSig_Cnt_T_logl == TRUE))
	{
		HwTqArbnAvl_Cnt_T_logl = TRUE;	
	}	
	
	return HwTqArbnAvl_Cnt_T_logl;
}


/****************************************************************************************************
* Name          :   HwTqContrbn
* Description   :   This function implements the "HwTq Contribution" blocks for torques A-D                
* Inputs        :   *HwTqNumCntrbn_HwNwtMtr_T_f32, *HwTqDenomCntrbn_Uls_T_f32, HwTqAvl_Cnt_T_logl, 
*					HwTqContrbn_HwNwtMtr_T_f32		
* Outputs       :   *HwTqNumCntrbn_HwNwtMtr_T_f32, *HwTqDenomCntrbn_Uls_T_f32
* Usage Notes   :	None
****************************************************************************************************/
static FUNC(void, HWTQARBN_CODE) HwTqContrbn(boolean HwTqAvl_Cnt_T_logl,
											 float32 HwTqContrbn_HwNwtMtr_T_f32,
											 P2VAR(float32, AUTOMATIC, AUTOMATIC) HwTqNumCntrbn_HwNwtMtr_T_f32,
											 P2VAR(float32, AUTOMATIC, AUTOMATIC) HwTqDenomCntrbn_Uls_T_f32)
{
	if(HwTqAvl_Cnt_T_logl == TRUE)
	{
		*HwTqNumCntrbn_HwNwtMtr_T_f32 = *HwTqNumCntrbn_HwNwtMtr_T_f32 + HwTqContrbn_HwNwtMtr_T_f32;
		*HwTqDenomCntrbn_Uls_T_f32    = *HwTqDenomCntrbn_Uls_T_f32 + 1.0F;
	}
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
