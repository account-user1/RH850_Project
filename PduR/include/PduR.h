/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  PduR.h
 *      Project:  Gw_AsrPduRCfg5
 *       Module:  MICROSAR PDU Router
 *    Generator:  Configurator 5
 *
 *  Description:  Vector implementation of AUTOSAR PDU Router
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Erich Schondelmaier         visehs        Vector Informatik GmbH
 *  Gunnar Meiss                visms         Vector Informatik GmbH
 *  Sebastian Waldvogel         visswa        Vector Informatik GmbH
 *  Stephan Probst              visspt        Vector Informatik GmbH
 *  Florian Roehm               visfrm        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version  Date        Author  Change Id       Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  1.00.00  2011-12-05  visms   -               derived initial CFG5 version from Gw_AsrPduR 3.17.00
 *  2.00.00  2012-07-12  visehs  ESCAN00059664   PDUR reports a incorrect DET error for the Handle ID parameter
 *           2012-07-12  visehs  ESCAN00058311   AR4-160: Support AUTOSAR 4.0.3 as Beta
 *  2.01.00  2012-09-26  visehs  ESCAN00061711   AR4-225: Support high level TP Gateway Routing
 *           2012-10-05  visehs  ESCAN00061982   Compiler warning: expression evaluates to a function which is missing
 *                                               an argument list
 *           2012-10-05  visehs  ESCAN00061471   Linker error: unresolved external symbol _PduR_GetDestHndOfDFiFoInfo
 *  2.01.01  2012-11-05  visms   ESCAN00062706   Compiler error: error C2065: 'destHandleId' : undeclared identifier
 *           2012-11-05  visms   ESCAN00062709   Linker Error: Unresolved Symbol PduR_DcmTransmit
 *  2.01.02  2012-11-08  visms   ESCAN00062868   Compiler error: identifier PduR_TpBAHndType not declared
 *  2.02.00  2012-11-12  visms   ESCAN00061832   AR4-285: Support PduRRoutingPathGroups
 *           2012-11-12  visms   ESCAN00062808   Use upper case 'U' suffix for unsigned variables / numbers
 *           2012-11-13  visms   ESCAN00062963   Compiler error: illegal else without matching if in
 *                                               PduR_RmTp_LoAndUpTransmit
 *           2012-11-16  visms   ESCAN00062979   Routing abort with 1:N TP Routing (with an Upper Layer destination)
 *           2012-11-30  visehs  ESCAN00063475   Version Define does not match with the Component name
 *  2.02.01  2013-02-06  visms   ESCAN00064828   Out of bounds array access in PduR_EnableRouting and
 *                                               PduR_DisableRouting
 *           2013-02-06  visms   ESCAN00064829   Switching PduRRoutingPathGroups for IF PduRRoutingPaths with multiple
 *                                               destinations does not work
 *  2.03.00  2013-02-14  visms   ESCAN00064303   AR4-325: Implement Post-Build Loadable
 *           2013-02-18  visswa  ESCAN00063380   Separate Misra/PcLint comments with blank
 *           2013-02-20  visehs  ESCAN00065996   Add Det error Id  "PDUR_E_PARAM_INVALID " according to ASR4
 *           2013-03-19  visms   ESCAN00064485   AR4-282: Export BSW DBG Data
 *           2013-03-20  visehs  ESCAN00066041   Make the Enable-, DisableRouting APIs more robust
 *           2013-04-02  visehs  ESCAN00065323   Compiler error: Cannot resolve symbol
 *                                               PduR_GetRmDestTpEndIdxOfRmSrcRom in PduR_RmTp_LoAndUpTransmit()
 *           2013-04-09  visswa  ESCAN00066490   MISRA compliance
 *           2013-04-18  visehs  ESCAN00066722   Interface Gateway Routing: Wrong data are sent in case of direct
 *                                               routing
 *           2013-04-18  visehs  ESCAN00066723   Interface Gateway Routing: Wrong data are sent in case of trigger
 *                                               transmit routing
 *  2.04.00  2013-08-16  visms   ESCAN00069870   The prefix of VAR data shall be <Msn> followed by '_'
 *           2013-08-23  visms   ESCAN00069150   Include "SchM_PduR.h" only in source files
 *           2013-08-23  visms   ESCAN00068899   TT Single Buffer is not initialized
 *           2013-10-14  visehs  ESCAN00071100   Memory could be overwritten by interface gateway routings with a
 *                                               TT- FIFO with queue depth > 1 and dynamic DLC
 *  2.04.01  2013-11-18  visehs  ESCAN00072015   Transport protocol data can be corrupted during gateway transmission
 *                                               in case of parallel routings
 *  2.05.00  2013-11-26  visspt  ESCAN00072172   Reduce unnecessary Code in function PduR_RmIf_RxIndication_MultiIf.
 *           2013-11-26  visspt  ESCAN00072225   Optimize while condition in function PduR_RmIf_RxIndication_MultiIf
 *           2013-12-04  visspt  ESCAN00072430   Memory overwritten in PduR_Init function, if Tp Gw Routing are
 *                                               configured
 *  2.05.00  2013-12-11  visehs  ESCAN00072594   Redesign the Tp Routing State machine
 *           2014-01-17  visehs  ESCAN00073049   Adapt Tp 1:N Fanout routing according to RfC 52242
 *  3.00.00  2014-02-05  visehs  ESCAN00070543   AR4-345: Implement PF4_PostBuildSelectable
 *           2014-02-25  visehs  ESCAN00071600   AR4-601: TP routing with immediate transmission
 *           2014-03-19  visehs  ESCAN00072450   AR4-601: TP routing with variable addresses
 *           2014-05-12  visehs  ESCAN00071925   AR4-619: Support the StartOfReception API (with the PduInfoType),
 *                                               TxConfirmation and RxIndication according ASR4.1.2
 *           2014-05-23  visms   ESCAN00074114   AR4-642: Deleting container at post-build time
 *           2014-05-26  visehs  ESCAN00075191   TpGw Routing deadlock if RxIndication and TxConfirmation comes at the
 *                                               same time with an result != E_OK
 *  3.00.01  2014-06-05  visehs  ESCAN00076390   MISRA compliance
 *  4.00.00  2014-07-08  visehs  ESCAN00072859   AR4-795: Back-to-Back-Routing of TP messages
 *           2014-10-08  visehs  ESCAN00078796   IF Gateway Routings with Data Provision "TriggerTransmit" and
 *                                               "Tx Buffer Depth" > 1 sends deprecated data
 *           2014-10-08  visehs  ESCAN00076362   Remove uint16_least in PduR_BufMgr_* APIs
 *  4.00.01  2014-11-10  visehs  ESCAN00079470   Memory overwritten in  PduR_RmTp_BufAdminMgr_ReleaseRxBuffer()
 *                                               function, if Tp Gw Routing are configured
 *  4.00.02  2014-11-19  visehs  ESCAN00079684   Compiler error: SINGLEBUFFER': undeclared identifier
 *  5.00.00  2014-11-21  visehs  ESCAN00079509   Messages are not send to the destination bus, after Flexray state
 *                                               "out of sync"
 *           2014-11-28  visehs  ESCAN00079881   Unexpected buffer overrun during interface gateway routing after
 *                                               initialization
 *           2014-11-28  visehs  ESCAN00079882   Report always a DET error if a Buffer overrun occurs
 *           2014-12-10  visehs  ESCAN00080136   Harmonies API Naming
 *           2014-12-22  visehs  ESCAN00080372   Make Tp routing more robust for a better sub-contractor TP module
 *                                               support
 *           2015-01-14  visehs  ESCAN00080576   Remove unreachable statement and rearrange conditions that never apply
 *           2015-01-16  visehs  ESCAN00080641   Linker error: unresolved external symbol EcuM_BswErrorHook() referenced
 *                                               in function PduR_Init()
 *           2015-01-20  visehs  ESCAN00080686   Fixed MPU warning: Erroneous read access for an unused variable
 *           2015-01-26  visehs  ESCAN00080814   Interface Gateway Routings with Data Provision "TriggerTransmit", "
 *                                               Tx Buffer Depth" ==  1 could not handle with dynamic length
 *           2015-02-11  visehs  ESCAN00081184   Optimize runtime and safety aspects for PduR Buffer manager
 *           2015-02-11  visehs  ESCAN00080292   FEAT-427: SafeBSW Step I
 *           2015-03-20  visehs  ESCAN00079911   Optimization: Flush D-FiFo after Queue overrun.
 *  6.00.00  2015-04-14  visehs  ESCAN00082414   Optimization: Flush IF- FiFo or Tp Buffer after disabling routing path group
 *           2015-06-02  visehs  ESCAN00083229   Memory could be overwritten for IF- Gateway routings where a buffer is
 *                                               used and the PduRPduMaxLength is not equal to the global Pdu length.
 *           2015-07-30  visehs  ESCAN00082968   FEAT-109: Support N:1 Routing for communication interface routing.
 *           2015-08-04  visehs  ESCAN00083327   PduR Switching mechanism.
 *           2015-09-15  visehs  ESCAN00085244   MISRA deviation: MISRA-C:2004 MD_MSR_14.3 for SchM_Enter and SchM_Exit APIs
 *  6.01.00  2015-09-03  visspt  ESCAN00084962   The Safe BSW variant is not Safe if PduRDevErrorDetect is deactivated
 *           2015-09-30  visehs  ESCAN00081780   FEAT-1275: SafeBSW Step 2
 *  7.00.00  2015-10-01  visehs  ESCAN00085227   FEAT-1485: Support N:1, 1:N, FIFO TP gateway routing paths
 *           2015-11-18  visehs  ESCAN00086596   Compiler warning: used wrong Memory class qualifier in several functions
 *           2015-10-09  visfrm  ESCAN00085750   Entire Pdu length is incorrectly calculated if meta data feature is used.
 *           2016-01-16  visehs  ESCAN00087296   The provided buffer size lacks the meta data size if the threshold is
 *                                               reached and the Transmit function is called.
 *           2016-02-08  visehs  ESCAN00087751   Compiler warning: conversion from 'PduIdType' to 'PduR_SizeOfRmSrcRomType',
 *                                               possible loss of data
 *           2016-02-08  visehs  ESCAN00088147   Compiler error: 'PduR_RmIf_CancelTransmit_Multi' : undeclared identifier
 *           2016-02-16  visehs  ESCAN00088326   N:1 Gateway Communication Interface routing are not interlocked during
 *                                               runtime if no routing path groups are configured.
 *           2016-02-25  visms   ESCAN00087831   FEAT-1631: Trigger Transmit API with SduLength In/Out according to ASR4.2.2
 *           2016-03-14  visehs  ESCAN00088326   N:1 Gateway Communication Interface routing are not interlocked during runtime
 *                                               if no routing path groups are configured
 *           2016-03-21  visehs  ESCAN00087798   FEAT-1688: SafeBSW Step 4
 *           2016-03-21  visswa  ESCAN00088986   FEAT-1642: Release Backbone Switching
 * 7.01.00   2016-04-01  visehs  ESCAN00089189   Optimize runtime in case of 1:1 Tp routing.
 *           2016-04-01  visehs  ESCAN00089194   Cleanup Misra Comments in PduR.h
 * 7.01.01   2016-04-29  visehs  ESCAN00089820   Support post build loadable configurations without EcuM module
 *           2016-04-29  visehs  ESCAN00089822   MISRA deviation: MISRA-C:2004 Rule 3355, 3356 condition is
 *                                               always true or always false
 * 7.02.00   2016-04-07  visehs  ESCAN00089160   Compiler warning: C4244 possible loss of data
 *           2016-04-07  visehs  ESCAN00090108   Compiler warning:  function "PduR_Init_Rpg" was declared but never referenced
 * 7.03.00   2016-04-29  visehs  ESCAN00089795   Add Instance Routing State machine to allow proper Routing Path Group
 *                                               handling in case of 1:N Tp routing
 *           2016-06-16  visehs  ESCAN00090418   Optimize ROM consumption and Init runtime for Communication Interface
 *                                               gateway routings
 *           2016-06-30  visehs  ESCAN00090762   Support overall total Tp buffer size greater than 65535
 * 8.00.00   2016-07-01  visehs  ESCAN00090767   Compiler warning conversion from 'PduIdType' to 'PduR_RmSrcRomIterType'
 *                                               and conversion from 'PduIdType' to 'PduR_RmGDestRomIterType',
 * 9.00.00   2016-07-12  visehs  ESCAN00089979   FEAT-1955 Shared buffer pool and dedicate buffer support.
 *           2016-08.01  visswa  FEAT-1611       Support address bases learning strategy (OVTP gateway).
 *           2016-12-09  visms   ESCAN00093240   The PduR buffer shall be mappable into a own section
 *********************************************************************************************************************/
