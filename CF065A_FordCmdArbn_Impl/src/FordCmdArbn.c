/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordCmdArbn.c
 *        Config:  C:/Component/CF065A_FordCmdArbn_Impl/tools/Component.dpa
 *     SW-C Type:  FordCmdArbn
 *  Generated at:  Wed May  2 13:04:39 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordCmdArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

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
 * ImcArbnRxSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_FordCmdArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include <float.h>   

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16 (0U)

#define ECUID1_CNT_U08								 (1U)
#define ECUID2_CNT_U08								 (2U)
#define ECUIDINVLD_CNT_U08							 (3U)
#define NROFFEAT_CNT_U08							 (12U)
#define Cx0_PASSIVE                                  (0U)
#define Cx1_ACTIVATION_REQUEST                       (1U)
#define Cx2_RAMP_IN_REQUEST                          (2U)
#define Cx3_ACTIVE                                   (3U)
#define Cx4_RAMP_OUT_REQUEST                         (4U)
#define Cx5_LOCKED                                   (5U)									 
#define IDXACTVNIBLCTRLFEAT_CNT_U08					 (0U)
#define IDXLANEDPRTR_CNT_U08						 (1U)	
#define IDXPULLDRIFTCMP_CNT_U08						 (2U)
#define IDXPULLDRIFTCMPLRNG_CNT_U08					 (3U)	
#define IDXLANEKEEPASSI_CNT_U08						 (4U)	 
#define IDXDRVRSTEER_CNT_U08						 (5U)			 
#define IDXEVASSTEER_CNT_U08						 (6U)	
#define IDXLATCTRL_CNT_U08							 (7U)
#define IDXSTEERDSTBC_CNT_U08						 (8U)		 
#define IDXEXTAGCTRL_CNT_U08						 (9U)	
#define IDXSPARE1_CNT_U08							 (10U)			 
#define IDXSPARE2_CNT_U08							 (11U)			 
#define IDXSPARE3_CNT_U08							 (12U)			 
#define Cx99_DONT_CARE							 (99U)			 
			 
#define IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16 		(0U)	
#define IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16		(0U)
#define IMCARBN_IMCSIGARBNLATCTRL_CNT_U16          (0U)
#define IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16 (0U)
#define IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16     (0U)
#define IMCARBN_IMCSIGARBNSPARE1_CNT_U16           (0U)
#define IMCARBN_IMCSIGARBNSPARE2_CNT_U16           (0U)
#define IMCARBN_IMCSIGARBNSPARE3_CNT_U16           (0U)
#define IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16       (0U)
#define IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16       (0U)
#define IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16       (0U)
#define IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16       (0U)
#define NONNORMALOP_CNT_U08 					(1U)
#define NORMALOP_CNT_U08 						(0U)
#define SYSOPERMOTTQCMDSCAFAC_CNT_F32 			(1.0F)
#define STEERMODLSTS_NORMOPERFULLASSI			 (2U) 			
#define STEERMODLSTS_NORMOPERLIMDASSI			 (1U)		
#define FAILURE_CNT_U08			 (2U)		
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
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ImcArbnRxSts1: Enumeration of integer in interval [0...255] with enumerators
 *   IMCARBNRXSTS_NODATA (0U)
 *   IMCARBNRXSTS_VLD (1U)
 *   IMCARBNRXSTS_INVLD (2U)
 *
 * Array Types:
 * ============
 * Ary1D_logl_13: Array with 13 element(s) of type boolean
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
 *   float32 Rte_Prm_FordCmdArbnNormAssiTqThd_Val(void)
 *   boolean *Rte_Prm_FordCmdArbnActvNiblCtrlDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnEvasSteerAssiDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnExtAgCtrlDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnExtAgDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneKeepAssiDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLatCtrlDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnNonStMask_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare1Deactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare1DeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare2Deactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare2DeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare3Deactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare3DeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSteerDstbcDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *
 *********************************************************************************************************************/


#define FordCmdArbn_START_SEC_CODE
#include "FordCmdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCmdArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCmdArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordCmdArbn_CODE) FordCmdArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCmdArbnInit1
 *********************************************************************************************************************/
/* Do Nothing */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCmdArbnPer1
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
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpLrngFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSpare1FeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSpare2FeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSpare3FeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSteerModlSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSysOperMotTqCmdSca_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordActvNiblCtrlFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordEvasSteerAssiFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordLaneDprtrWarnFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordLatCtrlFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpLrngFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSpare1Feat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSpare2Feat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSpare3Feat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_LaneKeepAssiFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_SteerSts(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCmdArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordCmdArbn_CODE) FordCmdArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCmdArbnPer1
 *********************************************************************************************************************/
 
VAR(ImcArbnRxSts1, AUTOMATIC) ImcFordActvNiblCtrlFeatStVld_Cnt_T_enum;
/*VAR(boolean, AUTOMATIC) ImcFordActvNiblCtrlFeatStVld_Cnt_T_logl;*/
VAR(uint8, AUTOMATIC) ImcFordActvNiblCtrlFeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC) ImcFordActvNiblCtrlFeatSt_Cnt_T_u08;

VAR(uint8, AUTOMATIC)ImcFordEvasSteerAssiFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordEvasSteerAssiFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordEvasSteerAssiFeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordEvasSteerAssiFeatStRtn_Cnt_T_logl;

VAR(uint8, AUTOMATIC)ImcSteerModlSts_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcSteerModlStsVld_Cnt_T_enum;


VAR(uint8, AUTOMATIC)ImcFordLatCtrlFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordLatCtrlFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordLatCtrlFeatStRtn_Cnt_T_u08;

