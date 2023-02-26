/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu_Cfg.h                                                   */
/* $Revision: 352959 $                                                        */
/* $Date: 2017-01-25 22:19:34 +0530 (Wed, 25 Jan 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Mcu pre-compile time configurations                     */
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
 * V1.0.0:  14-Aug-2015    : Initial Version.
 * V1.0.1:  27-Feb-2016    : As part of P1x-C 4.01.00 release, following changes
 *                           are made:
 *                           1. As per JIRA ID ARDAAAF-444, added support for
 *                              GTM Configurations.
 * V1.0.2:  27-Jan-2017    : Following changes are made:
 *                           1. As per JIRA ID ARDAAAF-519,added pre-compile
 *                              switch MCU_RAM_SECTOR_SETTING_CONFIGURED.
 *                           2. As per JIRA ID ARDAAAF-477, added CLMA4 for all
 *                              device variant except P1M-C device.
 *                           3. As per JIRA ID ARDAAAF-1041, added support for
 *                              Mcu Interrupt Consistency Check .
 *                           4. As per JIRA ID ARDAAAF-1025, added support for
 *                              Mcu Write Verify.
 *                           5. As per JIRA ID ARDAAAF-1302, added support
 *                              for CLMA Self Diagnosis Test.
 *                           6. As per JIRA ID ARDAAAF-1463, added support for
 *                              ECM Self Diagnosis.
 *                           7. As per JIRA ID ARDAAAF-1462, added support
 *                              for CVM Self Diagnosis Test.
 *                           8. As per JIRA ID ARDAAAF-1451, added support
 *                              for Compare Unit Start-up Self Diagnosis Test.
 *                           9. As per JIRA ID ARDAAAF-1452, added call back
 *                              notification function for Initial ECM Errors.
 *                           10.As per JIRA ID ARDAAAF-1428, Total no of ECM
 *                              units for P1x-C devices is generated using the
 *                              macro MCU_NO_OF_ECM_INSTANCES.
 *                           11.As per JIRA ARDAAAF-1471, generated parameter
 *                              handler name for ModeSetting is updated.
 *                           12.As per JIRA ARDAAAF-1575, typecast for
 *                              MCU_ECM_ERROUT_MODE is updated as 32 bit.
 */
/******************************************************************************/
#ifndef MCU_CFG_H
#define MCU_CFG_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/*******************************************************************************
**                      Macro definitions                                     **
*******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* MCU SW Major Version */
#define MCU_SW_MAJOR_VERSION_VALUE              1U
/* MCU SW Minor Version */
#define MCU_SW_MINOR_VERSION_VALUE              1U
/* MCU SW Revision Version */
#define MCU_SW_PATCH_VERSION_VALUE              0U
/* MCU AR Major Version */
#define MCU_AR_RELEASE_MAJOR_VERSION_VALUE      4U
/* MCU AR Minor Version */
#define MCU_AR_RELEASE_MINOR_VERSION_VALUE      0U
/* MCU AR Revision Version */
#define MCU_AR_RELEASE_REVISION_VERSION_VALUE   3U
/* MCU Module ID */
#define MCU_MODULE_ID_VALUE                     101U
/* MCU Vendor ID */
#define MCU_VENDOR_ID_VALUE                     59U
/* MCU Instance ID */
#define MCU_INSTANCE_ID_VALUE                   0U
/*******************************************************************************
*                         Configurable Definitions                             *
*******************************************************************************/
/* Pre-compile option for version check */
#define MCU_VERSION_CHECK_EXT_MODULES           STD_OFF
/* Pre-compile option for the development error detection and reporting */
#define MCU_DEV_ERROR_DETECT                    STD_ON
/* Pre-compile option for Mcu_GetVersion API */
#define MCU_VERSION_INFO_API                    STD_OFF
/* Pre-compile option for Mcu_PerformReset API */
#define MCU_PERFORM_RESET_API                   STD_ON
/* Pre-compile option for availability of McuGetRamState Api */
#define MCU_GET_RAM_STATE_API                   STD_OFF
/* Pre-compile option for Mcu_DistributePllClock API */
#define MCU_NO_PLL                              STD_ON
/* Pre-compile option for Mcu_InitClock API */
#define MCU_INIT_CLOCK                          STD_ON
/* Pre-compile option for McuSwResetCallApi*/
#define MCU_SW_RESET_CALL_API                   STD_OFF
/* Pre-compile option for McuCriticalSectionProtection*/
#define MCU_CRITICAL_SECTION_PROTECTION         STD_ON
/* Pre-compile option for McuClm0Operation*/
#define MCU_CLMA0_OPERATION                     STD_ON
/* Pre-compile option for McuClm1Operation*/
#define MCU_CLMA1_OPERATION                     STD_ON
/* Pre-compile option for McuClm2Operation*/
#define MCU_CLMA2_OPERATION                     STD_ON
/* Pre-compile option for McuClm3Operation*/
#define MCU_CLMA3_OPERATION                     STD_ON
/* Pre-compile option for McuClm4Operation*/
#define MCU_CLMA4_OPERATION                    STD_OFF
/* Pre-compile option for McuGTMConfigurationSupport*/
#define MCU_GTM_SUPPORT                         STD_OFF
/* Pre-compile option for McuRamSectorSetting*/
#define MCU_RAM_SECTOR_SETTING_CONFIGURED       STD_OFF
/* Pre-compile option for McuInterruptConsistencyCheck*/
#define MCU_INTERRUPT_CONSISTENCY_CHK           STD_OFF
/* Pre-compile option for McuCvmSelfDiagnosticTest*/
#define MCU_CVM_SELFDIAGNOSTIC_TEST             STD_OFF
/* This Parameter compiles switch to enable or disable the  Error Interface */
#define MCU_USE_WV_ERROR_INTERFACE              STD_OFF
/* Pre-compile option for CLMA Self diagnostic Test*/
#define MCU_CLMA_SELFDIAGNOSTIC_TEST            STD_OFF
/* Pre-compile option for McuEcmSelfDiagnosticTest*/
#define MCU_ECM_SELFDIAGNOSTIC_TEST             STD_OFF
/* Pre-compile option for McuLockStepSelfDiagnosticTest*/
#define MCU_LOCKSTEP_SELFDIAGNOSTIC_TEST        STD_OFF
/* Value for the MCU_ECM_ERROUT_MODE  */
#define MCU_ECM_ERROUT_MODE                     (uint32)0x00U
/* Pre-compile option for Mcu ECM Delay Timer */
#define MCU_ECM_DLYTIMER_VALUE                  (uint32)0x0000FFFFUL
/* Loop Count Value for the MCULOOPCOUNT  */
#define MCU_LOOPCOUNT_VALUE                     5U
/* No of ECM units */
#define MCU_NO_OF_ECM_INSTANCES                 1U
/* This Parameter compiles switch to enable or disable the
 register write check WV_DISABLE - 0,WV_INIT_ONLY - 1,WV_INIT_RUNTIME - 2 */
