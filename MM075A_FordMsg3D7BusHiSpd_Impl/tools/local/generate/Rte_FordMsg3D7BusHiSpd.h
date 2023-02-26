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
 *          File:  Rte_FordMsg3D7BusHiSpd.h
 *        Config:  C:/Users/nz4826/Documents/Mrudula/Synergy_working/comp_dev_ea4/MM075A_FordMsg3D7BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3D7BusHiSpd
 *  Generated at:  Fri May  4 15:34:52 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg3D7BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG3D7BUSHISPD_H
# define _RTE_FORDMSG3D7BUSHISPD_H

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

# include "Rte_FordMsg3D7BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg3D7BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehEvasSteerAssiEnadReqRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg3D7Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ImgProcrModlAVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LatDstRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LgtDstRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RelLatVelRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RelLgtVelRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_TiToCllsnRawVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg3D7BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg3D7BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg3D7BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordCanDtcInhb_Logl (TRUE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgLatDstRaw_Val (510U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val (1022U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val (0U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val (510U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val (1022U)
# define Rte_InitValue_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val (126U)
# define Rte_InitValue_FordVehEvasSteerAssiEnadReqRaw_Val (0U)
# define Rte_InitValue_FordVehEvasSteerAssiImgProcrModlAVld_Logl (FALSE)
# define Rte_InitValue_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat (0U)
# define Rte_InitValue_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl (126U)
# define Rte_InitValue_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat (0U)
# define Rte_InitValue_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl (510U)
# define Rte_InitValue_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl (1022U)
# define Rte_InitValue_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl (510U)
# define Rte_InitValue_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl (1022U)
# define Rte_InitValue_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_FordEvasSteerAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat(P2VAR(Ford_CmbbObjClass_D_Stat, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl(P2VAR(Ford_CmbbObjColl_T_Actl, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat(P2VAR(Ford_CmbbObjConfdnc_D_Stat, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl(P2VAR(Ford_CmbbObjDistLat_L_Actl, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl(P2VAR(Ford_CmbbObjDistLong_L_Actl, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl(P2VAR(Ford_CmbbObjRelLat_V_Actl, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl(P2VAR(Ford_CmbbObjRelLong_V_Actl, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg3D7BusHiSpd_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq(P2VAR(Ford_EsaEnbl_D2_Rq, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3D7BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3D7BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG3D7BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg3D7BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg3D7BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg3D7BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg3D7BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg3D7BusHiSpd_FordEvasSteerAssiEnad_Logl
# define Rte_Read_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat
# define Rte_Read_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl
# define Rte_Read_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat
# define Rte_Read_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl
# define Rte_Read_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl
# define Rte_Read_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl
# define Rte_Read_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl Rte_Read_FordMsg3D7BusHiSpd_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl
# define Rte_Read_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq Rte_Read_FordMsg3D7BusHiSpd_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehCllsnMtgtnByBrkgLatDstRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLatDstRaw_Val
# define Rte_Write_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val
# define Rte_Write_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val
# define Rte_Write_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val
# define Rte_Write_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val
# define Rte_Write_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val
# define Rte_Write_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val
# define Rte_Write_FordVehEvasSteerAssiEnadReqRaw_Val Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiEnadReqRaw_Val
# define Rte_Write_FordVehEvasSteerAssiImgProcrModlAVld_Logl Rte_Write_FordMsg3D7BusHiSpd_FordVehEvasSteerAssiImgProcrModlAVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg3D7BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg3D7BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg3D7BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val

# define Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val Rte_Prm_FordMsg3D7BusHiSpd_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ImgProcrModlAVldMissRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_ImgProcrModlAVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LatDstRawVldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_LatDstRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LgtDstRawVldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_LgtDstRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RelLatVelRawVldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_RelLatVelRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RelLgtVelRawVldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_RelLgtVelRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_TiToCllsnRawVldFaildRefTi() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_TiToCllsnRawVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehEvasSteerAssiEnadReqRawPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehEvasSteerAssiEnadReqRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg3D7Miss() (Rte_Inst_FordMsg3D7BusHiSpd->Pim_FordVehMsg3D7Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_EvasSteerAssiImgProcrModlAVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_ImgProcrModlAVldMissRefTi(void)
 *   uint32 *Rte_Pim_LatDstRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_LgtDstRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint32 *Rte_Pim_RelLatVelRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_RelLgtVelRawVldFaildRefTi(void)
 *   uint32 *Rte_Pim_TiToCllsnRawVldFaildRefTi(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgLatDstRawPrev(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgLgtDstRawPrev(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLatVelRawPrev(void)
 *   uint16 *Rte_Pim_FordVehCllsnMtgtnByBrkgRelLgtVelRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgObjDataConfLvlRawPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgObjTypClassnRawPrev(void)
 *   uint8 *Rte_Pim_FordVehCllsnMtgtnByBrkgTiToCllsnRawPrev(void)
 *   uint8 *Rte_Pim_FordVehEvasSteerAssiEnadReqRawPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehEvasSteerAssiImgProcrModlAVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg3D7Miss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdImgProcrModlAVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLatDstInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLatDstRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLgtDstInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdLgtDstRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLatVelInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLatVelRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdRelLgtVelRawVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D7BusHiSpdTiToCllsnRawVldFaildThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg3D7BusHiSpd_START_SEC_CODE
# include "FordMsg3D7BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D7BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg3D7BusHiSpdInit1 FordMsg3D7BusHiSpdInit1
FUNC(void, FordMsg3D7BusHiSpd_CODE) FordMsg3D7BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D7BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjClass_D_Stat1_Ford_CmbbObjClass_D_Stat(Ford_CmbbObjClass_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjColl_T_Actl_Ford_CmbbObjColl_T_Actl(Ford_CmbbObjColl_T_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjConfdnc_D_Stat1_Ford_CmbbObjConfdnc_D_Stat(Ford_CmbbObjConfdnc_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjDistLat_L_Actl_Ford_CmbbObjDistLat_L_Actl(Ford_CmbbObjDistLat_L_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjDistLong_L_Actl_Ford_CmbbObjDistLong_L_Actl(Ford_CmbbObjDistLong_L_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjRelLat_V_Actl_Ford_CmbbObjRelLat_V_Actl(Ford_CmbbObjRelLat_V_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_CmbbObjRelLong_V_Actl_Ford_CmbbObjRelLong_V_Actl(Ford_CmbbObjRelLong_V_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_EsaEnbl_D2_Rq1_Ford_EsaEnbl_D2_Rq(Ford_EsaEnbl_D2_Rq *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgLatDstRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgLgtDstRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgObjTypClassnRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgRelLatVelRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgRelLgtVelRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehCllsnMtgtnByBrkgTiToCllsnRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiEnadReqRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiImgProcrModlAVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg3D7BusHiSpdPer1 FordMsg3D7BusHiSpdPer1
FUNC(void, FordMsg3D7BusHiSpd_CODE) FordMsg3D7BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg3D7BusHiSpd_STOP_SEC_CODE
# include "FordMsg3D7BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG3D7BUSHISPD_H */

#include "Rte_Stubs.h"
