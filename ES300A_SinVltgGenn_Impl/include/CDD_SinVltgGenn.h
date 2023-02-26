/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_SinVltgGenn.h
* Module Description: Sine Voltage Generation header
* Project           : CBD
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/11/15  1        SV        Initial Version                                                                 EA4#XXXXX                                                                 
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_SINVLTGGENN_H
#define CDD_SINVLTGGENN_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/

extern FUNC(void, CDD_SinVltgGenn_CODE) SinVltgGennPer1(void);
extern FUNC(void, CDD_SinVltgGenn_CODE) SinVltgGennPer2(void);

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