#ifndef PDUR_H
# define PDUR_H

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
/* \trace SPEC-2020230, SPEC-38402 */

# include "PduR_Types.h"
# include "PduR_Cfg.h"
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
#  include "Det.h"
# endif
# include "PduR_Lcfg.h"


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/



/*********************************************************************************************************************/
/* Version                  (abcd: Main version ab Sub Version cd )                                                  */
/*********************************************************************************************************************/

/* AUTOSAR Version Information */
# define PDUR_AR_RELEASE_MAJOR_VERSION       4U
# define PDUR_AR_RELEASE_MINOR_VERSION       0U
# define PDUR_AR_RELEASE_REVISION_VERSION    3U

# define PDUR_SW_MAJOR_VERSION   9U  /**< Major version */
# define PDUR_SW_MINOR_VERSION   0U  /**< Major version */
# define PDUR_SW_PATCH_VERSION   0U  /**< Patch level version */

/** compatibility define to activate the undefined behaviour sanitizer codes. */
# if !defined(PDUR_SANITIZE_UNDEFINED_BEHAVIOR) /* COV_PDUR_VAR_FATAL_ERROR */
#  define PDUR_SANITIZE_UNDEFINED_BEHAVIOR    STD_ON
# endif

/*********************************************************************************************************************/
/* Module Identification                                                                                            */
/*********************************************************************************************************************/
/* \trace SPEC-626, SPEC-1246 */

# define PDUR_VENDOR_ID           30U
# define PDUR_MODULE_ID           51U

/** \defgroup DetErrorIDs DetError IDs
    \brief    Det Error IDs as reported to DET. */
/*  \trace SPEC-2020179 */
/** This error code is only used in conjunction with post-build configuration: An invalid post-build configuration data
 *  pointer has been handled to PduR_Init(). The error is either caused by a failed consistency check or because a null
 *  pointer was handled to PduR_Init(). */

# define PDUR_E_CONFIG_PTR_INVALID             ((uint8)0x00U)
/** An API service has been used without a call of PduR_Init() or PduR_Init() was called while the PDU Router is
 *  initialized. If your system does not use a start-up code to initialize global variables,
 *  PduR_InitMemory() can be called before PduR_Init() to avoid this problem. */

# define PDUR_E_INVALID_REQUEST                ((uint8)0x01U)
/** An invalid PDU identifier was used as parameter for a PDU Router API call. */
# define PDUR_E_PDU_ID_INVALID                 ((uint8)0x02U)
/** TP Gateway was not able to transmit a TP Tx I-PDU due to an error reported by the TP layer. The gateway will abort
 *  the routing and not attempt a re-transmission. */
# define PDUR_E_TP_TX_REQ_REJECTED             ((uint8)0x03U)
/** If  any  of  the  parameter passed  is  out  of  respective ranges */
# define PDUR_E_PARAM_INVALID                  ((uint8)0x04U)
/**A I-PDU ID is received that is already in process  */
# define PDUR_E_DUPLICATE_IPDU_ID              ((uint8)0x06U)
/** I-PDU is longer than expected */
# define PDUR_E_IPDU_TOO_LONG                  ((uint8)0x07U)
/** If  the  routing  table  is  invalid that is given to the PduR_EnableRouting or PduR_DisableRouting functions */
# define PDUR_E_ROUTING_PATH_GROUP_ID_INVALID  ((uint8)0x08U)
/** Pointer parameter is null */
# define PDUR_E_NULL_POINTER                   ((uint8)0x09U)
/** PDU Router initialization failed \trace SPEC-38417 */
# define PDUR_E_INIT_FAILED                    ((uint8)0x0BU)
/** Loss of a PDU instance (FIFO flushed because of an overrun) */
# define PDUR_E_PDU_INSTANCES_LOST             ((uint8)0x0AU)

/** An internal PDU Router error occurred that was eventually caused by incorrect or manipulated configuration data. */
# define PDUR_E_INVALID_CFG_DATA               ((uint8)0xA0U)
/** The indicated API was called although the current PDU Router configuration and internal state does not expect a
 *  call to this API. */
# define PDUR_E_UNEXPECTED_CALL                ((uint8)0xA1U)

/** Fatal error */
# define PDUR_E_FATAL                          ((uint8)0xFFU)
/** \defgroup ServiceIDs Service IDs
    \brief    Service IDs as reported to DET. */
/** Service ID PduR_Init */
# define PDUR_FCT_INIT                 ((uint8)0x00U)

/** Service ID PduR_GetVersionInfo */
# define PDUR_FCT_VERSIONINFO          ((uint8)0xf1U)
/** Service ID PduR_GetConfigurationId */
# define PDUR_FCT_CONFIGURATIONID      ((uint8)0xf2U)

/** Service ID internal function */
# define PDUR_FCT_MULTIIFRXIND         ((uint8)0x80U)
/** Service ID internal function */
# define PDUR_FCT_GWIF_RXIND           ((uint8)0x81U)
/** Service ID internal function */
# define PDUR_FCT_GWIF_TXCONF          ((uint8)0x82U)
/** Service ID internal function */
# define PDUR_FCT_GWIF_TXTT            ((uint8)0x83U)
/** Service ID internal function */
# define PDUR_FCT_GWIF_FQ              ((uint8)0x8BU)
/** Service ID internal function */
# define PDUR_FCT_GWTP_TPRXIND         ((uint8)0x85U)
/** Service ID internal function */
# define PDUR_FCT_GWTP_TPTXCONF        ((uint8)0x86U)
/** Service ID internal function */
# define PDUR_FCT_GWTP_ROUTE           ((uint8)0x87U)
/** Service ID internal function */
# define PDUR_FCT_GWTP_SORX            ((uint8)0x88U)
/** Service ID internal function */
# define PDUR_FCT_GWTP_CPYRX           ((uint8)0x89U)
/** Service ID internal function */
# define PDUR_FCT_GWTP_CPYTX           ((uint8)0x8AU)
/** Service ID internal function */
# define PDUR_FCT_GW_BUFMGR_PUT_BETWEEN_WRITEIDX_ENDIDX   ((uint8)0x8BU)
/** Service ID internal function */
# define PDUR_FCT_GW_BUFMGR_PUT_BETWEEN_WRITEIDX_READIDX  ((uint8)0x8CU)
/** Service ID internal function */
# define PDUR_FCT_GW_BUFMGR_GET_BETWEEN_READIDX_ENDIDX    ((uint8)0x8DU)
/** Service ID internal function */
# define PDUR_FCT_GW_BUFMGR_GET_BETWEEN_READIDX_WRITEIDX  ((uint8)0x8EU)
/** Service ID internal function */
# define PDUR_FCT_GWIF_FIFOMGR_APPENDELEMENT              ((uint8)0x93U)
/** Service ID internal function */
# define PDUR_FCT_GWIF_FIFOMGR_OVERWRITEELEMENT           ((uint8)0x94U)
/** Service ID internal function */
# define PDUR_FCT_GWTP_TRANSMITPREPARATION                ((uint8)0x95U)
/** Service ID internal function */
# define PDUR_FCT_PDUR_GWIF_RXINDICATION_ROUTE_FIB        ((uint8)0x96U)
/** Service ID internal function */
# define PDUR_FCT_PDUR_GWIF_RXINDICATION_UPDATE_FIB_AND_ROUTE        ((uint8)0x97U)
/** Service ID internal function */
# define PDUR_FCT_PDUR_GWIF_RXINDICATION_UPDATE_FIB_AND_ROUTE_MULTI  ((uint8)0x98U)
/** Service ID internal function */
# define PDUR_FCT_PDUR_GWTP_LOANDUPTRANSMIT  ((uint8)0x99U)
/** Service ID internal function */
# define PDUR_GWTP_TXINSTSM_TPTXCONFIRMATION_ACTIVEORABORTED ((uint8)0x9AU)
/** Service ID internal function */
# define PDUR_GWTP_TXINSTSM_TPCANCELTRANSMIT_FATALERROR ((uint8)0x9BU)
/** Service ID internal function */
# define PDUR_GWTP_FIFOSM_ACTIVATENEXT_FATALERROR ((uint8)0x9DU)
/** Service ID internal function */
# define PDUR_GWTP_RXSM_TPRXINDICATION_UNEXPECTEDCALL  ((uint8)0x9FU)
/** Service ID internal function */
# define PDUR_GWTP_TXINSTSM_TPTXCONFIRMATION_UNEXPECTEDCALL ((uint8)0xA2U)
 /** Service ID internal function */
