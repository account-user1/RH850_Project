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
 *          File:  Rte_CDD_NvMProxy.h
 *     SW-C Type:  CDD_NvMProxy
 *  Generated at:  Thu Oct  6 23:39:31 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_NvMProxy> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_NVMPROXY_H
# define _RTE_CDD_NVMPROXY_H

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

# include "Rte_CDD_NvMProxy_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_NvMProxy
{
  /* PIM Handles section */
  P2VAR(Ary1D_BlkFltTblRec1_5, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BlkFltTbl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_CmdRtnBufRec1_NvMProxy1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CmdRtnBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_boolean_NvMProxy1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_NvmBlkActv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_NvmStsCollctd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ShtdwnClsChk; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_NvMProxy, RTE_CONST, RTE_CONST) Rte_Inst_CDD_NvMProxy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_NvMProxy, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_NvMProxy_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_NvMProxy_SetNtcSts_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_ShtdwnClsChk() (Rte_Inst_CDD_NvMProxy->Pim_ShtdwnClsChk) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_NvmStsCollctd() (Rte_Inst_CDD_NvMProxy->Pim_NvmStsCollctd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_BlkFltTbl() (*Rte_Inst_CDD_NvMProxy->Pim_BlkFltTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_BlkFltTbl() (Rte_Inst_CDD_NvMProxy->Pim_BlkFltTbl) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_CmdRtnBuf() (*Rte_Inst_CDD_NvMProxy->Pim_CmdRtnBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_CmdRtnBuf() (Rte_Inst_CDD_NvMProxy->Pim_CmdRtnBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_NvmBlkActv() (*Rte_Inst_CDD_NvMProxy->Pim_NvmBlkActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_NvmBlkActv() (Rte_Inst_CDD_NvMProxy->Pim_NvmBlkActv) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_ShtdwnClsChk(void)
 *   boolean *Rte_Pim_NvmStsCollctd(void)
 *   BlkFltTblRec1 *Rte_Pim_BlkFltTbl(void)
 *   CmdRtnBufRec1 *Rte_Pim_CmdRtnBuf(void)
 *   boolean *Rte_Pim_NvmBlkActv(void)
 *
 *********************************************************************************************************************/


# define CDD_NvMProxy_START_SEC_CODE
# include "CDD_NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: NvMProxyInit1
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
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NvMProxyInit1 NvMProxyInit1
FUNC(void, CDD_NvMProxy_CODE) NvMProxyInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_NvMProxy_STOP_SEC_CODE
# include "CDD_NvMProxy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1453944407
#    error "The magic number of the generated file <C:/Component/ES006A_NvM_Impl/tools/contract/Rte_CDD_NvMProxy.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1453944407
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_NVMPROXY_H */
