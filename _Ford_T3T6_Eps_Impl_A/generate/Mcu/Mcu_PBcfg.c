/*============================================================================*/
/* Project    = AUTOSAR Renesas P1x-C MCAL Components                         */
/* Module     = Mcu_PBcfg.c                                                   */
/* $Revision: 507410 $                                                        */
/* $Date: 2018-01-04 16:45:30 +0530 (Thu, 04 Jan 2018) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2018 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Mcu post-build time configurations                      */
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
 * V1.0.1:  29-Feb-2016    : As part of P1x-C 4.01.00 release, following changes
 *                           are made:
 *                           1. As per JIRA ID ARDAAAF-444, added support for
 *                              GTM Configurations.
 *                           2. MISRA Justifications added.
 * V1.0.2:  20-Jan-2017    : Following changes are made:
 *                           1. As per JIRA ID ARDAAAF-505, included float
 *                              values for the calculation of Clock Monitor
 *                              values.
 *                           2. As per JIRA ID ARDAAAF-477, added CLMA4 for all
 *                              device variant except P1M-C device.
 *                           3. As per JIRA ID ARDAAAF-1041, added support for
 *                              Mcu Interrupt Consistency Check .
 *                           4. As per JIRA ID ARDAAAF-1025, added support for
 *                              Mcu Write Verify and added the inclusion of
 *                              Cbk.h file.
 *                           5. As per JIRA ID ARDAAAF-1302, added support
 *                              for CLMA Self Diagnosis Test and removed all
 *                              the references of CLMA5 Clock Monitor.
 *                           6. As per JIRA ID ARDAAAF-1462, added support
 *                              for CVM Self Diagnosis Test.
 *                           7. As per JIRA ID ARDAAAF-1452, added new structure
 *                              Mcu_GstErrorInitNotification for ECM initial
 *                              error notification.
 *                           8. As per JIRA ID ARDAAAF-1454, added support for
 *                              parameters Mcu_CvmDiagLockBit,McuCvmResetEnable
 *                              and removed the parameter McuCvmOutMaskDiag
 *                              from the calculation of the CVMDEW Register
 *                              value.
 *                           9. As per JIRA ID ARDAAAF-1630, parameter
 *                              McuMainOsciFrequency is updated as enumeration
 *                              type with values 16Mhz, 20Mhz and 24Mhz.
 * Ver4.02.00.D_MCU_HF001  : 29-Jun-2017 : Related Tickets :JIRA# ARDAAAF-2606
 *                          : Modification Info :
 *                            1) Generation of dulEcmMaskInterReg0value, 
 *                               ulEcmNonMaskInterReg0value and 
 *                               ulEcmInternalResetReg0value are corrected.
 *                          : Modification Info Ends :
 * Ver4.02.00.D_MCU_HF003: 04-Jan-2018 : Related Tickets :
 *                         JIRA #ARDAAAF-3343
 *                       : Modification Info :
 *                         Generation of ucCvmIndicationReg, ucCvmDiagMask,
 *                         ulEcmNonMaskInterReg0value, ulEcmDelayTimerReg3Value,
 *                         ulEcmMaskInterReg0value, ulEcmDelayTimerReg0Value,
 *                         ulEcmErrorMaskReg0Value, usStopModeEnable and
 *                         usWakeupEnable are corrected.
 *                       : Modification Info Ends :
 */
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Mcu.h"
#include "Mcu_PBTypes.h"
#include "Mcu_Cbk.h"
/*******************************************************************************
**                      QAC Warnings                                          **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:0315) Implicit conversion from a pointer to object      */
/*                 type to a pointer to void.                                 */
/* Rule          : No Rule                                                    */
/* Justification : Assignation is done to access the structure elements       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:0315)-1 and                           */
/*                 END Msg(2:0315)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:3132) Hard coded 'magic' number, '', used to define the */
/*                 size of an array.                                          */
/* Rule          : No Rule                                                    */
/* Justification : Hard coded Numbers are added instead of macros for better  */
/*                 readability.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3132)-2 and                           */
/*                 END Msg(2:3132)-2 tags in the code.                        */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined here but is not   */
/*                not used in this translation unit.                          */
/* Rule         : No Rule                                                     */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Mcu_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-3 and                            */
/*                END Msg(2:3211)-3 tags in the code.                         */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       : (2:3674) Array size defined implicitly by the number of    */
/*                 initializers.                                              */
/* Rule          : No Rule                                                    */
/* Justification : Array size vary in different configurations.               */
/*                 So giving fixed array size is not possible.                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3674)-4 and                           */
/*                 END Msg(2:3674)-4 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#define MCU_PBCFG_C_AR_RELEASE_MAJOR_VERSION \
                                        MCU_AR_RELEASE_MAJOR_VERSION_VALUE
#define MCU_PBCFG_C_AR_RELEASE_MINOR_VERSION \
                                        MCU_AR_RELEASE_MINOR_VERSION_VALUE
#define MCU_PBCFG_C_AR_RELEASE_REVISION_VERSION \
                                        MCU_AR_RELEASE_REVISION_VERSION_VALUE
/* File version information */
#define MCU_PBCFG_C_SW_MAJOR_VERSION     MCU_SW_MAJOR_VERSION_VALUE
#define MCU_PBCFG_C_SW_MINOR_VERSION     MCU_SW_MINOR_VERSION_VALUE
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (MCU_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
                                 MCU_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Mcu_PBcfg.c : Mismatch in Release Major Version"
#endif
#if (MCU_PBTYPES_AR_RELEASE_MINOR_VERSION != \
                                 MCU_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Mcu_PBcfg.c : Mismatch in Release Minor Version"
#endif
#if (MCU_PBTYPES_AR_RELEASE_REVISION_VERSION != \
                                 MCU_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Mcu_PBcfg.c : Mismatch in Release Revision Version"
#endif
#if (MCU_PBTYPES_SW_MAJOR_VERSION != MCU_PBCFG_C_SW_MAJOR_VERSION)
  #error "Mcu_PBcfg.c : Mismatch in Software Major Version"
#endif
#if (MCU_PBTYPES_SW_MINOR_VERSION != MCU_PBCFG_C_SW_MINOR_VERSION)
  #error "Mcu_PBcfg.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
 * Post Build Configurations
*******************************************************************************/
/******************************************************************************/
/*                         Configurable Definitions                           */
/******************************************************************************/
#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* QAC Warning: START Msg(2:3132)-2 */
/* Structure for Ram setting configuration */
STATIC CONST(Mcu_RamSetting, MCU_CONST) Mcu_GstRamSetting0[1]=
{
  /*Ram Setting:0 */
  {
    /*ulRamSectionBaseAddress */
    0xFEDE0000UL,
    /*ulRamSectionSize */
    0x00000100UL,
    /*ucRamDefaultValue */
    0xFFU
  }
};
/* END Msg(2:3132)-2 */
/* Structure for Mode setting configuration */
STATIC CONST(Mcu_ModeSetting, MCU_CONST) Mcu_GstModeSetting0[1]=
{
  /*Mode Setting:0 */
  {
    /*ulImr0MaskValue*/
    0x00000001UL,
    /*ulImr1MaskValue*/
    0x00000000UL,
    /*ulImr2MaskValue*/
    0x00000000UL,
    /*ulImr3MaskValue*/
    0x00000000UL,
    /*ulImr4MaskValue*/
    0x00000000UL,
    /*ulImr5MaskValue*/
    0x00000000UL,
    /*ulImr6MaskValue*/
    0x00000000UL,
    /*ulImr7MaskValue*/
    0x00000000UL,
    /*usStopModeEnable*/
    0x0000U,
    /*usWakeupEnable*/
    0x0175U,
    /*ucModeType*/
    MCU_HALT_MODE
  }
};
/* Structure for ECM configuration */
STATIC CONST(Mcu_EcmSetting, MCU_CONST) Mcu_GstEcmSetting0 =
{
  /* ulEcmMaskInterReg0value */
  0x00000000UL,
  /* ulEcmMaskInterReg1value */
  0x000B0000UL,
  /* ulEcmMaskInterReg2value */
  0x00000000UL,
  /* ulEcmNonMaskInterReg0value */
  0x2200171DUL,
  /* ulEcmNonMaskInterReg1value */
  0x0000012BUL,
  /* ulEcmNonMaskInterReg2value */
  0x1F07E201UL,
  /* ulEcmInternalResetReg0value */
  0x00000002UL,
  /* ulEcmInternalResetReg1value */
  0x00000000UL,
  /* ulEcmInternalResetReg2value */
  0x00000000UL,
  /* ulEcmErrorMaskReg0Value */
  0x01F40040UL,
  /* ulEcmErrorMaskReg1Value */
  0x03FB0210UL,
  /* ulEcmErrorMaskReg2Value */
  0x2098010EUL,
  /* ulEcmDelayTimerReg0Value */
  0x00000000UL,
  /* ulEcmDelayTimerReg1Value */
  0x00000000UL,
  /* ulEcmDelayTimerReg2Value */
  0x00000000UL,
  /* ulEcmDelayTimerReg3Value */
  0x00000000UL,
  /* ulEcmDelayTimerReg4Value */
  0x00000000UL,
  /* ulEcmDelayTimerReg5Value */
  0x00000000UL,
  /* ucEcmInitErrorCount */
  0U
};
/* QAC Warning: START Msg(2:3674)-4 */
STATIC CONST(Mcu_ErrorNotification, MCU_CONST) Mcu_GstMINotification0[] =
{
/* END Msg(2:3674)-4 */
   {
     &RamMemLclRamSngBitEcc
   },
   {
     &RamMemGlbRamSngBitEcc
   },
   {
     &CodFlsSngBitEcc
   },
   {
     NULL_PTR
   }
 };
/* QAC Warning: START Msg(2:3674)-4 */
STATIC CONST(Mcu_ErrorNotification, MCU_CONST) Mcu_GstNMINotification0[] =
{
/* END Msg(2:3674)-4 */
   {
          &FeNmiWdgErr
        },
   {
          &FeNmiDmaLockStepErrOrGblRamWrBufErr
        },
   {
          &FeNmiBusBrdgErr
        },
   {
          &FeNmiProcrLockStepErr
        },
   {
          &FeNmiClkMonr0RtErr
        },
   {
          &FeNmiClkMonr2RtErr
        },
   {
          &FeNmiClkMonr3RtErr
        },
   {
          &FeNmiClkMonr1RtErr
        },
   {
          &FeNmiGtmRamDblBitEccErr
        },
   {
          &FeNmiBusSngBitEccErr
        },
   {
          &FeNmiLclRamEccAdrOvfErr
        },
   {
          &FeNmiGlbRamEccAdrOvfErr
        },
   {
          &FeNmiCodFlsEccAdrOvfErr
        },
   {
          &FeNmiPrphlRamEccAdrOvfErr
        },
   {
          &FeNmiDtsRamDblBitEccErr
        },
   {
          &FeNmiPegErr
        },
   {
          &FeNmiGblRamIllglAcsByProcr
        },
   {
          &FeNmiCodFlsIllglAcsBySysBus
        },
   {
          &FeNmiGblRamIllglAcsBySysBus
        },
   {
          &FeNmiResdAreaIllglAcsByHiSpdBus
        },
   {
          &FeNmiDmaTrfErr
        },
   {
          &FeNmiDmaIllglAcsErr
        },
   {
          &FeNmiFlsSeqErr
        },
   {
          &FeNmiModErrUsrModInactv
        },
   {
          &FeNmiModErrProgmModActv
        },
   {
          &FeNmiModErrDbgActv
        },
   {
          &FeNmiModErrTestModActv
        },
   {
          &FeNmiEcmMstChkrErr
        },
   {
     NULL_PTR
   }
 };
/* QAC Warning: START Msg(2:3674)-4 */
STATIC CONST(Mcu_InitErrorNotification, MCU_CONST)
                           Mcu_GstErrorInitNotification0[] =
{
/* END Msg(2:3674)-4 */
   {
     /* pInitNotifyFuncPtr */
     NULL_PTR,
     /* ulEcmErrorSrcMask */
     0UL,
     /* ucEcmRegIndx */
     0U
   }
 };
/* Structure for Clock setting configuration */
STATIC CONST(Mcu_ClockSetting, MCU_CONST) Mcu_GstClockSetting0[1] =
{
  /*Clock Setting:0 */
  {
    /*ulSysClk0Divider */
    0x00000001U,
    /*ulSysClk1Divider */
    0x00000001U,
    /*ulExtClk0Divider */
    0x00000001U,
    /*ulExtClk1Divider */
    0x00000001U,
    /*usCLMA0CMPL*/
    0x0035U,
    /*usCLMA0CMPH*/
    0x004DU,
    /*usCLMA1CMPL*/
    0x008CU,
    /*usCLMA1CMPH*/
    0x00B6U,
    /*usCLMA2CMPL*/
    0x06D7U,
    /*usCLMA2CMPH*/
    0x0971U,
    /*usCLMA3CMPL*/
    0x01A8U,
    /*usCLMA3CMPH*/
    0x021FU,
    /*ulSysClk0SelectedSrcClock*/
    0x00000001U,
    /*ulExtClk0SelectedSrcClock*/
    0x00000006U,
    /*ulExtClk1SelectedSrcClock*/
    0x00000006U
  }
};
#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
#define MCU_START_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"
/* Structure for MCU Init configuration */
/* QAC Warning: START Msg(2:3211)-3 */
CONST(Mcu_ConfigType, MCU_CONST) Mcu_GstConfiguration[1] =
{
      /* END Msg(2:3211)-3 */
  /* McuModuleConfiguration: 0  */
  {
    /* ulStartOfDbToc */
    0x0ED94108UL,
    /*ulMaxRamSetting*/
    0UL,
    /*ucCvmIndicationReg*/
    0xBCU,
    /* ucSWRstTrigger */
    0x02U,
    /* ucEcmRstConf */
    0x00U,
    /*ucMaxClockSetting*/
    0U,
    /*ucMaxModeSetting*/
    0U,
    /*ucCvmDiagMask*/
    0x00U,
    /* pEcmSetting */
    /* MISRA Violation:  START Msg(2:0315)-1 */
    &Mcu_GstEcmSetting0,
    /* pClockSetting */
    &Mcu_GstClockSetting0[0],
    /*pRamSetting*/
    &Mcu_GstRamSetting0[0],
    /*pModeSetting*/
    &Mcu_GstModeSetting0[0],
    /*pMINotification*/
    &Mcu_GstMINotification0[0],
    /*pNMINotification*/
    &Mcu_GstNMINotification0[0],
    /*pErrorInitNotification*/
    &Mcu_GstErrorInitNotification0[0]
    /* END Msg(2:0315)-1 */
    }
};
#define MCU_STOP_SEC_DBTOC_DATA_UNSPECIFIED
#include "MemMap.h"
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

