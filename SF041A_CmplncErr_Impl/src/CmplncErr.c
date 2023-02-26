/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CmplncErr.c
 *     SW-C Type:  CmplncErr
 *  Generated at:  Wed Jan  6 20:01:30 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CmplncErr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CmplncErr.c
* Module Description: Implementation of Compliance Error SF041A. 
* Project           : CBD 
* Author            : Kannappa Chidambaram (Tata Elxsi)
***********************************************************************************************************************
* Version Control:
* %version          : 
* %derived_by       : 
*--------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                        SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  ---------
* 01/06/16  1        KNCD           Initial Version                                                          EA4#2701
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
  u1p15
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u5p11
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u8p8
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_CmplncErr.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their 
array type for code readability and to allow use of "sizeof". */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include 
statements */

#define CMPLNCERRMOTTOPINIONMAX_HWDEG_F32     (5.0F)
#define CMPLNCERRMOTTOPINIONMIN_HWDEG_F32     (-5.0F)
#define CMPLNCERRPINIONTOHWMAX_HWDEG_F32      (15.0F)
#define CMPLNCERRPINIONTOHWMIN_HWDEG_F32      (-15.0F)

#define PrmCmplncErrHwAgNonLinCmplncDepTblY   (*(const Ary1D_u1p15_6 *)	Rte_Prm_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D())
#define PrmCmplncErrHwAgNonLinCmplncIndTblX   (*(const Ary1D_u5p11_6 *)	Rte_Prm_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D())
#define PrmCmplncErrMotAgNonLinCmplncDepTblY  (*(const Ary1D_u8p8_6 *)	Rte_Prm_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D())
#define PrmCmplncErrMotAgNonLinCmplncIndTblX  (*(const Ary1D_u5p11_6 *)	Rte_Prm_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D())

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
 * u1p15: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u1p15_6: Array with 6 element(s) of type u1p15
 * Ary1D_u5p11_6: Array with 6 element(s) of type u5p11
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u1p15 *Rte_Prm_CmplncErrHwAgNonLinCmplncDepTblY_Ary1D(void)
 *   u5p11 *Rte_Prm_CmplncErrHwAgNonLinCmplncIndTblX_Ary1D(void)
 *   u8p8 *Rte_Prm_CmplncErrMotAgNonLinCmplncDepTblY_Ary1D(void)
 *   u5p11 *Rte_Prm_CmplncErrMotAgNonLinCmplncIndTblX_Ary1D(void)
 *
 *********************************************************************************************************************/