#define MCU_WRITE_VERIFY                        0U
/* MCU Max Config Setting */
#define MCU_MAX_CONFIG_SETTING                  1U
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/*Symbolic Name generated for McuClockSettingId*/
/*Clocksetting handles */
#define McuConf_McuClockSettingConfig_McuClockSettingConfig \
  (Mcu_ClockType)0U
/*RamSetting Handles */
#define MCU_RAM_SETTING_0                       (Mcu_RamSectionType)0UL
/*ModeSetting Handles*/
#define McuConf_McuModeSettingConf_McuModeSettingConf (Mcu_ModeType)0x0
/* Configuration Set Handles */
#define McuConf_McuModuleConfiguration_McuModuleConfiguration \
  (&Mcu_GstConfiguration[0])
/*Dem Error Ids*/
#define MCU_E_CLOCK_FAILURE  \
  DemConf_DemEventParameter_MCU_E_CLOCK_FAILURE
#define MCU_E_WRITE_TIMEOUT_FAILURE  \
  DemConf_DemEventParameter_MCU_E_WRITE_TIMEOUT_FAILURE
#define MCU_E_POWERDOWN_MODE_FAILURE  \
  DemConf_DemEventParameter_MCU_E_POWERDOWN_MODE_FAILURE
/* Callback notification function */
extern void  FeNmiWdgErr (void);
extern void  FeNmiDmaLockStepErrOrGblRamWrBufErr (void);
extern void  FeNmiBusBrdgErr (void);
extern void  FeNmiProcrLockStepErr (void);
extern void  FeNmiClkMonr0RtErr (void);
extern void  FeNmiClkMonr2RtErr (void);
extern void  FeNmiClkMonr3RtErr (void);
extern void  FeNmiClkMonr1RtErr (void);
extern void  FeNmiGtmRamDblBitEccErr (void);
extern void  FeNmiBusSngBitEccErr (void);
extern void  FeNmiLclRamEccAdrOvfErr (void);
extern void  FeNmiGlbRamEccAdrOvfErr (void);
extern void  FeNmiCodFlsEccAdrOvfErr (void);
extern void  FeNmiPrphlRamEccAdrOvfErr (void);
extern void  FeNmiDtsRamDblBitEccErr (void);
extern void  RamMemLclRamSngBitEcc (void);
extern void  RamMemGlbRamSngBitEcc (void);
extern void  CodFlsSngBitEcc (void);
extern void  FeNmiPegErr (void);
extern void  FeNmiGblRamIllglAcsByProcr (void);
extern void  FeNmiCodFlsIllglAcsBySysBus (void);
extern void  FeNmiGblRamIllglAcsBySysBus (void);
extern void  FeNmiResdAreaIllglAcsByHiSpdBus (void);
extern void  FeNmiDmaTrfErr (void);
extern void  FeNmiDmaIllglAcsErr (void);
extern void  FeNmiFlsSeqErr (void);
extern void  FeNmiModErrUsrModInactv (void);
extern void  FeNmiModErrProgmModActv (void);
extern void  FeNmiModErrDbgActv (void);
extern void  FeNmiModErrTestModActv (void);
extern void  FeNmiEcmMstChkrErr (void);
#endif /* MCU_CFG_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

