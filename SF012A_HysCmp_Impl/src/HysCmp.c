/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HysCmp.c
 *     SW-C Type:  HysCmp
 *  Generated at:  Wed Jan  4 11:30:41 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HysCmp>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: HysCmp.c
* Module Description: Implementation of HysCmp FDD SF012A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           4 %
* %derived_by:        nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/21/15  1        SB       Initial Version                                                                   EA4#944
* 10/14/15  2        NS       Fixed LPF being updated in ELSE block & incorrect HysCmpCmd output limiting       EA4#1984
* 10/29/15  3        NS       Fixed incorrect table being used in bilinear interpolation                        EA4#2337
* 01/04/17  4        ML       Updated to Design vers. 1.2.0											   EA4#8109/EA4#8871
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
  s14p1
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  u2p14
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u4p12
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

  u9p7
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_HysCmp.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "ArchGlbPrm.h"
 #include "SysGlbPrm.h"
 #include "FltInj.h"
 #include "NxtrFil.h" 
 #include "NxtrMath.h"
 #include "NxtrIntrpn.h"
 #include "NxtrFixdPt.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */  
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

 #define  	EPSILON_ULS_F32							0.000000119209F
 #define  	HYSRISEYLIM_ULS_F32						1.0F 
 #define  	HYSSATNLOWLIM_HWNWTMTR_F32				0.0F 
 #define   	PrmHysCmpEffLossY_u4p12					(*(const Ary1D_u4p12_12 *)(Rte_Prm_HysCmpEffLossY_Ary1D()))
 #define   	PrmHysCmpEffOffsY_u9p7	    			(*(const Ary1D_u9p7_12 *)(Rte_Prm_HysCmpEffOffsY_Ary1D()))
 #define   	PrmHysCmpFricTScaX_s14p1             	(*(const Ary1D_s14p1_8 *)(Rte_Prm_HysCmpFricTScaX_Ary1D()))
 #define   	PrmHysCmpFricTScaY_u9p7               	(*(const Ary1D_u9p7_8 *)(Rte_Prm_HysCmpFricTScaY_Ary1D()))
 #define   	PrmHysCmpFricWhlImbRejctnBlndX_u8p8   	(*(const Ary1D_u8p8_6 *)(Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D()))
 #define   	PrmHysCmpFricWhlImbRejctnBlndY_u2p14   	(*(const Ary1D_u2p14_6 *)(Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D()))
 #define   	PrmHysCmpFricWhlImbRejctnOffY_u9p7    	(*(const Ary1D_u9p7_12 *)(Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D()))
 #define   	PrmHysCmpFricWhlImbRejctnOnY_u9p7     	(*(const Ary1D_u9p7_12 *)(Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D()))
 #define   	PrmHysCmpHwTqScaX_u4p12                	(*(const Ary2D_u4p12_12_8 *)(Rte_Prm_HysCmpHwTqScaX_Ary2D()))
 #define   	PrmHysCmpHwTqScaY_u4p12                	(*(const Ary2D_u4p12_12_8 *)(Rte_Prm_HysCmpHwTqScaY_Ary2D()))
 #define   	PrmHysCmpHysSatnY_u9p7                	(*(const Ary1D_u9p7_12 *)(Rte_Prm_HysCmpHysSatnY_Ary1D()))
 #define   	PrmHysCmpNegHysCmpScaX_u9p7           	(*(const Ary1D_u9p7_5 *)(Rte_Prm_HysCmpNegHysCmpScaX_Ary1D()))
 #define   	PrmHysCmpNegHysCmpScaY_u2p14           	(*(const Ary1D_u2p14_5 *)(Rte_Prm_HysCmpNegHysCmpScaY_Ary1D()))
 #define   	PrmHysCmpNegHysCmpX_u8p8              	(*(const Ary1D_u8p8_8 *)(Rte_Prm_HysCmpNegHysCmpX_Ary1D()))
 #define   	PrmHysCmpNegHysCmpY_u9p7              	(*(const Ary1D_u9p7_8 *)(Rte_Prm_HysCmpNegHysCmpY_Ary1D()))
 #define   	PrmHysCmpRiseX_u2p14                  	(*(const Ary1D_u2p14_6 *)(Rte_Prm_HysCmpRiseX_Ary1D()))
 #define   	PrmHysCmpRiseY_u2p14                  	(*(const Ary1D_u2p14_6 *)(Rte_Prm_HysCmpRiseY_Ary1D()))
 #define   	PrmSysGlbPrmVehSpdBilnrSeln_u9p7      	(*(const Ary1D_u9p7_12 *)(Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D()))
 
 static FUNC(float32, HysCmp_CODE) MoreCmp(float32 TqChg_HwNwtMtr_T_f32,
												 CONSTP2CONST(float32, AUTOMATIC, HysCmp_CONST) RiseXPtr_HwNwtMtr_T_f32,
												 CONSTP2VAR(float32, AUTOMATIC, HysCmp_CONST)RiseXFac_HwNwtMtr_T_f32);
