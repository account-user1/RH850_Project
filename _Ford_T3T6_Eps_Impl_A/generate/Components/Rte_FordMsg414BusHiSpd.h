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
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg414BusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG414BUSHISPD_H
# define _RTE_FORDMSG414BUSHISPD_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_FordMsg414BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinOffst_D_Stat, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_FordVehSteerPinionAgOffs_Val (0.0F)
#  define Rte_InitValue_FordVehSteerPinionAgOffsRaw_Val (32000U)
#  define Rte_InitValue_FordVehSteerPinionAgOffsVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSteerPinionChksVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSteerPinionCntrVld_Logl (FALSE)
#  define Rte_InitValue_FordVehSteerPinionOffsChks_Val (0U)
#  define Rte_InitValue_FordVehSteerPinionOffsCnt_Val (0U)
#  define Rte_InitValue_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat (0U)
#  define Rte_InitValue_FordVehSteerPinionOffsStsRaw_Val (0U)
#  define Rte_InitValue_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est (32000U)
#  define Rte_InitValue_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat (0U)
#  define Rte_InitValue_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt (0U)
#  define Rte_InitValue_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est
#  define Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_StePinOffst_An_Est_c3a8df7f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat
#  define Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_StePinOffst_D_Stat_c3a8df7f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt
#  define Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_StePinOffst_No_Cnt_c3a8df7f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs
#  define Rte_Read_FordMsg414BusHiSpd_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs(data) ((void)Com_ReceiveSignal(ComConf_ComSignal_StePinOffst_No_Cs_c3a8df7f, (data)), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehSteerPinionAgOffs_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffs_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionAgOffsRaw_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionAgOffsVld_Logl Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionChksVld_Logl Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionCntrVld_Logl Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVld_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionOffsChks_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChks_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionOffsCnt_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCnt_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehSteerPinionOffsStsRaw_Val Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val
#  define Rte_Write_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val(data) (Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRaw_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordMsg414BusHiSpdAgOffsVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg414BusHiSpdAgOffsVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg414BusHiSpdAgOffsVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg414BusHiSpdAgOffsVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg414BusHiSpdAgOffsVldPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg414BusHiSpdAgOffsVldPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg414BusHiSpdChksVldFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg414BusHiSpdChksVldFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg414BusHiSpdChksVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg414BusHiSpdChksVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg414BusHiSpdCntrVldMissThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg414BusHiSpdCntrVldMissThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_AgOffsVldPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_ChksVldFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_ChksVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_CntrVldMissRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChksPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCntPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ford_StePinOffst_D_Stat, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FirstTranVldFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehMsg414Miss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVldPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehSteerPinionAgOffsPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AgOffsVldFaildRefTi() \
  (&Rte_FordMsg414BusHiSpd_AgOffsVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AgOffsVldMissRefTi() \
  (&Rte_FordMsg414BusHiSpd_AgOffsVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_AgOffsVldPassdRefTi() \
  (&Rte_FordMsg414BusHiSpd_AgOffsVldPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ChksVldFaildRefTi() \
  (&Rte_FordMsg414BusHiSpd_ChksVldFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ChksVldMissRefTi() \
  (&Rte_FordMsg414BusHiSpd_ChksVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CntrVldMissRefTi() \
  (&Rte_FordMsg414BusHiSpd_CntrVldMissRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionAgOffsRawPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionOffsChksPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsChksPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionOffsCntPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsCntPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionOffsStsPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionOffsStsRawPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionOffsStsRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FirstTranVldFlg() \
  (&Rte_FordMsg414BusHiSpd_FirstTranVldFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg414Miss() \
  (&Rte_FordMsg414BusHiSpd_FordVehMsg414Miss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionAgOffsVldPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionAgOffsVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionChksVldPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionChksVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehSteerPinionCntrVldPrev() \
  (&Rte_FordMsg414BusHiSpd_FordVehSteerPinionCntrVldPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg414BusHiSpd_START_SEC_CODE
# include "FordMsg414BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg414BusHiSpdInit1 FordMsg414BusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg414BusHiSpdPer1 FordMsg414BusHiSpdPer1
# endif

FUNC(void, FordMsg414BusHiSpd_CODE) FordMsg414BusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg414BusHiSpd_CODE) FordMsg414BusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg414BusHiSpd_STOP_SEC_CODE
# include "FordMsg414BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG414BUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
