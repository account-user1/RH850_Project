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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotRefMdl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTREFMDL_H
# define _RTE_MOTREFMDL_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_MotRefMdl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotBackEmfVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrAg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrDaxMax_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotCurrQaxCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncDax_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotReacncQax_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgDaxFfStat_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgQaxFfStat_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotRefMdl_MotVltgSatnIndFf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_BattVltg_BrdgVltg_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_LoaMgr_MotAndThermProtnLoaMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduDaxEstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotInduQaxEstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MotQuad1, RTE_VAR_INIT) Rte_MotQuadDetn_MotQuad_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotCtrlPrmEstimn_MotREstimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_MotTqCmdSca_MotTqCmdMrfScad_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_MotVel_MotVelMrf_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BrdgVltg_Val (6.0F)
#  define Rte_InitValue_DualEcuMotCtrlMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
#  define Rte_InitValue_MotBackEmfConEstimd_Val (0.025F)
#  define Rte_InitValue_MotBackEmfVltg_Val (0.0F)
#  define Rte_InitValue_MotCurrAg_Val (0.0F)
#  define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
#  define Rte_InitValue_MotCurrDaxMax_Val (0.0F)
#  define Rte_InitValue_MotCurrQaxCmd_Val (0.0F)
#  define Rte_InitValue_MotInduDaxEstimd_Val (0.00011889F)
#  define Rte_InitValue_MotInduQaxEstimd_Val (0.00011889F)
#  define Rte_InitValue_MotQuad_Val (1U)
#  define Rte_InitValue_MotREstimd_Val (0.005F)
#  define Rte_InitValue_MotReacncDax_Val (0.0F)
#  define Rte_InitValue_MotReacncQax_Val (0.0F)
#  define Rte_InitValue_MotTqCmdMrfScad_Val (0.0F)
#  define Rte_InitValue_MotVelMrf_Val (0.0F)
#  define Rte_InitValue_MotVltgDaxFf_Val (0.0F)
#  define Rte_InitValue_MotVltgDaxFfStat_Val (0.0F)
#  define Rte_InitValue_MotVltgQaxFf_Val (0.0F)
#  define Rte_InitValue_MotVltgQaxFfStat_Val (0.0F)
#  define Rte_InitValue_MotVltgSatnIndFf_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_BrdgVltg_Val Rte_Read_MotRefMdl_BrdgVltg_Val
#  define Rte_Read_MotRefMdl_BrdgVltg_Val(data) (*(data) = Rte_BattVltg_BrdgVltg_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DualEcuMotCtrlMtgtnEna_Logl Rte_Read_MotRefMdl_DualEcuMotCtrlMtgtnEna_Logl
#  define Rte_Read_MotRefMdl_DualEcuMotCtrlMtgtnEna_Logl(data) (*(data) = Rte_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_MotRefMdl_MotAndThermProtnLoaMod_Val
#  define Rte_Read_MotRefMdl_MotAndThermProtnLoaMod_Val(data) (*(data) = Rte_LoaMgr_MotAndThermProtnLoaMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotBackEmfConEstimd_Val Rte_Read_MotRefMdl_MotBackEmfConEstimd_Val
#  define Rte_Read_MotRefMdl_MotBackEmfConEstimd_Val(data) (*(data) = Rte_MotCtrlPrmEstimn_MotBackEmfConEstimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotInduDaxEstimd_Val Rte_Read_MotRefMdl_MotInduDaxEstimd_Val
#  define Rte_Read_MotRefMdl_MotInduDaxEstimd_Val(data) (*(data) = Rte_MotCtrlPrmEstimn_MotInduDaxEstimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotInduQaxEstimd_Val Rte_Read_MotRefMdl_MotInduQaxEstimd_Val
#  define Rte_Read_MotRefMdl_MotInduQaxEstimd_Val(data) (*(data) = Rte_MotCtrlPrmEstimn_MotInduQaxEstimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotQuad_Val Rte_Read_MotRefMdl_MotQuad_Val
#  define Rte_Read_MotRefMdl_MotQuad_Val(data) (*(data) = Rte_MotQuadDetn_MotQuad_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotREstimd_Val Rte_Read_MotRefMdl_MotREstimd_Val
#  define Rte_Read_MotRefMdl_MotREstimd_Val(data) (*(data) = Rte_MotCtrlPrmEstimn_MotREstimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmdMrfScad_Val Rte_Read_MotRefMdl_MotTqCmdMrfScad_Val
#  define Rte_Read_MotRefMdl_MotTqCmdMrfScad_Val(data) (*(data) = Rte_MotTqCmdSca_MotTqCmdMrfScad_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotVelMrf_Val Rte_Read_MotRefMdl_MotVelMrf_Val
#  define Rte_Read_MotRefMdl_MotVelMrf_Val(data) (*(data) = Rte_CDD_MotVel_MotVelMrf_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_MotBackEmfVltg_Val Rte_Write_MotRefMdl_MotBackEmfVltg_Val
#  define Rte_Write_MotRefMdl_MotBackEmfVltg_Val(data) (Rte_MotRefMdl_MotBackEmfVltg_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotCurrAg_Val Rte_Write_MotRefMdl_MotCurrAg_Val
#  define Rte_Write_MotRefMdl_MotCurrAg_Val(data) (Rte_MotRefMdl_MotCurrAg_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotCurrDaxCmd_Val Rte_Write_MotRefMdl_MotCurrDaxCmd_Val
#  define Rte_Write_MotRefMdl_MotCurrDaxCmd_Val(data) (Rte_MotRefMdl_MotCurrDaxCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotCurrDaxMax_Val Rte_Write_MotRefMdl_MotCurrDaxMax_Val
#  define Rte_Write_MotRefMdl_MotCurrDaxMax_Val(data) (Rte_MotRefMdl_MotCurrDaxMax_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotCurrQaxCmd_Val Rte_Write_MotRefMdl_MotCurrQaxCmd_Val
#  define Rte_Write_MotRefMdl_MotCurrQaxCmd_Val(data) (Rte_MotRefMdl_MotCurrQaxCmd_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotReacncDax_Val Rte_Write_MotRefMdl_MotReacncDax_Val
#  define Rte_Write_MotRefMdl_MotReacncDax_Val(data) (Rte_MotRefMdl_MotReacncDax_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotReacncQax_Val Rte_Write_MotRefMdl_MotReacncQax_Val
#  define Rte_Write_MotRefMdl_MotReacncQax_Val(data) (Rte_MotRefMdl_MotReacncQax_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVltgDaxFf_Val Rte_Write_MotRefMdl_MotVltgDaxFf_Val
#  define Rte_Write_MotRefMdl_MotVltgDaxFf_Val(data) (Rte_MotRefMdl_MotVltgDaxFf_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVltgDaxFfStat_Val Rte_Write_MotRefMdl_MotVltgDaxFfStat_Val
#  define Rte_Write_MotRefMdl_MotVltgDaxFfStat_Val(data) (Rte_MotRefMdl_MotVltgDaxFfStat_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVltgQaxFf_Val Rte_Write_MotRefMdl_MotVltgQaxFf_Val
#  define Rte_Write_MotRefMdl_MotVltgQaxFf_Val(data) (Rte_MotRefMdl_MotVltgQaxFf_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVltgQaxFfStat_Val Rte_Write_MotRefMdl_MotVltgQaxFfStat_Val
#  define Rte_Write_MotRefMdl_MotVltgQaxFfStat_Val(data) (Rte_MotRefMdl_MotVltgQaxFfStat_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotVltgSatnIndFf_Val Rte_Write_MotRefMdl_MotVltgSatnIndFf_Val
#  define Rte_Write_MotRefMdl_MotVltgSatnIndFf_Val(data) (Rte_MotRefMdl_MotVltgSatnIndFf_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_MotRefMdlCurrDaxBoostGain_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrDaxBoostGain_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlCurrItrnTolr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrItrnTolr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlIvtrDeadTiBrdgVltgSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlMotCurrDaxMaxSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlMotVelLpFilFrq_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlMotVelLpFilFrq_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlMotVltgDerivtvTiCon_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlTqItrnTolr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlTqItrnTolr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlVltgOverRThdSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlVltgOverRThdSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlMinCurrItrnLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlMinCurrItrnLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlRefLocnItrnLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlRefLocnItrnLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlTqItrnLim_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlTqItrnLim_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_SysGlbPrmMotPoleCnt_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmMotPoleCnt_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlFbCtrlDi_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlFbCtrlDi_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlVltgModDynCmpEna_Logl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrDaxBoostTqScaX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrDaxBoostTqScaX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrDaxBoostTqScaY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrDaxBoostTqScaY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrDaxQaxRefDelta_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlCurrDaxQaxRefDelta_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad13VltgSdlX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad13VltgSdlX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad13VltgSdlY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad13VltgSdlY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad24VltgSdlX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad24VltgSdlX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad24VltgSdlY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotRefMdlQuad24VltgSdlY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrDaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotCurrQaxCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgDaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_VltgQaxFfTermPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrDaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrQaxMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlCurrSqdMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlInterCalcnCurrDaxMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotCurrDaxBoost; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotTqCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVelFildFf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDyn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDynTerm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfStat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPhaAdvAtPeakTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncDaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlReacncQaxOverR; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlRelncTqCoeff; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlMinCurrNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_dMotRefMdlPeakTqNrItrn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_CosDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_f32_8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_SinDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(FilLpRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_MotRefMdl_MotVelLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_MotCurrDaxCmdPrev() \
  (&Rte_MotRefMdl_MotCurrDaxCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotCurrQaxCmdPrev() \
  (&Rte_MotRefMdl_MotCurrQaxCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VltgDaxFfTermPrev() \
  (&Rte_MotRefMdl_VltgDaxFfTermPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_VltgQaxFfTermPrev() \
  (&Rte_MotRefMdl_VltgQaxFfTermPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlCurrDaxAtPeakTq() \
  (&Rte_MotRefMdl_dMotRefMdlCurrDaxAtPeakTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlCurrDaxMin() \
  (&Rte_MotRefMdl_dMotRefMdlCurrDaxMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlCurrQaxMin() \
  (&Rte_MotRefMdl_dMotRefMdlCurrQaxMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlCurrSqdMin() \
  (&Rte_MotRefMdl_dMotRefMdlCurrSqdMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax() \
  (&Rte_MotRefMdl_dMotRefMdlInterCalcnCurrDaxMax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotCurrDaxBoost() \
  (&Rte_MotRefMdl_dMotRefMdlMotCurrDaxBoost) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotTqCmdLimd() \
  (&Rte_MotRefMdl_dMotRefMdlMotTqCmdLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotVelFildFf() \
  (&Rte_MotRefMdl_dMotRefMdlMotVelFildFf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotVltgDaxFfDyn() \
  (&Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDyn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm() \
  (&Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfDynTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotVltgDaxFfStat() \
  (&Rte_MotRefMdl_dMotRefMdlMotVltgDaxFfStat) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotVltgQaxFfDyn() \
  (&Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDyn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm() \
  (&Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfDynTerm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMotVltgQaxFfStat() \
  (&Rte_MotRefMdl_dMotRefMdlMotVltgQaxFfStat) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlPeakTq() \
  (&Rte_MotRefMdl_dMotRefMdlPeakTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlPhaAdvAtPeakTq() \
  (&Rte_MotRefMdl_dMotRefMdlPhaAdvAtPeakTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlReacncDaxOverR() \
  (&Rte_MotRefMdl_dMotRefMdlReacncDaxOverR) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlReacncQaxOverR() \
  (&Rte_MotRefMdl_dMotRefMdlReacncQaxOverR) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlRelncTqCoeff() \
  (&Rte_MotRefMdl_dMotRefMdlRelncTqCoeff) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlMinCurrNrItrn() \
  (&Rte_MotRefMdl_dMotRefMdlMinCurrNrItrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dMotRefMdlPeakTqNrItrn() \
  (&Rte_MotRefMdl_dMotRefMdlPeakTqNrItrn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_CosDelta() (&((*RtePim_CosDelta())[0]))
#  else
#   define Rte_Pim_CosDelta() RtePim_CosDelta()
#  endif
#  define RtePim_CosDelta() \
  (&Rte_MotRefMdl_CosDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_SinDelta() (&((*RtePim_SinDelta())[0]))
#  else
#   define Rte_Pim_SinDelta() RtePim_SinDelta()
#  endif
#  define RtePim_SinDelta() \
  (&Rte_MotRefMdl_SinDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotVelLpFil() \
  (&Rte_MotRefMdl_MotVelLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define MotRefMdl_START_SEC_CODE
# include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_MotRefMdlInit1 MotRefMdlInit1
#  define RTE_RUNNABLE_MotRefMdlPer1 MotRefMdlPer1
# endif

FUNC(void, MotRefMdl_CODE) MotRefMdlInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, MotRefMdl_CODE) MotRefMdlPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define MotRefMdl_STOP_SEC_CODE
# include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTREFMDL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