static FUNC(float32, HysCmp_CODE) LessCmp(float32 TqChg_HwNwtMtr_T_f32, 
											CONSTP2CONST(float32, AUTOMATIC, HysCmp_CONST) RiseYPtr_Uls_T_f32, 
											CONSTP2VAR(float32, AUTOMATIC, HysCmp_CONST)RiseXFac_HwNwtMtr_T_f32);												  
 static FUNC(float32, HysCmp_CODE) CalcAvlCmp(float32 HwTqFildVal_HwNwtMtr_T_f32, 
											  float32 AssiCmdFildVal_HwNwtMtr_T_f32);
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
 * s14p1: Integer in interval [-32768...32767]
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_s14p1_8: Array with 8 element(s) of type s14p1
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u2p14_6: Array with 6 element(s) of type u2p14
 * Ary1D_u4p12_12: Array with 12 element(s) of type u4p12
 * Ary1D_u4p12_8: Array with 8 element(s) of type u4p12
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 * Ary1D_u8p8_8: Array with 8 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 * Ary1D_u9p7_8: Array with 8 element(s) of type u9p7
 * Ary2D_u4p12_12_8: Array with 12 element(s) of type Ary1D_u4p12_8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevAssiCmdFildVal(void)
 *   float32 *Rte_Pim_PrevHwTqFildVal(void)
 *   float32 *Rte_Pim_PrevRiseX(void)
 *   float32 *Rte_Pim_PrevRiseY(void)
 *   float32 *Rte_Pim_dHysCmpAssiCmdFild(void)
 *   float32 *Rte_Pim_dHysCmpAvl(void)
 *   float32 *Rte_Pim_dHysCmpEffCmpTq(void)
 *   float32 *Rte_Pim_dHysCmpFric(void)
 *   float32 *Rte_Pim_dHysCmpHwTqFild(void)
 *   float32 *Rte_Pim_dHysCmpNegAvl(void)
 *   float32 *Rte_Pim_dHysCmpPosAvl(void)
 *   float32 *Rte_Pim_dHysCmpRawVal(void)
 *   float32 *Rte_Pim_dHysCmpRiseYFac(void)
 *   FilLpRec1 *Rte_Pim_AssiCmdLpFil(void)
 *   FilLpRec1 *Rte_Pim_FinalOutpLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HysCmpAssiCmdLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpFinalOutpLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpOutpLim_Val(void)
 *   float32 Rte_Prm_HysCmpRevGain_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   u9p7 Rte_Prm_HysCmpAssiInpLim_Val(void)
 *   u4p12 *Rte_Prm_HysCmpEffLossY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpEffOffsY_Ary1D(void)
 *   s14p1 *Rte_Prm_HysCmpFricTScaX_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpFricTScaY_Ary1D(void)
 *   u8p8 *Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
 *   u4p12 *Rte_Prm_HysCmpHwTqScaX_Ary2D(void)
 *   u4p12 *Rte_Prm_HysCmpHwTqScaY_Ary2D(void)
 *   u9p7 *Rte_Prm_HysCmpHysSatnY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(void)
 *   u8p8 *Rte_Prm_HysCmpNegHysCmpX_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpNegHysCmpY_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpRiseX_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpRiseY_Ary1D(void)
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


