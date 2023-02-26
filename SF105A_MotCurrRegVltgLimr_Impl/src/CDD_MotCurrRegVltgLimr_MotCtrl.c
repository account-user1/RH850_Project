 /**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCurrRegVltgLimr_MotCtrl.c
* Module Description: Implementation of Motor Current Regulator and Voltage limiter
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          12 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/10/15  1        Selva       Initial Version                                                                EA4#299
* 08/21/15  2        Selva       Fixed Anomaly 1039                                                             EA4#1363
* 04/12/16  3        NS          Updated for FDD v1.4.0                                                         EA4#4494
* 04/29/16  4        NS          MotCurrLoaMtgtnEna renamed to CurrMeasLoaMtgtnEna per FDD v1.5.0               EA4#5368
* 06/15/16  5        BG          Add the range limiting for the final q-axis current command in software.		EA4#6229
* 08/25/16  6        Rijvi       Updated per design rev. 1.7.0                                                  EA4#6633
* 09/12/16  7        NS          Fixed MOTCTRLMGR_MotCtrlIvtrLoaMtgtnEna name to match DataDict                 EA4#7349
* 11/01/16  8        ML          Updated for FDD v2.1.0													        EA4#7548
* 01/04/17  9        ML			 Updated to fix Anomaly EA4#9045												EA4#9082
* 03/16/17  10       ML			 Updated to fix Anomaly EA4#9809											   EA4#10505
* 09/06/17  11       ML          Updated to fix Anomaly EA4#12003                                              EA4#12641
* 11/08/17  12       RMG(TATA)   Added one new input MotCtrlMotAndThermProtnLoaMod                             EA4#13245
                                 Deleted two inputs MotCtrlCurrMeasLoaMtgtnEna, MotCtrlIvtrLoaMtgtnEna
                                 One new PIM added FETLoaScarPrev
                                 One new calibration added MotCurrRegVltgLimrFETLoaScarSlewRate
                                 Saturation blocks added to in MotCurr_Pred block                                            
**********************************************************************************************************************/

#include "Rte_CDD_MotCurrRegVltgLimr.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "CDD_MotCurrRegVltgLimr.h"
#include "NxtrMath.h"
#include "ElecGlbPrm.h"    
#include "ArchGlbPrm.h"
#include "MotRefMdl.h"
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/********************************************* Embedded Local Constants **********************************************/

#define MOTCURRLOLIM_AMPR_F32       	(-200.0F)
#define MOTCURRHILIM_AMPR_F32       	200.0F
#define BRDGVLTGLOLIM_VOLT_F32      	6.0F
#define BRDGVLTGHILIM_VOLT_F32      	26.5F                                                
#define F32TOU16OVR2PI_ULS_F32      	10430.21921F
#define MODIDXHILIM_VOLT_F32        	1.0F
#define MODIDXLOLIM_VOLT_F32        	0.0F
#define MOTVLTGDQAXHILIM_VOLT_F32 		26.5F
#define MOTVLTGDQAXLOLIM_VOLT_F32 		(-26.5F)
#define PHAADVHILIM_MOTREV_F32 			65535.0F 
#define PHAADVLOLIM_MOTREV_F32 			0.0F
#define ZERO_VOLT_F32					0.0F
#define MOTCURRPREDLOLIM_ULS_F32       (-1000000000.0F)
#define MOTCURRPREDHILIM_ULS_F32       (1000000000.0F)
#define BITMASK1_CNT_U08               (1U)
#define BITMASK2_CNT_U08               (2U)  
#define BITMASK4_CNT_U08               (4U)  


static FUNC(void, MotCurrRegVltgLimr_CODE)  KpKiCtrl(float32 MotPropGain_Ohm_T_f32, float32 MotIntglGain_Ohm_T_f32,
                                                        SysSt1 SysSt_Cnt_T_enum, float32 CmdErr_Ampr_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmdPrev_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32,
                                                        float32 MotVltgIntglLoLim_Volt_T_f32, float32 MotVltgIntglHiLim_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmd_Volt_T_f32);
                                                        
static FUNC(float32, MotCurrRegVltgLimr_CODE) ErrorCalcQax(float32 QaxCurrCmd_Ampr_T_f32,
                                                            float32 QaxRplCmd_Ampr_T_f32,
                                                            float32 QaxCoggCmd_Ampr_T_f32,
                                                            float32 QaxCurrModif_Ampr_T_f32,
                                                            float32 AntiWdupCmdSca_Uls_T_f32,
                                                            P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) QaxCmdFinal_Ampr_T_f32);
                                                            
static FUNC(void, MotCurrRegVltgLimr_CODE) LoaScaFac(boolean CurrLoaMtgtnEn_Cnt_T_logl, 
                                                        boolean IvtrLoaMtgtnEn_Cnt_T_logl,
														boolean MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl,
                                                        boolean FetLoaMtgtnEna_Cnt_T_logl,														
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) CurrLoaScaFac_Uls_T_f32, 
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) IvtrLoaScaFac_Uls_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) DualEcuScaFac_Uls_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) FetScaFac_Uls_T_f32);
														
static FUNC(void, MotCurrRegVltgLimr_CODE) MotCurr_Pred(float32 MotInduQaxEstimdIvs_IvsHenry_T_f32,
														float32 MotREstimd_Ohm_T_f32,
														float32 CurrQax_Ampr_T_f32,
														float32 MotVltgQaxPrev_Volt_T_f32,
														float32 CurrDax_Ampr_T_f32,
														float32 MotVltgDaxPrev_Volt_T_f32,
														float32 MotBackEmfVltg_Volt_T_f32,
														float32 ReacncQax_Ohm_T_f32,
														float32 ReacncDax_Ohm_T_f32,
														float32 MotInduDaxEstimdIvs_IvsHenry_T_f32,
														boolean MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl,
														float32 MotCtrlCurrPredTi_NanoSec_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrQaxPred_Ampr_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrDaxPred_Ampr_T_f32);
														
