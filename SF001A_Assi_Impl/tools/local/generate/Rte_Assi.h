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
 *          File:  Rte_Assi.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF001A_Assi_Impl/tools/Component.dpa
 *     SW-C Type:  Assi
 *  Generated at:  Tue May  9 08:54:50 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Assi> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ASSI_H
# define _RTE_ASSI_H

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

# include "Rte_Assi_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Assi
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiThermAssiSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dAssiWhlImbRejctnBlnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Assi, RTE_CONST, RTE_CONST) Rte_Inst_Assi; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Assi, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmdBas_Val (0.0F)
# define Rte_InitValue_AssiCmdBasSca_Val (1.0F)
# define Rte_InitValue_AssiLnrGain_Val (1.0F)
# define Rte_InitValue_AssiLnrGainEna_Logl (FALSE)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqHysOvrl_Val (0.0F)
# define Rte_InitValue_HwTqOvrl_Val (0.0F)
# define Rte_InitValue_ThermLimSlowFilMax_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_WhlImbRejctnAmp_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_AssiCmdBasSca_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_AssiLnrGain_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_AssiLnrGainEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_HwTqHysOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_HwTqOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_ThermLimSlowFilMax_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Assi_WhlImbRejctnAmp_Val(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Assi_AssiCmdBas_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Assi_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_ASSI_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMaxX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMaxY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMinX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s4p11_12_20, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiMotTqWhlImbRejctnMinY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u16p0, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiThermScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u16p0_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiThermScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiThermScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiThermScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u5p11_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiWhlImbRejctnBlndScaX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u2p14_12_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_AssiWhlImbRejctnBlndScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Assi_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmdBasSca_Val Rte_Read_Assi_AssiCmdBasSca_Val
# define Rte_Read_AssiLnrGain_Val Rte_Read_Assi_AssiLnrGain_Val
# define Rte_Read_AssiLnrGainEna_Logl Rte_Read_Assi_AssiLnrGainEna_Logl
# define Rte_Read_HwTq_Val Rte_Read_Assi_HwTq_Val
# define Rte_Read_HwTqHysOvrl_Val Rte_Read_Assi_HwTqHysOvrl_Val
# define Rte_Read_HwTqOvrl_Val Rte_Read_Assi_HwTqOvrl_Val
# define Rte_Read_ThermLimSlowFilMax_Val Rte_Read_Assi_ThermLimSlowFilMax_Val
# define Rte_Read_VehSpd_Val Rte_Read_Assi_VehSpd_Val
# define Rte_Read_WhlImbRejctnAmp_Val Rte_Read_Assi_WhlImbRejctnAmp_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_AssiCmdBas_Val Rte_Write_Assi_AssiCmdBas_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_Assi_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D Rte_Prm_Assi_AssiMotTqWhlImbRejctnMaxX_Ary2D

# define Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D Rte_Prm_Assi_AssiMotTqWhlImbRejctnMaxY_Ary2D

# define Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D Rte_Prm_Assi_AssiMotTqWhlImbRejctnMinX_Ary2D

# define Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D Rte_Prm_Assi_AssiMotTqWhlImbRejctnMinY_Ary2D

# define Rte_Prm_AssiThermScaX_Ary1D Rte_Prm_Assi_AssiThermScaX_Ary1D

# define Rte_Prm_AssiThermScaY_Ary1D Rte_Prm_Assi_AssiThermScaY_Ary1D

# define Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D Rte_Prm_Assi_AssiWhlImbRejctnBlndScaX_Ary2D

# define Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D Rte_Prm_Assi_AssiWhlImbRejctnBlndScaY_Ary2D

# define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D Rte_Prm_Assi_SysGlbPrmVehSpdBilnrSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dAssiThermAssiSca() (Rte_Inst_Assi->Pim_dAssiThermAssiSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dAssiWhlImbRejctnBlnd() (Rte_Inst_Assi->Pim_dAssiWhlImbRejctnBlnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dAssiThermAssiSca(void)
 *   float32 *Rte_Pim_dAssiWhlImbRejctnBlnd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u16p0 *Rte_Prm_AssiThermScaX_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_2
 *   u2p14 *Rte_Prm_AssiThermScaY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_2
 *   u5p11 *Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_5
 *   u2p14 *Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_12_5
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


# define Assi_START_SEC_CODE
# include "Assi_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBasSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiLnrGain_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiLnrGainEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqHysOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermLimSlowFilMax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdBas_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_AssiPer1 AssiPer1
FUNC(void, Assi_CODE) AssiPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Assi_STOP_SEC_CODE
# include "Assi_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ASSI_H */

#include "Rte_Stubs.h"
