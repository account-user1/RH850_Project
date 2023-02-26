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
 *          File:  Rte_FordMsg216BusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM064A_FordMsg216BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg216BusHiSpd
 *  Generated at:  Wed May  2 16:32:46 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg216BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG216BUSHISPD_H
# define _RTE_FORDMSG216BUSHISPD_H

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

# include "Rte_FordMsg216BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg216BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FordVehWhlDirRaw1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FordVehWhlDirRaw1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg064Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FordVehWhlDirRaw1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlCntrDirVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FordVehWhlDirRaw1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlDirRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrntLeWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrntLeWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrntLeWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrntRiWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrntRiWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FrntRiWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReLeWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReLeWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReLeWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReRiWhlCntrDirVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReRiWhlCntrDirVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ReRiWhlVldMissMsgRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg216BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg216BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg216BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehFrntLeWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehFrntLeWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt (0U)
# define Rte_InitValue_FordVehFrntRiWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehFrntRiWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt (0U)
# define Rte_InitValue_FordVehReLeWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehReLeWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt (0U)
# define Rte_InitValue_FordVehReRiWhlCntrDirVld_Logl (FALSE)
# define Rte_InitValue_FordVehReRiWhlDirRaw_Val (0U)
# define Rte_InitValue_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt (0U)
# define Rte_InitValue_Ford_WhlDirFl_D_Actl_Ford_WhlDirFl_D_Actl (0U)
# define Rte_InitValue_Ford_WhlDirFr_D_Actl_Ford_WhlDirFr_D_Actl (0U)
# define Rte_InitValue_Ford_WhlDirRl_D_Actl_Ford_WhlDirRl_D_Actl (0U)
# define Rte_InitValue_Ford_WhlDirRr_D_Actl_Ford_WhlDirRr_D_Actl (0U)
# define Rte_InitValue_Ford_WhlRotatFl_No_Cnt_Ford_WhlRotatFl_No_Cnt (0U)
# define Rte_InitValue_Ford_WhlRotatFr_No_Cnt_Ford_WhlRotatFr_No_Cnt (0U)
# define Rte_InitValue_Ford_WhlRotatRl_No_Cnt_Ford_WhlRotatRl_No_Cnt (0U)
# define Rte_InitValue_Ford_WhlRotatRr_No_Cnt_Ford_WhlRotatRr_No_Cnt (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_FordTqSteerCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_FordTrlrBackUpAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirFl_D_Actl_Ford_WhlDirFl_D_Actl(P2VAR(Ford_WhlDirFl_D_Actl, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirFr_D_Actl_Ford_WhlDirFr_D_Actl(P2VAR(Ford_WhlDirFr_D_Actl, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirRl_D_Actl_Ford_WhlDirRl_D_Actl(P2VAR(Ford_WhlDirRl_D_Actl, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirRr_D_Actl_Ford_WhlDirRr_D_Actl(P2VAR(Ford_WhlDirRr_D_Actl, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatFl_No_Cnt_Ford_WhlRotatFl_No_Cnt(P2VAR(Ford_WhlRotatFl_No_Cnt, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatFr_No_Cnt_Ford_WhlRotatFr_No_Cnt(P2VAR(Ford_WhlRotatFr_No_Cnt, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatRl_No_Cnt_Ford_WhlRotatRl_No_Cnt(P2VAR(Ford_WhlRotatRl_No_Cnt, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatRr_No_Cnt_Ford_WhlRotatRr_No_Cnt(P2VAR(Ford_WhlRotatRr_No_Cnt, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRaw_Val(FordVehWhlDirRaw1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt(Ford_WhlRotatFl_No_Cnt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRaw_Val(FordVehWhlDirRaw1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt(Ford_WhlRotatFr_No_Cnt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehReLeWhlDirRaw_Val(FordVehWhlDirRaw1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt(Ford_WhlRotatRl_No_Cnt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehReRiWhlDirRaw_Val(FordVehWhlDirRaw1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg216BusHiSpd_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt(Ford_WhlRotatRr_No_Cnt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg216BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg216BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG216BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg216BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdMissMsgFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdMissMsgPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReLeWhlVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReRiWhlVldMissMsgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg216BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg216BusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg216BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg216BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg216BusHiSpd_FordTqSteerCmpEnad_Logl
# define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg216BusHiSpd_FordTrlrBackUpAssiEnad_Logl
# define Rte_Read_Ford_WhlDirFl_D_Actl_Ford_WhlDirFl_D_Actl Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirFl_D_Actl_Ford_WhlDirFl_D_Actl
# define Rte_Read_Ford_WhlDirFr_D_Actl_Ford_WhlDirFr_D_Actl Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirFr_D_Actl_Ford_WhlDirFr_D_Actl
# define Rte_Read_Ford_WhlDirRl_D_Actl_Ford_WhlDirRl_D_Actl Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirRl_D_Actl_Ford_WhlDirRl_D_Actl
# define Rte_Read_Ford_WhlDirRr_D_Actl_Ford_WhlDirRr_D_Actl Rte_Read_FordMsg216BusHiSpd_Ford_WhlDirRr_D_Actl_Ford_WhlDirRr_D_Actl
# define Rte_Read_Ford_WhlRotatFl_No_Cnt_Ford_WhlRotatFl_No_Cnt Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatFl_No_Cnt_Ford_WhlRotatFl_No_Cnt
# define Rte_Read_Ford_WhlRotatFr_No_Cnt_Ford_WhlRotatFr_No_Cnt Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatFr_No_Cnt_Ford_WhlRotatFr_No_Cnt
# define Rte_Read_Ford_WhlRotatRl_No_Cnt_Ford_WhlRotatRl_No_Cnt Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatRl_No_Cnt_Ford_WhlRotatRl_No_Cnt
# define Rte_Read_Ford_WhlRotatRr_No_Cnt_Ford_WhlRotatRr_No_Cnt Rte_Read_FordMsg216BusHiSpd_Ford_WhlRotatRr_No_Cnt_Ford_WhlRotatRr_No_Cnt


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehFrntLeWhlCntrDirVld_Logl Rte_Write_FordMsg216BusHiSpd_FordVehFrntLeWhlCntrDirVld_Logl
# define Rte_Write_FordVehFrntLeWhlDirRaw_Val Rte_Write_FordMsg216BusHiSpd_FordVehFrntLeWhlDirRaw_Val
# define Rte_Write_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt Rte_Write_FordMsg216BusHiSpd_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt
# define Rte_Write_FordVehFrntRiWhlCntrDirVld_Logl Rte_Write_FordMsg216BusHiSpd_FordVehFrntRiWhlCntrDirVld_Logl
# define Rte_Write_FordVehFrntRiWhlDirRaw_Val Rte_Write_FordMsg216BusHiSpd_FordVehFrntRiWhlDirRaw_Val
# define Rte_Write_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt Rte_Write_FordMsg216BusHiSpd_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt
# define Rte_Write_FordVehReLeWhlCntrDirVld_Logl Rte_Write_FordMsg216BusHiSpd_FordVehReLeWhlCntrDirVld_Logl
# define Rte_Write_FordVehReLeWhlDirRaw_Val Rte_Write_FordMsg216BusHiSpd_FordVehReLeWhlDirRaw_Val
# define Rte_Write_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt Rte_Write_FordMsg216BusHiSpd_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt
# define Rte_Write_FordVehReRiWhlCntrDirVld_Logl Rte_Write_FordMsg216BusHiSpd_FordVehReRiWhlCntrDirVld_Logl
# define Rte_Write_FordVehReRiWhlDirRaw_Val Rte_Write_FordMsg216BusHiSpd_FordVehReRiWhlDirRaw_Val
# define Rte_Write_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt Rte_Write_FordMsg216BusHiSpd_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg216BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg216BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg216BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd_Val