VAR(uint8, AUTOMATIC)EcuId_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordActvNiblCtrlFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordDrvrSteerRcmdnFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordEvasSteerAssiFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordLaneDprtrWarnFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordLaneKeepAssiFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordLatCtrlFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordPullDriftCmpFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordPullDriftCmpLrngFeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordSpare1FeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordSpare2FeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordSpare3FeatSt_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordSteerModlSts_Cnt_T_u08;
VAR(uint8, AUTOMATIC)FordSteerTqDstbcRejctnFeatSt_Cnt_T_u08;

VAR(uint8, AUTOMATIC)PullDriftCmpLrngFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)PullDriftCmpFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ActvNiblCtrlFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)SteerDstbcRejctnFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)LaneKeepAssiFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)EvasSteerAssiFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)LaneDprtrWarnFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)LatCtrlFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)DrvrSteerRcmdnFeat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)SteerSts_Cnt_T_u08;
VAR(uint8, AUTOMATIC)Spare1Feat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)Spare2Feat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)Spare3Feat_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordLaneDprtrWarnFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordLaneDprtrWarnFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordLaneDprtrWarnFeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordSteerTqDstbcRejctnFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordSteerTqDstbcRejctnFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordSteerTqDstbcRejctnFeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordPullDriftCmpFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordPullDriftCmpFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordPullDriftCmpFeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordSpare1FeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordSpare1FeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordSpare1FeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordPullDriftCmpLrngFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordPullDriftCmpLrngFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordPullDriftCmpLrngFeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordSpare2FeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordSpare2FeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordSpare2FeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordLaneKeepAssiFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordLaneKeepAssiFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordLaneKeepAssiFeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordSpare3FeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordSpare3FeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordSpare3FeatStRtn_Cnt_T_u08;
VAR(uint8, AUTOMATIC)ImcFordDrvrSteerRcmdnFeatSt_Cnt_T_u08;
VAR(ImcArbnRxSts1, AUTOMATIC)ImcFordDrvrSteerRcmdnFeatStVld_Cnt_T_enum;
VAR(uint8, AUTOMATIC)ImcFordDrvrSteerRcmdnFeatStRtn_Cnt_T_u08;

VAR(boolean, AUTOMATIC)ImcFordActvNiblCtrlFeatStRtn_Cnt_T_logl;


VAR(boolean, AUTOMATIC)ImcFordLatCtrlFeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordLaneDprtrWarnFeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordSteerTqDstbcRejctnFeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordPullDriftCmpFeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordSpare1FeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordPullDriftCmpLrngFeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordSpare2FeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordLaneKeepAssiFeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordSpare3FeatStRtn_Cnt_T_logl;

VAR(boolean, AUTOMATIC)ImcFordDrvrSteerRcmdnFeatStRtn_Cnt_T_logl;




/* Read RTE Inputs */
(void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);
(void)Rte_Read_FordActvNiblCtrlFeatSt_Val(&FordActvNiblCtrlFeatSt_Cnt_T_u08);
(void)Rte_Read_FordDrvrSteerRcmdnFeatSt_Val(&FordDrvrSteerRcmdnFeatSt_Cnt_T_u08);
(void)Rte_Read_FordEvasSteerAssiFeatSt_Val(&FordEvasSteerAssiFeatSt_Cnt_T_u08);
(void)Rte_Read_FordLaneDprtrWarnFeatSt_Val(&FordLaneDprtrWarnFeatSt_Cnt_T_u08);
(void)Rte_Read_FordLaneKeepAssiFeatSt_Val(&FordLaneKeepAssiFeatSt_Cnt_T_u08);
(void)Rte_Read_FordLatCtrlFeatSt_Val(&FordLatCtrlFeatSt_Cnt_T_u08);
(void)Rte_Read_FordPullDriftCmpFeatSt_Val(&FordPullDriftCmpFeatSt_Cnt_T_u08);
(void)Rte_Read_FordPullDriftCmpLrngFeatSt_Val(&FordPullDriftCmpLrngFeatSt_Cnt_T_u08);
(void)Rte_Read_FordSpare1FeatSt_Val(&FordSpare1FeatSt_Cnt_T_u08);
(void)Rte_Read_FordSpare2FeatSt_Val(&FordSpare2FeatSt_Cnt_T_u08);
(void)Rte_Read_FordSpare3FeatSt_Val(&FordSpare3FeatSt_Cnt_T_u08);
(void)Rte_Read_FordSteerModlSts_Val(&FordSteerModlSts_Cnt_T_u08);
(void)Rte_Read_FordSteerTqDstbcRejctnFeatSt_Val(&FordSteerTqDstbcRejctnFeatSt_Cnt_T_u08);

ImcFordPullDriftCmpLrngFeatStRtn_Cnt_T_logl = FALSE;
ImcFordActvNiblCtrlFeatStRtn_Cnt_T_logl = FALSE;
ImcFordEvasSteerAssiFeatStRtn_Cnt_T_logl = FALSE;
/*ImcSteerModlStsRtn_Cnt_T_logl = FALSE;*/
ImcFordLatCtrlFeatStRtn_Cnt_T_logl = FALSE;
ImcFordLaneDprtrWarnFeatStRtn_Cnt_T_logl = FALSE;
ImcFordSteerTqDstbcRejctnFeatStRtn_Cnt_T_logl = FALSE;
ImcFordPullDriftCmpFeatStRtn_Cnt_T_logl = FALSE;
ImcFordSpare1FeatStRtn_Cnt_T_logl = FALSE;
ImcFordSpare2FeatStRtn_Cnt_T_logl = FALSE;
ImcFordLaneKeepAssiFeatStRtn_Cnt_T_logl = FALSE;
ImcFordSpare3FeatStRtn_Cnt_T_logl = FALSE;
ImcFordDrvrSteerRcmdnFeatStRtn_Cnt_T_logl = FALSE;

