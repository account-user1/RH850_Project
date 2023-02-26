/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi                                                         */
/* $Revision: 507382 $                                                        */
/* $Date: 2018-01-04 15:49:49 +0530 (Thu, 04 Jan 2018) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015   Renesas Electronics Corporation                        */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Spi post-build time configurations                      */
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
 * V1.0.0:  01-Aug-2015: Initial Version
 * V1.0.1:  05-Feb-2016: As part of P1x-C 4.01.00 release the following
 *                       changes were made:
 *                       1. Copyright information is updated.
 *                       2. As The ecode adapted from P1x following structures
 *                          are redefined.
 *                          a. Spi_GstChannelConfig
 *                          b. Spi_GstSeqConfig
 *                          c. Spi_GstConfiguration
 *                       3. Added new structure Spi_GaaNxtNotifyBuffer.
 * V1.0.2:  11-Jan-2017: Following changes were made:
 *                       1. As part of ARDAAAF-778, QAC Warning
 *                          section is updated and START and END tag for
 *                          Msg(2:3211), Msg(2:3132) and Msg(2:3674) are
 *                          added at respective places.
 *                       2. As part of the JIRA ticket ARDAAAF-1406, check
 *                          added for following non mandatory parameters
 *                          generation
 *                           a) SpiJobEndNotification in Spi_GstJobConfig
 *                              array generation.
 *                           b) SpiSeqEndNotification in Spi_GstSeqConfig
 *                              array generation.
 *                       3. Software Major version updated.
 *                       4. As part of JIRA ticket ARDAAAF-947, information
 *                          messages INFO_59_83_002 and INFO_59_83_003 were
 *                          added.
 *                       5. As part of JIRA ticket ARDAAAF-947, updated the
 *                          check for the generation of array
 *                          'Spi_GaaSeqStatusBitArray'.
 *                       6. As part of JIRA ticket ARDAAAF-1496, generation
 *                          handling of 'blHWUnitDmaMode' in structure
 *                          'Spi_GstJobConfig' updated.
 *                       7. As part of JIRA ticket ARDAAAF-1497, Short name
 *                          dependency for 'SpiChannel', 'SpiExternalDevice'
 *                          and 'SpiJob' were corrected.
 *                       8. As part of JIRA ticket ARDAAAF-1522, generation
 *                          handling of 'ddBufferIndex' in structure
 *                          'Spi_GstChannelConfig' updated.
 *                       9. As part of JIRA ticket ARDAAAF-1108, added
 *                          the generation handling of parameter
 *                          'blCSRIMasked' in 'Spi_GstJobConfig' structure.
 *                      10. As part of JIRA ticket ARDAAAF-1601 and
 *                          ARDAAAF-1590, updated the generation handling
 *                          of parameter 'ulMainCtl1Value' in 'Spi_GstJobConfig'
 *                          structure.
 *                      11. As part of fixing the ticket ARDAAAF-996, updated
 *                          the memory sections of following global arrays
 *                           a. Spi_GaaSeqStatusBitArray.
 *                           b. Spi_GaaChannelIBWrite.
 *                           c. Spi_GaaChannelIBRead.
 *                      12. As part of JIRA ticket ARDAAAF-1113 updated the
 *                          generation handling of parameter 'aaChipSelect'
 *                          in 'Spi_GstConfiguration' structure.
 *                      13. As part of JIRA ticket ARDAAAF-1510 updated the
 *                          generation handling of 'ucChannelBufferType' in
 *                          'Spi_GstChannelConfig' structure.
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
#include "Spi_PBTypes.h"
#include "Spi_Hardware.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR specification version information */
#define SPI_PBCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define SPI_PBCFG_C_AR_RELEASE_MINOR_VERSION  0U
#define SPI_PBCFG_C_AR_RELEASE_REVISION_VERSION  3U
/* File version information */
#define SPI_PBCFG_C_SW_MAJOR_VERSION  2U
#define SPI_PBCFG_C_SW_MINOR_VERSION  0U
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
         SPI_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Release Major Version"
