/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  InertiaCmpVel.c
 *        Config:  C:/_Synergy_Projects/Working/SF014A_InertiaCmpVel_Impl/tools/Component.dpa
 *     SW-C Type:  InertiaCmpVel
 *  Generated at:  Fri Aug 18 13:58:24 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <InertiaCmpVel>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: InertiaCmpVel.c
* Module Description: Implementation of InertiaCmpVel FDD SF014A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version          : 8 % 
* %derived_by       : nz2796 %
*------------------------------------------------------------------------------------------------------------------
* Date        Rev    Author    Change Description                                                            SCR #
* -------   -------  --------  -----------------------------------------------------------------------     --------
* 06/15/15     1       SB      Initial Version                                                              EA4#976
* 03/11/16     2       SB      Corrections to 'FilNotchInit' local function                                 EA4#2050
* 05/03/16     3       SB      Implemented SF014A versin 1.5.0 of design		                            EA4#5616
* 06/14/16     4       TATA    Implemented SF014A versin 1.7.0 and 1.8.0 of design                          EA4#6074
* 07/11/16     5       KK      Corrected FilFreq_RadPerSec_T_f32 calculation at line# 178                   EA4#6529                                                               
* 07/12/16     6       KK      Implemented SF014A version 1.9.0	 of FDD					                    EA4#6579
* 08/01/16     7       KK      Implemented SF014A version 1.10.0 of FDD					                    EA4#6703
* 08/16/17     8       ML      Added new Calibrations and logic involving them in Per1                      EA4#14511
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * u0p16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u11p5
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u12p4
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u13p3
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u1p15
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u2p14
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u4p12
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u7p9
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_InertiaCmpVel.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 #include "ArchGlbPrm.h"
 #include "SysGlbPrm.h"
 #include "FltInj.h"
 #include "NxtrFil.h" 
 #include "NxtrMath.h"
 #include "NxtrIntrpn.h"
 #include "NxtrFixdPt.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */  
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Write and Rte_Read */ 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon; Rte generation adds standard return type but no error information is returned for FltInj_f32. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
 #define NOTCHFILZEROTHD_ULS_F32                 (0.00001F)
 #define MOTVELLOLIM_MOTRADPERSEC_F32            (-1350.0F)
 #define MOTVELHILIM_MOTRADPERSEC_F32  			 (1350.0F)

 #define   PrmInertiaCmpVelAssiBasdDampgCoeffX                  (*(const Ary1D_u4p12_10 *)(Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D()))
 #define   PrmInertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY    (*(const Ary1D_u0p16_10 *)(Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D()))
 #define   PrmInertiaCmpVelAssiBasdDampgRollgY                  (*(const Ary1D_u0p16_10 *)(Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D()))
 #define   PrmInertiaCmpVelAssiBasdDampgStatY                   (*(const Ary1D_u0p16_10 *)(Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D()))
 #define   PrmInertiaCmpVelCmdScaY                              (*(const Ary1D_u2p14_12 *)(Rte_Prm_InertiaCmpVelCmdScaY_Ary1D()))
 #define   PrmInertiaCmpVelDampgDecelGainRisngSlewX             (*(const Ary1D_u11p5_6 *)(Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D()))
 #define   PrmInertiaCmpVelDampgDecelGainRisngSlewY             (*(const Ary1D_u13p3_6 *)(Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D()))
 #define   PrmInertiaCmpVelDampgFilFrq                          (*(const Ary1D_u7p9_12 *)(Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D()))
 #define   PrmInertiaCmpVelDampgFilFrqWhlImbRejctnOn            (*(const Ary1D_u7p9_12 *)(Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D()))
 #define   PrmInertiaCmpVelDampgSpdBlndY                        (*(const Ary1D_u1p15_12 *)(Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D()))
 #define   PrmInertiaCmpVelDampgWhlImbRejctnBlndX               (*(const Ary1D_u4p12_5 *)(Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D()))
 #define   PrmInertiaCmpVelDampgWhlImbRejctnBlndY               (*(const Ary1D_u1p15_5 *)(Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D()))
 #define   PrmInertiaCmpVelMotVelBasdOutpScagX                  (*(const Ary1D_u12p4_2 *)(Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D()))
 #define   PrmInertiaCmpVelMotVelBasdOutpScagY                  (*(const Ary1D_u1p15_2 *)(Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D()))
 #define   PrmInertiaCmpVelNotchBlndY                           (*(const Ary1D_u1p15_12 *)(Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D()))
 #define   PrmInertiaCmpVelTqSnsrVelSca                         (*(const Ary1D_u2p14_12 *)(Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D()))
 #define   PrmSysGlbPrmVehSpdBilnrSeln                          (*(const Ary1D_u9p7_12 *)(Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D()))
 #define   PrmInertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY     (*(const Ary1D_u0p16_10 *)(Rte_Prm_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D()))
 #define   PrmInertiaCmpVelModWhlImbRejctnBlndX                 (*(const Ary1D_u4p12_2 *)(Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D()))
 #define   PrmInertiaCmpVelModWhlImbRejctnBlndY                 (*(const Ary1D_u1p15_2 *)(Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D()))
 
 typedef struct {
      float32 b0_Uls_f32;
      float32 b1_Uls_f32;
      float32 b2_Uls_f32;
      float32 a0_Uls_f32;
      float32 a1_Uls_f32;
      float32 a2_Uls_f32;
}FilCoeffRec;
 
static FUNC(float32, InertiaCmpVel_CODE) DrvrVelCalc(float32 HwTq_HwNwtMtr_T_f32,
                                                     float32 MotVelCrf_MotRadPerSec_T_f32,
                                                     float32 VehSpd_Kph_T_f32 );

static FUNC(float32, InertiaCmpVel_CODE) ADDCoeffCalc(float32 AssiCmdBas_MotNwtMtr_T_f32,
                                                     float32 WhlImbRejctnAmp_MotNwtMtr_T_f32,
                                                     float32 VehSpd_Kph_T_f32 );

static FUNC(void, InertiaCmpVel_CODE) FilCoeffCalc(float32 ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32, 
                                                   float32 VehSpd_Kph_T_f32, 
                                                   float32 WhlImbRejctnAmp_MotNwtMtr_T_f32, 
                                                   CONSTP2VAR(FilCoeffRec, AUTOMATIC, AUTOMATIC) FilCoeff_T_Rec);

static FUNC(float32, InertiaCmpVel_CODE) GenFddIcCmd(float32 ScadDrvrVel_MotRadPerSec_T_f32, 
                                                     CONSTP2CONST(FilCoeffRec, AUTOMATIC, AUTOMATIC) FilCoeff_T_Rec);                                   

static FUNC(float32, InertiaCmpVel_CODE) DecelGain(float32 VehLgtA_KphPerSec_T_f32, 
                                                   float32 MotVelCrf_MotRadPerSec_T_f32) ;
                                                   