# define Rte_Prm_FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd_Val

# define Rte_Prm_FordMsg216BusHiSpdMissMsgFaildTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdMissMsgFaildTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdMissMsgPassdTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdMissMsgPassdTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdReLeWhlVldMissMsgThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReLeWhlVldMissMsgThd_Val

# define Rte_Prm_FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd_Val

# define Rte_Prm_FordMsg216BusHiSpdReRiWhlVldMissMsgThd_Val Rte_Prm_FordMsg216BusHiSpd_FordMsg216BusHiSpdReRiWhlVldMissMsgThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FrntLeWhlCntrDirVldFaildRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_FrntLeWhlCntrDirVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrntLeWhlCntrDirVldPassdRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_FrntLeWhlCntrDirVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrntLeWhlVldMissMsgRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_FrntLeWhlVldMissMsgRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrntRiWhlCntrDirVldFaildRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_FrntRiWhlCntrDirVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrntRiWhlCntrDirVldPassdRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_FrntRiWhlCntrDirVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FrntRiWhlVldMissMsgRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_FrntRiWhlVldMissMsgRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReLeWhlCntrDirVldFaildRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_ReLeWhlCntrDirVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReLeWhlCntrDirVldPassdRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_ReLeWhlCntrDirVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReLeWhlVldMissMsgRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_ReLeWhlVldMissMsgRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReRiWhlCntrDirVldFaildRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_ReRiWhlCntrDirVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReRiWhlCntrDirVldPassdRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_ReRiWhlCntrDirVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ReRiWhlVldMissMsgRefTi() (Rte_Inst_FordMsg216BusHiSpd->Pim_ReRiWhlVldMissMsgRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlDirRawPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehFrntLeWhlDirRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlRollgCntrPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehFrntLeWhlRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlDirRawPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehFrntRiWhlDirRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlRollgCntrPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehFrntRiWhlRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlDirRawPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehReLeWhlDirRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlRollgCntrPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehReLeWhlRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlDirRawPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehReRiWhlDirRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlRollgCntrPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehReRiWhlRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg216BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlCntrDirVldPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehFrntLeWhlCntrDirVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlCntrDirVldPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehFrntRiWhlCntrDirVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg064Miss() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehMsg064Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlCntrDirVldPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehReLeWhlCntrDirVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlCntrDirVldPrev() (Rte_Inst_FordMsg216BusHiSpd->Pim_FordVehReRiWhlCntrDirVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_FrntLeWhlCntrDirVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FrntLeWhlCntrDirVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FrntLeWhlVldMissMsgRefTi(void)
 *   uint32 *Rte_Pim_FrntRiWhlCntrDirVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FrntRiWhlCntrDirVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FrntRiWhlVldMissMsgRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_ReLeWhlCntrDirVldFaildRefTi(void)
 *   uint32 *Rte_Pim_ReLeWhlCntrDirVldPassdRefTi(void)
 *   uint32 *Rte_Pim_ReLeWhlVldMissMsgRefTi(void)
 *   uint32 *Rte_Pim_ReRiWhlCntrDirVldFaildRefTi(void)
 *   uint32 *Rte_Pim_ReRiWhlCntrDirVldPassdRefTi(void)
 *   uint32 *Rte_Pim_ReRiWhlVldMissMsgRefTi(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   FordVehWhlDirRaw1 *Rte_Pim_FordVehFrntLeWhlDirRawPrev(void)
 *   uint8 *Rte_Pim_FordVehFrntLeWhlRollgCntrPrev(void)
 *   FordVehWhlDirRaw1 *Rte_Pim_FordVehFrntRiWhlDirRawPrev(void)
 *   uint8 *Rte_Pim_FordVehFrntRiWhlRollgCntrPrev(void)
 *   FordVehWhlDirRaw1 *Rte_Pim_FordVehReLeWhlDirRawPrev(void)
 *   uint8 *Rte_Pim_FordVehReLeWhlRollgCntrPrev(void)
 *   FordVehWhlDirRaw1 *Rte_Pim_FordVehReRiWhlDirRawPrev(void)
 *   uint8 *Rte_Pim_FordVehReRiWhlRollgCntrPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehFrntLeWhlCntrDirVldPrev(void)
 *   boolean *Rte_Pim_FordVehFrntRiWhlCntrDirVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg064Miss(void)
 *   boolean *Rte_Pim_FordVehReLeWhlCntrDirVldPrev(void)
 *   boolean *Rte_Pim_FordVehReRiWhlCntrDirVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg216BusHiSpdFrntLeWhlCntrDirFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdFrntLeWhlCntrDirPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdFrntLeWhlVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdFrntRiWhlCntrDirFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdFrntRiWhlCntrDirPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdFrntRiWhlVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdMissMsgFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdMissMsgPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdReLeWhlCntrDirFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdReLeWhlCntrDirPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdReLeWhlVldMissMsgThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdReRiWhlCntrDirFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdReRiWhlCntrDirPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg216BusHiSpdReRiWhlVldMissMsgThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg216BusHiSpd_START_SEC_CODE
# include "FordMsg216BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg216BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg216BusHiSpdInit1 FordMsg216BusHiSpdInit1
FUNC(void, FordMsg216BusHiSpd_CODE) FordMsg216BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg216BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_WhlDirFl_D_Actl_Ford_WhlDirFl_D_Actl(Ford_WhlDirFl_D_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_WhlDirFr_D_Actl_Ford_WhlDirFr_D_Actl(Ford_WhlDirFr_D_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_WhlDirRl_D_Actl_Ford_WhlDirRl_D_Actl(Ford_WhlDirRl_D_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_WhlDirRr_D_Actl_Ford_WhlDirRr_D_Actl(Ford_WhlDirRr_D_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRotatFl_No_Cnt_Ford_WhlRotatFl_No_Cnt(Ford_WhlRotatFl_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRotatFr_No_Cnt_Ford_WhlRotatFr_No_Cnt(Ford_WhlRotatFr_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRotatRl_No_Cnt_Ford_WhlRotatRl_No_Cnt(Ford_WhlRotatRl_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRotatRr_No_Cnt_Ford_WhlRotatRr_No_Cnt(Ford_WhlRotatRr_No_Cnt *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlCntrDirVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlDirRaw_Val(FordVehWhlDirRaw1 data)
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlRollgCntr_Ford_WhlRotatFl_No_Cnt(Ford_WhlRotatFl_No_Cnt data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlCntrDirVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlDirRaw_Val(FordVehWhlDirRaw1 data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlRollgCntr_Ford_WhlRotatFr_No_Cnt(Ford_WhlRotatFr_No_Cnt data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlCntrDirVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlDirRaw_Val(FordVehWhlDirRaw1 data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlRollgCntr_Ford_WhlRotatRl_No_Cnt(Ford_WhlRotatRl_No_Cnt data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlCntrDirVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlDirRaw_Val(FordVehWhlDirRaw1 data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlRollgCntr_Ford_WhlRotatRr_No_Cnt(Ford_WhlRotatRr_No_Cnt data)
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

# define RTE_RUNNABLE_FordMsg216BusHiSpdPer1 FordMsg216BusHiSpdPer1
FUNC(void, FordMsg216BusHiSpd_CODE) FordMsg216BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg216BusHiSpd_STOP_SEC_CODE
# include "FordMsg216BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG216BUSHISPD_H */
