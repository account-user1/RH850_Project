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
 *          File:  Rte_FordMsg47ABusHiSpd.h
 *        Config:  E:/EA4NewTemplate/MM092A_FordMsg47ABusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg47ABusHiSpd
 *  Generated at:  Fri May  4 17:10:15 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg47ABusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG47ABUSHISPD_H
# define _RTE_FORDMSG47ABUSHISPD_H

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

# include "Rte_FordMsg47ABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg47ABusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranTrlrAidKnobBtnVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranTrlrAidKnobPosVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg47Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg47Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidKnobBtnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidKnobBtnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_TrlrAidSwtch_D_RqDrv, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidKnobBtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidKnobPosnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidKnobPosnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidKnobPosnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobBtnVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobBtnVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobBtnVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobBtnVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobPosVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobPosVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobPosVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TrlrAidKnobPosVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg47ABusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg47ABusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg47ABusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrAidKnobBtn_Val (0U)
# define Rte_InitValue_FordVehTrlrAidKnobPosn_Val (0U)
# define Rte_InitValue_FordVehTrlrBackupAssiKnobPosVld_Logl (FALSE)
# define Rte_InitValue_FordVehTrlrBackupAssiKnobVld_Logl (FALSE)
# define Rte_InitValue_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv (0U)
# define Rte_InitValue_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg47ABusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg47ABusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg47ABusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg47ABusHiSpd_FordTrlrBackupAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv(P2VAR(Ford_TrlrAidCtl_U_RqDrv, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv(P2VAR(Ford_TrlrAidSwtch_D_RqDrv, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg47ABusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg47ABusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG47ABUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg47ABusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdMissMsgFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdMissMsgPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg47ABusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg47ABusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg47ABusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg47ABusHiSpd_FordTrlrBackupAssiEnad_Logl
# define Rte_Read_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv
# define Rte_Read_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv Rte_Read_FordMsg47ABusHiSpd_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehTrlrAidKnobBtn_Val Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobBtn_Val
# define Rte_Write_FordVehTrlrAidKnobPosn_Val Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrAidKnobPosn_Val
# define Rte_Write_FordVehTrlrBackupAssiKnobPosVld_Logl Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobPosVld_Logl
# define Rte_Write_FordVehTrlrBackupAssiKnobVld_Logl Rte_Write_FordMsg47ABusHiSpd_FordVehTrlrBackupAssiKnobVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg47ABusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg47ABusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg47ABusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg47ABusHiSpdMissMsgFaildTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdMissMsgFaildTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdMissMsgPassdTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdMissMsgPassdTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd_Val

# define Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd_Val Rte_Prm_FordMsg47ABusHiSpd_FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehTrlrAidKnobBtnInvldFaildRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehTrlrAidKnobBtnInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidKnobBtnInvldPassdRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehTrlrAidKnobBtnInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidKnobPosnInvldFaildRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehTrlrAidKnobPosnInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidKnobPosnInvldPassdRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehTrlrAidKnobPosnInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobBtnVldFaildRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobBtnVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobBtnVldMissRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobBtnVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobBtnVldPassdRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobBtnVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobPosVldFaildRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobPosVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobPosVldMissRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobPosVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobPosVldPassdRefTi() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobPosVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidKnobPosnPrev() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehTrlrAidKnobPosnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg47ABusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidKnobBtnPrev() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehTrlrAidKnobBtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranTrlrAidKnobBtnVldFlg() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FirstTranTrlrAidKnobBtnVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranTrlrAidKnobPosVldFlg() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FirstTranTrlrAidKnobPosVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg47Miss() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehMsg47Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg47Rxd() (Rte_Inst_FordMsg47ABusHiSpd->Pim_FordVehMsg47Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobBtnVldPrev() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobBtnVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TrlrAidKnobPosVldPrev() (Rte_Inst_FordMsg47ABusHiSpd->Pim_TrlrAidKnobPosVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FordVehTrlrAidKnobBtnInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehTrlrAidKnobBtnInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehTrlrAidKnobPosnInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehTrlrAidKnobPosnInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_TrlrAidKnobBtnVldFaildRefTi(void)
 *   uint32 *Rte_Pim_TrlrAidKnobBtnVldMissRefTi(void)
 *   uint32 *Rte_Pim_TrlrAidKnobBtnVldPassdRefTi(void)
 *   uint32 *Rte_Pim_TrlrAidKnobPosVldFaildRefTi(void)
 *   uint32 *Rte_Pim_TrlrAidKnobPosVldMissRefTi(void)
 *   uint32 *Rte_Pim_TrlrAidKnobPosVldPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehTrlrAidKnobPosnPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_TrlrAidSwtch_D_RqDrv *Rte_Pim_FordVehTrlrAidKnobBtnPrev(void)
 *   boolean *Rte_Pim_FirstTranTrlrAidKnobBtnVldFlg(void)
 *   boolean *Rte_Pim_FirstTranTrlrAidKnobPosVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg47Miss(void)
 *   boolean *Rte_Pim_FordVehMsg47Rxd(void)
 *   boolean *Rte_Pim_TrlrAidKnobBtnVldPrev(void)
 *   boolean *Rte_Pim_TrlrAidKnobPosVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdMissMsgFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdMissMsgPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnInvldPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnMissTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobBtnPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosInvldPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosMissTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg47ABusHiSpdTrlrAidKnobPosPassdTiThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg47ABusHiSpd_START_SEC_CODE
# include "FordMsg47ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg47ABusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg47ABusHiSpdInit1 FordMsg47ABusHiSpdInit1
FUNC(void, FordMsg47ABusHiSpd_CODE) FordMsg47ABusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg47ABusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAidCtl_U_RqDrv_Ford_TrlrAidCtl_U_RqDrv(Ford_TrlrAidCtl_U_RqDrv *data)
 *   Std_ReturnType Rte_Read_Ford_TrlrAidSwtch_D_RqDrv1_Ford_TrlrAidSwtch_D_RqDrv(Ford_TrlrAidSwtch_D_RqDrv *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehTrlrAidKnobBtn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidKnobPosn_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrBackupAssiKnobPosVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehTrlrBackupAssiKnobVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg47ABusHiSpdPer1 FordMsg47ABusHiSpdPer1
FUNC(void, FordMsg47ABusHiSpd_CODE) FordMsg47ABusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg47ABusHiSpd_STOP_SEC_CODE
# include "FordMsg47ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG47ABUSHISPD_H */

#include "Rte_Stubs.h"
