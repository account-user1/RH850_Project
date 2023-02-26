/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotQuadDetn.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF101A_MotQuadDetn_Impl/tools/Component.dpa
 *     SW-C Type:  MotQuadDetn
 *  Generated at:  Thu Jun 15 13:23:39 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotQuadDetn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017, 2015 Nexteer  
* Nexteer Confidential
*
* Module File Name: MotQuadDetn.c
* Module Description: Implementation of Motor Quadrant Detection FDD SF101A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nz3541 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 05/08/15  1        SB       Initial Version																	EA4#278
* 05/30/17  2        SPP      Change application data types                                                   EA4#11065
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * MotQuad1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * s18p13
 *   sint32 represents integers with a minimum value of -2147483648 and a maximum 
 *      value of 2147483647. The order-relation on sint32 is: x < y if y - x is
 *      positive. sint32 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 *********************************************************************************************************************/

#include "Rte_MotQuadDetn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read and Rte_Write */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
			  
	#define   MOTTQCMDTOLR_MOTNWTMTR_F32  		(0.00390625F)  

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
 * s18p13: Integer in interval [-2147483648...2147483647]
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MotQuad1: Enumeration of integer in interval [0...255] with enumerators
 *   MOTQUAD_QUAD1 (1U)
 *   MOTQUAD_QUAD2 (2U)
 *   MOTQUAD_QUAD3 (3U)
 *   MOTQUAD_QUAD4 (4U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   s18p13 *Rte_Pim_MotAgCumvPrev(void)
 *   s18p13 *Rte_Pim_dMotQuadDetnMotAgCumvDelta(void)
 *   sint8 *Rte_Pim_MotDirInstsPrev(void)
 *   sint8 *Rte_Pim_MotTqCmdSignPrev(void)
 *   sint8 *Rte_Pim_dMotQuadDetnTqCmdSign(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   s18p13 Rte_Prm_MotQuadDetnMotDirHysInsts_Val(void)
 *
 *********************************************************************************************************************/


#define MotQuadDetn_START_SEC_CODE
#include "MotQuadDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotQuadDetnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotQuadDetn_CODE) MotQuadDetnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnInit1
 *********************************************************************************************************************/
	 *Rte_Pim_MotDirInstsPrev() = 1;
	 *Rte_Pim_MotTqCmdSignPrev() = 1;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotQuadDetnPer1
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
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndMrf_Val(s18p13 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotDirInsts_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotQuad_Val(MotQuad1 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotQuadDetn_CODE) MotQuadDetnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotQuadDetnPer1
 *********************************************************************************************************************/
	 VAR(sint32, AUTOMATIC) MotPosnCum_MotDeg_T_s18p13;
	 VAR(float32, AUTOMATIC) TqCmd_MotNwtMtr_T_f32;
	 VAR(sint32, AUTOMATIC) MotPosnDelta_MotDeg_T_s18p13;	 
	 VAR(sint8, AUTOMATIC) MotPosnDeltaSign_Cnt_T_s08;	 
	 VAR(MotQuad1, AUTOMATIC) MotQuad_Cnt_T_enum;
	 
	 /* Read Inputs */
	 (void) Rte_Read_MotAgCumvAlgndMrf_Val(&MotPosnCum_MotDeg_T_s18p13);
	 (void) Rte_Read_MotTqCmd_Val(&TqCmd_MotNwtMtr_T_f32);
	 
	 /* Determine_Motor_Direction */
	 /* Rollovers should not occur in normal operation in the vehicle, however, rollovers will most likely occur 
	 during dynamometer testing or other tests. (From Motor Control FDD REPS GG4500 BMW 5.3.doc) */
	 MotPosnDelta_MotDeg_T_s18p13 = MotPosnCum_MotDeg_T_s18p13 - *Rte_Pim_MotAgCumvPrev();
	 
	  /* Display */
	 *Rte_Pim_dMotQuadDetnMotAgCumvDelta() = MotPosnDelta_MotDeg_T_s18p13;
	 
	 /* Sign */
	 MotPosnDeltaSign_Cnt_T_s08 = (sint8)Sign_s08_s32(MotPosnDelta_MotDeg_T_s18p13);
	 if(*Rte_Pim_MotDirInstsPrev() == MotPosnDeltaSign_Cnt_T_s08)
	 {
		 *Rte_Pim_MotAgCumvPrev() = MotPosnCum_MotDeg_T_s18p13;
	 }
	 /* Overflow potential is addressed in Nexteer Math */
	 else if(Abslt_u32_s32(MotPosnDelta_MotDeg_T_s18p13) >= (uint32)Rte_Prm_MotQuadDetnMotDirHysInsts_Val())
	 {
		 *Rte_Pim_MotAgCumvPrev() = MotPosnCum_MotDeg_T_s18p13;
		 *Rte_Pim_MotDirInstsPrev() = MotPosnDeltaSign_Cnt_T_s08;
	 }	
	else	 
	 {
	 }	 
	 	 
	 /* Determine Motor Torque Command Sign */
	 if(Abslt_f32_f32(TqCmd_MotNwtMtr_T_f32) > MOTTQCMDTOLR_MOTNWTMTR_F32)
	 {
		*Rte_Pim_MotTqCmdSignPrev() = (sint8)Sign_s08_f32(TqCmd_MotNwtMtr_T_f32);
	 }

	 *Rte_Pim_dMotQuadDetnTqCmdSign() = *Rte_Pim_MotTqCmdSignPrev();  

	 /* Determine_Motor_Quadrant */
	 /* Quads 1/3 No change in direction */
	 if(*Rte_Pim_MotTqCmdSignPrev() == *Rte_Pim_MotDirInstsPrev())
	 {
		if(*Rte_Pim_MotTqCmdSignPrev() == 1)
		{
			MotQuad_Cnt_T_enum = MOTQUAD_QUAD1;
		}
		else
		{
			MotQuad_Cnt_T_enum = MOTQUAD_QUAD3;
		}
	 }	
	 /* Quads 2/4 Change in direction */
	 else
	 {
		 if(*Rte_Pim_MotTqCmdSignPrev() == 1)
		{
			MotQuad_Cnt_T_enum = MOTQUAD_QUAD2;
		}
		else
		{
			MotQuad_Cnt_T_enum = MOTQUAD_QUAD4;
		}
	 }	
	 
	 (void) Rte_Write_MotDirInsts_Val(*Rte_Pim_MotDirInstsPrev());
	 (void) Rte_Write_MotQuad_Val(MotQuad_Cnt_T_enum);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotQuadDetn_STOP_SEC_CODE
#include "MotQuadDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
