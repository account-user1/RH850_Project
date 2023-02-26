/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Dampg.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF003A_Dampg_Impl/tools/Component.dpa
 *     SW-C Type:  Dampg
 *  Generated at:  Mon May 22 10:23:31 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Dampg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : Dampg.c
* Module Description: Implementation of Damping FDD SF003A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 7 %
* %derived_by       : nz3541 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/01/15  1        SV        Initial Version                                                                 EA4#763
* 07/13/15  2        SV        Used correct bilinear interpolation function to be inline with FDD              EA4#763  
* 08/26/15  3        SV       'FltInj2' port is used for 'FltInj_f32' operation (DaVinci change)              EA4#1407 
* 11/05/15  4        SV        Updated for Anomaly 'EA4#2257'									              EA4#2389
* 10/28/16  5        ML		   Updated for Design Vers 1.3.0												  EA4#8101
* 02/27/17  6		 ML		   Updated for Design Vers 1.4.0												  EA4#9697	
* 05/19/17  7        SPP       Removed application data types                                                EA4#11359				                                                                
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
 * s8p7
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * u12p4
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
 * u4p12
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u5p11
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u8p8
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

#include "Rte_Dampg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


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

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read and Rte_Write, */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmDampgTScaX               (*(const Ary1D_s8p7_14 *) Rte_Prm_DampgTScaX_Ary1D())
#define PrmDampgTScaY               (*(const Ary1D_u4p12_14 *) Rte_Prm_DampgTScaY_Ary1D())
#define PrmDampgHwTqX               (*(const Ary1D_u8p8_2 *) Rte_Prm_DampgHwTqX_Ary1D())
#define PrmDampgHwTqY               (*(const Ary1D_u1p15_2 *) Rte_Prm_DampgHwTqY_Ary1D())
#define PrmDampgMotVelX             (*(const Ary2D_u12p4_12_13 *) Rte_Prm_DampgMotVelX_Ary2D())
#define PrmDampgMotVelY             (*(const Ary2D_u5p11_12_13 *) Rte_Prm_DampgMotVelY_Ary2D())
#define PrmSysGlbPrmVehSpdBilnrSeln (*(const Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D())
#define PrmDampgHydCoeff1ScaY       (*(const Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff1ScaY_Ary1D())
#define PrmDampgHydCoeff2ScaY       (*(const Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff2ScaY_Ary1D())
#define PrmDampgHydCoeff3ScaY       (*(const Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff3ScaY_Ary1D())
#define PrmDampgHydCoeff4ScaY       (*(const Ary1D_u4p12_12 *) Rte_Prm_DampgHydCoeff4ScaY_Ary1D())
#define PrmDampgHydAssiLim          (*(const Ary1D_u4p12_12 *) Rte_Prm_DampgHydAssiLim_Ary1D())

 

static FUNC(float32, Dampg_APPL_CODE) MotVelDampgCmd(float32 MotVelCrf_MotRadPerSec_T_f32,
                                                     float32 HwTq_HwNwtMtr_T_f32,
                                                     float32 TSca_Uls_T_f32,
                                                     float32 VehSpd_Kph_T_f32); 
                                                     
