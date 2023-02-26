/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Dio_Cfg.h                                                   */
/* $Revision: 419858 $                                                        */
/* $Date: 2017-06-13 16:56:06 +0530 (Tue, 13 Jun 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Dio pre-compile time configurations                     */
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
 * V1.0.1:  30-Mar-2016 : 1. As per ARDAAAF-329, DIO_CHANNEL_GROUP_ARRAY_SIZE
 *                           generated
 *                        2. As per ARDAAAF-329, DIO_CRITICAL_SECTION_PROTECTION
 *                           generated
 *                        3. Copyright Information is updated.
 *
 * V1.0.2: 06-Oct-2016  : 1. As per ARDAAAF-1126 the following changes are made:
 *                           Added following macros,
 *                           DIO_PPR_OFFSET_NONJTAG, DIO_PNOT_OFFSET_NONJTAG,
 *                           DIO_PPR_OFFSET_JTAG, DIO_PNOT_OFFSET_JTAG,
 *                           DIO_PMSR_OFFSET_JTAG,DIO_PMSR_OFFSET_NONJTAG,
 *                           DIO_NO_OF_CHGRP_PER_CFGSET,
 *                           DIO_SIZE_OF_CHGRP_STRUCT, DIO_CONFIG_ARRAY_SIZE,
 *                           DIO_PORT_ARRAY_SIZE,DIO_CHANNEL_ARRAY_SIZE.
 *                        2. As per ARDAAAF-1017,Generation of following
 *                           macros added.
 *                           a. DIO_USE_WV_ERROR_INTERFACE
 *                           b. DIO_WRITE_VERIFY
 *                           c. DIO_ERROR_NOTIFICATION
 *                           d. DIO_E_REG_WRITE_VERIFY
 *
 * V1.0.3: 02-May-2017  : As per ARDAAAF-2357, Removed trailing spaces for
 *                        Pre-compile option.
 *
 * V1.0.4: 16-Jun-2017  : 1. As per ARDAAAF-2414, unwanted macros
 *                           DIO_MAXNOOFPORT, DIO_MAXNOOFCHANNEL, and
 *                           DIO_INVALID_CHANNEL_GROUP are removed.
 *                        2. As per ARDAAAF-2475,
 *                           a. Corrected the alignment in revision history
 *                              banner.
 *                           b. Removed the unused macro
 *                              DIO_PNOT_OFFSET_NONJTAG.
 */
/******************************************************************************/
#ifndef DIO_CFG_H
#define DIO_CFG_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*******************************************************************************
**                      Macro definitions                                     **
*******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* DIO SW Major Version */
#define DIO_SW_MAJOR_VERSION_VALUE              1U
/* DIO SW Minor Version */
#define DIO_SW_MINOR_VERSION_VALUE              0U
/* DIO SW Revision Version */
#define DIO_SW_PATCH_VERSION_VALUE              4U
/* DIO AR Major Version */
#define DIO_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* DIO AR Minor Version */
#define DIO_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* DIO AR Revision Version */
#define DIO_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* DIO Module ID */
#define DIO_MODULE_ID_VALUE                     120U
/* DIO Vendor ID */
#define DIO_VENDOR_ID_VALUE                     59U
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* Instance ID of the DIO Driver */
#define DIO_INSTANCE_ID_VALUE                           0U
/* Pre-compile option for Development Error Detect */
#define DIO_DEV_ERROR_DETECT                            STD_ON
/* Pre-compile option for Version Info API */
#define DIO_VERSION_INFO_API                            STD_OFF
/* Pre-compile option for Dio_MaskedWritePort API */
#define DIO_MASKED_WRITE_PORT_API                       STD_OFF
/* Pre-compile option for Dio_FlipChannel API */
#define DIO_FLIP_CHANNEL_API                            STD_OFF
/* Pre-compile option for Ext Module Version Check */
#define DIO_VERSION_CHECK_EXT_MODULES                   STD_OFF
/* Pre-compile option for Critical Section Protection */
#define DIO_CRITICAL_SECTION_PROTECTION                 STD_ON
/* Offset for getting PPR register address from PSR
    register address for NONJTAG Ports. */
#define DIO_PPR_OFFSET_NONJTAG                         (uint16)0x02
/* Offset for getting JPPR register address from JPSR
    register address for JTAG ports  */
#define DIO_PPR_OFFSET_JTAG                            (uint8)0x02
/* Offset for getting JPNOT register address from JPSR
    register address for JTAG ports. */
#define DIO_PNOT_OFFSET_JTAG                           (uint8)0x01
/* Offset for getting JPMSR register address from JPMSR
    register address for JTAG ports  */
#define DIO_PMSR_OFFSET_JTAG                           (uint8)0x07
/* Offset for getting PMSR register address from
    PMSR register address for NONJTAG ports. */