/* GetSigImcData_FordActvNiblCtrlFeatSt */ 
ImcFordActvNiblCtrlFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNACTVNIBLCTRLFEATST_CNT_U16, &ImcFordActvNiblCtrlFeatSt_Cnt_T_u08, &ImcFordActvNiblCtrlFeatStVld_Cnt_T_enum);

if(ImcFordActvNiblCtrlFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/* ImcFordActvNiblCtrlFeatStVld_Cnt_T_logl = TRUE;*/
}

if(ImcFordActvNiblCtrlFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordActvNiblCtrlFeatStRtn_Cnt_T_logl = TRUE;	
	
}

/* GetSigImcData_ESAFeatSt */
ImcFordEvasSteerAssiFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNEVASSTEER_CNT_U16, &ImcFordEvasSteerAssiFeatSt_Cnt_T_u08, &ImcFordEvasSteerAssiFeatStVld_Cnt_T_enum);

if(ImcFordEvasSteerAssiFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/* ImcFordEvasSteerAssiFeatStVld_Cnt_T_logl = TRUE; */
}

if(ImcFordEvasSteerAssiFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordEvasSteerAssiFeatStRtn_Cnt_T_logl = TRUE;	
	
}

/* GetSigImcData_SteerModlSts */
/*ImcSteerModlStsRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16, &ImcSteerModlSts_Cnt_T_u08, &ImcSteerModlStsVld_Cnt_T_enum);*/
(void)Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNSTEERMODLSTS_CNT_U16, &ImcSteerModlSts_Cnt_T_u08, &ImcSteerModlStsVld_Cnt_T_enum);

/* if(ImcSteerModlStsVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	 ImcSteerModlStsVld_Cnt_T_logl = TRUE; 
}

if(ImcSteerModlStsRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcSteerModlStsRtn_Cnt_T_logl = TRUE;
	
}*/


/* GetSigImcData_LATCTLFeatSt */
ImcFordLatCtrlFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNLATCTRL_CNT_U16, &ImcFordLatCtrlFeatSt_Cnt_T_u08, &ImcFordLatCtrlFeatStVld_Cnt_T_enum);

if(ImcFordLatCtrlFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/* ImcFordLatCtrlFeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordLatCtrlFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordLatCtrlFeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_LDWFeatSt */


ImcFordLaneDprtrWarnFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNLANEDPRTR_CNT_U16, &ImcFordLaneDprtrWarnFeatSt_Cnt_T_u08, &ImcFordLaneDprtrWarnFeatStVld_Cnt_T_enum);

if(ImcFordLaneDprtrWarnFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordLaneDprtrWarnFeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordLaneDprtrWarnFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordLaneDprtrWarnFeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_STDRFeatSt */


ImcFordSteerTqDstbcRejctnFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNSTEERDSTBC_CNT_U16, &ImcFordSteerTqDstbcRejctnFeatSt_Cnt_T_u08, &ImcFordSteerTqDstbcRejctnFeatStVld_Cnt_T_enum);

if(ImcFordSteerTqDstbcRejctnFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordSteerTqDstbcRejctnFeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordSteerTqDstbcRejctnFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordSteerTqDstbcRejctnFeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_PDCFeatSt */


ImcFordPullDriftCmpFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNPULLDRIFTCMP_CNT_U16, &ImcFordPullDriftCmpFeatSt_Cnt_T_u08, &ImcFordPullDriftCmpFeatStVld_Cnt_T_enum);

if(ImcFordPullDriftCmpFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordPullDriftCmpFeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordPullDriftCmpFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordPullDriftCmpFeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_EXTRA1FeatSt */


ImcFordSpare1FeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNSPARE1_CNT_U16, &ImcFordSpare1FeatSt_Cnt_T_u08, &ImcFordSpare1FeatStVld_Cnt_T_enum);

if(ImcFordSpare1FeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordSpare1FeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordSpare1FeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordSpare1FeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_PDCLFeatSt */


ImcFordPullDriftCmpLrngFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNPULLDRIFTCMPLRNG_CNT_U16, &ImcFordPullDriftCmpLrngFeatSt_Cnt_T_u08, &ImcFordPullDriftCmpLrngFeatStVld_Cnt_T_enum);

if(ImcFordPullDriftCmpLrngFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordPullDriftCmpLrngFeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordPullDriftCmpLrngFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordPullDriftCmpLrngFeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_EXTRA2FeatSt */


ImcFordSpare2FeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNSPARE2_CNT_U16, &ImcFordSpare2FeatSt_Cnt_T_u08, &ImcFordSpare2FeatStVld_Cnt_T_enum);

if(ImcFordSpare2FeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordSpare2FeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordSpare2FeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordSpare2FeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_LKAFeatSt */


ImcFordLaneKeepAssiFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNLANEKEEPASSI_CNT_U16, &ImcFordLaneKeepAssiFeatSt_Cnt_T_u08, &ImcFordLaneKeepAssiFeatStVld_Cnt_T_enum);

if(ImcFordLaneKeepAssiFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordLaneKeepAssiFeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordLaneKeepAssiFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordLaneKeepAssiFeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_EXTRA3FeatSt */


ImcFordSpare3FeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNSPARE3_CNT_U16, &ImcFordSpare3FeatSt_Cnt_T_u08, &ImcFordSpare3FeatStVld_Cnt_T_enum);

