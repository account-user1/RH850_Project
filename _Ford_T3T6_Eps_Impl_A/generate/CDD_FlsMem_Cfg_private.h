/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_FlsMem_Cfg_private.h
* Module Description: Private configuration header file for Flah Configuration for CRC calculation component.
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 11/10/17  1        AJM       Initial Version                                                              EA4#13211
**********************************************************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_FLSMEM_CFG_PRIVATE_H
#define CDD_FLSMEM_CFG_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
   

/******************************************** File Level Rule Deviations *********************************************/
 /* MISRA-C:2004 Rule 8.12 [NXTRDEV 8.12.1] The ghs compiler requires the [] notation in extern declarations of linker symbols and the size of the
                           sections is unknown when generating the extern declarations.  Code using the symbols is not performing array access
                           so the unknown size is not a functional issue. */
 /* MISRA-C:2004 Rule 8.9  [NXTRDEV 8.9.1] Deviation allowed for use of linker symbols, because the linker symbols are not defined 
                           in any source code file. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/**************************************************** Type defs ******************************************************/
#define HWCRCRESARYSIZE_CNT_U08        (8U)         /* Placed it here as not required to expose to other components */
#define NROFFLSCRCREGNS_CNT_U08        (3U)

#define APPLCRCREGNNR_CNT_U08        (0U)

#if (APPLCRCREGNNR_CNT_U08 >=  NROFFLSCRCREGNS_CNT_U08)
#error "Undefined CRC Region"
#endif


extern uint8 CCT_Range_01_Start[];
extern uint8 CCT_Range_01_Address[];
extern uint8 CCT_Range_01_Length[];

extern uint8 CCT_Range_02_Start[];
extern uint8 CCT_Range_02_Address[];
extern uint8 CCT_Range_02_Length[];

extern uint8 CCT_Range_03_Start[];
extern uint8 CCT_Range_03_Address[];
extern uint8 CCT_Range_03_Length[];


typedef struct 
{

    /*! \n
    * -# Description: Start Address of the Flash Block for CRC Calculation.
    * -# Units of measure:               N/A
    * -# Limit/range of values:          0-0xFFFFFFFF
    * -# Required Accuracy/Precision:    N/A
    * -# Source/Destination:             
    * -# Type:                           uint32
    * -# Calculation Frequency:          At link time
    */
    uint32 CrcFlsBlkStrtAdr;
    
    /*! \n
    * -# Description: Length of the Flash Block for CRC Calculation.
    * -# Units of measure:               N/A
    * -# Limit/range of values:          0-0xFFFFFFFF
    * -# Required Accuracy/Precision:    N/A
    * -# Source/Destination:             
    * -# Type:                           uint32
    * -# Calculation Frequency:          At link time
    */
    uint32 CrcFlsBlkLen;
    
    /*! \n
    * -# Description: Address to the Pre calculated CRC saved in flash.
    * -# Units of measure:               N/A
    * -# Limit/range of values:          0-0xFFFFFFFF
    * -# Required Accuracy/Precision:    N/A
    * -# Source/Destination:             
    * -# Type:                           uint32
    * -# Calculation Frequency:          At link time
    */
    uint32 PreCalcnCrcFlsAdr;
}FlsCrcCfgBlkRec;

/* Placed it here as not required to expose to other components */
#define CDD_FlsMemNonRte_START_SEC_VAR_INIT_128
#include "CDD_FlsMemNonRte_MemMap.h"

extern VAR(uint32, AUTOMATIC) HwCrcCalcdRes_C[HWCRCRESARYSIZE_CNT_U08];
    
#define CDD_FlsMemNonRte_STOP_SEC_VAR_INIT_128
#include "CDD_FlsMemNonRte_MemMap.h"
extern const FlsCrcCfgBlkRec FLSCFGTBL[NROFFLSCRCREGNS_CNT_U08];

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif/*CDD_FLSMEM_CFG_PRIVATE_H*/