#define DIO_PMSR_OFFSET_NONJTAG                        (uint16)0x07
/* Pre-compile option for presence of Channel */
#define DIO_CHANNEL_CONFIGURED                          STD_ON
/* Pre-compile option for presence of Channel Group */
#define DIO_CHANNELGROUP_CONFIGURED                     STD_OFF
/* Array size for the channel group structure */
#define DIO_CHANNEL_GROUP_ARRAY_SIZE                   0U
/* Total number of channel groups configured per configset */
#define DIO_NO_OF_CHGRP_PER_CFGSET                     0U
/* Size of the Dio Channel Group Structure */
#define DIO_SIZE_OF_CHGRP_STRUCT                       4U
/* Symbolic name generated for DioPort container */
#define DioConf_DioPort_Port0                          (Dio_PortType)0U
#define DioConf_DioPort_Port1                          (Dio_PortType)1U
#define DioConf_DioPort_Port2                          (Dio_PortType)2U
#define DioConf_DioPort_Port3                          (Dio_PortType)3U
#define DioConf_DioPort_Port4                          (Dio_PortType)4U
#define DioConf_DioPort_Port5                          (Dio_PortType)5U
#define DioConf_DioPort_Port6                          (Dio_PortType)6U
/* Symbolic name generated for DioChannel */
#define DioConf_DioChannel_HwTrqA                      (Dio_ChannelType)0U
#define DioConf_DioChannel_ResetOutZ                   (Dio_ChannelType)1U
#define DioConf_DioChannel_HwTrqB                      (Dio_ChannelType)2U
#define DioConf_DioChannel_EcuId2                      (Dio_ChannelType)3U
#define DioConf_DioChannel_HwTrqD                      (Dio_ChannelType)4U
#define DioConf_DioChannel_GateDrv0Rst                 (Dio_ChannelType)5U
#define DioConf_DioChannel_TmplMonrWdg                 (Dio_ChannelType)6U
#define DioConf_DioChannel_GateDrv0Diagc               (Dio_ChannelType)7U
#define DioConf_DioChannel_HwTrqB_SPCO                 (Dio_ChannelType)8U
#define DioConf_DioChannel_SysFlt2A                    (Dio_ChannelType)9U
#define DioConf_DioChannel_HwPos1_SPCO                 (Dio_ChannelType)10U
#define DioConf_DioChannel_PwrSplyCs                   (Dio_ChannelType)11U
#define DioConf_DioChannel_HwTrqA_SPCO                 (Dio_ChannelType)12U
#define DioConf_DioChannel_EcuId1                      (Dio_ChannelType)13U
#define DioConf_DioChannel_PhaAUpprCmd                 (Dio_ChannelType)14U
#define DioConf_DioChannel_Mod0                        (Dio_ChannelType)15U
#define DioConf_DioChannel_Mod1                        (Dio_ChannelType)16U
#define DioConf_DioChannel_PwrSplyNotFlt               (Dio_ChannelType)17U
#define DioConf_DioChannel_FLMD1                       (Dio_ChannelType)18U
#define DioConf_DioChannel_McuEna                      (Dio_ChannelType)19U
#define DioConf_DioChannel_PhaBUpprCmd                 (Dio_ChannelType)20U
#define DioConf_DioChannel_PhaALowrCmd                 (Dio_ChannelType)21U
#define DioConf_DioChannel_HwPos1                      (Dio_ChannelType)22U
#define DioConf_DioChannel_HwTrqC                      (Dio_ChannelType)23U
#define DioConf_DioChannel_PwrOutpEnaFb                (Dio_ChannelType)24U
#define DioConf_DioChannel_PhaCUpprCmd                 (Dio_ChannelType)25U
#define DioConf_DioChannel_PhaCLowrCmd                 (Dio_ChannelType)26U
#define DioConf_DioChannel_PhaBLowrCmd                 (Dio_ChannelType)27U
#define DioConf_DioChannel_McuTod                      (Dio_ChannelType)28U
/* Symbolic name generated for DioChannelGroup */
/* Symbolic name generated for DioConfigset */
#define DioConf_DioConfig_DioConfig                  (&Dio_GstConfiguration[0])
/* Enable/Disable the register write check
WV_DISABLE - 0 , WV_INIT_RUNTIME - 1 */
#define DIO_WRITE_VERIFY                                0U
/* Enable/Disable Error Interface for Reg_Write_Verify */
#define DIO_USE_WV_ERROR_INTERFACE                      STD_OFF
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/* The Array size of the configured Config Structure */
#define DIO_CONFIG_ARRAY_SIZE                          (Dio_PortType)1
/* The Array size of the configured Port Structure */
#define DIO_PORT_ARRAY_SIZE                            (uint8)7
/* The Array size of the configured Channel Structure */
#define DIO_CHANNEL_ARRAY_SIZE                           29U
#endif  /* DIO_CFG_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

