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
 *          File:  Rte_FordMsg217BusHiSpd.h
 *        Config:  C:/_Synergy_Projects/Working/MM065A_FordMsg217BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg217BusHiSpd
 *  Generated at:  Tue Feb 20 16:31:04 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg217BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG217BUSHISPD_H
# define _RTE_FORDMSG217BUSHISPD_H

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

# include "Rte_FordMsg217BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg217BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntLeWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehFrntRiWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg217Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg217Rxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReLeWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdInvldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdInvldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehReRiWhlSpdVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg217BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg217BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg217BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
# define Rte_InitValue_FordAbsPrsnt_Logl (FALSE)
# define Rte_InitValue_FordActvNiblCtrlEnad_Logl (FALSE)
# define Rte_InitValue_FordBrkOscnRednEnad_Logl (FALSE)
# define Rte_InitValue_FordCanDtcInhb_Val (1U)
# define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
# define Rte_InitValue_FordInvldMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
# define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
# define Rte_InitValue_FordTqSteerCmpEnad_Logl (FALSE)
# define Rte_InitValue_FordTrlrBackupAssiEnad_Logl (FALSE)
# define Rte_InitValue_FordVehFrntLeWhlSpd_Val (0.0F)
# define Rte_InitValue_FordVehFrntLeWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehFrntLeWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehFrntRiWhlSpd_Val (0.0F)
# define Rte_InitValue_FordVehFrntRiWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehFrntRiWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehReLeWhlSpd_Val (0.0F)
# define Rte_InitValue_FordVehReLeWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehReLeWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_FordVehReRiWhlSpd_Val (0.0F)
# define Rte_InitValue_FordVehReRiWhlSpdRaw_Val (0U)
# define Rte_InitValue_FordVehReRiWhlSpdVld_Logl (FALSE)
# define Rte_InitValue_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas (0U)
# define Rte_InitValue_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas (0U)
# define Rte_InitValue_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas (0U)
# define Rte_InitValue_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_ClrDiagcFlgProxy_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordAbsPrsnt_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordActvNiblCtrlEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordBrkOscnRednEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordCanDtcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordEpsLifeCycMod_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordTqSteerCmpEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas(P2VAR(Ford_WhlFl_W_Meas, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas(P2VAR(Ford_WhlFr_W_Meas, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas(P2VAR(Ford_WhlRl_W_Meas, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg217BusHiSpd_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas(P2VAR(Ford_WhlRr_W_Meas, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg217BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg217BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG217BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg217BusHiSpd_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdMissMsgFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdMissMsgPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u16p0, RTE_CODE) Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg217BusHiSpd_ClrDiagcFlgProxy_Val
# define Rte_Read_FordAbsPrsnt_Logl Rte_Read_FordMsg217BusHiSpd_FordAbsPrsnt_Logl
# define Rte_Read_FordActvNiblCtrlEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordActvNiblCtrlEnad_Logl
# define Rte_Read_FordBrkOscnRednEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordBrkOscnRednEnad_Logl
# define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordCanDtcInhb_Val
# define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg217BusHiSpd_FordEpsLifeCycMod_Val
# define Rte_Read_FordInvldMsgDiagcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordInvldMsgDiagcInhb_Val
# define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordMfgDiagcInhb_Val
# define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg217BusHiSpd_FordMissMsgDiagcInhb_Val
# define Rte_Read_FordTqSteerCmpEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordTqSteerCmpEnad_Logl
# define Rte_Read_FordTrlrBackupAssiEnad_Logl Rte_Read_FordMsg217BusHiSpd_FordTrlrBackupAssiEnad_Logl
# define Rte_Read_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas
# define Rte_Read_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas
# define Rte_Read_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas
# define Rte_Read_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas Rte_Read_FordMsg217BusHiSpd_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehFrntLeWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpd_Val
# define Rte_Write_FordVehFrntLeWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdRaw_Val
# define Rte_Write_FordVehFrntLeWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehFrntLeWhlSpdVld_Logl
# define Rte_Write_FordVehFrntRiWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpd_Val
# define Rte_Write_FordVehFrntRiWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdRaw_Val
# define Rte_Write_FordVehFrntRiWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehFrntRiWhlSpdVld_Logl
# define Rte_Write_FordVehReLeWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpd_Val
# define Rte_Write_FordVehReLeWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdRaw_Val
# define Rte_Write_FordVehReLeWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehReLeWhlSpdVld_Logl
# define Rte_Write_FordVehReRiWhlSpd_Val Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpd_Val
# define Rte_Write_FordVehReRiWhlSpdRaw_Val Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdRaw_Val
# define Rte_Write_FordVehReRiWhlSpdVld_Logl Rte_Write_FordMsg217BusHiSpd_FordVehReRiWhlSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg217BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg217BusHiSpd_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_FordMsg217BusHiSpd_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val

# define Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdMissMsgFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdMissMsgPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlVldMissThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlVldMissThd_Val

# define Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val Rte_Prm_FordMsg217BusHiSpd_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehFrntLeWhlSpdPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdVldMissRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdInvldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdInvldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdVldMissRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgFaildRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MissMsgPassdRefTi() (Rte_Inst_FordMsg217BusHiSpd->Pim_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlSpdRawPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdRawPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdRawPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdRawPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ClrDiagcFlgProxyPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_ClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntLeWhlSpdVldPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntLeWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehFrntRiWhlSpdVldPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehFrntRiWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg217Miss() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehMsg217Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg217Rxd() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehMsg217Rxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReLeWhlSpdVldPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReLeWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehReRiWhlSpdVldPrev() (Rte_Inst_FordMsg217BusHiSpd->Pim_FordVehReRiWhlSpdVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehFrntLeWhlSpdPrev(void)
 *   float32 *Rte_Pim_FordVehFrntRiWhlSpdPrev(void)
 *   float32 *Rte_Pim_FordVehReLeWhlSpdPrev(void)
 *   float32 *Rte_Pim_FordVehReRiWhlSpdPrev(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehFrntLeWhlSpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehFrntRiWhlSpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehReLeWhlSpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehReRiWhlSpdRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FordVehFrntLeWhlSpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehFrntRiWhlSpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg217Miss(void)
 *   boolean *Rte_Pim_FordVehMsg217Rxd(void)
 *   boolean *Rte_Pim_FordVehReLeWhlSpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehReRiWhlSpdVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg217BusHiSpd_START_SEC_CODE
# include "FordMsg217BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg217BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg217BusHiSpdInit1 FordMsg217BusHiSpdInit1
FUNC(void, FordMsg217BusHiSpd_CODE) FordMsg217BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg217BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas(Ford_WhlFl_W_Meas *data)
 *   Std_ReturnType Rte_Read_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas(Ford_WhlFr_W_Meas *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas(Ford_WhlRl_W_Meas *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas(Ford_WhlRr_W_Meas *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlSpdVld_Logl(boolean data)
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

# define RTE_RUNNABLE_FordMsg217BusHiSpdPer1 FordMsg217BusHiSpdPer1
FUNC(void, FordMsg217BusHiSpd_CODE) FordMsg217BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg217BusHiSpd_STOP_SEC_CODE
# include "FordMsg217BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG217BUSHISPD_H */

#include "Rte_Stubs.h"
