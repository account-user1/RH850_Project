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
 *          File:  Rte_HysCmp.h
 *     SW-C Type:  HysCmp
 *  Generated at:  Wed Jan  4 11:30:41 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HysCmp> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HYSCMP_H
# define _RTE_HYSCMP_H

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

# include "Rte_HysCmp_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HysCmp
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AssiCmdLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FinalOutpLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTqLpFil; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevAssiCmdFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevHwTqFildVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRiseX; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevRiseY; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpAssiCmdFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpEffCmpTq; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpFric; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpHwTqFild; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpNegAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpPosAvl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpRawVal; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dHysCmpRiseYFac; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HysCmp, RTE_CONST, RTE_CONST) Rte_Inst_HysCmp; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HysCmp, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiCmdBas_Val (0.0F)
# define Rte_InitValue_AssiMechT_Val (0.0F)
# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwTqOvrl_Val (0.0F)
# define Rte_InitValue_HysCmpCmd_Val (0.0F)
# define Rte_InitValue_HysCmpCmdDi_Logl (FALSE)
# define Rte_InitValue_SysFricOffs_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_WhlImbRejctnAmp_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_AssiCmdBas_Val(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_AssiMechT_Val(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_HwTqOvrl_Val(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_HysCmpCmdDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_SysFricOffs_Val(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HysCmp_WhlImbRejctnAmp_Val(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HysCmp_HysCmpCmd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HysCmp_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_HYSCMP_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HysCmp_HysCmpAssiCmdLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HysCmp_HysCmpFinalOutpLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HysCmp_HysCmpHwTqLpFilFrq_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HysCmp_HysCmpOutpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HysCmp_HysCmpRevGain_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HysCmp_SysGlbPrmSysTqRat_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(u9p7, RTE_CODE) Rte_Prm_HysCmp_HysCmpAssiInpLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpEffLossY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpEffOffsY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s14p1, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricTScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s14p1_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricTScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricTScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricTScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnBlndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnBlndY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnOffY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnOnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpHwTqScaX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u4p12_12_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpHwTqScaY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpHysSatnY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpScaX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpScaY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u8p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8p8_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpNegHysCmpY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpRiseX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpRiseX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u2p14, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpRiseY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u2p14_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_HysCmpRiseY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_HysCmp_SysGlbPrmVehSpdBilnrSeln_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiCmdBas_Val Rte_Read_HysCmp_AssiCmdBas_Val
# define Rte_Read_AssiMechT_Val Rte_Read_HysCmp_AssiMechT_Val
# define Rte_Read_HwTq_Val Rte_Read_HysCmp_HwTq_Val
# define Rte_Read_HwTqOvrl_Val Rte_Read_HysCmp_HwTqOvrl_Val
# define Rte_Read_HysCmpCmdDi_Logl Rte_Read_HysCmp_HysCmpCmdDi_Logl
# define Rte_Read_SysFricOffs_Val Rte_Read_HysCmp_SysFricOffs_Val
# define Rte_Read_VehSpd_Val Rte_Read_HysCmp_VehSpd_Val
# define Rte_Read_WhlImbRejctnAmp_Val Rte_Read_HysCmp_WhlImbRejctnAmp_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HysCmpCmd_Val Rte_Write_HysCmp_HysCmpCmd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_HysCmp_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HysCmpAssiCmdLpFilFrq_Val Rte_Prm_HysCmp_HysCmpAssiCmdLpFilFrq_Val

# define Rte_Prm_HysCmpFinalOutpLpFilFrq_Val Rte_Prm_HysCmp_HysCmpFinalOutpLpFilFrq_Val

# define Rte_Prm_HysCmpHwTqLpFilFrq_Val Rte_Prm_HysCmp_HysCmpHwTqLpFilFrq_Val

# define Rte_Prm_HysCmpOutpLim_Val Rte_Prm_HysCmp_HysCmpOutpLim_Val

# define Rte_Prm_HysCmpRevGain_Val Rte_Prm_HysCmp_HysCmpRevGain_Val

# define Rte_Prm_SysGlbPrmSysTqRat_Val Rte_Prm_HysCmp_SysGlbPrmSysTqRat_Val

# define Rte_Prm_HysCmpAssiInpLim_Val Rte_Prm_HysCmp_HysCmpAssiInpLim_Val

# define Rte_Prm_HysCmpEffLossY_Ary1D Rte_Prm_HysCmp_HysCmpEffLossY_Ary1D

# define Rte_Prm_HysCmpEffOffsY_Ary1D Rte_Prm_HysCmp_HysCmpEffOffsY_Ary1D

# define Rte_Prm_HysCmpFricTScaX_Ary1D Rte_Prm_HysCmp_HysCmpFricTScaX_Ary1D

# define Rte_Prm_HysCmpFricTScaY_Ary1D Rte_Prm_HysCmp_HysCmpFricTScaY_Ary1D

# define Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnBlndX_Ary1D

# define Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnBlndY_Ary1D

# define Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnOffY_Ary1D

# define Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D Rte_Prm_HysCmp_HysCmpFricWhlImbRejctnOnY_Ary1D

# define Rte_Prm_HysCmpHwTqScaX_Ary2D Rte_Prm_HysCmp_HysCmpHwTqScaX_Ary2D

# define Rte_Prm_HysCmpHwTqScaY_Ary2D Rte_Prm_HysCmp_HysCmpHwTqScaY_Ary2D

