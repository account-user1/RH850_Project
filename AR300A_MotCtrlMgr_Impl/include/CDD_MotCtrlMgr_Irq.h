/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Irq.h
* Module Description: Motor Control Manager Interrupt header
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 01/21/16  2        LWW       Updated to remove interrupt keyword for change to pragma                        EA4#3428
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTCTRLMGR_IRQ_H
#define CDD_MOTCTRLMGR_IRQ_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrIrq(void);

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
