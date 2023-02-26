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
 *          File:  SchM_Fls.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Header of BSW Scheduler for BSW Module <Fls>
 *********************************************************************************************************************/
#ifndef SCHM_FLS_H
# define SCHM_FLS_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# include "SchM_Fls_Type.h"

# define FLS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, FLS_CODE) Fls_MainFunction(void); /* PRQA S 3451 */ /* MD_Rte_3451 */

# define FLS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_CODE_FLASH_DISABLED(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_CODE_FLASH_DISABLED(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_DRIVERSTATE_DATA_PROTECTION(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_DRIVERSTATE_DATA_PROTECTION(void);
FUNC(void, RTE_CODE) SchM_Enter_Fls_FLS_REGISTER_PROTECTION(void);
FUNC(void, RTE_CODE) SchM_Exit_Fls_FLS_REGISTER_PROTECTION(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_FLS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