static FUNC(void, MotCurrRegVltgLimr_CODE) Decoder(VAR(uint8,AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08,
                                                   P2VAR(boolean, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) CurrMeasLoaMtgtnEna_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) IvtrLoaMtgtnEna_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) FetLoaMtgtnEna_Cnt_T_logl);
												   
												   
#define CDD_MotCurrRegVltgLimr_MotCtrl_START_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MotCtrl_MemMap.h" 
                                                            
 /*****************************************************************************
  * Name:   MotCurrRegVltgLimrPer1
  * Description: Created for Regulating Motor current and  limiting the voltage  
  * Inputs:      None
  * Outputs:     None
  * Usage notes: Called by Motor control ISR (Call rate 2*MotCtrlISR)
*****************************************************************************/ 
FUNC(void, CDD_MotCurrRegVltgLimr_APPL_CODE) MotCurrRegVltgLimrPer1(void)
{ 
    VAR(float32, AUTOMATIC) MotCtrlBrdgVltg_Volt_T_f32;                     
    VAR(float32, AUTOMATIC) MotCurrDax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) CmdErrDax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrQax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrQaxCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrDaxCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotIntglGainDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotPropGainDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotIntglGainQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotPropGainQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotAgElecDly_Rad_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDaxFf_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQaxFf_Volt_T_f32;
    VAR(float32, AUTOMATIC) CmdErrQax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotVltgPropCmdQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgPropCmdDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgIntglCmdQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgIntglCmdDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgSq_VoltSq_T_f32;
    VAR(float32, AUTOMATIC) MotVltgCmdPreLim_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgCmdFinal_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) ModIdx_Uls_T_f32;
    VAR(float32, AUTOMATIC) PhsAdv_Rad_T_f32;
    VAR(float32, AUTOMATIC) PhsAdvFinal_Rad_T_f32;
    VAR(uint16, AUTOMATIC) PhsAdvFinal_Rev_T_u0p16;
    VAR(float32, AUTOMATIC) MotCurrQaxCmdFinal_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotDampgDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotDampgQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotReacDax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotReacQax_Ohm_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDircFbQax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgDircFbDax_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQaxDampg_Volt_T_f32      ;
    VAR(float32, AUTOMATIC) MotVltgDaxDampg_Volt_T_f32      ;
    VAR(float32, AUTOMATIC) MotVltgQaxDecouplFb_Volt_T_f32  ;
    VAR(float32, AUTOMATIC) MotVltgDaxDecouplFb_Volt_T_f32  ;
    VAR(boolean, AUTOMATIC) CurrMeasLoaMtgtnEna_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl;
    VAR(float32, AUTOMATIC) CurrLoaScaFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) VltgSatnIvsRatio_Uls_T_f32      ;
    VAR(float32, AUTOMATIC) VltgSatnRatio_Uls_T_f32         ;
    VAR(float32, AUTOMATIC) IvtrLoaScaFac_Uls_T_f32;
    VAR(float32, AUTOMATIC) MotVltgPreLimQax_Volt_T_f32   ;
    VAR(float32, AUTOMATIC) LoaScaFac_Uls_T_f32     ;
    VAR(float32, AUTOMATIC) MotVltgPreLimDax_Volt_T_f32   ;
    VAR(float32, AUTOMATIC) SqrdVltgSatnIvsRatio_Uls_T_f32  ;
    VAR(float32, AUTOMATIC) MotCurrQaxCoggCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrQaxRplCmd_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32;
    VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;
    VAR(float32, AUTOMATIC) MotCurrDaxCmdMax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotVltgQaxFfFild_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCtrlBrdgVltgFild_Volt_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotBackEmfVltg_Volt_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotREstimd_Ohm_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotInduDaxEstimdIvs_IvsHenry_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotInduQaxEstimdIvs_IvsHenry_T_f32;
	VAR(float32, AUTOMATIC) DualEcuScaFac_Uls_T_f32;
	VAR(float32, AUTOMATIC) MotCurrQaxPred_Ampr_T_f32;
	VAR(float32, AUTOMATIC) MotCurrDaxPred_Ampr_T_f32;
	VAR(float32, AUTOMATIC) FetScaFac_Uls_T_f32;
	VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;


    MotCtrlBrdgVltg_Volt_T_f32 = MOTCTRLMGR_MotCtrlBrdgVltg;
  
    MotAgElecDly_Rad_T_f32       = MOTCTRLMGR_MotCtrlMotAgElecDly; 
    MotCurrDax_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrDax;
    MotCurrDaxCmd_Ampr_T_f32    = MOTCTRLMGR_MotCtrlMotCurrDaxCmd;
    MotCurrDaxCmdMax_Ampr_T_f32 = MOTCTRLMGR_MotCtrlMotCurrDaxMax;
    MotAndThermProtnLoaMod_Cnt_T_u08 = MOTCTRLMGR_MotCtrlMotAndThermProtnLoaMod;
    MotCurrQax_Ampr_T_f32         = MOTCTRLMGR_MotCtrlMotCurrQax;
    MotCurrQaxCmd_Ampr_T_f32      = MOTCTRLMGR_MotCtrlMotCurrQaxCmd;
    MotCurrQaxCoggCmd_Ampr_T_f32  = MOTCTRLMGR_MotCtrlMotCurrQaxCoggCmd;
    MotCurrQaxRplCmd_Ampr_T_f32   = MOTCTRLMGR_MotCtrlMotCurrQaxRplCmd;
    MotDampgDax_Ohm_T_f32         = MOTCTRLMGR_MotCtrlMotDampgDax;
    MotDampgQax_Ohm_T_f32         = MOTCTRLMGR_MotCtrlMotDampgQax;
    MotIntglGainDax_Ohm_T_f32   =   MOTCTRLMGR_MotCtrlMotIntglGainDax;
    MotIntglGainQax_Ohm_T_f32   =   MOTCTRLMGR_MotCtrlMotIntglGainQax;
    MotPropGainDax_Ohm_T_f32    =   MOTCTRLMGR_MotCtrlMotPropGainDax;
    MotPropGainQax_Ohm_T_f32    =   MOTCTRLMGR_MotCtrlMotPropGainQax;
    MotReacDax_Ohm_T_f32        =   MOTCTRLMGR_MotCtrlMotReacncDax;
    MotReacQax_Ohm_T_f32        =   MOTCTRLMGR_MotCtrlMotReacncQax;
    MotVltgDaxFf_Volt_T_f32     =  MOTCTRLMGR_MotCtrlMotVltgDaxFf;
    MotVltgQaxFf_Volt_T_f32     =  MOTCTRLMGR_MotCtrlMotVltgQaxFf;
    SysSt_Cnt_T_enum  = MOTCTRLMGR_MotCtrlSysSt;
	MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl = MOTCTRLMGR_MotCtrlDualEcuMotCtrlMtgtnEna;
	MotCtrlMotBackEmfVltg_Volt_T_f32 = MOTCTRLMGR_MotCtrlMotBackEmfVltg;
	MotCtrlMotREstimd_Ohm_T_f32 = MOTCTRLMGR_MotCtrlMotREstimd;
	MotCtrlMotInduDaxEstimdIvs_IvsHenry_T_f32 = MOTCTRLMGR_MotCtrlMotInduDaxEstimdIvs;
	MotCtrlMotInduQaxEstimdIvs_IvsHenry_T_f32 = MOTCTRLMGR_MotCtrlMotInduQaxEstimdIvs;
	
	/**** MotCurr_Pred ****/
	MotCurr_Pred(MotCtrlMotInduQaxEstimdIvs_IvsHenry_T_f32,
				 MotCtrlMotREstimd_Ohm_T_f32,
				 MotCurrQax_Ampr_T_f32,
				 *Rte_Pim_MotCtrlMotVltgQaxPrev(),
				 MotCurrDax_Ampr_T_f32,
				 *Rte_Pim_MotCtrlMotVltgDaxPrev(),
				 MotCtrlMotBackEmfVltg_Volt_T_f32,
				 MotReacQax_Ohm_T_f32,
				 MotReacDax_Ohm_T_f32,
				 MotCtrlMotInduDaxEstimdIvs_IvsHenry_T_f32,
				 Rte_Prm_MotCurrRegVltgLimrMotCurrPredEna_Logl(),
				 Rte_Prm_MotCurrRegVltgLimrMotCurrPredTi_Val(),
				 &MotCurrQaxPred_Ampr_T_f32,
				 &MotCurrDaxPred_Ampr_T_f32);
 
    /*************************MotCurr_ErrCalc_Dax**************************************/

    MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32  = Lim_f32((MotCurrDaxCmdMax_Ampr_T_f32 *  ( 1.0F - (*Rte_Pim_AntiWdupCmdScaDax()) ) ) + (MotCurrDaxCmd_Ampr_T_f32 * (*Rte_Pim_AntiWdupCmdScaDax())),
                                                                0.0F,
                                                                MOTCURRHILIM_AMPR_F32);
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaDax() = MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32;
    CmdErrDax_Ampr_T_f32                           = MotCurrRegVltgLimrMotCurrCmdScaDax_Ampr_T_f32  - MotCurrDaxPred_Ampr_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrDax() = CmdErrDax_Ampr_T_f32;

    /*************************MotCurr_ErrorCalc_Qax**************************************/

    CmdErrQax_Ampr_T_f32 = ErrorCalcQax(MotCurrQaxCmd_Ampr_T_f32,
                                        MotCurrQaxRplCmd_Ampr_T_f32,
                                        MotCurrQaxCoggCmd_Ampr_T_f32,
                                        MotCurrQaxPred_Ampr_T_f32,
                                        *Rte_Pim_AntiWdupCmdScaQax(),
                                        &MotCurrQaxCmdFinal_Ampr_T_f32);
 
    /****  Kp_Ki_Ctrl_Qax ****/ 

    KpKiCtrl(MotPropGainQax_Ohm_T_f32, 
                MotIntglGainQax_Ohm_T_f32,
                SysSt_Cnt_T_enum, CmdErrQax_Ampr_T_f32,
                Rte_Pim_MotVltgIntglCmdQaxPrev(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdQax(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxIntglPreLim(),
                Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglLoLim_Val(), 
                Rte_Prm_MotCurrRegVltgLimrMotVltgQaxIntglHiLim_Val(),
                &MotVltgPropCmdQax_Volt_T_f32,
                &MotVltgIntglCmdQax_Volt_T_f32);

    /****  Kp_Ki_Ctrl_Dax ****/ 
    KpKiCtrl(MotPropGainDax_Ohm_T_f32, 
                MotIntglGainDax_Ohm_T_f32,
                SysSt_Cnt_T_enum, CmdErrDax_Ampr_T_f32,
                Rte_Pim_MotVltgIntglCmdDaxPrev(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgPropCmdDax(),
                Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxIntglPreLim(),
                Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglLoLim_Val(), 
                Rte_Prm_MotCurrRegVltgLimrMotVltgDaxIntglHiLim_Val(),
                &MotVltgPropCmdDax_Volt_T_f32,
                &MotVltgIntglCmdDax_Volt_T_f32);
 
    /* DircFb_VltgCalc*/

    /*** Direct feedback voltage computation***/
    if( Rte_Prm_MotRefMdlFbCtrlDi_Logl() == TRUE)
    {
       MotVltgDircFbQax_Volt_T_f32 = ZERO_VOLT_F32;
       MotVltgDircFbDax_Volt_T_f32 = ZERO_VOLT_F32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax() = 0.0f;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax() = 0.0f;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax() =0.0f;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax() =0.0f;
    }
    else
    {

       if(Rte_Prm_MotCurrRegCfgCurrLoopSecOrderTrfFctEna_Logl() == TRUE)
       {
           MotVltgQaxDampg_Volt_T_f32 = MotDampgQax_Ohm_T_f32 * MotCurrQaxPred_Ampr_T_f32;
           MotVltgDaxDampg_Volt_T_f32 = MotDampgDax_Ohm_T_f32 * MotCurrDaxPred_Ampr_T_f32;
       }
       else
       { 
           MotVltgQaxDampg_Volt_T_f32 = Rte_Prm_MotCurrRegCfgMotRVirtQax_Val()  * MotCurrQaxPred_Ampr_T_f32;
           MotVltgDaxDampg_Volt_T_f32 = Rte_Prm_MotCurrRegCfgMotRVirtDax_Val()  * MotCurrDaxPred_Ampr_T_f32;
         
       }
       MotVltgDaxDecouplFb_Volt_T_f32 = MotCurrQaxPred_Ampr_T_f32* MotReacQax_Ohm_T_f32;
       MotVltgQaxDecouplFb_Volt_T_f32 = MotCurrDaxPred_Ampr_T_f32* MotReacDax_Ohm_T_f32;

       MotVltgDircFbQax_Volt_T_f32 = -(MotVltgQaxDecouplFb_Volt_T_f32 + MotVltgQaxDampg_Volt_T_f32);
       MotVltgDircFbDax_Volt_T_f32 =  MotVltgDaxDecouplFb_Volt_T_f32 - MotVltgDaxDampg_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgDax() = MotVltgDaxDampg_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDampgQax() = MotVltgQaxDampg_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbQax() =MotVltgQaxDecouplFb_Volt_T_f32;
       *Rte_Pim_dMotCurrRegVltgLimrMotVltgDecoupldFbDax() =MotVltgDaxDecouplFb_Volt_T_f32;
    }


     *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbQax() = MotVltgDircFbQax_Volt_T_f32;
     *Rte_Pim_dMotCurrRegVltgLimrMotVltgDircFbDax() = MotVltgDircFbDax_Volt_T_f32;
	 
	 /** Start of Decoder **/
	 Decoder(MotAndThermProtnLoaMod_Cnt_T_u08,
             &CurrMeasLoaMtgtnEna_Cnt_T_logl,
			 &IvtrLoaMtgtnEna_Cnt_T_logl,
		     &FetLoaMtgtnEna_Cnt_T_logl);
    /** End of Decoder **/
			 
	/*************  LOA_ScaFac**********/

    /*************  LOA_ScaFac**********/
    LoaScaFac(CurrMeasLoaMtgtnEna_Cnt_T_logl,	
			  IvtrLoaMtgtnEna_Cnt_T_logl,
			  MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl,
			  FetLoaMtgtnEna_Cnt_T_logl,
			  &CurrLoaScaFac_Uls_T_f32, 
			  &IvtrLoaScaFac_Uls_T_f32, 
			  &DualEcuScaFac_Uls_T_f32,
			  &FetScaFac_Uls_T_f32);

    /*Qax_Vltg_Sum*/
    /********QAxisVoltageSummation**********************/
    LoaScaFac_Uls_T_f32 = IvtrLoaScaFac_Uls_T_f32 * CurrLoaScaFac_Uls_T_f32 * DualEcuScaFac_Uls_T_f32 * FetScaFac_Uls_T_f32;

    /**** Qax voltage computation and Limit ****/   
    MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32 = ((MotVltgPropCmdQax_Volt_T_f32 + MotVltgIntglCmdQax_Volt_T_f32 + MotVltgDircFbQax_Volt_T_f32) * LoaScaFac_Uls_T_f32);
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFb() = MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32;
    
    MotVltgQaxFfFild_Volt_T_f32 = FilLpUpdOutp_f32(MotVltgQaxFf_Volt_T_f32, Rte_Pim_MotVltgQaxFfLpFil());
    
    if ((CurrMeasLoaMtgtnEna_Cnt_T_logl != FALSE) || 
	    (IvtrLoaMtgtnEna_Cnt_T_logl != FALSE) || 
		(Rte_Prm_MotRefMdlFbCtrlDi_Logl() != FALSE) || 
		(Rte_Prm_MotCurrRegVltgLimrMotVltgQaxFfFilEna_Logl() == FALSE) ||
		(MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl != FALSE) ||
		(FetLoaMtgtnEna_Cnt_T_logl != FALSE))
    {
        MotVltgPreLimQax_Volt_T_f32 = MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32 + MotVltgQaxFf_Volt_T_f32;
        *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild() = MotVltgQaxFf_Volt_T_f32;
    }
    else
    {
        MotVltgPreLimQax_Volt_T_f32 = MotCurrRegVltgLimrMotVltgQaxFb_Volt_T_f32 + MotVltgQaxFfFild_Volt_T_f32;
        *Rte_Pim_dMotCurrRegVltgLimrMotVltgQaxFfFild() = MotVltgQaxFfFild_Volt_T_f32;
    }
    
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimQax() = MotVltgPreLimQax_Volt_T_f32;

    /*Dax_Vltg_Sum*/
    /**** Dax voltage computation and Limit****/
    MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32 = (MotVltgPropCmdDax_Volt_T_f32 + MotVltgIntglCmdDax_Volt_T_f32  + MotVltgDircFbDax_Volt_T_f32 ) * LoaScaFac_Uls_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgDaxFb() = MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32;
    MotVltgPreLimDax_Volt_T_f32 = MotCurrRegVltgLimrMotVltgDaxFb_Volt_T_f32 + MotVltgDaxFf_Volt_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgPreLimDax() = MotVltgPreLimDax_Volt_T_f32;

    /*Calc_Limit_Cmd_Final*/
    /**** Final motor output command computation and Limit -Final DQ Voltage ****/
    /*Range limit Bridge Voltage */
    MotCtrlBrdgVltg_Volt_T_f32 = Lim_f32(MotCtrlBrdgVltg_Volt_T_f32, BRDGVLTGLOLIM_VOLT_F32, BRDGVLTGHILIM_VOLT_F32);
    MotVltgSq_VoltSq_T_f32=((MotVltgPreLimQax_Volt_T_f32*MotVltgPreLimQax_Volt_T_f32)+(MotVltgPreLimDax_Volt_T_f32*MotVltgPreLimDax_Volt_T_f32));
    MotVltgCmdPreLim_Volt_T_f32 =Sqrt_f32(MotVltgSq_VoltSq_T_f32); 
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdPreLim() = MotVltgCmdPreLim_Volt_T_f32;
    
    /* BrdgVltgFiltering */
    MotCtrlBrdgVltgFild_Volt_T_f32 = FilLpUpdOutp_f32(MotCtrlBrdgVltg_Volt_T_f32, Rte_Pim_MotVltgBrdgLpFil());
    MotCtrlBrdgVltgFild_Volt_T_f32 = Lim_f32(MotCtrlBrdgVltgFild_Volt_T_f32, 
                                                BRDGVLTGLOLIM_VOLT_F32, 
                                                BRDGVLTGHILIM_VOLT_F32);
    
    if (Rte_Prm_MotCurrRegVltgLimrMotVltgBrdgFilEna_Logl() != FALSE)
    {
        /* Keep MotCtrlBrdgVltgFild_Volt_T_f32 calculated above */
    }
    else
    {
        /* Use unfiltered value */
        MotCtrlBrdgVltgFild_Volt_T_f32 = MotCtrlBrdgVltg_Volt_T_f32;
    }

    *Rte_Pim_dMotCurrRegVltgLimrMotVltgBrdgFild() = MotCtrlBrdgVltgFild_Volt_T_f32;

    /*VltgSatnIvsRatioCalc*/
    MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32  =  Lim_f32(Rte_Prm_MotRefMdlIvtrDeadTiBrdgVltgSca_Val(), MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32, MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32);
    MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32 = MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32 * MotCtrlBrdgVltgFild_Volt_T_f32;
    VltgSatnRatio_Uls_T_f32 = MotVltgCmdPreLim_Volt_T_f32 /(MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32);
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnRat() = VltgSatnRatio_Uls_T_f32;

    if (VltgSatnRatio_Uls_T_f32 > 1.0F)
    {
        VltgSatnIvsRatio_Uls_T_f32 = 1.0F / VltgSatnRatio_Uls_T_f32;
    }
    else
    {
        VltgSatnIvsRatio_Uls_T_f32 = 1.0F;
    }
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgSatnIvsRat() = VltgSatnIvsRatio_Uls_T_f32;


    /*VltgCalcFinal*/
    MotVltgQax_Volt_T_f32 = VltgSatnIvsRatio_Uls_T_f32* MotVltgPreLimQax_Volt_T_f32;
    MotVltgDax_Volt_T_f32 = VltgSatnIvsRatio_Uls_T_f32* MotVltgPreLimDax_Volt_T_f32;
    MotVltgCmdFinal_Volt_T_f32 = VltgSatnIvsRatio_Uls_T_f32 *  MotVltgCmdPreLim_Volt_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotVltgCmdFinal() =  MotVltgCmdFinal_Volt_T_f32;
    ModIdx_Uls_T_f32=(MotVltgCmdFinal_Volt_T_f32/MotRefMdlIvtrDeadTiBrdgVltgSca_Uls_T_f32); 

    PhsAdv_Rad_T_f32=Arctan2_f32(MotVltgPreLimDax_Volt_T_f32,MotVltgPreLimQax_Volt_T_f32);
    /*Correct the Calculated Phase Advance*/
    PhsAdvFinal_Rad_T_f32=PhsAdv_Rad_T_f32+MotAgElecDly_Rad_T_f32;


    if (PhsAdvFinal_Rad_T_f32 >= ARCHGLBPRM_2PI_ULS_F32)
    {
        PhsAdvFinal_Rad_T_f32 = PhsAdvFinal_Rad_T_f32 - ARCHGLBPRM_2PI_ULS_F32;
    }
    else if(PhsAdvFinal_Rad_T_f32 < 0.0F)
    {
        PhsAdvFinal_Rad_T_f32 = PhsAdvFinal_Rad_T_f32 + ARCHGLBPRM_2PI_ULS_F32;
    }
    else
    {
        
    }
    *Rte_Pim_dMotCurrRegVltgLimrPhaAdvPreDly( )= PhsAdvFinal_Rad_T_f32;
	
	PhsAdvFinal_Rev_T_u0p16 = (uint16)(uint32)(float32) ( Lim_f32( (PhsAdvFinal_Rad_T_f32 * F32TOU16OVR2PI_ULS_F32), PHAADVLOLIM_MOTREV_F32, PHAADVHILIM_MOTREV_F32) ); 

    SqrdVltgSatnIvsRatio_Uls_T_f32 = VltgSatnIvsRatio_Uls_T_f32* VltgSatnIvsRatio_Uls_T_f32;

    if (Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupScagDi_Logl() == TRUE)
    {

           (*Rte_Pim_AntiWdupCmdScaQax()) = 1.0F;

    }
    else
    {
            (*Rte_Pim_AntiWdupCmdScaQax()) = (VltgSatnIvsRatio_Uls_T_f32 * (1.0F - Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val() )) + (SqrdVltgSatnIvsRatio_Uls_T_f32 * Rte_Prm_MotCurrRegVltgLimrQaxAntiWdupCoeff_Val());
        
    }

    (*Rte_Pim_AntiWdupCmdScaDax()) = (VltgSatnIvsRatio_Uls_T_f32 * (1.0F - Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val())) + (SqrdVltgSatnIvsRatio_Uls_T_f32 * Rte_Prm_MotCurrRegVltgLimrDaxAntiWdupCoeff_Val());

    *Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaDax() = *Rte_Pim_AntiWdupCmdScaDax();
	*Rte_Pim_dMotCurrRegVltgLimrAntiWdupCmdScaQax() = *Rte_Pim_AntiWdupCmdScaQax();
	
    MOTCTRLMGR_MotCtrlMotCurrQaxCmdFinal = Lim_f32(MotCurrQaxCmdFinal_Ampr_T_f32, MOTCURRLOLIM_AMPR_F32, MOTCURRHILIM_AMPR_F32);
    MOTCTRLMGR_MotCtrlMotModlnIdx        = Lim_f32(ModIdx_Uls_T_f32, MODIDXLOLIM_VOLT_F32, MODIDXHILIM_VOLT_F32);
    MOTCTRLMGR_MotCtrlMotPhaAdv          = PhsAdvFinal_Rev_T_u0p16;
    
	MOTCTRLMGR_MotCtrlMotVltgDax         = Lim_f32(MotVltgDax_Volt_T_f32, MOTVLTGDQAXLOLIM_VOLT_F32, MOTVLTGDQAXHILIM_VOLT_F32);
	*Rte_Pim_MotCtrlMotVltgDaxPrev() = MOTCTRLMGR_MotCtrlMotVltgDax;
	
    MOTCTRLMGR_MotCtrlMotVltgQax         = Lim_f32(MotVltgQax_Volt_T_f32, MOTVLTGDQAXLOLIM_VOLT_F32, MOTVLTGDQAXHILIM_VOLT_F32);
	*Rte_Pim_MotCtrlMotVltgQaxPrev() = MOTCTRLMGR_MotCtrlMotVltgQax;
}

/*****************************************************************************************************************
  * Name         :  KpKiCtrl
  * Description  :  This function calculates the motor voltage proportional command and the motor voltage integral
  *                 command for Qax or Dax.
  * Input        :  MotPropGain_Ohm_T_f32
  *                 MotIntglGain_Ohm_T_f32
  *                 SysSt_Cnt_T_enum
  *                 CmdErr_Ampr_T_f32
  *                 *MotVltgIntglCmdPrev_Volt_T_f32
  *                 *MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32
  *                 *MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32
  *                 MotVltgIntglLoLim_Volt_T_f32
  *                 MotVltgIntglHiLim_Volt_T_f32
  * Output       :  *MotVltgPropCmd_Volt_T_f32
  *                 *MotVltgIntglCmd_Volt_T_f32
  * Usage Notes  :  None
  ****************************************************************************************************************/
static FUNC(void, MotCurrRegVltgLimr_CODE)  KpKiCtrl(float32 MotPropGain_Ohm_T_f32, float32 MotIntglGain_Ohm_T_f32,
                                                        SysSt1 SysSt_Cnt_T_enum, float32 CmdErr_Ampr_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmdPrev_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32,
                                                        float32 MotVltgIntglLoLim_Volt_T_f32, float32 MotVltgIntglHiLim_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgPropCmd_Volt_T_f32,
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotVltgIntglCmd_Volt_T_f32)
{
    VAR(float32, AUTOMATIC) MotVltgIntglPreLim_Volt_T_f32;
    
    *MotVltgPropCmd_Volt_T_f32 = CmdErr_Ampr_T_f32 * MotPropGain_Ohm_T_f32;
    *MotCurrRegVltgLimrMotVltgPropCmd_Volt_T_f32 = *MotVltgPropCmd_Volt_T_f32;
    
    MotVltgIntglPreLim_Volt_T_f32 = CmdErr_Ampr_T_f32 * MotIntglGain_Ohm_T_f32;
    
    if (SysSt_Cnt_T_enum == SYSST_ENA)
    {
        MotVltgIntglPreLim_Volt_T_f32 += *MotVltgIntglCmdPrev_Volt_T_f32;
    }
    else
    {
        /* MotVltgIntglPreLim_Volt_T_f32 += 0 so MotVltgIntglPreLim_Volt_T_f32 doesn't change */
    }
    
    *MotCurrRegVltgLimrMotVltgIntglPreLim_Volt_T_f32 = MotVltgIntglPreLim_Volt_T_f32;
    
    *MotVltgIntglCmd_Volt_T_f32 = Max_f32(Min_f32(MotVltgIntglPreLim_Volt_T_f32, MotVltgIntglHiLim_Volt_T_f32), 
                                            MotVltgIntglLoLim_Volt_T_f32);
                                            
    *MotVltgIntglCmd_Volt_T_f32 = Lim_f32(*MotVltgIntglCmd_Volt_T_f32,
                                            -BRDGVLTGHILIM_VOLT_F32,
                                            BRDGVLTGHILIM_VOLT_F32);
                                            
    *MotVltgIntglCmdPrev_Volt_T_f32 = *MotVltgIntglCmd_Volt_T_f32;
}

/*****************************************************************************************************************
  * Name         :  ErrorCalcQax
  * Description  :  This function calculates Qax command error.
  * Input        :  QaxCurrCmd_Ampr_T_f32
  *                 QaxRplCmd_Ampr_T_f32
  *                 QaxCoggCmd_Ampr_T_f32
  *                 QaxCurrModif_Ampr_T_f32
  * Output       :  *QaxCmdFinal_Ampr_T_f32
  *                 CmdErrQax_Ampr_T_f32
  * Usage Notes  :  None
  ****************************************************************************************************************/
static FUNC(float32, MotCurrRegVltgLimr_CODE) ErrorCalcQax(float32 QaxCurrCmd_Ampr_T_f32,
                                                            float32 QaxRplCmd_Ampr_T_f32,
                                                            float32 QaxCoggCmd_Ampr_T_f32,
                                                            float32 QaxCurrModif_Ampr_T_f32,
                                                            float32 AntiWdupCmdSca_Uls_T_f32,
                                                            P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) QaxCmdFinal_Ampr_T_f32)
{
    VAR(float32, AUTOMATIC) CmdScaQax_Ampr_T_f32;
    VAR(float32, AUTOMATIC) CmdErrQax_Ampr_T_f32;
    
    *QaxCmdFinal_Ampr_T_f32 = QaxCurrCmd_Ampr_T_f32 - QaxCoggCmd_Ampr_T_f32 - QaxRplCmd_Ampr_T_f32;
    
    if (Rte_Prm_MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna_Logl() != FALSE)
    {
        CmdScaQax_Ampr_T_f32 = *QaxCmdFinal_Ampr_T_f32 * AntiWdupCmdSca_Uls_T_f32;
    }
    else
    {
        CmdScaQax_Ampr_T_f32 = (AntiWdupCmdSca_Uls_T_f32 * QaxCurrCmd_Ampr_T_f32) - QaxCoggCmd_Ampr_T_f32 - QaxRplCmd_Ampr_T_f32;
    }
    
    CmdScaQax_Ampr_T_f32 = Lim_f32(CmdScaQax_Ampr_T_f32, MOTCURRLOLIM_AMPR_F32, MOTCURRHILIM_AMPR_F32);
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdScaQax() = CmdScaQax_Ampr_T_f32;
    
    CmdErrQax_Ampr_T_f32 = CmdScaQax_Ampr_T_f32 - QaxCurrModif_Ampr_T_f32;
    *Rte_Pim_dMotCurrRegVltgLimrMotCurrCmdErrQax() = CmdErrQax_Ampr_T_f32;
    
    return CmdErrQax_Ampr_T_f32;
}

/*****************************************************************************************************************
  * Name         :  LoaScaFac
  * Description  :  This function calculates the current LOA scale factor and the inverter LOA scale factor.
  * Input        :  CurrLoaMtgtnEn_Cnt_T_logl
  *                 IvtrLoaMtgtnEn_Cnt_T_logl
  *					MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl
  *                 FetLoaMtgtnEna_Cnt_T_logl
  * Output       :  *CurrLoaScaFac_Uls_T_f32
  *                 *IvtrLoaScaFac_Uls_T_f32
  *					*DualEcuScaFac_Uls_T_f32
                    *FetScaFac_Uls_T_f32
  * Usage Notes  :  None
  ****************************************************************************************************************/
static FUNC(void, MotCurrRegVltgLimr_CODE) LoaScaFac(boolean CurrLoaMtgtnEn_Cnt_T_logl, 
                                                        boolean IvtrLoaMtgtnEn_Cnt_T_logl,
														boolean MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl,
                                                        boolean FetLoaMtgtnEna_Cnt_T_logl,														
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) CurrLoaScaFac_Uls_T_f32, 
                                                        P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) IvtrLoaScaFac_Uls_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) DualEcuScaFac_Uls_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) FetScaFac_Uls_T_f32)
{
    if (CurrLoaMtgtnEn_Cnt_T_logl != FALSE)
    {
        *CurrLoaScaFac_Uls_T_f32 = Lim_f32 (0.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * (-Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val())) + *Rte_Pim_CurrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val()) + *Rte_Pim_CurrLoaScarPrev());
    }
    else
    {
        *CurrLoaScaFac_Uls_T_f32 = Lim_f32 (1.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * (-Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val())) + *Rte_Pim_CurrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrCurrLoaScarSlewRate_Val()) + *Rte_Pim_CurrLoaScarPrev());
    }
    
    *Rte_Pim_CurrLoaScarPrev() =  *CurrLoaScaFac_Uls_T_f32;
    
    if (IvtrLoaMtgtnEn_Cnt_T_logl != FALSE)
    {
        *IvtrLoaScaFac_Uls_T_f32 = Lim_f32 (0.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev());
    }
    else
    {
        *IvtrLoaScaFac_Uls_T_f32 = Lim_f32 (1.0F, 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev(), 
                                            (ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrIvtrLoaScarSlewRate_Val()) + *Rte_Pim_IvtrLoaScarPrev());
    }
    
    *Rte_Pim_IvtrLoaScarPrev() =  *IvtrLoaScaFac_Uls_T_f32;
	
	if (MotCtrlDualEcuMotCtrlMtgtnEna_Cnt_T_logl != FALSE)
	{
		*DualEcuScaFac_Uls_T_f32 = Lim_f32 (0.0F,
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev(),
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev());
	}
	else
	{
		*DualEcuScaFac_Uls_T_f32 = Lim_f32 (1.0F,
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev(),
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrDualEcuLoaScarSlewRate_Val()) + *Rte_Pim_DualEcuLoaScarPrev());
	}
	
	*Rte_Pim_DualEcuLoaScarPrev() = *DualEcuScaFac_Uls_T_f32;
	
	if (FetLoaMtgtnEna_Cnt_T_logl != FALSE)
	{
		*FetScaFac_Uls_T_f32 = Lim_f32 (0.0F,
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrFETLoaScarSlewRate_Val()) + *Rte_Pim_FETLoaScarPrev(),
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrFETLoaScarSlewRate_Val()) + *Rte_Pim_FETLoaScarPrev());
	}
	else
	{
		*FetScaFac_Uls_T_f32 = Lim_f32 (1.0F,
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * -Rte_Prm_MotCurrRegVltgLimrFETLoaScarSlewRate_Val()) + *Rte_Pim_FETLoaScarPrev(),
											(ELECGLBPRM_PWMPERDNOMX2_SEC_F32 * Rte_Prm_MotCurrRegVltgLimrFETLoaScarSlewRate_Val()) + *Rte_Pim_FETLoaScarPrev());
	}
	
	*Rte_Pim_FETLoaScarPrev() = *FetScaFac_Uls_T_f32;
}

