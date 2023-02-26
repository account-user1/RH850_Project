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
 *          File:  Rte_FordMsg07DBusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM052A_FordMsg07DBusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg07DBusHiSpd
 *  Generated at:  Thu Apr 26 14:57:45 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg07DBusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG07DBUSHISPD_H
# define _RTE_FORDMSG07DBUSHISPD_H

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

# include "Rte_FordMsg07DBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg07DBusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehActBrkTqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehActBrkTqSigInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehActBrkTqSigInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehActBrkTqVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehActBrkTqVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehBrkTqVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehBrkTqVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg07DMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehVertACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehVertACmpdSigInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehVertACmpdSigInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehVertACmpdSigVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehVertACmpdSigVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehVertAVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehVertAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg07DBusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg07DBusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg07DBusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehActBrkTqRaw_Val (0U)
# define Rte_InitValue_FordVehBrkTqVld_Logl (FALSE)
# define Rte_InitValue_FordVehVertACmpdRaw_Val (0U)
# define Rte_InitValue_FordVehVertAVld_Logl (FALSE)
# define Rte_InitValue_Ford_BrkTot_Tq_Actl_Ford_BrkTot_Tq_Actl (0U)
# define Rte_InitValue_Ford_VehVertComp_A_Actl_Ford_VehVertComp_A_Actl (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07DBusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07DBusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07DBusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07DBusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07DBusHiSpd_FordTrlrBackUpAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07DBusHiSpd_Ford_BrkTot_Tq_Actl_Ford_BrkTot_Tq_Actl(P2VAR(Ford_BrkTot_Tq_Actl, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07DBusHiSpd_Ford_VehVertComp_A_Actl_Ford_VehVertComp_A_Actl(P2VAR(Ford_VehVertComp_A_Actl, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07DBusHiSpd_FordVehActBrkTqRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07DBusHiSpd_FordVehBrkTqVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07DBusHiSpd_FordVehVertACmpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07DBusHiSpd_FordVehVertAVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg07DBusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg07DBusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG07DBUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg07DBusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehActBrkTqInvldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehActBrkTqVldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg07DBusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg07DBusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg07DBusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg07DBusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg07DBusHiSpd_FordTrlrBackUpAssiEnad_Logl
# define Rte_Read_Ford_BrkTot_Tq_Actl_Ford_BrkTot_Tq_Actl Rte_Read_FordMsg07DBusHiSpd_Ford_BrkTot_Tq_Actl_Ford_BrkTot_Tq_Actl
# define Rte_Read_Ford_VehVertComp_A_Actl_Ford_VehVertComp_A_Actl Rte_Read_FordMsg07DBusHiSpd_Ford_VehVertComp_A_Actl_Ford_VehVertComp_A_Actl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehActBrkTqRaw_Val Rte_Write_FordMsg07DBusHiSpd_FordVehActBrkTqRaw_Val
# define Rte_Write_FordVehBrkTqVld_Logl Rte_Write_FordMsg07DBusHiSpd_FordVehBrkTqVld_Logl
# define Rte_Write_FordVehVertACmpdRaw_Val Rte_Write_FordMsg07DBusHiSpd_FordVehVertACmpdRaw_Val
# define Rte_Write_FordVehVertAVld_Logl Rte_Write_FordMsg07DBusHiSpd_FordVehVertAVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg07DBusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg07DBusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg07DBusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdFordVehActBrkTqInvldThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehActBrkTqInvldThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdFordVehActBrkTqVldThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehActBrkTqVldThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd_Val

# define Rte_Prm_FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd_Val Rte_Prm_FordMsg07DBusHiSpd_FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehActBrkTqSigInvldFaildRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehActBrkTqSigInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehActBrkTqSigInvldPassdRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehActBrkTqSigInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehActBrkTqVldFaildRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehActBrkTqVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehActBrkTqVldPassdRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehActBrkTqVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehBrkTqVldMissMsgRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehBrkTqVldMissMsgRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehVertACmpdSigInvldFaildRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehVertACmpdSigInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehVertACmpdSigInvldPassdRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehVertACmpdSigInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehVertACmpdSigVldFaildRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehVertACmpdSigVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehVertACmpdSigVldPassdRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehVertACmpdSigVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehVertAVldMissMsgRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehVertAVldMissMsgRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg07DBusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehActBrkTqRawPrev() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehActBrkTqRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehVertACmpdRawPrev() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehVertACmpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg07DBusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehBrkTqVldPrev() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehBrkTqVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg07DMiss() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehMsg07DMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehVertAVldPrev() (Rte_Inst_FordMsg07DBusHiSpd->Pim_FordVehVertAVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehActBrkTqSigInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehActBrkTqSigInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehActBrkTqVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehActBrkTqVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehBrkTqVldMissMsgRefTi(void)
 *   uint32 *Rte_Pim_FordVehVertACmpdSigInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehVertACmpdSigInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehVertACmpdSigVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehVertACmpdSigVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehVertAVldMissMsgRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehActBrkTqRawPrev(void)
 *   uint16 *Rte_Pim_FordVehVertACmpdRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehBrkTqVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg07DMiss(void)
 *   boolean *Rte_Pim_FordVehVertAVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdActBrkTqSigInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdFordVehActBrkTqInvldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdFordVehActBrkTqVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdFordVehBrkTqVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdFordVehVertACmpdSigInvldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdFordVehVertACmpdSigVldThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdFordVehVertAVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdVehActTqBrkInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdVertACmpdSigInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg07DBusHiSpdVertACmpdSigInvldPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg07DBusHiSpd_START_SEC_CODE
# include "FordMsg07DBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg07DBusHiSpdInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg07DBusHiSpdInit1 FordMsg07DBusHiSpdInit1
FUNC(void, FordMsg07DBusHiSpd_CODE) FordMsg07DBusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg07DBusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_BrkTot_Tq_Actl_Ford_BrkTot_Tq_Actl(Ford_BrkTot_Tq_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_VehVertComp_A_Actl_Ford_VehVertComp_A_Actl(Ford_VehVertComp_A_Actl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehActBrkTqRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehBrkTqVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehVertACmpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehVertAVld_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg07DBusHiSpdPer1 FordMsg07DBusHiSpdPer1
FUNC(void, FordMsg07DBusHiSpd_CODE) FordMsg07DBusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg07DBusHiSpd_STOP_SEC_CODE
# include "FordMsg07DBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG07DBUSHISPD_H */

#include "Rte_Stubs.h"