if(ImcFordSpare3FeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordSpare3FeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordSpare3FeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordSpare3FeatStRtn_Cnt_T_logl = TRUE;
	
}

/* GetSigImcData_DSRFeatSt */



ImcFordDrvrSteerRcmdnFeatStRtn_Cnt_T_u08 = Rte_Call_GetSigImcData_u08_Oper(IMCARBN_IMCSIGARBNDRVRSTEER_CNT_U16, &ImcFordDrvrSteerRcmdnFeatSt_Cnt_T_u08, &ImcFordDrvrSteerRcmdnFeatStVld_Cnt_T_enum);

if(ImcFordDrvrSteerRcmdnFeatStVld_Cnt_T_enum == IMCARBNRXSTS_VLD)
{
	/*ImcFordDrvrSteerRcmdnFeatStVld_Cnt_T_logl = TRUE;*/
}
if(ImcFordDrvrSteerRcmdnFeatStRtn_Cnt_T_u08 != E_NOT_OK)
{
	ImcFordDrvrSteerRcmdnFeatStRtn_Cnt_T_logl = TRUE;
	
}

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	PullDriftCmpLrngFeat_Cnt_T_u08 = FordPullDriftCmpLrngFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordPullDriftCmpLrngFeatStRtn_Cnt_T_logl == TRUE )
	{
		PullDriftCmpLrngFeat_Cnt_T_u08 = ImcFordPullDriftCmpLrngFeatSt_Cnt_T_u08;
	}
	else
	{
		PullDriftCmpLrngFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	PullDriftCmpLrngFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	PullDriftCmpFeat_Cnt_T_u08 = FordPullDriftCmpFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordPullDriftCmpFeatStRtn_Cnt_T_logl == TRUE )
	{
		PullDriftCmpFeat_Cnt_T_u08 = ImcFordPullDriftCmpFeatSt_Cnt_T_u08;
	}
	else
	{
		PullDriftCmpFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	PullDriftCmpFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	ActvNiblCtrlFeat_Cnt_T_u08 = FordActvNiblCtrlFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordActvNiblCtrlFeatStRtn_Cnt_T_logl == TRUE )
	{
		ActvNiblCtrlFeat_Cnt_T_u08 = ImcFordActvNiblCtrlFeatSt_Cnt_T_u08;
	}
	else
	{
		ActvNiblCtrlFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	ActvNiblCtrlFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	SteerDstbcRejctnFeat_Cnt_T_u08 = FordSteerTqDstbcRejctnFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordSteerTqDstbcRejctnFeatStRtn_Cnt_T_logl == TRUE )
	{
		SteerDstbcRejctnFeat_Cnt_T_u08 = ImcFordSteerTqDstbcRejctnFeatSt_Cnt_T_u08;
	}
	else
	{
		SteerDstbcRejctnFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	SteerDstbcRejctnFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	LaneKeepAssiFeat_Cnt_T_u08 = FordLaneKeepAssiFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordLaneKeepAssiFeatStRtn_Cnt_T_logl == TRUE )
	{
		LaneKeepAssiFeat_Cnt_T_u08 = ImcFordLaneKeepAssiFeatSt_Cnt_T_u08;
	}
	else
	{
		LaneKeepAssiFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	LaneKeepAssiFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	EvasSteerAssiFeat_Cnt_T_u08 = FordEvasSteerAssiFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordEvasSteerAssiFeatStRtn_Cnt_T_logl == TRUE )
	{
		EvasSteerAssiFeat_Cnt_T_u08 = ImcFordEvasSteerAssiFeatSt_Cnt_T_u08;
	}
	else
	{
		EvasSteerAssiFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	EvasSteerAssiFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	LaneDprtrWarnFeat_Cnt_T_u08 = FordLaneDprtrWarnFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordLaneDprtrWarnFeatStRtn_Cnt_T_logl == TRUE )
	{
		LaneDprtrWarnFeat_Cnt_T_u08 = ImcFordLaneDprtrWarnFeatSt_Cnt_T_u08;
	}
	else
	{
		LaneDprtrWarnFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	LaneDprtrWarnFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	LatCtrlFeat_Cnt_T_u08 = FordLatCtrlFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordLatCtrlFeatStRtn_Cnt_T_logl == TRUE )
	{
		LatCtrlFeat_Cnt_T_u08 = ImcFordLatCtrlFeatSt_Cnt_T_u08;
	}
	else
	{
		LatCtrlFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	LatCtrlFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	DrvrSteerRcmdnFeat_Cnt_T_u08 = FordDrvrSteerRcmdnFeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordDrvrSteerRcmdnFeatStRtn_Cnt_T_logl == TRUE )
	{
		DrvrSteerRcmdnFeat_Cnt_T_u08 = ImcFordDrvrSteerRcmdnFeatSt_Cnt_T_u08;
	}
	else
	{
		DrvrSteerRcmdnFeat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	DrvrSteerRcmdnFeat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}
