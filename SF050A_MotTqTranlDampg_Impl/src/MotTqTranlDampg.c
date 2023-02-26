/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotTqTranlDampg.c
 *     SW-C Type:  MotTqTranlDampg
 *  Generated at:  Mon May  1 10:56:53 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotTqTranlDampg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotTqTranlDampg.c
* Module Description: Implementation Transitional damping - SF050A.
* Project           : CBD 
* Author            : Krishna Anne
***********************************************************************************************************************
* Version Control:
* %version          : 3 %
* %derived_by       : nz4qtt %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                               SCR #
* -------   -------  --------  ----------------------------------------------------------------------------  ---------
* 08/06/15  1        AK & KK   Initial Version                                                                EA4#1093
* 04/05/16  2        KK        Range limited the Outputs                            						  EA4#5116
* 03/22/17  3        KK        Modified logic w.r.t setting StLtchRange, functionally same as prev version 	  EA4#11228
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
  LoaSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  u16p0
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u2p14
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

#include "Rte_MotTqTranlDampg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "SysGlbPrm.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */ 

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define TICNVN_MILLISECPERCNT_F32	(0.1F)
#define RAMPSTRT_ULS_U2P14			( (uint16)(1.0F * NXTRFIXDPT_FLOATTOP14_ULS_F32) )

#define PrmMotTqTranlDampgVehSpdBlndX_u9p7	(*(const Ary1D_u9p7_4 *)	Rte_Prm_MotTqTranlDampgVehSpdBlndX_Ary1D())
#define PrmMotTqTranlDampgVehSpdBlndY_u2p14	(*(const Ary1D_u2p14_4 *)	Rte_Prm_MotTqTranlDampgVehSpdBlndY_Ary1D())

static FUNC(boolean, LoaMgr_CODE) SwOpCtrlPart1(float32 TranlDampgTiElpsd_MilliSec_T_f32, 
												float32 AbslMotVelCrf_MotRadPerSec_T_f32);
												
