/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Adc0CfgAndUse_MotCtrl.c
 * Module Description: Motor Control Loop runnable(s) for ADC diagnostic start and end pointer update.
 * Project           : CBD
 * Author            : Mateusz Bartocha
 **********************************************************************************************************************
 * Version Control:
 * %version:          2 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/02/17  1        MB        Implemented Adcf0CfgAndUsePer1                                                EA4#10924
 * 08/16/17  2        KByrski   Comments update                                                               EA4#14547
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Rte_CDD_Adcf0CfgAndUse.h"
#include "CDD_Adcf0CfgAndUse.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "ADCF0_RegDefns.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define CDD_Adcf0CfgAndUse_MotCtrl_START_SEC_CODE
#include "CDD_Adcf0CfgAndUse_MotCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Name:        Adcf0CfgAndUsePer1
 * Description: Adcf0CfgAndUse component periodic processing of start and end pointer
 * Inputs:      MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp
 *              MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp
 *              ADCF0SGSR1
 * Outputs:     ADCF0SGVCSP1
 *              ADCF0SGVCEP1
 * Usage Notes: Called by Motor control ISR (Call rate 2 * MtrCtrlISR)
 *********************************************************************************************************************/
FUNC (void, CDD_Adc0CfgAndUse_CODE) Adcf0CfgAndUsePer1 (void)
{
    if ((MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp != *Rte_Pim_Adcf0DiagcStrtPtr()) ||
        (MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp != *Rte_Pim_Adcf0DiagcEndPtr()))
    {
        /* validity */

        if ((MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp >= ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMIN_CNT_U08) &&
            (MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp <= ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08) &&
            (MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp >= ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMIN_CNT_U08) &&
            (MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp <= ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08) &&
            (MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp <= MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp) &&
            (ADCF0SGSR1 == 0U))
        {
            /* Update Scan Group 1 Start and End Pointer */
            ADCF0SGVCSP1 = MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp;
            ADCF0SGVCEP1 = MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp;

            /* Update the previous value data store with the current value fo the start and end pointer */
            *Rte_Pim_Adcf0DiagcStrtPtr() = MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp;
            *Rte_Pim_Adcf0DiagcEndPtr() = MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp;
        }
    }
}

#define CDD_Adcf0CfgAndUse_MotCtrl_STOP_SEC_CODE
#include "CDD_Adcf0CfgAndUse_MotCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
