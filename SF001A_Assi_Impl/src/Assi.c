/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Assi.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF001A_Assi_Impl/tools/Component.dpa
 *     SW-C Type:  Assi
 *  Generated at:  Tue May  9 08:54:51 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Assi>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017, 2016, 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: Assi.c
* Module Description: Implementation of Assist FDD SF001A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           6 %
* %derived_by:        nz3541 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/02/15  1        SB       Initial Version																	EA4#514
* 08/10/15  2        NS       Changed init values for input ports to reflect changes in FDD 1.3.0               EA4#1121
* 08/26/15  3        NS       Changed FltInj_f32 port interface from FltInj1 to FltInj2                         EA4#1408
* 11/04/15  4        SB       Fix the parameters in Blnd_f32 macro												EA4#2413
* 08/09/16  5        NS       Quality update - add req linkage                                                  EA4#6796
* 05/09/17  6        SPP	  Remove application data types														EA4#11410
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
 * s4p11
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * u16p0
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

#include "Rte_Assi.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "SysGlbPrm.h"
#include "FltInj.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read and Rte_Write */ 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void functon; Rte generation adds standard 
                                              return type but no error information is returned for Rte_Call_FltInj_f32_Oper */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
			  
	#define   ASSITQSFTYLIM_MOTNWTMTR_F32  				(-0.1F)
	#define   AssiMotTqWhlImbRejctnMaxX					(*(const Ary2D_u8p8_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D()))
	#define   AssiMotTqWhlImbRejctnMinX					(*(const Ary2D_u8p8_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D()))
	#define   AssiMotTqWhlImbRejctnMaxY					(*(const Ary2D_s4p11_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D()))
	#define   AssiMotTqWhlImbRejctnMinY					(*(const Ary2D_s4p11_12_20 *)(Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D()))
	#define   AssiThermScaX								(*(const Ary1D_u16p0_2 *)(Rte_Prm_AssiThermScaX_Ary1D()))
	#define   AssiThermScaY								(*(const Ary1D_u2p14_2 *)(Rte_Prm_AssiThermScaY_Ary1D()))
	#define   AssiWhlImbRejctnBlndScaX					(*(const Ary2D_u5p11_12_5 *)(Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D()))
	#define   AssiWhlImbRejctnBlndScaY					(*(const Ary2D_u2p14_12_5 *)(Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D()))
	#define   SysGlbPrmVehSpdBilnrSeln					(*(const Ary1D_u9p7_12 *)(Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D()))
 
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
 * s4p11: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u16p0: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u8p8: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_s4p11_20: Array with 20 element(s) of type s4p11
 * Ary1D_u16p0_2: Array with 2 element(s) of type u16p0
 * Ary1D_u2p14_2: Array with 2 element(s) of type u2p14
 * Ary1D_u2p14_5: Array with 5 element(s) of type u2p14
 * Ary1D_u5p11_5: Array with 5 element(s) of type u5p11
 * Ary1D_u8p8_20: Array with 20 element(s) of type u8p8
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_s4p11_12_20: Array with 12 element(s) of type Ary1D_s4p11_20
 * Ary2D_u2p14_12_5: Array with 12 element(s) of type Ary1D_u2p14_5
 * Ary2D_u5p11_12_5: Array with 12 element(s) of type Ary1D_u5p11_5
 * Ary2D_u8p8_12_20: Array with 12 element(s) of type Ary1D_u8p8_20
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dAssiThermAssiSca(void)
 *   float32 *Rte_Pim_dAssiWhlImbRejctnBlnd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMaxX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMaxY_Ary2D(void)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u8p8 *Rte_Prm_AssiMotTqWhlImbRejctnMinX_Ary2D(void)
 *     Returnvalue: u8p8* is of type Ary2D_u8p8_12_20
 *   s4p11 *Rte_Prm_AssiMotTqWhlImbRejctnMinY_Ary2D(void)
 *     Returnvalue: s4p11* is of type Ary2D_s4p11_12_20
 *   u16p0 *Rte_Prm_AssiThermScaX_Ary1D(void)
 *     Returnvalue: u16p0* is of type Ary1D_u16p0_2
 *   u2p14 *Rte_Prm_AssiThermScaY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_2
 *   u5p11 *Rte_Prm_AssiWhlImbRejctnBlndScaX_Ary2D(void)
 *     Returnvalue: u5p11* is of type Ary2D_u5p11_12_5
 *   u2p14 *Rte_Prm_AssiWhlImbRejctnBlndScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_12_5
 *   u9p7 *Rte_Prm_SysGlbPrmVehSpdBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_12
 *
 *********************************************************************************************************************/