# define PDUR_GWTP_FIFOSM_CHECKREADY2TRANSMIT_FATALERROR ((uint8)0xA4U)
/** Service ID internal function */
# define PDUR_GWTP_FIFOSM_RXFINISHED_FATALERROR ((uint8)0xA5U)
/** Service ID internal function */
# define PDUR_GWTP_FIFOSM_TXFINISHED_FATALERROR ((uint8)0xA6U)
/** Service ID internal function */
# define PDUR_RXSM_TPCANCELRECEIVE_FATALERROR ((uint8)0xA6U)
/** Service ID internal function */
# define PDUR_RXSM_COPYRXDATA_UNEXPECTEDCALL ((uint8)0xA7U)
/** Service ID internal function */
# define PDUR_GWTP_TXINSTSM_COPYTXDATA_UNEXPECTEDCALL ((uint8)0xA8U)
/** Service ID internal function */
# define PDUR_GWTP_MULTIPLESOURCEHANDLER_TPTXCONFIRMATION ((uint8)0xA9U)
/** Service ID internal function */
# define PDUR_GWTP_MULTIPLESOURCEHANDLER_CANCELTRANSMIT ((uint8)0xAAU)
/** Service ID internal function */
# define PDUR_GWTP_MULTIPLESOURCEHANDLER_COPYTXDATA ((uint8)0xABU)
/** Service ID internal function */
# define PDUR_GWTP_TXINSTSM_TPTRIGGERTRANSMIT_ACTIVEORABORTED ((uint8)0xACU)
/** Service ID internal function */
# define PDUR_GWIF_MULTIPLESOURCEHANDLER_CANCELTRANSMIT ((uint8)0xADU)
/** Service ID internal function */
# define PDUR_TXINSTSM_COPYTXDATA_RMTXINSTACTIVE ((uint8)0xAEU)
/** Service ID internal function */
# define PDUR_GW_BUFMGR_UPDATEMAINREADIDX ((uint8)0xAFU)
/** Service ID internal function */
# define PDUR_GWIF_MULTIPLESOURCEHANDLER_TRIGGERTRANSMIT ((uint8)0xB0U)
/** Service ID internal function */
# define PDUR_GW_BUFMGR_UPDATEMAIN_AFTER_GETDATA ((uint8)0xB1U)
/** Service ID internal function */
# define PDUR_GW_BUFMGR_UPDATEMAIN_AFTER_GETDATA_STATEHANDLER_BUFFER_FULL_OR_READ4WRITE ((uint8)0xB2U)
/** Service ID internal function */
# define PDUR_GW_BUFMGR_UPDATEMAIN_AFTER_GETDATA_STATEHANDLER_BUFFER_WRITE4READ ((uint8)0xB3U)
/** Service ID internal function */
# define PDUR_GWTP_TXSM_CHECK4TXFINISH_FATALERROR  ((uint8)0xB4U)
/** Service ID internal function */
# define PDUR_GWTP_ASSIGNASSOCIATEDBUFFER2DESTINATION  ((uint8)0xB5U)
/** Service ID internal function */
# define PDUR_GWTP_TXINSTSM_TPTRIGGERTRANSMIT_FATALERROR ((uint8)0xB6U)
/** Service ID internal function */
# define PDUR_FM_ACTIVATENEXT ((uint8)0xB7U)
/** Service ID internal function */
# define PDUR_RM_TPTRIGGERTRANSMIT_FATALERROR ((uint8)0xB8U)
/** Service ID internal function */
# define PDUR_GWIF_INIT_DEDICATEDTXBUFFER  ((uint8)0xB9U)
/** Service ID internal function */
# define PDUR_GWIF_INIT_TTSINGLEBUFFER ((uint8)0xBAU)
/** Service ID internal function */
# define PDUR_GWTP_INIT_DEDICATEDTXBUFFER ((uint8)0xBBU)
/** Service ID internal function */
# define PDUR_GWIF_SINGLEBUFFERHANDLING ((uint8)0xBCU)
/** Service ID internal function */
# define PDUR_GWIF_DFIFOANDTTFIFOHANDLING ((uint8)0xBDU)
/** Service ID internal function */
# define PDUR_FM_FREEFIFOELEMENT ((uint8)0xBFU)
/** Service ID internal function */
# define PDUR_FM_ACTIVATEWRITE ((uint8)0xC0U)
/** Service ID internal function */
# define PDUR_FMFINISHREAD ((uint8)0xC1U)
/** Service ID internal function */
# define  PDUR_FMACTIVATEREAD ((uint8)0xC2U)
/** Service ID internal function */
# define  PDUR_RXSM_STARTOFRECEPTION ((uint8)0xC3U)
/** Service ID internal function */
# define  PDUR_FINISHRECEPTION ((uint8)0xC4U)

# if(PDUR_RPG == STD_ON)
/** Service ID PduR_EnableRouting */
#  define PDUR_FCT_ENABLEROUTING        ((uint8)0x8DU)
/** Service ID PduR_DisableRouting */
#  define PDUR_FCT_DISABLEROUTING       ((uint8)0x8EU)
# endif

# define PDUR_E_NO_ERROR                ((uint8)0U)
# define PDUR_E_ALREADY_INITIALIZED     ((uint8)1U)
# define PDUR_INIT                      ((uint8)2U)
/* old define was PDUR_E_INVALID_REQUEST therefore used 1 in this case, later another number should be used */
# define PDUR_E_UNINIT                  ((uint8)1U)
# define PDUR_E_INVALID_HANDLE          ((uint8)4U)
/* \trace SPEC-38417 */
# define PDUR_E_PARAM_POINTER           ((uint8)4U)

# if (PDUR_USE_DUMMY_STATEMENT == STD_ON)
#  ifndef PDUR_DUMMY_STATEMENT_CONST    /* COV_PDUR_VAR_COMPATIBILITY */
#   define PDUR_DUMMY_STATEMENT_CONST(a) (void)(a)
#  endif
#  ifndef PDUR_DUMMY_STATEMENT  /* COV_PDUR_VAR_COMPATIBILITY */
#   define PDUR_DUMMY_STATEMENT(a) ((a) = (a))
#  endif
# else
#  ifndef PDUR_DUMMY_STATEMENT_CONST    /* COV_PDUR_VAR_COMPATIBILITY */
#   define PDUR_DUMMY_STATEMENT_CONST(a)
#  endif
#  ifndef PDUR_DUMMY_STATEMENT  /* COV_PDUR_VAR_COMPATIBILITY */
#   define PDUR_DUMMY_STATEMENT(a)
#  endif
# endif

# if (PDUR_DEV_ERROR_REPORT == STD_ON)
#  define PduR_Det_ReportError(ApiId, ErrorCode)  (void)Det_ReportError(PDUR_MODULE_ID, 0U, (ApiId), (ErrorCode))   /* PRQA S 3453 */   /* MD_MSR_19.7 */
# else
#  define PduR_Det_ReportError(ApiId, ErrorCode)  /* PRQA S 3453 */     /* MD_MSR_19.7 */
# endif /* (PDUR_DEV_ERROR_REPORT == STD_ON) */

# include "vstdlib.h"
/*********************************************************************************************************************/
/* User Configuration File Configurable Features (can be modified using the user configuration file)                 */
/*********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
# define PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */
# if(PDUR_USE_INIT_POINTER == STD_ON)
extern P2CONST(PduR_PBConfigType, PDUR_VAR_ZERO_INIT, PDUR_PBCFG) PduR_ConfigDataPtr;
# endif
# define PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
# define PDUR_START_SEC_CODE
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */

/**********************************************************************************************************************
  PduR_GetConfigurationId
**********************************************************************************************************************/
/*! \brief        Provides the unique identifier of the PDUR configuration.
 *  \details      If the API is called in pre-compile or post-build variant and the module is not initialized "0"
 *                else the configuration Id is returned.
 *   \return      the configuration Id
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   FALSE
 *   \synchronous TRUE
 *   \trace       CREQ-1235
 *   \trace       SPEC-1049, SPEC-38467, SPEC-1257, SPEC-1327
 *   \note        The function is called by the Application.
 *********************************************************************************************************************/
FUNC(PduR_PBConfigIdType, PDUR_CODE) PduR_GetConfigurationId(void);

/**********************************************************************************************************************
  PduR_Init
**********************************************************************************************************************/
/*!  \brief      This function initializes the PDUR and performs configuration consistency checks.
 *  \details     -
 *  \param       ConfigPtr  NULL_PTR if PDUR_USE_INIT_POINTER is STD_OFF
 *                          Pointer to the PduR configuration data if PDUR_USE_INIT_POINTER is STD_ON
 *  \return      none
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context     TASK
 *               by other administrative function calls.
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \trace       SPEC-38464
 *  \note        The function is used by the Ecu State Manager.
 *  \warning     PduR_Init shall not pre-empt any PDUR function.
 ********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Init(P2CONST(PduR_PBConfigType, AUTOMATIC, PDUR_PBCFG) ConfigPtr);

/**********************************************************************************************************************
  PduR_InitMemory
**********************************************************************************************************************/
/*! \brief       The function initialises variables, which cannot be initialised with the startup code.
 *  \details     -
 *  \return      none
 *  \pre         PduR_Init() is not called yet.
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \note        The function is called by the Application.
 ********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_InitMemory(void);

/**********************************************************************************************************************
 *  General PduR API
 *********************************************************************************************************************/
# if(PDUR_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
  PduR_GetVersionInfo
