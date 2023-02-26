/* TODO Stub file remove later */
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordVltgIf.c
 *        Config:  C:/Users/gz324f/Desktop/working/_Ford_T3T6_Eps_Impl_A_Working/CF046A_FordVltgIf_Impl/tools/Component.dpa
 *     SW-C Type:  FordVltgIf
 *  Generated at:  Tue Feb  6 11:38:22 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordVltgIf>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordVltgIf.c
* Module Description: FordVltgIf.c - CF046A
* Project           : CBD
* Author            : Guru Seshadhri (TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 01/12/17   1       GS(TATA)  Initial Version                                                               EA4#13441
* 01/19/18   2       KK  	   PSR till MARKUP3																 PSR	
*----------------------------------------------------------------------------------------------------------------------
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
 * FordEpsSysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * FordVltgOperSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ImcArbnRxSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
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
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *
 * Component Types:
 * ================
 * FordVltgIf
 *   This function will inhibit battery voltage diagnostics, define primary voltage states and define transitions between battery voltage states
 *
 *
 * Port Prototypes:
 * ================
 * BattRtnCurr
 *   Indicates the Ford Battery Return Current
 *
 * BattRtnCurrImc
 *   Indicates the Ford Battery Return Current IMC
 *
 * BattVltg
 *   Indicates the Ford Battery Voltage
 *
 * FordActvParkAssiEnad
 *   Indicates the Ford Active Park Assist Enabled
 *
 * FordEpsCurr
 *   Indicates the Ford EPS Current
 *
 * FordEpsSysSt
 *   Indicates the EPS System State
 *
 * FordEpsVltg
 *   Indicates the Ford EPS Voltage
 *
 * FordEvasSteerAssiEnad
 *   Indicates the Ford Evasive Steering Assist Enabled
 *
 * FordFeatThdSts
 *   Indicates the Ford Feature Threshold Status
 *
 * FordInhbBattVltgDiagc
 *   Indicates the Ford Inhibit Battery Voltage Diagnostic
 *
 * FordLaneCentrAssiEnad
 *   Indicates the Ford Lane Centering Assist Enabled
 *
 * FordLaneDprtrWarnEnad
 *   Indicates the Ford Lane Departure Warning Enabled
 *
 * FordLaneKeepAssiEnad
 *   Indicates the Ford Lane Keep Assist Enabled
 *
 * FordMaxAsscTq
 *   Indicates the Ford Maximum Assistance Torque
 *
 * FordMaxBattCurr
 *   Indicates the Maximum value of Ford Battery Current
 *
 * FordMinBattVltg
 *   Indicates the Minimum value of Ford Battery Voltage
 *
 * FordSysSt
 *   Indicates the System State
 *
 * FordTrfcJamAssiEnad
 *   Indicates the Ford Traffic Jam Assist Enabled
 *
 * FordTrlrBackupAssiEnad
 *   Indicates the Ford Trailer Backup Assistance Enabled
 *
 * FordVehElecPwrSts
 *   Indicates the Ford Electrical Power Status
 *
 * FordVehIgnStsQly
 *   Indicates the Ford Vehicle Ignition Status Quality
 *
 * FordVehPwrpkTqSts
 *   Indicates the Ford Vehicle Power-pack Torque Status
 *
 * FordVehSpd
 *   Indicates the Ford Vehicle Speed
 *
 * FordVehSpdVld
 *   Indicates the Ford Vehicle Speed Validity
 *
 * FordVltgOperRamp
 *   Indicates the Ford Voltage Operation Ramp
 *
 * FordVltgOperScar
 *   Indicates the Ford Voltage Operation Scaler
 *
 * FordVltgOperSt
 *   Indicates the Ford Voltage Operation State
 *
 * GetRefTmr100MicroSec32bit
 *   It captures simulation time fromthe SimnTi value obtained at root layer of model and gives the RefTmr
 *
 * GetTiSpan100MicroSec32bit
 *   It captures simulation time fromSimnTi value, handles counter wrapping, and subtracts RefTmr, provides the TiSpan
 *
 * SetNtcSts
 *   Set the NTC status
 *
 *
 * Runnable Entities:
 * ==================
 * FordVltgIfInit1
 *   Initialization Runnable
 *
 * FordVltgIfPer1
 *   Periodic Runnable at 2ms
 *
 *
 * Per-Instance Memory:
 * ====================
 * FeatThdStsRefTi
 *   For Software to keep track of Feature Threshold Status Reference Time
 *
 * HiToLoChk
 *   For Software to keep track of High To Low Check
 *
 * HiToMidChk
 *   For Software to keep track of High To Middle Check
 *
 * HiVltgInhbRefTi
 *   For Software to keep track of High Voltage  Inhibit Reference Time
 *
 * HiVltgNoAssiRcvrRefTi
 *   For Software to keep track of High Voltage No Assist Recover Reference Time
 *
 * HiVltgRcvrRefTi
 *   For Software to keep track of High Voltage  Recover Reference Time
 *
 * HiVltgRcvrTiMaxRefTi
 *   For Software to keep track of High Voltage  Recover Time Maximum Reference Time
 *
 * InhbBattVltgDiagcRefTi
 *   For Software to keep track of Inhibit Battery Voltage  Diagnostic Reference Time
 *
 * LoToHiChk
 *   For Software to keep track of Low To High Check
 *
 * LoToMidChk
 *   For Software to keep track of Low To Middle Check
 *
 * LoVltgInhbRefTi1
 *   For Software to keep track of Low Voltage  Inhibit Reference Time 1
 *
 * LoVltgInhbRefTi2
 *   For Software to keep track of Low Voltage  Inhibit Reference Time 2
 *
 * LoVltgInhbRefTi3
 *   For Software to keep track of Low Voltage  Inhibit Reference Time 3
 *
 * LoVltgNoAssiRcvrRefTi
 *   For Software to keep track of Low Voltage No Assist Recover Reference Time
 *
 * LoVltgRcvrRefTi
 *   For Software to keep track of Low Voltage  Recover Reference Time
 *
 * LoVltgRcvrTiMaxRefTi
 *   For Software to keep track of Low Voltage  Recover Time Maximum Reference Time
 *
 * LoVltgThdMidToLoRefTi
 *   For Software to keep track of Low Voltage  Threshold Middle To Low Reference Time
 *
 * LoVltgThdMidToLoRefTmr
 *   For Software to keep track of Low Voltage  Threshold Middle To Low Reference Timer
 *
 * MaxEpsBattCurrPrev
 *   For Software to keep track of Maximum EPS Battery Current Previous
 *
 * MidToHiChk
 *   For Software to keep track of Middle To High Check
 *
 * MidToLoChk
 *   For Software to keep track of Middle To Low Check
 *
 * MinBattVltgPrev
 *   For Software to keep track of Minimum Battery Voltage  Previous
 *
 * PrevVltgOperRamp
 *   For Software to keep track of Previous Voltage  Operation Ramp
 *
 * PrevVltgOperScar
 *   For Software to keep track of Previous Voltage  Operation Scaler
 *
 *********************************************************************************************************************/

#include "Rte_FordVltgIf.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */
 #include "NxtrMath.h"
 #include "ArchGlbPrm.h"
 #include "ImcArbn.h"
/********************************************* Embedded Local Constants **********************************************/
 #define CNVMILLISECTOCNT_CNTPERMILLISEC_U16        (10U)
 #define DEBSTEP_CNT_U16                            (65535U)
 //#define IMCARBN_IMCBATTRTNCURR_CNT_U16             (65535U) /* KK : Assumed value; missing in DD*/
 //#define IMCARBN_IMCBATTVLTG_CNT_U16             	(65535U) /* KK : Assumed value; missing in DD*/
 #define EPSCURRMAX_AMPR_F32                        (150.0F)
 #define EPSCURRMIN_AMPR_F32                        (-75.0F)
 #define EPSVLTGMAX_VOLT_F32                        (19.0F)
 #define EPSVLTGMIN_VOLT_F32                        (6.0F)
 #define FORDMAXBATTCURRMAX_AMPR_F32                (300.0F)
 #define FORDMAXBATTCURRMIN_AMPR_F32                (-300.0F)
 #define FORDMINBATTVLTGMAX_VOLT_F32                (40.0F)
 #define FORDMINBATTVLTGMIN_VOLT_F32                (0.0F)
 #define FORDVLTGOPERRAMPMAX_ULSPERSEC_F32          (500.0F)
 #define FORDVLTGOPERRAMPMIN_ULSPERSEC_F32          (0.1F)
 #define FORDVLTGOPERSCARMAX_ULS_F32                (1.0F)
 #define FORDVLTGOPERSCARMIN_ULS_F32                (0.0F)
 #define LOVEHSPD_KPH_F32                           (10.0F)
 #define TRANEND_CNT_U08                            (2U)
 #define TRANINIT_CNT_U08                           (0U)
 #define TRANSTRT_CNT_U08                           (1U)
 #define VLTGOPERSCALERMAX_ULS_F32                  (1.0F)
 #define VLTGOPERSCALERMIN_ULS_F32                  (0.0F)
 #define PREV_STATE_CNT_U08                         (255U) 
 #define STATE0_CNT_U08                             (0U)
 #define STATE1_CNT_U08                             (1U)
 #define STATE2_CNT_U08                             (2U)
 #define ZEROCURR_AMPR_F32                          (0.0F)
 #define ZEROPWRSTATE_CNT_F32                       (0.0F)
 #define INCRVAL_CNT_U08                            (1U)
 #define ZEROREFTMR_CNT_U08                         (0U)

/******************************************** Local Function Prototypes **********************************************/
 static FUNC(void, FordVltgIf_CODE) VehPwrTrakgAtEps(VAR(boolean,AUTOMATIC) FordVehSpdVld_Cnt_T_logl,
													 VAR(boolean,AUTOMATIC) EpsBattVltgVld_Cnt_T_logl,
													 VAR(boolean,AUTOMATIC) EpsBattCurrVld_Cnt_T_logl,
                                                     VAR(float32,AUTOMATIC) FordVehSpd_Kph_T_f32,                                                    
													 VAR(float32,AUTOMATIC) FordStrtStopSt_Cnt_T_f32,
                                                     VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                     VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                                     P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordMinBattVltg_Volt_T_f32,
                                                     P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordMaxBattCurr_Ampr_T_f32);

 static FUNC(void, FordVltgIf_CODE) FeatThdSts(VAR(boolean,AUTOMATIC) FordLaneKeepAssiEnad_Cnt_T_logl,
                                               VAR(float32,AUTOMATIC) FordMaxAsscTq_Perc_T_f32,
                                               VAR(boolean,AUTOMATIC) FordLaneDprtrWarnEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordTrfcJamAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordActvParkAssiEnad_Cnt_T_logl,
                                               P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR)FordFeatThdSts_Cnt_T_logl);

 static FUNC(void, FordVltgIf_CODE) VltgDTCInhb(VAR(FordEpsSysSt1,AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                                VAR(Ford_PwPckTq_D_Stat,AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum,
                                                VAR(Ford_Ignition_Status,AUTOMATIC) FordVehIgnStsQly_Cnt_T_enum,
                                                VAR(Ford_ElPw_D_Stat,AUTOMATIC) FordVehElecPwrSts_Cnt_T_enum,                              
												VAR(float32,AUTOMATIC) FordStrtStopSt_Cnt_T_f32,
                                                P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordInhbBattVltgDiagc_Cnt_T_logl);

 static FUNC(void, FordVltgIf_CODE) LoVltgOperMonrTranT1(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                         VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                                         VAR(boolean,AUTOMATIC) FordFeatThdSts_Cnt_T_logl,
                                                         P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) NormVltgOperToLoVltgOperMonr_Cnt_T_logl);
														 
 static	FUNC(void, FordVltgIf_CODE) NormVltgOperTranT5(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                       P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperToNormVltgOper_Cnt_T_logl);
													   
 static FUNC(void,FordVltgIf_CODE) LoVltgNoAssiToNormVltgOperTranT7(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                                    P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgNoAssiToNormVltgOper_Cnt_T_logl);

 static FUNC(void, FordVltgIf_CODE) HiVltgOperTranT8(VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                     P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) NormVltgOperToHiVltgOper_Cnt_T_logl);
													 
 static FUNC(void,FordVltgIf_CODE) HiVltgToNormVltgOperTranT9(VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) HiVltgOperToNormVltgOper_Cnt_T_logl);
															  
 static FUNC(void,FordVltgIf_CODE) HiVltgNoAssiToNormVltgOperTranT11(VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                                     P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) HiVltgNoAssiToNormVltgOper_Cnt_T_logl);

 static FUNC(void, FordVltgIf_CODE) BattVltgSt(VAR(SysSt1,AUTOMATIC) FordSysSt_Cnt_T_enum,
                                               VAR(boolean,AUTOMATIC) NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) LoVltgOperToNormVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) LoVltgNoAssiToNormVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) HiVltgOperToNormVltgOper_Cnt_T_logl,
                                               VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                               VAR(boolean,AUTOMATIC) HiVltgNoAssiToNormVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordInhbBattVltgDiagc_Cnt_T_logl,
                                               VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                               VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                               VAR(boolean,AUTOMATIC) NormVltgOperToHiVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
                                               P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum,
                                               P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperScarVal_Uls_T_f32,
                                               P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperRampVal_PercPerSec_T_f32);
											   
 static FUNC(void, FordVltgIf_CODE) BattVltgSt_Oper(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
												    VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,   
                                                    VAR(uint8,AUTOMATIC)   PrevFordVltgOperStVal_Cnt_T_enum,		
                                                    VAR(FordVltgOperSt1,AUTOMATIC) FordVltgOperStVal_Cnt_T_enum,													
												    P2VAR(uint8,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) PrevVltgOperStVal_Cnt_T_u08,	
												    P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperMonrToTqScagVal_Cnt_T_logl,
												    P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperHiCurrToTqScagVal_Cnt_T_logl,											   
												    P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperScarVal_Uls_T_f32,
												    P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperRampVal_PercPerSec_T_f32);										   

 static FUNC(void, FordVltgIf_CODE) LoVltgOperMonr(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                   P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32,
												   P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32);

 static FUNC(void, FordVltgIf_CODE) LoVltgThdChk(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32);

 static FUNC(void, FordVltgIf_CODE) HiToMidTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32);

 static FUNC(void, FordVltgIf_CODE) MidToLoTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32);

 static FUNC(void, FordVltgIf_CODE) LoToMidTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32);

 static FUNC(void, FordVltgIf_CODE) MidToHiTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32);

  static FUNC(void, FordVltgIf_CODE) LoVltgOperHiCurr(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
													  P2VAR(float32, AUTOMATIC, RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32,
													  P2VAR(float32, AUTOMATIC, RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32);





  static FUNC(float32, FordVltgIf_CODE) NormOper(VAR(uint8,AUTOMATIC) PrevVltgOperStVal_Cnt_T_u08);

 static FUNC(void,FordVltgIf_CODE) StTran_FORDVLTGOPERST_NORMVLTGOP(VAR(boolean,AUTOMATIC) FordInhbBattVltgDiagc_Cnt_T_logl,
                                                                    VAR(boolean,AUTOMATIC) NormVltgOperToHiVltgOper_Cnt_T_logl,
																	VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
																	VAR(SysSt1,AUTOMATIC) FordSysSt_Cnt_T_enum,
																	VAR(boolean,AUTOMATIC) NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
																	VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
																	P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum);

 static FUNC(void, FordVltgIf_CODE) LoVltgOperMonrToTqScagTran(P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperMonrToTqScagVal_Cnt_T_logl);

 static FUNC(void,FordVltgIf_CODE) StTran_FORDVLTGOPERST_LOVLTGOP_MONR(VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                                                       VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
                                                                       VAR(boolean,AUTOMATIC) LoVltgOperMonrToTqScagVal_Cnt_T_logl,
                                                                       VAR(boolean,AUTOMATIC) LoVltgOperToNormVltgOper_Cnt_T_logl,
                                                                       VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                                       P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum);
																	  																	   

 

 static FUNC(void, FordVltgIf_CODE) LoVltgOperHiCurrToTqScagTran(P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperHiCurrToTqScagVal_Cnt_T_logl);

 static FUNC(void,FordVltgIf_CODE) StTran_FORDVLTGOPERST_LOVLTGOP_HICURR(VAR(boolean,AUTOMATIC) LoVltgOperHiCurrToTqScagVal_Cnt_T_logl,
                                                                         VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
                                                                         VAR(boolean,AUTOMATIC) LoVltgOperToNormVltgOper_Cnt_T_logl,
                                                                         VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                                         P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum);


 static FUNC(void, FordVltgIf_CODE) Diag(VAR(FordVltgOperSt1,AUTOMATIC) FordVltgOperStVal_Cnt_T_enum);

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
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * FordEpsSysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   FORDEPSSYSST_EPS_ININ (0U)
 *   FORDEPSSYSST_EPS_NORM_OP_LIMD_ASSI (1U)
 *   FORDEPSSYSST_EPS_NORM_OP_FULL_ASSI (2U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPHOME (3U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE (4U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT (5U)
 *   FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF (6U)
 *   FORDEPSSYSST_EPS_SHTDWN (7U)
 *   FORDEPSSYSST_EPS_PWRDWN (8U)
 * FordVltgOperSt1: Enumeration of integer in interval [0...255] with enumerators
 *   FORDVLTGOPERST_NORMVLTGOP (0U)
 *   FORDVLTGOPERST_LOVLTGOP_MONR (1U)
 *   FORDVLTGOPERST_LOVLTGOP_HICURR (2U)
 *   FORDVLTGOPERST_LOVLTGOP_TQSCAG (3U)
 *   FORDVLTGOPERST_LOVLTGOP_NOASSI (4U)
 *   FORDVLTGOPERST_HIVLTGOP (5U)
 *   FORDVLTGOPERST_HIVLTG_NOASSI (6U)
 * Ford_ElPw_D_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_Not_Supported (0U)
 *   Cx1_Supported (1U)
 *   Cx2_Not_Supported_Imminent (2U)
 *   Cx3_LV_Event_In_Progress (3U)
 *   Cx4_Fault_Limited (4U)
 *   Cx5_NotUsed_1 (5U)
 *   Cx6_NotUsed_2 (6U)
 *   Cx7_NotUsed_3 (7U)
 * Ford_Ignition_Status: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Unknown (0U)
 *   Cx1_Off (1U)
 *   Cx2_Accessory (2U)
 *   Cx4_Run (4U)
 *   Cx8_Start (8U)
 *   CxF_Invalid (15U)
 * Ford_PwPckTq_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_PwPckOff_TqNotAvailable (0U)
 *   Cx1_PwPckOn_TqNotAvailable (1U)
 *   Cx2_StartInPrgrss_TqNotAvail (2U)
 *   Cx3_PwPckOn_TqAvailable (3U)
 * ImcArbnRxSts1: Enumeration of integer in interval [0...255] with enumerators
 *   IMCARBNRXSTS_NODATA (0U)
 *   IMCARBNRXSTS_VLD (1U)
 *   IMCARBNRXSTS_INVLD (2U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MaxEpsBattCurrPrev(void)
 *   float32 *Rte_Pim_MinBattVltgPrev(void)
 *   float32 *Rte_Pim_PrevVltgOperRamp(void)
 *   float32 *Rte_Pim_PrevVltgOperScar(void)
 *   uint32 *Rte_Pim_FeatThdStsRefTi(void)
 *   uint32 *Rte_Pim_HiVltgInhbRefTi(void)
 *   uint32 *Rte_Pim_HiVltgNoAssiRcvrRefTi(void)
 *   uint32 *Rte_Pim_HiVltgRcvrRefTi(void)
 *   uint32 *Rte_Pim_HiVltgRcvrTiMaxRefTi(void)
 *   uint32 *Rte_Pim_InhbBattVltgDiagcRefTi(void)
 *   uint32 *Rte_Pim_LoVltgInhbRefTi1(void)
 *   uint32 *Rte_Pim_LoVltgInhbRefTi2(void)
 *   uint32 *Rte_Pim_LoVltgInhbRefTi3(void)
 *   uint32 *Rte_Pim_LoVltgNoAssiRcvrRefTi(void)
 *   uint32 *Rte_Pim_LoVltgRcvrRefTi(void)
 *   uint32 *Rte_Pim_LoVltgRcvrTiMaxRefTi(void)
 *   uint32 *Rte_Pim_LoVltgThdMidToLoRefTi(void)
 *   uint32 *Rte_Pim_LoVltgThdMidToLoRefTmr(void)
 *   uint8 *Rte_Pim_HiToLoChk(void)
 *   uint8 *Rte_Pim_HiToMidChk(void)
 *   uint8 *Rte_Pim_LoToHiChk(void)
 *   uint8 *Rte_Pim_LoToMidChk(void)
 *   uint8 *Rte_Pim_MidToHiChk(void)
 *   uint8 *Rte_Pim_MidToLoChk(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FordVltgIfActvParkAssiAsscTqMin_Val(void)
 *   float32 Rte_Prm_FordVltgIfEPSBattVltgDifThd_Val(void)
 *   float32 Rte_Prm_FordVltgIfEpsBattCurrLim_Val(void)
 *   float32 Rte_Prm_FordVltgIfEpsCurrLim_Val(void)
 *   float32 Rte_Prm_FordVltgIfEvasSteerAssiTqMin_Val(void)
 *   float32 Rte_Prm_FordVltgIfHiVltgAssiRampDwnRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfHiVltgAssiRampUpRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfHiVltgNoAssiRampDwnRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfHiVltgThdHi_Val(void)
 *   float32 Rte_Prm_FordVltgIfHiVltgThdLo_Val(void)
 *   float32 Rte_Prm_FordVltgIfLaneCentrAssiTqMin_Val(void)
 *   float32 Rte_Prm_FordVltgIfLaneDprtrWarnAsscTqMin_Val(void)
 *   float32 Rte_Prm_FordVltgIfLkaAsscTqMin_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgAssiRampDwnRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgAssiRampUpRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgAssiScar_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgNoAssiRampDwnRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgThdHi_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgThdLo_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgThdMid_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgTqScaDwnRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgTqScaUpRate_Val(void)
 *   float32 Rte_Prm_FordVltgIfLoVltgTqScagFac_Val(void)
 *   float32 Rte_Prm_FordVltgIfTrfcJamAsscTqMin_Val(void)
 *   float32 Rte_Prm_FordVltgIfTrlrBackupAssiTqMin_Val(void)
 *   float32 Rte_Prm_FordVltgIfVehBattCircR_Val(void)
 *   uint32 Rte_Prm_FordVltgIfHiVltgNoAssiRcvrTiMax_Val(void)
 *   uint32 Rte_Prm_FordVltgIfHiVltgRcvrTiMax_Val(void)
 *   uint32 Rte_Prm_FordVltgIfLoVltgInhbTiMax_Val(void)
 *   uint32 Rte_Prm_FordVltgIfLoVltgRcvrTiMax_Val(void)
 *   uint32 Rte_Prm_FordVltgIfLoVltgThdMidToLoTiMax_Val(void)
 *   uint16 Rte_Prm_FordVltgIfFeatThdStsTiThd_Val(void)
 *   uint16 Rte_Prm_FordVltgIfHiVltgInhbTiMax_Val(void)
 *   uint16 Rte_Prm_FordVltgIfInhbBattVltgDiagcTiThd_Val(void)
 *   uint16 Rte_Prm_FordVltgIfLoVltgNoAssiRcvrTiMax_Val(void)
 *
 *********************************************************************************************************************/


#define FordVltgIf_START_SEC_CODE
#include "FordVltgIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordVltgIfInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVltgIfInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordVltgIf_CODE) FordVltgIfInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVltgIfInit1
 *********************************************************************************************************************/
 (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E2, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
 (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E3, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
 (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E4, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
 (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E5, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
 (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E6, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
 (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E7, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);

 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_InhbBattVltgDiagcRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FeatThdStsRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi1());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi2());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi3());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgRcvrTiMaxRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgNoAssiRcvrRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgInhbRefTi());
 (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgRcvrRefTi());
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordVltgIfPer1
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
 *   Std_ReturnType Rte_Read_BattRtnCurr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattRtnCurrImc_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordActvParkAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsSysSt_Val(FordEpsSysSt1 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordMaxAsscTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordStrtStopSt_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordSysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehElecPwrSts_Ford_ElPw_D_Stat(Ford_ElPw_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehIgnStsQly_Ford_Ignition_Status(Ford_Ignition_Status *data)
 *   Std_ReturnType Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(Ford_PwPckTq_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordEpsCurr_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordEpsCurrVal_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordEpsVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordEpsVltgVal_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordFeatThdSts_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordInhbBattVltgDiagc_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordMaxBattCurr_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordMinBattVltg_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVltgOperRamp_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVltgOperScar_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVltgOperSt_Val(FordVltgOperSt1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetSigImcData_f32_Oper(uint16 SigId_Arg, float32 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_f32_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVltgIfPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordVltgIf_CODE) FordVltgIfPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVltgIfPer1
 *********************************************************************************************************************/


  VAR(float32,AUTOMATIC) BattRtnCurr_Ampr_T_f32;
  VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32;
  VAR(float32,AUTOMATIC) ImcBattVltg_Volt_T_f32;
  VAR(float32,AUTOMATIC) EpsBattVltg_Volt_T_f32;
  VAR(float32,AUTOMATIC) FordMaxAsscTq_Perc_T_f32;
  VAR(float32,AUTOMATIC) FordVehSpd_Kph_T_f32;
  VAR(float32,AUTOMATIC) FordEpsCurr_Ampr_T_f32;
  VAR(float32,AUTOMATIC) FordEpsVltg_Volt_T_f32;
  VAR(float32,AUTOMATIC) FordMaxBattCurr_Ampr_T_f32;
  VAR(float32,AUTOMATIC) FordMinBattVltg_Volt_T_f32;
  VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32;
  VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32 = 0.0F;
  VAR(float32,AUTOMATIC) ImcBattRtnCurr_Ampr_T_f32;

  VAR(boolean,AUTOMATIC) FordActvParkAssiEnad_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordLaneDprtrWarnEnad_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordLaneKeepAssiEnad_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordTrfcJamAssiEnad_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordVehSpdVld_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) EpsBattCurrVld_Cnt_T_logl = FALSE;
  VAR(boolean,AUTOMATIC) EpsBattVltgVld_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordFeatThdSts_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) FordInhbBattVltgDiagc_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) LoVltgOperToNormVltgOper_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) LoVltgNoAssiToNormVltgOper_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) HiVltgOperToNormVltgOper_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) HiVltgNoAssiToNormVltgOper_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) NormVltgOperToHiVltgOper_Cnt_T_logl;
  VAR(boolean,AUTOMATIC) NormVltgOperToLoVltgOperMonr_Cnt_T_logl;

  VAR(FordEpsSysSt1,AUTOMATIC) FordEpsSysSt_Cnt_T_enum;
  VAR(SysSt1,AUTOMATIC) FordSysSt_Cnt_T_enum;
  VAR(float32,AUTOMATIC) FordStrtStopSt_Cnt_T_f32;
  VAR(Ford_ElPw_D_Stat,AUTOMATIC) FordVehElecPwrSts_Cnt_T_enum;
  VAR(Ford_Ignition_Status,AUTOMATIC) FordVehIgnStsQly_Cnt_T_enum;
  VAR(Ford_PwPckTq_D_Stat,AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum;
  VAR(ImcArbnRxSts1, AUTOMATIC) ImcBattRtnCurrVld_Cnt_T_enum;
  VAR(ImcArbnRxSts1, AUTOMATIC) ImcBattVltgVld_Cnt_T_enum;
  VAR(Std_ReturnType, AUTOMATIC) ImcBattRtnCurrRtn_Cnt_T_enum;
  VAR(Std_ReturnType, AUTOMATIC) ImcBattRtnVltgRtn_Cnt_T_enum;

  static VAR(FordVltgOperSt1,AUTOMATIC) FordVltgOperSt_Cnt_T_enum = FORDVLTGOPERST_NORMVLTGOP;
  static VAR(float32,AUTOMATIC) FordVltgOperRamp_UlsPerSec_T_f32 = 0.1F;
  static VAR(float32,AUTOMATIC) FordVltgOperScar_Uls_T_f32 = 0.0F;

  /*Reading inputs from RTE*/
  (void) Rte_Read_BattRtnCurr_Val(&BattRtnCurr_Ampr_T_f32);
  (void) Rte_Read_BattVltg_Val(&BattVltg_Volt_T_f32);
  (void) Rte_Read_FordActvParkAssiEnad_Logl(&FordActvParkAssiEnad_Cnt_T_logl);
  (void) Rte_Read_FordEpsSysSt_Val(&FordEpsSysSt_Cnt_T_enum);
  (void) Rte_Read_FordEvasSteerAssiEnad_Logl(&FordEvasSteerAssiEnad_Cnt_T_logl);
  (void) Rte_Read_FordLaneCentrAssiEnad_Logl(&FordLaneCentrAssiEnad_Cnt_T_logl);
  (void) Rte_Read_FordLaneDprtrWarnEnad_Logl(&FordLaneDprtrWarnEnad_Cnt_T_logl);
  (void) Rte_Read_FordLaneKeepAssiEnad_Logl(&FordLaneKeepAssiEnad_Cnt_T_logl);
  (void) Rte_Read_FordMaxAsscTq_Val(&FordMaxAsscTq_Perc_T_f32);
  (void) Rte_Read_FordSysSt_Val(&FordSysSt_Cnt_T_enum);
  (void) Rte_Read_FordTrfcJamAssiEnad_Logl(&FordTrfcJamAssiEnad_Cnt_T_logl);
  (void) Rte_Read_FordTrlrBackupAssiEnad_Logl(&FordTrlrBackupAssiEnad_Cnt_T_logl);
  (void) Rte_Read_FordStrtStopSt_Val(&FordStrtStopSt_Cnt_T_f32);
  (void) Rte_Read_FordVehElecPwrSts_Ford_ElPw_D_Stat(&FordVehElecPwrSts_Cnt_T_enum);
  (void) Rte_Read_FordVehIgnStsQly_Ford_Ignition_Status(&FordVehIgnStsQly_Cnt_T_enum);
  (void) Rte_Read_FordVehPwrpkTqSts_Ford_PwPckTq_D_Stat(&FordVehPwrpkTqSts_Cnt_T_enum);
  (void) Rte_Read_FordVehSpd_Val(&FordVehSpd_Kph_T_f32);
  (void) Rte_Read_FordVehSpdVld_Logl(&FordVehSpdVld_Cnt_T_logl);

  /*** Start of CalculationOfBatteryVoltageAndCurrent ***/
  EstimdBattVltg_Volt_T_f32 = BattVltg_Volt_T_f32 + (BattRtnCurr_Ampr_T_f32 * Rte_Prm_FordVltgIfVehBattCircR_Val());
 
  /*** Start of ImcBattRtnCurr ***/
  /* GetImcSigData_BattRtnCurr */
  ImcBattRtnCurrRtn_Cnt_T_enum = Rte_Call_GetSigImcData_f32_Oper(IMCARBN_FORDVLTGIFBATTRTNCURR_CNT_U16, &ImcBattRtnCurr_Ampr_T_f32, &ImcBattRtnCurrVld_Cnt_T_enum);
  if( (ImcBattRtnCurrVld_Cnt_T_enum == IMCARBNRXSTS_VLD) && (ImcBattRtnCurrRtn_Cnt_T_enum != E_NOT_OK) )
  {
 	EpsBattCurr_Ampr_T_f32 = BattRtnCurr_Ampr_T_f32 + ImcBattRtnCurr_Ampr_T_f32;
 	EpsBattCurrVld_Cnt_T_logl = TRUE;
  } 
  
  /* GetImcSigData_BattVltg */
  ImcBattRtnVltgRtn_Cnt_T_enum = Rte_Call_GetSigImcData_f32_Oper(IMCARBN_FORDVLTGIFBATTVLTG_CNT_U16, &ImcBattVltg_Volt_T_f32, &ImcBattVltgVld_Cnt_T_enum);
  if( (ImcBattVltgVld_Cnt_T_enum == IMCARBNRXSTS_VLD) && (ImcBattRtnVltgRtn_Cnt_T_enum != E_NOT_OK) )
  {
 	if(Abslt_f32_f32(BattVltg_Volt_T_f32 - ImcBattVltg_Volt_T_f32) < Rte_Prm_FordVltgIfEPSBattVltgDifThd_Val())
	{
		EpsBattVltg_Volt_T_f32 = (BattVltg_Volt_T_f32 + ImcBattVltg_Volt_T_f32)/ 2.0F; 	/* KK : Magic number  */
		EpsBattVltgVld_Cnt_T_logl = TRUE;
	}
	else
	{
		EpsBattVltg_Volt_T_f32 = BattVltg_Volt_T_f32;
		EpsBattVltgVld_Cnt_T_logl = FALSE;
	}
  }
  else
  {
 	EpsBattVltg_Volt_T_f32 = BattVltg_Volt_T_f32;
	EpsBattVltgVld_Cnt_T_logl = FALSE;
  }
    
  /*** End of ImcBattRtnCurr ***/  
  
  /*** End of CalculationOfBatteryVoltageAndCurrent ***/

  /*** Start of CalculationOfEpsVoltage ***/
  FordEpsVltg_Volt_T_f32 = Lim_f32(EpsBattVltg_Volt_T_f32,EPSVLTGMIN_VOLT_F32,EPSVLTGMAX_VOLT_F32);
  /*** End of CalculationOfEpsVoltage ***/

  /*** Start of CalculationOfEpsCurrent ***/
  FordEpsCurr_Ampr_T_f32 = Lim_f32(EpsBattCurr_Ampr_T_f32,EPSCURRMIN_AMPR_F32,EPSCURRMAX_AMPR_F32);
  /*** End of CalculationOfEpsCurrent ***/

  /*** Start of VehPwrTrakgAtEps ***/
  VehPwrTrakgAtEps(FordVehSpdVld_Cnt_T_logl,
				   EpsBattVltgVld_Cnt_T_logl,
				   EpsBattCurrVld_Cnt_T_logl,
                   FordVehSpd_Kph_T_f32,
				   FordStrtStopSt_Cnt_T_f32,
                   BattVltg_Volt_T_f32,
                   EpsBattCurr_Ampr_T_f32,
                   &FordMinBattVltg_Volt_T_f32,
                   &FordMaxBattCurr_Ampr_T_f32);
  /*** End of VehPwrTrakgAtEps ***/

  FordMinBattVltg_Volt_T_f32 = Lim_f32(FordMinBattVltg_Volt_T_f32,FORDMINBATTVLTGMIN_VOLT_F32,FORDMINBATTVLTGMAX_VOLT_F32);
  *Rte_Pim_MinBattVltgPrev() = FordMinBattVltg_Volt_T_f32;

  FordMaxBattCurr_Ampr_T_f32 = Lim_f32(FordMaxBattCurr_Ampr_T_f32,FORDMAXBATTCURRMIN_AMPR_F32,FORDMAXBATTCURRMAX_AMPR_F32);
  *Rte_Pim_MaxEpsBattCurrPrev() = FordMaxBattCurr_Ampr_T_f32;

  /***Start of FeatureThresholdStatus ***/
  FeatThdSts(FordLaneKeepAssiEnad_Cnt_T_logl,
             FordMaxAsscTq_Perc_T_f32,
             FordLaneDprtrWarnEnad_Cnt_T_logl,
             FordTrfcJamAssiEnad_Cnt_T_logl,
             FordLaneCentrAssiEnad_Cnt_T_logl,
             FordEvasSteerAssiEnad_Cnt_T_logl,
             FordTrlrBackupAssiEnad_Cnt_T_logl,
             FordActvParkAssiEnad_Cnt_T_logl,
             &FordFeatThdSts_Cnt_T_logl);
  /*** End of FeatureThresholdStatus ***/

  /*** Start of VoltageDTCInhibit ***/
  VltgDTCInhb(FordEpsSysSt_Cnt_T_enum,
              FordVehPwrpkTqSts_Cnt_T_enum,
              FordVehIgnStsQly_Cnt_T_enum,
              FordVehElecPwrSts_Cnt_T_enum,
			  FordStrtStopSt_Cnt_T_f32,
              &FordInhbBattVltgDiagc_Cnt_T_logl);
  /*** End of VoltageDTCInhibit ***/

  /*** Start of BatteryVoltageStates ***/
    /*** Start of StateTransitions ***/
        /*** Start of VltgOperStFlgProcessing ***/
            if(Abslt_f32_f32(FordStrtStopSt_Cnt_T_f32 - ZEROPWRSTATE_CNT_F32) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
            {
                VltgOperStFlg_Cnt_T_logl = TRUE;
            }
            else
            {
                VltgOperStFlg_Cnt_T_logl = FALSE;
            }
        /*** End of VltgOperStFlgProcessing ***/

        /*** Start of LoVltgOperMonrTransitionT1 ***/
            LoVltgOperMonrTranT1(EstimdBattVltg_Volt_T_f32,
                                 EpsBattCurr_Ampr_T_f32,
                                 FordFeatThdSts_Cnt_T_logl,
                                 &NormVltgOperToLoVltgOperMonr_Cnt_T_logl);
        /*** End of LoVltgOperMonrTransitionT1 ***/

        /*** Start of NormVltgOperTransitionT5 ***/
            NormVltgOperTranT5(EstimdBattVltg_Volt_T_f32,
			                   &LoVltgOperToNormVltgOper_Cnt_T_logl);
         /*** End of NormVltgOperTransitionT5 ***/

        /*** Start of LoVltgNoAssiToNormVltgOperTransitionT7 ***/
			LoVltgNoAssiToNormVltgOperTranT7(EstimdBattVltg_Volt_T_f32,
                                             &LoVltgNoAssiToNormVltgOper_Cnt_T_logl);
         /*** End of LoVltgNoAssiToNormVltgOperTransitionT7 ***/

        /*** Start of HiVltgOperTransitionT8 ***/
            HiVltgOperTranT8(BattVltg_Volt_T_f32,
                             &NormVltgOperToHiVltgOper_Cnt_T_logl);
        /*** End of HiVltgOperTransitionT8 ***/

        /*** Start of HiVltgToNormVltgOperTransitionT9 ***/
            HiVltgToNormVltgOperTranT9(BattVltg_Volt_T_f32,
                                       &HiVltgOperToNormVltgOper_Cnt_T_logl);
        /*** End of HiVltgToNormVltgOperTransitionT9 ***/

        /*** Start of HiVltgNoAssiToNormVltgOperTransitionT11 ***/
			HiVltgNoAssiToNormVltgOperTranT11(BattVltg_Volt_T_f32,
                                              &HiVltgNoAssiToNormVltgOper_Cnt_T_logl);
        /*** End of HiVltgNoAssiToNormVltgOperTransitionT11 ***/
    /*** End of StateTransitions ***/

    if(SYSST_WRMININ == FordSysSt_Cnt_T_enum)
    {
		/*** Start of BattVltgSt ***/
        BattVltgSt(FordSysSt_Cnt_T_enum,
                   NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
                   LoVltgOperToNormVltgOper_Cnt_T_logl,
                   LoVltgNoAssiToNormVltgOper_Cnt_T_logl,
                   HiVltgOperToNormVltgOper_Cnt_T_logl,
                   EpsBattCurr_Ampr_T_f32,
                   HiVltgNoAssiToNormVltgOper_Cnt_T_logl,
                   FordInhbBattVltgDiagc_Cnt_T_logl,
                   EstimdBattVltg_Volt_T_f32,
                   BattVltg_Volt_T_f32,
                   NormVltgOperToHiVltgOper_Cnt_T_logl,
                   VltgOperStFlg_Cnt_T_logl,
                   &FordVltgOperSt_Cnt_T_enum,
                   &FordVltgOperScar_Uls_T_f32,
                   &FordVltgOperRamp_UlsPerSec_T_f32);
        /*** End of BattVltgSt ***/
    }
  /*** End of BatteryVoltageStates ***/

  Diag(FordVltgOperSt_Cnt_T_enum);

  FordVltgOperScar_Uls_T_f32 = Lim_f32(FordVltgOperScar_Uls_T_f32,FORDVLTGOPERSCARMIN_ULS_F32,FORDVLTGOPERSCARMAX_ULS_F32);
  *Rte_Pim_PrevVltgOperScar() = FordVltgOperScar_Uls_T_f32;

  FordVltgOperRamp_UlsPerSec_T_f32 = Lim_f32(FordVltgOperRamp_UlsPerSec_T_f32,FORDVLTGOPERRAMPMIN_ULSPERSEC_F32,FORDVLTGOPERRAMPMAX_ULSPERSEC_F32);
  *Rte_Pim_PrevVltgOperRamp() = FordVltgOperRamp_UlsPerSec_T_f32;

  /*Writing outputs to RTE*/
  (void) Rte_Write_FordEpsCurr_Val(FordEpsCurr_Ampr_T_f32);
  (void) Rte_Write_FordEpsVltg_Val(FordEpsVltg_Volt_T_f32);
  (void) Rte_Write_FordFeatThdSts_Logl(FordFeatThdSts_Cnt_T_logl);
  (void) Rte_Write_FordInhbBattVltgDiagc_Logl(FordInhbBattVltgDiagc_Cnt_T_logl);
  (void) Rte_Write_FordMaxBattCurr_Val(FordMaxBattCurr_Ampr_T_f32);
  (void) Rte_Write_FordMinBattVltg_Val(FordMinBattVltg_Volt_T_f32);
  (void) Rte_Write_FordVltgOperRamp_Val(FordVltgOperRamp_UlsPerSec_T_f32);
  (void) Rte_Write_FordVltgOperScar_Val(FordVltgOperScar_Uls_T_f32);
  (void) Rte_Write_FordVltgOperSt_Val(FordVltgOperSt_Cnt_T_enum);
  (void) Rte_Write_FordEpsVltgVal_Logl(EpsBattVltgVld_Cnt_T_logl);
  (void) Rte_Write_FordEpsCurrVal_Logl(EpsBattCurrVld_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordVltgIf_STOP_SEC_CODE
#include "FordVltgIf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
  * Name            : VehPwrTrakgAtEps
  * Description     : Implementation of "VehPwrTrakgAtEps" subsystem in model.
  * Inputs          : FordVehSpdVld_Cnt_T_logl,
  *                   FordVehSpd_Kph_T_f32,
  *                   FordStrtStopSt_Cnt_T_f32
  *                   BattVltg_Volt_T_f32
  *                   EpsBattCurr_Ampr_T_f32
  * Outputs         : *FordMinBattVltg_Volt_T_f32,
  *                   *FordMaxBattCurr_Ampr_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) VehPwrTrakgAtEps(VAR(boolean,AUTOMATIC) FordVehSpdVld_Cnt_T_logl,
													 VAR(boolean,AUTOMATIC) EpsBattVltgVld_Cnt_T_logl,
													 VAR(boolean,AUTOMATIC) EpsBattCurrVld_Cnt_T_logl,
                                                     VAR(float32,AUTOMATIC) FordVehSpd_Kph_T_f32,
													 VAR(float32,AUTOMATIC) FordStrtStopSt_Cnt_T_f32,
                                                     VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                     VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                                     P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordMinBattVltg_Volt_T_f32,
                                                     P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordMaxBattCurr_Ampr_T_f32)
 {
     /*** Start of VehPwrTrakgAtEps ***/
     if((TRUE != FordVehSpdVld_Cnt_T_logl) ||
        (FordVehSpd_Kph_T_f32 <= LOVEHSPD_KPH_F32) ||
		(Abslt_f32_f32(FordStrtStopSt_Cnt_T_f32 - ZEROPWRSTATE_CNT_F32) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32) ||
		(EpsBattVltgVld_Cnt_T_logl == FALSE))
     {
        /** MinimumBattVltg **/
		*FordMinBattVltg_Volt_T_f32 = Min_f32(BattVltg_Volt_T_f32, *Rte_Pim_MinBattVltgPrev());
     }
     else
     {
        /** PrevMinBattVltg **/
         *FordMinBattVltg_Volt_T_f32 = *Rte_Pim_MinBattVltgPrev();
     }

     if(EpsBattCurrVld_Cnt_T_logl == TRUE)
     {
         *FordMaxBattCurr_Ampr_T_f32 = Max_f32(EpsBattCurr_Ampr_T_f32, *Rte_Pim_MaxEpsBattCurrPrev());
     }
     else
     {
         *FordMaxBattCurr_Ampr_T_f32 = *Rte_Pim_MaxEpsBattCurrPrev();
     }
     /*** End of VehPwrTrakgAtEps ***/
 }

/*****************************************************************************
  * Name            : FeatThdSts
  * Description     : Implementation of "FeatureThresholdStatus" subsystem in model.
  * Inputs          : FordLaneKeepAssiEnad_Cnt_T_logl,
  *                   FordMaxAsscTq_Perc_T_f32,
  *                   FordLaneDprtrWarnEnad_Cnt_T_logl,
  *                   FordTrfcJamAssiEnad_Cnt_T_logl,
  *                   FordLaneCentrAssiEnad_Cnt_T_logl,
  *                   FordEvasSteerAssiEnad_Cnt_T_logl,
  *                   FordTrlrBackupAssiEnad_Cnt_T_logl,
  *                   FordActvParkAssiEnad_Cnt_T_logl.
  * Outputs         : *FordFeatThdSts_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) FeatThdSts(VAR(boolean,AUTOMATIC) FordLaneKeepAssiEnad_Cnt_T_logl,
                                               VAR(float32,AUTOMATIC) FordMaxAsscTq_Perc_T_f32,
                                               VAR(boolean,AUTOMATIC) FordLaneDprtrWarnEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordTrfcJamAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordEvasSteerAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordActvParkAssiEnad_Cnt_T_logl,
                                               P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR)FordFeatThdSts_Cnt_T_logl)
 {
    /*** Start of FeatThdSts ***/
     VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;

     if(((TRUE == FordLaneKeepAssiEnad_Cnt_T_logl)   && (FordMaxAsscTq_Perc_T_f32 < Rte_Prm_FordVltgIfLkaAsscTqMin_Val())) ||
        ((TRUE == FordLaneDprtrWarnEnad_Cnt_T_logl)  && (FordMaxAsscTq_Perc_T_f32 < Rte_Prm_FordVltgIfLaneDprtrWarnAsscTqMin_Val())) ||
        ((TRUE == FordTrfcJamAssiEnad_Cnt_T_logl)    && (FordMaxAsscTq_Perc_T_f32 < Rte_Prm_FordVltgIfTrfcJamAsscTqMin_Val()))       ||
        ((TRUE == FordLaneCentrAssiEnad_Cnt_T_logl)  && (FordMaxAsscTq_Perc_T_f32 < Rte_Prm_FordVltgIfLaneCentrAssiTqMin_Val()))     ||
        ((TRUE == FordEvasSteerAssiEnad_Cnt_T_logl)  && (FordMaxAsscTq_Perc_T_f32 < Rte_Prm_FordVltgIfEvasSteerAssiTqMin_Val()))     ||
        ((TRUE == FordTrlrBackupAssiEnad_Cnt_T_logl) && (FordMaxAsscTq_Perc_T_f32 < Rte_Prm_FordVltgIfTrlrBackupAssiTqMin_Val()))    ||
        ((TRUE == FordActvParkAssiEnad_Cnt_T_logl)   && (FordMaxAsscTq_Perc_T_f32 < Rte_Prm_FordVltgIfActvParkAssiAsscTqMin_Val())))
     {
        /*** Start of FeatThdStsToTrue ***/
         *FordFeatThdSts_Cnt_T_logl = TRUE;
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FeatThdStsRefTi());
        /*** End of FeatThdStsToTrue ***/
     }
     else
     {
        /*** Start of FeatThdStsToFalseAfterCalTime ***/
         (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FeatThdStsRefTi(),&TiSpan_Cnt_T_u32);
         if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfFeatThdStsTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
         {
             *FordFeatThdSts_Cnt_T_logl = FALSE;
         }
         else
         {
             *FordFeatThdSts_Cnt_T_logl = TRUE;
         }
        /*** End of FeatThdStsToFalseAfterCalTime ***/
     }
    /*** End of FeatThdSts  ***/
 }

/*****************************************************************************
  * Name            : VltgDTCInhb
  * Description     : Implementation of "VoltageDTCInhibit" subsystem in model.
  * Inputs          : FordEpsSysSt_Cnt_T_enum,
  *                   FordVehPwrpkTqSts_Cnt_T_enum,
  *                   FordVehIgnStsQly_Cnt_T_enum,
  *                   FordVehElecPwrSts_Cnt_T_enum,
  *                   FordStrtStopSt_Cnt_T_f32
  * Outputs         : *FordInhbBattVltgDiagc_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) VltgDTCInhb(VAR(FordEpsSysSt1,AUTOMATIC) FordEpsSysSt_Cnt_T_enum,
                                                VAR(Ford_PwPckTq_D_Stat,AUTOMATIC) FordVehPwrpkTqSts_Cnt_T_enum,
                                                VAR(Ford_Ignition_Status,AUTOMATIC) FordVehIgnStsQly_Cnt_T_enum,
                                                VAR(Ford_ElPw_D_Stat,AUTOMATIC) FordVehElecPwrSts_Cnt_T_enum,
												VAR(float32,AUTOMATIC) FordStrtStopSt_Cnt_T_f32,
                                                P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR)FordInhbBattVltgDiagc_Cnt_T_logl)
 {
    /*** Start of VltgDTCInhb ***/
     VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;

     if((FORDEPSSYSST_EPS_ININ == FordEpsSysSt_Cnt_T_enum)                 ||
        (FORDEPSSYSST_EPS_SYST_FAILR_LIMPASIDE == FordEpsSysSt_Cnt_T_enum) ||
        (FORDEPSSYSST_EPS_SYST_FAILR_RAMPOUT == FordEpsSysSt_Cnt_T_enum)   ||
        (FORDEPSSYSST_EPS_SYST_FAILR_ASSISTOFF == FordEpsSysSt_Cnt_T_enum) ||
        (FORDEPSSYSST_EPS_SHTDWN == FordEpsSysSt_Cnt_T_enum)               ||
        (FORDEPSSYSST_EPS_PWRDWN == FordEpsSysSt_Cnt_T_enum)               ||
        (Cx2_StartInPrgrss_TqNotAvail == FordVehPwrpkTqSts_Cnt_T_enum)     ||
        (Cx3_LV_Event_In_Progress == FordVehElecPwrSts_Cnt_T_enum)         ||
        (Cx8_Start == FordVehIgnStsQly_Cnt_T_enum)          ||
        (Abslt_f32_f32(FordStrtStopSt_Cnt_T_f32 - ZEROPWRSTATE_CNT_F32) > ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
     {
        /*** Start of InhbBattVltgDiagcToTrue ***/
         *FordInhbBattVltgDiagc_Cnt_T_logl = TRUE;
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_InhbBattVltgDiagcRefTi());
        /*** End of InhbBattVltgDiagcToTrue ***/
     }
     else
     {
        /*** Start of InhbBattVltgDiagcToFalseAfterCalTime ***/
         (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_InhbBattVltgDiagcRefTi(),&TiSpan_Cnt_T_u32);
         if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfInhbBattVltgDiagcTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
         {
            /** ResetInhbBattVltgDiagc **/
             *FordInhbBattVltgDiagc_Cnt_T_logl = FALSE;
         }
         else
         {
            /** SetInhbBattVltgDiagc **/
             *FordInhbBattVltgDiagc_Cnt_T_logl = TRUE;
         }
        /*** End of InhbBattVltgDiagcToFalseAfterCalTime ***/
    }
    /*** End of VltgDTCInhb ***/
 }

/*****************************************************************************
  * Name            : LoVltgOperMonrTranT1
  * Description     : Implementation of "LoVltgOperMonrTransitionT1" subsystem in model.
  * Inputs          : EstimdBattVltg_Volt_T_f32,
  *                   EpsBattCurr_Ampr_T_f32,
  *                   FordFeatThdSts_Cnt_T_logl.
  * Outputs         : *NormVltgOperToLoVltgOperMonr_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) LoVltgOperMonrTranT1(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                         VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                                         VAR(boolean,AUTOMATIC) FordFeatThdSts_Cnt_T_logl,
                                                         P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) NormVltgOperToLoVltgOperMonr_Cnt_T_logl)
 {
    /*** Start of LoVltgOperMonrTranT1 ***/
     VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	 
     if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdHi_Val()) &&
        (EstimdBattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfLoVltgThdMid_Val()))
     {
         (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoVltgInhbRefTi1(),&TiSpan_Cnt_T_u32);
         if((TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfLoVltgInhbTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)) &&
            (TRUE == FordFeatThdSts_Cnt_T_logl))
         {
             *NormVltgOperToLoVltgOperMonr_Cnt_T_logl = TRUE;
         }
         else
         {
             *NormVltgOperToLoVltgOperMonr_Cnt_T_logl = FALSE;
         }
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi2());
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi3());
     }
     else if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdMid_Val()) &&
             (EstimdBattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfLoVltgThdLo_Val()))
     {
         (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoVltgInhbRefTi2(),&TiSpan_Cnt_T_u32);
         if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfLoVltgInhbTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
         {
             *NormVltgOperToLoVltgOperMonr_Cnt_T_logl = TRUE;
         }
         else
         {
             *NormVltgOperToLoVltgOperMonr_Cnt_T_logl = FALSE;
         }
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi1());
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi3());
     }
     else if(EpsBattCurr_Ampr_T_f32 > Rte_Prm_FordVltgIfEpsCurrLim_Val())
     {
         (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoVltgInhbRefTi3(),&TiSpan_Cnt_T_u32);
         if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfLoVltgInhbTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
         {
             *NormVltgOperToLoVltgOperMonr_Cnt_T_logl = TRUE;
         }
         else
         {
             *NormVltgOperToLoVltgOperMonr_Cnt_T_logl = FALSE;
         }
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi1());
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi2());
     }
     else
     {
         *NormVltgOperToLoVltgOperMonr_Cnt_T_logl = FALSE;
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi1());
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi2());
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi3());
     }
    /*** End of LoVltgOperMonrTranT1  ***/
 }
 