#endif
#if (SPI_PBTYPES_AR_RELEASE_MINOR_VERSION != \
         SPI_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Release Minor Version"
#endif
#if (SPI_PBTYPES_AR_RELEASE_REVISION_VERSION != \
         SPI_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Release Revision Version"
#endif
#if (SPI_PBTYPES_SW_MAJOR_VERSION != SPI_PBCFG_C_SW_MAJOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Software Major Version"
#endif
#if (SPI_PBTYPES_SW_MINOR_VERSION != SPI_PBCFG_C_SW_MINOR_VERSION)
  #error "Spi_PBcfg.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:1290) An integer constant of 'essentially signed' type  */
/*                 is being converted to unsigned type on assignment.         */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The variable which is used of unsigned type and it can not */
/*                 be signed type for module implementation.                  */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact                                */
/* Reference     : Look for START Msg(4:1290)-1 and                           */
/*                 END Msg(4:1290)-1 tags in the code.                        */
/******************************************************************************/
/**                         QAC Warnings                                     **/
/******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:2022) Object/function '%s', with external linkage, has  */
/*                 been defined in a header file                              */
/* Rule          : MISRA-C:2004 Rule 8.5                                      */
/* Justification : As per Rule 8.5.There is no definition of objects  or      */
/*                 functions in a header file                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2022)-1 and                           */
/*                 END Msg(2:2022)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:5087) #include statements in a file should only be      */
/*                 preceded by other preprocessor directives or comments.     */
/* Rule          : MISRA-C:2004 Rule 19.1                                     */
/* Justification : This is done as per AUTOSAR Memory Mapping Requirement     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:5087)-2 and                           */
/*                 END Msg(2:5087)-2 tags in the code.                        */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:0315) An expression of type 'pointer-to-object' is      */
/*                 being implicitly converted to type 'pointer-to-void'.      */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact                                */
/* Reference     : Look for START Msg(2:0315)-3 and                           */
/*                 END Msg(2:0315)-3 tags in the code.                        */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       : (2:3132) Hard coded 'magic' number, '', used to define the */
/*                 size of an array.                                          */
/* Rule          : NA                                                         */
/* Justification : Hard coded Numbers are added instead of macros for better  */
/*                 readability.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3132)-4 and                           */
/*                 END Msg(2:3132)-4 tags in the code.                        */
/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:3674) Array size defined implicitly by the number of    */
/*                 initializers.                                              */
/* Rule          : NA                                                         */
/* Justification : Array size vary in different configurations.               */
/*                 So giving fixed array size is not possible.                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3674)-5 and                           */
/*                 END Msg(2:3674)-5 tags in the code.                        */
/******************************************************************************/
/* 6. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier '' is defined                */
/*                here but is not used in this translation unit.              */
/* Rule         : NA                                                          */
/* Justification: Global identifiers extern declaration                       */
/*                shall be given in header file                               */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-6 and                            */
/*                END Msg(2:3211)-6 tags in the code.                         */
/******************************************************************************/
/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
#define SPI_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
/*QAC Warning:START Msg(2:2022)-1 */
/*QAC Warning:START Msg(2:3132)-4 */
/* Global array for internal read buffer data of channels */
VAR(Spi_DataType, SPI_VAR) Spi_GaaChannelIBRead[84] = {0};
/* Global array for internal write buffer data of channels */
VAR(Spi_DataType, SPI_VAR) Spi_GaaChannelIBWrite[84] = {0};
/*END Msg(2:3132)-4 */
/*END Msg(2:2022)-1 */
#define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
/* This array contains configuration details for Channels */
/*QAC Warning:START Msg(2:3674)-5 */
STATIC CONST(Spi_ChannelPBConfigType, SPI_CONST) Spi_GstChannelConfig0[] = {
/*END Msg(2:3674)-5 */
  /* Channel Index: 0 - TmplMonrCh1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x0,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 1 - TmplMonrCh2 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x1,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 2 - TmplMonrCh3 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x2,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 3 - TmplMonrCh4 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x3,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 4 - TmplMonrCh5 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x4,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 5 - PwrSplyCh1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x5,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 6 - PwrSplyCh2 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x6,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 7 - PwrSplyCh3 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x7,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 8 - PwrSplyCh4 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x8,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 9 - PwrSplyCh5 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x9,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 10 - PwrSplyCh6 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0xa,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 11 - PwrSplyCh7 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0xb,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 12 - PwrSplyCh8 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0xc,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 13 - PwrSplyCh9 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0xd,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 14 - PwrSplyCh10 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0xe,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 15 - GateDrv0Cfg0Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0xf,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 16 - GateDrv0Cfg1Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x10,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 17 - GateDrv0Cfg2Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x11,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 18 - GateDrv0Cfg3Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x12,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 19 - GateDrv0Cfg4Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x13,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 20 - GateDrv0Cfg5Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x14,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 21 - GateDrv0Cfg6Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x15,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 22 - GateDrv0Cfg7Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x16,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 23 - GateDrv0Cfg8Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x1a,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 24 - GateDrv0Cfg9Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x1b,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 25 - GateDrv0Cfg10Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x1c,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 26 - GateDrv0Cfg11Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x1d,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 27 - GateDrv0Cfg12Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x1e,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 28 - GateDrv0Cfg13Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x1f,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 29 - GateDrv0CtrlCh */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x17,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 30 - GateDrv0Diag0Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x21,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 31 - GateDrv0Diag1Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x22,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 32 - GateDrv0Diag2Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x23,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 33 - GateDrv0Mask0Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x20,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 34 - GateDrv0Mask1Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x18,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 35 - GateDrv0Mask2Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x19,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 36 - GateDrv0VrfyCmd0Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x26,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 37 - GateDrv0VrfyCmd1Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x27,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 38 - GateDrv0VrfyCmd2Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x28,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 39 - GateDrv0VrfyRes0Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x24,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  },
  /* END Msg(4:1290)-1 */
  /* Channel Index: 40 - GateDrv0VrfyRes1Ch */
  /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ddBufferIndex */
    0x25,
    /* ddNoOfBuffers */
    0x1,
    /* ddDefaultData */
    0x0,
    /* ucDLSSetting */
    0xf,
    /* ucDataType */
    1,
    /* ucChannelBufferType */
    0x0,
    /* blDirection */
    SPI_FALSE
  }
  /* END Msg(4:1290)-1 */
};
/* Channel list */
STATIC CONST(Spi_ChannelType, SPI_CONST) Spi_GaaChannelList0[] = {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:0 */
    0,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:1 */
    1,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:2 */
    2,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:3 */
    3,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:4 */
    4,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:5 */
    5,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:6 */
    6,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:7 */
    7,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:8 */
    8,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:9 */
    9,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:10 */
    10,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:11 */
    11,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:12 */
    12,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:13 */
    13,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:14 */
    14,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:15 */
    15,
    16,
    17,
    18,
    19,
    20,
    21,
    22,
    29,
    34,
    35,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:16 */
    23,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:17 */
    24,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:18 */
    25,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:19 */
    26,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:20 */
    27,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:21 */
    28,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:22 */
    33,
    30,
    31,
    32,
    39,
    40,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:23 */
    29,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:24 */
    36,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:25 */
    37,
    /* END Msg(4:1290)-1 */
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* Linked channels for Job:26 */
    38,
    /* END Msg(4:1290)-1 */
};
 /* This array contains configuration details for Jobs */
