/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_ChkPt_Bsw.c
* Module Description: Check Point functions for BSW tasks
* Project           : CBD
* Author            : Lucas Wendling
************************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 03/05/15  1        LWW       Initial Version
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "CDD_ChkPt_Bsw.h"
#include "WdgM.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/
#define CDD_ChkPtAppl10_START_SEC_CODE
#include "CDD_ChkPtAppl10_MemMap.h"

/**********************************************************************************************************************
  * Name:        ChkPt_10msBswAppl10Start
  * Description: Start checkpoint function for 10ms BSW Application 10 task
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at the start of the 10ms BSW Application 10 task
  ********************************************************************************************************************/
FUNC(void, CDD_ChkPt_CODE) ChkPt_10msBswAppl10Strt(void)
{
	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
        (void)WdgM_CheckpointReached(WdgMConf_WdgMSupervisedEntity_SE_10msBSW_Appl10, WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_Strt);
}

/**********************************************************************************************************************
  * Name:        ChkPt_10msBswAppl10End
  * Description: End checkpoint function for 10ms BSW Application 10 task
  * Inputs:      NONE
  * Outputs:     NONE
  * Usage Notes: To be called at the end of the 10ms BSW Application 10 task
  ********************************************************************************************************************/
FUNC(void, CDD_ChkPt_CODE) ChkPt_10msBswAppl10End(void)
{
	/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
        (void)WdgM_CheckpointReached(WdgMConf_WdgMSupervisedEntity_SE_10msBSW_Appl10, WdgMConf_WdgMCheckpoint_ChkPt_10msBSW_Appl10_End);
}

#define CDD_ChkPtAppl10_STOP_SEC_CODE
/* polyspace<MISRA-C:19.1:Not a defect:Justify with annotations> NXTRDEV 19.1.1 */
#include "CDD_ChkPtAppl10_MemMap.h"
