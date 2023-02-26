/* TODO Stub file remove later */
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordCanDtcInhb.c
 *        Config:  C:/Users/gz324f/Desktop/working/_Ford_T3T6_Eps_Impl_A_Working/CF050A_FordCanDtcInhb_Impl/tools/Component.dpa
 *     SW-C Type:  FordCanDtcInhb
 *  Generated at:  Tue Feb  6 11:40:13 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordCanDtcInhb>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordCanDtcInhb.c
* Module Description: FordCanDtcInhb.c - CF050A
* Project           : CBD
* Author            : Kathir (TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 01/11/18   1        AKK (TATA)  Initial Version                                                            EA4#13531
*----------------------------------------------------------------------------------------------------------------------
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
 * FordEpsLifeCycMod1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * FordEpsSysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u16p0
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_FordCanDtcInhb.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */
 #include "NxtrMath.h"

/********************************************* Embedded Local Constants **********************************************/
 #define BATTVLTGTHD_VOLT_F32        				(10.0F)
 #define CNVMILLISECTOCNT_CNTPERMILLISEC_U16        (10U)
 #define FIXDTHDTI_MILLISEC_U16        				(5100U)
 
 /******************************************** Local Function Prototypes **********************************************/
 static FUNC(void, FordCanDtcInhb_CODE) FordEpsLifeCycModProcg(VAR(Ford_LifeCycMde_D_Actl,AUTOMATIC) FordVehLifeCycModQly_Cnt_T_enum,
															   P2VAR(boolean,AUTOMATIC,RTE_FORDCANDTCINHB_APPL_VAR) FordEpsLifeCycMod_Cnt_T_logl);
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
 * u16p0: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * FordEpsLifeCycMod1: Enumeration of integer in interval [0...255] with enumerators
 *   Norm (0U)
 *   Factry (1U)
 *   Transpt (2U)
 * FordEpsSysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   FORDEPSSYSST_EPS_ININ (0U)
 *   FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI (1U)
 *   FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI (2U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME (3U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE (4U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT (5U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF (6U)
 *   FORDEPSSYSST_EPS_SHTDWN (7U)
 *   FORDEPSSYSST_EPS_PWRDWN (8U)
 * Ford_ElPw_D_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Not_Supported (0U)
 *   Cx1_Supported (1U)
 *   Cx2_Not_Supported_Imminent (2U)
 *   Cx3_LV_Event_In_Progress (3U)
 *   Cx4_Fault_Limited (4U)
 *   Cx5_NotUsed_1 (5U)
 *   Cx6_NotUsed_2 (6U)
 *   Cx7_NotUsed_3 (7U)
 * Ford_Ignition_Status: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Unknown (0U)
 *   Cx1_Off (1U)
 *   Cx2_Accessory (2U)
 *   Cx4_Run (4U)
 *   Cx8_Start (8U)
 *   CxF_Invalid (15U)
 * Ford_LifeCycMde_D_Actl: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Normal (0U)
 *   Cx1_Factory (1U)
 *   Cx2_NotUsed (2U)
 *   Cx3_Transport (3U)
 * Ford_PwPckTq_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PwPckOff_TqNotAvailable (0U)
 *   Cx1_PwPckOn_TqNotAvailable (1U)
 *   Cx2_StartInPrgrss_TqNotAvail (2U)
 *   Cx3_PwPckOn_TqAvailable (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_CanDtcInhbRefTi(void)
 *   uint32 *Rte_Pim_EpsFactryModRefTi(void)
 *   uint32 *Rte_Pim_EpsLifeCycModRefTi(void)
 *   uint32 *Rte_Pim_EpsTransptModRefTi(void)
 *   FordEpsLifeCycMod1 *Rte_Pim_FordReqdEpsLifeCycModPrev(void)
 *   boolean *Rte_Pim_EpsLifeCycModPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordCanDtcInhbFactryModThd_Val(void)
 *   u16p0 Rte_Prm_FordCanDtcInhbTransptModThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordCanDtcInhb_START_SEC_CODE
#include "FordCanDtcInhb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCanDtcInhbInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCanDtcInhbInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordCanDtcInhb_CODE) FordCanDtcInhbInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCanDtcInhbInit1
 *********************************************************************************************************************/
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsLifeCycModRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CanDtcInhbRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsFactryModRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsTransptModRefTi());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCanDtcInhbPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_FordBattVltgEstimn_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordEpsSysSt_Val(FordEpsSysSt1 *data)
 *   Std_ReturnType Rte_Read_FordVehElecPwrSts_Ford_ElPw_D_Stat(Ford_ElPw_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehIgnStsQly_Ford_Ignition_Status(Ford_Ignition_Status *data)
 *   Std_ReturnType Rte_Read_FordVehLifeCycModQly_Ford_LifeCycMde_D_Actl(Ford_LifeCycMde_D_Actl *data)
 *   Std_ReturnType Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordCanDtcInhb_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordEpsLifeCycMod_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetGpioMcuEna_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCanDtcInhbPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordCanDtcInhb_CODE) FordCanDtcInhbPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCanDtcInhbPer1
 *********************************************************************************************************************/
  VAR(boolean,AUTOMATIC) FordHardWireIgnOn_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordCanDtcInhb_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordEpsLifeCycMod_Cnt_T_logl;
  
  
  VAR(float32,AUTOMATIC) FordBattVltgEstimn_Volt_T_f32;
  
  VAR(FordEpsSysSt1,AUTOMATIC) 			FordEpsSysSt_Cnt_T_enum;
  VAR(Ford_Ignition_Status,AUTOMATIC) 	FordVehIgnStsQly_Cnt_T_enum;
  VAR(Ford_PwPckTq_D_Stat,AUTOMATIC) 	FordVehPwrpkTqSts_Cnt_T_enum;
  VAR(Ford_ElPw_D_Stat,AUTOMATIC) 		FordVehElecPwrSts_Cnt_T_enum;
  VAR(Ford_LifeCycMde_D_Actl,AUTOMATIC) FordVehLifeCycModQly_Cnt_T_enum;
  
   VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
  
  /*Reading inputs from RTE*/
 (void) Rte_Read_FordBattVltgEstimn_Val(&FordBattVltgEstimn_Volt_T_f32);
 (void) Rte_Read_FordEpsSysSt_Val(&FordEpsSysSt_Cnt_T_enum);
 (void) Rte_Read_FordVehElecPwrSts_Ford_ElPw_D_Stat(&FordVehElecPwrSts_Cnt_T_enum);
 (void) Rte_Read_FordVehIgnStsQly_Ford_Ignition_Status(&FordVehIgnStsQly_Cnt_T_enum);
 (void) Rte_Read_FordVehLifeCycModQly_Ford_LifeCycMde_D_Actl(&FordVehLifeCycModQly_Cnt_T_enum);
 (void) Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(&FordVehPwrpkTqSts_Cnt_T_enum);
 
 Rte_Call_GetGpioMcuEna_Oper(&FordHardWireIgnOn_Cnt_T_logl);
 
 /*** Start of CanDtcInbhProcessing ***/
 if ((TRUE == FordHardWireIgnOn_Cnt_T_logl) &&
      (FordBattVltgEstimn_Volt_T_f32 >= BATTVLTGTHD_VOLT_F32) &&
	  (FORDEPSSYSST_EPS_ININ != FordEpsSysSt_Cnt_T_enum) &&
	  (FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME != FordEpsSysSt_Cnt_T_enum) &&
	  (FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE != FordEpsSysSt_Cnt_T_enum) &&
	  (FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT != FordEpsSysSt_Cnt_T_enum) &&
	  (FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF != FordEpsSysSt_Cnt_T_enum) &&
	  (Cx4_Run == FordVehIgnStsQly_Cnt_T_enum) &&
	  (Cx3_PwPckOn_TqAvailable == FordVehPwrpkTqSts_Cnt_T_enum) &&
	  (Cx1_Supported == FordVehElecPwrSts_Cnt_T_enum))
  {
	/*** Start of SetCanDtcInhbToFalse ***/
      (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_CanDtcInhbRefTi(),&TiSpan_Cnt_T_u32);
	  if(TiSpan_Cnt_T_u32 > ((uint32)FIXDTHDTI_MILLISEC_U16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	  { 
		 FordCanDtcInhb_Cnt_T_logl = FALSE;
	  }
	  else
	  {
		 FordCanDtcInhb_Cnt_T_logl = TRUE;
	  }
	/*** End of SetCanDtcInhbToFalse ***/  
  }
  else
  {
   /*** Start of SetCanDtcInhbToTrue ***/
      FordCanDtcInhb_Cnt_T_logl = TRUE;
      (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CanDtcInhbRefTi());
   /*** End of SetCanDtcInhbToTrue ***/ 	  
  }
 /*** End of CanDtcInbhProcessing ***/
 
 /*** Start of FordEpsLifeCycModProcessing ***/
  FordEpsLifeCycModProcg(FordVehLifeCycModQly_Cnt_T_enum,
						 &FordEpsLifeCycMod_Cnt_T_logl);
  /*** End of FordEpsLifeCycModProcessing ***/

  /*Writing outputs to RTE*/
 (void)Rte_Write_FordCanDtcInhb8_Val(FordCanDtcInhb_Cnt_T_logl);
 (void)Rte_Write_FordCanDtcInhb_Logl(FordCanDtcInhb_Cnt_T_logl);
 (void)Rte_Write_FordEpsLifeCycMod_Val(FordEpsLifeCycMod_Cnt_T_logl);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordCanDtcInhb_STOP_SEC_CODE
#include "FordCanDtcInhb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /*****************************************************************************
  * Name            : FordEpsLifeCycModProcg
  * Description     : Implementation of "FordEpsLifeCycModProcessing" subsystem in model.
  * Inputs          : FordVehLifeCycModQly_Cnt_T_enum,
  * Outputs         : *FordEpsLifeCycMod_Cnt_T_logl,
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordCanDtcInhb_CODE) FordEpsLifeCycModProcg(VAR(Ford_LifeCycMde_D_Actl,AUTOMATIC) FordVehLifeCycModQly_Cnt_T_enum,
															   P2VAR(boolean,AUTOMATIC,RTE_FORDCANDTCINHB_APPL_VAR) FordEpsLifeCycMod_Cnt_T_logl)
 {
  VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;	
  VAR(FordEpsLifeCycMod1,AUTOMATIC) FordReqdEpsLifeCycMod_Cnt_enum;
  
  /*** Start of FordEpsLifeCycModProcessing ***/
  if (Cx1_Factory == FordVehLifeCycModQly_Cnt_T_enum) 
  {
   /*** Start of SetFactryMod ***/
      (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_EpsFactryModRefTi(),&TiSpan_Cnt_T_u32);
	  if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordCanDtcInhbFactryModThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	  { 
         FordReqdEpsLifeCycMod_Cnt_enum = Factry;
		 *FordEpsLifeCycMod_Cnt_T_logl = TRUE;
	  }
	  else
	  {
		 *FordEpsLifeCycMod_Cnt_T_logl = *Rte_Pim_EpsLifeCycModPrev();		  
		 FordReqdEpsLifeCycMod_Cnt_enum = *Rte_Pim_FordReqdEpsLifeCycModPrev(); 
	  }   
	  
	  (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsLifeCycModRefTi());
      (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsTransptModRefTi());
   /*** End of SetFactryMod ***/
  }
  else if (Cx3_Transport == FordVehLifeCycModQly_Cnt_T_enum)
  {
   /*** Start of SetTransptMod ***/
	  (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_EpsTransptModRefTi(),&TiSpan_Cnt_T_u32);
	  if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordCanDtcInhbTransptModThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	  { 
         FordReqdEpsLifeCycMod_Cnt_enum = Transpt;
		 *FordEpsLifeCycMod_Cnt_T_logl = TRUE;
	  }
	  else
	  {
		 *FordEpsLifeCycMod_Cnt_T_logl = *Rte_Pim_EpsLifeCycModPrev();		  
		 FordReqdEpsLifeCycMod_Cnt_enum = *Rte_Pim_FordReqdEpsLifeCycModPrev(); 
	  } 
	  
	  (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsLifeCycModRefTi());
      (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsFactryModRefTi());
   /*** End of SetTransptMod ***/	  
  }
  else   
  {
   /*** Start of NormMod ***/
	  (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_EpsLifeCycModRefTi(),&TiSpan_Cnt_T_u32);
	  if(TiSpan_Cnt_T_u32 > ((uint32)FIXDTHDTI_MILLISEC_U16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	  { 
         FordReqdEpsLifeCycMod_Cnt_enum = Norm;
		 *FordEpsLifeCycMod_Cnt_T_logl = FALSE;
	  }
	  else
	  {
		 *FordEpsLifeCycMod_Cnt_T_logl = *Rte_Pim_EpsLifeCycModPrev();		  
		 FordReqdEpsLifeCycMod_Cnt_enum = *Rte_Pim_FordReqdEpsLifeCycModPrev(); 
	  } 
	  
	  (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsTransptModRefTi());
      (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_EpsFactryModRefTi());
   /*** End of NormMod ***/	   
  }
  *Rte_Pim_EpsLifeCycModPrev() = *FordEpsLifeCycMod_Cnt_T_logl;
  *Rte_Pim_FordReqdEpsLifeCycModPrev() = FordReqdEpsLifeCycMod_Cnt_enum;
  /*** End of FordEpsLifeCycModProcessing ***/
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
