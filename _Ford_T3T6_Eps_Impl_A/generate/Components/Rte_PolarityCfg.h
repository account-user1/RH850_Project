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
 *          File:  Rte_PolarityCfg.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PolarityCfg>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_POLARITYCFG_H
# define _RTE_POLARITYCFG_H

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

# include "Rte_PolarityCfg_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_AssiMechPolarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg0Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg1Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg2Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg3Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg4Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg5Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg6Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwAg7Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq0Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq1Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq2Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq3Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq4Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq5Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq6Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq7Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl0Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl1Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl2Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl3Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl4Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl5Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl6Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotAgMecl7Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_MotElecMeclPolarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AssiMechPolarity_Val (1)
#  define Rte_InitValue_HwAg0Polarity_Val (1)
#  define Rte_InitValue_HwAg1Polarity_Val (1)
#  define Rte_InitValue_HwAg2Polarity_Val (1)
#  define Rte_InitValue_HwAg3Polarity_Val (1)
#  define Rte_InitValue_HwAg4Polarity_Val (1)
#  define Rte_InitValue_HwAg5Polarity_Val (1)
#  define Rte_InitValue_HwAg6Polarity_Val (1)
#  define Rte_InitValue_HwAg7Polarity_Val (1)
#  define Rte_InitValue_HwTq0Polarity_Val (1)
#  define Rte_InitValue_HwTq1Polarity_Val (1)
#  define Rte_InitValue_HwTq2Polarity_Val (1)
#  define Rte_InitValue_HwTq3Polarity_Val (1)
#  define Rte_InitValue_HwTq4Polarity_Val (1)
#  define Rte_InitValue_HwTq5Polarity_Val (1)
#  define Rte_InitValue_HwTq6Polarity_Val (1)
#  define Rte_InitValue_HwTq7Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl0Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl1Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl2Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl3Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl4Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl5Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl6Polarity_Val (1)
#  define Rte_InitValue_MotAgMecl7Polarity_Val (1)
#  define Rte_InitValue_MotElecMeclPolarity_Val (1)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AssiMechPolarity_Val Rte_Write_PolarityCfg_AssiMechPolarity_Val
#  define Rte_Write_PolarityCfg_AssiMechPolarity_Val(data) (Rte_PolarityCfg_AssiMechPolarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg0Polarity_Val Rte_Write_PolarityCfg_HwAg0Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg0Polarity_Val(data) (Rte_PolarityCfg_HwAg0Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg1Polarity_Val Rte_Write_PolarityCfg_HwAg1Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg1Polarity_Val(data) (Rte_PolarityCfg_HwAg1Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg2Polarity_Val Rte_Write_PolarityCfg_HwAg2Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg2Polarity_Val(data) (Rte_PolarityCfg_HwAg2Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg3Polarity_Val Rte_Write_PolarityCfg_HwAg3Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg3Polarity_Val(data) (Rte_PolarityCfg_HwAg3Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg4Polarity_Val Rte_Write_PolarityCfg_HwAg4Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg4Polarity_Val(data) (Rte_PolarityCfg_HwAg4Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg5Polarity_Val Rte_Write_PolarityCfg_HwAg5Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg5Polarity_Val(data) (Rte_PolarityCfg_HwAg5Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg6Polarity_Val Rte_Write_PolarityCfg_HwAg6Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg6Polarity_Val(data) (Rte_PolarityCfg_HwAg6Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwAg7Polarity_Val Rte_Write_PolarityCfg_HwAg7Polarity_Val
#  define Rte_Write_PolarityCfg_HwAg7Polarity_Val(data) (Rte_PolarityCfg_HwAg7Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq0Polarity_Val Rte_Write_PolarityCfg_HwTq0Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq0Polarity_Val(data) (Rte_PolarityCfg_HwTq0Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq1Polarity_Val Rte_Write_PolarityCfg_HwTq1Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq1Polarity_Val(data) (Rte_PolarityCfg_HwTq1Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq2Polarity_Val Rte_Write_PolarityCfg_HwTq2Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq2Polarity_Val(data) (Rte_PolarityCfg_HwTq2Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq3Polarity_Val Rte_Write_PolarityCfg_HwTq3Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq3Polarity_Val(data) (Rte_PolarityCfg_HwTq3Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq4Polarity_Val Rte_Write_PolarityCfg_HwTq4Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq4Polarity_Val(data) (Rte_PolarityCfg_HwTq4Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq5Polarity_Val Rte_Write_PolarityCfg_HwTq5Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq5Polarity_Val(data) (Rte_PolarityCfg_HwTq5Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq6Polarity_Val Rte_Write_PolarityCfg_HwTq6Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq6Polarity_Val(data) (Rte_PolarityCfg_HwTq6Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq7Polarity_Val Rte_Write_PolarityCfg_HwTq7Polarity_Val
#  define Rte_Write_PolarityCfg_HwTq7Polarity_Val(data) (Rte_PolarityCfg_HwTq7Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl0Polarity_Val Rte_Write_PolarityCfg_MotAgMecl0Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl0Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl0Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl1Polarity_Val Rte_Write_PolarityCfg_MotAgMecl1Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl1Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl1Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl2Polarity_Val Rte_Write_PolarityCfg_MotAgMecl2Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl2Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl2Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl3Polarity_Val Rte_Write_PolarityCfg_MotAgMecl3Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl3Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl3Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl4Polarity_Val Rte_Write_PolarityCfg_MotAgMecl4Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl4Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl4Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl5Polarity_Val Rte_Write_PolarityCfg_MotAgMecl5Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl5Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl5Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl6Polarity_Val Rte_Write_PolarityCfg_MotAgMecl6Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl6Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl6Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotAgMecl7Polarity_Val Rte_Write_PolarityCfg_MotAgMecl7Polarity_Val
#  define Rte_Write_PolarityCfg_MotAgMecl7Polarity_Val(data) (Rte_PolarityCfg_MotAgMecl7Polarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_MotElecMeclPolarity_Val Rte_Write_PolarityCfg_MotElecMeclPolarity_Val
#  define Rte_Write_PolarityCfg_MotElecMeclPolarity_Val(data) (Rte_PolarityCfg_MotElecMeclPolarity_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PolarityCfgSaved_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)89, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_PolarityCfgSavedDft() (((P2CONST(Rte_Calprm_PolarityCfg_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_PolarityCfg_DEFAULT_RTE_CDATA_GROUP])->PolarityCfgSavedDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_PolarityCfg_PolarityCfgSaved; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PolarityCfgSaved() \
  (&Rte_PolarityCfg_PolarityCfgSaved) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define PolarityCfg_START_SEC_CODE
# include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_PolarityCfgInit1 PolarityCfgInit1
#  define RTE_RUNNABLE_PolarityCfgRead_Oper PolarityCfgRead_Oper
#  define RTE_RUNNABLE_PolarityCfgWr_Oper PolarityCfgWr_Oper
# endif

FUNC(void, PolarityCfg_CODE) PolarityCfgInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgRead_Oper(P2VAR(uint32, AUTOMATIC, RTE_POLARITYCFG_APPL_VAR) PolarityCfgSaved_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, PolarityCfg_CODE) PolarityCfgWr_Oper(uint32 PolarityCfgSaved_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PolarityCfg_STOP_SEC_CODE
# include "PolarityCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_PolarityCfgRead_PortIf1_E_NOT_OK (1U)

#  define RTE_E_PolarityCfgWr_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_POLARITYCFG_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
