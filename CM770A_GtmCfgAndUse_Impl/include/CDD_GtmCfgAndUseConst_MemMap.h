/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_GtmCfgAndUseConst_MemMap.h
* Module Description: CDD_GtmCfgAndUseConst_MemMap file
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 12/07/17  1        AJM       Initial version - Added constant memory map                                     EA4#17774
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.6 [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#define MEMMAP_ERROR

#ifdef CDD_GtmCfgAndUseConst_START_SEC_CONST_32
    # undef CDD_GtmCfgAndUseConst_START_SEC_CONST_32
    #undef MEMMAP_ERROR
    /* Nexteer currently does not plan on mapping constant segments to specific areas in flash. */
#endif

#ifdef CDD_GtmCfgAndUseConst_STOP_SEC_CONST_32
    # undef CDD_GtmCfgAndUseConst_STOP_SEC_CONST_32
    #undef MEMMAP_ERROR
    /* Nexteer currently does not plan on mapping constant segments to specific areas in flash. */
#endif

#ifdef MEMMAP_ERROR
    #error "CDD_GtmCfgAndUseConst_MemMap.h, wrong pragma command"
#endif
