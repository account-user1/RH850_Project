/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DrvrTqEstimn.c
 *        Config:  C:/myWork/SF056A_DrvrTqEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  DrvrTqEstimn
 *  Generated at:  Thu May 11 12:53:48 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DrvrTqEstimn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DrvrTqEstimn.c
* Module Description: Implementation of Driver Torque Estimation (FDD SF056A)
* Project           : CBD 
* Author            : Matthew Leser
***********************************************************************************************************************
* Version Control:
* %version   :        3 %
* %derived_by:        nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                               SCR #
* -------   -------  --------  -----------------------------------------------------------------------------  ---------
* 02/01/17  1        ML        Initial Version																   EA4#7099
* 05/11/17	2		 MB		   Code vs model mismatch 														   EA4#10237
* 06/20/17  3        ML        Updated to fix Anomaly EA4#12697                                                EA4#12871
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_DrvrTqEstimn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 #include "NxtrMath.h"
 #include "ArchGlbPrm.h"
 #include "ElecGlbPrm.h"
 

/* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1]:  AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]:  There is no appropriate action to take on the return value for Rte_Write and Rte_Read */
 
 #define AGESTIMDLOWRLIM_HWRAD_F32				(-252.0F)
 #define AGESTIMDUPPRLIM_HWRAD_F32				252.0F
 #define TQESTIMDLOWRLIM_HWNWTMTR_F32			(-100.0F)
 #define TQESTIMDUPPRLIM_HWNWTMTR_F32			100.0F
 #define VELESTIMDLOWRLIM_HWRADPERSEC_F32   	(-420.0F)
 #define VELESTIMDUPPRLIM_HWRADPERSEC_F32		420.0F

 #define PrmDrvrTqEstimnMtrxA				(*(const Ary2D_f32_5_5  *)       Rte_Prm_DrvrTqEstimnMtrxA_Ary2D())
 #define PrmDrvrTqEstimnMtrxB				(*(const Ary2D_f32_5_4  *)       Rte_Prm_DrvrTqEstimnMtrxB_Ary2D())
 #define PrmDrvrTqEstimnMtrxC 				(*(const Ary1D_f32_5  *)         Rte_Prm_DrvrTqEstimnMtrxC_Ary1D())
 #define PrmDrvrTqEstimnMtrxD				(*(const Ary1D_f32_4 *)          Rte_Prm_DrvrTqEstimnMtrxD_Ary1D())

 
 
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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_f32_4: Array with 4 element(s) of type float32
 * Ary1D_f32_5: Array with 5 element(s) of type float32
 * Ary2D_f32_5_4: Array with 5 element(s) of type Ary1D_f32_4
 * Ary2D_f32_5_5: Array with 5 element(s) of type Ary1D_f32_5
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_DrvrTqStPrev(void)
 *     Returnvalue: float32* is of type Ary1D_f32_5
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxA_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_5_5
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxB_Ary2D(void)
 *     Returnvalue: float32* is of type Ary2D_f32_5_4
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxC_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_5
 *   float32 *Rte_Prm_DrvrTqEstimnMtrxD_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_4
 *
 *********************************************************************************************************************/


