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
 *          File:  Rte_FordMsg077BusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM124A_FordMsg077BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg077BusHiSpd
 *  Generated at:  Fri May  4 12:39:42 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg077BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG077BUSHISPD_H
# define _RTE_FORDMSG077BUSHISPD_H

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

# include "Rte_FordMsg077BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg077BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CanDtcInhbRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_DiagcClrProxyFlgPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLatACmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehLgtACmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg77Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSpdOverGndVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehYawRateCmpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg077BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg077BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg077BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Logl (FALSE)
# define Rte_InitValue_FordClrDiagcFlgProxy_Logl (FALSE)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneCentrAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordLaneKeepAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordPullDriftCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordTrfcJamAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackUpAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehLatACmpd_Val (17.835F)
# define Rte_InitValue_FordVehLatACmpdRaw_Val (1022U)
# define Rte_InitValue_FordVehLatACmpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehLgtACmpd_Val (17.835F)
# define Rte_InitValue_FordVehLgtACmpdRaw_Val (1022U)
# define Rte_InitValue_FordVehLgtACmpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehSpdOverGnd_Val (0.0F)
# define Rte_InitValue_FordVehSpdOverGndRaw_Val (0U)
# define Rte_InitValue_FordVehSpdOverGndVld_Logl (FALSE)
# define Rte_InitValue_FordVehYawRateCmpd_Val (74.92659F)
# define Rte_InitValue_FordVehYawRateCmpdRaw_Val (4094U)
# define Rte_InitValue_FordVehYawRateCmpdVld_Logl (FALSE)
# define Rte_InitValue_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl (1022U)
# define Rte_InitValue_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl (1022U)
# define Rte_InitValue_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est (0U)
# define Rte_InitValue_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl (4094U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordCanDtcInhb_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordEvasSteerAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordLaneCentrAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordLaneKeepAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordPullDriftCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordTqSteerCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordTrfcJamAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_FordTrlrBackUpAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl(P2VAR(Ford_VehLatComp_A_Actl, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl(P2VAR(Ford_VehLongComp_A_Actl, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est(P2VAR(Ford_VehOverGnd_V_Est, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg077BusHiSpd_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl(P2VAR(Ford_VehYawComp_W_Actl, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg077BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg077BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG077BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg077BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdCanDtcInhbThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLatACmpdVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Logl Rte_Read_FordMsg077BusHiSpd_FordCanDtcInhb_Logl
# define Rte_Read_FordClrDiagcFlgProxy_Logl Rte_Read_FordMsg077BusHiSpd_FordClrDiagcFlgProxy_Logl
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg077BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordEvasSteerAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordEvasSteerAssiEnad_Logl
# define Rte_Read_FordLaneCentrAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordLaneCentrAssiEnad_Logl
# define Rte_Read_FordLaneKeepAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordLaneKeepAssiEnad_Logl
# define Rte_Read_FordPullDriftCmpEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordPullDriftCmpEnad_Logl
# define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordTqSteerCmpEnad_Logl
# define Rte_Read_FordTrfcJamAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordTrfcJamAssiEnad_Logl
# define Rte_Read_FordTrlrBackUpAssiEnad_Logl Rte_Read_FordMsg077BusHiSpd_FordTrlrBackUpAssiEnad_Logl
# define Rte_Read_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl Rte_Read_FordMsg077BusHiSpd_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl
# define Rte_Read_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl Rte_Read_FordMsg077BusHiSpd_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl
# define Rte_Read_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est Rte_Read_FordMsg077BusHiSpd_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est
# define Rte_Read_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl Rte_Read_FordMsg077BusHiSpd_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehLatACmpd_Val Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpd_Val
# define Rte_Write_FordVehLatACmpdRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdRaw_Val
# define Rte_Write_FordVehLatACmpdVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehLatACmpdVld_Logl
# define Rte_Write_FordVehLgtACmpd_Val Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpd_Val
# define Rte_Write_FordVehLgtACmpdRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdRaw_Val
# define Rte_Write_FordVehLgtACmpdVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehLgtACmpdVld_Logl
# define Rte_Write_FordVehSpdOverGnd_Val Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGnd_Val
# define Rte_Write_FordVehSpdOverGndRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndRaw_Val
# define Rte_Write_FordVehSpdOverGndVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehSpdOverGndVld_Logl
# define Rte_Write_FordVehYawRateCmpd_Val Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpd_Val
# define Rte_Write_FordVehYawRateCmpdRaw_Val Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdRaw_Val
# define Rte_Write_FordVehYawRateCmpdVld_Logl Rte_Write_FordMsg077BusHiSpd_FordVehYawRateCmpdVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg077BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg077BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg077BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg077BusHiSpdCanDtcInhbThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdCanDtcInhbThd_Val

