/*****************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_VrfyCritReg.h
* Module Description: Critical Register Verification header file
* Project           : CBD
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/15/16  1        SV       Initial version                                                                  EA4#2774
* 04/15/16  2        Selva       MicroDiag Critical Register                                                   EA4#5190
**********************************************************************************************************************/

#ifndef CDD_VRFYCRITREG_H
#define CDD_VRFYCRITREG_H


extern FUNC(uint8, CDD_VrfyCritReg_CODE) CritRegPerChk(void);
extern FUNC(uint8, CDD_VrfyCritReg_CODE) CritRegInitChk(void);

#endif
