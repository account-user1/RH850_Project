/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotRefMdl.c
 *        Config:  C:/Component/SF103A_MotRefMdl_Impl/tools/Component.dpa
 *     SW-C Type:  MotRefMdl
 *  Generated at:  Fri Oct 20 16:20:40 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotRefMdl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: MotRefMdl.c
* Module Description: Implementation of MotRefMdl
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:           7 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                               SCR #
* -------   -------  --------  ---------------------------------------------------------------------------   ----------
* 06/18/15  1        Selva     Initial Version                                                                EA4#287
* 03/13/16  2        Rijvi     Fixed anomaly EA4#2665; renamed cals, display variable                         EA4#4423
* 04/29/16  3        KK        Updated as per v1.3.0 of FDD							                EA4#5364, EA4#5504
* 06/21/16  4        TATA      Updated as per v2.0.0 of FDD							                          EA4#6069
* 07/14/16  5        KK        Updated as per v2.1.0 of FDD							                          EA4#6482
* 10/28/16  6        KK        Updated as per v2.3.0 of FDD							                          EA4#7538
* 09/25/17  7        RMG(TATA) New MotAndThermProtnLoaMod Input added with a decoder block                    EA4#13241 
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
 * MotQuad1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u11p5
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
 * u3p13
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
 *********************************************************************************************************************/

#include "Rte_MotRefMdl.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "NxtrFil.h"
#include "MotRefMdl.h"
#include "SysGlbPrm.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.2]: Per Instance Memory pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */


typedef struct 
{
    VAR(float32, TYPEDEF) RelncTqCoeff_Henry_f32;
    VAR(float32, TYPEDEF) MotREstimd_Ohm_f32;
    VAR(float32, TYPEDEF) ReacncDaxOverR_Uls_f32;
    VAR(float32, TYPEDEF) ReacncQaxOverR_Uls_f32;
    VAR(float32, TYPEDEF) EgOverR_Ampr_f32;
    VAR(float32, TYPEDEF) VltgOverR_Ampr_f32;
    VAR(float32, TYPEDEF) VovrRAllSqd_AmprSqd_f32;
    VAR(float32, TYPEDEF) EgOverROverZ_Ampr_f32;
    VAR(float32, TYPEDEF) VovrRovrZ_Ampr_f32;
    VAR(float32, TYPEDEF) MotKeEstimd_VoltPerMotRadPerSec_f32;
    
}MotInterCalcnsRec;
                    

                    
#define BRDGVLTGLOLIM_VOLT_F32               		(6.0F)
#define BRDGVLTGHILIM_VOLT_F32						(26.5F)
#define MOTCURRAGHILIM_MOTRAD_F32            		((float32)Ag10_UpperLimit)
#define MOTCURRHILIM_AMPR_F32                		((float32)Curr7_UpperLimit)
#define MOTCURRLOLIM_AMPR_F32                		((float32)Curr7_LowerLimit)
#define MOTINDUHILIM_HENRY_F32                		(0.00041F)
#define MOTINDULOLIM_HENRY_F32                		(0.00003F)
#define MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32  ((float32)MotCon1_UpperLimit)
#define MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32  ((float32)MotCon1_LowerLimit)
#define MOTREACNCHILIM_OHM_F32              		(2.87607F)
#define MOTREACNCLOLIM_OHM_F32              		(-2.87607F)
#define MOTRHILIM_OHM_F32                   		((float32) R5_UpperLimit)
#define MOTRLOLIM_OHM_F32                   		((float32) R5_LowerLimit)
#define MOTVLTGDAXEFLOLIM_VOLT_F32          		(-26.5F)
#define MOTVLTGDAXEFHILIM_VOLT_F32          		(26.5F)
#define MOTVLTGQAXEFLOLIM_VOLT_F32          		(-26.5F)
#define MOTVLTGQAXEFHILIM_VOLT_F32          		(26.5F)
#define MOTVELMRFHILIM_MOTRADPERSEC_F32 			(1350.0F)
#define MOTVELMRFLOLIM_MOTRADPERSEC_F32 			(-1350.0F)
#define MOTVLTGDAXFFLOLIM_VOLT_F32                  (-26.5F)
#define MOTVLTGDAXFFHILIM_VOLT_F32                  (26.5F)
#define MOTVLTGQAXFFLOLIM_VOLT_F32                  (-101.25F)
#define MOTVLTGQAXFFHILIM_VOLT_F32                  (101.25F)
#define MOTVLTGSTATLOLIM_VOLT_F32                   (-26.5F)
#define MOTVLTGSTATHILIM_VOLT_F32                   (26.5F)
#define	MOTBACKEMFVLTGHILIM_VOLT_F32				(101.25F)
#define	MOTBACKEMFVLTGLOLIM_VOLT_F32				(-101.25F)
#define MOTVLTGSATNINDFFHILIM_ULS_F32               (1.0F)
#define MOTVLTGSATNINDFFLOLIM_ULS_F32               (0.0F)        
#define BITMASK1_CNT_U08  				           ((uint8)1U)
#define BITMASK2_CNT_U08  				           ((uint8)2U)
#define BITMASK4_CNT_U08  				           ((uint8)4U)

#define PrmMotRefMdlCurrDaxBoostTqScaX (*(const Ary1D_u4p12_11 *) 	Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D())
#define PrmMotRefMdlCurrDaxBoostTqScaY (*(const Ary1D_u1p15_11 *) 	Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D())
#define PrmMotRefMdlCurrDaxQaxRefDelta (*(const Ary1D_f32_8 *)   	Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D())
#define PrmMotRefMdlQuad13VltgSdlX     (*(const Ary1D_u11p5_10 *)  	Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D())
#define PrmMotRefMdlQuad13VltgSdlY     (*(const Ary1D_u3p13_10 *)  	Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D())
#define PrmMotRefMdlQuad24VltgSdlX     (*(const Ary1D_u11p5_10 *)  	Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D())
#define PrmMotRefMdlQuad24VltgSdlY     (*(const Ary1D_u3p13_10 *)  	Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D())
#define PimMotRefMdlCosDelta           (*(Ary1D_f32_8 *)  			Rte_Pim_CosDelta())
#define PimMotRefMdlSinDelta           (*(Ary1D_f32_8 *)  			Rte_Pim_SinDelta())

static FUNC(float32, MotRefMdl_APPL_CODE) PrbcIntrpn(float32 const IntrpnPts_T_f32[6]);

static FUNC(float32, MotRefMdl_APPL_CODE) CalcIq(float32 Tqcmd_MotNwtMtr_T_f32,
                                                float32 CurrDaxRef_Ampr_T_f32,
                                                P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec);
												
												
static FUNC(float32, MotRefMdl_APPL_CODE) CalcCurrMagSqRef(float32 CurrDaxRef_Ampr_T_f32, 
                                                           float32 CurrQaxRef_Ampr_T_f32 );
														   
														   
static FUNC(boolean, MotRefMdl_APPL_CODE) CurrtoVoltTest(float32 CurrQaxRef_Ampr_T_f32 , 
                                                        float32 CurrDaxRef_Ampr_T_f32, 
                                                        P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR)VdR_Ampr_T_f32, 
                                                        P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR)VqR_Ampr_T_f32, 
                                                        P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec);
														
														
														
static FUNC(float32, MotRefMdl_APPL_CODE) CalcTq(float32 CosDelta_Cnt_T_f32, 
                                                float32 SinDelta_Cnt_T_f32, 
                                                P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrDaxMax_Ampr_T_f32,
                                                P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec);
												
												
static FUNC(float32, MotRefMdl_APPL_CODE) CalcMaxTqPt(float32 MotTqCmd_MotNwtMtr_T_f32, 
                                                    P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec,
                                                    P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrDaxMax_Ampr_T_f32 );
													
static FUNC(void, MotRefMdl_APPL_CODE) CalcMinMotCurr(float32 MotTqCmd_MotNwtMtr_T_f32, 
                                                        P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrDaxMin_Ampr_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrQaxMin_Ampr_T_f32,
                                                        P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec);

