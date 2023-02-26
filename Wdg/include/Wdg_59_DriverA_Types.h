/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Wdg_59_DriverA_Types.h                                      */
/* $Revision: 365314 $                                                        */
/* $Date: 2017-02-20 14:47:40 +0000 (Mon, 20 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Database declaration.                                         */
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
 * V1.0.0:  07-Aug-2015    : Initial Version
 *
 * V1.0.1:  08-Mar-2016    : The following changes are done as part of P1x-C
 *                           V4.01.00 release.
 *                           1. Alignment in file banner corrected.
 *                           2. Copyright information updated.
 *
 * V2.0.0:  20-Feb-2017    : The following changes are made :
 *                           1. As per ticket ARDAAAF-976, file adapted from
 *                              P1x.
 *                           2. As per ticket ARDAAAF-1435, Comments added for
 *                              traceability.
 *                           3. As per ticket ARDAAAF-469, type of SlowTimeValue
 *                              FastTimeValue, InitTimerCountValue
 *                              DefaultTimeValue are changed to uint32.
 */
/******************************************************************************/
#ifndef WDG_59_DRIVERA_TYPES_H
#define WDG_59_DRIVERA_TYPES_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements AR_PN0064_FR_0030 */
/* Included for declaration of type WdgIf_ModeType */
#include "WdgIf_Types.h"
/* Included for pre-compile options */
#include "Wdg_59_DriverA_Cfg.h"
/* Included for pre-compile options */
#include "Wdg_59_DriverA.h"
/* Included for Register Write Verify options */
#include "Wdg_59_DriverA_RegWrite.h"


/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* AUTOSAR release version information */
#define WDG_59_DRIVERA_TYPES_AR_RELEASE_MAJOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MAJOR_VERSION
#define WDG_59_DRIVERA_TYPES_AR_RELEASE_MINOR_VERSION \
                                        WDG_59_DRIVERA_AR_RELEASE_MINOR_VERSION
#define WDG_59_DRIVERA_TYPES_AR_RELEASE_REVISION_VERSION \
                                     WDG_59_DRIVERA_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define WDG_59_DRIVERA_TYPES_SW_MAJOR_VERSION   WDG_59_DRIVERA_SW_MAJOR_VERSION
#define WDG_59_DRIVERA_TYPES_SW_MINOR_VERSION   WDG_59_DRIVERA_SW_MINOR_VERSION

/*******************************************************************************
**                      Structure declarations                                **
*******************************************************************************/

/* Implements WDG171 */
typedef struct STag_Wdg_59_DriverA_ConfigType
{
  /* Database start value */
  uint32 ulStartOfDbToc;

  /* Value of Timer Counter for Default mode */
  uint32 ulInitTimerCountValue;

  /* Implements WDG116_Conf */
  #if (STD_ON  == WDG_59_DRIVERA_DISABLE_ALLOWED )
  /* Implements AR_PN0064_FR_0038 */
  /* Value of 75% interrupt time for SLOW mode in msec */
  uint32 ulSlowTimeValue;
  /* Value of 75% interrupt time for FAST mode in msec */
  uint32 ulFastTimeValue;

  /* Value of WDTAMD register for SLOW mode */
  uint8 ucWdtamdSlowValue;
  /* Value of WDTAMD register for FAST mode */
  uint8 ucWdtamdFastValue;
  #else
  /* Implements AR_PN0064_FR_0038 */
  /* Value of 75% interrupt time for Default mode in msec */
  uint32 ulDefaultTimeValue;
  #endif

  /* Value of WDTAMD register for Default mode */
  uint8 ucWdtamdDefaultValue;
  /* Configured Default mode */
  WdgIf_ModeType ddWdtamdDefaultMode;
}Wdg_59_DriverA_ConfigType;


#if (STD_ON  == WDG_59_DRIVERA_DEV_ERROR_DETECT )

/* Type definition for the current state of Watchdog Driver */
typedef enum ETag_Wdg_59_DriverA_StatusType
{
  WDG_59_DRIVERA_UNINIT = 0,
  WDG_59_DRIVERA_IDLE,
  WDG_59_DRIVERA_BUSY
}Wdg_59_DriverA_StatusType;

#endif

#endif /* WDG_59_DRIVERA_TYPES_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