static FUNC(float32, LoaMgr_CODE) SwOpCtrlPart2(boolean DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl, 
												float32 CtrlDampTrq_MotNwtMtr_T_f32, 
												SysSt1 SysSt_Cnt_T_enum, 
												float32 MotTqCmdCrf_MotNwtMtr_T_f32, 
												boolean MotTqTranlDampgCmpl_Cnt_T_logl);



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
 * u16p0: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Enumeration Types:
 * ==================
 * LoaSt1: Enumeration of integer in interval [0...255] with enumerators
 *   LOAST_NORM (0U)
 *   LOAST_LIMD (1U)
 *   LOAST_SWBASDMTGTN (2U)
 *   LOAST_FADEOUT (3U)
 *   LOAST_CTRLDSHTDWNREQD (4U)
 *   LOAST_IMDTSHTDWNREQD (5U)
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u16p0_2: Array with 2 element(s) of type u16p0
 * Ary1D_u2p14_2: Array with 2 element(s) of type u2p14
 * Ary1D_u2p14_4: Array with 4 element(s) of type u2p14
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotTqTranlDampgCmdCtrld(void)
 *   float32 *Rte_Pim_dMotTqTranlDampgSignPhaSca(void)
 *   float32 *Rte_Pim_dMotTqTranlDampgTiElpd(void)
 *   float32 *Rte_Pim_dMotTqTranlDampgVelDampgCmd(void)
 *   uint32 *Rte_Pim_TmrRefTi(void)
 *   LoaSt1 *Rte_Pim_LoaStPrev(void)
 *   boolean *Rte_Pim_DiagStsPrev(void)
 *   boolean *Rte_Pim_StLtchPrev(void)
 *   boolean *Rte_Pim_dMotTqTranlDampgTmrEna(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotTqTranlDampgCmdLim_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgDampgCoeff_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgTmrPt1_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgTmrPt2_Val(void)
 *   float32 Rte_Prm_MotTqTranlDampgVelThd_Val(void)
 *   u2p14 Rte_Prm_MotTqTranlDampgRampEnd_Val(void)
 *   u9p7 *Rte_Prm_MotTqTranlDampgVehSpdBlndX_Ary1D(void)
 *   u2p14 *Rte_Prm_MotTqTranlDampgVehSpdBlndY_Ary1D(void)
 *
 *********************************************************************************************************************/


#define MotTqTranlDampg_START_SEC_CODE
#include "MotTqTranlDampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotTqTranlDampgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaX(const u16p0 *data)
 *   void Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaY(const u2p14 *data)
 *
 *********************************************************************************************************************/

FUNC(void, MotTqTranlDampg_CODE) MotTqTranlDampgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotTqTranlDampgInit1
 *********************************************************************************************************************/
	
	VAR(Ary1D_u16p0_2, AUTOMATIC)  CtrldDampgScaX_MilliSec_T_u16p0;
	VAR(Ary1D_u2p14_2, AUTOMATIC)  CtrldDampgScaY_Uls_T_u2p14;
		
	CtrldDampgScaX_MilliSec_T_u16p0[0] 	= FloatToFixd_u16_f32(Rte_Prm_MotTqTranlDampgTmrPt1_Val(), NXTRFIXDPT_FLOATTOP0_ULS_F32);
	CtrldDampgScaX_MilliSec_T_u16p0[1] 	= FloatToFixd_u16_f32(Rte_Prm_MotTqTranlDampgTmrPt2_Val(), NXTRFIXDPT_FLOATTOP0_ULS_F32);
		
	CtrldDampgScaY_Uls_T_u2p14[0] 			= RAMPSTRT_ULS_U2P14;
	CtrldDampgScaY_Uls_T_u2p14[1] 			= Rte_Prm_MotTqTranlDampgRampEnd_Val();
		
	Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaX(CtrldDampgScaX_MilliSec_T_u16p0);
	Rte_IrvWrite_MotTqTranlDampgInit1_CtrldDampgScaY(CtrldDampgScaY_Uls_T_u2p14);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotTqTranlDampgPer1
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
 *   Std_ReturnType Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_LoaSt_Val(LoaSt1 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmdCrfDampd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqCmdMrfDampd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqTranlDampgCmpl_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   void Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaX(u16p0 *data)
 *   void Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaY(u2p14 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, MotTqTranlDampg_CODE) MotTqTranlDampgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotTqTranlDampgPer1
 *********************************************************************************************************************/
	VAR(sint8, AUTOMATIC)   AssiMechPolarity_Uls_T_s08;
	VAR(sint8, AUTOMATIC)   MotVelSign_Uls_T_s08;
	VAR(sint8, AUTOMATIC)   HwAgSign_Uls_T_s08;
	
	VAR(boolean, AUTOMATIC) DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) EnableTimer_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MotTqTranlDampgCmpl_Cnt_T_logl;
	
	VAR(LoaSt1, AUTOMATIC)  LoaSt_Cnt_T_enum;
	VAR(SysSt1, AUTOMATIC)  SysSt_Cnt_T_enum;
	
	VAR(uint16, AUTOMATIC)  VehSpd_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC)  PhasePlSwtScale_Uls_T_u2p14;
	VAR(uint16, AUTOMATIC)  TranlDampgTiElpsd_MilliSec_T_u16p0;
	VAR(Ary1D_u16p0_2, AUTOMATIC)  CtrldDampgScaX_MilliSec_T_u16p0;
	VAR(Ary1D_u2p14_2, AUTOMATIC)  CtrldDampgScaY_Uls_T_u2p14;
	VAR(uint16, AUTOMATIC)  CtrldDampgSca_Uls_T_u2p14;
	
	VAR(uint32, AUTOMATIC)  TmrTiSpan_MicroSec_T_u32;
	
	VAR(float32, AUTOMATIC) AbslMotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) CtrldDampgSca_Uls_T_f32;
	VAR(float32, AUTOMATIC) CtrlDampTrq_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqCmdMrfDampd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
	VAR(float32, AUTOMATIC) MotTqCmdCrf_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) TmrTiSpan_MicroSec_T_f32;
	VAR(float32, AUTOMATIC) TranlDampgTiElpsd_MilliSec_T_f32;
	VAR(float32, AUTOMATIC) PhasePlSwtScale_Uls_T_f32;
	VAR(float32, AUTOMATIC) VelDampgCmd_Uls_T_f32;
	VAR(float32, AUTOMATIC) MotTqCmdCrfDampd_MotNwtMtr_T_f32;
	
	
	(void)Rte_Read_AssiMechPolarity_Val (&AssiMechPolarity_Uls_T_s08);
	(void)Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl (&DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl);
	(void)Rte_Read_HwAg_Val (&HwAg_HwDeg_T_f32);
	(void)Rte_Read_LoaSt_Val (&LoaSt_Cnt_T_enum);
	(void)Rte_Read_MotTqCmdCrf_Val (&MotTqCmdCrf_MotNwtMtr_T_f32);	
	(void)Rte_Read_MotVelCrf_Val (&MotVelCrf_MotRadPerSec_T_f32);
	(void)Rte_Read_SysSt_Val (&SysSt_Cnt_T_enum);
	(void)Rte_Read_VehSpd_Val (&VehSpd_Kph_T_f32);
	
	/*Absolute value conversion*/
	AbslMotVelCrf_MotRadPerSec_T_f32 	= Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32);
	
	MotVelSign_Uls_T_s08 				= Sign_s08_f32(MotVelCrf_MotRadPerSec_T_f32);	
	
	/*Compute Damping Torque*/
	/***Start of Phase plane switching***/
	
	HwAgSign_Uls_T_s08 = Sign_s08_f32(HwAg_HwDeg_T_f32);
	
	if(MotVelSign_Uls_T_s08 == HwAgSign_Uls_T_s08)
	{
		VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
		
		PhasePlSwtScale_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmMotTqTranlDampgVehSpdBlndX_u9p7,
											PrmMotTqTranlDampgVehSpdBlndY_u2p14,
											(uint16)TblSize_m(PrmMotTqTranlDampgVehSpdBlndX_u9p7),
											VehSpd_Kph_T_u9p7);
											
		PhasePlSwtScale_Uls_T_f32 	= FixdToFloat_f32_u16(PhasePlSwtScale_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
		
	}
	else
	{
		PhasePlSwtScale_Uls_T_f32 = 1.0F;
	}
	
	*Rte_Pim_dMotTqTranlDampgSignPhaSca() = PhasePlSwtScale_Uls_T_f32;
	
	/*** End of Phase Plane Switching ***/
	
	VelDampgCmd_Uls_T_f32 = ((AbslMotVelCrf_MotRadPerSec_T_f32) * (-(float32)MotVelSign_Uls_T_s08) * 
								(Rte_Prm_MotTqTranlDampgDampgCoeff_Val()) * (PhasePlSwtScale_Uls_T_f32));
								
	*Rte_Pim_dMotTqTranlDampgVelDampgCmd() = VelDampgCmd_Uls_T_f32;
	
	/*End of Compute Damping Torque*/
	
	/*** Start of Controlled Damping Factor ***/
	
	/*Reset timer when inputs change*/
	
	if((*Rte_Pim_DiagStsPrev() != DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl) ||
		(*Rte_Pim_LoaStPrev() != LoaSt_Cnt_T_enum))
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_TmrRefTi());
	}
	
	*Rte_Pim_DiagStsPrev()= DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl;
		
	*Rte_Pim_LoaStPrev() = LoaSt_Cnt_T_enum;
	
	/*Enable Timer when Input Satisfies Criteria*/
	
	if( (TRUE == DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl) || (LOAST_FADEOUT == LoaSt_Cnt_T_enum) ||
	   (LOAST_SWBASDMTGTN == LoaSt_Cnt_T_enum) )
	{
		EnableTimer_Cnt_T_logl = TRUE;
	}
	else
	{
		EnableTimer_Cnt_T_logl = FALSE;
	}

	*Rte_Pim_dMotTqTranlDampgTmrEna() = EnableTimer_Cnt_T_logl;
	
	/*Calculate Elapsed Time*/
	if(TRUE == EnableTimer_Cnt_T_logl)
	{
		/*Get Elapsed Time*/
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_TmrRefTi(), &TmrTiSpan_MicroSec_T_u32);
		
		TmrTiSpan_MicroSec_T_f32 = FixdToFloat_f32_u32(TmrTiSpan_MicroSec_T_u32, NXTRFIXDPT_P0TOFLOAT_ULS_F32);
		
		TranlDampgTiElpsd_MilliSec_T_f32 = Lim_f32(((TmrTiSpan_MicroSec_T_f32) * (TICNVN_MILLISECPERCNT_F32)), 0.0F , 
													Rte_Prm_MotTqTranlDampgTmrPt2_Val());
		
	}
	else
	{
		TranlDampgTiElpsd_MilliSec_T_f32 = 0.0F;
	}
	
	*Rte_Pim_dMotTqTranlDampgTiElpd() = TranlDampgTiElpsd_MilliSec_T_f32;
	
	/*End of Calculate Elapsed Time*/
	
	/*Apply Time based scale to damping command*/
	
	if((TRUE == EnableTimer_Cnt_T_logl) && (TranlDampgTiElpsd_MilliSec_T_f32 < Rte_Prm_MotTqTranlDampgTmrPt2_Val()))
	{
		TranlDampgTiElpsd_MilliSec_T_u16p0 = FloatToFixd_u16_f32(TranlDampgTiElpsd_MilliSec_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);

		Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaX(CtrldDampgScaX_MilliSec_T_u16p0);
		
		Rte_IrvRead_MotTqTranlDampgPer1_CtrldDampgScaY(CtrldDampgScaY_Uls_T_u2p14);		
		
		/*Controlled Dampling Scaling*/
		
		CtrldDampgSca_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(CtrldDampgScaX_MilliSec_T_u16p0, 
																	CtrldDampgScaY_Uls_T_u2p14, 
																	(uint16)TblSize_m(CtrldDampgScaX_MilliSec_T_u16p0),
																	TranlDampgTiElpsd_MilliSec_T_u16p0);
		
		CtrldDampgSca_Uls_T_f32 = FixdToFloat_f32_u16(CtrldDampgSca_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
		
	}
	else
	{
		CtrldDampgSca_Uls_T_f32 = 0.0F;
	}
	
	CtrlDampTrq_MotNwtMtr_T_f32 = Lim_f32((CtrldDampgSca_Uls_T_f32 * VelDampgCmd_Uls_T_f32), 
										-(Rte_Prm_MotTqTranlDampgCmdLim_Val()), 
										Rte_Prm_MotTqTranlDampgCmdLim_Val());
	
	*Rte_Pim_dMotTqTranlDampgCmdCtrld() = CtrlDampTrq_MotNwtMtr_T_f32;
	
	/*** Start of SwOutputCntrl ***/
		
	MotTqTranlDampgCmpl_Cnt_T_logl = SwOpCtrlPart1(TranlDampgTiElpsd_MilliSec_T_f32, AbslMotVelCrf_MotRadPerSec_T_f32);
	
	MotTqCmdCrfDampd_MotNwtMtr_T_f32 = SwOpCtrlPart2(DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl, CtrlDampTrq_MotNwtMtr_T_f32, 
										    SysSt_Cnt_T_enum, MotTqCmdCrf_MotNwtMtr_T_f32, MotTqTranlDampgCmpl_Cnt_T_logl);
	
	MotTqCmdMrfDampd_MotNwtMtr_T_f32 = (float32)AssiMechPolarity_Uls_T_s08 *(MotTqCmdCrfDampd_MotNwtMtr_T_f32);
	
	/*** End of SwOutputCntrl ***/
	
	(void)Rte_Write_MotTqCmdCrfDampd_Val(Lim_f32(MotTqCmdCrfDampd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32));
	(void)Rte_Write_MotTqCmdMrfDampd_Val(Lim_f32(MotTqCmdMrfDampd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32));
	(void)Rte_Write_MotTqTranlDampgCmpl_Logl(MotTqTranlDampgCmpl_Cnt_T_logl);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotTqTranlDampg_STOP_SEC_CODE
#include "MotTqTranlDampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
* Name        :   SwOpCtrlPart1
* Description :   Sub function to calculate MotTqTranlDampgCmpl_Cnt_T_logl, reducing the path count.
* Inputs      :   TranlDampgTiElpsd_MilliSec_T_f32, AbslMotVelCrf_MotRadPerSec_T_f32 
* Returns     :   MotTqTranlDampgCmpl_Cnt_T_logl 
* Usage Notes :   None
****************************************************************************************************************/

static FUNC(boolean, LoaMgr_CODE) SwOpCtrlPart1(float32 TranlDampgTiElpsd_MilliSec_T_f32, 
												float32 AbslMotVelCrf_MotRadPerSec_T_f32)
	{
	
		VAR(boolean, AUTOMATIC) MotVelThdLo_Cnt_T_logl;
		VAR(boolean, AUTOMATIC) TiElpsdAndStLtch_Cnt_T_logl;
		VAR(boolean, AUTOMATIC) MotTqTranlDampgCmpl_Cnt_T_logl;
		
		if( (TranlDampgTiElpsd_MilliSec_T_f32 > Rte_Prm_MotTqTranlDampgTmrPt1_Val()) &&
			(AbslMotVelCrf_MotRadPerSec_T_f32 < Rte_Prm_MotTqTranlDampgVelThd_Val()) )
		{
			MotVelThdLo_Cnt_T_logl = TRUE;
		}
		else
		{
			MotVelThdLo_Cnt_T_logl = FALSE;
		}

		if( (TranlDampgTiElpsd_MilliSec_T_f32 > Rte_Prm_MotTqTranlDampgTmrPt1_Val()) &&
			(TRUE == *Rte_Pim_StLtchPrev()) )
		{
			TiElpsdAndStLtch_Cnt_T_logl = TRUE;
		}
		else
		{
			TiElpsdAndStLtch_Cnt_T_logl = FALSE;
		}
		
		
		if((MotVelThdLo_Cnt_T_logl == TRUE) || (TiElpsdAndStLtch_Cnt_T_logl == TRUE))
		{
			*Rte_Pim_StLtchPrev() = TRUE;
		}
		else
		{
			*Rte_Pim_StLtchPrev() = FALSE;
		}
		
		if((TranlDampgTiElpsd_MilliSec_T_f32 >= Rte_Prm_MotTqTranlDampgTmrPt2_Val()) || 
			(TRUE == *Rte_Pim_StLtchPrev()))
		{
			MotTqTranlDampgCmpl_Cnt_T_logl = TRUE;
		}	
		else
		{
			MotTqTranlDampgCmpl_Cnt_T_logl = FALSE;
		}
	
		return MotTqTranlDampgCmpl_Cnt_T_logl; 
	}
 
 /*****************************************************************************************************************
* Name        :   SwOpCtrlPart2
* Description :   Sub function to calculate MotTqCmdCrfDampd_MotNwtMtr_T_f32, reducing the path count.
* Inputs      :   DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl, CtrlDampTrq_MotNwtMtr_T_f32, SysSt_Cnt_T_enum, 
*				  MotTqCmdCrf_MotNwtMtr_T_f32 , MotTqTranlDampgCmpl_Cnt_T_logl.
* Returns     :   MotTqCmdCrfDampd_MotNwtMtr_T_f32 
* Usage Notes :   None
****************************************************************************************************************/
 static FUNC(float32, LoaMgr_CODE) SwOpCtrlPart2(boolean DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl, 
												float32 CtrlDampTrq_MotNwtMtr_T_f32, 
												SysSt1 SysSt_Cnt_T_enum, 
												float32 MotTqCmdCrf_MotNwtMtr_T_f32, 
												boolean MotTqTranlDampgCmpl_Cnt_T_logl)
	{
	
		VAR(float32, AUTOMATIC) CtrlDmpgTemp_MotNwMtr_T_f32;
		VAR(float32, AUTOMATIC) MotTqCmdCrfDampd_MotNwtMtr_T_f32;
				
		if(TRUE == MotTqTranlDampgCmpl_Cnt_T_logl)
		{
			CtrlDmpgTemp_MotNwMtr_T_f32 = 0.0F;
		}
		else
		{
			CtrlDmpgTemp_MotNwMtr_T_f32 = CtrlDampTrq_MotNwtMtr_T_f32;
		}
		
		if(SYSST_ENA != SysSt_Cnt_T_enum)
		{
			MotTqCmdCrfDampd_MotNwtMtr_T_f32 = 0.0F;
		}
		else
		{
			if(TRUE == DiagcStsCtrldShtDwnFltPrsnt_Cnt_T_logl)
			{
				MotTqCmdCrfDampd_MotNwtMtr_T_f32 = CtrlDmpgTemp_MotNwMtr_T_f32;
			}
			else
			{
				MotTqCmdCrfDampd_MotNwtMtr_T_f32 = MotTqCmdCrf_MotNwtMtr_T_f32 + CtrlDmpgTemp_MotNwMtr_T_f32;
			}
			
		}
		
		return MotTqCmdCrfDampd_MotNwtMtr_T_f32;
	}
	
	/*** End of Start of Switch Output Control ***/
	

	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
