/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotVelCtrl.c
 *     SW-C Type:  MotVelCtrl
 *  Generated at:  Wed May  4 09:02:18 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotVelCtrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotVelCtrl.c
* Module Description: Implementation of Motor Velocity Control FDD NM100A
* Project           : CBD 
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 3 %
* %derived_by       : mzjphh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 2/11/16  1        SV        Initial Version                                                                  EA4#2606 
* 5/04/16  2        NS        Changed input name and changed static limit to rate limit                        EA4#5556 
* 7/08/16  3        NS        Added saturation blocks for derivative and anti wind-up commands                 EA4#6423                                  
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_MotVelCtrl.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h" 
#include "ArchGlbPrm.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define DERIVTVLPFILTICONLOWRLIM_SEC_F32		0.00063662F
#define FALSE_CNT_LGC							FALSE
#define TRUE_CNT_LGC							TRUE
#define MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32	2.0F
#define ONEMILLISEC_SEC_F32						0.001F
#define TITHDRAMPDWNCMPL_CNT_U16				10000U
#define ZEROELPDTI_CNT_U32						0U
#define ZEROMOTVELTAR_MOTRADPERSEC_F32			0.0F
#define ZEROTQCMD_MOTNWTMTR_F32					0.0F
#define ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32        (-260.0F)
#define ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32        (260.0F)
#define DERIVTVCMDLOWRLIM_MOTNWTMTR_F32         (-100.0F)
#define DERIVTVCMDUPPRLIM_MOTNWTMTR_F32         (100.0F)

#define ONEOVERTWOMPLR_ULS_F32					0.5F

