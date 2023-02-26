/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrc_private.h
* Module Description: Private header file for the CM800A SyncCRC component
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/12/16  1        KJS       Initial Version                                                                 EA4#5405
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_SYNCCRC_PRIVATE_H
#define CDD_SYNCCRC_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/
typedef enum
{
    CRCDATAACSWIDTH_32BIT   = 0U,
    CRCDATAACSWIDTH_16BIT   = 1U,
    CRCDATAACSWIDTH_8BIT    = 2U
} CrcDataAcsWidth1;

typedef enum
{
    CRCALG_32BITETH  = 0U,
    CRCALG_16BIT     = 1U,
    CRCALG_8BIT      = 2U,
    CRCALG_8BITH2F   = 3U
} CrcAlg1;

typedef struct
{
    uint8 CrcHwIdx;
} NtCrcIdxRec;

typedef struct
{
    boolean ResvCall;
} NtResvCallRec;

/************************************************ Embedded Constants *************************************************/
#define INVLDTASKID_CNT_U32         0xFFFFFFFFUL

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_SYNCCRC_PRIVATE_H */