/*****************************************************************************
  * Name            : NormVltgOperTranT5
  * Description     : Implementation of "NormVltgOperTransitionT5" subsystem in model.
  * Inputs          : EstimdBattVltg_Volt_T_f32.
  * Outputs         : *LoVltgOperToNormVltgOper_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static	FUNC(void, FordVltgIf_CODE) NormVltgOperTranT5(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                       P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperToNormVltgOper_Cnt_T_logl)
 {
	/*** Start of NormVltgOperTranT5 ***/
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	
	if(EstimdBattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfLoVltgThdHi_Val())
    {
        (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoVltgRcvrRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfLoVltgRcvrTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
            *LoVltgOperToNormVltgOper_Cnt_T_logl = TRUE;
        }
        else
		{
            *LoVltgOperToNormVltgOper_Cnt_T_logl = FALSE;
        }
    }
    else
    {
        *LoVltgOperToNormVltgOper_Cnt_T_logl = FALSE;
        (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgRcvrTiMaxRefTi());
    }
	/*** End of NormVltgOperTranT5 ***/
 }
 
/*****************************************************************************
  * Name            : LoVltgNoAssiToNormVltgOperTranT7
  * Description     : Implementation of "LoVltgNoAssiToNormVltgOperTransitionT7" subsystem in model.
  * Inputs          : EstimdBattVltg_Volt_T_f32.
  * Outputs         : *LoVltgNoAssiToNormVltgOper_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void,FordVltgIf_CODE) LoVltgNoAssiToNormVltgOperTranT7(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                                    P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgNoAssiToNormVltgOper_Cnt_T_logl)
 {
	/*** Start of LoVltgNoAssiToNormVltgOperTranT7 ***/
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	
	if(EstimdBattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfLoVltgThdHi_Val())
        {
           (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoVltgNoAssiRcvrRefTi(),&TiSpan_Cnt_T_u32);
            if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfLoVltgNoAssiRcvrTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
            {
                *LoVltgNoAssiToNormVltgOper_Cnt_T_logl = TRUE;
            }
            else
            {
                *LoVltgNoAssiToNormVltgOper_Cnt_T_logl = FALSE;
            }
        }
        else
        {
            *LoVltgNoAssiToNormVltgOper_Cnt_T_logl = FALSE;
            (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgNoAssiRcvrRefTi());
        }
	/*** End of LoVltgNoAssiToNormVltgOperTranT7 ***/
 }
 