static FUNC(float32, Dampg_APPL_CODE) HydPwrSteerDampgCmd(float32 VehSpd_Kph_T_f32,
                                                          float32 TSca_Uls_T_f32,
                                                          float32 AssiCmdBas_MotNwtMtr_T_f32,
                                                          float32 MotVelCrf_MotRadPerSec_T_f32);                                                     
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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s8p7: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u12p4: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s8p7_14: Array with 14 element(s) of type s8p7
 * Ary1D_u12p4_13: Array with 13 element(s) of type u12p4
 * Ary1D_u1p15_2: Array with 2 element(s) of type u1p15
 * Ary1D_u4p12_12: Array with 12 element(s) of type u4p12
 * Ary1D_u4p12_14: Array with 14 element(s) of type u4p12
 * Ary1D_u5p11_13: Array with 13 element(s) of type u5p11
 * Ary1D_u8p8_2: Array with 2 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_u12p4_12_13: Array with 12 element(s) of type Ary1D_u12p4_13
 * Ary2D_u5p11_12_13: Array with 12 element(s) of type Ary1D_u5p11_13
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevHwTqBacklshOutp(void)
 *   float32 *Rte_Pim_PrevMotVelBacklshOutp(void)
 *   float32 *Rte_Pim_dDampgAssiMechTSca(void)
 *   float32 *Rte_Pim_dDampgCoeff1Term(void)
 *   float32 *Rte_Pim_dDampgCoeff2Term(void)
 *   float32 *Rte_Pim_dDampgCoeff3Term(void)
 *   float32 *Rte_Pim_dDampgCoeff4Term(void)
 *   float32 *Rte_Pim_dDampgHwTqSca(void)
 *   float32 *Rte_Pim_dDampgMotVelDampgCmd(void)
 *   float32 *Rte_Pim_dDampgQuadHwTqBacklsh(void)
 *   float32 *Rte_Pim_dDampgQuadMotVelBacklsh(void)
 *   FilLpRec1 *Rte_Pim_MotVelDampgLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgHwTqLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgMotVelLpFil(void)
 *   FilLpRec1 *Rte_Pim_QuadDampgScaLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DampgHydBasCoeff1_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff2_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff3_Val(void)
 *   float32 Rte_Prm_DampgHydBasCoeff4_Val(void)
 *   float32 Rte_Prm_DampgHydOutpLim_Val(void)
 *   float32 Rte_Prm_DampgMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuad13Mplr_Val(void)
 *   float32 Rte_Prm_DampgQuad24Mplr_Val(void)
 *   float32 Rte_Prm_DampgQuadHwTqBacklsh_Val(void)
 *   float32 Rte_Prm_DampgQuadHwTqLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuadMotVelBacklsh_Val(void)
 *   float32 Rte_Prm_DampgQuadMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_DampgQuadScaLpFilFrq_Val(void)
 *   u8p8 *Rte_Prm_DampgHwTqX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_2
 *   u1p15 *Rte_Prm_DampgHwTqY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_2
 *   u4p12 *Rte_Prm_DampgHydAssiLim_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff1ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff2ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff3ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u4p12 *Rte_Prm_DampgHydCoeff4ScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_12
 *   u12p4 *Rte_Prm_DampgMotVelX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_12_13
 *   u5p11 *Rte_Prm_DampgMotVelY_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_13
 *   s8p7 *Rte_Prm_DampgTScaX_Ary1D(void)
 *     Returnvalue: s8p7* is of type Ary1D_s8p7_14
 *   u4p12 *Rte_Prm_DampgTScaY_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_14
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define Dampg_START_SEC_CODE
#include "Dampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Dampg_CODE) DampgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgInit1
 *********************************************************************************************************************/
    FilLpInit(0.0F,Rte_Prm_DampgQuadHwTqLpFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_QuadDampgHwTqLpFil());
    FilLpInit(0.0F,Rte_Prm_DampgQuadScaLpFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_QuadDampgScaLpFil()); 
    FilLpInit(0.0F,Rte_Prm_DampgQuadMotVelLpFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_QuadDampgMotVelLpFil()); 
    FilLpInit(0.0F,Rte_Prm_DampgMotVelLpFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_MotVelDampgLpFil()); 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgPer1
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
 *   Std_ReturnType Rte_Read_DampgCmdBasDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DampgCmdOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DampgCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DampgCmdBas_Val(float32 data)
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
 * Symbol: DampgPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Dampg_CODE) DampgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgPer1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) AssiCmdBas_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) AssiMechT_DegCgrd_T_f32;
    VAR(boolean, AUTOMATIC) DampgCmdBasDi_Cnt_T_lgc;            
    VAR(float32, AUTOMATIC) DampgCmdOvrl_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) DampgCmdSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    
    VAR(sint16, AUTOMATIC) AssiMechT_DegCgrd_T_s8p7;
    VAR(uint16, AUTOMATIC) TSca_Uls_T_u4p12;
    VAR(float32, AUTOMATIC) TSca_Uls_T_f32;
	VAR(uint16, AUTOMATIC) HwTq_HwNwtMtr_T_u8p8;
    VAR(uint16, AUTOMATIC) HwTqSca_Uls_T_u1p15;
    VAR(float32, AUTOMATIC) HwTqSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) MotVelDampg_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) HydDampg_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) DampgCmdScad_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) DampgCmdNotLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) DampgCmdNotLimFild_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) DampgCmdFild_MotNwtMtr_T_f32;
    
    (void)Rte_Read_AssiCmdBas_Val(&AssiCmdBas_MotNwtMtr_T_f32);
    (void)Rte_Read_AssiMechT_Val(&AssiMechT_DegCgrd_T_f32);
    (void)Rte_Read_DampgCmdBasDi_Logl(&DampgCmdBasDi_Cnt_T_lgc);
    (void)Rte_Read_DampgCmdOvrl_Val(&DampgCmdOvrl_MotNwtMtr_T_f32);
    (void)Rte_Read_DampgCmdSca_Val(&DampgCmdSca_Uls_T_f32);
    (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
    (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
 
    AssiMechT_DegCgrd_T_s8p7 = FloatToFixd_s16_f32(AssiMechT_DegCgrd_T_f32,NXTRFIXDPT_FLOATTOP7_ULS_F32);
    TSca_Uls_T_u4p12 = LnrIntrpn_u16_s16VariXu16VariY(PrmDampgTScaX,
                                                      PrmDampgTScaY,
                                                      (uint16)TblSize_m(PrmDampgTScaX),
                                                      AssiMechT_DegCgrd_T_s8p7);
    TSca_Uls_T_f32 = FixdToFloat_f32_u16(TSca_Uls_T_u4p12,NXTRFIXDPT_P12TOFLOAT_ULS_F32);
    *Rte_Pim_dDampgAssiMechTSca() = TSca_Uls_T_f32;     
/* Overflow checked and not possible (ver 7) */
	HwTq_HwNwtMtr_T_u8p8 = FloatToFixd_u16_f32(Abslt_f32_f32(HwTq_HwNwtMtr_T_f32),NXTRFIXDPT_FLOATTOP8_ULS_F32);
    HwTqSca_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmDampgHwTqX,
                                                         PrmDampgHwTqY,
                                                         (uint16)TblSize_m(PrmDampgHwTqX),
                                                         HwTq_HwNwtMtr_T_u8p8);
    HwTqSca_Uls_T_f32 = FixdToFloat_f32_u16(HwTqSca_Uls_T_u1p15,NXTRFIXDPT_P15TOFLOAT_ULS_F32);
    *Rte_Pim_dDampgHwTqSca() = HwTqSca_Uls_T_f32;
	
    /******** Start of 'MotVelDampgCmd' ********/
    MotVelDampg_MotNwtMtr_T_f32 = MotVelDampgCmd(MotVelCrf_MotRadPerSec_T_f32,
                                                 HwTq_HwNwtMtr_T_f32,
                                                 TSca_Uls_T_f32,
                                                 VehSpd_Kph_T_f32);
    /******** End of 'MotVelDampgCmd' ********/
    
    /******** Start of 'HydPwrSteerDampgCmd' ********/
    HydDampg_MotNwtMtr_T_f32 = HydPwrSteerDampgCmd(VehSpd_Kph_T_f32,
                                                   TSca_Uls_T_f32,
                                                   AssiCmdBas_MotNwtMtr_T_f32,
                                                   MotVelCrf_MotRadPerSec_T_f32);
    /******** End of 'HydPwrSteerDampgCmd' ********/
	
    /* Overflow checked and not possible (ver 7) */	
    DampgCmdScad_MotNwtMtr_T_f32 = HwTqSca_Uls_T_f32 * (MotVelDampg_MotNwtMtr_T_f32 + HydDampg_MotNwtMtr_T_f32) * DampgCmdSca_Uls_T_f32;
    
    /******** Start of 'CmdDiChk' ********/
    if(DampgCmdBasDi_Cnt_T_lgc == TRUE)
    {
        DampgCmdNotLim_MotNwtMtr_T_f32 = 0.0F;
    }
    else
    {   
        /* Start of 'DmpgCmdChk' */
        DampgCmdNotLim_MotNwtMtr_T_f32 = (float32)Sign_s08_f32(MotVelCrf_MotRadPerSec_T_f32) * 
                                        (Max_f32(Abslt_f32_f32(DampgCmdScad_MotNwtMtr_T_f32),Abslt_f32_f32(DampgCmdOvrl_MotNwtMtr_T_f32)));
        /* End of 'DmpgCmdChk' */
    }
    /******** End of 'CmdDiChk' ********/
    /* Overflow checked and not possible (ver 7) */
    DampgCmdNotLimFild_MotNwtMtr_T_f32 = FilLpUpdOutp_f32(DampgCmdNotLim_MotNwtMtr_T_f32,Rte_Pim_MotVelDampgLpFil());
    DampgCmdFild_MotNwtMtr_T_f32 = Lim_f32(DampgCmdNotLimFild_MotNwtMtr_T_f32,SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    
    #if (STD_ON == FLTINJENA)    
    (void) Rte_Call_FltInj_f32_Oper(&DampgCmdFild_MotNwtMtr_T_f32,FLTINJ_DAMPG_DAMPGCMDBAS);          
    #endif
    
    (void) Rte_Write_DampgCmdBas_Val(DampgCmdFild_MotNwtMtr_T_f32); 
     
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Dampg_STOP_SEC_CODE
#include "Dampg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /*****************************************************************************
* Name:   MotVelDampgCmd
* Description: 'MotVelDampgCmd' block implementation.  
* Inputs:   MotVelCrf_MotRadPerSec_T_f32   
*           HwTq_HwNwtMtr_T_f32 
*           TSca_Uls_T_f32 
*           VehSpd_Kph_T_f32  
* Outputs:  MotVelDampg_MotNwtMtr_T_f32
*****************************************************************************/ 
static FUNC(float32, Dampg_APPL_CODE) MotVelDampgCmd(float32 MotVelCrf_MotRadPerSec_T_f32,
                                                     float32 HwTq_HwNwtMtr_T_f32,
                                                     float32 TSca_Uls_T_f32,
                                                     float32 VehSpd_Kph_T_f32)
{
    VAR(float32, AUTOMATIC) HwTqFild_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelCrfFild_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) HwTqBacklshOutp_HwNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelBacklshOutp_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) QuadDampgScaFilInp_Uls_T_f32;
    VAR(float32, AUTOMATIC) QuadDampgSca_Uls_T_f32;
        
    VAR(uint16, AUTOMATIC) MotVelCrf_MotRadPerSec_T_u12p4;
    VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
    VAR(uint16, AUTOMATIC) MotVelDampgCmd_MotNwtMtr_T_u5p11;
    VAR(float32, AUTOMATIC) MotVelDampgCmd_MotNwtMtr_T_f32;
    
    VAR(float32, AUTOMATIC) ActvDampg_MotNwtMtr_T_f32;
    
    /******** Start of 'Enhd_Quad_Dampg' ********/
    /* Overflow checked and not possible (ver 7) */
    HwTqFild_HwNwtMtr_T_f32 = FilLpUpdOutp_f32(HwTq_HwNwtMtr_T_f32,Rte_Pim_QuadDampgHwTqLpFil());
        
    /* Start of 'HwTqBacklsh' */
    
    if(HwTqFild_HwNwtMtr_T_f32 > ((*Rte_Pim_PrevHwTqBacklshOutp()) + (Rte_Prm_DampgQuadHwTqBacklsh_Val())))
    {
        HwTqBacklshOutp_HwNwtMtr_T_f32 = HwTqFild_HwNwtMtr_T_f32 - (Rte_Prm_DampgQuadHwTqBacklsh_Val());
    }
    else if(HwTqFild_HwNwtMtr_T_f32 < ((*Rte_Pim_PrevHwTqBacklshOutp()) - (Rte_Prm_DampgQuadHwTqBacklsh_Val())))
    {
        HwTqBacklshOutp_HwNwtMtr_T_f32 = HwTqFild_HwNwtMtr_T_f32 + (Rte_Prm_DampgQuadHwTqBacklsh_Val());
    }   
    else
    {
        HwTqBacklshOutp_HwNwtMtr_T_f32 = *Rte_Pim_PrevHwTqBacklshOutp();
    }
	/* Overflow checked and not possible (ver 7) */
    *Rte_Pim_PrevHwTqBacklshOutp() = HwTqBacklshOutp_HwNwtMtr_T_f32;
    
    /* End of 'HwTqBacklsh' */
    
    MotVelCrfFild_MotRadPerSec_T_f32 = FilLpUpdOutp_f32(MotVelCrf_MotRadPerSec_T_f32,Rte_Pim_QuadDampgMotVelLpFil());
    
    /* Start of 'MotVelBacklsh' */
    
    if(MotVelCrfFild_MotRadPerSec_T_f32 > ((*Rte_Pim_PrevMotVelBacklshOutp()) + (Rte_Prm_DampgQuadMotVelBacklsh_Val())))
    {
        MotVelBacklshOutp_MotRadPerSec_T_f32 = MotVelCrfFild_MotRadPerSec_T_f32 - (Rte_Prm_DampgQuadMotVelBacklsh_Val());
    }
    else if(MotVelCrfFild_MotRadPerSec_T_f32 < ((*Rte_Pim_PrevMotVelBacklshOutp()) - (Rte_Prm_DampgQuadMotVelBacklsh_Val())))
    {
        MotVelBacklshOutp_MotRadPerSec_T_f32 = MotVelCrfFild_MotRadPerSec_T_f32 + (Rte_Prm_DampgQuadMotVelBacklsh_Val());
    }   
    else
    {
        MotVelBacklshOutp_MotRadPerSec_T_f32 = *Rte_Pim_PrevMotVelBacklshOutp();
    }
    *Rte_Pim_PrevMotVelBacklshOutp() = MotVelBacklshOutp_MotRadPerSec_T_f32;
    
    /* End of 'MotVelBacklsh' */
    
    *Rte_Pim_dDampgQuadHwTqBacklsh() = HwTqBacklshOutp_HwNwtMtr_T_f32;
    *Rte_Pim_dDampgQuadMotVelBacklsh() = MotVelBacklshOutp_MotRadPerSec_T_f32;
	
    /* Overflow checked and not possible (ver 7) */
    if((HwTqBacklshOutp_HwNwtMtr_T_f32 * MotVelBacklshOutp_MotRadPerSec_T_f32) >= 0.0F)
    {
		/* Overflow checked and not possible (ver 7) */
        QuadDampgScaFilInp_Uls_T_f32 = Rte_Prm_DampgQuad13Mplr_Val();
    }
    else
    {
        QuadDampgScaFilInp_Uls_T_f32 = Rte_Prm_DampgQuad24Mplr_Val();
    }
    QuadDampgSca_Uls_T_f32 = FilLpUpdOutp_f32(QuadDampgScaFilInp_Uls_T_f32,Rte_Pim_QuadDampgScaLpFil());
    
    /******** End of 'Enhd_Quad_Dampg' ********/  
	
    /******** Start of 'Dampg_Basd_On_Mot_Vel' ********/
    /* Overflow checked and not possible (ver 7) */
    MotVelCrf_MotRadPerSec_T_u12p4 = FloatToFixd_u16_f32(Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32),NXTRFIXDPT_FLOATTOP4_ULS_F32);
    VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP7_ULS_F32);
    
    MotVelDampgCmd_MotNwtMtr_T_u5p11 = BilnrIntrpnWithRound_u16_u16MplXu16MplY( VehSpd_Kph_T_u9p7,
                                                                                MotVelCrf_MotRadPerSec_T_u12p4, 
                                                                                PrmSysGlbPrmVehSpdBilnrSeln,
                                                                                (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                                                Rte_Prm_DampgMotVelX_Ary2D(),
                                                                                Rte_Prm_DampgMotVelY_Ary2D(), 
                                                                                (uint16)TblSize_m(PrmDampgMotVelX[0]));
                                                                              
    MotVelDampgCmd_MotNwtMtr_T_f32 = (float32)Sign_s08_f32(MotVelCrf_MotRadPerSec_T_f32) * 
                                     (FixdToFloat_f32_u16(MotVelDampgCmd_MotNwtMtr_T_u5p11,NXTRFIXDPT_P11TOFLOAT_ULS_F32));
    *Rte_Pim_dDampgMotVelDampgCmd() = MotVelDampgCmd_MotNwtMtr_T_f32;
    
    /******** End of 'Dampg_Basd_On_Mot_Vel' ********/
	
    /* Overflow checked and not possible (ver 7) */
    ActvDampg_MotNwtMtr_T_f32 = QuadDampgSca_Uls_T_f32 * TSca_Uls_T_f32 * MotVelDampgCmd_MotNwtMtr_T_f32;
    
    return(ActvDampg_MotNwtMtr_T_f32);
    
}

 /*****************************************************************************
* Name:   HydPwrSteerDampgCmd
* Description: 'HydPwrSteerDampgCmd' block implementation.  
* Inputs:   VehSpd_Kph_T_f32   
*           TSca_Uls_T_f32 
*           AssiCmdBas_MotNwtMtr_T_f32 
*           MotVelCrf_MotRadPerSec_T_f32  
* Outputs:  HydDampg_MotNwtMtr_T_f32
*****************************************************************************/ 
static FUNC(float32, Dampg_APPL_CODE) HydPwrSteerDampgCmd(float32 VehSpd_Kph_T_f32,
                                                          float32 TSca_Uls_T_f32,
                                                          float32 AssiCmdBas_MotNwtMtr_T_f32,
                                                          float32 MotVelCrf_MotRadPerSec_T_f32)
{
    VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
    VAR(uint16, AUTOMATIC) DampgCoeff1_Uls_T_u4p12;
    VAR(float32, AUTOMATIC) DampgCoeff1_Uls_T_f32;
    VAR(uint16, AUTOMATIC) DampgCoeff2_Uls_T_u4p12;
    VAR(float32, AUTOMATIC) DampgCoeff2_Uls_T_f32;
    VAR(uint16, AUTOMATIC) DampgCoeff3_Uls_T_u4p12;
    VAR(float32, AUTOMATIC) DampgCoeff3_Uls_T_f32;
    VAR(uint16, AUTOMATIC) DampgCoeff4_Uls_T_u4p12;
    VAR(float32, AUTOMATIC) DampgCoeff4_Uls_T_f32;
    
    VAR(uint16, AUTOMATIC) HydAssiLim_MotNwtMtr_T_u4p12;
    VAR(float32, AUTOMATIC) HydAssiLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) LimdAssi_MotNwtMtr_T_f32;
    
    VAR(float32, AUTOMATIC) HydDampgTrmA_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) HydDampgTrmB_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) HydDampg_MotNwtMtr_T_f32;
    
    /**** Start of 'Step 1:  Apply scale factors to HydPwrSteer-based C1, C2, C3, C4 constants' *****/
    
    VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32,NXTRFIXDPT_FLOATTOP7_ULS_F32);
    
    /* Start of 'Coeff1' */
    DampgCoeff1_Uls_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln,
                                                             PrmDampgHydCoeff1ScaY,
                                                             (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                             VehSpd_Kph_T_u9p7);
    DampgCoeff1_Uls_T_f32 = ((Rte_Prm_DampgHydBasCoeff1_Val()) *
                            (FixdToFloat_f32_u16(DampgCoeff1_Uls_T_u4p12,NXTRFIXDPT_P12TOFLOAT_ULS_F32)) *
                            (TSca_Uls_T_f32));
                            
    *Rte_Pim_dDampgCoeff1Term() = DampgCoeff1_Uls_T_f32;
    /* End of 'Coeff1' */
    
    /* Start of 'Coeff2' */
    DampgCoeff2_Uls_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln,
                                                             PrmDampgHydCoeff2ScaY,
                                                             (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                             VehSpd_Kph_T_u9p7);
    DampgCoeff2_Uls_T_f32 = ((Rte_Prm_DampgHydBasCoeff2_Val()) *
                            (FixdToFloat_f32_u16(DampgCoeff2_Uls_T_u4p12,NXTRFIXDPT_P12TOFLOAT_ULS_F32)) *
                            (TSca_Uls_T_f32));  
                            
    *Rte_Pim_dDampgCoeff2Term() = DampgCoeff2_Uls_T_f32;    
    /* End of 'Coeff2' */
    
    /* Start of 'Coeff3' */
    DampgCoeff3_Uls_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln,
                                                             PrmDampgHydCoeff3ScaY,
                                                             (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                             VehSpd_Kph_T_u9p7);
    DampgCoeff3_Uls_T_f32 = ((Rte_Prm_DampgHydBasCoeff3_Val()) *
                            (FixdToFloat_f32_u16(DampgCoeff3_Uls_T_u4p12,NXTRFIXDPT_P12TOFLOAT_ULS_F32)));  
                            
    *Rte_Pim_dDampgCoeff3Term() = DampgCoeff3_Uls_T_f32;    
    /* End of 'Coeff3' */
    
    /* Start of 'Coeff4' */
    DampgCoeff4_Uls_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln,
                                                             PrmDampgHydCoeff4ScaY,
                                                             (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                             VehSpd_Kph_T_u9p7);
    DampgCoeff4_Uls_T_f32 = ((Rte_Prm_DampgHydBasCoeff4_Val()) *
                            (FixdToFloat_f32_u16(DampgCoeff4_Uls_T_u4p12,NXTRFIXDPT_P12TOFLOAT_ULS_F32)));  
                            
    *Rte_Pim_dDampgCoeff4Term() = DampgCoeff4_Uls_T_f32;    
    /* End of 'Coeff4' */
    
    /**** End of 'Step 1:  Apply scale factors to HydPwrSteer-based C1, C2, C3, C4 constants' *****/
        
    /**** Start of 'Step 2:  Limit the effect of assist' *****/
    
    HydAssiLim_MotNwtMtr_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmSysGlbPrmVehSpdBilnrSeln,
                                                                  PrmDampgHydAssiLim,
                                                                  (uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln),
                                                                  VehSpd_Kph_T_u9p7);
                                                                  
    HydAssiLim_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(HydAssiLim_MotNwtMtr_T_u4p12,NXTRFIXDPT_P12TOFLOAT_ULS_F32);
    
    LimdAssi_MotNwtMtr_T_f32 = Lim_f32(AssiCmdBas_MotNwtMtr_T_f32, -HydAssiLim_MotNwtMtr_T_f32, HydAssiLim_MotNwtMtr_T_f32);
    
    /**** End of 'Step 2:  Limit the effect of assist' *****/
    
    /**** Start of 'Step 3:  Apply equation' *****/ /* Overflow checked and not possible (ver 7) */
    
    HydDampgTrmA_MotNwtMtr_T_f32 =(DampgCoeff1_Uls_T_f32 + ((DampgCoeff3_Uls_T_f32) * (Abslt_f32_f32(LimdAssi_MotNwtMtr_T_f32)))) * MotVelCrf_MotRadPerSec_T_f32;
    
    HydDampgTrmB_MotNwtMtr_T_f32 = (((float32)Sign_s08_f32(MotVelCrf_MotRadPerSec_T_f32) * DampgCoeff2_Uls_T_f32) - (LimdAssi_MotNwtMtr_T_f32  * DampgCoeff4_Uls_T_f32)) *
                                    MotVelCrf_MotRadPerSec_T_f32 * MotVelCrf_MotRadPerSec_T_f32;
    
    HydDampg_MotNwtMtr_T_f32 = Lim_f32((HydDampgTrmA_MotNwtMtr_T_f32 + HydDampgTrmB_MotNwtMtr_T_f32), -Rte_Prm_DampgHydOutpLim_Val(), Rte_Prm_DampgHydOutpLim_Val()); 
                                  
    
    /**** End of 'Step 3:  Apply equation' *****/
    
    return(HydDampg_MotNwtMtr_T_f32);
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
