/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi                                                         */
/* $Revision: 507102 $                                                        */
/* $Date: 2018-01-03 18:00:15 +0530 (Wed, 03 Jan 2018) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015   Renesas Electronics Corporation                        */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Spi pre-compile time configurations                     */
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
 * V1.0.0:  01-Aug-2015    : Initial  Version
 * V1.0.1:  12-Feb-2016    : As part of P1x-C V4.01.00, following changes are
 *                           done,
 *                            1) As per JIRA ARDAAAF-290,
 *                               IsBooleanParameterEnabledOrDisabled is
 *                               updated for path information in error report.
 * V1.0.2:  11-Jan-2017    : Following changes were done,
 *                            1) As part of the JIRA ticket ARDAAAF-1026,
 *                               Write-verify user interface implementation,
 *                               following pre compiler macros and error
 *                               notifications are added:
 *                               a. SPI_WRITE_VERIFY
 *                               b. SPI_DMA_WRITE_VERIFY
 *                               c. SPI_USE_WV_ERROR_INTERFACE
 *                               d. SPI_E_REG_WRITE_VERIFY
 *                               e. SPI_ERROR_NOTIFICATION
 *                            2) As part of the JIRA ticket ARDAAAF-1064, for
 *                               the implementation of the Self_Test
 *                               functionality, following pre compiler macros
 *                               and error notifications are added:
 *                               a. SPI_LOOPBACK_SELFTEST
 *                               b. SPI_ECC_SELFTEST
 *                               c. SPI_SELF_TEST_API
 *                               d. SPI_E_LOOPBACK_SELFTEST_FAILURE
 *                               e. SPI_E_ECC_SELFTEST_FAILURE
 *                            3) As per JIRA ARDAAAF-1042, pre compiler macro
 *                               'SPI_INTERRUPT_CONSISTENCY_CHECK' and DEM error
 *                               'SPI_E_INT_INCONSISTENT' is added
 *                               to implement interrupt consistency checks.
 *                            4) As per JIRA ARDAAAF-1042, EIC register
 *                               addresses are defined for all
 *                               hardware units to implement interrupt
 *                               consistency checks.
 *                            5) As part of the JIRA ticket ARDAAAF-1026,
 *                               updated the macro name SPI_WRITE_VERIFY to
 *                               SPI_CSIH_WRITE_VERIFY and renamed the
 *                               parameters SpiWriteVerify and
 *                               SpiDmaWriteVerify to SpiCSIHWriteVerify and
 *                               SpiDMAWriteVerify respectively.
 *                            6) As part of the JIRA ticket ARDAAAF-1406, check
 *                               added for following non mandatory parameters
 *                               generation
 *                                a) SpiInternalErrorBufferSize
 *                                b) Spi_UseWriteVerifyErrorInterface
 *                                c) SpiWriteVerifyErrorInterface.
 *                            7) As part of JIRA ticket ARDAAAF-947, conditional
 *                               check for the macro generation
 *                               'SPI_INTERNAL_RW_BUFFERS' updated.
 *                            8) As part of JIRA ticket ARDAAAF-1496, handling
 *                               of 'CSIHX interrupt switches' updated.
 *                            9) As part of JIRA ticket ARDAAAF-1108, the
 *                               generation of Tx channel DMA ISR disabled.
 */
