/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrMcuSuprtLib.h
* Module Description: Nexteer Microcontroller Unit Support Library Header.  This file is intended to be temporary to
*                     resolve conflicting register definitions between the MCAL and the Nexteer generated register
*                     header files in the AR202A component.  These conflicting definitions become present when a source
*                     file ends up including both a MCAL header file and the Nexteer register definition files (either
*                     directly or indirectly).  The case of this currently is in the NxtrMcuSuprtLib.h (which is
*                     included by certain components).  This header needs to include "Mcu.h" to get the function
*                     prototype of the Mcu_PerformReset() function.  To temporarily work around this conflict, this
*                     file will #define MCU_H so that when compilation of NxtrMcuSuprtLib.h in AR202A processes the 
*                     "Mcu.h" include, this file has no content.  Instead, Mcu_PerformReset() prototype is manually
*                     defined directly in this file (which is not desired long term).  Note, for this file to work
*                     properly in a project, the project should not have the "AR202A_MicroCtrlrSuprt_Impl/include/P1XC/"
*                     path in the include path search.
* Project           : Ford T3T3
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz2654 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 11/30/17  1        LWW       Initial Version        
* 03/13/18  2        HM        Added Mcu_EcmReleaseErrorOutPin function prototype                              EA4#20498
**********************************************************************************************************************/

/* Prevent Mcu.h include from doing anything in AR202A NxtrMcuSuprtLib.h */
#define MCU_H
/* Manually define prototype of Mcu_PerformReset() function */
extern void Mcu_PerformReset(void);

/* Manually define prototype of Mcu_EcmReleaseErrorOutPin() function */
extern void Mcu_EcmReleaseErrorOutPin(void);

/* Include the real NxtrMcuSuprtLib.h file from AR202A component */
#include "../../AR202A_MicroCtrlrSuprt_Impl/include/P1XC/NxtrMcuSuprtLib.h"

