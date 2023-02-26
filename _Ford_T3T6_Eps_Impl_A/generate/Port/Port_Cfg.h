/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port_Cfg.h                                                  */
/* $Revision: 508109 $                                                        */
/* $Date: 2018-01-08 15:15:09 +0530 (Mon, 08 Jan 2018) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
 /* Copyright(c) 2015 - 2018  Renesas Electronics Corporation                 */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Port pre-compile time configurations                    */
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
 * V1.0.1:  27-Jan-2017   : Following changes were made :
 *                          As per Jira ARDAAAF-1250, following macros added,
 *                          1.Added precompile macro PORT_MAX_MODE.
 *                          2.Added  precompile macro PORT_WRITE_VERIFY.
 *                          3.Added  precompile macro
 *                          PORT_USE_WRITE_VERIFY_ERROR_INTERFACE.
 *                          4.Added  precompile macro
 *                          PORT_WRITE_VERIFY_ERROR_NOTIFICATION.
 *                          5.Added  precompile macro PORT_E_REG_WRITE_VERIFY.
 *                          6.As per ARDAAAF-1459, unit design ID, proper
 *                          comments and requirement tags are added at
 *                          applicable places.
 *                          7.Copyright information is updated.
 * Ver4.02.00.D_PORT_HF002: 09-Jan-2018 : Related Tickets :
 *                          JIRA #ARDAAAF-3343
 *                        : Modification Info :
 *                          Generation of the macro PORT_PINV_REG_AVAILABLE
 *                          is corrected.
 *                        : Modification Info Ends :
 */
/******************************************************************************/
#ifndef PORT_CFG_H
#define PORT_CFG_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Port_Hardware.h"
/*******************************************************************************
**                      Macro definitions                                     **
*******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* PORT SW Major Version */
#define PORT_SW_MAJOR_VERSION_VALUE              1U
/* PORT SW Minor Version */
#define PORT_SW_MINOR_VERSION_VALUE              0U
/* PORT SW Revision Version */
#define PORT_SW_PATCH_VERSION_VALUE              4U
/* PORT AR Major Version */
#define PORT_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* PORT AR Minor Version */
#define PORT_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* PORT AR Revision Version */
#define PORT_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* PORT Module ID */
#define PORT_MODULE_ID_VALUE                     124U
/* PORT Vendor ID */
#define PORT_VENDOR_ID_VALUE                     59U
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/*Implements PORT147*/
/* Instance ID of the PORT Driver Component */
#define PORT_INSTANCE_ID_VALUE                   0U
/*Implements PORT100, PORT101, PORT107, PORT123_Conf*/
/* Pre-compile option for Enables/Disables Development error detect */
#define PORT_DEV_ERROR_DETECT                 STD_ON
/*Implements PORT131_Conf*/
/* Pre-compile option for Enables/Disables Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API            STD_OFF
/*Implements PORT132_Conf*/
/* Pre-compile option for Enables/Disables Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API                 STD_ON
/*Implements PORT103, PORT133_Conf*/
/* Pre-compile option for Enables/Disables Port_GetVersionInfo API */
#define PORT_VERSION_INFO_API                 STD_ON
/*Implements AR_PN0062_FR_0080*/
/* Pre-compile option for enter/exit critical section functionality */
#define PORT_CRITICAL_SECTION_PROTECTION      STD_ON
/*Implements AR_PN0062_FR_0083*/
/* Indicates the number of Alternative Modes  */
#define PORT_MAX_MODE                         (uint8)0x9
/* Indicates availability of PINV register */
#define PORT_PINV_REG_AVAILABLE               STD_OFF
/*Implements AR_PN0062_FR_0078*/
/* Pre-compile option for enable or disable version check of
                                          inter-module dependencies */
