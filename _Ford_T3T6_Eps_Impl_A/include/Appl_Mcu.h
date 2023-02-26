/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: Appl_Mcu.h
* Module Description: Translation file to map Mcu for WdgM and WdgIf.  Since Mcu currently exists in the same application,
*                     currently the calls can be directly mapped to the Mcu
* Project           : GM T1xx
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       wz7x3j %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 03/03/15  1        LWW       Initial Version                                                                 EA4#231
**********************************************************************************************************************/

#ifndef APPL_MCU_H
#define APPL_MCU_H

	#include "Mcu.h"

	#define Appl_Mcu_PerformReset 		Mcu_PerformReset
	
#endif /* end of ifndef APPL_MCU_H */
