
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Irq.c
* Module Description: Motor Control Manager Interrupt Definition
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 13.04.2018 17:33:19
***********************************************************************************************************************
* Version Control:
* %version:          15 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 01/21/16  2        LWW       Updated to remove interrupt keyword for change to pragma                        EA4#3428                                                 
**********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "CDD_MotCtrlMgr_Irq.h"
#include "CDD_Adcf0CfgAndUse.h"
#include "CDD_CurrMeasArbn.h"
#include "CDD_CurrMeas.h"
#include "CDD_FordT3T6McuCfg.h"
#include "CDD_MotAgArbn.h"
#include "CDD_MotAgCmp.h"
#include "CDD_MotRplCoggCmd.h"
#include "CDD_MotVel.h"
#include "CDD_McuDiagc.h"
#include "CDD_MotCurrRegVltgLimr.h"
#include "CDD_MotAg5Meas.h"
#include "CDD_MotAg6Meas.h"
#include "CDD_SinVltgGenn.h"
#include "CDD_MotAgSwCal.h"
#include "CDD_GtmCfgAndUse.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

#define CDD_MotCtrlMgr_Irq_START_SEC_CODE
#include "MotCtrlMgr_MemMap.h"

/* Use GreenHills pragma for creating an interrupt service routine.  
   The default is for RH850 EI level exceptions */
#pragma ghs interrupt
FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrIrq(void)
{
	static VAR(uint8, CDD_MotCtrlMgr_VAR_NOINIT) MotCtrlLoopCntr_Cnt_F_u8 = 1U;
	
	FordT3T6McuCfgPer1();
	MotAg6MeasPer2();
	MotAg5MeasPer2();
	MotAgArbnPer1();
	MotAgCmpPer1();
	if( MotCtrlLoopCntr_Cnt_F_u8 == 1U )
	{
		CurrMeasPer2();
		CurrMeasArbnPer1();
		MotRplCoggCmdPer1();
		MotCurrRegVltgLimrPer1();
		McuDiagcPer1();
		Adcf0CfgAndUsePer1();
	}
	SinVltgGennPer1();
	GtmCfgAndUsePer1();
	SinVltgGennPer2();
	MotVelPer1();
	MotAgSwCalPer1();
	MotCtrlLoopCntr_Cnt_F_u8 ^= 1U;
}

#define CDD_MotCtrlMgr_Irq_STOP_SEC_CODE
#include "MotCtrlMgr_MemMap.h"


