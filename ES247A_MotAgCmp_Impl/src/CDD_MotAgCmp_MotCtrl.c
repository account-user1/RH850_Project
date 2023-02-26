/*****************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_MotAgCmp_MotCtrl.c
* Module Description: Motor Control Loop runnable(s) for Motor Angle Compensation
* Project           : CBD   
* Author            : Spandana Balani
*****************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/04/15  1        SB         Initial version                                                                 EA4#636
* 11/06/15  2        SB       	Updated to ES247A_MotAgCmp_Design_1.4.0 - modified MtrRev calc &                EA4#2415
								implemented overflow protection 
* 11/19/15  3        SB         Fix Anomaly EA4# 2515                                                           EA4#2557
* 10/13/16  4        Rijvi      Updated per design_1.5.0											            EA4#7930
* 10/20/16  5        Rijvi      Corrected the Pim name (design rev. 1.6.0)										EA4#7930	
* 11/21/16  6		 TATA	    Updated per design_1.7.0														EA4#8350	
**********************************************************************************************************************/

#include "Rte_CDD_MotAgCmp.h"
#include "CDD_MotAgCmp.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "NxtrMath.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define     MOTAGMAXDELTA_MOTREV_U0P16                  32768UL
#define     MOTAGCUMVALGNDMRFREVMASK_CNT_U32            0x3FFFFFFFUL    /* (1073741823UL) */
#define     MOTAGCMPENAMASK_CNT_U08                     11U
#define     MOTAGDELTALIM_MOTREV_U0P16                  65535U          /* (0.9999847412F * NXTRFIXDPT_FLOATTOP16_ULS_F32) */


#define MotAgCmp_MotCtrl_START_SEC_CODE
#include "CDD_MotAgCmp_MotCtrl_MemMap.h" 

/******************************************************************************
  * Name:        MotAgCmpPer1
  * Description: MotAgCmp periodic processing in the motor control loop
  * Inputs:      see component's DataDict.m file     
  * Outputs:     see component's DataDict.m file 
  * Usage Notes: Called at Motor Control loop rate 
  ****************************************************************************/
FUNC (void, MotAgCmp_CODE) MotAgCmpPer1 (void) 
{   
    VAR(sint32, AUTOMATIC)  Delta1_MotRev_T_s15p16;
    VAR(sint32, AUTOMATIC)  Delta2_MotRev_T_s15p16;

    /* Compute corrected angle and limit to within one electrical rev */
    MOTCTRLMGR_MotCtrlMotAgElec =  (uint16)(((uint16)((uint32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() >> 1U) *    
                                    MOTCTRLMGR_MotCtrlMotAgMecl) - *Rte_Pim_MotAgCmpMotAgBackEmf());                
                                                                                                                    
                                                                                                                                                                                              
    /* Calculate MotCtrlMotAgCumvAlgndMrfRev */   
	if( *Rte_Pim_CmpEnaCntr() <= MOTAGCMPENAMASK_CNT_U08 )
	{	/* Delay and FirstRun */
		
		*Rte_Pim_CmpEnaCntr() = *Rte_Pim_CmpEnaCntr() + 1U;
		
		if( *Rte_Pim_CmpEnaCntr() > MOTAGCMPENAMASK_CNT_U08 )
		{
			MOTCTRLMGR_MotCtrlMotAgCumvInid = TRUE;
			Delta1_MotRev_T_s15p16 = (sint32)MOTCTRLMGR_MotCtrlMotAgMecl; 
		}
		else
		{
			MOTCTRLMGR_MotCtrlMotAgCumvInid = FALSE; 
			Delta1_MotRev_T_s15p16 = 0;
		}
	}
	else
	{	/* DeltaCalc */
		
		Delta1_MotRev_T_s15p16 = (sint32)MOTCTRLMGR_MotCtrlMotAgMecl - *Rte_Pim_MotAgCmpMotCtrlMotAgMeclPrev();    
   
		if(Delta1_MotRev_T_s15p16 > (sint32)MOTAGMAXDELTA_MOTREV_U0P16)     
		{
			/* > 180 */
			Delta1_MotRev_T_s15p16 = Delta1_MotRev_T_s15p16 - (sint32)MOTAGDELTALIM_MOTREV_U0P16; 
		}
		else if(Delta1_MotRev_T_s15p16 < ((-1) * (sint32)MOTAGMAXDELTA_MOTREV_U0P16))
		{       
			/* < 180 */
			Delta1_MotRev_T_s15p16 = Delta1_MotRev_T_s15p16 + (sint32)MOTAGDELTALIM_MOTREV_U0P16;     
		}
		else
		{
			/* Do nothing */
		} 
		
		MOTCTRLMGR_MotCtrlMotAgCumvInid = TRUE; 
	}
	
	
            
    Delta2_MotRev_T_s15p16 = Delta1_MotRev_T_s15p16 + *Rte_Pim_MotAgCmpMotCtrlMotAgCumvAlgndMrfRevSVPrev();
    
    MOTCTRLMGR_MotCtrlMotAgCumvAlgndMrfRev = (sint32)Sign_s08_s32(Delta2_MotRev_T_s15p16) *                                  
                                             (sint32)(uint32)(Abslt_u32_s32(Delta2_MotRev_T_s15p16) & MOTAGCUMVALGNDMRFREVMASK_CNT_U32); 
                                                                                                                                                                     
    
    *Rte_Pim_MotAgCmpMotCtrlMotAgCumvAlgndMrfRevSVPrev() = MOTCTRLMGR_MotCtrlMotAgCumvAlgndMrfRev;                              
                
    *Rte_Pim_MotAgCmpMotCtrlMotAgMeclPrev() = (sint32)MOTCTRLMGR_MotCtrlMotAgMecl;                                              
     
}
    
#define MotAgCmp_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAgCmp_MotCtrl_MemMap.h" 