if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	SteerSts_Cnt_T_u08 = FordSteerModlSts_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	SteerSts_Cnt_T_u08 = ImcSteerModlSts_Cnt_T_u08;

}
else
{
	/* do nothing */
	
}

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	Spare1Feat_Cnt_T_u08 = FordSpare1FeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordSpare1FeatStRtn_Cnt_T_logl == TRUE )
	{
		Spare1Feat_Cnt_T_u08 = ImcFordSpare1FeatSt_Cnt_T_u08;
	}
	else
	{
		Spare1Feat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	Spare1Feat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	Spare2Feat_Cnt_T_u08 = FordSpare2FeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordSpare2FeatStRtn_Cnt_T_logl == TRUE )
	{
		Spare2Feat_Cnt_T_u08 = ImcFordSpare2FeatSt_Cnt_T_u08;
	}
	else
	{
		Spare2Feat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	Spare2Feat_Cnt_T_u08 = Cx5_LOCKED;
}
else
{
	/* do nothing */
	
}

if(EcuId_Cnt_T_u08 == ECUID1_CNT_U08)
{
	Spare3Feat_Cnt_T_u08 = FordSpare3FeatSt_Cnt_T_u08;
}
else if(EcuId_Cnt_T_u08 == ECUID2_CNT_U08)
{
	if(ImcFordSpare3FeatStRtn_Cnt_T_logl == TRUE )
	{
		Spare3Feat_Cnt_T_u08 = ImcFordSpare3FeatSt_Cnt_T_u08;
	}
	else
	{
		Spare3Feat_Cnt_T_u08 = Cx5_LOCKED;
	}
}
else if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
{
	Spare3Feat_Cnt_T_u08 = Cx5_LOCKED;
}else
{
	/* do nothing */
	
}
/* Irvwrites */
Rte_IrvWrite_FordCmdArbnPer1_FordActvNiblCtrlFeat(ActvNiblCtrlFeat_Cnt_T_u08);
Rte_IrvWrite_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat(DrvrSteerRcmdnFeat_Cnt_T_u08 );
Rte_IrvWrite_FordCmdArbnPer1_FordEvasSteerAssiFeat(EvasSteerAssiFeat_Cnt_T_u08 );
Rte_IrvWrite_FordCmdArbnPer1_FordLaneDprtrWarnFeat(LaneDprtrWarnFeat_Cnt_T_u08 );
Rte_IrvWrite_FordCmdArbnPer1_FordLatCtrlFeat(LatCtrlFeat_Cnt_T_u08 );
Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpFeat(PullDriftCmpFeat_Cnt_T_u08 );
Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpLrngFeat( PullDriftCmpLrngFeat_Cnt_T_u08);
Rte_IrvWrite_FordCmdArbnPer1_FordSpare1Feat( Spare1Feat_Cnt_T_u08);
Rte_IrvWrite_FordCmdArbnPer1_FordSpare2Feat( Spare2Feat_Cnt_T_u08);
Rte_IrvWrite_FordCmdArbnPer1_FordSpare3Feat( Spare3Feat_Cnt_T_u08);
Rte_IrvWrite_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat(SteerDstbcRejctnFeat_Cnt_T_u08 );
Rte_IrvWrite_FordCmdArbnPer1_LaneKeepAssiFeat(LaneKeepAssiFeat_Cnt_T_u08 );
Rte_IrvWrite_FordCmdArbnPer1_SteerSts( SteerSts_Cnt_T_u08);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCmdArbnPer2
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
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordExtAgCtrlFeatSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordDrvrSteerRcmdnArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordExtAgCtrlArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpLrngArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSpare1ArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSpare2ArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSpare3ArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnArbnCmd_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordActvNiblCtrlFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordEvasSteerAssiFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordLaneDprtrWarnFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordLatCtrlFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpLrngFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSpare1Feat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSpare2Feat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSpare3Feat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_LaneKeepAssiFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_SteerSts(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCmdArbnPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordCmdArbn_CODE) FordCmdArbnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordCmdArbnPer2
 *********************************************************************************************************************/


 VAR(uint8, AUTOMATIC)EcuId_Cnt_T_u08;
 
 VAR(uint8, AUTOMATIC)OpState_Cnt_T_u08;
 VAR(uint8, AUTOMATIC)Idx1_Cnt_T_u08;
 VAR(uint8, AUTOMATIC)ReqTbl_Cnt_T_Ary1D[13];
 VAR(uint8, AUTOMATIC)ActTbl_Cnt_T_Ary1D[13];
 VAR(uint8, AUTOMATIC)InpSt_Cnt_T_Ary1D[13];
 VAR(uint8, AUTOMATIC) DeniedActvnReqTbl_Cnt_T_Ary1D[13];
 VAR(uint8, AUTOMATIC) DeactvnTbl_Cnt_T_Ary1D[13];
 VAR(boolean, AUTOMATIC) CanReq_Cnt_T_logl;
 
 VAR(boolean, AUTOMATIC) CanBeActv_Cnt_T_logl;
 
 VAR(boolean, AUTOMATIC) ReqFlg_Cnt_T_logl;
 VAR(boolean, AUTOMATIC) EpsilonFlg_Cnt_T_logl;
 
 VAR(uint8, AUTOMATIC) ArbiterCmdSt_Cnt_T_enum;
 VAR(uint8, AUTOMATIC)  FinalSt_Cnt_T_enum[13];
 
 VAR(float32, AUTOMATIC)FordSysOperMotTqCmdSca_Cnt_T_f32;
 VAR(uint8, AUTOMATIC)SteerSts_Cnt_T_u08;
  VAR(uint8, AUTOMATIC)FordExtAgCtrlFeatSt_Cnt_T_u08;
 SteerSts_Cnt_T_u08 = Rte_IrvRead_FordCmdArbnPer2_SteerSts();

 (void)Rte_Read_FordExtAgCtrlFeatSt_Val(&FordExtAgCtrlFeatSt_Cnt_T_u08);
 (void)Rte_Read_EcuId_Val(&EcuId_Cnt_T_u08);