/******************************************************************************/
#ifndef SPI_CFG_H
#define SPI_CFG_H
/* SPI SW Major Version */
#define SPI_SW_MAJOR_VERSION_VALUE              2U
/* SPI SW Minor Version */
#define SPI_SW_MINOR_VERSION_VALUE              0U
/* SPI SW Revision Version */
#define SPI_SW_PATCH_VERSION_VALUE              0U
/* SPI AR Major Version */
#define SPI_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* SPI AR Minor Version */
#define SPI_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* SPI AR Revision Version */
#define SPI_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* SPI Module ID */
#define SPI_MODULE_ID_VALUE                     83U
/* SPI Vendor ID */
#define SPI_VENDOR_ID_VALUE                     59U
/* Pre-compile option for Version information */
#define SPI_AR_VERSION                              SPI_AR_HIGHER_VERSION
/* CSIH Configuration */
#define SPI_CSIH_CONFIGURED                         STD_ON
/* Instance ID of the SPI SpiDriver*/
#define SPI_INSTANCE_ID_VALUE                       0U
/* Enables/Disables Development error detection */
#define SPI_DEV_ERROR_DETECT                        STD_ON
/* Enables/Disables GetVersionInfo API */
#define SPI_VERSION_INFO_API                        STD_OFF
/* Pre-compile option for enable or disable inter-module dependencies */
#define SPI_VERSION_CHECK_EXT_MODULES               STD_OFF
/* Switches the Interruptible SpiSequence handling functionality ON or OFF */
#define SPI_INTERRUPTIBLE_SEQ_ALLOWED               STD_OFF
/* Enables/Disables the SpiDma mode */
#define SPI_DMA_MODE_ENABLE                         STD_OFF
/* Enables/Disables GetHWUnitStatus API */
#define SPI_HW_STATUS_API                           STD_OFF
/* Enables/Disables Cancel API */
#define SPI_CANCEL_API                              STD_ON
/* Enables/Disables IB Channel Operation */
#define SPI_IB_CONFIGURED                           STD_ON
/* Enables/Disables EB Channel Operation */
#define SPI_EB_CONFIGURED                           STD_OFF
/* Selects the SPI Handler/SpiDriver level of scalable functionality */
#define SPI_LEVEL_DELIVERED                         SPI_ONE
#define SPI_HWUNIT_ASYNCHRONOUS                     STD_ON
/* Selects the SPI Handler/SpiDriver Channel Buffers usage allowed */
#define SPI_CHANNEL_BUFFERS_ALLOWED                 SPI_ZERO
/* Number of SpiChannel configured */
#define SPI_MAX_CHANNEL                             (Spi_ChannelType)41U
/* Number of SpiJob configured */
#define SPI_MAX_JOB                                 (Spi_JobType)27U
/* Number of SpiSequence configured */
#define SPI_MAX_SEQUENCE                            (Spi_SequenceType)27U
/* Enables/Disables configuration of extended data length */
#define SPI_EXTENDED_DATA_LENGTH                    STD_OFF
#define SPI_8BIT_DATA_WIDTH                         STD_OFF
#define SPI_16BIT_DATA_WIDTH                        STD_ON
/* Enables/Disables configuration of data consistency check */
#define SPI_DATA_CONSISTENCY_CHECK                  STD_ON
/* Enables/Disables configuration of Direct Access Memory mode selection */
#define SPI_DIRECT_ACCESS_MODE                      STD_OFF
/* Enables/Disables configuration of Fifo Memory mode selection */
#define SPI_FIFO_MODE                               STD_ON
/* Enables/Disables configuration of Dual Buffer Memory mode selection */
#define SPI_DUAL_BUFFER_MODE                        STD_OFF
/* Enables/Disables configuration of Tx only Memory mode selection */
#define SPI_TX_ONLY_MODE                            STD_OFF
/* Set SPI_MAX_NUM_OF_TX_ONLY_CSIH count */
#define SPI_MAX_NUM_OF_TX_ONLY_CSIH                 0U
/* Set SPI_MAX_NUM_OF_DUAL_BUFFER_CSIH */
#define SPI_MAX_NUM_OF_DUAL_BUFFER_CSIH             0U
/* Enables/Disables configuration of critical section functionality */
#define SPI_CRITICAL_SECTION_PROTECTION             STD_ON
/* Internal R/W Buffers configured */
#define SPI_INTERNAL_RW_BUFFERS                     STD_ON
/* Specifies whether concurrent Spi_SyncTransmit() calls
   for different sequences shall be configurable */
