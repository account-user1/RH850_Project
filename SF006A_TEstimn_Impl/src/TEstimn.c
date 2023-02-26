/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TEstimn.c
 *        Config:  C:/_Synergy_Projects/Working/SF006A_TEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  TEstimn
 *  Generated at:  Wed Dec 20 08:42:50 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TEstimn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : TEstimn.c
* Module Description: Implementation of Temperature Estimation FDD SF006A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 4 %
* %derived_by       : nz3541 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 9/22/15  1        SV        Initial Version                                                                   EA4#646
* 4/04/17  2        ML        Updated to Design vers. 2.0.0/2.1.0/2.2.0                    EA4#7498/EA4#10048/EA4#11031
* 12/4/17  3        ML        Added new Inputs, Outputs, Calibrations, PIMs, and NVM.                         EA4#13253
*                             Reworked logic in Init1 and added new logic in Per1.
* 4/3/18   4        SPP       Fixes for anomaly 21231, 19666, and 20644                                       EA4#22127
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_TEstimn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "ArchGlbPrm.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read*, Rte_Write*,
                                              SetRamBlockStatus, GetErrorStatus */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define TESTIMNASSIMECHTHILIM_DEGCGRD_F32	150.0F
#define TESTIMNASSIMECHTLOLIM_DEGCGRD_F32	(-50.0F)
#define TESTIMNFETTHILIM_DEGCGRD_F32		200.0F
#define TESTIMNFETTLOLIM_DEGCGRD_F32		(-50.0F)
#define TESTIMNMAGTHILIM_DEGCGRD_F32		150.0F
#define TESTIMNMAGTLOLIM_DEGCGRD_F32		(-50.0F)
#define TESTIMNWIDGTHILIM_DEGCGRD_F32		300.0F
#define TESTIMNWIDGTLOLIM_DEGCGRD_F32		(-50.0F)
#define DUALECUSTSIDX_CNT_U08               ((uint8)0U)
#define SNGECUSTSIDX_CNT_U08                ((uint8)1U)
#define EXPCOEFF_ULS_F32                    (-1.0F)
#define SILLFILVALMIN_ULS_F32               (-2431500.0F)
#define SILLFILVALMAX_ULS_F32               (1001200.0F)
#define SILPFILVALMIN_ULS_F32               (0.0F)
#define SILPFILVALMAX_ULS_F32               (62500.0F)
#define ASSIMECHLLFILVALMIN_ULS_F32         (-4577000.0F)
#define ASSIMECHLLFILVALMAX_ULS_F32         (1716400.0F)
#define ASSIMECHLPFILVALMIN_ULS_F32         (0.0F)
#define ASSIMECHLPFILVALMAX_ULS_F32         (1764.0F)
#define CULLFILVALMIN_ULS_F32               (-2431500.0F)
#define CULLFILVALMAX_ULS_F32               (1001200.0F)
#define CULPFILVALMIN_ULS_F32               (0.0F)
#define CULPFILVALMAX_ULS_F32               (62500.0F)
#define MAGLLFILVALMIN_ULS_F32              (-2431500.0F)
#define MAGLLFILVALMAX_ULS_F32              (1001200.0F)
#define MAGLPFILVALMIN_ULS_F32              (0.0F)
#define MAGLPFILVALMAX_ULS_F32              (62500.0F)
#define FILVALMIN_ULS_F32                   (0.0F)
#define TESTIMNFETMTGTNIDX_CNT_U08          ((uint8)2U)
#define TESTIMNIGNTIOFFTHD_CNT_F32          (10000.0F)
#define FETLOABITMASK_CNT_U08               ((uint8)4U)