/*****************************************************************************
  * Name            : HiVltgOperTranT8
  * Description     : Implementation of "HiVltgOperTransitionT8" subsystem in model.
  * Inputs          : BattVltg_Volt_T_f32.
  * Outputs         : *NormVltgOperToHiVltgOper_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) HiVltgOperTranT8(VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                     P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) NormVltgOperToHiVltgOper_Cnt_T_logl)
 {
    /*** Start of HiVltgOperTranT8 ***/
     VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	 
     if((BattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfHiVltgThdHi_Val()) &&
        (BattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfHiVltgThdLo_Val()))
     {
         (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_HiVltgInhbRefTi(),&TiSpan_Cnt_T_u32);
         if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfHiVltgInhbTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
         {
             *NormVltgOperToHiVltgOper_Cnt_T_logl = TRUE;
         }
         else
         {
             *NormVltgOperToHiVltgOper_Cnt_T_logl = FALSE;
         }
     }
     else
     {
         *NormVltgOperToHiVltgOper_Cnt_T_logl = FALSE;
         (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgInhbRefTi());
     }
     if((TRUE == *NormVltgOperToHiVltgOper_Cnt_T_logl) ||
        (BattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfHiVltgThdHi_Val()))
     {
         *NormVltgOperToHiVltgOper_Cnt_T_logl = TRUE;
     }
     else
     {
         *NormVltgOperToHiVltgOper_Cnt_T_logl = FALSE;
     }
    /*** End of HiVltgOperTranT8 ***/
 }

