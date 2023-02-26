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
 *          File:  Rte_FordMsg202BusHiSpd.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/MM061A_FordMsg202BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg202BusHiSpd
 *  Generated at:  Tue Feb 20 13:10:25 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg202BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG202BUSHISPD_H
# define _RTE_FORDMSG202BUSHISPD_H

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

# include "Rte_FordMsg202BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg202BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_GearRvrse_D_Actl, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehGearRvsStsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg202Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg202Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdChksEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdCntrEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModLoQlyVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModLoQlyVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModLoQlyVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModLoQlyVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModlVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdEngModlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_VehVActlEng_D_Qf, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdQlyFacEngModlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_VehVTrlrAid_B_Avail, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidAvlPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrAidAvlRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrBackupAssiAvlVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehTrlrBackupAssiAvlVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg202BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg202BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg202BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordAbsPrsnt_Logl (FALSE)
# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Val (1U)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehGearRvsSts_Ford_GearRvrse_D_Actl (7U)
# define Rte_InitValue_FordVehGearRvsStsRaw_Val (7U)
# define Rte_InitValue_FordVehGearRvsStsVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpdChksEngModl_Val (0U)
# define Rte_InitValue_FordVehSpdCntrEngModl_Val (0U)
# define Rte_InitValue_FordVehSpdEngModLoQlyVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpdEngModl_Val (0.0F)
# define Rte_InitValue_FordVehSpdEngModlRaw_Val (0U)
# define Rte_InitValue_FordVehSpdEngModlVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf (0U)
# define Rte_InitValue_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail (FALSE)
# define Rte_InitValue_FordVehTrlrAidAvlRaw_Val (0U)
# define Rte_InitValue_FordVehTrlrBackupAssiAvlVld_Logl (FALSE)
# define Rte_InitValue_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl (7U)
# define Rte_InitValue_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf (0U)
# define Rte_InitValue_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt (0U)
# define Rte_InitValue_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs (0U)
# define Rte_InitValue_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail (FALSE)
# define Rte_InitValue_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordAbsPrsnt_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordCanDtcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordTqSteerCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl(P2VAR(Ford_GearRvrse_D_Actl, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf(P2VAR(Ford_VehVActlEng_D_Qf, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt(P2VAR(Ford_VehVActlEng_No_Cnt, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs(P2VAR(Ford_VehVActlEng_No_Cs, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail(P2VAR(Ford_VehVTrlrAid_B_Avail, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg202BusHiSpd_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng(P2VAR(Ford_Veh_V_ActlEng, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl(Ford_GearRvrse_D_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModl_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf(Ford_VehVActlEng_D_Qf data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail(Ford_VehVTrlrAid_B_Avail data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg202BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg202BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG202BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg202BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModlVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModlVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg202BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordAbsPrsnt_Logl Rte_Read_FordMsg202BusHiSpd_FordAbsPrsnt_Logl
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg202BusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordCanDtcInhb_Val
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg202BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordInvldMsgDiagcInhb_Val
# define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordMfgDiagcInhb_Val
# define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg202BusHiSpd_FordMissMsgDiagcInhb_Val
# define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg202BusHiSpd_FordTqSteerCmpEnad_Logl
# define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg202BusHiSpd_FordTrlrBackupAssiEnad_Logl
# define Rte_Read_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl Rte_Read_FordMsg202BusHiSpd_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl
# define Rte_Read_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf
# define Rte_Read_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt
# define Rte_Read_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs Rte_Read_FordMsg202BusHiSpd_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs
# define Rte_Read_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail Rte_Read_FordMsg202BusHiSpd_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail
# define Rte_Read_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng Rte_Read_FordMsg202BusHiSpd_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehGearRvsSts_Ford_GearRvrse_D_Actl Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsSts_Ford_GearRvrse_D_Actl
# define Rte_Write_FordVehGearRvsStsRaw_Val Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsRaw_Val
# define Rte_Write_FordVehGearRvsStsVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehGearRvsStsVld_Logl
# define Rte_Write_FordVehSpdChksEngModl_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdChksEngModl_Val
# define Rte_Write_FordVehSpdCntrEngModl_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdCntrEngModl_Val
# define Rte_Write_FordVehSpdEngModLoQlyVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModLoQlyVld_Logl
# define Rte_Write_FordVehSpdEngModl_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModl_Val
# define Rte_Write_FordVehSpdEngModlRaw_Val Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlRaw_Val
# define Rte_Write_FordVehSpdEngModlVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehSpdEngModlVld_Logl
# define Rte_Write_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf Rte_Write_FordMsg202BusHiSpd_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf
# define Rte_Write_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail
# define Rte_Write_FordVehTrlrAidAvlRaw_Val Rte_Write_FordMsg202BusHiSpd_FordVehTrlrAidAvlRaw_Val
# define Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl Rte_Write_FordMsg202BusHiSpd_FordVehTrlrBackupAssiAvlVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg202BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg202BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg202BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val

# define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val

# define Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val

# define Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModlVldFaildThd_Val

