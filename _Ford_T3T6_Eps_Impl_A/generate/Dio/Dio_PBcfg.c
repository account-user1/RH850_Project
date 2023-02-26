/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_PBcfg.c                                                 */
/* $Revision: 419858 $                                                        */
/* $Date: 2017-06-13 16:56:06 +0530 (Tue, 13 Jun 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c)    2015 - 2017     Renesas Electronics Corporation            */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Dio Post build configurations                           */
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
 * V1.0.1: 30-Mar-2016 : 1. As per ARDAAAF-518, QAC warning corrected for
 *                          Dio_GstConfiguration
 *
 * V1.0.2: 20-Feb-2017 : 1. As per ARDAAAF-768, Added Justifications for QAC
 *                          warnings (4:0310),(4:0311),(2:3211) and (2:0862).
 *                       2. As per AARDAAAF-1589, Changed Type of the port to
 *                          ucPortType in comment line
 *                       3. ARDAAAF-1341, Corrected the Value of ulmodemask
 *
 * V1.0.3: 28-Apr-2017 : 1. As per ARDAAAF-2049,
 *                          a. PREFIX and INITPOLICY of memory sections are
 *                             changed.
 *                          b. Replaced the memory section
 *                             DIO_START_SEC_DBTOC_DATA_UNSPECIFIED with
 *                             DIO_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
 *                             and DIO_STOP_SEC_DBTOC_DATA_UNSPECIFIED with
 *                             DIO_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED.
 *
 * V1.0.4: 16-Jun-2017 : 1. As per ARDAAAF-2414, unwanted macro
 *                          DIO_INVALID_CHANNEL_GROUP are removed.
 *                       2. As per ARDAAAF-2475,
 *                          a. Updated the QAC justification message
 *                             for Msg(2:3211).
 *                          b. Corrected the alignment in revision history
 *                             banner.
 */
