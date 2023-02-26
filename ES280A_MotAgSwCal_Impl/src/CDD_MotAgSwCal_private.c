/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgSwCal_private.c
* Module Description: Private source file for shared definitions between RTE and MotCtrl code of MotAgSwCal component
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  ---------- --------------------------------------------------------------------------- ----------
* 08/11/17	1   	 SR			Initial Version							                                    EA4#12616
**********************************************************************************************************************/

#include "CDD_MotAgSwCal_private.h"

/*MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define MotAgSwCal_MotCtrl_START_SEC_CODE
#include "CDD_MotAgSwCal_MotCtrl_MemMap.h"

/*******************************************************************************************
 * Name        : RstFctPrm
 * Description : Resets the parameters used in the Hall sensor Software Calibration process
 * Inputs      : NONE
 * Outputs     : *Rte_Pim_SwCalEna()         - Enable flag for HallSensor Calibration
 *               *Rte_Pim_SwCalCycTi()       - Software Calibration Cycle Time
 *               *Rte_Pim_SwCalStepDir()     - Software Calibration Step Direction
 *               *Rte_Pim_PosnIdx()          - Position Index (in MotRevElec)
 *               *Rte_Pim_SwCalMotModlnIdx() - Software Calibration Motor Modulation Index
 *               *Rte_Pim_SampleIdx()        - Sample Index into MotAgRaw buffers
 * Usage Notes : NONE
 *****************************************************************************************/
FUNC(void, CDD_MotAgSwCal_CODE) RstFctPrm(void)
{
    *Rte_Pim_SwCalEna()         = FALSE;
    *Rte_Pim_SwCalCycTi()       = 0U;
    *Rte_Pim_SwCalStepDir()     = SWCALDIRFWD_CNT_U08;
    *Rte_Pim_PosnIdx()          = 0U;
    *Rte_Pim_SwCalMotModlnIdx() = 0.0F;
    *Rte_Pim_SampleIdx()        = 0U;
}

#define MotAgSwCal_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAgSwCal_MotCtrl_MemMap.h"
