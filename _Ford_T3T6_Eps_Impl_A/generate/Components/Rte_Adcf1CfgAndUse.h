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
 *          File:  Rte_Adcf1CfgAndUse.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Adcf1CfgAndUse>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ADCF1CFGANDUSE_H
# define _RTE_ADCF1CFGANDUSE_H

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

# include "Rte_Adcf1CfgAndUse_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AdcDiagcEndPtrOutp_Val (23U)
#  define Rte_InitValue_AdcDiagcStrtPtrOutp_Val (21U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_AdcDiagcEndPtrOutp_Val Rte_Read_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val
#  define Rte_Read_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val(data) (*(data) = Rte_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_AdcDiagcStrtPtrOutp_Val Rte_Read_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val
#  define Rte_Read_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val(data) (*(data) = Rte_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Adcf1CfgAndUse_Adcf1DiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_Adcf1CfgAndUse_Adcf1DiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_Adcf1DiagcEndPtr() \
  (&Rte_Adcf1CfgAndUse_Adcf1DiagcEndPtr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Adcf1DiagcStrtPtr() \
  (&Rte_Adcf1CfgAndUse_Adcf1DiagcStrtPtr) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define Adcf1CfgAndUse_START_SEC_CODE
# include "Adcf1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Adcf1CfgAndUsePer1 Adcf1CfgAndUsePer1
#  define RTE_RUNNABLE_Adcf1CfgAndUsePer2 Adcf1CfgAndUsePer2
#  define RTE_RUNNABLE_Adcf1CfgAndUse_Init Adcf1CfgAndUse_Init
#  define RTE_RUNNABLE_Adcf1EnaCnvn_Oper Adcf1EnaCnvn_Oper
# endif

FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUsePer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUsePer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUse_Init(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Adcf1CfgAndUse_CODE) Adcf1EnaCnvn_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Adcf1CfgAndUse_STOP_SEC_CODE
# include "Adcf1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ADCF1CFGANDUSE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
