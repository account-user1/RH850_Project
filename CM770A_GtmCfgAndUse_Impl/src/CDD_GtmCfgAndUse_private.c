/*****************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name: CDD_GtmCfgAndUse_private.c
* Module Description: Private source file for the CDD_GtmCfgAndUse component
* Project           : CBD   
* Author            : Avinash James
*****************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 09/11/17  1        AJM       Initial version                                                                 EA4#10684
* 12/07/17  2        AJM       Added constant memory map                                                       EA4#17774
* 02/24/18  3        AJM       Update for anomaly EA4#20427                                                    EA4#20211
******************************************************************************/
/******************************************* Multiple Include Protection *********************************************/

/************************************************ Include Statements *************************************************/
#include "CDD_GtmCfgAndUse_private.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/*********************************************** Exported Declarations ***********************************************/

#define CDD_GtmCfgAndUseConst_START_SEC_CONST_32
#include "CDD_GtmCfgAndUseConst_MemMap.h" 

/* Constant array for MCS code and data which is copied to MCS ram during initialization*/
CONST(uint32, GtmCfgAndUse_CONST)  GTMCFGANDUSECODANDDATAARY_CNT_U32[GTMSENTRAMBUFSIZE_CNT_U16] = 
{ 
    0xE00001CCU,    0xE00001F8U,    0xE0000020U,    0xE0000020U,
    0xE0000020U,    0xE0000020U,    0xE0000020U,    0xE0000020U,
    0x48FFFFFEU,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x00000000U,
    0x00000000U,    0x00000000U,    0x00000000U,    0x17000148U,
    0x11000000U,    0xB4300002U,    0xA3040000U,    0x20000004U,
    0xA4040000U,    0x20000004U,    0x700000C0U,    0xE84101D4U,
    0x10000040U,    0xE00001D4U,    0x17000188U,    0x11000000U,
    0xB4300005U,    0xA3040000U,    0x20000004U,    0xA4040000U,
    0x20000004U,    0x70000140U,    0xE8410200U,    0x100000C0U,
    0xE0000200U
};

#define CDD_GtmCfgAndUseConst_STOP_SEC_CONST_32
#include "CDD_GtmCfgAndUseConst_MemMap.h" 

/**************************************** End Of Multiple Include Protection *****************************************/
