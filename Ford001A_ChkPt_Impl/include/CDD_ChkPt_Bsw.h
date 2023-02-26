/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_ChkPt_Bsw.h
* Module Description: GM Checkpoint BSW Header
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/05/15  1        LWW       Initial Version                                                                 EA4#247
* 05/08/15  2        LWW       Update for 1a release                                                           EA4#578
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_CHKPT_BSW_H
#define CDD_CHKPT_BSW_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(void, CDD_ChkPt_CODE) ChkPt_10msBswAppl10Strt(void);
extern FUNC(void, CDD_ChkPt_CODE) ChkPt_10msBswAppl10End(void);
/**************************************** End Of Multiple Include Protection *****************************************/
#endif
