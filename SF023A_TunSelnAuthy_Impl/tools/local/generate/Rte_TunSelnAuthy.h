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
 *          File:  Rte_TunSelnAuthy.h
 *        Config:  C:/_Synergy_Projects/Working/ses_dev_ea4/SF023A_TunSelnAuthy_Impl/tools/Component.dpa
 *     SW-C Type:  TunSelnAuthy
 *  Generated at:  Thu Jun 15 09:00:51 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <TunSelnAuthy> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TUNSELNAUTHY_H
# define _RTE_TUNSELNAUTHY_H

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

# include "Rte_TunSelnAuthy_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_TunSelnAuthy
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_TunSelnAuthy, RTE_CONST, RTE_CONST) Rte_Inst_TunSelnAuthy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_TunSelnAuthy, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq_Val (0.0F)
# define Rte_InitValue_HwVel_Val (0.0F)
# define Rte_InitValue_TunSelnRtDi_Logl (FALSE)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TunSelnAuthy_HwTq_Val(P2VAR(float32, AUTOMATIC, RTE_TUNSELNAUTHY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TunSelnAuthy_HwVel_Val(P2VAR(float32, AUTOMATIC, RTE_TUNSELNAUTHY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TunSelnAuthy_TunSelnRtDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_TUNSELNAUTHY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_TunSelnAuthy_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_TUNSELNAUTHY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_TunSelnAuthy_TunSelnAuthyTunSelnRtDiCmd_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u4p12, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TunSelnAuthy_TunSelnAuthyHwTqY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u4p12_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TunSelnAuthy_TunSelnAuthyHwTqY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u6p10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TunSelnAuthy_TunSelnAuthyHwVelY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u6p10_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TunSelnAuthy_TunSelnAuthyHwVelY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TunSelnAuthy_TunSelnAuthyVehSpdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_TunSelnAuthy_TunSelnAuthyVehSpdX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq_Val Rte_Read_TunSelnAuthy_HwTq_Val
# define Rte_Read_HwVel_Val Rte_Read_TunSelnAuthy_HwVel_Val
# define Rte_Read_TunSelnRtDi_Logl Rte_Read_TunSelnAuthy_TunSelnRtDi_Logl
# define Rte_Read_VehSpd_Val Rte_Read_TunSelnAuthy_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl Rte_Prm_TunSelnAuthy_TunSelnAuthyTunSelnRtDiCmd_Logl

# define Rte_Prm_TunSelnAuthyHwTqY_Ary1D Rte_Prm_TunSelnAuthy_TunSelnAuthyHwTqY_Ary1D

# define Rte_Prm_TunSelnAuthyHwVelY_Ary1D Rte_Prm_TunSelnAuthy_TunSelnAuthyHwVelY_Ary1D

# define Rte_Prm_TunSelnAuthyVehSpdX_Ary1D Rte_Prm_TunSelnAuthy_TunSelnAuthyVehSpdX_Ary1D



/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   boolean Rte_Prm_TunSelnAuthyTunSelnRtDiCmd_Logl(void)
 *   u4p12 *Rte_Prm_TunSelnAuthyHwTqY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_6
 *   u6p10 *Rte_Prm_TunSelnAuthyHwVelY_Ary1D(void)
 *     Returnvalue: u6p10* is of type Ary1D_u6p10_6
 *   u9p7 *Rte_Prm_TunSelnAuthyVehSpdX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_6
 *
 *********************************************************************************************************************/


# define TunSelnAuthy_START_SEC_CODE
# include "TunSelnAuthy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtCalChgReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <RtCalChgReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_TunSelnRtDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RtCalChgReq_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RtCalChgReq_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RtCalChgReq_Oper RtCalChgReq_Oper
FUNC(Std_ReturnType, TunSelnAuthy_CODE) RtCalChgReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TunSelnAuthyInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_TunSelnAuthyInit1 TunSelnAuthyInit1
FUNC(void, TunSelnAuthy_CODE) TunSelnAuthyInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: XcpCalChgReq_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <XcpCalChgReq>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType XcpCalChgReq_Oper(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_XcpCalChgReq_Oper XcpCalChgReq_Oper
FUNC(Std_ReturnType, TunSelnAuthy_CODE) XcpCalChgReq_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define TunSelnAuthy_STOP_SEC_CODE
# include "TunSelnAuthy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_RtCalChgReq_PortIf1_E_NOT_OK (1U)

# define RTE_E_XcpCalChgReq_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TUNSELNAUTHY_H */

#include "Rte_Stubs.h"
