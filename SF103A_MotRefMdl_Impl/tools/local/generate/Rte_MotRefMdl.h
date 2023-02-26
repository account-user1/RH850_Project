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
 *          File:  Rte_MotRefMdl.h
 *        Config:  C:/Component/SF103A_MotRefMdl_Impl/tools/Component.dpa
 *     SW-C Type:  MotRefMdl
 *  Generated at:  Fri Oct 20 16:20:39 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotRefMdl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTREFMDL_H
# define _RTE_MOTREFMDL_H

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

# include "Rte_MotRefMdl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotRefMdl
{
  /* PIM Handles section */
  P2VAR(Ary1D_f32_8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CosDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrDaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCurrQaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_f32_8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SinDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VltgDaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VltgQaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlCurrDaxAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlCurrDaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlCurrQaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlCurrSqdMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlInterCalcnCurrDaxMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMinCurrNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotCurrDaxBoost; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotTqCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotVelFildFf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotVltgDaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotVltgDaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotVltgDaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotVltgQaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotVltgQaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlMotVltgQaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlPeakTqNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlPhaAdvAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlReacncDaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlReacncQaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRefMdlRelncTqCoeff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotRefMdl, RTE_CONST, RTE_CONST) Rte_Inst_MotRefMdl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotRefMdl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BrdgVltg_Val (6.0F)
# define Rte_InitValue_DualEcuMotCtrlMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotBackEmfConEstimd_Val (0.025F)
# define Rte_InitValue_MotBackEmfVltg_Val (0.0F)
# define Rte_InitValue_MotCurrAg_Val (0.0F)
# define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
# define Rte_InitValue_MotCurrDaxMax_Val (0.0F)
# define Rte_InitValue_MotCurrQaxCmd_Val (0.0F)
# define Rte_InitValue_MotInduDaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotInduQaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotQuad_Val (1U)
# define Rte_InitValue_MotREstimd_Val (0.005F)
# define Rte_InitValue_MotReacncDax_Val (0.0F)
# define Rte_InitValue_MotReacncQax_Val (0.0F)
# define Rte_InitValue_MotTqCmdMrfScad_Val (0.0F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_MotVltgDaxFf_Val (0.0F)
# define Rte_InitValue_MotVltgDaxFfStat_Val (0.0F)
# define Rte_InitValue_MotVltgQaxFf_Val (0.0F)
# define Rte_InitValue_MotVltgQaxFfStat_Val (0.0F)
# define Rte_InitValue_MotVltgSatnIndFf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_BrdgVltg_Val(P2VAR(float32, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_DualEcuMotCtrlMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotBackEmfConEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotInduDaxEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotInduQaxEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotQuad_Val(P2VAR(MotQuad1, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotREstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotTqCmdMrfScad_Val(P2VAR(float32, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRefMdl_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_MOTREFMDL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotBackEmfVltg_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotCurrAg_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotCurrDaxCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotCurrDaxMax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotCurrQaxCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotReacncDax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotReacncQax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotVltgDaxFf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotVltgDaxFfStat_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotVltgQaxFf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotVltgQaxFfStat_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRefMdl_MotVltgSatnIndFf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrItrnTolr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlMotCurrDaxMaxSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlMotVelLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlMotVltgDerivtvTiCon_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlTqItrnTolr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlVltgOverRThdSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlMinCurrItrnLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlRefLocnItrnLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlTqItrnLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRefMdl_SysGlbPrmMotPoleCnt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlFbCtrlDi_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlVltgModDynCmpEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostTqScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostTqScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u1p15, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostTqScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u1p15_11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostTqScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrDaxQaxRefDelta_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlCurrDaxQaxRefDelta_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad13VltgSdlX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad13VltgSdlX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad13VltgSdlY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad13VltgSdlY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad24VltgSdlX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad24VltgSdlX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad24VltgSdlY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u3p13_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRefMdl_MotRefMdlQuad24VltgSdlY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BrdgVltg_Val Rte_Read_MotRefMdl_BrdgVltg_Val
# define Rte_Read_DualEcuMotCtrlMtgtnEna_Logl Rte_Read_MotRefMdl_DualEcuMotCtrlMtgtnEna_Logl
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_MotRefMdl_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotBackEmfConEstimd_Val Rte_Read_MotRefMdl_MotBackEmfConEstimd_Val
# define Rte_Read_MotInduDaxEstimd_Val Rte_Read_MotRefMdl_MotInduDaxEstimd_Val
# define Rte_Read_MotInduQaxEstimd_Val Rte_Read_MotRefMdl_MotInduQaxEstimd_Val
# define Rte_Read_MotQuad_Val Rte_Read_MotRefMdl_MotQuad_Val
# define Rte_Read_MotREstimd_Val Rte_Read_MotRefMdl_MotREstimd_Val
# define Rte_Read_MotTqCmdMrfScad_Val Rte_Read_MotRefMdl_MotTqCmdMrfScad_Val
# define Rte_Read_MotVelMrf_Val Rte_Read_MotRefMdl_MotVelMrf_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotBackEmfVltg_Val Rte_Write_MotRefMdl_MotBackEmfVltg_Val
# define Rte_Write_MotCurrAg_Val Rte_Write_MotRefMdl_MotCurrAg_Val
# define Rte_Write_MotCurrDaxCmd_Val Rte_Write_MotRefMdl_MotCurrDaxCmd_Val
# define Rte_Write_MotCurrDaxMax_Val Rte_Write_MotRefMdl_MotCurrDaxMax_Val
# define Rte_Write_MotCurrQaxCmd_Val Rte_Write_MotRefMdl_MotCurrQaxCmd_Val
# define Rte_Write_MotReacncDax_Val Rte_Write_MotRefMdl_MotReacncDax_Val
# define Rte_Write_MotReacncQax_Val Rte_Write_MotRefMdl_MotReacncQax_Val
# define Rte_Write_MotVltgDaxFf_Val Rte_Write_MotRefMdl_MotVltgDaxFf_Val
# define Rte_Write_MotVltgDaxFfStat_Val Rte_Write_MotRefMdl_MotVltgDaxFfStat_Val
# define Rte_Write_MotVltgQaxFf_Val Rte_Write_MotRefMdl_MotVltgQaxFf_Val
# define Rte_Write_MotVltgQaxFfStat_Val Rte_Write_MotRefMdl_MotVltgQaxFfStat_Val
# define Rte_Write_MotVltgSatnIndFf_Val Rte_Write_MotRefMdl_MotVltgSatnIndFf_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotRefMdlCurrDaxBoostGain_Val Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostGain_Val

# define Rte_Prm_MotRefMdlCurrItrnTolr_Val Rte_Prm_MotRefMdl_MotRefMdlCurrItrnTolr_Val

# define Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val Rte_Prm_MotRefMdl_MotRefMdlIvtrDeadTiBrdgVltgSca_Val

# define Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val Rte_Prm_MotRefMdl_MotRefMdlMotCurrDaxMaxSca_Val

# define Rte_Prm_MotRefMdlMotVelLpFilFrq_Val Rte_Prm_MotRefMdl_MotRefMdlMotVelLpFilFrq_Val

# define Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val Rte_Prm_MotRefMdl_MotRefMdlMotVltgDerivtvTiCon_Val

# define Rte_Prm_MotRefMdlTqItrnTolr_Val Rte_Prm_MotRefMdl_MotRefMdlTqItrnTolr_Val

# define Rte_Prm_MotRefMdlVltgOverRThdSca_Val Rte_Prm_MotRefMdl_MotRefMdlVltgOverRThdSca_Val

# define Rte_Prm_MotRefMdlMinCurrItrnLim_Val Rte_Prm_MotRefMdl_MotRefMdlMinCurrItrnLim_Val

# define Rte_Prm_MotRefMdlRefLocnItrnLim_Val Rte_Prm_MotRefMdl_MotRefMdlRefLocnItrnLim_Val

# define Rte_Prm_MotRefMdlTqItrnLim_Val Rte_Prm_MotRefMdl_MotRefMdlTqItrnLim_Val

# define Rte_Prm_SysGlbPrmMotPoleCnt_Val Rte_Prm_MotRefMdl_SysGlbPrmMotPoleCnt_Val

# define Rte_Prm_MotRefMdlFbCtrlDi_Logl Rte_Prm_MotRefMdl_MotRefMdlFbCtrlDi_Logl

# define Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl Rte_Prm_MotRefMdl_MotRefMdlVltgModDynCmpEna_Logl

# define Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostTqScaX_Ary1D

# define Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D Rte_Prm_MotRefMdl_MotRefMdlCurrDaxBoostTqScaY_Ary1D

# define Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D Rte_Prm_MotRefMdl_MotRefMdlCurrDaxQaxRefDelta_Ary1D

# define Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D Rte_Prm_MotRefMdl_MotRefMdlQuad13VltgSdlX_Ary1D

# define Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D Rte_Prm_MotRefMdl_MotRefMdlQuad13VltgSdlY_Ary1D

# define Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D Rte_Prm_MotRefMdl_MotRefMdlQuad24VltgSdlX_Ary1D

# define Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D Rte_Prm_MotRefMdl_MotRefMdlQuad24VltgSdlY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MotCurrDaxCmdPrev() (Rte_Inst_MotRefMdl->Pim_MotCurrDaxCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotCurrQaxCmdPrev() (Rte_Inst_MotRefMdl->Pim_MotCurrQaxCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VltgDaxFfTermPrev() (Rte_Inst_MotRefMdl->Pim_VltgDaxFfTermPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VltgQaxFfTermPrev() (Rte_Inst_MotRefMdl->Pim_VltgQaxFfTermPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlCurrDaxAtPeakTq() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlCurrDaxAtPeakTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlCurrDaxMin() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlCurrDaxMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlCurrQaxMin() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlCurrQaxMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlCurrSqdMin() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlCurrSqdMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlInterCalcnCurrDaxMax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotCurrDaxBoost() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotCurrDaxBoost) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotTqCmdLimd() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotTqCmdLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotVelFildFf() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotVelFildFf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotVltgDaxFfDyn() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotVltgDaxFfDyn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotVltgDaxFfDynTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotVltgDaxFfStat() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotVltgDaxFfStat) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotVltgQaxFfDyn() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotVltgQaxFfDyn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotVltgQaxFfDynTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMotVltgQaxFfStat() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMotVltgQaxFfStat) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlPeakTq() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlPeakTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlPhaAdvAtPeakTq() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlPhaAdvAtPeakTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlReacncDaxOverR() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlReacncDaxOverR) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlReacncQaxOverR() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlReacncQaxOverR) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlRelncTqCoeff() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlRelncTqCoeff) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlMinCurrNrItrn() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlMinCurrNrItrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRefMdlPeakTqNrItrn() (Rte_Inst_MotRefMdl->Pim_dMotRefMdlPeakTqNrItrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_CosDelta() (*Rte_Inst_MotRefMdl->Pim_CosDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_CosDelta() (Rte_Inst_MotRefMdl->Pim_CosDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_SinDelta() (*Rte_Inst_MotRefMdl->Pim_SinDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_SinDelta() (Rte_Inst_MotRefMdl->Pim_SinDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Rte_Pim_MotVelLpFil() (Rte_Inst_MotRefMdl->Pim_MotVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MotCurrDaxCmdPrev(void)
 *   float32 *Rte_Pim_MotCurrQaxCmdPrev(void)
 *   float32 *Rte_Pim_VltgDaxFfTermPrev(void)
 *   float32 *Rte_Pim_VltgQaxFfTermPrev(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrDaxAtPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrDaxMin(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrQaxMin(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrSqdMin(void)
 *   float32 *Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax(void)
 *   float32 *Rte_Pim_dMotRefMdlMotCurrDaxBoost(void)
 *   float32 *Rte_Pim_dMotRefMdlMotTqCmdLimd(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVelFildFf(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfDyn(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfStat(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfDyn(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfStat(void)
 *   float32 *Rte_Pim_dMotRefMdlPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlPhaAdvAtPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlReacncDaxOverR(void)
 *   float32 *Rte_Pim_dMotRefMdlReacncQaxOverR(void)
 *   float32 *Rte_Pim_dMotRefMdlRelncTqCoeff(void)
 *   uint8 *Rte_Pim_dMotRefMdlMinCurrNrItrn(void)
 *   uint8 *Rte_Pim_dMotRefMdlPeakTqNrItrn(void)
 *   float32 *Rte_Pim_CosDelta(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   float32 *Rte_Pim_SinDelta(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   FilLpRec1 *Rte_Pim_MotVelLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotRefMdlCurrDaxBoostGain_Val(void)
 *   float32 Rte_Prm_MotRefMdlCurrItrnTolr_Val(void)
 *   float32 Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val(void)
 *   float32 Rte_Prm_MotRefMdlTqItrnTolr_Val(void)
 *   float32 Rte_Prm_MotRefMdlVltgOverRThdSca_Val(void)
 *   uint8 Rte_Prm_MotRefMdlMinCurrItrnLim_Val(void)
 *   uint8 Rte_Prm_MotRefMdlRefLocnItrnLim_Val(void)
 *   uint8 Rte_Prm_MotRefMdlTqItrnLim_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *   boolean Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl(void)
 *   u4p12 *Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_11
 *   u1p15 *Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_11
 *   float32 *Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   u11p5 *Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u3p13 *Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_10
 *   u11p5 *Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u3p13 *Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_10
 *
 *********************************************************************************************************************/


# define MotRefMdl_START_SEC_CODE
# include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRefMdlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotRefMdlInit1 MotRefMdlInit1
FUNC(void, MotRefMdl_CODE) MotRefMdlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRefMdlPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotQuad_Val(MotQuad1 *data)
 *   Std_ReturnType Rte_Read_MotREstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrAg_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrDaxCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrDaxMax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrQaxCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotReacncDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotReacncQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgDaxFf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgDaxFfStat_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgQaxFf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgQaxFfStat_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgSatnIndFf_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotRefMdlPer1 MotRefMdlPer1
FUNC(void, MotRefMdl_CODE) MotRefMdlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotRefMdl_STOP_SEC_CODE
# include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTREFMDL_H */

#include "Rte_Stubs.h"
