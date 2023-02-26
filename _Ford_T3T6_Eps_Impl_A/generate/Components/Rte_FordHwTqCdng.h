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
 *          File:  Rte_FordHwTqCdng.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordHwTqCdng>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDHWTQCDNG_H
# define _RTE_FORDHWTQCDNG_H

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

# include "Rte_FordHwTqCdng_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordAppldFinalMotTqVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s8p7, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvAssiTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordBoostCrvInpTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordHwTqCdng_FordInpTqRawVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_FordMaxAsscTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s23pm8, RTE_VAR_INIT) Rte_FordHwTqCdng_FordReqdFinalMotTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(s5p10, RTE_VAR_INIT) Rte_FordHwTqCdng_FordSumBoostCrvInpTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_StabyCmp_AssiCmd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Assi_AssiCmdBas_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_AvlMotTq_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DualEcuIdn_EcuId_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_HwTqImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCdng_HwTqHysOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_Swp_MotTqCmdSwp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_PwrLimr_MotTqCmdPwrLimd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiCmd_Val (0.0F)
#  define Rte_InitValue_AssiCmdBas_Val (0.0F)
#  define Rte_InitValue_AvlMotTq_Val (0.0F)
#  define Rte_InitValue_EcuId_Val (0U)
#  define Rte_InitValue_FordAppldFinalMotTq_Val (0)
#  define Rte_InitValue_FordAppldFinalMotTqVld_Logl (FALSE)
#  define Rte_InitValue_FordBoostCrvAssiTq_Val (0)
#  define Rte_InitValue_FordBoostCrvInpTq_Val (0)
#  define Rte_InitValue_FordInpTqRaw_Val (0)
#  define Rte_InitValue_FordInpTqRawVld_Logl (FALSE)
#  define Rte_InitValue_FordMaxAsscTq_Val (0.0F)
#  define Rte_InitValue_FordReqdFinalMotTq_Val (0)
#  define Rte_InitValue_FordSumBoostCrvInpTq_Val (0)
#  define Rte_InitValue_FordVehSpd_Val (0.0F)
#  define Rte_InitValue_HwTq_Val (0.0F)
#  define Rte_InitValue_HwTqHysOvrl_Val (0.0F)
#  define Rte_InitValue_HwTqOvrl_Val (0.0F)
#  define Rte_InitValue_MotTqCmd_Val (0.0F)
#  define Rte_InitValue_MotTqCmdPwrLimd_Val (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AssiCmd_Val Rte_Read_FordHwTqCdng_AssiCmd_Val
#  define Rte_Read_FordHwTqCdng_AssiCmd_Val(data) (*(data) = Rte_StabyCmp_AssiCmd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AssiCmdBas_Val Rte_Read_FordHwTqCdng_AssiCmdBas_Val
#  define Rte_Read_FordHwTqCdng_AssiCmdBas_Val(data) (*(data) = Rte_Assi_AssiCmdBas_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AvlMotTq_Val Rte_Read_FordHwTqCdng_AvlMotTq_Val
#  define Rte_Read_FordHwTqCdng_AvlMotTq_Val(data) (*(data) = Rte_FordHwTqCdng_AvlMotTq_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_EcuId_Val Rte_Read_FordHwTqCdng_EcuId_Val
#  define Rte_Read_FordHwTqCdng_EcuId_Val(data) (*(data) = Rte_DualEcuIdn_EcuId_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordVehSpd_Val Rte_Read_FordHwTqCdng_FordVehSpd_Val
#  define Rte_Read_FordHwTqCdng_FordVehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTq_Val Rte_Read_FordHwTqCdng_HwTq_Val
#  define Rte_Read_FordHwTqCdng_HwTq_Val(data) (*(data) = Rte_ImcSigArbn_HwTqImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqHysOvrl_Val Rte_Read_FordHwTqCdng_HwTqHysOvrl_Val
#  define Rte_Read_FordHwTqCdng_HwTqHysOvrl_Val(data) (*(data) = Rte_FordHwTqCdng_HwTqHysOvrl_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_HwTqOvrl_Val Rte_Read_FordHwTqCdng_HwTqOvrl_Val
#  define Rte_Read_FordHwTqCdng_HwTqOvrl_Val(data) (*(data) = Rte_FordHwTqCmdOvrlLimr_FordColTqOvrl_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmd_Val Rte_Read_FordHwTqCdng_MotTqCmd_Val
#  define Rte_Read_FordHwTqCdng_MotTqCmd_Val(data) (*(data) = Rte_Swp_MotTqCmdSwp_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqCmdPwrLimd_Val Rte_Read_FordHwTqCdng_MotTqCmdPwrLimd_Val
#  define Rte_Read_FordHwTqCdng_MotTqCmdPwrLimd_Val(data) (*(data) = Rte_PwrLimr_MotTqCmdPwrLimd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordAppldFinalMotTq_Val Rte_Write_FordHwTqCdng_FordAppldFinalMotTq_Val
#  define Rte_Write_FordHwTqCdng_FordAppldFinalMotTq_Val(data) (Rte_FordHwTqCdng_FordAppldFinalMotTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordAppldFinalMotTqVld_Logl Rte_Write_FordHwTqCdng_FordAppldFinalMotTqVld_Logl
#  define Rte_Write_FordHwTqCdng_FordAppldFinalMotTqVld_Logl(data) (Rte_FordHwTqCdng_FordAppldFinalMotTqVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordBoostCrvAssiTq_Val Rte_Write_FordHwTqCdng_FordBoostCrvAssiTq_Val
#  define Rte_Write_FordHwTqCdng_FordBoostCrvAssiTq_Val(data) (Rte_FordHwTqCdng_FordBoostCrvAssiTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordBoostCrvInpTq_Val Rte_Write_FordHwTqCdng_FordBoostCrvInpTq_Val
#  define Rte_Write_FordHwTqCdng_FordBoostCrvInpTq_Val(data) (Rte_FordHwTqCdng_FordBoostCrvInpTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordInpTqRaw_Val Rte_Write_FordHwTqCdng_FordInpTqRaw_Val
#  define Rte_Write_FordHwTqCdng_FordInpTqRaw_Val(data) (Rte_FordHwTqCdng_FordInpTqRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordInpTqRawVld_Logl Rte_Write_FordHwTqCdng_FordInpTqRawVld_Logl
#  define Rte_Write_FordHwTqCdng_FordInpTqRawVld_Logl(data) (Rte_FordHwTqCdng_FordInpTqRawVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordMaxAsscTq_Val Rte_Write_FordHwTqCdng_FordMaxAsscTq_Val
#  define Rte_Write_FordHwTqCdng_FordMaxAsscTq_Val(data) (Rte_FordHwTqCdng_FordMaxAsscTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordReqdFinalMotTq_Val Rte_Write_FordHwTqCdng_FordReqdFinalMotTq_Val
#  define Rte_Write_FordHwTqCdng_FordReqdFinalMotTq_Val(data) (Rte_FordHwTqCdng_FordReqdFinalMotTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordSumBoostCrvInpTq_Val Rte_Write_FordHwTqCdng_FordSumBoostCrvInpTq_Val
#  define Rte_Write_FordHwTqCdng_FordSumBoostCrvInpTq_Val(data) (Rte_FordHwTqCdng_FordSumBoostCrvInpTq_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_SysGlbPrmSysKineRat_Val() (((P2CONST(Rte_Calprm_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Inin00_DEFAULT_RTE_CALPRM_GROUP])->SysGlbPrmSysKineRat_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordHwTqCdngAppldFinalMotTqVldTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCdngAppldFinalMotTqVldTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordHwTqCdngInpTqRawVldTiThd_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordHwTqCdngInpTqRawVldTiThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->PwrLimrStdOperMotEnvlpY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_PwrLimrStdOperMotEnvlpY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->PwrLimrStdOperMotEnvlpY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
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

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_dFordHwTqCdngFildBoostCrvAssiTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_AppldFinalMotTqVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordHwTqCdng_InpTqRawVldRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_dFordHwTqCdngFildBoostCrvAssiTq() \
  (&Rte_FordHwTqCdng_dFordHwTqCdngFildBoostCrvAssiTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AppldFinalMotTqVldRefTi() \
  (&Rte_FordHwTqCdng_AppldFinalMotTqVldRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_InpTqRawVldRefTi() \
  (&Rte_FordHwTqCdng_InpTqRawVldRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordHwTqCdng_START_SEC_CODE
# include "FordHwTqCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordHwTqCdngInit1 FordHwTqCdngInit1
#  define RTE_RUNNABLE_FordHwTqCdngPer1 FordHwTqCdngPer1
#  define RTE_RUNNABLE_FordHwTqCdngPer2 FordHwTqCdngPer2
# endif

FUNC(void, FordHwTqCdng_CODE) FordHwTqCdngInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordHwTqCdng_CODE) FordHwTqCdngPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordHwTqCdng_CODE) FordHwTqCdngPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordHwTqCdng_STOP_SEC_CODE
# include "FordHwTqCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDHWTQCDNG_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
