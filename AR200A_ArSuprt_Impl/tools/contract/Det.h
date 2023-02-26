/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : Det.h
* Module Description: This file contains a stub header for component unit test and static analysis usage
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  -------------------------------------------------------------------------     ----------
* 10/15/15  1        LWW       Initial version                                                                 EA4#1948
**********************************************************************************************************************/
#ifndef DET_H
#define DET_H

#include "Std_Types.h"

FUNC(Std_ReturnType, DET_CODE) Det_ReportError( uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId );

#endif /* DET_H */
