/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name: CDD_FordT3T6McuCfg_Stub.c
* Module Description: Ford T3/T6 Mcu Configuration implementation for CM012A
* Project           : Ford T3/T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 08/01/17  1        XL        Initial Version                                                                 EA4#14121
* 08/14/17  2        XL        Add extern prototype for Adcf0OutpInin                                          EA4#14121
* 08/15/17  3        XL        Fixed header definition                                                         EA4#14121
**********************************************************************************************************************/

#ifndef CDD_FORDT3T6MCUCFG_H
#define CDD_FORDT3T6MCUCFG_H

#include "Std_Types.h"

extern FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgInit1(void);
extern FUNC(void, CDD_FordT3T6McuCfg_CODE) FordT3T6McuCfgPer1(void);

extern FUNC(void, CDD_FordT3T6McuCfg_CODE) Adcf0OutpInin(void);
	
#endif
