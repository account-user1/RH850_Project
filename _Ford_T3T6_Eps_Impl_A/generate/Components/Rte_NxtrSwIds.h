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
 *          File:  Rte_NxtrSwIds.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <NxtrSwIds>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_NXTRSWIDS_H
# define _RTE_NXTRSWIDS_H

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

# include "Rte_NxtrSwIds_Type.h"
# include "Rte_DataHandleType.h"


# define NxtrSwIds_START_SEC_CODE
# include "NxtrSwIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_NxtrSwIdsInit1 NxtrSwIdsInit1
#  define RTE_RUNNABLE_NxtrSwIdsPsrInfoRd_Oper NxtrSwIdsPsrInfoRd_Oper
#  define RTE_RUNNABLE_NxtrSwIdsSwBuildDateTiRd_Oper NxtrSwIdsSwBuildDateTiRd_Oper
#  define RTE_RUNNABLE_NxtrSwIdsSwRelInfoRd_Oper NxtrSwIdsSwRelInfoRd_Oper
#  define RTE_RUNNABLE_NxtrSwIdsSwRelNrRd_Oper NxtrSwIdsSwRelNrRd_Oper
#  define RTE_RUNNABLE_NxtrSwIdsSwRelVerRd_Oper NxtrSwIdsSwRelVerRd_Oper
# endif

FUNC(void, NxtrSwIds_CODE) NxtrSwIdsInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, NxtrSwIds_CODE) NxtrSwIdsPsrInfoRd_Oper(P2VAR(uint32, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrId, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrRev); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define NxtrSwIds_STOP_SEC_CODE
# include "NxtrSwIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_NXTRSWIDS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
