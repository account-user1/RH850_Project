/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_Ram.h                                                   */
/* $Revision: 420860 $                                                        */
/* $Date: 2017-06-14 21:01:20 +0900 (水, 14 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* Global RAM variable definitions for Dio Driver are declared.               */
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
 * V1.0.1: 30-Sep-2016 : 1. As per JIRA ARDAAAF-12, INIT_POLICY added for
 *                          Global Data Types
 *                       2. Copyright Information is updated.
 *
 * V1.0.2: 24-May-2017 : As per ARDAAAF-2049,
 *                       PREFIX and INITPOLICY of memory sections are
 *                       changed.
 *
 * V1.0.3: 16-Jun-2017 : As per ARDAAAF-2475,
 *                       a. Corrected the alignment in revision history banner.
 *                       b. Renamed Dio_SpConfigPtr to Dio_GpConfigPtr.
 */
/******************************************************************************/
#ifndef DIO_RAM_H
#define DIO_RAM_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Std_Types.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define DIO_RAM_AR_RELEASE_MAJOR_VERSION     DIO_AR_RELEASE_MAJOR_VERSION
#define DIO_RAM_AR_RELEASE_MINOR_VERSION     DIO_AR_RELEASE_MINOR_VERSION
#define DIO_RAM_AR_RELEASE_REVISION_VERSION  DIO_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define DIO_RAM_SW_MAJOR_VERSION    DIO_SW_MAJOR_VERSION
#define DIO_RAM_SW_MINOR_VERSION    DIO_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#define DIO_59_RENESAS_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"
/* Constant data to store the configuration set  */
extern P2CONST(Dio_ConfigType, DIO_VAR, DIO_APPL_CONST) Dio_GpConfigPtr;
#define DIO_59_RENESAS_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"

#if (DIO_DEV_ERROR_DETECT == STD_ON)
#define DIO_59_RENESAS_START_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"
/* Variable to store the Dio driver initialization status */
extern VAR(boolean, DIO_INIT_DATA) Dio_GblDriverStatus;
#define DIO_59_RENESAS_STOP_SEC_VAR_INIT_BOOLEAN
#include "MemMap.h"
#endif

#define DIO_59_RENESAS_START_SEC_VAR_NO_INIT_16
#include "MemMap.h"

#if (DIO_CHANNELGROUP_CONFIGURED == STD_ON)
/*
 * Global variable to indicate the offset of channel groups starting for the
 * corresponding configuration set in the array Dio_GstChannelGroupData[].
 */
extern VAR(uint16, DIO_CONFIG_CONST) Dio_GusChannelGroupsOffset;
#endif

#define DIO_59_RENESAS_STOP_SEC_VAR_NO_INIT_16
#include "MemMap.h"
/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/

#endif /* DIO_RAM_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