/*****************************************************************************
  * Name            : HiVltgToNormVltgOperTranT9
  * Description     : Implementation of "HiVltgToNormVltgOperTransitionT9" subsystem in model.
  * Inputs          : BattVltg_Volt_T_f32.
  * Outputs         : *HiVltgOperToNormVltgOper_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void,FordVltgIf_CODE) HiVltgToNormVltgOperTranT9(VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) HiVltgOperToNormVltgOper_Cnt_T_logl)
 { 
    /*** Start of HiVltgToNormVltgOperTranT9 ***/
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	
	if(BattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfHiVltgThdLo_Val())
    {
        (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_HiVltgRcvrTiMaxRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfHiVltgRcvrTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *HiVltgOperToNormVltgOper_Cnt_T_logl = TRUE;
        }
        else
        {
            *HiVltgOperToNormVltgOper_Cnt_T_logl = FALSE;
        }
    }
    else
    {
        *HiVltgOperToNormVltgOper_Cnt_T_logl = FALSE;
        (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgRcvrTiMaxRefTi());
    }
	/*** End of HiVltgToNormVltgOperTranT9 ***/
 }
 
/*****************************************************************************
  * Name            : HiVltgNoAssiToNormVltgOperTranT11
  * Description     : Implementation of "HiVltgNoAssiToNormVltgOperTransitionT11" subsystem in model.
  * Inputs          : BattVltg_Volt_T_f32.
  * Outputs         : *HiVltgNoAssiToNormVltgOper_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void,FordVltgIf_CODE) HiVltgNoAssiToNormVltgOperTranT11(VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                                                     P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) HiVltgNoAssiToNormVltgOper_Cnt_T_logl)
 {
	/*** Start of HiVltgNoAssiToNormVltgOperTranT11 ***/
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	
	if(BattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfHiVltgThdLo_Val())
    {
        (void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_HiVltgNoAssiRcvrRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfHiVltgNoAssiRcvrTiMax_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *HiVltgNoAssiToNormVltgOper_Cnt_T_logl = TRUE;
        }
        else
        {
            *HiVltgNoAssiToNormVltgOper_Cnt_T_logl = FALSE;
        }
    }
    else
    {
        *HiVltgNoAssiToNormVltgOper_Cnt_T_logl = FALSE;
        (void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgNoAssiRcvrRefTi());
    }
	/*** End of HiVltgNoAssiToNormVltgOperTranT11 ***/
 }
 
