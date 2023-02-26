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
 *          File:  Rte_CDD_FlsMem.h
 *        Config:  E:/EA4NewTemplate/CM102B_FlsMem_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FlsMem
 *  Generated at:  Tue Nov 21 14:06:15 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FlsMem> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FLSMEM_H
# define _RTE_CDD_FLSMEM_H

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

# include "Rte_CDD_FlsMem_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_FlsMem
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsCrcChkStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsDummyRead1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsDummyRead2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsDummyRead3; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsDummyRead4; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CodFlsSngBitErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CrcHwIdxKey; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrOnRstCrcChkCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dFlsMemVrfyCrcInitCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_FlsMem, RTE_CONST, RTE_CONST) Rte_Inst_CDD_FlsMem; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_FlsMem, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CodFlsCrcChkCmpl_Logl (FALSE)
# define Rte_InitValue_SwApplCrc_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FlsMem_CodFlsCrcChkCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FlsMem_SwApplCrc_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) CrcHwInRegAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_FLSMEM_APPL_VAR) ResvKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_FlsMem_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_CodFlsCrcChkCmpl_Logl Rte_Write_CDD_FlsMem_CodFlsCrcChkCmpl_Logl
# define Rte_Write_SwApplCrc_Val Rte_Write_CDD_FlsMem_SwApplCrc_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_CDD_FlsMem_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_ResvCrcHwUnit_Oper Rte_Call_CDD_FlsMem_ResvCrcHwUnit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_FlsMem_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CodFlsCrcChkStrtTi() (Rte_Inst_CDD_FlsMem->Pim_CodFlsCrcChkStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CodFlsDummyRead1() (Rte_Inst_CDD_FlsMem->Pim_CodFlsDummyRead1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CodFlsDummyRead2() (Rte_Inst_CDD_FlsMem->Pim_CodFlsDummyRead2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CodFlsDummyRead3() (Rte_Inst_CDD_FlsMem->Pim_CodFlsDummyRead3) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CodFlsDummyRead4() (Rte_Inst_CDD_FlsMem->Pim_CodFlsDummyRead4) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CrcHwIdxKey() (Rte_Inst_CDD_FlsMem->Pim_CrcHwIdxKey) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CodFlsSngBitErr() (Rte_Inst_CDD_FlsMem->Pim_CodFlsSngBitErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CrcChkCmpl() (Rte_Inst_CDD_FlsMem->Pim_CrcChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PwrOnRstCrcChkCmpl() (Rte_Inst_CDD_FlsMem->Pim_PwrOnRstCrcChkCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dFlsMemVrfyCrcInitCmpl() (Rte_Inst_CDD_FlsMem->Pim_dFlsMemVrfyCrcInitCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_CodFlsCrcChkStrtTi(void)
 *   uint32 *Rte_Pim_CodFlsDummyRead1(void)
 *   uint32 *Rte_Pim_CodFlsDummyRead2(void)
 *   uint32 *Rte_Pim_CodFlsDummyRead3(void)
 *   uint32 *Rte_Pim_CodFlsDummyRead4(void)
 *   uint32 *Rte_Pim_CrcHwIdxKey(void)
 *   boolean *Rte_Pim_CodFlsSngBitErr(void)
 *   boolean *Rte_Pim_CrcChkCmpl(void)
 *   boolean *Rte_Pim_PwrOnRstCrcChkCmpl(void)
 *   boolean *Rte_Pim_dFlsMemVrfyCrcInitCmpl(void)
 *
 *********************************************************************************************************************/


# define CDD_FlsMem_START_SEC_CODE
# include "CDD_FlsMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FlsMemInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SwApplCrc_Val(uint32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FlsMemInit1 FlsMemInit1
FUNC(void, CDD_FlsMem_CODE) FlsMemInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FlsMemPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_CodFlsCrcChkCmpl_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ResvCrcHwUnit_Oper(CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg, uint32 *CrcHwInRegAdr_Arg, uint32 *CrcHwOutRegAdr_Arg, uint32 StrtVal_Arg, uint32 *ResvKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ResvCrcHwUnit_PortIf2_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FlsMemPer1 FlsMemPer1
FUNC(void, CDD_FlsMem_CODE) FlsMemPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_FlsMem_STOP_SEC_CODE
# include "CDD_FlsMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_ResvCrcHwUnit_PortIf2_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FLSMEM_H */

#include "Rte_Stubs.h"
