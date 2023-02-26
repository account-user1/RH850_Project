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
 *          File:  Rte_TmplMonr.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/ES005C_TmplMonr_Impl/tools/Component.dpa
 *     SW-C Type:  TmplMonr
 *  Generated at:  Wed Aug  9 09:23:22 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TmplMonr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TMPLMONR_H
# define _RTE_TMPLMONR_H

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

# include "Rte_TmplMonr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TmplMonr
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AvrgElpdTiMicroSec; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrIninTestCmplFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrNtc40PrmByte; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrSpiReadWrOrderFlg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrSpiReadWrOrderFlg2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TmplMonrWdgRstrtCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrsmErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrsmErrNtcThd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TmplMonr, RTE_CONST, RTE_CONST) Rte_Inst_TmplMonr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TmplMonr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_TmplMonrIninTestCmpl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TmplMonr_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TmplMonr_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TmplMonr_TmplMonrIninTestCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_GetGpioPwrOutpEnaFb_Oper(P2VAR(boolean, AUTOMATIC, RTE_TMPLMONR_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TmplMonr_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_TmplMonr_TmplMonrPer1_ElpdTiMicroSec(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_IrvRead_TmplMonr_TmplMonrPer2_ElpdTiMicroSec(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_StrtUpSt_Val Rte_Read_TmplMonr_StrtUpSt_Val
# define Rte_Read_SysSt_Val Rte_Read_TmplMonr_SysSt_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_TmplMonrIninTestCmpl_Logl Rte_Write_TmplMonr_TmplMonrIninTestCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CtrlErrOut_Oper Rte_Call_TmplMonr_CtrlErrOut_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_TmplMonr_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_TmplMonr_GetTiSpan1MicroSec32bit_Oper
# define Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper Rte_Call_TmplMonr_IoHwAb_GetGpioPwrOutpEnaFb_Oper
# define Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper Rte_Call_TmplMonr_IoHwAb_SetGpioTmplMonrWdg_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_TmplMonr_SetNtcSts_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_TmplMonrPer1_ElpdTiMicroSec(data) \
  Rte_IrvWrite_TmplMonr_TmplMonrPer1_ElpdTiMicroSec(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_TmplMonrPer2_ElpdTiMicroSec() \
  Rte_IrvRead_TmplMonr_TmplMonrPer2_ElpdTiMicroSec()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AvrgElpdTiMicroSec() (Rte_Inst_TmplMonr->Pim_AvrgElpdTiMicroSec) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrsmErrCntr() (Rte_Inst_TmplMonr->Pim_TrsmErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrIninCntr() (Rte_Inst_TmplMonr->Pim_TmplMonrIninCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrNtc40PrmByte() (Rte_Inst_TmplMonr->Pim_TmplMonrNtc40PrmByte) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrWdgRstrtCnt() (Rte_Inst_TmplMonr->Pim_TmplMonrWdgRstrtCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrsmErrNtcThd() (Rte_Inst_TmplMonr->Pim_TrsmErrNtcThd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrIninTestCmplFlg() (Rte_Inst_TmplMonr->Pim_TmplMonrIninTestCmplFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrSpiReadWrOrderFlg1() (Rte_Inst_TmplMonr->Pim_TmplMonrSpiReadWrOrderFlg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TmplMonrSpiReadWrOrderFlg2() (Rte_Inst_TmplMonr->Pim_TmplMonrSpiReadWrOrderFlg2) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_AvrgElpdTiMicroSec(void)
 *   uint16 *Rte_Pim_TrsmErrCntr(void)
 *   uint8 *Rte_Pim_TmplMonrIninCntr(void)
 *   uint8 *Rte_Pim_TmplMonrNtc40PrmByte(void)
 *   uint8 *Rte_Pim_TmplMonrWdgRstrtCnt(void)
 *   uint8 *Rte_Pim_TrsmErrNtcThd(void)
 *   boolean *Rte_Pim_TmplMonrIninTestCmplFlg(void)
 *   boolean *Rte_Pim_TmplMonrSpiReadWrOrderFlg1(void)
 *   boolean *Rte_Pim_TmplMonrSpiReadWrOrderFlg2(void)
 *
 *********************************************************************************************************************/


# define TmplMonr_START_SEC_CODE
# include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrInit1
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
 *   Std_ReturnType Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TmplMonrInit1 TmplMonrInit1
FUNC(void, TmplMonr_CODE) TmplMonrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrPer1
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
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TmplMonrIninTestCmpl_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_TmplMonrPer1_ElpdTiMicroSec(uint32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CtrlErrOut_Oper(boolean PinSt_Arg, TrigReg1 TrigReg_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioPwrOutpEnaFb_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TmplMonrPer1 TmplMonrPer1
FUNC(void, TmplMonr_CODE) TmplMonrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint32 Rte_IrvRead_TmplMonrPer2_ElpdTiMicroSec(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioTmplMonrWdg_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TmplMonrPer2 TmplMonrPer2
FUNC(void, TmplMonr_CODE) TmplMonrPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TmplMonrPer3
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
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TmplMonrPer3 TmplMonrPer3
FUNC(void, TmplMonr_CODE) TmplMonrPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TmplMonr_STOP_SEC_CODE
# include "TmplMonr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetGpio_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TMPLMONR_H */

#include "Rte_Stubs.h"
