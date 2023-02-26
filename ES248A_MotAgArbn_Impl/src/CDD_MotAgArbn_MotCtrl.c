
/**********************************************************************************************************************
* Copyright 2015, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgArbn_MotCtrl.c
* Module Description: Implementation of Motor Angle Arbitration FDD ES248A 
                       Motor Control Loop runnable(s) for Motor Angle Arbitration
* Project           : CBD
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           3 %
* %derived_by:        nz2554 %
*---------------------------------------------------------------------------------------------------------------------
*   Date      Rev     Author    Change Description                                                            SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 06/02/15   1       SB        Initial version                                                              EA4#845
* 02/08/17   2       ML        Updated to design vers. 1.2.0                                                EA4#8834
* 09/27/17   3       SR        Changed Arbitration Strategy. Averaging is removed. MotAgMecl output is now:
*                               -> MotAgBMecl if MotAgBMeclAvl is TRUE and MotAgAMeclAvl is FALSE
*                               -> MotAgAMecl otherwise                                                     EA4#15132
**********************************************************************************************************************/

#include "Rte_CDD_MotAgArbn.h"
#include "CDD_MotAgArbn.h"
#include "CDD_MotCtrlMgr_Data.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define  MOTAGACORRLNSTSMASK_CNT_U08  ((uint8)0x01U)
#define  MOTAGBCORRLNSTSMASK_CNT_U08  ((uint8)0x02U)
#define  MAXSTALL_CNT_U08		      ((uint8)10U)

static FUNC(boolean, MotAgArbn_CODE) SigAvlyChk(VAR(uint8   , AUTOMATIC) SigCorrChk_Cnt_T_u08,
                                                VAR(uint8   , AUTOMATIC) SigRollgCntr_Cnt_T_u08, 
                                                VAR(SigQlfr1, AUTOMATIC) SigQlfr_Cnt_T_enum,
                                                P2VAR(uint8 , AUTOMATIC, AUTOMATIC) PrevRollgCntr_Cnt_T_u08,
                                                P2VAR(uint8 , AUTOMATIC, AUTOMATIC) StallCnt_Cnt_T_u08);

#define MotAgArbn_MotCtrl_START_SEC_CODE
#include "CDD_MotAgArbn_MotCtrl_MemMap.h" 

/**********************************************************************************************************************
  * Name        : MotAgArbnPer1
  * Description : MotAgArbn periodic processing in the motor control loop
  * Inputs      : MOTCTRLMGR_MotCtrlMotAgAMeclRollgCntr : Motor angle A rolling counter
  *               MOTCTRLMGR_MotCtrlMotAgAMecl          : Motor angle A in mechanical degrees (MotRev)
  *               MOTCTRLMGR_MotCtrlMotAgAMeclQlfr      : Motor angle A qualifier
  *               MOTCTRLMGR_MotCtrlMotAgBMeclRollgCntr : Motor angle B rolling counter
  *               MOTCTRLMGR_MotCtrlMotAgBMecl          : Motor angle B in mechanical degrees (MotRev)
  *               MOTCTRLMGR_MotCtrlMotAgBMeclQlfr      : Motor angle B qualifier
  *               MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSts  : Motor Angle Mechanical Correlation Status
  * Outputs     : MOTCTRLMGR_MotCtrlMotAgMecl           : Arbitrated motor angle in mechanical degrees (MotRev)
  * Usage Notes : Called at Motor Control loop rate 
  **********************************************************************************************************************/
