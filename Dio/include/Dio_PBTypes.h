/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_PBTypes.h                                               */
/* $Revision: 420353 $                                                        */
/* $Date: 2017-06-14 13:08:05 +0900 (水, 14 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions of Post Build time Parameters      */
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
 * V1.0.0:  30-Jul-2015 : Initial Version.
 *
 * V1.0.1:  30-Mar-2016 : 1. As per ARDAAAF-518,
 *                           QAC warning corrected for DIO_DBTOC_VALUE
 *                        2. Copyright Information is updated.
 *
 * V1.0.2:  30-Sep-2016 : 1. As per ARDAAAF-1253,
 *                           a. Changed macro definition of DIO_NORMALPORT,
 *                              DIO_JTAGPORT and added DIO_INPUTPORT
 *                           b. Removed unused macro DIO_MSB_MASK
 *                        2. As per ARDAAAF-768,Added justification for QAC
 *                           warning (4:0750).
 *
 * V1.0.3:  05-Jun-2017 : 1. As per ARDAAAF-2290, Updated file banner.
 *                        2. Copyright Information is updated.
 *
 * V1.0.4:  16-Jun-2017 : As per ARDAAAF-2475,
 *                        a. Added one space after the closing
 *                           brace of structure inside the union Dio_PortData.
 *                        b. Corrected the alignment in revision history
 *                           banner.
 */
/******************************************************************************/
#ifndef DIO_PBTYPES_H
#define DIO_PBTYPES_H

/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Dio_Cfg.h"
#include "Std_Types.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define DIO_PBTYPES_AR_RELEASE_MAJOR_VERSION  DIO_AR_RELEASE_MAJOR_VERSION_VALUE
#define DIO_PBTYPES_AR_RELEASE_MINOR_VERSION  DIO_AR_RELEASE_MINOR_VERSION_VALUE
#define DIO_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                          DIO_AR_RELEASE_REVISION_VERSION_VALUE

/* Module Software version information */
#define DIO_PBTYPES_SW_MAJOR_VERSION  DIO_SW_MAJOR_VERSION_VALUE
#define DIO_PBTYPES_SW_MINOR_VERSION  DIO_SW_MINOR_VERSION_VALUE
/******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0750) An object of union type has been defined.         */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : For accessing 32-bit PSR register separately for lower     */
/*                 16-bit data and upper 16-bit mask.                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0750)-1 and                           */
/*                 END Msg(4:0750)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* General defines */
#define DIO_DBTOC_VALUE ((((uint32)DIO_VENDOR_ID) << (uint32)22) | \
                         (((uint32)DIO_MODULE_ID) << (uint32)14) | \
                         (((uint32)DIO_SW_MAJOR_VERSION) << (uint32)8) | \
                         (((uint32)DIO_SW_MINOR_VERSION) << (uint32)3))
#define DIO_NORMALPORT                 (Dio_PortType)2U
#define DIO_JTAGPORT                   (Dio_PortType)1U
#define DIO_INPUTPORT                  (Dio_PortType)0U
#define DIO_ZERO                       (uint16)0x0000
#define DIO_ONE                        (uint16)0x0001
#define DIO_SHIFT_SIXTEEN              (uint8)0x10

/* Driver status Macros */
#define DIO_INITIALIZED                (boolean)0U
#define DIO_UNINITIALIZED              (boolean)1U

/* Default value to Initialize local structure Variable*/
#define DIO_LONG_WORD_VALUE            (uint32)0x00000000

/*******************************************************************************
**               SchM Critical Section Protection Macros                      **
*******************************************************************************/
#if (DIO_CRITICAL_SECTION_PROTECTION == STD_ON)

#define DIO_ENTER_CRITICAL_SECTION(Exclusive_Area) \
                                   SchM_Enter_Dio_##Exclusive_Area()
#define DIO_EXIT_CRITICAL_SECTION(Exclusive_Area) \
                                   SchM_Exit_Dio_##Exclusive_Area()
#endif
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* Structure for Dio Port Group */
typedef struct STag_Dio_PortGroup
{
  /* Address of the port */
  P2VAR(uint32 volatile, TYPEDEF, DIO_CONFIG_DATA) pPortAddress;
  uint32 ulModeMask;
  /* Types of port,
     0 = Input port,
     1 = Jtag Port ,
     2 = Normal Port */
  uint8 ucPortType;
} Dio_PortGroup;

/* Structure for Dio Channel */
typedef struct STag_Dio_PortChannel
{
  uint16 usMask;
  /* PortGroup Index in the array Dio_GstPortChannel[] with respect to the
     pointer Dio_GpPortChannel of the corresponding configuration */
  uint8 ucPortIndex;
} Dio_PortChannel;
/* MISRA Violation: START Msg(4:0750)-1 */
/* Union for accessing 32 bit PSR register */
typedef union UTag_Dio_PortData
{
  uint32 ulLongWord;
  struct
  {
    uint16 usLSWord;
    uint16 usMSWord;
  } Tst_WordValue;
} Dio_PortData;
/* END Msg(4:0750)-1 */
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* DIO_PBTTYPES_H */

/*******************************************************************************
**                         End of File                                        **
*******************************************************************************/
