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
 *          File:  Rte_HwTq10Meas.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTq10Meas>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQ10MEAS_H
# define _RTE_HWTQ10MEAS_H

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

# include "Rte_HwTq10Meas_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SigQlfr1, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10Qlfr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_HwTq10Meas_HwTq10RollgCntr_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(sint8, RTE_VAR_INIT) Rte_PolarityCfg_HwTq3Polarity_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_HwTq10_Val (0.0F)
#  define Rte_InitValue_HwTq10Polarity_Val (1)
#  define Rte_InitValue_HwTq10Qlfr_Val (0U)
#  define Rte_InitValue_HwTq10RollgCntr_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_HwTq10Polarity_Val Rte_Read_HwTq10Meas_HwTq10Polarity_Val
#  define Rte_Read_HwTq10Meas_HwTq10Polarity_Val(data) (*(data) = Rte_PolarityCfg_HwTq3Polarity_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_HwTq10_Val Rte_Write_HwTq10Meas_HwTq10_Val
#  define Rte_Write_HwTq10Meas_HwTq10_Val(data) (Rte_HwTq10Meas_HwTq10_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq10Qlfr_Val Rte_Write_HwTq10Meas_HwTq10Qlfr_Val
#  define Rte_Write_HwTq10Meas_HwTq10Qlfr_Val(data) (Rte_HwTq10Meas_HwTq10Qlfr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_HwTq10RollgCntr_Val Rte_Write_HwTq10Meas_HwTq10RollgCntr_Val
#  define Rte_Write_HwTq10Meas_HwTq10RollgCntr_Val(data) (Rte_HwTq10Meas_HwTq10RollgCntr_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) GetNtcQlfrSts10_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_DIAGCMGRPROXYAPPL10_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetNtcQlfrSts_Oper GetNtcQlfrSts10_Oper
#  define RTE_START_SEC_CDD_GTMCFGANDUSE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CDD_GTMCFGANDUSE_APPL_CODE) GtmGetSent1Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) BufStrt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_GTMCFGANDUSE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GtmGetSent1Data_Oper GtmGetSent1Data_Oper
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVMPROXY_APPL_VAR) ErrorStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq10Offs_GetErrorStatus(arg1) (NvMProxy_GetErrorStatus((NvM_BlockIdType)53, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVMPROXY_APPL_CODE) NvMProxy_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVMPROXY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_HwTq10Offs_SetRamBlockStatus(arg1) (NvMProxy_SetRamBlockStatus((NvM_BlockIdType)53, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcStsAndSnpshtData10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcStsAndSnpshtData_Oper SetNtcStsAndSnpshtData10_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10PrevHwTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10DataPlsHiLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10DataPlsLoLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10SyncPlsHiLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10SyncPlsLoLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10TiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10TiStampPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10RollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u16_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10RawDataBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(HwTqOffsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_HwTq10Meas_HwTq10Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_HwTq10PrevHwTq() \
  (&Rte_HwTq10Meas_HwTq10PrevHwTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10DataPlsHiLim() \
  (&Rte_HwTq10Meas_HwTq10DataPlsHiLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10DataPlsLoLim() \
  (&Rte_HwTq10Meas_HwTq10DataPlsLoLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10SyncPlsHiLim() \
  (&Rte_HwTq10Meas_HwTq10SyncPlsHiLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10SyncPlsLoLim() \
  (&Rte_HwTq10Meas_HwTq10SyncPlsLoLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10TiStamp() \
  (&Rte_HwTq10Meas_HwTq10TiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10TiStampPrev() \
  (&Rte_HwTq10Meas_HwTq10TiStampPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10RollgCntrPrev() \
  (&Rte_HwTq10Meas_HwTq10RollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_HwTq10RawDataBuf() (&((*RtePim_HwTq10RawDataBuf())[0]))
#  else
#   define Rte_Pim_HwTq10RawDataBuf() RtePim_HwTq10RawDataBuf()
#  endif
#  define RtePim_HwTq10RawDataBuf() \
  (&Rte_HwTq10Meas_HwTq10RawDataBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HwTq10Offs() \
  (&Rte_HwTq10Meas_HwTq10Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define HwTq10Meas_START_SEC_CODE
# include "HwTq10Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_HwTq10MeasHwTq10AutTrim_Oper HwTq10MeasHwTq10AutTrim_Oper
#  define RTE_RUNNABLE_HwTq10MeasHwTq10ClrTrim_Oper HwTq10MeasHwTq10ClrTrim_Oper
#  define RTE_RUNNABLE_HwTq10MeasHwTq10ReadTrim_Oper HwTq10MeasHwTq10ReadTrim_Oper
#  define RTE_RUNNABLE_HwTq10MeasHwTq10TrimPrfmdSts_Oper HwTq10MeasHwTq10TrimPrfmdSts_Oper
#  define RTE_RUNNABLE_HwTq10MeasHwTq10WrTrim_Oper HwTq10MeasHwTq10WrTrim_Oper
#  define RTE_RUNNABLE_HwTq10MeasInit1 HwTq10MeasInit1
#  define RTE_RUNNABLE_HwTq10MeasPer1 HwTq10MeasPer1
#  define RTE_RUNNABLE_HwTq10MeasPer2 HwTq10MeasPer2
# endif

FUNC(void, HwTq10Meas_CODE) HwTq10MeasHwTq10AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwTq10Meas_CODE) HwTq10MeasHwTq10ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwTq10Meas_CODE) HwTq10MeasHwTq10ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWTQ10MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwTq10Meas_CODE) HwTq10MeasHwTq10TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWTQ10MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwTq10Meas_CODE) HwTq10MeasHwTq10WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, HwTq10Meas_CODE) HwTq10MeasInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwTq10Meas_CODE) HwTq10MeasPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, HwTq10Meas_CODE) HwTq10MeasPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define HwTq10Meas_STOP_SEC_CODE
# include "HwTq10Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

#  define RTE_E_GtmGetSentData_PortIf2_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWTQ10MEAS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