static FUNC(float32, InertiaCmpVel_CODE) NotchCmp(float32 VehSpd_Kph_T_f32, 
                                                  float32 InertiaCmp_MotNwtMtr_T_f32,
                                                  float32 WhlImbRejctnAmp_MotNwtMtr_T_f32);
												  
static FUNC(void, InertiaCmpVel_CODE) FilNotchInit(float32 Inp, 
												   P2VAR(FilNotchStRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchStRecPtr, 
                                                   P2CONST(FilNotchGainRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchGainRecPtr);

static FUNC(float32, InertiaCmpVel_CODE) FilNotchFullUpdOutp_f32(float32 Inp,
																 P2VAR(FilNotchStRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchStRecPtr,
																 P2CONST(FilNotchGainRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchGainRecPtr);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u0p16: Integer in interval [0...65535]
 * u11p5: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u13p3: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u0p16_10: Array with 10 element(s) of type u0p16
 * Ary1D_u11p5_6: Array with 6 element(s) of type u11p5
 * Ary1D_u12p4_2: Array with 2 element(s) of type u12p4
 * Ary1D_u13p3_6: Array with 6 element(s) of type u13p3
 * Ary1D_u1p15_12: Array with 12 element(s) of type u1p15
 * Ary1D_u1p15_2: Array with 2 element(s) of type u1p15
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u2p14_12: Array with 12 element(s) of type u2p14
 * Ary1D_u4p12_10: Array with 10 element(s) of type u4p12
 * Ary1D_u4p12_2: Array with 2 element(s) of type u4p12
 * Ary1D_u4p12_5: Array with 5 element(s) of type u4p12
 * Ary1D_u7p9_12: Array with 12 element(s) of type u7p9
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 * FilNotchGainRec1: Record with elements
 *   FilGainB0 of type float32
 *   FilGainB1 of type float32
 *   FilGainB2 of type float32
 *   FilGainA1 of type float32
 *   FilGainA2 of type float32
 * FilNotchStRec1: Record with elements
 *   FilSt1 of type float32
 *   FilSt2 of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_DecelGain(void)
 *   float32 *Rte_Pim_PreScagCmpCmdPrev1(void)
 *   float32 *Rte_Pim_PreScagCmpCmdPrev2(void)
 *   float32 *Rte_Pim_ScaDrvrVelPrev1(void)
 *   float32 *Rte_Pim_ScaDrvrVelPrev2(void)
 *   float32 *Rte_Pim_TqSnsrAgPrev(void)
 *   float32 *Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff(void)
 *   float32 *Rte_Pim_dInertiaCmpVelCalcdInertiaCmp(void)
 *   float32 *Rte_Pim_dInertiaCmpVelFilFrq(void)
 *   float32 *Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotScadDrvrVel(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchBlndVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchInpVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelNotchOutpVal(void)
 *   float32 *Rte_Pim_dInertiaCmpVelRawDecelGain(void)
 *   float32 *Rte_Pim_dInertiaCmpVelScadDrvrVel(void)
 *   float32 *Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal(void)
 *   boolean *Rte_Pim_NotchFilChk(void)
 *   FilLpRec1 *Rte_Pim_TqSnsrVelFil(void)
 *   FilNotchStRec1 *Rte_Pim_TqSnsrVelFilNotchSt(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_InertiaCmpVelDampgDecelGain_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgGainOffThd_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelDampgGainOnThd_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelMotInertia_Val(void)
 *   float32 Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmTorsBarStfn_Val(void)
 *   boolean Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl(void)
 *   u4p12 *Rte_Prm_InertiaCmpVelAssiBasdDampgCoeffX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgRollgY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u0p16 *Rte_Prm_InertiaCmpVelAssiBasdDampgStatY_Ary1D(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_10
 *   u2p14 *Rte_Prm_InertiaCmpVelCmdScaY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_12
 *   u11p5 *Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_6
 *   u13p3 *Rte_Prm_InertiaCmpVelDampgDecelGainRisngSlewY_Ary1D(void)
 *     Returnvalue: u13p3* is of type Ary1D_u13p3_6
 *   u7p9 *Rte_Prm_InertiaCmpVelDampgFilFrq_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_12
 *   u7p9 *Rte_Prm_InertiaCmpVelDampgFilFrqWhlImbRejctnOn_Ary1D(void)
 *     Returnvalue: u7p9* is of type Ary1D_u7p9_12
 *   u1p15 *Rte_Prm_InertiaCmpVelDampgSpdBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u4p12 *Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_5
 *   u1p15 *Rte_Prm_InertiaCmpVelDampgWhlImbRejctnBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_5
 *   u4p12 *Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_2
 *   u1p15 *Rte_Prm_InertiaCmpVelModWhlImbRejctnBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u12p4 *Rte_Prm_InertiaCmpVelMotVelBasdOutpScagX_Ary1D(void)
 *     Returnvalue: u12p4* is of type Ary1D_u12p4_2
 *   u1p15 *Rte_Prm_InertiaCmpVelMotVelBasdOutpScagY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u1p15 *Rte_Prm_InertiaCmpVelNotchBlndY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_12
 *   u2p14 *Rte_Prm_InertiaCmpVelTqSnsrVelSca_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_12
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *   FilNotchGainRec1 *Rte_Prm_InertiaCmpVelNotchFilStruct_Rec(void)
 *
 *********************************************************************************************************************/


#define InertiaCmpVel_START_SEC_CODE
#include "InertiaCmpVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InertiaCmpVelInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: InertiaCmpVelInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, InertiaCmpVel_CODE) InertiaCmpVelInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: InertiaCmpVelInit1
 *********************************************************************************************************************/
     *Rte_Pim_DecelGain() = 1.0F;
	 FilLpInit(0.0F, Rte_Prm_InertiaCmpVelTqSnsrVelFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_TqSnsrVelFil());
     FilNotchInit(0.0F, Rte_Pim_TqSnsrVelFilNotchSt(), Rte_Prm_InertiaCmpVelNotchFilStruct_Rec());
	 
	 if( Abslt_f32_f32(Rte_Prm_InertiaCmpVelNotchFilStruct_Rec()->FilGainA1 + Rte_Prm_InertiaCmpVelNotchFilStruct_Rec()->FilGainA2 + 1.0F) <= NOTCHFILZEROTHD_ULS_F32 )
	 {
		*Rte_Pim_NotchFilChk() = FALSE;
	 }
	 else
	 {
		*Rte_Pim_NotchFilChk() = TRUE;
	 }
	 
	      
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: InertiaCmpVelPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_InertiaCmpDecelGainDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_InertiaCmpVelCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLgtA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_InertiaCmpVelCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: InertiaCmpVelPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, InertiaCmpVel_CODE) InertiaCmpVelPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: InertiaCmpVelPer1
 *********************************************************************************************************************/
     VAR(boolean, AUTOMATIC) InertiaCmpDecelGainDi_Cnt_T_lgc;
	 VAR(boolean, AUTOMATIC) InertiaCmpVelCmdDi_Cnt_T_lgc;
	 
	 VAR(float32, AUTOMATIC) AssiCmdBas_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
     VAR(float32, AUTOMATIC) VehLgtA_KphPerSec_T_f32;    
     VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
     VAR(float32, AUTOMATIC) WhlImbRejctnAmp_MotNwtMtr_T_f32;
	 VAR(float32, AUTOMATIC) InertiaCmpDecelGain_Cnt_T_f32;
     VAR(float32, AUTOMATIC) ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32;
     VAR(float32, AUTOMATIC) DecelGain_Uls_T_f32;
     VAR(float32, AUTOMATIC) ScadDrvrVel_MotRadPerSec_T_f32;
     VAR(float32, AUTOMATIC) FrqDepDmpnInrtCmp_MotNwtMtr_T_f32;  
     VAR(float32, AUTOMATIC) NotchCmp_MotNwtMtr_T_f32;  
     VAR(float32, AUTOMATIC) InertiaCmpVelCmd_MotNwtMtr_T_f32;
     
	 VAR(FilCoeffRec, AUTOMATIC) FilCoeff_T_Rec;
    
     /* Read Inputs */
     (void) Rte_Read_AssiCmdBas_Val(&AssiCmdBas_MotNwtMtr_T_f32);
     (void) Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
     (void) Rte_Read_InertiaCmpVelCmdDi_Logl(&InertiaCmpVelCmdDi_Cnt_T_lgc);
     (void) Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
     (void) Rte_Read_VehLgtA_Val(&VehLgtA_KphPerSec_T_f32);
     (void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
     (void) Rte_Read_WhlImbRejctnAmp_Val(&WhlImbRejctnAmp_MotNwtMtr_T_f32);
	 (void) Rte_Read_InertiaCmpDecelGainDi_Logl(&InertiaCmpDecelGainDi_Cnt_T_lgc);

     /* Calculate Assist Dependent Damping(ADD) Coefficient */
     ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32 = ADDCoeffCalc(AssiCmdBas_MotNwtMtr_T_f32, WhlImbRejctnAmp_MotNwtMtr_T_f32, VehSpd_Kph_T_f32);
     DecelGain_Uls_T_f32 					 = DecelGain(VehLgtA_KphPerSec_T_f32, MotVelCrf_MotRadPerSec_T_f32);
	
	if( (InertiaCmpDecelGainDi_Cnt_T_lgc == FALSE) && (Rte_Prm_InertiaCmpVelDecelGainEnaCal_Logl() == TRUE) )
	{
	    InertiaCmpDecelGain_Cnt_T_f32 = DecelGain_Uls_T_f32;
	}
    else
	{
	    InertiaCmpDecelGain_Cnt_T_f32 = 1.0F;
    }
    
    ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32  = ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32 *  InertiaCmpDecelGain_Cnt_T_f32;
     /* Update Display Variable */
     *Rte_Pim_dInertiaCmpVelAssiBasdDampgCoeff() = ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32;
    
     /* Calculate Scaled Driver Velocity */
     ScadDrvrVel_MotRadPerSec_T_f32 = DrvrVelCalc(HwTq_HwNwtMtr_T_f32, MotVelCrf_MotRadPerSec_T_f32, VehSpd_Kph_T_f32);

     /* Calculate Filter Coefficients */
     FilCoeffCalc(ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32, VehSpd_Kph_T_f32, WhlImbRejctnAmp_MotNwtMtr_T_f32, &FilCoeff_T_Rec);
    
     /* Generate Frequency Dependant Damping Inertia Compensation Command */
     FrqDepDmpnInrtCmp_MotNwtMtr_T_f32 = GenFddIcCmd(ScadDrvrVel_MotRadPerSec_T_f32, &FilCoeff_T_Rec);

     /* Inertia Comp Notch Compensation */
     NotchCmp_MotNwtMtr_T_f32 = NotchCmp(VehSpd_Kph_T_f32, FrqDepDmpnInrtCmp_MotNwtMtr_T_f32, WhlImbRejctnAmp_MotNwtMtr_T_f32);
	 
	 if (InertiaCmpVelCmdDi_Cnt_T_lgc == TRUE)
     {
         InertiaCmpVelCmd_MotNwtMtr_T_f32 = 0.0F;
     }
     else
     {
         InertiaCmpVelCmd_MotNwtMtr_T_f32 = NotchCmp_MotNwtMtr_T_f32;
     }
     /* Output limiting */
     InertiaCmpVelCmd_MotNwtMtr_T_f32 = Lim_f32(InertiaCmpVelCmd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
     
     /* Velocity-Triggered Fault Injection Point */
     #if (STD_ON == FLTINJENA)   
         (void) Rte_Call_FltInj_f32_Oper(&InertiaCmpVelCmd_MotNwtMtr_T_f32,FLTINJ_INERTIACMPVEL_INERTIACMPCMD);  
     #endif
    
     /* Write Output */
     (void) Rte_Write_InertiaCmpVelCmd_Val(InertiaCmpVelCmd_MotNwtMtr_T_f32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define InertiaCmpVel_STOP_SEC_CODE
#include "InertiaCmpVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Function:    DrvrVelCalc
 * Description: this function is based on hand-wheel velocity (a.k.a. "driver velocity")  
                driver velocity = motor velocity + rate of T-bar twist  
                A scale factor is applied to T-bar twist rate to provide additional tuning flexibility. 
 * Inputs:      HwTq_HwNwtMtr_T_f32, MotVelCrf_MotRadPerSec_T_f32, VehSpd_Kph_T_f32 
 * Outputs:     ScadDrvrVel_MotRadPerSec_T_f32 
 **********************************************************************************************************************/
static FUNC(float32, InertiaCmpVel_CODE) DrvrVelCalc(float32 HwTq_HwNwtMtr_T_f32,
                                                     float32 MotVelCrf_MotRadPerSec_T_f32,
                                                     float32 VehSpd_Kph_T_f32 )
{    
     VAR(float32, AUTOMATIC) TorsBarAg_HwDeg_T_f32;
     VAR(float32, AUTOMATIC) TorsBarVel_HwDegPerSec_T_f32;
     VAR(float32, AUTOMATIC) TorsBarVelFilt_HwDegPerSec_T_f32;   
     VAR(float32, AUTOMATIC) TorsBarVel_MotRadPerSec_T_f32; 
     VAR(float32, AUTOMATIC) TorsBarVelScaFac_Uls_T_f32;
     VAR(float32, AUTOMATIC) ScadDrvrVel_MotRadPerSec_T_f32;
     VAR(uint16, AUTOMATIC) TorsBarVelScaFac_Uls_T_u2p14;    
     VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;  

     TorsBarAg_HwDeg_T_f32 = HwTq_HwNwtMtr_T_f32 / Rte_Prm_SysGlbPrmTorsBarStfn_Val();  
     TorsBarVel_HwDegPerSec_T_f32 = (TorsBarAg_HwDeg_T_f32 - *Rte_Pim_TqSnsrAgPrev()) / ARCHGLBPRM_2MILLISEC_SEC_F32;   
     /* Update previous T-bar value */
     *Rte_Pim_TqSnsrAgPrev() = TorsBarAg_HwDeg_T_f32; 
	 
     TorsBarVelFilt_HwDegPerSec_T_f32 = FilLpUpdOutp_f32(TorsBarVel_HwDegPerSec_T_f32, Rte_Pim_TqSnsrVelFil());      
	 /* Update Display Value */
	 *Rte_Pim_dInertiaCmpVelTqSnsrVelFildVal() = TorsBarVelFilt_HwDegPerSec_T_f32;
	 
     /* Convert from Deg to Rad */
     TorsBarVel_MotRadPerSec_T_f32 = ((TorsBarVelFilt_HwDegPerSec_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32) * Rte_Prm_SysGlbPrmSysKineRat_Val()); 
     /* Update Display Variable */
     *Rte_Pim_dInertiaCmpVelNotScadDrvrVel() = TorsBarVel_MotRadPerSec_T_f32 + MotVelCrf_MotRadPerSec_T_f32;
	 
     /* Calculate Scale Factor */
     VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP9_ULS_F32);  
     TorsBarVelScaFac_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln, 
                                                                   PrmInertiaCmpVelTqSnsrVelSca, 
                                                                   (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                                   VehSpd_Kph_T_u9p7);                                                                                  
     TorsBarVelScaFac_Uls_T_f32 = FixdToFloat_f32_u16(TorsBarVelScaFac_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
     /* Scaled Driver Velocity */
     ScadDrvrVel_MotRadPerSec_T_f32 = Lim_f32( ((TorsBarVel_MotRadPerSec_T_f32 * TorsBarVelScaFac_Uls_T_f32) + MotVelCrf_MotRadPerSec_T_f32), 
											   (MOTVELLOLIM_MOTRADPERSEC_F32), 
											   (MOTVELHILIM_MOTRADPERSEC_F32) );
     /* Update Display Variable */
     *Rte_Pim_dInertiaCmpVelScadDrvrVel() = ScadDrvrVel_MotRadPerSec_T_f32;
     return(ScadDrvrVel_MotRadPerSec_T_f32);
}

/**********************************************************************************************************************
 * Function:    ADDCoeffCalc
 * Description: Damping command depends on frequency and assist magnitude. This routine calculates the ADD coefficient, 
 *              blend of three lookup tables, multiplied by a gain factor.  
 *              The lookup tables are divided into static and Rolling tables, which are blended according to vehicle speed.  
 *              Rolling table itself has two columns of data:  One for WIR OFF, and one for WIR at ON at some amplitude.  
 *              Rolling table is blended first (WIR on vs off), then the result is blended with static table. 
 * Inputs:      AssiCmdBas_MotNwtMtr_T_f32, WhlImbRejctnAmp_MotNwtMtr_T_f32, VehSpd_Kph_T_f32 
 * Outputs:     ADDCoeffCalc_MotNwtMtrPerMotRadPerSec_T_f32  
 **********************************************************************************************************************/
static FUNC(float32, InertiaCmpVel_CODE) ADDCoeffCalc(float32 AssiCmdBas_MotNwtMtr_T_f32,
                                                      float32 WhlImbRejctnAmp_MotNwtMtr_T_f32,
                                                      float32 VehSpd_Kph_T_f32 )
{
     VAR(float32, AUTOMATIC) AbsltAssiCmdBas_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) RollgFDD0_MotNwtMtrPerMotRadPerSec_T_f32;     
     VAR(float32, AUTOMATIC) RollgFDD1_MotNwtMtrPerMotRadPerSec_T_f32;
     VAR(float32, AUTOMATIC) RIAssiWhlImbRejctnBlnd_MotNwtMtrPerMotRadPerSec_T_f32;        
     VAR(float32, AUTOMATIC) StatFDD_MotNwtMtrPerMotRadPerSec_T_f32;    
     VAR(float32, AUTOMATIC) StatWhlImbRejctnOn_MotNwtMtrPerMotRadPerSec_T_f32;     
     VAR(float32, AUTOMATIC) FDDBlnd_Uls_T_f32;
     VAR(float32, AUTOMATIC) FinRollingFDD_MotNwtMtrPerMotRadPerSec_T_f32;
     VAR(float32, AUTOMATIC) ADDCoeffCalc_MotNwtMtrPerMotRadPerSec_T_f32;
     VAR(float32, AUTOMATIC) StatBlnd_MotNwtMtrPerMotRadPerSec_T_f32;
     VAR(uint16, AUTOMATIC) AbsltBasAssiCmd_MotNwtMtr_T_u4p12;    
     VAR(uint16, AUTOMATIC) RollgFDD0_MotNwtMtrPerMotRadPerSec_T_u0p16; 
     VAR(uint16, AUTOMATIC) RollgFDD1_MotNwtMtrPerMotRadPerSec_T_u0p16;
     VAR(uint16, AUTOMATIC) WhlImbRejctnCmdAmpBlnd_MotNwtMtr_T_u4p12;
     VAR(uint16, AUTOMATIC) RIAssiWhlImbRejctnBlnd_MotNwtMtrPerMotRadPerSec_T_up15;   
     VAR(uint16, AUTOMATIC) StatFDD_MotNwtMtrPerMotRadPerSec_T_u0p16;  
     VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;       
     VAR(uint16, AUTOMATIC) FDDBlnd_Uls_T_u1p15;
     VAR(uint16, AUTOMATIC) StatWhlImbRejctnOn_MotNwtMtrPerMotRadPerSec_T_u0p16;
     
     /** ADD Coeff Calc lookup and blending **/
     /* Rolling FDD Table0 WIR OFF */
     AbsltAssiCmdBas_MotNwtMtr_T_f32 = Abslt_f32_f32(AssiCmdBas_MotNwtMtr_T_f32);
     AbsltBasAssiCmd_MotNwtMtr_T_u4p12 = FloatToFixd_u16_f32(AbsltAssiCmdBas_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP12_ULS_F32);        
     RollgFDD0_MotNwtMtrPerMotRadPerSec_T_u0p16 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelAssiBasdDampgCoeffX, 
																	   PrmInertiaCmpVelAssiBasdDampgRollgY,
                                                                       (uint16)TblSize_m(PrmInertiaCmpVelAssiBasdDampgCoeffX),
                                                                       AbsltBasAssiCmd_MotNwtMtr_T_u4p12);
     RollgFDD0_MotNwtMtrPerMotRadPerSec_T_f32 = FixdToFloat_f32_u16(RollgFDD0_MotNwtMtrPerMotRadPerSec_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32); 
     /* Rolling FDD Table1 WIR ON */
     RollgFDD1_MotNwtMtrPerMotRadPerSec_T_u0p16 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelAssiBasdDampgCoeffX, 
                                                                       PrmInertiaCmpVelAssiBasdDampgRollgWhlImbRejctnOnY,
                                                                       (uint16)TblSize_m(PrmInertiaCmpVelAssiBasdDampgCoeffX), 
                                                                       AbsltBasAssiCmd_MotNwtMtr_T_u4p12);
     RollgFDD1_MotNwtMtrPerMotRadPerSec_T_f32 = FixdToFloat_f32_u16(RollgFDD1_MotNwtMtrPerMotRadPerSec_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);     
     /* Rolling WIR Blend */
     WhlImbRejctnCmdAmpBlnd_MotNwtMtr_T_u4p12 = FloatToFixd_u16_f32(WhlImbRejctnAmp_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP12_ULS_F32);
     RIAssiWhlImbRejctnBlnd_MotNwtMtrPerMotRadPerSec_T_up15 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelDampgWhlImbRejctnBlndX, 
                                                                                   PrmInertiaCmpVelDampgWhlImbRejctnBlndY,
                                                                                   (uint16)TblSize_m(PrmInertiaCmpVelDampgWhlImbRejctnBlndX),
                                                                                   WhlImbRejctnCmdAmpBlnd_MotNwtMtr_T_u4p12);
     RIAssiWhlImbRejctnBlnd_MotNwtMtrPerMotRadPerSec_T_f32 = FixdToFloat_f32_u16(RIAssiWhlImbRejctnBlnd_MotNwtMtrPerMotRadPerSec_T_up15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);    
     FinRollingFDD_MotNwtMtrPerMotRadPerSec_T_f32 = Blnd_f32(RollgFDD0_MotNwtMtrPerMotRadPerSec_T_f32, RollgFDD1_MotNwtMtrPerMotRadPerSec_T_f32, RIAssiWhlImbRejctnBlnd_MotNwtMtrPerMotRadPerSec_T_f32);    
     /* static FDD Table */                                                                                 
     StatFDD_MotNwtMtrPerMotRadPerSec_T_u0p16 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelAssiBasdDampgCoeffX, 
                                                                     PrmInertiaCmpVelAssiBasdDampgStatY,   
                                                                     (uint16)TblSize_m(PrmInertiaCmpVelAssiBasdDampgCoeffX),
                                                                     AbsltBasAssiCmd_MotNwtMtr_T_u4p12);
     StatFDD_MotNwtMtrPerMotRadPerSec_T_f32 = FixdToFloat_f32_u16(StatFDD_MotNwtMtrPerMotRadPerSec_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);
     /* Static FDD Table WIR ON */  
     StatWhlImbRejctnOn_MotNwtMtrPerMotRadPerSec_T_u0p16 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelAssiBasdDampgCoeffX,
                                                                                          PrmInertiaCmpVelAssiBasdDampgStatWhlImbRejctnOnY,
                                                                                          (uint16)TblSize_m(PrmInertiaCmpVelAssiBasdDampgCoeffX),
                                                                                          AbsltBasAssiCmd_MotNwtMtr_T_u4p12);
     StatWhlImbRejctnOn_MotNwtMtrPerMotRadPerSec_T_f32 = FixdToFloat_f32_u16(StatWhlImbRejctnOn_MotNwtMtrPerMotRadPerSec_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);
     StatBlnd_MotNwtMtrPerMotRadPerSec_T_f32 = Blnd_f32(StatFDD_MotNwtMtrPerMotRadPerSec_T_f32, StatWhlImbRejctnOn_MotNwtMtrPerMotRadPerSec_T_f32, RIAssiWhlImbRejctnBlnd_MotNwtMtrPerMotRadPerSec_T_f32);
     /* FDD Blend Table */
     VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
     FDDBlnd_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln, 
                                                          PrmInertiaCmpVelDampgSpdBlndY,   
                                                          (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                          VehSpd_Kph_T_u9p7);    
     FDDBlnd_Uls_T_f32 = FixdToFloat_f32_u16(FDDBlnd_Uls_T_u1p15,NXTRFIXDPT_P15TOFLOAT_ULS_F32);         
     ADDCoeffCalc_MotNwtMtrPerMotRadPerSec_T_f32 = Blnd_f32(FinRollingFDD_MotNwtMtrPerMotRadPerSec_T_f32, StatBlnd_MotNwtMtrPerMotRadPerSec_T_f32, FDDBlnd_Uls_T_f32);
     return(ADDCoeffCalc_MotNwtMtrPerMotRadPerSec_T_f32);
}

/**********************************************************************************************************************
 * Function:    DecelGain
 * Description: DecelGain is a gain applied to damping coefficient when vehicle is aggressively decelerating. 
 * Inputs:      VehLgtA_KphPerSec_T_f32, MotVelCrf_MotRadPerSec_T_f32       
 * Outputs:     DecelGain_Uls_T_f32 
 **********************************************************************************************************************/
static FUNC(float32, InertiaCmpVel_CODE) DecelGain(float32 VehLgtA_KphPerSec_T_f32, 
                                                   float32 MotVelCrf_MotRadPerSec_T_f32)
{
     VAR(float32, AUTOMATIC) RawDecelGain_Uls_T_f32 ;
     VAR(float32, AUTOMATIC) DecelGain_Uls_T_f32;
     VAR(float32, AUTOMATIC) MaxDecelGain_UlsPerSec_T_f32;
     VAR(uint16, AUTOMATIC) MotVel_MotRadPerSec_T_u11p5;
     VAR(uint16, AUTOMATIC) MaxDecelGain_UlsPerSec_T_u13p3;
     /* Calculate RawDecelgain */
     if ((-VehLgtA_KphPerSec_T_f32) > Rte_Prm_InertiaCmpVelDampgGainOnThd_Val() )
     {
         RawDecelGain_Uls_T_f32 = Rte_Prm_InertiaCmpVelDampgDecelGain_Val();
     }
     else if ((-VehLgtA_KphPerSec_T_f32) < Rte_Prm_InertiaCmpVelDampgGainOffThd_Val())
     {
         RawDecelGain_Uls_T_f32 = 1.0F;
     }
     else
     {
         RawDecelGain_Uls_T_f32 =  *Rte_Pim_DecelGain(); 
     }
     *Rte_Pim_dInertiaCmpVelRawDecelGain()  = RawDecelGain_Uls_T_f32;    
     /* Rising Slew */
     MotVel_MotRadPerSec_T_u11p5 = FloatToFixd_u16_f32((Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32)),NXTRFIXDPT_FLOATTOP5_ULS_F32); 
     MaxDecelGain_UlsPerSec_T_u13p3 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelDampgDecelGainRisngSlewX, 
                                                                     PrmInertiaCmpVelDampgDecelGainRisngSlewY, 
                                                                     (uint16)TblSize_m(PrmInertiaCmpVelDampgDecelGainRisngSlewX),
                                                                     MotVel_MotRadPerSec_T_u11p5);
     MaxDecelGain_UlsPerSec_T_f32 = FixdToFloat_f32_u16(MaxDecelGain_UlsPerSec_T_u13p3, NXTRFIXDPT_P3TOFLOAT_ULS_F32);              
     /* Rate Limiter - Calculate Decelgain from raw value */
     DecelGain_Uls_T_f32= Lim_f32(RawDecelGain_Uls_T_f32, (ARCHGLBPRM_2MILLISEC_SEC_F32 * Rte_Prm_InertiaCmpVelDampgDecelGainFallSlew_Val())+ *Rte_Pim_DecelGain(), 
                                                          (ARCHGLBPRM_2MILLISEC_SEC_F32 * MaxDecelGain_UlsPerSec_T_f32)+ *Rte_Pim_DecelGain());
     /* Update PIM */
     *Rte_Pim_DecelGain() = DecelGain_Uls_T_f32;
     /* Update Display Variable */
     return (DecelGain_Uls_T_f32);
}

/**********************************************************************************************************************

 * Function: FilCoeffCalc
 * Description: Output from this routine is a collection of filter coefficients that represents both Inertia Compensation
                and Frequency Dependent Damping. 
 * Inputs: ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32, VehSpd_Kph_T_f32, WhlImbRejctnAmp_MotNwtMtr_T_f32, *FilCoeff_T_Rec 
 * Outputs: Create filter coeffs (b0 -> b2, a0 -> a2) 
 **********************************************************************************************************************/
static FUNC(void, InertiaCmpVel_CODE) FilCoeffCalc(float32 ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32, 
                                                   float32 VehSpd_Kph_T_f32, 
                                                   float32 WhlImbRejctnAmp_MotNwtMtr_T_f32, 
                                                   CONSTP2VAR(FilCoeffRec, AUTOMATIC, AUTOMATIC) FilCoeff_T_Rec)
{
     VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
     VAR(uint16, AUTOMATIC) FreqFil0_Hz_T_u7p9;
     VAR(uint16, AUTOMATIC) FreqFil1_Hz_T_u7p9;
     VAR(uint16, AUTOMATIC) WhlImbRejctnCmdAmpBlnd_MotNwtMtr_T_u4p12;
     VAR(uint16, AUTOMATIC) DampFiltKpWhlImbRejctn_Hz_T_u1p15;
     VAR(uint16, AUTOMATIC) InrtCmpScaFac_Uls_T_u2p14;
     VAR(float32, AUTOMATIC) FreqFil0_Hz_T_f32;
     VAR(float32, AUTOMATIC) FreqFil1_Hz_T_f32;
     VAR(float32, AUTOMATIC) DampFilKpWhlImbRejctn_Hz_T_f32;
     VAR(float32, AUTOMATIC) FilFreq_Hz_T_f32;
     VAR(float32, AUTOMATIC) FilFreq_RadPerSec_T_f32;
     VAR(float32, AUTOMATIC) InrtCmpScaFac_Uls_T_f32;    
     VAR(float32, AUTOMATIC) FilFreqSq_RadSqpSSq_T_f32;
     VAR(float32, AUTOMATIC) FilFreqSqrt_RadpS_T_f32;
     VAR(float32, AUTOMATIC) InertiaCompCalc_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) FilCoeffATmpCalc1_Uls_T_f32;
     VAR(float32, AUTOMATIC) FilCoeffATmpCalc2_Uls_T_f32;     
     VAR(float32, AUTOMATIC) FilCoeffATmpCalc3_Uls_T_f32;
     VAR(float32, AUTOMATIC) FilCoeffBTmpCalc1_Uls_T_f32;
     VAR(float32, AUTOMATIC) FilCoeffBTmpCalc2_Uls_T_f32;
     VAR(float32, AUTOMATIC) FilCoeffBTmpCalc3_Uls_T_f32;

     VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
      /** Filter freq lookup and blending **/
	  /** Choose appropriate filter corner frequency, w rad/sec **/
     /* FilterFreq0 */
     FreqFil0_Hz_T_u7p9 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln, 
                                                         PrmInertiaCmpVelDampgFilFrq, 
                                                         (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                         VehSpd_Kph_T_u9p7);  
     FreqFil0_Hz_T_f32 = FixdToFloat_f32_u16(FreqFil0_Hz_T_u7p9, NXTRFIXDPT_P9TOFLOAT_ULS_F32); 
     /* Filter Freq1 */
     FreqFil1_Hz_T_u7p9 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln, 
                                                         PrmInertiaCmpVelDampgFilFrqWhlImbRejctnOn,  
                                                         (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                         VehSpd_Kph_T_u9p7);
     FreqFil1_Hz_T_f32  = FixdToFloat_f32_u16(FreqFil1_Hz_T_u7p9, NXTRFIXDPT_P9TOFLOAT_ULS_F32); 
     /* DmpFiltKpWIR */
     WhlImbRejctnCmdAmpBlnd_MotNwtMtr_T_u4p12 = FloatToFixd_u16_f32(WhlImbRejctnAmp_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32); 
     DampFiltKpWhlImbRejctn_Hz_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelDampgWhlImbRejctnBlndX,  
                                                                        PrmInertiaCmpVelDampgWhlImbRejctnBlndY,   
                                                                        (uint16)TblSize_m(PrmInertiaCmpVelDampgWhlImbRejctnBlndX),
                                                                        WhlImbRejctnCmdAmpBlnd_MotNwtMtr_T_u4p12);
     DampFilKpWhlImbRejctn_Hz_T_f32 = FixdToFloat_f32_u16(DampFiltKpWhlImbRejctn_Hz_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);
     /* FDD value [w] */
     FilFreq_Hz_T_f32 =  Blnd_f32(FreqFil0_Hz_T_f32, FreqFil1_Hz_T_f32, DampFilKpWhlImbRejctn_Hz_T_f32 );
     FilFreq_RadPerSec_T_f32 = FilFreq_Hz_T_f32 * ARCHGLBPRM_2PI_ULS_F32;
      /* Update display variable */
     *Rte_Pim_dInertiaCmpVelFilFrq() = FilFreq_Hz_T_f32; 

     /** Calculate InertiaCompCalc_MotNwtMtr, FDD K value **/
	 FilFreqSq_RadSqpSSq_T_f32 = (FilFreq_RadPerSec_T_f32 * FilFreq_RadPerSec_T_f32) + 1.0F; 
     FilFreqSqrt_RadpS_T_f32 = Sqrt_f32(FilFreqSq_RadSqpSSq_T_f32); 
	 /* Scale Inertia Compensation */
     InrtCmpScaFac_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln, 
                                                                PrmInertiaCmpVelCmdScaY, 
                                                                (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                                VehSpd_Kph_T_u9p7);
     InrtCmpScaFac_Uls_T_f32 = FixdToFloat_f32_u16(InrtCmpScaFac_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);                          

    /* FDD value [k] */
     InertiaCompCalc_MotNwtMtr_T_f32 = (Rte_Prm_InertiaCmpVelMotInertia_Val() + 
                                       (ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32 / FilFreqSqrt_RadpS_T_f32)) *
                                        FilFreqSq_RadSqpSSq_T_f32 *
                                        InrtCmpScaFac_Uls_T_f32;
     /* Update Display Variable */
     *Rte_Pim_dInertiaCmpVelCalcdInertiaCmp() = InertiaCompCalc_MotNwtMtr_T_f32; 
	 
	 /** Calculate numerator and denominator coefficients **/ 
     /** B Terms **/
     FilCoeffBTmpCalc1_Uls_T_f32 = ARCHGLBPRM_2MILLISEC_SEC_F32 * InertiaCompCalc_MotNwtMtr_T_f32;
     FilCoeffBTmpCalc2_Uls_T_f32 = ARCHGLBPRM_2MILLISEC_SEC_F32 * ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32 * FilFreq_RadPerSec_T_f32;
     FilCoeffBTmpCalc3_Uls_T_f32 = ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32 * 2.0F;

     /* b0 Calc */
     FilCoeff_T_Rec->b0_Uls_f32 = (FilCoeffBTmpCalc2_Uls_T_f32 - FilCoeffBTmpCalc1_Uls_T_f32 - FilCoeffBTmpCalc3_Uls_T_f32) * 2.0F;
    
     /* b1 Calc */
     FilCoeff_T_Rec->b1_Uls_f32 = ADDCoeff_MotNwtMtrPerMotRadPerSec_T_f32 * 8.0F;

     /* b2 Calc */
     FilCoeff_T_Rec->b2_Uls_f32 = (FilCoeffBTmpCalc1_Uls_T_f32 - FilCoeffBTmpCalc2_Uls_T_f32 - FilCoeffBTmpCalc3_Uls_T_f32) * 2.0F;

     /** A terms **/
     FilCoeffATmpCalc1_Uls_T_f32 = (FilFreq_RadPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32);	 
	 FilCoeffATmpCalc2_Uls_T_f32 = FilCoeffATmpCalc1_Uls_T_f32 - 2.0F;
	 FilCoeffATmpCalc3_Uls_T_f32 = FilCoeffATmpCalc1_Uls_T_f32 + 2.0F;
     
     /* a0 TmpCalc */
     FilCoeff_T_Rec->a0_Uls_f32 = FilCoeffATmpCalc2_Uls_T_f32 * FilCoeffATmpCalc2_Uls_T_f32;
    
     /* a1 TmpCalc */
     FilCoeff_T_Rec->a1_Uls_f32 = ((FilCoeffATmpCalc1_Uls_T_f32 * FilCoeffATmpCalc1_Uls_T_f32) - 4.0F) * 2.0F;
    
     /* a2 TmpCalc */
     FilCoeff_T_Rec->a2_Uls_f32 = FilCoeffATmpCalc3_Uls_T_f32 * FilCoeffATmpCalc3_Uls_T_f32;
}


