/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_HwTq8Meas.h
* Module Description: HwTq0 Measurement  Complex Driver Header
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  -------------------------------------------------------------------------    -----------
* 07/11/17   1       KK        Initial Version of CM690D                                                     EA4#13188
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_HWTQ8MEAS_H
#define CDD_HWTQ8MEAS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/

/* MISRA-C:2004 Rule 8.8 [NXTRDEV 8.8.1]: Deviation allowed for functions required to be declared in two headers to be accessible via the RTE as well as outside of the RTE 
						  Function Names: HwTq8MeasTrigStrt_Oper*/
extern FUNC(void, HwTq8Meas_CODE) HwTq8MeasTrigStrt_Oper(void);



/**************************************** End Of Multiple Include Protection *****************************************/
#endif

