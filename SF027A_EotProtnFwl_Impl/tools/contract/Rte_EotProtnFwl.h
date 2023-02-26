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
 *          File:  Rte_EotProtnFwl.h
 *     SW-C Type:  EotProtnFwl
 *  Generated at:  Wed Feb 15 11:24:21 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <EotProtnFwl> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_EOTPROTNFWL_H
# define _RTE_EOTPROTNFWL_H

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

# include "Rte_EotProtnFwl_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_EotProtnFwl
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotActvCmdActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotActvCmdActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotActvCmdMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotActvCmdOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotActvCmdOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotDampgActvLowrBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotDampgActvUpprBnd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotDampgFwX0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotDampgMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotDampgOverActvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlEotDampgOverInactvLim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEotProtnFwlPinionAgConfSts; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_EotProtnFwl, RTE_CONST, RTE_CONST) Rte_Inst_EotProtnFwl; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_EotProtnFwl, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EotActvCmd_Val (0.0F)
# define Rte_InitValue_EotActvCmdLimd_Val (0.0F)
# define Rte_InitValue_EotDampgCmd_Val (0.0F)
# define Rte_InitValue_EotDampgCmdLimd_Val (0.0F)
# define Rte_InitValue_EotProtnDi_Logl (FALSE)
# define Rte_InitValue_HwAg_Val (0.0F)
# define Rte_InitValue_MfgEnaSt_Val (0U)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_PinionAgConf_Val (0.0F)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_EotActvCmd_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_EotDampgCmd_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_EotProtnDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_HwAg_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_MfgEnaSt_Val(P2VAR(MfgEnaSt1, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_MotVelCrf_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_PinionAgConf_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EotProtnFwl_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_EOTPROTNFWL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotProtnFwl_EotActvCmdLimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EotProtnFwl_EotDampgCmdLimd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EotProtnFwl_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlInactvLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnHwAgMin_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnRackTrvlLimrRng_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnSoftEndStopAuthyThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlActvCmdLowrBnd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s4p11_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlActvCmdLowrBnd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s4p11, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlActvCmdUpprBnd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s4p11_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlActvCmdUpprBnd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s11p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlEotDampgActvBndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_s11p4_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlEotDampgActvBndX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(s7p8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlEotDampgActvBndY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_s7p8_4_5, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlEotDampgActvBndY_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnFwlVehSpd_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u12p4, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnHwDegDampgX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary2D_u12p4_4_2, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_EotProtnFwl_EotProtnHwDegDampgX_Ary2D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EotActvCmd_Val Rte_Read_EotProtnFwl_EotActvCmd_Val
# define Rte_Read_EotDampgCmd_Val Rte_Read_EotProtnFwl_EotDampgCmd_Val
# define Rte_Read_EotProtnDi_Logl Rte_Read_EotProtnFwl_EotProtnDi_Logl
# define Rte_Read_HwAg_Val Rte_Read_EotProtnFwl_HwAg_Val
# define Rte_Read_MfgEnaSt_Val Rte_Read_EotProtnFwl_MfgEnaSt_Val
# define Rte_Read_MotVelCrf_Val Rte_Read_EotProtnFwl_MotVelCrf_Val
# define Rte_Read_PinionAgConf_Val Rte_Read_EotProtnFwl_PinionAgConf_Val
# define Rte_Read_VehSpd_Val Rte_Read_EotProtnFwl_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_EotActvCmdLimd_Val Rte_Write_EotProtnFwl_EotActvCmdLimd_Val
# define Rte_Write_EotDampgCmdLimd_Val Rte_Write_EotProtnFwl_EotDampgCmdLimd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_EotProtnFwl_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_EotProtnFwlInactvLim_Val Rte_Prm_EotProtnFwl_EotProtnFwlInactvLim_Val

# define Rte_Prm_EotProtnHwAgMin_Val Rte_Prm_EotProtnFwl_EotProtnHwAgMin_Val

# define Rte_Prm_EotProtnRackTrvlLimrRng_Val Rte_Prm_EotProtnFwl_EotProtnRackTrvlLimrRng_Val

# define Rte_Prm_EotProtnSoftEndStopAuthyThd_Val Rte_Prm_EotProtnFwl_EotProtnSoftEndStopAuthyThd_Val

# define Rte_Prm_EotProtnFwlActvCmdLowrBnd_Ary1D Rte_Prm_EotProtnFwl_EotProtnFwlActvCmdLowrBnd_Ary1D

# define Rte_Prm_EotProtnFwlActvCmdUpprBnd_Ary1D Rte_Prm_EotProtnFwl_EotProtnFwlActvCmdUpprBnd_Ary1D

