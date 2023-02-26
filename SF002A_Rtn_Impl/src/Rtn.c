/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rtn.c
 *        Config:  C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea4/SF002A_Rtn_Impl-nz2999/SF002A_Rtn_Impl/tools/Component.dpa
 *     SW-C Type:  Rtn
 *  Generated at:  Mon Jun 26 11:26:21 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Rtn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Copyright 2015-2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : Rtn.c
 * Module Description: Implementation of Return FDD SF002A
 * Project           : CBD
 * Author            : Spandana Balani
 **********************************************************************************************************************
 * Version Control:
* %version:           8 %
* %derived_by:        nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/29/15  1        SB        Initial Version                                                               EA4#760
 * 07/07/15  2        SB        Reimported StdDef and removed wrong traceability                              EA4#760
 * 08/26/15  3        NS        Changed FltInj_f32 port interface from FltInj1 to FltInj2                     EA4#1409
 * 10/29/15  4        SB        Anom EA4#2248 fix - floating point exception                                  EA4#2332
 * 04/28/16  5        NS        Added requirement traceability                                                EA4#5559
 * 11/29/16  6        TATA      Updated as per design rev 2.0.0                                               EA4#8219
 * 06/05/17  7        BRB       Removed application data types                                                EA4#12455
 * 06/26/17  8        KByrski   Renamed display variable dRtnAbsltHwAg, removed unnecessary justifications    EA4#12636
 *********************************************************************************************************************/

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
 * s11p4
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
 * u5p11
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