(void)Rte_Read_FordSysOperMotTqCmdSca_Val(&FordSysOperMotTqCmdSca_Cnt_T_f32);

CanReq_Cnt_T_logl = FALSE;
CanBeActv_Cnt_T_logl = FALSE;
ReqFlg_Cnt_T_logl = FALSE;


InpSt_Cnt_T_Ary1D[0] = Rte_IrvRead_FordCmdArbnPer2_FordActvNiblCtrlFeat();
InpSt_Cnt_T_Ary1D[1] = Rte_IrvRead_FordCmdArbnPer2_LaneKeepAssiFeat();
InpSt_Cnt_T_Ary1D[2] = Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpFeat();
InpSt_Cnt_T_Ary1D[3] = Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpLrngFeat();
InpSt_Cnt_T_Ary1D[4] = Rte_IrvRead_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat();
InpSt_Cnt_T_Ary1D[5] = Rte_IrvRead_FordCmdArbnPer2_FordEvasSteerAssiFeat();
InpSt_Cnt_T_Ary1D[6] = Rte_IrvRead_FordCmdArbnPer2_FordLaneDprtrWarnFeat();
InpSt_Cnt_T_Ary1D[7] = FordExtAgCtrlFeatSt_Cnt_T_u08;
InpSt_Cnt_T_Ary1D[8] = Rte_IrvRead_FordCmdArbnPer2_FordLatCtrlFeat();
InpSt_Cnt_T_Ary1D[9] = Rte_IrvRead_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat();
InpSt_Cnt_T_Ary1D[10] = Rte_IrvRead_FordCmdArbnPer2_FordSpare1Feat();
InpSt_Cnt_T_Ary1D[11] = Rte_IrvRead_FordCmdArbnPer2_FordSpare2Feat();
InpSt_Cnt_T_Ary1D[12] = Rte_IrvRead_FordCmdArbnPer2_FordSpare3Feat();

 
 
 
 /* Start of CheckReq */
 
 for(Idx1_Cnt_T_u08 = 0; Idx1_Cnt_T_u08 <= NROFFEAT_CNT_U08; Idx1_Cnt_T_u08++ )
 {
	 
	 if( InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx1_ACTIVATION_REQUEST)
	 {
		 ReqTbl_Cnt_T_Ary1D[Idx1_Cnt_T_u08] = TRUE;
	 }
	 else
	 {
		 ReqTbl_Cnt_T_Ary1D[Idx1_Cnt_T_u08] = FALSE;
	 }
 }
 /* End of CheckReq */

 /* Start of CheckActivation */
 
 for(Idx1_Cnt_T_u08 = 0; Idx1_Cnt_T_u08 <= NROFFEAT_CNT_U08; Idx1_Cnt_T_u08++ )
 {
	 if( (InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx2_RAMP_IN_REQUEST)||( InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx3_ACTIVE)||( InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08]== Cx4_RAMP_OUT_REQUEST) )
	 {
		 ActTbl_Cnt_T_Ary1D[Idx1_Cnt_T_u08] = TRUE;
	 }
	 else
	 {
		 ActTbl_Cnt_T_Ary1D[Idx1_Cnt_T_u08] = FALSE;
	 }
 }
 /* End of CheckActivation */

