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
 *          File:  Rte_StOutpCtrl.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <StOutpCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_STOUTPCTRL_H
# define _RTE_STOUTPCTRL_H

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

# include "Rte_StOutpCtrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_SysMotTqCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_StOutpCtrl_SysStReqDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaRateLim_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_LoaMgr_LoaSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiMotTqCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_DiagcMgr_SysDiRampRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperScaFctr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordSysSt_OperRampRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DiagcMgr_SysStFltOutpReqDi_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_VehStrtStopMotTqCmdSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_StOutpCtrl_VehStrtStopRampRate_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_DiagcStsCtrldShtDwnFltPrsnt_Logl (FALSE)
#  define Rte_InitValue_LoaRateLim_Val (1.0F)
#  define Rte_InitValue_LoaSca_Val (1.0F)
#  define Rte_InitValue_MotTqTranlDampgCmpl_Logl (FALSE)
#  define Rte_InitValue_SysDiMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_SysDiRampRate_Val (1.0F)
#  define Rte_InitValue_SysMotTqCmdRampRateDi_Logl (FALSE)
#  define Rte_InitValue_SysMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_SysOperMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_SysOperRampRate_Val (1.0F)
#  define Rte_InitValue_SysStFltOutpReqDi_Logl (FALSE)
#  define Rte_InitValue_SysStReqDi_Logl (FALSE)
#  define Rte_InitValue_VehStrtStopMotTqCmdSca_Val (1.0F)
#  define Rte_InitValue_VehStrtStopRampRate_Val (1.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DiagcStsCtrldShtDwnFltPrsnt_Logl Rte_Read_StOutpCtrl_DiagcStsCtrldShtDwnFltPrsnt_Logl
#  define Rte_Read_StOutpCtrl_DiagcStsCtrldShtDwnFltPrsnt_Logl(data) (*(data) = Rte_DiagcMgr_DiagcStsCtrldShtDwnFltPrsnt_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LoaRateLim_Val Rte_Read_StOutpCtrl_LoaRateLim_Val
#  define Rte_Read_StOutpCtrl_LoaRateLim_Val(data) (*(data) = Rte_LoaMgr_LoaRateLim_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_LoaSca_Val Rte_Read_StOutpCtrl_LoaSca_Val
#  define Rte_Read_StOutpCtrl_LoaSca_Val(data) (*(data) = Rte_LoaMgr_LoaSca_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotTqTranlDampgCmpl_Logl Rte_Read_StOutpCtrl_MotTqTranlDampgCmpl_Logl
#  define Rte_Read_StOutpCtrl_MotTqTranlDampgCmpl_Logl(data) (*(data) = Rte_MotTqTranlDampg_MotTqTranlDampgCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysDiMotTqCmdSca_Val Rte_Read_StOutpCtrl_SysDiMotTqCmdSca_Val
#  define Rte_Read_StOutpCtrl_SysDiMotTqCmdSca_Val(data) (*(data) = Rte_DiagcMgr_SysDiMotTqCmdSca_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysDiRampRate_Val Rte_Read_StOutpCtrl_SysDiRampRate_Val
#  define Rte_Read_StOutpCtrl_SysDiRampRate_Val(data) (*(data) = Rte_DiagcMgr_SysDiRampRate_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysMotTqCmdRampRateDi_Logl Rte_Read_StOutpCtrl_SysMotTqCmdRampRateDi_Logl
#  define Rte_Read_StOutpCtrl_SysMotTqCmdRampRateDi_Logl(data) (*(data) = Rte_CmnMfgSrv_SysMotTqCmdRampRateDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysOperMotTqCmdSca_Val Rte_Read_StOutpCtrl_SysOperMotTqCmdSca_Val
#  define Rte_Read_StOutpCtrl_SysOperMotTqCmdSca_Val(data) (*(data) = Rte_FordSysSt_OperScaFctr_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysOperRampRate_Val Rte_Read_StOutpCtrl_SysOperRampRate_Val
#  define Rte_Read_StOutpCtrl_SysOperRampRate_Val(data) (*(data) = Rte_FordSysSt_OperRampRate_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysStFltOutpReqDi_Logl Rte_Read_StOutpCtrl_SysStFltOutpReqDi_Logl
#  define Rte_Read_StOutpCtrl_SysStFltOutpReqDi_Logl(data) (*(data) = Rte_DiagcMgr_SysStFltOutpReqDi_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehStrtStopMotTqCmdSca_Val Rte_Read_StOutpCtrl_VehStrtStopMotTqCmdSca_Val
#  define Rte_Read_StOutpCtrl_VehStrtStopMotTqCmdSca_Val(data) (*(data) = Rte_StOutpCtrl_VehStrtStopMotTqCmdSca_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehStrtStopRampRate_Val Rte_Read_StOutpCtrl_VehStrtStopRampRate_Val
#  define Rte_Read_StOutpCtrl_VehStrtStopRampRate_Val(data) (*(data) = Rte_StOutpCtrl_VehStrtStopRampRate_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_SysMotTqCmdSca_Val Rte_Write_StOutpCtrl_SysMotTqCmdSca_Val
#  define Rte_Write_StOutpCtrl_SysMotTqCmdSca_Val(data) (Rte_StOutpCtrl_SysMotTqCmdSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStReqDi_Logl Rte_Write_StOutpCtrl_SysStReqDi_Logl
#  define Rte_Write_StOutpCtrl_SysStReqDi_Logl(data) (Rte_StOutpCtrl_SysStReqDi_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevCmdSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_dStOutpCtrlTarSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_StOutpCtrl_StOutpCtrlPrevSrc; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_StOutpCtrlPrevCmdSca() \
  (&Rte_StOutpCtrl_StOutpCtrlPrevCmdSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStOutpCtrlRateLim() \
  (&Rte_StOutpCtrl_dStOutpCtrlRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dStOutpCtrlTarSca() \
  (&Rte_StOutpCtrl_dStOutpCtrlTarSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_StOutpCtrlPrevSrc() \
  (&Rte_StOutpCtrl_StOutpCtrlPrevSrc) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define StOutpCtrl_START_SEC_CODE
# include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_StOutpCtrlInit1 StOutpCtrlInit1
#  define RTE_RUNNABLE_StOutpCtrlPer1 StOutpCtrlPer1
# endif

FUNC(void, StOutpCtrl_CODE) StOutpCtrlInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, StOutpCtrl_CODE) StOutpCtrlPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define StOutpCtrl_STOP_SEC_CODE
# include "StOutpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_STOUTPCTRL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