STATIC CONST(Spi_JobConfigType, SPI_CONST) Spi_GstJobConfig0[] = {
   /* Index: 0 - TmplMonrJob1 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[0],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    0,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 1 - TmplMonrJob2 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[1],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    1,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 2 - TmplMonrJob3 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[2],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    2,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 3 - TmplMonrJob4 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[3],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    3,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 4 - TmplMonrJob5 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[4],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    4,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 5 - PwrSplyJob1 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[5],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    5,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 6 - PwrSplyJob2 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[6],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    6,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 7 - PwrSplyJob3 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[7],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    7,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 8 - PwrSplyJob4 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[8],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    8,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 9 - PwrSplyJob5 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[9],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    9,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 10 - PwrSplyJob6 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[10],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    10,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 11 - PwrSplyJob7 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[11],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    11,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 12 - PwrSplyJob8 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[12],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    12,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 13 - PwrSplyJob9 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[13],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    13,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 14 - PwrSplyJob10 */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[14],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    14,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xfb,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 15 - GateDrv0AllCfgJob */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[15],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0xb,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0xb,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    15,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 16 - GateDrv0Cfg8Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[26],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    16,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 17 - GateDrv0Cfg9Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[27],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    17,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 18 - GateDrv0Cfg10Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[28],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    18,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 19 - GateDrv0Cfg11Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[29],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    19,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 20 - GateDrv0Cfg12Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[30],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    20,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 21 - GateDrv0Cfg13Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[31],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    21,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 22 - GateDrv0CmnDiagJob */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[32],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x6,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x6,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    22,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 23 - GateDrv0CtrlJob */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[38],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    23,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 24 - GateDrv0VrfyCmd0Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[39],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    24,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 25 - GateDrv0VrfyCmd1Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[40],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    25,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  },
   /* Index: 26 - GateDrv0VrfyCmd2Job */
  {
    /* pChannelList */
    &Spi_GaaChannelList0[41],
    /* pPortGrpRegAddress */
    NULL_PTR,
    /* pSpiJobNotification */
    NULL_PTR,
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ulMainCtl1Value */
    0x70,
    /* ulPortPinMask */
    0x0,
    /* ulConfigRegValue */
    0x2800c010,
    /* ddNoOfBuffers */
    0x1,
    /* usCtl2Value */
    0x600a,
    /* usMCtl0Value */
    0x0,
    /* ddNoOfChannels */
    0x1,
    /* ddHWUnitIndex */
    0,
    /* ddCSType */
    SPI_PERIPHERAL_ENGINE_CS,
    /* ucClk2CsLoopCnt */
    5,
    /* ucCSArrayIndex */
    26,
    /* ucNoOfCS */
    1,
    /* ucChipSelect */
    0xef,
    /* ucJobPriority */
    3,
    /* END Msg(4:1290)-1 */
    /* blCsPolarity */
    SPI_FALSE,
    /* All Channels properties are same*/
    SPI_TRUE
  }
};
/*QAC Warning:START Msg(2:3674)-5 */
/* Cs Index array */
STATIC CONST(uint8, SPI_CONST) Spi_GaaCsIndex0[] = {
/* END Msg(2:3674)-5 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 0 - TmplMonrJob1 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 1 - TmplMonrJob2 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 2 - TmplMonrJob3 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 3 - TmplMonrJob4 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 4 - TmplMonrJob5 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 5 - PwrSplyJob1 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 6 - PwrSplyJob2 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 7 - PwrSplyJob3 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 8 - PwrSplyJob4 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 9 - PwrSplyJob5 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 10 - PwrSplyJob6 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 11 - PwrSplyJob7 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 12 - PwrSplyJob8 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 13 - PwrSplyJob9 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 14 - PwrSplyJob10 */
  2,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 15 - GateDrv0AllCfgJob */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 16 - GateDrv0Cfg8Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 17 - GateDrv0Cfg9Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 18 - GateDrv0Cfg10Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 19 - GateDrv0Cfg11Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 20 - GateDrv0Cfg12Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 21 - GateDrv0Cfg13Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 22 - GateDrv0CmnDiagJob */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 23 - GateDrv0CtrlJob */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 24 - GateDrv0VrfyCmd0Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 25 - GateDrv0VrfyCmd1Job */
  4,
  /* END Msg(4:1290)-1 */
  /*MISRA Violation:START Msg(4:1290)-1 */
  /* Index: 26 - GateDrv0VrfyCmd2Job */
  4
  /* END Msg(4:1290)-1 */
};
/* Job list */
STATIC CONST(Spi_JobListType, SPI_CONST) Spi_GstJobList0[] = {
  /*Index: 0 - TmplMonrSeq1 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    0,
    /* ddSequenceIndex */
    0,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 1 - TmplMonrSeq2 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    1,
    /* ddSequenceIndex */
    1,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 2 - TmplMonrSeq3 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    2,
    /* ddSequenceIndex */
    2,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 3 - TmplMonrSeq4 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    3,
    /* ddSequenceIndex */
    3,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 4 - TmplMonrSeq5 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    4,
    /* ddSequenceIndex */
    4,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 5 - PwrSplySeq1 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    5,
    /* ddSequenceIndex */
    5,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 6 - PwrSplySeq2 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    6,
    /* ddSequenceIndex */
    6,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 7 - PwrSplySeq3 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    7,
    /* ddSequenceIndex */
    7,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 8 - PwrSplySeq4 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    8,
    /* ddSequenceIndex */
    8,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 9 - PwrSplySeq5 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    9,
    /* ddSequenceIndex */
    9,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 10 - PwrSplySeq6 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    10,
    /* ddSequenceIndex */
    10,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 11 - PwrSplySeq7 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    11,
    /* ddSequenceIndex */
    11,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 12 - PwrSplySeq8 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    12,
    /* ddSequenceIndex */
    12,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 13 - PwrSplySeq9 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    13,
    /* ddSequenceIndex */
    13,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 14 - PwrSplySeq10 */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    14,
    /* ddSequenceIndex */
    14,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 15 - GateDrv0AllCfgSeq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    15,
    /* ddSequenceIndex */
    15,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 16 - GateDrv0Cfg8Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    16,
    /* ddSequenceIndex */
    16,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 17 - GateDrv0Cfg9Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    17,
    /* ddSequenceIndex */
    17,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 18 - GateDrv0Cfg10Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    18,
    /* ddSequenceIndex */
    18,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 19 - GateDrv0Cfg11Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    19,
    /* ddSequenceIndex */
    19,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 20 - GateDrv0Cfg12Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    20,
    /* ddSequenceIndex */
    20,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 21 - GateDrv0Cfg13Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    21,
    /* ddSequenceIndex */
    21,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 22 - GateDrv0CmnDiagSeq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    22,
    /* ddSequenceIndex */
    22,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 23 - GateDrv0CtrlSeq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    23,
    /* ddSequenceIndex */
    23,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 24 - GateDrv0VrfyCmd0Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    24,
    /* ddSequenceIndex */
    24,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 25 - GateDrv0VrfyCmd1Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    25,
    /* ddSequenceIndex */
    25,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  },
  /*Index: 26 - GateDrv0VrfyCmd2Seq */
  {
    /*MISRA Violation:START Msg(4:1290)-1 */
    /* ddJobIndex */
    26,
    /* ddSequenceIndex */
    26,
    /* ucJobCount */
    0,
    /* blIsLastJob */
    SPI_TRUE
    /* END Msg(4:1290)-1 */
  }
};
/*QAC Warning:START Msg(2:3674)-5 */
/* This array contains configuration details for Sequences */
STATIC CONST(Spi_SequenceConfigType, SPI_CONST) Spi_GstSeqConfig0[] = {
/* END Msg(2:3674)-5 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 0 - TmplMonrSeq1*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    0,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 1 - TmplMonrSeq2*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    1,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 2 - TmplMonrSeq3*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    2,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 3 - TmplMonrSeq4*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    3,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 4 - TmplMonrSeq5*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    4,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 5 - PwrSplySeq1*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    5,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 6 - PwrSplySeq2*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    6,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 7 - PwrSplySeq3*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    7,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 8 - PwrSplySeq4*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    8,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 9 - PwrSplySeq5*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    9,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 10 - PwrSplySeq6*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    10,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 11 - PwrSplySeq7*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    11,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 12 - PwrSplySeq8*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    12,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 13 - PwrSplySeq9*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    13,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 14 - PwrSplySeq10*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    14,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 15 - GateDrv0AllCfgSeq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    11,
    /* ddJobListIndex */
    15,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 16 - GateDrv0Cfg8Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    16,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 17 - GateDrv0Cfg9Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    17,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 18 - GateDrv0Cfg10Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    18,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 19 - GateDrv0Cfg11Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    19,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 20 - GateDrv0Cfg12Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    20,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 21 - GateDrv0Cfg13Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    21,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 22 - GateDrv0CmnDiagSeq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    6,
    /* ddJobListIndex */
    22,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 23 - GateDrv0CtrlSeq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    23,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 24 - GateDrv0VrfyCmd0Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    24,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 25 - GateDrv0VrfyCmd1Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    25,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  },
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
/*MISRA Violation:START Msg(4:1290)-1 */
/*QAC Warning:START Msg(2:0315)-3 */
/* Index: 26 - GateDrv0VrfyCmd2Seq*/
  {
    /* pSpiSeqEndNotification */
    NULL_PTR,
    /* ddNoOfJobs */
    1,
    /* ddNoOfBuffers */
    1,
    /* ddJobListIndex */
    26,
    /* usStsValueStartByteIdx */
    0x0,
    /* usStsCheckByteIdx */
    0x0,
    /* usStsUpdateStartByteIdx */
    0x0,
    /* usHWListIndex */
    1,
    /* ucNoOfStsByteValue  */
    0,
    /* ucStsByteMask */
    0x00,
  }