/*****************************************************************************
  * Name            : BattVltgSt
  * Description     : Implementation of "BattVltgSt" subsystem in model.
  * Inputs          : FordSysSt_Cnt_T_enum,
  *                   NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
  *                   LoVltgOperToNormVltgOper_Cnt_T_logl,
  *                   LoVltgNoAssiToNormVltgOper_Cnt_T_logl,
  *                   HiVltgOperToNormVltgOper_Cnt_T_logl,
  *                   EpsBattCurr_Ampr_T_f32,
  *                   HiVltgNoAssiToNormVltgOper_Cnt_T_logl,
  *                   FordInhbBattVltgDiagc_Cnt_T_logl,
  *                   EstimdBattVltg_Volt_T_f32,
  *                   BattVltg_Volt_T_f32,
  *                   NormVltgOperToHiVltgOper_Cnt_T_logl,
  *                   VltgOperStFlg_Cnt_T_logl.
  * Outputs         : *FordVltgOperStVal_Cnt_T_enum,
  *                   *FordVltgOperScarVal_Uls_T_f32,
  *                   *FordVltgOperRampVal_PercPerSec_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) BattVltgSt(VAR(SysSt1,AUTOMATIC) FordSysSt_Cnt_T_enum,
                                               VAR(boolean,AUTOMATIC) NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) LoVltgOperToNormVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) LoVltgNoAssiToNormVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) HiVltgOperToNormVltgOper_Cnt_T_logl,
                                               VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                               VAR(boolean,AUTOMATIC) HiVltgNoAssiToNormVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) FordInhbBattVltgDiagc_Cnt_T_logl,
                                               VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                               VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,
                                               VAR(boolean,AUTOMATIC) NormVltgOperToHiVltgOper_Cnt_T_logl,
                                               VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
                                               P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum,
                                               P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperScarVal_Uls_T_f32,
                                               P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperRampVal_PercPerSec_T_f32)
 {
	static VAR(uint8,AUTOMATIC) PrevVltgOperSt_Cnt_T_u08 = STATE0_CNT_U08;
	static VAR(boolean,AUTOMATIC) LoVltgOperMonrToTqScag_Cnt_T_logl = FALSE;
	static VAR(boolean,AUTOMATIC) LoVltgOperHiCurrToTqScag_Cnt_T_logl = FALSE;
    static VAR(uint8,AUTOMATIC) PrevFordVltgOperSt_Cnt_T_enum = PREV_STATE_CNT_U08;
	
	if (PrevFordVltgOperSt_Cnt_T_enum == *FordVltgOperStVal_Cnt_T_enum)
	{
		switch(*FordVltgOperStVal_Cnt_T_enum)
		{
			case FORDVLTGOPERST_LOVLTGOP_MONR:
			/** Monitor **/
				StTran_FORDVLTGOPERST_LOVLTGOP_MONR(EpsBattCurr_Ampr_T_f32,
													VltgOperStFlg_Cnt_T_logl,
													LoVltgOperMonrToTqScag_Cnt_T_logl,
													LoVltgOperToNormVltgOper_Cnt_T_logl,
													EstimdBattVltg_Volt_T_f32,
													FordVltgOperStVal_Cnt_T_enum);
			break;

			case FORDVLTGOPERST_LOVLTGOP_HICURR:
			/** HighCurrent **/
				StTran_FORDVLTGOPERST_LOVLTGOP_HICURR(LoVltgOperHiCurrToTqScag_Cnt_T_logl,
													  VltgOperStFlg_Cnt_T_logl,
													  LoVltgOperToNormVltgOper_Cnt_T_logl,
													  EstimdBattVltg_Volt_T_f32,
													  FordVltgOperStVal_Cnt_T_enum);				  
			break;											  

			case FORDVLTGOPERST_LOVLTGOP_TQSCAG:
			/** TorqueScaling **/
				if((TRUE == LoVltgOperToNormVltgOper_Cnt_T_logl) &&
				  (FALSE == VltgOperStFlg_Cnt_T_logl))
				{
					/** NormalOperation **/
					*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_NORMVLTGOP;
				}
				else if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdLo_Val()) &&
						(FALSE == VltgOperStFlg_Cnt_T_logl))
				{
					/** LowVoltageNoAssist **/
					*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_LOVLTGOP_NOASSI;
				}
				else
				{
					/* Do Nothing */
				}
			break;

			case FORDVLTGOPERST_LOVLTGOP_NOASSI:
			/** LowVoltageNoAssist **/
				if((TRUE == LoVltgNoAssiToNormVltgOper_Cnt_T_logl) &&
				  (FALSE == VltgOperStFlg_Cnt_T_logl))
				{
					*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_NORMVLTGOP;
				}
				else
				{
					/* Do Nothing */
				}	
			break;

			case FORDVLTGOPERST_HIVLTGOP:
			/** HighVoltageOperation **/
				if((BattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfHiVltgThdHi_Val()) &&
				  (FALSE == VltgOperStFlg_Cnt_T_logl))
				{
					/** HighVoltageNoAssist **/
					*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_HIVLTG_NOASSI;
				}
				else if((TRUE == HiVltgOperToNormVltgOper_Cnt_T_logl) &&
						(FALSE == VltgOperStFlg_Cnt_T_logl))
				{
					/** NormalOperation **/
					*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_NORMVLTGOP;
				}
				else
				{
					/* Do Nothing */
				}
			break;

			case FORDVLTGOPERST_HIVLTG_NOASSI:
			/** HighVoltageNoAssist **/
				if((TRUE == HiVltgNoAssiToNormVltgOper_Cnt_T_logl) &&
				   (FALSE == VltgOperStFlg_Cnt_T_logl))
				{
					/** NormalOperation **/
					*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_NORMVLTGOP;
				}
				else
				{
					/* Do Nothing */
				}
			break;
				
			default: 
			/** NormalOperation **/
			StTran_FORDVLTGOPERST_NORMVLTGOP(FordInhbBattVltgDiagc_Cnt_T_logl,
										     NormVltgOperToHiVltgOper_Cnt_T_logl,
											 VltgOperStFlg_Cnt_T_logl,
											 FordSysSt_Cnt_T_enum,
											 NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
											 EstimdBattVltg_Volt_T_f32,
											 FordVltgOperStVal_Cnt_T_enum);
			break;
		}
	}
	
	BattVltgSt_Oper (EstimdBattVltg_Volt_T_f32,
					 BattVltg_Volt_T_f32,    
					 PrevFordVltgOperSt_Cnt_T_enum,
					 *FordVltgOperStVal_Cnt_T_enum,
					 &PrevVltgOperSt_Cnt_T_u08,		
					 &LoVltgOperMonrToTqScag_Cnt_T_logl,
					 &LoVltgOperHiCurrToTqScag_Cnt_T_logl,											   
					 FordVltgOperScarVal_Uls_T_f32,
					 FordVltgOperRampVal_PercPerSec_T_f32);

    PrevFordVltgOperSt_Cnt_T_enum = (uint8)(*FordVltgOperStVal_Cnt_T_enum);
 }
 
 
 /*****************************************************************************
  * Name            : BattVltgSt_Oper
  * Description     : Implementation of "BattVltgSt_Oper" function in the BattVltgSt Subsystem.
  * Inputs          : EstimdBattVltg_Volt_T_f32,
  *					  BattVltg_Volt_T_f32,
  *                   PrevFordVltgOperStVal_Cnt_T_enum,
  *                   FordVltgOperStVal_Cnt_T_enum,  
  *  Outputs        : *PrevVltgOperStVal_Cnt_T_u08,	
  *					  *LoVltgOperMonrToTqScagVal_Cnt_T_logl,
  *					  *LoVltgOperHiCurrToTqScagVal_Cnt_T_logl,	
  *                   *FordVltgOperScarVal_Uls_T_f32,
  *                   *FordVltgOperRampVal_PercPerSec_T_f32,
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) BattVltgSt_Oper(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
												    VAR(float32,AUTOMATIC) BattVltg_Volt_T_f32,   
                                                    VAR(uint8,AUTOMATIC)   PrevFordVltgOperStVal_Cnt_T_enum,		
                                                    VAR(FordVltgOperSt1,AUTOMATIC) FordVltgOperStVal_Cnt_T_enum,													
												    P2VAR(uint8,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) PrevVltgOperStVal_Cnt_T_u08,	
												    P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperMonrToTqScagVal_Cnt_T_logl,
												    P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperHiCurrToTqScagVal_Cnt_T_logl,											   
												    P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperScarVal_Uls_T_f32,
												    P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperRampVal_PercPerSec_T_f32)	
{
	if (PrevFordVltgOperStVal_Cnt_T_enum != FordVltgOperStVal_Cnt_T_enum)
	{
		switch(FordVltgOperStVal_Cnt_T_enum)
		{
			case FORDVLTGOPERST_LOVLTGOP_MONR:
			/** Monitor **/
				LoVltgOperMonr(EstimdBattVltg_Volt_T_f32,
							   FordVltgOperScarVal_Uls_T_f32,
							   FordVltgOperRampVal_PercPerSec_T_f32);
				LoVltgOperMonrToTqScagTran(LoVltgOperMonrToTqScagVal_Cnt_T_logl);
			break;

			case FORDVLTGOPERST_LOVLTGOP_HICURR:
			/** HighCurrent **/
				 LoVltgOperHiCurr(EstimdBattVltg_Volt_T_f32, FordVltgOperScarVal_Uls_T_f32, FordVltgOperRampVal_PercPerSec_T_f32);
				 LoVltgOperHiCurrToTqScagTran(LoVltgOperHiCurrToTqScagVal_Cnt_T_logl);
			break;											  

			case FORDVLTGOPERST_LOVLTGOP_TQSCAG:
			/** TorqueScaling **/
				*FordVltgOperScarVal_Uls_T_f32 = Rte_Prm_FordVltgIfLoVltgTqScagFac_Val();
				*FordVltgOperRampVal_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgTqScaDwnRate_Val();
				*PrevVltgOperStVal_Cnt_T_u08 = STATE1_CNT_U08;
			break;

			case FORDVLTGOPERST_LOVLTGOP_NOASSI:
			/** LowVoltageNoAssist **/
					*FordVltgOperScarVal_Uls_T_f32 = 0.0F;
					*FordVltgOperRampVal_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgNoAssiRampDwnRate_Val();
					*PrevVltgOperStVal_Cnt_T_u08 = STATE0_CNT_U08;
			break;

			case FORDVLTGOPERST_HIVLTGOP:
			/** HighVoltageOperation **/
				
				*FordVltgOperScarVal_Uls_T_f32 = 0.0F;
				*FordVltgOperRampVal_PercPerSec_T_f32 = Rte_Prm_FordVltgIfHiVltgAssiRampDwnRate_Val();
				*PrevVltgOperStVal_Cnt_T_u08 = STATE2_CNT_U08;		   
			break;

			case FORDVLTGOPERST_HIVLTG_NOASSI:
			/** HighVoltageNoAssist **/
				*FordVltgOperScarVal_Uls_T_f32 = 0.0F;
				*FordVltgOperRampVal_PercPerSec_T_f32 = Rte_Prm_FordVltgIfHiVltgNoAssiRampDwnRate_Val();
			break;
				
			default: /* case : FORDVLTGOPERST_NORMVLTGOP */
				/** NormalOperation **/
				    *FordVltgOperScarVal_Uls_T_f32 = 1.0F;
					*FordVltgOperRampVal_PercPerSec_T_f32 = NormOper(*PrevVltgOperStVal_Cnt_T_u08);
					*PrevVltgOperStVal_Cnt_T_u08 = STATE0_CNT_U08;
			break;
		}
    }
	
 }
	
	
