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
 *          File:  Rte_PosnTrakgServo.h
 *     SW-C Type:  PosnTrakgServo
 *  Generated at:  Wed Jan 25 15:10:41 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <PosnTrakgServo> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_POSNTRAKGSERVO_H
# define _RTE_POSNTRAKGSERVO_H

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

# include "Rte_PosnTrakgServo_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_PosnTrakgServo
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AntiWdupCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqDerivtvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IntgtrInpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_IntgtrOutpPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OutpAntiWdupCmdPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoCmdInpArbnFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoCmdOutpArbnFltMtgtnPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoEnaTiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoHwAgValRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnServoHwVelValRateLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoCmdPreLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoEnaBlndFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoFfCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoHwAg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoHwAgErr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoHwAgTarLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoHwVelTarLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoIntgtrCmdLimd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dPosnTrakgServoPtlStFbCmd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_PosnTrakgServo, RTE_CONST, RTE_CONST) Rte_Inst_PosnTrakgServo; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_PosnTrakgServo, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_PosnServoCmd_Val (0.0F)
# define Rte_InitValue_PosnServoEna_Logl (FALSE)
# define Rte_InitValue_PosnServoHwAg_Val (0.0F)
# define Rte_InitValue_PosnServoHwVel_Val (0.0F)
# define Rte_InitValue_PosnServoIntgtrOffs_Val (0.0F)
# define Rte_InitValue_PosnServoIntgtrSt_Val (0.0F)
# define Rte_InitValue_PosnTrakgArbnFltMtgtnEna_Logl (FALSE)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_PosnServoEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_PosnServoHwAg_Val(P2VAR(float32, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_PosnServoHwVel_Val(P2VAR(float32, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_PosnServoIntgtrOffs_Val(P2VAR(float32, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_PosnTrakgArbnFltMtgtnEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_PosnTrakgServo_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_POSNTRAKGSERVO_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PosnTrakgServo_PosnServoCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PosnTrakgServo_PosnServoIntgtrSt_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoIntgtrAntiWdupGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoIntgtrStCorrnGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoLpFilCutOffFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoOutpAntiWdupGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PosnTrakgServo_SysGlbPrmSysKineRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_PosnTrakgServo_SysGlbPrmSysTqRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoEnaBlndFacTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoEnaBlndFacTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoEnaBlndFacTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoEnaBlndFacTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoFfGain_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u12p4_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoFfGain_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoFfVelGain_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoFfVelGain_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u12p4_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain1_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain2_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain2_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s8p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain3_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s8p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain3_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain4_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s4p11_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGain4_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGainArbnFltMtgtn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoGainArbnFltMtgtn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u11p5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u11p5_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u15p1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoHwAgTarRateLimTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u15p1_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoHwAgTarRateLimTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u15p1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoHwVelTarRateLimTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u15p1_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoHwVelTarRateLimTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u15p1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoIntglGain_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u15p1_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoIntglGain_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u15p1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoIntglLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u15p1_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoIntglLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoOutpLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoOutpLim_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoVehSpdTbl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_PosnTrakgServo_PosnTrakgServoVehSpdTbl_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwAg_Val Rte_Read_PosnTrakgServo_HwAg_Val
# define Rte_Read_HwTq_Val Rte_Read_PosnTrakgServo_HwTq_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_PosnTrakgServo_MotVelCrf_Val
# define Rte_Read_PosnServoEna_Logl Rte_Read_PosnTrakgServo_PosnServoEna_Logl
# define Rte_Read_PosnServoHwAg_Val Rte_Read_PosnTrakgServo_PosnServoHwAg_Val
# define Rte_Read_PosnServoHwVel_Val Rte_Read_PosnTrakgServo_PosnServoHwVel_Val
# define Rte_Read_PosnServoIntgtrOffs_Val Rte_Read_PosnTrakgServo_PosnServoIntgtrOffs_Val
# define Rte_Read_PosnTrakgArbnFltMtgtnEna_Logl Rte_Read_PosnTrakgServo_PosnTrakgArbnFltMtgtnEna_Logl
# define Rte_Read_VehSpd_Val Rte_Read_PosnTrakgServo_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PosnServoCmd_Val Rte_Write_PosnTrakgServo_PosnServoCmd_Val
# define Rte_Write_PosnServoIntgtrSt_Val Rte_Write_PosnTrakgServo_PosnServoIntgtrSt_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val Rte_Prm_PosnTrakgServo_PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val

