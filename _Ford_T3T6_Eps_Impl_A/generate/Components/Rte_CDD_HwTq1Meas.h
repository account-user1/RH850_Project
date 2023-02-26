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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_HwTq1Meas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_HWTQ1MEAS_H
# define _RTE_CDD_HWTQ1MEAS_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CDD_HwTq1Meas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrCwEotSig1_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq1Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwTq1_Val (0.0F)
#  define Rte_InitValue_HwTq1Polarity_Val (1)
#  define Rte_InitValue_HwTq1Qlfr_Val (0U)
#  define Rte_InitValue_HwTq1RollgCntr_Val (0U)
#  define Rte_InitValue_RackLimrCcwEotSig1_Val (0.0F)
#  define Rte_InitValue_RackLimrCwEotSig1_Val (0.0F)
#  define Rte_InitValue_RackLimrEotSig1Avl_Logl (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTq1Polarity_Val Rte_Read_CDD_HwTq1Meas_HwTq1Polarity_Val
#  define Rte_Read_CDD_HwTq1Meas_HwTq1Polarity_Val(data) (*(data) = Rte_PolarityCfg_HwTq1Polarity_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwTq1_Val Rte_Write_CDD_HwTq1Meas_HwTq1_Val
#  define Rte_Write_CDD_HwTq1Meas_HwTq1_Val(data) (Rte_CDD_HwTq1Meas_HwTq1_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq1Qlfr_Val Rte_Write_CDD_HwTq1Meas_HwTq1Qlfr_Val
#  define Rte_Write_CDD_HwTq1Meas_HwTq1Qlfr_Val(data) (Rte_CDD_HwTq1Meas_HwTq1Qlfr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq1RollgCntr_Val Rte_Write_CDD_HwTq1Meas_HwTq1RollgCntr_Val
#  define Rte_Write_CDD_HwTq1Meas_HwTq1RollgCntr_Val(data) (Rte_CDD_HwTq1Meas_HwTq1RollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RackLimrCcwEotSig1_Val Rte_Write_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val
#  define Rte_Write_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val(data) (Rte_CDD_HwTq1Meas_RackLimrCcwEotSig1_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RackLimrCwEotSig1_Val Rte_Write_CDD_HwTq1Meas_RackLimrCwEotSig1_Val
#  define Rte_Write_CDD_HwTq1Meas_RackLimrCwEotSig1_Val(data) (Rte_CDD_HwTq1Meas_RackLimrCwEotSig1_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_RackLimrEotSig1Avl_Logl Rte_Write_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl
#  define Rte_Write_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl(data) (Rte_CDD_HwTq1Meas_RackLimrEotSig1Avl_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_FLTINJ_APPL_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_FLTINJ_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_FltInj_f32_Oper(arg1, arg2) (FltInj_f32_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr1MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr1MicroSec32bit_Oper(arg1) (GetRefTmr1MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan1MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan1MicroSec32bit_Oper(arg1, arg2) (GetTiSpan1MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq1Offs_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)56, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IOHWAB_APPL_CODE) IoHwAb_SetFctPrphlHwTqB_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_IoHwAb_SetFctPrphlHwTq1_Oper IoHwAb_SetFctPrphlHwTqB_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  define Rte_CData_HwTq1OffsDft() (&((P2CONST(Rte_Calprm_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CDD_HwTq1Meas_DEFAULT_RTE_CDATA_GROUP])->HwTq1OffsDft) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HwTq1MeasHwTq1PrtclFltFailStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwTq1MeasHwTq1PrtclFltFailStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HwTq1MeasHwTq1PrtclFltPassStep_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->HwTq1MeasHwTq1PrtclFltPassStep_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevHwTq1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCcwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrCwEot1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MsgMissRxCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1ComStsErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1IntSnsrErrCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1MeasPrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Data2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Avl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id2DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id3DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_RackLimrEot1Id4DataReadCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_HwTq1Meas_HwTq1Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwTq1MeasPrevHwTq1() \
  (&Rte_CDD_HwTq1Meas_HwTq1MeasPrevHwTq1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrCcwEot1() \
  (&Rte_CDD_HwTq1Meas_RackLimrCcwEot1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrCwEot1() \
  (&Rte_CDD_HwTq1Meas_RackLimrCwEot1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq1MsgMissRxCnt() \
  (&Rte_CDD_HwTq1Meas_HwTq1MsgMissRxCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq1ComStsErrCntr() \
  (&Rte_CDD_HwTq1Meas_HwTq1ComStsErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq1IntSnsrErrCntr() \
  (&Rte_CDD_HwTq1Meas_HwTq1IntSnsrErrCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq1MeasPrevRollgCntr() \
  (&Rte_CDD_HwTq1Meas_HwTq1MeasPrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot1Data0() \
  (&Rte_CDD_HwTq1Meas_RackLimrEot1Data0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot1Data1() \
  (&Rte_CDD_HwTq1Meas_RackLimrEot1Data1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot1Data2() \
  (&Rte_CDD_HwTq1Meas_RackLimrEot1Data2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot1Avl() \
  (&Rte_CDD_HwTq1Meas_RackLimrEot1Avl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot1Id2DataReadCmpl() \
  (&Rte_CDD_HwTq1Meas_RackLimrEot1Id2DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot1Id3DataReadCmpl() \
  (&Rte_CDD_HwTq1Meas_RackLimrEot1Id3DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RackLimrEot1Id4DataReadCmpl() \
  (&Rte_CDD_HwTq1Meas_RackLimrEot1Id4DataReadCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq1Offs() \
  (&Rte_CDD_HwTq1Meas_HwTq1Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_HwTq1Meas_START_SEC_CODE
# include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwTq1MeasHwTq1AutTrim_Oper HwTq1MeasHwTq1AutTrim_Oper
#  define RTE_RUNNABLE_HwTq1MeasHwTq1ClrTrim_Oper HwTq1MeasHwTq1ClrTrim_Oper
#  define RTE_RUNNABLE_HwTq1MeasHwTq1ReadTrim_Oper HwTq1MeasHwTq1ReadTrim_Oper
#  define RTE_RUNNABLE_HwTq1MeasHwTq1TrimPrfmdSts_Oper HwTq1MeasHwTq1TrimPrfmdSts_Oper
#  define RTE_RUNNABLE_HwTq1MeasHwTq1WrTrim_Oper HwTq1MeasHwTq1WrTrim_Oper
#  define RTE_RUNNABLE_HwTq1MeasInit1 HwTq1MeasInit1
#  define RTE_RUNNABLE_HwTq1MeasPer1 HwTq1MeasPer1
#  define RTE_RUNNABLE_HwTq1MeasPer2 HwTq1MeasPer2
#  define RTE_RUNNABLE_HwTq1MeasPer3Stub HwTq1MeasPer3Stub
#  define RTE_RUNNABLE_HwTq1MeasTrigStrt_Oper HwTq1MeasTrigStrt_Oper
# endif

FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_HWTQ1MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasHwTq1WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasPer3Stub(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_HwTq1Meas_CODE) HwTq1MeasTrigStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_HwTq1Meas_STOP_SEC_CODE
# include "CDD_HwTq1Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_HWTQ1MEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