**********************************************************************************************************************/
/*! \brief       Returns the version information of the PDUR.
 *  \details     -
 *  \param       versionInfo     Pointer to where to store the version information of the PDUR.
 *  \return      none
 *  \pre         none
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       CREQ-1236
 *  \trace       SPEC-38447
 *  \note        The function is called by the Application.
**********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, PDUR_APPL_DATA) versionInfo);
# endif

# if (PDUR_RPG == STD_ON)
/**********************************************************************************************************************
PduR_EnableRouting
**********************************************************************************************************************/
/*! \brief       This function enables a routing path group.
 *  \details     If the routing path group does not exist or is already enabled, the function returns with no action.
 *               PduR_EnableRouting or PduR_DisableRouting calls for the same id.
 *  \param       id    Identification of the routing path group.
 *                  Routing path groups are defined in the PDU router configuration.
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \trace       SPEC-38435, SPEC-1254, SPEC-38437
 *  \note        The function is called by the BSW Mode Manager.
 *               The routing of a destination PDU of a PduRRoutingPath which is contained in multiple
 *               PduRRoutingPathGroups start if one related PduRRoutingPathGroups is started.
 **********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_EnableRouting(PduR_RoutingPathGroupIdType id);
# endif

# if (PDUR_RPG == STD_ON)
/**********************************************************************************************************************
PduR_DisableRouting
**********************************************************************************************************************/
/*! \brief       This function disables a routing path group.
 *  \details     If the routing path group does not exist or is already disabled, the function returns with no action.
 *               PduR_EnableRouting or PduR_DisableRouting calls for the same id.
 *  \param       id    Identification of the routing path group.
 *                     Routing path groups are defined in the PDU router configuration.
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \note        The function is called by the BSW Mode Manager.
 *               The routing of a destination PDU of a PduRRoutingPath which is contained in multiple
 *               PduRRoutingPathGroups stops if all related PduRRoutingPathGroups are stopped.
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_DisableRouting(PduR_RoutingPathGroupIdType id);
# endif

# if (PDUR_STARTOFRECEPTIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_StartOfReception
**********************************************************************************************************************/
/** \brief        This function will be called by the GwTp at the start of receiving an I-PDU.
 *  \details      The I-PDU might be fragmented into multiple N-PDUs
 *                (FF with one or more following CFs) or might consist of a single N-PDU (SF).
 *   \param       rmSrcIdx          Routing Manager source Id
 *   \param       info              Pointer to the buffer (SduDataPtr) contains MetaData if this feature is enabled
 *   \param       TpSduLength       Length of the entire GwTp TP SDU which will be received
 *   \param       bufferSizePtr     Pointer to the receive buffer in the receiving module.
 *                                   This parameter will be used to compute Block Size (BS) in the transport protocol module.
 *   \return      BufReq_ReturnType
 *                BUFREQ_OK         Connection has been accepted. RxBufferSizePtr indicates the available receive buffer.
 *                BUFREQ_E_NOT_OK   PduR_Init() has not been called
 *                                  or the GwTpRxPduId is not valid
 *                                  or the GwTpRxPduId is not forwarded in this identity
 *                                  or the info is not valid
 *                                  or the request was not accepted by the upper layer.
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
 *   \trace       SPEC-1096, SPEC-2020151
 *   \note        The function is called by the PduR.
***********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_StartOfReception(PduIdType rmSrcIdx,
                                                                     P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                                     PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
# endif

# if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_CopyRxData
**********************************************************************************************************************/
/*! \brief     This function is called by the PduR if data has to be to copied to the receiving module.
 *  \details   Several calls may be made during one transportation of an I-PDU.
 *  \param     rmSrcIdx         Routing Manager source Id
 *  \param     info               Pointer to the buffer (SduDataPtr) and its length (SduLength)
 *                                containing the data to be copied by PDU Router module in case of gateway
 *                                or upper layer module in case of reception.
 *  \param     bufferSizePtr     Available receive buffer after data has been copied.
 *  \return    BufReq_ReturnType
 *             BUFREQ_OK         Buffer request accomplished successful.
 *             BUFREQ_E_NOT_OK   PduR_Init() has not been called
 *                                  or the GwTpRxPduId is not valid
 *                                  or the GwTpRxPduId is not forwarded in this identity
 *                                  or the info is not valid
 *                                  or the request was not accepted by the upper layer.
 *             BUFREQ_E_BUSY     Currently no buffer of the requested size is available.
 *                               It's up the requester to retry request for a certain time.
 *                               The request was not accepted by the upper layer.
 *             BUFREQ_E_OVFL     The upper TP module is not able to receive the number of bytes.
 *                               The request was not accepted by the upper layer.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_CopyRxData(PduIdType rmSrcIdx, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
# endif

# if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_CopyTxData
**********************************************************************************************************************/
/*! \brief      This function is called by the PduR GwTp to query the transmit data of an I-PDU segment.
 *  \details    Each call to this function copies the next part of the transmit.
 *  \param      rmGDestRomIdx       ID of the GwTp I-PDU that will be transmitted.
 *  \param      info              Pointer to the destination buffer and the number of bytes to copy.
 *                                In case of gateway the PDU Router module will copy otherwise the source upper layer
 *                                module will copy the data. If not enough transmit data is available, no data is copied.
 *
 *                                A copy size of 0 can be used to indicate state changes in the retry parameter.
 *  \param      retry             not supported
 *  \param      availableDataPtr  Indicates the remaining number of bytes that are available in the PduR Tx buffer.
 *                                AvailableTxDataCntPtr can be used by TP modules that support dynamic payload lengths
 *                                (e.g. Iso FrTp) to determine the size of the following CFs.
 *  \return     BufReq_ReturnType
 *              BUFREQ_OK         The data has been copied to the transmit buffer successful.
 *              BUFREQ_E_NOT_OK   PduR_Init() has not been called
 *                                or the GwTpTxPduId is not valid
 *                                or the GwTpTxPduId is not forwarded in this identity
 *                                or the info is not valid
 *                                or the request was not accepted by the upper layer and no data has been copied.
 *              BUFREQ_E_BUSY     The request cannot be processed because the TX data is not available
 *                                and no data has been copied. The TP layer might retry later the copy process.
 *  \pre         PduR_Init() is executed success fully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp.
**********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_CopyTxData(PduIdType rmGDestRomIdx,
                                                               P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                               P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr);
# endif

# if (PDUR_TPTXCONFIRMATIONTXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_TpTxConfirmation
**********************************************************************************************************************/
/** \brief      The function confirms a successful transmission of a GwTp TX SDU or to report an error that
 *              occurred during transmission.
 *  \details    -
 *  \param      rmGDestRomIdx              lower layer Tp Handle that will be converted in the internal gateway handle.
 *  \param      result                     Result of the TP transmission
 *              E_OK                            The TP transmission has been completed successfully.\n
 *              E_NOT_OK                        The PDU Router is in the PDUR_UNINIT state\n
 *                                              or the id is not valid\n
 *                                              or the id is not forwarded in this identity\n
 *                                              or the request was not accepted by the destination upper layer.\n
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR GwTp.
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmTp_TpTxConfirmation(PduIdType rmGDestRomIdx, Std_ReturnType result);
# endif

# if (PDUR_TRANSMITFCTPTRIDXOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
   PduR_RmTp_MultipleSourceHandler_Transmit
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to trigger the transmission on the destination buses in case of a
 *                FanIn Transport Protocol Routing.
 *   \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *                The call is routed to multiple TP module using the appropriate I-PDU handle of the destination layer.
 *   \param       txMulti2LoIdx             ID of the transmitted GwTp I-PDU.
 *   \param       info                      the pointer to the data
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
 *   \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_Transmit(PduIdType txMulti2LoIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if (PDUR_CANCELTRANSMITFCTPTRIDXOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
   PduR_RmTp_MultipleSourceHandler_CancelTransmit
**********************************************************************************************************************/
/*! \brief        The function is called by the PduR to cancel the transmission on the destination buses in case of a
 *                FanIn Transport Protocol Routing.
 *   \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *                The call is routed to multiple TP module using the appropriate I-PDU handle of the destination layer.
 *   \param       txMulti2LoIdx             ID of the transmitted GwTp I-PDU.
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
 *   \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_CancelTransmit(PduIdType txMulti2LoIdx);
# endif

# if (PDUR_COPYTXDATAFCTPTRIDXOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_MultipleSourceHandler_CopyTxData
**********************************************************************************************************************/
/*! \brief      This function is called by the PduR GwTp multiple times to query the transmit data of an I-PDU segment.
 *  \details    Each call to this function copies the next part of the transmit.
 *  \param      txMulti2LoStateIdx          ID of the transmitted GwIf I-PDU
 *  \param      info                        Pointer to the destination buffer and the number of bytes to copy.
 *                                          In case of gateway the PDU Router module will copy otherwise the source upper layer
 *                                          module will copy the data. If not enough transmit data is available, no data is copied.
 *
 *                                          A copy size of 0 can be used to indicate state changes in the retry parameter.
 *  \param      retry                       not supported
 *  \param      availableDataPtr            Indicates the remaining number of bytes that are available in the PduR Tx buffer.
 *                                          AvailableTxDataCntPtr can be used by TP modules that support dynamic payload lengths
 *                                          (e.g. Iso FrTp) to determine the size of the following CFs.
 *  \return     BufReq_ReturnType
 *              BUFREQ_OK                   The data has been copied to the transmit buffer successfully.
 *              BUFREQ_E_NOT_OK             PduR_Init() has not been called
 *                                          or the GwTpTxPduId is not valid
 *                                          or the GwTpTxPduId is not forwarded in this identity
 *                                          or the info is not valid
 *                                          or the request was not accepted by the upper layer and no data has been copied.
 *              BUFREQ_E_BUSY               The request cannot be processed because the TX data is not available
 *                                          and no data has been copied. The TP layer might retry later the copy process.
 *  \pre         PduR_Init() is executed success fully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR GwTp.
**********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_CopyTxData(PduIdType txMulti2LoStateIdx, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                                                     P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC,
                                                                                                                                                  PDUR_APPL_DATA) availableDataPtr);
# endif

# if (PDUR_TPTXCONFIRMATIONFCTPTRUSEDOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_MultipleSourceHandler_TpTxConfirmation
**********************************************************************************************************************/
/*! \brief        The function is called to confirm or abort a transport protocol I-PDU routing.
 *  \details      The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *                The call is routed to an upper Tp module or to the gateway depending on the pending Confirmation.
 *   \param       txMulti2LoStateIdx          ID of the transmitted GwIf I-PDU
 *   \param       result                       not used, but expected due to function pointer table type
 *   \return      none
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
 *   \note
 **********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_TpTxConfirmation(PduIdType txMulti2LoStateIdx, Std_ReturnType result);
# endif

# if (PDUR_TPRXINDICATIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_TpRxIndication
**********************************************************************************************************************/
/*! \brief      The function is called by the PduR GwTp to indicate the complete reception of a GwTp SDU
 *              or to report an error that occurred during reception.
 *  \details    -
 *              The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *              The call is routed to an upper TP module using the appropriate I-PDU handle of the destination layer.
 *  \param      rmSrcIdx                      Routing Manager source Id
 *  \param      result                          Result of the TP reception
 *              E_OK                            The TP transmission has been completed successfully.\n
 *              E_NOT_OK                        The PDU Router is in the PDUR_UNINIT state\n
 *                                              or the id is not valid\n
 *                                              or the id is not forwarded in this identity\n
 *                                              or the request was not accepted by the destination upper layer.\n
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp.
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmTp_TpRxIndication(PduIdType rmSrcIdx, Std_ReturnType result);
# endif

# if (PDUR_STARTOFRECEPTIONRXSMTRANSITION  == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_StartOfReception_RmRxIdle
 *********************************************************************************************************************/