static FUNC(void, MotRefMdl_APPL_CODE) Decoder( uint8 MotAndThermProtnLoaMod_Cnt_T_u08,
                                                P2VAR(boolean, AUTOMATIC, MotRefMdl_APPL_VAR) CurrMeasLoaMtgtnEna_Cnt_T_logl, 
                                                P2VAR(boolean, AUTOMATIC, MotRefMdl_APPL_VAR) IvtrLoaMtgtnEna_Cnt_T_logl, 
                                                P2VAR(boolean, AUTOMATIC, MotRefMdl_APPL_VAR)   FetLoaMtgtnEna_Cnt_T_logl);
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
 * u11p5: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MotQuad1: Enumeration of integer in interval [0...255] with enumerators
 *   MOTQUAD_QUAD1 (1U)
 *   MOTQUAD_QUAD2 (2U)
 *   MOTQUAD_QUAD3 (3U)
 *   MOTQUAD_QUAD4 (4U)
 *
 * Array Types:
 * ============
 * Ary1D_f32_8: Array with 8 element(s) of type float32
 * Ary1D_u11p5_10: Array with 10 element(s) of type u11p5
 * Ary1D_u1p15_11: Array with 11 element(s) of type u1p15
 * Ary1D_u3p13_10: Array with 10 element(s) of type u3p13
 * Ary1D_u4p12_11: Array with 11 element(s) of type u4p12
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
 *   float32 *Rte_Pim_MotCurrDaxCmdPrev(void)
 *   float32 *Rte_Pim_MotCurrQaxCmdPrev(void)
 *   float32 *Rte_Pim_VltgDaxFfTermPrev(void)
 *   float32 *Rte_Pim_VltgQaxFfTermPrev(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrDaxAtPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrDaxMin(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrQaxMin(void)
 *   float32 *Rte_Pim_dMotRefMdlCurrSqdMin(void)
 *   float32 *Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax(void)
 *   float32 *Rte_Pim_dMotRefMdlMotCurrDaxBoost(void)
 *   float32 *Rte_Pim_dMotRefMdlMotTqCmdLimd(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVelFildFf(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfDyn(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgDaxFfStat(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfDyn(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm(void)
 *   float32 *Rte_Pim_dMotRefMdlMotVltgQaxFfStat(void)
 *   float32 *Rte_Pim_dMotRefMdlPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlPhaAdvAtPeakTq(void)
 *   float32 *Rte_Pim_dMotRefMdlReacncDaxOverR(void)
 *   float32 *Rte_Pim_dMotRefMdlReacncQaxOverR(void)
 *   float32 *Rte_Pim_dMotRefMdlRelncTqCoeff(void)
 *   uint8 *Rte_Pim_dMotRefMdlMinCurrNrItrn(void)
 *   uint8 *Rte_Pim_dMotRefMdlPeakTqNrItrn(void)
 *   float32 *Rte_Pim_CosDelta(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   float32 *Rte_Pim_SinDelta(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   FilLpRec1 *Rte_Pim_MotVelLpFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotRefMdlCurrDaxBoostGain_Val(void)
 *   float32 Rte_Prm_MotRefMdlCurrItrnTolr_Val(void)
 *   float32 Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotVelLpFilFrq_Val(void)
 *   float32 Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val(void)
 *   float32 Rte_Prm_MotRefMdlTqItrnTolr_Val(void)
 *   float32 Rte_Prm_MotRefMdlVltgOverRThdSca_Val(void)
 *   uint8 Rte_Prm_MotRefMdlMinCurrItrnLim_Val(void)
 *   uint8 Rte_Prm_MotRefMdlRefLocnItrnLim_Val(void)
 *   uint8 Rte_Prm_MotRefMdlTqItrnLim_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *   boolean Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl(void)
 *   u4p12 *Rte_Prm_MotRefMdlCurrDaxBoostTqScaX_Ary1D(void)
 *     Returnvalue: u4p12* is of type Ary1D_u4p12_11
 *   u1p15 *Rte_Prm_MotRefMdlCurrDaxBoostTqScaY_Ary1D(void)
 *     Returnvalue: u1p15* is of type Ary1D_u1p15_11
 *   float32 *Rte_Prm_MotRefMdlCurrDaxQaxRefDelta_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_8
 *   u11p5 *Rte_Prm_MotRefMdlQuad13VltgSdlX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u3p13 *Rte_Prm_MotRefMdlQuad13VltgSdlY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_10
 *   u11p5 *Rte_Prm_MotRefMdlQuad24VltgSdlX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_10
 *   u3p13 *Rte_Prm_MotRefMdlQuad24VltgSdlY_Ary1D(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_10
 *
 *********************************************************************************************************************/


#define MotRefMdl_START_SEC_CODE
#include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRefMdlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRefMdl_CODE) MotRefMdlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlInit1
 *********************************************************************************************************************/
    VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
    
    FilLpInit(0.0F, Rte_Prm_MotRefMdlMotVelLpFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, (Rte_Pim_MotVelLpFil()));
    /*** FillBracketArrays ***/
    for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < (uint8)TblSize_m(PrmMotRefMdlCurrDaxQaxRefDelta); Idx_Cnt_T_u08++)
    {
            PimMotRefMdlCosDelta[Idx_Cnt_T_u08] = Cos_f32(PrmMotRefMdlCurrDaxQaxRefDelta[Idx_Cnt_T_u08]); 
            PimMotRefMdlSinDelta[Idx_Cnt_T_u08] = Sin_f32(PrmMotRefMdlCurrDaxQaxRefDelta[Idx_Cnt_T_u08]); 
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRefMdlPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotQuad_Val(MotQuad1 *data)
 *   Std_ReturnType Rte_Read_MotREstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrAg_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrDaxCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrDaxMax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrQaxCmd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotReacncDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotReacncQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgDaxFf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgDaxFfStat_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgQaxFf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgQaxFfStat_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVltgSatnIndFf_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotRefMdl_CODE) MotRefMdlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRefMdlPer1
 *********************************************************************************************************************/
VAR(float32, AUTOMATIC) MotTqCmdMRFScad_MotNwtMtr_T_f32;
VAR(float32, AUTOMATIC) MotREstimd_Ohm_T_f32;
VAR(float32, AUTOMATIC) MotInduDaxEstimd_Henry_T_f32;
VAR(float32, AUTOMATIC) MotInduQaxEstimd_Henry_T_f32;
VAR(float32, AUTOMATIC) MotCurrDaxRef_Ampr_T_f32;
VAR(float32, AUTOMATIC) MotCurrQaxRef_Ampr_T_f32;
VAR(float32, AUTOMATIC) MotCurrAg_MotRad_T_f32;
VAR(float32, AUTOMATIC) MotVoltQaxFf_Volt_T_f32;
VAR(float32, AUTOMATIC) MotVoltDaxFf_Volt_T_f32;
VAR(float32, AUTOMATIC) BrdgVltg_Volt_T_f32;
VAR(uint16, AUTOMATIC) VltgSdl_Volt_T_u3p13;
VAR(float32, AUTOMATIC) MotTqCmdLimd_MotNwtMtr_T_f32;
VAR(float32, AUTOMATIC) VdRRef_Ampr_T_f32;
VAR(float32, AUTOMATIC) VqRRef_Ampr_T_f32;
VAR(float32, AUTOMATIC) ImpdNormd_Uls_T_f32;
VAR(float32, AUTOMATIC) CurrQaxRef_Ampr_T_f32;
VAR(float32, AUTOMATIC) CurrDaxMin_Ampr_T_f32;
VAR(float32, AUTOMATIC) CurrQaxMin_Ampr_T_f32;
VAR(float32, AUTOMATIC) CurrQaxMax_Ampr_T_f32;
VAR(float32, AUTOMATIC) IntrMotElec_MotRadpSpOhm_T_f32;
VAR(float32, AUTOMATIC) IntrMotElecGain_MotRadpSpOhm_T_f32;
VAR(uint8, AUTOMATIC) IdxIter_Cnt_T_u08;
VAR(float32, AUTOMATIC) CurrDaxRef_Ampr_T_f32;
VAR(float32, AUTOMATIC) CurrDaxMid_Ampr_T_f32 = 0.0F;
VAR(float32, AUTOMATIC) CurrDaxMax_Ampr_T_f32;
VAR(float32, AUTOMATIC) VdRBoost_Ampr_T_f32;
VAR(float32, AUTOMATIC) VqRBoost_Ampr_T_f32;
VAR(float32, AUTOMATIC) VRBoostTotal_AmprSq_T_f32;
VAR(float32, AUTOMATIC) VRDelta_Ampr_T_f32;
VAR(uint16, AUTOMATIC) MotTqCmdLimd_MotNwtMtr_T_u4p12;
VAR(uint16, AUTOMATIC) IdBoostTqCharSca_Uls_T_u1p15;
VAR(float32, AUTOMATIC) IdBoostTqCharSca_Uls_T_f32;
VAR(float32, AUTOMATIC) CurrDaxBoost_Ampr_T_f32;
VAR(float32, AUTOMATIC) MotReacncDax_Ohm_T_f32;
VAR(float32, AUTOMATIC) MotReacncQax_Ohm_T_f32;
VAR(float32, AUTOMATIC) MotVltgQaxFfStat_Volt_T_f32;
VAR(float32, AUTOMATIC) MotVltgDaxFfStat_Volt_T_f32;
VAR(float32, AUTOMATIC) MotCurrDaxMax_Ampr_T_f32;
VAR(float32, AUTOMATIC) MotVoltDynDaxRefTemp_Volt_T_f32;
VAR(float32, AUTOMATIC) MotVoltDynDaxFf_Volt_T_f32  ;
VAR(float32, AUTOMATIC) MotVoltDynQaxRefTemp_Volt_T_f32;
VAR(float32, AUTOMATIC) MotVoltDynQaxFf_Volt_T_f32  ;
VAR(MotInterCalcnsRec, AUTOMATIC)  MotRefMdlInterCalcns_T_rec;
VAR(float32, AUTOMATIC) MotKeEstimd_VoltPerMotRadPerSec_T_f32;
VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_logl;
VAR(boolean, AUTOMATIC) CurrMeasLoaMtgtnEna_Cnt_T_logl;
VAR(MotQuad1, AUTOMATIC) MotQuad_T_enum;
VAR(float32, AUTOMATIC) MotVelFiltLp_MotRadPerSec_T_f32;
VAR(float32, AUTOMATIC) MotVelMrf_MotRadPerSec_T_f32;
VAR(float32, AUTOMATIC) AbsltMotVelFiltLp_MotRadPerSec_T_f32;
VAR(uint16, AUTOMATIC) AbsltMotVelFiltLp_MotRadPerSec_T_u11p5;
VAR(float32, AUTOMATIC) VltgSplyAvail_Volt_T_f32;
VAR(boolean, AUTOMATIC) DualEcuMotCtrlMtgtnEna_Cnt_T_logl;
VAR(float32, AUTOMATIC) MotBackEmfVltg_Volt_T_f32;
VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
VAR(float32, AUTOMATIC) MotVltgSatnIndFf_Uls_T_f32;
VAR(boolean, AUTOMATIC)FetLoaMtgtnEna_Cnt_T_logl; 

(void)Rte_Read_BrdgVltg_Val(&BrdgVltg_Volt_T_f32); 
(void)Rte_Read_MotBackEmfConEstimd_Val(&MotKeEstimd_VoltPerMotRadPerSec_T_f32);
(void)Rte_Read_MotInduDaxEstimd_Val(&MotInduDaxEstimd_Henry_T_f32);
(void)Rte_Read_MotInduQaxEstimd_Val(&MotInduQaxEstimd_Henry_T_f32);
(void)Rte_Read_MotQuad_Val(&MotQuad_T_enum);
(void)Rte_Read_MotREstimd_Val(&MotREstimd_Ohm_T_f32);
(void)Rte_Read_MotTqCmdMrfScad_Val(&MotTqCmdMRFScad_MotNwtMtr_T_f32);
(void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MotRadPerSec_T_f32);
(void)Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(&DualEcuMotCtrlMtgtnEna_Cnt_T_logl);
(void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);

BrdgVltg_Volt_T_f32 = Lim_f32(BrdgVltg_Volt_T_f32, BRDGVLTGLOLIM_VOLT_F32, BRDGVLTGHILIM_VOLT_F32);
MotInduDaxEstimd_Henry_T_f32 =Lim_f32(MotInduDaxEstimd_Henry_T_f32,MOTINDULOLIM_HENRY_F32, MOTINDUHILIM_HENRY_F32);
MotInduQaxEstimd_Henry_T_f32 =Lim_f32(MotInduQaxEstimd_Henry_T_f32,MOTINDULOLIM_HENRY_F32, MOTINDUHILIM_HENRY_F32);
MotREstimd_Ohm_T_f32=Lim_f32(MotREstimd_Ohm_T_f32,MOTRLOLIM_OHM_F32, MOTRHILIM_OHM_F32);
MotKeEstimd_VoltPerMotRadPerSec_T_f32=Lim_f32(MotKeEstimd_VoltPerMotRadPerSec_T_f32, MOTBACKEMFCONLOLIM_VOLTPERMOTRADPERSEC_F32, MOTBACKEMFCONHILIM_VOLTPERMOTRADPERSEC_F32);


/* Motor Velocity Filter (LPF) */
MotVelFiltLp_MotRadPerSec_T_f32 = FilLpUpdOutp_f32(Lim_f32(MotVelMrf_MotRadPerSec_T_f32, 
														   MOTVELMRFLOLIM_MOTRADPERSEC_F32, 
														   MOTVELMRFHILIM_MOTRADPERSEC_F32),
                                                   Rte_Pim_MotVelLpFil());
												   
*Rte_Pim_dMotRefMdlMotVelFildFf()=MotVelFiltLp_MotRadPerSec_T_f32;
AbsltMotVelFiltLp_MotRadPerSec_T_f32=Abslt_f32_f32(MotVelFiltLp_MotRadPerSec_T_f32);
AbsltMotVelFiltLp_MotRadPerSec_T_u11p5 = FloatToFixd_u16_f32(AbsltMotVelFiltLp_MotRadPerSec_T_f32,NXTRFIXDPT_FLOATTOP5_ULS_F32);

/*** Voltage Sdluling ***/
 if ((MotQuad_T_enum == MOTQUAD_QUAD1  )|| (MotQuad_T_enum == MOTQUAD_QUAD3 ))
 {  
        VltgSdl_Volt_T_u3p13 = LnrIntrpn_u16_u16VariXu16VariY(PrmMotRefMdlQuad13VltgSdlX, 
															  PrmMotRefMdlQuad13VltgSdlY, 
															  (uint16)TblSize_m(PrmMotRefMdlQuad13VltgSdlX),
															  AbsltMotVelFiltLp_MotRadPerSec_T_u11p5);  
}
else
{
        VltgSdl_Volt_T_u3p13  = LnrIntrpn_u16_u16VariXu16VariY(PrmMotRefMdlQuad24VltgSdlX, 
															   PrmMotRefMdlQuad24VltgSdlY, 
                                                               (uint16)TblSize_m(PrmMotRefMdlQuad24VltgSdlX),
                                                               AbsltMotVelFiltLp_MotRadPerSec_T_u11p5);
}


VltgSplyAvail_Volt_T_f32 =  (BrdgVltg_Volt_T_f32 * (Lim_f32(Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(), MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32,  MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32))) - FixdToFloat_f32_u16(VltgSdl_Volt_T_u3p13,NXTRFIXDPT_P13TOFLOAT_ULS_F32);

/*** Intermediate Calculations ***/
MotRefMdlInterCalcns_T_rec.MotREstimd_Ohm_f32 = MotREstimd_Ohm_T_f32;
MotRefMdlInterCalcns_T_rec.MotKeEstimd_VoltPerMotRadPerSec_f32 = MotKeEstimd_VoltPerMotRadPerSec_T_f32;
MotRefMdlInterCalcns_T_rec.RelncTqCoeff_Henry_f32 = (MotInduDaxEstimd_Henry_T_f32 - MotInduQaxEstimd_Henry_T_f32) *((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() * 0.5F) ;
*Rte_Pim_dMotRefMdlRelncTqCoeff() = MotRefMdlInterCalcns_T_rec.RelncTqCoeff_Henry_f32;
/*** TermXq and TermXd Calcultion ***/
IntrMotElec_MotRadpSpOhm_T_f32 = MotVelFiltLp_MotRadPerSec_T_f32/MotREstimd_Ohm_T_f32;
IntrMotElecGain_MotRadpSpOhm_T_f32 = IntrMotElec_MotRadpSpOhm_T_f32 * ((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() * 0.5F);

MotRefMdlInterCalcns_T_rec.ReacncDaxOverR_Uls_f32=IntrMotElecGain_MotRadpSpOhm_T_f32*MotInduDaxEstimd_Henry_T_f32;
MotRefMdlInterCalcns_T_rec.ReacncQaxOverR_Uls_f32=IntrMotElecGain_MotRadpSpOhm_T_f32*MotInduQaxEstimd_Henry_T_f32;

*Rte_Pim_dMotRefMdlReacncDaxOverR()= MotRefMdlInterCalcns_T_rec.ReacncDaxOverR_Uls_f32;
*Rte_Pim_dMotRefMdlReacncQaxOverR()= MotRefMdlInterCalcns_T_rec.ReacncQaxOverR_Uls_f32;

/*** Term EgR and Term VR calculation ***/
MotRefMdlInterCalcns_T_rec.EgOverR_Ampr_f32 = IntrMotElec_MotRadpSpOhm_T_f32 * MotKeEstimd_VoltPerMotRadPerSec_T_f32;
MotRefMdlInterCalcns_T_rec.VltgOverR_Ampr_f32 = VltgSplyAvail_Volt_T_f32 / MotREstimd_Ohm_T_f32;
MotRefMdlInterCalcns_T_rec.VovrRAllSqd_AmprSqd_f32 = MotRefMdlInterCalcns_T_rec.VltgOverR_Ampr_f32 * MotRefMdlInterCalcns_T_rec.VltgOverR_Ampr_f32;
MotBackEmfVltg_Volt_T_f32 = MotVelFiltLp_MotRadPerSec_T_f32 * MotKeEstimd_VoltPerMotRadPerSec_T_f32;

/*** TermZ, Term EgRZ , VRZ calculation ***/
ImpdNormd_Uls_T_f32 = 1.0F + (MotRefMdlInterCalcns_T_rec.ReacncDaxOverR_Uls_f32 * MotRefMdlInterCalcns_T_rec.ReacncQaxOverR_Uls_f32);
MotRefMdlInterCalcns_T_rec.EgOverROverZ_Ampr_f32 = MotRefMdlInterCalcns_T_rec.EgOverR_Ampr_f32 / ImpdNormd_Uls_T_f32;
MotRefMdlInterCalcns_T_rec.VovrRovrZ_Ampr_f32 =  MotRefMdlInterCalcns_T_rec.VltgOverR_Ampr_f32 / ImpdNormd_Uls_T_f32;



/**************Decoupling Feedback terms*******************/
MotReacncDax_Ohm_T_f32 = ARCHGLBPRM_HALFSQRT3_ULS_F32* MotRefMdlInterCalcns_T_rec.ReacncDaxOverR_Uls_f32 * MotREstimd_Ohm_T_f32;
MotReacncQax_Ohm_T_f32 = ARCHGLBPRM_HALFSQRT3_ULS_F32* MotRefMdlInterCalcns_T_rec.ReacncQaxOverR_Uls_f32 * MotREstimd_Ohm_T_f32;


/*************** VoltLimAntiWindupTerems**********************/
MotCurrDaxMax_Ampr_T_f32 =((ARCHGLBPRM_4OVERSQRT3_ULS_F32 * MotKeEstimd_VoltPerMotRadPerSec_T_f32) / (MotInduDaxEstimd_Henry_T_f32 * (float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() )) * (Rte_Prm_MotRefMdlMotCurrDaxMaxSca_Val());
*Rte_Pim_dMotRefMdlInterCalcnCurrDaxMax() = MotCurrDaxMax_Ampr_T_f32;

MotReacncDax_Ohm_T_f32 =Lim_f32(MotReacncDax_Ohm_T_f32,MOTREACNCLOLIM_OHM_F32,MOTREACNCHILIM_OHM_F32);
MotReacncQax_Ohm_T_f32 =Lim_f32(MotReacncQax_Ohm_T_f32,MOTREACNCLOLIM_OHM_F32,MOTREACNCHILIM_OHM_F32);
MotCurrDaxMax_Ampr_T_f32= Lim_f32(MotCurrDaxMax_Ampr_T_f32,0.0F,MOTCURRHILIM_AMPR_F32 );

/*** LocateTorqueExtremes ***/
MotTqCmdLimd_MotNwtMtr_T_f32 = CalcMaxTqPt(Lim_f32(MotTqCmdMRFScad_MotNwtMtr_T_f32, 
												   SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, 
												   SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32),
										   &MotRefMdlInterCalcns_T_rec,
										   &CurrDaxMax_Ampr_T_f32);

CalcMinMotCurr( MotTqCmdLimd_MotNwtMtr_T_f32, &CurrDaxMin_Ampr_T_f32, &CurrQaxMin_Ampr_T_f32, &MotRefMdlInterCalcns_T_rec);

/**** D axis Current boost****/
/*DAxisCurrentBoost*/
if (Rte_Prm_MotRefMdlCurrDaxBoostGain_Val() > 0.0F)
{
    (void)CurrtoVoltTest(CurrQaxMin_Ampr_T_f32,CurrDaxMin_Ampr_T_f32, &VdRBoost_Ampr_T_f32, &VqRBoost_Ampr_T_f32,&MotRefMdlInterCalcns_T_rec);
    VRBoostTotal_AmprSq_T_f32 =(VdRBoost_Ampr_T_f32 * VdRBoost_Ampr_T_f32) + ( VqRBoost_Ampr_T_f32*VqRBoost_Ampr_T_f32);
    VRDelta_Ampr_T_f32 = (Sqrt_f32(VRBoostTotal_AmprSq_T_f32))-(Rte_Prm_MotRefMdlVltgOverRThdSca_Val()*MotRefMdlInterCalcns_T_rec.VltgOverR_Ampr_f32);
    if (VRDelta_Ampr_T_f32 >= 0.0F)
    {
	    MotTqCmdLimd_MotNwtMtr_T_u4p12 = FloatToFixd_u16_f32((Abslt_f32_f32(MotTqCmdLimd_MotNwtMtr_T_f32)),NXTRFIXDPT_FLOATTOP12_ULS_F32);  /* PRQA S 4395 */
	    IdBoostTqCharSca_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmMotRefMdlCurrDaxBoostTqScaX, 
														PrmMotRefMdlCurrDaxBoostTqScaY, 
														(uint16)TblSize_m(PrmMotRefMdlCurrDaxBoostTqScaX),
														MotTqCmdLimd_MotNwtMtr_T_u4p12
												   );
		IdBoostTqCharSca_Uls_T_f32  = FixdToFloat_f32_u16(IdBoostTqCharSca_Uls_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);     
		
		CurrDaxBoost_Ampr_T_f32 = VRDelta_Ampr_T_f32 * Rte_Prm_MotRefMdlCurrDaxBoostGain_Val() * IdBoostTqCharSca_Uls_T_f32;

				
		CurrDaxMin_Ampr_T_f32 = CurrDaxMin_Ampr_T_f32 - CurrDaxBoost_Ampr_T_f32;
		if( CurrDaxMin_Ampr_T_f32 >= CurrDaxMax_Ampr_T_f32 )
		{
			CurrDaxMin_Ampr_T_f32 = CurrDaxMax_Ampr_T_f32;
		}
		
		CurrQaxMin_Ampr_T_f32 = CalcIq(MotTqCmdLimd_MotNwtMtr_T_f32,CurrDaxMin_Ampr_T_f32,&MotRefMdlInterCalcns_T_rec);
    }
    else
    {
        CurrDaxBoost_Ampr_T_f32 = 0.0F;
    }

}
else
{

    CurrDaxBoost_Ampr_T_f32 = 0.0F;
}

*Rte_Pim_dMotRefMdlMotCurrDaxBoost() = CurrDaxBoost_Ampr_T_f32 ;

/*** Locate Reference ***/
CurrQaxMax_Ampr_T_f32= CalcIq(MotTqCmdLimd_MotNwtMtr_T_f32,CurrDaxMax_Ampr_T_f32,&MotRefMdlInterCalcns_T_rec);

if ((CurrtoVoltTest(CurrQaxMin_Ampr_T_f32,CurrDaxMin_Ampr_T_f32, &VdRRef_Ampr_T_f32, &VqRRef_Ampr_T_f32,&MotRefMdlInterCalcns_T_rec)) == FALSE)
{
    CurrQaxRef_Ampr_T_f32 = CurrQaxMin_Ampr_T_f32;
    CurrDaxRef_Ampr_T_f32 = CurrDaxMin_Ampr_T_f32;  
}
else if ((CurrtoVoltTest(CurrQaxMax_Ampr_T_f32,CurrDaxMax_Ampr_T_f32, &VdRRef_Ampr_T_f32,&VqRRef_Ampr_T_f32,&MotRefMdlInterCalcns_T_rec)) == TRUE)
{
    CurrQaxRef_Ampr_T_f32 = CurrQaxMax_Ampr_T_f32;
    CurrDaxRef_Ampr_T_f32 = CurrDaxMax_Ampr_T_f32;  
}
else
{
  for (IdxIter_Cnt_T_u08= 0U; IdxIter_Cnt_T_u08 < Rte_Prm_MotRefMdlRefLocnItrnLim_Val();IdxIter_Cnt_T_u08++)
  {
   CurrDaxMid_Ampr_T_f32 = (CurrDaxMax_Ampr_T_f32 + CurrDaxMin_Ampr_T_f32) * 0.5F ;
   CurrQaxRef_Ampr_T_f32 = CalcIq( MotTqCmdLimd_MotNwtMtr_T_f32,CurrDaxMid_Ampr_T_f32,&MotRefMdlInterCalcns_T_rec);
   if (CurrtoVoltTest(CurrQaxRef_Ampr_T_f32,CurrDaxMid_Ampr_T_f32, &VdRRef_Ampr_T_f32,&VqRRef_Ampr_T_f32,&MotRefMdlInterCalcns_T_rec) == TRUE)
       {
            CurrDaxMin_Ampr_T_f32 = CurrDaxMid_Ampr_T_f32;
       }
   else
       {
            CurrDaxMax_Ampr_T_f32 = CurrDaxMid_Ampr_T_f32;
       }       
  }
  CurrDaxRef_Ampr_T_f32 = CurrDaxMid_Ampr_T_f32;
}

/*** Calc Qax and Dax Refernce***/
MotCurrQaxRef_Ampr_T_f32 = CurrQaxRef_Ampr_T_f32 * ARCHGLBPRM_2OVERSQRT3_ULS_F32;
MotCurrDaxRef_Ampr_T_f32 = -CurrDaxRef_Ampr_T_f32 * ARCHGLBPRM_2OVERSQRT3_ULS_F32;

MotVltgDaxFfStat_Volt_T_f32 = VdRRef_Ampr_T_f32 * MotREstimd_Ohm_T_f32 ;
MotVltgQaxFfStat_Volt_T_f32 = VqRRef_Ampr_T_f32 * MotREstimd_Ohm_T_f32;

*Rte_Pim_dMotRefMdlMotVltgDaxFfStat() = MotVltgDaxFfStat_Volt_T_f32;
*Rte_Pim_dMotRefMdlMotVltgQaxFfStat() = MotVltgQaxFfStat_Volt_T_f32;


Decoder( MotAndThermProtnLoaMod_Cnt_T_u08,
         &CurrMeasLoaMtgtnEna_Cnt_T_logl, 
         &IvtrLoaMtgtnEna_Cnt_T_logl, 
         &FetLoaMtgtnEna_Cnt_T_logl);

/***************FeedForward voltage Calculation block*******************/

/*F01_1_6_8_FeedforwardVoltage*/

if ((CurrMeasLoaMtgtnEna_Cnt_T_logl==TRUE) ||(IvtrLoaMtgtnEna_Cnt_T_logl==TRUE) || (Rte_Prm_MotRefMdlFbCtrlDi_Logl() == TRUE) || (DualEcuMotCtrlMtgtnEna_Cnt_T_logl == TRUE)||(FetLoaMtgtnEna_Cnt_T_logl == TRUE))
{
    if(Rte_Prm_MotRefMdlVltgModDynCmpEna_Logl() == TRUE)
    {
        /*** D axis Derivative filter ***/
        MotVoltDynDaxRefTemp_Volt_T_f32      = (MotCurrDaxRef_Ampr_T_f32 -*Rte_Pim_MotCurrDaxCmdPrev()) * MotInduDaxEstimd_Henry_T_f32 *(Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val() + ARCHGLBPRM_2MILLISEC_SEC_F32) * ARCHGLBPRM_HALFSQRT3_ULS_F32;
        MotVoltDynDaxFf_Volt_T_f32           =  (MotVoltDynDaxRefTemp_Volt_T_f32) + (*Rte_Pim_VltgDaxFfTermPrev()*(Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val()/(Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val() + ARCHGLBPRM_2MILLISEC_SEC_F32)));
        *Rte_Pim_VltgDaxFfTermPrev()          =  MotVoltDynDaxFf_Volt_T_f32;
		*Rte_Pim_MotCurrDaxCmdPrev()         = MotCurrDaxRef_Ampr_T_f32;
        MotVoltDynQaxRefTemp_Volt_T_f32      = (MotCurrQaxRef_Ampr_T_f32-*Rte_Pim_MotCurrQaxCmdPrev()) * MotInduQaxEstimd_Henry_T_f32 * (Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val() + ARCHGLBPRM_2MILLISEC_SEC_F32) * ARCHGLBPRM_HALFSQRT3_ULS_F32;
        MotVoltDynQaxFf_Volt_T_f32           = (MotVoltDynQaxRefTemp_Volt_T_f32) + (*Rte_Pim_VltgQaxFfTermPrev()*(Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val()/(Rte_Prm_MotRefMdlMotVltgDerivtvTiCon_Val() + ARCHGLBPRM_2MILLISEC_SEC_F32)));
        *Rte_Pim_VltgQaxFfTermPrev()         =  MotVoltDynQaxFf_Volt_T_f32;
		*Rte_Pim_MotCurrQaxCmdPrev()         = MotCurrQaxRef_Ampr_T_f32;
        
    }
    else
    {
         MotVoltDynDaxFf_Volt_T_f32 = 0.0F;
         MotVoltDynQaxFf_Volt_T_f32 = 0.0F;
        
    }
    *Rte_Pim_dMotRefMdlMotVltgDaxFfDynTerm() = MotVoltDynDaxFf_Volt_T_f32;
    *Rte_Pim_dMotRefMdlMotVltgQaxFfDynTerm() = MotVoltDynQaxFf_Volt_T_f32;
    MotVoltDaxFf_Volt_T_f32              =  MotVltgDaxFfStat_Volt_T_f32 + MotVoltDynDaxFf_Volt_T_f32;
    MotVoltQaxFf_Volt_T_f32              =  MotVltgQaxFfStat_Volt_T_f32 + MotVoltDynQaxFf_Volt_T_f32;
    *Rte_Pim_dMotRefMdlMotVltgDaxFfDyn() = MotVoltDaxFf_Volt_T_f32;
    *Rte_Pim_dMotRefMdlMotVltgQaxFfDyn() = MotVoltQaxFf_Volt_T_f32;
    
}
else
{
    MotVoltQaxFf_Volt_T_f32 = MotRefMdlInterCalcns_T_rec.EgOverR_Ampr_f32* MotREstimd_Ohm_T_f32;
    MotVoltDaxFf_Volt_T_f32 = 0.0f;
}

/* Motor CurrentAngle Computation */

MotCurrAg_MotRad_T_f32 = Arctan2_f32(MotCurrDaxRef_Ampr_T_f32, MotCurrQaxRef_Ampr_T_f32);

if (MotCurrAg_MotRad_T_f32 < 0.0F)
{
    MotCurrAg_MotRad_T_f32= (MotCurrAg_MotRad_T_f32  + ARCHGLBPRM_2PI_ULS_F32);
}

MotCurrAg_MotRad_T_f32=Lim_f32(MotCurrAg_MotRad_T_f32, 0.0F, MOTCURRAGHILIM_MOTRAD_F32);


MotCurrQaxRef_Ampr_T_f32=Lim_f32(MotCurrQaxRef_Ampr_T_f32, MOTCURRLOLIM_AMPR_F32,MOTCURRHILIM_AMPR_F32);
MotCurrDaxRef_Ampr_T_f32=Lim_f32(MotCurrDaxRef_Ampr_T_f32,0.0F,MOTCURRHILIM_AMPR_F32);
MotVoltDaxFf_Volt_T_f32 = Lim_f32(MotVoltDaxFf_Volt_T_f32,MOTVLTGDAXFFLOLIM_VOLT_F32,MOTVLTGDAXFFHILIM_VOLT_F32);
MotVoltQaxFf_Volt_T_f32 = Lim_f32(MotVoltQaxFf_Volt_T_f32,MOTVLTGQAXFFLOLIM_VOLT_F32,MOTVLTGQAXFFHILIM_VOLT_F32);

MotVltgDaxFfStat_Volt_T_f32 = Lim_f32(MotVltgDaxFfStat_Volt_T_f32,MOTVLTGSTATLOLIM_VOLT_F32,MOTVLTGSTATHILIM_VOLT_F32);
MotVltgQaxFfStat_Volt_T_f32 = Lim_f32(MotVltgQaxFfStat_Volt_T_f32,MOTVLTGSTATLOLIM_VOLT_F32,MOTVLTGSTATHILIM_VOLT_F32);

/*** Start of MotVltgSatnIndFfCalc ***/
MotVltgSatnIndFf_Uls_T_f32 = (Sqrt_f32((MotVltgDaxFfStat_Volt_T_f32 * MotVltgDaxFfStat_Volt_T_f32) + (MotVltgQaxFfStat_Volt_T_f32 * MotVltgQaxFfStat_Volt_T_f32)))/(VltgSplyAvail_Volt_T_f32); 
MotVltgSatnIndFf_Uls_T_f32 = Lim_f32(MotVltgSatnIndFf_Uls_T_f32,MOTVLTGSATNINDFFLOLIM_ULS_F32,MOTVLTGSATNINDFFHILIM_ULS_F32);
/*** End of MotVltgSatnIndFfCalc ***/


(void)Rte_Write_MotCurrAg_Val(MotCurrAg_MotRad_T_f32); 
(void)Rte_Write_MotCurrDaxCmd_Val(MotCurrDaxRef_Ampr_T_f32);
(void)Rte_Write_MotCurrDaxMax_Val(MotCurrDaxMax_Ampr_T_f32);
(void)Rte_Write_MotCurrQaxCmd_Val(MotCurrQaxRef_Ampr_T_f32);
(void)Rte_Write_MotReacncDax_Val(MotReacncDax_Ohm_T_f32);
(void)Rte_Write_MotReacncQax_Val(MotReacncQax_Ohm_T_f32);
(void)Rte_Write_MotVltgDaxFfStat_Val(MotVltgDaxFfStat_Volt_T_f32);
(void)Rte_Write_MotVltgQaxFfStat_Val(MotVltgQaxFfStat_Volt_T_f32);
(void)Rte_Write_MotVltgDaxFf_Val(MotVoltDaxFf_Volt_T_f32);
(void)Rte_Write_MotVltgQaxFf_Val(MotVoltQaxFf_Volt_T_f32);
(void)Rte_Write_MotBackEmfVltg_Val(Lim_f32(MotBackEmfVltg_Volt_T_f32,MOTBACKEMFVLTGLOLIM_VOLT_F32,MOTBACKEMFVLTGHILIM_VOLT_F32));
(void)Rte_Write_MotVltgSatnIndFf_Val(MotVltgSatnIndFf_Uls_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotRefMdl_STOP_SEC_CODE
#include "MotRefMdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*****************************************************************************
 *
 *  Function Name:     CalcCurrMagSqRef
 *  
 *  Description:       None
 *
 *  Inputs:            CurrDaxRef_Ampr_T_f32 - Direct Axis Reference Current
 *                     CurrQaxRef_Ampr_T_f32 - Qax Reference Current 
 *
 *  Outputs:           CurrMagSqRef_AmprSq_T_f32 
 *
 *****************************************************************************/

static FUNC(float32, MotRefMdl_APPL_CODE) CalcCurrMagSqRef( float32 CurrDaxRef_Ampr_T_f32, float32 CurrQaxRef_Ampr_T_f32 )
{
    
   VAR(float32, AUTOMATIC) CurrMagSqRef_AmprSq_T_f32;
  
  /*** F_CurrMagSqRef Block***/
  CurrMagSqRef_AmprSq_T_f32 = ((CurrQaxRef_Ampr_T_f32) * (CurrQaxRef_Ampr_T_f32)) + ((CurrDaxRef_Ampr_T_f32) * (CurrDaxRef_Ampr_T_f32));
  
  
  return  CurrMagSqRef_AmprSq_T_f32;
}

/*****************************************************************************
 *
 *  Function Name:     CalcIq
 *  
 *  Description:       None
 *
 *  Inputs:            Tqcmd_MotNwtMtr_T_f32, CurrDaxRef_Ampr_T_f32, MotRefMdlInterCalcns_T_rec
 *
 *  Outputs:           CurrQaxRef_Ampr_T_f32
 *
 *****************************************************************************/

static FUNC(float32, MotRefMdl_APPL_CODE) CalcIq(float32 Tqcmd_MotNwtMtr_T_f32, float32 CurrDaxRef_Ampr_T_f32, P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec )
{
   VAR(float32, AUTOMATIC) CurrQaxRefTmp_Ampr_T_f32;    
   /*** Calc Iq Reference***/  
  CurrQaxRefTmp_Ampr_T_f32 = Tqcmd_MotNwtMtr_T_f32/(MotRefMdlInterCalcns_T_rec->MotKeEstimd_VoltPerMotRadPerSec_f32 + (MotRefMdlInterCalcns_T_rec->RelncTqCoeff_Henry_f32 * (CurrDaxRef_Ampr_T_f32)));
   
  return  CurrQaxRefTmp_Ampr_T_f32;
}

/*****************************************************************************
 *
 *  Function Name:     CurrtoVoltTest
 *  
 *  Description:       None
 *
 *  Inputs:            CurrQaxRef_Ampr_T_f32,CurrDaxRef_Ampr_T_f32, MotRefMdlInterCalcns_T_rec
 *
 *  Outputs:           VqR_Ampr_T_f32,VdR_Ampr_T_f32,VoltTest_Uls_T_logl
 *
 *****************************************************************************/

static FUNC(boolean, MotRefMdl_APPL_CODE) CurrtoVoltTest(float32 CurrQaxRef_Ampr_T_f32 , float32 CurrDaxRef_Ampr_T_f32, P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) VdR_Ampr_T_f32, P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR)VqR_Ampr_T_f32, P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec)
{
  VAR(boolean, AUTOMATIC)   VoltTest_Uls_T_logl;
  VAR(float32, AUTOMATIC)   Vdq_AmprSq_T_f32;
  VAR(float32, AUTOMATIC)   VqRTemp_Ampr_T_f32;
  VAR(float32, AUTOMATIC)   VdRTemp_Ampr_T_f32;
  /*** Convert the Iq and Id to VqR and VdR respectively ***/
  VdRTemp_Ampr_T_f32 = (CurrQaxRef_Ampr_T_f32 * MotRefMdlInterCalcns_T_rec->ReacncQaxOverR_Uls_f32) - CurrDaxRef_Ampr_T_f32;
  VqRTemp_Ampr_T_f32=  CurrQaxRef_Ampr_T_f32 + (CurrDaxRef_Ampr_T_f32 * MotRefMdlInterCalcns_T_rec->ReacncDaxOverR_Uls_f32)+MotRefMdlInterCalcns_T_rec->EgOverR_Ampr_f32;
   
  Vdq_AmprSq_T_f32 =  ((VqRTemp_Ampr_T_f32) * (VqRTemp_Ampr_T_f32)) + ((VdRTemp_Ampr_T_f32) * (VdRTemp_Ampr_T_f32));
  /*** Voltage Test  block***/
   if (Vdq_AmprSq_T_f32 < (MotRefMdlInterCalcns_T_rec->VovrRAllSqd_AmprSqd_f32))
   {
        VoltTest_Uls_T_logl = FALSE;
   }
   else
   {
        VoltTest_Uls_T_logl = TRUE;        
   }
   *VdR_Ampr_T_f32 = VdRTemp_Ampr_T_f32;
   *VqR_Ampr_T_f32 = VqRTemp_Ampr_T_f32;
   return  VoltTest_Uls_T_logl;
}

/*****************************************************************************
 *
 *  Function Name:     CalcTq
 *  
 *  Description:       None
 *
 *  Inputs:           CosDelta_Cnt_T_f32, SinDelta_Cnt_T_f32
 *
 *  Outputs:           CurrDaxMax_Ampr_T_f32,TqCalc_MotNwtMtr_T_f32
 *
 *****************************************************************************/
static FUNC(float32, MotRefMdl_APPL_CODE) CalcTq(float32 CosDelta_Cnt_T_f32, float32 SinDelta_Cnt_T_f32, P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrDaxMax_Ampr_T_f32, P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec)
    
{

   VAR(float32, AUTOMATIC) TqCalc_MotNwtMtr_T_f32;
   VAR(float32, AUTOMATIC) CurrQax_Ampr_T_f32;
   VAR(float32, AUTOMATIC) CurrDax_Ampr_T_f32;
   
   /*** Calc Iq current, Id current ***/
   CurrQax_Ampr_T_f32 = ((CosDelta_Cnt_T_f32 + ( MotRefMdlInterCalcns_T_rec->ReacncDaxOverR_Uls_f32 * SinDelta_Cnt_T_f32)) * MotRefMdlInterCalcns_T_rec->VovrRovrZ_Ampr_f32) - MotRefMdlInterCalcns_T_rec->EgOverROverZ_Ampr_f32;
   CurrDax_Ampr_T_f32 =  (CurrQax_Ampr_T_f32 * MotRefMdlInterCalcns_T_rec->ReacncQaxOverR_Uls_f32) - (MotRefMdlInterCalcns_T_rec->VltgOverR_Ampr_f32 * SinDelta_Cnt_T_f32);
   /***Calc Tq ***/ 
   TqCalc_MotNwtMtr_T_f32 = (MotRefMdlInterCalcns_T_rec->MotKeEstimd_VoltPerMotRadPerSec_f32 + (MotRefMdlInterCalcns_T_rec->RelncTqCoeff_Henry_f32 *  CurrDax_Ampr_T_f32) ) * CurrQax_Ampr_T_f32;
   
   *CurrDaxMax_Ampr_T_f32 = CurrDax_Ampr_T_f32;
   return TqCalc_MotNwtMtr_T_f32;

}   

/*****************************************************************************
 *
 *  Function Name:     CalcMaxTqPt
 *  
 *  Description:       
 *
 *  Inputs:            MotTqCmd_MotNwtMtr_T_f32, MotRefMdlInterCalcns_T_rec 
 *
 *  Outputs:           CurrDaxMax_Ampr_T_f32, MotTqCmdLimd_MotNwtMtr_T_f32
 *
 *****************************************************************************/
static FUNC(float32, MotRefMdl_APPL_CODE) CalcMaxTqPt(float32 MotTqCmd_MotNwtMtr_T_f32,
                                                    P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec, 
                                                    P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrDaxMax_Ampr_T_f32
                                                    )
{
    VAR(float32, AUTOMATIC) NewDelta_MotRad_T_f32;
    VAR(uint8,AUTOMATIC)   Idx_Cnt_T_u08;
    VAR(float32, AUTOMATIC) TqCalcTbl_MotNwtMtr_T_f32[8U]={0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F};
    VAR(float32, AUTOMATIC) TqSt_MotNwtMtr_T_f32 ;
    VAR(uint8, AUTOMATIC)  IdxSt_Cnt_T_u08 ;
    VAR(float32, AUTOMATIC) IntrpnPts_T_f32[6];
    VAR(float32, AUTOMATIC) PreNewDelta_MotRad_T_f32;
    VAR(uint8,AUTOMATIC)   IdxIter_Cnt_T_u08 ;
    VAR(float32, AUTOMATIC) NewSinDelta_MotRad_T_f32;
    VAR(float32, AUTOMATIC) NewCosDelta_MotRad_T_f32;
    VAR(float32, AUTOMATIC) MotTqCmdLimd_MotNwtMtr_T_f32;
    
    IdxIter_Cnt_T_u08 = 0U;
    TqSt_MotNwtMtr_T_f32 = 0.0F;
    IdxSt_Cnt_T_u08 = 0U;
    /***_FindPeakTqs***/
    if (MotTqCmd_MotNwtMtr_T_f32 >= 0.0F) 
    {   
        for (Idx_Cnt_T_u08=0U; Idx_Cnt_T_u08 < 8U; Idx_Cnt_T_u08++)
        {   /*** CalcTq ***/
            TqCalcTbl_MotNwtMtr_T_f32[Idx_Cnt_T_u08] = CalcTq (PimMotRefMdlCosDelta[Idx_Cnt_T_u08],PimMotRefMdlSinDelta[Idx_Cnt_T_u08],CurrDaxMax_Ampr_T_f32, MotRefMdlInterCalcns_T_rec);
            if (TqCalcTbl_MotNwtMtr_T_f32[Idx_Cnt_T_u08] >= TqSt_MotNwtMtr_T_f32)
            {
                TqSt_MotNwtMtr_T_f32 = TqCalcTbl_MotNwtMtr_T_f32[Idx_Cnt_T_u08];
                IdxSt_Cnt_T_u08 = Idx_Cnt_T_u08;
            }
        }
 
    }
    else
    {
        for (Idx_Cnt_T_u08=0U; Idx_Cnt_T_u08< 8U; Idx_Cnt_T_u08++)
        {   /*** CalcTq***/
            TqCalcTbl_MotNwtMtr_T_f32[Idx_Cnt_T_u08] = CalcTq (PimMotRefMdlCosDelta[Idx_Cnt_T_u08],PimMotRefMdlSinDelta[Idx_Cnt_T_u08],CurrDaxMax_Ampr_T_f32,MotRefMdlInterCalcns_T_rec);
            if (TqCalcTbl_MotNwtMtr_T_f32[Idx_Cnt_T_u08] <= TqSt_MotNwtMtr_T_f32)
            {
                TqSt_MotNwtMtr_T_f32 = TqCalcTbl_MotNwtMtr_T_f32[Idx_Cnt_T_u08];
                IdxSt_Cnt_T_u08 = Idx_Cnt_T_u08;
            }
        }
    
    }

    /*** ChooseDeltaBrackets ***/
    IntrpnPts_T_f32[2] = PrmMotRefMdlCurrDaxQaxRefDelta[IdxSt_Cnt_T_u08];
    IntrpnPts_T_f32[3] = TqCalcTbl_MotNwtMtr_T_f32[IdxSt_Cnt_T_u08];
    /*** Idx if zero ***/
    if  (IdxSt_Cnt_T_u08 == 0U)
    {
        IntrpnPts_T_f32[4] = -ARCHGLBPRM_5PIOVER4_ULS_F32 ;
        IntrpnPts_T_f32[5] = TqCalcTbl_MotNwtMtr_T_f32[7U];
        IntrpnPts_T_f32[0] = PrmMotRefMdlCurrDaxQaxRefDelta[1U];
        IntrpnPts_T_f32[1] = TqCalcTbl_MotNwtMtr_T_f32[1U];
    }
    /*** Idx if reaches limit of the table ***/
    else if (IdxSt_Cnt_T_u08 == (7U))
    {
    
        IntrpnPts_T_f32[0] = ARCHGLBPRM_PI_ULS_F32;
        IntrpnPts_T_f32[1] = TqCalcTbl_MotNwtMtr_T_f32[0U];
        IntrpnPts_T_f32[4] = PrmMotRefMdlCurrDaxQaxRefDelta[6U];
        IntrpnPts_T_f32[5] = TqCalcTbl_MotNwtMtr_T_f32[6U];
        
        
    }
    /*** Finding out Intrpn points for parabola ***/
    else
    {
        IntrpnPts_T_f32[0] = PrmMotRefMdlCurrDaxQaxRefDelta[IdxSt_Cnt_T_u08+1U];
        IntrpnPts_T_f32[1] = TqCalcTbl_MotNwtMtr_T_f32[IdxSt_Cnt_T_u08+1U];
        IntrpnPts_T_f32[4] = PrmMotRefMdlCurrDaxQaxRefDelta[IdxSt_Cnt_T_u08 - 1U];
        IntrpnPts_T_f32[5] = TqCalcTbl_MotNwtMtr_T_f32[IdxSt_Cnt_T_u08 - 1U];
    }
        
    /*** WhileIteratorSubsystem ***/
    do 
    {
        NewDelta_MotRad_T_f32 = PrbcIntrpn(IntrpnPts_T_f32);
        NewSinDelta_MotRad_T_f32 = Sin_f32(NewDelta_MotRad_T_f32);
        NewCosDelta_MotRad_T_f32 = Cos_f32(NewDelta_MotRad_T_f32);
        /*** CalcTq***/
        TqSt_MotNwtMtr_T_f32 = CalcTq (NewCosDelta_MotRad_T_f32,NewSinDelta_MotRad_T_f32,CurrDaxMax_Ampr_T_f32,MotRefMdlInterCalcns_T_rec);
        PreNewDelta_MotRad_T_f32 = IntrpnPts_T_f32[2];
        if ((NewDelta_MotRad_T_f32 - IntrpnPts_T_f32[2])> 0.0F)
        {
            IntrpnPts_T_f32[4] = IntrpnPts_T_f32[2];
            IntrpnPts_T_f32[5] = IntrpnPts_T_f32[3];
        }
        else
        {
            IntrpnPts_T_f32[0] = IntrpnPts_T_f32[2];
            IntrpnPts_T_f32[1] = IntrpnPts_T_f32[3];
        }
        IntrpnPts_T_f32[2] = NewDelta_MotRad_T_f32;
        IntrpnPts_T_f32[3] = TqSt_MotNwtMtr_T_f32;
        IdxIter_Cnt_T_u08++;
    }while ((Abslt_f32_f32((PreNewDelta_MotRad_T_f32 - IntrpnPts_T_f32[2]))>Rte_Prm_MotRefMdlTqItrnTolr_Val()) && ((IdxIter_Cnt_T_u08 <Rte_Prm_MotRefMdlTqItrnLim_Val())));
    

    *Rte_Pim_dMotRefMdlPeakTqNrItrn() = IdxIter_Cnt_T_u08;
    *Rte_Pim_dMotRefMdlPhaAdvAtPeakTq() = NewDelta_MotRad_T_f32;
    *Rte_Pim_dMotRefMdlPeakTq()   = TqSt_MotNwtMtr_T_f32;
    *Rte_Pim_dMotRefMdlCurrDaxAtPeakTq() = *CurrDaxMax_Ampr_T_f32;
    
    /*** Limit the peak torque***/
	/*ApplyTorqueLimit*/
	if (Abslt_f32_f32(MotTqCmd_MotNwtMtr_T_f32) < Abslt_f32_f32(TqSt_MotNwtMtr_T_f32))        
    {
        MotTqCmdLimd_MotNwtMtr_T_f32 = MotTqCmd_MotNwtMtr_T_f32;
    
    }
    else 
    {
        MotTqCmdLimd_MotNwtMtr_T_f32 = TqSt_MotNwtMtr_T_f32;   
    }
            
    /*** Assign to display variables***/
    *Rte_Pim_dMotRefMdlMotTqCmdLimd() =MotTqCmdLimd_MotNwtMtr_T_f32;
    
    return(MotTqCmdLimd_MotNwtMtr_T_f32);
    
}



/*****************************************************************************
 *
 *  Function Name:     CalcMinMotCurr
 *  
 *  Description:       
 *
 *  Inputs:            MotTqCmd_MotNwtMtr_T_f32
 *
 *  Outputs:           CurrDaxMin_Ampr_T_f32, CurrQaxMin_Ampr_T_f32, ImSqrMin_AmprSq_T_f32
 *
 *****************************************************************************/
 
static FUNC(void, MotRefMdl_APPL_CODE) CalcMinMotCurr(float32 MotTqCmd_MotNwtMtr_T_f32,
                                                    P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrDaxMin_Ampr_T_f32, 
                                                    P2VAR(float32, AUTOMATIC, MotRefMdl_APPL_VAR) CurrQaxMin_Ampr_T_f32, 
                                                    P2CONST(MotInterCalcnsRec, AUTOMATIC,MotRefMdl_APPL_VAR)  MotRefMdlInterCalcns_T_rec)

{
    VAR(float32, AUTOMATIC) CurrDaxRef_Ampr_T_f32;
    VAR(float32, AUTOMATIC) CurrMagSqRefUppr_AmprSq_T_f32;
    VAR(float32, AUTOMATIC) CalcMinMotCurr_T_f32[6];
    VAR(float32, AUTOMATIC) UpprCurrQaxRef_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MidCurrQaxRef_Ampr_T_f32;   
    VAR(float32, AUTOMATIC) MidCurrMagSqRef_AmprSq_T_f32;
    VAR(float32, AUTOMATIC) CurrDaxMinTmp_Ampr_T_f32;
    VAR(float32, AUTOMATIC) CurrQaxMinTmp_Ampr_T_f32;   
    VAR(float32, AUTOMATIC) CurrMagSqMin_AmprSq_T_f32;
    VAR(uint8, AUTOMATIC)  Idx_Cnt_T_u08=0U;
    VAR(float32, AUTOMATIC) CurrDaxMinTmpPrev_Ampr_T_f32;
    /*** Calc Id ***/
    CurrDaxRef_Ampr_T_f32 =  Abslt_f32_f32(MotTqCmd_MotNwtMtr_T_f32) / MotRefMdlInterCalcns_T_rec->MotKeEstimd_VoltPerMotRadPerSec_f32; 
    
    /*** Calc Uppr Iq Ref boundary ***/
    UpprCurrQaxRef_Ampr_T_f32 = CalcIq( MotTqCmd_MotNwtMtr_T_f32, (-CurrDaxRef_Ampr_T_f32), MotRefMdlInterCalcns_T_rec );
    CurrMagSqRefUppr_AmprSq_T_f32 = CalcCurrMagSqRef((-CurrDaxRef_Ampr_T_f32), UpprCurrQaxRef_Ampr_T_f32) ;
    
    if (CurrDaxRef_Ampr_T_f32 >  Rte_Prm_MotRefMdlCurrItrnTolr_Val())
    {
        MidCurrQaxRef_Ampr_T_f32 = CalcIq( MotTqCmd_MotNwtMtr_T_f32, (-CurrDaxRef_Ampr_T_f32 * 0.5F), MotRefMdlInterCalcns_T_rec);
        MidCurrMagSqRef_AmprSq_T_f32 = CalcCurrMagSqRef((-CurrDaxRef_Ampr_T_f32 * 0.5F), MidCurrQaxRef_Ampr_T_f32 );
        CalcMinMotCurr_T_f32[0] = -CurrDaxRef_Ampr_T_f32;
        CalcMinMotCurr_T_f32[1] =  CurrMagSqRefUppr_AmprSq_T_f32;
        CalcMinMotCurr_T_f32[2] = -CurrDaxRef_Ampr_T_f32 * 0.5F;
        CalcMinMotCurr_T_f32[3] = MidCurrMagSqRef_AmprSq_T_f32;
        CalcMinMotCurr_T_f32[4] = 0.0F;
        CalcMinMotCurr_T_f32[5] = CurrDaxRef_Ampr_T_f32 * CurrDaxRef_Ampr_T_f32;
        do 
        {   /*** Prbc Interpolation ***/
            CurrDaxMinTmp_Ampr_T_f32 = PrbcIntrpn(CalcMinMotCurr_T_f32);
            CurrQaxMinTmp_Ampr_T_f32 = CalcIq( MotTqCmd_MotNwtMtr_T_f32,CurrDaxMinTmp_Ampr_T_f32, MotRefMdlInterCalcns_T_rec );
            CurrMagSqMin_AmprSq_T_f32 = CalcCurrMagSqRef( CurrDaxMinTmp_Ampr_T_f32 , CurrQaxMinTmp_Ampr_T_f32 );
            /*** Find points for Prbc Interpolation ***/
            CurrDaxMinTmpPrev_Ampr_T_f32 = CalcMinMotCurr_T_f32[2];
            if ((CurrDaxMinTmp_Ampr_T_f32 - CalcMinMotCurr_T_f32[2])> 0.0F)
			{
				CalcMinMotCurr_T_f32[4] = CalcMinMotCurr_T_f32[2];
				CalcMinMotCurr_T_f32[5] = CalcMinMotCurr_T_f32[3];
			}
			else
			{
				CalcMinMotCurr_T_f32[0] = CalcMinMotCurr_T_f32[2];
				CalcMinMotCurr_T_f32[1] = CalcMinMotCurr_T_f32[3];
			}
            CalcMinMotCurr_T_f32[2] = CurrDaxMinTmp_Ampr_T_f32;
            CalcMinMotCurr_T_f32[3] = CurrMagSqMin_AmprSq_T_f32;
            Idx_Cnt_T_u08 ++;
                
        }while((Abslt_f32_f32((CurrDaxMinTmpPrev_Ampr_T_f32 - CalcMinMotCurr_T_f32[2]))> Rte_Prm_MotRefMdlCurrItrnTolr_Val()) && (Idx_Cnt_T_u08 <Rte_Prm_MotRefMdlMinCurrItrnLim_Val()));
        
         /*** Assign the outputs back***/
        *CurrQaxMin_Ampr_T_f32 = CurrQaxMinTmp_Ampr_T_f32;
        *CurrDaxMin_Ampr_T_f32 = CurrDaxMinTmp_Ampr_T_f32;
        
    }
    else
    {
        CurrMagSqMin_AmprSq_T_f32 = CurrMagSqRefUppr_AmprSq_T_f32;
        *CurrQaxMin_Ampr_T_f32 =  UpprCurrQaxRef_Ampr_T_f32;
        *CurrDaxMin_Ampr_T_f32 =  -CurrDaxRef_Ampr_T_f32;
    
    }
    
    *Rte_Pim_dMotRefMdlCurrSqdMin() = CurrMagSqMin_AmprSq_T_f32;
    *Rte_Pim_dMotRefMdlMinCurrNrItrn() = Idx_Cnt_T_u08;
    *Rte_Pim_dMotRefMdlCurrQaxMin() = *CurrQaxMin_Ampr_T_f32;
    *Rte_Pim_dMotRefMdlCurrDaxMin() = *CurrDaxMin_Ampr_T_f32;
    

    
}



 /*****************************************************************************
 *
 *  Function Name:     PrbcIntrpn
 *  
 *  Description:       Parabolic interpolation
 *
 *  Inputs:            IntpolPoints_Uls_T_f32 - Array of Interpolation points
 *
 *  Outputs:           ParaIntpol_Uls_T_f32 
 *
 *****************************************************************************/
static FUNC(float32, MotRefMdl_APPL_CODE) PrbcIntrpn( float32 const IntrpnPts_T_f32[6])
{
    VAR(float32, AUTOMATIC) ParaIntpol_Uls_T_f32;
    VAR(float32, AUTOMATIC) Num_Uls_T_f32;
    VAR(float32, AUTOMATIC) Den1_Uls_T_f32;
    VAR(float32, AUTOMATIC) Den2_Uls_T_f32;
    VAR(float32, AUTOMATIC) Den_Uls_T_f32;
    VAR(float32, AUTOMATIC) TermF1_Uls_T_f32;
    VAR(float32, AUTOMATIC) TermF2_Uls_T_f32;
    VAR(float32, AUTOMATIC) TermX1_Uls_T_f32;
    VAR(float32, AUTOMATIC) TermX2_Uls_T_f32;
    
    /*** Calc Intermediate Terms ***/
    TermF1_Uls_T_f32 = (IntrpnPts_T_f32[1] - IntrpnPts_T_f32[3]);  
    TermF2_Uls_T_f32 = (IntrpnPts_T_f32[3] - IntrpnPts_T_f32[5]);   
    TermX1_Uls_T_f32 = (IntrpnPts_T_f32[0] - IntrpnPts_T_f32[2]);    
    TermX2_Uls_T_f32 = (IntrpnPts_T_f32[2] - IntrpnPts_T_f32[4]);    
    
    /*** Calc Numerator and denominator for Intrpn for Prbc Intrpn***/
    Den1_Uls_T_f32 = TermF2_Uls_T_f32 * TermX1_Uls_T_f32;
    Den2_Uls_T_f32 =  TermF1_Uls_T_f32 * TermX2_Uls_T_f32;

    Num_Uls_T_f32 = (Den1_Uls_T_f32 * TermX1_Uls_T_f32) + (Den2_Uls_T_f32 *TermX2_Uls_T_f32) ;
    Den_Uls_T_f32 = 2.0F * (Den1_Uls_T_f32 - Den2_Uls_T_f32);

    /*** Calc Prbc inetrpolation ***/ 
    if (Abslt_f32_f32(Den_Uls_T_f32) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
    {
        ParaIntpol_Uls_T_f32= (Num_Uls_T_f32/ Den_Uls_T_f32)+ IntrpnPts_T_f32[2];  
    }
    else
    {
        ParaIntpol_Uls_T_f32 = 1.0F/ARCHGLBPRM_FLOATZEROTHD_ULS_F32;
    }

    return ParaIntpol_Uls_T_f32;
}

/*****************************************************************************
 *
 *  Function Name:     Decoder
 *  
 *  Description:       Decoder implementation
 *
 *  Inputs:            MotAndThermProtnLoaMod_Cnt_T_u08
 *
 *  Outputs:           CurrMeasLoaMtgtnEna_Cnt_T_logl, IvtrLoaMtgtnEna_Cnt_T_logl, FetLoaMtgtnEna_Cnt_T_logl 
 *
 *****************************************************************************/
static FUNC(void, MotRefMdl_APPL_CODE) Decoder( uint8 MotAndThermProtnLoaMod_Cnt_T_u08,
                                                P2VAR(boolean, AUTOMATIC, MotRefMdl_APPL_VAR) CurrMeasLoaMtgtnEna_Cnt_T_logl, 
                                                P2VAR(boolean, AUTOMATIC, MotRefMdl_APPL_VAR) IvtrLoaMtgtnEna_Cnt_T_logl, 
                                                P2VAR(boolean, AUTOMATIC, MotRefMdl_APPL_VAR) FetLoaMtgtnEna_Cnt_T_logl)
{
    if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK1_CNT_U08)== BITMASK1_CNT_U08)
	{
	    *CurrMeasLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    *CurrMeasLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK2_CNT_U08)== BITMASK2_CNT_U08)
	{
	    *IvtrLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    *IvtrLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK4_CNT_U08)== BITMASK4_CNT_U08)
	{
	    *FetLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    *FetLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
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
