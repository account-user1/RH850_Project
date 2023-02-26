/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AssiHiFrq.c
 *     SW-C Type:  AssiHiFrq
 *  Generated at:  Wed Feb  8 11:00:41 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AssiHiFrq>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
* Copyright 2015, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: AssiHiFrq.c
* Module Description: Implements the SF028A_AssiHiFrq_Design FDD. This 
*                     function provides a means of compensating for system 
*                     inertia and road feedback. It is tunable over both 
*                     vehicle speed and handwheel torque to obtain the desired 
*                     level of disturbance rejection under various operating 
*                     conditions. It passes handwheel torque through a high-pass 
*                     filter and multiplies the resulting signal by a tunable 
*                     gain factor. The output is known as high-frequency assist 
*                     and is simply added to the usual assist calculated elsewhere
* 
* Project           : CBD   
* Author            : Kathleen Creager 
*****************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz2796 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 08/04/15  1        KMC       initial implementation of SF028A                                                  EA4#1013
* 02/08/17  2        ML        Updated to design vers. 1.1.0													 EA4#9729 
******************************************************************************/


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
  u1p15
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u3p13
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u4p12
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u5p11
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u7p9
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

#include "Rte_AssiHiFrq.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "NxtrFil.h"
#include "SysGlbPrm.h"
#include "ArchGlbPrm.h"

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
type for code readability and to allow use of "sizeof". */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmAssiHiFrqGainY_u3p13    			(*(const Ary2D_u3p13_12_13 *) Rte_Prm_AssiHiFrqGainY_Ary2D())
#define PrmAssiHiFrqHpFilFrqY_u7p9			(*(const Ary1D_u7p9_12 *) Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D())
#define PrmAssiHiFrqTqWhlImbRejctnTqX_u5p11 (*(const Ary2D_u5p11_12_13 *) Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D())
#define PrmAssiHiFrqTqX_u5p11			    (*(const Ary2D_u5p11_12_13 *) Rte_Prm_AssiHiFrqTqX_Ary2D())
#define PrmAssiHiFrqWhlImbRejctnGainY_u3p13 (*(const Ary2D_u3p13_12_13 *) Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D())
#define PrmAssiHiFrqWhlImbRejtcnBlndX_u4p12 (*(const Ary2D_u4p12_12_5 *) Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D())
#define PrmAssiHiFrqWhlImbRejtcnBlndY_u1p15 (*(const Ary2D_u1p15_12_5 *) Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D())
#define PrmSysGlbPrmVehSpdBilnrSeln_u9p7    (*(const Ary1D_u9p7_12 *) Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D())


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
 * u1p15: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u7p9: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u3p13_13: Array with 13 element(s) of type u3p13
 * Ary1D_u4p12_5: Array with 5 element(s) of type u4p12
 * Ary1D_u5p11_13: Array with 13 element(s) of type u5p11
 * Ary1D_u7p9_12: Array with 12 element(s) of type u7p9
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_u1p15_12_5: Array with 12 element(s) of type Ary1D_u1p15_5
 * Ary2D_u3p13_12_13: Array with 12 element(s) of type Ary1D_u3p13_13
 * Ary2D_u4p12_12_5: Array with 12 element(s) of type Ary1D_u4p12_5
 * Ary2D_u5p11_12_13: Array with 12 element(s) of type Ary1D_u5p11_13
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dAssiHiFrqGain(void)
 *   float32 *Rte_Pim_dAssiHiFrqGainBlnd(void)
 *   float32 *Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero(void)
 *   FilHpRec1 *Rte_Pim_HwTqHpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiHiFrqHpFilFrq_Val(void)
 *   u3p13 *Rte_Prm_AssiHiFrqGainY_Ary2D(void)
 *   u7p9 *Rte_Prm_AssiHiFrqHpFilFrqY_Ary1D(void)
 *   u5p11 *Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(void)
 *   u5p11 *Rte_Prm_AssiHiFrqTqX_Ary2D(void)
 *   u4p12 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(void)
 *   u1p15 *Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(void)
 *   u3p13 *Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(void)
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