/* END Msg(4:1290)-1 */
/* END Msg(2:0315)-3 */
};
#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
/*QAC Warning:START Msg(2:3211)-6 */
/*QAC Warning:START Msg(2:3674)-5 */
/* Structure for SPI Init configuration */
CONST(Spi_ConfigType, SPI_CONST) Spi_GstConfiguration[] = {
/*END Msg(2:3211)-6 */
/*END Msg(2:3674)-5 */
   /*MISRA Violation:START Msg(4:1290)-1 */
  {
    /* ulStartOfDbToc */
    0xed4c200,
    /*QAC Warning:START Msg(2:0315)-3 */
    /* pFirstChannel */
    &Spi_GstChannelConfig0[0],
    /* pFirstJob  */
    &Spi_GstJobConfig0[0],
    /* pFirstSeq */
    &Spi_GstSeqConfig0[0],
    /* pJobList */
    &Spi_GstJobList0[0],
    /* END Msg(2:0315)-3 */
    /* pStatusArray */
    NULL_PTR,
    /* pStsValueArray */
    NULL_PTR,
    /* pCSArray */
    &Spi_GaaCsIndex0[0],
    /* pChannelIBRead */
    &Spi_GaaChannelIBRead[0],
    /* pChannelIBWrite */
    &Spi_GaaChannelIBWrite[0],
    /* ddDirectAccessQueueSize */
    0,
    /* aaHWMemoryMode */
    {
        0x1,
        0xFF,
        0xFF,
        0xFF
    },
   /*aaHWUnitInfoIndex*/
    {
        0,
        0xFF,
        0xFF,
        0xFF
    },
    /* aaHWUnitNumber */
    {
        0,
        0xFF,
        0xFF,
        0xFF
    },
    /* aaChipSelect */
    {
        0x0,
        0xFF,
        0xFF,
        0xFF
    },
    /* ucNoofStatusByte */
    0
  }
  /* END Msg(4:1290)-1 */
};
#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