#define HysCmp_START_SEC_CODE
#include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HysCmpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, HysCmp_CODE) HysCmpInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HysCmpInit1
 *********************************************************************************************************************/
	 /** Initialize Low pass filter **/
	 /* HysCmpAssiCmd LPF Init */
	 FilLpInit(0.0F, Rte_Prm_HysCmpAssiCmdLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_AssiCmdLpFil());		 
	 /* HysCmpHwTq LPF Init  */
	 FilLpInit(0.0F, Rte_Prm_HysCmpHwTqLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqLpFil());				
	 /* HysCmpFinalOutp LPF Init  */
	 FilLpInit(0.0F, Rte_Prm_HysCmpFinalOutpLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_FinalOutpLpFil());	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HysCmpPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HysCmpCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysFricOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HysCmpCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, HysCmp_CODE) HysCmpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HysCmpPer1
 *********************************************************************************************************************/
 
	 VAR(float32, AUTOMATIC) AssiCmdBas_MotNwtMtr_T_f32;	 
	 VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;	 	 
	 VAR(float32, AUTOMATIC) AssiCmdFilInp_HwNwtMtr_T_f32;	
	 VAR(float32, AUTOMATIC) AssiCmdFildVal_HwNwtMtr_T_f32;	
	 VAR(float32, AUTOMATIC) HwTqFildVal_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) TqChg_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) RiseXFac_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) RiseY_Uls_T_f32;
	 VAR(float32, AUTOMATIC) HwTqOvrl_HwNwtMtr_T_f32;
	 
	 VAR(float32, AUTOMATIC) RawHysCmp_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) HysCmp_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) CalcHysCmp_MotNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) HysCmpAvl_HwNwtMtr_T_f32;
	 
 	 VAR(float32, AUTOMATIC) HysCmpCmd_MotNwtMtr_T_f32;
	 VAR(boolean, AUTOMATIC) HysCmpCmdDi_Cnt_T_lgc;	 	 	
	 	 
	 /* Read Inputs */
	 (void) Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	 (void) Rte_Read_AssiCmdBas_Val(&AssiCmdBas_MotNwtMtr_T_f32);	 	 
	 (void) Rte_Read_HysCmpCmdDi_Logl(&HysCmpCmdDi_Cnt_T_lgc);
	 (void) Rte_Read_HwTqOvrl_Val(&HwTqOvrl_HwNwtMtr_T_f32);
	
     /** Filter and Limit Inputs FilAndLimInp Block **/	
	 /* Determine HwTq and AssiCmd Filtered values */
	 AssiCmdFilInp_HwNwtMtr_T_f32 = AssiCmdBas_MotNwtMtr_T_f32 * Rte_Prm_SysGlbPrmSysTqRat_Val();
	 AssiCmdFildVal_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(AssiCmdFilInp_HwNwtMtr_T_f32, Rte_Pim_AssiCmdLpFil());	 
	 HwTqFildVal_HwNwtMtr_T_f32 = FilLpUpdOutp_f32((HwTq_HwNwtMtr_T_f32 + HwTqOvrl_HwNwtMtr_T_f32), Rte_Pim_HwTqLpFil());	 
	 
	 if(Abslt_f32_f32(AssiCmdFildVal_HwNwtMtr_T_f32) > FixdToFloat_f32_u16(Rte_Prm_HysCmpAssiInpLim_Val(), NXTRFIXDPT_P7TOFLOAT_ULS_F32))
	 {
		 HwTqFildVal_HwNwtMtr_T_f32 = *Rte_Pim_PrevHwTqFildVal();
		 AssiCmdFildVal_HwNwtMtr_T_f32 = *Rte_Pim_PrevAssiCmdFildVal();		 		
	 }	
	 /* Torque Diff */	
	 TqChg_HwNwtMtr_T_f32 = HwTqFildVal_HwNwtMtr_T_f32 - *Rte_Pim_PrevHwTqFildVal();	 
	 
	 /** Determine Rise Factor CalcRiseFac Block **/
	 /* No Change - no change in handwheel torque (do nothing) */
	 if(Abslt_f32_f32(TqChg_HwNwtMtr_T_f32) < EPSILON_ULS_F32)
	 {
		 RiseXFac_HwNwtMtr_T_f32 = *Rte_Pim_PrevRiseX();
		 RiseY_Uls_T_f32 = *Rte_Pim_PrevRiseY();  
	 }	 
	 /* More Compensation - greater hys cmp magnitude */
	 else if(Sign_s08_f32(TqChg_HwNwtMtr_T_f32) == Sign_s08_f32(*Rte_Pim_PrevRiseY()))
	 {
		 RiseY_Uls_T_f32 = MoreCmp(TqChg_HwNwtMtr_T_f32, Rte_Pim_PrevRiseX(), &RiseXFac_HwNwtMtr_T_f32);
	 }
	 /* Less Compensation - less hys cmp magnitude */
	 else
	 {
		 RiseY_Uls_T_f32 = LessCmp(TqChg_HwNwtMtr_T_f32, Rte_Pim_PrevRiseY(), &RiseXFac_HwNwtMtr_T_f32);
	 }		
	 
	 *Rte_Pim_PrevRiseX() = Lim_f32(RiseXFac_HwNwtMtr_T_f32,
								    -(FixdToFloat_f32_u16((PrmHysCmpRiseX_u2p14[(uint16)TblSize_m(PrmHysCmpRiseX_u2p14)-1U]),NXTRFIXDPT_P14TOFLOAT_ULS_F32)),
								     (FixdToFloat_f32_u16((PrmHysCmpRiseX_u2p14[(uint16)TblSize_m(PrmHysCmpRiseX_u2p14)-1U]),NXTRFIXDPT_P14TOFLOAT_ULS_F32)));
	 RiseY_Uls_T_f32 = Lim_f32(RiseY_Uls_T_f32, -HYSRISEYLIM_ULS_F32, HYSRISEYLIM_ULS_F32);
	 
     /** Determine Available Compensation CalcAvlCmp Block **/ 	 
	 HysCmpAvl_HwNwtMtr_T_f32 = CalcAvlCmp(HwTqFildVal_HwNwtMtr_T_f32, AssiCmdFildVal_HwNwtMtr_T_f32);
	 RawHysCmp_HwNwtMtr_T_f32 = HysCmpAvl_HwNwtMtr_T_f32 * RiseY_Uls_T_f32; 
	 /* Update Display Variable */
	 *Rte_Pim_dHysCmpRawVal() = RawHysCmp_HwNwtMtr_T_f32;	
	
     /** Filter HysCmp Output FilHysCmpOutp Block **/	

     HysCmp_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(RawHysCmp_HwNwtMtr_T_f32, Rte_Pim_FinalOutpLpFil());
	 
	 /* Switch */
	 if (FALSE != HysCmpCmdDi_Cnt_T_lgc)
	 {
		 CalcHysCmp_MotNwtMtr_T_f32 = 0.0F;
	 }
	 else 
	 {
		 /* 1LP1-B Filter1 */
		 HysCmp_HwNwtMtr_T_f32 = Lim_f32(HysCmp_HwNwtMtr_T_f32, -Rte_Prm_HysCmpOutpLim_Val(), Rte_Prm_HysCmpOutpLim_Val());	
		 /* HW2Motor */
		 CalcHysCmp_MotNwtMtr_T_f32 = HysCmp_HwNwtMtr_T_f32 / Rte_Prm_SysGlbPrmSysTqRat_Val();
	 }

	 /* Output Limiting */                                             
	 HysCmpCmd_MotNwtMtr_T_f32 = Lim_f32(CalcHysCmp_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);

	 /* Fault Injection Point */
	 #if(STD_ON == FLTINJENA)
	 Rte_Call_FltInj_f32_Oper(&HysCmpCmd_MotNwtMtr_T_f32,FLTINJ_HYSCMP_HYSCMPCMD);
	 #endif
	 /* Update PIM previous Variables */	
	 *Rte_Pim_PrevHwTqFildVal() = HwTqFildVal_HwNwtMtr_T_f32;
	 *Rte_Pim_PrevAssiCmdFildVal() = AssiCmdFildVal_HwNwtMtr_T_f32;	
	 /* Update Display Variables */
	 *Rte_Pim_dHysCmpHwTqFild()		= HwTqFildVal_HwNwtMtr_T_f32;
	 *Rte_Pim_dHysCmpAssiCmdFild() 	= AssiCmdFildVal_HwNwtMtr_T_f32;		 	 
	 *Rte_Pim_dHysCmpRiseYFac() 	= RiseY_Uls_T_f32;
	 *Rte_Pim_PrevRiseY() = RiseY_Uls_T_f32;	 
	 
	 /* Write Output */
	 (void) Rte_Write_HysCmpCmd_Val(HysCmpCmd_MotNwtMtr_T_f32);		

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HysCmp_STOP_SEC_CODE
#include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Function:    MoreCmp
 * Description: More Compensation     - greater hys comp magnitude
 * Inputs:      TqChg_HwNwtMtr_T_f32, *RiseXPtr_HwNwtMtr_T_f32, *RiseXFac_HwNwtMtr_T_f32 
 * Outputs:     RiseY_Uls_T_f32 
 **********************************************************************************************************************/ 
 static FUNC(float32, HysCmp_CODE) MoreCmp(float32 TqChg_HwNwtMtr_T_f32,
												 CONSTP2CONST(float32, AUTOMATIC, HysCmp_CONST) RiseXPtr_HwNwtMtr_T_f32,
												 CONSTP2VAR(float32, AUTOMATIC, HysCmp_CONST)RiseXFac_HwNwtMtr_T_f32)
{
	 VAR(float32, AUTOMATIC) RiseX_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) RiseY_Uls_T_f32;
	 VAR(uint16, AUTOMATIC) AbsltRiseX_HwNwtMtr_T_u2p14;	 
	 VAR(uint16, AUTOMATIC) RiseY_Uls_T_u2p14;	 

	 RiseX_HwNwtMtr_T_f32 = TqChg_HwNwtMtr_T_f32 + *RiseXPtr_HwNwtMtr_T_f32;
	 RiseX_HwNwtMtr_T_f32 = Lim_f32(RiseX_HwNwtMtr_T_f32,
								   -(FixdToFloat_f32_u16((PrmHysCmpRiseX_u2p14[(uint16)TblSize_m(PrmHysCmpRiseX_u2p14)-1U]), NXTRFIXDPT_P14TOFLOAT_ULS_F32)),
								    (FixdToFloat_f32_u16((PrmHysCmpRiseX_u2p14[(uint16)TblSize_m(PrmHysCmpRiseX_u2p14)-1U]), NXTRFIXDPT_P14TOFLOAT_ULS_F32)));
	 AbsltRiseX_HwNwtMtr_T_u2p14 = FloatToFixd_u16_f32(Abslt_f32_f32(RiseX_HwNwtMtr_T_f32), NXTRFIXDPT_FLOATTOP14_ULS_F32);
	 RiseY_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmHysCmpRiseX_u2p14,
													   PrmHysCmpRiseY_u2p14,
													   (uint16)TblSize_m(PrmHysCmpRiseX_u2p14),
													   AbsltRiseX_HwNwtMtr_T_u2p14);
	 RiseY_Uls_T_f32 = FixdToFloat_f32_u16(RiseY_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	 RiseY_Uls_T_f32 = RiseY_Uls_T_f32 * (float32)Sign_s08_f32(RiseX_HwNwtMtr_T_f32);
	 /* Write Determined RiseX to passed buffer location and return Rise Y */
	 *RiseXFac_HwNwtMtr_T_f32 = RiseX_HwNwtMtr_T_f32;
	 return(RiseY_Uls_T_f32);
}
/**********************************************************************************************************************
 * Function:    LessCmp
 * Description: "Partial Reversal" means driver is changing directions and Hysteresis Comp is reducing its magnitude 
				toward zero (nominal assist).  When function crosses zero, Hysteresis Comp calls this a "Full Reversal".  
				Once Full Reversal is reached, the next calculation loop will branch to the "More Compensation" block 
				rather than the "Less Compensation" block.
 * Inputs:      TqChg_HwNwtMtr_T_f32, *RiseYPtr_Uls_T_f32, *RiseXFac_HwNwtMtr_T_f32 
 * Outputs:     RiseY_Uls_T_f32 
 **********************************************************************************************************************/
