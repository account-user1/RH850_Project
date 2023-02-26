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
 *          File:  Rte_WdgM_Appl10.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <WdgM_Appl10>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_WDGM_APPL10_H
# define _RTE_WDGM_APPL10_H

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

# include "Rte_WdgM_Appl10_Type.h"
# include "Rte_DataHandleType.h"


# define WdgM_Appl10_START_SEC_CODE
# include "WdgM_Appl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ActivateSupervisionEntity WdgM_ActivateSupervisionEntity
#  define RTE_RUNNABLE_CheckpointReached WdgM_CheckpointReached
#  define RTE_RUNNABLE_DeactivateSupervisionEntity WdgM_DeactivateSupervisionEntity
#  define RTE_RUNNABLE_GetFirstExpiredSEID WdgM_GetFirstExpiredSEID
#  define RTE_RUNNABLE_GetGlobalStatus WdgM_GetGlobalStatus
#  define RTE_RUNNABLE_GetLocalStatus WdgM_GetLocalStatus
#  define RTE_RUNNABLE_GetMode WdgM_GetMode
#  define RTE_RUNNABLE_PerformReset WdgM_PerformReset
#  define RTE_RUNNABLE_SetMode WdgM_SetMode
#  define RTE_RUNNABLE_WdgM_MainFunction WdgM_MainFunction
# endif

FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_ActivateSupervisionEntity(WdgM_SupervisedEntityIdType SEID); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_CheckpointReached(WdgM_SupervisedEntityIdType parg0, WdgM_CheckpointIdType parg1); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_DeactivateSupervisionEntity(WdgM_SupervisedEntityIdType SEID); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_GetFirstExpiredSEID(P2VAR(WdgM_SupervisedEntityIdType, AUTOMATIC, RTE_WDGM_APPL10_APPL_VAR) SEID); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_GetGlobalStatus(P2VAR(WdgM_GlobalStatusType, AUTOMATIC, RTE_WDGM_APPL10_APPL_VAR) Status); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_GetLocalStatus(WdgM_SupervisedEntityIdType SEID, P2VAR(WdgM_LocalStatusType, AUTOMATIC, RTE_WDGM_APPL10_APPL_VAR) Status); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_GetMode(P2VAR(WdgM_ModeType, AUTOMATIC, RTE_WDGM_APPL10_APPL_VAR) Mode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_PerformReset(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, WdgM_Appl10_CODE) WdgM_SetMode(WdgM_ModeType Mode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, WdgM_Appl10_CODE) WdgM_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define WdgM_Appl10_STOP_SEC_CODE
# include "WdgM_Appl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_WdgM_AliveSupervision_E_NOT_OK (1U)

#  define RTE_E_WdgM_GlobalMode_E_NOT_OK (1U)

#  define RTE_E_WdgM_IndividualMode_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_WDGM_APPL10_H */

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
