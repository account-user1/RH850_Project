/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Component                        */
/* Module       = Port_Types.h                                                */
/* $Revision: 426746 $                                                        */
/* $Date: 2017-06-23 18:50:14 +0900 (金, 23 6 2017) $                      */
/*============================================================================*/
/*                               COPYRIGHT                                    */
/*============================================================================*/
/* Copyright(c)  2015-2016 Renesas Electronics Corporation                    */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, PORT type definitions, structure data types and */
/* API function prototypes of PORT Driver                                     */
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
 * V1.0.0:  11-Aug-2015   : Initial Version
 * V1.0.1:  10-Mar-2016   : As part of P1x-C V4.01.00 release following
 *                          changes were made:
 *                          1.Added the SchM Critical Section Protection Macros
 *                          PORT_ENTER_CRITICAL_SECTION and
 *                          PORT_EXIT_CRITICAL_SECTION.
 *                          2.Updated the copyright information.
 * V1.0.2:  27-Oct-2016   : Following changes were made:
 *                          1.As per ARDAAAF-1364, following change is made:
 *                          a)The enum  value 'PORT_GROUP_ANALOG' removed from
 *                          Port_GroupType enumeration.
 *                          2. As per ARDAAAF-1459,unit design ID, proper
 *                          comments and requirement tags are added at
 *                          applicable places.
 *                          3) As per the ARDAAAF-771, justification added for
 *                          QAC Warnings and MISRA violations at applicable
 *                          places.
 * V1.0.3:  16-Jun-2017   : As part of ARDAAAF-2484, following change made:
 *                          1.PORT_ESDD_UD_113 added for Port_Pin_Direction
 *                          union
 */
/******************************************************************************/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements AR_PN0062_FR_0001, AR_PN0062_FR_0005, EAAR_PN0034_NR_0007*/
/*Implements EAAR_PN0034_NR_0045*/
#ifndef PORT_TYPES_H
#define PORT_TYPES_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Included for pre-compile options */
/* Implements PORT130, PORT108, EAAR_PN0034_FR_0055, EAAR_PN0034_FR_0001*/
/* Implements EAAR_PN0034_FR_0052, EAAR_PN0034_FR_0020, EAAR_PN0034_FR_0021*/
/*Implements EAAR_PN0034_NR_0007, PORT129, PORT207*/
#include "Port_Cfg.h"
/* To publish the standard types */
#include "Std_Types.h"

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* AUTOSAR release version information */
#define PORT_TYPES_AR_RELEASE_MAJOR_VERSION    PORT_AR_RELEASE_MAJOR_VERSION
#define PORT_TYPES_AR_RELEASE_MINOR_VERSION    PORT_AR_RELEASE_MINOR_VERSION
#define PORT_TYPES_AR_RELEASE_REVISION_VERSION \
                                     PORT_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define PORT_TYPES_SW_MAJOR_VERSION    PORT_SW_MAJOR_VERSION
#define PORT_TYPES_SW_MINOR_VERSION    PORT_SW_MINOR_VERSION
/*******************************************************************************
**               SchM Critical Section Protection Macros                      **
*******************************************************************************/
#define PORT_ENTER_CRITICAL_SECTION(Exclusive_Area) \
                                            SchM_Enter_Port_##Exclusive_Area()
#define PORT_EXIT_CRITICAL_SECTION(Exclusive_Area) \
                                            SchM_Exit_Port_##Exclusive_Area()

/*Implements EAAR_PN0034_NR_0002, EAAR_PN0034_NR_0026, PORT129, PORT207*/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/*Message        : (4:0750) A union type specifier has been defined.          */
/*Rule           : MISRA-C:2004 Rule 17.4                                     */
/*Justification  : union type specifier is used to achieve better throughput. */
/*Verification   : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/*Reference      : Look for MISRA Violation: START Msg(4:0750)-1 and          */
/*                 MISRA Violation: END Msg(4:0750)-1                         */
/*                 tags in the code.                                          */

/******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* Implements PORT201 */
/* Type definition for Port_PinType used by the API Port_SetPinDirection() */
/* Implements PORT013, PORT013, PORT219 */
/* Implements PORT_ESDD_UD_109*/
typedef uint16 Port_PinType;

/* Type definition for Port_PinDirectionType used by the API
 * Port_SetPinDirection()
 */
/* Implements PORT046, PORT046 */
/* Implements PORT_ESDD_UD_110*/
typedef enum ETag_Port_PinDirectionType
{
  /* The type Port_PinDirectionType shall be of enumeration type */
  /* Implements PORT220 */
  PORT_PIN_IN = 0,
  PORT_PIN_OUT = 1
} Port_PinDirectionType;
/* Type definition for Port_PinModeType used by the API
 * Port_SetPinMode()
 */
/* Implements PORT124, PORT124, PORT221, PORT212 */
/* Implements PORT_ESDD_UD_111*/
typedef uint8 Port_PinModeType;

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* Type definition for Port Group types */
/*Implements PORT_ESDD_UD_112*/
typedef enum ETag_Port_GroupType
{
  PORT_GROUP_NUMERIC = 0,
  PORT_GROUP_JTAG = 1
} Port_GroupType;
/* Type definition for 32-bit PMSR register */
/* MISRA Violation: START Msg(4:0750)-1 */
/*Implements PORT_ESDD_UD_113*/
typedef union UTag_Port_Pin_Direction
{
  /* MISRA Violation: END Msg(4:0750)-1 */
  /* Full Word*/
  uint32 ulRegContent;
  struct
  {
    /*Lower Word*/
    uint16 usLSWord;
    /*Higher Word*/
    uint16 usMSWord;
  } Tst_Port_Word;
} Port_Pin_Direction;
/* Type definition for 32-bit PMCSR register */
/*Implements PORT_ESDD_UD_089*/
/* MISRA Violation: START Msg(4:0750)-1 */
typedef union UTag_Port_Pin_DioOrAltMode
{
  /* MISRA Violation: END Msg(4:0750)-1 */
  /* Full Word */
  uint32 ulRegContent;
  struct
  {
    /* Lower Word */
    uint16 usLSWord;
    /* Higher Word */
    uint16 usMSWord;
  }Tst_Port_Word;
} Port_Pin_DioOrAltMode;

#endif /* PORT_TYPES_H */
/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
