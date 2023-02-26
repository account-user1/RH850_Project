/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  PosnTrakgServo.c
 *     SW-C Type:  PosnTrakgServo
 *  Generated at:  Wed Mar 29 14:20:50 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <PosnTrakgServo>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : PosnTrakgServo.c
* Module Description: Implementation of Position Tracking Servo (FDD SF020B)
* Project           : CBD 
* Author            : Matthew Leser
************************************************************************************************************************
* Version Control:
* %version          : 2 %
* %derived_by       : nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date        Rev      Author  		Change Description              	                                      SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  -----------
* 01/16/17     1     ML        Initial Version                                     		                    EA4#7093
* 03/06/17	   2     ML		   Updated to Fix Anomaly EA4#9844												EA4#10235
***********************************************************************************************************************/

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
  s4p11
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s8p7
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  u11p5
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u12p4
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u15p1
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

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

#include "Rte_PosnTrakgServo.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrMath.h"
 #include "NxtrIntrpn.h"
 #include "NxtrFixdPt.h"
 #include "SysGlbPrm.h"  
 #include "ArchGlbPrm.h"
 
 /* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their 
 array type for code readability and to allow use of "sizeof". */ 
 
 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */

 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include 
 statements */
 
 #define ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32			(-100000.0F)
 #define ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32			(100000.0F)
 #define ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32		(-6500.0F)
 #define ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32		(6500.0F)
 #define CUTOFFFRQLOWRLIM_HZ_F32					(0.1F)
 #define GAINFAC_ULS_F32							(0.5F)
 #define HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32		(-10000.0F)
 #define HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32		(10000.0F)
 #define INTGTRSTLOWRLIM_HWNWTMTR_F32				(-32767.5F)
 #define INTGTRSTUPPRLIM_HWNWTMTR_F32				(32767.5F)
 #define OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32		(-2000000.0F)
 #define OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32		(2000000.0F)
 #define POSNSERVOENATILOWRLIM_SEC_F32				(0.0F)
 #define POSNSERVOENATIUPPRLIM_SEC_F32				(20.0F)
 
 #define PrmPosnTrakgServoEnaBlndFacTblX				(*(const Ary1D_u8p8_10 *)		(Rte_Prm_PosnTrakgServoEnaBlndFacTblX_Ary1D()))
 #define PrmPosnTrakgServoEnaBlndFacTblY				(*(const Ary1D_u2p14_10 *)		(Rte_Prm_PosnTrakgServoEnaBlndFacTblY_Ary1D()))
 #define PrmPosnTrakgServoFfGain						(*(const Ary1D_u12p4_12 *)		(Rte_Prm_PosnTrakgServoFfGain_Ary1D()))
 #define PrmPosnTrakgServoFfVelGain						(*(const Ary1D_u8p8_12 *)		(Rte_Prm_PosnTrakgServoFfVelGain_Ary1D()))
 #define PrmPosnTrakgServoGain1							(*(const Ary1D_u12p4_12 *)		(Rte_Prm_PosnTrakgServoGain1_Ary1D()))
 #define PrmPosnTrakgServoGain2							(*(const Ary1D_u8p8_12 *)		(Rte_Prm_PosnTrakgServoGain2_Ary1D()))
 #define PrmPosnTrakgServoGain3							(*(const Ary1D_s8p7_12 *)		(Rte_Prm_PosnTrakgServoGain3_Ary1D()))
 #define PrmPosnTrakgServoGain4							(*(const Ary1D_s4p11_12 *)		(Rte_Prm_PosnTrakgServoGain4_Ary1D()))
 #define PrmPosnTrakgServoGainArbnFltMtgtn				(*(const Ary1D_u12p4_12 *)		(Rte_Prm_PosnTrakgServoGainArbnFltMtgtn_Ary1D()))
 #define PrmPosnTrakgServoHwAgTarMgnLimTblY				(*(const Ary1D_u11p5_12 *)		(Rte_Prm_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D()))
 #define PrmPosnTrakgServoHwAgTarRateLimTblY			(*(const Ary1D_u15p1_12 *)		(Rte_Prm_PosnTrakgServoHwAgTarRateLimTblY_Ary1D()))
 #define PrmPosnTrakgServoHwVelTarRateLimTblY			(*(const Ary1D_u15p1_12 *)		(Rte_Prm_PosnTrakgServoHwVelTarRateLimTblY_Ary1D()))
 #define PrmPosnTrakgServoIntglGain						(*(const Ary1D_u15p1_12 *)		(Rte_Prm_PosnTrakgServoIntglGain_Ary1D()))
 #define PrmPosnTrakgServoIntglLim						(*(const Ary1D_u15p1_12 *)		(Rte_Prm_PosnTrakgServoIntglLim_Ary1D()))
 #define PrmPosnTrakgServoOutpLim						(*(const Ary1D_u8p8_12 *)		(Rte_Prm_PosnTrakgServoOutpLim_Ary1D()))
 #define PrmPosnTrakgServoVehSpdTbl						(*(const Ary1D_u9p7_12 *)		(Rte_Prm_PosnTrakgServoVehSpdTbl_Ary1D()))
 
 static FUNC(float32, PosnTrakgServo_CODE) SVReset(boolean PosnServoEna_Cnt_T_lgc,
										           float32 SVResetInp_HwNwtMtr_T_f32);
										 
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
 * s4p11: Integer in interval [-32768...32767]
 * s8p7: Integer in interval [-32768...32767]
 * u11p5: Integer in interval [0...65535]
 * u12p4: Integer in interval [0...65535]
 * u15p1: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_s4p11_12: Array with 12 element(s) of type s4p11
 * Ary1D_s8p7_12: Array with 12 element(s) of type s8p7
 * Ary1D_u11p5_12: Array with 12 element(s) of type u11p5
 * Ary1D_u12p4_12: Array with 12 element(s) of type u12p4
 * Ary1D_u15p1_12: Array with 12 element(s) of type u15p1
 * Ary1D_u2p14_10: Array with 10 element(s) of type u2p14
 * Ary1D_u2p14_12: Array with 12 element(s) of type u2p14
 * Ary1D_u8p8_10: Array with 10 element(s) of type u8p8
 * Ary1D_u8p8_12: Array with 12 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_AntiWdupCmdPrev(void)
 *   float32 *Rte_Pim_HwTqDerivtvPrev(void)
 *   float32 *Rte_Pim_HwTqPrev(void)
 *   float32 *Rte_Pim_IntgtrInpPrev(void)
 *   float32 *Rte_Pim_IntgtrOutpPrev(void)
 *   float32 *Rte_Pim_OutpAntiWdupCmdPrev(void)
 *   float32 *Rte_Pim_PosnServoCmdInpArbnFltMtgtnPrev(void)
 *   float32 *Rte_Pim_PosnServoCmdOutpArbnFltMtgtnPrev(void)
 *   float32 *Rte_Pim_PosnServoEnaTiPrev(void)
 *   float32 *Rte_Pim_PosnServoHwAgValRateLim(void)
 *   float32 *Rte_Pim_PosnServoHwVelValRateLim(void)
 *   float32 *Rte_Pim_dPosnTrakgServoCmdPreLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoEnaBlndFac(void)
 *   float32 *Rte_Pim_dPosnTrakgServoFfCmd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwAg(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwAgErr(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwAgTarLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoHwVelTarLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoIntgtrCmdLimd(void)
 *   float32 *Rte_Pim_dPosnTrakgServoPtlStFbCmd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoIntgtrAntiWdupGain_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoIntgtrStCorrnGain_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoLpFilCutOffFrq_Val(void)
 *   float32 Rte_Prm_PosnTrakgServoOutpAntiWdupGain_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysKineRat_Val(void)
 *   float32 Rte_Prm_SysGlbPrmSysTqRat_Val(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoEnaBlndFacTblX_Ary1D(void)
 *   u2p14 *Rte_Prm_PosnTrakgServoEnaBlndFacTblY_Ary1D(void)
 *   u12p4 *Rte_Prm_PosnTrakgServoFfGain_Ary1D(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoFfVelGain_Ary1D(void)
 *   u12p4 *Rte_Prm_PosnTrakgServoGain1_Ary1D(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoGain2_Ary1D(void)
 *   s8p7 *Rte_Prm_PosnTrakgServoGain3_Ary1D(void)
 *   s4p11 *Rte_Prm_PosnTrakgServoGain4_Ary1D(void)
 *   u2p14 *Rte_Prm_PosnTrakgServoGainArbnFltMtgtn_Ary1D(void)
 *   u11p5 *Rte_Prm_PosnTrakgServoHwAgTarMgnLimTblY_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoHwAgTarRateLimTblY_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoHwVelTarRateLimTblY_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoIntglGain_Ary1D(void)
 *   u15p1 *Rte_Prm_PosnTrakgServoIntglLim_Ary1D(void)
 *   u8p8 *Rte_Prm_PosnTrakgServoOutpLim_Ary1D(void)
 *   u9p7 *Rte_Prm_PosnTrakgServoVehSpdTbl_Ary1D(void)
 *
 *********************************************************************************************************************/


#define PosnTrakgServo_START_SEC_CODE
#include "PosnTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PosnTrakgServoInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, PosnTrakgServo_CODE) PosnTrakgServoInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PosnTrakgServoInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PosnTrakgServoPer1
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
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PosnServoHwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoHwVel_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnServoIntgtrOffs_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PosnTrakgArbnFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PosnServoCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_PosnServoIntgtrSt_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, PosnTrakgServo_CODE) PosnTrakgServoPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PosnTrakgServoPer1
 *********************************************************************************************************************/
 VAR(float32, AUTOMATIC) HwAg_HwDeg_T_f32;
 VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
 VAR(float32, AUTOMATIC) PosnServoHwAg_HwDeg_T_f32;
 VAR(float32, AUTOMATIC) PosnServoHwVel_HwDegPerSec_T_f32;
 VAR(float32, AUTOMATIC) PosnServoIntgtrOffs_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
 VAR(float32, AUTOMATIC) PosnServoEnaTi_Sec_T_f32;
 VAR(float32, AUTOMATIC) HwAgTarMgnLim_HwDeg_T_f32;
 VAR(float32, AUTOMATIC) HwAgTarRateLim_HwDegPerSec_T_f32;
 VAR(float32, AUTOMATIC) HwVelTarRateLim_HwDegPerSecPerSec_T_f32;
 VAR(float32, AUTOMATIC) TmpPosnServoHwAg_HwDeg_T_f32;
 VAR(float32, AUTOMATIC) TmpPosnServoHwVel_HwDegPerSec_T_f32;
 VAR(float32, AUTOMATIC) PosnServoHwAgLimd_HwDeg_T_f32;
 VAR(float32, AUTOMATIC) PosnServoHwVelLimd_HwDegPerSec_T_f32;
 VAR(float32, AUTOMATIC) PosnServoFfCmd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) EnaBlndFac_Sec_T_f32;
 VAR(float32, AUTOMATIC) HwAgErrRaw_HwRad_T_f32;
 VAR(float32, AUTOMATIC) HwAgErr_HwRad_T_f32;
 VAR(float32, AUTOMATIC) IntglGain_Uls_T_f32;
 VAR(float32, AUTOMATIC) IntgtrLim_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) IntgtrInp_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) IntgtrOutp_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) TmpIntgtrInp_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) IntgtrCmdPreLim_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) IntgtrCmdLimd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) TmpIntgtrCmdLimd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) IntgtrStVari_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) AntiWdupCmd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PrevAntiWdupCmd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PosnTrakgServoGain1_Uls_T_f32;
 VAR(float32, AUTOMATIC) PosnTrakgServoGain2_Uls_T_f32;
 VAR(float32, AUTOMATIC) PosnTrakgServoGain3_Uls_T_f32;
 VAR(float32, AUTOMATIC) PosnTrakgServoGain4_Uls_T_f32;
 VAR(float32, AUTOMATIC) Fac_Sec_T_f32;
 VAR(float32, AUTOMATIC) CutOffFrq_Hz_T_f32;
 VAR(float32, AUTOMATIC) TmpHwTq_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) HwTqDerivtv_HwNwtMtrPerSec_T_f32;
 VAR(float32, AUTOMATIC) PtlStFbCmd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) InvCutOffFrq_Sec_T_f32;
 VAR(float32, AUTOMATIC) NewInvCutOffFrq_Sec_T_f32;
 VAR(float32, AUTOMATIC) NewHwTq_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) OutpLim_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PosnServoGainArbnFltMtgtn_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) TmpPosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) NewPosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PosnServoCmdArbnFltMtgtnLim_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) OutpAntiWdupCmd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PrevOutpAntiWdupCmd_HwNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PosnServoCmd_MotNwtMtr_T_f32;
 VAR(float32, AUTOMATIC) PosnServoHwVelLimd_HwRadPerSec_T_f32;
 VAR(float32, AUTOMATIC) PosnServoHwAgLimd_HwRad_T_f32;
 VAR(float32, AUTOMATIC) HwAg_HwRad_T_f32;
 
 VAR(boolean, AUTOMATIC) PosnServoEna_Cnt_T_lgc;
 VAR(boolean, AUTOMATIC) PosnTrakgArbnFltMtgtnEna_Cnt_T_lgc;
 
 VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
 VAR(uint16, AUTOMATIC) IntrpnVehSpd_Kph_T_u11p5;
 VAR(uint16, AUTOMATIC) IntrpnVehSpd_Kph_T_u15p1;
 VAR(uint16, AUTOMATIC) IntrpnVehSpd_Kph_T_u12p4;
 VAR(uint16, AUTOMATIC) IntrpnVehSpd_Kph_T_u8p8;
 VAR(uint16, AUTOMATIC) PosnServoEnaTi_Sec_T_u8p8;
 VAR(uint16, AUTOMATIC) IntrpnPosnServoEnaTi_Sec_T_u2p14;
 VAR(uint16, AUTOMATIC) IntrpnVehSpdVelTar_Kph_T_u15p1;
 VAR(uint16, AUTOMATIC) IntrpnVehSpdGain_Kph_T_u15p1;
 VAR(uint16, AUTOMATIC) IntrpnVehSpdLim_Kph_T_u15p1;

 
 VAR(sint16, AUTOMATIC) IntrpnVehSpd_Kph_T_s8p7;
 VAR(sint16, AUTOMATIC) IntrpnVehSpd_Kph_T_s4p11;
 
 	/*** Read RTE Inputs ***/
 (void)Rte_Read_HwAg_Val(&HwAg_HwDeg_T_f32);
 (void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
 (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
 (void)Rte_Read_PosnServoEna_Logl(&PosnServoEna_Cnt_T_lgc);
 (void)Rte_Read_PosnServoHwAg_Val(&PosnServoHwAg_HwDeg_T_f32);
 (void)Rte_Read_PosnServoHwVel_Val(&PosnServoHwVel_HwDegPerSec_T_f32);
 (void)Rte_Read_PosnServoIntgtrOffs_Val(&PosnServoIntgtrOffs_HwNwtMtr_T_f32);
 (void)Rte_Read_PosnTrakgArbnFltMtgtnEna_Logl(&PosnTrakgArbnFltMtgtnEna_Cnt_T_lgc);
 (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);

 /*** Start of Target Angle and Velocity Limit ***/
 
 VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
 
 IntrpnVehSpd_Kph_T_u11p5  = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
														    PrmPosnTrakgServoHwAgTarMgnLimTblY,
														    (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
														    VehSpd_Kph_T_u9p7);
 HwAgTarMgnLim_HwDeg_T_f32 = FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u11p5, NXTRFIXDPT_P5TOFLOAT_ULS_F32);												 	  
 
 IntrpnVehSpd_Kph_T_u15p1                = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
																		  PrmPosnTrakgServoHwAgTarRateLimTblY,
																		  (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
																		  VehSpd_Kph_T_u9p7);
 HwAgTarRateLim_HwDegPerSec_T_f32        = FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u15p1, NXTRFIXDPT_P1TOFLOAT_ULS_F32);
 
 IntrpnVehSpdVelTar_Kph_T_u15p1                = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
																		  PrmPosnTrakgServoHwVelTarRateLimTblY,
																		  (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
																		  VehSpd_Kph_T_u9p7);
 HwVelTarRateLim_HwDegPerSecPerSec_T_f32 = FixdToFloat_f32_u16(IntrpnVehSpdVelTar_Kph_T_u15p1, NXTRFIXDPT_P1TOFLOAT_ULS_F32);
 
 TmpPosnServoHwAg_HwDeg_T_f32  = Lim_f32(PosnServoHwAg_HwDeg_T_f32, -HwAgTarMgnLim_HwDeg_T_f32, HwAgTarMgnLim_HwDeg_T_f32);
 PosnServoHwAgLimd_HwDeg_T_f32 = Lim_f32( TmpPosnServoHwAg_HwDeg_T_f32,
										 (*Rte_Pim_PosnServoHwAgValRateLim() + (-HwAgTarRateLim_HwDegPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)),
										 (*Rte_Pim_PosnServoHwAgValRateLim() + ( HwAgTarRateLim_HwDegPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)) );
 *Rte_Pim_PosnServoHwAgValRateLim() = PosnServoHwAgLimd_HwDeg_T_f32;
 
 TmpPosnServoHwVel_HwDegPerSec_T_f32  = Lim_f32(PosnServoHwVel_HwDegPerSec_T_f32, -HwAgTarRateLim_HwDegPerSec_T_f32, HwAgTarRateLim_HwDegPerSec_T_f32);
 PosnServoHwVelLimd_HwDegPerSec_T_f32 = Lim_f32( TmpPosnServoHwVel_HwDegPerSec_T_f32,
											   (*Rte_Pim_PosnServoHwVelValRateLim() + (-HwVelTarRateLim_HwDegPerSecPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)),
											   (*Rte_Pim_PosnServoHwVelValRateLim() + ( HwVelTarRateLim_HwDegPerSecPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)) );
 *Rte_Pim_PosnServoHwVelValRateLim() = PosnServoHwVelLimd_HwDegPerSec_T_f32;
	
 *Rte_Pim_dPosnTrakgServoHwAgTarLimd()  = PosnServoHwAgLimd_HwDeg_T_f32;
 *Rte_Pim_dPosnTrakgServoHwVelTarLimd() = PosnServoHwVelLimd_HwDegPerSec_T_f32; 
 
 /*** End of Target Angle and Velocity Limit ***/
 
 /*** Start of Enable Blending ***/
 
 if (PosnServoEna_Cnt_T_lgc == TRUE)
 {
	 PosnServoEnaTi_Sec_T_f32 = Lim_f32( (ARCHGLBPRM_2MILLISEC_SEC_F32 + *Rte_Pim_PosnServoEnaTiPrev()), POSNSERVOENATILOWRLIM_SEC_F32, POSNSERVOENATIUPPRLIM_SEC_F32);
 }
 else
 {
	 PosnServoEnaTi_Sec_T_f32 = 0.0F;
 }
 
 *Rte_Pim_PosnServoEnaTiPrev() = PosnServoEnaTi_Sec_T_f32;
 
 PosnServoEnaTi_Sec_T_u8p8            = FloatToFixd_u16_f32(PosnServoEnaTi_Sec_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
 IntrpnPosnServoEnaTi_Sec_T_u2p14     = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoEnaBlndFacTblX,
																       PrmPosnTrakgServoEnaBlndFacTblY,
																       (uint16)TblSize_m(PrmPosnTrakgServoEnaBlndFacTblX),
																       PosnServoEnaTi_Sec_T_u8p8);
 EnaBlndFac_Sec_T_f32                 = FixdToFloat_f32_u16(IntrpnPosnServoEnaTi_Sec_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
 *Rte_Pim_dPosnTrakgServoEnaBlndFac() = EnaBlndFac_Sec_T_f32; 
 
 /*** End of Enable Blending ***/
 
 /*** Start of Position Control ***/
 
 *Rte_Pim_dPosnTrakgServoHwAg()       = PosnServoHwAg_HwDeg_T_f32;
 PosnServoHwVelLimd_HwRadPerSec_T_f32 = PosnServoHwVelLimd_HwDegPerSec_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32;
 PosnServoHwAgLimd_HwRad_T_f32        = PosnServoHwAgLimd_HwDeg_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32;
 HwAg_HwRad_T_f32            		  = HwAg_HwDeg_T_f32 * ARCHGLBPRM_PIOVER180_ULS_F32;
 
	/*** Start of Feedforward ***/
	
	IntrpnVehSpd_Kph_T_u12p4 	  = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
															       PrmPosnTrakgServoFfGain,
															       (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
															       VehSpd_Kph_T_u9p7);																													  
	IntrpnVehSpd_Kph_T_u8p8  	  = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
															       PrmPosnTrakgServoFfVelGain,
															       (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
															       VehSpd_Kph_T_u9p7);
	PosnServoFfCmd_HwNwtMtr_T_f32 = EnaBlndFac_Sec_T_f32 * (((FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u12p4, NXTRFIXDPT_P4TOFLOAT_ULS_F32))*PosnServoHwAgLimd_HwRad_T_f32) +
														    ((FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u8p8,  NXTRFIXDPT_P8TOFLOAT_ULS_F32))*PosnServoHwVelLimd_HwRadPerSec_T_f32) );
	*Rte_Pim_dPosnTrakgServoFfCmd() = PosnServoFfCmd_HwNwtMtr_T_f32;		
	
	/*** End of Feedforward ***/
	
	/*** Start of Integrator ***/
	
	HwAgErrRaw_HwRad_T_f32 = PosnServoHwAgLimd_HwRad_T_f32 - HwAg_HwRad_T_f32;
	
	IntrpnVehSpdGain_Kph_T_u15p1 = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
														      PrmPosnTrakgServoIntglGain,
														      (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
														      VehSpd_Kph_T_u9p7);
	IntglGain_Uls_T_f32      = FixdToFloat_f32_u16(IntrpnVehSpdGain_Kph_T_u15p1, NXTRFIXDPT_P1TOFLOAT_ULS_F32);
	
	IntrpnVehSpdLim_Kph_T_u15p1 = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
														      PrmPosnTrakgServoIntglLim,
														      (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
														      VehSpd_Kph_T_u9p7);
	IntgtrLim_HwNwtMtr_T_f32 = FixdToFloat_f32_u16(IntrpnVehSpdLim_Kph_T_u15p1, NXTRFIXDPT_P1TOFLOAT_ULS_F32);
	
	HwAgErr_HwRad_T_f32 = SVReset(PosnServoEna_Cnt_T_lgc,
								  HwAgErrRaw_HwRad_T_f32);

	*Rte_Pim_dPosnTrakgServoHwAgErr() = HwAgErr_HwRad_T_f32;
	IntgtrInp_HwNwtMtr_T_f32          = (HwAgErr_HwRad_T_f32 * IntglGain_Uls_T_f32 * EnaBlndFac_Sec_T_f32) + *Rte_Pim_OutpAntiWdupCmdPrev() + *Rte_Pim_AntiWdupCmdPrev();
	
	TmpIntgtrInp_HwNwtMtr_T_f32      = IntgtrInp_HwNwtMtr_T_f32 + *Rte_Pim_IntgtrInpPrev();
	*Rte_Pim_IntgtrInpPrev() 		 = SVReset(PosnServoEna_Cnt_T_lgc,
											   IntgtrInp_HwNwtMtr_T_f32);
	
	IntgtrCmdPreLim_HwNwtMtr_T_f32   = (TmpIntgtrInp_HwNwtMtr_T_f32 * GAINFAC_ULS_F32 * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_IntgtrOutpPrev();
	TmpIntgtrCmdLimd_HwNwtMtr_T_f32  = Lim_f32(IntgtrCmdPreLim_HwNwtMtr_T_f32, -IntgtrLim_HwNwtMtr_T_f32, IntgtrLim_HwNwtMtr_T_f32);
	IntgtrCmdLimd_HwNwtMtr_T_f32     = TmpIntgtrCmdLimd_HwNwtMtr_T_f32 - PosnServoIntgtrOffs_HwNwtMtr_T_f32;
	IntgtrStVari_HwNwtMtr_T_f32      = Lim_f32(TmpIntgtrCmdLimd_HwNwtMtr_T_f32, INTGTRSTLOWRLIM_HWNWTMTR_F32, INTGTRSTUPPRLIM_HWNWTMTR_F32);
	IntgtrOutp_HwNwtMtr_T_f32	     = TmpIntgtrCmdLimd_HwNwtMtr_T_f32 - (PosnServoIntgtrOffs_HwNwtMtr_T_f32 * Rte_Prm_PosnTrakgServoIntgtrStCorrnGain_Val());
	
	*Rte_Pim_IntgtrOutpPrev() = SVReset(PosnServoEna_Cnt_T_lgc,
									    IntgtrOutp_HwNwtMtr_T_f32);
									  
	AntiWdupCmd_HwNwtMtr_T_f32 = (TmpIntgtrCmdLimd_HwNwtMtr_T_f32 - IntgtrCmdPreLim_HwNwtMtr_T_f32) * Rte_Prm_PosnTrakgServoIntgtrAntiWdupGain_Val();
	
	PrevAntiWdupCmd_HwNwtMtr_T_f32 = SVReset(PosnServoEna_Cnt_T_lgc,
										     AntiWdupCmd_HwNwtMtr_T_f32);
	
	*Rte_Pim_AntiWdupCmdPrev()              = Lim_f32(PrevAntiWdupCmd_HwNwtMtr_T_f32, ANTIWDUPCMDLOWRLIM_HWNWTMTR_F32, ANTIWDUPCMDUPPRLIM_HWNWTMTR_F32);
	*Rte_Pim_dPosnTrakgServoIntgtrCmdLimd() = IntgtrCmdLimd_HwNwtMtr_T_f32;
	
	/*** End of Integrator ***/
	
	/*** Start of Partial State Feedback ***/
	
	MotVelCrf_MotRadPerSec_T_f32 = MotVelCrf_MotRadPerSec_T_f32/Rte_Prm_SysGlbPrmSysKineRat_Val();
	
	IntrpnVehSpd_Kph_T_u12p4 = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
															  PrmPosnTrakgServoGain1,
															  (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
															  VehSpd_Kph_T_u9p7);
	IntrpnVehSpd_Kph_T_u8p8  = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
															  PrmPosnTrakgServoGain2,
															  (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
															  VehSpd_Kph_T_u9p7);
	IntrpnVehSpd_Kph_T_s8p7  = LnrIntrpn_s16_u16VariXs16VariY(PrmPosnTrakgServoVehSpdTbl,
															  PrmPosnTrakgServoGain3,
															  (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
															  VehSpd_Kph_T_u9p7);
	IntrpnVehSpd_Kph_T_s4p11 = LnrIntrpn_s16_u16VariXs16VariY(PrmPosnTrakgServoVehSpdTbl,
															  PrmPosnTrakgServoGain4,
															  (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
															  VehSpd_Kph_T_u9p7);
	
	PosnTrakgServoGain1_Uls_T_f32 = FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u12p4, NXTRFIXDPT_P4TOFLOAT_ULS_F32);
	PosnTrakgServoGain2_Uls_T_f32 = FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u8p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
	PosnTrakgServoGain3_Uls_T_f32 = FixdToFloat_f32_s16(IntrpnVehSpd_Kph_T_s8p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	PosnTrakgServoGain4_Uls_T_f32 = FixdToFloat_f32_s16(IntrpnVehSpd_Kph_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
	
		/*** Start of Derivative ***/
		
		CutOffFrq_Hz_T_f32         = Max_f32(Rte_Prm_PosnTrakgServoLpFilCutOffFrq_Val(), CUTOFFFRQLOWRLIM_HZ_F32);
		NewHwTq_HwNwtMtr_T_f32     = HwTq_HwNwtMtr_T_f32 - *Rte_Pim_HwTqPrev();
		*Rte_Pim_HwTqPrev()        = HwTq_HwNwtMtr_T_f32;
		Fac_Sec_T_f32			   = GAINFAC_ULS_F32 * ARCHGLBPRM_2MILLISEC_SEC_F32;
		InvCutOffFrq_Sec_T_f32     = ARCHGLBPRM_ONEOVER2PI_ULS_F32/CutOffFrq_Hz_T_f32;
		
		TmpHwTq_HwNwtMtr_T_f32		  		= NewHwTq_HwNwtMtr_T_f32 - ((Fac_Sec_T_f32 - InvCutOffFrq_Sec_T_f32) * (*Rte_Pim_HwTqDerivtvPrev()));
		HwTqDerivtv_HwNwtMtrPerSec_T_f32    = TmpHwTq_HwNwtMtr_T_f32/(Fac_Sec_T_f32 + InvCutOffFrq_Sec_T_f32);
		HwTqDerivtv_HwNwtMtrPerSec_T_f32	= Lim_f32(HwTqDerivtv_HwNwtMtrPerSec_T_f32, HWTQDERIVTVLOWRLIM_HWNWTMTRPERSEC_F32, HWTQDERIVTVUPPRLIM_HWNWTMTRPERSEC_F32);
		*Rte_Pim_HwTqDerivtvPrev()          = HwTqDerivtv_HwNwtMtrPerSec_T_f32;
		
		/*** End of Derivative ***/
		
	PtlStFbCmd_HwNwtMtr_T_f32		     = EnaBlndFac_Sec_T_f32 * ((HwAg_HwRad_T_f32 * PosnTrakgServoGain1_Uls_T_f32) +
																   (MotVelCrf_MotRadPerSec_T_f32 * PosnTrakgServoGain2_Uls_T_f32) +
																   (HwTq_HwNwtMtr_T_f32 * PosnTrakgServoGain3_Uls_T_f32)+
																   (HwTqDerivtv_HwNwtMtrPerSec_T_f32 * PosnTrakgServoGain4_Uls_T_f32));
	*Rte_Pim_dPosnTrakgServoPtlStFbCmd() = PtlStFbCmd_HwNwtMtr_T_f32;
	
	/*** End of Partial State Feedback ***/
	
	/*** Start of Output Limit ***/
		
	IntrpnVehSpd_Kph_T_u8p8  = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
															  PrmPosnTrakgServoOutpLim,
															  (uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
															  VehSpd_Kph_T_u9p7);
	OutpLim_HwNwtMtr_T_f32   = FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u8p8, NXTRFIXDPT_P8TOFLOAT_ULS_F32);
	
	if (PosnTrakgArbnFltMtgtnEna_Cnt_T_lgc == TRUE)
	{
		IntrpnVehSpd_Kph_T_u12p4  				   = LnrIntrpn_u16_u16VariXu16VariY(PrmPosnTrakgServoVehSpdTbl,
																					PrmPosnTrakgServoGainArbnFltMtgtn,
																					(uint16)TblSize_m(PrmPosnTrakgServoVehSpdTbl),
																					VehSpd_Kph_T_u9p7);
		PosnServoGainArbnFltMtgtn_HwNwtMtr_T_f32   = FixdToFloat_f32_u16(IntrpnVehSpd_Kph_T_u12p4, NXTRFIXDPT_P4TOFLOAT_ULS_F32);
		
		/*** Start Low Pass Filter ***/
		
		NewInvCutOffFrq_Sec_T_f32 = ARCHGLBPRM_ONEOVER2PI_ULS_F32/Rte_Prm_PosnTrakgServoArbnFltMtgtnLpFilCutOffFrq_Val();
		
		PosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32    = PosnServoGainArbnFltMtgtn_HwNwtMtr_T_f32 * PosnServoHwAgLimd_HwRad_T_f32 * EnaBlndFac_Sec_T_f32;
		NewPosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32 = PosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32 + *Rte_Pim_PosnServoCmdInpArbnFltMtgtnPrev();
		*Rte_Pim_PosnServoCmdInpArbnFltMtgtnPrev()    = PosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32;
		TmpPosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32 = (NewPosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32 * Fac_Sec_T_f32) - ((Fac_Sec_T_f32 - NewInvCutOffFrq_Sec_T_f32) * (*Rte_Pim_PosnServoCmdOutpArbnFltMtgtnPrev()));
		PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32       = TmpPosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32/(Fac_Sec_T_f32 + NewInvCutOffFrq_Sec_T_f32);
		PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32       = Lim_f32(PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32, ARBNFLTMTGTNCMDLOWRLIM_HWNWTMTR_F32, ARBNFLTMTGTNCMDUPPRLIM_HWNWTMTR_F32);
		*Rte_Pim_PosnServoCmdOutpArbnFltMtgtnPrev()   = PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32;
		
		/*** End of Low Pass Filter ***/	
		
	}
	else
	{
		PosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32 = (PosnServoFfCmd_HwNwtMtr_T_f32 + IntgtrCmdLimd_HwNwtMtr_T_f32) - PtlStFbCmd_HwNwtMtr_T_f32;
		PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32    = PosnServoCmdInpArbnFltMtgtn_HwNwtMtr_T_f32;
	}
	
	*Rte_Pim_dPosnTrakgServoCmdPreLimd()       = PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32;
	PosnServoCmdArbnFltMtgtnLim_HwNwtMtr_T_f32 = Lim_f32(PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32, -OutpLim_HwNwtMtr_T_f32, OutpLim_HwNwtMtr_T_f32);
	OutpAntiWdupCmd_HwNwtMtr_T_f32			   = (PosnServoCmdArbnFltMtgtnLim_HwNwtMtr_T_f32 - PosnServoCmdArbnFltMtgtn_HwNwtMtr_T_f32) * (Rte_Prm_PosnTrakgServoOutpAntiWdupGain_Val());
	PosnServoCmd_MotNwtMtr_T_f32 			   = Lim_f32((PosnServoCmdArbnFltMtgtnLim_HwNwtMtr_T_f32/(Rte_Prm_SysGlbPrmSysTqRat_Val())), SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32); 
	
	PrevOutpAntiWdupCmd_HwNwtMtr_T_f32 = SVReset(PosnServoEna_Cnt_T_lgc,
											     OutpAntiWdupCmd_HwNwtMtr_T_f32);
	*Rte_Pim_OutpAntiWdupCmdPrev()     = Lim_f32(PrevOutpAntiWdupCmd_HwNwtMtr_T_f32, OUTPANTIWDUPCMDLOWRLIM_HWNWTMTR_F32, OUTPANTIWDUPCMDUPPRLIM_HWNWTMTR_F32);

 /*** End of Position Control ***/
 
 (void)Rte_Write_PosnServoCmd_Val(PosnServoCmd_MotNwtMtr_T_f32);
 (void)Rte_Write_PosnServoIntgtrSt_Val(IntgtrStVari_HwNwtMtr_T_f32);
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define PosnTrakgServo_STOP_SEC_CODE
#include "PosnTrakgServo_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
* Name        : SVReset
* Description : Implementing SVReset Block 
* Inputs      : PosnServoEna_Cnt_T_lgc, SVResetInp_HwNwtMtr_T_f32   
* Outputs     : SVResetOutp_Uls_T_f32 
* Usage Notes : Output has units Uls because output of function has different possible units
****************************************************************************************************************/
 static FUNC(float32, PosnTrakgServo_CODE) SVReset(boolean PosnServoEna_Cnt_T_lgc,
												   float32 SVResetInp_HwNwtMtr_T_f32)
{										 
 VAR(float32, AUTOMATIC) SVResetOutp_Uls_T_f32;
																	 
 if (PosnServoEna_Cnt_T_lgc == TRUE)
 {
	SVResetOutp_Uls_T_f32 = SVResetInp_HwNwtMtr_T_f32;
 }
 else
 {
	 SVResetOutp_Uls_T_f32 = 0.0F;
 }
 
 return SVResetOutp_Uls_T_f32;
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