#define CmplncErr_START_SEC_CODE
#include "CmplncErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmplncErrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, CmplncErr_CODE) CmplncErrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmplncErrInit1
 *********************************************************************************************************************/

 /*** Do nothing ***/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmplncErrPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CmplncErrMotToPinion_Val(float32 data)
 *   Std_ReturnType Rte_Write_CmplncErrPinionToHw_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, CmplncErr_CODE) CmplncErrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmplncErrPer1
 *********************************************************************************************************************/

    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdCrf_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) CmplncErrMotToPinion_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) CmplncErrPinionToHw_HwDeg_T_f32;

    VAR(uint16, AUTOMATIC)  MotTqCmdCrf_MotNwtMtr_T_u5p11;
    VAR(uint16, AUTOMATIC)  HwTq_HwNwtMtr_T_u5p11;
	VAR(uint16, AUTOMATIC)  CmplncErrMotAg_HwDeg_T_u8p8;
	VAR(uint16, AUTOMATIC)  CmplncErrHwAg_HwDeg_T_u1p15;
    
    VAR(sint16, AUTOMATIC)  HwTq_HwNwtMtr_T_s4p11;        
    VAR(sint16, AUTOMATIC)  MotTqCmdCrf_MotNwtMtr_T_s4p11;

    VAR(sint32, AUTOMATIC)  CmplncErrHwAg_HwDeg_T_s5p26;
    VAR(sint32, AUTOMATIC)  CmplncErrMotAg_HwDeg_T_s12p19;

	/*** Read inputs from RTE ***/ 
    /* REQ: SF041A #65 I */
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	/* REQ: SF041A #63 I */
    (void)Rte_Read_MotTqCmdCrf_Val(&MotTqCmdCrf_MotNwtMtr_T_f32);

	/*** Start of Compliance Error Calculation ***/
	/* REQ: SF041A #63 I */
	MotTqCmdCrf_MotNwtMtr_T_s4p11   	= FloatToFixd_s16_f32(MotTqCmdCrf_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP11_ULS_F32);
    
	MotTqCmdCrf_MotNwtMtr_T_u5p11     	= Abslt_u16_s16(MotTqCmdCrf_MotNwtMtr_T_s4p11);
    
	
	/* REQ: SF041A #36 I */	/* REQ: SF041A #40 I */	/* REQ: SF041A #54 I */	/* REQ: SF041A #56 I */	/* REQ: SF041A #57 I */
	CmplncErrMotAg_HwDeg_T_u8p8   		= LnrIntrpn_u16_u16VariXu16VariY(PrmCmplncErrMotAgNonLinCmplncIndTblX,
																		 PrmCmplncErrMotAgNonLinCmplncDepTblY,
																		 (uint16)TblSize_m(PrmCmplncErrMotAgNonLinCmplncIndTblX),
																		 MotTqCmdCrf_MotNwtMtr_T_u5p11);
																				  
	/* REQ: SF041A #35 I */
	CmplncErrMotAg_HwDeg_T_s12p19		= (sint32)CmplncErrMotAg_HwDeg_T_u8p8 * (sint32)MotTqCmdCrf_MotNwtMtr_T_s4p11;
	
	CmplncErrMotToPinion_HwDeg_T_f32	= FixdToFloat_f32_s32(CmplncErrMotAg_HwDeg_T_s12p19, NXTRFIXDPT_P19TOFLOAT_ULS_F32);
    
	/* REQ: SF041A #65 I */
	HwTq_HwNwtMtr_T_s4p11   			= FloatToFixd_s16_f32(HwTq_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP11_ULS_F32);    
    
	HwTq_HwNwtMtr_T_u5p11     			= Abslt_u16_s16(HwTq_HwNwtMtr_T_s4p11);
    
	/* REQ: SF041A #49 I */	/* REQ: SF041A #53 I */	/* REQ: SF041A #62 I */	
	CmplncErrHwAg_HwDeg_T_u1p15			= LnrIntrpn_u16_u16VariXu16VariY(PrmCmplncErrHwAgNonLinCmplncIndTblX,
																		 PrmCmplncErrHwAgNonLinCmplncDepTblY,
																		 (uint16)TblSize_m(PrmCmplncErrHwAgNonLinCmplncIndTblX),
																		 HwTq_HwNwtMtr_T_u5p11);
																		 
	/* REQ: SF041A #38 I */
	CmplncErrHwAg_HwDeg_T_s5p26			= (sint32)CmplncErrHwAg_HwDeg_T_u1p15 * (sint32)HwTq_HwNwtMtr_T_s4p11;
	
	CmplncErrPinionToHw_HwDeg_T_f32 	= FixdToFloat_f32_s32(CmplncErrHwAg_HwDeg_T_s5p26, NXTRFIXDPT_P26TOFLOAT_ULS_F32);
    
	/*** Range Limit and Write outputs to RTE ***/
	/* REQ: SF041A #39 I */	/* REQ: SF041A #41 I */	/* REQ: SF041A #47 I */	/* REQ: SF041A #42 I */	/* REQ: SF041A #52 I */	/* REQ: SF041A #64 I */
    (void)Rte_Write_CmplncErrMotToPinion_Val(Lim_f32(CmplncErrMotToPinion_HwDeg_T_f32, CMPLNCERRMOTTOPINIONMIN_HWDEG_F32, CMPLNCERRMOTTOPINIONMAX_HWDEG_F32));
    /* REQ: SF041A #39 I */	/* REQ: SF041A #41 I */	/* REQ: SF041A #48 I */	/* REQ: SF041A #42 I */	/* REQ: SF041A #51 I */	/* REQ: SF041A #66 I */
	(void)Rte_Write_CmplncErrPinionToHw_Val(Lim_f32(CmplncErrPinionToHw_HwDeg_T_f32, CMPLNCERRPINIONTOHWMIN_HWDEG_F32, CMPLNCERRPINIONTOHWMAX_HWDEG_F32));
    
	/*** End of Compliance Error Calculation ***/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CmplncErr_STOP_SEC_CODE
#include "CmplncErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
