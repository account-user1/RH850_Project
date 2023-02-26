/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : ElecGlbPrm_MemMap.h
* Module Description: ElecGlbPrm_MemMap file
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       jzk9cc %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/14/16	1   	 Rijvi			Initial version							                                    EA4#6490
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/


/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#define MEMMAP_ERROR

#ifdef ElecGlbPrm_START_SEC_CONST_16
    # undef ElecGlbPrm_START_SEC_CONST_16
	#undef MEMMAP_ERROR
    /* Nexteer currently does not plan on mapping constant segments to specific areas in flash. */
#endif

#ifdef ElecGlbPrm_STOP_SEC_CONST_16
	# undef ElecGlbPrm_STOP_SEC_CONST_16
	#undef MEMMAP_ERROR
	/* Nexteer currently does not plan on mapping constant segments to specific areas in flash. */
#endif

#ifdef MEMMAP_ERROR
	#error "ElecGlbPrm_MemMap.h, wrong pragma command"
#endif