static FUNC(float32, MOTVELCTRL_CODE) FPIDControl(float32 MotVelTarSlewed_MotRadPerSec_T_f32,
												  float32 MotVelCrf_MotRadPerSec_T_f32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MotVelTar(void)
 *   float32 *Rte_Pim_PrevAntiWdupCmd(void)
 *   float32 *Rte_Pim_PrevDerivtvOutp(void)
 *   float32 *Rte_Pim_PrevIntgtrInp(void)
 *   float32 *Rte_Pim_PrevIntgtrOutp(void)
 *   float32 *Rte_Pim_PrevMotVelErr(void)
 *   float32 *Rte_Pim_PrevMotVelTar(void)
 *   float32 *Rte_Pim_VelSlewRate(void)
 *   uint32 *Rte_Pim_RefTiRampDwn(void)
 *   boolean *Rte_Pim_EnaCtrl(void)
 *   boolean *Rte_Pim_EnaCtrlStVari(void)
 *   boolean *Rte_Pim_FctActvSts(void)
 *   boolean *Rte_Pim_RampDwnCmpl(void)
 *
 *********************************************************************************************************************/


#define MotVelCtrl_START_SEC_CODE
#include "MotVelCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetCtrlPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetCtrlPrm>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupLim(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_DerivtvGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_DerivtvLpFilTiCon(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_IntgtrGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_PropGain(void)
 *   float32 Rte_IrvRead_GetCtrlPrm_Oper_TqCmdLim(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetCtrlPrm_Oper(float32 *MotVelCtrlPropGain_Arg, float32 *MotVelCtrlIntgtrGain_Arg, float32 *MotVelCtrlDerivtvGain_Arg, float32 *MotVelCtrlAntiWdupLim_Arg, float32 *MotVelCtrlAntiWdupGain_Arg, float32 *MotVelCtrlDerivtvLpFilTiCon_Arg, float32 *MotVelCtrlTqCmdLim_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotVelCtrl_CODE) GetCtrlPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlPropGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlIntgtrGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupLim_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlAntiWdupGain_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlDerivtvLpFilTiCon_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTVELCTRL_APPL_VAR) MotVelCtrlTqCmdLim_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetCtrlPrm_Oper
 *********************************************************************************************************************/

	*MotVelCtrlPropGain_Arg = Rte_IrvRead_GetCtrlPrm_Oper_PropGain();
	*MotVelCtrlIntgtrGain_Arg = Rte_IrvRead_GetCtrlPrm_Oper_IntgtrGain();
	*MotVelCtrlDerivtvGain_Arg = Rte_IrvRead_GetCtrlPrm_Oper_DerivtvGain();
	*MotVelCtrlAntiWdupLim_Arg = Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupLim();
	*MotVelCtrlAntiWdupGain_Arg = Rte_IrvRead_GetCtrlPrm_Oper_AntiWdupGain();
	*MotVelCtrlDerivtvLpFilTiCon_Arg = Rte_IrvRead_GetCtrlPrm_Oper_DerivtvLpFilTiCon();
	*MotVelCtrlTqCmdLim_Arg = Rte_IrvRead_GetCtrlPrm_Oper_TqCmdLim();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelCtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, MotVelCtrl_CODE) MotVelCtrlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelCtrlInit1
 *********************************************************************************************************************/
	
	*Rte_Pim_EnaCtrl() =  FALSE_CNT_LGC;
    *Rte_Pim_EnaCtrlStVari() = FALSE_CNT_LGC;
	*Rte_Pim_RampDwnCmpl() = TRUE_CNT_LGC;
	*Rte_Pim_FctActvSts() = FALSE_CNT_LGC;	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelCtrlPer1
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
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotVelCtrlPer1_AntiWdupGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_AntiWdupLim(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_DerivtvGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_DerivtvLpFilTiCon(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_IntgtrGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_PropGain(void)
 *   float32 Rte_IrvRead_MotVelCtrlPer1_TqCmdLim(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetManTqCmd1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, MotVelCtrl_CODE) MotVelCtrlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotVelCtrlPer1
 *********************************************************************************************************************/
	
	VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) MotVelTarSlewed_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) PIDCmdLimid_MotNwtMtr_T_f32;
	VAR(uint32, AUTOMATIC) ElpdTiRampDwn_Cnt_T_u32;
	
	(void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
	
	MotVelTarSlewed_MotRadPerSec_T_f32 = Lim_f32(*Rte_Pim_MotVelTar(),
                                                ((-*Rte_Pim_VelSlewRate() * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevMotVelTar()),
                                                 ((*Rte_Pim_VelSlewRate() * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_PrevMotVelTar()));                  
    *Rte_Pim_PrevMotVelTar() = MotVelTarSlewed_MotRadPerSec_T_f32;
	
	if( *Rte_Pim_EnaCtrl() == TRUE )
	{
		PIDCmdLimid_MotNwtMtr_T_f32 = FPIDControl(MotVelTarSlewed_MotRadPerSec_T_f32,
												  MotVelCrf_MotRadPerSec_T_f32);
												  
		(void) Rte_Call_SetManTqCmd_Oper(PIDCmdLimid_MotNwtMtr_T_f32, TRUE_CNT_LGC);
		
		*Rte_Pim_FctActvSts() = TRUE_CNT_LGC;
		
		*Rte_Pim_EnaCtrlStVari() = *Rte_Pim_EnaCtrl();
	
	}
	else if( *Rte_Pim_EnaCtrlStVari() == TRUE )
	{
		PIDCmdLimid_MotNwtMtr_T_f32 = FPIDControl(MotVelTarSlewed_MotRadPerSec_T_f32,
												  MotVelCrf_MotRadPerSec_T_f32);

        (void) Rte_Call_SetManTqCmd_Oper(PIDCmdLimid_MotNwtMtr_T_f32, TRUE_CNT_LGC);													
		
		*Rte_Pim_RampDwnCmpl() = FALSE_CNT_LGC;
		
		*Rte_Pim_EnaCtrlStVari() = *Rte_Pim_EnaCtrl();
			
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RefTiRampDwn());	
	}
	else if( *Rte_Pim_RampDwnCmpl() == FALSE )
	{
		PIDCmdLimid_MotNwtMtr_T_f32 = FPIDControl(MotVelTarSlewed_MotRadPerSec_T_f32,
												  MotVelCrf_MotRadPerSec_T_f32);
		
		(void) Rte_Call_SetManTqCmd_Oper(PIDCmdLimid_MotNwtMtr_T_f32, TRUE_CNT_LGC);	
		
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_RefTiRampDwn(), &ElpdTiRampDwn_Cnt_T_u32);
		
		if((Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32 - MotVelTarSlewed_MotRadPerSec_T_f32) <= MOTVELTHDRAMPDWNCMPL_MOTRADPERSEC_F32) ||
		   (ElpdTiRampDwn_Cnt_T_u32 > TITHDRAMPDWNCMPL_CNT_U16))
		   {
				*Rte_Pim_RampDwnCmpl() = TRUE_CNT_LGC;
		   }		
	}
	else if( *Rte_Pim_FctActvSts() == TRUE )
	{
		(void) Rte_Call_SetManTqCmd_Oper(ZEROTQCMD_MOTNWTMTR_F32, FALSE_CNT_LGC);
		
		*Rte_Pim_FctActvSts() = FALSE_CNT_LGC;
		*Rte_Pim_PrevIntgtrInp() = 0.0F;
		*Rte_Pim_PrevIntgtrOutp() = 0.0F;
		*Rte_Pim_PrevDerivtvOutp() = 0.0F;
		*Rte_Pim_PrevMotVelErr() = 0.0F;
		*Rte_Pim_PrevAntiWdupCmd() = 0.0F;
	}
	else
	{	
	}
		
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetCtrlPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetCtrlPrm>
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupLim(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvLpFilTiCon(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_IntgtrGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_PropGain(float32 data)
 *   void Rte_IrvWrite_SetCtrlPrm_Oper_TqCmdLim(float32 data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotVelCtrl_CODE) SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetCtrlPrm_Oper
 *********************************************************************************************************************/

	Rte_IrvWrite_SetCtrlPrm_Oper_PropGain(MotVelCtrlPropGain_Arg);
	Rte_IrvWrite_SetCtrlPrm_Oper_IntgtrGain(MotVelCtrlIntgtrGain_Arg);
	Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvGain(MotVelCtrlDerivtvGain_Arg);
	Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupGain(MotVelCtrlAntiWdupGain_Arg);
	Rte_IrvWrite_SetCtrlPrm_Oper_AntiWdupLim(MotVelCtrlAntiWdupLim_Arg);
	Rte_IrvWrite_SetCtrlPrm_Oper_DerivtvLpFilTiCon(Max_f32(MotVelCtrlDerivtvLpFilTiCon_Arg,DERIVTVLPFILTICONLOWRLIM_SEC_F32));
	Rte_IrvWrite_SetCtrlPrm_Oper_TqCmdLim(MotVelCtrlTqCmdLim_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StopCtrl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StopCtrl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotVelCtrl_CODE) StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StopCtrl_Oper
 *********************************************************************************************************************/
	
	*Rte_Pim_MotVelTar() = ZEROMOTVELTAR_MOTRADPERSEC_F32;
	*Rte_Pim_VelSlewRate() = MotVelCtrlVelSlewRate_Arg;
	*Rte_Pim_EnaCtrl() = FALSE_CNT_LGC;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: StrtCtrl_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <StrtCtrl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotVelCtrl_CODE) StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: StrtCtrl_Oper
 *********************************************************************************************************************/
	
	*Rte_Pim_MotVelTar() = MotVelCtrlMotVelTar_Arg;
	*Rte_Pim_VelSlewRate() = MotVelCtrlVelSlewRate_Arg;
	*Rte_Pim_EnaCtrl() = TRUE_CNT_LGC;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotVelCtrl_STOP_SEC_CODE
#include "MotVelCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*******************************************************************************
* Name          :   FPIDControl
* Description   :   "F_PID Control_X" block implementation.                 
* Inputs        :   MotVelTarSlewed_MotRadPerSec_T_f32,MotVelCrf_MotRadPerSec_T_f32,                  
* Outputs       :   PIDCmdLimid_MotNwtMtr_T_f32
* Usage Notes   :   None
*****************************************************************************/
static FUNC(float32, MOTVELCTRL_CODE) FPIDControl(float32 MotVelTarSlewed_MotRadPerSec_T_f32,
												  float32 MotVelCrf_MotRadPerSec_T_f32)
{
	VAR(float32, AUTOMATIC) MotVelErr_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) PropCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) IntgtrInp_MotNwtMtrPerSec_T_f32;
	VAR(float32, AUTOMATIC) IntgtrCmdPreLim_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) IntgtrCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) DerivtvInp1_MotNwtMtrSec_T_f32;
	VAR(float32, AUTOMATIC) DerivtvInp2_MotNwtMtrSec_T_f32;
	VAR(float32, AUTOMATIC) DerivtvCmd_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) PIDCmdLimid_MotNwtMtr_T_f32; 
    VAR(float32, AUTOMATIC) AntiWdupCmd_MotNwtMtr_T_f32;
		
	MotVelErr_MotRadPerSec_T_f32 = MotVelTarSlewed_MotRadPerSec_T_f32 - MotVelCrf_MotRadPerSec_T_f32;
	
	/* PropCmd */
	PropCmd_MotNwtMtr_T_f32 = MotVelErr_MotRadPerSec_T_f32 * Rte_IrvRead_MotVelCtrlPer1_PropGain();
	
	/* IntgtrCmd */
	IntgtrInp_MotNwtMtrPerSec_T_f32 = (MotVelErr_MotRadPerSec_T_f32 * Rte_IrvRead_MotVelCtrlPer1_IntgtrGain()) + 
									  *Rte_Pim_PrevAntiWdupCmd();
										 
	IntgtrCmdPreLim_MotNwtMtr_T_f32 = ((IntgtrInp_MotNwtMtrPerSec_T_f32 + *Rte_Pim_PrevIntgtrInp()) *									      
									    ONEOVERTWOMPLR_ULS_F32 * 
									    ARCHGLBPRM_2MILLISEC_SEC_F32) +   
									    *Rte_Pim_PrevIntgtrOutp();
	
	IntgtrCmd_MotNwtMtr_T_f32 = Lim_f32(IntgtrCmdPreLim_MotNwtMtr_T_f32, -Rte_IrvRead_MotVelCtrlPer1_AntiWdupLim(), Rte_IrvRead_MotVelCtrlPer1_AntiWdupLim());
	
	*Rte_Pim_PrevIntgtrInp() = IntgtrInp_MotNwtMtrPerSec_T_f32;
    
    AntiWdupCmd_MotNwtMtr_T_f32 = (IntgtrCmd_MotNwtMtr_T_f32 - IntgtrCmdPreLim_MotNwtMtr_T_f32) * Rte_IrvRead_MotVelCtrlPer1_AntiWdupGain();
    
    AntiWdupCmd_MotNwtMtr_T_f32 = Lim_f32(AntiWdupCmd_MotNwtMtr_T_f32, ANTIWDUPCMDLOWRLIM_MOTNWTMTR_F32, ANTIWDUPCMDUPPRLIM_MOTNWTMTR_F32);
    
	*Rte_Pim_PrevAntiWdupCmd() = AntiWdupCmd_MotNwtMtr_T_f32;
	*Rte_Pim_PrevIntgtrOutp() = IntgtrCmd_MotNwtMtr_T_f32;
	
	/* DerivtvCmd */
	DerivtvInp1_MotNwtMtrSec_T_f32 = Rte_IrvRead_MotVelCtrlPer1_DerivtvGain() *
	                                 (MotVelErr_MotRadPerSec_T_f32 - *Rte_Pim_PrevMotVelErr());
	
	DerivtvInp2_MotNwtMtrSec_T_f32 = *Rte_Pim_PrevDerivtvOutp() *
									 (ONEMILLISEC_SEC_F32 - Rte_IrvRead_MotVelCtrlPer1_DerivtvLpFilTiCon());
	
	DerivtvCmd_MotNwtMtr_T_f32 = (DerivtvInp1_MotNwtMtrSec_T_f32 - DerivtvInp2_MotNwtMtrSec_T_f32) /
	                             (ONEMILLISEC_SEC_F32 + Rte_IrvRead_MotVelCtrlPer1_DerivtvLpFilTiCon());
                                 
    DerivtvCmd_MotNwtMtr_T_f32 = Lim_f32(DerivtvCmd_MotNwtMtr_T_f32, DERIVTVCMDLOWRLIM_MOTNWTMTR_F32, DERIVTVCMDUPPRLIM_MOTNWTMTR_F32);
	
	*Rte_Pim_PrevDerivtvOutp() = DerivtvCmd_MotNwtMtr_T_f32;

	*Rte_Pim_PrevMotVelErr() = MotVelErr_MotRadPerSec_T_f32;
	
	/* PIDCmd */
	PIDCmdLimid_MotNwtMtr_T_f32 = Lim_f32((PropCmd_MotNwtMtr_T_f32 +
	                                      IntgtrCmd_MotNwtMtr_T_f32 +
										  DerivtvCmd_MotNwtMtr_T_f32),
	                                      -Rte_IrvRead_MotVelCtrlPer1_TqCmdLim(),
										  Rte_IrvRead_MotVelCtrlPer1_TqCmdLim());
	
	return PIDCmdLimid_MotNwtMtr_T_f32;
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
