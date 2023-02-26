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
 *          File:  Rte_CDD_HwTq8Meas.h
 *        Config:  C:/Component/CM690D_HwTq8Meas_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_HwTq8Meas
 *  Generated at:  Wed Oct  4 14:30:52 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_HwTq8Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_HWTQ8MEAS_H
# define _RTE_CDD_HWTQ8MEAS_H

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

# include "Rte_CDD_HwTq8Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_HwTq8Meas
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq8ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq8IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq8MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwTqOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq8Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq8PrevHwTq8; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq8PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrCcwEot8; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrCwEot8; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot8Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot8Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot8Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot8Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot8Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot8Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RackLimrEot8Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_HwTq8Meas, RTE_CONST, RTE_CONST) Rte_Inst_CDD_HwTq8Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_HwTq8Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq8_Val (0.0F)
# define Rte_InitValue_HwTq8Polarity_Val (1)
# define Rte_InitValue_HwTq8Qlfr_Val (0U)
# define Rte_InitValue_HwTq8RollgCntr_Val (0U)
# define Rte_InitValue_RackLimrCcwEotSig8_Val (0.0F)
# define Rte_InitValue_RackLimrCwEotSig8_Val (0.0F)
# define Rte_InitValue_RackLimrEotSig8Avl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_HwTq8Meas_HwTq8Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq8Meas_HwTq8_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq8Meas_HwTq8Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq8Meas_HwTq8RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq8Meas_RackLimrCcwEotSig8_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq8Meas_RackLimrCwEotSig8_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_HwTq8Meas_RackLimrEotSig8Avl_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_CnvSnpshtData_u08_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) SnpshtDataCnvd_Arg, uint8 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_HwTq8Offs_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_IoHwAb_SetFctPrphlHwTq8_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_HwTq8Meas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq8Meas_HwTq8MeasHwTq8PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_HwTq8Meas_HwTq8MeasHwTq8PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(HwTqOffsRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_CDD_HwTq8Meas_HwTq8OffsDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq8Polarity_Val Rte_Read_CDD_HwTq8Meas_HwTq8Polarity_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTq8_Val Rte_Write_CDD_HwTq8Meas_HwTq8_Val
# define Rte_Write_HwTq8Qlfr_Val Rte_Write_CDD_HwTq8Meas_HwTq8Qlfr_Val
# define Rte_Write_HwTq8RollgCntr_Val Rte_Write_CDD_HwTq8Meas_HwTq8RollgCntr_Val
# define Rte_Write_RackLimrCcwEotSig8_Val Rte_Write_CDD_HwTq8Meas_RackLimrCcwEotSig8_Val
# define Rte_Write_RackLimrCwEotSig8_Val Rte_Write_CDD_HwTq8Meas_RackLimrCwEotSig8_Val
# define Rte_Write_RackLimrEotSig8Avl_Logl Rte_Write_CDD_HwTq8Meas_RackLimrEotSig8Avl_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CnvSnpshtData_u08_Oper Rte_Call_CDD_HwTq8Meas_CnvSnpshtData_u08_Oper
# define Rte_Call_FltInj_f32_Oper Rte_Call_CDD_HwTq8Meas_FltInj_f32_Oper
# define Rte_Call_FltInj_u08_Oper Rte_Call_CDD_HwTq8Meas_FltInj_u08_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_CDD_HwTq8Meas_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr1MicroSec32bit_Oper Rte_Call_CDD_HwTq8Meas_GetRefTmr1MicroSec32bit_Oper
# define Rte_Call_GetTiSpan1MicroSec32bit_Oper Rte_Call_CDD_HwTq8Meas_GetTiSpan1MicroSec32bit_Oper
# define Rte_Call_HwTq8Offs_SetRamBlockStatus Rte_Call_CDD_HwTq8Meas_HwTq8Offs_SetRamBlockStatus
# define Rte_Call_IoHwAb_SetFctPrphlHwTq8_Oper Rte_Call_CDD_HwTq8Meas_IoHwAb_SetFctPrphlHwTq8_Oper
# define Rte_Call_SetNtcStsAndSnpshtData_Oper Rte_Call_CDD_HwTq8Meas_SetNtcStsAndSnpshtData_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_HwTq8OffsDft Rte_CData_CDD_HwTq8Meas_HwTq8OffsDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTq8MeasHwTq8PrtclFltFailStep_Val Rte_Prm_CDD_HwTq8Meas_HwTq8MeasHwTq8PrtclFltFailStep_Val

