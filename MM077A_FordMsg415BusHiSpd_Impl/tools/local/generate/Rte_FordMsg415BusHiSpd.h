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
 *          File:  Rte_FordMsg415BusHiSpd.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/MM077A_FordMsg415BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg415BusHiSpd
 *  Generated at:  Tue Feb 20 12:03:47 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg415BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG415BUSHISPD_H
# define _RTE_FORDMSG415BUSHISPD_H

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

# include "Rte_FordMsg415BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg415BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkModlLoQlyVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkModlLoQlyVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkModlLoQlyVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkModlVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkModlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkModlVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkSprtVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BrkSprtVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ChksBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ChksBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CntrBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CntrBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_LsmcBrkDecel_D_Stat, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg415Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg415Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdBrkModlLoQlyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdBrkModlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdBrkModlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdChksBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdCntrBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_VehVActlBrk_D_Qf, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdQlyFacBrkModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_QlyFacBrkModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_QlyFacBrkModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg415BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg415BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg415BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordAbsPrsnt_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Val (1U)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat (0U)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val (0U)
# define Rte_InitValue_FordVehLoSpdMtnCtrlBrkSprtVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpdBrkModl_Val (0.0F)
# define Rte_InitValue_FordVehSpdBrkModlLoQlyVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpdBrkModlRaw_Val (0U)
# define Rte_InitValue_FordVehSpdBrkModlVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpdChksBrkModl_Val (0U)
# define Rte_InitValue_FordVehSpdCntrBrkModl_Val (0U)
# define Rte_InitValue_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf (0U)
# define Rte_InitValue_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat (0U)
# define Rte_InitValue_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf (0U)
# define Rte_InitValue_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt (0U)
# define Rte_InitValue_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs (0U)
# define Rte_InitValue_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_FordAbsPrsnt_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_FordCanDtcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat(P2VAR(Ford_LsmcBrkDecel_D_Stat, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf(P2VAR(Ford_VehVActlBrk_D_Qf, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt(P2VAR(Ford_VehVActlBrk_No_Cnt, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs(P2VAR(Ford_VehVActlBrk_No_Cs, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg415BusHiSpd_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk(P2VAR(Ford_Veh_V_ActlBrk, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat(Ford_LsmcBrkDecel_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf(Ford_VehVActlBrk_D_Qf data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg415BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg415BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG415BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg415BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkSprtVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg415BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordAbsPrsnt_Logl Rte_Read_FordMsg415BusHiSpd_FordAbsPrsnt_Logl
# define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordCanDtcInhb_Val
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg415BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordInvldMsgDiagcInhb_Val
# define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordMfgDiagcInhb_Val
# define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg415BusHiSpd_FordMissMsgDiagcInhb_Val
# define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg415BusHiSpd_FordTrlrBackupAssiEnad_Logl
# define Rte_Read_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat Rte_Read_FordMsg415BusHiSpd_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat
# define Rte_Read_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf
# define Rte_Read_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt
# define Rte_Read_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs Rte_Read_FordMsg415BusHiSpd_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs
# define Rte_Read_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk Rte_Read_FordMsg415BusHiSpd_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat
# define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val
# define Rte_Write_FordVehLoSpdMtnCtrlBrkSprtVld_Logl Rte_Write_FordMsg415BusHiSpd_FordVehLoSpdMtnCtrlBrkSprtVld_Logl
# define Rte_Write_FordVehSpdBrkModl_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModl_Val
# define Rte_Write_FordVehSpdBrkModlLoQlyVld_Logl Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlLoQlyVld_Logl
# define Rte_Write_FordVehSpdBrkModlRaw_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlRaw_Val
# define Rte_Write_FordVehSpdBrkModlVld_Logl Rte_Write_FordMsg415BusHiSpd_FordVehSpdBrkModlVld_Logl
# define Rte_Write_FordVehSpdChksBrkModl_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdChksBrkModl_Val
# define Rte_Write_FordVehSpdCntrBrkModl_Val Rte_Write_FordMsg415BusHiSpd_FordVehSpdCntrBrkModl_Val
# define Rte_Write_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf Rte_Write_FordMsg415BusHiSpd_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg415BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg415BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg415BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val

# define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val

# define Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val

# define Rte_Prm_FordMsg415BusHiSpdBrkModlVldFaildThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlVldFaildThd_Val

# define Rte_Prm_FordMsg415BusHiSpdBrkModlVldMissThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlVldMissThd_Val

# define Rte_Prm_FordMsg415BusHiSpdBrkModlVldPassdThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkModlVldPassdThd_Val

# define Rte_Prm_FordMsg415BusHiSpdBrkSprtVldMissThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkSprtVldMissThd_Val

# define Rte_Prm_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val

# define Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val

# define Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val

# define Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val

# define Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val

# define Rte_Prm_FordMsg415BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg415BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val

