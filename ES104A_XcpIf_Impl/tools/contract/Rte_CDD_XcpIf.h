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
 *          File:  Rte_CDD_XcpIf.h
 *     SW-C Type:  CDD_XcpIf
 *  Generated at:  Mon Feb 12 13:18:07 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_XcpIf> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_XCPIF_H
# define _RTE_CDD_XCPIF_H

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

# include "Rte_CDD_XcpIf_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_XcpIf
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_XcpIf, RTE_CONST, RTE_CONST) Rte_Inst_CDD_XcpIf; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_XcpIf, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ActvGroup_Val (0U)
# define Rte_InitValue_ActvIninIdx_Val (0U)
# define Rte_InitValue_ActvRtIdx_Val (0U)
# define Rte_InitValue_CalCopySts_Val (0U)
# define Rte_InitValue_CustXcpEna_Logl (FALSE)
# define Rte_InitValue_MfgEnaSt_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_XcpIf_ActvGroup_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_XcpIf_ActvIninIdx_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_XcpIf_ActvRtIdx_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_XcpIf_CalCopySts_Val(P2VAR(CalCopySts1, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_XcpIf_CustXcpEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_XcpIf_MfgEnaSt_Val(P2VAR(MfgEnaSt1, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_XcpIf_CopyCalPageReq_Oper(uint8 Seg_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_XcpIf_GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) Page_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_XcpIf_GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) Resp_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) RespLen_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) Rtn_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_XcpIf_OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_XcpIf_SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_XcpIf_XcpCalChgReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ActvGroup_Val Rte_Read_CDD_XcpIf_ActvGroup_Val
# define Rte_Read_ActvIninIdx_Val Rte_Read_CDD_XcpIf_ActvIninIdx_Val
# define Rte_Read_ActvRtIdx_Val Rte_Read_CDD_XcpIf_ActvRtIdx_Val
# define Rte_Read_CalCopySts_Val Rte_Read_CDD_XcpIf_CalCopySts_Val
# define Rte_Read_CustXcpEna_Logl Rte_Read_CDD_XcpIf_CustXcpEna_Logl
# define Rte_Read_MfgEnaSt_Val Rte_Read_CDD_XcpIf_MfgEnaSt_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CopyCalPageReq_Oper Rte_Call_CDD_XcpIf_CopyCalPageReq_Oper
# define Rte_Call_GetCalPageReq_Oper Rte_Call_CDD_XcpIf_GetCalPageReq_Oper
# define Rte_Call_GetSegInfoReq_Oper Rte_Call_CDD_XcpIf_GetSegInfoReq_Oper
# define Rte_Call_OnlineTunRamAdrMpg_Oper Rte_Call_CDD_XcpIf_OnlineTunRamAdrMpg_Oper
# define Rte_Call_SetCalPageReq_Oper Rte_Call_CDD_XcpIf_SetCalPageReq_Oper
# define Rte_Call_XcpCalChgReq_Oper Rte_Call_CDD_XcpIf_XcpCalChgReq_Oper




# define CDD_XcpIf_START_SEC_CODE
# include "CDD_XcpIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ActvTunStsReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ActvTunStsReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ActvGroup_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ActvIninIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ActvRtIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_CalCopySts_Val(CalCopySts1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_XcpCalChgReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ActvTunStsReq_Oper(uint8 *ActvRtIdx_Arg, uint8 *ActvIninIdx_Arg, uint8 *CalChgAllwd_Arg, uint8 *ActvGroup_Arg, uint8 *CalCopyCmpl_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ActvTunStsReq_Oper ActvTunStsReq_Oper
FUNC(void, CDD_XcpIf_CODE) ActvTunStsReq_Oper(P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvRtIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvIninIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) CalChgAllwd_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) ActvGroup_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_XCPIF_APPL_VAR) CalCopyCmpl_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDD_XcpIfInit1
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
 *   Std_ReturnType Rte_Read_CustXcpEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CopyCalPageReq_Oper(uint8 Seg_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 *Page_Arg, uint8 *Rtn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetSegInfoReq_Oper(GetSegMod1 Mod_Arg, uint8 Seg_Arg, uint8 SegInfo_Arg, uint8 MpgIdx_Arg, uint8 *Resp_Arg, uint8 *RespLen_Arg, uint8 *Rtn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_OnlineTunRamAdrMpg_Oper(uint32 ReqAdr_Arg, uint32 *CorrdAdr_Arg, AdrMpgReqTyp1 ReqTyp_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetCalPageReq_Oper(uint8 Seg_Arg, uint8 Mod_Arg, uint8 Page_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_XcpCalChgReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CDD_XcpIfInit1 CDD_XcpIfInit1
FUNC(void, CDD_XcpIf_CODE) CDD_XcpIfInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CDD_XcpIfPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CustXcpEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CDD_XcpIfPer1 CDD_XcpIfPer1
FUNC(void, CDD_XcpIf_CODE) CDD_XcpIfPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Xcp2msDaq
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Xcp2msDaq Xcp2msDaq
FUNC(void, CDD_XcpIf_CODE) Xcp2msDaq(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_XcpIf_STOP_SEC_CODE
# include "CDD_XcpIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_CopyCalPageReq_PortIf1_E_NOT_OK (1U)

# define RTE_E_OnlineTunRamAdrMpg_PortIf1_E_NOT_OK (1U)

# define RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1518440482
#    error "The magic number of the generated file <C:/Component/ES104A_XcpIf_Impl-cz7lt6/ES104A_XcpIf_Impl/tools/contract/Rte_CDD_XcpIf.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1518440482
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_XCPIF_H */
