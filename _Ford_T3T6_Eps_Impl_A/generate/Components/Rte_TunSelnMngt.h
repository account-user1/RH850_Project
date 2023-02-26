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
 *          File:  Rte_TunSelnMngt.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TunSelnMngt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TUNSELNMNGT_H
# define _RTE_TUNSELNMNGT_H

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

# include "Rte_TunSelnMngt_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvGroup_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvIninIdx_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_ActvRtIdx_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(CalCopySts1, RTE_VAR_INIT) Rte_TunSelnMngt_CalCopySts_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_DesIninIdx_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_TunSelnMngt_DesRtIdx_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ActvGroup_Val (0U)
#  define Rte_InitValue_ActvIninIdx_Val (0U)
#  define Rte_InitValue_ActvRtIdx_Val (0U)
#  define Rte_InitValue_CalCopySts_Val (0U)
#  define Rte_InitValue_DesIninIdx_Val (0U)
#  define Rte_InitValue_DesRtIdx_Val (0U)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_DesIninIdx_Val Rte_Read_TunSelnMngt_DesIninIdx_Val
#  define Rte_Read_TunSelnMngt_DesIninIdx_Val(data) (*(data) = Rte_TunSelnMngt_DesIninIdx_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_DesRtIdx_Val Rte_Read_TunSelnMngt_DesRtIdx_Val
#  define Rte_Read_TunSelnMngt_DesRtIdx_Val(data) (*(data) = Rte_TunSelnMngt_DesRtIdx_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ActvGroup_Val Rte_Write_TunSelnMngt_ActvGroup_Val
#  define Rte_Write_TunSelnMngt_ActvGroup_Val(data) (Rte_TunSelnMngt_ActvGroup_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ActvIninIdx_Val Rte_Write_TunSelnMngt_ActvIninIdx_Val
#  define Rte_Write_TunSelnMngt_ActvIninIdx_Val(data) (Rte_TunSelnMngt_ActvIninIdx_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_ActvRtIdx_Val Rte_Write_TunSelnMngt_ActvRtIdx_Val
#  define Rte_Write_TunSelnMngt_ActvRtIdx_Val(data) (Rte_TunSelnMngt_ActvRtIdx_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_CalCopySts_Val Rte_Write_TunSelnMngt_CalCopySts_Val
#  define Rte_Write_TunSelnMngt_CalCopySts_Val(data) (Rte_TunSelnMngt_CalCopySts_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_SYNCCRC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CDD_SYNCCRC_APPL_CODE) Calc32BitCrc_u32_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg, uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_SYNCCRC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_Calc32BitCrc_u32_Oper Calc32BitCrc_u32_Oper
#  define RTE_START_SEC_TUNSELNAUTHY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_TUNSELNAUTHY_APPL_CODE) RtCalChgReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TUNSELNAUTHY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RtCalChgReq_Oper RtCalChgReq_Oper
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

#  define Rte_Enter_TunSelnMngtIntDataProtnExclsvArea() SuspendOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */

#  define Rte_Exit_TunSelnMngtIntDataProtnExclsvArea() ResumeOSInterrupts()  /* RteAnalyzer(ExclusiveArea, OS_INTERRUPT_BLOCKING) */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvIninIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevActvRtIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_PrevRamPageAcs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_RamTblSwt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(OnlineCalStsRec1, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_TunSelnMngt_OnlineCalSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_PrevActvIninIdx() \
  (&Rte_TunSelnMngt_PrevActvIninIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevActvRtIdx() \
  (&Rte_TunSelnMngt_PrevActvRtIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevRamPageAcs() \
  (&Rte_TunSelnMngt_PrevRamPageAcs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RamTblSwt() \
  (&Rte_TunSelnMngt_RamTblSwt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_OnlineCalSts() \
  (&Rte_TunSelnMngt_OnlineCalSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define TunSelnMngt_START_SEC_CODE
# include "TunSelnMngt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CopyCalPageReq_Oper CopyCalPageReq_Oper
#  define RTE_RUNNABLE_GetCalPageReq_Oper GetCalPageReq_Oper
#  define RTE_RUNNABLE_GetSegInfoReq_Oper GetSegInfoReq_Oper
#  define RTE_RUNNABLE_OnlineTunRamAdrMpg_Oper OnlineTunRamAdrMpg_Oper
#  define RTE_RUNNABLE_SetCalPageReq_Oper SetCalPageReq_Oper
#  define RTE_RUNNABLE_TunSelnMngtInit1 TunSelnMngtInit1
#  define RTE_RUNNABLE_TunSelnMngtPer1 TunSelnMngtPer1
# endif

FUNC(Std_ReturnType, TunSelnMngt_CODE) CopyCalPageReq_Oper(uint8 Seg_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, TunSelnMngt_CODE) GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Page_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, TunSelnMngt_CODE) GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, TunSelnMngt_CODE) OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, TunSelnMngt_CODE) SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, TunSelnMngt_CODE) TunSelnMngtInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, TunSelnMngt_CODE) TunSelnMngtPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define TunSelnMngt_STOP_SEC_CODE
# include "TunSelnMngt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_Calc32BitCrc_u32_PortIf1_E_NOT_OK (1U)

#  define RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK (1U)

#  define RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK (1U)

#  define RTE_E_RtCalChgReq_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TUNSELNMNGT_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
