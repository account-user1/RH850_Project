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
 *          File:  Rte_MotCurrRegCfg.h
 *        Config:  C:/Component/SF104A_MotCurrRegCfg_Impl/tools/Component.dpa
 *     SW-C Type:  MotCurrRegCfg
 *  Generated at:  Wed Oct 18 15:53:55 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotCurrRegCfg> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTCURRREGCFG_H
# define _RTE_MOTCURRREGCFG_H

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

# include "Rte_MotCurrRegCfg_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotCurrRegCfg
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelMrfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotCurrRegCfgMotVelMrfFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotCurrRegCfg, RTE_CONST, RTE_CONST) Rte_Inst_MotCurrRegCfg; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotCurrRegCfg, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DualEcuMotCtrlMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotAgElecDly_Val (0.0F)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotCurrEolCalSt_Val (0U)
# define Rte_InitValue_MotDampgDax_Val (0.0F)
# define Rte_InitValue_MotDampgQax_Val (0.0F)
# define Rte_InitValue_MotInduDaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotInduQaxEstimd_Val (0.00011889F)
# define Rte_InitValue_MotIntglGainDax_Val (0.0F)
# define Rte_InitValue_MotIntglGainQax_Val (0.0F)
# define Rte_InitValue_MotPropGainDax_Val (0.0F)
# define Rte_InitValue_MotPropGainQax_Val (0.0F)
# define Rte_InitValue_MotREstimd_Val (0.0139083F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_DualEcuMotCtrlMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_MotCurrEolCalSt_Val(P2VAR(MotCurrEolCalSt2, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_MotInduDaxEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_MotInduQaxEstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_MotREstimd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_MotVelMrf_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotCurrRegCfg_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTCURRREGCFG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrRegCfg_MotAgElecDly_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrRegCfg_MotDampgDax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrRegCfg_MotDampgQax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrRegCfg_MotIntglGainDax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrRegCfg_MotIntglGainQax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrRegCfg_MotPropGainDax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotCurrRegCfg_MotPropGainQax_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgIntglGainSampleTi_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotAgCompuDly_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotDampgRatDax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotDampgRatQax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotRVirtDax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotRVirtQax_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotVelFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_MotCurrRegCfg_SysGlbPrmMotPoleCnt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotRefMdlFbCtrlDi_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotNatFrqDaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotNatFrqDaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotNatFrqQaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotNatFrqQaxY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DualEcuMotCtrlMtgtnEna_Logl Rte_Read_MotCurrRegCfg_DualEcuMotCtrlMtgtnEna_Logl
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_MotCurrRegCfg_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotCurrEolCalSt_Val Rte_Read_MotCurrRegCfg_MotCurrEolCalSt_Val
# define Rte_Read_MotInduDaxEstimd_Val Rte_Read_MotCurrRegCfg_MotInduDaxEstimd_Val
# define Rte_Read_MotInduQaxEstimd_Val Rte_Read_MotCurrRegCfg_MotInduQaxEstimd_Val
# define Rte_Read_MotREstimd_Val Rte_Read_MotCurrRegCfg_MotREstimd_Val
# define Rte_Read_MotVelMrf_Val Rte_Read_MotCurrRegCfg_MotVelMrf_Val
# define Rte_Read_VehSpd_Val Rte_Read_MotCurrRegCfg_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotAgElecDly_Val Rte_Write_MotCurrRegCfg_MotAgElecDly_Val
# define Rte_Write_MotDampgDax_Val Rte_Write_MotCurrRegCfg_MotDampgDax_Val
# define Rte_Write_MotDampgQax_Val Rte_Write_MotCurrRegCfg_MotDampgQax_Val
# define Rte_Write_MotIntglGainDax_Val Rte_Write_MotCurrRegCfg_MotIntglGainDax_Val
# define Rte_Write_MotIntglGainQax_Val Rte_Write_MotCurrRegCfg_MotIntglGainQax_Val
# define Rte_Write_MotPropGainDax_Val Rte_Write_MotCurrRegCfg_MotPropGainDax_Val
# define Rte_Write_MotPropGainQax_Val Rte_Write_MotCurrRegCfg_MotPropGainQax_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val

# define Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgIntglGainSampleTi_Val

# define Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotAgCompuDly_Val

# define Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotDampgRatDax_Val

# define Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotDampgRatQax_Val

# define Rte_Prm_MotCurrRegCfgMotRVirtDax_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotRVirtDax_Val

# define Rte_Prm_MotCurrRegCfgMotRVirtQax_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotRVirtQax_Val

# define Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotVelFilFrq_Val

# define Rte_Prm_SysGlbPrmMotPoleCnt_Val Rte_Prm_MotCurrRegCfg_SysGlbPrmMotPoleCnt_Val

# define Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl Rte_Prm_MotCurrRegCfg_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl

# define Rte_Prm_MotRefMdlFbCtrlDi_Logl Rte_Prm_MotCurrRegCfg_MotRefMdlFbCtrlDi_Logl

# define Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D

# define Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D

# define Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D

# define Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotNatFrqDaxY_Ary1D

# define Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D Rte_Prm_MotCurrRegCfg_MotCurrRegCfgMotNatFrqQaxY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotCurrRegCfgMotVelMrfFild() (Rte_Inst_MotCurrRegCfg->Pim_dMotCurrRegCfgMotVelMrfFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelMrfFild() (Rte_Inst_MotCurrRegCfg->Pim_MotVelMrfFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotCurrRegCfgMotVelMrfFild(void)
 *   FilLpRec1 *Rte_Pim_MotVelMrfFild(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   boolean Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *   u10p6 *Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_4
 *   u10p6 *Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_4
 *   u11p5 *Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_4
 *   u9p7 *Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *
 *********************************************************************************************************************/


# define MotCurrRegCfg_START_SEC_CODE
# include "MotCurrRegCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCurrRegCfgInit1 MotCurrRegCfgInit1
FUNC(void, MotCurrRegCfg_CODE) MotCurrRegCfgInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegCfgPer1
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
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotREstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAgElecDly_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDampgDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDampgQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotIntglGainDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotIntglGainQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotPropGainDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotPropGainQax_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCurrRegCfgPer1 MotCurrRegCfgPer1
FUNC(void, MotCurrRegCfg_CODE) MotCurrRegCfgPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotCurrRegCfg_STOP_SEC_CODE
# include "MotCurrRegCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTCURRREGCFG_H */

#include "Rte_Stubs.h"