# define Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdLatACmpdVldMissThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLatACmpdVldMissThd_Val

# define Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val

# define Rte_Prm_FordMsg077BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val

# define Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val

# define Rte_Prm_FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val Rte_Prm_FordMsg077BusHiSpd_FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehLatACmpdPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CanDtcInhbRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_CanDtcInhbRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatACmpdInvldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatACmpdInvldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatACmpdVldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatACmpdVldMissRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatACmpdVldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdInvldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdInvldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdVldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdVldMissRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdVldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndInvldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndInvldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndVldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndVldMissRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndVldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdVldFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdVldMissRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdVldPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg077BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatACmpdRawPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdRawPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndRawPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdRawPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_DiagcClrProxyFlgPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_DiagcClrProxyFlgPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg077BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLatACmpdVldPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLatACmpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehLgtACmpdVldPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehLgtACmpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg77Miss() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehMsg77Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSpdOverGndVldPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehSpdOverGndVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehYawRateCmpdVldPrev() (Rte_Inst_FordMsg077BusHiSpd->Pim_FordVehYawRateCmpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehLatACmpdPrev(void)
 *   float32 *Rte_Pim_FordVehLgtACmpdPrev(void)
 *   float32 *Rte_Pim_FordVehSpdOverGndPrev(void)
 *   float32 *Rte_Pim_FordVehYawRateCmpdPrev(void)
 *   uint32 *Rte_Pim_CanDtcInhbRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehLatACmpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehLgtACmpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehSpdOverGndVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehYawRateCmpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehLatACmpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLgtACmpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehSpdOverGndRawPrev(void)
 *   uint16 *Rte_Pim_FordVehYawRateCmpdRawPrev(void)
 *   boolean *Rte_Pim_DiagcClrProxyFlgPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehLatACmpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehLgtACmpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg77Miss(void)
 *   boolean *Rte_Pim_FordVehSpdOverGndVldPrev(void)
 *   boolean *Rte_Pim_FordVehYawRateCmpdVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdCanDtcInhbThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLatACmpdInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLatACmpdVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLgtACmpdInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdLgtACmpdVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdMissMsgPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdOverGndInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLatACmpdVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehLgtACmpdVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehSpdOverGndVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdVehYawRateCmpdVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdYawRateCmpdInvldSigPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg077BusHiSpdYawRateCmpdVldMissThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg077BusHiSpd_START_SEC_CODE
# include "FordMsg077BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg077BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg077BusHiSpdInit1 FordMsg077BusHiSpdInit1
FUNC(void, FordMsg077BusHiSpd_CODE) FordMsg077BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg077BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordClrDiagcFlgProxy_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackUpAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_VehLatComp_A_Actl_Ford_VehLatComp_A_Actl(Ford_VehLatComp_A_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_VehLongComp_A_Actl_Ford_VehLongComp_A_Actl(Ford_VehLongComp_A_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_VehOverGnd_V_Est_Ford_VehOverGnd_V_Est(Ford_VehOverGnd_V_Est *data)
 *   Std_ReturnType Rte_Read_Ford_VehYawComp_W_Actl_Ford_VehYawComp_W_Actl(Ford_VehYawComp_W_Actl *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehLatACmpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatACmpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatACmpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehLgtACmpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLgtACmpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLgtACmpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdOverGnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSpdOverGndRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehSpdOverGndVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehYawRateCmpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehYawRateCmpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehYawRateCmpdVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg077BusHiSpdPer1 FordMsg077BusHiSpdPer1
FUNC(void, FordMsg077BusHiSpd_CODE) FordMsg077BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg077BusHiSpd_STOP_SEC_CODE
# include "FordMsg077BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG077BUSHISPD_H */