/*! \brief      The function is called by the PduR GwTp to start a reception of a GwTp SDU
 *  \details    Rx State machine in state "IDLE" The call is routed to RxSm
 *  \param      rmSrcIdx                      Routing Manager source Id
 *  \param      TpSduLength       Length of the entire GwTp TP SDU which will be received
 *  \param      info                            Pointer to the buffer (SduDataPtr) and its length (SduLength)
 *  \param      bufferSizePtr                   Pointer to the receive buffer in the receiving module.
 *  \return      BufReq_ReturnType
 *               BUFREQ_OK         routing accepted and buffer allocated.
 *               BUFREQ_E_NOT_OK   routing not accepted (FIFO full) no Tp buffer available.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp (internal function)
***********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_StartOfReception_RmRxIdle(PduR_RmSrcRomIterType rmSrcIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength,
                                                                              P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
# endif

# if (PDUR_STARTOFRECEPTIONRXSMTRANSITION  == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_StartOfReception_UnexpectedCall
 *********************************************************************************************************************/
/*! \brief      The function is called if the start of reception is called unexpectedly.
 *  \details    Rx State machine in state "Active or Aborted"
 *  \param      rmSrcIdx                      Routing Manager source Id
 *  \param      TpSduLength       Length of the entire GwTp TP SDU which will be received
 *  \param      info                            Pointer to the buffer (SduDataPtr) and its length (SduLength)
 *  \param      bufferSizePtr                   Pointer to the receive buffer in the receiving module.
 *  \return      BufReq_ReturnType
 *               BUFREQ_E_NOT_OK   unexpected call
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp (internal function)
***********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_StartOfReception_UnexpectedCall(PduR_RmSrcRomIterType rmSrcIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                                                    PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
# endif


# if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RxSm_CopyRxData_RmRxAborted
**********************************************************************************************************************/
/*! \brief     This function is called by the PduR if data has to be copied to the tx buffer
 *  \details   Several calls may be made during one transportation of an I-PDU.
 *             Rx State machine in state "Active"
 *  \param     rmSrcIdx            Routing Manager source Id
 *  \param     info               Pointer to the buffer (SduDataPtr) and its length (SduLength)
 *                                containing the data to be copied by PDU Router module in case of gateway
 *                                or upper layer module in case of reception.
 *  \param     bufferSizePtr     Available receive buffer after data has been copied.
 *  \return    BufReq_ReturnType
 *             BUFREQ_OK         Copy data were successful.
 *             BUFREQ_E_NOT_OK   Copy data fails.
 *             BUFREQ_E_BUSY     Currently no buffer of the requested size is available.
 *                               It's up the requester to retry request for a certain time.
 *                               The request was not accepted by the upper layer.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp (internal function)
**********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_CopyRxData_RmRxActive(PduR_RmSrcRomIterType rmSrcIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                          SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
# endif

# if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RxSm_CopyRxData_RmRxAborted
**********************************************************************************************************************/
/*! \brief     This function is called if data has to be copied to the tx buffer but the routing is
 *             already aborted.
 *  \details   Rx State machine in state "Aborted"
 *  \param     rmSrcIdx           Routing Manager source Id
 *  \param     info               Pointer to the buffer (SduDataPtr) and its length (SduLength)
 *                                containing the data to be copied by PDU Router module in case of gateway
 *                                or upper layer module in case of reception.
 *  \param     bufferSizePtr     Available receive buffer after data has been copied.
 *  \return    BufReq_ReturnType
 *             BUFREQ_E_NOT_OK   Copy data fails because routing is already aborted.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp (internal function)
**********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_CopyRxData_RmRxAborted(PduR_RmSrcRomIterType rmSrcIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                           SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
# endif

# if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RxSm_CopyRxData_UnexpectedCall
**********************************************************************************************************************/
/*! \brief       This function is called by the PduR if data has to be to copied to the tx buffer unexpectedly.
 *  \details     Rx State machine in state "Idle"
 *  \param       rmSrcIdx         Routing Manager source Id
 *  \param       info               Pointer to the buffer (SduDataPtr) and its length (SduLength)
 *                                  containing the data to be copied by PDU Router module in case of gateway
 *                                  or upper layer module in case of reception.
 *  \param       bufferSizePtr     Available receive buffer after data has been copied.
 *  \return      BufReq_ReturnType
 *               BUFREQ_E_NOT_OK   Copy data fails because the RxSM is still idle. A StartOfReception is expected.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp (internal function)
**********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_CopyRxData_UnexpectedCall(PduR_RmSrcRomIterType rmSrcIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                              SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
# endif

# if (PDUR_TPRXINDICATIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpRxIndication_UnexpectedCall
 *********************************************************************************************************************/
/*! \brief       The function is called by the PduR GwTp to indicate the complete reception of a GwTp SDU
 *               or to finish the reception if an error occurs.
 *  \details     Rx State machine in state "Active or Aborted"
 *  \param       rmSrcIdx             Routing Manager source Id
 *  \param       result                          Result of the TP reception
 *               E_OK                            The TP reception has been completed successfully.\n
 *               E_NOT_OK                        The TP reception was failing.
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp.
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RxSm_TpRxIndication_UnexpectedCall(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result);
# endif

# if (PDUR_TPRXINDICATIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpRxIndication_RmRxActiveOrRmRxAborted
 *********************************************************************************************************************/
/*! \brief       The function is called by the PduR GwTp if an indication is called unexpectedly
 *  \details     Rx State machine in state "Idle"
 *  \param       rmSrcIdx              Routing Manager source Id
 *  \param       result                          Result of the TP reception
 *               E_NOT_OK                        The call is unexpected.
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR GwTp.
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RxSm_TpRxIndication_RmRxActiveOrRmRxAborted(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result);
# endif

# if (PDUR_TPCANCELRECEIVEFIFOSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpCancelReceive_RmRxActive
 *********************************************************************************************************************/
/*! \brief      The function is called to cancel a reception if a routing is disabled.
 *  \details    -
 *  \param       rmSrcIdx    Routing Manager source Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        This function is called in context of the DisableRouting()
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RxSm_TpCancelReceive_RmRxActive(PduR_RmSrcRomIterType rmSrcIdx);
# endif

# if (PDUR_TPCANCELRECEIVEFIFOSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpCancelReceive_FatalError
 *********************************************************************************************************************/
/*! \brief       If this function is called something went totally wrong.
 *  \details     -
 *  \param       rmSrcIdx   Routing Manager source Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        This function is called in context of the DisableRouting()
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RxSm_TpCancelReceive_FatalError(PduR_RmSrcRomIterType rmSrcIdx);
# endif

# if (PDUR_TPCANCELRECEIVEFIFOSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpCancelReceive_RmRxAborted
 *********************************************************************************************************************/
/*! \brief       The function is called in case the reception is already aborted
 *  \details     -
 *  \param       rmSrcIdx    Routing Manager source Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        This function is called in context of the DisableRouting()
 ***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RxSm_TpCancelReceive_RmRxAborted(PduR_RmSrcRomIterType rmSrcIdx);
# endif

# if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_CheckReady2Transmit_RmTxIdle
 *********************************************************************************************************************/
/*! \brief This function is called to check if the threshold is reached and the transmission could be triggered
 *  \details -
 *  \param  rmSrcIdx Routing Manager source Id
 *  \pre
 *  \context       TASK|ISR1|ISR2
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_CheckReady2Transmit_RmTxIdle(PduR_RmSrcRomIterType rmSrcIdx);
# endif

# if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_CheckReady2Transmit_RmTxReceptionActive
 *********************************************************************************************************************/
/*! \brief This function is called to check if the threshold is reached and the transmission could be triggered
 *  \details
 *  \param         rmSrcIdx Routing Manager source Id
 *  \pre
 *  \context       TASK|ISR1|ISR2
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_CheckReady2Transmit_RmTxReceptionActive(PduR_RmSrcRomIterType rmSrcIdx);
# endif

# if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_CheckReady2Transmit_NoAction
 *********************************************************************************************************************/
/*! \brief This function is called to check if the threshold is reached and the transmission could be triggered
 *  \details
 *  \param        rmSrcIdx Routing Manager source Id
 *  \pre
 *  \context      TASK|ISR1|ISR2
 *  \reentrant    TRUE
 *  \synchronous  TRUE
 *  \note        -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_CheckReady2Transmit_NoAction(PduR_RmSrcRomIterType rmSrcIdx);
# endif

# if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFoElement_ReadActive
 *********************************************************************************************************************/
/*! \brief  Flush Queue while transmission is active
 *  \param[in] fmFifoElementRamIdx  Fifo element read or write Idx
 *  \return -
 *  \context TASK|ISR1|ISR2
 *  \note -
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFoElement_ReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
# endif

# if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFoElement_ReadInActive
 *********************************************************************************************************************/
/*! \brief  Flush Queue and transmission is not active
 *  \param[in] fmFifoElementRamIdx  Fifo element read or write Idx
 *  \return -
 *  \context TASK|ISR1|ISR2
 *  \note   -
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFoElement_ReadInActive(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
# endif

# if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFoElement_NoAction
 *********************************************************************************************************************/
/*! \brief     Flush Queue but there is no queue to flush
 *  \param[in] fmFifoElementRamIdx Fifo element read or write Idx
 *  \return  -
 *  \context TASK|ISR1|ISR2
 *  \note -
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFoElement_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
# endif

# if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxReceptionActive
 *********************************************************************************************************************/
/*! \brief This function is called if the reception is finished to set the suitable state a and
 *         to trigger the transmissiong
 *  \details
 *  \param       rmSrcIdx Routing Manager source Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxReceptionActive(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result);
# endif


# if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxIdle
 *********************************************************************************************************************/
