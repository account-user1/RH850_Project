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
 *          File:  Rte_AAACalRegn02Rt01GroupA_Dummy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <AAACalRegn02Rt01GroupA_Dummy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AAACALREGN02RT01GROUPA_DUMMY_H
# define _RTE_AAACALREGN02RT01GROUPA_DUMMY_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# ifndef RTE_CORE
#  define RTE_MULTI_INST_API
# endif

/* include files */

# include "Rte_AAACalRegn02Rt01GroupA_Dummy_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE
typedef P2CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_HysCmpOutpLim_Val(self) ((self)->HysCmpOutpLim.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpRevGain_Val(self) ((self)->HysCmpRevGain.Prm_Val()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqGainY_Ary2D(self) ((self)->AssiHiFrqGainY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(self) ((self)->AssiHiFrqHpFilFrqY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(self) ((self)->AssiHiFrqTqWhlImbRejctnTqX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqTqX_Ary2D(self) ((self)->AssiHiFrqTqX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(self) ((self)->AssiHiFrqWhlImbRejctnBlndX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(self) ((self)->AssiHiFrqWhlImbRejctnBlndY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(self) ((self)->AssiHiFrqWhlImbRejctnGainY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMaxX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMaxY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMinX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(self) ((self)->AssiMotTqWhlImbRejctnMinY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(self) ((self)->AssiWhlImbRejctnBlndScaX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(self) ((self)->AssiWhlImbRejctnBlndScaY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHwTqX_Ary1D(self) ((self)->DampgHwTqX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHwTqY_Ary1D(self) ((self)->DampgHwTqY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff1ScaY_Ary1D(self) ((self)->DampgHydCoeff1ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff2ScaY_Ary1D(self) ((self)->DampgHydCoeff2ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff3ScaY_Ary1D(self) ((self)->DampgHydCoeff3ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgHydCoeff4ScaY_Ary1D(self) ((self)->DampgHydCoeff4ScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgMotVelX_Ary2D(self) ((self)->DampgMotVelX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DampgMotVelY_Ary2D(self) ((self)->DampgMotVelY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpEffLossY_Ary1D(self) ((self)->HysCmpEffLossY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpEffOffsY_Ary1D(self) ((self)->HysCmpEffOffsY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnBlndX_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnBlndX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnBlndY_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnBlndY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnOffY_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnOffY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpFricWhlImbRejctnOnY_Ary1D(self) ((self)->HysCmpFricWhlImbRejctnOnY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpHwTqScaX_Ary2D(self) ((self)->HysCmpHwTqScaX.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpHwTqScaY_Ary2D(self) ((self)->HysCmpHwTqScaY.Prm_Ary2D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpHysSatnY_Ary1D(self) ((self)->HysCmpHysSatnY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpNegHysCmpScaX_Ary1D(self) ((self)->HysCmpNegHysCmpScaX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpNegHysCmpScaY_Ary1D(self) ((self)->HysCmpNegHysCmpScaY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpNegHysCmpX_Ary1D(self) ((self)->HysCmpNegHysCmpX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpNegHysCmpY_Ary1D(self) ((self)->HysCmpNegHysCmpY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpRiseX_Ary1D(self) ((self)->HysCmpRiseX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_HysCmpRiseY_Ary1D(self) ((self)->HysCmpRiseY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(self) ((self)->InertiaCmpVelAssiBasdDampgStatY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D(self) ((self)->InertiaCmpVelDampgFilFrq.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(self) ((self)->InertiaCmpVelDampgFilFrqWhlImbRejctnOn.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(self) ((self)->InertiaCmpVelDampgSpdBlndY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(self) ((self)->InertiaCmpVelDampgWhlImbRejctnBlndX.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(self) ((self)->InertiaCmpVelDampgWhlImbRejctnBlndY.Prm_Ary1D()) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# endif /* !defined(RTE_CORE) */


# define AAACalRegn02Rt01GroupA_Dummy_START_SEC_CODE
# include "AAACalRegn02Rt01GroupA_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CalRegn02Rt01GroupADummyInit1 CalRegn02Rt01GroupADummyInit1
# endif

FUNC(void, AAACalRegn02Rt01GroupA_Dummy_CODE) CalRegn02Rt01GroupADummyInit1(P2CONST(struct Rte_CDS_AAACalRegn02Rt01GroupA_Dummy, AUTOMATIC, RTE_CONST) self); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define AAACalRegn02Rt01GroupA_Dummy_STOP_SEC_CODE
# include "AAACalRegn02Rt01GroupA_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_AAACALREGN02RT01GROUPA_DUMMY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