/* Start of ProcReq */  
 /* Start of DeniedTbl */
 
	 DeniedActvnReqTbl_Cnt_T_Ary1D[0] = *Rte_Prm_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D();
	 	 DeniedActvnReqTbl_Cnt_T_Ary1D[1] = *Rte_Prm_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D();
		  DeniedActvnReqTbl_Cnt_T_Ary1D[2] = *Rte_Prm_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D();
		  	 DeniedActvnReqTbl_Cnt_T_Ary1D[3] = *Rte_Prm_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D();
			  DeniedActvnReqTbl_Cnt_T_Ary1D[4] = *Rte_Prm_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D();
			  	 DeniedActvnReqTbl_Cnt_T_Ary1D[5] = *Rte_Prm_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D();
				  DeniedActvnReqTbl_Cnt_T_Ary1D[6] = *Rte_Prm_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D();
				   DeniedActvnReqTbl_Cnt_T_Ary1D[7] = *Rte_Prm_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D();
				   DeniedActvnReqTbl_Cnt_T_Ary1D[8] = *Rte_Prm_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D();
				   	 DeniedActvnReqTbl_Cnt_T_Ary1D[9] = *Rte_Prm_FordCmdArbnExtAgDeniedActvnReq_Ary1D();
					 	 DeniedActvnReqTbl_Cnt_T_Ary1D[10] = *Rte_Prm_FordCmdArbnSpare1DeniedActvnReq_Ary1D();
						 	 DeniedActvnReqTbl_Cnt_T_Ary1D[11] = *Rte_Prm_FordCmdArbnSpare2DeniedActvnReq_Ary1D();
							 	 DeniedActvnReqTbl_Cnt_T_Ary1D[12] = *Rte_Prm_FordCmdArbnSpare3DeniedActvnReq_Ary1D();

 /* End of DeniedTbl */
 
 /* Start of DeactvnTbl */
 
	DeactvnTbl_Cnt_T_Ary1D[0] = *Rte_Prm_FordCmdArbnActvNiblCtrlDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[1] = *Rte_Prm_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[2] = *Rte_Prm_FordCmdArbnPullDriftCmpDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[3] = *Rte_Prm_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[4] = *Rte_Prm_FordCmdArbnLaneKeepAssiDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[5] = *Rte_Prm_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D();
	   
	DeactvnTbl_Cnt_T_Ary1D[6] = *Rte_Prm_FordCmdArbnEvasSteerAssiDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[7] = *Rte_Prm_FordCmdArbnLatCtrlDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[8] = *Rte_Prm_FordCmdArbnSteerDstbcDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[9] = *Rte_Prm_FordCmdArbnExtAgCtrlDeactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[10] = *Rte_Prm_FordCmdArbnSpare1Deactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[11] = *Rte_Prm_FordCmdArbnSpare2Deactvn_Ary1D();
	DeactvnTbl_Cnt_T_Ary1D[12] = *Rte_Prm_FordCmdArbnSpare3Deactvn_Ary1D();

 /* End of DeactvnTbl */
 
 
 if(
    ((ActTbl_Cnt_T_Ary1D[IDXACTVNIBLCTRLFEAT_CNT_U08] == TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXACTVNIBLCTRLFEAT_CNT_U08] == TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXLANEDPRTR_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXLANEDPRTR_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXLANEKEEPASSI_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXLANEKEEPASSI_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMP_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMP_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMPLRNG_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMPLRNG_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXSTEERDSTBC_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXSTEERDSTBC_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXEVASSTEER_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXEVASSTEER_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXEXTAGCTRL_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXEXTAGCTRL_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXLATCTRL_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXLATCTRL_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXDRVRSTEER_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXDRVRSTEER_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXSPARE1_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXSPARE1_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXSPARE2_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXSPARE2_CNT_U08]== TRUE)) &&
    ((ActTbl_Cnt_T_Ary1D[IDXSPARE3_CNT_U08]== TRUE) || (DeniedActvnReqTbl_Cnt_T_Ary1D[IDXSPARE3_CNT_U08]== TRUE)) 
   
    )
	{
		CanReq_Cnt_T_logl = TRUE;
	}
 
  if(
    ((ReqTbl_Cnt_T_Ary1D[IDXACTVNIBLCTRLFEAT_CNT_U08]== TRUE) || (DeactvnTbl_Cnt_T_Ary1D[IDXACTVNIBLCTRLFEAT_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXLANEDPRTR_CNT_U08] == TRUE)|| (DeactvnTbl_Cnt_T_Ary1D[IDXLANEDPRTR_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXLANEKEEPASSI_CNT_U08]== TRUE) || (DeactvnTbl_Cnt_T_Ary1D[IDXLANEKEEPASSI_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMP_CNT_U08]== TRUE) || (DeactvnTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMP_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMPLRNG_CNT_U08]== TRUE) ||( DeactvnTbl_Cnt_T_Ary1D[IDXPULLDRIFTCMPLRNG_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXSTEERDSTBC_CNT_U08] == TRUE)||( DeactvnTbl_Cnt_T_Ary1D[IDXSTEERDSTBC_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXEVASSTEER_CNT_U08]== TRUE) || (DeactvnTbl_Cnt_T_Ary1D[IDXEVASSTEER_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXEXTAGCTRL_CNT_U08]== TRUE) || (DeactvnTbl_Cnt_T_Ary1D[IDXEXTAGCTRL_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXLATCTRL_CNT_U08]== TRUE) ||( DeactvnTbl_Cnt_T_Ary1D[IDXLATCTRL_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXDRVRSTEER_CNT_U08]== TRUE) || (DeactvnTbl_Cnt_T_Ary1D[IDXDRVRSTEER_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXSPARE1_CNT_U08]== TRUE) || (DeactvnTbl_Cnt_T_Ary1D[IDXSPARE1_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXSPARE2_CNT_U08] == TRUE)|| (DeactvnTbl_Cnt_T_Ary1D[IDXSPARE2_CNT_U08]== TRUE)) &&
    ((ReqTbl_Cnt_T_Ary1D[IDXSPARE3_CNT_U08] == TRUE)|| (DeactvnTbl_Cnt_T_Ary1D[IDXSPARE3_CNT_U08]== TRUE)) 	
   
    )
	{
		CanBeActv_Cnt_T_logl = TRUE;
	}
 
 if((CanReq_Cnt_T_logl == TRUE) &&(CanBeActv_Cnt_T_logl == TRUE))
 {
	 ReqFlg_Cnt_T_logl = TRUE;
 }
 
 for(Idx1_Cnt_T_u08 = 0; Idx1_Cnt_T_u08 <= NROFFEAT_CNT_U08; Idx1_Cnt_T_u08++ )
 {
 
/* Start of OpSt */
 if((( FordSysOperMotTqCmdSca_Cnt_T_f32 - SYSOPERMOTTQCMDSCAFAC_CNT_F32 ) >=  FLT_EPSILON))
 {
	 EpsilonFlg_Cnt_T_logl =  TRUE;
 }
 else
 {
	 EpsilonFlg_Cnt_T_logl = FALSE;
 }
 if( (EpsilonFlg_Cnt_T_logl == FALSE) && (SteerSts_Cnt_T_u08 == STEERMODLSTS_NORMOPERFULLASSI))
 {
	 OpState_Cnt_T_u08 = NORMALOP_CNT_U08;
 }
 else if(( FordSysOperMotTqCmdSca_Cnt_T_f32 < Rte_Prm_FordCmdArbnNormAssiTqThd_Val() ) && (SteerSts_Cnt_T_u08 == STEERMODLSTS_NORMOPERLIMDASSI))
 {
	 OpState_Cnt_T_u08 = NONNORMALOP_CNT_U08;
 }
 else
 {
	 OpState_Cnt_T_u08 = FAILURE_CNT_U08;
 }
 /* End of OpSt */ 
	 
	 
 if((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx0_PASSIVE) && (ReqFlg_Cnt_T_logl == TRUE))
 {
	ArbiterCmdSt_Cnt_T_enum = Cx99_DONT_CARE;  
	 
 } 
 else if((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx0_PASSIVE)&& (ReqFlg_Cnt_T_logl == FALSE))
 {
	 ArbiterCmdSt_Cnt_T_enum = Cx5_LOCKED; 
 }
  else if((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx5_LOCKED) && (ReqFlg_Cnt_T_logl == TRUE))
 {
	 ArbiterCmdSt_Cnt_T_enum = Cx0_PASSIVE; 
 }
  else if((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx5_LOCKED)&& (ReqFlg_Cnt_T_logl == FALSE))
 {
	 ArbiterCmdSt_Cnt_T_enum = Cx5_LOCKED; 
 }
  else if((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx1_ACTIVATION_REQUEST)&& (ReqFlg_Cnt_T_logl == FALSE))
 {
	 ArbiterCmdSt_Cnt_T_enum = Cx3_ACTIVE; 
 }
 else if((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx1_ACTIVATION_REQUEST) && (ReqFlg_Cnt_T_logl == TRUE))
 {
	 ArbiterCmdSt_Cnt_T_enum = Cx0_PASSIVE; 
 }
 else if(((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx3_ACTIVE) || (InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx2_RAMP_IN_REQUEST) || (InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx4_RAMP_OUT_REQUEST)) && (ReqFlg_Cnt_T_logl == FALSE))
 {
	 ArbiterCmdSt_Cnt_T_enum = Cx3_ACTIVE;
	 
 }
 else if(((InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx3_ACTIVE) || (InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx2_RAMP_IN_REQUEST) || (InpSt_Cnt_T_Ary1D[Idx1_Cnt_T_u08] == Cx4_RAMP_OUT_REQUEST)) && (ReqFlg_Cnt_T_logl == TRUE))
 {
	 ArbiterCmdSt_Cnt_T_enum = Cx0_PASSIVE;
	 
 }
 else
 {
	 /* do nothing */
 }
 
 if(EcuId_Cnt_T_u08 == ECUIDINVLD_CNT_U08)
 {
 FinalSt_Cnt_T_enum[Idx1_Cnt_T_u08] = Cx5_LOCKED ;
 }
 else if(OpState_Cnt_T_u08 ==  NORMALOP_CNT_U08)
 {
	 FinalSt_Cnt_T_enum[Idx1_Cnt_T_u08] = ArbiterCmdSt_Cnt_T_enum;
 }
 else if(OpState_Cnt_T_u08 ==  NONNORMALOP_CNT_U08)
 {
	 FinalSt_Cnt_T_enum[Idx1_Cnt_T_u08] = ArbiterCmdSt_Cnt_T_enum;
 
	if(Rte_Prm_FordCmdArbnNonStMask_Ary1D()[Idx1_Cnt_T_u08] == TRUE)
	{
		FinalSt_Cnt_T_enum[Idx1_Cnt_T_u08] = ArbiterCmdSt_Cnt_T_enum;
		
	}
	else
	{
		 FinalSt_Cnt_T_enum[Idx1_Cnt_T_u08] = Cx5_LOCKED ;
	}
 }
  else if(OpState_Cnt_T_u08 ==  FAILURE_CNT_U08)
 {
	 FinalSt_Cnt_T_enum[Idx1_Cnt_T_u08] = Cx5_LOCKED ;
	 
 }
 else
 {
	 /* do nothing */
 }
 }
 /* End of ProcReq */