/*! \brief This function is called if the reception is finished to set the suitable state a and
 *         to trigger the transmission
 *  \details
 *  \param       rmSrcIdx Routing Manager source Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
  *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxIdle(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result);
# endif

# if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxTransmissionFinished
 *********************************************************************************************************************/
/*! \brief This function is called if the reception is finished to set the suitable state a and
 *         to trigger the transmission
 *  \details
 *  \param       rmSrcIdx Routing Manager source Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
  *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxTransmissionFinished(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result);
# endif

# if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxReceptionTransmissionActive
 *********************************************************************************************************************/
/*! \brief This function is called if the reception is finished to set the suitable state a and
 *         to trigger the transmission
 *  \details
 *  \param       rmSrcIdx Routing Manager source Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
  *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxReceptionTransmissionActive(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result);
# endif

# if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_NoAction
 *********************************************************************************************************************/
/*! \brief This function is called if the reception is finished to set the suitable state a and
 *         to trigger the transmission
 *  \details
 *  \param       rmSrcIdx Routing Manager source Id
 *  \pre         TASK|ISR1|ISR2
 *  \context
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_NoAction(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result);
# endif


# if (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishTransmission_RmTxReceptionFinishedTransmissionActive
 *********************************************************************************************************************/
/*! \brief This function is called if the transmission is finished o set the suitable state a and
 *         trigger the next pending routing
 *  \details
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishTransmission_RmTxReceptionFinishedTransmissionActive(PduR_RmDestRomIterType rmGDestRomIdx, Std_ReturnType result);
# endif

# if (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishTransmission_RmTxReceptionTransmissionActive
 *********************************************************************************************************************/
/*! \brief This function is called if the transmission is finished o set the suitable state a and
 *         trigger the next pending routing
 *  \details
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishTransmission_RmTxReceptionTransmissionActive(PduR_RmDestRomIterType rmGDestRomIdx, Std_ReturnType result);
# endif

# if (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishTransmission_FatalError
 *********************************************************************************************************************/
/*! \brief This function is called if the transmission is finished o set the suitable state a and
 *         trigger the next pending routing
 *  \details
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Rm_FinishTransmission_FatalError(PduR_RmDestRomIterType rmGDestRomIdx, Std_ReturnType result);
# endif

# if (PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_NoAction
 *********************************************************************************************************************/
/*! \brief       The function is called if a routing is aborted
 *  \details     Link between RxSm and TxSm
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_NoAction(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if (PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_FmWriteReadActive
 *********************************************************************************************************************/
/*! \brief      The function is called if a transmission is finished to activate the next pending routing in the FiFo
 *  \details     RxFinish -> activate next in the TxConfirmation context.
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_FmWriteReadActive(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if (PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_FmWriteFinishedReadActive
 *********************************************************************************************************************/
/*! \brief       The function is called if a transmission is finished to activate the next pending routing in the FiFo
 *  \details     Active -> nothing to do
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_FmWriteFinishedReadActive(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FatalError
 *********************************************************************************************************************/
/*! \brief  This function is called to activate the next pending routing in the FIFO
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif


# if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FmWriteFinishedReadPending
 *********************************************************************************************************************/
/*! \brief  This function is called to activate the next pending routing in the FIFO
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FmWriteFinishedReadPending(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FmWriteActive
 *********************************************************************************************************************/
/*! \brief  This function is called to activate the next pending routing in the FIFO
 *
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \param
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FmWriteActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif


# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmWriteActive
 *********************************************************************************************************************/
/*! \brief  This function is called to activate the next pending routing in the FIFO
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmWriteActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_NoAction
 *********************************************************************************************************************/
/*! \brief   This function is called to activate the read operation on the FIFO
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FatalError
 *********************************************************************************************************************/
/*! \brief   This function is called if somthing went tottaly wrong
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmWriteFinishedReadPending
 *********************************************************************************************************************/
/*! \brief   This function is called to activate the read operation on the FIFO
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmWriteFinishedReadPending(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_NoAction
 *********************************************************************************************************************/
/*! \brief  This function is called if the write operation to the FIFO is finished
 *  \details
 *  \param       fmFifoElementRamWriteIdx           Fifo Emement Write Idx
 *  \param
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmReadFinished
 *********************************************************************************************************************/
/*! \brief  This function is called if the write operation to the FIFO is finished
 *  \details
 *  \param       fmFifoElementRamWriteIdx           Fifo Emement Write Idx
 *  \param
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmReadFinished(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmWriteReadActive
 *********************************************************************************************************************/
/*! \brief  This function is called if the write operation to the FIFO is finished
 *  \details
 *  \param       fmFifoElementRamWriteIdx           Fifo Emement Write Idx
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmWriteReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmWriteActive
 *********************************************************************************************************************/
/*! \brief  This function is called if the write operation to the FIFO is finished
 *  \details
 *  \param       fmFifoElementRamWriteIdx                      Routing Manager source Id
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmWriteActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmWriteFinishedReadActive
 *********************************************************************************************************************/
/*! \brief  This function is called if the read operation to the FIFO is finished
 *  \details     fmFifoElementRamReadIdx  Reas Index to the current fifo element.
 *  \param
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmWriteFinishedReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif


# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmWriteReadActive
 *********************************************************************************************************************/
/*! \brief  This function is called if the read operation to the FIFO is finished
 *  \details     fmFifoElementRamReadIdx  Read Index to the current fifo element.
 *  \param
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmWriteReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FatalError
 *********************************************************************************************************************/
/*! \brief  This function is called if the read operation to the FIFO is finished
 *  \details     fmFifoElementRamReadIdx  Reas Index to the current fifo element.
 *  \param
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -    -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_NoAction
 *********************************************************************************************************************/
/*! \brief  This function is called if the read operation to the FIFO is finished
 *  \details     fmFifoElementRamReadIdx  Reas Index to the current fifo element.
 *  \param
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -    -
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateWrite_FmAllocatedWithBuffer
 *********************************************************************************************************************/
/*! \brief  This function is called to activate the write operation on the FIFO
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateWrite_FmAllocatedWithBuffer(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateWrite_FatalError
 *********************************************************************************************************************/
/*! \brief  This function is called to activate the write operation on the FIFO
 *  \details
 *  \param       fmFifoElementRamWriteIdx    Write Index to the current fifo element.
 *  \pre
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Fm_ActivateWrite_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
# endif

# if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_PutData
 *********************************************************************************************************************/
/*! \brief      Call to put data into the buffer.
 *  \param[in]  txBufferElementIdx       read index in the transport protocol Tx buffer
 *  \param[in]  info                     contains the data pointer and its length.
 *  \return     BUFREQ_OK                Copy action was successful.
 *              BUFREQ_E_NOT_OK          Copy action was not successful.
 *  \context    The function is called in receive context.
 *  \note       -
 *********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_PutData(PduR_BmTxBufferRomIterType txBufferElementIdx, PduR_BmTxBufferArrayRamIterType pduLength, CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
# endif


# if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_GetData
 *********************************************************************************************************************/
/*!  \brief      Call to get queued data from the buffer.
 *   \param[in]  bmTxBufferInstanceRomIdx instance Idx
 *   \param[in]  info                       contains the data pointer and its length.
 *   \return     BUFREQ_OK              Copy action was successful.
 *               BUFREQ_E_NOT_OK        Copy action was not successful.
 *   \context    The function is called in transmit context.
 *   \note       -
 *********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_GetData(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                          CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
# endif


# if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
* PduR_Bm_ReadData
*********************************************************************************************************************/
/*! \brief     Read Data from the TxBuffer. Last is Best semantic
*  \param[in]  txBufferElementIdx         TxBuffer element index
*  \param[out] info        contains the data pointer and its length.
*  \return     none
*  \context    The function is called in context of the PduR_RmIf_TriggerTransmit API.
*  \note       This function only reads data without move.
*********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Bm_ReadData(PduR_BmTxBufferRomIterType txBufferElementIdx, PduR_BmTxBufferArrayRamIterType pduLength, CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
# endif

# if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTriggerTransmit_RmTxinstIdle
 *********************************************************************************************************************/
/*! \brief       The function is called to start the transmission and perform TxSm state handling
 *  \details     TxSm is in the state "Idle"
 *  \param       rmDestIdx  Tp Gateway routing specific destination Id of a routing path
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpTriggerTransmit_RmTxinstIdle(PduR_RmDestRomIterType rmDestIdx);
# endif

# if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTriggerTransmit_FatalError
 *********************************************************************************************************************/
/*! \brief       If this function is called something went totally wrong
 *  \details     -
 *  \param       rmDestIdx  Tp Gateway routing specific destination Id of a routing path
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpTriggerTransmit_FatalError(PduR_RmDestRomIterType rmDestIdx);
# endif

# if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_CopyTxData_RmTxinstActive
 *********************************************************************************************************************/
/*! \brief      This function is called by the PduR GwTp to query the transmit data of an I-PDU segment.
 *  \details    TxSm is in the state "Active"
 *  \param      rmGDestRomIdx Routing Manager destination Id
 *  \param      info              Pointer to the destination buffer and the number of bytes to copy.
 *                                In case of gateway the PDU Router module will copy otherwise the source upper layer
 *                                module will copy the data. If no enough transmit data is available, no data is copied.
 *
 *                                A copy size of 0 can be used to indicate state changes in the retry parameter.
 *  \param      retry             not supported
 *  \param      availableDataPtr  Indicates the remaining number of bytes that are available in the PduR Tx buffer.
 *                                AvailableTxDataCntPtr can be used by TP modules that support dynamic payload lengths
 *                                (e.g. Iso FrTp) to determine the size of the following CFs.
 *  \return     BufReq_ReturnType
 *              BUFREQ_OK         The data has been copied successfully.
 *              BUFREQ_E_NOT_OK   Get data fails.
 *  \pre         PduR_Init() is executed success fully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_TxInstSm_CopyTxData_RmTxinstActive(PduR_RmGDestRomIterType rmGDestRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                  SduDataPtrType sduDataPtr,
                                                                                  P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC,
                                                                                                                                                 PDUR_APPL_DATA) availableDataPtr);
# endif

# if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_CopyTxData_RmTxinstActive
 *********************************************************************************************************************/
