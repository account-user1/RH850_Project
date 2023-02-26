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
 *          File:  Rte_CDD_MotAgSwCal.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotAgSwCal>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAGSWCAL_H
# define _RTE_CDD_MOTAGSWCAL_H

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

/* include files */

# include "Rte_CDD_MotAgSwCal_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CMNMFGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, RTE_CMNMFGSRV_APPL_CODE) SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) SnsrData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  else
FUNC(void, RTE_CMNMFGSRV_APPL_CODE) SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(Ary1D_u16_12, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) SnsrData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  endif
#  define RTE_STOP_SEC_CMNMFGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SwCalStsCallBack_Oper(arg1, arg2, arg3) (SwCalStsCallBack_Oper(arg1, arg2, arg3), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_MotAgSwCalVehSpdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->MotAgSwCalVehSpdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalMotModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u16p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_PosnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u16p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SamplePosnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleStopTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalCycTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_CoolDwnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_HldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u3p13, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(u0p16, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_PosnStepSize; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_BoostTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_ElecRevCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp1Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp2Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_Ramp3Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalStepDir; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SampleRdyFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_SwCalEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg2SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg5SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u3p13_50, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_MotAgSwCal_MotAg6SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_BoostModlnIdx() \
  (&Rte_CDD_MotAgSwCal_BoostModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BoostSlew() \
  (&Rte_CDD_MotAgSwCal_BoostSlew) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CoolDwnModlnIdx() \
  (&Rte_CDD_MotAgSwCal_CoolDwnModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CoolDwnSlew() \
  (&Rte_CDD_MotAgSwCal_CoolDwnSlew) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HldModlnIdx() \
  (&Rte_CDD_MotAgSwCal_HldModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HldSlew() \
  (&Rte_CDD_MotAgSwCal_HldSlew) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SwCalMotModlnIdx() \
  (&Rte_CDD_MotAgSwCal_SwCalMotModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BoostTiOut() \
  (&Rte_CDD_MotAgSwCal_BoostTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CoolDwnTiOut() \
  (&Rte_CDD_MotAgSwCal_CoolDwnTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HldTiOut() \
  (&Rte_CDD_MotAgSwCal_HldTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnIdx() \
  (&Rte_CDD_MotAgSwCal_PosnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SamplePosnIdx() \
  (&Rte_CDD_MotAgSwCal_SamplePosnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SampleStopTi() \
  (&Rte_CDD_MotAgSwCal_SampleStopTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SampleStrtTi() \
  (&Rte_CDD_MotAgSwCal_SampleStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SwCalCycTi() \
  (&Rte_CDD_MotAgSwCal_SwCalCycTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_CoolDwnTi() \
  (&Rte_CDD_MotAgSwCal_CoolDwnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_HldTi() \
  (&Rte_CDD_MotAgSwCal_HldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2CosMeasAvrg() \
  (&Rte_CDD_MotAgSwCal_MotAg2CosMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2CosMeasRawCumv() \
  (&Rte_CDD_MotAgSwCal_MotAg2CosMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2CosMeasRawPrev() \
  (&Rte_CDD_MotAgSwCal_MotAg2CosMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2SinMeasAvrg() \
  (&Rte_CDD_MotAgSwCal_MotAg2SinMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2SinMeasRawCumv() \
  (&Rte_CDD_MotAgSwCal_MotAg2SinMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2SinMeasRawPrev() \
  (&Rte_CDD_MotAgSwCal_MotAg2SinMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5CosMeasAvrg() \
  (&Rte_CDD_MotAgSwCal_MotAg5CosMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5CosMeasRawCumv() \
  (&Rte_CDD_MotAgSwCal_MotAg5CosMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5CosMeasRawPrev() \
  (&Rte_CDD_MotAgSwCal_MotAg5CosMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5SinMeasAvrg() \
  (&Rte_CDD_MotAgSwCal_MotAg5SinMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5SinMeasRawCumv() \
  (&Rte_CDD_MotAgSwCal_MotAg5SinMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5SinMeasRawPrev() \
  (&Rte_CDD_MotAgSwCal_MotAg5SinMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6CosMeasAvrg() \
  (&Rte_CDD_MotAgSwCal_MotAg6CosMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6CosMeasRawCumv() \
  (&Rte_CDD_MotAgSwCal_MotAg6CosMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6CosMeasRawPrev() \
  (&Rte_CDD_MotAgSwCal_MotAg6CosMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6SinMeasAvrg() \
  (&Rte_CDD_MotAgSwCal_MotAg6SinMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6SinMeasRawCumv() \
  (&Rte_CDD_MotAgSwCal_MotAg6SinMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6SinMeasRawPrev() \
  (&Rte_CDD_MotAgSwCal_MotAg6SinMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PosnStepSize() \
  (&Rte_CDD_MotAgSwCal_PosnStepSize) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_BoostTi() \
  (&Rte_CDD_MotAgSwCal_BoostTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_ElecRevCnt() \
  (&Rte_CDD_MotAgSwCal_ElecRevCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2CosAdcFaildCntr() \
  (&Rte_CDD_MotAgSwCal_MotAg2CosAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg2SinAdcFaildCntr() \
  (&Rte_CDD_MotAgSwCal_MotAg2SinAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5CosAdcFaildCntr() \
  (&Rte_CDD_MotAgSwCal_MotAg5CosAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg5SinAdcFaildCntr() \
  (&Rte_CDD_MotAgSwCal_MotAg5SinAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6CosAdcFaildCntr() \
  (&Rte_CDD_MotAgSwCal_MotAg6CosAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MotAg6SinAdcFaildCntr() \
  (&Rte_CDD_MotAgSwCal_MotAg6SinAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ramp1Ti() \
  (&Rte_CDD_MotAgSwCal_Ramp1Ti) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ramp2Ti() \
  (&Rte_CDD_MotAgSwCal_Ramp2Ti) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_Ramp3Ti() \
  (&Rte_CDD_MotAgSwCal_Ramp3Ti) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SampleIdx() \
  (&Rte_CDD_MotAgSwCal_SampleIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SwCalStepDir() \
  (&Rte_CDD_MotAgSwCal_SwCalStepDir) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SampleRdyFlg() \
  (&Rte_CDD_MotAgSwCal_SampleRdyFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SwCalEna() \
  (&Rte_CDD_MotAgSwCal_SwCalEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg2CosMeasRaw() (&((*RtePim_MotAg2CosMeasRaw())[0]))
#  else
#   define Rte_Pim_MotAg2CosMeasRaw() RtePim_MotAg2CosMeasRaw()
#  endif
#  define RtePim_MotAg2CosMeasRaw() \
  (&Rte_CDD_MotAgSwCal_MotAg2CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg2SinMeasRaw() (&((*RtePim_MotAg2SinMeasRaw())[0]))
#  else
#   define Rte_Pim_MotAg2SinMeasRaw() RtePim_MotAg2SinMeasRaw()
#  endif
#  define RtePim_MotAg2SinMeasRaw() \
  (&Rte_CDD_MotAgSwCal_MotAg2SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg5CosMeasRaw() (&((*RtePim_MotAg5CosMeasRaw())[0]))
#  else
#   define Rte_Pim_MotAg5CosMeasRaw() RtePim_MotAg5CosMeasRaw()
#  endif
#  define RtePim_MotAg5CosMeasRaw() \
  (&Rte_CDD_MotAgSwCal_MotAg5CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg5SinMeasRaw() (&((*RtePim_MotAg5SinMeasRaw())[0]))
#  else
#   define Rte_Pim_MotAg5SinMeasRaw() RtePim_MotAg5SinMeasRaw()
#  endif
#  define RtePim_MotAg5SinMeasRaw() \
  (&Rte_CDD_MotAgSwCal_MotAg5SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg6CosMeasRaw() (&((*RtePim_MotAg6CosMeasRaw())[0]))
#  else
#   define Rte_Pim_MotAg6CosMeasRaw() RtePim_MotAg6CosMeasRaw()
#  endif
#  define RtePim_MotAg6CosMeasRaw() \
  (&Rte_CDD_MotAgSwCal_MotAg6CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_MotAg6SinMeasRaw() (&((*RtePim_MotAg6SinMeasRaw())[0]))
#  else
#   define Rte_Pim_MotAg6SinMeasRaw() RtePim_MotAg6SinMeasRaw()
#  endif
#  define RtePim_MotAg6SinMeasRaw() \
  (&Rte_CDD_MotAgSwCal_MotAg6SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_MotAgSwCal_START_SEC_CODE
# include "CDD_MotAgSwCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_MotAgSwCalInit1 MotAgSwCalInit1
#  define RTE_RUNNABLE_MotAgSwCalPer2 MotAgSwCalPer2
#  define RTE_RUNNABLE_SwCalGetPrm_Oper SwCalGetPrm_Oper
#  define RTE_RUNNABLE_SwCalSetPrm_Oper SwCalSetPrm_Oper
#  define RTE_RUNNABLE_SwCalStop_Oper SwCalStop_Oper
#  define RTE_RUNNABLE_SwCalStrt_Oper SwCalStrt_Oper
# endif

FUNC(void, CDD_MotAgSwCal_CODE) MotAgSwCalInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_MotAgSwCal_CODE) MotAgSwCalPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_MotAgSwCal_CODE) SwCalGetPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) BoostModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) HldModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) CoolDwnModlnIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp1Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp2Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp3Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) BoostTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) HldTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) CoolDwnTi_Arg, P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) PosnStepSize_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) ElecRevCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CDD_MotAgSwCal_CODE) SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_MotAgSwCal_CODE) SwCalStop_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CDD_MotAgSwCal_CODE) SwCalStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_MotAgSwCal_STOP_SEC_CODE
# include "CDD_MotAgSwCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SwCalSetPrm_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTAGSWCAL_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
