/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotCurrRegCfg.c
 *        Config:  C:/Component/SF104A_MotCurrRegCfg_Impl/tools/Component.dpa
 *     SW-C Type:  MotCurrRegCfg
 *  Generated at:  Wed Oct 18 15:53:55 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotCurrRegCfg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: MotCurrRegCfg.c
* Module Description: Implementation of MotCurrRegCfg
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:           9 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev    Author         Change Description                                                           SCR #
* -------   -----  --------  --------------------------------------------------------------------------    ------------
* 06/02/15  1      Selva      Initial Version                                                               EA4#293
* 06/18/15  2      Selva      Fixed  Indu1 port to Val to match Standards                                   EA4#293
* 03/12/16  3      Rijvi      Fixed  anomaly EA4#2357                                                       EA4#3205
* 04/29/16  4      KK         Input signal name changed                                                     EA4#5366
* 07/06/16  5      KK         Upper limit changed for MotIntglGainDax and MotIntglGainQax(Fix for EA4#5789) EA4#6479
* 11/09/16  6      JK         Updated to FDD v2.2.0                                                         EA4#7543
* 01/11/17  7      SR         Updated to FDD v2.3.0 as Fix for anomaly EA4#8828                             EA4#8975
* 06/01/17  8      SPP        Remove application data types                                                 EA4#11067
* 10/09/17  9      TATA       Current Regulator Configuration                                              	EA4#13243
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
 * MotCurrEolCalSt2
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u10p6
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
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_MotCurrRegCfg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "NxtrFil.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1 ]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1  [NXTRDEV  19.1.1 ]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define CLSDLOOPBWHILIM_HZ_F32            1000.0F
#define CLSDLOOPBWLOLIM_HZ_F32            0.0F
#define MOTAGELECDLYHILIM_MOTRAD_F32      1.5F
#define MOTAGELECDLYLOLIM_MOTRAD_F32      (-1.5F)
#define MOTDAMPGHILIM_OHM_F32             5.5F
#define MOTDAMPGLOLIM_OHM_F32             (-0.11F)
#define MOTINTGLGAINHILIM_OHM_F32         0.6F
#define MOTINTGLGAINLOLIM_OHM_F32         0.0F
#define MOTNATFREQHILIM_HZ_F32            500.0F 
#define MOTNATFREQLOLIM_HZ_F32            0.0F
#define MOTPROPGAINHILIM_OHM_F32          2.25F
#define MOTPROPGAINLOLIM_OHM_F32          0.0F

#define POLETOPHA_ULS_F32                 0.5F
#define MOTDAMPGRATCON_ULS_F32            2.0F
#define ZEROMOTCTRLGAIN_OHM_F32 		  0.0F
#define BITMASK1_CNT_U08  				  ((uint8)1U)
#define BITMASK2_CNT_U08  				  ((uint8)2U)
#define BITMASK4_CNT_U08  				  ((uint8)4U)

#define MotCurrRegCfgMotClsdLoopBwDaxY  (*(const Ary1D_u10p6_4 *) Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D())
#define MotCurrRegCfgMotClsdLoopBwQaxY  (*(const Ary1D_u10p6_4 *) Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D())
#define MotCurrRegCfgMotCtrlPrmSelnX  (*(const Ary1D_u11p5_4 *) Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D())
#define MotCurrRegCfgMotNatFrqDaxY      (*(const Ary1D_u9p7_4 *)  Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D())
#define MotCurrRegCfgMotNatFrqQaxY      (*(const Ary1D_u9p7_4 *)  Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D())
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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u10p6: Integer in interval [0...65535]
 * u11p5: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * MotCurrEolCalSt2: Enumeration of integer in interval [0...255] with enumerators
 *   MCECS_OFFSCMDSTRT (0U)
 *   MCECS_OFFSCMDHI (1U)
 *   MCECS_OFFSCMDLO (2U)
 *   MCECS_OFFSCMDZERO (3U)
 *   MCECS_OFFSCMDEND (4U)
 *   MCECS_GAINCMDAD (5U)
 *   MCECS_GAINCMDBE (6U)
 *   MCECS_GAINCMDCF (7U)
 *   MCECS_CMDSAFEST (8U)
 *
 * Array Types:
 * ============
 * Ary1D_u10p6_4: Array with 4 element(s) of type u10p6
 * Ary1D_u11p5_4: Array with 4 element(s) of type u11p5
 * Ary1D_u9p7_4: Array with 4 element(s) of type u9p7
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
 *   float32 *Rte_Pim_dMotCurrRegCfgMotVelMrfFild(void)
 *   FilLpRec1 *Rte_Pim_MotVelMrfFild(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtDax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotRVirtQax_Val(void)
 *   float32 Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   boolean Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl(void)
 *   boolean Rte_Prm_MotRefMdlFbCtrlDi_Logl(void)
 *   u10p6 *Rte_Prm_MotCurrRegCfgMotClsdLoopBwDaxY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_4
 *   u10p6 *Rte_Prm_MotCurrRegCfgMotClsdLoopBwQaxY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_4
 *   u11p5 *Rte_Prm_MotCurrRegCfgMotCtrlPrmSelnX_Ary1D(void)
 *     Returnvalue: u11p5* is of type Ary1D_u11p5_4
 *   u9p7 *Rte_Prm_MotCurrRegCfgMotNatFrqDaxY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *   u9p7 *Rte_Prm_MotCurrRegCfgMotNatFrqQaxY_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_4
 *
 *********************************************************************************************************************/


#define MotCurrRegCfg_START_SEC_CODE
#include "MotCurrRegCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrRegCfg_CODE) MotCurrRegCfgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgInit1
 *********************************************************************************************************************/
   FilLpInit(0.0F, Rte_Prm_MotCurrRegCfgMotVelFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, (Rte_Pim_MotVelMrfFild()));
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCurrRegCfgPer1
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
 *   Std_ReturnType Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotREstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAgElecDly_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDampgDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDampgQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotIntglGainDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotIntglGainQax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotPropGainDax_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotPropGainQax_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCurrRegCfg_CODE) MotCurrRegCfgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCurrRegCfgPer1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC)  ElecPosDelayComp_MotRad_T_f32;
    VAR(float32, AUTOMATIC)  MotInduDaxEstimd_Henry_T_f32;
    VAR(float32, AUTOMATIC)  MotInduQaxEstimd_Henry_T_f32;   
    VAR(float32, AUTOMATIC)  MotREstimd_Ohm_T_f32;
    VAR(float32, AUTOMATIC)  MotVelMrf_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC)  VehSpd_Kph_T_f32;
    VAR(MotCurrEolCalSt2, AUTOMATIC) MotCurrEolCalSt_T_enum;
    VAR(float32, AUTOMATIC)     MtrVelFiltLp_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC)     AbsltMtrVelFiltLp_MotRadPerSec_T_f32;
    VAR(uint16, AUTOMATIC)      AbsltMtrVelFiltLp_MotRadPerSec_T_u11p5;
    VAR(float32, AUTOMATIC)     MotDampgDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC)     MotDampgQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC)     MotIntglGainDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC)     MotIntglGainQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC)     MotPropGainDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC)     MotPropGainQax_Ohm_T_f32;
    VAR(uint16, AUTOMATIC)      MotClsdLoopBwQax_Hz_T_u10p6;
    VAR(float32, AUTOMATIC)     MotClsdLoopBwQax_Hz_T_f32;
    VAR(uint16, AUTOMATIC)      MotClsdLoopBwDax_Hz_T_u10p6;
    VAR(float32, AUTOMATIC)     MotClsdLoopBwDax_Hz_T_f32;
    VAR(uint16, AUTOMATIC)      MotNatFreqQax_Hz_T_u9p7;
    VAR(float32, AUTOMATIC)     MotNatFreqQax_MotRadpS_T_f32;
    VAR(uint16, AUTOMATIC)      MotNatFreqDax_Hz_T_u9p7;
    VAR(float32, AUTOMATIC)     MotNatFreqDax_MotRadpS_T_f32;
    VAR(float32, AUTOMATIC)     MotGainClsdLoopQax_Hz_T_f32;
    VAR(float32, AUTOMATIC)     MotGainClsdLoopDax_Hz_T_f32;
    VAR(boolean, AUTOMATIC) DualEcuMotCtrlMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC)  IvtrLoaMtgtnEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC)  CurrMeasLoaMtgtnEna_Cnt_T_logl;
    VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl;
	
	 /*** Reading Inputs From RTE ***/
    (void)Rte_Read_MotCurrEolCalSt_Val(&MotCurrEolCalSt_T_enum);
    (void)Rte_Read_MotInduDaxEstimd_Val(&MotInduDaxEstimd_Henry_T_f32);
    (void)Rte_Read_MotInduQaxEstimd_Val(&MotInduQaxEstimd_Henry_T_f32);
    (void)Rte_Read_MotREstimd_Val(&MotREstimd_Ohm_T_f32);
    (void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MotRadPerSec_T_f32);
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
    (void)Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(&DualEcuMotCtrlMtgtnEna_Cnt_T_logl);
    (void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);
	
	/*** Start of Decoder ***/
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK1_CNT_U08)== BITMASK1_CNT_U08)
	{
	    CurrMeasLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    CurrMeasLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	
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
	
    /* Motor Velocity Filter (LPF) */
    MtrVelFiltLp_MotRadPerSec_T_f32 = FilLpUpdOutp_f32(MotVelMrf_MotRadPerSec_T_f32,         
                                                                        Rte_Pim_MotVelMrfFild());
    *Rte_Pim_dMotCurrRegCfgMotVelMrfFild()=MtrVelFiltLp_MotRadPerSec_T_f32;

    /**** Position Compensation Delay ****/
    /****CalcMotAgElecDly*****/
    ElecPosDelayComp_MotRad_T_f32 = MotVelMrf_MotRadPerSec_T_f32* Rte_Prm_MotCurrRegCfgMotAgCompuDly_Val() * ((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() * POLETOPHA_ULS_F32);
    ElecPosDelayComp_MotRad_T_f32 = Lim_f32(ElecPosDelayComp_MotRad_T_f32,MOTAGELECDLYLOLIM_MOTRAD_F32,MOTAGELECDLYHILIM_MOTRAD_F32);
      
    /***************************PI_gain_Scheduling**************/
    /* PI Gain Computation */
    if ((Rte_Prm_MotRefMdlFbCtrlDi_Logl() == TRUE)||(MotCurrEolCalSt_T_enum != MCECS_OFFSCMDSTRT) || (CurrMeasLoaMtgtnEna_Cnt_T_logl==TRUE) ||(IvtrLoaMtgtnEna_Cnt_T_logl==TRUE)||(DualEcuMotCtrlMtgtnEna_Cnt_T_logl == TRUE)||(FetLoaMtgtnEna_Cnt_T_logl == TRUE))
    {
        MotPropGainDax_Ohm_T_f32 = ZEROMOTCTRLGAIN_OHM_F32;
        MotIntglGainDax_Ohm_T_f32= ZEROMOTCTRLGAIN_OHM_F32;
        MotPropGainQax_Ohm_T_f32 = ZEROMOTCTRLGAIN_OHM_F32;
        MotIntglGainQax_Ohm_T_f32= ZEROMOTCTRLGAIN_OHM_F32;
        MotNatFreqDax_MotRadpS_T_f32= ZEROMOTCTRLGAIN_OHM_F32;
        MotNatFreqQax_MotRadpS_T_f32= ZEROMOTCTRLGAIN_OHM_F32;
    }
    else
    {
        AbsltMtrVelFiltLp_MotRadPerSec_T_f32 =(Abslt_f32_f32(MtrVelFiltLp_MotRadPerSec_T_f32));  
        AbsltMtrVelFiltLp_MotRadPerSec_T_u11p5 = FloatToFixd_u16_f32(AbsltMtrVelFiltLp_MotRadPerSec_T_f32,NXTRFIXDPT_FLOATTOP5_ULS_F32);
        if (VehSpd_Kph_T_f32  <= Rte_Prm_MotCurrRegCfgCtrlrDynGainVehSpdCutOff_Val())
        {
                        MotClsdLoopBwQax_Hz_T_u10p6 = LnrIntrpn_u16_u16VariXu16VariY(MotCurrRegCfgMotCtrlPrmSelnX,
                                                                    MotCurrRegCfgMotClsdLoopBwQaxY,
                                                                    (uint16)TblSize_m(MotCurrRegCfgMotCtrlPrmSelnX),
                                                                    AbsltMtrVelFiltLp_MotRadPerSec_T_u11p5
                                                               );    
                                                               
                
                                                               
                                                               
                        MotNatFreqQax_Hz_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(MotCurrRegCfgMotCtrlPrmSelnX,
                                                                    MotCurrRegCfgMotNatFrqQaxY,
                                                                    (uint16)TblSize_m(MotCurrRegCfgMotCtrlPrmSelnX),
                                                                    AbsltMtrVelFiltLp_MotRadPerSec_T_u11p5
                                                               ); 
                           
                                                               
                        MotClsdLoopBwDax_Hz_T_u10p6 = LnrIntrpn_u16_u16VariXu16VariY(MotCurrRegCfgMotCtrlPrmSelnX,
                                                                    MotCurrRegCfgMotClsdLoopBwDaxY,
                                                                    (uint16)TblSize_m(MotCurrRegCfgMotCtrlPrmSelnX),
                                                                    AbsltMtrVelFiltLp_MotRadPerSec_T_u11p5
                                                               );           
            
                
                        MotNatFreqDax_Hz_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(MotCurrRegCfgMotCtrlPrmSelnX,
                                                                    MotCurrRegCfgMotNatFrqDaxY,
                                                                    (uint16)TblSize_m(MotCurrRegCfgMotCtrlPrmSelnX),
                                                                    AbsltMtrVelFiltLp_MotRadPerSec_T_u11p5
                                                               ); 
        }
        else
        {
            /*Per m file, this calibrations are in increasing order */
            MotClsdLoopBwQax_Hz_T_u10p6  =MotCurrRegCfgMotClsdLoopBwQaxY[(uint16)TblSize_m(MotCurrRegCfgMotClsdLoopBwQaxY)-1U];              
            MotNatFreqQax_Hz_T_u9p7      =MotCurrRegCfgMotNatFrqQaxY[(uint16)TblSize_m(MotCurrRegCfgMotNatFrqQaxY)-1U];
            MotClsdLoopBwDax_Hz_T_u10p6  =MotCurrRegCfgMotClsdLoopBwDaxY[(uint16)TblSize_m(MotCurrRegCfgMotClsdLoopBwDaxY)-1U];
            MotNatFreqDax_Hz_T_u9p7      =MotCurrRegCfgMotNatFrqDaxY[(uint16)TblSize_m(MotCurrRegCfgMotNatFrqDaxY)-1U];
        }
        
        MotClsdLoopBwQax_Hz_T_f32  = Lim_f32(FixdToFloat_f32_u16(MotClsdLoopBwQax_Hz_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32), CLSDLOOPBWLOLIM_HZ_F32, CLSDLOOPBWHILIM_HZ_F32);
        MotNatFreqQax_MotRadpS_T_f32= (Lim_f32(FixdToFloat_f32_u16(MotNatFreqQax_Hz_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32), MOTNATFREQLOLIM_HZ_F32, MOTNATFREQHILIM_HZ_F32))* ARCHGLBPRM_2PI_ULS_F32;
        MotClsdLoopBwDax_Hz_T_f32  = Lim_f32(FixdToFloat_f32_u16(MotClsdLoopBwDax_Hz_T_u10p6, NXTRFIXDPT_P6TOFLOAT_ULS_F32), CLSDLOOPBWLOLIM_HZ_F32, CLSDLOOPBWHILIM_HZ_F32);
        MotNatFreqDax_MotRadpS_T_f32= (Lim_f32(FixdToFloat_f32_u16(MotNatFreqDax_Hz_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32), MOTNATFREQLOLIM_HZ_F32, MOTNATFREQHILIM_HZ_F32)) * ARCHGLBPRM_2PI_ULS_F32;

        if (Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl() == TRUE)
        {
            MotPropGainQax_Ohm_T_f32 = ZEROMOTCTRLGAIN_OHM_F32;
            MotPropGainDax_Ohm_T_f32 = ZEROMOTCTRLGAIN_OHM_F32;
            MotIntglGainQax_Ohm_T_f32 = ARCHGLBPRM_HALFSQRT3_ULS_F32*MotNatFreqQax_MotRadpS_T_f32*MotNatFreqQax_MotRadpS_T_f32*MotInduQaxEstimd_Henry_T_f32* Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val();
            MotIntglGainDax_Ohm_T_f32 = ARCHGLBPRM_HALFSQRT3_ULS_F32*MotNatFreqDax_MotRadpS_T_f32*MotNatFreqDax_MotRadpS_T_f32*MotInduDaxEstimd_Henry_T_f32* Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val();
        }
        else
        {
            MotGainClsdLoopQax_Hz_T_f32 =  ARCHGLBPRM_2PI_ULS_F32 * ARCHGLBPRM_HALFSQRT3_ULS_F32 * MotClsdLoopBwQax_Hz_T_f32;
            MotGainClsdLoopDax_Hz_T_f32 =  ARCHGLBPRM_2PI_ULS_F32 * ARCHGLBPRM_HALFSQRT3_ULS_F32 * MotClsdLoopBwDax_Hz_T_f32;
            MotPropGainQax_Ohm_T_f32 =  MotInduQaxEstimd_Henry_T_f32 * MotGainClsdLoopQax_Hz_T_f32;
            MotPropGainDax_Ohm_T_f32 =  MotInduDaxEstimd_Henry_T_f32 * MotGainClsdLoopDax_Hz_T_f32  ;
            MotIntglGainQax_Ohm_T_f32 = MotGainClsdLoopQax_Hz_T_f32*(MotREstimd_Ohm_T_f32+ (Rte_Prm_MotCurrRegCfgMotRVirtQax_Val() / ARCHGLBPRM_HALFSQRT3_ULS_F32))* Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val();
            MotIntglGainDax_Ohm_T_f32 = MotGainClsdLoopDax_Hz_T_f32 *(MotREstimd_Ohm_T_f32+ (Rte_Prm_MotCurrRegCfgMotRVirtDax_Val() / ARCHGLBPRM_HALFSQRT3_ULS_F32))* Rte_Prm_MotCurrRegCfgIntglGainSampleTi_Val();
        }
    }
    MotIntglGainDax_Ohm_T_f32 = Lim_f32(MotIntglGainDax_Ohm_T_f32,MOTINTGLGAINLOLIM_OHM_F32, MOTINTGLGAINHILIM_OHM_F32);
    MotIntglGainQax_Ohm_T_f32 = Lim_f32(MotIntglGainQax_Ohm_T_f32,MOTINTGLGAINLOLIM_OHM_F32, MOTINTGLGAINHILIM_OHM_F32);
    MotPropGainDax_Ohm_T_f32  = Lim_f32(MotPropGainDax_Ohm_T_f32,MOTPROPGAINLOLIM_OHM_F32, MOTPROPGAINHILIM_OHM_F32);
    MotPropGainQax_Ohm_T_f32  = Lim_f32(MotPropGainQax_Ohm_T_f32,MOTPROPGAINLOLIM_OHM_F32, MOTPROPGAINHILIM_OHM_F32);


    /************* SecOrder Damping Term Calculation******************/
    MotDampgDax_Ohm_T_f32 = ARCHGLBPRM_HALFSQRT3_ULS_F32*((MOTDAMPGRATCON_ULS_F32 * Rte_Prm_MotCurrRegCfgMotDampgRatDax_Val()*MotNatFreqDax_MotRadpS_T_f32*MotInduDaxEstimd_Henry_T_f32) - MotREstimd_Ohm_T_f32);
    MotDampgQax_Ohm_T_f32 = ARCHGLBPRM_HALFSQRT3_ULS_F32*((MOTDAMPGRATCON_ULS_F32 * Rte_Prm_MotCurrRegCfgMotDampgRatQax_Val()*MotNatFreqQax_MotRadpS_T_f32*MotInduQaxEstimd_Henry_T_f32) - MotREstimd_Ohm_T_f32);
    MotDampgDax_Ohm_T_f32 = Lim_f32(MotDampgDax_Ohm_T_f32,MOTDAMPGLOLIM_OHM_F32, MOTDAMPGHILIM_OHM_F32);
    MotDampgQax_Ohm_T_f32 = Lim_f32(MotDampgQax_Ohm_T_f32,MOTDAMPGLOLIM_OHM_F32, MOTDAMPGHILIM_OHM_F32);

    (void)Rte_Write_MotAgElecDly_Val(ElecPosDelayComp_MotRad_T_f32);
    (void)Rte_Write_MotDampgDax_Val(MotDampgDax_Ohm_T_f32);
    (void)Rte_Write_MotDampgQax_Val(MotDampgQax_Ohm_T_f32);
    (void)Rte_Write_MotIntglGainDax_Val(MotIntglGainDax_Ohm_T_f32);
    (void)Rte_Write_MotIntglGainQax_Val(MotIntglGainQax_Ohm_T_f32);
    (void)Rte_Write_MotPropGainDax_Val(MotPropGainDax_Ohm_T_f32);
    (void)Rte_Write_MotPropGainQax_Val(MotPropGainQax_Ohm_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotCurrRegCfg_STOP_SEC_CODE
#include "MotCurrRegCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
