/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_FlsMem_Cfg.c
* Module Description: Variable definition for Flash CRC Sections from Configurator .
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 11/10/17  1        AJM       Initial Version                                                              EA4#13211
**********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "CDD_FlsMem_Cfg_private.h"

/******************************************** File Level Rule Deviations *********************************************/
 /* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.2]    Cast of a variable address to an integer type required for writing a 
                                               variable address to a register. */
 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/**************************************************** Type defs ******************************************************/


#define CDD_FlsMem_START_SEC_CODE
#include "CDD_FlsMem_MemMap.h"


const FlsCrcCfgBlkRec FLSCFGTBL[NROFFLSCRCREGNS_CNT_U08] = 
{
    {
        ((uint32)CCT_Range_01_Start),
        ((uint32)CCT_Range_01_Length),
        ((uint32)CCT_Range_01_Address),
    }
    ,
    {
        ((uint32)CCT_Range_02_Start),
        ((uint32)CCT_Range_02_Length),
        ((uint32)CCT_Range_02_Address),
    }
    ,
    {
        ((uint32)CCT_Range_03_Start),
        ((uint32)CCT_Range_03_Length),
        ((uint32)CCT_Range_03_Address),
    }
    ,
    {
        ((uint32)CCT_Range_04_Start),
        ((uint32)CCT_Range_04_Length),
        ((uint32)CCT_Range_04_Address),
    }
    ,
    {
        (uint32)0x00000000UL,
        (uint32)0x00000064UL,
        (uint32)0x000004D2UL,
    }

};

#define CDD_FlsMem_STOP_SEC_CODE
#include "CDD_FlsMem_MemMap.h"


/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
