/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CDD_MotRplCoggCmd.h
 *     SW-C Type:  CDD_MotRplCoggCmd
 *  Generated at:  Thu Feb 11 03:57:36 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotRplCoggCmd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTRPLCOGGCMD_H
# define _RTE_CDD_MOTRPLCOGGCMD_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_MotRplCoggCmd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_MotRplCoggCmd
{
  /* PIM Handles section */
  P2VAR(Ary1D_s1p14_512, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotCoggCmdY; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCmdCoggIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCmdMotCoggCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCmdMotRplCmdPreLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_MotRplCoggCmd, RTE_CONST, RTE_CONST) Rte_Inst_CDD_MotRplCoggCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_MotRplCoggCmd, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotRplCoggCmd_MotCoggCmdY_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotRplCoggCmd_MotCoggCmdY_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_CDD_MotRplCoggCmd_MotRplCoggCmdHrmncOrder1Elec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_CDD_MotRplCoggCmd_MotRplCoggCmdHrmncOrder2Elec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_CDD_MotRplCoggCmd_MotRplCoggCmdHrmncOrder3Elec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_MotCoggCmdY_GetErrorStatus Rte_Call_CDD_MotRplCoggCmd_MotCoggCmdY_GetErrorStatus
# define Rte_Call_MotCoggCmdY_SetRamBlockStatus Rte_Call_CDD_MotRplCoggCmd_MotCoggCmdY_SetRamBlockStatus


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val Rte_Prm_CDD_MotRplCoggCmd_MotRplCoggCmdHrmncOrder1Elec_Val

# define Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val Rte_Prm_CDD_MotRplCoggCmd_MotRplCoggCmdHrmncOrder2Elec_Val

# define Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val Rte_Prm_CDD_MotRplCoggCmd_MotRplCoggCmdHrmncOrder3Elec_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotRplCoggCmdMotCoggCmd() (Rte_Inst_CDD_MotRplCoggCmd->Pim_dMotRplCoggCmdMotCoggCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim() (Rte_Inst_CDD_MotRplCoggCmd->Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim() (Rte_Inst_CDD_MotRplCoggCmd->Pim_dMotRplCoggCmdMotRplCmdPreLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCmdCoggIdx() (Rte_Inst_CDD_MotRplCoggCmd->Pim_dMotRplCoggCmdCoggIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotCoggCmdY() (*Rte_Inst_CDD_MotRplCoggCmd->Pim_MotCoggCmdY) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotCoggCmdY() (Rte_Inst_CDD_MotRplCoggCmd->Pim_MotCoggCmdY) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotRplCoggCmdMotCoggCmd(void)
 *   float32 *Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim(void)
 *   float32 *Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim(void)
 *   uint16 *Rte_Pim_dMotRplCoggCmdCoggIdx(void)
 *   s1p14 *Rte_Pim_MotCoggCmdY(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_MotRplCoggCmd_START_SEC_CODE
# include "CDD_MotRplCoggCmd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotCoggCmdPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotCoggCmdPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMotCoggCmdPrm_Oper(s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetMotCoggCmdPrm_Oper GetMotCoggCmdPrm_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotRplCoggCmd_CODE) GetMotCoggCmdPrm_Oper(P2VAR(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_MotRplCoggCmd_CODE) GetMotCoggCmdPrm_Oper(P2VAR(Ary1D_s1p14_128, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_VAR) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCmdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotCoggCmdY_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotCoggCmdY_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotRplCoggCmdInit1 MotRplCoggCmdInit1
FUNC(void, CDD_MotRplCoggCmd_CODE) MotRplCoggCmdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotCoggCmdPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotCoggCmdPrm>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotCoggCmdY_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetMotCoggCmdPrm_Oper(const s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetMotCoggCmdPrm_Oper SetMotCoggCmdPrm_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CDD_MotRplCoggCmd_CODE) SetMotCoggCmdPrm_Oper(P2CONST(s1p14, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, CDD_MotRplCoggCmd_CODE) SetMotCoggCmdPrm_Oper(P2CONST(Ary1D_s1p14_128, AUTOMATIC, RTE_CDD_MOTRPLCOGGCMD_APPL_DATA) MotCoggCmdY_Arg, uint8 Idx_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define CDD_MotRplCoggCmd_STOP_SEC_CODE
# include "CDD_MotRplCoggCmd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1455183393
#    error "The magic number of the generated file <C:/Component/SF107A_MotRplCoggCmd_Impl/tools/contract/Rte_CDD_MotRplCoggCmd.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455183393
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_MOTRPLCOGGCMD_H */
