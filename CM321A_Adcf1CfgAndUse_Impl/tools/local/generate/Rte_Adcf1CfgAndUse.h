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
 *        Config:  C:/myWork/CM321A_Adcf1CfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  Adcf1CfgAndUse
 *  Generated at:  Wed Aug  2 11:44:45 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Adcf1CfgAndUse> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ADCF1CFGANDUSE_H
# define _RTE_ADCF1CFGANDUSE_H

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

# include "Rte_Adcf1CfgAndUse_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Adcf1CfgAndUse
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Adcf1DiagcEndPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Adcf1DiagcStrtPtr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Adcf1CfgAndUse, RTE_CONST, RTE_CONST) Rte_Inst_Adcf1CfgAndUse; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Adcf1CfgAndUse, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AdcDiagcEndPtrOutp_Val (23U)
# define Rte_InitValue_AdcDiagcStrtPtrOutp_Val (21U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val(P2VAR(uint8, AUTOMATIC, RTE_ADCF1CFGANDUSE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val(P2VAR(uint8, AUTOMATIC, RTE_ADCF1CFGANDUSE_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AdcDiagcEndPtrOutp_Val Rte_Read_Adcf1CfgAndUse_AdcDiagcEndPtrOutp_Val
# define Rte_Read_AdcDiagcStrtPtrOutp_Val Rte_Read_Adcf1CfgAndUse_AdcDiagcStrtPtrOutp_Val


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_Adcf1DiagcEndPtr() (Rte_Inst_Adcf1CfgAndUse->Pim_Adcf1DiagcEndPtr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Adcf1DiagcStrtPtr() (Rte_Inst_Adcf1CfgAndUse->Pim_Adcf1DiagcStrtPtr) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_Adcf1DiagcEndPtr(void)
 *   uint8 *Rte_Pim_Adcf1DiagcStrtPtr(void)
 *
 *********************************************************************************************************************/


# define Adcf1CfgAndUse_START_SEC_CODE
# include "Adcf1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1CfgAndUsePer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Adcf1CfgAndUsePer1 Adcf1CfgAndUsePer1
FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUsePer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1CfgAndUsePer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_AdcDiagcEndPtrOutp_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_AdcDiagcStrtPtrOutp_Val(uint8 *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Adcf1CfgAndUsePer2 Adcf1CfgAndUsePer2
FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUsePer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1CfgAndUse_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Adcf1CfgAndUse_Init Adcf1CfgAndUse_Init
FUNC(void, Adcf1CfgAndUse_CODE) Adcf1CfgAndUse_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf1EnaCnvn_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <Adcf1EnaCnvn>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Adcf1EnaCnvn_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Adcf1EnaCnvn_Oper Adcf1EnaCnvn_Oper
FUNC(void, Adcf1CfgAndUse_CODE) Adcf1EnaCnvn_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Adcf1CfgAndUse_STOP_SEC_CODE
# include "Adcf1CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ADCF1CFGANDUSE_H */

#include "Rte_Stubs.h"