/*****************************************************************************
  * Name            : LoVltgOperMonr
  * Description     : Implementation of "LoVltgOperMonr" subsystem in model.
  * Inputs          : EstimdBattVltg_Volt_T_f32.
  * Outputs         : *VltgOperScar_Uls_T_f32,
  *                   *VltgOperRamp_PercPerSec_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) LoVltgOperMonr(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                   P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32,
												   P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32)
 {
	/*** Start of LoVltgOperMonr ***/
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgRcvrRefTi());

	if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdMid_Val()) &&
	   (EstimdBattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfLoVltgThdLo_Val()))
	{
		/** IncrementLoVltgThdMidToLoRefTmr **/
		*Rte_Pim_LoVltgThdMidToLoRefTmr() = *Rte_Pim_LoVltgThdMidToLoRefTmr() + INCRVAL_CNT_U08;
	}
	else
	{
		/** ResetLoVltgThdMidToLoRefTmr **/
		*Rte_Pim_LoVltgThdMidToLoRefTmr() = ZEROREFTMR_CNT_U08;
	}

	/*** Start of LoVltgOperSupSt ***/

		if(TRANEND_CNT_U08 == *Rte_Pim_HiToMidChk())
		{
			/** HiToMidTran **/
			HiToMidTran(VltgOperRamp_PercPerSec_T_f32,
			            VltgOperScar_Uls_T_f32);
		}
		else if(TRANEND_CNT_U08 == *Rte_Pim_MidToLoChk())
		{
			/** MidToLoTran **/
			MidToLoTran(VltgOperRamp_PercPerSec_T_f32,
			            VltgOperScar_Uls_T_f32);
		}
		else if(TRANEND_CNT_U08 == *Rte_Pim_LoToMidChk())
		{
			/** LoToMidTran **/
			LoToMidTran(VltgOperRamp_PercPerSec_T_f32,
			            VltgOperScar_Uls_T_f32);
		}
		else if(TRANEND_CNT_U08 == *Rte_Pim_MidToHiChk())
		{
			/** MidToHiTran **/
			MidToHiTran(VltgOperRamp_PercPerSec_T_f32,
			            VltgOperScar_Uls_T_f32);
		}
		else
		{
			/** PrevValue **/
			*VltgOperRamp_PercPerSec_T_f32 = *Rte_Pim_PrevVltgOperRamp();
			*VltgOperScar_Uls_T_f32 = *Rte_Pim_PrevVltgOperScar();
		}
	/*** End of LoVltgOperSupSt ***/
	/** Start of LoVltgThdChk **/
		LoVltgThdChk(EstimdBattVltg_Volt_T_f32);
		/** End of LoVltgThdChk **/
	/*** End of LoVltgOperMonr ***/
	
	if(EstimdBattVltg_Volt_T_f32 <= Rte_Prm_FordVltgIfLoVltgThdHi_Val())
	{
		*VltgOperScar_Uls_T_f32 = Rte_Prm_FordVltgIfLoVltgAssiScar_Val();
		*VltgOperRamp_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgNoAssiRampDwnRate_Val();
	}
	else
	{
		/** PrevValue **/
		*VltgOperRamp_PercPerSec_T_f32 = *Rte_Pim_PrevVltgOperRamp();
		*VltgOperScar_Uls_T_f32 = *Rte_Pim_PrevVltgOperScar();
	}

 }