static FUNC(void, TEstimn_APPL_CODE) FltMtgtnCalSeln(VAR(boolean,AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl,
                                                     VAR(boolean,AUTOMATIC) DualEcuFltMtgtnEna_Cnt_T_logl);

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
 * Boolean: Boolean
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Ary1D_f32_3: Array with 3 element(s) of type float32
 * Ary1D_logl_3: Array with 3 element(s) of type boolean
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 * TFilStValRec1: Record with elements
 *   FilSiLpStVal of type float32
 *   FilMagLpStVal of type float32
 *   FilCuLpStVal of type float32
 *   FilAssisMechLpStVal of type float32
 *   FilSiLLStVal of type float32
 *   FilMagLLStVal of type float32
 *   FilCuLLStVal of type float32
 *   FilAssisMechLLStVal of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AssiMechTEstimnPrev(void)
 *   float32 *Rte_Pim_AssiMechTSlewLimPrev(void)
 *   float32 *Rte_Pim_CuTEstimnPrev(void)
 *   float32 *Rte_Pim_FilAssiMechLLValPwrUp(void)
 *   float32 *Rte_Pim_FilAssiMechLpValPwrUp(void)
 *   float32 *Rte_Pim_FilCuLLValPwrUp(void)
 *   float32 *Rte_Pim_FilCuLpValPwrUp(void)
 *   float32 *Rte_Pim_FilMagLLValPwrUp(void)
 *   float32 *Rte_Pim_FilMagLpValPwrUp(void)
 *   float32 *Rte_Pim_FilSiLLValPwrUp(void)
 *   float32 *Rte_Pim_FilSiLpValPwrUp(void)
 *   float32 *Rte_Pim_MagTEstimnPrev(void)
 *   float32 *Rte_Pim_RepInitCntrVal(void)
 *   float32 *Rte_Pim_SiTEstimnPrev(void)
 *   float32 *Rte_Pim_dTEstimnAmbPwr(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechCorrn(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechDampgSca(void)
 *   float32 *Rte_Pim_dTEstimnAssiMechFil(void)
 *   float32 *Rte_Pim_dTEstimnCuCorrn(void)
 *   float32 *Rte_Pim_dTEstimnMagCorrn(void)
 *   float32 *Rte_Pim_dTEstimnScadAmbT(void)
 *   float32 *Rte_Pim_dTEstimnScadEngT(void)
 *   float32 *Rte_Pim_dTEstimnSiCorrn(void)
 *   float32 *Rte_Pim_dTEstimnWghtAvrgT(void)
 *   uint8 *Rte_Pim_TEstimnFltMtgtnCalIdx(void)
 *   boolean *Rte_Pim_AmbTVldPrev(void)
 *   boolean *Rte_Pim_AssiMechTInitEna(void)
 *   boolean *Rte_Pim_DualEcuFltMtgtnPrev(void)
 *   boolean *Rte_Pim_EngOilTVldPrev(void)
 *   boolean *Rte_Pim_FetMtgtnEnaPrev(void)
 *   boolean *Rte_Pim_RepInitCntrFlg(void)
 *   FilLpRec1 *Rte_Pim_AssiMechFilLp(void)
 *   FilLpRec1 *Rte_Pim_CuFilLp(void)
 *   FilLpRec1 *Rte_Pim_MagFilLp(void)
 *   FilLpRec1 *Rte_Pim_SiFilLp(void)
 *   TFilStValRec1 *Rte_Pim_TFilStVal(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val(void)
 *   float32 Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val(void)
 *   float32 Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val(void)
 *   float32 Rte_Prm_TEstimnIgnOffMsgWaitTi_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val(void)
 *   float32 Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbLpFilFrq_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val(void)
 *   float32 Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val(void)
 *   boolean Rte_Prm_TEstimnIgnOffCtrlEna_Logl(void)
 *   float32 *Rte_Prm_TEstimnAmbPwrMplr_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAmbTSca_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechAmbMplr_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechCorrLim_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechDampgSca_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechDftT_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnAssiMechSlew_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCorrnTAssiMech_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCorrnTCu_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCorrnTMag_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCorrnTSi_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCuAmbMplr_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCuCorrnLim_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCuLLFilCoeffB0_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnEngTSca_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnMagAmbMplr_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnMagCorrnLim_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnMagLLFilCoeffB0_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnSiAmbMplr_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnSiCorrnLim_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnSiLLFilCoeffB0_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnTauAssiMech_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnTauCu_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnTauMag_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   float32 *Rte_Prm_TEstimnTauSi_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_3
 *   boolean *Rte_Prm_TEstimnWghtAvrgTDi_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_3
 *
 *********************************************************************************************************************/


#define TEstimn_START_SEC_CODE
#include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_IgnTiOff_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehTiVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_TEstimnInit1_FilStVariRepInitFlg(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_TFilStVal_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_TFilStVal_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TEstimn_CODE) TEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnInit1
 *********************************************************************************************************************/
	
	VAR(float32, AUTOMATIC) AmbT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) AmbTVld_Cnt_T_logl;	
	VAR(float32, AUTOMATIC) EcuTFild_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EngOilT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) EngOilTVld_Cnt_T_logl;	
    VAR(boolean, AUTOMATIC) DualEcuFltMtgtnEna_Cnt_T_logl;
    VAR(uint8, AUTOMATIC)   MotAndThermProtnLoaMod_Cnt_T_u08;
    VAR(boolean,AUTOMATIC)  VehTiVld_Cnt_T_logl;
    VAR(uint32, AUTOMATIC)  IgnTiOff_Sec_T_u32;
	
	VAR(float32, AUTOMATIC) AssiMechT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotFetT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotMagT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotWidgT_DegCgrd_T_f32;
    VAR(boolean, AUTOMATIC) RepInitCntrFlg_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl = FALSE;
    VAR(Std_ReturnType, AUTOMATIC) NvmErrSts_Cnt_T_enum;
    VAR(float32, AUTOMATIC) TmpSiFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) TmpMagFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) TmpCuFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) TmpAssiMechFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) AssiMechSeln_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) IgnTiOff_Sec_T_f32;
    
 	(void)Rte_Read_AmbT_Val(&AmbT_DegCgrd_T_f32);			
	(void)Rte_Read_AmbTVld_Logl(&AmbTVld_Cnt_T_logl);		
	(void)Rte_Read_EcuTFild_Val(&EcuTFild_DegCgrd_T_f32);	
	(void)Rte_Read_EngOilT_Val(&EngOilT_DegCgrd_T_f32);		
	(void)Rte_Read_EngOilTVld_Logl(&EngOilTVld_Cnt_T_logl);	
    (void)Rte_Read_DualEcuFltMtgtnEna_Logl(&DualEcuFltMtgtnEna_Cnt_T_logl);
    (void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);
    (void)Rte_Read_VehTiVld_Logl(&VehTiVld_Cnt_T_logl);
    (void)Rte_Read_IgnTiOff_Val(&IgnTiOff_Sec_T_u32);
    
    IgnTiOff_Sec_T_f32 = (float32)IgnTiOff_Sec_T_u32;
    /* Bit_Pack_Decoder */
    if((MotAndThermProtnLoaMod_Cnt_T_u08 & FETLOABITMASK_CNT_U08) == FETLOABITMASK_CNT_U08)
    {
        FetLoaMtgtnEna_Cnt_T_logl = TRUE;
    }
   
   
	if((DualEcuFltMtgtnEna_Cnt_T_logl == FALSE) && (FetLoaMtgtnEna_Cnt_T_logl == FALSE))
    {
        *Rte_Pim_TEstimnFltMtgtnCalIdx() = DUALECUSTSIDX_CNT_U08;
        
        FilLpInit(0.0F,Rte_Prm_TEstimnSiAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_SiFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnMagAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_MagFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnCuAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_CuFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_AssiMechFilLp());        
        
    }
    else if(FetLoaMtgtnEna_Cnt_T_logl == FALSE)
    {
        *Rte_Pim_TEstimnFltMtgtnCalIdx() = SNGECUSTSIDX_CNT_U08;
        
        FilLpInit(0.0F,Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_SiFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_MagFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_CuFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_AssiMechFilLp());       
	}
    else if(DualEcuFltMtgtnEna_Cnt_T_logl == FALSE)
    {
        *Rte_Pim_TEstimnFltMtgtnCalIdx() = TESTIMNFETMTGTNIDX_CNT_U08;
        
        FilLpInit(0.0F,Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_SiFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_MagFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_CuFilLp());
        FilLpInit(0.0F,Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val(),ARCHGLBPRM_100MILLISEC_SEC_F32,Rte_Pim_AssiMechFilLp());         
    }
    else
    {
        /* Pass Value Through */
    }
    
    *Rte_Pim_DualEcuFltMtgtnPrev() = DualEcuFltMtgtnEna_Cnt_T_logl;
    *Rte_Pim_FetMtgtnEnaPrev() = FetLoaMtgtnEna_Cnt_T_logl;

    /*** TempEstimationFiltInitTrigger ***/
    (void)Rte_Call_TFilStVal_GetErrorStatus(&NvmErrSts_Cnt_T_enum);
    
    if(NvmErrSts_Cnt_T_enum != NVM_REQ_OK)
    {
        Rte_Pim_TFilStVal()->FilSiLpStVal = 0.0F;
        Rte_Pim_TFilStVal()->FilMagLpStVal = 0.0F;
        Rte_Pim_TFilStVal()->FilCuLpStVal = 0.0F;
        Rte_Pim_TFilStVal()->FilAssisMechLpStVal = 0.0F;
        Rte_Pim_TFilStVal()->FilSiLLStVal = 0.0F;
        Rte_Pim_TFilStVal()->FilMagLLStVal = 0.0F;
        Rte_Pim_TFilStVal()->FilCuLLStVal = 0.0F;
        Rte_Pim_TFilStVal()->FilAssisMechLLStVal = 0.0F;  
    }
    
    *Rte_Pim_RepInitCntrFlg() = TRUE;
    *Rte_Pim_RepInitCntrVal() = 0.0F;
    
	*Rte_Pim_FilSiLpValPwrUp() = Rte_Pim_TFilStVal()->FilSiLpStVal;
    *Rte_Pim_FilMagLpValPwrUp() = Rte_Pim_TFilStVal()->FilMagLpStVal;
    *Rte_Pim_FilCuLpValPwrUp() = Rte_Pim_TFilStVal()->FilCuLpStVal;
    *Rte_Pim_FilAssiMechLpValPwrUp() = Rte_Pim_TFilStVal()->FilAssisMechLpStVal;
    *Rte_Pim_FilSiLLValPwrUp() = Rte_Pim_TFilStVal()->FilSiLLStVal;
    *Rte_Pim_FilMagLLValPwrUp() = Rte_Pim_TFilStVal()->FilMagLLStVal;
    *Rte_Pim_FilCuLLValPwrUp() = Rte_Pim_TFilStVal()->FilCuLLStVal;
    *Rte_Pim_FilAssiMechLLValPwrUp() = Rte_Pim_TFilStVal()->FilAssisMechLLStVal;
    
    /*** PowerOnTasks ***/
    if((VehTiVld_Cnt_T_logl == TRUE) && (IgnTiOff_Sec_T_f32 <= TESTIMNIGNTIOFFTHD_CNT_F32))
		/*** InputIgnOffTime ***/
    {
        Rte_Pim_SiFilLp()->FilSt = *Rte_Pim_FilSiLpValPwrUp() * 
                                   Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        Rte_Pim_MagFilLp()->FilSt = *Rte_Pim_FilMagLpValPwrUp() *
                                    Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        Rte_Pim_CuFilLp()->FilSt = *Rte_Pim_FilCuLpValPwrUp() *
                                   Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        Rte_Pim_AssiMechFilLp()->FilSt = *Rte_Pim_FilAssiMechLpValPwrUp() *
                                         Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
                                         
        TmpSiFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilSiLLValPwrUp() - EcuTFild_DegCgrd_T_f32) *
                                     Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_SiTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                   ((TmpSiFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        MotFetT_DegCgrd_T_f32 = TmpSiFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32;
        
        TmpMagFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilMagLLValPwrUp() - EcuTFild_DegCgrd_T_f32) *
                                      Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_MagTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                    ((TmpMagFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        MotMagT_DegCgrd_T_f32 = TmpMagFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32;
        
        TmpCuFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilCuLLValPwrUp() - EcuTFild_DegCgrd_T_f32) *
                                     Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_CuTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                   ((TmpCuFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        MotWidgT_DegCgrd_T_f32 = TmpCuFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32;
        
        if((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] == FALSE) &&
           (AmbTVld_Cnt_T_logl == TRUE) &&
           (EngOilTVld_Cnt_T_logl == TRUE))
        {
            AssiMechSeln_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * Rte_Prm_TEstimnEngTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                         (AmbT_DegCgrd_T_f32 * Rte_Prm_TEstimnAmbTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        }
        else
        {
            AssiMechSeln_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
        }
        
        TmpAssiMechFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilAssiMechLLValPwrUp() - AssiMechSeln_DegCgrd_T_f32) *
                                           Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_AssiMechTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + AssiMechSeln_DegCgrd_T_f32) * Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                         ((TmpAssiMechFildVal_DegCgrd_T_f32 + AssiMechSeln_DegCgrd_T_f32) * Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        AssiMechT_DegCgrd_T_f32 = TmpAssiMechFildVal_DegCgrd_T_f32 + AssiMechSeln_DegCgrd_T_f32;
    }
    else
		/*** DefaultIgnOffTime ***/
    {
		/* Motor Silicon Initialization */
		MotFetT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32; 
		/* Motor Silicon Temperature LeadLag Filter Initialization, FiltSiLL same as SiTEstimnPrev */
		*Rte_Pim_SiTEstimnPrev() = ( (Rte_Prm_TEstimnCorrnTSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) + 
		                             (Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * EcuTFild_DegCgrd_T_f32)+
                                  	 (EcuTFild_DegCgrd_T_f32 * Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
		/* Motor Magnet Temperature Initialization */
		MotMagT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
		/* Motor Magnet Temperature LeadLag Filter Initialization, FiltMagLL same as MagTEstimnPrev */
		*Rte_Pim_MagTEstimnPrev() = ( (Rte_Prm_TEstimnCorrnTMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
		                              (Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * EcuTFild_DegCgrd_T_f32) +
									  (EcuTFild_DegCgrd_T_f32 * Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
		/* Motor Winding Temperature Initialization */
		MotWidgT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
		/* Motor Winding Temperature Lead Lag Initialization, FiltCuLL same as CuTEstimPrev */
		*Rte_Pim_CuTEstimnPrev() = ( (Rte_Prm_TEstimnCorrnTCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
		                             (Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * EcuTFild_DegCgrd_T_f32) +
									 (EcuTFild_DegCgrd_T_f32 * Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
		/* Assist Mechanism Temperature Initialization */
		if((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] == FALSE) &&
           (AmbTVld_Cnt_T_logl == TRUE) &&
           (EngOilTVld_Cnt_T_logl == TRUE))  
		{
		    AssiMechT_DegCgrd_T_f32 = ( (EngOilT_DegCgrd_T_f32 * Rte_Prm_TEstimnEngTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                         (AmbT_DegCgrd_T_f32 * Rte_Prm_TEstimnAmbTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
		}
		else
		{
		    AssiMechT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
		}
		/* Assist Mechanism Temperature LeagLag Filter Initialization, FiltAMLL same as AssiMechTEstimnPrev */
		*Rte_Pim_AssiMechTEstimnPrev() = ( (AssiMechT_DegCgrd_T_f32 * 
		                                   (Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + 
										                Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
										   (Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] *
										                Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
    }
	
	MotWidgT_DegCgrd_T_f32 = Lim_f32(MotWidgT_DegCgrd_T_f32,TESTIMNWIDGTLOLIM_DEGCGRD_F32,TESTIMNWIDGTHILIM_DEGCGRD_F32);
    MotMagT_DegCgrd_T_f32 = Lim_f32(MotMagT_DegCgrd_T_f32,TESTIMNMAGTLOLIM_DEGCGRD_F32,TESTIMNMAGTHILIM_DEGCGRD_F32); 
    MotFetT_DegCgrd_T_f32 = Lim_f32(MotFetT_DegCgrd_T_f32,TESTIMNFETTLOLIM_DEGCGRD_F32,TESTIMNFETTHILIM_DEGCGRD_F32); 
    AssiMechT_DegCgrd_T_f32 = Lim_f32(AssiMechT_DegCgrd_T_f32,TESTIMNASSIMECHTLOLIM_DEGCGRD_F32,TESTIMNASSIMECHTHILIM_DEGCGRD_F32);
        
    (void)Rte_Write_AssiMechT_Val(AssiMechT_DegCgrd_T_f32);        
    (void)Rte_Write_MotFetT_Val(MotFetT_DegCgrd_T_f32);	
    (void)Rte_Write_MotMagT_Val(MotMagT_DegCgrd_T_f32);	
    (void)Rte_Write_MotWidgT_Val(MotWidgT_DegCgrd_T_f32);
	
    
    if((VehTiVld_Cnt_T_logl == FALSE) && (Rte_Prm_TEstimnIgnOffCtrlEna_Logl() == TRUE))
    {
        RepInitCntrFlg_Cnt_T_logl = TRUE;
    }
    
    (void)Rte_Call_TFilStVal_SetRamBlockStatus(TRUE);
    
    Rte_IrvWrite_TEstimnInit1_FilStVariRepInitFlg(RepInitCntrFlg_Cnt_T_logl);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TEstimnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AmbT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AmbTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_AssiMechTEstimnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EngOilTVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IgnTiOff_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehTiVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotFetT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotMagT_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotWidgT_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_TEstimnPer1_FilStVariRepInitFlg(void)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_TFilStVal_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, TEstimn_CODE) TEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TEstimnPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) AmbT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) AmbTVld_Cnt_T_logl;	
	VAR(boolean, AUTOMATIC) AssiMechTEstimnDi_Cnt_T_logl;	
	VAR(float32, AUTOMATIC) EcuTFild_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EngOilT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) EngOilTVld_Cnt_T_logl;
	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) MotCurrPeakEstimd_AmprSqd_T_f32;
    VAR(boolean, AUTOMATIC) DualEcuFltMtgtnEna_Cnt_T_logl;
    VAR(uint8, AUTOMATIC)   MotAndThermProtnLoaMod_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) VehTiVld_Cnt_T_logl;
    VAR(uint32, AUTOMATIC)  IgnTiOff_Sec_T_u32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdSiFild_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) SiCorr_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdMagFild_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) MagCorr_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdCuFild_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) CuCorr_DegCgrd_T_f32;
		
	VAR(float32, AUTOMATIC) HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) HwVelFild_MotNwtMtrPerMotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) AMCorr_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) EcuTFildCorrnTSi_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) SiTempEst_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EcuTFildCorrnTMag_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MagTempEst_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) EcuTFildCorrnTCu_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) CuTempEst_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) AssiMechTInter_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) EngOilTSca_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AmbTSca_DegCgrd_T_f32;			  
	VAR(float32, AUTOMATIC) WtAvgTemp_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AssiMechTCalcn_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AssiMechTEstim_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) AssiMechTEstimn_DegCgrd_T_f32;
	
	VAR(float32, AUTOMATIC) AssiMechT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotFetT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotMagT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotWidgT_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) TmpSiFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) TmpMagFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) TmpCuFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) TmpAssiMechFildVal_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) AssiMechSeln_DegCgrd_T_f32;
    VAR(float32, AUTOMATIC) IgnTiOff_Sec_T_f32;
    
    VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) RepInitCntrFlg_Cnt_T_logl;
    
	(void)Rte_Read_AmbT_Val(&AmbT_DegCgrd_T_f32);							
	(void)Rte_Read_AmbTVld_Logl(&AmbTVld_Cnt_T_logl);						
	(void)Rte_Read_AssiMechTEstimnDi_Logl(&AssiMechTEstimnDi_Cnt_T_logl);	
	(void)Rte_Read_EcuTFild_Val(&EcuTFild_DegCgrd_T_f32);					
	(void)Rte_Read_EngOilT_Val(&EngOilT_DegCgrd_T_f32);						
	(void)Rte_Read_EngOilTVld_Logl(&EngOilTVld_Cnt_T_logl);					
	(void)Rte_Read_HwVel_Val(&HwVel_HwRadPerSec_T_f32);						
	(void)Rte_Read_MotCurrPeakEstimd_Val(&MotCurrPeakEstimd_AmprSqd_T_f32);	
	(void)Rte_Read_DualEcuFltMtgtnEna_Logl(&DualEcuFltMtgtnEna_Cnt_T_logl);
    (void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);
    (void)Rte_Read_VehTiVld_Logl(&VehTiVld_Cnt_T_logl);
    (void)Rte_Read_IgnTiOff_Val(&IgnTiOff_Sec_T_u32);
    RepInitCntrFlg_Cnt_T_logl = Rte_IrvRead_TEstimnPer1_FilStVariRepInitFlg();
    
    IgnTiOff_Sec_T_f32 = (float32)IgnTiOff_Sec_T_u32;
    
    /*** Bit Pack Decoder ***/
    if((MotAndThermProtnLoaMod_Cnt_T_u08 & FETLOABITMASK_CNT_U08) == FETLOABITMASK_CNT_U08)
    {
        FetLoaMtgtnEna_Cnt_T_logl = TRUE;
    }
    
    /*** Fault Mitigation Calibration Selection ***/
    FltMtgtnCalSeln (FetLoaMtgtnEna_Cnt_T_logl,
                     DualEcuFltMtgtnEna_Cnt_T_logl);

    
    if((RepInitCntrFlg_Cnt_T_logl == TRUE) && (*Rte_Pim_RepInitCntrFlg() == TRUE))
    {
        /*** FiltSVReinit ***/
        
        if((VehTiVld_Cnt_T_logl == TRUE) && (IgnTiOff_Sec_T_f32 <= TESTIMNIGNTIOFFTHD_CNT_F32))
			/*** InputIgnOffTime ***/
		{
            Rte_Pim_SiFilLp()->FilSt = *Rte_Pim_FilSiLpValPwrUp() * 
                                       Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            Rte_Pim_MagFilLp()->FilSt = *Rte_Pim_FilMagLpValPwrUp() *
                                        Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            Rte_Pim_CuFilLp()->FilSt = *Rte_Pim_FilCuLpValPwrUp() *
                                       Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            Rte_Pim_AssiMechFilLp()->FilSt = *Rte_Pim_FilAssiMechLpValPwrUp() *
                                             Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
                                             
            TmpSiFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilSiLLValPwrUp() - EcuTFild_DegCgrd_T_f32) *
                                         Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            *Rte_Pim_SiTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                       ((TmpSiFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            MotFetT_DegCgrd_T_f32 = TmpSiFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32;
            
            TmpMagFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilMagLLValPwrUp() - EcuTFild_DegCgrd_T_f32) *
                                          Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            *Rte_Pim_MagTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                        ((TmpMagFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            MotMagT_DegCgrd_T_f32 = TmpMagFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32;
            
            TmpCuFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilCuLLValPwrUp() - EcuTFild_DegCgrd_T_f32) *
                                         Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            *Rte_Pim_CuTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                       ((TmpCuFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32) * Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            MotWidgT_DegCgrd_T_f32 = TmpCuFildVal_DegCgrd_T_f32 + EcuTFild_DegCgrd_T_f32;
            
            if((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] == FALSE) &&
               (AmbTVld_Cnt_T_logl == TRUE) &&
               (EngOilTVld_Cnt_T_logl == TRUE))
            {
                AssiMechSeln_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * Rte_Prm_TEstimnEngTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                             (AmbT_DegCgrd_T_f32 * Rte_Prm_TEstimnAmbTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            }
            else
            {
                AssiMechSeln_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
            }
            
            TmpAssiMechFildVal_DegCgrd_T_f32 = (*Rte_Pim_FilAssiMechLLValPwrUp() - AssiMechSeln_DegCgrd_T_f32) *
                                               Exp_f32((EXPCOEFF_ULS_F32 * IgnTiOff_Sec_T_f32)/Rte_Prm_TEstimnTauAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            *Rte_Pim_AssiMechTEstimnPrev() = ((Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + AssiMechSeln_DegCgrd_T_f32) * Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                             ((TmpAssiMechFildVal_DegCgrd_T_f32 + AssiMechSeln_DegCgrd_T_f32) * Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
            AssiMechT_DegCgrd_T_f32 = TmpAssiMechFildVal_DegCgrd_T_f32 + AssiMechSeln_DegCgrd_T_f32;
        }	
		else
	        /*** DefaultIgnOffTime ***/
        {
			/* Motor Silicon Initialization */
			MotFetT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32; 
			/* Motor Silicon Temperature LeadLag Filter Initialization, FiltSiLL same as SiTEstimnPrev */
			*Rte_Pim_SiTEstimnPrev() = ( (Rte_Prm_TEstimnCorrnTSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) + 
			                             (Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * EcuTFild_DegCgrd_T_f32)+
                                      	 (EcuTFild_DegCgrd_T_f32 * Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
			/* Motor Magnet Temperature Initialization */
			MotMagT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
			/* Motor Magnet Temperature LeadLag Filter Initialization, FiltMagLL same as MagTEstimnPrev */
			*Rte_Pim_MagTEstimnPrev() = ( (Rte_Prm_TEstimnCorrnTMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
			                              (Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * EcuTFild_DegCgrd_T_f32) +
										  (EcuTFild_DegCgrd_T_f32 * Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
			/* Motor Winding Temperature Initialization */
			MotWidgT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
			/* Motor Winding Temperature Lead Lag Initialization, FiltCuLL same as CuTEstimPrev */
			*Rte_Pim_CuTEstimnPrev() = ( (Rte_Prm_TEstimnCorrnTCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
			                             (Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] * EcuTFild_DegCgrd_T_f32) +
										 (EcuTFild_DegCgrd_T_f32 * Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
			/* Assist Mechanism Temperature Initialization */
			if((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] == FALSE) &&
               (AmbTVld_Cnt_T_logl == TRUE) &&
               (EngOilTVld_Cnt_T_logl == TRUE))  
			{
			    AssiMechT_DegCgrd_T_f32 = ( (EngOilT_DegCgrd_T_f32 * Rte_Prm_TEstimnEngTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) +
                                             (AmbT_DegCgrd_T_f32 * Rte_Prm_TEstimnAmbTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
			}
			else
			{
			    AssiMechT_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
			}
			/* Assist Mechanism Temperature LeagLag Filter Initialization, FiltAMLL same as AssiMechTEstimnPrev */
			*Rte_Pim_AssiMechTEstimnPrev() = ( (AssiMechT_DegCgrd_T_f32 * 
			                                   (Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] + 
											                Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
											   (Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()] *
											                Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) );
        }
		
		MotWidgT_DegCgrd_T_f32 = Lim_f32(MotWidgT_DegCgrd_T_f32,TESTIMNWIDGTLOLIM_DEGCGRD_F32,TESTIMNWIDGTHILIM_DEGCGRD_F32);
        MotMagT_DegCgrd_T_f32 = Lim_f32(MotMagT_DegCgrd_T_f32,TESTIMNMAGTLOLIM_DEGCGRD_F32,TESTIMNMAGTHILIM_DEGCGRD_F32); 
        MotFetT_DegCgrd_T_f32 = Lim_f32(MotFetT_DegCgrd_T_f32,TESTIMNFETTLOLIM_DEGCGRD_F32,TESTIMNFETTHILIM_DEGCGRD_F32); 
        AssiMechT_DegCgrd_T_f32 = Lim_f32(AssiMechT_DegCgrd_T_f32,TESTIMNASSIMECHTLOLIM_DEGCGRD_F32,TESTIMNASSIMECHTHILIM_DEGCGRD_F32);
            
        (void)Rte_Write_AssiMechT_Val(AssiMechT_DegCgrd_T_f32);        
        (void)Rte_Write_MotFetT_Val(MotFetT_DegCgrd_T_f32);	
        (void)Rte_Write_MotMagT_Val(MotMagT_DegCgrd_T_f32);	
        (void)Rte_Write_MotWidgT_Val(MotWidgT_DegCgrd_T_f32);
		
        
        if((VehTiVld_Cnt_T_logl == FALSE) && (*Rte_Pim_RepInitCntrVal() <= Rte_Prm_TEstimnIgnOffMsgWaitTi_Val()))
        {
            *Rte_Pim_RepInitCntrFlg() = TRUE;
              /* Subsystem 1 */			
			*Rte_Pim_RepInitCntrVal() = *Rte_Pim_RepInitCntrVal() + ARCHGLBPRM_100MILLISEC_SEC_F32;
        }
		else
		{
			*Rte_Pim_RepInitCntrFlg() = FALSE;
			/* Subsystem - pass RepInitCntrVal as is */
		}
        
       
        
    }
    else
    {
        /*** Start of Delta Temperature Compensation ***/
        
        MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32 = MotCurrPeakEstimd_AmprSqd_T_f32 * (Rte_Prm_TEstimnAmbPwrMplr_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_dTEstimnAmbPwr() = MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32;
        
        /* Silicon */
        MotCurrPeakEstimdSiFild_AmprSqd_T_f32 = FilLpUpdOutp_f32(MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32,Rte_Pim_SiFilLp());
        SiCorr_DegCgrd_T_f32 = Lim_f32((MotCurrPeakEstimdSiFild_AmprSqd_T_f32 * (Rte_Prm_TEstimnSiAmbMplr_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])),
                                       (-Rte_Prm_TEstimnSiCorrnLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]),
                                       (Rte_Prm_TEstimnSiCorrnLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        *Rte_Pim_dTEstimnSiCorrn() = SiCorr_DegCgrd_T_f32;
    
        /* Magnet */
        MotCurrPeakEstimdMagFild_AmprSqd_T_f32 = FilLpUpdOutp_f32(MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32,Rte_Pim_MagFilLp());
        MagCorr_DegCgrd_T_f32 = Lim_f32((MotCurrPeakEstimdMagFild_AmprSqd_T_f32 * (Rte_Prm_TEstimnMagAmbMplr_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])),
                                        (-Rte_Prm_TEstimnMagCorrnLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]),
                                        (Rte_Prm_TEstimnMagCorrnLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        *Rte_Pim_dTEstimnMagCorrn() = MagCorr_DegCgrd_T_f32;
                                        
        /* Copper */
        MotCurrPeakEstimdCuFild_AmprSqd_T_f32 = FilLpUpdOutp_f32(MotCurrPeakEstimdMlpd_WattPerAmprSqd_T_f32,Rte_Pim_CuFilLp());
        CuCorr_DegCgrd_T_f32 = Lim_f32((MotCurrPeakEstimdCuFild_AmprSqd_T_f32 * (Rte_Prm_TEstimnCuAmbMplr_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])),
                                       (-Rte_Prm_TEstimnCuCorrnLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]),
                                       (Rte_Prm_TEstimnCuCorrnLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));			
        *Rte_Pim_dTEstimnCuCorrn() = CuCorr_DegCgrd_T_f32;										
    
        /* Assist Mechanism */
        HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32 = HwVel_HwRadPerSec_T_f32 * 					
                                                   HwVel_HwRadPerSec_T_f32 *
                                                   (Rte_Prm_TEstimnAssiMechDampgSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_dTEstimnAssiMechDampgSca() = HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32;
        
        HwVelFild_MotNwtMtrPerMotRadPerSec_T_f32 = FilLpUpdOutp_f32(HwVelMpld_MotNwtMtrPerMotRadPerSec_T_f32,Rte_Pim_AssiMechFilLp());
        AMCorr_DegCgrd_T_f32 = Lim_f32((HwVelFild_MotNwtMtrPerMotRadPerSec_T_f32 * (Rte_Prm_TEstimnAssiMechAmbMplr_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])),
                                    (-Rte_Prm_TEstimnAssiMechCorrLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]),
                                    (Rte_Prm_TEstimnAssiMechCorrLim_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));			
        *Rte_Pim_dTEstimnAssiMechCorrn() = AMCorr_DegCgrd_T_f32;

        /*** Start of Lead/Lag Filter Function ***/
	
        /* Silicon Lead/Lag Filter */
        
        EcuTFildCorrnTSi_DegCgrd_T_f32 = (EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTSi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        SiTempEst_DegCgrd_T_f32 = (EcuTFildCorrnTSi_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffB0_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) + 
                                  (*Rte_Pim_SiTEstimnPrev());
        *Rte_Pim_SiTEstimnPrev() = (SiTempEst_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
                                   (EcuTFildCorrnTSi_DegCgrd_T_f32 * (Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        
        MotFetT_DegCgrd_T_f32 = SiTempEst_DegCgrd_T_f32 + SiCorr_DegCgrd_T_f32;
        
        MotFetT_DegCgrd_T_f32 = Lim_f32(MotFetT_DegCgrd_T_f32,TESTIMNFETTLOLIM_DEGCGRD_F32,TESTIMNFETTHILIM_DEGCGRD_F32); 
        
        /* Magnet Lead/Lag Filter */
        
        EcuTFildCorrnTMag_DegCgrd_T_f32 = (EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTMag_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        MagTempEst_DegCgrd_T_f32 = (EcuTFildCorrnTMag_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffB0_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) + 
                                   (*Rte_Pim_MagTEstimnPrev());
        *Rte_Pim_MagTEstimnPrev() = (MagTempEst_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
                                    (EcuTFildCorrnTMag_DegCgrd_T_f32 * (Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        
        MotMagT_DegCgrd_T_f32 = MagTempEst_DegCgrd_T_f32 + MagCorr_DegCgrd_T_f32;
        
        MotMagT_DegCgrd_T_f32 = Lim_f32(MotMagT_DegCgrd_T_f32,TESTIMNMAGTLOLIM_DEGCGRD_F32,TESTIMNMAGTHILIM_DEGCGRD_F32); 
        
        /* Copper Lead/Lag Filter */
        
        EcuTFildCorrnTCu_DegCgrd_T_f32 = (EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTCu_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        CuTempEst_DegCgrd_T_f32 = (EcuTFildCorrnTCu_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffB0_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) + 
                                  (*Rte_Pim_CuTEstimnPrev());
        *Rte_Pim_CuTEstimnPrev() = (CuTempEst_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
                                   (EcuTFildCorrnTCu_DegCgrd_T_f32 * (Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        
        MotWidgT_DegCgrd_T_f32 = CuTempEst_DegCgrd_T_f32 + CuCorr_DegCgrd_T_f32;
        
        MotWidgT_DegCgrd_T_f32 = Lim_f32(MotWidgT_DegCgrd_T_f32,TESTIMNWIDGTLOLIM_DEGCGRD_F32,TESTIMNWIDGTHILIM_DEGCGRD_F32); 
        
        /* Assist Mechanism LeadLag Filter Initialization in Periodic1 */
        if(*Rte_Pim_AssiMechTInitEna() == FALSE)
        {
            if(((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) == FALSE) &&
                (AmbTVld_Cnt_T_logl == TRUE) &&
                (EngOilTVld_Cnt_T_logl == TRUE))
            {
                AssiMechTInter_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
                                               (AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));                            
            }
            else
            {
                AssiMechTInter_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
            }
        
            *Rte_Pim_AssiMechTEstimnPrev() = (AssiMechTInter_DegCgrd_T_f32 *
                                             ((Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) + 
                                             (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]))) +
                                             (((Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) * 
                                             (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])));   
            
            *Rte_Pim_AssiMechTInitEna() = TRUE;
                    
        }
        
        /* Assist Mechanism LeadLag Filter Re-Initialization */
        if((AmbTVld_Cnt_T_logl != (*Rte_Pim_AmbTVldPrev())) ||
           (EngOilTVld_Cnt_T_logl != (*Rte_Pim_EngOilTVldPrev())))
        {
            if ((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) == FALSE)
            {
                if((AmbTVld_Cnt_T_logl == TRUE) &&
                (EngOilTVld_Cnt_T_logl == TRUE))
                {
                    AssiMechTInter_DegCgrd_T_f32 = (EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
                                                   (AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
                }
                else
                {
                    AssiMechTInter_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;
                }
                
                *Rte_Pim_AssiMechTEstimnPrev() = (AssiMechTInter_DegCgrd_T_f32 *
                                                 ((Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) + 
                                                 (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]))) +
                                                 (((Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) * 
                                                 (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])));   
            }	    
        }
        
        *Rte_Pim_AmbTVldPrev() = AmbTVld_Cnt_T_logl;
        *Rte_Pim_EngOilTVldPrev() = EngOilTVld_Cnt_T_logl;
        
        
        EngOilTSca_DegCgrd_T_f32 = EngOilT_DegCgrd_T_f32 * (Rte_Prm_TEstimnEngTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_dTEstimnScadEngT() = EngOilTSca_DegCgrd_T_f32;
        
        AmbTSca_DegCgrd_T_f32 = AmbT_DegCgrd_T_f32 * (Rte_Prm_TEstimnAmbTSca_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        *Rte_Pim_dTEstimnScadAmbT() = AmbTSca_DegCgrd_T_f32;
        
        WtAvgTemp_DegCgrd_T_f32 = EngOilTSca_DegCgrd_T_f32 + AmbTSca_DegCgrd_T_f32;
        *Rte_Pim_dTEstimnWghtAvrgT() = WtAvgTemp_DegCgrd_T_f32;
        
        /* AssistMechanism Lead/Lag Filter */
        
        if(((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) == FALSE) &&
        (AmbTVld_Cnt_T_logl == TRUE) &&
        (EngOilTVld_Cnt_T_logl == TRUE))
        {
            /* AssiMechTCalcnDisabled */
            AssiMechTCalcn_DegCgrd_T_f32 = WtAvgTemp_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        }
        else
        {
            /* AssiMechTCalcnEnabled */
            AssiMechTCalcn_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32 + (Rte_Prm_TEstimnCorrnTAssiMech_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        }
        
        /* PreAssiMechTEstimEnabled */
        AssiMechTEstimn_DegCgrd_T_f32 = (AssiMechTCalcn_DegCgrd_T_f32 * (Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
                                        (*Rte_Pim_AssiMechTEstimnPrev());
        
        *Rte_Pim_AssiMechTEstimnPrev() = (AssiMechTEstimn_DegCgrd_T_f32 * (Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()])) +
                                        (AssiMechTCalcn_DegCgrd_T_f32  * (Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]));
        
        if(AssiMechTEstimnDi_Cnt_T_logl == TRUE)
        {
            /* AssiMechTEstimnEnabled */
            
            AssiMechTEstim_DegCgrd_T_f32 = (Rte_Prm_TEstimnAssiMechDftT_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]);
        }
        else
        {
            /* AssiMechTEstimnDisabled */
            
            AssiMechTEstim_DegCgrd_T_f32 = AMCorr_DegCgrd_T_f32 + AssiMechTEstimn_DegCgrd_T_f32;
            *Rte_Pim_dTEstimnAssiMechFil() = AssiMechTEstim_DegCgrd_T_f32;  
        }
        
    
        
        if(((Rte_Prm_TEstimnWghtAvrgTDi_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) == FALSE) &&
            (AmbTVld_Cnt_T_logl == TRUE) &&
            (EngOilTVld_Cnt_T_logl == TRUE))
            {
                AssiMechTEstim_DegCgrd_T_f32 = Lim_f32(AssiMechTEstim_DegCgrd_T_f32,
                                            ((*Rte_Pim_AssiMechTSlewLimPrev())+((-Rte_Prm_TEstimnAssiMechSlew_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) * ARCHGLBPRM_100MILLISEC_SEC_F32)),
                                            ((*Rte_Pim_AssiMechTSlewLimPrev())+((Rte_Prm_TEstimnAssiMechSlew_Ary1D()[*Rte_Pim_TEstimnFltMtgtnCalIdx()]) * ARCHGLBPRM_100MILLISEC_SEC_F32)));
                                            
                *Rte_Pim_AssiMechTSlewLimPrev() = AssiMechTEstim_DegCgrd_T_f32;
            }
            
        AssiMechT_DegCgrd_T_f32 = Lim_f32(AssiMechTEstim_DegCgrd_T_f32,TESTIMNASSIMECHTLOLIM_DEGCGRD_F32,TESTIMNASSIMECHTHILIM_DEGCGRD_F32);
        
        (void)Rte_Write_AssiMechT_Val(AssiMechT_DegCgrd_T_f32);	
        (void)Rte_Write_MotFetT_Val(MotFetT_DegCgrd_T_f32);		
        (void)Rte_Write_MotMagT_Val(MotMagT_DegCgrd_T_f32);		
        (void)Rte_Write_MotWidgT_Val(MotWidgT_DegCgrd_T_f32);        
    }   
	
	/*** PowerOffTasks ***/
    Rte_Pim_TFilStVal()->FilSiLpStVal = Lim_f32(Rte_Pim_SiFilLp()->FilSt, SILPFILVALMIN_ULS_F32, SILPFILVALMAX_ULS_F32);
    Rte_Pim_TFilStVal()->FilMagLpStVal = Lim_f32(Rte_Pim_MagFilLp()->FilSt, MAGLPFILVALMIN_ULS_F32, MAGLPFILVALMAX_ULS_F32);
    Rte_Pim_TFilStVal()->FilCuLpStVal = Lim_f32(Rte_Pim_CuFilLp()->FilSt, CULPFILVALMIN_ULS_F32, CULPFILVALMAX_ULS_F32);
    Rte_Pim_TFilStVal()->FilAssisMechLpStVal = Lim_f32(Rte_Pim_AssiMechFilLp()->FilSt, ASSIMECHLPFILVALMIN_ULS_F32, ASSIMECHLPFILVALMAX_ULS_F32);
    Rte_Pim_TFilStVal()->FilSiLLStVal = Lim_f32(*Rte_Pim_SiTEstimnPrev(), SILLFILVALMIN_ULS_F32, SILLFILVALMAX_ULS_F32);
    Rte_Pim_TFilStVal()->FilMagLLStVal = Lim_f32(*Rte_Pim_MagTEstimnPrev(), MAGLLFILVALMIN_ULS_F32, MAGLLFILVALMAX_ULS_F32);
    Rte_Pim_TFilStVal()->FilCuLLStVal = Lim_f32(*Rte_Pim_CuTEstimnPrev(), CULLFILVALMIN_ULS_F32, CULLFILVALMAX_ULS_F32);
    Rte_Pim_TFilStVal()->FilAssisMechLLStVal = Lim_f32(*Rte_Pim_AssiMechTEstimnPrev(), ASSIMECHLLFILVALMIN_ULS_F32, ASSIMECHLLFILVALMAX_ULS_F32);
    
    (void)Rte_Call_TFilStVal_SetRamBlockStatus(TRUE);
    
    
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TEstimn_STOP_SEC_CODE
#include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**************************************************************************************************************************
  * Name         :  FltMtgtnCalSeln
  * Description  :  Implementation of 'Fault Mitigation Calibration Selection' block in FDD.
  * Inputs       :  FetLoaMtgtnEna_Cnt_T_logl - Calculation in Per1
  *                 DualEcuFltMtgtnEna_Cnt_T_logl - Rte Input
  * Outputs		 :  None
  * Usage Notes  :  None
  ************************************************************************************************************************/
static FUNC(void, TEstimn_APPL_CODE) FltMtgtnCalSeln(VAR(boolean,AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl,
                                                     VAR(boolean,AUTOMATIC) DualEcuFltMtgtnEna_Cnt_T_logl)
{
    
    VAR(boolean, AUTOMATIC) DualEcuFltMtgtnExclsv_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) FetLoaMtgtnExclsv_Cnt_T_logl;
    
    DualEcuFltMtgtnExclsv_Cnt_T_logl = DualEcuFltMtgtnEna_Cnt_T_logl ^ *Rte_Pim_DualEcuFltMtgtnPrev();
    FetLoaMtgtnExclsv_Cnt_T_logl = FetLoaMtgtnEna_Cnt_T_logl ^ *Rte_Pim_FetMtgtnEnaPrev();
    
    if(((DualEcuFltMtgtnEna_Cnt_T_logl == FALSE) && (FetLoaMtgtnEna_Cnt_T_logl == FALSE)) &&
       ((DualEcuFltMtgtnExclsv_Cnt_T_logl == TRUE) || (FetLoaMtgtnExclsv_Cnt_T_logl == TRUE)))
    {
        *Rte_Pim_TEstimnFltMtgtnCalIdx() = DUALECUSTSIDX_CNT_U08;
        
        FilLpUpdGain(Rte_Prm_TEstimnSiAmbLpFilFrq_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_SiFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnMagAmbLpFilFrq_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_MagFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnCuAmbLpFilFrq_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_CuFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_AssiMechFilLp());
    }
    else if(((DualEcuFltMtgtnEna_Cnt_T_logl == TRUE) && (FetLoaMtgtnEna_Cnt_T_logl == FALSE)) &&
            ((DualEcuFltMtgtnExclsv_Cnt_T_logl == TRUE) || (FetLoaMtgtnExclsv_Cnt_T_logl == TRUE)))
    {
        *Rte_Pim_TEstimnFltMtgtnCalIdx() = SNGECUSTSIDX_CNT_U08;

        FilLpUpdGain(Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_SiFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_MagFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_CuFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_AssiMechFilLp());
    }
    else if(((DualEcuFltMtgtnEna_Cnt_T_logl == FALSE) && (FetLoaMtgtnEna_Cnt_T_logl == TRUE)) &&
            ((DualEcuFltMtgtnExclsv_Cnt_T_logl == TRUE) || (FetLoaMtgtnExclsv_Cnt_T_logl == TRUE)))
    {
        *Rte_Pim_TEstimnFltMtgtnCalIdx() = TESTIMNFETMTGTNIDX_CNT_U08;
        
        FilLpUpdGain(Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_SiFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_MagFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_CuFilLp());
        FilLpUpdGain(Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val(), ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_AssiMechFilLp());
    }
    else
    {
        /* Value Passes Through */
    }
    
    *Rte_Pim_DualEcuFltMtgtnPrev() = DualEcuFltMtgtnEna_Cnt_T_logl;
    *Rte_Pim_FetMtgtnEnaPrev() = FetLoaMtgtnEna_Cnt_T_logl;    
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
