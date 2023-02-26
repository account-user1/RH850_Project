/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DutyCycThermProtn.c
 *        Config:  C:/Component/SF009A_DutyCycThermProtn_Impl/tools/Component.dpa
 *     SW-C Type:  DutyCycThermProtn
 *  Generated at:  Wed Nov  8 10:49:29 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DutyCycThermProtn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DutyCycThermProtn.c
* Module Description:The purpose of the Thermal Duty Cycle Protection is to limit and protect the system from excessive use, 
*			based on motor rotational velocity and system Temperature.It also provides protection status information 
*			for use by other functions.
* Project           : CBD 
* Author            : Sarika Natu (KPIT Technologies)
***********************************************************************************************************************
* Version Control:
* %version          : 10 %
* %derived_by       : nz2796 %
*--------------------------------------------------------------------------------------------------------------------
* Date    	       Rev    Author   Change Description                                                    SCR #
* -------------- ------- --------  -----------------------------------------------------------     ------------------
* 10/02/15          1     SN(KPIT) Initial implementation  of SF009A                                         EA4#658
* 03/08/16          2     KK	   Update as per FDD v1.2.0 & v1.3.0 (Fix of EA4#3199, EA4#2362)   EA4#3840, EA4#3080
* 04/04/16          3     KK	   Update as per FDD v2.0.0 (a-> Fix of EA4#4886, b-> EA4#5014)    EA4#5089, EA4#5078
* 04/28/16          4     KK	   To resolve NTC 0xA4 Init and Debounce issue								 EA4#5440
* 08/15/16          5     KK	   Update as per FDD v2.2.0 (Fix for EA4#6473)   							 EA4#6546
* 09/27/16          6     KK	   Update as per FDD v2.2.1 (Fix for EA4#7558)   							 EA4#7662
* 12/14/16          7     SR       Update as per FDD v3.0.0                                                  EA4#7553
* 10/12/17          8     BRB      Fix for anomaly EA4#15662                                                 EA4#16163
* 10/24/17          9     RMG(TATA)New Bitpack signal MotAndThermProtnLoaMod added as input to the function  EA4#13255
                                   Corresponding decoder subsystem and memory storage blocks are added
                                   New Calibrations added to be used while in the FetLoaMtgtnMod
                                   Changes made to select correct index from the 2xN calibration values.
								   New calibrations added in data dictionary file.
                                   The values of Zcalibrations involving tables are either converted to 2XN 
								   -table or new calibrations are added for the second row of the table
* 04/03/18          10     ML       Modified Thermal Limit Status in Per1. Fix for Anomaly EA4#16997.         EA4#19215
                                               
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
 * NtcNr1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * NtcSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * s15p0
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
 * u3p13
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

#include "Rte_DutyCycThermProtn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
#include "NxtrIntrpn.h"
#include "NxtrFil.h"
#include "NxtrMath.h"
#include "ArchGlbPrm.h"
#include "SysGlbPrm.h"
#include "NxtrFixdPt.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */					
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for:
                                              [Rte_Read, Rte_Write, SetNtcSts, SetRamBlockStatus, GetErrorStatus] */

/********************************************* Embedded Local Constants **********************************************/
#define DITHERMLIM_MOTNWTMTR_F32			(8.8F)
#define FIL1LPFILFRQ_HZ_F32					(0.100097F)
#define FIL2LPFILFRQ_HZ_F32					(0.0100097F)
#define FIL3LPFILFRQ_HZ_F32					(0.00100097F)
#define FIL4LPFILFRQ_HZ_F32					(0.000530516F)
#define FIL5LPFILFRQ_HZ_F32					(0.000100097F)
#define FIL6LPFILFRQ_HZ_F32					(3.97887e-05F)
#define FILOUTPLIM_ULS_F32					(200.0F)
#define FILVALMAX_ULS_F32					(200.0F)
#define FILVALMIN_ULS_F32					(0.0F)
#define ONEPERC_ULS_F32						(0.01F)
#define TAU3_SEC_F32						(159.0F)
#define TAU4_SEC_F32						(300.0F)
#define TAU5_SEC_F32						(1590.0F)
#define TAU6_SEC_F32						(4000.0F)
#define THERMLOADLIMTBLIDX_ULS_U08			(8U)
#define THERMLOADLIMSIZE_CNT_U08      		(8U)
#define MULTFILTERSIZE_CNT_U08      		(6U)
#define THERMREDNFACLOLIM_ULS_F32			(0.0F)
#define THERMREDNFACHILIM_ULS_F32			(1.0F)
#define IGNTIOFFTHD_CNT_F32					(10000.0F)
#define CTRLRTFLT_CNT_U08					(1U)
#define CUTFLT_CNT_U08						(2U)
#define CTRLRANDCUTFLT_CNT_U08				(4U)
#define NODEBSTEP_CNT_U16					(65535U)
#define ZERO_MOTNWTMTR_F32                  (0.0F)
#define BITMASK2_CNT_U08                    (2U)
#define BITMASK4_CNT_U08                    (4U)
#define CALVALMIN_ULS_U08                   (0U)
#define IDX5_CNT_U08                        (5U) 
#define IDX8_CNT_U08                        (8U)                    
	
#define PrmDutyCycThermProtnMplrTblX_s15p0  		       (*(const Ary1D_s15p0_5 *) Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D())
#define PrmDutyCycThermProtnMplr1NonStallTblY_u3p13        (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr2NonStallTblY_u3p13        (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr3NonStallTblY_u3p13        (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr4NonStallTblY_u3p13        (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr5NonStallTblY_u3p13        (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr6NonStallTblY_u3p13        (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr1StallTblY_u3p13  	       (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr2StallTblY_u3p13  	       (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr3StallTblY_u3p13  	       (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr4StallTblY_u3p13   	       (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr5StallTblY_u3p13  	       (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr6StallTblY_u3p13  	       (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D())
#define PrmDutyCycThermProtnLstTblValNonStall_u9p7         (*(const Ary2D_u9p7_2_5 *)Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D())
#define PrmDutyCycThermProtnLstTblValStall_u9p7  	       (*(const Ary2D_u9p7_2_5 *)Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D())
#define PrmDutyCycThermProtnThermLoadLimTblX_u16p0         (*(const Ary2D_u16p0_2_8 *)Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D())
#define PrmDutyCycThermProtnThermLoadLimTblY_u9p7          (*(const Ary2D_u9p7_2_8 *)Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D())
#define PrmDutyCycThermProtnAbsltCtrlTTblX_s15p0  	       (*(const Ary1D_s15p0_4 *) Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D())
#define PrmDutyCycThermProtnAbsltCtrlTTqTblY_u9p7  	       (*(const Ary1D_u9p7_4 *) Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D())
#define PrmDutyCycThermProtnAbsltCuTTblX_s15p0  	       (*(const Ary1D_s15p0_4 *) Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D())
#define PrmDutyCycThermProtnAbsltCuTTqTblY_u9p7  	       (*(const Ary1D_u9p7_4 *) Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D())
#define PrmDutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_u9p7  (*(const Ary1D_u9p7_4 *) Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D())
#define PrmDutyCycThermProtnAbsltCtrlTFetMtgtnTblX_s15p0   (*(const Ary1D_s15p0_4 *)Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D())
#define PrmDutyCycThermProtnAbsltCuTFetMtgtnTblX_s15p0     (*(const Ary1D_s15p0_4 *)Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D())
#define PrmDutyCycThermProtnAbsltCuTTqFetMtgtnTblY_u9p7    (*(const Ary1D_u9p7_4 *) Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D())
#define PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0         (*(const Ary1D_s15p0_5 *)Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D())
#define PrmDutyCycThermProtnMplr1FetMtgtnNonStallTblY_u3p13  (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D()) 
#define PrmDutyCycThermProtnMplr2FetMtgtnNonStallTblY_u3p13  (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr3FetMtgtnNonStallTblY_u3p13  (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr4FetMtgtnNonStallTblY_u3p13  (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr5FetMtgtnNonStallTblY_u3p13  (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr6FetMtgtnNonStallTblY_u3p13  (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr1FetMtgtnStallTblY_u3p13   (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr2FetMtgtnStallTblY_u3p13   (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr3FetMtgtnStallTblY_u3p13   (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr4FetMtgtnStallTblY_u3p13   (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr5FetMtgtnStallTblY_u3p13   (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D())
#define PrmDutyCycThermProtnMplr6FetMtgtnStallTblY_u3p13   (*(const Ary1D_u3p13_5 *)Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D())

/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, DutyCycThermProtn_CODE) FiltSVReinit(uint32 IgnTiOff_Cnt_T_u32, 
													   boolean VehTiVld_Cnt_T_Logl);

static FUNC(sint16, DutyCycThermProtn_CODE) TemperatureSelection(boolean DiagcStsLimdTPrfmnc_Cnt_T_Logl, 
																 float32 EcuTFild_DegCgrd_T_f32,
																 float32 MotFetT_DegCgrd_T_f32, 
																 float32 MotMagT_DegCgrd_T_f32, 
																 float32 MotWidgT_DegCgrd_T_f32,
																 P2VAR(sint16, AUTOMATIC, DutyCycThermProtn_VAR) Mult12Temp_DegCgrd_T_s15p0,
																 P2VAR(sint16, AUTOMATIC, DutyCycThermProtn_VAR) Mult36Temp_DegCgrd_T_s15p0);

static FUNC(float32, DutyCycThermProtn_CODE) TemperatureLimiting(float32 EcuTFild_DegCgrd_T_f32, 
																 float32 MotWidgT_DegCgrd_T_f32);

static FUNC(float32, DutyCycThermProtn_CODE) MultiFilterPercMax(sint16 Mult12Temp_DegCgrd_T_s15p0, 
																sint16 Mult36Temp_DegCgrd_T_s15p0,
																boolean DutyCycThermProtnDi_Cnt_T_Logl,	
																float32 MotVelCrf_MotRadPerSec_T_f32,
																float32 MotCurrPeakEstimd_AmprSqd_T_f32, 
																float32 MotCurrPeakEstimdFild_AmprSqd_T_f32, 
																P2VAR(uint16, AUTOMATIC, DutyCycThermProtn_VAR) MaxOut_Uls_T_u16p0);

static FUNC(float32, DutyCycThermProtn_CODE) ThermalLoadLimit(float32 MotVelCrf_MotRadPerSec_T_f32, 
															  sint16 SlcTemp_DegCgrd_T_s15p0,
															  uint16 MaxOut_Uls_T_u16p0);
static FUNC(boolean,DutyCycThermProtn_CODE) DecoderandSubsystem(VAR(uint8,AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08);
static FUNC(float32,DutyCycThermProtn_CODE) TherrmalLimitScaling(boolean IvtrLoaMtgtnEna_Cnt_T_logl,
                                                                 boolean DualEcuFltMtgtnEna_Cnt_T_Logl,
                                                                 float32 AbsTempLimitSlew_MotNwtMtr_T_f32,
                                                                 float32 ThermalLoadLmt_MotNwtMtr_T_f32,
                                                                 boolean DutyCycThermProtnDi_Cnt_T_Logl,
                                                                 P2VAR(float32, AUTOMATIC, DutyCycThermProtn_VAR) ThermLoadDptLim_MotNwtMtr_T_f32,
                                                                 P2VAR(float32, AUTOMATIC, DutyCycThermProtn_VAR) ThermTempDptLim_MotNwtMtr_T_f32);

static FUNC(float32, DutyCycThermProtn_CODE) ThermalLimitStatus(boolean DutyCycThermProtnDi_Cnt_T_Logl,
                                                                float32 ThermMotTqLim_MotNwtMtr_T_f32,
                                                                uint16 MaxOut_Uls_T_u16p0,
                                                                boolean IvtrLoaMtgtnEna_Cnt_T_Logl,
                                                                boolean DualEcuFltMtgtnEna_Cnt_T_Logl);

static FUNC(uint16, DutyCycThermProtn_CODE) UseInpLowr(P2CONST(sint16, AUTOMATIC, DutyCycThermProtn_VAR)  TableX_Cnt_T_s16,
													   P2CONST(uint16, AUTOMATIC, DutyCycThermProtn_VAR)  TableY_Cnt_T_u16,
													   uint16 Size_Cnt_T_u16,
													   sint16 Input_Cnt_T_s16);
																
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
 * Boolean: Boolean
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * s15p0: Integer in interval [-32768...32767]
 * sint16: Integer in interval [-32768...32767] (standard type)
 * u16p0: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NtcNr1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_0X001 (1U)
 *   NTCNR_0X002 (2U)
 *   NTCNR_0X003 (3U)
 *   NTCNR_0X004 (4U)
 *   NTCNR_0X005 (5U)
 *   NTCNR_0X006 (6U)
 *   NTCNR_0X007 (7U)
 *   NTCNR_0X008 (8U)
 *   NTCNR_0X009 (9U)
 *   NTCNR_0X00A (10U)
 *   NTCNR_0X00B (11U)
 *   NTCNR_0X00C (12U)
 *   NTCNR_0X00D (13U)
 *   NTCNR_0X00E (14U)
 *   NTCNR_0X00F (15U)
 *   NTCNR_0X010 (16U)
 *   NTCNR_0X011 (17U)
 *   NTCNR_0X012 (18U)
 *   NTCNR_0X013 (19U)
 *   NTCNR_0X014 (20U)
 *   NTCNR_0X015 (21U)
 *   NTCNR_0X016 (22U)
 *   NTCNR_0X017 (23U)
 *   NTCNR_0X018 (24U)
 *   NTCNR_0X019 (25U)
 *   NTCNR_0X01A (26U)
 *   NTCNR_0X01B (27U)
 *   NTCNR_0X01C (28U)
 *   NTCNR_0X01D (29U)
 *   NTCNR_0X01E (30U)
 *   NTCNR_0X01F (31U)
 *   NTCNR_0X020 (32U)
 *   NTCNR_0X021 (33U)
 *   NTCNR_0X022 (34U)
 *   NTCNR_0X023 (35U)
 *   NTCNR_0X024 (36U)
 *   NTCNR_0X025 (37U)
 *   NTCNR_0X026 (38U)
 *   NTCNR_0X027 (39U)
 *   NTCNR_0X028 (40U)
 *   NTCNR_0X029 (41U)
 *   NTCNR_0X02A (42U)
 *   NTCNR_0X02B (43U)
 *   NTCNR_0X02C (44U)
 *   NTCNR_0X02D (45U)
 *   NTCNR_0X02E (46U)
 *   NTCNR_0X02F (47U)
 *   NTCNR_0X030 (48U)
 *   NTCNR_0X031 (49U)
 *   NTCNR_0X032 (50U)
 *   NTCNR_0X033 (51U)
 *   NTCNR_0X034 (52U)
 *   NTCNR_0X035 (53U)
 *   NTCNR_0X036 (54U)
 *   NTCNR_0X037 (55U)
 *   NTCNR_0X038 (56U)
 *   NTCNR_0X039 (57U)
 *   NTCNR_0X03A (58U)
 *   NTCNR_0X03B (59U)
 *   NTCNR_0X03C (60U)
 *   NTCNR_0X03D (61U)
 *   NTCNR_0X03E (62U)
 *   NTCNR_0X03F (63U)
 *   NTCNR_0X040 (64U)
 *   NTCNR_0X041 (65U)
 *   NTCNR_0X042 (66U)
 *   NTCNR_0X043 (67U)
 *   NTCNR_0X044 (68U)
 *   NTCNR_0X045 (69U)
 *   NTCNR_0X046 (70U)
 *   NTCNR_0X047 (71U)
 *   NTCNR_0X048 (72U)
 *   NTCNR_0X049 (73U)
 *   NTCNR_0X04A (74U)
 *   NTCNR_0X04B (75U)
 *   NTCNR_0X04C (76U)
 *   NTCNR_0X04D (77U)
 *   NTCNR_0X04E (78U)
 *   NTCNR_0X04F (79U)
 *   NTCNR_0X050 (80U)
 *   NTCNR_0X051 (81U)
 *   NTCNR_0X052 (82U)
 *   NTCNR_0X053 (83U)
 *   NTCNR_0X054 (84U)
 *   NTCNR_0X055 (85U)
 *   NTCNR_0X056 (86U)
 *   NTCNR_0X057 (87U)
 *   NTCNR_0X058 (88U)
 *   NTCNR_0X059 (89U)
 *   NTCNR_0X05A (90U)
 *   NTCNR_0X05B (91U)
 *   NTCNR_0X05C (92U)
 *   NTCNR_0X05D (93U)
 *   NTCNR_0X05E (94U)
 *   NTCNR_0X05F (95U)
 *   NTCNR_0X060 (96U)
 *   NTCNR_0X061 (97U)
 *   NTCNR_0X062 (98U)
 *   NTCNR_0X063 (99U)
 *   NTCNR_0X064 (100U)
 *   NTCNR_0X065 (101U)
 *   NTCNR_0X066 (102U)
 *   NTCNR_0X067 (103U)
 *   NTCNR_0X068 (104U)
 *   NTCNR_0X069 (105U)
 *   NTCNR_0X06A (106U)
 *   NTCNR_0X06B (107U)
 *   NTCNR_0X06C (108U)
 *   NTCNR_0X06D (109U)
 *   NTCNR_0X06E (110U)
 *   NTCNR_0X06F (111U)
 *   NTCNR_0X070 (112U)
 *   NTCNR_0X071 (113U)
 *   NTCNR_0X072 (114U)
 *   NTCNR_0X073 (115U)
 *   NTCNR_0X074 (116U)
 *   NTCNR_0X075 (117U)
 *   NTCNR_0X076 (118U)
 *   NTCNR_0X077 (119U)
 *   NTCNR_0X078 (120U)
 *   NTCNR_0X079 (121U)
 *   NTCNR_0X07A (122U)
 *   NTCNR_0X07B (123U)
 *   NTCNR_0X07C (124U)
 *   NTCNR_0X07D (125U)
 *   NTCNR_0X07E (126U)
 *   NTCNR_0X07F (127U)
 *   NTCNR_0X080 (128U)
 *   NTCNR_0X081 (129U)
 *   NTCNR_0X082 (130U)
 *   NTCNR_0X083 (131U)
 *   NTCNR_0X084 (132U)
 *   NTCNR_0X085 (133U)
 *   NTCNR_0X086 (134U)
 *   NTCNR_0X087 (135U)
 *   NTCNR_0X088 (136U)
 *   NTCNR_0X089 (137U)
 *   NTCNR_0X08A (138U)
 *   NTCNR_0X08B (139U)
 *   NTCNR_0X08C (140U)
 *   NTCNR_0X08D (141U)
 *   NTCNR_0X08E (142U)
 *   NTCNR_0X08F (143U)
 *   NTCNR_0X090 (144U)
 *   NTCNR_0X091 (145U)
 *   NTCNR_0X092 (146U)
 *   NTCNR_0X093 (147U)
 *   NTCNR_0X094 (148U)
 *   NTCNR_0X095 (149U)
 *   NTCNR_0X096 (150U)
 *   NTCNR_0X097 (151U)
 *   NTCNR_0X098 (152U)
 *   NTCNR_0X099 (153U)
 *   NTCNR_0X09A (154U)
 *   NTCNR_0X09B (155U)
 *   NTCNR_0X09C (156U)
 *   NTCNR_0X09D (157U)
 *   NTCNR_0X09E (158U)
 *   NTCNR_0X09F (159U)
 *   NTCNR_0X0A0 (160U)
 *   NTCNR_0X0A1 (161U)
 *   NTCNR_0X0A2 (162U)
 *   NTCNR_0X0A3 (163U)
 *   NTCNR_0X0A4 (164U)
 *   NTCNR_0X0A5 (165U)
 *   NTCNR_0X0A6 (166U)
 *   NTCNR_0X0A7 (167U)
 *   NTCNR_0X0A8 (168U)
 *   NTCNR_0X0A9 (169U)
 *   NTCNR_0X0AA (170U)
 *   NTCNR_0X0AB (171U)
 *   NTCNR_0X0AC (172U)
 *   NTCNR_0X0AD (173U)
 *   NTCNR_0X0AE (174U)
 *   NTCNR_0X0AF (175U)
 *   NTCNR_0X0B0 (176U)
 *   NTCNR_0X0B1 (177U)
 *   NTCNR_0X0B2 (178U)
 *   NTCNR_0X0B3 (179U)
 *   NTCNR_0X0B4 (180U)
 *   NTCNR_0X0B5 (181U)
 *   NTCNR_0X0B6 (182U)
 *   NTCNR_0X0B7 (183U)
 *   NTCNR_0X0B8 (184U)
 *   NTCNR_0X0B9 (185U)
 *   NTCNR_0X0BA (186U)
 *   NTCNR_0X0BB (187U)
 *   NTCNR_0X0BC (188U)
 *   NTCNR_0X0BD (189U)
 *   NTCNR_0X0BE (190U)
 *   NTCNR_0X0BF (191U)
 *   NTCNR_0X0C0 (192U)
 *   NTCNR_0X0C1 (193U)
 *   NTCNR_0X0C2 (194U)
 *   NTCNR_0X0C3 (195U)
 *   NTCNR_0X0C4 (196U)
 *   NTCNR_0X0C5 (197U)
 *   NTCNR_0X0C6 (198U)
 *   NTCNR_0X0C7 (199U)
 *   NTCNR_0X0C8 (200U)
 *   NTCNR_0X0C9 (201U)
 *   NTCNR_0X0CA (202U)
 *   NTCNR_0X0CB (203U)
 *   NTCNR_0X0CC (204U)
 *   NTCNR_0X0CD (205U)
 *   NTCNR_0X0CE (206U)
 *   NTCNR_0X0CF (207U)
 *   NTCNR_0X0D0 (208U)
 *   NTCNR_0X0D1 (209U)
 *   NTCNR_0X0D2 (210U)
 *   NTCNR_0X0D3 (211U)
 *   NTCNR_0X0D4 (212U)
 *   NTCNR_0X0D5 (213U)
 *   NTCNR_0X0D6 (214U)
 *   NTCNR_0X0D7 (215U)
 *   NTCNR_0X0D8 (216U)
 *   NTCNR_0X0D9 (217U)
 *   NTCNR_0X0DA (218U)
 *   NTCNR_0X0DB (219U)
 *   NTCNR_0X0DC (220U)
 *   NTCNR_0X0DD (221U)
 *   NTCNR_0X0DE (222U)
 *   NTCNR_0X0DF (223U)
 *   NTCNR_0X0E0 (224U)
 *   NTCNR_0X0E1 (225U)
 *   NTCNR_0X0E2 (226U)
 *   NTCNR_0X0E3 (227U)
 *   NTCNR_0X0E4 (228U)
 *   NTCNR_0X0E5 (229U)
 *   NTCNR_0X0E6 (230U)
 *   NTCNR_0X0E7 (231U)
 *   NTCNR_0X0E8 (232U)
 *   NTCNR_0X0E9 (233U)
 *   NTCNR_0X0EA (234U)
 *   NTCNR_0X0EB (235U)
 *   NTCNR_0X0EC (236U)
 *   NTCNR_0X0ED (237U)
 *   NTCNR_0X0EE (238U)
 *   NTCNR_0X0EF (239U)
 *   NTCNR_0X0F0 (240U)
 *   NTCNR_0X0F1 (241U)
 *   NTCNR_0X0F2 (242U)
 *   NTCNR_0X0F3 (243U)
 *   NTCNR_0X0F4 (244U)
 *   NTCNR_0X0F5 (245U)
 *   NTCNR_0X0F6 (246U)
 *   NTCNR_0X0F7 (247U)
 *   NTCNR_0X0F8 (248U)
 *   NTCNR_0X0F9 (249U)
 *   NTCNR_0X0FA (250U)
 *   NTCNR_0X0FB (251U)
 *   NTCNR_0X0FC (252U)
 *   NTCNR_0X0FD (253U)
 *   NTCNR_0X0FE (254U)
 *   NTCNR_0X0FF (255U)
 *   NTCNR_0X100 (256U)
 *   NTCNR_0X101 (257U)
 *   NTCNR_0X102 (258U)
 *   NTCNR_0X103 (259U)
 *   NTCNR_0X104 (260U)
 *   NTCNR_0X105 (261U)
 *   NTCNR_0X106 (262U)
 *   NTCNR_0X107 (263U)
 *   NTCNR_0X108 (264U)
 *   NTCNR_0X109 (265U)
 *   NTCNR_0X10A (266U)
 *   NTCNR_0X10B (267U)
 *   NTCNR_0X10C (268U)
 *   NTCNR_0X10D (269U)
 *   NTCNR_0X10E (270U)
 *   NTCNR_0X10F (271U)
 *   NTCNR_0X110 (272U)
 *   NTCNR_0X111 (273U)
 *   NTCNR_0X112 (274U)
 *   NTCNR_0X113 (275U)
 *   NTCNR_0X114 (276U)
 *   NTCNR_0X115 (277U)
 *   NTCNR_0X116 (278U)
 *   NTCNR_0X117 (279U)
 *   NTCNR_0X118 (280U)
 *   NTCNR_0X119 (281U)
 *   NTCNR_0X11A (282U)
 *   NTCNR_0X11B (283U)
 *   NTCNR_0X11C (284U)
 *   NTCNR_0X11D (285U)
 *   NTCNR_0X11E (286U)
 *   NTCNR_0X11F (287U)
 *   NTCNR_0X120 (288U)
 *   NTCNR_0X121 (289U)
 *   NTCNR_0X122 (290U)
 *   NTCNR_0X123 (291U)
 *   NTCNR_0X124 (292U)
 *   NTCNR_0X125 (293U)
 *   NTCNR_0X126 (294U)
 *   NTCNR_0X127 (295U)
 *   NTCNR_0X128 (296U)
 *   NTCNR_0X129 (297U)
 *   NTCNR_0X12A (298U)
 *   NTCNR_0X12B (299U)
 *   NTCNR_0X12C (300U)
 *   NTCNR_0X12D (301U)
 *   NTCNR_0X12E (302U)
 *   NTCNR_0X12F (303U)
 *   NTCNR_0X130 (304U)
 *   NTCNR_0X131 (305U)
 *   NTCNR_0X132 (306U)
 *   NTCNR_0X133 (307U)
 *   NTCNR_0X134 (308U)
 *   NTCNR_0X135 (309U)
 *   NTCNR_0X136 (310U)
 *   NTCNR_0X137 (311U)
 *   NTCNR_0X138 (312U)
 *   NTCNR_0X139 (313U)
 *   NTCNR_0X13A (314U)
 *   NTCNR_0X13B (315U)
 *   NTCNR_0X13C (316U)
 *   NTCNR_0X13D (317U)
 *   NTCNR_0X13E (318U)
 *   NTCNR_0X13F (319U)
 *   NTCNR_0X140 (320U)
 *   NTCNR_0X141 (321U)
 *   NTCNR_0X142 (322U)
 *   NTCNR_0X143 (323U)
 *   NTCNR_0X144 (324U)
 *   NTCNR_0X145 (325U)
 *   NTCNR_0X146 (326U)
 *   NTCNR_0X147 (327U)
 *   NTCNR_0X148 (328U)
 *   NTCNR_0X149 (329U)
 *   NTCNR_0X14A (330U)
 *   NTCNR_0X14B (331U)
 *   NTCNR_0X14C (332U)
 *   NTCNR_0X14D (333U)
 *   NTCNR_0X14E (334U)
 *   NTCNR_0X14F (335U)
 *   NTCNR_0X150 (336U)
 *   NTCNR_0X151 (337U)
 *   NTCNR_0X152 (338U)
 *   NTCNR_0X153 (339U)
 *   NTCNR_0X154 (340U)
 *   NTCNR_0X155 (341U)
 *   NTCNR_0X156 (342U)
 *   NTCNR_0X157 (343U)
 *   NTCNR_0X158 (344U)
 *   NTCNR_0X159 (345U)
 *   NTCNR_0X15A (346U)
 *   NTCNR_0X15B (347U)
 *   NTCNR_0X15C (348U)
 *   NTCNR_0X15D (349U)
 *   NTCNR_0X15E (350U)
 *   NTCNR_0X15F (351U)
 *   NTCNR_0X160 (352U)
 *   NTCNR_0X161 (353U)
 *   NTCNR_0X162 (354U)
 *   NTCNR_0X163 (355U)
 *   NTCNR_0X164 (356U)
 *   NTCNR_0X165 (357U)
 *   NTCNR_0X166 (358U)
 *   NTCNR_0X167 (359U)
 *   NTCNR_0X168 (360U)
 *   NTCNR_0X169 (361U)
 *   NTCNR_0X16A (362U)
 *   NTCNR_0X16B (363U)
 *   NTCNR_0X16C (364U)
 *   NTCNR_0X16D (365U)
 *   NTCNR_0X16E (366U)
 *   NTCNR_0X16F (367U)
 *   NTCNR_0X170 (368U)
 *   NTCNR_0X171 (369U)
 *   NTCNR_0X172 (370U)
 *   NTCNR_0X173 (371U)
 *   NTCNR_0X174 (372U)
 *   NTCNR_0X175 (373U)
 *   NTCNR_0X176 (374U)
 *   NTCNR_0X177 (375U)
 *   NTCNR_0X178 (376U)
 *   NTCNR_0X179 (377U)
 *   NTCNR_0X17A (378U)
 *   NTCNR_0X17B (379U)
 *   NTCNR_0X17C (380U)
 *   NTCNR_0X17D (381U)
 *   NTCNR_0X17E (382U)
 *   NTCNR_0X17F (383U)
 *   NTCNR_0X180 (384U)
 *   NTCNR_0X181 (385U)
 *   NTCNR_0X182 (386U)
 *   NTCNR_0X183 (387U)
 *   NTCNR_0X184 (388U)
 *   NTCNR_0X185 (389U)
 *   NTCNR_0X186 (390U)
 *   NTCNR_0X187 (391U)
 *   NTCNR_0X188 (392U)
 *   NTCNR_0X189 (393U)
 *   NTCNR_0X18A (394U)
 *   NTCNR_0X18B (395U)
 *   NTCNR_0X18C (396U)
 *   NTCNR_0X18D (397U)
 *   NTCNR_0X18E (398U)
 *   NTCNR_0X18F (399U)
 *   NTCNR_0X190 (400U)
 *   NTCNR_0X191 (401U)
 *   NTCNR_0X192 (402U)
 *   NTCNR_0X193 (403U)
 *   NTCNR_0X194 (404U)
 *   NTCNR_0X195 (405U)
 *   NTCNR_0X196 (406U)
 *   NTCNR_0X197 (407U)
 *   NTCNR_0X198 (408U)
 *   NTCNR_0X199 (409U)
 *   NTCNR_0X19A (410U)
 *   NTCNR_0X19B (411U)
 *   NTCNR_0X19C (412U)
 *   NTCNR_0X19D (413U)
 *   NTCNR_0X19E (414U)
 *   NTCNR_0X19F (415U)
 *   NTCNR_0X1A0 (416U)
 *   NTCNR_0X1A1 (417U)
 *   NTCNR_0X1A2 (418U)
 *   NTCNR_0X1A3 (419U)
 *   NTCNR_0X1A4 (420U)
 *   NTCNR_0X1A5 (421U)
 *   NTCNR_0X1A6 (422U)
 *   NTCNR_0X1A7 (423U)
 *   NTCNR_0X1A8 (424U)
 *   NTCNR_0X1A9 (425U)
 *   NTCNR_0X1AA (426U)
 *   NTCNR_0X1AB (427U)
 *   NTCNR_0X1AC (428U)
 *   NTCNR_0X1AD (429U)
 *   NTCNR_0X1AE (430U)
 *   NTCNR_0X1AF (431U)
 *   NTCNR_0X1B0 (432U)
 *   NTCNR_0X1B1 (433U)
 *   NTCNR_0X1B2 (434U)
 *   NTCNR_0X1B3 (435U)
 *   NTCNR_0X1B4 (436U)
 *   NTCNR_0X1B5 (437U)
 *   NTCNR_0X1B6 (438U)
 *   NTCNR_0X1B7 (439U)
 *   NTCNR_0X1B8 (440U)
 *   NTCNR_0X1B9 (441U)
 *   NTCNR_0X1BA (442U)
 *   NTCNR_0X1BB (443U)
 *   NTCNR_0X1BC (444U)
 *   NTCNR_0X1BD (445U)
 *   NTCNR_0X1BE (446U)
 *   NTCNR_0X1BF (447U)
 *   NTCNR_0X1C0 (448U)
 *   NTCNR_0X1C1 (449U)
 *   NTCNR_0X1C2 (450U)
 *   NTCNR_0X1C3 (451U)
 *   NTCNR_0X1C4 (452U)
 *   NTCNR_0X1C5 (453U)
 *   NTCNR_0X1C6 (454U)
 *   NTCNR_0X1C7 (455U)
 *   NTCNR_0X1C8 (456U)
 *   NTCNR_0X1C9 (457U)
 *   NTCNR_0X1CA (458U)
 *   NTCNR_0X1CB (459U)
 *   NTCNR_0X1CC (460U)
 *   NTCNR_0X1CD (461U)
 *   NTCNR_0X1CE (462U)
 *   NTCNR_0X1CF (463U)
 *   NTCNR_0X1D0 (464U)
 *   NTCNR_0X1D1 (465U)
 *   NTCNR_0X1D2 (466U)
 *   NTCNR_0X1D3 (467U)
 *   NTCNR_0X1D4 (468U)
 *   NTCNR_0X1D5 (469U)
 *   NTCNR_0X1D6 (470U)
 *   NTCNR_0X1D7 (471U)
 *   NTCNR_0X1D8 (472U)
 *   NTCNR_0X1D9 (473U)
 *   NTCNR_0X1DA (474U)
 *   NTCNR_0X1DB (475U)
 *   NTCNR_0X1DC (476U)
 *   NTCNR_0X1DD (477U)
 *   NTCNR_0X1DE (478U)
 *   NTCNR_0X1DF (479U)
 *   NTCNR_0X1E0 (480U)
 *   NTCNR_0X1E1 (481U)
 *   NTCNR_0X1E2 (482U)
 *   NTCNR_0X1E3 (483U)
 *   NTCNR_0X1E4 (484U)
 *   NTCNR_0X1E5 (485U)
 *   NTCNR_0X1E6 (486U)
 *   NTCNR_0X1E7 (487U)
 *   NTCNR_0X1E8 (488U)
 *   NTCNR_0X1E9 (489U)
 *   NTCNR_0X1EA (490U)
 *   NTCNR_0X1EB (491U)
 *   NTCNR_0X1EC (492U)
 *   NTCNR_0X1ED (493U)
 *   NTCNR_0X1EE (494U)
 *   NTCNR_0X1EF (495U)
 *   NTCNR_0X1F0 (496U)
 *   NTCNR_0X1F1 (497U)
 *   NTCNR_0X1F2 (498U)
 *   NTCNR_0X1F3 (499U)
 *   NTCNR_0X1F4 (500U)
 *   NTCNR_0X1F5 (501U)
 *   NTCNR_0X1F6 (502U)
 *   NTCNR_0X1F7 (503U)
 *   NTCNR_0X1F8 (504U)
 *   NTCNR_0X1F9 (505U)
 *   NTCNR_0X1FA (506U)
 *   NTCNR_0X1FB (507U)
 *   NTCNR_0X1FC (508U)
 *   NTCNR_0X1FD (509U)
 *   NTCNR_0X1FE (510U)
 *   NTCNR_0X1FF (511U)
 * NtcSts1: Enumeration of integer in interval [0...255] with enumerators
 *   NTCSTS_PASSD (0U)
 *   NTCSTS_FAILD (1U)
 *   NTCSTS_PREPASSD (2U)
 *   NTCSTS_PREFAILD (3U)
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Ary1D_s15p0_4: Array with 4 element(s) of type s15p0
 * Ary1D_s15p0_5: Array with 5 element(s) of type s15p0
 * Ary1D_u16p0_8: Array with 8 element(s) of type u16p0
 * Ary1D_u3p13_5: Array with 5 element(s) of type u3p13
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
 * Ary1D_u9p7_5: Array with 5 element(s) of type u9p7
 * Ary1D_u9p7_8: Array with 8 element(s) of type u9p7
 * Ary2D_u16p0_2_8: Array with 2 element(s) of type Ary1D_u16p0_8
 * Ary2D_u9p7_2_5: Array with 2 element(s) of type Ary1D_u9p7_5
 * Ary2D_u9p7_2_8: Array with 2 element(s) of type Ary1D_u9p7_8
 *
 * Record Types:
 * =============
 * DutyCycThermProtnFilStValRec1: Record with elements
 *   Fil3StVal of type uint8
 *   Fil4StVal of type uint8
 *   Fil5StVal of type uint8
 *   Fil6StVal of type uint8
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
 *   float32 *Rte_Pim_AbsltTLimSlewStVari(void)
 *   float32 *Rte_Pim_LstTblValRateLimrStVari(void)
 *   float32 *Rte_Pim_ReInitCntrVal(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnAbsltTTqLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnMplr12T(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnMplr36T(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnThermLoadLim(void)
 *   float32 *Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal(void)
 *   u9p7 *Rte_Pim_dDutyCycThermProtnLstTblVal(void)
 *   u9p7 *Rte_Pim_dDutyCycThermProtnLstTblValSlew(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr1(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr2(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr3(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr4(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr5(void)
 *   u3p13 *Rte_Pim_dDutyCycThermProtnMplr6(void)
 *   uint8 *Rte_Pim_FetMtgtnEnaCalIdx(void)
 *   uint8 *Rte_Pim_Fil3ValPwrUp(void)
 *   uint8 *Rte_Pim_Fil4ValPwrUp(void)
 *   uint8 *Rte_Pim_Fil5ValPwrUp(void)
 *   uint8 *Rte_Pim_Fil6ValPwrUp(void)
 *   boolean *Rte_Pim_FetLoaMtgtnEnaPrev(void)
 *   boolean *Rte_Pim_ReInitCntrFlg(void)
 *   FilLpRec1 *Rte_Pim_Fil1ValStVari(void)
 *   FilLpRec1 *Rte_Pim_Fil2ValStVari(void)
 *   DutyCycThermProtnFilStValRec1 *Rte_Pim_FilStVal(void)
 *   FilLpRec1 *Rte_Pim_Fild3Val(void)
 *   FilLpRec1 *Rte_Pim_Fild4Val(void)
 *   FilLpRec1 *Rte_Pim_Fild5Val(void)
 *   FilLpRec1 *Rte_Pim_Fild6Val(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnCtrlT_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnThermLimScaFac_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val(void)
 *   float32 Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val(void)
 *   u16p0 Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val(void)
 *   boolean Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnMplrTSeln_Logl(void)
 *   boolean Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl(void)
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCtrlTFetMtgtnTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCtrlTTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCtrlTTqTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCuTFetMtgtnTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   s15p0 *Rte_Prm_DutyCycThermProtnAbsltCuTTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCuTTqFetMtgtnTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnAbsltCuTTqTblY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_DutyCycThermProtnLstTblValNonStall_Ary2D(void)
 *     Returnvalue: u9p7* is of type Ary2D_u9p7_2_5
 *   u9p7 *Rte_Prm_DutyCycThermProtnLstTblValStall_Ary2D(void)
 *     Returnvalue: u9p7* is of type Ary2D_u9p7_2_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr1StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr2StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr3StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr4StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr5StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6FetMtgtnNonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6FetMtgtnStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6NonStallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   u3p13 *Rte_Prm_DutyCycThermProtnMplr6StallTblY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_5
 *   s15p0 *Rte_Prm_DutyCycThermProtnMplrFetMtgtnTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_5
 *   s15p0 *Rte_Prm_DutyCycThermProtnMplrTblX_Ary1D(void)
 *     Returnvalue: s15p0* is of type Ary1D_s15p0_5
 *   u16p0 *Rte_Prm_DutyCycThermProtnThermLoadLimTblX_Ary2D(void)
 *     Returnvalue: u16p0* is of type Ary2D_u16p0_2_8
 *   u9p7 *Rte_Prm_DutyCycThermProtnThermLoadLimTblY_Ary2D(void)
 *     Returnvalue: u9p7* is of type Ary2D_u9p7_2_8
 *
 *********************************************************************************************************************/


#define DutyCycThermProtn_START_SEC_CODE
#include "DutyCycThermProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DutyCycThermProtnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DutyCycThermProtnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_IgnTiOff_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_VehTiVld_Logl(boolean *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_DutyCycThermProtnInit1_FilStVariReInitFlg(boolean data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FilStVal_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_FilStVal_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DutyCycThermProtnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DutyCycThermProtn_CODE) DutyCycThermProtnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DutyCycThermProtnInit1
 *********************************************************************************************************************/
	VAR(boolean, AUTOMATIC) 				DutyCycThermProtnDi_Cnt_T_Logl;
	VAR(uint32, AUTOMATIC) 					IgnTiOff_Cnt_T_u32;
	VAR(boolean, AUTOMATIC) 				VehTiVld_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) 				FilStVariReInitFlg_Cnt_T_Logl;
	VAR(NvM_RequestResultType, AUTOMATIC)	ErrSts_Cnt_T_enum;
	VAR(uint8, AUTOMATIC)                   MotAndThermProtnLoaMod_Cnt_T_u08;
	VAR(boolean, AUTOMATIC)                 FetLoaMtgtnEna_Cnt_T_logl;
	/*Reading inputs from RTE*/
	(void)Rte_Read_DutyCycThermProtnDi_Logl(&DutyCycThermProtnDi_Cnt_T_Logl);
	(void)Rte_Read_IgnTiOff_Val(&IgnTiOff_Cnt_T_u32);
	(void)Rte_Read_VehTiVld_Logl(&VehTiVld_Cnt_T_Logl);
	(void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);
	
	/* Set Initial Value of AbsTempLimitSlew */
	if(*Rte_Pim_FetMtgtnEnaCalIdx() == 0U)
	{ 
	    *Rte_Pim_AbsltTLimSlewStVari() = FixdToFloat_f32_u16(PrmDutyCycThermProtnAbsltCtrlTTqTblY_u9p7[0], NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	}
	else
	{
	    
	    *Rte_Pim_AbsltTLimSlewStVari() = FixdToFloat_f32_u16(PrmDutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_u9p7[0], NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	}
	
	/* Set Initial Value of LstTblValRateLimrStVari */
	*Rte_Pim_LstTblValRateLimrStVari() = FixdToFloat_f32_u16(PrmDutyCycThermProtnThermLoadLimTblY_u9p7[*(Rte_Pim_FetMtgtnEnaCalIdx())][THERMLOADLIMTBLIDX_ULS_U08 - 1U], NXTRFIXDPT_P7TOFLOAT_ULS_F32);
		
	/* FilStVal_GetErrorStatus */
	(void)Rte_Call_FilStVal_GetErrorStatus(&ErrSts_Cnt_T_enum);
	
	if(NVM_REQ_OK != ErrSts_Cnt_T_enum)
	 {
		Rte_Pim_FilStVal()->Fil3StVal = 0U;
		Rte_Pim_FilStVal()->Fil4StVal = 0U;
		Rte_Pim_FilStVal()->Fil5StVal = 0U;
		Rte_Pim_FilStVal()->Fil6StVal = 0U;
	}
	else
	{
		/*No update required, value is unaltered*/
	}
	/*Low Pass Filter initialization*/
	FilLpInit(0.0F, FIL1LPFILFRQ_HZ_F32, ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_Fil1ValStVari());	
	FilLpInit(0.0F, FIL2LPFILFRQ_HZ_F32, ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_Fil2ValStVari());	
	FilLpInit(0.0F, FIL3LPFILFRQ_HZ_F32, ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_Fild3Val());
	FilLpInit(0.0F, FIL4LPFILFRQ_HZ_F32, ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_Fild4Val());
	FilLpInit(0.0F, FIL5LPFILFRQ_HZ_F32, ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_Fild5Val());
	FilLpInit(0.0F, FIL6LPFILFRQ_HZ_F32, ARCHGLBPRM_100MILLISEC_SEC_F32, Rte_Pim_Fild6Val());
	
	/*** Start of Decoder ***/
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK4_CNT_U08)== BITMASK4_CNT_U08)
	{
	    FetLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    FetLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	
	if(FALSE == FetLoaMtgtnEna_Cnt_T_logl)
	{
	    *Rte_Pim_FetMtgtnEnaCalIdx() = CALVALMIN_ULS_U08;
	}
	else
	{
	    *Rte_Pim_FetMtgtnEnaCalIdx() = CTRLRTFLT_CNT_U08;
	}
	/*** End of Decoder ***/
		
	/* PowerOnTasks */
	if((TRUE == VehTiVld_Cnt_T_Logl) && (FALSE == DutyCycThermProtnDi_Cnt_T_Logl) && ((float32)IgnTiOff_Cnt_T_u32 <= IGNTIOFFTHD_CNT_F32) )	
	{
        /* Code Prover flags possible float32 overflow on this block of code. This has been reviewed and is not possible. (file version 8) */
		/* FiltExpDecay calculations*/
		Rte_Pim_Fild3Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU3_SEC_F32) * (float32)(Rte_Pim_FilStVal()->Fil3StVal);
		Rte_Pim_Fild4Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU4_SEC_F32) * (float32)(Rte_Pim_FilStVal()->Fil4StVal);
		Rte_Pim_Fild5Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU5_SEC_F32) * (float32)(Rte_Pim_FilStVal()->Fil5StVal);
		Rte_Pim_Fild6Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU6_SEC_F32) * (float32)(Rte_Pim_FilStVal()->Fil6StVal);
	
	}
	else
	{
		/* FiltExpDecay calculations*/
		Rte_Pim_Fild3Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild4Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild5Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild6Val()->FilSt = FILVALMIN_ULS_F32;
	
	}
 	

	if((FALSE == VehTiVld_Cnt_T_Logl) && (TRUE == Rte_Prm_DutyCycThermProtnIgnOffCtrlEna_Logl()))
	{
		FilStVariReInitFlg_Cnt_T_Logl = TRUE;
	}
	else
	{
		FilStVariReInitFlg_Cnt_T_Logl = FALSE;
	}
	
	/* Initialize Counter flag and value*/
	*Rte_Pim_ReInitCntrFlg() = TRUE;
	*Rte_Pim_ReInitCntrVal() = 0.0F;
 
	*Rte_Pim_Fil3ValPwrUp() = Rte_Pim_FilStVal()->Fil3StVal;
	*Rte_Pim_Fil4ValPwrUp() = Rte_Pim_FilStVal()->Fil4StVal;
	*Rte_Pim_Fil5ValPwrUp() = Rte_Pim_FilStVal()->Fil5StVal;
	*Rte_Pim_Fil6ValPwrUp() = Rte_Pim_FilStVal()->Fil6StVal;
   
	/* Set the RAM block status to ensure NvM write on power down */
	(void)Rte_Call_FilStVal_SetRamBlockStatus(TRUE);
    
	/*Writing outputs to RTE*/
	Rte_IrvWrite_DutyCycThermProtnInit1_FilStVariReInitFlg(FilStVariReInitFlg_Cnt_T_Logl);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DutyCycThermProtnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DiagcStsLimdTPrfmnc_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_DutyCycThermProtnDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_IgnTiOff_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrPeakEstimdFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotFetT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotMagT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotWidgT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehTiVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DutyCycThermProtnMaxOutp_Val(uint16 data)
 *   Std_ReturnType Rte_Write_ThermDutyCycProtnLoadDptLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermDutyCycProtnTDptLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermLimSlowFilMax_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermMotTqLim_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermRednFac_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_DutyCycThermProtnPer1_FilStVariReInitFlg(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DutyCycThermProtnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DutyCycThermProtn_CODE) DutyCycThermProtnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DutyCycThermProtnPer1
 *********************************************************************************************************************/
	/* Local Variable Definition*/
	VAR(boolean, AUTOMATIC) DiagcStsLimdTPrfmnc_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) DutyCycThermProtnDi_Cnt_T_Logl;
    VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) DualEcuFltMtgtnEna_Cnt_T_Logl;
	VAR(float32, AUTOMATIC) EcuTFild_DegCgrd_T_f32;
	VAR(uint32, AUTOMATIC) IgnTiOff_Cnt_T_u32;
	VAR(float32, AUTOMATIC) MotCurrPeakEstimd_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) MotCurrPeakEstimdFild_AmprSqd_T_f32;
	VAR(float32, AUTOMATIC) MotFetT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotMagT_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) MotWidgT_DegCgrd_T_f32;
	VAR(boolean, AUTOMATIC) VehTiVld_Cnt_T_Logl;
	VAR(sint16, AUTOMATIC) Mult12Temp_DegCgrd_T_s15p0;
	VAR(sint16, AUTOMATIC) Mult36Temp_DegCgrd_T_s15p0;
	VAR(float32, AUTOMATIC) AbsTempLimitSlew_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) ThermMotTqLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) ThermRednFac_Uls_T_f32;
	VAR(float32, AUTOMATIC) ThermLimSlowFilMax_Uls_T_f32;
	VAR(uint16, AUTOMATIC) MaxOut_Uls_T_u16p0;
	VAR(float32, AUTOMATIC) ThermalLoadLmt_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) ThermDutyCycProtnLoadDptLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) ThermDutyCycProtnTDptLim_MotNwtMtr_T_f32;
	VAR(sint16, AUTOMATIC) SlcTemp_DegCgrd_T_s15p0;
    VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
	
	/*Reading inputs from RTE*/
	(void)Rte_Read_DiagcStsLimdTPrfmnc_Logl(&DiagcStsLimdTPrfmnc_Cnt_T_Logl);
	(void)Rte_Read_DutyCycThermProtnDi_Logl(&DutyCycThermProtnDi_Cnt_T_Logl);
	(void)Rte_Read_EcuTFild_Val(&EcuTFild_DegCgrd_T_f32);
	(void)Rte_Read_IgnTiOff_Val(&IgnTiOff_Cnt_T_u32);
	(void)Rte_Read_MotCurrPeakEstimd_Val(&MotCurrPeakEstimd_AmprSqd_T_f32);
	(void)Rte_Read_MotCurrPeakEstimdFild_Val(&MotCurrPeakEstimdFild_AmprSqd_T_f32);
	(void)Rte_Read_MotFetT_Val(&MotFetT_DegCgrd_T_f32);
	(void)Rte_Read_MotMagT_Val(&MotMagT_DegCgrd_T_f32);
	(void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
	(void)Rte_Read_MotWidgT_Val(&MotWidgT_DegCgrd_T_f32);
	(void)Rte_Read_VehTiVld_Logl(&VehTiVld_Cnt_T_Logl);
    (void)Rte_Read_DualEcuFltMtgtnEna_Logl(&DualEcuFltMtgtnEna_Cnt_T_Logl);
    (void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);
	
	/* ServiceDefeatFiltSVReinit */
	if(TRUE == DutyCycThermProtnDi_Cnt_T_Logl)
	{
		/* FiltExpDecay Calculation */
		Rte_Pim_Fild3Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild4Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild5Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild6Val()->FilSt = FILVALMIN_ULS_F32;
		
	}
	else if((TRUE == Rte_IrvRead_DutyCycThermProtnPer1_FilStVariReInitFlg()) && (TRUE == *Rte_Pim_ReInitCntrFlg()))
	{
		FiltSVReinit(IgnTiOff_Cnt_T_u32, VehTiVld_Cnt_T_Logl);
	}
	else
	{
		/*No update required, value is unaltered*/
	}
	
	/* "TemperatureSelection" Subsystem Implementation */
	SlcTemp_DegCgrd_T_s15p0 = TemperatureSelection(DiagcStsLimdTPrfmnc_Cnt_T_Logl, EcuTFild_DegCgrd_T_f32, MotFetT_DegCgrd_T_f32,
													MotMagT_DegCgrd_T_f32, MotWidgT_DegCgrd_T_f32, &Mult12Temp_DegCgrd_T_s15p0, &Mult36Temp_DegCgrd_T_s15p0);
	
	/* "TemperatureLimiting" Subsystem Implementation */
	AbsTempLimitSlew_MotNwtMtr_T_f32 = TemperatureLimiting(EcuTFild_DegCgrd_T_f32, MotWidgT_DegCgrd_T_f32);
	
	/*LoadLimiting subsystem implementation*/	
	/*Multiplier subsystem and FilterPercMax implementation*/
	ThermLimSlowFilMax_Uls_T_f32 = 	MultiFilterPercMax(Mult12Temp_DegCgrd_T_s15p0, Mult36Temp_DegCgrd_T_s15p0, DutyCycThermProtnDi_Cnt_T_Logl,
														MotVelCrf_MotRadPerSec_T_f32, MotCurrPeakEstimd_AmprSqd_T_f32,
														MotCurrPeakEstimdFild_AmprSqd_T_f32, &MaxOut_Uls_T_u16p0);
									
	ThermalLoadLmt_MotNwtMtr_T_f32 = ThermalLoadLimit(MotVelCrf_MotRadPerSec_T_f32, SlcTemp_DegCgrd_T_s15p0, MaxOut_Uls_T_u16p0);
	
	/*PowerOffTasks subsystem implementation*/
	
	Rte_Pim_FilStVal()->Fil3StVal = (uint8)(Lim_f32(Rte_Pim_Fild3Val()->FilSt,FILVALMIN_ULS_F32,FILVALMAX_ULS_F32));
	Rte_Pim_FilStVal()->Fil4StVal = (uint8)(Lim_f32(Rte_Pim_Fild4Val()->FilSt,FILVALMIN_ULS_F32,FILVALMAX_ULS_F32));
	Rte_Pim_FilStVal()->Fil5StVal = (uint8)(Lim_f32(Rte_Pim_Fild5Val()->FilSt,FILVALMIN_ULS_F32,FILVALMAX_ULS_F32));
	Rte_Pim_FilStVal()->Fil6StVal = (uint8)(Lim_f32(Rte_Pim_Fild6Val()->FilSt,FILVALMIN_ULS_F32,FILVALMAX_ULS_F32));
    
	IvtrLoaMtgtnEna_Cnt_T_logl = DecoderandSubsystem(MotAndThermProtnLoaMod_Cnt_T_u08);
	
    ThermMotTqLim_MotNwtMtr_T_f32 = TherrmalLimitScaling(IvtrLoaMtgtnEna_Cnt_T_logl,
                                                         DualEcuFltMtgtnEna_Cnt_T_Logl,
                                                         AbsTempLimitSlew_MotNwtMtr_T_f32,
                                                         ThermalLoadLmt_MotNwtMtr_T_f32,
                                                         DutyCycThermProtnDi_Cnt_T_Logl,
                                                         &ThermDutyCycProtnLoadDptLim_MotNwtMtr_T_f32,
                                                         &ThermDutyCycProtnTDptLim_MotNwtMtr_T_f32);
	
	ThermRednFac_Uls_T_f32 = ThermalLimitStatus(DutyCycThermProtnDi_Cnt_T_Logl, 
                                                ThermMotTqLim_MotNwtMtr_T_f32,
                                                MaxOut_Uls_T_u16p0,
                                                IvtrLoaMtgtnEna_Cnt_T_logl,
                                                DualEcuFltMtgtnEna_Cnt_T_Logl);
	
	(void)Rte_Write_ThermLimSlowFilMax_Val(ThermLimSlowFilMax_Uls_T_f32);	
	(void)Rte_Write_ThermMotTqLim_Val(ThermMotTqLim_MotNwtMtr_T_f32);		
	(void)Rte_Write_ThermRednFac_Val(ThermRednFac_Uls_T_f32);				
	(void)Rte_Write_DutyCycThermProtnMaxOutp_Val(MaxOut_Uls_T_u16p0);
    (void)Rte_Write_ThermDutyCycProtnLoadDptLim_Val(ThermDutyCycProtnLoadDptLim_MotNwtMtr_T_f32);
    (void)Rte_Write_ThermDutyCycProtnTDptLim_Val(ThermDutyCycProtnTDptLim_MotNwtMtr_T_f32);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DutyCycThermProtn_STOP_SEC_CODE
#include "DutyCycThermProtn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
  /*****************************************************************************************************************
  * Name        	:   FiltSVReinit
  * Description 	:   Implementation of 'FiltSVReinit' subsystem. 
  *			    	:	This function performs original Filter State Variable Reinit Routine
  * Inputs      	:   IgnTiOff_Cnt_T_u32, VehTiVld_Cnt_T_Logl
  * Outputs    		:   None
  * Returns    		:   None
  * Usage Notes 	:   None
  ****************************************************************************************************************/
  
static FUNC(void, DutyCycThermProtn_CODE) FiltSVReinit(uint32 IgnTiOff_Cnt_T_u32, boolean VehTiVld_Cnt_T_Logl)
{
	/* VehTiVldEnabled */
	if( (TRUE == VehTiVld_Cnt_T_Logl)  && ((float32)IgnTiOff_Cnt_T_u32 <= IGNTIOFFTHD_CNT_F32) )
	{
        /* Code Prover flags possible float32 overflow on this block of code. This has been reviewed and is not possible. (file version 8) */
		/* FiltExpDecay Calculation */
		Rte_Pim_Fild3Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU3_SEC_F32) * ((float32)*Rte_Pim_Fil3ValPwrUp());
		Rte_Pim_Fild4Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU4_SEC_F32) * ((float32)*Rte_Pim_Fil4ValPwrUp());
		Rte_Pim_Fild5Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU5_SEC_F32) * ((float32)*Rte_Pim_Fil5ValPwrUp());
		Rte_Pim_Fild6Val()->FilSt = Exp_f32((-(float32)IgnTiOff_Cnt_T_u32) / TAU6_SEC_F32) * ((float32)*Rte_Pim_Fil6ValPwrUp());
	}
		/* VehTiVldDisabled */
	
	
	else
	{
		/* FiltExpDecay Calculation */
		Rte_Pim_Fild3Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild4Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild5Val()->FilSt = FILVALMIN_ULS_F32;
		Rte_Pim_Fild6Val()->FilSt = FILVALMIN_ULS_F32;	
	}

	
	if((*Rte_Pim_ReInitCntrVal() <= Rte_Prm_DutyCycThermProtnIgnOffMsgWaitTi_Val()) && (FALSE == VehTiVld_Cnt_T_Logl))	
	{
		*Rte_Pim_ReInitCntrFlg() = TRUE;		
	}
	else
	{
		*Rte_Pim_ReInitCntrFlg() = FALSE;
	}
	
	*Rte_Pim_ReInitCntrVal() = *Rte_Pim_ReInitCntrVal() + ARCHGLBPRM_100MILLISEC_SEC_F32;
	
}
  /*****************************************************************************************************************
  * Name        	:   TemperatureSelection
  * Description 	:   Implementation of 'TemperatureSelection' subsystem. 
  * Inputs      	:   DiagcStsLimdTPrfmnc_Cnt_T_Logl, EcuTFild_DegCgrd_T_f32, MotFetT_DegCgrd_T_f32, 
  *					:	MotMagT_DegCgrd_T_f32, MotWidgT_DegCgrd_T_f32,
  * Outputs    		:   Mult12Temp_DegCgrd_T_s15p0, Mult36Temp_DegCgrd_T_s15p0
  * Returns    		:   SlcTemp_DegCgrd_T_s15p0
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(sint16, DutyCycThermProtn_CODE) TemperatureSelection(boolean DiagcStsLimdTPrfmnc_Cnt_T_Logl, float32 EcuTFild_DegCgrd_T_f32,
											float32 MotFetT_DegCgrd_T_f32, float32 MotMagT_DegCgrd_T_f32, float32 MotWidgT_DegCgrd_T_f32,
											P2VAR(sint16, AUTOMATIC, DutyCycThermProtn_VAR) Mult12Temp_DegCgrd_T_s15p0,
											P2VAR(sint16, AUTOMATIC, DutyCycThermProtn_VAR) Mult36Temp_DegCgrd_T_s15p0)
{
	VAR(sint16, AUTOMATIC) SlcTemp_DegCgrd_T_s15p0;
	VAR(float32, AUTOMATIC) Mult12Temp_DegCgrd_T_f32;
	VAR(float32, AUTOMATIC) Mult36Temp_DegCgrd_T_f32;
	
	/* "TemperatureSelection" Subsystem Implementation */
	if(TRUE == DiagcStsLimdTPrfmnc_Cnt_T_Logl)		
	{
		Mult12Temp_DegCgrd_T_f32 = Rte_Prm_DutyCycThermProtnCtrlT_Val();	
		Mult36Temp_DegCgrd_T_f32 = Rte_Prm_DutyCycThermProtnCtrlT_Val();
	}
	else 
	{	
		if (TRUE == Rte_Prm_DutyCycThermProtnCtrlTSeln_Logl())
		{
			Mult12Temp_DegCgrd_T_f32 = EcuTFild_DegCgrd_T_f32;				
		}
		else 
		{
			Mult12Temp_DegCgrd_T_f32 = MotFetT_DegCgrd_T_f32;
		}
		
		
		if (TRUE == Rte_Prm_DutyCycThermProtnMotPrTSeln_Logl())
		{
			Mult36Temp_DegCgrd_T_f32 = MotMagT_DegCgrd_T_f32;
		}
		else
		{
			Mult36Temp_DegCgrd_T_f32 = MotWidgT_DegCgrd_T_f32;
		}
		
	}
	
	*Rte_Pim_dDutyCycThermProtnMplr12T() = Mult12Temp_DegCgrd_T_f32;
	*Rte_Pim_dDutyCycThermProtnMplr36T() = Mult36Temp_DegCgrd_T_f32;
	
	*Mult12Temp_DegCgrd_T_s15p0 = FloatToFixd_s16_f32(Mult12Temp_DegCgrd_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
	*Mult36Temp_DegCgrd_T_s15p0 = FloatToFixd_s16_f32(Mult36Temp_DegCgrd_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
		
	/*SlcTemp output calculation*/
	if(TRUE == Rte_Prm_DutyCycThermProtnMplrTSeln_Logl())
	{
		SlcTemp_DegCgrd_T_s15p0 = *Mult12Temp_DegCgrd_T_s15p0;	
	}
	else
	{
		SlcTemp_DegCgrd_T_s15p0 = *Mult36Temp_DegCgrd_T_s15p0;
	}
		
	return SlcTemp_DegCgrd_T_s15p0;
 } 
 /*****************************************************************************************************************
  * Name        	:   TemperatureLimiting
  * Description 	:   Implementation of 'TemperatureLimiting' subsystem. 
  * Inputs      	:   EcuTFild_DegCgrd_T_f32, MotWidgT_DegCgrd_T_f32, 
  * Outputs    		:   None
  * Returns    		:   AbsTempLimitSlew_MotNwtMtr_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(float32, DutyCycThermProtn_CODE) TemperatureLimiting(float32 EcuTFild_DegCgrd_T_f32, float32 MotWidgT_DegCgrd_T_f32)
{
	VAR(float32, AUTOMATIC) AbsltCtrlTempLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AbsltTempLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AbsltCuTempLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AbsTempLimitSlewLo_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) AbsTempLimitSlewHi_MotNwtMtr_T_f32;
	VAR(sint16, AUTOMATIC) EcuTFild_DegCgrd_T_s15p0;
	VAR(sint16, AUTOMATIC) MotWidgT_DegCgrd_T_s15p0;
	VAR(uint16, AUTOMATIC) AbsltCtrlTempLim_DegCgrd_T_u9p7;
	VAR(uint16, AUTOMATIC) AbsltCuTempLim_DegCgrd_T_u9p7;
	VAR(float32, AUTOMATIC) AbsTempLimitSlew_MotNwtMtr_T_f32;
	VAR(sint16, AUTOMATIC) SelectTblData1_DegCgrd_T_s15p0;
	VAR(sint16, AUTOMATIC) SelectTblData2_DegCgrd_T_s15p0;
	
	/* "TemperatureLimiting" Subsystem Implementation */
	EcuTFild_DegCgrd_T_s15p0 = FloatToFixd_s16_f32(EcuTFild_DegCgrd_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
	
	if(*Rte_Pim_FetMtgtnEnaCalIdx() == 0U)
	{
	
	    AbsltCtrlTempLim_DegCgrd_T_u9p7 = LnrIntrpn_u16_s16VariXu16VariY(PrmDutyCycThermProtnAbsltCtrlTTblX_s15p0,
                                                                         PrmDutyCycThermProtnAbsltCtrlTTqTblY_u9p7,
                                                                         (uint16)TblSize_m(PrmDutyCycThermProtnAbsltCtrlTTblX_s15p0),
                                                                         EcuTFild_DegCgrd_T_s15p0);
	}
	else
	{
	    AbsltCtrlTempLim_DegCgrd_T_u9p7 = LnrIntrpn_u16_s16VariXu16VariY(PrmDutyCycThermProtnAbsltCtrlTFetMtgtnTblX_s15p0,
                                                                         PrmDutyCycThermProtnAbsltCtrlTTqFetMtgtnTblY_u9p7,
                                                                         (uint16)TblSize_m(PrmDutyCycThermProtnAbsltCtrlTFetMtgtnTblX_s15p0),
                                                                         EcuTFild_DegCgrd_T_s15p0);
	}
	
	AbsltCtrlTempLim_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(AbsltCtrlTempLim_DegCgrd_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	
	*Rte_Pim_dDutyCycThermProtnAbsltCtrlrTTqLim() = AbsltCtrlTempLim_MotNwtMtr_T_f32;
	
	MotWidgT_DegCgrd_T_s15p0 = FloatToFixd_s16_f32(MotWidgT_DegCgrd_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
	
	if(*Rte_Pim_FetMtgtnEnaCalIdx() == 0U)
	{
	    AbsltCuTempLim_DegCgrd_T_u9p7 = LnrIntrpn_u16_s16VariXu16VariY(PrmDutyCycThermProtnAbsltCuTTblX_s15p0,
                                                                       PrmDutyCycThermProtnAbsltCuTTqTblY_u9p7,
                                                                       (uint16)TblSize_m(PrmDutyCycThermProtnAbsltCuTTblX_s15p0),
                                                                        MotWidgT_DegCgrd_T_s15p0);
	}
	else
	{
	    AbsltCuTempLim_DegCgrd_T_u9p7 = LnrIntrpn_u16_s16VariXu16VariY(PrmDutyCycThermProtnAbsltCuTFetMtgtnTblX_s15p0,
                                                                       PrmDutyCycThermProtnAbsltCuTTqFetMtgtnTblY_u9p7,
                                                                       (uint16)TblSize_m(PrmDutyCycThermProtnAbsltCuTFetMtgtnTblX_s15p0),
                                                                        MotWidgT_DegCgrd_T_s15p0);
	}
										  
	
	AbsltCuTempLim_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(AbsltCuTempLim_DegCgrd_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
										  

	*Rte_Pim_dDutyCycThermProtnAbsltCuTTqLim() = AbsltCuTempLim_MotNwtMtr_T_f32;
	
	AbsltTempLim_MotNwtMtr_T_f32 = Min_f32(AbsltCtrlTempLim_MotNwtMtr_T_f32, AbsltCuTempLim_MotNwtMtr_T_f32);
	*Rte_Pim_dDutyCycThermProtnAbsltTTqLim() = AbsltTempLim_MotNwtMtr_T_f32;
	
	/*'AbsTempLimitSlew' - RateLimDyn Output Calculation*/
	AbsTempLimitSlewLo_MotNwtMtr_T_f32 = (-Rte_Prm_DutyCycThermProtnAbsltTTqSlewLoLim_Val() * ARCHGLBPRM_100MILLISEC_SEC_F32) 
												+ (*Rte_Pim_AbsltTLimSlewStVari());
	AbsTempLimitSlewHi_MotNwtMtr_T_f32 = (Rte_Prm_DutyCycThermProtnAbsltTTqSlewHiLim_Val() * ARCHGLBPRM_100MILLISEC_SEC_F32) 
												+ (*Rte_Pim_AbsltTLimSlewStVari());
	AbsTempLimitSlew_MotNwtMtr_T_f32 = Lim_f32(AbsltTempLim_MotNwtMtr_T_f32, AbsTempLimitSlewLo_MotNwtMtr_T_f32, AbsTempLimitSlewHi_MotNwtMtr_T_f32);
	
	*Rte_Pim_AbsltTLimSlewStVari() = AbsTempLimitSlew_MotNwtMtr_T_f32;

	
	/*Set NTC calculation*/
	if(*Rte_Pim_FetMtgtnEnaCalIdx() == 0U)
	{
	    SelectTblData1_DegCgrd_T_s15p0 = PrmDutyCycThermProtnAbsltCtrlTTblX_s15p0[0];
	}
	else
	{
	    SelectTblData1_DegCgrd_T_s15p0 = PrmDutyCycThermProtnAbsltCtrlTFetMtgtnTblX_s15p0[0];	
	}
	
	if(*Rte_Pim_FetMtgtnEnaCalIdx() == 0U)
	{
	    SelectTblData2_DegCgrd_T_s15p0 = PrmDutyCycThermProtnAbsltCuTTblX_s15p0[0];
	}
	else
	{
	    SelectTblData2_DegCgrd_T_s15p0 = PrmDutyCycThermProtnAbsltCuTFetMtgtnTblX_s15p0[0];	
	}
	
	if( (EcuTFild_DegCgrd_T_s15p0 >= SelectTblData1_DegCgrd_T_s15p0) && 
	    (MotWidgT_DegCgrd_T_s15p0 >= SelectTblData2_DegCgrd_T_s15p0))		
	{
		/* SetCtrlrAndCuTFltNtc */ 
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A4, CTRLRANDCUTFLT_CNT_U08, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
	}
	else if(MotWidgT_DegCgrd_T_s15p0 >= SelectTblData2_DegCgrd_T_s15p0)
	{
		/* SetCuTFltNtc */ 
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A4, CUTFLT_CNT_U08, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
	}
	else if(EcuTFild_DegCgrd_T_s15p0 >= SelectTblData1_DegCgrd_T_s15p0)
	{
		/* SetCtrlrTFltNtc */ 
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A4, CTRLRTFLT_CNT_U08, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
	}
	else
	{
		/* SetPassdNtc */
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A4, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
	}
	return	AbsTempLimitSlew_MotNwtMtr_T_f32;										
}
  /*****************************************************************************************************************
  * Name        	:   MultiFilterPercMax
  * Description 	:   Implementation of 'Multiplier' and 'FilterPercMax' subsystem. 
  * Inputs      	:   Mult12Temp_DegCgrd_T_s15p0, Mult36Temp_DegCgrd_T_f32, DutyCycThermProtnDi_Cnt_T_Logl, 
  *					:	MotVelCrf_MotRadPerSec_T_f32, MotCurrPeakEstimd_AmprSqd_T_f32, MotCurrPeakEstimdFild_AmprSqd_T_f32
  * Outputs    	 	:   MaxOut_Uls_T_u16p0
  * Returns    	 	:   ThermLimSlowFilMax_Uls_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(float32, DutyCycThermProtn_CODE) MultiFilterPercMax(sint16 Mult12Temp_DegCgrd_T_s15p0, sint16 Mult36Temp_DegCgrd_T_s15p0,
											boolean DutyCycThermProtnDi_Cnt_T_Logl,	float32 MotVelCrf_MotRadPerSec_T_f32,
											float32 MotCurrPeakEstimd_AmprSqd_T_f32, float32 MotCurrPeakEstimdFild_AmprSqd_T_f32,
											P2VAR(uint16, AUTOMATIC, DutyCycThermProtn_VAR) MaxOut_Uls_T_u16p0)
{
	VAR(float32, AUTOMATIC) MaxSlowFilt_Uls_T_f32;
	VAR(float32, AUTOMATIC) ThermLimSlowFilMax_Uls_T_f32;
	VAR(sint16, AUTOMATIC) Mult36TempSlc_DegCgrd_T_s15p0;
	VAR(uint16, AUTOMATIC) Mult_Uls_T_u3p13[MULTFILTERSIZE_CNT_U08];
	VAR(float32, AUTOMATIC) Mult_Uls_T_f32[MULTFILTERSIZE_CNT_U08];
	VAR(float32, AUTOMATIC) MaxFilOut_Uls_T_f32[MULTFILTERSIZE_CNT_U08];
	VAR(float32, AUTOMATIC) MaxOut_Uls_T_f32;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	
	if(TRUE == Rte_Prm_DutyCycThermProtnSlowFilTSeln_Logl())
	{
		Mult36TempSlc_DegCgrd_T_s15p0 = Mult12Temp_DegCgrd_T_s15p0;	
	}
	else
	{
		Mult36TempSlc_DegCgrd_T_s15p0 = Mult36Temp_DegCgrd_T_s15p0;		
	}

	if(Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32) > Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val())
	{
	    if(*Rte_Pim_FetMtgtnEnaCalIdx() == 0U) 
		{
		    Mult_Uls_T_u3p13[0] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr1NonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult12Temp_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[1] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr2NonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult12Temp_DegCgrd_T_s15p0);
		
		    Mult_Uls_T_u3p13[2] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr3NonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[3] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr4NonStallTblY_u3p13,
										    (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[4] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr5NonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[5] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr6NonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
	    }
		else
		{
		     Mult_Uls_T_u3p13[0] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr1FetMtgtnNonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult12Temp_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[1] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr2FetMtgtnNonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult12Temp_DegCgrd_T_s15p0);
		
		    Mult_Uls_T_u3p13[2] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr3FetMtgtnNonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[3] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr4FetMtgtnNonStallTblY_u3p13,
										    (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[4] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr5FetMtgtnNonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[5] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr6FetMtgtnNonStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
		}
	}	
	else
	{
	    if(*Rte_Pim_FetMtgtnEnaCalIdx() == 0U) 
		{
		    Mult_Uls_T_u3p13[0] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr1StallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										      Mult12Temp_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[1] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr2StallTblY_u3p13,
										    (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult12Temp_DegCgrd_T_s15p0);
		
		    Mult_Uls_T_u3p13[2] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr3StallTblY_u3p13,
										    (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[3] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr4StallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[4] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr5StallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[5] = UseInpLowr(PrmDutyCycThermProtnMplrTblX_s15p0,
										     PrmDutyCycThermProtnMplr6StallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
	    }
		else
		{
		    Mult_Uls_T_u3p13[0] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr1FetMtgtnStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										      Mult12Temp_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[1] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr2FetMtgtnStallTblY_u3p13,
										    (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult12Temp_DegCgrd_T_s15p0);
		
		    Mult_Uls_T_u3p13[2] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr3FetMtgtnStallTblY_u3p13,
										    (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[3] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr4FetMtgtnStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[4] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr5FetMtgtnStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
										 
		    Mult_Uls_T_u3p13[5] = UseInpLowr(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0,
										     PrmDutyCycThermProtnMplr6FetMtgtnStallTblY_u3p13,
										     (uint16)TblSize_m(PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0),
										     Mult36TempSlc_DegCgrd_T_s15p0);
		}
	}
						
	*Rte_Pim_dDutyCycThermProtnMplr1() = Mult_Uls_T_u3p13[0];
	*Rte_Pim_dDutyCycThermProtnMplr2() = Mult_Uls_T_u3p13[1];
	*Rte_Pim_dDutyCycThermProtnMplr3() = Mult_Uls_T_u3p13[2];
	*Rte_Pim_dDutyCycThermProtnMplr4() = Mult_Uls_T_u3p13[3];
	*Rte_Pim_dDutyCycThermProtnMplr5() = Mult_Uls_T_u3p13[4];
	*Rte_Pim_dDutyCycThermProtnMplr6() = Mult_Uls_T_u3p13[5];
	
	for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < MULTFILTERSIZE_CNT_U08; Index_Cnt_T_u08++)
	{
		Mult_Uls_T_f32[Index_Cnt_T_u08] = FixdToFloat_f32_u16(Mult_Uls_T_u3p13[Index_Cnt_T_u08], NXTRFIXDPT_P13TOFLOAT_ULS_F32);
	}
	
	MaxFilOut_Uls_T_f32[0] = FilLpUpdOutp_f32((Mult_Uls_T_f32[0] * MotCurrPeakEstimd_AmprSqd_T_f32), Rte_Pim_Fil1ValStVari());
	MaxFilOut_Uls_T_f32[1] = FilLpUpdOutp_f32((Mult_Uls_T_f32[1] * MotCurrPeakEstimd_AmprSqd_T_f32), Rte_Pim_Fil2ValStVari());
	MaxFilOut_Uls_T_f32[2] = FilLpUpdOutp_f32((Mult_Uls_T_f32[2] * MotCurrPeakEstimd_AmprSqd_T_f32), Rte_Pim_Fild3Val());
	MaxFilOut_Uls_T_f32[3] = FilLpUpdOutp_f32((Mult_Uls_T_f32[3] * MotCurrPeakEstimdFild_AmprSqd_T_f32), Rte_Pim_Fild4Val());
	MaxFilOut_Uls_T_f32[4] = FilLpUpdOutp_f32((Mult_Uls_T_f32[4] * MotCurrPeakEstimdFild_AmprSqd_T_f32), Rte_Pim_Fild5Val());
	MaxFilOut_Uls_T_f32[5] = FilLpUpdOutp_f32((Mult_Uls_T_f32[5] * MotCurrPeakEstimdFild_AmprSqd_T_f32), Rte_Pim_Fild6Val());
	
	MaxFilOut_Uls_T_f32[0] = Max_f32(MaxFilOut_Uls_T_f32[0], MaxFilOut_Uls_T_f32[1]);
	MaxFilOut_Uls_T_f32[2] = Max_f32(MaxFilOut_Uls_T_f32[2], MaxFilOut_Uls_T_f32[3]);
	MaxFilOut_Uls_T_f32[4] = Max_f32(MaxFilOut_Uls_T_f32[4], MaxFilOut_Uls_T_f32[5]);
	
	MaxSlowFilt_Uls_T_f32 = Max_f32(MaxFilOut_Uls_T_f32[2], MaxFilOut_Uls_T_f32[4]);
	MaxOut_Uls_T_f32 = Max_f32(MaxFilOut_Uls_T_f32[0], MaxSlowFilt_Uls_T_f32);
	
	MaxOut_Uls_T_f32 = Lim_f32(MaxOut_Uls_T_f32, 0.0F, FILOUTPLIM_ULS_F32);
	
	*MaxOut_Uls_T_u16p0 = FloatToFixd_u16_f32(MaxOut_Uls_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
	

	if(TRUE == DutyCycThermProtnDi_Cnt_T_Logl)
	{
		ThermLimSlowFilMax_Uls_T_f32 = 0.0F;	
	}
	else
	{
		ThermLimSlowFilMax_Uls_T_f32 = Lim_f32(MaxSlowFilt_Uls_T_f32, 0.0F, FILOUTPLIM_ULS_F32);	
	}
	return ThermLimSlowFilMax_Uls_T_f32;			
}
  /*****************************************************************************************************************
  * Name        	:   ThermalLoadLimit
  * Description 	:   Implementation of 'ThermalLoadLimit' subsystem. 
  * Inputs      	:   MotVelCrf_MotRadPerSec_T_f32, SlcTemp_DegCgrd_T_f32, MaxOut_Uls_T_u16p0
  * Outputs    	 	:   None
  * Returns    	 	:   ThermalLoadLmt_MotNwtMtr_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(float32, DutyCycThermProtn_CODE) ThermalLoadLimit(float32 MotVelCrf_MotRadPerSec_T_f32, sint16 SlcTemp_DegCgrd_T_s15p0, uint16 MaxOut_Uls_T_u16p0)
{
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(uint16, AUTOMATIC) DutyCycThermProtn_MotNwtMtr_T_u9p7;
	VAR(float32, AUTOMATIC) DutyCycThermProtnLo_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) DutyCycThermProtnHi_MotNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC) ThermLoadLimTblY_MotNwtMtr_T_u9p7[THERMLOADLIMSIZE_CNT_U08];
	VAR(float32, AUTOMATIC) ThermalLoadLmt_MotNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC) ThermalLoadLmt_MotNwtMtr_T_u9p7;
	VAR(float32, AUTOMATIC) DutyCycThermProtn_MotNwtMtr_T_f32;
	VAR(uint8, AUTOMATIC) i= 0U;
	VAR(sint16, AUTOMATIC)Xdata_Uls_T_s15p0[5];
	VAR(uint16, AUTOMATIC)Ydata_Uls_T_u9p7[5];
	VAR(uint16, AUTOMATIC) AryTblData2_Uls_T_u16p0[8];
	/*Interpolation*/
	if(*Rte_Pim_FetMtgtnEnaCalIdx() != 0U)
	{
	   for(i=0;i<IDX5_CNT_U08;i++)
	   {
	       Xdata_Uls_T_s15p0[i] = PrmDutyCycThermProtnMplrTblX_s15p0[i];
	   }
	}
	else
	{
	    for(i=0;i<IDX5_CNT_U08;i++)
	   {
	       Xdata_Uls_T_s15p0[i] = PrmDutyCycThermProtnMplrFetMtgtnTblX_s15p0[i];
	   }
	}
	
	
	if(Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32) > Rte_Prm_DutyCycThermProtnAbsltMotVelBreakPt_Val())	
	{
	   for(i=0;i<IDX5_CNT_U08;i++)
	   {
	    Ydata_Uls_T_u9p7[i] = PrmDutyCycThermProtnLstTblValNonStall_u9p7[*(Rte_Pim_FetMtgtnEnaCalIdx())][i];
	   }
		DutyCycThermProtn_MotNwtMtr_T_u9p7 = LnrIntrpn_u16_s16VariXu16VariY(Xdata_Uls_T_s15p0, 
														Ydata_Uls_T_u9p7, 
														(uint16)TblSize_m(Xdata_Uls_T_s15p0), 
														SlcTemp_DegCgrd_T_s15p0);
	}
	else
	{
	 for(i=0;i<IDX5_CNT_U08;i++)
	   {
	    Ydata_Uls_T_u9p7[i] = PrmDutyCycThermProtnLstTblValStall_u9p7[*(Rte_Pim_FetMtgtnEnaCalIdx())][i];
	   }
		DutyCycThermProtn_MotNwtMtr_T_u9p7 = LnrIntrpn_u16_s16VariXu16VariY(Xdata_Uls_T_s15p0, 
														Ydata_Uls_T_u9p7, 
														(uint16)TblSize_m(Xdata_Uls_T_s15p0), 
														SlcTemp_DegCgrd_T_s15p0);
	}
		
	*Rte_Pim_dDutyCycThermProtnLstTblVal() = DutyCycThermProtn_MotNwtMtr_T_u9p7;
	
	DutyCycThermProtn_MotNwtMtr_T_f32 =  FixdToFloat_f32_u16(DutyCycThermProtn_MotNwtMtr_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	
	/*'RateLim' Library Implementation*/
	DutyCycThermProtnLo_MotNwtMtr_T_f32 = (-Rte_Prm_DutyCycThermProtnTqCmdSlewDwn_Val() * ARCHGLBPRM_100MILLISEC_SEC_F32) + (*Rte_Pim_LstTblValRateLimrStVari());
	DutyCycThermProtnHi_MotNwtMtr_T_f32 = (Rte_Prm_DutyCycThermProtnTqCmdSlewUp_Val() * ARCHGLBPRM_100MILLISEC_SEC_F32) + (*Rte_Pim_LstTblValRateLimrStVari());
	DutyCycThermProtn_MotNwtMtr_T_f32 = Lim_f32(DutyCycThermProtn_MotNwtMtr_T_f32, DutyCycThermProtnLo_MotNwtMtr_T_f32, DutyCycThermProtnHi_MotNwtMtr_T_f32);
	*Rte_Pim_LstTblValRateLimrStVari() = DutyCycThermProtn_MotNwtMtr_T_f32;
		
	DutyCycThermProtn_MotNwtMtr_T_u9p7 = FloatToFixd_u16_f32(DutyCycThermProtn_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
	
	*Rte_Pim_dDutyCycThermProtnLstTblValSlew() = DutyCycThermProtn_MotNwtMtr_T_u9p7;
	
	/*Y table calculation for interpolation*/
	for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < THERMLOADLIMSIZE_CNT_U08; Index_Cnt_T_u08++)
	{
		if((THERMLOADLIMTBLIDX_ULS_U08 - 1U) == Index_Cnt_T_u08)
		{
			ThermLoadLimTblY_MotNwtMtr_T_u9p7[Index_Cnt_T_u08] = DutyCycThermProtn_MotNwtMtr_T_u9p7;
		}
		else
		{
			ThermLoadLimTblY_MotNwtMtr_T_u9p7[Index_Cnt_T_u08] = PrmDutyCycThermProtnThermLoadLimTblY_u9p7[*(Rte_Pim_FetMtgtnEnaCalIdx())][Index_Cnt_T_u08];
		}
	}

	for(i=0;i< IDX8_CNT_U08; i++)
	{
	     AryTblData2_Uls_T_u16p0[i] = PrmDutyCycThermProtnThermLoadLimTblX_u16p0[*(Rte_Pim_FetMtgtnEnaCalIdx())][i];
    }
	/*Interpolation*/	
	ThermalLoadLmt_MotNwtMtr_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(AryTblData2_Uls_T_u16p0, 
															ThermLoadLimTblY_MotNwtMtr_T_u9p7, 
															(uint16)TblSize_m(AryTblData2_Uls_T_u16p0), 
															MaxOut_Uls_T_u16p0);
															
	ThermalLoadLmt_MotNwtMtr_T_f32 =  FixdToFloat_f32_u16(ThermalLoadLmt_MotNwtMtr_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
	
	*Rte_Pim_dDutyCycThermProtnThermLoadLim() = ThermalLoadLmt_MotNwtMtr_T_f32;
	
	return ThermalLoadLmt_MotNwtMtr_T_f32;
}

/*****************************************************************************************************************
  * Name        	:   DecoderandSubsystem
  * Description 	:   Implementation of 'Decoder' and Subsystem. 
  * Inputs      	:   MotAndThermProtnLoaMod_Cnt_T_u08
  * Outputs    		:   None
  * Returns         :   IvtrLoaMtgtnEna_Cnt_T_logl
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(boolean,DutyCycThermProtn_CODE) DecoderandSubsystem(VAR(uint8,AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08)

{

    VAR(boolean, AUTOMATIC)IvtrLoaMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC)FetLoaMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC)LogicalXorOut_Cnt_logl;
	
/*** Start of Decoder ***/
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK2_CNT_U08)== BITMASK2_CNT_U08)
	{
	    IvtrLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    IvtrLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK4_CNT_U08)== BITMASK4_CNT_U08)
	{
	    FetLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    FetLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	
/*** End of Decoder ***/

/*** Start of Subsystem ***/
	
	if((TRUE == FetLoaMtgtnEna_Cnt_T_logl) != (TRUE == *Rte_Pim_FetLoaMtgtnEnaPrev()))
 	   
    {
	    LogicalXorOut_Cnt_logl = TRUE;
	}
	else
	{
	    LogicalXorOut_Cnt_logl = FALSE;
	}
	*Rte_Pim_FetLoaMtgtnEnaPrev() = FetLoaMtgtnEna_Cnt_T_logl;
	
	if((FALSE == FetLoaMtgtnEna_Cnt_T_logl) && (TRUE == LogicalXorOut_Cnt_logl))
	{
	    *Rte_Pim_FetMtgtnEnaCalIdx() = CALVALMIN_ULS_U08;
	}
	else if((TRUE == FetLoaMtgtnEna_Cnt_T_logl) && (TRUE == LogicalXorOut_Cnt_logl))
	{
	    *Rte_Pim_FetMtgtnEnaCalIdx() = CTRLRTFLT_CNT_U08;
	}
	else
	{
	   /*** Do nothing ***/
	}
/*** End of Subsystem ***/

	 return(IvtrLoaMtgtnEna_Cnt_T_logl);
	 }
	
/*****************************************************************************************************************
  * Name        	:   TherrmalLimitScaling
  * Description 	:   Implementation of 'TherrmalLimitScaling' subsystem. 
  *			    	:	This function performs original Thermal Limit Status Routine
  * Inputs      	:   IvtrLoaMtgtnEna_Cnt_T_Logl, DualEcuFltMtgtnEna_Cnt_T_Logl, 
  *					:	AbsTempLimitSlew_MotNwtMtr_T_f32, ThermalLoadLmt_MotNwtMtr_T_f32,
  *                     DutyCycThermProtnDi_Cnt_T_Logl
  * Outputs    		:   ThermLoadDptLim_MotNwtMtr_T_f32, ThermTempDptLim_MotNwtMtr_T_f32
  * Returns         :   ThermMotTqLim_MotNwtMtr_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(float32,DutyCycThermProtn_CODE) TherrmalLimitScaling(boolean IvtrLoaMtgtnEna_Cnt_T_logl,
                                                                 boolean DualEcuFltMtgtnEna_Cnt_T_Logl,
                                                                 float32 AbsTempLimitSlew_MotNwtMtr_T_f32,
                                                                 float32 ThermalLoadLmt_MotNwtMtr_T_f32,
                                                                 boolean DutyCycThermProtnDi_Cnt_T_Logl,
                                                                 P2VAR(float32, AUTOMATIC, DutyCycThermProtn_VAR) ThermLoadDptLim_MotNwtMtr_T_f32,
                                                                 P2VAR(float32, AUTOMATIC, DutyCycThermProtn_VAR) ThermTempDptLim_MotNwtMtr_T_f32)
{
    VAR(float32, AUTOMATIC) ThermMotTqLim_MotNwtMtr_T_f32;
    
	
    if((IvtrLoaMtgtnEna_Cnt_T_logl    != FALSE) ||
       (DualEcuFltMtgtnEna_Cnt_T_Logl != FALSE))
    {
        /*ThermLim_DutyCycThermProtnDisabled1*/
        *ThermTempDptLim_MotNwtMtr_T_f32 = AbsTempLimitSlew_MotNwtMtr_T_f32*
                                           Rte_Prm_DutyCycThermProtnThermLimScaFac_Val();
        /*ThermLim_DutyCycThermProtnDisabled2*/
        *ThermLoadDptLim_MotNwtMtr_T_f32 = ThermalLoadLmt_MotNwtMtr_T_f32*
                                           Rte_Prm_DutyCycThermProtnThermLimScaFac_Val();
    }
    else
    {
        /*ThermLim_DutyCycThermProtnEnabled1*/
        *ThermTempDptLim_MotNwtMtr_T_f32 = AbsTempLimitSlew_MotNwtMtr_T_f32;
        /*ThermLim_DutyCycThermProtnEnabled2*/
        *ThermLoadDptLim_MotNwtMtr_T_f32 = ThermalLoadLmt_MotNwtMtr_T_f32;
    }
    
    if(DutyCycThermProtnDi_Cnt_T_Logl != FALSE)
    {
        *ThermLoadDptLim_MotNwtMtr_T_f32 = DITHERMLIM_MOTNWTMTR_F32;
    }
    
    *ThermTempDptLim_MotNwtMtr_T_f32 = Lim_f32(*ThermTempDptLim_MotNwtMtr_T_f32,
                                              ZERO_MOTNWTMTR_F32,
                                              SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);

    *ThermLoadDptLim_MotNwtMtr_T_f32 = Lim_f32(*ThermLoadDptLim_MotNwtMtr_T_f32,
                                              ZERO_MOTNWTMTR_F32,
                                              SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);

    ThermMotTqLim_MotNwtMtr_T_f32 = Lim_f32( Min_f32(*ThermTempDptLim_MotNwtMtr_T_f32,*ThermLoadDptLim_MotNwtMtr_T_f32),
                                             ZERO_MOTNWTMTR_F32,
                                             SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);

    return ThermMotTqLim_MotNwtMtr_T_f32;
}