/*****************************************************************************
  * Name            : LoVltgThdChk
  * Description     : Implementation of "LoVltgThdChk" subsystem in model.
  * Inputs          : EstimdBattVltg_Volt_T_f32.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) LoVltgThdChk(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32)
 {
	/*** Start of LoVltgThdChk ***/
	if((EstimdBattVltg_Volt_T_f32 >= Rte_Prm_FordVltgIfLoVltgThdHi_Val()) &&
	   ((TRANINIT_CNT_U08 == *Rte_Pim_HiToMidChk()) || (TRANEND_CNT_U08 == *Rte_Pim_HiToMidChk())))
	{
		*Rte_Pim_HiToMidChk() = TRANSTRT_CNT_U08;
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}
	else if((EstimdBattVltg_Volt_T_f32 <= Rte_Prm_FordVltgIfLoVltgThdMid_Val()) &&
	        (TRANSTRT_CNT_U08 == *Rte_Pim_HiToMidChk()))
	{
		*Rte_Pim_HiToMidChk() = TRANEND_CNT_U08;
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}
	else
	{
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		 *Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}

	if((EstimdBattVltg_Volt_T_f32 >= Rte_Prm_FordVltgIfLoVltgThdMid_Val()) &&
	   ((TRANINIT_CNT_U08 == *Rte_Pim_MidToLoChk()) || (TRANEND_CNT_U08 == *Rte_Pim_MidToLoChk())))
	{
		*Rte_Pim_MidToLoChk() = TRANSTRT_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}
	else if((EstimdBattVltg_Volt_T_f32 <= Rte_Prm_FordVltgIfLoVltgThdLo_Val()) &&
	        (TRANSTRT_CNT_U08 == *Rte_Pim_MidToLoChk()))
	{
		*Rte_Pim_MidToLoChk() = TRANEND_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}
	else
	{
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}

	if((EstimdBattVltg_Volt_T_f32 >= Rte_Prm_FordVltgIfLoVltgThdLo_Val()) &&
	   ((TRANINIT_CNT_U08 == *Rte_Pim_LoToMidChk()) || (TRANEND_CNT_U08 == *Rte_Pim_LoToMidChk())))
	{
		*Rte_Pim_LoToMidChk() = TRANSTRT_CNT_U08;
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}
	else if((EstimdBattVltg_Volt_T_f32 <= Rte_Prm_FordVltgIfLoVltgThdMid_Val()) &&
	        (TRANSTRT_CNT_U08 == *Rte_Pim_LoToMidChk()))
	{
		*Rte_Pim_LoToMidChk() = TRANEND_CNT_U08;
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}
	else
	{
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_MidToHiChk() = TRANINIT_CNT_U08;
	}

	if((EstimdBattVltg_Volt_T_f32 >= Rte_Prm_FordVltgIfLoVltgThdMid_Val()) &&
	   ((TRANINIT_CNT_U08 == *Rte_Pim_MidToHiChk()) || (TRANEND_CNT_U08 == *Rte_Pim_MidToHiChk())))
	{
		*Rte_Pim_MidToHiChk() = TRANSTRT_CNT_U08;
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
	}
	else if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdHi_Val()) &&
	        (TRANSTRT_CNT_U08 == *Rte_Pim_MidToHiChk()))
	{
		*Rte_Pim_MidToHiChk() = TRANEND_CNT_U08;
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
	}
	else
	{
		*Rte_Pim_MidToLoChk() = TRANINIT_CNT_U08;
		*Rte_Pim_HiToMidChk() = TRANINIT_CNT_U08;
		*Rte_Pim_LoToMidChk() = TRANINIT_CNT_U08;
	}
	/*** End of LoVltgThdChk ***/
 }

/*****************************************************************************
  * Name            : HiToMidTran
  * Description     : Implementation of "HiToMidTran" subsystem in model.
  * Inputs          : NA.
  * Outputs         : *VltgOperRamp_PercPerSec_T_f32,
  *                   *VltgOperScar_Uls_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) HiToMidTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32)
 {
	/*** Start of HiToMidTran ***/
	VAR(float32,AUTOMATIC) VltgOperScarInp_Uls_T_f32;

	*VltgOperRamp_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgAssiRampDwnRate_Val();
	VltgOperScarInp_Uls_T_f32 = (*Rte_Pim_PrevVltgOperScar() - Rte_Prm_FordVltgIfLoVltgAssiRampDwnRate_Val());

	if(VltgOperScarInp_Uls_T_f32 >= (Rte_Prm_FordVltgIfLoVltgAssiScar_Val() - ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
	{
		/** ApplyRateLimit **/
		*VltgOperScar_Uls_T_f32 = VltgOperScarInp_Uls_T_f32;
	}
	else
	{
		/** Pass **/
		*VltgOperScar_Uls_T_f32 = *Rte_Pim_PrevVltgOperScar();
	}
	/*** End of HiToMidTran ***/
 }

/*****************************************************************************
  * Name            : MidToLoTran
  * Description     : Implementation of "MidToLoTran" subsystem in model.
  * Inputs          : NA.
  * Outputs         : *VltgOperRamp_PercPerSec_T_f32,
  *                   *VltgOperScar_Uls_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) MidToLoTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32)
 {
	/*** Start of MidToLoTran ***/
	VAR(float32,AUTOMATIC) VltgOperScarInp_Uls_T_f32;

	*VltgOperRamp_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgAssiRampDwnRate_Val();
	VltgOperScarInp_Uls_T_f32 = (*Rte_Pim_PrevVltgOperScar() - Rte_Prm_FordVltgIfLoVltgAssiRampDwnRate_Val());

	if(VltgOperScarInp_Uls_T_f32 >= (Rte_Prm_FordVltgIfLoVltgTqScagFac_Val() - ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
	{
		/** ApplyRateLimit **/
		*VltgOperScar_Uls_T_f32 = VltgOperScarInp_Uls_T_f32;
	}
	else
	{
		/** Pass **/
		*VltgOperScar_Uls_T_f32 = *Rte_Pim_PrevVltgOperScar();
	}
	/*** End of MidToLoTran ***/
 }

/*****************************************************************************
  * Name            : LoToMidTran
  * Description     : Implementation of "LoToMidTran" subsystem in model.
  * Inputs          : NA.
  * Outputs         : *VltgOperRamp_PercPerSec_T_f32,
  *                   *VltgOperScar_Uls_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) LoToMidTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32)
 {
	/*** Start of LoToMidTran ***/
	VAR(float32,AUTOMATIC) VltgOperScarInp_Uls_T_f32;

	*VltgOperRamp_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgAssiRampUpRate_Val();
	VltgOperScarInp_Uls_T_f32 = (*Rte_Pim_PrevVltgOperScar() + Rte_Prm_FordVltgIfLoVltgAssiRampUpRate_Val());

	if(VltgOperScarInp_Uls_T_f32 <= (Rte_Prm_FordVltgIfLoVltgTqScagFac_Val() + ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
	{
		/** ApplyRateLimit **/
		*VltgOperScar_Uls_T_f32 = VltgOperScarInp_Uls_T_f32;
	}
	else
	{
		/** Pass **/
		*VltgOperScar_Uls_T_f32 = *Rte_Pim_PrevVltgOperScar();
	}
	/*** End of LoToMidTran ***/
 }

/*****************************************************************************
  * Name            : MidToHiTran
  * Description     : Implementation of "MidToHiTran" subsystem in model.
  * Inputs          : NA.
  * Outputs         : *VltgOperRamp_PercPerSec_T_f32,
  *                   *VltgOperScar_Uls_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) MidToHiTran(P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32,
                                                P2VAR(float32,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32)
 {
	/*** Start of MidToHiTran ***/
	VAR(float32,AUTOMATIC) VltgOperScarInp_Uls_T_f32;

	*VltgOperRamp_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgAssiRampUpRate_Val();
	VltgOperScarInp_Uls_T_f32 = (*Rte_Pim_PrevVltgOperScar() + Rte_Prm_FordVltgIfLoVltgAssiRampUpRate_Val());

	if(VltgOperScarInp_Uls_T_f32 <= (VLTGOPERSCALERMAX_ULS_F32 + ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
	{
		/** ApplyRateLimit **/
		*VltgOperScar_Uls_T_f32 = VltgOperScarInp_Uls_T_f32;
	}
	else
	{
		/** Pass **/
		*VltgOperScar_Uls_T_f32 = *Rte_Pim_PrevVltgOperScar();
	}
	/*** End of MidToHiTran ***/
 }

/*****************************************************************************
  * Name            : LoVltgOperHiCurr
  * Description     : Implementation of "LoVltgOperHiCurr" subsystem in model.
  * Inputs          : EstimdBattVltg_Volt_T_f32.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) LoVltgOperHiCurr(VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
													 P2VAR(float32, AUTOMATIC, RTE_FORDVLTGIF_APPL_VAR) VltgOperScar_Uls_T_f32,
													 P2VAR(float32, AUTOMATIC, RTE_FORDVLTGIF_APPL_VAR) VltgOperRamp_PercPerSec_T_f32)
 {
	if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdMid_Val()) &&
	   (EstimdBattVltg_Volt_T_f32 > Rte_Prm_FordVltgIfLoVltgThdLo_Val()))
	{
		*Rte_Pim_LoVltgThdMidToLoRefTmr() = *Rte_Pim_LoVltgThdMidToLoRefTmr() + 1U;
	}
	else
	{
		/** Do Nothing **/
	}
	
	if(EstimdBattVltg_Volt_T_f32 <= Rte_Prm_FordVltgIfLoVltgThdHi_Val())
	{
		*VltgOperScar_Uls_T_f32 = Rte_Prm_FordVltgIfLoVltgAssiScar_Val();
		*VltgOperRamp_PercPerSec_T_f32 = Rte_Prm_FordVltgIfLoVltgNoAssiRampDwnRate_Val();
	}
	else
	{
		/** PrevValue **/
		*VltgOperRamp_PercPerSec_T_f32 = *Rte_Pim_PrevVltgOperRamp();
		*VltgOperScar_Uls_T_f32 = *Rte_Pim_PrevVltgOperScar();
	}
 }




/*****************************************************************************
  * Name            : NormOper
  * Description     : Implementation of "NormOper" subsystem in model.
  * Inputs          : PrevVltgOperStVal_Cnt_T_u08.
  * Outputs         : *VltgOperScar_Uls_T_f32.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(float32, FordVltgIf_CODE) NormOper(VAR(uint8,AUTOMATIC) PrevVltgOperStVal_Cnt_T_u08)
 {
	/*** Start of NormOper ***/
	VAR(float32,AUTOMATIC) VltgOperRamp_Uls_T_f32;

	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi1());
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi2());
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgInhbRefTi3());
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgRcvrRefTi());
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LoVltgNoAssiRcvrRefTi());
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgInhbRefTi());
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_HiVltgRcvrRefTi());

	*Rte_Pim_LoVltgThdMidToLoRefTmr() = ZEROREFTMR_CNT_U08;

	if(STATE1_CNT_U08 == PrevVltgOperStVal_Cnt_T_u08)
	{
		/*** Start of VltgOperScarAtLoVltgTqScaUpRate ***/
		VltgOperRamp_Uls_T_f32 = Rte_Prm_FordVltgIfLoVltgTqScaUpRate_Val();
		/*** End of VltgOperScarAtLoVltgTqScaUpRate ***/
	}
	else if(STATE2_CNT_U08 == PrevVltgOperStVal_Cnt_T_u08)
	{
		/*** Start of VltgOperScarAtHiVltgAssiRampUpRate ***/
		VltgOperRamp_Uls_T_f32 = Rte_Prm_FordVltgIfHiVltgAssiRampUpRate_Val();
		/*** End of VltgOperScarAtHiVltgAssiRampUpRate ***/
	}
	else
	{
		/*** Start of VltgOperScarAtLoVltgAssiRampUpRate ***/
		VltgOperRamp_Uls_T_f32 = Rte_Prm_FordVltgIfLoVltgAssiRampUpRate_Val();
		/*** End of VltgOperScarAtLoVltgAssiRampUpRate ***/
	}
	/*** End of NormOper ***/
	return(VltgOperRamp_Uls_T_f32);
 }

