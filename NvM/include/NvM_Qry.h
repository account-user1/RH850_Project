/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NvM_Qry.h
 *    Component:  MemService_AsrNvM
 *       Module:  NvM - Submodule Qry (Query functions)
 *    Generator:  -
 *
 *  Description:  This sub-module implements the queries to be executed to evaluate the conditions
 *                for a state transition
 *
 *                This file is an internal include; it shall not be included by other modules than NvM!
 *
 *********************************************************************************************************************/

/* Do not modify this file! */

/**********************************************************************************************************************
 * PROTECTION AGAINST MULTIPLE INCLUSION
 *********************************************************************************************************************/
#if (!defined NVM_QRY_H_)
#define NVM_QRY_H_

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
#define NVM_QRY_MAJOR_VERSION    (5u)
#define NVM_QRY_MINOR_VERSION    (5u)
#define NVM_QRY_PATCH_VERSION    (1u)

/**********************************************************************************************************************
 * API TYPE DEFINITIONS
 *********************************************************************************************************************/

/* Queue types, the array index has no relationship to the actual priority
 * of the queues within NVM_TASK
 */

/* Enumeration of Query IDs */
typedef enum
{
    NVM_QRY_ID_BLK_WRITE_ALL = 0u,
    NVM_QRY_ID_CANCEL_WRITE_ALL,
#if(NVM_KILL_WRITEALL_API == STD_ON)
    NVM_QR_ID_WRITEALL_KILLED,
#endif
    NVM_QRY_ID_CRC_BUSY,
    NVM_QRY_ID_CRC_MATCH,

    NVM_QRY_ID_LAST_BLOCK_DONE_READALL,
    NVM_QRY_ID_LAST_BLOCK_DONE_WRITEALL,
    NVM_QRY_ID_LAST_RESULT_OK,
    NVM_QRY_ID_MAIN_FSM_RUNNING,
    NVM_QRY_ID_MULTI_BLK_JOB,
#if (NVM_API_CONFIG_CLASS != NVM_API_CONFIG_CLASS_1)
    NVM_QRY_ID_NORMAL_PRIO_JOB,
# if(NVM_JOB_PRIORISATION == STD_ON)
        NVM_QRY_ID_HI_PRIO_JOB,
# endif
#endif
    NVM_QRY_ID_NV_BUSY,
    NVM_QRY_ID_MEMHWA_BUSY,
#if(NVM_SET_RAM_BLOCK_STATUS_API == STD_ON)
    NVM_QRY_ID_RAM_VALID,
#endif
    NVM_QRY_ID_REDUNDANT_BLOCK,
    NVM_QRY_ID_SKIP_BLOCK,
    NVM_QRY_ID_SUB_FSM_RUNNING,
    NVM_QRY_ID_WRITE_BLOCK_ONCE,
    NVM_QRY_ID_WRITE_RETRIES_EXCEEDED,
#if (NVM_DYNAMIC_CONFIGURATION == STD_ON)
    NVM_QRY_ID_HAS_ROM,
    NVM_QRY_ID_EXT_RUNTIME,
#endif
#if (NVM_REPAIR_REDUNDANT_BLOCKS_API == STD_ON)
    NVM_QRY_ID_SUSPEND_REPAIR_REDUNDANT_BLOCKS,
    NVM_QRY_ID_REPAIR_RED_BLOCK_DEFECT,
#endif
    NVM_QRY_ID_TRUE
} NvM_StateQueryIdType;

/* Force implicit cast for enum NvM_StateQueryIdType into uint8 when using
 * NvM_StateQueryType as data type. But only for production mode in order to
 * see not only numbers when debugging in debug mode
 */
#if (NVM_DEV_ERROR_DETECT == STD_ON)
typedef NvM_StateQueryIdType NvM_StateQueryType;
#else
typedef uint8 NvM_StateQueryType;
#endif

/* pointer to a query table (defined later) */
typedef P2CONST(NvM_StateQueryType, AUTOMATIC, NVM_PRIVATE_CONST) NvM_StateQueryPtrType;

/**********************************************************************************************************************
 * API VARIABLES
 *********************************************************************************************************************/
/* type of a query function pointer */
typedef P2FUNC(boolean, NVM_PRIVATE_CODE, NvM_QryFctPtrType) (void);

#define NVM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* the query function table, indexed by NvM_StateQueryType */
extern CONST(NvM_QryFctPtrType, NVM_PRIVATE_CONST) NvM_QueryTable_ap[NVM_QRY_ID_TRUE + 1];

#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

#endif /* NVM_QRY_H_ */
/*---- End of File -------------------------------------------------------- */