/*****************************************************************************************************************
  * Name        	:   ThermalLimitStatus
  * Description 	:   Implementation of 'ThermalLimitStatus' subsystem. 
  *			    	:	This function performs Thermal Limit Status Routine
  * Inputs      	:   DutyCycThermProtnDi_Cnt_T_Logl, ThermMotTqLim_MotNwtMtr_T_f32
  *					:	MaxOut_Uls_T_u16p0
  *                 :   IvtrLoaMtgtnEna_Cnt_T_logl
  *                 :   DualEcuFltMtgtnEna_Cnt_T_Logl
  * Outputs    		:   ThermRednFac_Uls_T_f32
  * Usage Notes 	:   None
  ****************************************************************************************************************/
static FUNC(float32, DutyCycThermProtn_CODE) ThermalLimitStatus(boolean DutyCycThermProtnDi_Cnt_T_Logl,
                                                                float32 ThermMotTqLim_MotNwtMtr_T_f32,
                                                                uint16 MaxOut_Uls_T_u16p0,
                                                                boolean IvtrLoaMtgtnEna_Cnt_T_Logl,
                                                                boolean DualEcuFltMtgtnEna_Cnt_T_Logl)
{
	VAR(float32, AUTOMATIC) ThermRednFac_Uls_T_f32 = 0.0F;
	VAR(float32, AUTOMATIC) ThermLoadLimTblYVal_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) ScaFac_Uls_T_f32;

    /*Calculate Thermal Reduction Factor Output*/
	if(DutyCycThermProtnDi_Cnt_T_Logl == FALSE)										
	{
        
        if((IvtrLoaMtgtnEna_Cnt_T_Logl == TRUE) || (DualEcuFltMtgtnEna_Cnt_T_Logl == TRUE))
        {
            ScaFac_Uls_T_f32 = Rte_Prm_DutyCycThermProtnThermLimScaFac_Val();
        }
        else
        {
            ScaFac_Uls_T_f32 = 1.0F;
        }
        
        /*DutyCycThermProtnEnabled*/
		ThermLoadLimTblYVal_MotNwtMtr_T_f32 = FixdToFloat_f32_u16(PrmDutyCycThermProtnThermLoadLimTblY_u9p7[*(Rte_Pim_FetMtgtnEnaCalIdx())][0], NXTRFIXDPT_P7TOFLOAT_ULS_F32);
		ThermLoadLimTblYVal_MotNwtMtr_T_f32 = Max_f32(ThermLoadLimTblYVal_MotNwtMtr_T_f32*ScaFac_Uls_T_f32, ONEPERC_ULS_F32);
		*Rte_Pim_dDutyCycThermProtnThermLoadLimTblYVal() = ThermLoadLimTblYVal_MotNwtMtr_T_f32;
		
		ThermRednFac_Uls_T_f32 = ThermMotTqLim_MotNwtMtr_T_f32 / ThermLoadLimTblYVal_MotNwtMtr_T_f32;
		ThermRednFac_Uls_T_f32 = Min_f32(ThermRednFac_Uls_T_f32, 1.0F);
		ThermRednFac_Uls_T_f32 = (1.0F) - ThermRednFac_Uls_T_f32;
	}
    
    /*MaxoutLimiting*/ 
	if( (MaxOut_Uls_T_u16p0 < Rte_Prm_DutyCycThermProtnDutyCycFildThd_Val()) ||
		(DutyCycThermProtnDi_Cnt_T_Logl == TRUE) )
	{
		/* SetNtcPass */
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A3, 0U, NTCSTS_PASSD, NODEBSTEP_CNT_U16);
	}
	
	else 
	{
		/* SetNtcFail */
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X0A3, 0U, NTCSTS_FAILD, NODEBSTEP_CNT_U16);
	}

	/*Limiting the output*/
	ThermRednFac_Uls_T_f32 = Lim_f32(ThermRednFac_Uls_T_f32, THERMREDNFACLOLIM_ULS_F32, THERMREDNFACHILIM_ULS_F32);
	
	return ThermRednFac_Uls_T_f32;
} 