/*****************************************************************************
  * Name            : StTran_FORDVLTGOPERST_NORMVLTGOP
  * Description     : Implementation of State Transitions from FORDVLTGOPERST_NORMVLTGOP
  *                   state in the model.
  * Inputs          : FordInhbBattVltgDiagc_Cnt_T_logl,
  *                   NormVltgOperToHiVltgOper_Cnt_T_logl,
  *                   VltgOperStFlg_Cnt_T_logl,
  *                   FordSysSt_Cnt_T_enum,
  *                   NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
  *                   EstimdBattVltg_Volt_T_f32,
  * Outputs         : *FordVltgOperStVal_Cnt_T_enum.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void,FordVltgIf_CODE) StTran_FORDVLTGOPERST_NORMVLTGOP(VAR(boolean,AUTOMATIC) FordInhbBattVltgDiagc_Cnt_T_logl,
                                                                    VAR(boolean,AUTOMATIC) NormVltgOperToHiVltgOper_Cnt_T_logl,
																	VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
																	VAR(SysSt1,AUTOMATIC) FordSysSt_Cnt_T_enum,
																	VAR(boolean,AUTOMATIC) NormVltgOperToLoVltgOperMonr_Cnt_T_logl,
																	VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
																	P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum)
 {
	/*** Start of StTran_FORDVLTGOPERST_NORMVLTGOP ***/
	if((FALSE == FordInhbBattVltgDiagc_Cnt_T_logl)   &&
	   (TRUE == NormVltgOperToHiVltgOper_Cnt_T_logl) &&
	   (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
	   /** HighVoltageOperation **/
	   *FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_HIVLTGOP;
	}
	else if((((FALSE == FordInhbBattVltgDiagc_Cnt_T_logl)                       &&
		   ((TRUE == NormVltgOperToLoVltgOperMonr_Cnt_T_logl)                  ||
		   (EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdLo_Val()))) &&
		   (FALSE == VltgOperStFlg_Cnt_T_logl)))
	{
		/** Monitor **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_LOVLTGOP_MONR;
	}
	else
	{
		/* Do Nothing */
	}
	/*** Start of StTran_FORDVLTGOPERST_NORMVLTGOP ***/
 }

/*****************************************************************************
  * Name            : LoVltgOperMonrToTqScagTran
  * Description     : Implementation of "LoVltgOperMonrToTqScagTran" subsystem in model.
  * Inputs          : NA.
  * Outputs         : *LoVltgOperMonrToTqScagVal_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) LoVltgOperMonrToTqScagTran(P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperMonrToTqScagVal_Cnt_T_logl)
 {
	/*** Start of  LoVltgOperMonrToTqScagTran ***/
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;

	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoVltgThdMidToLoRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfLoVltgThdMidToLoTiMax_Val() *(uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		/** SetLoVltgOperMonrToTqScag **/
		*LoVltgOperMonrToTqScagVal_Cnt_T_logl = TRUE;
	}
	else
	{
		/** ResetLoVltgOperMonrToTqScag **/
		*LoVltgOperMonrToTqScagVal_Cnt_T_logl = FALSE;
	}
	/*** End of LoVltgOperMonrToTqScagTran ***/
 }

/*****************************************************************************
  * Name            : StTran_FORDVLTGOPERST_LOVLTGOP_MONR
  * Description     : Implementation of State Transitions from FORDVLTGOPERST_LOVLTGOP_MONR
  *                   state in the model.
  * Inputs          : EpsBattCurr_Ampr_T_f32,
  *                   VltgOperStFlg_Cnt_T_logl,
  *                   LoVltgOperMonrToTqScagVal_Cnt_T_logl,
  *                   LoVltgOperToNormVltgOper_Cnt_T_logl,
  *                   EstimdBattVltg_Volt_T_f32,
  * Outputs         : *FordVltgOperStVal_Cnt_T_enum.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void,FordVltgIf_CODE) StTran_FORDVLTGOPERST_LOVLTGOP_MONR(VAR(float32,AUTOMATIC) EpsBattCurr_Ampr_T_f32,
                                                                       VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
                                                                       VAR(boolean,AUTOMATIC) LoVltgOperMonrToTqScagVal_Cnt_T_logl,
                                                                       VAR(boolean,AUTOMATIC) LoVltgOperToNormVltgOper_Cnt_T_logl,
                                                                       VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                                       P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum)
 {
	/*** Start of StTran_FORDVLTGOPERST_LOVLTGOP_MONR ***/
	if((EpsBattCurr_Ampr_T_f32 > Rte_Prm_FordVltgIfEpsBattCurrLim_Val()) &&
	   (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
		/** HighCurrent **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_LOVLTGOP_HICURR;
	}
	else if((TRUE == LoVltgOperMonrToTqScagVal_Cnt_T_logl) &&
	        (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
		/** TorqueScaling **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_LOVLTGOP_TQSCAG;
	}
    else
	{
		/* Do Nothing */
	}
   
   if((TRUE == LoVltgOperToNormVltgOper_Cnt_T_logl) &&
	        (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
		/** NormalOperation **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_NORMVLTGOP;
	}
	else if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdLo_Val()) &&
               (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
		/** LowVoltageNoAssist **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_LOVLTGOP_NOASSI;
	}
	else
	{
		/* Do Nothing */
	}
 }




/*****************************************************************************
  * Name            : LoVltgOperHiCurrToTqScagTran
  * Description     : Implementation of "LoVltgOperHiCurrToTqScagTran" subsystem in model.
  * Inputs          : NA.
  * Outputs         : *LoVltgOperHiCurrToTqScagVal_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) LoVltgOperHiCurrToTqScagTran(P2VAR(boolean,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) LoVltgOperHiCurrToTqScagVal_Cnt_T_logl)
 {
	/*** Start of LoVltgOperHiCurrToTqScagTran ***/
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;

	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LoVltgThdMidToLoRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordVltgIfLoVltgThdMidToLoTiMax_Val() *(uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		/** SetLoVltgOperHiCurrToTqScag **/
		*LoVltgOperHiCurrToTqScagVal_Cnt_T_logl = TRUE;
	}
	else
	{
		/** ResetLoVltgOperHiCurrToTqScag **/
		*LoVltgOperHiCurrToTqScagVal_Cnt_T_logl = FALSE;
	}
	/*** End of LoVltgOperHiCurrToTqScagTran ***/
 }

/*****************************************************************************
  * Name            : StTran_FORDVLTGOPERST_LOVLTGOP_HICURR
  * Description     : Implementation of State Transitions from FORDVLTGOPERST_LOVLTGOP_HICURR
  *                   state in the model.
  * Inputs          : LoVltgOperHiCurrToTqScagVal_Cnt_T_logl,
  *                   VltgOperStFlg_Cnt_T_logl,
  *                   LoVltgOperMonrToTqScagVal_Cnt_T_logl,
  *                   LoVltgOperToNormVltgOper_Cnt_T_logl,
  *                   EstimdBattVltg_Volt_T_f32,
  * Outputs         : *FordVltgOperStVal_Cnt_T_enum.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void,FordVltgIf_CODE) StTran_FORDVLTGOPERST_LOVLTGOP_HICURR(VAR(boolean,AUTOMATIC) LoVltgOperHiCurrToTqScagVal_Cnt_T_logl,
                                                                         VAR(boolean,AUTOMATIC) VltgOperStFlg_Cnt_T_logl,
                                                                         VAR(boolean,AUTOMATIC) LoVltgOperToNormVltgOper_Cnt_T_logl,
                                                                         VAR(float32,AUTOMATIC) EstimdBattVltg_Volt_T_f32,
                                                                         P2VAR(FordVltgOperSt1,AUTOMATIC,RTE_FORDVLTGIF_APPL_VAR) FordVltgOperStVal_Cnt_T_enum)
 {
	/*** Start of StTran_FORDVLTGOPERST_LOVLTGOP_HICURR ***/
	if((TRUE == LoVltgOperHiCurrToTqScagVal_Cnt_T_logl) &&
	   (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
		/** TorqueScaling **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_LOVLTGOP_TQSCAG;
	}
	else if((TRUE == LoVltgOperToNormVltgOper_Cnt_T_logl) &&
	        (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
		/** NormalOperation **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_NORMVLTGOP;
	}
	else
	{
		/* Do Nothing */
	}
   
   if((EstimdBattVltg_Volt_T_f32 < Rte_Prm_FordVltgIfLoVltgThdLo_Val()) &&
               (FALSE == VltgOperStFlg_Cnt_T_logl))
	{
		/** LowVoltageNoAssist **/
		*FordVltgOperStVal_Cnt_T_enum = FORDVLTGOPERST_LOVLTGOP_NOASSI;
	}
	else
	{
		/* Do Nothing */
	}
	/*** End of StTran_FORDVLTGOPERST_LOVLTGOP_HICURR ***/
 }




/*****************************************************************************
  * Name            : Diag
  * Description     : Implementation of "Diagnostic" subsystem in model.
  * Inputs          : FordVltgOperStVal_Cnt_T_enum.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, FordVltgIf_CODE) Diag(VAR(FordVltgOperSt1,AUTOMATIC) FordVltgOperStVal_Cnt_T_enum)
 {
	/*** Start of Diag ***/
	/** LoVltgMonr **/
	if(FORDVLTGOPERST_LOVLTGOP_MONR == FordVltgOperStVal_Cnt_T_enum)
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E2, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E2, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	}

	/** LoVltgHiCurr **/
	if(FORDVLTGOPERST_LOVLTGOP_HICURR == FordVltgOperStVal_Cnt_T_enum)
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E3, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E3, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	}

	/** LoVltgTqScag **/
	if(FORDVLTGOPERST_LOVLTGOP_TQSCAG == FordVltgOperStVal_Cnt_T_enum)
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E4, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E3, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	}

	/** LoVltgNoAssi **/
	if(FORDVLTGOPERST_LOVLTGOP_NOASSI == FordVltgOperStVal_Cnt_T_enum)
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E5, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E5, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	}

	/** HiVltgOper **/
	if(FORDVLTGOPERST_HIVLTGOP == FordVltgOperStVal_Cnt_T_enum)
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E6, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E6, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	}

	/** HiVltgNoAssi **/
	if(FORDVLTGOPERST_HIVLTG_NOASSI == FordVltgOperStVal_Cnt_T_enum)
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E7, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
	}
	else
	{
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X0E7, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	}
	/*** End of Diag ***/
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
