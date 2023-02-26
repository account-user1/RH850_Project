/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  StabyCmp.c
 *     SW-C Type:  StabyCmp
 *  Generated at:  Mon Jan 30 10:36:21 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <StabyCmp>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015-2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : StabyCmp.c
* Module Description: Implementation of Stability Compensation FDD SF029A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 4 %
* %derived_by       : nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                          SCR #
* -------   -------  --------  ---------------------------------------------------------------------------   ----------
* 07/21/15    1        SV      Initial Version                                                                EA4#1015 
* 03/11/16    2        SV      Corrected Notch filter initialization                                          EA4#2042
* 01/30/17    3        SR      Implemented updates per FDD v1.3.0                                             EA4#8044
* 02/24/17    4        SR      Fix for anomaly EA4#9985 - Implementation Issue only.                          EA4#10102
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  u2p14
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u8p8
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u9p7
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_StabyCmp.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "SysGlbPrm.h"
#include "FltInj.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
type for code readability and to allow use of "sizeof". */ 
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Two dimensional arrays are cast to a pointer to their base type for use 
in the bilinear interpolation functions. */ 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmStabyCmpNotchFilBilnrBlndVehSpd  (*(const Ary1D_u9p7_6 *)    Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D())
#define PrmStabyCmpAssiScaBlndX             (*(const Ary1D_u2p14_2 *)   Rte_Prm_StabyCmpAssiScaBlndX_Ary1D())
#define PrmStabyCmpAssiScaBlndY             (*(const Ary1D_u2p14_2 *)   Rte_Prm_StabyCmpAssiScaBlndY_Ary1D())
#define PrmStabyCmpNotchFilBlnd02Y          (*(const Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D())
#define PrmStabyCmpNotchFilBlnd04Y          (*(const Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D())
#define PrmStabyCmpNotchFilBlnd12Y          (*(const Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D())
#define PrmStabyCmpNotchFilBlnd34Y          (*(const Ary2D_u2p14_6_5 *) Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D())
#define PrmStabyCmpNotchFilBlnd12TqX        (*(const Ary2D_u8p8_6_5 *)  Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D())
#define PrmStabyCmpNotchFilBlnd34TqX        (*(const Ary2D_u8p8_6_5 *)  Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D())

#define CMPINPLIM_MOTNWTMTR_F32             10.275F

