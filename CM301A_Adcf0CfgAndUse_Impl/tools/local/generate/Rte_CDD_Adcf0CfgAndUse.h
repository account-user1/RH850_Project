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
 *          File:  Rte_CDD_Adcf0CfgAndUse.h
 *        Config:  C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea4/CM301A_Adcf0CfgAndUse_Impl-nz2999/CM301A_Adcf0CfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_Adcf0CfgAndUse
 *  Generated at:  Wed Aug 16 09:45:49 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_Adcf0CfgAndUse> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_ADCF0CFGANDUSE_H
# define _RTE_CDD_ADCF0CFGANDUSE_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_Adcf0CfgAndUse_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_Adcf0CfgAndUse
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Adcf0DiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Adcf0DiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_Adcf0CfgAndUse, RTE_CONST, RTE_CONST) Rte_Inst_CDD_Adcf0CfgAndUse; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_Adcf0CfgAndUse, TYPEDEF, RTE_CONST) Rte_Instance;



/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_Adcf0DiagcEndPtr() (Rte_Inst_CDD_Adcf0CfgAndUse->Pim_Adcf0DiagcEndPtr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Adcf0DiagcStrtPtr() (Rte_Inst_CDD_Adcf0CfgAndUse->Pim_Adcf0DiagcStrtPtr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_Adcf0DiagcEndPtr(void)
 *   uint8 *Rte_Pim_Adcf0DiagcStrtPtr(void)
 *
 *********************************************************************************************************************/


# define CDD_Adcf0CfgAndUse_START_SEC_CODE
# include "CDD_Adcf0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf0CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Adcf0CfgAndUseInit1 Adcf0CfgAndUseInit1
FUNC(void, CDD_Adcf0CfgAndUse_CODE) Adcf0CfgAndUseInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_Adcf0CfgAndUse_STOP_SEC_CODE
# include "CDD_Adcf0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_ADCF0CFGANDUSE_H */

#include "Rte_Stubs.h"