#define SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT        STD_OFF
/* Enables/Disables sequence start notification function */
#define SPI_SEQ_STARTNOTIFICATION_ENABLED           STD_OFF
/* Enables/Disables sequence end notification function */
#define SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED        STD_OFF
/* Maximum number of cancel bytes */
#define SPI_MAX_CANCEL_BYTES                        4U
/*If sequence is high priority, the value is SPI_TRUE */
#define SPI_HW_PRIORITY_ENABLED                     STD_OFF
/* Gives the maximum number of Hardware units */
#define SPI_MAX_CSIH_HW_INDEX                       4U
#define SPI_PERSISTENT_HW_CONFIGURATION_ENABLED     STD_ON
#define SPI_ALREADY_INIT_DET_CHECK                  STD_ON
/* SPI timeout value */
#define SPI_LOOP_TIMEOUT                            65535U
/* SPI DMA Type Used */
#define SPI_DMA_TYPE_USED                           SPI_DMA_TYPE_TWO
/* Number of structure of type Spi_HWUnitInfo */
#define SPI_MAX_HW_DETAILS                          4U
/* The failure of the sequence is reported using the following error code */
#define SPI_E_HARDWARE_ERROR                       \
              DemConf_DemEventParameter_SPI_E_HARDWARE_ERROR
#define SPI_E_DATA_TX_TIMEOUT_FAILURE              \
              DemConf_DemEventParameter_SPI_E_DATA_TX_TIMEOUT_FAILURE
/* CSIH0 interrupt switches */
#define SPI_CSIH0_TIC_ISR_API                       STD_ON
#define SPI_CSIH0_TIJC_ISR_API                      STD_OFF
#define SPI_CSIH0_TIRE_ISR_API                      STD_ON
#define SPI_CSIH0_TIR_ISR_API                       STD_OFF
/* CSIH1 interrupt switches */
#define SPI_CSIH1_TIC_ISR_API                       STD_OFF
#define SPI_CSIH1_TIJC_ISR_API                      STD_OFF
#define SPI_CSIH1_TIRE_ISR_API                      STD_OFF
#define SPI_CSIH1_TIR_ISR_API                       STD_OFF
/* CSIH2 interrupt switches */
#define SPI_CSIH2_TIC_ISR_API                       STD_OFF
#define SPI_CSIH2_TIJC_ISR_API                      STD_OFF
#define SPI_CSIH2_TIRE_ISR_API                      STD_OFF
#define SPI_CSIH2_TIR_ISR_API                       STD_OFF
/* CSIH3 interrupt switches */
#define SPI_CSIH3_TIC_ISR_API                       STD_OFF
#define SPI_CSIH3_TIJC_ISR_API                      STD_OFF
#define SPI_CSIH3_TIRE_ISR_API                      STD_OFF
#define SPI_CSIH3_TIR_ISR_API                       STD_OFF
/* DMA0 interrupt switches */
#define SPI_DMA0_ISR_API                            STD_OFF
/* DMA1 interrupt switches */
#define SPI_DMA1_ISR_API                            STD_OFF
/* DMA2 interrupt switches */
#define SPI_DMA2_ISR_API                            STD_OFF
/* DMA3 interrupt switches */
#define SPI_DMA3_ISR_API                            STD_OFF
/* DMA4 interrupt switches */
#define SPI_DMA4_ISR_API                            STD_OFF
/* DMA5 interrupt switches */
#define SPI_DMA5_ISR_API                            STD_OFF
/* DMA6 interrupt switches */
#define SPI_DMA6_ISR_API                            STD_OFF
/* DMA7 interrupt switches */
#define SPI_DMA7_ISR_API                            STD_OFF
/* DMA8 interrupt switches */
#define SPI_DMA8_ISR_API                            STD_OFF
/* DMA9 interrupt switches */
#define SPI_DMA9_ISR_API                            STD_OFF
/* DMA10 interrupt switches */
#define SPI_DMA10_ISR_API                            STD_OFF
/* DMA11 interrupt switches */
#define SPI_DMA11_ISR_API                            STD_OFF
/* DMA12 interrupt switches */
#define SPI_DMA12_ISR_API                            STD_OFF
/* DMA13 interrupt switches */
#define SPI_DMA13_ISR_API                            STD_OFF
/* DMA14 interrupt switches */
#define SPI_DMA14_ISR_API                            STD_OFF
/* DMA15 interrupt switches */
#define SPI_DMA15_ISR_API                            STD_OFF
/* Gives the start index of the receive buffer in case of TX ONLY mode */
#define SPI_RX_BUFFER_START                          0U
/* Gives the maximum queue */
#define SPI_MAX_QUEUE                                6U
/*Register write verify enable macro.*/
#define SPI_CSIH_WRITE_VERIFY                        0U
/*DMA register write verify enable macro.*/
#define SPI_DMA_WRITE_VERIFY                         0U
/* Enables/disables the error notification interface for Write-Verify
                                                     functionality */
