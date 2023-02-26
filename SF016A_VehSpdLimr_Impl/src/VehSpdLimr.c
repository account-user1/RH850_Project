/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  VehSpdLimr.c
 *     SW-C Type:  VehSpdLimr
 *  Generated at:  Wed Jan 13 13:42:52 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <VehSpdLimr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : VehSpdLimr.c
* Module Description: Implements the SF016A_VehSpdLimr_Design FDD. 
				The Vehicle Speed Limiting Function determines a limited assist torque command value as a function of vehicle
				speed and handwheel position to manage mechanical fatigue near end-of-travel positions.
* Project           : CBD 
* Author            : Sarika Natu (KPIT Technologies)
***********************************************************************************************************************
* Version Control:
* %version          : 3%
* %derived_by       : mzjphh%
*----------------------------------------------------------------------------------------------------------------------
* Date    	     Rev      Author         Change Description                                                      SCR #
* --------------  -------  --------  --------------------------------------------------------------------   ----------
* 08/07/15        1        SN         Initial implementation  of SF016A                                       EA4#972    
* 10/16/15		  2        CP         Implmentation of changes in FDD v1.1.0 as per anomaly EA4#1276          EA4#2090   
* 01/13/16        3        NS         Changed to HwAgEotCcw & HwAgEotCw init values per anomaly EA4#2978      EA4#3269                              
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
  u5p11
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u9p7
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_VehSpdLimr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "SysGlbPrm.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
type for code readability and to allow use of "sizeof". */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmVehSpdLimrMaxAssiX_u9p7  (*(const Ary1D_u9p7_5 *) Rte_Prm_VehSpdLimrMaxAssiX_Ary1D())
#define PrmVehSpdLimrMaxAssiY_u5p11  (*(const Ary1D_u5p11_5 *) Rte_Prm_VehSpdLimrMaxAssiY_Ary1D())


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
 * u5p11: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u5p11_5: Array with 5 element(s) of type u5p11
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dVehSpdLimrBreakPt1(void)
 *   float32 *Rte_Pim_dVehSpdLimrBreakPt2(void)
 *   u5p11 *Rte_Pim_dVehSpdLimrLimTerm(void)
 *   u5p11 *Rte_Pim_dVehSpdLimrZeroVehSpd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_VehSpdLimrPosMaxOffs1_Val(void)
 *   float32 Rte_Prm_VehSpdLimrPosMaxOffs2_Val(void)
 *   u9p7 *Rte_Prm_VehSpdLimrMaxAssiX_Ary1D(void)
 *   u5p11 *Rte_Prm_VehSpdLimrMaxAssiY_Ary1D(void)
 *
 *********************************************************************************************************************/


