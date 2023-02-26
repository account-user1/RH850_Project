/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrIntrpn_MemMap.h
* Module Description: Nexteer Interpolation Library Header
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/13/15  1.0      KJS         Initial EA4 version                                                           EA4#109
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#ifndef NXTRINTRPN_MEMMAP_H
#define NXTRINTRPN_MEMMAP_H

#ifdef NxtrIntrpn_START_SEC_CODE
    # undef NxtrIntrpn_START_SEC_CODE
    /* Nexteer currently does not plan on mapping code segments to areas in flash. */
#endif

#ifdef NxtrIntrpn_STOP_SEC_CODE
    # undef NxtrIntrpn_STOP_SEC_CODE
    /* Nexteer currently does not plan on mapping code segments to areas in flash. */
#endif

#endif /* NXTRINTRPN_MEMMAP_H */