/*****************************************************************************************************************
  * Name         :  MotCurr_Pred
  * Description  :  Implementation of 'MotCurr_Pred' Block
  * Input        :  MotInduQaxEstimdIvs_IvsHenry_T_f32
					MotREstimd_Ohm_T_f32
					CurrQax_Ampr_T_f32
					MotVltgQaxPrev_Volt_T_f32
					CurrDax_Ampr_T_f32
					MotVltgDaxPrev_Volt_T_f32
					MotBackEmfVltg_Volt_T_f32
					ReacncQax_Ohm_T_f32
					ReacncDax_Ohm_T_f32
					MotInduDaxEstimdIvs_IvsHenry_T_f32
					MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl
					MotCtrlCurrPredTi_NanoSec_T_f32
  * Output       :  *MotCurrQaxPred_Ampr_T_f32
					*MotCurrDaxPred_Ampr_T_f32
  * Usage Notes  :  None
 *****************************************************************************************************************/
static FUNC(void, MotCurrRegVltgLimr_CODE) MotCurr_Pred(float32 MotInduQaxEstimdIvs_IvsHenry_T_f32,
														float32 MotREstimd_Ohm_T_f32,
														float32 CurrQax_Ampr_T_f32,
														float32 MotVltgQaxPrev_Volt_T_f32,
														float32 CurrDax_Ampr_T_f32,
														float32 MotVltgDaxPrev_Volt_T_f32,
														float32 MotBackEmfVltg_Volt_T_f32,
														float32 ReacncQax_Ohm_T_f32,
														float32 ReacncDax_Ohm_T_f32,
														float32 MotInduDaxEstimdIvs_IvsHenry_T_f32,
														boolean MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl,
														float32 MotCtrlCurrPredTi_NanoSec_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrQaxPred_Ampr_T_f32,
														P2VAR(float32, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) MotCurrDaxPred_Ampr_T_f32)
{
	VAR(float32, AUTOMATIC) QaxVltg_Volt_T_f32;
	VAR(float32, AUTOMATIC) VltgQaxTmp_Volt_T_f32;
	VAR(float32, AUTOMATIC) VltgDaxTmp_Volt_T_f32;
	
	if (MotCurrRegVltgLimrMotCurrPredEna_Cnt_T_Logl == TRUE)
	{
		QaxVltg_Volt_T_f32 = ((MotVltgQaxPrev_Volt_T_f32 - MotBackEmfVltg_Volt_T_f32) * ARCHGLBPRM_2OVERSQRT3_ULS_F32);
		
		VltgQaxTmp_Volt_T_f32 =  QaxVltg_Volt_T_f32 + ((ReacncDax_Ohm_T_f32 * CurrDax_Ampr_T_f32) - (CurrQax_Ampr_T_f32 * MotREstimd_Ohm_T_f32));
		VltgDaxTmp_Volt_T_f32 = (MotVltgDaxPrev_Volt_T_f32 * ARCHGLBPRM_2OVERSQRT3_ULS_F32) - (ReacncQax_Ohm_T_f32 * CurrQax_Ampr_T_f32) - (CurrDax_Ampr_T_f32 * MotREstimd_Ohm_T_f32);
		
		*MotCurrQaxPred_Ampr_T_f32 = CurrQax_Ampr_T_f32 + (VltgQaxTmp_Volt_T_f32 * MotInduQaxEstimdIvs_IvsHenry_T_f32 * MotCtrlCurrPredTi_NanoSec_T_f32);
		*MotCurrQaxPred_Ampr_T_f32 = Lim_f32(*MotCurrQaxPred_Ampr_T_f32, MOTCURRPREDLOLIM_ULS_F32, MOTCURRPREDHILIM_ULS_F32);
		*MotCurrDaxPred_Ampr_T_f32 = CurrDax_Ampr_T_f32 + (VltgDaxTmp_Volt_T_f32 * MotInduDaxEstimdIvs_IvsHenry_T_f32 * MotCtrlCurrPredTi_NanoSec_T_f32); 
		*MotCurrDaxPred_Ampr_T_f32 = Lim_f32(*MotCurrDaxPred_Ampr_T_f32, MOTCURRPREDLOLIM_ULS_F32, MOTCURRPREDHILIM_ULS_F32);
	}
	 
	
	else
	{
		*MotCurrQaxPred_Ampr_T_f32 = CurrQax_Ampr_T_f32;
		*MotCurrDaxPred_Ampr_T_f32 = CurrDax_Ampr_T_f32;
	}
}
/*****************************************************************************************************************
  * Name         :  Decoder
  * Description  :  Implementation of 'Decoder' Block
  * Input        :  MotAndThermProtnLoaMod_Cnt_T_u08
  * Output       :  *CurrMeasLoaMtgtnEna_Cnt_T_logl
					*IvtrLoaMtgtnEna_Cnt_T_logl
					*FetLoaMtgtnEna_Cnt_T_logl
  * Usage Notes  :  None
 *****************************************************************************************************************/
static FUNC(void, MotCurrRegVltgLimr_CODE) Decoder(VAR(uint8,AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08,
                                                   P2VAR(boolean, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) CurrMeasLoaMtgtnEna_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) IvtrLoaMtgtnEna_Cnt_T_logl,
												   P2VAR(boolean, AUTOMATIC, MotCurrRegVltgLimr_APPL_VAR) FetLoaMtgtnEna_Cnt_T_logl)
												   
{
/*** Start of Decoder ***/
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
	/*** End of Decoder ***/
}

#define CDD_MotCurrRegVltgLimr_MotCtrl_STOP_SEC_CODE
#include "CDD_MotCurrRegVltgLimr_MotCtrl_MemMap.h"                                                                  

