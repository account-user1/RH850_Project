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
 *          File:  Rte_TunSelnMngt.h
 *     SW-C Type:  TunSelnMngt
 *  Generated at:  Fri May  6 13:19:08 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TunSelnMngt> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TUNSELNMNGT_H
# define _RTE_TUNSELNMNGT_H

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

# include "Rte_TunSelnMngt_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TunSelnMngt
{
  /* PIM Handles section */
  P2VAR(OnlineCalStsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OnlineCalSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevActvIninIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevActvRtIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRamPageAcs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RamTblSwt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TunSelnMngt, RTE_CONST, RTE_CONST) Rte_Inst_TunSelnMngt; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TunSelnMngt, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ActvGroup_Val (0U)
# define Rte_InitValue_ActvIninIdx_Val (0U)
# define Rte_InitValue_ActvRtIdx_Val (0U)
# define Rte_InitValue_CalCopySts_Val (0U)
# define Rte_InitValue_DesIninIdx_Val (0U)
# define Rte_InitValue_DesRtIdx_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TunSelnMngt_DesIninIdx_Val(P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TunSelnMngt_DesRtIdx_Val(P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TunSelnMngt_ActvGroup_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TunSelnMngt_ActvIninIdx_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TunSelnMngt_ActvRtIdx_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_TunSelnMngt_CalCopySts_Val(CalCopySts1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TunSelnMngt_Calc32BitCrc_u32_Oper(P2VAR(uint32, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TunSelnMngt_RtCalChgReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TunSelnMngt_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_TunSelnMngt_TunSelnMngtIntDataProtnExclsvArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_TunSelnMngt_TunSelnMngtIntDataProtnExclsvArea(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DesIninIdx_Val Rte_Read_TunSelnMngt_DesIninIdx_Val
# define Rte_Read_DesRtIdx_Val Rte_Read_TunSelnMngt_DesRtIdx_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ActvGroup_Val Rte_Write_TunSelnMngt_ActvGroup_Val
# define Rte_Write_ActvIninIdx_Val Rte_Write_TunSelnMngt_ActvIninIdx_Val
# define Rte_Write_ActvRtIdx_Val Rte_Write_TunSelnMngt_ActvRtIdx_Val
# define Rte_Write_CalCopySts_Val Rte_Write_TunSelnMngt_CalCopySts_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_Calc32BitCrc_u32_Oper Rte_Call_TunSelnMngt_Calc32BitCrc_u32_Oper
# define Rte_Call_RtCalChgReq_Oper Rte_Call_TunSelnMngt_RtCalChgReq_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_TunSelnMngt_SetNtcSts_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_TunSelnMngtIntDataProtnExclsvArea Rte_Enter_TunSelnMngt_TunSelnMngtIntDataProtnExclsvArea
# define Rte_Exit_TunSelnMngtIntDataProtnExclsvArea Rte_Exit_TunSelnMngt_TunSelnMngtIntDataProtnExclsvArea


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevActvIninIdx() (Rte_Inst_TunSelnMngt->Pim_PrevActvIninIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevActvRtIdx() (Rte_Inst_TunSelnMngt->Pim_PrevActvRtIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRamPageAcs() (Rte_Inst_TunSelnMngt->Pim_PrevRamPageAcs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RamTblSwt() (Rte_Inst_TunSelnMngt->Pim_RamTblSwt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_OnlineCalSts() (Rte_Inst_TunSelnMngt->Pim_OnlineCalSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PrevActvIninIdx(void)
 *   uint8 *Rte_Pim_PrevActvRtIdx(void)
 *   uint8 *Rte_Pim_PrevRamPageAcs(void)
 *   uint8 *Rte_Pim_RamTblSwt(void)
 *   OnlineCalStsRec1 *Rte_Pim_OnlineCalSts(void)
 *
 *********************************************************************************************************************/


# define TunSelnMngt_START_SEC_CODE
# include "TunSelnMngt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CopyCalPageReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CopyCalPageReq>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_TunSelnMngtIntDataProtnExclsvArea(void)
 *   void Rte_Exit_TunSelnMngtIntDataProtnExclsvArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CopyCalPageReq_Oper(uint8 Seg_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CopyCalPageReq_Oper CopyCalPageReq_Oper
FUNC(Std_ReturnType, TunSelnMngt_CODE) CopyCalPageReq_Oper(uint8 Seg_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetCalPageReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetCalPageReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 *Page_Arg, uint8 *Rtn_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetCalPageReq_Oper GetCalPageReq_Oper
FUNC(void, TunSelnMngt_CODE) GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Page_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetSegInfoReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetSegInfoReq>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, uint8 *Resp_Arg, uint8 *RespLen_Arg, uint8 *Rtn_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetSegInfoReq_Oper GetSegInfoReq_Oper
FUNC(void, TunSelnMngt_CODE) GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: OnlineTunRamAdrMpg_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <OnlineTunRamAdrMpg>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, uint32 *CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_OnlineTunRamAdrMpg_Oper OnlineTunRamAdrMpg_Oper
FUNC(Std_ReturnType, TunSelnMngt_CODE) OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetCalPageReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetCalPageReq>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_TunSelnMngtIntDataProtnExclsvArea(void)
 *   void Rte_Exit_TunSelnMngtIntDataProtnExclsvArea(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetCalPageReq_Oper SetCalPageReq_Oper
FUNC(void, TunSelnMngt_CODE) SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TunSelnMngtInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DesIninIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_DesRtIdx_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActvIninIdx_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ActvRtIdx_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TunSelnMngtInit1 TunSelnMngtInit1
FUNC(void, TunSelnMngt_CODE) TunSelnMngtInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TunSelnMngtPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DesRtIdx_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ActvGroup_Val(uint8 data)
 *   Std_ReturnType Rte_Write_ActvRtIdx_Val(uint8 data)
 *   Std_ReturnType Rte_Write_CalCopySts_Val(CalCopySts1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_Calc32BitCrc_u32_Oper(uint32 *DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, uint32 *CalcCrcRes_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_RtCalChgReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_RtCalChgReq_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TunSelnMngtPer1 TunSelnMngtPer1
FUNC(void, TunSelnMngt_CODE) TunSelnMngtPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TunSelnMngt_STOP_SEC_CODE
# include "TunSelnMngt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK (1U)

# define RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK (1U)

# define RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK (1U)

# define RTE_E_RtCalChgReq_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1462563999
#    error "The magic number of the generated file <C:/Component/ES400A_TunSelnMngt_Impl/tools/contract/Rte_TunSelnMngt.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1462563999
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_TUNSELNMNGT_H */
