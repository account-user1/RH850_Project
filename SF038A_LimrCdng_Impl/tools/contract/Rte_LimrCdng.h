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
 *          File:  Rte_LimrCdng.h
 *     SW-C Type:  LimrCdng
 *  Generated at:  Mon Aug  3 08:20:29 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <LimrCdng> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_LIMRCDNG_H
# define _RTE_LIMRCDNG_H

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

# include "Rte_LimrCdng_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_LimrCdng
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevEotAssiScaCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevEotMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevStallMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevSysMotTqCmdScaCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevThermMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevVehSpdMotTqLimCdnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_LimrCdng, RTE_CONST, RTE_CONST) Rte_Inst_LimrCdng; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_LimrCdng, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EotAssiSca_Val (1.0F)
# define Rte_InitValue_EotAssiScaCdnd_Val (1.0F)
# define Rte_InitValue_EotMotTqLim_Val (8.8F)
# define Rte_InitValue_EotMotTqLimCdnd_Val (8.8F)
# define Rte_InitValue_StallMotTqLim_Val (8.8F)
# define Rte_InitValue_StallMotTqLimCdnd_Val (8.8F)
# define Rte_InitValue_SysMotTqCmdSca_Val (1.0F)
# define Rte_InitValue_SysMotTqCmdScaCdnd_Val (1.0F)
# define Rte_InitValue_ThermMotTqLim_Val (8.8F)
# define Rte_InitValue_ThermMotTqLimCdnd_Val (8.8F)
# define Rte_InitValue_VehSpd_Val (0.0F)
# define Rte_InitValue_VehSpdMotTqLim_Val (8.8F)
# define Rte_InitValue_VehSpdMotTqLimCdnd_Val (8.8F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LimrCdng_EotAssiSca_Val(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LimrCdng_EotMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LimrCdng_StallMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LimrCdng_SysMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LimrCdng_ThermMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LimrCdng_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_LimrCdng_VehSpdMotTqLim_Val(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LimrCdng_EotAssiScaCdnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LimrCdng_EotMotTqLimCdnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LimrCdng_StallMotTqLimCdnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LimrCdng_SysMotTqCmdScaCdnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LimrCdng_ThermMotTqLimCdnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_LimrCdng_VehSpdMotTqLimCdnd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_LimrCdng_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_LIMRCDNG_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngGainDecSlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngTqDecSlew_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngGainIncSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngGainIncSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngGainIncSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngGainIncSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngTqIncSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngTqIncSlewX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u13p3, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngTqIncSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u13p3_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_LimrCdng_LimrCdngTqIncSlewY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EotAssiSca_Val Rte_Read_LimrCdng_EotAssiSca_Val
# define Rte_Read_EotMotTqLim_Val Rte_Read_LimrCdng_EotMotTqLim_Val
# define Rte_Read_StallMotTqLim_Val Rte_Read_LimrCdng_StallMotTqLim_Val
# define Rte_Read_SysMotTqCmdSca_Val Rte_Read_LimrCdng_SysMotTqCmdSca_Val
# define Rte_Read_ThermMotTqLim_Val Rte_Read_LimrCdng_ThermMotTqLim_Val
# define Rte_Read_VehSpd_Val Rte_Read_LimrCdng_VehSpd_Val
# define Rte_Read_VehSpdMotTqLim_Val Rte_Read_LimrCdng_VehSpdMotTqLim_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_EotAssiScaCdnd_Val Rte_Write_LimrCdng_EotAssiScaCdnd_Val
# define Rte_Write_EotMotTqLimCdnd_Val Rte_Write_LimrCdng_EotMotTqLimCdnd_Val
# define Rte_Write_StallMotTqLimCdnd_Val Rte_Write_LimrCdng_StallMotTqLimCdnd_Val
# define Rte_Write_SysMotTqCmdScaCdnd_Val Rte_Write_LimrCdng_SysMotTqCmdScaCdnd_Val
# define Rte_Write_ThermMotTqLimCdnd_Val Rte_Write_LimrCdng_ThermMotTqLimCdnd_Val
# define Rte_Write_VehSpdMotTqLimCdnd_Val Rte_Write_LimrCdng_VehSpdMotTqLimCdnd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_LimrCdng_FltInj_f32_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_LimrCdngGainDecSlew_Val Rte_Prm_LimrCdng_LimrCdngGainDecSlew_Val

# define Rte_Prm_LimrCdngTqDecSlew_Val Rte_Prm_LimrCdng_LimrCdngTqDecSlew_Val

# define Rte_Prm_LimrCdngGainIncSlewX_Ary1D Rte_Prm_LimrCdng_LimrCdngGainIncSlewX_Ary1D

# define Rte_Prm_LimrCdngGainIncSlewY_Ary1D Rte_Prm_LimrCdng_LimrCdngGainIncSlewY_Ary1D

# define Rte_Prm_LimrCdngTqIncSlewX_Ary1D Rte_Prm_LimrCdng_LimrCdngTqIncSlewX_Ary1D

# define Rte_Prm_LimrCdngTqIncSlewY_Ary1D Rte_Prm_LimrCdng_LimrCdngTqIncSlewY_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_PrevEotAssiScaCdnd() (Rte_Inst_LimrCdng->Pim_PrevEotAssiScaCdnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevEotMotTqLimCdnd() (Rte_Inst_LimrCdng->Pim_PrevEotMotTqLimCdnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevStallMotTqLimCdnd() (Rte_Inst_LimrCdng->Pim_PrevStallMotTqLimCdnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevSysMotTqCmdScaCdnd() (Rte_Inst_LimrCdng->Pim_PrevSysMotTqCmdScaCdnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevThermMotTqLimCdnd() (Rte_Inst_LimrCdng->Pim_PrevThermMotTqLimCdnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevVehSpdMotTqLimCdnd() (Rte_Inst_LimrCdng->Pim_PrevVehSpdMotTqLimCdnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevEotAssiScaCdnd(void)
 *   float32 *Rte_Pim_PrevEotMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevStallMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevSysMotTqCmdScaCdnd(void)
 *   float32 *Rte_Pim_PrevThermMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevVehSpdMotTqLimCdnd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_LimrCdngGainDecSlew_Val(void)
 *   float32 Rte_Prm_LimrCdngTqDecSlew_Val(void)
 *   u9p7 *Rte_Prm_LimrCdngGainIncSlewX_Ary1D(void)
 *   u9p7 *Rte_Prm_LimrCdngGainIncSlewY_Ary1D(void)
 *   u9p7 *Rte_Prm_LimrCdngTqIncSlewX_Ary1D(void)
 *   u13p3 *Rte_Prm_LimrCdngTqIncSlewY_Ary1D(void)
 *
 *********************************************************************************************************************/


# define LimrCdng_START_SEC_CODE
# include "LimrCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: LimrCdngPer1
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
 *   Std_ReturnType Rte_Read_EotAssiSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMotTqLim_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EotAssiScaCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_StallMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysMotTqCmdScaCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdMotTqLimCdnd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_LimrCdngPer1 LimrCdngPer1
FUNC(void, LimrCdng_CODE) LimrCdngPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define LimrCdng_STOP_SEC_CODE
# include "LimrCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1438600296
#    error "The magic number of the generated file <C:/Component/SF038A_LimrCdng_Impl/tools/contract/Rte_LimrCdng.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1438600296
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_LIMRCDNG_H */
