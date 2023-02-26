/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotCurrPeakEstimn.c
 *        Config:  C:/Component/SF108A_MotCurrPeakEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  MotCurrPeakEstimn
 *  Generated at:  Thu Oct 19 13:06:45 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotCurrPeakEstimn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: MotCurrPeakEstimn.c
* Module Description: Implementation of MotCurrPeakEstimn FDD SF108A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           5 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/29/15  1        SB       Initial Version                                                                   EA4#652
* 11/04/15  2        SB       Correct the time-step used in FilLpInit                                           EA4#2383
* 04/25/16  3        NS       Updated for FDD v1.2.0 (fix for anom EA4#2598)                                    EA4#5490
* 11/10/16  4        JK       Updated for FDD v2.0.0                                                            EA4#7533
* 09/25/17  5        RMG(TATA)Added one new input MotAndThermProtnLoaMod and                                    EA4#13247
                              Inputs IvtrLoaMtgtnEna and CurrMeasLoaMtgtnEna removed 
                                                          
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_MotCurrPeakEstimn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrFil.h"
 #include "ArchGlbPrm.h"
 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define   MOTCURRPEAKMAX_AMPRSQD_F32        (62500.0F)
#define   MOTCURRPEAKMIN_AMPRSQD_F32        (0.0F)
#define   BITMASK1_CNT_U08  				((uint8)1U)
#define   BITMASK2_CNT_U08  				((uint8)2U)
#define   BITMASK4_CNT_U08  				((uint8)4U)
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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil(void)
 *   float32 *Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrDaxFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrPeakEstimdFil(void)
 *   FilLpRec1 *Rte_Pim_MotCurrQaxFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val(void)
 *   float32 Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val(void)
 *
 *********************************************************************************************************************/


#define MotCurrPeakEstimn_START_SEC_CODE
#include "MotCurrPeakEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnInit1
 *********************************************************************************************************************/
	 
	 FilLpInit(0.0F, Rte_Prm_MotCurrPeakEstimnCurrPeakEstimdFilFrq_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_MotCurrPeakEstimdFil());
	 FilLpInit(0.0F, Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_MotCurrDaxFil());
	 FilLpInit(0.0F, Rte_Prm_MotCurrPeakEstimnCurrFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_MotCurrQaxFil());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnPer1
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
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrPeakEstimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer1
 *********************************************************************************************************************/
	 VAR(float32, AUTOMATIC) MotCurrDax_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrDaxCmd_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrQax_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrQaxCmd_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrDaxestimn_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrQaxestimn_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrDaxFi_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrQaxFi_Ampr_T_f32;
	 VAR(float32, AUTOMATIC) MotCurrPeakEstimd_AmprSqd_T_f32;
	 
	 VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08; 
	 
	 VAR(boolean, AUTOMATIC) CurrMeasLoaMtgtnEna_Cnt_T_logl;
	 VAR(boolean, AUTOMATIC) DualEcuMotCtrlMtgtnEna_Cnt_T_logl;
	 VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_logl;
	 VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl;

	 /* Read Inputs */
	 (void) Rte_Read_MotCurrDax_Val(&MotCurrDax_Ampr_T_f32);                         /* REQ: SF108A #64 I */
	 (void) Rte_Read_MotCurrDaxCmd_Val(&MotCurrDaxCmd_Ampr_T_f32);                   /* REQ: SF108A #40 I */
	 (void) Rte_Read_MotCurrQax_Val(&MotCurrQax_Ampr_T_f32);                         /* REQ: SF108A #63 I */
	 (void) Rte_Read_MotCurrQaxCmd_Val(&MotCurrQaxCmd_Ampr_T_f32);                   /* REQ: SF108A #41 I */
	 (void)Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(&DualEcuMotCtrlMtgtnEna_Cnt_T_logl);  /* REQ: SF108A #81 I */
	 (void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);
	 
	 
	 
	/*** Start of Decoder ***/
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK1_CNT_U08)== BITMASK1_CNT_U08)
	{
	    CurrMeasLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    CurrMeasLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK2_CNT_U08)== BITMASK2_CNT_U08)
	{
	    IvtrLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    IvtrLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK4_CNT_U08)== BITMASK4_CNT_U08)
	{
	    FetLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    FetLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	/*** End of Decoder ***/

	 /* Determine MotCurrDaxestimn and MotCurrQaxestimn */
     /* REQ: SF108A #48 I */ /* REQ: SF108A #49 I */
	 if((CurrMeasLoaMtgtnEna_Cnt_T_logl== TRUE)||(DualEcuMotCtrlMtgtnEna_Cnt_T_logl == TRUE)||(IvtrLoaMtgtnEna_Cnt_T_logl == TRUE)||(FetLoaMtgtnEna_Cnt_T_logl == TRUE))
	 {
		 MotCurrDaxestimn_Ampr_T_f32 = MotCurrDaxCmd_Ampr_T_f32;
		 MotCurrQaxestimn_Ampr_T_f32 = MotCurrQaxCmd_Ampr_T_f32;
	 }
	 else
	 {
		 MotCurrDaxestimn_Ampr_T_f32 = MotCurrDax_Ampr_T_f32;
		 MotCurrQaxestimn_Ampr_T_f32 = MotCurrQax_Ampr_T_f32;
	 }
     /* ENDREQ: SF108A #48 I */ /* ENDREQ: SF108A #49 I */
	 MotCurrDaxFi_Ampr_T_f32 = FilLpUpdOutp_f32(MotCurrDaxestimn_Ampr_T_f32, Rte_Pim_MotCurrDaxFil()); /* REQ: SF108A #51 I */
	 MotCurrQaxFi_Ampr_T_f32 = FilLpUpdOutp_f32(MotCurrQaxestimn_Ampr_T_f32, Rte_Pim_MotCurrQaxFil()); /* REQ: SF108A #51 I */
	 /* Update Display Variables */
	 *Rte_Pim_dMotCurrPeakEstimnMotCurrDaxFil() = MotCurrDaxFi_Ampr_T_f32;
	 *Rte_Pim_dMotCurrPeakEstimnMotCurrQaxFil() = MotCurrQaxFi_Ampr_T_f32;
	 /* Determine MotCurrPeakEstimd */
     /* REQ: SF108A #56 I */
	 MotCurrPeakEstimd_AmprSqd_T_f32 =  (MotCurrDaxFi_Ampr_T_f32 * MotCurrDaxFi_Ampr_T_f32) +
										(MotCurrQaxFi_Ampr_T_f32 * MotCurrQaxFi_Ampr_T_f32);
     /* ENDREQ: SF108A #56 I */
	 /* Limit Output */
	 MotCurrPeakEstimd_AmprSqd_T_f32 = Lim_f32(MotCurrPeakEstimd_AmprSqd_T_f32, MOTCURRPEAKMIN_AMPRSQD_F32, MOTCURRPEAKMAX_AMPRSQD_F32); /* REQ: SF108A #68 I */
	 /* Write Output */
	 Rte_IrvWrite_MotCurrPeakEstimnPer1_MotCurrEstimd(MotCurrPeakEstimd_AmprSqd_T_f32);
	 (void) Rte_Write_MotCurrPeakEstimd_Val(MotCurrPeakEstimd_AmprSqd_T_f32);  /* REQ: SF108A #42 I */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrPeakEstimnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotCurrPeakEstimdFild_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrPeakEstimn_CODE) MotCurrPeakEstimnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrPeakEstimnPer2
 *********************************************************************************************************************/
	 VAR(float32, AUTOMATIC) MotCurrPeakEstimdFild_AmprSqd_T_f32;

     /* REQ: SF108A #58 I */
	 MotCurrPeakEstimdFild_AmprSqd_T_f32 = FilLpUpdOutp_f32(Rte_IrvRead_MotCurrPeakEstimnPer2_MotCurrEstimd(), Rte_Pim_MotCurrPeakEstimdFil());	
     /* ENDREQ: SF108A #58 I */
	 /* Limit Output */
     /* REQ: SF108A #68 I */
	 MotCurrPeakEstimdFild_AmprSqd_T_f32 = Lim_f32(MotCurrPeakEstimdFild_AmprSqd_T_f32, MOTCURRPEAKMIN_AMPRSQD_F32, MOTCURRPEAKMAX_AMPRSQD_F32);
     /* ENDREQ: SF108A #68 I */
	 /* Write Output */
	 (void) Rte_Write_MotCurrPeakEstimdFild_Val(MotCurrPeakEstimdFild_AmprSqd_T_f32); /* REQ: SF108A #45 I */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotCurrPeakEstimn_STOP_SEC_CODE
#include "MotCurrPeakEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