/******************************************************************************/
/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Included for macro definitions and API prototypes */
#include "Dio.h"
#include "Dio_Hardware.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define DIO_PBCFG_C_AR_RELEASE_MAJOR_VERSION  4
#define DIO_PBCFG_C_AR_RELEASE_MINOR_VERSION  0
#define DIO_PBCFG_C_AR_RELEASE_REVISION_VERSION  3
/* File version information */
#define DIO_PBCFG_C_SW_MAJOR_VERSION  1
#define DIO_PBCFG_C_SW_MINOR_VERSION  0
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (DIO_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
         DIO_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Dio_PBcfg.c : Mismatch in Release Major Version"
#endif
#if (DIO_PBTYPES_AR_RELEASE_MINOR_VERSION != \
         DIO_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Dio_PBcfg.c : Mismatch in Release Minor Version"
#endif
#if (DIO_PBTYPES_AR_RELEASE_REVISION_VERSION != \
         DIO_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Dio_PBcfg.c : Mismatch in Release Revision Version"
#endif
#if (DIO_PBTYPES_SW_MAJOR_VERSION != DIO_PBCFG_C_SW_MAJOR_VERSION)
  #error "Dio_PBcfg.c : Mismatch in Software Major Version"
#endif
#if (DIO_PBTYPES_SW_MINOR_VERSION != DIO_PBCFG_C_SW_MINOR_VERSION)
  #error "Dio_PBcfg.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : Msg(4:0310) Casting to different object pointer type.      */
/* Rule          : MISRA-C:2004                                               */
/*                 REFERENCE - ISO-6.3.4 Cast Operators                       */
/* Justification : DMA structure base address are Passing through DMACTL,     */
/*                 Since it is Typecast                                       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0310)-1 and                           */
/*                 END Msg(4:0310)-1 tags in the code.                        */
/******************************************************************************/
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : Msg(4:0311) Dangerous pointer cast results in loss of const*/
/*                 qualification.                                             */
/* Rule          : MISRA-C:2004 Rule 11.5                                     */
/* Justification : In this instance, it is verified that the address stored in*/
/*                 the global pointer is not a constant value address.        */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for START Msg(4:0311)-2 and                           */
/*                 END Msg(4:0311)-2 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                         QAC Warnings                                       **
*******************************************************************************/
/******************************************************************************/
/* 1. QAC Warnings:                                                           */
/* Message      : (2:3211) The global identifier is defined here but is not   */
/*                not used in this translation unit.                          */
/* Rule         : NA                                                          */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Dio_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-1 and                            */
/*                END Msg(2:3211)-1 tags in the code.                         */
/******************************************************************************/
/******************************************************************************/
/* 2. QAC Warnings:                                                           */
/* Message        (2:0862)  "MemMap.h" directive is redundant.                */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a QAC Warnings.    */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:0862)-2 and                           */
/*                 END Msg(2:0862)-2 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Static Data Types                                     **
*******************************************************************************/
/* QAC Warnings: START Msg(2:0862)-2 */
#define DIO_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* Structure of DIO Port Group Configuration */
STATIC CONST (Dio_PortGroup, DIO_CONST) Dio_GstPortGroup0[DIO_PORT_ARRAY_SIZE] =
{
  /* Index:0 */
  {
    /* MISRA Violation: START Msg(4:0310)-1 */
    /*pPortAddress*/
    /* MISRA Violation: START Msg(4:0311)-2 */
    (P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA))&Normalport_Address[0],
    /* END Msg(4:0310)-1 */
    /* END Msg(4:0311)-2 */
    /* ulmodemask */
    0x9800U,
    /* ucPortType */
    DIO_NORMALPORT
  },
  /* Index:1 */
  {
    /* MISRA Violation: START Msg(4:0310)-1 */
    /*pPortAddress*/
    /* MISRA Violation: START Msg(4:0311)-2 */
    (P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA))&Normalport_Address[1],
    /* END Msg(4:0310)-1 */
    /* END Msg(4:0311)-2 */
    /* ulmodemask */
    0xFF01U,
    /* ucPortType */
    DIO_NORMALPORT
  },
  /* Index:2 */
  {
    /* MISRA Violation: START Msg(4:0310)-1 */
    /*pPortAddress*/
    /* MISRA Violation: START Msg(4:0311)-2 */
    (P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA))&Normalport_Address[2],
    /* END Msg(4:0310)-1 */
    /* END Msg(4:0311)-2 */
    /* ulmodemask */
    0x0000U,
    /* ucPortType */
    DIO_NORMALPORT
  },
  /* Index:3 */
  {
    /* MISRA Violation: START Msg(4:0310)-1 */
    /*pPortAddress*/
    /* MISRA Violation: START Msg(4:0311)-2 */
    (P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA))&Normalport_Address[3],
    /* END Msg(4:0310)-1 */
    /* END Msg(4:0311)-2 */
    /* ulmodemask */
    0x8000U,
    /* ucPortType */
    DIO_NORMALPORT
  },
  /* Index:4 */
  {
    /* MISRA Violation: START Msg(4:0310)-1 */
    /*pPortAddress*/
    /* MISRA Violation: START Msg(4:0311)-2 */
    (P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA))&Normalport_Address[4],
    /* END Msg(4:0310)-1 */
    /* END Msg(4:0311)-2 */
    /* ulmodemask */
    0x8000U,
    /* ucPortType */
    DIO_NORMALPORT
  },
  /* Index:5 */
  {
    /* MISRA Violation: START Msg(4:0310)-1 */
    /*pPortAddress*/
    /* MISRA Violation: START Msg(4:0311)-2 */
    (P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA))&Normalport_Address[5],
    /* END Msg(4:0310)-1 */
    /* END Msg(4:0311)-2 */
    /* ulmodemask */
    0x000CU,
    /* ucPortType */
    DIO_NORMALPORT
  },
  /* Index:6 */
  {
    /* MISRA Violation: START Msg(4:0310)-1 */
    /*pPortAddress*/
    /* MISRA Violation: START Msg(4:0311)-2 */
    (P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA))&Normalport_Address[6],
    /* END Msg(4:0310)-1 */
    /* END Msg(4:0311)-2 */
    /* ulmodemask */
    0xC380U,
    /* ucPortType */
    DIO_NORMALPORT
  }
};
/* Data Structure of DIO Port Channel Configuration */
STATIC CONST(Dio_PortChannel, DIO_CONST)\
 Dio_GstPortChannel0[DIO_CHANNEL_ARRAY_SIZE] =
{
    /* Index:0 */
    {
      /* usMask */
      0x2000U,
      /* ucPortIndex */
      0U
    },
    /* Index:1 */
    {
      /* usMask */
      0x0400U,
      /* ucPortIndex */
      0U
    },
    /* Index:2 */
    {
      /* usMask */
      0x0002U,
      /* ucPortIndex */
      0U
    },
    /* Index:3 */
    {
      /* usMask */
      0x0008U,
      /* ucPortIndex */
      0U
    },
    /* Index:4 */
    {
      /* usMask */
      0x0080U,
      /* ucPortIndex */
      0U
    },
    /* Index:5 */
    {
      /* usMask */
      0x0004U,
      /* ucPortIndex */
      1U
    },
    /* Index:6 */
    {
      /* usMask */
      0x0010U,
      /* ucPortIndex */
      1U
    },
    /* Index:7 */
    {
      /* usMask */
      0x2000U,
      /* ucPortIndex */
      2U
    },
    /* Index:8 */
    {
      /* usMask */
      0x0200U,
      /* ucPortIndex */
      3U
    },
    /* Index:9 */
    {
      /* usMask */
      0x0008U,
      /* ucPortIndex */
      3U
    },
    /* Index:10 */
    {
      /* usMask */
      0x0010U,
      /* ucPortIndex */
      3U
    },
    /* Index:11 */
    {
      /* usMask */
      0x0080U,
      /* ucPortIndex */
      3U
    },
    /* Index:12 */
    {
      /* usMask */
      0x0002U,
      /* ucPortIndex */
      3U
    },
    /* Index:13 */
    {
      /* usMask */
      0x0800U,
      /* ucPortIndex */
      3U
    },
    /* Index:14 */
    {
      /* usMask */
      0x1000U,
      /* ucPortIndex */
      3U
    },
    /* Index:15 */
    {
      /* usMask */
      0x0004U,
      /* ucPortIndex */
      4U
    },
    /* Index:16 */
    {
      /* usMask */
      0x0008U,
      /* ucPortIndex */
      4U
    },
    /* Index:17 */
    {
      /* usMask */
      0x0010U,
      /* ucPortIndex */
      4U
    },
    /* Index:18 */
    {
      /* usMask */
      0x0020U,
      /* ucPortIndex */
      4U
    },
    /* Index:19 */
    {
      /* usMask */
      0x0040U,
      /* ucPortIndex */
      4U
    },
    /* Index:20 */
    {
      /* usMask */
      0x0002U,
      /* ucPortIndex */
      4U
    },
    /* Index:21 */
    {
      /* usMask */
      0x0100U,
      /* ucPortIndex */
      4U
    },
    /* Index:22 */
    {
      /* usMask */
      0x2000U,
      /* ucPortIndex */
      4U
    },
    /* Index:23 */
    {
      /* usMask */
      0x1000U,
      /* ucPortIndex */
      4U
    },
    /* Index:24 */
    {
      /* usMask */
      0x0800U,
      /* ucPortIndex */
      5U
    },
    /* Index:25 */
    {
      /* usMask */
      0x0100U,
      /* ucPortIndex */
      5U
    },
    /* Index:26 */
    {
      /* usMask */
      0x0200U,
      /* ucPortIndex */
      5U
    },
    /* Index:27 */
    {
      /* usMask */
      0x8000U,
      /* ucPortIndex */
      5U
    },
    /* Index:28 */
    {
      /* usMask */
      0x0008U,
      /* ucPortIndex */
      6U
    }
};
#define DIO_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* Structure for DIO Driver Init configuration */
#define DIO_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* QAC Warnings: START Msg(2:3211)-1 */
CONST(Dio_ConfigType, DIO_CONFIG_CONST)\
Dio_GstConfiguration[DIO_CONFIG_ARRAY_SIZE] =
{
  /* Configset:0 */
  {
    /* Database start value */
    0x0EDE0100U,
    /* Total number of Channel groups */
    29U,
    /* pPortChannel */
    &Dio_GstPortChannel0[0],
    /* Total number of port groups */
    7U,
    /* pPortGroup */
    &Dio_GstPortGroup0[0]
  }
};
/* END Msg(2:3211)-1 */
#define DIO_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* END Msg(2:0862)-2 */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