#include "Rte_Rtn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "SysGlbPrm.h"
#include "ArchGlbPrm.h"
#include "FltInj.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/*************************************************** Local Macros ****************************************************/
#define PrmRtnHwAgOffsCalcdX      (*(const Ary2D_u12p4_9_16 *)(Rte_Prm_RtnHwAgOffsCalcdX_Ary2D()))
#define PrmRtnHwAgOffsCalcdY      (*(const Ary2D_u5p11_9_16 *)(Rte_Prm_RtnHwAgOffsCalcdY_Ary2D()))
#define PrmRtnHwAuthyScaX         (*(const Ary1D_u8p8_4 *)(Rte_Prm_RtnHwAuthyScaX_Ary1D()))
#define PrmRtnHwAuthyScaY         (*(const Ary1D_u9p7_4 *)(Rte_Prm_RtnHwAuthyScaY_Ary1D()))
#define PrmRtnScaTqX              (*(const Ary2D_u8p8_9_8 *)(Rte_Prm_RtnScaTqX_Ary2D()))
#define PrmRtnScaTqY              (*(const Ary2D_u8p8_9_8 *)(Rte_Prm_RtnScaTqY_Ary2D()))
#define PrmRtnScaVelX             (*(const Ary2D_u7p9_9_4 *)(Rte_Prm_RtnScaVelX_Ary2D()))
#define PrmRtnScaVelY             (*(const Ary2D_u8p8_9_4 *)(Rte_Prm_RtnScaVelY_Ary2D()))
#define PrmRtnTScaX               (*(const Ary1D_s11p4_14 *)(Rte_Prm_RtnTScaX_Ary1D()))
#define PrmRtnTScaY               (*(const Ary1D_u8p8_14 *)(Rte_Prm_RtnTScaY_Ary1D()))
#define PrmRtnVehSpdSeln          (*(const Ary1D_u9p7_9 *)(Rte_Prm_RtnVehSpdSeln_Ary1D()))

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
 * s11p4: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u12p4: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s11p4_14: Array with 14 element(s) of type s11p4
 * Ary1D_u12p4_16: Array with 16 element(s) of type u12p4
 * Ary1D_u5p11_16: Array with 16 element(s) of type u5p11
 * Ary1D_u7p9_4: Array with 4 element(s) of type u7p9
 * Ary1D_u8p8_14: Array with 14 element(s) of type u8p8
 * Ary1D_u8p8_4: Array with 4 element(s) of type u8p8
 * Ary1D_u8p8_8: Array with 8 element(s) of type u8p8
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
 * Ary1D_u9p7_9: Array with 9 element(s) of type u9p7
 * Ary2D_u12p4_9_16: Array with 9 element(s) of type Ary1D_u12p4_16
 * Ary2D_u5p11_9_16: Array with 9 element(s) of type Ary1D_u5p11_16
 * Ary2D_u7p9_9_4: Array with 9 element(s) of type Ary1D_u7p9_4
 * Ary2D_u8p8_9_4: Array with 9 element(s) of type Ary1D_u8p8_4
 * Ary2D_u8p8_9_8: Array with 9 element(s) of type Ary1D_u8p8_8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevHwAgAuthy(void)
 *   float32 *Rte_Pim_PrevHwAgOffsLimd(void)
 *   float32 *Rte_Pim_dRtnAbsltHwAg(void)
 *   float32 *Rte_Pim_dRtnAssiMechTRtnSca(void)
 *   float32 *Rte_Pim_dRtnBascRtn(void)
 *   float32 *Rte_Pim_dRtnHwAgAuthySca(void)
 *   float32 *Rte_Pim_dRtnHwAgRtnCmd(void)
 *   float32 *Rte_Pim_dRtnHwTqRtnSca(void)
 *   float32 *Rte_Pim_dRtnHwVelRtnSca(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_RtnHwAuthySlew_Val(void)
 *   float32 Rte_Prm_RtnOffsRng_Val(void)
 *   float32 Rte_Prm_RtnOffsSlew_Val(void)
 *   u12p4 *Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(void)
 *     Returnvalue: u12p4* is of type Ary2D_u12p4_9_16
 *   u5p11 *Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_9_16
 *   u8p8 *Rte_Prm_RtnHwAuthyScaX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_4
 *   u9p7 *Rte_Prm_RtnHwAuthyScaY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u8p8 *Rte_Prm_RtnScaTqX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u8p8 *Rte_Prm_RtnScaTqY_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_8
 *   u7p9 *Rte_Prm_RtnScaVelX_Ary2D(void)
 *     Returnvalue: u7p9* is of type Ary2D_u7p9_9_4
 *   u8p8 *Rte_Prm_RtnScaVelY_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_9_4
 *   s11p4 *Rte_Prm_RtnTScaX_Ary1D(void)
 *     Returnvalue: s11p4* is of type Ary1D_s11p4_14
 *   u8p8 *Rte_Prm_RtnTScaY_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_14
 *   u9p7 *Rte_Prm_RtnVehSpdSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_9
 *
 *********************************************************************************************************************/


#define Rtn_START_SEC_CODE
#include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Rtn_CODE) RtnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnInit1
 *********************************************************************************************************************/

/* Do nothing */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RtnPer1
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
 *   Std_ReturnType Rte_Read_AssiMechT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgAuthySca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAgRtnOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmdDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RtnCmdDiagcDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_RtnCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_RtnCmdScaServo_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RtnCmd_Val(float32 data)
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
 * Symbol: RtnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Rtn_CODE) RtnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RtnPer1
 *********************************************************************************************************************/

    VAR(float32, AUTOMATIC) AssiMechT_DegC_T_f32;
    VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwAgAuthySca_Uls_T_f32;
    VAR(float32, AUTOMATIC) HwAgRtnOffs_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) HwTq_HwNm_T_f32;
    VAR(float32, AUTOMATIC) HwVel_HwRadpS_T_f32;
    VAR(boolean, AUTOMATIC) RtnCmdDi_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) RtnCmdDiagcDi_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) VehSpdVld_Uls_T_logl;
    VAR(float32, AUTOMATIC) RtnCmdSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) RtnCmdScaServo_Uls_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) HwAgRtnOffsLmtd_HwDeg_T_f32;
    VAR(float32, AUTOMATIC) OffsLimd_HwDeg_T_f32;
    VAR(sint8,   AUTOMATIC) SignHwAg_Uls_T_s08;
    VAR(float32, AUTOMATIC) AbsltHwAg_HwDeg_T_f32;
    VAR(uint16,  AUTOMATIC) AbsltHwAg_HwDeg_T_u12p4;
    VAR(uint16,  AUTOMATIC) VehSpd_Kph_T_u9p7;
    VAR(uint16,  AUTOMATIC) RtnHwAg_MtrNm_T_u5p11;
    VAR(float32, AUTOMATIC) RtnHwAg_MtrNm_T_f32;
    VAR(uint16,  AUTOMATIC) HwTq_HwNm_T_u8p8;
    VAR(uint16,  AUTOMATIC) RtnTqSca_Uls_T_u8p8;
    VAR(float32, AUTOMATIC) RtnTqSca_Uls_T_f32;
    VAR(uint16,  AUTOMATIC) HwVel_HwRadpS_T_u7p9;
    VAR(uint16,  AUTOMATIC) RtnVelSca_Uls_T_u8p8;
    VAR(float32, AUTOMATIC) RtnVelSca_Uls_T_f32;
    VAR(sint16,  AUTOMATIC) AssiMechT_DegC_T_s11p4;
    VAR(uint16,  AUTOMATIC) RtnTSca_Uls_T_u8p8;
    VAR(float32, AUTOMATIC) RtnTSca_Uls_T_f32;
    VAR(uint16,  AUTOMATIC) HwAgAuthySca_Uls_T_u8p8;
    VAR(uint16,  AUTOMATIC) RtnAuthySca_Uls_T_u9p7;
    VAR(float32, AUTOMATIC) RtnAuthySca_Uls_T_f32;
    VAR(float32, AUTOMATIC) RtnAuthyScaLimd_Uls_T_f32;
    VAR(float32, AUTOMATIC) RtnCalcd_MtrNm_T_f32;
    VAR(float32, AUTOMATIC) RtnBascRtn_MtrNm_T_f32;
    VAR(float32, AUTOMATIC) RtnCmdNotLimd_MtrNm_T_f32;
    VAR(float32, AUTOMATIC) RtnCmdOutp_MtrNm_T_f32;

    /* Read Inputs */
    (void) Rte_Read_AssiMechT_Val(&AssiMechT_DegC_T_f32);
    (void) Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
    (void) Rte_Read_HwAgAuthySca_Val(&HwAgAuthySca_Uls_T_f32);
    (void) Rte_Read_HwAgRtnOffs_Val(&HwAgRtnOffs_HwDeg_T_f32);
    (void) Rte_Read_HwTq_Val(&HwTq_HwNm_T_f32);
    (void) Rte_Read_HwVel_Val(&HwVel_HwRadpS_T_f32);
    (void) Rte_Read_RtnCmdDi_Logl(&RtnCmdDi_Cnt_T_lgc);
    (void) Rte_Read_RtnCmdDiagcDi_Logl(&RtnCmdDiagcDi_Cnt_T_lgc);
    (void) Rte_Read_RtnCmdSca_Val(&RtnCmdSca_Uls_T_f32);
    (void) Rte_Read_RtnCmdScaServo_Val(&RtnCmdScaServo_Uls_T_f32);
    (void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
    (void) Rte_Read_VehSpdVld_Logl(&VehSpdVld_Uls_T_logl);

    /* Input Conditioning */
    HwAgRtnOffsLmtd_HwDeg_T_f32 = Lim_f32(HwAgRtnOffs_HwDeg_T_f32, (-Rte_Prm_RtnOffsRng_Val()), Rte_Prm_RtnOffsRng_Val());


    OffsLimd_HwDeg_T_f32 = Lim_f32(HwAgRtnOffsLmtd_HwDeg_T_f32,
                                   (((-Rte_Prm_RtnOffsSlew_Val()) * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevHwAgOffsLimd()),
                                   (((Rte_Prm_RtnOffsSlew_Val())  * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevHwAgOffsLimd()));


    *Rte_Pim_PrevHwAgOffsLimd() = OffsLimd_HwDeg_T_f32;

    SignHwAg_Uls_T_s08 = Sign_s08_f32(HwAg_HwDeg_T_f32 - OffsLimd_HwDeg_T_f32);
    AbsltHwAg_HwDeg_T_f32 = Abslt_f32_f32(HwAg_HwDeg_T_f32 - OffsLimd_HwDeg_T_f32);
    *Rte_Pim_dRtnAbsltHwAg() = AbsltHwAg_HwDeg_T_f32;

    /* Overflow checked and not possible (ver 7) */
    AbsltHwAg_HwDeg_T_u12p4 = FloatToFixd_u16_f32(AbsltHwAg_HwDeg_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);
    /* Overflow checked and not possible (ver 7) */
    VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);

    RtnHwAg_MtrNm_T_u5p11 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                    AbsltHwAg_HwDeg_T_u12p4,
                                                                    PrmRtnVehSpdSeln,
                                                                    (uint16) TblSize_m(PrmRtnVehSpdSeln),
                                                                    Rte_Prm_RtnHwAgOffsCalcdX_Ary2D(),
                                                                    Rte_Prm_RtnHwAgOffsCalcdY_Ary2D(),
                                                                    (uint16) TblSize_m(PrmRtnHwAgOffsCalcdX[0]));

    RtnHwAg_MtrNm_T_f32 = FixdToFloat_f32_u16(RtnHwAg_MtrNm_T_u5p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
    *Rte_Pim_dRtnHwAgRtnCmd() = RtnHwAg_MtrNm_T_f32;

    /* Scaling_Hw_Tq */
    /* Overflow checked and not possible (ver 7) */
    HwTq_HwNm_T_u8p8 = FloatToFixd_u16_f32(Abslt_f32_f32(HwTq_HwNm_T_f32), NXTRFIXDPT_FLOATTOP8_ULS_F32);

    RtnTqSca_Uls_T_u8p8 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                  HwTq_HwNm_T_u8p8,
                                                                  PrmRtnVehSpdSeln,
                                                                  (uint16) TblSize_m(PrmRtnVehSpdSeln),
                                                                  Rte_Prm_RtnScaTqX_Ary2D(),
                                                                  Rte_Prm_RtnScaTqY_Ary2D(),
                                                                  (uint16) TblSize_m(PrmRtnScaTqX[0]));

    RtnTqSca_Uls_T_f32 = FixdToFloat_f32_u16(RtnTqSca_Uls_T_u8p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
    *Rte_Pim_dRtnHwTqRtnSca() = RtnTqSca_Uls_T_f32;

    /* Scaling_Hw_Vel */
    /* Overflow checked and not possible (ver 7) */
    HwVel_HwRadpS_T_u7p9 = FloatToFixd_u16_f32(Abslt_f32_f32(HwVel_HwRadpS_T_f32), NXTRFIXDPT_FLOATTOP9_ULS_F32);

    RtnVelSca_Uls_T_u8p8 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(VehSpd_Kph_T_u9p7,
                                                                   HwVel_HwRadpS_T_u7p9,
                                                                   PrmRtnVehSpdSeln,
                                                                   (uint16) TblSize_m(PrmRtnVehSpdSeln),
                                                                   Rte_Prm_RtnScaVelX_Ary2D(),
                                                                   Rte_Prm_RtnScaVelY_Ary2D(),
                                                                   (uint16) TblSize_m(PrmRtnScaVelX[0]));

    RtnVelSca_Uls_T_f32 = FixdToFloat_f32_u16(RtnVelSca_Uls_T_u8p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
    *Rte_Pim_dRtnHwVelRtnSca() = RtnVelSca_Uls_T_f32;

    /* Scaling based on Temp */
    AssiMechT_DegC_T_s11p4 = FloatToFixd_s16_f32(AssiMechT_DegC_T_f32, NXTRFIXDPT_FLOATTOP4_ULS_F32);

    RtnTSca_Uls_T_u8p8 = LnrIntrpn_u16_s16VariXu16VariY(PrmRtnTScaX,
                                                        PrmRtnTScaY,
                                                        (uint16) TblSize_m(PrmRtnTScaX),
                                                        AssiMechT_DegC_T_s11p4);

    RtnTSca_Uls_T_f32 = FixdToFloat_f32_u16(RtnTSca_Uls_T_u8p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
    *Rte_Pim_dRtnAssiMechTRtnSca() = RtnTSca_Uls_T_f32;

    /* Scaling based on HwAgAuthy */
    /* Overflow checked and not possible (ver 7) */
    HwAgAuthySca_Uls_T_u8p8 = FloatToFixd_u16_f32(HwAgAuthySca_Uls_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);

    RtnAuthySca_Uls_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(PrmRtnHwAuthyScaX,
                                                            PrmRtnHwAuthyScaY,
                                                            (uint16) TblSize_m(PrmRtnHwAuthyScaX),
                                                            HwAgAuthySca_Uls_T_u8p8);

    RtnAuthySca_Uls_T_f32 = FixdToFloat_f32_u16(RtnAuthySca_Uls_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);

    RtnAuthyScaLimd_Uls_T_f32 = Lim_f32(RtnAuthySca_Uls_T_f32,
                                        (((-Rte_Prm_RtnHwAuthySlew_Val()) * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevHwAgAuthy()),
                                        (((Rte_Prm_RtnHwAuthySlew_Val())  * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevHwAgAuthy()));

    *Rte_Pim_PrevHwAgAuthy() = RtnAuthyScaLimd_Uls_T_f32;
    *Rte_Pim_dRtnHwAgAuthySca() = RtnAuthyScaLimd_Uls_T_f32;

    RtnCalcd_MtrNm_T_f32 = (float32) SignHwAg_Uls_T_s08 * RtnHwAg_MtrNm_T_f32 * RtnTqSca_Uls_T_f32 * RtnVelSca_Uls_T_f32 * RtnTSca_Uls_T_f32 * RtnAuthyScaLimd_Uls_T_f32;
    RtnBascRtn_MtrNm_T_f32 = RtnCmdSca_Uls_T_f32 * RtnCmdScaServo_Uls_T_f32 * RtnCalcd_MtrNm_T_f32;

    *Rte_Pim_dRtnBascRtn() = RtnBascRtn_MtrNm_T_f32;

    /* Status_Check */
    if ((RtnCmdDiagcDi_Cnt_T_lgc == TRUE) || (RtnCmdDi_Cnt_T_lgc == TRUE) || (VehSpdVld_Uls_T_logl == FALSE))
    {
        RtnCmdNotLimd_MtrNm_T_f32 = 0.0F;
    }
    else
    {
        RtnCmdNotLimd_MtrNm_T_f32 = RtnBascRtn_MtrNm_T_f32;
    }

    RtnCmdOutp_MtrNm_T_f32 = Lim_f32(RtnCmdNotLimd_MtrNm_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);

#if (STD_ON == FLTINJENA)
    (void) Rte_Call_FltInj_f32_Oper(&RtnCmdOutp_MtrNm_T_f32, FLTINJ_RTN_RTNCMD);
#endif

    /* Write Output */
    (void) Rte_Write_RtnCmd_Val(RtnCmdOutp_MtrNm_T_f32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Rtn_STOP_SEC_CODE
#include "Rtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