# define Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdEngModlVldMissThd_Val

# define Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val

# define Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val

# define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val

# define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val

# define Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val

# define Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val

# define Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val

# define Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val

# define Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val

# define Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val

# define Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val Rte_Prm_FordMsg202BusHiSpd_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehSpdEngModlPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsInvldFaildRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsInvldPassdRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsVldFaildRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsVldMissRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsVldPassdRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModLoQlyVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModLoQlyVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModLoQlyVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModlVldFaildRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModlVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModlVldMissRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModlVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehTrlrBackupAssiAvlVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg202BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModlRawPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsRawPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdChksEngModlPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdChksEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdCntrEngModlPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdCntrEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdQlyFacEngModlPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdQlyFacEngModlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidAvlRawPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehTrlrAidAvlRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg202BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehGearRvsStsVldPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehGearRvsStsVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg202Miss() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehMsg202Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg202Rxd() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehMsg202Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModLoQlyVldPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModLoQlyVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdEngModlVldPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehSpdEngModlVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrAidAvlPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehTrlrAidAvlPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev() (Rte_Inst_FordMsg202BusHiSpd->Pim_FordVehTrlrBackupAssiAvlVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehSpdEngModlPrev(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehGearRvsStsVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModLoQlyVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModLoQlyVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModLoQlyVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModlVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdEngModlVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdQlyFacEngModlInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdQlyFacEngModlInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehTrlrBackupAssiAvlVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehTrlrBackupAssiAvlVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehSpdEngModlRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_GearRvrse_D_Actl *Rte_Pim_FordVehGearRvsStsPrev(void)
 *   uint8 *Rte_Pim_FordVehGearRvsStsRawPrev(void)
 *   uint8 *Rte_Pim_FordVehSpdChksEngModlPrev(void)
 *   uint8 *Rte_Pim_FordVehSpdCntrEngModlPrev(void)
 *   Ford_VehVActlEng_D_Qf *Rte_Pim_FordVehSpdQlyFacEngModlPrev(void)
 *   uint8 *Rte_Pim_FordVehTrlrAidAvlRawPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehGearRvsStsVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg202Miss(void)
 *   boolean *Rte_Pim_FordVehMsg202Rxd(void)
 *   boolean *Rte_Pim_FordVehSpdEngModLoQlyVldPrev(void)
 *   boolean *Rte_Pim_FordVehSpdEngModlVldPrev(void)
 *   Ford_VehVTrlrAid_B_Avail *Rte_Pim_FordVehTrlrAidAvlPrev(void)
 *   boolean *Rte_Pim_FordVehTrlrBackupAssiAvlVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModLoQlyVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModlVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdEngModlVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdGearRvsStsVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntDisadThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdMissMsgFaildAbsPrsntEnadThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdMissMsgPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdQlyFacEngModInvldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg202BusHiSpdTrlrBackupAssiAvlVldPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg202BusHiSpd_START_SEC_CODE
# include "FordMsg202BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg202BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg202BusHiSpdInit1 FordMsg202BusHiSpdInit1
FUNC(void, FordMsg202BusHiSpd_CODE) FordMsg202BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg202BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_GearRvrse_D_Actl1_Ford_GearRvrse_D_Actl(Ford_GearRvrse_D_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlEng_D_Qf1_Ford_VehVActlEng_D_Qf(Ford_VehVActlEng_D_Qf *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlEng_No_Cnt_Ford_VehVActlEng_No_Cnt(Ford_VehVActlEng_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_VehVActlEng_No_Cs_Ford_VehVActlEng_No_Cs(Ford_VehVActlEng_No_Cs *data)
 *   Std_ReturnType Rte_Read_Ford_VehVTrlrAid_B_Avail1_Ford_VehVTrlrAid_B_Avail(Ford_VehVTrlrAid_B_Avail *data)
 *   Std_ReturnType Rte_Read_Ford_Veh_V_ActlEng_Ford_Veh_V_ActlEng(Ford_Veh_V_ActlEng *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehGearRvsSts_Ford_GearRvrse_D_Actl(Ford_GearRvrse_D_Actl data)
 *   Std_ReturnType Rte_Write_FordVehGearRvsStsRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehGearRvsStsVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdChksEngModl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSpdCntrEngModl_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModLoQlyVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModl_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModlRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehSpdEngModlVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdQlyFacEngModl_Ford_VehVActlEng_D_Qf(Ford_VehVActlEng_D_Qf data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAvl_Ford_VehVTrlrAid_B_Avail(Ford_VehVTrlrAid_B_Avail data)
 *   Std_ReturnType Rte_Write_FordVehTrlrAidAvlRaw_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehTrlrBackupAssiAvlVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg202BusHiSpdPer1 FordMsg202BusHiSpdPer1
FUNC(void, FordMsg202BusHiSpd_CODE) FordMsg202BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg202BusHiSpd_STOP_SEC_CODE
# include "FordMsg202BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG202BUSHISPD_H */

#include "Rte_Stubs.h"