/*************************************************************************************************************
* Name			:	UseInpLowr
* Description	:	2D Table Lookup function (without interpolation). 
*					TableX is the independent axis and the TableY is
*					the dependent axis. If input is between two X values,
*					the minimum X value is chosen. If input is out of 
*					the range of TableX, the boundary value is used.
* Inputs		:	Name of TableX, Name of TableY, Table size, X input
* Outputs		:	Y output
* Usage Notes	:   TableX must have strictly increasing elements
*************************************************************************************************************/
static FUNC(uint16, DutyCycThermProtn_CODE) UseInpLowr(P2CONST(sint16, AUTOMATIC, DutyCycThermProtn_VAR)  TableX_Cnt_T_s16,
													   P2CONST(uint16, AUTOMATIC, DutyCycThermProtn_VAR)  TableY_Cnt_T_u16,
													   uint16 Size_Cnt_T_u16,
													   sint16 Input_Cnt_T_s16)
{
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08 = 0U;
	
	/* Check for Range */
	if ( Input_Cnt_T_s16 <= TableX_Cnt_T_s16[0U] )
	{
		/* Do nothing */
	}
	else if ( Input_Cnt_T_s16 >= TableX_Cnt_T_s16[Size_Cnt_T_u16 - 1U] )
	{
		Idx_Cnt_T_u08 = (uint8)Size_Cnt_T_u16 - 1U;
	}
	else/* In range. Get Index */
	{
        /* Code Prover flags an illegally dereferenced pointer on this line (pointer may be outside its bounds).
           Analysis shows this to be impossible due to the boundary checks above. (file version 8) */
		while ( TableX_Cnt_T_s16[Idx_Cnt_T_u08 + 1U] <= Input_Cnt_T_s16 )
		{
			Idx_Cnt_T_u08++;
		}
	}
	return TableY_Cnt_T_u16[Idx_Cnt_T_u08];
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