static FUNC(float32, HysCmp_CODE) LessCmp(float32 TqChg_HwNwtMtr_T_f32, 
											CONSTP2CONST(float32, AUTOMATIC, HysCmp_CONST) RiseYPtr_Uls_T_f32, 
											CONSTP2VAR(float32, AUTOMATIC, HysCmp_CONST)RiseXFac_HwNwtMtr_T_f32)
{
	 VAR(float32, AUTOMATIC) MdfTqChg_Uls_T_f32;
	 VAR(float32, AUTOMATIC) RiseY_Uls_T_f32; 
	 VAR(float32, AUTOMATIC) RiseX_HwNwtMtr_T_f32;
	 VAR(uint16, AUTOMATIC) RiseY_Uls_T_u2p14;
	 VAR(uint16, AUTOMATIC) RiseX_HwNwtMtr_T_u2p14;	 
	 VAR(uint16, AUTOMATIC) AbsltRiseY_Uls_T_u2p14;
	 VAR(uint16, AUTOMATIC) AbsltRiseX_HwNwtMtr_T_u2p14;

	 MdfTqChg_Uls_T_f32 =  TqChg_HwNwtMtr_T_f32 * Rte_Prm_HysCmpRevGain_Val();
	
	 if(Abslt_f32_f32(MdfTqChg_Uls_T_f32) < Abslt_f32_f32(*RiseYPtr_Uls_T_f32))
	 {
		 /* Partial Reversal - toward zero magnitude*/
		 RiseY_Uls_T_f32 = *RiseYPtr_Uls_T_f32 + MdfTqChg_Uls_T_f32;
		 RiseY_Uls_T_f32 = Lim_f32(RiseY_Uls_T_f32,
								   -(FixdToFloat_f32_u16((PrmHysCmpRiseY_u2p14[(uint16)TblSize_m(PrmHysCmpRiseY_u2p14) - 1U]), NXTRFIXDPT_P14TOFLOAT_ULS_F32)),
								   (FixdToFloat_f32_u16((PrmHysCmpRiseY_u2p14[(uint16)TblSize_m(PrmHysCmpRiseY_u2p14) - 1U]), NXTRFIXDPT_P14TOFLOAT_ULS_F32)));
		 AbsltRiseY_Uls_T_u2p14 = (FloatToFixd_u16_f32(Abslt_f32_f32(RiseY_Uls_T_f32), NXTRFIXDPT_FLOATTOP14_ULS_F32));

		 /* Note : To determine Rise X, the Xtable is to be fed with HysCmpRiseY cal 
					and Ytable input with HysCmpRiseX cal in HysRistTbl interpolation block */
		 RiseX_HwNwtMtr_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmHysCmpRiseY_u2p14,
															PrmHysCmpRiseX_u2p14,
															(uint16)TblSize_m(PrmHysCmpRiseY_u2p14),
															AbsltRiseY_Uls_T_u2p14);																
		 RiseX_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(RiseX_HwNwtMtr_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);		
		 RiseX_HwNwtMtr_T_f32 = RiseX_HwNwtMtr_T_f32 * (float32)Sign_s08_f32(RiseY_Uls_T_f32);		
	 }
	 else
	 {
		/* Full Reversal - zero crossing*/
		 RiseX_HwNwtMtr_T_f32 = (*RiseYPtr_Uls_T_f32 / Rte_Prm_HysCmpRevGain_Val()) + TqChg_HwNwtMtr_T_f32;		
		 RiseX_HwNwtMtr_T_f32 = Lim_f32(RiseX_HwNwtMtr_T_f32,
										-(FixdToFloat_f32_u16((PrmHysCmpRiseX_u2p14[(uint16)TblSize_m(PrmHysCmpRiseX_u2p14) - 1U]), NXTRFIXDPT_P14TOFLOAT_ULS_F32 )),
									     (FixdToFloat_f32_u16((PrmHysCmpRiseX_u2p14[(uint16)TblSize_m(PrmHysCmpRiseX_u2p14) - 1U]), NXTRFIXDPT_P14TOFLOAT_ULS_F32)));
		 AbsltRiseX_HwNwtMtr_T_u2p14 = FloatToFixd_u16_f32(Abslt_f32_f32(RiseX_HwNwtMtr_T_f32), NXTRFIXDPT_FLOATTOP14_ULS_F32);
		 RiseY_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmHysCmpRiseX_u2p14,
															PrmHysCmpRiseY_u2p14,
															(uint16)TblSize_m(PrmHysCmpRiseX_u2p14),
															AbsltRiseX_HwNwtMtr_T_u2p14);
     	 RiseY_Uls_T_f32 = FixdToFloat_f32_u16(RiseY_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
		 RiseY_Uls_T_f32 = RiseY_Uls_T_f32 * (float32)Sign_s08_f32(RiseX_HwNwtMtr_T_f32);		
	 }	
	 /* Write RiseX to passed buffer location and return Rise Y*/
	 *RiseXFac_HwNwtMtr_T_f32 = RiseX_HwNwtMtr_T_f32;
	 return(RiseY_Uls_T_f32);
}
/**********************************************************************************************************************
 * Function:    CalcAvlCmp
 * Description: This subroutine Determines the total amount of hysteresis compensation available under current 
				operating conditions. A different subroutine will determine what fraction of the total to apply.
 * Inputs:      HwTqFildVal_HwNwtMtr_T_f32, AssiCmdFildVal_HwNwtMtr_T_f32 
 * Outputs:     HysCmpAvl_HwNwtMtr_T_f32 
 **********************************************************************************************************************/

