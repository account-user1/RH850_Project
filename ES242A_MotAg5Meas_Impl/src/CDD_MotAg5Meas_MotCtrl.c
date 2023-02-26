/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAg5Meas_MotCtrl.c
* Module Description: MotAg5Meas computes motor angle from Sine and Cosine ADC signals.
*                     This file implements the Non-Rte(MotCtrl rate) functionality.
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:            3 %
* %derived_by:         nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                            SCR #
* --------  ------- -----------  --------------------------------------------------------------------------- ----------
* 07/24/17   1       Shruthi.R   Initial Version                                                             EA4#7274
* 10/03/17   2       Shruthi.R   Fix anomaly EA4#15679 and EA4#15926. Harmonic tables should be converted to
*                                floating point using a factor of P13TOFLOAT becauuse they are of sm6p13 
*                                type.                                                                       EA4#15815
* 10/16/17   3       Shruthi.R   Added new MotCtrl Output for Raw motor angle for use in 4ms Periodic        EA4#15815
**********************************************************************************************************************/

#include "Rte_CDD_MotAg5Meas.h" /*Needed for visibility fo pims and shadow ram */
#include "CDD_NxtrTi.h"
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "CDD_MotAg5Meas.h"

/*MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */

 #define MOTAGMAX_CNT_U16               65535U
 #define MOTAGMAX_MOTREV_U0P16          (FloatToFixd_u16_f32(0.9999847412F,NXTRFIXDPT_FLOATTOP16_ULS_F32))
 #define HRMNCTBLROUNDFAC_MOTREV_U0P16  (FloatToFixd_u16_f32(0.003472222F,NXTRFIXDPT_FLOATTOP16_ULS_F32))
 #define HRMNCTBLSIZE_CNT_U16           ((uint16)TblSize_m(Rte_Pim_MotAg5EolPrm()->SinHrmncTbl))
 #define MOTAGHRMNCIDXSHIFT_CNT_U16     16U

#define MotAg5Meas_MotCtrl_START_SEC_CODE
#include "CDD_MotAg5Meas_MotCtrl_MemMap.h" 

/*****************************************************************************************************
 * Name       : MotAg5MeasPer2
 * Description: Periodic to be called at MotCtrl loop rate for MotAg calculation
 * Inputs     : MOTCTRLMGR_MotCtrlMotAg5Cos           : Motor Angle 5 Cosine Input (Cosine ADC Signal)
 *                                                      in Volt
 *              MOTCTRLMGR_MotCtrlMotAg5CosRtAmpRecpr : Motor Control Motor Angle 5 Cosine Runtime
 *                                                      Amplitude Reciprocal input (Cosine amplitude
 *                                                      reciprocal learned value) in IvsVolt
 *              MOTCTRLMGR_MotCtrlMotAg5CosRtOffs     : Motor Control Motor Angle 5 Cosine Runtime
 *                                                      Offset Input (Cosine learned offset value)
 *                                                      in Volt
 *              MOTCTRLMGR_MotCtrlMotAg5Polarity      : Motor Control Motor Angle 5 Polarity Input
 *              MOTCTRLMGR_MotCtrlMotAg5Sin           : Motor Control Motor Angle 5 Sine Input
 *              MOTCTRLMGR_MotCtrlMotAg5SinRtAmpRecpr : Motor Control Motor Angle 5 Sine Runtime
 *                                                      Amplitude Reciprocal (Sine amplitude reciprocal
 *                                                      learned value) in IvsVolt
 *              MOTCTRLMGR_MotCtrlMotAg5SinRtOffs     : Motor Control Motor Angle 5 Sine Runtime Offset
 *                                                      (Sine learned offset value) in Volt
 * Outputs    : MOTCTRLMGR_MotCtrlMotAgMeasTi         : Motor Control Motor Angle Measurement Time (in
 *                                                      Counts of 100us resolution)
 *              MOTCTRLMGR_MotCtrlMotAg5Mecl          : Motor Control Motor Angle 5 Mechanical Output
 *                                                      Value in MotRev
 *              MOTCTRLMGR_MotCtrlMotAg5RawMecl       : Motor Control Motor Angle 5 Raw Mechanical
 *                                                      Output Value in MotRev
 * Usage Notes: Called from MotCtrlISR.
 ****************************************************************************************************/
