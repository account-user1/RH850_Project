/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_GuardCfgAndDiagc.h 
* Module Description: Declarations of global functions of CM107B Guard Configuration and Diagnostics RH850
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 11/09/17   1       AJM       Initial Version                                                                EA4#12708
**********************************************************************************************************************/
#ifndef CDD_GUARDCFGANDDIAGC_H
#define CDD_GUARDCFGANDDIAGC_H

#include "Std_Types.h"

/* Function prototypes */
extern FUNC(void, CDD_GuardCfgAndDiagc_CODE) GuardCfgAndDiagcInit1(void);
extern FUNC(void, CDD_GuardCfgAndDiagc_CODE) IpgInin(void);

#endif