/**********************************************************************************************************************
 * Function:    GenFddIcCmd
 * Description: This routine converts driver velocity into a motor torque command using 
 *              the filter coefficients found in FilterCoefCalc routine.
 * Inputs:      ScadDrvrVel_MotRadPerSec_T_f32, *FilCoeff_T_Rec 
 * Outputs:     InertiaCmp_MotNwtMtr_T_f32 
 **********************************************************************************************************************/
static FUNC(float32, InertiaCmpVel_CODE) GenFddIcCmd(float32 ScadDrvrVel_MotRadPerSec_T_f32, 
                                                     CONSTP2CONST(FilCoeffRec, AUTOMATIC, AUTOMATIC) FilCoeff_T_Rec)
{
     VAR(float32, AUTOMATIC) InertiaCmp_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) InertiaCmpProd_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) PreAttnComp_MotNwtMtr_T_f32;   
     VAR(float32, AUTOMATIC) FDDAtten_Uls_T_f32; 
     VAR(float32, AUTOMATIC) GenCmdB0_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) GenCmdB1_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) GenCmdB2_MotNwtMtr_T_f32;  
     VAR(float32, AUTOMATIC) GenCmdAx_Uls_T_f32;
     VAR(float32, AUTOMATIC) AbsltScadDrvrVel_MotRadPerSec_T_f32; 
     VAR(uint16, AUTOMATIC) AbsltScadDrvrVel_MtrRadpS_T_u12p4;
     VAR(uint16, AUTOMATIC) FDDAtten_Uls_T_u1p15;

     AbsltScadDrvrVel_MotRadPerSec_T_f32 = Abslt_f32_f32(ScadDrvrVel_MotRadPerSec_T_f32);
     AbsltScadDrvrVel_MtrRadpS_T_u12p4 = FloatToFixd_u16_f32(AbsltScadDrvrVel_MotRadPerSec_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
     /* Attenuation */
	 FDDAtten_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelMotVelBasdOutpScagX, 
                                                           PrmInertiaCmpVelMotVelBasdOutpScagY,
                                                           (uint16)TblSize_m(PrmInertiaCmpVelMotVelBasdOutpScagX),
                                                           AbsltScadDrvrVel_MtrRadpS_T_u12p4);
     FDDAtten_Uls_T_f32 = FixdToFloat_f32_u16(FDDAtten_Uls_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);                                                         

     /* Update Display Variable */
     *Rte_Pim_dInertiaCmpVelMotVelBasdOutpScag() = FDDAtten_Uls_T_f32; 
    
     GenCmdB0_MotNwtMtr_T_f32 = FilCoeff_T_Rec->b0_Uls_f32 * (*Rte_Pim_ScaDrvrVelPrev2());
     GenCmdB1_MotNwtMtr_T_f32 = FilCoeff_T_Rec->b1_Uls_f32 * (*Rte_Pim_ScaDrvrVelPrev1());
     GenCmdB2_MotNwtMtr_T_f32 = FilCoeff_T_Rec->b2_Uls_f32 * ScadDrvrVel_MotRadPerSec_T_f32;

     GenCmdAx_Uls_T_f32 = ((*Rte_Pim_PreScagCmpCmdPrev1()) * FilCoeff_T_Rec->a1_Uls_f32) + ((*Rte_Pim_PreScagCmpCmdPrev2()) * FilCoeff_T_Rec->a0_Uls_f32);  

     PreAttnComp_MotNwtMtr_T_f32 = ((GenCmdB0_MotNwtMtr_T_f32 + GenCmdB1_MotNwtMtr_T_f32 + GenCmdB2_MotNwtMtr_T_f32) - GenCmdAx_Uls_T_f32) / FilCoeff_T_Rec->a2_Uls_f32;    
    
     /* Update previous values */
     (*Rte_Pim_ScaDrvrVelPrev2()) = (*Rte_Pim_ScaDrvrVelPrev1());
     (*Rte_Pim_ScaDrvrVelPrev1()) = ScadDrvrVel_MotRadPerSec_T_f32;
     (*Rte_Pim_PreScagCmpCmdPrev2()) = (*Rte_Pim_PreScagCmpCmdPrev1());
     (*Rte_Pim_PreScagCmpCmdPrev1()) = PreAttnComp_MotNwtMtr_T_f32;

    InertiaCmpProd_MotNwtMtr_T_f32  = PreAttnComp_MotNwtMtr_T_f32 * FDDAtten_Uls_T_f32;    
    InertiaCmp_MotNwtMtr_T_f32 = Lim_f32 (InertiaCmpProd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
     return(InertiaCmp_MotNwtMtr_T_f32);
}
/**********************************************************************************************************************
 * Function:    NotchCmp
 * Description: Inertia Comp Notch Compensation 
 * Inputs:      VehSpd_Kph_T_f32, InertiaCmp_MotNwtMtr_T_f32 
 * Outputs:     NotchCmp_MotNwtMtr_T_f32 
 **********************************************************************************************************************/
 static FUNC(float32, InertiaCmpVel_CODE) NotchCmp(float32 VehSpd_Kph_T_f32, 
                                                   float32 InertiaCmp_MotNwtMtr_T_f32,
                                                   float32 WhlImbRejctnAmp_MotNwtMtr_T_f32)
{
     VAR(float32, AUTOMATIC) InertiaCmpVelNotchBlnd_Uls_T_f32;
     VAR(float32, AUTOMATIC) InertiaCmpVelOutput_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) NotchCmp_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) WhlImbRejctnBlnd_MotNwtMtr_T_f32;
     VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
     VAR(uint16, AUTOMATIC) InertiaCmpVelNotchBlnd_Uls_T_u1p15;
     VAR(uint16, AUTOMATIC) WhlImbRejctnAmp_MotNwtMtr_T_u4p12;
     VAR(uint16, AUTOMATIC) WhlImbRejctnBlnd_MotNwtMtr_T_u1p15;

     VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
     /* FactorBlend Table */
	 InertiaCmpVelNotchBlnd_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln, 
                                                                         PrmInertiaCmpVelNotchBlndY, 
                                                                         (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                                         VehSpd_Kph_T_u9p7);
     InertiaCmpVelNotchBlnd_Uls_T_f32   = FixdToFloat_f32_u16(InertiaCmpVelNotchBlnd_Uls_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);

     WhlImbRejctnAmp_MotNwtMtr_T_u4p12 = FloatToFixd_u16_f32(WhlImbRejctnAmp_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
     WhlImbRejctnBlnd_MotNwtMtr_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmInertiaCmpVelModWhlImbRejctnBlndX,
                                                                         PrmInertiaCmpVelModWhlImbRejctnBlndY,
                                                                         (uint16)TblSize_m(PrmInertiaCmpVelModWhlImbRejctnBlndX),
                                                                         WhlImbRejctnAmp_MotNwtMtr_T_u4p12);
     WhlImbRejctnBlnd_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(WhlImbRejctnBlnd_MotNwtMtr_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);
     /* Update Display Variable */
     *Rte_Pim_dInertiaCmpVelNotchBlndVal() = InertiaCmpVelNotchBlnd_Uls_T_f32;  
    
     *Rte_Pim_dInertiaCmpVelNotchInpVal() = InertiaCmp_MotNwtMtr_T_f32;
     /* Inertia Comp Notch */
    if (*Rte_Pim_NotchFilChk() == FALSE)
	{
	    InertiaCmpVelOutput_MotNwtMtr_T_f32 = InertiaCmp_MotNwtMtr_T_f32;
	}
	else
	{
	    InertiaCmpVelOutput_MotNwtMtr_T_f32 = FilNotchFullUpdOutp_f32(InertiaCmp_MotNwtMtr_T_f32, Rte_Pim_TqSnsrVelFilNotchSt(), Rte_Prm_InertiaCmpVelNotchFilStruct_Rec());
	}	
	 /* Update Display Variable */
	 *Rte_Pim_dInertiaCmpVelNotchOutpVal() = InertiaCmpVelOutput_MotNwtMtr_T_f32;
     /* Calculate Notch Compensated */    
     NotchCmp_MotNwtMtr_T_f32 = (Blnd_f32(InertiaCmp_MotNwtMtr_T_f32, InertiaCmpVelOutput_MotNwtMtr_T_f32, InertiaCmpVelNotchBlnd_Uls_T_f32)) * WhlImbRejctnBlnd_MotNwtMtr_T_f32;
     
     return(NotchCmp_MotNwtMtr_T_f32);
}
/**********************************************************************************************************************
* Name          :   FilNotchFullUpdOutp_f32
* Description   :   Calculates notch filter output and state information for next sample.                 
* Inputs        :   Inp :- Input to the Notch Filter                    
*                   FilNotchStRecPtr :- Notch filter state   
*                   FilNotchGainRecPtr :- Gain constants structure
* Outputs       :   Notch filter output
* Usage Notes   :
 **********************************************************************************************************************/
