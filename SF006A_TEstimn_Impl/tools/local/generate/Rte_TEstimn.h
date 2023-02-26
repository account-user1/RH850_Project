/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_TEstimn.h
 *        Config:  C:/_Synergy_Projects/Working/SF006A_TEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  TEstimn
 *  Generated at:  Wed Dec 20 08:42:50 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TEstimn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TESTIMN_H
# define _RTE_TESTIMN_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_TEstimn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TEstimn
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AmbTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechTInitEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiMechTSlewLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CuFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CuTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DualEcuFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EngOilTVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FetMtgtnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilAssiMechLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilAssiMechLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilCuLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilCuLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilMagLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilMagLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilSiLLValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FilSiLpValPwrUp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MagFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MagTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RepInitCntrFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RepInitCntrVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SiFilLp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SiTEstimnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TEstimnFltMtgtnCalIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(TFilStValRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TFilStVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAmbPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAssiMechCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAssiMechDampgSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnAssiMechFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnCuCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnMagCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnScadAmbT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnScadEngT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnSiCorrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dTEstimnWghtAvrgT; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TEstimn, RTE_CONST, RTE_CONST) Rte_Inst_TEstimn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TEstimn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AmbT_Val (0.0F)
# define Rte_InitValue_AmbTVld_Logl (FALSE)
# define Rte_InitValue_AssiMechT_Val (25.0F)
# define Rte_InitValue_AssiMechTEstimnDi_Logl (FALSE)
# define Rte_InitValue_DualEcuFltMtgtnEna_Logl (FALSE)
# define Rte_InitValue_EcuTFild_Val (25.0F)
# define Rte_InitValue_EngOilT_Val (0.0F)
# define Rte_InitValue_EngOilTVld_Logl (FALSE)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_IgnTiOff_Val (0U)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotCurrPeakEstimd_Val (0.0F)
# define Rte_InitValue_MotFetT_Val (25.0F)
# define Rte_InitValue_MotMagT_Val (25.0F)
# define Rte_InitValue_MotWidgT_Val (25.0F)
# define Rte_InitValue_VehTiVld_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_AmbT_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_AmbTVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_AssiMechTEstimnDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_DualEcuFltMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_EcuTFild_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_EngOilT_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_EngOilTVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_IgnTiOff_Val(P2VAR(uint32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_MotCurrPeakEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TEstimn_VehTiVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_TESTIMN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_AssiMechT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_MotFetT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_MotMagT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TEstimn_MotWidgT_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TEstimn_TFilStVal_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_TESTIMN_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TEstimn_TFilStVal_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnIgnOffMsgWaitTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_TEstimn_TEstimnIgnOffCtrlEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAmbPwrMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAmbPwrMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAmbTSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAmbTSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechCorrLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechCorrLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechDampgSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechDampgSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechDftT_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechDftT_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechSlew_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnAssiMechSlew_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTAssiMech_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTAssiMech_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTCu_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTCu_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTMag_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTMag_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTSi_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCorrnTSi_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuCorrnLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuCorrnLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnEngTSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnEngTSca_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagCorrnLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagCorrnLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiAmbMplr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiCorrnLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiCorrnLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffA1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB0_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauAssiMech_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauAssiMech_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauCu_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauCu_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauMag_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauMag_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauSi_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnTauSi_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnWghtAvrgTDi_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TEstimn_TEstimnWghtAvrgTDi_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_TEstimn_TEstimnInit1_FilStVariRepInitFlg(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_TEstimn_TEstimnPer1_FilStVariRepInitFlg(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AmbT_Val Rte_Read_TEstimn_AmbT_Val
# define Rte_Read_AmbTVld_Logl Rte_Read_TEstimn_AmbTVld_Logl
# define Rte_Read_AssiMechTEstimnDi_Logl Rte_Read_TEstimn_AssiMechTEstimnDi_Logl
# define Rte_Read_DualEcuFltMtgtnEna_Logl Rte_Read_TEstimn_DualEcuFltMtgtnEna_Logl
# define Rte_Read_EcuTFild_Val Rte_Read_TEstimn_EcuTFild_Val
# define Rte_Read_EngOilT_Val Rte_Read_TEstimn_EngOilT_Val
# define Rte_Read_EngOilTVld_Logl Rte_Read_TEstimn_EngOilTVld_Logl
# define Rte_Read_HwVel_Val Rte_Read_TEstimn_HwVel_Val
# define Rte_Read_IgnTiOff_Val Rte_Read_TEstimn_IgnTiOff_Val
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_TEstimn_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotCurrPeakEstimd_Val Rte_Read_TEstimn_MotCurrPeakEstimd_Val
# define Rte_Read_VehTiVld_Logl Rte_Read_TEstimn_VehTiVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiMechT_Val Rte_Write_TEstimn_AssiMechT_Val
# define Rte_Write_MotFetT_Val Rte_Write_TEstimn_MotFetT_Val
# define Rte_Write_MotMagT_Val Rte_Write_TEstimn_MotMagT_Val
# define Rte_Write_MotWidgT_Val Rte_Write_TEstimn_MotWidgT_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_TFilStVal_GetErrorStatus Rte_Call_TEstimn_TFilStVal_GetErrorStatus
# define Rte_Call_TFilStVal_SetRamBlockStatus Rte_Call_TEstimn_TFilStVal_SetRamBlockStatus


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_TEstimnInit1_FilStVariRepInitFlg(data) \
  Rte_IrvWrite_TEstimn_TEstimnInit1_FilStVariRepInitFlg(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_TEstimnPer1_FilStVariRepInitFlg() \
  Rte_IrvRead_TEstimn_TEstimnPer1_FilStVariRepInitFlg()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_TEstimnAssiMechAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrq_Val

# define Rte_Prm_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrqDualEcuFltMtgtn_Val

# define Rte_Prm_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val Rte_Prm_TEstimn_TEstimnAssiMechAmbLpFilFrqFetMtgtnEna_Val

# define Rte_Prm_TEstimnCuAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrq_Val

# define Rte_Prm_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrqDualEcuFltMtgtn_Val

# define Rte_Prm_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val Rte_Prm_TEstimn_TEstimnCuAmbLpFilFrqFetMtgtnEna_Val

# define Rte_Prm_TEstimnIgnOffMsgWaitTi_Val Rte_Prm_TEstimn_TEstimnIgnOffMsgWaitTi_Val

# define Rte_Prm_TEstimnMagAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrq_Val

# define Rte_Prm_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrqDualEcuFltMtgtn_Val

# define Rte_Prm_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val Rte_Prm_TEstimn_TEstimnMagAmbLpFilFrqFetMtgtnEna_Val

# define Rte_Prm_TEstimnSiAmbLpFilFrq_Val Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrq_Val

# define Rte_Prm_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrqDualEcuFltMtgtn_Val

# define Rte_Prm_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val Rte_Prm_TEstimn_TEstimnSiAmbLpFilFrqFetMtgtnEna_Val

# define Rte_Prm_TEstimnIgnOffCtrlEna_Logl Rte_Prm_TEstimn_TEstimnIgnOffCtrlEna_Logl

# define Rte_Prm_TEstimnAmbPwrMplr_Ary1D Rte_Prm_TEstimn_TEstimnAmbPwrMplr_Ary1D

# define Rte_Prm_TEstimnAmbTSca_Ary1D Rte_Prm_TEstimn_TEstimnAmbTSca_Ary1D

# define Rte_Prm_TEstimnAssiMechAmbMplr_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechAmbMplr_Ary1D

# define Rte_Prm_TEstimnAssiMechCorrLim_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechCorrLim_Ary1D

# define Rte_Prm_TEstimnAssiMechDampgSca_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechDampgSca_Ary1D

# define Rte_Prm_TEstimnAssiMechDftT_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechDftT_Ary1D

# define Rte_Prm_TEstimnAssiMechLLFilCoeffA1_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffA1_Ary1D

# define Rte_Prm_TEstimnAssiMechLLFilCoeffB0_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB0_Ary1D

# define Rte_Prm_TEstimnAssiMechLLFilCoeffB1_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechLLFilCoeffB1_Ary1D

# define Rte_Prm_TEstimnAssiMechSlew_Ary1D Rte_Prm_TEstimn_TEstimnAssiMechSlew_Ary1D

# define Rte_Prm_TEstimnCorrnTAssiMech_Ary1D Rte_Prm_TEstimn_TEstimnCorrnTAssiMech_Ary1D

# define Rte_Prm_TEstimnCorrnTCu_Ary1D Rte_Prm_TEstimn_TEstimnCorrnTCu_Ary1D

# define Rte_Prm_TEstimnCorrnTMag_Ary1D Rte_Prm_TEstimn_TEstimnCorrnTMag_Ary1D

# define Rte_Prm_TEstimnCorrnTSi_Ary1D Rte_Prm_TEstimn_TEstimnCorrnTSi_Ary1D

# define Rte_Prm_TEstimnCuAmbMplr_Ary1D Rte_Prm_TEstimn_TEstimnCuAmbMplr_Ary1D

# define Rte_Prm_TEstimnCuCorrnLim_Ary1D Rte_Prm_TEstimn_TEstimnCuCorrnLim_Ary1D

# define Rte_Prm_TEstimnCuLLFilCoeffA1_Ary1D Rte_Prm_TEstimn_TEstimnCuLLFilCoeffA1_Ary1D

# define Rte_Prm_TEstimnCuLLFilCoeffB0_Ary1D Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB0_Ary1D

# define Rte_Prm_TEstimnCuLLFilCoeffB1_Ary1D Rte_Prm_TEstimn_TEstimnCuLLFilCoeffB1_Ary1D

# define Rte_Prm_TEstimnEngTSca_Ary1D Rte_Prm_TEstimn_TEstimnEngTSca_Ary1D

# define Rte_Prm_TEstimnMagAmbMplr_Ary1D Rte_Prm_TEstimn_TEstimnMagAmbMplr_Ary1D

# define Rte_Prm_TEstimnMagCorrnLim_Ary1D Rte_Prm_TEstimn_TEstimnMagCorrnLim_Ary1D

# define Rte_Prm_TEstimnMagLLFilCoeffA1_Ary1D Rte_Prm_TEstimn_TEstimnMagLLFilCoeffA1_Ary1D

# define Rte_Prm_TEstimnMagLLFilCoeffB0_Ary1D Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB0_Ary1D

# define Rte_Prm_TEstimnMagLLFilCoeffB1_Ary1D Rte_Prm_TEstimn_TEstimnMagLLFilCoeffB1_Ary1D

# define Rte_Prm_TEstimnSiAmbMplr_Ary1D Rte_Prm_TEstimn_TEstimnSiAmbMplr_Ary1D

# define Rte_Prm_TEstimnSiCorrnLim_Ary1D Rte_Prm_TEstimn_TEstimnSiCorrnLim_Ary1D

# define Rte_Prm_TEstimnSiLLFilCoeffA1_Ary1D Rte_Prm_TEstimn_TEstimnSiLLFilCoeffA1_Ary1D

# define Rte_Prm_TEstimnSiLLFilCoeffB0_Ary1D Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB0_Ary1D

# define Rte_Prm_TEstimnSiLLFilCoeffB1_Ary1D Rte_Prm_TEstimn_TEstimnSiLLFilCoeffB1_Ary1D

# define Rte_Prm_TEstimnTauAssiMech_Ary1D Rte_Prm_TEstimn_TEstimnTauAssiMech_Ary1D

# define Rte_Prm_TEstimnTauCu_Ary1D Rte_Prm_TEstimn_TEstimnTauCu_Ary1D

# define Rte_Prm_TEstimnTauMag_Ary1D Rte_Prm_TEstimn_TEstimnTauMag_Ary1D

# define Rte_Prm_TEstimnTauSi_Ary1D Rte_Prm_TEstimn_TEstimnTauSi_Ary1D

# define Rte_Prm_TEstimnWghtAvrgTDi_Ary1D Rte_Prm_TEstimn_TEstimnWghtAvrgTDi_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AssiMechTEstimnPrev() (Rte_Inst_TEstimn->Pim_AssiMechTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiMechTSlewLimPrev() (Rte_Inst_TEstimn->Pim_AssiMechTSlewLimPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CuTEstimnPrev() (Rte_Inst_TEstimn->Pim_CuTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilAssiMechLLValPwrUp() (Rte_Inst_TEstimn->Pim_FilAssiMechLLValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilAssiMechLpValPwrUp() (Rte_Inst_TEstimn->Pim_FilAssiMechLpValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilCuLLValPwrUp() (Rte_Inst_TEstimn->Pim_FilCuLLValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilCuLpValPwrUp() (Rte_Inst_TEstimn->Pim_FilCuLpValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilMagLLValPwrUp() (Rte_Inst_TEstimn->Pim_FilMagLLValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilMagLpValPwrUp() (Rte_Inst_TEstimn->Pim_FilMagLpValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilSiLLValPwrUp() (Rte_Inst_TEstimn->Pim_FilSiLLValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FilSiLpValPwrUp() (Rte_Inst_TEstimn->Pim_FilSiLpValPwrUp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MagTEstimnPrev() (Rte_Inst_TEstimn->Pim_MagTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RepInitCntrVal() (Rte_Inst_TEstimn->Pim_RepInitCntrVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SiTEstimnPrev() (Rte_Inst_TEstimn->Pim_SiTEstimnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAmbPwr() (Rte_Inst_TEstimn->Pim_dTEstimnAmbPwr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAssiMechCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnAssiMechCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAssiMechDampgSca() (Rte_Inst_TEstimn->Pim_dTEstimnAssiMechDampgSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnAssiMechFil() (Rte_Inst_TEstimn->Pim_dTEstimnAssiMechFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnCuCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnCuCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnMagCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnMagCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnScadAmbT() (Rte_Inst_TEstimn->Pim_dTEstimnScadAmbT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnScadEngT() (Rte_Inst_TEstimn->Pim_dTEstimnScadEngT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnSiCorrn() (Rte_Inst_TEstimn->Pim_dTEstimnSiCorrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dTEstimnWghtAvrgT() (Rte_Inst_TEstimn->Pim_dTEstimnWghtAvrgT) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TEstimnFltMtgtnCalIdx() (Rte_Inst_TEstimn->Pim_TEstimnFltMtgtnCalIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AmbTVldPrev() (Rte_Inst_TEstimn->Pim_AmbTVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiMechTInitEna() (Rte_Inst_TEstimn->Pim_AssiMechTInitEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DualEcuFltMtgtnPrev() (Rte_Inst_TEstimn->Pim_DualEcuFltMtgtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EngOilTVldPrev() (Rte_Inst_TEstimn->Pim_EngOilTVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FetMtgtnEnaPrev() (Rte_Inst_TEstimn->Pim_FetMtgtnEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RepInitCntrFlg() (Rte_Inst_TEstimn->Pim_RepInitCntrFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiMechFilLp() (Rte_Inst_TEstimn->Pim_AssiMechFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CuFilLp() (Rte_Inst_TEstimn->Pim_CuFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MagFilLp() (Rte_Inst_TEstimn->Pim_MagFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SiFilLp() (Rte_Inst_TEstimn->Pim_SiFilLp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TFilStVal() (Rte_Inst_TEstimn->Pim_TFilStVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */




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


# define TEstimn_START_SEC_CODE
# include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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

# define RTE_RUNNABLE_TEstimnInit1 TEstimnInit1
FUNC(void, TEstimn_CODE) TEstimnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_TEstimnPer1 TEstimnPer1
FUNC(void, TEstimn_CODE) TEstimnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TEstimn_STOP_SEC_CODE
# include "TEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TESTIMN_H */

#include "Rte_Stubs.h"