#define SPI_USE_WV_ERROR_INTERFACE                   STD_OFF
/* Enables/Disables the internal Diagnosis feature */
#define SPI_INTERNAL_DIAG_BUFF                       STD_ON
/* Maximum Buffer of size of Error  Information array */
#define SPI_MAX_ERROR_BUFFER_SIZE                    32U
/* Enables/Disables Loop back self test functionality */
#define SPI_LOOPBACK_SELFTEST                        SPI_ZERO
/* Enables/Disables ECC self test functionality */
#define SPI_ECC_SELFTEST                             SPI_ZERO
/* Enables/Disables the self test functionality during run time */
#define SPI_SELF_TEST_API                            STD_OFF
/* Enables/Disables the interrupt consistency check functionality */
#define SPI_INTERRUPT_CONSISTENCY_CHECK              STD_OFF
/* TRACE [R4, SPI200_Conf] */
/* Handles for configured SpiChannel */
#define SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch  (Spi_ChannelType)36U
#define SpiConf_SpiChannel_GateDrv0Diag2Ch  (Spi_ChannelType)32U
#define SpiConf_SpiChannel_GateDrv0Cfg9Ch  (Spi_ChannelType)24U
#define SpiConf_SpiChannel_GateDrv0Cfg5Ch  (Spi_ChannelType)20U
#define SpiConf_SpiChannel_GateDrv0Cfg1Ch  (Spi_ChannelType)16U
#define SpiConf_SpiChannel_GateDrv0Cfg10Ch  (Spi_ChannelType)25U
#define SpiConf_SpiChannel_GateDrv0VrfyCmd1Ch  (Spi_ChannelType)37U
#define SpiConf_SpiChannel_GateDrv0Diag1Ch  (Spi_ChannelType)31U
#define SpiConf_SpiChannel_GateDrv0Mask2Ch  (Spi_ChannelType)35U
#define SpiConf_SpiChannel_GateDrv0Cfg6Ch  (Spi_ChannelType)21U
#define SpiConf_SpiChannel_GateDrv0Cfg2Ch  (Spi_ChannelType)17U
#define SpiConf_SpiChannel_TmplMonrCh5  (Spi_ChannelType)4U
#define SpiConf_SpiChannel_TmplMonrCh4  (Spi_ChannelType)3U
#define SpiConf_SpiChannel_TmplMonrCh1  (Spi_ChannelType)0U
#define SpiConf_SpiChannel_GateDrv0Cfg11Ch  (Spi_ChannelType)26U
#define SpiConf_SpiChannel_TmplMonrCh3  (Spi_ChannelType)2U
#define SpiConf_SpiChannel_TmplMonrCh2  (Spi_ChannelType)1U
#define SpiConf_SpiChannel_PwrSplyCh6  (Spi_ChannelType)10U
#define SpiConf_SpiChannel_GateDrv0Diag0Ch  (Spi_ChannelType)30U
#define SpiConf_SpiChannel_PwrSplyCh7  (Spi_ChannelType)11U
#define SpiConf_SpiChannel_PwrSplyCh8  (Spi_ChannelType)12U
#define SpiConf_SpiChannel_GateDrv0VrfyCmd2Ch  (Spi_ChannelType)38U
#define SpiConf_SpiChannel_PwrSplyCh9  (Spi_ChannelType)13U
#define SpiConf_SpiChannel_PwrSplyCh1  (Spi_ChannelType)5U
#define SpiConf_SpiChannel_PwrSplyCh2  (Spi_ChannelType)6U
#define SpiConf_SpiChannel_PwrSplyCh3  (Spi_ChannelType)7U
#define SpiConf_SpiChannel_PwrSplyCh4  (Spi_ChannelType)8U
#define SpiConf_SpiChannel_PwrSplyCh5  (Spi_ChannelType)9U
#define SpiConf_SpiChannel_GateDrv0CtrlCh  (Spi_ChannelType)29U
#define SpiConf_SpiChannel_GateDrv0Mask1Ch  (Spi_ChannelType)34U
#define SpiConf_SpiChannel_GateDrv0Cfg7Ch  (Spi_ChannelType)22U
#define SpiConf_SpiChannel_GateDrv0VrfyRes1Ch  (Spi_ChannelType)40U
#define SpiConf_SpiChannel_GateDrv0Cfg3Ch  (Spi_ChannelType)18U
#define SpiConf_SpiChannel_GateDrv0Cfg12Ch  (Spi_ChannelType)27U
#define SpiConf_SpiChannel_GateDrv0Cfg8Ch  (Spi_ChannelType)23U
#define SpiConf_SpiChannel_GateDrv0Mask0Ch  (Spi_ChannelType)33U
#define SpiConf_SpiChannel_GateDrv0Cfg4Ch  (Spi_ChannelType)19U
#define SpiConf_SpiChannel_GateDrv0VrfyRes0Ch  (Spi_ChannelType)39U
#define SpiConf_SpiChannel_GateDrv0Cfg0Ch  (Spi_ChannelType)15U
#define SpiConf_SpiChannel_PwrSplyCh10  (Spi_ChannelType)14U
#define SpiConf_SpiChannel_GateDrv0Cfg13Ch  (Spi_ChannelType)28U
/* Handles for configured SpiJob */
#define SpiConf_SpiJob_PwrSplyJob5  (Spi_JobType)9U
#define SpiConf_SpiJob_PwrSplyJob4  (Spi_JobType)8U
#define SpiConf_SpiJob_PwrSplyJob7  (Spi_JobType)11U
#define SpiConf_SpiJob_PwrSplyJob6  (Spi_JobType)10U
#define SpiConf_SpiJob_PwrSplyJob9  (Spi_JobType)13U
#define SpiConf_SpiJob_PwrSplyJob8  (Spi_JobType)12U
#define SpiConf_SpiJob_GateDrv0Cfg9Job  (Spi_JobType)17U
#define SpiConf_SpiJob_PwrSplyJob1  (Spi_JobType)5U
#define SpiConf_SpiJob_PwrSplyJob3  (Spi_JobType)7U
#define SpiConf_SpiJob_GateDrv0VrfyCmd1Job  (Spi_JobType)25U
#define SpiConf_SpiJob_PwrSplyJob2  (Spi_JobType)6U
#define SpiConf_SpiJob_TmplMonrJob1  (Spi_JobType)0U
#define SpiConf_SpiJob_GateDrv0Cfg10Job  (Spi_JobType)18U
#define SpiConf_SpiJob_TmplMonrJob5  (Spi_JobType)4U
#define SpiConf_SpiJob_TmplMonrJob4  (Spi_JobType)3U
#define SpiConf_SpiJob_TmplMonrJob3  (Spi_JobType)2U
#define SpiConf_SpiJob_TmplMonrJob2  (Spi_JobType)1U
#define SpiConf_SpiJob_GateDrv0VrfyCmd2Job  (Spi_JobType)26U
#define SpiConf_SpiJob_GateDrv0Cfg13Job  (Spi_JobType)21U
#define SpiConf_SpiJob_GateDrv0CmnDiagJob  (Spi_JobType)22U
#define SpiConf_SpiJob_GateDrv0VrfyCmd0Job  (Spi_JobType)24U
#define SpiConf_SpiJob_GateDrv0Cfg11Job  (Spi_JobType)19U
#define SpiConf_SpiJob_GateDrv0CtrlJob  (Spi_JobType)23U
#define SpiConf_SpiJob_GateDrv0Cfg8Job  (Spi_JobType)16U
#define SpiConf_SpiJob_PwrSplyJob10  (Spi_JobType)14U
#define SpiConf_SpiJob_GateDrv0AllCfgJob  (Spi_JobType)15U
#define SpiConf_SpiJob_GateDrv0Cfg12Job  (Spi_JobType)20U
/* TRACE [R4, SPI224_Conf] */
/* Handles for configured SpiSequence */
#define SpiConf_SpiSequence_GateDrv0VrfyCmd2Seq  (Spi_SequenceType)26U
#define SpiConf_SpiSequence_GateDrv0Cfg11Seq  (Spi_SequenceType)19U
#define SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq  (Spi_SequenceType)24U
#define SpiConf_SpiSequence_GateDrv0AllCfgSeq  (Spi_SequenceType)15U
#define SpiConf_SpiSequence_PwrSplySeq7  (Spi_SequenceType)11U
#define SpiConf_SpiSequence_PwrSplySeq6  (Spi_SequenceType)10U
#define SpiConf_SpiSequence_PwrSplySeq9  (Spi_SequenceType)13U
#define SpiConf_SpiSequence_PwrSplySeq8  (Spi_SequenceType)12U
#define SpiConf_SpiSequence_PwrSplySeq3  (Spi_SequenceType)7U
#define SpiConf_SpiSequence_PwrSplySeq2  (Spi_SequenceType)6U
#define SpiConf_SpiSequence_PwrSplySeq5  (Spi_SequenceType)9U
#define SpiConf_SpiSequence_PwrSplySeq4  (Spi_SequenceType)8U
#define SpiConf_SpiSequence_GateDrv0VrfyCmd1Seq  (Spi_SequenceType)25U
#define SpiConf_SpiSequence_PwrSplySeq1  (Spi_SequenceType)5U
#define SpiConf_SpiSequence_GateDrv0CmnDiagSeq  (Spi_SequenceType)22U
#define SpiConf_SpiSequence_TmplMonrSeq5  (Spi_SequenceType)4U
#define SpiConf_SpiSequence_TmplMonrSeq4  (Spi_SequenceType)3U
#define SpiConf_SpiSequence_TmplMonrSeq3  (Spi_SequenceType)2U
#define SpiConf_SpiSequence_TmplMonrSeq2  (Spi_SequenceType)1U
#define SpiConf_SpiSequence_GateDrv0Cfg12Seq  (Spi_SequenceType)20U
#define SpiConf_SpiSequence_TmplMonrSeq1  (Spi_SequenceType)0U
#define SpiConf_SpiSequence_GateDrv0Cfg9Seq  (Spi_SequenceType)17U
#define SpiConf_SpiSequence_PwrSplySeq10  (Spi_SequenceType)14U
#define SpiConf_SpiSequence_GateDrv0Cfg10Seq  (Spi_SequenceType)18U
#define SpiConf_SpiSequence_GateDrv0Cfg8Seq  (Spi_SequenceType)16U
#define SpiConf_SpiSequence_GateDrv0Cfg13Seq  (Spi_SequenceType)21U
#define SpiConf_SpiSequence_GateDrv0CtrlSeq  (Spi_SequenceType)23U
/* Handles for configured HW unit */
#define SPI_CSIH0  (Spi_HWUnitType)0U
#define SPI_CSIH1  (Spi_HWUnitType)1U
#define SPI_CSIH2  (Spi_HWUnitType)2U
#define SPI_CSIH3  (Spi_HWUnitType)3U
/* Configuration Set Handles */
#define SpiDriver0  (&Spi_GstConfiguration[0])
#endif  /* SPI_CFG_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