static FUNC(float32, InertiaCmpVel_CODE) FilNotchFullUpdOutp_f32(float32 Inp, 
                                                                 P2VAR(FilNotchStRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchStRecPtr,
                                                                 P2CONST(FilNotchGainRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchGainRecPtr)
{
     VAR(float32, AUTOMATIC) FilOut;
     
     /* calculate filter output */
     FilOut = FilNotchStRecPtr->FilSt1 + (FilNotchGainRecPtr->FilGainB0 * Inp);
     
     /* update notch filter state for next sample */
     FilNotchStRecPtr->FilSt1 = (FilNotchStRecPtr->FilSt2 + (Inp * FilNotchGainRecPtr->FilGainB1)) -
                                (FilOut * FilNotchGainRecPtr->FilGainA1);
     FilNotchStRecPtr->FilSt2 = (FilNotchGainRecPtr->FilGainB2 * Inp) -
                                (FilOut * FilNotchGainRecPtr->FilGainA2);    
     return (FilOut);
}
/**********************************************************************************************************************
* Name          :   FilNotchInit
* Description   :   Initializes filter states               
* Inputs        :   Inp:- Input to the Notch Filter                 
*                   FilNotchGainRecPtr :- Notch filter Gain Constants   
* Outputs       :   FilNotchStRecPtr  :- Notch filter state
* Usage Notes   :
 **********************************************************************************************************************/  
static FUNC(void, InertiaCmpVel_CODE) FilNotchInit(float32 Inp, 
                                                   P2VAR(FilNotchStRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchStRecPtr, 
                                                   P2CONST(FilNotchGainRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchGainRecPtr)
{   
    FilNotchStRecPtr->FilSt1 = Inp * ((FilNotchGainRecPtr->FilGainB1 + FilNotchGainRecPtr->FilGainB2) -
                                      FilNotchGainRecPtr->FilGainA1 - FilNotchGainRecPtr->FilGainA2);  
                                      
    FilNotchStRecPtr->FilSt2 = Inp * (FilNotchGainRecPtr->FilGainB2 - FilNotchGainRecPtr->FilGainA2);       
}
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