# define Rte_Prm_HwTq8MeasHwTq8PrtclFltPassStep_Val Rte_Prm_CDD_HwTq8Meas_HwTq8MeasHwTq8PrtclFltPassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTq8PrevHwTq8() (Rte_Inst_CDD_HwTq8Meas->Pim_HwTq8PrevHwTq8) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrCcwEot8() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrCcwEot8) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrCwEot8() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrCwEot8) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq8MsgMissRxCnt() (Rte_Inst_CDD_HwTq8Meas->Pim_HwTq8MsgMissRxCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq8ComStsErrCntr() (Rte_Inst_CDD_HwTq8Meas->Pim_HwTq8ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq8IntSnsrErrCntr() (Rte_Inst_CDD_HwTq8Meas->Pim_HwTq8IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq8PrevRollgCntr() (Rte_Inst_CDD_HwTq8Meas->Pim_HwTq8PrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot8Data0() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrEot8Data0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot8Data1() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrEot8Data1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot8Data2() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrEot8Data2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot8Avl() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrEot8Avl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot8Id2DataReadCmpl() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrEot8Id2DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot8Id3DataReadCmpl() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrEot8Id3DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RackLimrEot8Id4DataReadCmpl() (Rte_Inst_CDD_HwTq8Meas->Pim_RackLimrEot8Id4DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq8Offs() (Rte_Inst_CDD_HwTq8Meas->Pim_HwTq8Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTq8PrevHwTq8(void)
 *   float32 *Rte_Pim_RackLimrCcwEot8(void)
 *   float32 *Rte_Pim_RackLimrCwEot8(void)
 *   uint32 *Rte_Pim_HwTq8MsgMissRxCnt(void)
 *   uint8 *Rte_Pim_HwTq8ComStsErrCntr(void)
 *   uint8 *Rte_Pim_HwTq8IntSnsrErrCntr(void)
 *   uint8 *Rte_Pim_HwTq8PrevRollgCntr(void)
 *   uint8 *Rte_Pim_RackLimrEot8Data0(void)
 *   uint8 *Rte_Pim_RackLimrEot8Data1(void)
 *   uint8 *Rte_Pim_RackLimrEot8Data2(void)
 *   boolean *Rte_Pim_RackLimrEot8Avl(void)
 *   boolean *Rte_Pim_RackLimrEot8Id2DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot8Id3DataReadCmpl(void)
 *   boolean *Rte_Pim_RackLimrEot8Id4DataReadCmpl(void)
 *   HwTqOffsRec1 *Rte_Pim_HwTq8Offs(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   HwTqOffsRec1 *Rte_CData_HwTq8OffsDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_HwTq8MeasHwTq8PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwTq8MeasHwTq8PrtclFltPassStep_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_HwTq8Meas_START_SEC_CODE
# include "CDD_HwTq8Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq8AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq8Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq8AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8AutTrim_Oper HwTq8AutTrim_Oper
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq8ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq8Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq8ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8ClrTrim_Oper HwTq8ClrTrim_Oper
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8MeasInit1
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
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPrphlHwTq8_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8MeasInit1 HwTq8MeasInit1
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8MeasPer1
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
 *   Std_ReturnType Rte_Read_HwTq8Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq8_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq8Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq8RollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_RackLimrCcwEotSig8_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrCwEotSig8_Val(float32 data)
 *   Std_ReturnType Rte_Write_RackLimrEotSig8Avl_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CnvSnpshtData_u08_Oper(uint32 *SnpshtDataCnvd_Arg, uint8 SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8MeasPer1 HwTq8MeasPer1
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8MeasPer2
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
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8MeasPer2 HwTq8MeasPer2
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq8ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq8ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8ReadTrim_Oper HwTq8ReadTrim_Oper
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8TrigStrt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq8TrigStrt>
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
 *   void HwTq8TrigStrt_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8TrigStrt_Oper HwTq8TrigStrt_Oper
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8TrigStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq8TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq8TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8TrimPrfmdSts_Oper HwTq8TrimPrfmdSts_Oper
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ8MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq8WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq8WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq8Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq8WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq8WrTrim_Oper HwTq8WrTrim_Oper
FUNC(void, CDD_HwTq8Meas_CODE) HwTq8WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_HwTq8Meas_STOP_SEC_CODE
# include "CDD_HwTq8Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_HWTQ8MEAS_H */

#include "Rte_Stubs.h"