#define Assi_START_SEC_CODE
#include "Assi_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPer1
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
 *   Std_ReturnType Rte_Read_AssiLnrGain_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiLnrGainEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqHysOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTqOvrl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermLimSlowFilMax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_WhlImbRejctnAmp_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdBas_Val(float32 data)
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
 * Symbol: AssiPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Assi_CODE) AssiPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) AssiCmdBasSca_Uls_T_f32;
	VAR(float32, AUTOMATIC) AssiLnrGain_Uls_T_f32;
	VAR(boolean, AUTOMATIC) AssiLnrGainEna_Cnt_T_lgc;
	VAR(float32, AUTOMATIC) HwTq_HwNm_T_f32;
	VAR(float32, AUTOMATIC) HwTqHysOvrl_HwNm_T_f32;
	VAR(float32, AUTOMATIC) HwTqOvrl_HwNm_T_f32;
	VAR(float32, AUTOMATIC) ThermLimSlowFilMax_Uls_T_f32;	 
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(uint16, AUTOMATIC)  VehSpd_Kph_T_u9p7;
	VAR(float32, AUTOMATIC) WhlImbRejctnAmp_MtrNm_T_f32;
	VAR(uint16, AUTOMATIC)  WhlImbRejctnAmp_MtrNm_T_u5p11;
	VAR(float32, AUTOMATIC) ModHwTq_HwNm_T_f32;
	VAR(float32, AUTOMATIC) AssiTq_MtrNm_T_f32;	
	VAR(float32, AUTOMATIC) AbsModHwTq_HwNm_T_f32;
	VAR(sint8, AUTOMATIC)   SignHwTq_Uls_T_s08;
	VAR(uint16, AUTOMATIC)  ModTq_HwNm_T_u8p8; 
	VAR(uint16, AUTOMATIC)  ThermLimSlowFilMax_Uls_T_u16p0;
	VAR(sint16, AUTOMATIC)  WIR0_MtrNm_T_s4p11;
	VAR(float32, AUTOMATIC) WIR0_MtrNm_T_f32;
	VAR(uint16, AUTOMATIC)  WIRBlend_Uls_T_u2p14;
	VAR(float32, AUTOMATIC) WIRBlend_Uls_T_f32;
	VAR(sint16, AUTOMATIC)  WIR1_MtrNm_T_s4p11;
	VAR(float32, AUTOMATIC) WIR1_MtrNm_T_f32;
	VAR(uint16, AUTOMATIC)  ThermalAssistScl_Uls_T_u2p14;
	VAR(float32, AUTOMATIC) ThermalAssistScl_Uls_T_f32; 

	/* Read inputs */
	(void) Rte_Read_AssiCmdBasSca_Val(&AssiCmdBasSca_Uls_T_f32); 			
	(void) Rte_Read_AssiLnrGain_Val(&AssiLnrGain_Uls_T_f32); 				
	(void) Rte_Read_AssiLnrGainEna_Logl(&AssiLnrGainEna_Cnt_T_lgc); 		
	(void) Rte_Read_HwTq_Val(&HwTq_HwNm_T_f32); 							
	(void) Rte_Read_HwTqHysOvrl_Val(&HwTqHysOvrl_HwNm_T_f32); 				
	(void) Rte_Read_HwTqOvrl_Val(&HwTqOvrl_HwNm_T_f32); 					
	(void) Rte_Read_ThermLimSlowFilMax_Val(&ThermLimSlowFilMax_Uls_T_f32); 
	(void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32); 						    
	(void) Rte_Read_WhlImbRejctnAmp_Val(&WhlImbRejctnAmp_MtrNm_T_f32);		

	ModHwTq_HwNm_T_f32 = HwTq_HwNm_T_f32 + HwTqHysOvrl_HwNm_T_f32 + HwTqOvrl_HwNm_T_f32;
	SignHwTq_Uls_T_s08 = Sign_s08_f32(ModHwTq_HwNm_T_f32);
	AbsModHwTq_HwNm_T_f32 = Abslt_f32_f32(ModHwTq_HwNm_T_f32);

	/* Defeat Tables */	
	if ( TRUE == AssiLnrGainEna_Cnt_T_lgc)  
	{
		AssiTq_MtrNm_T_f32 = AbsModHwTq_HwNm_T_f32 * AssiLnrGain_Uls_T_f32; 
	} 
	/* Normal Operation */
	else                                    
	{
		ModTq_HwNm_T_u8p8 = FloatToFixd_u16_f32(AbsModHwTq_HwNm_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
		ThermLimSlowFilMax_Uls_T_u16p0 = FloatToFixd_u16_f32(ThermLimSlowFilMax_Uls_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);	
		VehSpd_Kph_T_u9p7	= 	FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
		WhlImbRejctnAmp_MtrNm_T_u5p11 	=	FloatToFixd_u16_f32(WhlImbRejctnAmp_MtrNm_T_f32, NXTRFIXDPT_FLOATTOP11_ULS_F32);
        
       
		WIR0_MtrNm_T_s4p11 = BilnrIntrpnWithRound_s16_u16MplXs16MplY( 	VehSpd_Kph_T_u9p7,
																		ModTq_HwNm_T_u8p8,
																		SysGlbPrmVehSpdBilnrSeln,
																		(uint16)TblSize_m(SysGlbPrmVehSpdBilnrSeln),
																		(P2CONST(uint16, AUTOMATIC, Assi_CONST))AssiMotTqWhlImbRejctnMinX,
																		(P2CONST(sint16, AUTOMATIC, Assi_CONST))AssiMotTqWhlImbRejctnMinY,
																		(uint16)TblSize_m(AssiMotTqWhlImbRejctnMinX[0]) );
		WIR0_MtrNm_T_f32 = FixdToFloat_f32_s16(WIR0_MtrNm_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);
       
									 
                                          
		WIR1_MtrNm_T_s4p11 = BilnrIntrpnWithRound_s16_u16MplXs16MplY( 	VehSpd_Kph_T_u9p7,
																		ModTq_HwNm_T_u8p8,
																		SysGlbPrmVehSpdBilnrSeln,
																		(uint16)TblSize_m(SysGlbPrmVehSpdBilnrSeln),
																		(P2CONST(uint16, AUTOMATIC, Assi_CONST))AssiMotTqWhlImbRejctnMaxX,
																		(P2CONST(sint16, AUTOMATIC, Assi_CONST))AssiMotTqWhlImbRejctnMaxY,
																		(uint16)TblSize_m(AssiMotTqWhlImbRejctnMaxX[0]) );
		WIR1_MtrNm_T_f32 = FixdToFloat_f32_s16(WIR1_MtrNm_T_s4p11, NXTRFIXDPT_P11TOFLOAT_ULS_F32);		
       

        
		WIRBlend_Uls_T_u2p14 = BilnrIntrpnWithRound_u16_u16MplXu16MplY(	   VehSpd_Kph_T_u9p7,
																		   WhlImbRejctnAmp_MtrNm_T_u5p11,
																		   SysGlbPrmVehSpdBilnrSeln,
																		   (uint16)TblSize_m(SysGlbPrmVehSpdBilnrSeln),
																		   (P2CONST(uint16, AUTOMATIC, Assi_CONST))AssiWhlImbRejctnBlndScaX,
																		   (P2CONST(uint16, AUTOMATIC, Assi_CONST))AssiWhlImbRejctnBlndScaY,
																		   (uint16)TblSize_m(AssiWhlImbRejctnBlndScaX[0]) );
		WIRBlend_Uls_T_f32 = FixdToFloat_f32_u16(WIRBlend_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
		*Rte_Pim_dAssiWhlImbRejctnBlnd() = WIRBlend_Uls_T_f32;		
       

		ThermalAssistScl_Uls_T_u2p14 = LnrIntrpn_u16_u16VariXu16VariY(	AssiThermScaX,
																		AssiThermScaY,
																		(uint16)TblSize_m(AssiThermScaX),
																		ThermLimSlowFilMax_Uls_T_u16p0 );	
		ThermalAssistScl_Uls_T_f32 = FixdToFloat_f32_u16(ThermalAssistScl_Uls_T_u2p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
		*Rte_Pim_dAssiThermAssiSca() = ThermalAssistScl_Uls_T_f32;
        
    
		AssiTq_MtrNm_T_f32 = (ThermalAssistScl_Uls_T_f32 * (Blnd_f32(WIR0_MtrNm_T_f32, WIR1_MtrNm_T_f32, WIRBlend_Uls_T_f32)));
	}
    
	AssiTq_MtrNm_T_f32 = Lim_f32(AssiTq_MtrNm_T_f32, ASSITQSFTYLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);   
    

	AssiTq_MtrNm_T_f32 = (float32)SignHwTq_Uls_T_s08 * AssiTq_MtrNm_T_f32; 
	AssiTq_MtrNm_T_f32 = AssiTq_MtrNm_T_f32 * AssiCmdBasSca_Uls_T_f32;  	

    
	AssiTq_MtrNm_T_f32 = Lim_f32(AssiTq_MtrNm_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32); 
	
	#if (STD_ON == FLTINJENA)	 
	(void) Rte_Call_FltInj_f32_Oper(&AssiTq_MtrNm_T_f32,FLTINJ_ASSI_ASSICMDBAS);
	#endif
	
	(void) Rte_Write_AssiCmdBas_Val(AssiTq_MtrNm_T_f32);				      

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Assi_STOP_SEC_CODE
#include "Assi_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