# define Rte_Prm_PosnTrakgServoIntgtrAntiWdupGain_Val Rte_Prm_PosnTrakgServo_PosnTrakgServoIntgtrAntiWdupGain_Val

# define Rte_Prm_PosnTrakgServoIntgtrStCorrnGain_Val Rte_Prm_PosnTrakgServo_PosnTrakgServoIntgtrStCorrnGain_Val

# define Rte_Prm_PosnTrakgServoLpFilCutOffFrq_Val Rte_Prm_PosnTrakgServo_PosnTrakgServoLpFilCutOffFrq_Val

# define Rte_Prm_PosnTrakgServoOutpAntiWdupGain_Val Rte_Prm_PosnTrakgServo_PosnTrakgServoOutpAntiWdupGain_Val

# define Rte_Prm_SysGlbPrmSysKineRat_Val Rte_Prm_PosnTrakgServo_SysGlbPrmSysKineRat_Val

# define Rte_Prm_SysGlbPrmSysTqRat_Val Rte_Prm_PosnTrakgServo_SysGlbPrmSysTqRat_Val

# define Rte_Prm_PosnTrakgServoEnaBlndFacTblX_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoEnaBlndFacTblX_Ary1D

# define Rte_Prm_PosnTrakgServoEnaBlndFacTblY_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoEnaBlndFacTblY_Ary1D

# define Rte_Prm_PosnTrakgServoFfGain_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoFfGain_Ary1D

# define Rte_Prm_PosnTrakgServoFfVelGain_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoFfVelGain_Ary1D

# define Rte_Prm_PosnTrakgServoGain1_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoGain1_Ary1D

# define Rte_Prm_PosnTrakgServoGain2_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoGain2_Ary1D

# define Rte_Prm_PosnTrakgServoGain3_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoGain3_Ary1D

# define Rte_Prm_PosnTrakgServoGain4_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoGain4_Ary1D

# define Rte_Prm_PosnTrakgServoGainArbnFltMtgtn_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoGainArbnFltMtgtn_Ary1D

# define Rte_Prm_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D

# define Rte_Prm_PosnTrakgServoHwAgTarRateLimTblY_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoHwAgTarRateLimTblY_Ary1D

# define Rte_Prm_PosnTrakgServoHwVelTarRateLimTblY_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoHwVelTarRateLimTblY_Ary1D

# define Rte_Prm_PosnTrakgServoIntglGain_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoIntglGain_Ary1D

# define Rte_Prm_PosnTrakgServoIntglLim_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoIntglLim_Ary1D

# define Rte_Prm_PosnTrakgServoOutpLim_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoOutpLim_Ary1D

