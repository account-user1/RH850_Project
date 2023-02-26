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
 *          File:  Rte_PwrUpSeq.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PwrUpSeq>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PWRUPSEQ_H
# define _RTE_PWRUPSEQ_H

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

# include "Rte_PwrUpSeq_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_PwrUpSeq_StrtUpSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrUpSeq_SysStWrmIninCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_FordT3T6McuCfg_MotDrvr1IninTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctATestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_PwrDiscnct_PwrDiscnctBTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_TmplMonr_TmplMonrIninTestCmpl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CodFlsCrcChkCmpl_Logl (FALSE)
#  define Rte_InitValue_CurrMeasWrmIninTestCmpl_Logl (FALSE)
#  define Rte_InitValue_MotDrvr0IninTestCmpl_Logl (FALSE)
#  define Rte_InitValue_MotDrvr1IninTestCmpl_Logl (FALSE)
#  define Rte_InitValue_PwrDiscnctATestCmpl_Logl (FALSE)
#  define Rte_InitValue_PwrDiscnctBTestCmpl_Logl (FALSE)
#  define Rte_InitValue_StrtUpSt_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_SysStWrmIninCmpl_Logl (FALSE)
#  define Rte_InitValue_TmplMonIninTestCmpl_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CodFlsCrcChkCmpl_Logl Rte_Read_PwrUpSeq_CodFlsCrcChkCmpl_Logl
#  define Rte_Read_PwrUpSeq_CodFlsCrcChkCmpl_Logl(data) (*(data) = Rte_CDD_FlsMem_CodFlsCrcChkCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CurrMeasWrmIninTestCmpl_Logl Rte_Read_PwrUpSeq_CurrMeasWrmIninTestCmpl_Logl
#  define Rte_Read_PwrUpSeq_CurrMeasWrmIninTestCmpl_Logl(data) (*(data) = Rte_CDD_CurrMeas_CurrMeasWrmIninTestCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvr0IninTestCmpl_Logl Rte_Read_PwrUpSeq_MotDrvr0IninTestCmpl_Logl
#  define Rte_Read_PwrUpSeq_MotDrvr0IninTestCmpl_Logl(data) (*(data) = Rte_GateDrv0Ctrl_MotDrvr0IninTestCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotDrvr1IninTestCmpl_Logl Rte_Read_PwrUpSeq_MotDrvr1IninTestCmpl_Logl
#  define Rte_Read_PwrUpSeq_MotDrvr1IninTestCmpl_Logl(data) (*(data) = Rte_CDD_FordT3T6McuCfg_MotDrvr1IninTestCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PwrDiscnctATestCmpl_Logl Rte_Read_PwrUpSeq_PwrDiscnctATestCmpl_Logl
#  define Rte_Read_PwrUpSeq_PwrDiscnctATestCmpl_Logl(data) (*(data) = Rte_PwrDiscnct_PwrDiscnctATestCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PwrDiscnctBTestCmpl_Logl Rte_Read_PwrUpSeq_PwrDiscnctBTestCmpl_Logl
#  define Rte_Read_PwrUpSeq_PwrDiscnctBTestCmpl_Logl(data) (*(data) = Rte_PwrDiscnct_PwrDiscnctBTestCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_PwrUpSeq_SysSt_Val
#  define Rte_Read_PwrUpSeq_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_TmplMonIninTestCmpl_Logl Rte_Read_PwrUpSeq_TmplMonIninTestCmpl_Logl
#  define Rte_Read_PwrUpSeq_TmplMonIninTestCmpl_Logl(data) (*(data) = Rte_TmplMonr_TmplMonrIninTestCmpl_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_StrtUpSt_Val Rte_Write_PwrUpSeq_StrtUpSt_Val
#  define Rte_Write_PwrUpSeq_StrtUpSt_Val(data) (Rte_PwrUpSeq_StrtUpSt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_SysStWrmIninCmpl_Logl Rte_Write_PwrUpSeq_SysStWrmIninCmpl_Logl
#  define Rte_Write_PwrUpSeq_SysStWrmIninCmpl_Logl(data) (Rte_PwrUpSeq_SysStWrmIninCmpl_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetGpioPwrTurnOffCtrl_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetGpioPwrTurnOffCtrl_Oper IoHwAb_SetGpioPwrTurnOffCtrl_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PwrUpSeq_PwrTurnOffCtrlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PwrTurnOffCtrlPrev() \
  (&Rte_PwrUpSeq_PwrTurnOffCtrlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define PwrUpSeq_START_SEC_CODE
# include "PwrUpSeq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_PwrTurnOffCtrl_Oper PwrTurnOffCtrl_Oper
#  define RTE_RUNNABLE_PwrUpSeqInit1 PwrUpSeqInit1
#  define RTE_RUNNABLE_PwrUpSeqPer1 PwrUpSeqPer1
# endif

FUNC(void, PwrUpSeq_CODE) PwrTurnOffCtrl_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, PwrUpSeq_CODE) PwrUpSeqInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, PwrUpSeq_CODE) PwrUpSeqPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define PwrUpSeq_STOP_SEC_CODE
# include "PwrUpSeq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetGpio_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PWRUPSEQ_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