#define VehSpdLimr_START_SEC_CODE
#include "VehSpdLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VehSpdLimrPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthy_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCcw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgEotCw_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_VehSpdMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, VehSpdLimr_CODE) VehSpdLimrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: VehSpdLimrPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwAgAuthy_Uls_T_f32;
	VAR(float32, AUTOMATIC) HwAgEotCcw_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) HwAgEotCw_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) VehSpdMotTqLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) BkPt1_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) BkPt2_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) AbsHwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) VehSpdMotTq_MotNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC) HwAg_HwDeg_T_u11p5;
	VAR(uint16, AUTOMATIC) SpdLimrBrkXTbl_HwDeg_T_u11p5[2];
	VAR(uint16, AUTOMATIC) SpdLimrBrkYTbl_HwDeg_T_u5p11[2];
	VAR(uint16, AUTOMATIC) VehSpdMotTq_MotNwtMtr_T_u5p11;
	
	
	/*Reading inputs from RTE*/
	(void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);					/* REQ: SF016A #9 */
	(void)Rte_Read_HwAgAuthy_Val(&HwAgAuthy_Uls_T_f32);			/* REQ: SF016A #35 */
	(void)Rte_Read_HwAgEotCcw_Val(&HwAgEotCcw_HwDeg_T_f32);		/* REQ: SF016A #33 */
	(void)Rte_Read_HwAgEotCw_Val(&HwAgEotCw_HwDeg_T_f32);		/* REQ: SF016A #34 */
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);				/* REQ: SF016A #32 */
	
	/* REQ: SF016A #39 */ /* REQ: SF016A #40 */
	
	/*DetermineBreakpoints implementation */
	if(0.0F > HwAg_HwDeg_T_f32)
	{
		BkPt1_HwDeg_T_f32 = Abslt_f32_f32(HwAgEotCcw_HwDeg_T_f32 + Rte_Prm_VehSpdLimrPosMaxOffs1_Val());
		BkPt2_HwDeg_T_f32 = Abslt_f32_f32(HwAgEotCcw_HwDeg_T_f32 + Rte_Prm_VehSpdLimrPosMaxOffs2_Val());
	}
	else
	{
		BkPt1_HwDeg_T_f32 = Abslt_f32_f32(HwAgEotCw_HwDeg_T_f32 - Rte_Prm_VehSpdLimrPosMaxOffs1_Val());
		BkPt2_HwDeg_T_f32 = Abslt_f32_f32(HwAgEotCw_HwDeg_T_f32 - Rte_Prm_VehSpdLimrPosMaxOffs2_Val());
	}
	
	*Rte_Pim_dVehSpdLimrBreakPt1() = BkPt1_HwDeg_T_f32;
	*Rte_Pim_dVehSpdLimrBreakPt2() = BkPt2_HwDeg_T_f32;
	
	/* XTbl calc for Linear interpolation*/
	SpdLimrBrkXTbl_HwDeg_T_u11p5[0] = FloatToFixd_u16_f32(BkPt1_HwDeg_T_f32 ,NXTRFIXDPT_FLOATTOP5_ULS_F32);
	SpdLimrBrkXTbl_HwDeg_T_u11p5[1] = FloatToFixd_u16_f32(BkPt2_HwDeg_T_f32 ,NXTRFIXDPT_FLOATTOP5_ULS_F32);
	
	/*Input calc for Linear interpolation*/
	AbsHwAg_HwDeg_T_f32 = Abslt_f32_f32(HwAg_HwDeg_T_f32);
	HwAg_HwDeg_T_u11p5 = FloatToFixd_u16_f32(AbsHwAg_HwDeg_T_f32 ,NXTRFIXDPT_FLOATTOP5_ULS_F32);
	
	/*YTbl calc for Linear interpolation*/
	/*Table VehSpdLimrMaxAssiY will contain decreasing values only. Hence Max of table will always be [0]th element*/
	SpdLimrBrkYTbl_HwDeg_T_u5p11[0] = PrmVehSpdLimrMaxAssiY_u5p11[0];
	*Rte_Pim_dVehSpdLimrZeroVehSpd() = SpdLimrBrkYTbl_HwDeg_T_u5p11[0];
	
	VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	SpdLimrBrkYTbl_HwDeg_T_u5p11[1] = LnrIntrpn_u16_u16VariXu16VariY(PrmVehSpdLimrMaxAssiX_u9p7,
                                                                     PrmVehSpdLimrMaxAssiY_u5p11,
                                                                     (uint16)TblSize_m(PrmVehSpdLimrMaxAssiX_u9p7),
                                                                     VehSpd_Kph_T_u9p7);
																	 
	*Rte_Pim_dVehSpdLimrLimTerm() = SpdLimrBrkYTbl_HwDeg_T_u5p11[1];
	
	/*Linear interpolation of calculated tables*/
	if (1.0F <= HwAgAuthy_Uls_T_f32)
	{
		VehSpdMotTq_MotNwtMtr_T_u5p11 = LnrIntrpn_u16_u16VariXu16VariY(SpdLimrBrkXTbl_HwDeg_T_u11p5,
                                                                     SpdLimrBrkYTbl_HwDeg_T_u5p11,
                                                                     (uint16)TblSize_m(SpdLimrBrkXTbl_HwDeg_T_u11p5),
                                                                     HwAg_HwDeg_T_u11p5);	
	}
	else
	{
		VehSpdMotTq_MotNwtMtr_T_u5p11 = SpdLimrBrkYTbl_HwDeg_T_u5p11[0]; /* ENDREQ: SF016A #41 */
	}
	
	VehSpdMotTq_MotNwtMtr_T_f32 = FixdToFloat_f32_u16 (VehSpdMotTq_MotNwtMtr_T_u5p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
	
	/*Limit the output*/
	VehSpdMotTqLim_MotNwtMtr_T_f32 = Lim_f32(VehSpdMotTq_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
	
	/* ENDREQ: SF016A #39 */ /* ENDREQ: SF016A #40 */
	
	/*Writing outputs to RTE*/
	(void)Rte_Write_VehSpdMotTqLim_Val(VehSpdMotTqLim_MotNwtMtr_T_f32); /* REQ: SF016A #11 */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define VehSpdLimr_STOP_SEC_CODE
#include "VehSpdLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