#define AssiHiFrq_START_SEC_CODE
#include "AssiHiFrq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiHiFrqInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, AssiHiFrq_CODE) AssiHiFrqInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiHiFrqInit1
 *********************************************************************************************************************/

 FilHpInit(0.0F,Rte_Prm_AssiHiFrqHpFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_HwTqHpFil());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiHiFrqPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiHiFrqCmd_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, AssiHiFrq_CODE) AssiHiFrqPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiHiFrqPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) WhlImbRejctnAmp_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AssiHiFrqCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AbsltHwTq_HwNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC)  VehSpd_Kph_T_u9p7;
	VAR(uint16, AUTOMATIC)  FilHpFreq_Hz_T_u7p9;
	VAR(float32, AUTOMATIC) FilHpFreq_Hz_T_f32;	
	VAR(float32, AUTOMATIC) FilHwTq_HwNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC)  WhlImbRejctnAmp_MotNwtMtr_T_u4p12;
	VAR(float32, AUTOMATIC) GainBlnd_Uls_T_f32;
	VAR(uint16, AUTOMATIC)  GainBlnd_Uls_T_u1p15;
	VAR(float32, AUTOMATIC) GainWhlImbRejctnZero_MotNwtMtrPerHwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) GainWhlImbRejctnMax_MotNwtMtrPerHwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) GainVal_MotNwtMtrPerHwNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC)  AbsltHwTq_HwNwtMtr_T_u5p11;
	VAR(uint16, AUTOMATIC)  GainWhlImbRejctnZero_MotNwtMtrPerHwNwtMtr_T_u3p13;
	VAR(uint16, AUTOMATIC)  GainWhlImbRejctnMax_MotNwtMtrPerHwNwtMtr_T_u3p13;

	
	(void) Rte_Read_HwTq_Val (&HwTq_HwNwtMtr_T_f32);
	(void) Rte_Read_VehSpd_Val (&VehSpd_Kph_T_f32);
	(void) Rte_Read_WhlImbRejctnAmp_Val (&WhlImbRejctnAmp_MotNwtMtr_T_f32);
	
	AbsltHwTq_HwNwtMtr_T_f32 = Abslt_f32_f32 (HwTq_HwNwtMtr_T_f32);
	
	/*** freq lookup ***/
	VehSpd_Kph_T_u9p7 = FloatToFixd_u16_f32 (VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	FilHpFreq_Hz_T_u7p9 = LnrIntrpn_u16_u16VariXu16VariY (PrmSysGlbPrmVehSpdBilnrSeln_u9p7,
															PrmAssiHiFrqHpFilFrqY_u7p9,
															(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7),
															VehSpd_Kph_T_u9p7);
	FilHpFreq_Hz_T_f32 = FixdToFloat_f32_u16 (FilHpFreq_Hz_T_u7p9, NXTRFIXDPT_P9TOFLOAT_ULS_F32);

	/*** HP-CF Filter ***/
	FilHpUpdGain (FilHpFreq_Hz_T_f32, ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_HwTqHpFil());
	FilHwTq_HwNwtMtr_T_f32 = FilHpUpdOutp_f32 (HwTq_HwNwtMtr_T_f32, Rte_Pim_HwTqHpFil());

	/*** Determine Gain ***/
	WhlImbRejctnAmp_MotNwtMtr_T_u4p12 = FloatToFixd_u16_f32 (WhlImbRejctnAmp_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP12_ULS_F32);
	GainBlnd_Uls_T_u1p15 = BilnrIntrpnWithRound_u16_u16MplXu16MplY (VehSpd_Kph_T_u9p7,
												WhlImbRejctnAmp_MotNwtMtr_T_u4p12,
												PrmSysGlbPrmVehSpdBilnrSeln_u9p7,
												(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7),
												Rte_Prm_AssiHiFrqWhlImbRejctnBlndX_Ary2D(),
												Rte_Prm_AssiHiFrqWhlImbRejctnBlndY_Ary2D(),
												(uint16)TblSize_m(PrmAssiHiFrqWhlImbRejtcnBlndX_u4p12[0]));
	GainBlnd_Uls_T_f32 = FixdToFloat_f32_u16 (GainBlnd_Uls_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);
	*Rte_Pim_dAssiHiFrqGainBlnd() = GainBlnd_Uls_T_f32;
	
	AbsltHwTq_HwNwtMtr_T_u5p11 = FloatToFixd_u16_f32 (AbsltHwTq_HwNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP11_ULS_F32);
	GainWhlImbRejctnZero_MotNwtMtrPerHwNwtMtr_T_u3p13 = BilnrIntrpnWithRound_u16_u16MplXu16MplY (VehSpd_Kph_T_u9p7,
																						AbsltHwTq_HwNwtMtr_T_u5p11,
																						PrmSysGlbPrmVehSpdBilnrSeln_u9p7,
																						(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7),
																						Rte_Prm_AssiHiFrqTqX_Ary2D(),
																						Rte_Prm_AssiHiFrqGainY_Ary2D(),
																						(uint16)TblSize_m(PrmAssiHiFrqTqX_u5p11[0]));
	GainWhlImbRejctnZero_MotNwtMtrPerHwNwtMtr_T_f32 = FixdToFloat_f32_u16 (GainWhlImbRejctnZero_MotNwtMtrPerHwNwtMtr_T_u3p13, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
	*Rte_Pim_dAssiHiFrqGainWhlImbRejtcnZero() = GainWhlImbRejctnZero_MotNwtMtrPerHwNwtMtr_T_f32;
	
	GainWhlImbRejctnMax_MotNwtMtrPerHwNwtMtr_T_u3p13 = BilnrIntrpnWithRound_u16_u16MplXu16MplY (VehSpd_Kph_T_u9p7,
																						AbsltHwTq_HwNwtMtr_T_u5p11,
																						PrmSysGlbPrmVehSpdBilnrSeln_u9p7,
																						(uint16)TblSize_m(PrmSysGlbPrmVehSpdBilnrSeln_u9p7),
																						Rte_Prm_AssiHiFrqTqWhlImbRejctnTqX_Ary2D(),
																						Rte_Prm_AssiHiFrqWhlImbRejctnGainY_Ary2D(),
																						(uint16)TblSize_m(PrmAssiHiFrqTqWhlImbRejctnTqX_u5p11[0]));
	GainWhlImbRejctnMax_MotNwtMtrPerHwNwtMtr_T_f32 = FixdToFloat_f32_u16 (GainWhlImbRejctnMax_MotNwtMtrPerHwNwtMtr_T_u3p13, NXTRFIXDPT_P13TOFLOAT_ULS_F32);
	
	GainVal_MotNwtMtrPerHwNwtMtr_T_f32 = Blnd_f32 (GainWhlImbRejctnZero_MotNwtMtrPerHwNwtMtr_T_f32, GainWhlImbRejctnMax_MotNwtMtrPerHwNwtMtr_T_f32, GainBlnd_Uls_T_f32);
	*Rte_Pim_dAssiHiFrqGain() = GainVal_MotNwtMtrPerHwNwtMtr_T_f32;
	
	AssiHiFrqCmd_MotNwtMtr_T_f32 = FilHwTq_HwNwtMtr_T_f32 * GainVal_MotNwtMtrPerHwNwtMtr_T_f32;

	/*** Saturation ***/	
	AssiHiFrqCmd_MotNwtMtr_T_f32 = Lim_f32(AssiHiFrqCmd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
	
	(void) Rte_Write_AssiHiFrqCmd_Val (AssiHiFrqCmd_MotNwtMtr_T_f32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AssiHiFrq_STOP_SEC_CODE
#include "AssiHiFrq_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