FUNC (void, MotAgArbn_CODE) MotAgArbnPer1 (void)
{
     /*Inputs*/
     VAR(uint16  , AUTOMATIC) MotCtrlMotAgAMecl_MotRev_T_u0p16;
     VAR(uint16  , AUTOMATIC) MotCtrlMotAgBMecl_MotRev_T_u0p16;
     VAR(uint8   , AUTOMATIC) MotCtrlMotAgMeclCorrlnSts_Cnt_T_u08;
     VAR(uint8   , AUTOMATIC) MotCtrlMotAgAMeclRollgCntr_Cnt_T_u08;
     VAR(uint8   , AUTOMATIC) MotCtrlMotAgBMeclRollgCntr_Cnt_T_u08;
     VAR(SigQlfr1, AUTOMATIC) MotCtrlMotAgAMeclQlfr_T_enum;
     VAR(SigQlfr1, AUTOMATIC) MotCtrlMotAgBMeclQlfr_T_enum;

     /*Outputs*/
     VAR(uint16  , AUTOMATIC) MotCtrlMotAgMecl_MotRev_T_u0p16;

     /* Intermediate Variables */
     VAR(boolean , AUTOMATIC) MotAgASigAvl_Cnt_T_logl;
     VAR(boolean , AUTOMATIC) MotAgBSigAvl_Cnt_T_logl;

     MotCtrlMotAgAMecl_MotRev_T_u0p16       = MOTCTRLMGR_MotCtrlMotAgAMecl;
     MotCtrlMotAgBMecl_MotRev_T_u0p16       = MOTCTRLMGR_MotCtrlMotAgBMecl; 
     MotCtrlMotAgMeclCorrlnSts_Cnt_T_u08    = MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSts;
     MotCtrlMotAgAMeclRollgCntr_Cnt_T_u08   = MOTCTRLMGR_MotCtrlMotAgAMeclRollgCntr;
     MotCtrlMotAgBMeclRollgCntr_Cnt_T_u08   = MOTCTRLMGR_MotCtrlMotAgBMeclRollgCntr; 
     MotCtrlMotAgAMeclQlfr_T_enum           = MOTCTRLMGR_MotCtrlMotAgAMeclQlfr;
     MotCtrlMotAgBMeclQlfr_T_enum           = MOTCTRLMGR_MotCtrlMotAgBMeclQlfr;
     
     /** Motor Angle A Sensor Availability **/
     MotAgASigAvl_Cnt_T_logl = SigAvlyChk((MotCtrlMotAgMeclCorrlnSts_Cnt_T_u08 & MOTAGACORRLNSTSMASK_CNT_U08),
                                          MotCtrlMotAgAMeclRollgCntr_Cnt_T_u08, 
                                          MotCtrlMotAgAMeclQlfr_T_enum,                                     
                                          Rte_Pim_MotAgARollgCntPrev(),
                                          Rte_Pim_MotAgAStallCntPrev());
     *Rte_Pim_dMotAgArbnAAvl() = MotAgASigAvl_Cnt_T_logl;

     /** Motor Angle B Sensor Availability **/
     MotAgBSigAvl_Cnt_T_logl = SigAvlyChk((MotCtrlMotAgMeclCorrlnSts_Cnt_T_u08 & MOTAGBCORRLNSTSMASK_CNT_U08),
                                          MotCtrlMotAgBMeclRollgCntr_Cnt_T_u08, 
                                          MotCtrlMotAgBMeclQlfr_T_enum,                                     
                                          Rte_Pim_MotAgBRollgCntPrev(),
                                          Rte_Pim_MotAgBStallCntPrev());
     *Rte_Pim_dMotAgArbnBAvl() = MotAgBSigAvl_Cnt_T_logl;

     /** Arbitration **/
	 if((MotAgASigAvl_Cnt_T_logl == FALSE) && (MotAgBSigAvl_Cnt_T_logl == TRUE))
     {
         /* UsePos2 */
         MotCtrlMotAgMecl_MotRev_T_u0p16 = MotCtrlMotAgBMecl_MotRev_T_u0p16;
     }
     else
     {
         /* UsePos1 */
         MotCtrlMotAgMecl_MotRev_T_u0p16 = MotCtrlMotAgAMecl_MotRev_T_u0p16;
     }
     MOTCTRLMGR_MotCtrlMotAgMecl = MotCtrlMotAgMecl_MotRev_T_u0p16;
}

/**********************************************************************************************************************
* Name           : SigAvlyChk
* Description    : Check availability of the signal based on 'RollingCounter', 'StallCounter' and 'SignalQualifier'.
*                  Implements [Arbitration Signal Availability] sub-block in the FDD
* Inputs         : SigCorrChk_Cnt_T_u08     : The correlation status of the signal based on the corresponding 
*                                             bit in MotCtrlMotAgMeclCorrlnSts input
*                  SigRollgCntr_Cnt_T_u08   : Motor Angle Signal Rolling counter 
*                  SigQlfr_Cnt_T_enum       : Motor Angle Signal Qualifier
* Inputs/Outputs : *PrevRollgCntr_Cnt_T_u08 : Previous Value of Motor Angle Signal Rolling Counter
*                  *StallCnt_Cnt_T_u08      : Stall Count to keep track of number of signal rolling counter stalls.
* Outputs        : SigAvl_Cnt_T_logl        : Signal Availability of the signal to which the inputs correspond to.
* Usage Notes    : NONE
**********************************************************************************************************************/
static FUNC(boolean, MotAgArbn_CODE) SigAvlyChk(VAR(uint8   , AUTOMATIC) SigCorrChk_Cnt_T_u08,
                                                VAR(uint8   , AUTOMATIC) SigRollgCntr_Cnt_T_u08, 
                                                VAR(SigQlfr1, AUTOMATIC) SigQlfr_Cnt_T_enum,
                                                P2VAR(uint8 , AUTOMATIC, AUTOMATIC) PrevRollgCntr_Cnt_T_u08,
                                                P2VAR(uint8 , AUTOMATIC, AUTOMATIC) StallCnt_Cnt_T_u08)
{
     VAR(boolean,  AUTOMATIC)  SigAvl_Cnt_T_logl;
     
     /***----- START : [Determine Stall Counter] -----***/
     if( SigRollgCntr_Cnt_T_u08 == (*PrevRollgCntr_Cnt_T_u08))
     {
         /* Stalled Rolling Counter */
         if((*StallCnt_Cnt_T_u08) != MAXSTALL_CNT_U08)
         {
             /* Increment Stall Counter */
             (*StallCnt_Cnt_T_u08) = (*StallCnt_Cnt_T_u08) + 1U;
         }
         else
         {
             /* Stall Counter at Max : Hold Value */
         }
     }
     else
     {
         /* Active Rolling Counter */
         (*StallCnt_Cnt_T_u08) = 0U;
     }
     /***-----  END  : [Determine Stall Counter] -----***/

     /*Determine Signal Availability */
     if(((*StallCnt_Cnt_T_u08) < MAXSTALL_CNT_U08) &&
        (SigQlfr_Cnt_T_enum   != SIGQLFR_FAILD) &&
        (SigCorrChk_Cnt_T_u08 != 0U))
     {
         SigAvl_Cnt_T_logl = TRUE;
     }
     else
     {
         SigAvl_Cnt_T_logl = FALSE;
     }

     /*Update previous Rolling Counter PIM with current value*/
     (*PrevRollgCntr_Cnt_T_u08) = SigRollgCntr_Cnt_T_u08;

     return SigAvl_Cnt_T_logl;                                                 
}
    
#define MotAgArbn_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAgArbn_MotCtrl_MemMap.h" 
