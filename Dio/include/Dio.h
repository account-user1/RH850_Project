/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio.h                                                       */
/* $Revision: 420493 $                                                        */
/* $Date: 2017-06-14 16:05:53 +0900 (水, 14 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, DIO type definitions, structure data types and  */
/* API function prototypes of DIO Driver                                      */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        P1x-C                                         */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0: 30-Jul-2015 : Initial Version.
 *
 * V1.0.1: 11-Feb-2016 : 1. As per JIRA ticket ARDAAAF-364 pre-compiler
 *                          switch is added.
 *                       2. As per JIRA ARDAAAF-352, Dio_GetVersionInfo is
 *                          implemented as public API. Dio_GetVersionInfo
 *                          Macro is removed.
 *                       3. As per ARDAAAF-518, Unsigned macro followed
 *                          with U to correct QAC warning
 *                       4. Copyright Information is updated.
 *
 * V1.0.2: 30-Sep-2016 : 1. As per ARDAAAF-1253,Removed DIO_PPR_OFFSET,
 *                          DIO_PNOT_OFFSET, DIO_PM_OFFSET .
 *                       2. As per ARDAAAF-768, Added array size for
 *                          Dio_GstConfiguration,Dio_GstChannelGroupData to
 *                          avoid QAC warning.
 *
 * V1.0.3: 24-May-2017 : 1. As per ARDAAAF-2049,
 *                          a. PREFIX and INITPOLICY of memory sections are
 *                             changed.
 *                          b. Replaced the memory section
 *                             DIO_START_SEC_DBTOC_DATA_UNSPECIFIED with
 *                             DIO_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
 *                             and DIO_STOP_SEC_DBTOC_DATA_UNSPECIFIED with
 *                             DIO_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED.
 *                       2. As per ARDAAAF-2357, Modified file banner.
 *
 * V1.0.4: 16-Jun-2017 : As per ARDAAAF-2475, Corrected the alignment in
 *                       revision history banner.
 */
/******************************************************************************/
#ifndef DIO_H
#define DIO_H
/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Standard AUTOSAR types */
#include "Std_Types.h"
/* DIO Configuration header file */
#include "Dio_RegWrite.h"
#include "Dio_Cfg.h"
#include "Dio_PBTypes.h"
#include "Dio_Hardware.h"
/*
#if (DIO_DEV_ERROR_DETECT == STD_ON)
*
 * Since all the debug variables will be available in Dio_Ram.h it is
 * included.
 *
#include "Dio_Debug.h"
#endif
*/
/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/

#define DIO_VENDOR_ID    DIO_VENDOR_ID_VALUE
#define DIO_MODULE_ID    DIO_MODULE_ID_VALUE
#define DIO_INSTANCE_ID  DIO_INSTANCE_ID_VALUE

/* AUTOSAR release version information */
#define DIO_AR_RELEASE_MAJOR_VERSION    4U
#define DIO_AR_RELEASE_MINOR_VERSION    0U
#define DIO_AR_RELEASE_REVISION_VERSION 3U

/* Module Software version information */
#define DIO_SW_MAJOR_VERSION       DIO_SW_MAJOR_VERSION_VALUE
#define DIO_SW_MINOR_VERSION       DIO_SW_MINOR_VERSION_VALUE
#define DIO_SW_PATCH_VERSION       DIO_SW_PATCH_VERSION_VALUE

/*******************************************************************************
**                      API Service Id Macros                                 **
*******************************************************************************/
/* Service ID for DIO read Channel */
#define DIO_READ_CHANNEL_SID           (uint8)0x00

/* Service ID for DIO write Channel */
#define DIO_WRITE_CHANNEL_SID          (uint8)0x01

/* Service ID for DIO read Port */
#define DIO_READ_PORT_SID              (uint8)0x02

/* Service ID for DIO write Port */
#define DIO_WRITE_PORT_SID             (uint8)0x03

/* Service ID for DIO read Channel Group */
#define DIO_READ_CHANNEL_GROUP_SID     (uint8)0x04

/* Service ID for DIO write Channel Group */
#define DIO_WRITE_CHANNEL_GROUP_SID    (uint8)0x05

/* Service ID for DIO Init Channel */
#define DIO_INIT_SID                   (uint8)0x10

/* Service ID for DIO flip Channel */
#define DIO_FLIP_CHANNEL_SID           (uint8)0x11

/* Service ID for Dio_GetVersionInfo */
#define DIO_GET_VERSION_INFO_SID       (uint8)0x12

/* Service ID for DIO Masked Write Channel */
#define DIO_MASKED_WRITE_PORT_SID      (uint8)0x13

/*******************************************************************************
**                      DET Error Codes                                       **
*******************************************************************************/
/* DET code to report Null Pointer */
#define DIO_E_PARAM_POINTER (uint8)0x20

/* DET code to report Invalid Channel */
#define DIO_E_PARAM_INVALID_CHANNEL_ID (uint8)0x0A

/* DET code to report Invalid Port */
#define DIO_E_PARAM_INVALID_PORT_ID    (uint8)0x14

/* DET code to report Invalid Channel Group */
#define DIO_E_PARAM_INVALID_GROUP      (uint8)0x1F

/* Dio_Init API service called with NULL pointer parameter */
#define DIO_E_PARAM_CONFIG             (uint8)0x10

/*
 * API service Dio_Init called without a database or invalid database in
 * specified location is reported using following error code.
 */