static FUNC(void, StabyCmp_CODE) FilNotchInit(float32 Inp, 
                                              P2VAR(FilNotchStRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchStRecPtr, 
                                              P2CONST(FilNotchGainRec1, AUTOMATIC, NotchFil_APPL_VAR) FilNotchGainRecPtr);

static FUNC(float32, StabyCmp_CODE) FilNotchFullUpdOutp_f32(float32 Inp, 
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
 * u2p14: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u2p14_2: Array with 2 element(s) of type u2p14
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u8p8_5: Array with 5 element(s) of type u8p8
 * Ary1D_u9p7_6: Array with 6 element(s) of type u9p7
 * Ary2D_u2p14_6_5: Array with 6 element(s) of type Ary1D_u2p14_5
 * Ary2D_u8p8_6_5: Array with 6 element(s) of type Ary1D_u8p8_5
 *
 * Record Types:
 * =============
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
 *   float32 *Rte_Pim_dStabyCmpAssiScaCmpBlnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil02Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil04Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil12Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil12Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil1Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil2Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil34Blnd(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil34Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil3Outp(void)
 *   float32 *Rte_Pim_dStabyCmpNotchFil4Outp(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch1Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch2Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch3Fil(void)
 *   FilNotchStRec1 *Rte_Pim_AssiNotch4Fil(void)
 *   FilLpRec1 *Rte_Pim_HwTqLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_StabyCmpHwTqLpFilFrq_Val(void)
 *   u2p14 *Rte_Prm_StabyCmpAssiScaBlndX_Ary1D(void)
 *   u2p14 *Rte_Prm_StabyCmpAssiScaBlndY_Ary1D(void)
 *   u9p7 *Rte_Prm_StabyCmpNotchFilBilnrBlndVehSpd_Ary1D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(void)
 *   u8p8 *Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(void)
 *   u8p8 *Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(void)
 *   u2p14 *Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil1Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil2Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil3Struct_Rec(void)
 *   FilNotchGainRec1 *Rte_Prm_StabyCmpNotchFil4Struct_Rec(void)
 *
 *********************************************************************************************************************/


#define StabyCmp_START_SEC_CODE
#include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StabyCmpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, StabyCmp_CODE) StabyCmpInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StabyCmpInit1
 *********************************************************************************************************************/

    FilLpInit(0.0F,Rte_Prm_StabyCmpHwTqLpFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_HwTqLpFil());
    FilNotchInit(0.0F, Rte_Pim_AssiNotch1Fil(),Rte_Prm_StabyCmpNotchFil1Struct_Rec());
    FilNotchInit(0.0F, Rte_Pim_AssiNotch2Fil(),Rte_Prm_StabyCmpNotchFil2Struct_Rec());
    FilNotchInit(0.0F, Rte_Pim_AssiNotch3Fil(),Rte_Prm_StabyCmpNotchFil3Struct_Rec());
    FilNotchInit(0.0F, Rte_Pim_AssiNotch4Fil(),Rte_Prm_StabyCmpNotchFil4Struct_Rec());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StabyCmpPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBasSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiCmdSum_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiPahLimrActv_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, StabyCmp_CODE) StabyCmpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StabyCmpPer1
 *********************************************************************************************************************/

    VAR(float32, AUTOMATIC) AssiCmdBasSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) AssiCmdSum_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) AssiPahLimrActv_Uls_T_f32;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    
    VAR(float32, AUTOMATIC) HwTqFild_HwNwtMtr_T_f32;
    
    VAR(uint16 , AUTOMATIC) SumExtFac_Uls_T_u2p14;
    VAR(uint16 , AUTOMATIC) ADDFBlend_Uls_T_u2p14;
    VAR(float32, AUTOMATIC) ADDFBlend_Uls_T_f32;
    VAR(uint16 , AUTOMATIC) VehSpd_Kph_T_u9p7;
    VAR(uint16 , AUTOMATIC) HwTqFild_HwNwtMtr_T_u8p8;
    VAR(uint16 , AUTOMATIC) Comp12Blnd_Uls_T_u2p14;
    VAR(float32, AUTOMATIC) Comp12Blnd_Uls_T_f32;
    VAR(uint16 , AUTOMATIC) Comp02Blnd_Uls_T_u2p14;
    VAR(float32, AUTOMATIC) Comp02Blnd_Uls_T_f32;
    VAR(float32, AUTOMATIC) AssiCmdSumFild1_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) AssiCmdSumFild2_MotNwtMtr_T_f32;
    VAR(uint16 , AUTOMATIC) Comp34Blnd_Uls_T_u2p14;
    VAR(float32, AUTOMATIC) Comp34Blnd_Uls_T_f32;
    VAR(uint16 , AUTOMATIC) Comp04Blnd_Uls_T_u2p14;
    VAR(float32, AUTOMATIC) Comp04Blnd_Uls_T_f32;
    VAR(float32, AUTOMATIC) AssiCmdSumFild3_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) AssiCmdSumFild4_MotNwtMtr_T_f32;    
    VAR(float32, AUTOMATIC) StCmp02Out_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StCmp12Out_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StCmp04Out_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StCmp34Out_MotNwtMtr_T_f32;
    
    VAR(float32, AUTOMATIC) AssiCmd_MotNwtMtr_T_f32;
    
    (void)Rte_Read_AssiCmdBasSca_Val(&AssiCmdBasSca_Uls_T_f32);
    (void)Rte_Read_AssiCmdSum_Val(&AssiCmdSum_MotNwtMtr_T_f32);
    (void)Rte_Read_AssiPahLimrActv_Val(&AssiPahLimrActv_Uls_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
    
    AssiCmdSum_MotNwtMtr_T_f32 = Lim_f32(AssiCmdSum_MotNwtMtr_T_f32,-CMPINPLIM_MOTNWTMTR_F32,CMPINPLIM_MOTNWTMTR_F32);
    
    HwTqFild_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32),Rte_Pim_HwTqLpFil());
    
    SumExtFac_Uls_T_u2p14 = FloatToFixd_u16_f32((AssiCmdBasSca_Uls_T_f32 + AssiPahLimrActv_Uls_T_f32),NXTRFIXDPT_FLOATTOP14_ULS_F32);
    
    ADDFBlend_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(PrmStabyCmpAssiScaBlndX,
                                                           PrmStabyCmpAssiScaBlndY,
                                                           (uint16)TblSize_m(PrmStabyCmpAssiScaBlndX),
                                                            SumExtFac_Uls_T_u2p14);
    ADDFBlend_Uls_T_f32 = FixdToFloat_f32_u16(ADDFBlend_Uls_T_u2p14,NXTRFIXDPT_P14TOFLOAT_ULS_F32);
    *Rte_Pim_dStabyCmpAssiScaCmpBlnd() = ADDFBlend_Uls_T_f32;   
    
    /******* Start of 'Compensator Set 1/2' *******/
    /* Compensator 1/2 Blend */
    VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP7_ULS_F32);
    HwTqFild_HwNwtMtr_T_u8p8 = FloatToFixd_u16_f32(HwTqFild_HwNwtMtr_T_f32,NXTRFIXDPT_FLOATTOP8_ULS_F32);
    Comp12Blnd_Uls_T_u2p14 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                     HwTqFild_HwNwtMtr_T_u8p8,
                                                                     PrmStabyCmpNotchFilBilnrBlndVehSpd,
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBilnrBlndVehSpd),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd12Y_Ary2D(),
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBlnd12TqX[0]));
    Comp12Blnd_Uls_T_f32 = FixdToFloat_f32_u16(Comp12Blnd_Uls_T_u2p14,NXTRFIXDPT_P14TOFLOAT_ULS_F32);
    *Rte_Pim_dStabyCmpNotchFil12Blnd() = Comp12Blnd_Uls_T_f32;
    
    /* Notch filter 1 */
    AssiCmdSumFild1_MotNwtMtr_T_f32 = FilNotchFullUpdOutp_f32(AssiCmdSum_MotNwtMtr_T_f32,Rte_Pim_AssiNotch1Fil(),Rte_Prm_StabyCmpNotchFil1Struct_Rec());
    *Rte_Pim_dStabyCmpNotchFil1Outp() = AssiCmdSumFild1_MotNwtMtr_T_f32;    
                                                                              
    /* Compensator Set 0/2 */
    Comp02Blnd_Uls_T_u2p14 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                     HwTqFild_HwNwtMtr_T_u8p8,
                                                                     PrmStabyCmpNotchFilBilnrBlndVehSpd,
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBilnrBlndVehSpd),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd12TqX_Ary2D(),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd02Y_Ary2D(),
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBlnd12TqX[0]));
    Comp02Blnd_Uls_T_f32 = FixdToFloat_f32_u16(Comp02Blnd_Uls_T_u2p14,NXTRFIXDPT_P14TOFLOAT_ULS_F32);
    *Rte_Pim_dStabyCmpNotchFil02Blnd() = Comp02Blnd_Uls_T_f32; 
    
    /* Notch filter 2 */
    AssiCmdSumFild2_MotNwtMtr_T_f32 = FilNotchFullUpdOutp_f32(AssiCmdSum_MotNwtMtr_T_f32,Rte_Pim_AssiNotch2Fil(),Rte_Prm_StabyCmpNotchFil2Struct_Rec());
    *Rte_Pim_dStabyCmpNotchFil2Outp() = AssiCmdSumFild2_MotNwtMtr_T_f32;    
    
    StCmp02Out_MotNwtMtr_T_f32 = Blnd_f32(AssiCmdSum_MotNwtMtr_T_f32,
                                          AssiCmdSumFild2_MotNwtMtr_T_f32,
                                          Comp02Blnd_Uls_T_f32);
    
    StCmp12Out_MotNwtMtr_T_f32 = Blnd_f32(AssiCmdSumFild1_MotNwtMtr_T_f32,
                                          StCmp02Out_MotNwtMtr_T_f32,
                                          Comp12Blnd_Uls_T_f32);
                                          
    *Rte_Pim_dStabyCmpNotchFil12Outp() = StCmp12Out_MotNwtMtr_T_f32;
    
    /******* End of 'Compensator Set 1/2' *******/
    
    /******* Start of 'Compensator Set 3/4' *******/    
    /* Compensator 3/4 Blend */
    Comp34Blnd_Uls_T_u2p14 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                     HwTqFild_HwNwtMtr_T_u8p8,
                                                                     PrmStabyCmpNotchFilBilnrBlndVehSpd,
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBilnrBlndVehSpd),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd34Y_Ary2D(),
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBlnd34TqX[0]));
    Comp34Blnd_Uls_T_f32 = FixdToFloat_f32_u16(Comp34Blnd_Uls_T_u2p14,NXTRFIXDPT_P14TOFLOAT_ULS_F32);
    *Rte_Pim_dStabyCmpNotchFil34Blnd() = Comp34Blnd_Uls_T_f32;
    
    /* Notch filter 3 */
    AssiCmdSumFild3_MotNwtMtr_T_f32 = FilNotchFullUpdOutp_f32(AssiCmdSum_MotNwtMtr_T_f32,Rte_Pim_AssiNotch3Fil(),Rte_Prm_StabyCmpNotchFil3Struct_Rec());
    *Rte_Pim_dStabyCmpNotchFil3Outp() = AssiCmdSumFild3_MotNwtMtr_T_f32;    
                                                                              
    /* Compensator Set 0/4 */
    Comp04Blnd_Uls_T_u2p14 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                     HwTqFild_HwNwtMtr_T_u8p8,
                                                                     PrmStabyCmpNotchFilBilnrBlndVehSpd,
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBilnrBlndVehSpd),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd34TqX_Ary2D(),
                                                                     Rte_Prm_StabyCmpNotchFilBlnd04Y_Ary2D(),
                                                                     (uint16)TblSize_m(PrmStabyCmpNotchFilBlnd34TqX[0]));
    Comp04Blnd_Uls_T_f32 = FixdToFloat_f32_u16(Comp04Blnd_Uls_T_u2p14,NXTRFIXDPT_P14TOFLOAT_ULS_F32);
    *Rte_Pim_dStabyCmpNotchFil04Blnd() = Comp04Blnd_Uls_T_f32; 
    
    /* Notch filter 4 */
    AssiCmdSumFild4_MotNwtMtr_T_f32 = FilNotchFullUpdOutp_f32(AssiCmdSum_MotNwtMtr_T_f32,Rte_Pim_AssiNotch4Fil(),Rte_Prm_StabyCmpNotchFil4Struct_Rec());
    *Rte_Pim_dStabyCmpNotchFil4Outp() = AssiCmdSumFild4_MotNwtMtr_T_f32;    
    
    StCmp04Out_MotNwtMtr_T_f32 = Blnd_f32(AssiCmdSum_MotNwtMtr_T_f32,
                                          AssiCmdSumFild4_MotNwtMtr_T_f32,
                                          Comp04Blnd_Uls_T_f32);
    
    StCmp34Out_MotNwtMtr_T_f32 = Blnd_f32(AssiCmdSumFild3_MotNwtMtr_T_f32,
                                          StCmp04Out_MotNwtMtr_T_f32,
                                          Comp34Blnd_Uls_T_f32);
                                          
    *Rte_Pim_dStabyCmpNotchFil34Outp() = StCmp34Out_MotNwtMtr_T_f32;
    
    /******* End of 'Compensator Set 3/4' *******/
    
    AssiCmd_MotNwtMtr_T_f32 = Blnd_f32(StCmp12Out_MotNwtMtr_T_f32,
                                       StCmp34Out_MotNwtMtr_T_f32,
                                       ADDFBlend_Uls_T_f32);
                                       
    AssiCmd_MotNwtMtr_T_f32 = Lim_f32(AssiCmd_MotNwtMtr_T_f32,SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);                                
    
    #if (STD_ON == FLTINJENA)    
    (void)Rte_Call_FltInj_f32_Oper(&AssiCmd_MotNwtMtr_T_f32,FLTINJ_STABYCMP_ASSICMD);          
    #endif
    
    (void)Rte_Write_AssiCmd_Val(AssiCmd_MotNwtMtr_T_f32);
                                          
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define StabyCmp_STOP_SEC_CODE
#include "StabyCmp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   FilNotchFullUpdOutp_f32
* Description   :   Calculates notch filter output and state information for next sample.                 
* Inputs        :   Inp :- Input to the Notch Filter                    
*                   FilNotchStRecPtr :- Notch filter state   
*                   FilNotchGainRecPtr :- Gain constants structure
* Outputs       :   Notch filter output
* Usage Notes   :
*****************************************************************************/
static FUNC(float32, FILTERS_CODE) FilNotchFullUpdOutp_f32(float32 Inp, 
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
  
/*******************************************************************************
* Name          :   FilNotchInit
* Description   :   Initializes filter states               
* Inputs        :   Inp:- Input to the Notch Filter                 
*                   FilNotchGainRecPtr :- Notch filter Gain Constants   
* Outputs       :   FilNotchStRecPtr  :- Notch filter state
* Usage Notes   :
*****************************************************************************/
static FUNC(void, FILTERS_CODE) FilNotchInit(float32 Inp, 
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