/*! \brief      This function is called by the PduR GwTp to query the transmit data of an I-PDU segment.
 *  \details    TxSm is in the state "Active"
 *  \param      rmGDestRomIdx Routing Manager destination Id
 *  \param      info              Pointer to the destination buffer and the number of bytes to copy.
 *                                In case of gateway the PDU Router module will copy otherwise the source upper layer
 *                                module will copy the data. If no enough transmit data is available, no data is copied.
 *
 *                                A copy size of 0 can be used to indicate state changes in the retry parameter.
 *  \param      retry             not supported
 *  \param      availableDataPtr  Indicates the remaining number of bytes that are available in the PduR Tx buffer.
 *                                AvailableTxDataCntPtr can be used by TP modules that support dynamic payload lengths
 *                                (e.g. Iso FrTp) to determine the size of the following CFs.
 *  \return     BufReq_ReturnType
 *              BUFREQ_OK         The data has been copied successfully.
 *              BUFREQ_E_NOT_OK   Get data fails.
 *  \pre         PduR_Init() is executed success fully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_TxInstSm_CopyTxData_UnexpectedCall(PduR_RmGDestRomIterType rmGDestRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                  SduDataPtrType sduDataPtr,
                                                                                  P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC,
                                                                                                                                                 PDUR_APPL_DATA) availableDataPtr);
# endif

# if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_TxInstSm_CopyTxData_UnexpectedCall
 *********************************************************************************************************************/
/*! \brief      This function is called by the PduR GwTp to query the transmit data of an I-PDU segment. But this call
 *              is unexpected, because the TxSm is "Idle"
 *  \details    TxSm is in the state "Idle"
 *  \param      rmGDestRomIdx Routing Manager destination Id
 *  \param      info              Pointer to the destination buffer and the number of bytes to copy.
 *                                In case of gateway the PDU Router module will copy otherwise the source upper layer
 *                                module will copy the data. If no enough transmit data is available, no data is copied.
 *
 *                                A size of copy size of 0 can be used to indicate state changes in the retry parameter.
 *  \param      retry             not supported
 *  \param      availableDataPtr  Indicates the remaining number of bytes that are available in the PduR Tx buffer.
 *                                AvailableTxDataCntPtr can be used by TP modules that support dynamic payload lengths
 *                                (e.g. Iso FrTp) to determine the size of the following CFs.
 *  \return     BufReq_ReturnType
 *               BUFREQ_E_NOT_OK   Call is unexpected
 *  \pre         PduR_Init() is executed success fully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_TxInstSm_CopyTxData_UnexpectedCall(PduR_RmGDestRomIterType rmGDestRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                       SduDataPtrType sduDataPtr,
                                                                                       P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC,
                                                                                                                                                      PDUR_APPL_DATA) availableDataPtr);
# endif

# if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_CopyTxData_RmTxinstAborted
 *********************************************************************************************************************/
/*! \brief      This function is called by the PduR GwTp to query the transmit data of an I-PDU segment. But the
 *              routing is already aborted.
 *  \details    TxSm is in the state "Aborted"
 *  \param      rmGDestRomIdx Routing Manager destination Id
 *  \param      info              Pointer to the destination buffer and the number of bytes to copy.
 *                                In case of gateway the PDU Router module will copy otherwise the source upper layer
 *                                module will copy the data. If no enough transmit data is available, no data is copied.
 *
 *                                A size of copy size of 0 can be used to indicate state changes in the retry parameter.
 *  \param      retry             not supported
 *  \param      availableDataPtr  Indicates the remaining number of bytes that are available in the PduR Tx buffer.
 *                                AvailableTxDataCntPtr can be used by TP modules that support dynamic payload lengths
 *                                (e.g. Iso FrTp) to determine the size of the following CFs.
 *  \return     BufReq_ReturnType
 *               BUFREQ_E_NOT_OK   Routing is aborted
 *  \pre         PduR_Init() is executed success fully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 ***********************************************************************************************************************/
extern FUNC(BufReq_ReturnType, PDUR_CODE) PduR_TxInstSm_CopyTxData_RmTxinstAborted(PduR_RmGDestRomIterType rmGDestRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                   SduDataPtrType sduDataPtr,
                                                                                   P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC,
                                                                                                                                                  PDUR_APPL_DATA) availableDataPtr);
# endif

# if (PDUR_TPTXCONFIRMATIONTXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTxConfirmation_RmTxinstActiveOrRmTxinstAborted
 *********************************************************************************************************************/
/** \brief      The function confirms a successful transmission of a GwTp TX SDU or to report an error that
 *              occurred during transmission.
 *  \details    TxSm is in the state Active Or Aborted. In case of 1:N result E_NOT_OK is acceptable, decrement Confirmation count.
 *  \param      rmGDestRomIdx Routing Manager destination Id
 *  \param      result                   Result of the TP transmission
 *              E_OK                     The TP transmission has been completed successfully.\n
 *              E_NOT_OK                 The transmission fails.
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR GwTp.
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_TxInstSm_TpTxConfirmation_RmTxinstActiveOrRmTxinstAborted(PduR_RmGDestRomIterType rmGDestRomIdx, Std_ReturnType result);
# endif

# if (PDUR_TPTXCONFIRMATIONTXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTxConfirmation_UnexpectedCall
 *********************************************************************************************************************/
/** \brief      The function is called unexpectedly because the TxSm is in state "Idle"
 *  \details
 *  \param      rmGDestRomIdx Routing Manager destination Id
 *  \param      result                   Result of the TP transmission
 *              E_OK                     The TP transmission has been completed successfully.\n
 *              E_NOT_OK                 The transmission fails.
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note       The function is called by the PduR GwTp.
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_TxInstSm_TpTxConfirmation_UnexpectedCall(PduR_RmGDestRomIterType rmGDestRomIdx, Std_ReturnType result);
# endif

# if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpCancelTransmit_RmTxinstActive
 *********************************************************************************************************************/
/*! \brief      The function is called to cancel a transmission if a routing is disabled.
 *  \details    -
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        This function is called in context of the DisableRouting()
***********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpCancelTransmit_RmTxinstActive(PduR_RmDestRomIterType rmGDestRomIdx);
# endif

# if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpCancelTransmit_RmTxinstAborted
 *********************************************************************************************************************/
/*! \brief      The function is called to cancel a transmission but the routing is already aborted
 *  \details    -
 *  \param       rmGDestRomIdx Routing Manager destination Id
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        This function is called in context of the DisableRouting()
***********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpCancelTransmit_RmTxinstAborted(PduR_RmDestRomIterType rmGDestRomIdx);
# endif

# if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpCancelTransmit_RmTxinstAborted
 *********************************************************************************************************************/
/*! \brief      The function is called to cancel a transmission if a routing is disabled.
 *  \details    -
 *  \param       rmGDestRomIdx Routing Manager destination Idth
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        This function is called in context of the DisableRouting()
***********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpCancelTransmit_RmTxinstAborted(PduR_RmDestRomIterType rmGDestRomIdx);
# endif

# if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpCancelTransmit_FatalError
 *********************************************************************************************************************/
/*! \brief       If this function is called something went totally wrong
 *  \details     Tx State machine in state "FatalError"
 *  \param       rmGDestRomIdx Routing Manager destination Idth
 *  \return      FatalError -> E_NOT_OK unexpected call.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        This function is called in context of the DisableRouting()
***********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpCancelTransmit_FatalError(PduR_RmDestRomIterType rmGDestRomIdx);
# endif



# if (PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_FmWriteFinishedReadActive
 *********************************************************************************************************************/