(void)Rte_Write_FordActvNiblCtrlArbnCmd_Val(FinalSt_Cnt_T_enum[IDXACTVNIBLCTRLFEAT_CNT_U08]);
(void)Rte_Write_FordDrvrSteerRcmdnArbnCmd_Val(FinalSt_Cnt_T_enum[IDXDRVRSTEER_CNT_U08]);
(void)Rte_Write_FordEvasSteerAssiArbnCmd_Val(FinalSt_Cnt_T_enum[IDXEVASSTEER_CNT_U08]);
(void)Rte_Write_FordExtAgCtrlArbnCmd_Val( FinalSt_Cnt_T_enum[IDXEXTAGCTRL_CNT_U08]);
(void)Rte_Write_FordLaneDprtrWarnArbnCmd_Val(FinalSt_Cnt_T_enum[IDXLANEDPRTR_CNT_U08] );
(void)Rte_Write_FordLaneKeepAssiArbnCmd_Val(FinalSt_Cnt_T_enum[IDXLANEKEEPASSI_CNT_U08] );
(void)Rte_Write_FordLatCtrlArbnCmd_Val(FinalSt_Cnt_T_enum[IDXLATCTRL_CNT_U08] );
(void)Rte_Write_FordPullDriftCmpArbnCmd_Val( FinalSt_Cnt_T_enum[IDXPULLDRIFTCMP_CNT_U08]);
(void)Rte_Write_FordPullDriftCmpLrngArbnCmd_Val( FinalSt_Cnt_T_enum[IDXPULLDRIFTCMPLRNG_CNT_U08]);
(void)Rte_Write_FordSpare1ArbnCmd_Val(FinalSt_Cnt_T_enum[IDXSPARE1_CNT_U08]);
(void)Rte_Write_FordSpare2ArbnCmd_Val(FinalSt_Cnt_T_enum[IDXSPARE2_CNT_U08]);
(void)Rte_Write_FordSpare3ArbnCmd_Val(FinalSt_Cnt_T_enum[IDXSPARE3_CNT_U08]);
(void)Rte_Write_FordSteerTqDstbcRejctnArbnCmd_Val( FinalSt_Cnt_T_enum[IDXSTEERDSTBC_CNT_U08]);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordCmdArbn_STOP_SEC_CODE
#include "FordCmdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
