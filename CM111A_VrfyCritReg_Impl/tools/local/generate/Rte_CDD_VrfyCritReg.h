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
 *          File:  Rte_CDD_VrfyCritReg.h
 *        Config:  E:/EA4NewTemplate/CM111A_VrfyCritReg_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_VrfyCritReg
 *  Generated at:  Tue Jun 13 15:33:39 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_VrfyCritReg> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_VRFYCRITREG_H
# define _RTE_CDD_VRFYCRITREG_H

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

# include "Rte_CDD_VrfyCritReg_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_VrfyCritReg
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MCalReadVrfyCritRegFltInfo; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MCalReadVrfyCritRegFltNvmInfo; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegSysCritRegActVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegSysCritRegAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dVrfyCritRegSysCritRegDesVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_VrfyCritReg, RTE_CONST, RTE_CONST) Rte_Inst_CDD_VrfyCritReg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_VrfyCritReg, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_VrfyCritReg_MCalWrVrfyRegFltInfoStorg_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CDD_VRFYCRITREG_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_VrfyCritReg_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_VrfyCritReg_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_MCalWrVrfyRegFltInfoStorg_GetErrorStatus Rte_Call_CDD_VrfyCritReg_MCalWrVrfyRegFltInfoStorg_GetErrorStatus
# define Rte_Call_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus Rte_Call_CDD_VrfyCritReg_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_VrfyCritReg_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MCalReadVrfyCritRegFltInfo() (Rte_Inst_CDD_VrfyCritReg->Pim_MCalReadVrfyCritRegFltInfo) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MCalReadVrfyCritRegFltNvmInfo() (Rte_Inst_CDD_VrfyCritReg->Pim_MCalReadVrfyCritRegFltNvmInfo) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegCritRegActVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegCritRegActVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegCritRegAdr() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegCritRegAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegCritRegDesVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegCritRegDesVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegSysCritRegActVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegSysCritRegActVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegSysCritRegAdr() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegSysCritRegAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dVrfyCritRegSysCritRegDesVal() (Rte_Inst_CDD_VrfyCritReg->Pim_dVrfyCritRegSysCritRegDesVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_MCalReadVrfyCritRegFltInfo(void)
 *   uint32 *Rte_Pim_MCalReadVrfyCritRegFltNvmInfo(void)
 *   uint32 *Rte_Pim_dVrfyCritRegCritRegActVal(void)
 *   uint32 *Rte_Pim_dVrfyCritRegCritRegAdr(void)
 *   uint32 *Rte_Pim_dVrfyCritRegCritRegDesVal(void)
 *   uint32 *Rte_Pim_dVrfyCritRegSysCritRegActVal(void)
 *   uint32 *Rte_Pim_dVrfyCritRegSysCritRegAdr(void)
 *   uint32 *Rte_Pim_dVrfyCritRegSysCritRegDesVal(void)
 *
 *********************************************************************************************************************/


# define CDD_VrfyCritReg_START_SEC_CODE
# include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MCalReadVrfyFailFltInfo_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MCalReadVrfyFailFltInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MCalReadVrfyFailFltInfo_Oper(uint8 PrphlId_Arg, uint16 ErrId_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MCalReadVrfyFailFltInfo_Oper MCalReadVrfyFailFltInfo_Oper
FUNC(void, CDD_VrfyCritReg_CODE) MCalReadVrfyFailFltInfo_Oper(uint8 PrphlId_Arg, uint16 ErrId_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VrfyCritRegInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MCalWrVrfyRegFltInfoStorg_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VrfyCritRegInit1 VrfyCritRegInit1
FUNC(void, CDD_VrfyCritReg_CODE) VrfyCritRegInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VrfyCritRegPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VrfyCritRegPer1 VrfyCritRegPer1
FUNC(void, CDD_VrfyCritReg_CODE) VrfyCritRegPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: VrfyCritRegPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_VrfyCritRegPer2 VrfyCritRegPer2
FUNC(void, CDD_VrfyCritReg_CODE) VrfyCritRegPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_VrfyCritReg_STOP_SEC_CODE
# include "CDD_VrfyCritReg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_VRFYCRITREG_H */

#include "Rte_Stubs.h"