# define Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val Rte_Prm_FordMsg415BusHiSpd_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehSpdBrkModlPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehSpdBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkModlLoQlyVldFaildRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkModlLoQlyVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkModlLoQlyVldMissRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkModlLoQlyVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkModlLoQlyVldPassdRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkModlLoQlyVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkModlVldFaildRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkModlVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkModlVldMissRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkModlVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkModlVldPassdRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkModlVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkSprtVldMissRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkSprtVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BrkSprtVldPassdRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_BrkSprtVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ChksBrkModlInvldFaildRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_ChksBrkModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ChksBrkModlInvldPassdRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_ChksBrkModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CntrBrkModlInvldFaildRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_CntrBrkModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CntrBrkModlInvldPassdRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_CntrBrkModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_QlyFacBrkModlInvldFaildRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_QlyFacBrkModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_QlyFacBrkModlInvldPassdRefTi() (Rte_Inst_FordMsg415BusHiSpd->Pim_QlyFacBrkModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdBrkModlRawPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehSpdBrkModlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdChksBrkModlPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehSpdChksBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdCntrBrkModlPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehSpdCntrBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdQlyFacBrkModlPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehSpdQlyFacBrkModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg415BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg415Miss() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehMsg415Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg415Rxd() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehMsg415Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdBrkModlLoQlyVldPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehSpdBrkModlLoQlyVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdBrkModlVldPrev() (Rte_Inst_FordMsg415BusHiSpd->Pim_FordVehSpdBrkModlVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehSpdBrkModlPrev(void)
 *   uint32 *Rte_Pim_BrkModlLoQlyVldFaildRefTi(void)
 *   uint32 *Rte_Pim_BrkModlLoQlyVldMissRefTi(void)
 *   uint32 *Rte_Pim_BrkModlLoQlyVldPassdRefTi(void)
 *   uint32 *Rte_Pim_BrkModlVldFaildRefTi(void)
 *   uint32 *Rte_Pim_BrkModlVldMissRefTi(void)
 *   uint32 *Rte_Pim_BrkModlVldPassdRefTi(void)
 *   uint32 *Rte_Pim_BrkSprtVldMissRefTi(void)
 *   uint32 *Rte_Pim_BrkSprtVldPassdRefTi(void)
 *   uint32 *Rte_Pim_ChksBrkModlInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_ChksBrkModlInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_CntrBrkModlInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_CntrBrkModlInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_QlyFacBrkModlInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_QlyFacBrkModlInvldPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehSpdBrkModlRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_LsmcBrkDecel_D_Stat *Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsPrev(void)
 *   uint8 *Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtStsRawPrev(void)
 *   uint8 *Rte_Pim_FordVehSpdChksBrkModlPrev(void)
 *   uint8 *Rte_Pim_FordVehSpdCntrBrkModlPrev(void)
 *   Ford_VehVActlBrk_D_Qf *Rte_Pim_FordVehSpdQlyFacBrkModlPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldFlg(void)
 *   boolean *Rte_Pim_FordVehLoSpdMtnCtrlBrkSprtVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg415Miss(void)
 *   boolean *Rte_Pim_FordVehMsg415Rxd(void)
 *   boolean *Rte_Pim_FordVehSpdBrkModlLoQlyVldPrev(void)
 *   boolean *Rte_Pim_FordVehSpdBrkModlVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkModlLoQlyVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkModlVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkModlVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkModlVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkSprtVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdBrkSprtVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdChksBrkModlInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdCntrBrkModlInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg415BusHiSpdQlyFacBrkModlInvldSigPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg415BusHiSpd_START_SEC_CODE
# include "FordMsg415BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg415BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg415BusHiSpdInit1 FordMsg415BusHiSpdInit1
FUNC(void, FordMsg415BusHiSpd_CODE) FordMsg415BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg415BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordAbsPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_LsmcBrkDecel_D_Stat1_Ford_LsmcBrkDecel_D_Stat(Ford_LsmcBrkDecel_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlBrk_D_Qf1_Ford_VehVActlBrk_D_Qf(Ford_VehVActlBrk_D_Qf *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlBrk_No_Cnt_Ford_VehVActlBrk_No_Cnt(Ford_VehVActlBrk_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlBrk_No_Cs_Ford_VehVActlBrk_No_Cs(Ford_VehVActlBrk_No_Cs *data)
 *   Std_ReturnType Rte_Read_Ford_Veh_V_ActlBrk_Ford_Veh_V_ActlBrk(Ford_Veh_V_ActlBrk *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkSprtSts_Ford_LsmcBrkDecel_D_Stat(Ford_LsmcBrkDecel_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkSprtStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLoSpdMtnCtrlBrkSprtVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdBrkModl_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSpdBrkModlLoQlyVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdBrkModlRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehSpdBrkModlVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdChksBrkModl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSpdCntrBrkModl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSpdQlyFacBrkModl_Ford_VehVActlBrk_D_Qf(Ford_VehVActlBrk_D_Qf data)
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

# define RTE_RUNNABLE_FordMsg415BusHiSpdPer1 FordMsg415BusHiSpdPer1
FUNC(void, FordMsg415BusHiSpd_CODE) FordMsg415BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg415BusHiSpd_STOP_SEC_CODE
# include "FordMsg415BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG415BUSHISPD_H */

#include "Rte_Stubs.h"
