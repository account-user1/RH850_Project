/*****************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_GtmCfgAndUse_MotCtrl.c
* Module Description: Motor Control Loop runnable(s) for configuration and 
*                     use of the GTM timer peripheral
* Project           : CBD   
* Author            : Avinash James
*****************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/25/17  1        AJM       Initial version                                                                EA4#10684
* 02/24/18  2        AJM       Updated PhsOn time computation                                                 EA4#20211
* 03/12/18  3        AJM       Fix for Torque Ripple                                                          EA4#21611
******************************************************************************/

#include "Rte_CDD_GtmCfgAndUse.h"
#include "CDD_GtmCfgAndUse_private.h"
#include "CDD_GtmCfgAndUse.h"
#include "GTM0_RegDefns.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "NxtrMath.h"

#define MISSUPDININCON_CNT_U08          ((uint8)100U)
#define MISSUPDCNTRTHD_NANOSEC_U32      ((uint32)25000U)
#define PHAONTIMIN_NANOSEC_U08          ((uint8)15U)

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#define CDD_GtmCfgAndUse_MotCtrl_START_SEC_CODE
#include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/******************************************************************************
  * Name:        GtmCfgAndUsePer1
  * Description: GtmCfgAndUse periodic processing in the motor control loop
  * Inputs:      see component's DataDict.m file     
  * Outputs:     see component's DataDict.m file 
  * Usage Notes: Called at Motor Control loop rate 
  ****************************************************************************/
FUNC (void, CDD_GtmCfgAndUse_CODE) GtmCfgAndUsePer1 (void)
{
    /* CM770A_GtmCfgAndUse/GtmCfgAndUse/GtmCfgAndUsePer1 */
    
    VAR (uint32, AUTOMATIC) PhaOnTiA_NanoSec_T_u32;
    VAR (uint32, AUTOMATIC) PhaOnTiB_NanoSec_T_u32;
    VAR (uint32, AUTOMATIC) PhaOnTiC_NanoSec_T_u32;
    VAR (uint32, AUTOMATIC) PwmPerd_NanoSec_T_u32;
    VAR (MotCurrEolCalSt2, AUTOMATIC) MotCurrEolCalSt_T_enum;
    VAR (uint32, AUTOMATIC) PwmPerd_Cnt_T_u32;
    VAR (uint32, AUTOMATIC) MissUpdStrtCntr_Cnt_T_u32;
    VAR (uint32, AUTOMATIC) MissUpdEndCntr_Cnt_T_u32;
    
    MotCurrEolCalSt_T_enum = MOTCTRLMGR_MotCtrlMotCurrEolCalSt;
    
    MissUpdStrtCntr_Cnt_T_u32 = GTM0ATOM00CN0;
    
    if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDSTRT)
    {
        /* Action Table Row 4 */
        PwmPerd_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPwmPerd;
        PhaOnTiA_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiA;
        PhaOnTiB_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiB;
        PhaOnTiC_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiC;
    }
    else if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDHI)
    {
        /* Action Table Row 1 */
        PwmPerd_NanoSec_T_u32 = Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
        PhaOnTiA_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
        PhaOnTiB_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
        PhaOnTiC_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val();
    }
    else if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDLO)
    {
        /* Action Table Row 2 */
        PwmPerd_NanoSec_T_u32 = Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
        PhaOnTiA_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
        PhaOnTiB_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
        PhaOnTiC_NanoSec_T_u32 = Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
    }
    else if (MotCurrEolCalSt_T_enum == MCECS_OFFSCMDZERO)
    {
        /* Action Table Row 3 */
        PwmPerd_NanoSec_T_u32 = Rte_Prm_CurrMeasEolFixdPwmPerd_Val();
        PhaOnTiA_NanoSec_T_u32 = 0U;
        PhaOnTiB_NanoSec_T_u32 = 0U;
        PhaOnTiC_NanoSec_T_u32 = 0U;
    }
    else 
    {
        /* Action Table Row 4 */
        PwmPerd_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPwmPerd;
        PhaOnTiA_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiA;
        PhaOnTiB_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiB;
        PhaOnTiC_NanoSec_T_u32 = MOTCTRLMGR_MotCtrlPhaOnTiC;
    }
    PhaOnTiA_NanoSec_T_u32 = Min_u32(PhaOnTiA_NanoSec_T_u32,PwmPerd_NanoSec_T_u32);
    PhaOnTiB_NanoSec_T_u32 = Min_u32(PhaOnTiB_NanoSec_T_u32,PwmPerd_NanoSec_T_u32);
    PhaOnTiC_NanoSec_T_u32 = Min_u32(PhaOnTiC_NanoSec_T_u32,PwmPerd_NanoSec_T_u32);

    if( PhaOnTiA_NanoSec_T_u32 <= PHAONTIMIN_NANOSEC_U08 )
    {
        PhaOnTiA_NanoSec_T_u32 = PHAONTIMIN_NANOSEC_U08;
    }
    if( PhaOnTiB_NanoSec_T_u32 <= PHAONTIMIN_NANOSEC_U08 )
    {
        PhaOnTiB_NanoSec_T_u32 = PHAONTIMIN_NANOSEC_U08;
    }
    if( PhaOnTiC_NanoSec_T_u32 <= PHAONTIMIN_NANOSEC_U08 )
    {
        PhaOnTiC_NanoSec_T_u32 = PHAONTIMIN_NANOSEC_U08;
    }
    
    PwmPerd_Cnt_T_u32 = CnvNanoSecToTmrCnt(PwmPerd_NanoSec_T_u32);
    
    GTM0ATOM00SR0 = PwmPerd_Cnt_T_u32;
    GTM0ATOM00SR1 = CnvNanoSecToTmrCnt(PhaOnTiA_NanoSec_T_u32);
    GTM0ATOM02SR1 = CnvNanoSecToTmrCnt(PhaOnTiB_NanoSec_T_u32);
    GTM0ATOM03SR1 = CnvNanoSecToTmrCnt(PhaOnTiC_NanoSec_T_u32);
    
    GTM0ATOM01SR1 = PwmPerd_Cnt_T_u32 - *Rte_Pim_AdcStrtOfCnvnPeak();
    GTM0ATOM04SR1 = PwmPerd_Cnt_T_u32 - *Rte_Pim_DmaMotCtrlTo2MilliSecTrig();
    GTM0ATOM05SR1 = PwmPerd_Cnt_T_u32 - *Rte_Pim_AdcStrtOfCnvn2();
    GTM0ATOM06SR1 = PwmPerd_Cnt_T_u32 - *Rte_Pim_DmaMotAgATrig();
    GTM0ATOM07SR1 = PwmPerd_Cnt_T_u32 - *Rte_Pim_Dma2MilliSecToMotCtrlTrig();
    
    MissUpdEndCntr_Cnt_T_u32 = GTM0ATOM00CN0; 
    
    if((*Rte_Pim_MissUpdIninCntr() < MISSUPDININCON_CNT_U08))
    {
        *Rte_Pim_MissUpdIninCntr() += 1U;
    }
    else if((MissUpdStrtCntr_Cnt_T_u32 >= MissUpdEndCntr_Cnt_T_u32) || (MissUpdStrtCntr_Cnt_T_u32 <= MISSUPDCNTRTHD_NANOSEC_U32))
    {
        *Rte_Pim_MissUpdCntr() += 1U; /* Roll Over is Intentional */
    }
    else
    {
        /* Do Nothing */
    }
}    
    
#define CDD_GtmCfgAndUse_MotCtrl_STOP_SEC_CODE
#include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

