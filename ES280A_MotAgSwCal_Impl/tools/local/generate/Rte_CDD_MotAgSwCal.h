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
 *        Config:  C:/_EA4SynWrkgCpy/ES280A_MotAgSwCal_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotAgSwCal
 *  Generated at:  Mon Sep 25 15:28:27 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotAgSwCal> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTAGSWCAL_H
# define _RTE_CDD_MOTAGSWCAL_H

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

# include "Rte_CDD_MotAgSwCal_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_MotAgSwCal
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BoostModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BoostSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BoostTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_BoostTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CoolDwnModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CoolDwnSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CoolDwnTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_CoolDwnTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_ElecRevCnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HldModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HldSlew; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HldTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HldTiOut; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u3p13_50, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u3p13_50, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u3p13_50, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u3p13_50, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg5SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6CosAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6CosMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u3p13_50, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6CosMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6CosMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6CosMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6SinAdcFaildCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6SinMeasAvrg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u3p13_50, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6SinMeasRaw; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6SinMeasRawCumv; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u3p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg6SinMeasRawPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u16p16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u0p16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PosnStepSize; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ramp1Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ramp2Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_Ramp3Ti; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SampleIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u16p16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SamplePosnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SampleRdyFlg; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SampleStopTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SampleStrtTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SwCalCycTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SwCalEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SwCalMotModlnIdx; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SwCalStepDir; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_MotAgSwCal, RTE_CONST, RTE_CONST) Rte_Inst_CDD_MotAgSwCal; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_MotAgSwCal, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAgSwCal_SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(uint16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_DATA) SnsrData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotAgSwCal_SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(Ary1D_u16_12, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_DATA) SnsrData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(float32, RTE_CODE) Rte_Prm_CDD_MotAgSwCal_MotAgSwCalVehSpdThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SwCalStsCallBack_Oper Rte_Call_CDD_MotAgSwCal_SwCalStsCallBack_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotAgSwCalVehSpdThd_Val Rte_Prm_CDD_MotAgSwCal_MotAgSwCalVehSpdThd_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_BoostModlnIdx() (Rte_Inst_CDD_MotAgSwCal->Pim_BoostModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BoostSlew() (Rte_Inst_CDD_MotAgSwCal->Pim_BoostSlew) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CoolDwnModlnIdx() (Rte_Inst_CDD_MotAgSwCal->Pim_CoolDwnModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CoolDwnSlew() (Rte_Inst_CDD_MotAgSwCal->Pim_CoolDwnSlew) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HldModlnIdx() (Rte_Inst_CDD_MotAgSwCal->Pim_HldModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HldSlew() (Rte_Inst_CDD_MotAgSwCal->Pim_HldSlew) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SwCalMotModlnIdx() (Rte_Inst_CDD_MotAgSwCal->Pim_SwCalMotModlnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BoostTiOut() (Rte_Inst_CDD_MotAgSwCal->Pim_BoostTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CoolDwnTiOut() (Rte_Inst_CDD_MotAgSwCal->Pim_CoolDwnTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HldTiOut() (Rte_Inst_CDD_MotAgSwCal->Pim_HldTiOut) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnIdx() (Rte_Inst_CDD_MotAgSwCal->Pim_PosnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SamplePosnIdx() (Rte_Inst_CDD_MotAgSwCal->Pim_SamplePosnIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SampleStopTi() (Rte_Inst_CDD_MotAgSwCal->Pim_SampleStopTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SampleStrtTi() (Rte_Inst_CDD_MotAgSwCal->Pim_SampleStrtTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SwCalCycTi() (Rte_Inst_CDD_MotAgSwCal->Pim_SwCalCycTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_CoolDwnTi() (Rte_Inst_CDD_MotAgSwCal->Pim_CoolDwnTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HldTi() (Rte_Inst_CDD_MotAgSwCal->Pim_HldTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2CosMeasAvrg() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2CosMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2CosMeasRawCumv() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2CosMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2CosMeasRawPrev() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2CosMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2SinMeasAvrg() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2SinMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2SinMeasRawCumv() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2SinMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2SinMeasRawPrev() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2SinMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5CosMeasAvrg() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5CosMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5CosMeasRawCumv() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5CosMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5CosMeasRawPrev() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5CosMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5SinMeasAvrg() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5SinMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5SinMeasRawCumv() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5SinMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5SinMeasRawPrev() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5SinMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6CosMeasAvrg() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6CosMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6CosMeasRawCumv() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6CosMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6CosMeasRawPrev() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6CosMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6SinMeasAvrg() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6SinMeasAvrg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6SinMeasRawCumv() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6SinMeasRawCumv) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6SinMeasRawPrev() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6SinMeasRawPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PosnStepSize() (Rte_Inst_CDD_MotAgSwCal->Pim_PosnStepSize) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_BoostTi() (Rte_Inst_CDD_MotAgSwCal->Pim_BoostTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_ElecRevCnt() (Rte_Inst_CDD_MotAgSwCal->Pim_ElecRevCnt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2CosAdcFaildCntr() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2CosAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2SinAdcFaildCntr() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2SinAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5CosAdcFaildCntr() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5CosAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg5SinAdcFaildCntr() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5SinAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6CosAdcFaildCntr() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6CosAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg6SinAdcFaildCntr() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6SinAdcFaildCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ramp1Ti() (Rte_Inst_CDD_MotAgSwCal->Pim_Ramp1Ti) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ramp2Ti() (Rte_Inst_CDD_MotAgSwCal->Pim_Ramp2Ti) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_Ramp3Ti() (Rte_Inst_CDD_MotAgSwCal->Pim_Ramp3Ti) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SampleIdx() (Rte_Inst_CDD_MotAgSwCal->Pim_SampleIdx) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SwCalStepDir() (Rte_Inst_CDD_MotAgSwCal->Pim_SwCalStepDir) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SampleRdyFlg() (Rte_Inst_CDD_MotAgSwCal->Pim_SampleRdyFlg) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SwCalEna() (Rte_Inst_CDD_MotAgSwCal->Pim_SwCalEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg2CosMeasRaw() (*Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg2CosMeasRaw() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg2SinMeasRaw() (*Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg2SinMeasRaw() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg2SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg5CosMeasRaw() (*Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg5CosMeasRaw() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg5SinMeasRaw() (*Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg5SinMeasRaw() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg5SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg6CosMeasRaw() (*Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg6CosMeasRaw() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6CosMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAg6SinMeasRaw() (*Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAg6SinMeasRaw() (Rte_Inst_CDD_MotAgSwCal->Pim_MotAg6SinMeasRaw) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BoostModlnIdx(void)
 *   float32 *Rte_Pim_BoostSlew(void)
 *   float32 *Rte_Pim_CoolDwnModlnIdx(void)
 *   float32 *Rte_Pim_CoolDwnSlew(void)
 *   float32 *Rte_Pim_HldModlnIdx(void)
 *   float32 *Rte_Pim_HldSlew(void)
 *   float32 *Rte_Pim_SwCalMotModlnIdx(void)
 *   uint32 *Rte_Pim_BoostTiOut(void)
 *   uint32 *Rte_Pim_CoolDwnTiOut(void)
 *   uint32 *Rte_Pim_HldTiOut(void)
 *   u16p16 *Rte_Pim_PosnIdx(void)
 *   u16p16 *Rte_Pim_SamplePosnIdx(void)
 *   uint32 *Rte_Pim_SampleStopTi(void)
 *   uint32 *Rte_Pim_SampleStrtTi(void)
 *   uint32 *Rte_Pim_SwCalCycTi(void)
 *   uint16 *Rte_Pim_CoolDwnTi(void)
 *   uint16 *Rte_Pim_HldTi(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg2SinMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg2SinMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg2SinMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg5CosMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg5CosMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg5CosMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg5SinMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg5SinMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg5SinMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg6CosMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg6CosMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg6CosMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg6SinMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg6SinMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg6SinMeasRawPrev(void)
 *   u0p16 *Rte_Pim_PosnStepSize(void)
 *   uint8 *Rte_Pim_BoostTi(void)
 *   uint8 *Rte_Pim_ElecRevCnt(void)
 *   uint8 *Rte_Pim_MotAg2CosAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg2SinAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg5CosAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg5SinAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg6CosAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg6SinAdcFaildCntr(void)
 *   uint8 *Rte_Pim_Ramp1Ti(void)
 *   uint8 *Rte_Pim_Ramp2Ti(void)
 *   uint8 *Rte_Pim_Ramp3Ti(void)
 *   uint8 *Rte_Pim_SampleIdx(void)
 *   uint8 *Rte_Pim_SwCalStepDir(void)
 *   boolean *Rte_Pim_SampleRdyFlg(void)
 *   boolean *Rte_Pim_SwCalEna(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg2SinMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg5CosMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg5SinMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg6CosMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg6SinMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotAgSwCalVehSpdThd_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_MotAgSwCal_START_SEC_CODE
# include "CDD_MotAgSwCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAgSwCalInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAgSwCalInit1 MotAgSwCalInit1
FUNC(void, CDD_MotAgSwCal_CODE) MotAgSwCalInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAgSwCalPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, const uint16 *SnsrData_Arg)
 *     Argument SnsrData_Arg: uint16* is of type Ary1D_u16_12
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAgSwCalPer2 MotAgSwCalPer2
FUNC(void, CDD_MotAgSwCal_CODE) MotAgSwCalPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalGetPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalGetPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalGetPrm_Oper(float32 *BoostModlnIdx_Arg, float32 *HldModlnIdx_Arg, float32 *CoolDwnModlnIdx_Arg, uint8 *Ramp1Ti_Arg, uint8 *Ramp2Ti_Arg, uint8 *Ramp3Ti_Arg, uint8 *BoostTi_Arg, uint16 *HldTi_Arg, uint16 *CoolDwnTi_Arg, u0p16 *PosnStepSize_Arg, uint8 *ElecRevCnt_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SwCalGetPrm_Oper SwCalGetPrm_Oper
FUNC(void, CDD_MotAgSwCal_CODE) SwCalGetPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) BoostModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) HldModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) CoolDwnModlnIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp1Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp2Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp3Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) BoostTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) HldTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) CoolDwnTi_Arg, P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) PosnStepSize_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) ElecRevCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalSetPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalSetPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SwCalSetPrm_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SwCalSetPrm_Oper SwCalSetPrm_Oper
FUNC(Std_ReturnType, CDD_MotAgSwCal_CODE) SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalStop_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalStop>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalStop_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SwCalStop_Oper SwCalStop_Oper
FUNC(void, CDD_MotAgSwCal_CODE) SwCalStop_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalStrt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalStrt>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalStrt_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SwCalStrt_Oper SwCalStrt_Oper
FUNC(void, CDD_MotAgSwCal_CODE) SwCalStrt_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_MotAgSwCal_STOP_SEC_CODE
# include "CDD_MotAgSwCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SwCalSetPrm_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTAGSWCAL_H */
