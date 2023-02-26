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
 *          File:  Rte_MotRplCoggCfg.h
 *     SW-C Type:  MotRplCoggCfg
 *  Generated at:  Tue May 17 12:06:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotRplCoggCfg> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTRPLCOGGCFG_H
# define _RTE_MOTRPLCOGGCFG_H

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

# include "Rte_MotRplCoggCfg_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotRplCoggCfg
{
  /* PIM Handles section */
  P2VAR(MotRplCoggPrmRec2, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotRplCoggPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_s1p14_10_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqRplOrder1X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_s1p14_10_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqRplOrder1Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_s1p14_10_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqRplOrder2X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_s1p14_10_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqRplOrder2Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_s1p14_10_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqRplOrder3X; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary2D_s1p14_10_12, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqRplOrder3Y; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotAgElecDlyRpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotTqRplOrder1Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotTqRplOrder1Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotTqRplOrder2Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotTqRplOrder2Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotTqRplOrder3Mgn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotRplCoggCfgMotTqRplOrder3Pha; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotRplCoggCfg, RTE_CONST, RTE_CONST) Rte_Inst_MotRplCoggCfg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotRplCoggCfg, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotAgElecDlyRpl_Val (0.0F)
# define Rte_InitValue_MotBackEmfConEstimd_Val (0.025F)
# define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
# define Rte_InitValue_MotCurrQaxCmd_Val (0.0F)
# define Rte_InitValue_MotCurrQaxToMotTqGain_Val (0.021651F)
# define Rte_InitValue_MotInduDaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotInduQaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotTqCmdMrfScad_Val (0.0F)
# define Rte_InitValue_MotTqRplCoggOrder1Mgn_Val (0.0F)
# define Rte_InitValue_MotTqRplCoggOrder1Pha_Val (0.0F)
# define Rte_InitValue_MotTqRplCoggOrder2Mgn_Val (0.0F)
# define Rte_InitValue_MotTqRplCoggOrder2Pha_Val (0.0F)
# define Rte_InitValue_MotTqRplCoggOrder3Mgn_Val (0.0F)
# define Rte_InitValue_MotTqRplCoggOrder3Pha_Val (0.0F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRplCoggCfg_MotBackEmfConEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRplCoggCfg_MotCurrDaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRplCoggCfg_MotCurrQaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRplCoggCfg_MotInduDaxEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRplCoggCfg_MotInduQaxEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRplCoggCfg_MotTqCmdMrfScad_Val(P2VAR(float32, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotRplCoggCfg_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotAgElecDlyRpl_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotCurrQaxToMotTqGain_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder1Mgn_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder1Pha_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder2Mgn_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder2Pha_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder3Mgn_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder3Pha_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotRplCoggCfg_MotRplCoggPrm_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotRplCoggCfg_MotRplCoggPrm_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotCtrlPrmEstimnMotBackEmfConNom_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotAgTiDly_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCmdHrmncOrder1Elec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCmdHrmncOrder2Elec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCmdHrmncOrder3Elec_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotRplCoggCfg_SysGlbPrmMotPoleCnt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotCurrQaxRpl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotCurrQaxRpl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u3p13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u3p13_20_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u0p16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u0p16_20_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u5p11_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s1p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder1X_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s1p14_10_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder1X_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s1p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s1p14_10_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s1p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder2X_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s1p14_10_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder2X_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s1p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s1p14_10_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s1p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder3X_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s1p14_10_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder3X_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s1p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s1p14_10_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotVelBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u16p0_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotVelBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotBackEmfConEstimd_Val Rte_Read_MotRplCoggCfg_MotBackEmfConEstimd_Val
# define Rte_Read_MotCurrDaxCmd_Val Rte_Read_MotRplCoggCfg_MotCurrDaxCmd_Val
# define Rte_Read_MotCurrQaxCmd_Val Rte_Read_MotRplCoggCfg_MotCurrQaxCmd_Val
# define Rte_Read_MotInduDaxEstimd_Val Rte_Read_MotRplCoggCfg_MotInduDaxEstimd_Val
# define Rte_Read_MotInduQaxEstimd_Val Rte_Read_MotRplCoggCfg_MotInduQaxEstimd_Val
# define Rte_Read_MotTqCmdMrfScad_Val Rte_Read_MotRplCoggCfg_MotTqCmdMrfScad_Val
# define Rte_Read_MotVelMrf_Val Rte_Read_MotRplCoggCfg_MotVelMrf_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotAgElecDlyRpl_Val Rte_Write_MotRplCoggCfg_MotAgElecDlyRpl_Val
# define Rte_Write_MotCurrQaxToMotTqGain_Val Rte_Write_MotRplCoggCfg_MotCurrQaxToMotTqGain_Val
# define Rte_Write_MotTqRplCoggOrder1Mgn_Val Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder1Mgn_Val
# define Rte_Write_MotTqRplCoggOrder1Pha_Val Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder1Pha_Val
# define Rte_Write_MotTqRplCoggOrder2Mgn_Val Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder2Mgn_Val
# define Rte_Write_MotTqRplCoggOrder2Pha_Val Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder2Pha_Val
# define Rte_Write_MotTqRplCoggOrder3Mgn_Val Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder3Mgn_Val
# define Rte_Write_MotTqRplCoggOrder3Pha_Val Rte_Write_MotRplCoggCfg_MotTqRplCoggOrder3Pha_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_MotRplCoggPrm_GetErrorStatus Rte_Call_MotRplCoggCfg_MotRplCoggPrm_GetErrorStatus
# define Rte_Call_MotRplCoggPrm_SetRamBlockStatus Rte_Call_MotRplCoggCfg_MotRplCoggPrm_SetRamBlockStatus


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val Rte_Prm_MotRplCoggCfg_MotCtrlPrmEstimnMotBackEmfConNom_Val

# define Rte_Prm_MotRplCoggCfgMotAgTiDly_Val Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotAgTiDly_Val

# define Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val Rte_Prm_MotRplCoggCfg_MotRplCoggCmdHrmncOrder1Elec_Val

# define Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val Rte_Prm_MotRplCoggCfg_MotRplCoggCmdHrmncOrder2Elec_Val

# define Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val Rte_Prm_MotRplCoggCfg_MotRplCoggCmdHrmncOrder3Elec_Val

# define Rte_Prm_SysGlbPrmMotPoleCnt_Val Rte_Prm_MotRplCoggCfg_SysGlbPrmMotPoleCnt_Val

# define Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D

# define Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotCurrQaxRpl_Ary1D

# define Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D

# define Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D

# define Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D

# define Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder1X_Ary2D

# define Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder1Y_Ary2D

# define Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder2X_Ary2D

# define Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder2Y_Ary2D

# define Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder3X_Ary2D

# define Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotTqRplOrder3Y_Ary2D

# define Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D Rte_Prm_MotRplCoggCfg_MotRplCoggCfgMotVelBilnrSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotAgElecDlyRpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotTqRplOrder1Mgn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotTqRplOrder1Pha) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotTqRplOrder2Mgn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotTqRplOrder2Pha) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotTqRplOrder3Mgn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha() (Rte_Inst_MotRplCoggCfg->Pim_dMotRplCoggCfgMotTqRplOrder3Pha) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotTqRplOrder1X() ((P2VAR(s1p14, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder1X) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotTqRplOrder1X() (Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder1X) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotTqRplOrder1Y() ((P2VAR(s1p14, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder1Y) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotTqRplOrder1Y() (Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder1Y) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotTqRplOrder2X() ((P2VAR(s1p14, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder2X) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotTqRplOrder2X() (Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder2X) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotTqRplOrder2Y() ((P2VAR(s1p14, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder2Y) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotTqRplOrder2Y() (Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder2Y) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotTqRplOrder3X() ((P2VAR(s1p14, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder3X) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotTqRplOrder3X() (Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder3X) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotTqRplOrder3Y() ((P2VAR(s1p14, AUTOMATIC, RTE_VAR_NOINIT)) *Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder3Y) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotTqRplOrder3Y() (Rte_Inst_MotRplCoggCfg->Pim_MotTqRplOrder3Y) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# define Rte_Pim_MotRplCoggPrm() (Rte_Inst_MotRplCoggCfg->Pim_MotRplCoggPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder1X(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder1Y(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder2X(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder2Y(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder3X(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder3Y(void)
 *   MotRplCoggPrmRec2 *Rte_Pim_MotRplCoggPrm(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val(void)
 *   float32 Rte_Prm_MotRplCoggCfgMotAgTiDly_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   u9p7 *Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(void)
 *   u9p7 *Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(void)
 *   u3p13 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(void)
 *   u0p16 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(void)
 *   u5p11 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(void)
 *   u16p0 *Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


# define MotRplCoggCfg_START_SEC_CODE
# include "MotRplCoggCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotRplCoggPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotRplCoggPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMotRplCoggPrm_Oper(uint16 *CoggOrder1_Arg, s1p14 *CoggOrder1X_Arg, s1p14 *CoggOrder1Y_Arg, uint16 *CoggOrder2_Arg, s1p14 *CoggOrder2X_Arg, s1p14 *CoggOrder2Y_Arg, uint16 *CoggOrder3_Arg, s1p14 *CoggOrder3X_Arg, s1p14 *CoggOrder3Y_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_GetMotRplCoggPrm_Oper GetMotRplCoggPrm_Oper
FUNC(void, MotRplCoggCfg_CODE) GetMotRplCoggPrm_Oper(P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3Y_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotRplCoggCfgInit1 MotRplCoggCfgInit1
FUNC(void, MotRplCoggCfg_CODE) MotRplCoggCfgInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCfgPer1
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
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAgElecDlyRpl_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrQaxToMotTqGain_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder1Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder1Pha_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder2Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder2Pha_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder3Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder3Pha_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotRplCoggCfgPer1 MotRplCoggCfgPer1
FUNC(void, MotRplCoggCfg_CODE) MotRplCoggCfgPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotRplCoggPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotRplCoggPrm>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SetMotRplCoggPrm_Oper SetMotRplCoggPrm_Oper
FUNC(void, MotRplCoggCfg_CODE) SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotRplCoggCfg_STOP_SEC_CODE
# include "MotRplCoggCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1463507457
#    error "The magic number of the generated file <C:/Component/SF106A_MotRplCoggCfg_Impl/tools/contract/Rte_MotRplCoggCfg.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1463507457
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTRPLCOGGCFG_H */
