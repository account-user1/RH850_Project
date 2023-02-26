/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_FlsMem.h
* Module Description: Flash Memory Complex Driver Header
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 11/10/17  1        AJM       Initial Version                                                                 EA4#13211
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_FLSMEM_H
#define CDD_FLSMEM_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(void, CDD_FlsMem_CODE) DtsInin(uint32 CrcHwIdxInReg, uint32 CrcHwIdxOutReg) ;
extern FUNC(void, CDD_FlsMem_CODE) DtsClnUp(void);

extern FUNC(void, CDD_FlsMem_CODE) FlsMemInit2(void) ;
extern FUNC(void, CDD_FlsMem_CODE) CodFlsSngBitEcc(void) ;

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