#define DIO_E_INVALID_DATABASE         (uint8) 0xF1

/*
 * API service used without module initialization is reported using following
 * error code.
 */
#define DIO_E_UNINIT                   (uint8)0xF0

/*******************************************************************************
**                      Other Macros                                          **
*******************************************************************************/

/* OUTPUT MODE */
#define DIO_OUTPUT_MODE                (uint32)0x00000000

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* Type definition for Dio_ChannelType used by the DIO APIs */
typedef uint8 Dio_ChannelType;

/* Type definition for Dio_PortType used by the DIO APIs */
typedef uint8 Dio_PortType;

/* Type definition for Dio_LevelType used by the DIO APIs */
typedef uint8 Dio_LevelType;

/* Type definition for Dio_PortLevelType used by the DIO APIs */
typedef uint16 Dio_PortLevelType;

/* Structure for Dio_ChannelGroup*/
typedef struct STag_Dio_ChannelGroupType
{
  /* Positions of the Channel Group */
  uint16 usMask;
  /* Position from LSB */
  uint8 ucOffset;
  /* PortGroup Index in the array Dio_GstPortGroup[] with respect to the
     pointer Dio_GpPortGroup of the corresponding configuration */
  uint8 ucPortIndex;
} Dio_ChannelGroupType;

/* Data Structure required for initializing the Dio Driver */
typedef struct STag_Dio_ConfigType
{
  /* Database start value - DIO_DBTOC_VALUE */
  uint32 ulStartOfDbToc;
  #if (DIO_CHANNEL_CONFIGURED == STD_ON)
  /* Total number of number of channels configured */
  uint16 usNoofChannels;
  /* Pointer to DIO Channel configuration */
  P2CONST(Dio_PortChannel, DIO_VAR, DIO_CONFIG_CONST) pPortChannel;
  #endif
  #if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
  /* Sum of number of channel groups in the previous configuration */
  uint16 usNoofChannelGroups;
  #endif
  /* Total number of number of ports configured */
  uint16 usNoofPorts;
  /* Pointer to DIO Port configuration */
  P2CONST(Dio_PortGroup, DIO_VAR, DIO_CONFIG_CONST) pPortGroup;
} Dio_ConfigType;


/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Function for DIO read Channel API */
extern FUNC(Dio_PortLevelType, DIO_PUBLIC_CODE) Dio_ReadPort
(Dio_PortType PortId);

/* Function for DIO write Channel API */
extern FUNC(void, DIO_PUBLIC_CODE) Dio_WritePort
(Dio_PortType PortId, Dio_PortLevelType Level);

/* Function for DIO read Port API */
extern FUNC(Dio_LevelType, DIO_PUBLIC_CODE) Dio_ReadChannel
(Dio_ChannelType ChannelId);

/* Function for DIO write Port API */
extern FUNC(void, DIO_PUBLIC_CODE) Dio_WriteChannel
(Dio_ChannelType ChannelId, Dio_LevelType Level);

#if (DIO_MASKED_WRITE_PORT_API == STD_ON )
/* Function for DIO Masked Write channel API */
extern FUNC(void, DIO_PUBLIC_CODE) Dio_MaskedWritePort
(
Dio_PortType  PortId, Dio_PortLevelType  Level, Dio_PortLevelType  Mask
);
#endif

/* Function for DIO read Channel Group API */
extern FUNC(Dio_PortLevelType, DIO_PUBLIC_CODE) Dio_ReadChannelGroup
(P2CONST(Dio_ChannelGroupType, DIO_VAR, DIO_CONFIG_CONST) ChannelGroupIdPtr);

/* Function for DIO write Channel Group API */
extern FUNC(void, DIO_PUBLIC_CODE) Dio_WriteChannelGroup
(P2CONST(Dio_ChannelGroupType, DIO_VAR, DIO_CONFIG_CONST) ChannelGroupIdPtr,
 Dio_PortLevelType Level);

 /* Function for DIO Initialization API */
extern FUNC(void, DIO_PUBLIC_CODE) Dio_Init
(P2CONST(Dio_ConfigType, DIO_VAR, DIO_APPL_CONST) ConfigPtr);

#if (DIO_FLIP_CHANNEL_API == STD_ON)
/* Function for DIO flip channel API */
extern FUNC(Dio_LevelType, DIO_PUBLIC_CODE) Dio_FlipChannel
(Dio_ChannelType ChannelId);
#endif

#if (DIO_VERSION_INFO_API == STD_ON)
/* Function for DIO Get Version Info API */
extern FUNC(void, DIO_PUBLIC_CODE)Dio_GetVersionInfo
(P2VAR(Std_VersionInfoType, AUTOMATIC, DIO_APPL_DATA)versioninfo);
#endif /* #if (DIO_VERSION_INFO_API == STD_ON) */

#define DIO_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#define DIO_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

#if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
extern CONST(Dio_ChannelGroupType, DIO_CONST)
                   Dio_GstChannelGroupData[DIO_CHANNEL_GROUP_ARRAY_SIZE];
#endif /* (DIO_CHANNELGROUP_CONFIGURED == STD_ON) */

#define DIO_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"


#define DIO_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/* Declaration for DIO Database */
extern CONST(Dio_ConfigType, DIO_CONFIG_CONST)
                                Dio_GstConfiguration[DIO_CONFIG_ARRAY_SIZE];

#define DIO_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"


#endif /* DIO_H  */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
