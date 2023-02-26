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
 *          File:  Rte_FordMsg414BusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM070A_FordMsg414BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg414BusHiSpd
 *  Generated at:  Tue Apr 17 12:36:28 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg414BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG414BUSHISPD_H
# define _RTE_FORDMSG414BUSHISPD_H

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

# include "Rte_FordMsg414BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg414BusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AgOffsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AgOffsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AgOffsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ChksVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ChksVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CntrVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehMsg414Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionAgOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionAgOffsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionAgOffsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionChksVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionCntrVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionOffsChksPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionOffsCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ford_StePinOffst_D_Stat, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionOffsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FordVehSteerPinionOffsStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg414BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg414BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg414BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_FordVehSteerPinionAgOffs_Val (0.0F)
# define Rte_InitValue_FordVehSteerPinionAgOffsRaw_Val (32000U)
# define Rte_InitValue_FordVehSteerPinionAgOffsVld_Logl (FALSE)
# define Rte_InitValue_FordVehSteerPinionChksVld_Logl (FALSE)
# define Rte_InitValue_FordVehSteerPinionCntrVld_Logl (FALSE)
# define Rte_InitValue_FordVehSteerPinionOffsChks_Val (0U)
# define Rte_InitValue_FordVehSteerPinionOffsCnt_Val (0U)
# define Rte_InitValue_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat (0U)
# define Rte_InitValue_FordVehSteerPinionOffsStsRaw_Val (0U)
# define Rte_InitValue_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est (32000U)
# define Rte_InitValue_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat (0U)
# define Rte_InitValue_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt (0U)
# define Rte_InitValue_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est(P2VAR(Ford_StePinOffst_An_Est, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat(P2VAR(Ford_StePinOffst_D_Stat, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt(P2VAR(Ford_StePinOffst_No_Cnt, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs(P2VAR(Ford_StePinOffst_No_Cs, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat(Ford_StePinOffst_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg414BusHiSpd_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordMsg414BusHiSpd_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdAgOffsVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdAgOffsVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdAgOffsVldPassdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdChksVldFaildThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdChksVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdCntrVldMissThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est
# define Rte_Read_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat
# define Rte_Read_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt
# define Rte_Read_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordVehSteerPinionAgOffs_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val
# define Rte_Write_FordVehSteerPinionAgOffsRaw_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val
# define Rte_Write_FordVehSteerPinionAgOffsVld_Logl Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl
# define Rte_Write_FordVehSteerPinionChksVld_Logl Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl
# define Rte_Write_FordVehSteerPinionCntrVld_Logl Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl
# define Rte_Write_FordVehSteerPinionOffsChks_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val
# define Rte_Write_FordVehSteerPinionOffsCnt_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val
# define Rte_Write_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat
# define Rte_Write_FordVehSteerPinionOffsStsRaw_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_FordMsg414BusHiSpd_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_FordMsg414BusHiSpd_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordMsg414BusHiSpdAgOffsVldFaildThd_Val Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdAgOffsVldFaildThd_Val

# define Rte_Prm_FordMsg414BusHiSpdAgOffsVldMissThd_Val Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdAgOffsVldMissThd_Val

# define Rte_Prm_FordMsg414BusHiSpdAgOffsVldPassdThd_Val Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdAgOffsVldPassdThd_Val

# define Rte_Prm_FordMsg414BusHiSpdChksVldFaildThd_Val Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdChksVldFaildThd_Val

# define Rte_Prm_FordMsg414BusHiSpdChksVldMissThd_Val Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdChksVldMissThd_Val

# define Rte_Prm_FordMsg414BusHiSpdCntrVldMissThd_Val Rte_Prm_FordMsg414BusHiSpd_FordMsg414BusHiSpdCntrVldMissThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FordVehSteerPinionAgOffsPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionAgOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AgOffsVldFaildRefTi() (Rte_Inst_FordMsg414BusHiSpd->Pim_AgOffsVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AgOffsVldMissRefTi() (Rte_Inst_FordMsg414BusHiSpd->Pim_AgOffsVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AgOffsVldPassdRefTi() (Rte_Inst_FordMsg414BusHiSpd->Pim_AgOffsVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ChksVldFaildRefTi() (Rte_Inst_FordMsg414BusHiSpd->Pim_ChksVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ChksVldMissRefTi() (Rte_Inst_FordMsg414BusHiSpd->Pim_ChksVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CntrVldMissRefTi() (Rte_Inst_FordMsg414BusHiSpd->Pim_CntrVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionAgOffsRawPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionAgOffsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionOffsChksPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionOffsChksPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionOffsCntPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionOffsCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionOffsStsPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionOffsStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionOffsStsRawPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionOffsStsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FirstTranVldFlg() (Rte_Inst_FordMsg414BusHiSpd->Pim_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehMsg414Miss() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehMsg414Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionAgOffsVldPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionAgOffsVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionChksVldPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionChksVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FordVehSteerPinionCntrVldPrev() (Rte_Inst_FordMsg414BusHiSpd->Pim_FordVehSteerPinionCntrVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehSteerPinionAgOffsPrev(void)
 *   uint32 *Rte_Pim_AgOffsVldFaildRefTi(void)
 *   uint32 *Rte_Pim_AgOffsVldMissRefTi(void)
 *   uint32 *Rte_Pim_AgOffsVldPassdRefTi(void)
 *   uint32 *Rte_Pim_ChksVldFaildRefTi(void)
 *   uint32 *Rte_Pim_ChksVldMissRefTi(void)
 *   uint32 *Rte_Pim_CntrVldMissRefTi(void)
 *   uint16 *Rte_Pim_FordVehSteerPinionAgOffsRawPrev(void)
 *   uint8 *Rte_Pim_FordVehSteerPinionOffsChksPrev(void)
 *   uint8 *Rte_Pim_FordVehSteerPinionOffsCntPrev(void)
 *   Ford_StePinOffst_D_Stat *Rte_Pim_FordVehSteerPinionOffsStsPrev(void)
 *   uint8 *Rte_Pim_FordVehSteerPinionOffsStsRawPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg414Miss(void)
 *   boolean *Rte_Pim_FordVehSteerPinionAgOffsVldPrev(void)
 *   boolean *Rte_Pim_FordVehSteerPinionChksVldPrev(void)
 *   boolean *Rte_Pim_FordVehSteerPinionCntrVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg414BusHiSpdAgOffsVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdAgOffsVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdAgOffsVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdChksVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdChksVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdCntrVldMissThd_Val(void)
 *
 *********************************************************************************************************************/


# define FordMsg414BusHiSpd_START_SEC_CODE
# include "FordMsg414BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg414BusHiSpdInit1
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

# define RTE_RUNNABLE_FordMsg414BusHiSpdInit1 FordMsg414BusHiSpdInit1
FUNC(void, FordMsg414BusHiSpd_CODE) FordMsg414BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg414BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est(Ford_StePinOffst_An_Est *data)
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat(Ford_StePinOffst_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt(Ford_StePinOffst_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs(Ford_StePinOffst_No_Cs *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehSteerPinionAgOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionAgOffsRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionAgOffsVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionChksVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionCntrVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsChks_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsCnt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat(Ford_StePinOffst_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsStsRaw_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg414BusHiSpdPer1 FordMsg414BusHiSpdPer1
FUNC(void, FordMsg414BusHiSpd_CODE) FordMsg414BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg414BusHiSpd_STOP_SEC_CODE
# include "FordMsg414BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG414BUSHISPD_H */
