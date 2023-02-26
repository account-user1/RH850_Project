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
 *          File:  Rte_Rtn.h
 *        Config:  C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea4/SF002A_Rtn_Impl-nz2999/SF002A_Rtn_Impl/tools/Component.dpa
 *     SW-C Type:  Rtn
 *  Generated at:  Mon Jun 26 11:26:21 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Rtn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_RTN_H
# define _RTE_RTN_H

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

# include "Rte_Rtn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Rtn
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAgAuthy; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwAgOffsLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRtnAbsltHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRtnAssiMechTRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRtnBascRtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRtnHwAgAuthySca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRtnHwAgRtnCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRtnHwTqRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dRtnHwVelRtnSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Rtn, RTE_CONST, RTE_CONST) Rte_Inst_Rtn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Rtn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiMechT_Val (0.0F)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwAgAuthySca_Val (0.0F)
# define Rte_InitValue_HwAgRtnOffs_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_RtnCmd_Val (0.0F)
# define Rte_InitValue_RtnCmdDi_Logl (FALSE)
# define Rte_InitValue_RtnCmdDiagcDi_Logl (FALSE)
# define Rte_InitValue_RtnCmdSca_Val (0.0F)
# define Rte_InitValue_RtnCmdScaServo_Val (1.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdVld_Logl (TRUE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_AssiMechT_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_HwAgAuthySca_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_HwAgRtnOffs_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_RtnCmdDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_RtnCmdDiagcDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_RtnCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_RtnCmdScaServo_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Rtn_VehSpdVld_Logl(P2VAR(boolean, AUTOMATIC, RTE_RTN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Rtn_RtnCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Rtn_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_RTN_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Rtn_RtnHwAuthySlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Rtn_RtnOffsRng_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_Rtn_RtnOffsSlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u12p4_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAgOffsCalcdX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u5p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u5p11_9_16, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAgOffsCalcdY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAuthyScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAuthyScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAuthyScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnHwAuthyScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaTqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaTqX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaTqY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_9_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaTqY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u7p9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaVelX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u7p9_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaVelX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaVelY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u8p8_9_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnScaVelY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s11p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnTScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s11p4_14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnTScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnTScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnTScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_9, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_Rtn_RtnVehSpdSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiMechT_Val Rte_Read_Rtn_AssiMechT_Val
# define Rte_Read_HwAg_Val Rte_Read_Rtn_HwAg_Val
# define Rte_Read_HwAgAuthySca_Val Rte_Read_Rtn_HwAgAuthySca_Val
# define Rte_Read_HwAgRtnOffs_Val Rte_Read_Rtn_HwAgRtnOffs_Val
# define Rte_Read_HwTq_Val Rte_Read_Rtn_HwTq_Val
# define Rte_Read_HwVel_Val Rte_Read_Rtn_HwVel_Val
# define Rte_Read_RtnCmdDi_Logl Rte_Read_Rtn_RtnCmdDi_Logl
# define Rte_Read_RtnCmdDiagcDi_Logl Rte_Read_Rtn_RtnCmdDiagcDi_Logl
# define Rte_Read_RtnCmdSca_Val Rte_Read_Rtn_RtnCmdSca_Val
# define Rte_Read_RtnCmdScaServo_Val Rte_Read_Rtn_RtnCmdScaServo_Val
# define Rte_Read_VehSpd_Val Rte_Read_Rtn_VehSpd_Val
# define Rte_Read_VehSpdVld_Logl Rte_Read_Rtn_VehSpdVld_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_RtnCmd_Val Rte_Write_Rtn_RtnCmd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_Rtn_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_RtnHwAuthySlew_Val Rte_Prm_Rtn_RtnHwAuthySlew_Val

# define Rte_Prm_RtnOffsRng_Val Rte_Prm_Rtn_RtnOffsRng_Val

# define Rte_Prm_RtnOffsSlew_Val Rte_Prm_Rtn_RtnOffsSlew_Val

# define Rte_Prm_RtnHwAgOffsCalcdX_Ary2D Rte_Prm_Rtn_RtnHwAgOffsCalcdX_Ary2D

# define Rte_Prm_RtnHwAgOffsCalcdY_Ary2D Rte_Prm_Rtn_RtnHwAgOffsCalcdY_Ary2D

# define Rte_Prm_RtnHwAuthyScaX_Ary1D Rte_Prm_Rtn_RtnHwAuthyScaX_Ary1D