FUNC(void, MotAg5Meas_CODE) MotAg5MeasPer2(void)
{
  VAR(float32, AUTOMATIC) SinCorrd_Uls_T_f32;
  VAR(float32, AUTOMATIC) CosCorrd_Uls_T_f32;
  VAR(float32, AUTOMATIC) SinDelta_Uls_T_f32;
  VAR(float32, AUTOMATIC) CosDeltaRecpr_Uls_T_f32;
  VAR(float32, AUTOMATIC) CosQuadCorrd_Uls_T_f32;
  VAR(uint16 , AUTOMATIC) HrmncTblIdx_Cnt_T_u16;
  VAR(uint16 , AUTOMATIC) MotAg5MeclPolarityCorrd_MotRev_T_u0p16;
  VAR(float32, AUTOMATIC) SinHrmncCorrnTerm_Uls_T_f32;
  VAR(float32, AUTOMATIC) CosHrmncCorrnTerm_Uls_T_f32;
  VAR(float32, AUTOMATIC) SinTheta_Uls_T_f32;
  VAR(float32, AUTOMATIC) CosTheta_Uls_T_f32;
  VAR(float32, AUTOMATIC) MotAgCalcd_MotRev_T_f32;
  VAR(float32, AUTOMATIC) MotAg5MeclCalcd_MotRev_T_f32;

  /***---------MotAg5Calcn---------***/
  /*---[Start of 'Signal Correction']---*/
  SinCorrd_Uls_T_f32 = (MOTCTRLMGR_MotCtrlMotAg5Sin - MOTCTRLMGR_MotCtrlMotAg5SinRtOffs)*MOTCTRLMGR_MotCtrlMotAg5SinRtAmpRecpr;
  CosCorrd_Uls_T_f32 = (MOTCTRLMGR_MotCtrlMotAg5Cos - MOTCTRLMGR_MotCtrlMotAg5CosRtOffs)*MOTCTRLMGR_MotCtrlMotAg5CosRtAmpRecpr;
  /*---[ End  of 'Signal Correction']---*/
  
  /*---[Start of 'Quadrature Corrd']---*/
  SinDelta_Uls_T_f32      = FixdToFloat_f32_s16(Rte_Pim_MotAg5EolPrm()->SinDelta     ,NXTRFIXDPT_P13TOFLOAT_ULS_F32);
  CosDeltaRecpr_Uls_T_f32 = FixdToFloat_f32_u16(Rte_Pim_MotAg5EolPrm()->CosDeltaRecpr,NXTRFIXDPT_P13TOFLOAT_ULS_F32);
  CosQuadCorrd_Uls_T_f32 = ((SinCorrd_Uls_T_f32*SinDelta_Uls_T_f32)+CosCorrd_Uls_T_f32)*CosDeltaRecpr_Uls_T_f32;
  /*---[ End  of 'Quadrature Corrd']---*/
  
  /*---[Start of 'Harmonic Compensation']---*/
  HrmncTblIdx_Cnt_T_u16 = (uint16)(((uint32)(((uint32)*Rte_Pim_PrevMotAg5Mecl() + (uint32)HRMNCTBLROUNDFAC_MOTREV_U0P16) & MOTAGMAX_CNT_U16)*HRMNCTBLSIZE_CNT_U16) >> MOTAGHRMNCIDXSHIFT_CNT_U16);
  SinHrmncCorrnTerm_Uls_T_f32 = FixdToFloat_f32_s16(((sint16)(Rte_Pim_MotAg5EolPrm()->SinHrmncTbl)[HrmncTblIdx_Cnt_T_u16]),NXTRFIXDPT_P13TOFLOAT_ULS_F32);
  CosHrmncCorrnTerm_Uls_T_f32 = FixdToFloat_f32_s16(((sint16)(Rte_Pim_MotAg5EolPrm()->CosHrmncTbl)[HrmncTblIdx_Cnt_T_u16]),NXTRFIXDPT_P13TOFLOAT_ULS_F32);
  /*---[ End  of 'Harmonic Compensation']---*/

  SinTheta_Uls_T_f32 = SinCorrd_Uls_T_f32 - SinHrmncCorrnTerm_Uls_T_f32;
  CosTheta_Uls_T_f32 = CosQuadCorrd_Uls_T_f32 - CosHrmncCorrnTerm_Uls_T_f32;
  /* ATAN2: Four Quadrant Inverse Tangent */
  MotAgCalcd_MotRev_T_f32 = Arctan2_f32(SinTheta_Uls_T_f32,CosTheta_Uls_T_f32)/ARCHGLBPRM_2PI_ULS_F32;
  if(MotAgCalcd_MotRev_T_f32 < 0.0F)
  {
    MotAg5MeclCalcd_MotRev_T_f32 = MotAgCalcd_MotRev_T_f32 + 1.0F; /*Add 1*/
  }
  else
  {
    MotAg5MeclCalcd_MotRev_T_f32 = MotAgCalcd_MotRev_T_f32; /*Pass through*/
  }

  *Rte_Pim_PrevMotAg5Mecl() = FloatToFixd_u16_f32(MotAg5MeclCalcd_MotRev_T_f32,NXTRFIXDPT_FLOATTOP16_ULS_F32);

  /*---[Start of 'Polarity and Phase Correction']---*/
  if(MOTCTRLMGR_MotCtrlMotAg5Polarity < 0)
  {
    /*Negative Polarity*/
    MotAg5MeclPolarityCorrd_MotRev_T_u0p16 = MOTAGMAX_MOTREV_U0P16 - *Rte_Pim_PrevMotAg5Mecl();
  }
  else
  {
    MotAg5MeclPolarityCorrd_MotRev_T_u0p16 = *Rte_Pim_PrevMotAg5Mecl();
  }
  MOTCTRLMGR_MotCtrlMotAg5Mecl = MotAg5MeclPolarityCorrd_MotRev_T_u0p16 - Rte_Prm_MotAg5MeasOffs_Val(); /*Overflow is intentional*/
  /*---[ End  of 'Polarity and Phase Correction']---*/

  GetRefTmr1MicroSec32bit_Oper(&MOTCTRLMGR_MotCtrlMotAgMeasTi);
  MOTCTRLMGR_MotCtrlMotAg5RawMecl = *Rte_Pim_PrevMotAg5Mecl();
}

#define MotAg5Meas_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAg5Meas_MotCtrl_MemMap.h" 