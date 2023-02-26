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
 *          File:  Rte_CDD_ChkPtAppl10.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_ChkPtAppl10>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_CHKPTAPPL10_H
# define _RTE_CDD_CHKPTAPPL10_H

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

# include "Rte_CDD_ChkPtAppl10_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_WDGM_APPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_WDGM_APPL10_APPL_CODE) WdgM_CheckpointReached(WdgM_SupervisedEntityIdType parg0, WdgM_CheckpointIdType parg1); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_WDGM_APPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ChkPt_100ms_Appl10_End_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)4, (WdgM_CheckpointIdType)1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_100ms_Appl10_Strt_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)4, (WdgM_CheckpointIdType)0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_10ms_Appl10_End_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)3, (WdgM_CheckpointIdType)1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_10ms_Appl10_Strt_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)3, (WdgM_CheckpointIdType)0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_2ms_Appl10_End_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)1, (WdgM_CheckpointIdType)1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_2ms_Appl10_Strt_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)1, (WdgM_CheckpointIdType)0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_4ms_Appl10_End_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)2, (WdgM_CheckpointIdType)1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Call_ChkPt_4ms_Appl10_Strt_CheckpointReached() (WdgM_CheckpointReached((WdgM_SupervisedEntityIdType)2, (WdgM_CheckpointIdType)0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_ChkPtAppl10_START_SEC_CODE
# include "CDD_ChkPtAppl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ChkPtAppl10_Init1 ChkPtAppl10_Init1
#  define RTE_RUNNABLE_ChkPt_100msAppl10End ChkPt_100msAppl10End
#  define RTE_RUNNABLE_ChkPt_100msAppl10Strt ChkPt_100msAppl10Strt
#  define RTE_RUNNABLE_ChkPt_10msAppl10End ChkPt_10msAppl10End
#  define RTE_RUNNABLE_ChkPt_10msAppl10Strt ChkPt_10msAppl10Strt
#  define RTE_RUNNABLE_ChkPt_2msAppl10End ChkPt_2msAppl10End
#  define RTE_RUNNABLE_ChkPt_2msAppl10Strt ChkPt_2msAppl10Strt
#  define RTE_RUNNABLE_ChkPt_4msAppl10End ChkPt_4msAppl10End
#  define RTE_RUNNABLE_ChkPt_4msAppl10Strt ChkPt_4msAppl10Strt
# endif

FUNC(void, CDD_ChkPtAppl10_CODE) ChkPtAppl10_Init1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_100msAppl10End(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_100msAppl10Strt(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_10msAppl10End(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_10msAppl10Strt(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_2msAppl10End(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_2msAppl10Strt(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_4msAppl10End(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_4msAppl10Strt(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_ChkPtAppl10_STOP_SEC_CODE
# include "CDD_ChkPtAppl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_WdgM_AliveSupervision_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_CHKPTAPPL10_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