# define Rte_Prm_RtnHwAuthyScaY_Ary1D Rte_Prm_Rtn_RtnHwAuthyScaY_Ary1D

# define Rte_Prm_RtnScaTqX_Ary2D Rte_Prm_Rtn_RtnScaTqX_Ary2D

# define Rte_Prm_RtnScaTqY_Ary2D Rte_Prm_Rtn_RtnScaTqY_Ary2D

# define Rte_Prm_RtnScaVelX_Ary2D Rte_Prm_Rtn_RtnScaVelX_Ary2D

# define Rte_Prm_RtnScaVelY_Ary2D Rte_Prm_Rtn_RtnScaVelY_Ary2D

# define Rte_Prm_RtnTScaX_Ary1D Rte_Prm_Rtn_RtnTScaX_Ary1D

# define Rte_Prm_RtnTScaY_Ary1D Rte_Prm_Rtn_RtnTScaY_Ary1D

# define Rte_Prm_RtnVehSpdSeln_Ary1D Rte_Prm_Rtn_RtnVehSpdSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevHwAgAuthy() (Rte_Inst_Rtn->Pim_PrevHwAgAuthy) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwAgOffsLimd() (Rte_Inst_Rtn->Pim_PrevHwAgOffsLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRtnAbsltHwAg() (Rte_Inst_Rtn->Pim_dRtnAbsltHwAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRtnAssiMechTRtnSca() (Rte_Inst_Rtn->Pim_dRtnAssiMechTRtnSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRtnBascRtn() (Rte_Inst_Rtn->Pim_dRtnBascRtn) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRtnHwAgAuthySca() (Rte_Inst_Rtn->Pim_dRtnHwAgAuthySca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRtnHwAgRtnCmd() (Rte_Inst_Rtn->Pim_dRtnHwAgRtnCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRtnHwTqRtnSca() (Rte_Inst_Rtn->Pim_dRtnHwTqRtnSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dRtnHwVelRtnSca() (Rte_Inst_Rtn->Pim_dRtnHwVelRtnSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevHwAgAuthy(void)
 *   float32 *Rte_Pim_PrevHwAgOffsLimd(void)
 *   float32 *Rte_Pim_dRtnAbsltHwAg(void)
 *   float32 *Rte_Pim_dRtnAssiMechTRtnSca(void)
 *   float32 *Rte_Pim_dRtnBascRtn(void)
 *   float32 *Rte_Pim_dRtnHwAgAuthySca(void)
 *   float32 *Rte_Pim_dRtnHwAgRtnCmd(void)
 *   float32 *Rte_Pim_dRtnHwTqRtnSca(void)
 *   float32 *Rte_Pim_dRtnHwVelRtnSca(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_RtnHwAuthySlew_Val(void)
 *   float32 Rte_Prm_RtnOffsRng_Val(void)
 *   float32 Rte_Prm_RtnOffsSlew_Val(void)
 *   u12p4 *Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_9_16
 *   u5p11 *Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_9_16
 *   u8p8 *Rte_Prm_RtnHwAuthyScaX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_4
 *   u9p7 *Rte_Prm_RtnHwAuthyScaY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u8p8 *Rte_Prm_RtnScaTqX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u8p8 *Rte_Prm_RtnScaTqY_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u7p9 *Rte_Prm_RtnScaVelX_Ary2D(void)
 *     Returnvalue: u7p9* is of type Ary2D_u7p9_9_4
 *   u8p8 *Rte_Prm_RtnScaVelY_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_4
 *   s11p4 *Rte_Prm_RtnTScaX_Ary1D(void)
 *     Returnvalue: s11p4* is of type Ary1D_s11p4_14
 *   u8p8 *Rte_Prm_RtnTScaY_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_14
 *   u9p7 *Rte_Prm_RtnVehSpdSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_9
 *
 *********************************************************************************************************************/


# define Rtn_START_SEC_CODE
# include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RtnInit1 RtnInit1
FUNC(void, Rtn_CODE) RtnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnPer1
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
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthySca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgRtnOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RtnCmdDiagcDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RtnCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmdScaServo_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RtnCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RtnPer1 RtnPer1
FUNC(void, Rtn_CODE) RtnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Rtn_STOP_SEC_CODE
# include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_RTN_H */

#include "Rte_Stubs.h"
