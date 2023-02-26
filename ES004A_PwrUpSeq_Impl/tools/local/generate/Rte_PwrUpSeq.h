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
 *          File:  Rte_PwrUpSeq.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/ES004A_PwrUpSeq_Impl/tools/Component.dpa
 *     SW-C Type:  PwrUpSeq
 *  Generated at:  Fri Jun 16 11:34:57 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PwrUpSeq> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_PWRUPSEQ_H
# define _RTE_PWRUPSEQ_H

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

# include "Rte_PwrUpSeq_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PwrUpSeq
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PwrTurnOffCtrlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PwrUpSeq, RTE_CONST, RTE_CONST) Rte_Inst_PwrUpSeq; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PwrUpSeq, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CodFlsCrcChkCmpl_Logl (FALSE)
# define Rte_InitValue_CurrMeasWrmIninTestCmpl_Logl (FALSE)
# define Rte_InitValue_MotDrvr0IninTestCmpl_Logl (FALSE)
# define Rte_InitValue_MotDrvr1IninTestCmpl_Logl (FALSE)
# define Rte_InitValue_PwrDiscnctATestCmpl_Logl (FALSE)
# define Rte_InitValue_PwrDiscnctBTestCmpl_Logl (FALSE)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_SysStWrmIninCmpl_Logl (FALSE)
# define Rte_InitValue_TmplMonIninTestCmpl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_CodFlsCrcChkCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_CurrMeasWrmIninTestCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_MotDrvr0IninTestCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_MotDrvr1IninTestCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_PwrDiscnctATestCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_PwrDiscnctBTestCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PwrUpSeq_TmplMonIninTestCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_PWRUPSEQ_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrUpSeq_StrtUpSt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PwrUpSeq_SysStWrmIninCmpl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PwrUpSeq_IoHwAb_SetGpioPwrTurnOffCtrl_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CodFlsCrcChkCmpl_Logl Rte_Read_PwrUpSeq_CodFlsCrcChkCmpl_Logl
# define Rte_Read_CurrMeasWrmIninTestCmpl_Logl Rte_Read_PwrUpSeq_CurrMeasWrmIninTestCmpl_Logl
# define Rte_Read_MotDrvr0IninTestCmpl_Logl Rte_Read_PwrUpSeq_MotDrvr0IninTestCmpl_Logl
# define Rte_Read_MotDrvr1IninTestCmpl_Logl Rte_Read_PwrUpSeq_MotDrvr1IninTestCmpl_Logl
# define Rte_Read_PwrDiscnctATestCmpl_Logl Rte_Read_PwrUpSeq_PwrDiscnctATestCmpl_Logl
# define Rte_Read_PwrDiscnctBTestCmpl_Logl Rte_Read_PwrUpSeq_PwrDiscnctBTestCmpl_Logl
# define Rte_Read_SysSt_Val Rte_Read_PwrUpSeq_SysSt_Val
# define Rte_Read_TmplMonIninTestCmpl_Logl Rte_Read_PwrUpSeq_TmplMonIninTestCmpl_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_StrtUpSt_Val Rte_Write_PwrUpSeq_StrtUpSt_Val
# define Rte_Write_SysStWrmIninCmpl_Logl Rte_Write_PwrUpSeq_SysStWrmIninCmpl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_IoHwAb_SetGpioPwrTurnOffCtrl_Oper Rte_Call_PwrUpSeq_IoHwAb_SetGpioPwrTurnOffCtrl_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PwrTurnOffCtrlPrev() (Rte_Inst_PwrUpSeq->Pim_PwrTurnOffCtrlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PwrTurnOffCtrlPrev(void)
 *
 *********************************************************************************************************************/


# define PwrUpSeq_START_SEC_CODE
# include "PwrUpSeq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrTurnOffCtrl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <PwrTurnOffCtrl>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPwrTurnOffCtrl_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PwrTurnOffCtrl_Oper(boolean PinSt_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrTurnOffCtrl_Oper PwrTurnOffCtrl_Oper
FUNC(void, PwrUpSeq_CODE) PwrTurnOffCtrl_Oper(boolean PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrUpSeqInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrUpSeqInit1 PwrUpSeqInit1
FUNC(void, PwrUpSeq_CODE) PwrUpSeqInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PwrUpSeqPer1
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
 *   Std_ReturnType Rte_Read_CodFlsCrcChkCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_CurrMeasWrmIninTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotDrvr0IninTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotDrvr1IninTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PwrDiscnctATestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PwrDiscnctBTestCmpl_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_TmplMonIninTestCmpl_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_StrtUpSt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_SysStWrmIninCmpl_Logl(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PwrUpSeqPer1 PwrUpSeqPer1
FUNC(void, PwrUpSeq_CODE) PwrUpSeqPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PwrUpSeq_STOP_SEC_CODE
# include "PwrUpSeq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetGpio_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_PWRUPSEQ_H */

#include "Rte_Stubs.h"
