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
 *          File:  Rte_CDD_XcpIf.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_XcpIf>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_XCPIF_H
# define _RTE_CDD_XCPIF_H

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

# include "Rte_CDD_XcpIf_Type.h"
# include "Rte_DataHandleType.h"

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
extern VAR(boolean, RTE_VAR_INIT) Rte_CustDiag_CustXcpEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(MfgEnaSt1, RTE_VAR_INIT) Rte_CmnMfgSrv_MfgEnaSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

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
#  define Rte_InitValue_CustXcpEna_Logl (FALSE)
#  define Rte_InitValue_MfgEnaSt_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ActvGroup_Val Rte_Read_CDD_XcpIf_ActvGroup_Val
#  define Rte_Read_CDD_XcpIf_ActvGroup_Val(data) (*(data) = Rte_TunSelnMngt_ActvGroup_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ActvIninIdx_Val Rte_Read_CDD_XcpIf_ActvIninIdx_Val
#  define Rte_Read_CDD_XcpIf_ActvIninIdx_Val(data) (*(data) = Rte_TunSelnMngt_ActvIninIdx_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ActvRtIdx_Val Rte_Read_CDD_XcpIf_ActvRtIdx_Val
#  define Rte_Read_CDD_XcpIf_ActvRtIdx_Val(data) (*(data) = Rte_TunSelnMngt_ActvRtIdx_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CalCopySts_Val Rte_Read_CDD_XcpIf_CalCopySts_Val
#  define Rte_Read_CDD_XcpIf_CalCopySts_Val(data) (*(data) = Rte_TunSelnMngt_CalCopySts_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_CustXcpEna_Logl Rte_Read_CDD_XcpIf_CustXcpEna_Logl
#  define Rte_Read_CDD_XcpIf_CustXcpEna_Logl(data) (*(data) = Rte_CustDiag_CustXcpEna_Logl, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MfgEnaSt_Val Rte_Read_CDD_XcpIf_MfgEnaSt_Val
#  define Rte_Read_CDD_XcpIf_MfgEnaSt_Val(data) (*(data) = Rte_CmnMfgSrv_MfgEnaSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_TUNSELNMNGT_APPL_CODE) CopyCalPageReq_Oper(uint8 Seg_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CopyCalPageReq_Oper CopyCalPageReq_Oper
#  define RTE_START_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_TUNSELNMNGT_APPL_CODE) GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Page_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetCalPageReq_Oper(arg1, arg2, arg3, arg4) (GetCalPageReq_Oper(arg1, arg2, arg3, arg4), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_TUNSELNMNGT_APPL_CODE) GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Resp_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) RespLen_Arg, P2VAR(uint8, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetSegInfoReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7) (GetSegInfoReq_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_TUNSELNMNGT_APPL_CODE) OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_TUNSELNMNGT_APPL_VAR) CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_OnlineTunRamAdrMpg_Oper OnlineTunRamAdrMpg_Oper
#  define RTE_START_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_TUNSELNMNGT_APPL_CODE) SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TUNSELNMNGT_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetCalPageReq_Oper(arg1, arg2, arg3) (SetCalPageReq_Oper(arg1, arg2, arg3), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_TUNSELNAUTHY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_TUNSELNAUTHY_APPL_CODE) XcpCalChgReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_TUNSELNAUTHY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_XcpCalChgReq_Oper XcpCalChgReq_Oper


# endif /* !defined(RTE_CORE) */


# define CDD_XcpIf_START_SEC_CODE
# include "CDD_XcpIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ActvTunStsReq_Oper ActvTunStsReq_Oper
#  define RTE_RUNNABLE_CDD_XcpIfInit1 CDD_XcpIfInit1
#  define RTE_RUNNABLE_CDD_XcpIfPer1 CDD_XcpIfPer1
#  define RTE_RUNNABLE_Xcp2msDaq Xcp2msDaq
# endif

FUNC(void, CDD_XcpIf_CODE) ActvTunStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvRtIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvIninIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) CalChgAllwd_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvGroup_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) CalCopyCmpl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_XcpIf_CODE) CDD_XcpIfInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_XcpIf_CODE) CDD_XcpIfPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_XcpIf_CODE) Xcp2msDaq(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_XcpIf_STOP_SEC_CODE
# include "CDD_XcpIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK (1U)

#  define RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK (1U)

#  define RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_XCPIF_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