#define PORT_VERSION_CHECK_EXT_MODULES        STD_OFF
/* Pre-compile option for Enable/Disable  PortSetToDioAltMode API */
#define PORT_SET_TO_DIO_ALT_MODE_API          STD_ON
/*Implements AR_PN0062_FR_0078*/
/* Pre-compile option for Enable/Disable  Port_SetPinDefaultDirection API */
#define PORT_SET_PIN_DEFAULT_DIRECTION_API    STD_OFF
/* Pre-compile option for Enable/Disable the Port_SetPinDefaultMode API */
#define PORT_SET_PIN_DEFAULT_MODE_API         STD_OFF
/* Pre-compile option for Enable/Disable the register write-verify check  */
#define PORT_WRITE_VERIFY                     0U
/* Enable/Disable Reg Write-verify Failure Error Interface  */
#define PORT_USE_WRITE_VERIFY_ERROR_INTERFACE STD_OFF
/* Availability of numeric port groups */
#define PORT_NUM_PORT_GROUPS_AVAILABLE        STD_ON
/* Availability of jtag port groups */
#define PORT_JTAG_PORT_GROUPS_AVAILABLE       STD_ON
/*Implements PORT124_Conf*/
/* The following constant contains total number of pins configured */
#define PORT_TOTAL_NUMBER_OF_PINS             (uint16)105
/****** Definition of Filter Config set ******/
/* Availability of DNFA noise elimination registers */
#define PORT_DNFA_REG_CONFIG                   STD_OFF
/* Availability of FCLA noise elimination registers */
#define PORT_FCLA_REG_CONFIG                   STD_OFF
/*Implements PORT006, PORT076, PORT207, PORT208*/
/****** Definition of Port Pin Handles ******/
#define Port_PortGroup0_PortPin0                   (Port_PinType)0U
#define Port_PortGroup0_PortPin1                   (Port_PinType)1U
#define Port_PortGroup0_PortPin2                   (Port_PinType)2U
#define Port_PortGroup0_PortPin3                   (Port_PinType)3U
#define Port_PortGroup0_PortPin4                   (Port_PinType)4U
#define Port_PortGroup0_PortPin5                   (Port_PinType)5U
#define Port_PortGroup0_PortPin6                   (Port_PinType)6U
#define Port_PortGroup0_PortPin7                   (Port_PinType)7U
#define Port_PortGroup0_PortPin8                   (Port_PinType)8U
#define Port_PortGroup0_PortPin9                   (Port_PinType)9U
#define Port_PortGroup0_PortPin10                  (Port_PinType)10U
#define Port_PortGroup0_PortPin13                  (Port_PinType)11U
#define Port_PortGroup0_PortPin14                  (Port_PinType)12U
#define Port_PortGroup1_PortPin1                   (Port_PinType)13U
#define Port_PortGroup1_PortPin2                   (Port_PinType)14U
#define Port_PortGroup1_PortPin3                   (Port_PinType)15U
#define Port_PortGroup1_PortPin4                   (Port_PinType)16U
#define Port_PortGroup1_PortPin5                   (Port_PinType)17U
#define Port_PortGroup1_PortPin6                   (Port_PinType)18U
#define Port_PortGroup1_PortPin7                   (Port_PinType)19U
#define Port_PortGroup2_PortPin0                   (Port_PinType)20U
#define Port_PortGroup2_PortPin1                   (Port_PinType)21U
#define Port_PortGroup2_PortPin2                   (Port_PinType)22U
#define Port_PortGroup2_PortPin3                   (Port_PinType)23U
#define Port_PortGroup2_PortPin4                   (Port_PinType)24U
#define Port_PortGroup2_PortPin5                   (Port_PinType)25U
#define Port_PortGroup2_PortPin6                   (Port_PinType)26U
#define Port_PortGroup2_PortPin7                   (Port_PinType)27U
#define Port_PortGroup2_PortPin8                   (Port_PinType)28U
#define Port_PortGroup2_PortPin9                   (Port_PinType)29U
#define Port_PortGroup2_PortPin10                  (Port_PinType)30U
#define Port_PortGroup2_PortPin11                  (Port_PinType)31U
#define Port_PortGroup2_PortPin12                  (Port_PinType)32U
#define Port_PortGroup2_PortPin13                  (Port_PinType)33U
#define Port_PortGroup2_PortPin14                  (Port_PinType)34U
#define Port_PortGroup2_PortPin15                  (Port_PinType)35U
#define Port_PortGroup3_PortPin0                   (Port_PinType)36U
#define Port_PortGroup3_PortPin1                   (Port_PinType)37U
#define Port_PortGroup3_PortPin2                   (Port_PinType)38U
#define Port_PortGroup3_PortPin3                   (Port_PinType)39U
#define Port_PortGroup3_PortPin4                   (Port_PinType)40U
#define Port_PortGroup3_PortPin5                   (Port_PinType)41U
#define Port_PortGroup3_PortPin6                   (Port_PinType)42U
#define Port_PortGroup3_PortPin7                   (Port_PinType)43U
#define Port_PortGroup3_PortPin8                   (Port_PinType)44U
#define Port_PortGroup3_PortPin9                   (Port_PinType)45U
#define Port_PortGroup3_PortPin10                  (Port_PinType)46U
#define Port_PortGroup3_PortPin11                  (Port_PinType)47U
#define Port_PortGroup3_PortPin12                  (Port_PinType)48U
#define Port_PortGroup3_PortPin13                  (Port_PinType)49U
#define Port_PortGroup3_PortPin14                  (Port_PinType)50U
#define Port_PortGroup4_PortPin0                   (Port_PinType)51U
#define Port_PortGroup4_PortPin1                   (Port_PinType)52U
#define Port_PortGroup4_PortPin2                   (Port_PinType)53U
#define Port_PortGroup4_PortPin3                   (Port_PinType)54U
#define Port_PortGroup4_PortPin4                   (Port_PinType)55U
#define Port_PortGroup4_PortPin5                   (Port_PinType)56U
#define Port_PortGroup4_PortPin6                   (Port_PinType)57U
#define Port_PortGroup4_PortPin7                   (Port_PinType)58U
#define Port_PortGroup4_PortPin8                   (Port_PinType)59U
#define Port_PortGroup4_PortPin9                   (Port_PinType)60U
#define Port_PortGroup4_PortPin10                  (Port_PinType)61U
#define Port_PortGroup4_PortPin11                  (Port_PinType)62U
#define Port_PortGroup4_PortPin12                  (Port_PinType)63U
#define Port_PortGroup4_PortPin13                  (Port_PinType)64U
#define Port_PortGroup4_PortPin14                  (Port_PinType)65U
#define Port_PortGroup5_PortPin0                   (Port_PinType)66U
#define Port_PortGroup5_PortPin1                   (Port_PinType)67U
#define Port_PortGroup5_PortPin4                   (Port_PinType)68U
#define Port_PortGroup5_PortPin5                   (Port_PinType)69U
#define Port_PortGroup5_PortPin6                   (Port_PinType)70U
#define Port_PortGroup5_PortPin7                   (Port_PinType)71U
#define Port_PortGroup5_PortPin8                   (Port_PinType)72U
#define Port_PortGroup5_PortPin9                   (Port_PinType)73U
#define Port_PortGroup5_PortPin10                  (Port_PinType)74U
#define Port_PortGroup5_PortPin11                  (Port_PinType)75U
#define Port_PortGroup5_PortPin12                  (Port_PinType)76U
#define Port_PortGroup5_PortPin13                  (Port_PinType)77U
#define Port_PortGroup5_PortPin14                  (Port_PinType)78U
#define Port_PortGroup5_PortPin15                  (Port_PinType)79U
#define Port_PortGroup6_PortPin0                   (Port_PinType)80U
#define Port_PortGroup6_PortPin1                   (Port_PinType)81U
#define Port_PortGroup6_PortPin2                   (Port_PinType)82U
#define Port_PortGroup6_PortPin3                   (Port_PinType)83U
#define Port_PortGroup6_PortPin4                   (Port_PinType)84U
#define Port_PortGroup6_PortPin5                   (Port_PinType)85U
#define Port_PortGroup6_PortPin6                   (Port_PinType)86U
#define Port_PortGroup6_PortPin10                  (Port_PinType)87U
#define Port_PortGroup6_PortPin11                  (Port_PinType)88U
#define Port_PortGroup6_PortPin12                  (Port_PinType)89U
#define Port_PortGroup6_PortPin13                  (Port_PinType)90U
#define Port_PortGroup7_PortPin0                   (Port_PinType)91U
#define Port_PortGroup7_PortPin1                   (Port_PinType)92U
#define Port_PortGroup7_PortPin2                   (Port_PinType)93U
#define Port_PortGroup7_PortPin3                   (Port_PinType)94U
#define Port_PortGroup7_PortPin4                   (Port_PinType)95U
#define Port_PortGroup7_PortPin5                   (Port_PinType)96U
#define Port_PortGroup9_PortPin7                   (Port_PinType)97U
#define Port_PortGroup9_PortPin8                   (Port_PinType)98U
#define Port_PortGroupJtag0_PortPin0               (Port_PinType)99U
#define Port_PortGroupJtag0_PortPin1               (Port_PinType)100U
#define Port_PortGroupJtag0_PortPin2               (Port_PinType)101U
#define Port_PortGroupJtag0_PortPin3               (Port_PinType)102U
#define Port_PortGroupJtag0_PortPin4               (Port_PinType)103U
#define Port_PortGroupJtag0_PortPin5               (Port_PinType)104U
/* Configuration Set Handles */
#define PortConfigSet         (&Port_GstConfiguration[0])
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#endif /* PORT_CFG_H  */
/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/