static FUNC(float32, HysCmp_CODE) CalcAvlCmp(float32 HwTqFildVal_HwNwtMtr_T_f32, 
											 float32 AssiCmdFildVal_HwNwtMtr_T_f32)
{
	 VAR(float32, AUTOMATIC) AbsltCombdTq_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;	
	 VAR(float32, AUTOMATIC) EffOffs_HwNwtMtr_T_f32;	 
	 VAR(float32, AUTOMATIC) HysTrq_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) EffLossCalc_Uls_T_f32;
	 VAR(float32, AUTOMATIC) HysCmpEffCmpTq_HwNwtMtr_T_f32;	 
	 VAR(float32, AUTOMATIC) WhlImbRejctnOffFric_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) WhlImbRejctnOnFric_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) WhlImbRejctnAmp_MotNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) WhlImbRejctnCmdBlndFac_Uls_T_f32;
	 VAR(float32, AUTOMATIC) WhlImbRejctnFric_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) AssiMechT_DegCgrd_T_f32;
	 VAR(float32, AUTOMATIC) TempScale_HwNwtMtr_T_f32;  
	 VAR(float32, AUTOMATIC) CoulombFric_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) SysFricOffs_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) HysTqNotLimd_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) HysSat_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) HysTq_HwNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) HwTrqSca_Uls_T_f32;	 
	 VAR(float32, AUTOMATIC) HysCmpPosAvl_HwNwtMtr_T_f32; 
	 VAR(float32, AUTOMATIC) NegHysCmpSca_Uls_T_f32; 
	 VAR(float32, AUTOMATIC) NegHysCmp_HwNwtMtr_T_f32; 
	 VAR(float32, AUTOMATIC) HysNegBlndCmp_HwNwtMtr_T_f32;	 	 
	 VAR(float32, AUTOMATIC) HysCmpAvl_HwNwtMtr_T_f32;
	 VAR(uint16, AUTOMATIC) EffOffs_Uls_T_u9p7;	
	 VAR(uint16, AUTOMATIC) EffLossCalc_Uls_T_u4p12;
	 VAR(uint16, AUTOMATIC) WhlImbRejctnOffFric_HwNwtMtr_T_u9p7;
	 VAR(uint16, AUTOMATIC) WhlImbRejctnOnFric_HwNwtMtr_T_u9p7;
	 VAR(uint16, AUTOMATIC) WhlImbRejctnAmp_MotNwtMtr_T_u8p8;
	 VAR(uint16, AUTOMATIC) WhlImbRejctnCmdBlndFac_Uls_T_u2p14;
	 VAR(uint16, AUTOMATIC) TempScale_HwNwtMtr_T_u9p7;
	 VAR(uint16, AUTOMATIC) HysSat_HwNwtMtr_T_u9p7;
	 VAR(uint16, AUTOMATIC) AbsltHwTrqFilt_HwNm_T_u4p12;
	 VAR(uint16, AUTOMATIC) HwTrqSca_Uls_T_u4p12;
	 VAR(uint16, AUTOMATIC) AbsltAssiCmdFildVal_HwNwtMtr_T_u9p7;
	 VAR(uint16, AUTOMATIC) NegHysCmpSca_Uls_T_u2p14;
	 VAR(uint16, AUTOMATIC) NegHysCmp_HwNwtMtr_T_u9p7;
	 VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;	 
	 VAR(sint16, AUTOMATIC) AssistMechTempEst_DegC_T_s14p1;	 	 
	 
	 /* Read Module Inputs */
	 (void) Rte_Read_WhlImbRejctnAmp_Val(&WhlImbRejctnAmp_MotNwtMtr_T_f32);	
	 (void) Rte_Read_AssiMechT_Val(&AssiMechT_DegCgrd_T_f32);
	 (void) Rte_Read_SysFricOffs_Val(&SysFricOffs_HwNwtMtr_T_f32);
	 (void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);	 
	
	 VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	 AbsltCombdTq_HwNwtMtr_T_f32 = Abslt_f32_f32(HwTqFildVal_HwNwtMtr_T_f32 + AssiCmdFildVal_HwNwtMtr_T_f32);
	 /* Determine Efficiency Offset */
	 EffOffs_Uls_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln_u9p7, 
														PrmHysCmpEffOffsY_u9p7, 
														(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7), 
														VehSpd_Kph_T_u9p7);
	 EffOffs_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(EffOffs_Uls_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	 HysTrq_HwNwtMtr_T_f32 = Max_f32((AbsltCombdTq_HwNwtMtr_T_f32 - EffOffs_HwNwtMtr_T_f32), 0.0F);
	 /* Determine Efficiency Loss */
	 EffLossCalc_Uls_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln_u9p7, 
														PrmHysCmpEffLossY_u4p12, 
														(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7), 
														VehSpd_Kph_T_u9p7);
	 EffLossCalc_Uls_T_f32	= FixdToFloat_f32_u16(EffLossCalc_Uls_T_u4p12, 	NXTRFIXDPT_P12TOFLOAT_ULS_F32);		
	 /* Efficiency Compensation Torque */
	 HysCmpEffCmpTq_HwNwtMtr_T_f32 = HysTrq_HwNwtMtr_T_f32 * EffLossCalc_Uls_T_f32;	
	 /* Update Display Variable */
	 *Rte_Pim_dHysCmpEffCmpTq() = HysCmpEffCmpTq_HwNwtMtr_T_f32;	

	 /*Coulomb Friction */
	 WhlImbRejctnOffFric_HwNwtMtr_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln_u9p7, 
																		  PrmHysCmpFricWhlImbRejctnOffY_u9p7, 
																		  (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7), 
																		  VehSpd_Kph_T_u9p7);
	 WhlImbRejctnOffFric_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(WhlImbRejctnOffFric_HwNwtMtr_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);															
	 WhlImbRejctnOnFric_HwNwtMtr_T_u9p7  = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln_u9p7, 
																		 PrmHysCmpFricWhlImbRejctnOnY_u9p7, 
																		 (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7), 
																		 VehSpd_Kph_T_u9p7);
	 WhlImbRejctnOnFric_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(WhlImbRejctnOnFric_HwNwtMtr_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	 WhlImbRejctnAmp_MotNwtMtr_T_u8p8 = FloatToFixd_u16_f32(WhlImbRejctnAmp_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);	 	 
	 WhlImbRejctnCmdBlndFac_Uls_T_u2p14  = LnrIntrpn_u16_u16VariXu16VariY(PrmHysCmpFricWhlImbRejctnBlndX_u8p8, 
																		  PrmHysCmpFricWhlImbRejctnBlndY_u2p14, 
																		  (uint16)TblSize_m(PrmHysCmpFricWhlImbRejctnBlndX_u8p8),
																		  WhlImbRejctnAmp_MotNwtMtr_T_u8p8);
	 WhlImbRejctnCmdBlndFac_Uls_T_f32 = FixdToFloat_f32_u16(WhlImbRejctnCmdBlndFac_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	 WhlImbRejctnFric_HwNwtMtr_T_f32 = Blnd_f32(WhlImbRejctnOffFric_HwNwtMtr_T_f32, WhlImbRejctnOnFric_HwNwtMtr_T_f32,WhlImbRejctnCmdBlndFac_Uls_T_f32);	
	 AssistMechTempEst_DegC_T_s14p1 = FloatToFixd_s16_f32(AssiMechT_DegCgrd_T_f32, NXTRFIXDPT_FLOATTOP1_ULS_F32);
	 TempScale_HwNwtMtr_T_u9p7  = LnrIntrpn_u16_s16VariXu16VariY(PrmHysCmpFricTScaX_s14p1, 
																 PrmHysCmpFricTScaY_u9p7, 
																 (uint16)TblSize_m(PrmHysCmpFricTScaX_s14p1), 
																 AssistMechTempEst_DegC_T_s14p1);
	 TempScale_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(TempScale_HwNwtMtr_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);															
	 CoulombFric_HwNwtMtr_T_f32 = TempScale_HwNwtMtr_T_f32 * WhlImbRejctnFric_HwNwtMtr_T_f32;    
     CoulombFric_HwNwtMtr_T_f32 = CoulombFric_HwNwtMtr_T_f32 + SysFricOffs_HwNwtMtr_T_f32;
	 /* Update Display Variable */
	 *Rte_Pim_dHysCmpFric() = CoulombFric_HwNwtMtr_T_f32;
	 HysTqNotLimd_HwNwtMtr_T_f32 = CoulombFric_HwNwtMtr_T_f32 + HysCmpEffCmpTq_HwNwtMtr_T_f32; 
	 /* Saturation */
	 HysSat_HwNwtMtr_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln_u9p7, 
															 PrmHysCmpHysSatnY_u9p7, 
															 (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7), 
															 VehSpd_Kph_T_u9p7);
	 HysSat_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(HysSat_HwNwtMtr_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	 /* Baseline Compensation Available (positive value) */
	 HysTq_HwNwtMtr_T_f32 = Lim_f32(HysTqNotLimd_HwNwtMtr_T_f32 , HYSSATNLOWLIM_HWNWTMTR_F32, HysSat_HwNwtMtr_T_f32);
	 
	 /** Modify Baseline Availability **/
	 /*Handwheel trq table*/
	 AbsltHwTrqFilt_HwNm_T_u4p12 = FloatToFixd_u16_f32(Abslt_f32_f32(HwTqFildVal_HwNwtMtr_T_f32), NXTRFIXDPT_FLOATTOP12_ULS_F32);
	 HwTrqSca_Uls_T_u4p12 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
															AbsltHwTrqFilt_HwNm_T_u4p12,
															PrmSysGlbPrmVehSpdBilnrSeln_u9p7, 
															(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7),
															Rte_Prm_HysCmpHwTqScaX_Ary2D(),
															Rte_Prm_HysCmpHwTqScaY_Ary2D(),
															(uint16)TblSize_m(PrmHysCmpHwTqScaX_u4p12[0]));
	 HwTrqSca_Uls_T_f32 = FixdToFloat_f32_u16(HwTrqSca_Uls_T_u4p12, NXTRFIXDPT_P12TOFLOAT_ULS_F32);	
	 HysCmpPosAvl_HwNwtMtr_T_f32 = HwTrqSca_Uls_T_f32 * HysTq_HwNwtMtr_T_f32;
	 /*Update Display Variable */
	 *Rte_Pim_dHysCmpPosAvl() = HysCmpPosAvl_HwNwtMtr_T_f32;	
	 AbsltAssiCmdFildVal_HwNwtMtr_T_u9p7 = FloatToFixd_u16_f32(Abslt_f32_f32(AssiCmdFildVal_HwNwtMtr_T_f32), NXTRFIXDPT_FLOATTOP7_ULS_F32);
	 NegHysCmpSca_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmHysCmpNegHysCmpScaX_u9p7,
															   PrmHysCmpNegHysCmpScaY_u2p14,
															   (uint16)TblSize_m(PrmHysCmpNegHysCmpScaX_u9p7),
															   AbsltAssiCmdFildVal_HwNwtMtr_T_u9p7);
	 NegHysCmpSca_Uls_T_f32 = FixdToFloat_f32_u16(NegHysCmpSca_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);															
	 NegHysCmp_HwNwtMtr_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(PrmHysCmpNegHysCmpX_u8p8,
															    PrmHysCmpNegHysCmpY_u9p7,
															    (uint16)TblSize_m(PrmHysCmpNegHysCmpX_u8p8), 
															    WhlImbRejctnAmp_MotNwtMtr_T_u8p8);
	 NegHysCmp_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(NegHysCmp_HwNwtMtr_T_u9p7,NXTRFIXDPT_P7TOFLOAT_ULS_F32);													
	 HysNegBlndCmp_HwNwtMtr_T_f32 = NegHysCmpSca_Uls_T_f32 * NegHysCmp_HwNwtMtr_T_f32;		
	 /*Update Display Variable */
	 *Rte_Pim_dHysCmpNegAvl() = HysNegBlndCmp_HwNwtMtr_T_f32;
	 /* Total available compensation is positive - negative */
	 HysCmpAvl_HwNwtMtr_T_f32 = HysCmpPosAvl_HwNwtMtr_T_f32 - HysNegBlndCmp_HwNwtMtr_T_f32;	 
	 /*Update Display Variable */
	 *Rte_Pim_dHysCmpAvl() = HysCmpAvl_HwNwtMtr_T_f32;
	 
	 return(HysCmpAvl_HwNwtMtr_T_f32);
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
