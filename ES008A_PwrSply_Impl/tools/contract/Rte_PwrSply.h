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
 *          File:  Rte_PwrSply.h
 *     SW-C Type:  PwrSply
 *  Generated at:  Tue Mar 14 11:25:52 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PwrSply> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PWRSPLY_H
# define _RTE_PWRSPLY_H

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

# include "Rte_PwrSply_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PwrSply
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SpiTrsmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StrtUpSelfTestCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PwrSply, RTE_CONST, RTE_CONST) Rte_Inst_PwrSply; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PwrSply, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_SysSt_Val (3U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrSply_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_PWRSPLY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrSply_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrSply_PwrSplyNtc0x07BFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrSply_PwrSplyNtc0x07BPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrSply_PwrSplyNtc0x07CFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrSply_PwrSplyNtc0x07CPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrSply_PwrSplyNtc0x07DFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_PwrSply_PwrSplyNtc0x07DPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_SysSt_Val Rte_Read_PwrSply_SysSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_PwrSply_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_PwrSplyNtc0x07BFailStep_Val Rte_Prm_PwrSply_PwrSplyNtc0x07BFailStep_Val

# define Rte_Prm_PwrSplyNtc0x07BPassStep_Val Rte_Prm_PwrSply_PwrSplyNtc0x07BPassStep_Val

# define Rte_Prm_PwrSplyNtc0x07CFailStep_Val Rte_Prm_PwrSply_PwrSplyNtc0x07CFailStep_Val

# define Rte_Prm_PwrSplyNtc0x07CPassStep_Val Rte_Prm_PwrSply_PwrSplyNtc0x07CPassStep_Val

# define Rte_Prm_PwrSplyNtc0x07DFailStep_Val Rte_Prm_PwrSply_PwrSplyNtc0x07DFailStep_Val

# define Rte_Prm_PwrSplyNtc0x07DPassStep_Val Rte_Prm_PwrSply_PwrSplyNtc0x07DPassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_SpiTrsmErrCntr() (Rte_Inst_PwrSply->Pim_SpiTrsmErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReadWrOrderFlg1() (Rte_Inst_PwrSply->Pim_ReadWrOrderFlg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReadWrOrderFlg2() (Rte_Inst_PwrSply->Pim_ReadWrOrderFlg2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StrtUpSelfTestCmpl() (Rte_Inst_PwrSply->Pim_StrtUpSelfTestCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_SpiTrsmErrCntr(void)
 *   boolean *Rte_Pim_ReadWrOrderFlg1(void)
 *   boolean *Rte_Pim_ReadWrOrderFlg2(void)
 *   boolean *Rte_Pim_StrtUpSelfTestCmpl(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_PwrSplyNtc0x07BFailStep_Val(void)
 *   uint16 Rte_Prm_PwrSplyNtc0x07BPassStep_Val(void)
 *   uint16 Rte_Prm_PwrSplyNtc0x07CFailStep_Val(void)
 *   uint16 Rte_Prm_PwrSplyNtc0x07CPassStep_Val(void)
 *   uint16 Rte_Prm_PwrSplyNtc0x07DFailStep_Val(void)
 *   uint16 Rte_Prm_PwrSplyNtc0x07DPassStep_Val(void)
 *
 *********************************************************************************************************************/


# define PwrSply_START_SEC_CODE
# include "PwrSply_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrSplyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrSplyInit1 PwrSplyInit1
FUNC(void, PwrSply_CODE) PwrSplyInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrSplyPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
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

# define RTE_RUNNABLE_PwrSplyPer1 PwrSplyPer1
FUNC(void, PwrSply_CODE) PwrSplyPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PwrSply_STOP_SEC_CODE
# include "PwrSply_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1489507950
#    error "The magic number of the generated file <C:/Component/ES008A_PwrSply_Impl/tools/contract/Rte_PwrSply.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1489507950
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_PWRSPLY_H */