# define Rte_Prm_EotProtnFwlEotDampgActvBndX_Ary1D Rte_Prm_EotProtnFwl_EotProtnFwlEotDampgActvBndX_Ary1D

# define Rte_Prm_EotProtnFwlEotDampgActvBndY_Ary2D Rte_Prm_EotProtnFwl_EotProtnFwlEotDampgActvBndY_Ary2D

# define Rte_Prm_EotProtnFwlVehSpd_Ary1D Rte_Prm_EotProtnFwl_EotProtnFwlVehSpd_Ary1D

# define Rte_Prm_EotProtnHwDegDampgX_Ary2D Rte_Prm_EotProtnFwl_EotProtnHwDegDampgX_Ary2D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dEotProtnFwlEotActvCmdActvLowrBnd() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotActvCmdActvLowrBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotActvCmdActvUpprBnd() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotActvCmdActvUpprBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotDampgActvLowrBnd() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotDampgActvLowrBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotDampgActvUpprBnd() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotDampgActvUpprBnd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotDampgFwX0() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotDampgFwX0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotActvCmdMod() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotActvCmdMod) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotDampgMod() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotDampgMod) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotActvCmdOverActvLim() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotActvCmdOverActvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotActvCmdOverInactvLim() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotActvCmdOverInactvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotDampgOverActvLim() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotDampgOverActvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlEotDampgOverInactvLim() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlEotDampgOverInactvLim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dEotProtnFwlPinionAgConfSts() (Rte_Inst_EotProtnFwl->Pim_dEotProtnFwlPinionAgConfSts) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dEotProtnFwlEotActvCmdActvLowrBnd(void)
 *   float32 *Rte_Pim_dEotProtnFwlEotActvCmdActvUpprBnd(void)
 *   float32 *Rte_Pim_dEotProtnFwlEotDampgActvLowrBnd(void)
 *   float32 *Rte_Pim_dEotProtnFwlEotDampgActvUpprBnd(void)
 *   float32 *Rte_Pim_dEotProtnFwlEotDampgFwX0(void)
 *   uint8 *Rte_Pim_dEotProtnFwlEotActvCmdMod(void)
 *   uint8 *Rte_Pim_dEotProtnFwlEotDampgMod(void)
 *   boolean *Rte_Pim_dEotProtnFwlEotActvCmdOverActvLim(void)
 *   boolean *Rte_Pim_dEotProtnFwlEotActvCmdOverInactvLim(void)
 *   boolean *Rte_Pim_dEotProtnFwlEotDampgOverActvLim(void)
 *   boolean *Rte_Pim_dEotProtnFwlEotDampgOverInactvLim(void)
 *   boolean *Rte_Pim_dEotProtnFwlPinionAgConfSts(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_EotProtnFwlInactvLim_Val(void)
 *   float32 Rte_Prm_EotProtnHwAgMin_Val(void)
 *   float32 Rte_Prm_EotProtnRackTrvlLimrRng_Val(void)
 *   float32 Rte_Prm_EotProtnSoftEndStopAuthyThd_Val(void)
 *   s4p11 *Rte_Prm_EotProtnFwlActvCmdLowrBnd_Ary1D(void)
 *   s4p11 *Rte_Prm_EotProtnFwlActvCmdUpprBnd_Ary1D(void)
 *   s11p4 *Rte_Prm_EotProtnFwlEotDampgActvBndX_Ary1D(void)
 *   s7p8 *Rte_Prm_EotProtnFwlEotDampgActvBndY_Ary2D(void)
 *   u9p7 *Rte_Prm_EotProtnFwlVehSpd_Ary1D(void)
 *   u12p4 *Rte_Prm_EotProtnHwDegDampgX_Ary2D(void)
 *
 *********************************************************************************************************************/


# define EotProtnFwl_START_SEC_CODE
# include "EotProtnFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotProtnFwlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EotProtnFwlInit1 EotProtnFwlInit1
FUNC(void, EotProtnFwl_CODE) EotProtnFwlInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EotProtnFwlPer1
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
 *   Std_ReturnType Rte_Read_EotActvCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotDampgCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotProtnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MfgEnaSt_Val(MfgEnaSt1 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EotActvCmdLimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotDampgCmdLimd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EotProtnFwlPer1 EotProtnFwlPer1
FUNC(void, EotProtnFwl_CODE) EotProtnFwlPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define EotProtnFwl_STOP_SEC_CODE
# include "EotProtnFwl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1487180168
#    error "The magic number of the generated file <C:/component/SF027A_EotProtnFwl_Impl/tools/contract/Rte_EotProtnFwl.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1487180168
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_EOTPROTNFWL_H */
