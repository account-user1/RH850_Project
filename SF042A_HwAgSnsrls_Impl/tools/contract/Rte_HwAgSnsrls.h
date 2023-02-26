/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_HwAgSnsrls.h
 *     SW-C Type:  HwAgSnsrls
 *  Generated at:  Mon Mar 27 10:28:56 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwAgSnsrls> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWAGSNSRLS_H
# define _RTE_HWAGSNSRLS_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_HwAgSnsrls_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwAgSnsrls
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CorrdPinionAgHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CorrdPinionAgHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FCentrHwAgEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FCentrHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FCentrHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgOffsEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PinionTqFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevFildRelHwAg1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevMaxHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSmotngHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSmotngSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehDynFil1Ena; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehDynFil2Ena; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RelHwAgFil1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RelHwAgFil2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(SelnCaseSt1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SelnCaseSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(StordLstPrmRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StordLstPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehDynHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehDynRefTmr1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_VehDynRefTmr2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdHwAgLrndEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdHwAgOffs; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_WhlSpdRefTmr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_YawRateFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgSnsrlsStordHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgSnsrlsStordHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgSnsrlsVehDynHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHwAgSnsrlsWhlSpdHwConf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwAgSnsrls, RTE_CONST, RTE_CONST) Rte_Inst_HwAgSnsrls; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwAgSnsrls, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CmplncErrMotToPinion_Val (0.0F)
# define Rte_InitValue_HwAgSnsrls_Val (0.0F)
# define Rte_InitValue_HwAgSnsrlsConf_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotAgCumvAlgndCrf_Val (0)
# define Rte_InitValue_MotAgCumvAlgndVld_Logl (FALSE)
# define Rte_InitValue_MotTqCmdCrf_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_PinionAg_Val (0.0F)
# define Rte_InitValue_PinionAgConf_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (FALSE)
# define Rte_InitValue_VehYawRate_Val (0.0F)
# define Rte_InitValue_WhlFrqVld_Logl (FALSE)
# define Rte_InitValue_WhlLeFrq_Val (0.01F)
# define Rte_InitValue_WhlRiFrq_Val (0.01F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_CmplncErrMotToPinion_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_MotAgCumvAlgndCrf_Val(P2VAR(s18p13, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_MotAgCumvAlgndVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_MotTqCmdCrf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_PinionAg_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_PinionAgConf_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_VehYawRate_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_WhlFrqVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_WhlLeFrq_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwAgSnsrls_WhlRiFrq_Val(P2VAR(float32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSnsrls_HwAgSnsrls_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwAgSnsrls_HwAgSnsrlsConf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSnsrls_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSnsrls_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSnsrls_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_HWAGSNSRLS_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwAgSnsrls_NvmStordLstPrm_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsCorrdPinionAgHwConf_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsFCentrHwConf_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsPinionTqFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsRelHwAgFil1Frq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsRelHwAgFil2Frq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsSmotngCoeff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsSmotngStepThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsStordPinionConf_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsStordPinionConfThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynDifThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynHwConf_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynMotVelThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynPinionTqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynYawRateThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlFrqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwAgCoeff1_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwAgCoeff2_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwAgThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwConf_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdRatThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsYawRateFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_SysGlbPrmSysKineRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwAgSnsrls_SysGlbPrmSysTqRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynTmr1Thd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynTmr2Thd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdTmrThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAgSnsrls_HwAgSnsrlsInit1_StordHwAg(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_HwAgSnsrls_HwAgSnsrlsInit1_StordHwConf(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_HwAgSnsrls_HwAgSnsrlsPer1_StordHwAg(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_IrvRead_HwAgSnsrls_HwAgSnsrlsPer1_StordHwConf(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(StordLstPrmRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_HwAgSnsrls_StordLstPrmDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CmplncErrMotToPinion_Val Rte_Read_HwAgSnsrls_CmplncErrMotToPinion_Val
# define Rte_Read_HwTq_Val Rte_Read_HwAgSnsrls_HwTq_Val
# define Rte_Read_MotAgCumvAlgndCrf_Val Rte_Read_HwAgSnsrls_MotAgCumvAlgndCrf_Val
# define Rte_Read_MotAgCumvAlgndVld_Logl Rte_Read_HwAgSnsrls_MotAgCumvAlgndVld_Logl
# define Rte_Read_MotTqCmdCrf_Val Rte_Read_HwAgSnsrls_MotTqCmdCrf_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_HwAgSnsrls_MotVelCrf_Val
# define Rte_Read_PinionAg_Val Rte_Read_HwAgSnsrls_PinionAg_Val
# define Rte_Read_PinionAgConf_Val Rte_Read_HwAgSnsrls_PinionAgConf_Val
# define Rte_Read_VehSpd_Val Rte_Read_HwAgSnsrls_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_HwAgSnsrls_VehSpdVld_Logl
# define Rte_Read_VehYawRate_Val Rte_Read_HwAgSnsrls_VehYawRate_Val
# define Rte_Read_WhlFrqVld_Logl Rte_Read_HwAgSnsrls_WhlFrqVld_Logl
# define Rte_Read_WhlLeFrq_Val Rte_Read_HwAgSnsrls_WhlLeFrq_Val
# define Rte_Read_WhlRiFrq_Val Rte_Read_HwAgSnsrls_WhlRiFrq_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwAgSnsrls_Val Rte_Write_HwAgSnsrls_HwAgSnsrls_Val
# define Rte_Write_HwAgSnsrlsConf_Val Rte_Write_HwAgSnsrls_HwAgSnsrlsConf_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwAgSnsrls_GetNtcQlfrSts_Oper
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_HwAgSnsrls_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_HwAgSnsrls_GetTiSpan100MicroSec32bit_Oper
# define Rte_Call_NvmStordLstPrm_SetRamBlockStatus Rte_Call_HwAgSnsrls_NvmStordLstPrm_SetRamBlockStatus


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAgSnsrlsInit1_StordHwAg(data) \
  Rte_IrvWrite_HwAgSnsrls_HwAgSnsrlsInit1_StordHwAg(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_HwAgSnsrlsInit1_StordHwConf(data) \
  Rte_IrvWrite_HwAgSnsrls_HwAgSnsrlsInit1_StordHwConf(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAgSnsrlsPer1_StordHwAg() \
  Rte_IrvRead_HwAgSnsrls_HwAgSnsrlsPer1_StordHwAg()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_HwAgSnsrlsPer1_StordHwConf() \
  Rte_IrvRead_HwAgSnsrls_HwAgSnsrlsPer1_StordHwConf()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_StordLstPrmDft Rte_CData_HwAgSnsrls_StordLstPrmDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwAgSnsrlsCorrdPinionAgHwConf_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsCorrdPinionAgHwConf_Val

# define Rte_Prm_HwAgSnsrlsFCentrHwConf_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsFCentrHwConf_Val

# define Rte_Prm_HwAgSnsrlsPinionTqFilFrq_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsPinionTqFilFrq_Val

# define Rte_Prm_HwAgSnsrlsRelHwAgFil1Frq_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsRelHwAgFil1Frq_Val

# define Rte_Prm_HwAgSnsrlsRelHwAgFil2Frq_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsRelHwAgFil2Frq_Val

# define Rte_Prm_HwAgSnsrlsSmotngCoeff_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsSmotngCoeff_Val

# define Rte_Prm_HwAgSnsrlsSmotngStepThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsSmotngStepThd_Val

# define Rte_Prm_HwAgSnsrlsStordPinionConf_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsStordPinionConf_Val

# define Rte_Prm_HwAgSnsrlsStordPinionConfThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsStordPinionConfThd_Val

# define Rte_Prm_HwAgSnsrlsVehDynDifThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynDifThd_Val

# define Rte_Prm_HwAgSnsrlsVehDynHwConf_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynHwConf_Val

# define Rte_Prm_HwAgSnsrlsVehDynMotVelThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynMotVelThd_Val

# define Rte_Prm_HwAgSnsrlsVehDynPinionTqThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynPinionTqThd_Val

# define Rte_Prm_HwAgSnsrlsVehDynVehSpdThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynVehSpdThd_Val

# define Rte_Prm_HwAgSnsrlsVehDynYawRateThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynYawRateThd_Val

# define Rte_Prm_HwAgSnsrlsWhlFrqThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlFrqThd_Val

# define Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff1_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwAgCoeff1_Val

# define Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff2_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwAgCoeff2_Val

# define Rte_Prm_HwAgSnsrlsWhlSpdHwAgThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwAgThd_Val

# define Rte_Prm_HwAgSnsrlsWhlSpdHwConf_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdHwConf_Val

# define Rte_Prm_HwAgSnsrlsWhlSpdRatThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdRatThd_Val

# define Rte_Prm_HwAgSnsrlsWhlSpdVehSpdThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdVehSpdThd_Val

# define Rte_Prm_HwAgSnsrlsYawRateFilFrq_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsYawRateFilFrq_Val

# define Rte_Prm_SysGlbPrmSysKineRat_Val Rte_Prm_HwAgSnsrls_SysGlbPrmSysKineRat_Val

# define Rte_Prm_SysGlbPrmSysTqRat_Val Rte_Prm_HwAgSnsrls_SysGlbPrmSysTqRat_Val

# define Rte_Prm_HwAgSnsrlsVehDynTmr1Thd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynTmr1Thd_Val

# define Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsVehDynTmr2Thd_Val

# define Rte_Prm_HwAgSnsrlsWhlSpdTmrThd_Val Rte_Prm_HwAgSnsrls_HwAgSnsrlsWhlSpdTmrThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_CorrdPinionAgHwAgOffs() (Rte_Inst_HwAgSnsrls->Pim_CorrdPinionAgHwAgOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CorrdPinionAgHwConf() (Rte_Inst_HwAgSnsrls->Pim_CorrdPinionAgHwConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FCentrHwAgOffs() (Rte_Inst_HwAgSnsrls->Pim_FCentrHwAgOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FCentrHwConf() (Rte_Inst_HwAgSnsrls->Pim_FCentrHwConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAgOffs() (Rte_Inst_HwAgSnsrls->Pim_MotAgOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevFildRelHwAg1() (Rte_Inst_HwAgSnsrls->Pim_PrevFildRelHwAg1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAgOffs() (Rte_Inst_HwAgSnsrls->Pim_PrevHwAgOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevMaxHwConf() (Rte_Inst_HwAgSnsrls->Pim_PrevMaxHwConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSmotngHwAg() (Rte_Inst_HwAgSnsrls->Pim_PrevSmotngHwAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehDynHwAgOffs() (Rte_Inst_HwAgSnsrls->Pim_VehDynHwAgOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdHwAgOffs() (Rte_Inst_HwAgSnsrls->Pim_WhlSpdHwAgOffs) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdHwConf() (Rte_Inst_HwAgSnsrls->Pim_WhlSpdHwConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgSnsrlsStordHwAg() (Rte_Inst_HwAgSnsrls->Pim_dHwAgSnsrlsStordHwAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgSnsrlsStordHwConf() (Rte_Inst_HwAgSnsrls->Pim_dHwAgSnsrlsStordHwConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgSnsrlsVehDynHwConf() (Rte_Inst_HwAgSnsrls->Pim_dHwAgSnsrlsVehDynHwConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHwAgSnsrlsWhlSpdHwConf() (Rte_Inst_HwAgSnsrls->Pim_dHwAgSnsrlsWhlSpdHwConf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehDynRefTmr1() (Rte_Inst_HwAgSnsrls->Pim_VehDynRefTmr1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_VehDynRefTmr2() (Rte_Inst_HwAgSnsrls->Pim_VehDynRefTmr2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdRefTmr() (Rte_Inst_HwAgSnsrls->Pim_WhlSpdRefTmr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SelnCaseSt() (Rte_Inst_HwAgSnsrls->Pim_SelnCaseSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FCentrHwAgEna() (Rte_Inst_HwAgSnsrls->Pim_FCentrHwAgEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAgOffsEna() (Rte_Inst_HwAgSnsrls->Pim_MotAgOffsEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSmotngSt() (Rte_Inst_HwAgSnsrls->Pim_PrevSmotngSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehDynFil1Ena() (Rte_Inst_HwAgSnsrls->Pim_PrevVehDynFil1Ena) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehDynFil2Ena() (Rte_Inst_HwAgSnsrls->Pim_PrevVehDynFil2Ena) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_WhlSpdHwAgLrndEna() (Rte_Inst_HwAgSnsrls->Pim_WhlSpdHwAgLrndEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PinionTqFil() (Rte_Inst_HwAgSnsrls->Pim_PinionTqFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RelHwAgFil1() (Rte_Inst_HwAgSnsrls->Pim_RelHwAgFil1) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RelHwAgFil2() (Rte_Inst_HwAgSnsrls->Pim_RelHwAgFil2) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StordLstPrm() (Rte_Inst_HwAgSnsrls->Pim_StordLstPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_YawRateFil() (Rte_Inst_HwAgSnsrls->Pim_YawRateFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_CorrdPinionAgHwAgOffs(void)
 *   float32 *Rte_Pim_CorrdPinionAgHwConf(void)
 *   float32 *Rte_Pim_FCentrHwAgOffs(void)
 *   float32 *Rte_Pim_FCentrHwConf(void)
 *   float32 *Rte_Pim_MotAgOffs(void)
 *   float32 *Rte_Pim_PrevFildRelHwAg1(void)
 *   float32 *Rte_Pim_PrevHwAgOffs(void)
 *   float32 *Rte_Pim_PrevMaxHwConf(void)
 *   float32 *Rte_Pim_PrevSmotngHwAg(void)
 *   float32 *Rte_Pim_VehDynHwAgOffs(void)
 *   float32 *Rte_Pim_WhlSpdHwAgOffs(void)
 *   float32 *Rte_Pim_WhlSpdHwConf(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsStordHwAg(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsStordHwConf(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsVehDynHwConf(void)
 *   float32 *Rte_Pim_dHwAgSnsrlsWhlSpdHwConf(void)
 *   uint32 *Rte_Pim_VehDynRefTmr1(void)
 *   uint32 *Rte_Pim_VehDynRefTmr2(void)
 *   uint32 *Rte_Pim_WhlSpdRefTmr(void)
 *   SelnCaseSt1 *Rte_Pim_SelnCaseSt(void)
 *   boolean *Rte_Pim_FCentrHwAgEna(void)
 *   boolean *Rte_Pim_MotAgOffsEna(void)
 *   boolean *Rte_Pim_PrevSmotngSt(void)
 *   boolean *Rte_Pim_PrevVehDynFil1Ena(void)
 *   boolean *Rte_Pim_PrevVehDynFil2Ena(void)
 *   boolean *Rte_Pim_WhlSpdHwAgLrndEna(void)
 *   FilLpRec1 *Rte_Pim_PinionTqFil(void)
 *   FilLpRec1 *Rte_Pim_RelHwAgFil1(void)
 *   FilLpRec1 *Rte_Pim_RelHwAgFil2(void)
 *   StordLstPrmRec1 *Rte_Pim_StordLstPrm(void)
 *   FilLpRec1 *Rte_Pim_YawRateFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   StordLstPrmRec1 *Rte_CData_StordLstPrmDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwAgSnsrlsCorrdPinionAgHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsFCentrHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsPinionTqFilFrq_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsRelHwAgFil1Frq_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsRelHwAgFil2Frq_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsSmotngCoeff_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsSmotngStepThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsStordPinionConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsStordPinionConfThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynDifThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynMotVelThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynPinionTqThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynVehSpdThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsVehDynYawRateThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlFrqThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff1_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwAgCoeff2_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwAgThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdHwConf_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdRatThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsWhlSpdVehSpdThd_Val(void)
 *   float32 Rte_Prm_HwAgSnsrlsYawRateFilFrq_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   uint32 Rte_Prm_HwAgSnsrlsVehDynTmr1Thd_Val(void)
 *   uint32 Rte_Prm_HwAgSnsrlsVehDynTmr2Thd_Val(void)
 *   uint32 Rte_Prm_HwAgSnsrlsWhlSpdTmrThd_Val(void)
 *
 *********************************************************************************************************************/


# define HwAgSnsrls_START_SEC_CODE
# include "HwAgSnsrls_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FSnsrlsHwCentr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <FSnsrlsHwCentr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void FSnsrlsHwCentr_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FSnsrlsHwCentr_Oper FSnsrlsHwCentr_Oper
FUNC(void, HwAgSnsrls_CODE) FSnsrlsHwCentr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSnsrlsInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_HwAgSnsrlsInit1_StordHwAg(float32 data)
 *   void Rte_IrvWrite_HwAgSnsrlsInit1_StordHwConf(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmStordLstPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwAgSnsrlsInit1 HwAgSnsrlsInit1
FUNC(void, HwAgSnsrls_CODE) HwAgSnsrlsInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwAgSnsrlsPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_CmplncErrMotToPinion_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndCrf_Val(s18p13 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotTqCmdCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehYawRate_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlFrqVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_WhlLeFrq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlRiFrq_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwAgSnsrls_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwAgSnsrlsConf_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_HwAgSnsrlsPer1_StordHwAg(void)
 *   float32 Rte_IrvRead_HwAgSnsrlsPer1_StordHwConf(void)
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

# define RTE_RUNNABLE_HwAgSnsrlsPer1 HwAgSnsrlsPer1
FUNC(void, HwAgSnsrls_CODE) HwAgSnsrlsPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RstSnsrlsHwCentr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RstSnsrlsHwCentr>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RstSnsrlsHwCentr_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RstSnsrlsHwCentr_Oper RstSnsrlsHwCentr_Oper
FUNC(void, HwAgSnsrls_CODE) RstSnsrlsHwCentr_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwAgSnsrls_STOP_SEC_CODE
# include "HwAgSnsrls_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1490627847
#    error "The magic number of the generated file <C:/component/SF042A_HwAgSnsrls_Impl/tools/contract/Rte_HwAgSnsrls.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1490627847
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWAGSNSRLS_H */