# define Rte_Prm_HysCmpHysSatnY_Ary1D Rte_Prm_HysCmp_HysCmpHysSatnY_Ary1D

# define Rte_Prm_HysCmpNegHysCmpScaX_Ary1D Rte_Prm_HysCmp_HysCmpNegHysCmpScaX_Ary1D

# define Rte_Prm_HysCmpNegHysCmpScaY_Ary1D Rte_Prm_HysCmp_HysCmpNegHysCmpScaY_Ary1D

# define Rte_Prm_HysCmpNegHysCmpX_Ary1D Rte_Prm_HysCmp_HysCmpNegHysCmpX_Ary1D

# define Rte_Prm_HysCmpNegHysCmpY_Ary1D Rte_Prm_HysCmp_HysCmpNegHysCmpY_Ary1D

# define Rte_Prm_HysCmpRiseX_Ary1D Rte_Prm_HysCmp_HysCmpRiseX_Ary1D

# define Rte_Prm_HysCmpRiseY_Ary1D Rte_Prm_HysCmp_HysCmpRiseY_Ary1D

# define Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D Rte_Prm_HysCmp_SysGlbPrmVehSpdBilnrSeln_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevAssiCmdFildVal() (Rte_Inst_HysCmp->Pim_PrevAssiCmdFildVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevHwTqFildVal() (Rte_Inst_HysCmp->Pim_PrevHwTqFildVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRiseX() (Rte_Inst_HysCmp->Pim_PrevRiseX) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevRiseY() (Rte_Inst_HysCmp->Pim_PrevRiseY) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpAssiCmdFild() (Rte_Inst_HysCmp->Pim_dHysCmpAssiCmdFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpAvl() (Rte_Inst_HysCmp->Pim_dHysCmpAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpEffCmpTq() (Rte_Inst_HysCmp->Pim_dHysCmpEffCmpTq) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpFric() (Rte_Inst_HysCmp->Pim_dHysCmpFric) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpHwTqFild() (Rte_Inst_HysCmp->Pim_dHysCmpHwTqFild) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpNegAvl() (Rte_Inst_HysCmp->Pim_dHysCmpNegAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpPosAvl() (Rte_Inst_HysCmp->Pim_dHysCmpPosAvl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpRawVal() (Rte_Inst_HysCmp->Pim_dHysCmpRawVal) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dHysCmpRiseYFac() (Rte_Inst_HysCmp->Pim_dHysCmpRiseYFac) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_AssiCmdLpFil() (Rte_Inst_HysCmp->Pim_AssiCmdLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FinalOutpLpFil() (Rte_Inst_HysCmp->Pim_FinalOutpLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTqLpFil() (Rte_Inst_HysCmp->Pim_HwTqLpFil) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevAssiCmdFildVal(void)
 *   float32 *Rte_Pim_PrevHwTqFildVal(void)
 *   float32 *Rte_Pim_PrevRiseX(void)
 *   float32 *Rte_Pim_PrevRiseY(void)
 *   float32 *Rte_Pim_dHysCmpAssiCmdFild(void)
 *   float32 *Rte_Pim_dHysCmpAvl(void)
 *   float32 *Rte_Pim_dHysCmpEffCmpTq(void)
 *   float32 *Rte_Pim_dHysCmpFric(void)
 *   float32 *Rte_Pim_dHysCmpHwTqFild(void)
 *   float32 *Rte_Pim_dHysCmpNegAvl(void)
 *   float32 *Rte_Pim_dHysCmpPosAvl(void)
 *   float32 *Rte_Pim_dHysCmpRawVal(void)
 *   float32 *Rte_Pim_dHysCmpRiseYFac(void)
 *   FilLpRec1 *Rte_Pim_AssiCmdLpFil(void)
 *   FilLpRec1 *Rte_Pim_FinalOutpLpFil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HysCmpAssiCmdLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpFinalOutpLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_HysCmpOutpLim_Val(void)
 *   float32 Rte_Prm_HysCmpRevGain_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   u9p7 Rte_Prm_HysCmpAssiInpLim_Val(void)
 *   u4p12 *Rte_Prm_HysCmpEffLossY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpEffOffsY_Ary1D(void)
 *   s14p1 *Rte_Prm_HysCmpFricTScaX_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpFricTScaY_Ary1D(void)
 *   u8p8 *Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(void)
 *   u4p12 *Rte_Prm_HysCmpHwTqScaX_Ary2D(void)
 *   u4p12 *Rte_Prm_HysCmpHwTqScaY_Ary2D(void)
 *   u9p7 *Rte_Prm_HysCmpHysSatnY_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(void)
 *   u8p8 *Rte_Prm_HysCmpNegHysCmpX_Ary1D(void)
 *   u9p7 *Rte_Prm_HysCmpNegHysCmpY_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpRiseX_Ary1D(void)
 *   u2p14 *Rte_Prm_HysCmpRiseY_Ary1D(void)
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


# define HysCmp_START_SEC_CODE
# include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HysCmpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HysCmpInit1 HysCmpInit1
FUNC(void, HysCmp_CODE) HysCmpInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HysCmpPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HysCmpCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysFricOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HysCmpCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HysCmpPer1 HysCmpPer1
FUNC(void, HysCmp_CODE) HysCmpPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HysCmp_STOP_SEC_CODE
# include "HysCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1483553736
#    error "The magic number of the generated file <C:/component/SF012A_HysCmp_Impl/tools/contract/Rte_HysCmp.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1483553736
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HYSCMP_H */