/*! \brief           This function is called if a routing is cancelled and the reception is not finished
 *                   (Indication is pending) but the transmission is finished.
 *  \details         Tx State machine in state "TxFinished"
 *  \param           rmGDestRomIdx Routing Manager destination Id
 *  \return           Idle -> E_NOT_OK unexpected call.
 *  \pre              PduR_Init() is executed successfully.
 *  \context          TASK|ISR1|ISR2
 *  \reentrant        TRUE
 *  \synchronous      TRUE
 *  \note             This function is called in context of the DisableRouting()
******************************************************************************************************************** */
extern FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_FmWriteFinishedReadActive(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif

# if (PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_FmWriteActive
 *********************************************************************************************************************/
/*! \brief           This function is called if a routing is cancelled and the reception is not finished
 *                   (Indication is pending) but the transmission is finished.
 *  \details         Tx State machine in state "TxFinished"
 *  \param           rmGDestRomIdx Routing Manager destination Id
 *  \return           Idle -> E_NOT_OK unexpected call.
 *  \pre              PduR_Init() is executed successfully.
 *  \context          TASK|ISR1|ISR2
 *  \reentrant        TRUE
 *  \synchronous      TRUE
 *  \note             This function is called in context of the DisableRouting()
******************************************************************************************************************** */
extern FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_FmWriteActive(PduR_RmGDestRomIterType rmGDestRomIdx);
# endif


# if (PDUR_TXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
  PduR_RmIf_MultipleSourceHandler_Transmit
**********************************************************************************************************************/
/*! \brief        The function is called by the PduR to trigger the transmission on the destination buses in case of a
 *                FanIn routing.
 *   \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *                The call is routed to multiple IF module using the appropriate I-PDU handle of the destination layer.
 *   \param       txIf2LoMultiIdx           ID of the transmitted GwIf I-PDU
 *   \param       info                      Pointer to the destination buffer and the number of bytes to copy.
 *   \param       result                    Result of the multiple transmission. If one module accepts the transmission,
 *                                          the return value is E_OK;
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
 *   \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_Transmit(PduIdType txIf2LoMultiIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if (PDUR_CANCELTRANSMITFCTPTRIDXOFTXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_CancelTransmit
 *********************************************************************************************************************/
/*! \brief        The function is called by the PduR to cancel the transmission on the destination buses in case of a
 *                FanIn Transport Protocol Routing.
 *   \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *                The call is routed to multiple TP module using the appropriate I-PDU handle of the destination layer.
 *   \param       txIfMulti2LoIdx           ID of the transmitted GwTp I-PDU.
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
 *   \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_CancelTransmit(PduIdType txIfMulti2LoIdx);
# endif

# if (PDUR_IFTXCONFIRMATIONFCTPTRIDXOFTXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
  PduR_RmIf_MultipleSourceHandler_TxConfirmation
**********************************************************************************************************************/
/*! \brief        The function is called by the PduR to indicate the complete transmission of a communication interface I-PDU.
 *  \details      The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *                The call is routed to an upper IF module or to the gateway depending on the pending Confirmation.
 *   \param       txIfMulti2LoStateIdx           ID of the transmitted GwIf I-PDU
 *   \return      none
 *   \pre         PduR_Init() is executed successfully.
 *   \context     TASK|ISR1|ISR2
 *   \reentrant   TRUE
 *   \synchronous TRUE
 *   \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_TxConfirmation(PduIdType txIfMulti2LoStateIdx);
# endif

# if (PDUR_IFTRIGGERTRANSMITFCTPTRIDXOFTXIFMULTI2LO == STD_ON)
 /**********************************************************************************************************************
  PduR_RmIf_MultipleSourceHandler_TriggerTransmit
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to request the PduR TX I-PDU data before transmission in case of
 *               a FanIn routing.
 *  \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *               The call is routed to an upper IF module or to the gateway using the appropriate I-PDU handle.
 *  \param       txIfMulti2LoStateIdx        ID of the transmitted GwIf I-PDU
 *  \param       info                        Payload information of the received I-PDU (pointer to data and data length).
 *  \return      Std_ReturnType    E_OK:     The SDU has been copied and the SduLength indicates
 *                                           the number of copied bytes.
 *                                 E_NOT_OK: The SDU has not been copied and the SduLength has not been set.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous FALSE
 *  \note        The function is called by the PduR.
***********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_TriggerTransmit(PduIdType txIfMulti2LoStateIdx, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if(PDUR_EXISTS_NO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON )
/**********************************************************************************************************************
   PduR_RmIf_RxIndicationNoBuffer
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to indicate the complete reception of a communication interface I-PDU.
 *  \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *               The call is routed to an IF module using the appropriate I-PDU handle of the destination layer.
 *  \param       id                ID of the received gateway I-PDU
 *  \param       info              Payload information of the received I-PDU (pointer to data and data length).
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationNoBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif
# if(PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
   PduR_RmIf_RxIndicationTTSingleBuffer
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to indicate the complete reception of a communication interface I-PDU.
 *  \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *               The call is routed to an IF module using the appropriate I-PDU handle of the destination layer.
 *  \param       id                ID of the received gateway I-PDU
 *  \param       info              Payload information of the received I-PDU (pointer to data and data length).
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationTTSingleBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif
# if(PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
   PduR_RmIf_RxIndicationTTFifoBuffer
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to indicate the complete reception of a communication interface I-PDU.
 *  \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *               The call is routed to an IF module using the appropriate I-PDU handle of the destination layer.
 *  \param       id                ID of the received gateway I-PDU
 *  \param       info              Payload information of the received I-PDU (pointer to data and data length).
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationTTFifoBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if(PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
   PduR_RmIf_RxIndicationDirectFifoBuffer
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to indicate the complete reception of a communication interface I-PDU.
 *  \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *               The call is routed to an IF module using the appropriate I-PDU handle of the destination layer.
 *  \param       id                ID of the received gateway I-PDU
 *  \param       info              Payload information of the received I-PDU (pointer to data and data length).
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationDirectFifoBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if((PDUR_EXISTS_NO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON ) ||(PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
  PduR_RmIf_RxIndication_MultiIf
**********************************************************************************************************************/
/*! \brief       The function is called by the GwIf to indicate the complete reception of a 1:n GwIf I-PDU.
 *  \details     The PDU Router evaluates the multi destination I-PDU handle and performs appropriate handle and
 *               port conversion.
 *               The call is routed to upper IF modules using the appropriate I-PDU handle of the destination layers.
 *  \param       RxPduId           ID of the received GwIf I-PDU
 *  \param       info              Payload information of the received I-PDU (pointer to data and data length).
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmIf_RxIndication_MultiIf(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) ||(PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
  PduR_RmIf_TriggerTransmit
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to request the PduR TX I-PDU data before transmission.
 *  \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *               The call is routed to an upper IF module using the appropriate I-PDU handle of the destination layer.
 *  \param       TxPduId           ID of the GwIf I-PDU that will be transmitted.
 *  \param       info              Payload information of the received I-PDU (pointer to data and data length).
 *  \return      Std_ReturnType    E_OK:     The SDU has been copied and the SduLength indicates
 *                                           the number of copied bytes.
 *                                 E_NOT_OK: The SDU has not been copied and the SduLength has not been set.
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous FALSE
 *  \trace       SPEC-1096, SPEC-2020151
 *  \note        The function is called by the PduR.
**********************************************************************************************************************/
extern FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_TriggerTransmit(PduIdType TxPduId, CONSTP2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM  == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
  PduR_RmIf_TxConfirmation
**********************************************************************************************************************/
/*! \brief       The function is called by the PduR to indicate the complete transmission of a communication interface I-PDU.
 *  \details     The PDU Router evaluates the Gw I-PDU handle and performs appropriate handle and port conversion.
 *               The call is routed to an upper IF module using the appropriate I-PDU handle of the destination layer.
 *  \param       TxPduId           ID of the transmitted GwIf I-PDU
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
***********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_RmIf_TxConfirmation(PduIdType TxPduId);
# endif

# if(PDUR_SMDATAPLANEROM)
/**********************************************************************************************************************
 * PduR_Sm_SrcFilter_LinearTaToSaCalculationStrategy
 *********************************************************************************************************************/
/*! \brief       Call from the routing manager to the switching manager to perform source filtering.
 *  \details     Switching manager updates FIB with PDU adress info.
 *               Used calculation strategy: Linear target to source adress.
 *  \param[in]   smSrcRomIdx           ID of the switching manager source PDU
 *  \param[in]   info                  Pointer to the PDU data and length
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Sm_SrcFilter_LinearTaToSaCalculationStrategy(PduR_SmSrcRomIterType smSrcRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if(PDUR_SMDATAPLANEROM)
/**********************************************************************************************************************
 * PduR_Sm_SrcFilter_SaTaFromMetaDataCalculationStrategy
 *********************************************************************************************************************/
/*! \brief       Call from the routing manager to the switching manager to perform source filtering.
 *  \details     Switching manager updates FIB with PDU adress info.
 *               Used calculation strategy: source and target adress adress from meta data by bit positions.
 *  \param[in]   smSrcRomIdx           ID of the switching manager source PDU
 *  \param[in]   info                  Pointer to the PDU data and length
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(void, PDUR_CODE) PduR_Sm_SrcFilter_SaTaFromMetaDataCalculationStrategy(PduR_SmSrcRomIterType smSrcRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if(PDUR_SMDATAPLANEROM)
/**********************************************************************************************************************
 * PduR_Sm_LinearTaToSaCalculationStrategy_GetSa_AddOffset
 *********************************************************************************************************************/
/*! \brief       Internal switching manager call to calculate the source and target adress from meta data value.
 *  \details     Linear target to source adress calculation. Offset is added to target adress.
 *  \param[out]  adressInfo                            Adress info (target and source adress)
 *  \param[in]   smLinearTaToSaCalculationStrategyIdx  Calculation strategy index.
 *  \param[in]   metaData                              PDU meta data
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(PduR_SmSaType, PDUR_CODE) PduR_Sm_LinearTaToSaCalculationStrategy_GetSa_AddOffset(PduR_SmLinearTaToSaCalculationStrategyRomIterType smLinearTaToSaCalculationStrategyIdx, uint32 metaData);
# endif

# if(PDUR_SMDATAPLANEROM)
/**********************************************************************************************************************
 * PduR_Sm_LinearTaToSaCalculationStrategy_GetSa_SubtractOffset
 *********************************************************************************************************************/
/*! \brief       Internal switching manager call to calculate the source and target adress from meta data value.
 *  \details     Linear target to source adress calculation. Offset is subtracted from target adress.
 *  \param[out]  adressInfo                            Adress info (target and source adress)
 *  \param[in]   smLinearTaToSaCalculationStrategyIdx  Calculation strategy index.
 *  \param[in]   metaData                              PDU meta data
 *  \return      none
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(PduR_SmSaType, PDUR_CODE) PduR_Sm_LinearTaToSaCalculationStrategy_GetSa_SubtractOffset(PduR_SmLinearTaToSaCalculationStrategyRomIterType smLinearTaToSaCalculationStrategyIdx,
                                                                                                   uint32 metaData);
# endif

# if(PDUR_SMDATAPLANEROM)
/**********************************************************************************************************************
 * PduR_Sm_DestFilter_LinearTaToSaCalculationStrategy
 *********************************************************************************************************************/
/*! \brief       Call from the routing manager to the switching manager to perform destination filtering.
 *  \details     Switching manager checks FIB and allows or blocks the routing of the destination Pdu.
 *               Used calculation strategy: Linear target to source adress.
 *  \param[in]   smGDestRomIdx         ID of the switching manager destination PDU
 *  \param[in]   info                  Pointer to the PDU data and length
 *  \return      PduR_FilterReturnType PDUR_FILTER_PASS   allow routing
 *                                     PDUR_FILTER_BLOCK  block routing
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(PduR_FilterReturnType, PDUR_CODE) PduR_Sm_DestFilter_LinearTaToSaCalculationStrategy(PduR_SmGDestRomIterType smGDestRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# if(PDUR_SMDATAPLANEROM)
/**********************************************************************************************************************
 * PduR_Sm_DestFilter_SaTaFromMetaDataCalculationStrategy
 *********************************************************************************************************************/
/*! \brief       Call from the routing manager to the switching manager to perform destination filtering.
 *  \details     Switching manager checks FIB and allows or blocks the routing of the destination Pdu.
 *               Used calculation strategy: source and target adress adress from meta data by bit positions.
 *  \param       smGDestRomIdx         ID of the switching manager destination PDU
 *  \param       info                  Pointer to the PDU data and length
 *  \return      PduR_FilterReturnType PDUR_FILTER_PASS   allow routing
 *                                     PDUR_FILTER_BLOCK  block routing
 *  \pre         PduR_Init() is executed successfully.
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        The function is called by the PduR.
 **********************************************************************************************************************/
extern FUNC(PduR_FilterReturnType, PDUR_CODE) PduR_Sm_DestFilter_SaTaFromMetaDataCalculationStrategy(PduR_SmGDestRomIterType smGDestRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
# endif

# define PDUR_STOP_SEC_CODE
# include "MemMap.h"    /* PRQA S 5087 */       /* MD_MSR_19.1 */
/*!
 * \exclusivearea PDUR_EXCLUSIVE_AREA_0
 * Ensures consistency while performing state changes and buffer handling.
 * \protects all PduR functions
 * \usedin all PduR functions
 * \exclude local functions
 * \length SHORT to LONG depending on the API and the call graph.
 * \endexclusivearea
 */
#endif /* !defined(PDUR_H) */

/**********************************************************************************************************************
 * END OF FILE: PduR.h
 *********************************************************************************************************************/
