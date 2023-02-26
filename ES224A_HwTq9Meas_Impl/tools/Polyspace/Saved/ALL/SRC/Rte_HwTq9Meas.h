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
 *          File:  Rte_HwTq9Meas.h
 *        Config:  C:/Component/ES224A_HwTq9Meas_Impl/tools/Component.dpa
 *     SW-C Type:  HwTq9Meas
 *  Generated at:  Thu Jan  4 16:53:59 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTq9Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQ9MEAS_H
# define _RTE_HWTQ9MEAS_H

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

# include "Rte_HwTq9Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwTq9Meas
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9DataPlsHiLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9DataPlsLoLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(HwTqOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9Offs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9PrevHwTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u16_5, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9RawDataBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9RollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9SyncPlsHiLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9SyncPlsLoLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9TiStamp; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq9TiStampPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwTq9Meas, RTE_CONST, RTE_CONST) Rte_Inst_HwTq9Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwTq9Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq9_Val (0.0F)
# define Rte_InitValue_HwTq9Polarity_Val (1)
# define Rte_InitValue_HwTq9Qlfr_Val (0U)
# define Rte_InitValue_HwTq9RollgCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTq9Meas_HwTq9Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTq9Meas_HwTq9_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTq9Meas_HwTq9Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTq9Meas_HwTq9RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_GtmGetSent0Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) BufStrtAdr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_HwTq9Offs_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_HwTq9Offs_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq9Meas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq9Polarity_Val Rte_Read_HwTq9Meas_HwTq9Polarity_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTq9_Val Rte_Write_HwTq9Meas_HwTq9_Val
# define Rte_Write_HwTq9Qlfr_Val Rte_Write_HwTq9Meas_HwTq9Qlfr_Val
# define Rte_Write_HwTq9RollgCntr_Val Rte_Write_HwTq9Meas_HwTq9RollgCntr_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwTq9Meas_GetNtcQlfrSts_Oper
# define Rte_Call_GtmGetSent0Data_Oper Rte_Call_HwTq9Meas_GtmGetSent0Data_Oper
# define Rte_Call_HwTq9Offs_GetErrorStatus Rte_Call_HwTq9Meas_HwTq9Offs_GetErrorStatus
# define Rte_Call_HwTq9Offs_SetRamBlockStatus Rte_Call_HwTq9Meas_HwTq9Offs_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwTq9Meas_SetNtcSts_Oper
# define Rte_Call_SetNtcStsAndSnpshtData_Oper Rte_Call_HwTq9Meas_SetNtcStsAndSnpshtData_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTq9PrevHwTq() (Rte_Inst_HwTq9Meas->Pim_HwTq9PrevHwTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq9DataPlsHiLim() (Rte_Inst_HwTq9Meas->Pim_HwTq9DataPlsHiLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq9DataPlsLoLim() (Rte_Inst_HwTq9Meas->Pim_HwTq9DataPlsLoLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq9SyncPlsHiLim() (Rte_Inst_HwTq9Meas->Pim_HwTq9SyncPlsHiLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq9SyncPlsLoLim() (Rte_Inst_HwTq9Meas->Pim_HwTq9SyncPlsLoLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq9TiStamp() (Rte_Inst_HwTq9Meas->Pim_HwTq9TiStamp) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq9TiStampPrev() (Rte_Inst_HwTq9Meas->Pim_HwTq9TiStampPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq9RollgCntrPrev() (Rte_Inst_HwTq9Meas->Pim_HwTq9RollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_HwTq9RawDataBuf() (*Rte_Inst_HwTq9Meas->Pim_HwTq9RawDataBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_HwTq9RawDataBuf() (Rte_Inst_HwTq9Meas->Pim_HwTq9RawDataBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Rte_Pim_HwTq9Offs() (Rte_Inst_HwTq9Meas->Pim_HwTq9Offs) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTq9PrevHwTq(void)
 *   uint32 *Rte_Pim_HwTq9DataPlsHiLim(void)
 *   uint32 *Rte_Pim_HwTq9DataPlsLoLim(void)
 *   uint32 *Rte_Pim_HwTq9SyncPlsHiLim(void)
 *   uint32 *Rte_Pim_HwTq9SyncPlsLoLim(void)
 *   uint32 *Rte_Pim_HwTq9TiStamp(void)
 *   uint32 *Rte_Pim_HwTq9TiStampPrev(void)
 *   uint8 *Rte_Pim_HwTq9RollgCntrPrev(void)
 *   uint16 *Rte_Pim_HwTq9RawDataBuf(void)
 *     Returnvalue: uint16* is of type Ary1D_u16_5
 *   HwTqOffsRec1 *Rte_Pim_HwTq9Offs(void)
 *
 *********************************************************************************************************************/


# define HwTq9Meas_START_SEC_CODE
# include "HwTq9Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9AutTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq9Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq9MeasHwTq9AutTrim_Oper HwTq9MeasHwTq9AutTrim_Oper
FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq9Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq9MeasHwTq9ClrTrim_Oper HwTq9MeasHwTq9ClrTrim_Oper
FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq9MeasHwTq9ReadTrim_Oper HwTq9MeasHwTq9ReadTrim_Oper
FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq9MeasHwTq9TrimPrfmdSts_Oper HwTq9MeasHwTq9TrimPrfmdSts_Oper
FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWTQ9MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasHwTq9WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq9MeasHwTq9WrTrim>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_HwTq9Offs_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq9MeasHwTq9WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq9MeasHwTq9WrTrim_Oper HwTq9MeasHwTq9WrTrim_Oper
FUNC(void, HwTq9Meas_CODE) HwTq9MeasHwTq9WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasInit1
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
 *   Std_ReturnType Rte_Call_HwTq9Offs_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq9MeasInit1 HwTq9MeasInit1
FUNC(void, HwTq9Meas_CODE) HwTq9MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasPer1
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
 *   Std_ReturnType Rte_Read_HwTq9Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq9_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq9Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq9RollgCntr_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GtmGetSent0Data_Oper(uint32 *BufStrtAdr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GtmGetSentData_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq9MeasPer1 HwTq9MeasPer1
FUNC(void, HwTq9Meas_CODE) HwTq9MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq9MeasPer2
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

# define RTE_RUNNABLE_HwTq9MeasPer2 HwTq9MeasPer2
FUNC(void, HwTq9Meas_CODE) HwTq9MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwTq9Meas_STOP_SEC_CODE
# include "HwTq9Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_GtmGetSentData_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HWTQ9MEAS_H */

#include "Rte_Stubs.h"
