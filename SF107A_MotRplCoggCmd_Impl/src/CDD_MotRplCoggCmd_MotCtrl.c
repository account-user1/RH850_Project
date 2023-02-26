/**********************************************************************************************************************
* Copyright 2016,2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotRplCoggCmd_MotCtrl.c
* Module Description: Implementation of Motor Ripple Cogging Command Complex Driver
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/10/16  1        Selva       Initial Version                                                               EA4#3002
* 02/15/16  2        Selva       A3861(Converting negative to unsigned issue  fixed)                           EA4#3862
* 05/12/16  3        KK          Updated as per FDD v1.3.0 			 										   EA4#5727
* 07/12/16  4        KK          Fix for EA4#6102 & EA4#6252		 										   EA4#6352
* 03/23/17  5        AJM         Change ONEOVER2PI constant to use the one from ARCHGLBPRM                     EA4#10664
**********************************************************************************************************************/


/************************************MISRA deviations*********************************************************************/
/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.2]: Inline functions are used for functions called from Motor Control ISR to allow for throughput optimization */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


 /**********************************************************************************************************************
 *                     << Start of include and declaration area >>        
 *********************************************************************************************************************/

#include "Rte_CDD_MotRplCoggCmd.h"
#include "CDD_MotRplCoggCmd.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"

/********************************************* Embedded Local Constants **********************************************/
#define  COGGIDXCON_CNT_U16                512U
#define  ITRNIDXCON_CNT_U08                128U
#define  MOTCOGGCMDHILIM_MOTNWTMTR_F32     0.1F
#define  MOTCOGGCMDLOLIM_MOTNWTMTR_F32     ( -0.1F)
#define  MOTCURRCOGGCMDHILIM_AMPR_F32      6.0F
#define  MOTCURRCOGGCMDLOLIM_AMPR_F32      (-6.0F)
#define  MOTRPLCMDHILIM_AMPR_F32           29.0F
#define  MOTRPLCMDLOLIM_AMPR_F32           (-29.0F)
#define  ONEOVER12_MOTREV_F32               0.0833333F

/******************************************** Local Function Prototypes **********************************************/


                                                               
/**********************************************************************************************************************
 *                           << End of include and declaration area >>         
 *********************************************************************************************************************/