#define DrvrTqEstimn_START_SEC_CODE
#include "DrvrTqEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DrvrTqEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DrvrTqEstimnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DrvrTqEstimn_CODE) DrvrTqEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DrvrTqEstimnInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DrvrTqEstimnPer1
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
 *   Std_ReturnType Rte_Read_AssiMechPolarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdPwrLimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DrvrTqEstimd_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DrvrTqEstimnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DrvrTqEstimn_CODE) DrvrTqEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DrvrTqEstimnPer1
 *********************************************************************************************************************/
 VAR(sint8, AUTOMATIC)    AssiMechPolarity_Cnt_T_s08;
 
 VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
 VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) MotTqCmdPwrLimd_MotNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
 VAR(float32, AUTOMATIC) DrvrTqEstimd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) DrvrTqObsvrInp_Uls_T_f32[4];
 VAR(float32, AUTOMATIC) DrvrTqObsvrInpElm1_MotNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) DrvrTqObsvrInpElm3_HwRad_T_f32;
 VAR(float32, AUTOMATIC) DrvrTqObsvrInpElm4_MotRadPerSec_T_f32;
 VAR(float32, AUTOMATIC) SumDrvrTq1_Uls_T_f32[5] = {0.0F,0.0F,0.0F,0.0F,0.0F};
 VAR(float32, AUTOMATIC) SumDrvrTq2_Uls_T_f32[5] = {0.0F,0.0F,0.0F,0.0F,0.0F};
 VAR(float32, AUTOMATIC) SumDrvrTq3_Uls_T_f32 = 0.0F;
 VAR(float32, AUTOMATIC) SumDrvrTq4_Uls_T_f32 = 0.0F;
 VAR(float32, AUTOMATIC) SumDrvrTqOut1_Uls_T_f32[5];
 VAR(float32, AUTOMATIC) SumDrvrTqOut2_Uls_T_f32;
 
 
 VAR(uint8, AUTOMATIC)   RowIdx_Uls_T_u08;
 VAR(uint8, AUTOMATIC)   ColIdx_Uls_T_u08;
 
 (void)Rte_Read_AssiMechPolarity_Val(&AssiMechPolarity_Cnt_T_s08);
 (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
 (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
 (void)Rte_Read_MotTqCmdPwrLimd_Val(&MotTqCmdPwrLimd_MotNwtMtr_T_f32);
 (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
 
 /*** Input Conditioning ***/
 
 DrvrTqObsvrInpElm1_MotNwtMtr_T_f32 = MotTqCmdPwrLimd_MotNwtMtr_T_f32 * (float32)AssiMechPolarity_Cnt_T_s08 * Rte_Prm_SysGlbPrmSysTqRat_Val();
 DrvrTqObsvrInpElm3_HwRad_T_f32 = HwAg_HwDeg_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32;
 DrvrTqObsvrInpElm4_MotRadPerSec_T_f32 = MotVelCrf_MotRadPerSec_T_f32 / Rte_Prm_SysGlbPrmSysKineRat_Val();
 
 DrvrTqObsvrInp_Uls_T_f32[0] = DrvrTqObsvrInpElm1_MotNwtMtr_T_f32;
 DrvrTqObsvrInp_Uls_T_f32[1] = HwTq_HwNwtMtr_T_f32;
 DrvrTqObsvrInp_Uls_T_f32[2] = DrvrTqObsvrInpElm3_HwRad_T_f32;
 DrvrTqObsvrInp_Uls_T_f32[3] = DrvrTqObsvrInpElm4_MotRadPerSec_T_f32;
 
 /*** Estimated Driver Torque Calculation ***/
 
 for (RowIdx_Uls_T_u08 = 0U; RowIdx_Uls_T_u08 < 5U; RowIdx_Uls_T_u08++)
 {
	for (ColIdx_Uls_T_u08 = 0U; ColIdx_Uls_T_u08 <4U; ColIdx_Uls_T_u08++)
	{
		SumDrvrTq1_Uls_T_f32[RowIdx_Uls_T_u08] += (PrmDrvrTqEstimnMtrxB[RowIdx_Uls_T_u08][ColIdx_Uls_T_u08]) * DrvrTqObsvrInp_Uls_T_f32[ColIdx_Uls_T_u08];
	}
 }
 
 for (RowIdx_Uls_T_u08 = 0U; RowIdx_Uls_T_u08 < 5U; RowIdx_Uls_T_u08++)
 {
	for (ColIdx_Uls_T_u08 = 0U; ColIdx_Uls_T_u08 <5U; ColIdx_Uls_T_u08++)
	{
		SumDrvrTq2_Uls_T_f32[RowIdx_Uls_T_u08] += (PrmDrvrTqEstimnMtrxA[RowIdx_Uls_T_u08][ColIdx_Uls_T_u08]) * Rte_Pim_DrvrTqStPrev()[ColIdx_Uls_T_u08];
	}
 }
 
 for (RowIdx_Uls_T_u08 = 0U; RowIdx_Uls_T_u08 < 5U; RowIdx_Uls_T_u08++)
 {
	 SumDrvrTqOut1_Uls_T_f32[RowIdx_Uls_T_u08] = SumDrvrTq1_Uls_T_f32[RowIdx_Uls_T_u08] + SumDrvrTq2_Uls_T_f32[RowIdx_Uls_T_u08];
 }
 
 for (ColIdx_Uls_T_u08 = 0U; ColIdx_Uls_T_u08 < 5U; ColIdx_Uls_T_u08++)
 {
	SumDrvrTq3_Uls_T_f32 += (PrmDrvrTqEstimnMtrxC[ColIdx_Uls_T_u08]) * Rte_Pim_DrvrTqStPrev()[ColIdx_Uls_T_u08]; 
 }
 
 for (ColIdx_Uls_T_u08 = 0U; ColIdx_Uls_T_u08 < 4U; ColIdx_Uls_T_u08++)
 {
	SumDrvrTq4_Uls_T_f32 += (PrmDrvrTqEstimnMtrxD[ColIdx_Uls_T_u08]) * DrvrTqObsvrInp_Uls_T_f32[ColIdx_Uls_T_u08];
 }
 
 SumDrvrTqOut2_Uls_T_f32 = SumDrvrTq3_Uls_T_f32 + SumDrvrTq4_Uls_T_f32;
 
 Rte_Pim_DrvrTqStPrev()[0] = Lim_f32(SumDrvrTqOut1_Uls_T_f32[0], AGESTIMDLOWRLIM_HWRAD_F32, AGESTIMDUPPRLIM_HWRAD_F32);
 Rte_Pim_DrvrTqStPrev()[1] = Lim_f32(SumDrvrTqOut1_Uls_T_f32[1], VELESTIMDLOWRLIM_HWRADPERSEC_F32, VELESTIMDUPPRLIM_HWRADPERSEC_F32);
 Rte_Pim_DrvrTqStPrev()[2] = Lim_f32(SumDrvrTqOut1_Uls_T_f32[2], AGESTIMDLOWRLIM_HWRAD_F32, AGESTIMDUPPRLIM_HWRAD_F32);
 Rte_Pim_DrvrTqStPrev()[3] = Lim_f32(SumDrvrTqOut1_Uls_T_f32[3], VELESTIMDLOWRLIM_HWRADPERSEC_F32, VELESTIMDUPPRLIM_HWRADPERSEC_F32);
 Rte_Pim_DrvrTqStPrev()[4] = Lim_f32(SumDrvrTqOut1_Uls_T_f32[4], TQESTIMDLOWRLIM_HWNWTMTR_F32, TQESTIMDUPPRLIM_HWNWTMTR_F32);
 
 DrvrTqEstimd_HwNwtMtr_T_f32 = Lim_f32(SumDrvrTqOut2_Uls_T_f32, ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32, ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32);
 
 (void)Rte_Write_DrvrTqEstimd_Val(DrvrTqEstimd_HwNwtMtr_T_f32);
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DrvrTqEstimn_STOP_SEC_CODE
#include "DrvrTqEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
