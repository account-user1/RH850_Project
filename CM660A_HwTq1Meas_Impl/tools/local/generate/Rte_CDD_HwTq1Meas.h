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
 *          File:  Rte_CDD_HwTq1Meas.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/CM660A_HwTq1Meas_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_HwTq1Meas
 *  Generated at:  Fri Apr 13 08:36:34 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_HwTq1Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_HWTQ1MEAS_H
# define _RTE_CDD_HWTQ1MEAS_H

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

# include "Rte_CDD_HwTq1Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_HwTq1Meas
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq1MeasPrevHwTq1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq1MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq1MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwTqOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrCcwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrCwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot1Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot1Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot1Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot1Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot1Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot1Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot1Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_HwTq1Meas, RTE_CONST, RTE_CONST) Rte_Inst_CDD_HwTq1Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_HwTq1Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq1_Val (0.0F)
# define Rte_InitValue_HwTq1Polarity_Val (1)
# define Rte_InitValue_HwTq1Qlfr_Val (0U)
# define Rte_InitValue_HwTq1RollgCntr_Val (0U)
# define Rte_InitValue_RackLimrCcwEotSig1_Val (0.0F)
# define Rte_InitValue_RackLimrCwEotSig1_Val (0.0F)
# define Rte_InitValue_RackLimrEotSig1Avl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_HwTq1Meas_HwTq1Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq1Meas_HwTq1_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq1Meas_HwTq1Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq1Meas_HwTq1RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq1Meas_RackLimrCwEotSig1_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_HwTq1Offs_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_IoHwAb_SetFctPrphlHwTq1_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq1Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq1Meas_HwTq1MeasHwTq1PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq1Meas_HwTq1MeasHwTq1PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(HwTqOffsRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_HwTq1Meas_HwTq1OffsDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq1Polarity_Val Rte_Read_CDD_HwTq1Meas_HwTq1Polarity_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTq1_Val Rte_Write_CDD_HwTq1Meas_HwTq1_Val
# define Rte_Write_HwTq1Qlfr_Val Rte_Write_CDD_HwTq1Meas_HwTq1Qlfr_Val
# define Rte_Write_HwTq1RollgCntr_Val Rte_Write_CDD_HwTq1Meas_HwTq1RollgCntr_Val
# define Rte_Write_RackLimrCcwEotSig1_Val Rte_Write_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val
# define Rte_Write_RackLimrCwEotSig1_Val Rte_Write_CDD_HwTq1Meas_RackLimrCwEotSig1_Val
# define Rte_Write_RackLimrEotSig1Avl_Logl Rte_Write_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_CDD_HwTq1Meas_FltInj_f32_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CDD_HwTq1Meas_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_CDD_HwTq1Meas_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_CDD_HwTq1Meas_GetTiSpan1MicroSec32bit_Oper
# define Rte_Call_HwTq1Offs_SetRamBlockStatus Rte_Call_CDD_HwTq1Meas_HwTq1Offs_SetRamBlockStatus
# define Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper Rte_Call_CDD_HwTq1Meas_IoHwAb_SetFctPrphlHwTq1_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_HwTq1Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_HwTq1OffsDft Rte_CData_CDD_HwTq1Meas_HwTq1OffsDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val Rte_Prm_CDD_HwTq1Meas_HwTq1MeasHwTq1PrtclFltFailStep_Val

# define Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val Rte_Prm_CDD_HwTq1Meas_HwTq1MeasHwTq1PrtclFltPassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTq1MeasPrevHwTq1() (Rte_Inst_CDD_HwTq1Meas->Pim_HwTq1MeasPrevHwTq1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrCcwEot1() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrCcwEot1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrCwEot1() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrCwEot1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq1MsgMissRxCnt() (Rte_Inst_CDD_HwTq1Meas->Pim_HwTq1MsgMissRxCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq1ComStsErrCntr() (Rte_Inst_CDD_HwTq1Meas->Pim_HwTq1ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq1IntSnsrErrCntr() (Rte_Inst_CDD_HwTq1Meas->Pim_HwTq1IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq1MeasPrevRollgCntr() (Rte_Inst_CDD_HwTq1Meas->Pim_HwTq1MeasPrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot1Data0() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrEot1Data0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot1Data1() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrEot1Data1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot1Data2() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrEot1Data2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot1Avl() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrEot1Avl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot1Id2DataReadCmpl() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrEot1Id2DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot1Id3DataReadCmpl() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrEot1Id3DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot1Id4DataReadCmpl() (Rte_Inst_CDD_HwTq1Meas->Pim_RackLimrEot1Id4DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq1Offs() (Rte_Inst_CDD_HwTq1Meas->Pim_HwTq1Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTq1MeasPrevHwTq1(void)
 *   float32 *Rte_Pim_RackLimrCcwEot1(void)
 *   float32 *Rte_Pim_RackLimrCwEot1(void)
 *   uint32 *Rte_Pim_HwTq1MsgMissRxCnt(void)
 *   uint8 *Rte_Pim_HwTq1ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwTq1IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwTq1MeasPrevRollgCntr(void)
 *   uint8 *Rte_Pim_RackLimrEot1Data0(void)
 *   uint8 *Rte_Pim_RackLimrEot1Data1(void)
 *   uint8 *Rte_Pim_RackLimrEot1Data2(void)
 *   boolean *Rte_Pim_RackLimrEot1Avl(void)
 *   boolean *Rte_Pim_RackLimrEot1Id2DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot1Id3DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot1Id4DataReadCmpl(void)
 *   HwTqOffsRec1 *Rte_Pim_HwTq1Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   HwTqOffsRec1 *Rte_CData_HwTq1OffsDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_HwTq1Meas_START_SEC_CODE
# include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasHwTq1AutTrim_Oper HwTq1MeasHwTq1AutTrim_Oper
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasHwTq1ClrTrim_Oper HwTq1MeasHwTq1ClrTrim_Oper
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasHwTq1ReadTrim_Oper HwTq1MeasHwTq1ReadTrim_Oper
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasHwTq1TrimPrfmdSts_Oper HwTq1MeasHwTq1TrimPrfmdSts_Oper
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasHwTq1WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasHwTq1WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq1Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasHwTq1WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasHwTq1WrTrim_Oper HwTq1MeasHwTq1WrTrim_Oper
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr1MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasInit1 HwTq1MeasInit1
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasPer1
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
 *   Std_ReturnType Rte_Read_HwTq1Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq1_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq1Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq1RollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RackLimrCcwEotSig1_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrCwEotSig1_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrEotSig1Avl_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasPer1 HwTq1MeasPer1
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasPer2
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
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasPer2 HwTq1MeasPer2
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq1MeasTrigStrt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq1MeasTrigStrt>
 *
 **********************************************************************************************************************
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
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq1MeasTrigStrt_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq1MeasTrigStrt_Oper HwTq1MeasTrigStrt_Oper
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasTrigStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_HwTq1Meas_STOP_SEC_CODE
# include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_HWTQ1MEAS_H */

#include "Rte_Stubs.h"