#define CDD_MotRplCoggCmd_MotCtrl_START_SEC_CODE
#include "CDD_MotRplCoggCmd_MotCtrl_MemMap.h" 

 /*****************************************************************************
  * Name:   MotRplCoggCmdPer1
  * Description: Created for  Motor Ripple Cogging Command Complex Drive
  * Inputs:      None
  * Outputs:     None
  * Usage notes: Called by Motor control ISR (Call rate 2*MotCtrlISR)
*****************************************************************************/ 
FUNC(void, CDD_MotRplCoggCmd_CODE) MotRplCoggCmdPer1(void)
{
	VAR(float32, AUTOMATIC) MotCtrlMotTqRplCoggOrder2Mag_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotTqRplCoggOrder1Mag_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotCtrlMotTqRplCoggOrder3Mag_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) CorrMotPosElec_Rad_T_f32;
	VAR(uint16, AUTOMATIC) CogginTrqCancIndex_T_Cnt_u16;
	VAR(float32, AUTOMATIC) CoggingTrqCanc_MotNwtMtr_T_f32;
	VAR(sint16, AUTOMATIC) CoggingTrqCanc_MotNwtMtr_T_s1p14;
	VAR(float32, AUTOMATIC) CogginIqRef_Amp_T_f32;

	VAR(float32,AUTOMATIC) MotPosComputDelay_Rad_T_f32;
	VAR(uint16, AUTOMATIC) PosDelayCorrMotPosElec_Rev_T_u0p16;
	VAR(float32,AUTOMATIC) 	MotTqCoggOrder2Ph_Rad_T_f32;
	VAR(float32,AUTOMATIC) 	MotTqCoggOrder1Ph_Rad_T_f32;
	VAR(float32,AUTOMATIC) 	MotTqCoggOrder3Ph_Rad_T_f32;
	VAR(float32,AUTOMATIC) 	MotTqCoggOrder1Ag_Rad_T_f32;
	VAR(float32,AUTOMATIC) 	MotTqCoggOrder2Ag_Rad_T_f32;
	VAR(sint8,AUTOMATIC) 	MotElecPol_Cnt_T_s08;
	VAR(uint16, AUTOMATIC) 	MotPosElec_Rev_T_u0p16;
	VAR(float32,AUTOMATIC) 	MotTqCoggOrder3Ag_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTrqRpl_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) QaxToMotTqGain_VpRadpS_T_f32;
	VAR(float32, AUTOMATIC) PosDelayCorrMotPosElec_Rev_T_f32;
	VAR(float32, AUTOMATIC) MotCurrQaxRpl_Amp_T_f32;
	
	/*** read the inputs ***/
	MotElecPol_Cnt_T_s08 = MOTCTRLMGR_MotCtrlMotElecMeclPolarity;    /* REQ: SF107A #46 I */
	MotPosElec_Rev_T_u0p16= MOTCTRLMGR_MotCtrlMotAgElec;                /* REQ: SF107A #43 I */   
	MotPosComputDelay_Rad_T_f32= MOTCTRLMGR_MotCtrlMotAgElecDlyRpl;   /* REQ: SF107A #45 I */
	MotCtrlMotTqRplCoggOrder1Mag_MotNwtMtr_T_f32 = MOTCTRLMGR_MotCtrlMotTqRplCoggOrder1Mgn ;    /* REQ: SF107A #27 I */
	MotCtrlMotTqRplCoggOrder2Mag_MotNwtMtr_T_f32=  MOTCTRLMGR_MotCtrlMotTqRplCoggOrder2Mgn;    /* REQ: SF107A #39 I */
	MotTqCoggOrder1Ph_Rad_T_f32  = MOTCTRLMGR_MotCtrlMotTqRplCoggOrder1Pha;   /* REQ: SF107A #38 I */
	MotTqCoggOrder2Ph_Rad_T_f32 = MOTCTRLMGR_MotCtrlMotTqRplCoggOrder2Pha;   /* REQ: SF107A #40 I */
	MotCtrlMotTqRplCoggOrder3Mag_MotNwtMtr_T_f32= MOTCTRLMGR_MotCtrlMotTqRplCoggOrder3Mgn;   /* REQ: SF107A #41 I */
	MotTqCoggOrder3Ph_Rad_T_f32  = MOTCTRLMGR_MotCtrlMotTqRplCoggOrder3Pha;   /* REQ: SF107A #42 I */
	QaxToMotTqGain_VpRadpS_T_f32 = MOTCTRLMGR_MotCtrlMotCurrQaxToMotTqGain ;   /* REQ: SF107A #44 I */

	MOTCTRLMGR_MotCtrlMotCurrQaxRplCmd  = 0.0F;
	MOTCTRLMGR_MotCtrlMotCurrQaxCoggCmd = 0.0F;		

	/***********MotAgElecDly Wrapping********/
	/***Cogging torque***/
	/* REQ: SF107A #51 I */
	
	PosDelayCorrMotPosElec_Rev_T_f32 = MotPosComputDelay_Rad_T_f32*ARCHGLBPRM_ONEOVER2PI_ULS_F32;
	/* ENDREQ: SF107A #51 I */
	/*****************MotElecMeclPolarity Compensating***************/
	if(MotElecPol_Cnt_T_s08 == 1)
	{
		PosDelayCorrMotPosElec_Rev_T_f32= PosDelayCorrMotPosElec_Rev_T_f32-ONEOVER12_MOTREV_F32; /* REQ: SF107A #50 I */ /* REQ: SF107A #48 I */
	}
	else
	{
		PosDelayCorrMotPosElec_Rev_T_f32= PosDelayCorrMotPosElec_Rev_T_f32+ONEOVER12_MOTREV_F32;/* REQ: SF107A #50 I *//* REQ: SF107A #48 I */
	}
	
	if (PosDelayCorrMotPosElec_Rev_T_f32 < 0.0F)
	{
		PosDelayCorrMotPosElec_Rev_T_f32 = PosDelayCorrMotPosElec_Rev_T_f32 + 1.0F;
	}
	
	PosDelayCorrMotPosElec_Rev_T_u0p16= (FloatToFixd_u16_f32(PosDelayCorrMotPosElec_Rev_T_f32,NXTRFIXDPT_FLOATTOP16_ULS_F32)) + MotPosElec_Rev_T_u0p16;	/* REQ: SF107A #50 I */	
	
	/******************CoggTq Computation********************/
	/***** Iq Cogging torque Compenastion function   *****/
	CogginTrqCancIndex_T_Cnt_u16=(uint16)((PosDelayCorrMotPosElec_Rev_T_u0p16>>7U) & 0x1FFU);
	CoggingTrqCanc_MotNwtMtr_T_s1p14=(sint16)(Rte_Pim_MotCoggCmdY())[CogginTrqCancIndex_T_Cnt_u16];/* REQ: SF107A #56 I */
	*Rte_Pim_dMotRplCoggCmdCoggIdx() =  CogginTrqCancIndex_T_Cnt_u16;
	
	CoggingTrqCanc_MotNwtMtr_T_f32=FixdToFloat_f32_s16(CoggingTrqCanc_MotNwtMtr_T_s1p14,NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	*Rte_Pim_dMotRplCoggCmdMotCoggCmd()=CoggingTrqCanc_MotNwtMtr_T_f32;
	CoggingTrqCanc_MotNwtMtr_T_f32 = Lim_f32(CoggingTrqCanc_MotNwtMtr_T_f32,MOTCOGGCMDLOLIM_MOTNWTMTR_F32, MOTCOGGCMDHILIM_MOTNWTMTR_F32);
	
	
	CogginIqRef_Amp_T_f32=(CoggingTrqCanc_MotNwtMtr_T_f32/(QaxToMotTqGain_VpRadpS_T_f32));/* REQ: SF107A #59 I */
	*Rte_Pim_dMotRplCoggCmdMotCurrQaxCoggCmdPreLim()= CogginIqRef_Amp_T_f32;
	MOTCTRLMGR_MotCtrlMotCurrQaxCoggCmd = Lim_f32(CogginIqRef_Amp_T_f32,MOTCURRCOGGCMDLOLIM_AMPR_F32, MOTCURRCOGGCMDHILIM_AMPR_F32); /* REQ: SF107A #28 I */
	
	/***** TqRpl Computation *****/
	/* REQ: SF107A #53 I */ /* REQ: SF107A #54 I */ /* REQ: SF107A #57 I */  /* REQ: SF107A #55 I */ 
	CorrMotPosElec_Rad_T_f32= (FixdToFloat_f32_u16(PosDelayCorrMotPosElec_Rev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32)) * ARCHGLBPRM_2PI_ULS_F32;
	MotTqCoggOrder1Ag_Rad_T_f32=MotTqCoggOrder1Ph_Rad_T_f32 + ((float32)Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val()*CorrMotPosElec_Rad_T_f32) ;
	MotTqCoggOrder2Ag_Rad_T_f32=MotTqCoggOrder2Ph_Rad_T_f32 + ((float32)Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val()*CorrMotPosElec_Rad_T_f32);
	MotTqCoggOrder3Ag_Rad_T_f32 = MotTqCoggOrder3Ph_Rad_T_f32 + ((float32)Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val()*CorrMotPosElec_Rad_T_f32);
		

	MotTrqRpl_MotNwtMtr_T_f32=( (MotCtrlMotTqRplCoggOrder1Mag_MotNwtMtr_T_f32 * SinLookup(MotTqCoggOrder1Ag_Rad_T_f32))+
								(MotCtrlMotTqRplCoggOrder2Mag_MotNwtMtr_T_f32 * SinLookup(MotTqCoggOrder2Ag_Rad_T_f32))+
								(MotCtrlMotTqRplCoggOrder3Mag_MotNwtMtr_T_f32 * SinLookup(MotTqCoggOrder3Ag_Rad_T_f32)) );
	/* ENDREQ: SF107A #53 I */ /* ENDREQ: SF107A #54 I */ /* ENDREQ: SF107A #57 I */  /* ENDREQ: SF107A #55 I */ 
		
	/* Updating global variable buffers*/
	MotCurrQaxRpl_Amp_T_f32= (MotTrqRpl_MotNwtMtr_T_f32/QaxToMotTqGain_VpRadpS_T_f32);
	*Rte_Pim_dMotRplCoggCmdMotRplCmdPreLim()= MotCurrQaxRpl_Amp_T_f32;
	MOTCTRLMGR_MotCtrlMotCurrQaxRplCmd = Lim_f32(MotCurrQaxRpl_Amp_T_f32,MOTRPLCMDLOLIM_AMPR_F32, MOTRPLCMDHILIM_AMPR_F32);  /* REQ: SF107A #47 I */
	


}

#define CDD_MotRplCoggCmd_MotCtrl_STOP_SEC_CODE
#include "CDD_MotRplCoggCmd_MotCtrl_MemMap.h" 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