# define Rte_Prm_PosnTrakgServoVehSpdTbl_Ary1D Rte_Prm_PosnTrakgServo_PosnTrakgServoVehSpdTbl_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_AntiWdupCmdPrev() (Rte_Inst_PosnTrakgServo->Pim_AntiWdupCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqDerivtvPrev() (Rte_Inst_PosnTrakgServo->Pim_HwTqDerivtvPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqPrev() (Rte_Inst_PosnTrakgServo->Pim_HwTqPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IntgtrInpPrev() (Rte_Inst_PosnTrakgServo->Pim_IntgtrInpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_IntgtrOutpPrev() (Rte_Inst_PosnTrakgServo->Pim_IntgtrOutpPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_OutpAntiWdupCmdPrev() (Rte_Inst_PosnTrakgServo->Pim_OutpAntiWdupCmdPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoCmdInpArbnFltMtgtnPrev() (Rte_Inst_PosnTrakgServo->Pim_PosnServoCmdInpArbnFltMtgtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoCmdOutpArbnFltMtgtnPrev() (Rte_Inst_PosnTrakgServo->Pim_PosnServoCmdOutpArbnFltMtgtnPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoEnaTiPrev() (Rte_Inst_PosnTrakgServo->Pim_PosnServoEnaTiPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoHwAgValRateLim() (Rte_Inst_PosnTrakgServo->Pim_PosnServoHwAgValRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnServoHwVelValRateLim() (Rte_Inst_PosnTrakgServo->Pim_PosnServoHwVelValRateLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoCmdPreLimd() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoCmdPreLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoEnaBlndFac() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoEnaBlndFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoFfCmd() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoFfCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoHwAg() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoHwAg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoHwAgErr() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoHwAgErr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoHwAgTarLimd() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoHwAgTarLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoHwVelTarLimd() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoHwVelTarLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoIntgtrCmdLimd() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoIntgtrCmdLimd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dPosnTrakgServoPtlStFbCmd() (Rte_Inst_PosnTrakgServo->Pim_dPosnTrakgServoPtlStFbCmd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AntiWdupCmdPrev(void)
 *   float32 *Rte_Pim_HwTqDerivtvPrev(void)
 *   float32 *Rte_Pim_HwTqPrev(void)
 *   float32 *Rte_Pim_IntgtrInpPrev(void)
 *   float32 *Rte_Pim_IntgtrOutpPrev(void)
 *   float32 *Rte_Pim_OutpAntiWdupCmdPrev(void)
 *   float32 *Rte_Pim_PosnServoCmdInpArbnFltMtgtnPrev(void)
 *   float32 *Rte_Pim_PosnServoCmdOutpArbnFltMtgtnPrev(void)
 *   float32 *Rte_Pim_PosnServoEnaTiPrev(void)
 *   float32 *Rte_Pim_PosnServoHwAgValRateLim(void)
 *   float32 *Rte_Pim_PosnServoHwVelValRateLim(void)
 *   float32 *Rte_Pim_dPosnTrakgServoCmdPreLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoEnaBlndFac(void)
 *   float32 *Rte_Pim_dPosnTrakgServoFfCmd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwAg(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwAgErr(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwAgTarLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwVelTarLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoIntgtrCmdLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoPtlStFbCmd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoIntgtrAntiWdupGain_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoIntgtrStCorrnGain_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoLpFilCutOffFrq_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoOutpAntiWdupGain_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoEnaBlndFacTblX_Ary1D(void)
 *   u2p14 *Rte_Prm_PosnTrakgServoEnaBlndFacTblY_Ary1D(void)
 *   u12p4 *Rte_Prm_PosnTrakgServoFfGain_Ary1D(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoFfVelGain_Ary1D(void)
 *   u12p4 *Rte_Prm_PosnTrakgServoGain1_Ary1D(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoGain2_Ary1D(void)
 *   s8p7 *Rte_Prm_PosnTrakgServoGain3_Ary1D(void)
 *   s4p11 *Rte_Prm_PosnTrakgServoGain4_Ary1D(void)
 *   u2p14 *Rte_Prm_PosnTrakgServoGainArbnFltMtgtn_Ary1D(void)
 *   u11p5 *Rte_Prm_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoHwAgTarRateLimTblY_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoHwVelTarRateLimTblY_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoIntglGain_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoIntglLim_Ary1D(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoOutpLim_Ary1D(void)
 *   u9p7 *Rte_Prm_PosnTrakgServoVehSpdTbl_Ary1D(void)
 *
 *********************************************************************************************************************/


# define PosnTrakgServo_START_SEC_CODE
# include "PosnTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PosnTrakgServoInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PosnTrakgServoInit1 PosnTrakgServoInit1
FUNC(void, PosnTrakgServo_CODE) PosnTrakgServoInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PosnTrakgServoPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PosnServoHwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoHwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoIntgtrOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnTrakgArbnFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PosnServoCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnServoIntgtrSt_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PosnTrakgServoPer1 PosnTrakgServoPer1
FUNC(void, PosnTrakgServo_CODE) PosnTrakgServoPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define PosnTrakgServo_STOP_SEC_CODE
# include "PosnTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1485379696
#    error "The magic number of the generated file <C:/component/SF020B_PosnTrakgServo_Impl/tools/contract/Rte_PosnTrakgServo.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1485379696
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_POSNTRAKGSERVO_H */
