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
 *          File:  Rte_HiLoadStallLimr.h
 *        Config:  C:/_Synergy_Projects/Working/SF017A_HiLoadStallLimr_Impl/tools/Component.dpa
 *     SW-C Type:  HiLoadStallLimr
 *  Generated at:  Fri Nov  3 09:40:54 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HiLoadStallLimr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HILOADSTALLLIMR_H
# define _RTE_HILOADSTALLLIMR_H

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

# include "Rte_HiLoadStallLimr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HiLoadStallLimr
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FetLoaMtgtnCalIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StallMotTqCmdFetMtgtnFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StallMotTqCmdFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StallMotTqLimFetMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_StallMotTqLimPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHiLoadStallLimrStallMotTqCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHiLoadStallLimrStallMotTqCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHiLoadStallLimrStallMotTqLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HiLoadStallLimr, RTE_CONST, RTE_CONST) Rte_Inst_HiLoadStallLimr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HiLoadStallLimr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DualEcuFltMtgtnEna_Logl (FALSE)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotTqCmdLimdPreStall_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_StallMotTqLim_Val (8.8F)
# define Rte_InitValue_StallMotTqLimDi_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HiLoadStallLimr_DualEcuFltMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_HILOADSTALLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HiLoadStallLimr_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_HILOADSTALLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HiLoadStallLimr_MotTqCmdLimdPreStall_Val(P2VAR(float32, AUTOMATIC, RTE_HILOADSTALLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HiLoadStallLimr_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_HILOADSTALLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HiLoadStallLimr_StallMotTqLimDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_HILOADSTALLLIMR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HiLoadStallLimr_StallMotTqLim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrMotTqCmdFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallThermLimSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrMotVelMgnThd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrMotVelMgnThd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdLimX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdLimY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(float32, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_f32_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_DualEcuFltMtgtnEna_Logl Rte_Read_HiLoadStallLimr_DualEcuFltMtgtnEna_Logl
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_HiLoadStallLimr_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotTqCmdLimdPreStall_Val Rte_Read_HiLoadStallLimr_MotTqCmdLimdPreStall_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_HiLoadStallLimr_MotVelCrf_Val
# define Rte_Read_StallMotTqLimDi_Logl Rte_Read_HiLoadStallLimr_StallMotTqLimDi_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_StallMotTqLim_Val Rte_Write_HiLoadStallLimr_StallMotTqLim_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val Rte_Prm_HiLoadStallLimr_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val

# define Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val Rte_Prm_HiLoadStallLimr_HiLoadStallLimrMotTqCmdFilFrq_Val

# define Rte_Prm_HiLoadStallLimrStallThermLimSca_Val Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallThermLimSca_Val

# define Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D Rte_Prm_HiLoadStallLimr_HiLoadStallLimrMotVelMgnThd_Ary1D

# define Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D

# define Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D

# define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdLimX_Ary1D

# define Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqCmdLimY_Ary1D

# define Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D Rte_Prm_HiLoadStallLimr_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_StallMotTqLimFetMtgtnPrev() (Rte_Inst_HiLoadStallLimr->Pim_StallMotTqLimFetMtgtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StallMotTqLimPrev() (Rte_Inst_HiLoadStallLimr->Pim_StallMotTqLimPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHiLoadStallLimrStallMotTqCmd() (Rte_Inst_HiLoadStallLimr->Pim_dHiLoadStallLimrStallMotTqCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild() (Rte_Inst_HiLoadStallLimr->Pim_dHiLoadStallLimrStallMotTqCmdFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHiLoadStallLimrStallMotTqLim() (Rte_Inst_HiLoadStallLimr->Pim_dHiLoadStallLimrStallMotTqLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FetLoaMtgtnCalIdx() (Rte_Inst_HiLoadStallLimr->Pim_FetLoaMtgtnCalIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StallMotTqCmdFetMtgtnFil() (Rte_Inst_HiLoadStallLimr->Pim_StallMotTqCmdFetMtgtnFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_StallMotTqCmdFil() (Rte_Inst_HiLoadStallLimr->Pim_StallMotTqCmdFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_StallMotTqLimFetMtgtnPrev(void)
 *   float32 *Rte_Pim_StallMotTqLimPrev(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqCmd(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqLim(void)
 *   uint8 *Rte_Pim_FetLoaMtgtnCalIdx(void)
 *   FilLpRec1 *Rte_Pim_StallMotTqCmdFetMtgtnFil(void)
 *   FilLpRec1 *Rte_Pim_StallMotTqCmdFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val(void)
 *   float32 Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val(void)
 *   float32 Rte_Prm_HiLoadStallLimrStallThermLimSca_Val(void)
 *   float32 *Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_2
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   float32 *Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_2
 *
 *********************************************************************************************************************/


# define HiLoadStallLimr_START_SEC_CODE
# include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HiLoadStallLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HiLoadStallLimrInit1 HiLoadStallLimrInit1
FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HiLoadStallLimrPer1
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
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdLimdPreStall_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLimDi_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_StallMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HiLoadStallLimrPer1 HiLoadStallLimrPer1
FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HiLoadStallLimr_STOP_SEC_CODE
# include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_HILOADSTALLLIMR_H */

#include "Rte_Stubs.h"
