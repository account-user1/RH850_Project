/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2007-2013 by Vector Informatik GmbH.                                         All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IoHwAb.h
 *    Component:  EcuAb_AsrIoHwAb
 *       Module:  IoHwAb
 *    Generator:  -
 *
 *  Description:  The IO Hardware Abstraction provides the transitions of signals from the MCAL layer to the upper
 *                layers through the Rte.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Christian Marchl              Chm           Vector Informatik GmbH
 *  Christoph Ederer              Cer           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  1.01.01   2007-11-26  Chm     ESCAN00023309 Changed line endings to CRLF
 *  1.02.00   2008-05-07  Cer     5006330       Created BSWMD, reworked transformation to use ECU-C file as input,
 *                                              multiple operations in one user defined port possible now, DCM
 *                                              interface added
 *  1.02.01   2009-03-18  Cer     ESCAN00033090 Rework of the memory mapping
 *  1.03.00   2009-09-18  Cer     -             Added symbolic constants for signal states
 *  2.00.00   2012-07-13  Cer     ESCAN00058832 Update to AUTOSAR 4.0.3
 *                                ESCAN00059081 Removal of v_cfg.h usage
 *  3.00.00   2013-04-09  Cer     -             Update to new configuration tool DaVinci Configurator 5
 *********************************************************************************************************************/

#if (!defined IOHWAB_H)
#define IOHWAB_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "Std_Types.h"
#include "IoHwAb_Cfg.h"
#if(IOHWAB_DEV_ERROR_DETECT == STD_ON)
    #include "Det.h"
#endif /* (IOHWAB_DEV_ERROR_DETECT == STD_ON) */



/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* ---------- Version identification  ------------------------------------- */
#define IOHWAB_VENDOR_ID                        (30U) /* Vector Informatik */
#define IOHWAB_MODULE_ID                        (254U)
#define IOHWAB_INSTANCE_ID                      (0x00U)

/* ##V_CFG_MANAGEMENT ##CQProject : EcuAb_AsrIoHwAb CQComponent : Implementation */
#define ECUAB_ASRIOHWAB_VERSION                 (0x0300U)
#define ECUAB_ASRIOHWAB_RELEASE_VERSION         (0x00U)

#define IOHWAB_AR_MAJOR_VERSION                 (0x03U)
#define IOHWAB_AR_MINOR_VERSION                 (0x02U)
#define IOHWAB_AR_PATCH_VERSION                 (0x00U)

#define IOHWAB_AR_RELEASE_MAJOR_VERSION         (0x04U)
#define IOHWAB_AR_RELEASE_MINOR_VERSION         (0x00U)
#define IOHWAB_AR_RELEASE_REVISION_VERSION      (0x03U)

#define IOHWAB_SW_MAJOR_VERSION                 (ECUAB_ASRIOHWAB_VERSION >> 8)
#define IOHWAB_SW_MINOR_VERSION                 (ECUAB_ASRIOHWAB_VERSION & 0x00FF)
#define IOHWAB_SW_PATCH_VERSION                 (ECUAB_ASRIOHWAB_RELEASE_VERSION)

/* ---------- Error Codes in Development-Mode ----------------------------- */
#define IOHWAB_E_INV_POINTER                    (0x10U)

/* ---------- IoHwAb Service Identification ------------------------------- */
#define IOHWAB_SID_INIT                         (0x01U)
#define IOHWAB_SID_GET_VERSION_INFO             (0x10U)

/*! \brief  Mapping to the Det_ReportError() service */
#if(IOHWAB_DEV_ERROR_DETECT == STD_ON)
#define IOHWAB_ERRORHOOK(ApiId, ErrorCode) \
      (void) Det_ReportError((uint16)IOHWAB_MODULE_ID,      \
                      (uint8)IOHWAB_INSTANCE_ID, \
                      (uint8)(ApiId),             \
                      (uint8)(ErrorCode)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif /* (IOHWAB_DEV_ERROR_DETECT == STD_ON) */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define IOHWAB_START_SEC_CODE
#include "MemMap.h"

#if(IOHWAB_VERSION_INFO_API == STD_ON)
    FUNC(void, IOHWAB_CODE) IoHwAb_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, IOHWAB_APPL_DATA) versioninfo);
#endif /* (IOHWAB_VERSION_INFO_API == STD_ON) */

#if(IOHWAB_USE_INIT_FUNCTION == STD_ON)
    FUNC(void, IOHWAB_CODE) IoHwAb_Init(void);
#endif /* (IOHWAB_USE_INIT_FUNCTION == STD_ON) */

#define IOHWAB_STOP_SEC_CODE
#include "MemMap.h"

#endif   /* IOHWAB_H */
/**********************************************************************************************************************
 *  END OF FILE: IoHwAb.h
 *********************************************************************************************************************/
