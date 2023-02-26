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
 *          File:  Rte_NvMProxy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <NvMProxy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_NVMPROXY_H
# define _RTE_NVMPROXY_H

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

# include "Rte_NvMProxy_Type.h"
# include "Rte_DataHandleType.h"


# define NvMProxy_START_SEC_CODE
# include "NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_EraseBlock NvMProxy_EraseNvBlock
#  define RTE_RUNNABLE_GetDataIndex NvMProxy_GetDataIndex
#  define RTE_RUNNABLE_GetErrorStatus NvMProxy_GetErrorStatus
#  define RTE_RUNNABLE_InvalidateNvBlock NvMProxy_InvalidateNvBlock
#  define RTE_RUNNABLE_NvMProxy_MainFunction NvMProxy_MainFunction
#  define RTE_RUNNABLE_ReadBlock NvMProxy_ReadBlock
#  define RTE_RUNNABLE_RestoreBlockDefaults NvMProxy_RestoreBlockDefaults
#  define RTE_RUNNABLE_SetBlockProtection NvMProxy_SetBlockProtection
#  define RTE_RUNNABLE_SetDataIndex NvM_SetDataIndex
#  define RTE_RUNNABLE_SetRamBlockStatus NvMProxy_SetRamBlockStatus
#  define RTE_RUNNABLE_WriteBlock NvMProxy_WriteBlock
# endif

FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_EraseNvBlock(NvM_BlockIdType parg0); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(void, NvMProxy_CODE) NvMProxy_GetDataIndex(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_InvalidateNvBlock(NvM_BlockIdType parg0); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(void, NvMProxy_CODE) NvMProxy_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_ReadBlock(NvM_BlockIdType parg0, dtRef_VOID DstPtr_Arg); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_RestoreBlockDefaults(NvM_BlockIdType parg0, dtRef_VOID DstPtr_Arg); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_SetBlockProtection(NvM_BlockIdType parg0, boolean ProtectionEnabled_Arg); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(void, NvMProxy_CODE) NvM_SetDataIndex(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, NvMProxy_CODE) NvMProxy_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr_Arg); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */

# define NvMProxy_STOP_SEC_CODE
# include "NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMAdministration_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_NVMPROXY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1330:  MISRA rule: 16.4
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
