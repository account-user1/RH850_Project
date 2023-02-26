/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = Mcu_PBTypes.h                                              */
/* $ Revision: 296480 $                                                      */
/* $Date: 2017-02-24 14:26:03 +0000 (Fri, 24 Feb 2017) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                    */
/*===========================================================================*/
/* Purpose:                                                                  */
/* This file contains the type definitions of Post-build Time Parameters     */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Unless otherwise agreed upon in writing between your company and          */
/* Renesas Electronics Corporation the following shall apply!                */
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* There is no warranty of any kind whatsoever granted by Renesas. Any       */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed*/
/* or implied, including but not limited to those for non-infringement of    */
/* intellectual property, merchantability and/or fitness for the particular  */
/* purpose.                                                                  */
/*                                                                           */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Devices:        P1x-C                                        */
/*===========================================================================*/

/******************************************************************************
**                      Revision Control History                             **
******************************************************************************/
/*
 * V1.0.0:  14-Aug-2015 : Initial Version.
 * V1.0.1:  15-Feb-2016 : As part of P1x-C 4.01.00 release, following changes
 *                        are made:
 *                        1. As per JIRA ID ARDAAAF-444, added a macro
 *                           MCU_CMU_MASK to mask the GTM CMU clock, added
 *                           macro MCU_CMUCLK_ENABLE to enable the CMU clock,
 *                           added structure Mcu_GTMCMUClockSetting for
 *                           GTM CMU Clock Initialization and added structure
 *                           Mcu_GTMCMUGlobalSetting to store the values CMU
 *                           Global Clock Numerator, CMU Global Clock
 *                           Denominator and total no of CMU clocks configured.
 *                        2. Added typecasting to the macro MCU_DBTOC_VALUE
 *                           to fix the QAC warning.
 *                        3. As per JIRA ID ARDAAAF-526, element
 *                           ucSysClk1SelectedSrcClock is removed from the
 *                           Mcu_ClockSetting structure.
 *                        4. As per JIRA ID ARDAAAF-536, "MCU_HIBERNATION_MODE"
 *                           is changed to "MCU_MODULE_STANDBY_MODE".
 *                        5. Typedef corrected for Mcu_ModeSetting structure.
 *                        6. Copyright Information is updated.
 * V1.0.2:  27-Jan-2017 : Following changes are made:
 *                        1. As per JIRA ID ARDAAAF-519, the macro
 *                           MCU_RAM_MASK0_VALUE and MCU_RAM_MASK1_VALUE are
 *                           updated.
 *                        2. As per JIRA ID ARDAAAF-477, added CLMA4 support for
 *                           all the supported device variants and added the
 *                           macro GETPEID.
 *                        3. As per JIRA ID ARDAAAF-1302, added structure
 *                           Mcu_CLMASelfDiag and removed the CLMA5 clock
 *                           monitoring elements from the Mcu_ClockSetting
 *                           structure.
 *                        4. As per JIRA ID ARDAAAF-1462,added CVM SelfDiagnosis
 *                           Support, changed the value of MCU_CVM_FACTOR_CLEAR
 *                           and added the macro MCU_CVM_UNMASKED_ERROR_CHECK.
 *                        5. As per JIRA ID ARDAAAF-1460, macro MCU_NINETYTHREE
 *                           is added.
 *                        6. As per JIRA ID ARDAAAF-1475, macro
 *                           MCU_ECM_DELAY_TIMER_START,
 *                           MCU_ECM_DELAY_TIMER_STOP_STS is added.
 *                        7. As per JIRA ID ARDAAAF-1451, macro
 *                           MCU_LOCKSTEP_DUMMY_VALUE is added.
 *                        8. As per JIRA ID ARDAAAF-1454, added macros
 *                           MCU_BIST_TER_POF_RST, MCU_BIST_TER_RST,
 *                           MCU_CVM_DIAG_LOCK_MASK, MCU_CVMDE_WV_MASK,
 *                           MCU_BIST_CVM_RST and MCU_BIST_CVM_TER_RST.
 *                        9. As per JIRA ID ARDAAAF-1452, structure
 *                           Mcu_InitErrorNotification is added and
 *                           Mcu_EcmSetting updated with ucEcmInitErrorCount.
 *                       10. As per JIRA ID ARDAAAF-1270,added UD IDs
 *                           for traceability improvement.
 *                       11. As per JIRA ID ARDAAAF-777, Justification added
 *                           for MISRA violation Msg(4:3458).
 *                       12. As per JIRA ID ARDAAAF-1575, typecasting for macros
 *                           MCU_ECM_DELAY_TIMER_STOP,
 *                           MCU_ECM_DELAY_TIMER_START,
 *                           MCU_ECM_DELAY_TIMER_STOP_STS, and
 *                           MCU_ECM_STATIC_MODE is updated as 32 bit.
 */
/*****************************************************************************/

#ifndef MCU_PBTYPES_H
#define MCU_PBTYPES_H

/******************************************************************************
**                      Include Section                                      **
******************************************************************************/
/* Included for Mcu type declarations */
#include "Mcu_Types.h"

/******************************************************************************
**                      Version Information                                  **
******************************************************************************/
/* AUTOSAR release version information */
#define MCU_PBTYPES_AR_RELEASE_MAJOR_VERSION \
                                        MCU_TYPES_AR_RELEASE_MAJOR_VERSION
#define MCU_PBTYPES_AR_RELEASE_MINOR_VERSION \
                                        MCU_TYPES_AR_RELEASE_MINOR_VERSION
#define MCU_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                     MCU_TYPES_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define MCU_PBTYPES_SW_MAJOR_VERSION  MCU_TYPES_SW_MAJOR_VERSION
#define MCU_PBTYPES_SW_MINOR_VERSION  MCU_TYPES_SW_MINOR_VERSION
/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognized code-fragment       */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Macro definition as multi-line operation hence multi-line  */
/*                 macro is used                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3412)-1 and                           */
/*                 END Msg(4:3412)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3458) Macro defines a braced code statement block.      */
/* Rule          : NA                                                         */
/* Justification : Since the macros are implemented as function macros braces */
/*                 cannot be avoided.                                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(4:3458)-2 and               */
/*                 END Msg(4:3458)-2 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      SchM Critical Section Protection Macros              *
*******************************************************************************/
#define MCU_ENTER_CRITICAL_SECTION(Exclusive_Area) \
                          SchM_Enter_Mcu_##Exclusive_Area()

#define MCU_EXIT_CRITICAL_SECTION(Exclusive_Area) \
                              SchM_Exit_Mcu_##Exclusive_Area()

/*******************************************************************************
**                      Global Symbols                                       **
*******************************************************************************/
/* Implements MCU_ESDD_UD_038*/
/*Function like macro to write the protected registers */
  /* MISRA Violation: START Msg(4:3412)-1 */
#define MCU_PROTECTEDWRITE32BIT(ulReg,ulValue, ulPreg, Sreg, Loopcount, Status)\
do \
{\
  (ulPreg) = (MCU_WRITE_DATA);  \
  (ulReg) = (ulValue);  \
  (ulReg) = ~(ulValue); \
  (ulReg) = (ulValue); \
  (Loopcount) = ((Loopcount) - (MCU_ONE));\
}while(( MCU_ONE == (Sreg)) && ((Loopcount) > MCU_ZERO));  \
if (MCU_ONE == (Sreg))\
{\
  Dem_ReportErrorStatus( MCU_E_WRITE_TIMEOUT_FAILURE,DEM_EVENT_STATUS_FAILED);\
  (Status) = E_NOT_OK;\
}\
else\
{\
  (Status) = E_OK;\
}
 /* END Msg(4:3412)-1 */

 /* MISRA Violation: START Msg(4:3412)-1*/
#define MCU_PROTECTEDWRITE8BIT(ucReg,ucValue, ulPreg, Sreg, Loopcount,Status)\
do \
{\
  (ulPreg) = (MCU_WRITE_DATA);  \
  (ucReg) = (ucValue);  \
  (ucReg) = ~(ucValue); \
  (ucReg) = (ucValue); \
  (Loopcount) = ((Loopcount) - (MCU_ONE));\
}while(( MCU_ONE == (Sreg)) && ((Loopcount) > MCU_ZERO));  \
if (MCU_ONE == (Sreg))\
{\
  Dem_ReportErrorStatus( MCU_E_WRITE_TIMEOUT_FAILURE,DEM_EVENT_STATUS_FAILED);\
  (Status) = E_NOT_OK;\
}\
else\
{\
  (Status) = E_OK;\
}
/* END Msg(4:3412)-1 */
/* MISRA Violation: START Msg(4:3412)-1 */
/* MISRA Violation: START Msg(4:3458)-2 */
#define GETPEID(ucGetPeId) \
{\
   (ucGetPeId) = (uint8)((STSR( MCU_ZERO, MCU_TWO) >>MCU_SIXTEEN) & MCU_SEVEN);\
}
 /* END Msg(4:3458)-2 */
 /* END Msg(4:3412)-1 */
/* Implements MCU_ESDD_UD_073,MCU_ESDD_UD_022*/
/* Macros to avoid Magic numbers */
#define MCU_DBTOC_VALUE \
                                    (uint32)(((uint32)MCU_VENDOR_ID << 22U) | \
                                    ((uint32)MCU_MODULE_ID << 14U) | \
                                    ((uint32)MCU_SW_MAJOR_VERSION << 8U) | \
                                    ((uint32)MCU_SW_MINOR_VERSION << 3U))

#define MCU_ZERO                               (uint8)0x00U

#define MCU_ECM_ZERO                           (uint32)0x00U

#define MCU_ECM_ONE                            (uint32)0x01U

#define MCU_ONE                                (uint8)0x01U

#define MCU_TWO                                (uint8)0x02U

#define MCU_THREE                              (uint8)0x03U

#define MCU_FOUR                               (uint8)0x04U

#define MCU_FIVE                               (uint8)0x05U

#define MCU_SIX                                (uint8)0x06U

#define MCU_SEVEN                              (uint8)0x07U

#define MCU_EIGHT                              (uint8)0x08U

#define MCU_NINE                               (uint8)0x09U

#define MCU_TEN                                (uint8)0x0AU

#define MCU_ELEVEN                             (uint8)0x0BU

#define MCU_TWELVE                             (uint8)0x0CU

#define MCU_THIRTEEN                           (uint8)0x0DU

#define MCU_FOURTEEN                           (uint8)0x0EU

#define MCU_FIFTEEN                            (uint8)0x0FU

#define MCU_SIXTEEN                            (uint8)0x10U

#define MCU_SEVENTEEN                          (uint8)0x11U

#define MCU_EIGHTEEN                           (uint8)0x12U

#define MCU_NINETEEN                           (uint8)0x13U

#define MCU_TWENTY                             (uint8)0x14U

#define MCU_TWENTYONE                          (uint8)0x15U

#define MCU_TWENTYTWO                          (uint8)0x16U

#define MCU_TWENTYTHREE                        (uint8)0x17U

#define MCU_TWENTYFOUR                         (uint8)0x18U

#define MCU_TWENTYFIVE                         (uint8)0x19U

#define MCU_TWENTYSIX                          (uint8)0x1AU

#define MCU_TWENTYSEVEN                        (uint8)0x1BU

#define MCU_TWENTYEIGHT                        (uint8)0x1CU

#define MCU_TWENTYNINE                         (uint8)0x1DU

#define MCU_THIRTY                             (uint8)0x1EU

#define MCU_THIRTYONE                          (uint8)0x1FU

#define MCU_THIRTYTWO                          (uint8)0x20U

#define MCU_THIRTYTHREE                        (uint8)0x21U

#define MCU_THIRTYFIVE                         (uint8)0x23U

#define MCU_THIRTYSIX                          (uint8)0x24U

#define MCU_THIRTYSEVEN                        (uint8)0x25U

#define MCU_FORTY                              (uint8)0x28U

#define MCU_FORTYONE                           (uint8)0x29U

#define MCU_FORTYEIGHT                         (uint8)0x30U

#define MCU_FORTYNINE                          (uint8)0x31U

#define MCU_FIFTYONE                           (uint8)0x33U

#define MCU_FIFTYTWO                           (uint8)0x34U

#define MCU_FIFTYTHREE                         (uint8)0x35U

#define MCU_FIFTYFOUR                          (uint8)0x36U

#define MCU_FIFTYFIVE                          (uint8)0x37U

#define MCU_FIFTYSIX                           (uint8)0x38U

#define MCU_FIFTYSEVEN                         (uint8)0x39U

#define MCU_SIXTYFOUR                          (uint8)0x40U

#define MCU_SIXTYFIVE                          (uint8)0x41U

#define MCU_SIXTYSIX                           (uint8)0x42U

#define MCU_SIXTYSEVEN                         (uint8)0x43U

#define MCU_SEVENTYTWO                         (uint8)0x48U

#define MCU_SEVENTYTHREE                       (uint8)0x49U

#define MCU_SEVENTYFOUR                        (uint8)0x4AU

#define MCU_SEVENTYFIVE                        (uint8)0x4BU

#define MCU_SEVENTYSIX                         (uint8)0x4CU

#define MCU_SEVENTYSEVEN                       (uint8)0x4DU

#define MCU_SEVENTYEIGHT                       (uint8)0x4EU

#define MCU_SEVENTYNINE                        (uint8)0x4FU

#define MCU_EIGHTY                             (uint8)0x50U

#define MCU_EIGHTYONE                          (uint8)0x51U

#define MCU_EIGHTYTWO                          (uint8)0x52U

#define MCU_EIGHTYTHREE                        (uint8)0x53U

#define MCU_EIGHTYFOUR                         (uint8)0x54U

#define MCU_EIGHTYSEVEN                        (uint8)0x57U

#define MCU_EIGHTYEIGHT                        (uint8)0x58U

#define MCU_EIGHTYNINE                         (uint8)0x59U

#define MCU_NINETY                             (uint8)0x5AU

#define MCU_NINETYONE                          (uint8)0x5BU

#define MCU_NINETYTWO                          (uint8)0x5CU

#define MCU_NINETYTHREE                        (uint8)0x5DU

#define MCU_INVERTED_ONE                       (uint8)0xFEU

#define MCU_LONG_WORD_ZERO                     (uint32)0x00000000UL

#define MCU_LONG_WORD_ONE                      (uint32)0x00000001UL

#define MCU_INITIALIZED                        (boolean)0x01U

#define MCU_UNINITIALIZED                      (boolean)0x00U

#define MCU_TRUE                               (boolean)0x01

#define MCU_FALSE                              (boolean)0x00

/* Implements MCU_ESDD_UD_074 */
#define MCU_LOOPCOUNT                          (uint8)MCU_LOOPCOUNT_VALUE

/* Definition of uninitialized RESET value */
#define MCU_RESET_UNINIT                       (uint16)0xFFFFU

#define MCU_RESF_CLEAR                         (uint16)0x06EFU

/* Definition for Reset source check values */
#define MCU_POF_RST                           (uint32)0x00000001UL

#define MCU_BIST_TER_POF_RST                  (uint32)0x00000403UL

#define MCU_BIST_TER_RST                      (uint32)0x00000402UL

#define MCU_TER_RST                           (uint32)0x00000002UL

#define MCU_CVM_RST                           (uint32)0x00000004UL

#define MCU_BIST_CVM_RST                      (uint32)0x00000404UL

#define MCU_BIST_CVM_TER_RST                  (uint32)0x00000406UL

#define MCU_SW_SYS_RST                        (uint32)0x00000008UL

#define MCU_ECM_SYS_RST                       (uint32)0x00000020UL

#define MCU_DBGR_RST                          (uint32)0x00000040UL

#define MCU_SW_APPL_RST                       (uint32)0x00000080UL

#define MCU_ECM_APPL_RST                      (uint32)0x00000200UL

#define MCU_BIST_RST                          (uint32)0x00000400UL

/*Definition of Software reset configure check values*/
#define  MCU_SOFTWARE_SYS_RESET               (uint8)0x01U

#define  MCU_SOFTWARE_APPL_RESET              (uint8)0x02U

/* Handles for Mode setting */
#define   MCU_HALT_MODE                       (uint8)0x00U

#define   MCU_MODULE_STANDBY_MODE             (uint8)0x01U

#define   MCU_MCAN_STOP_TRIG_EN               (uint16)0x0001U

#define   MCU_FR_STOP_TRIG_EN                 (uint16)0x0002U

#define   MCU_GTM_STOP_TRIG_ENR               (uint16)0x0004U

#define   MCU_ETH_STOP_TRIG_EN                (uint16)0x0008U

#define   MCU_RSENT_STOP_TRIG_EN              (uint16)0x0010U

#define   MCU_USRT_STOP_TRIG_EN               (uint16)0x0020U

#define   MCU_CSIH_STOP_TRIG_EN               (uint16)0x0040U

#define   MCU_RLIN3_STOP_TRIG_EN              (uint16)0x0080U

#define   MCU_ADC_STOP_TRIG_EN                (uint16)0x0100U

#define   MCU_MCAN_WAKEUP_TRIG_EN             (uint16)0x0001U

#define   MCU_FR_WAKEUP_TRIG_EN               (uint16)0x0002U

#define   MCU_GTM_WAKEUP_TRIG_ENR             (uint16)0x0004U

#define   MCU_ETH_WAKEUP_TRIG_EN              (uint16)0x0008U

#define   MCU_RSENT_WAKEUP_TRIG_EN            (uint16)0x0010U

#define   MCU_USRT_WAKEUP_TRIG_EN             (uint16)0x0020U

#define   MCU_CSIH_WAKEUP_TRIG_EN             (uint16)0x0040U

#define   MCU_RLIN3_WAKEUP_TRIG_EN            (uint16)0x0080U

#define   MCU_ADC_WAKEUP_TRIG_EN              (uint16)0x0100U

#define   MCU_TARGET_STOP_TRIGGER             (uint8)0x01U

#define   MCU_TARGET_STOP_HOLD_CLR            (uint8)0x01U

#define   MCU_TARGET_WAKEUP_TRIGGER           (uint8)0x00U

#define   MCU_TARGET_WAKEUP_HOLD_CLR          (uint8)0x02U

#define   MCU_TARGET_STOP_MODE_STATUS         (uint8)0x01U

#define   MCU_TARGET_WAKEUP_STATUS            (uint8)0x00U

#define   MCU_MODULE_STANDBY_WAIT_TIME        (uint8)0xFFU

#define   MCU_WAKEUP_WAIT_TIME                (uint8)0xFFU

#define   MCU_WAKEUP_INTP_MASK                (uint16)0x00CFU

/*Target IP disable macros*/
#define   MCU_FR_IP_OPERATION_DISABLE         (uint8)0x00U

#define   MCU_FR_OP_OPERATION_DISABLE         (uint8)0x00U

#define   MCU_FR_IP_OPERATION_DISABLE_STS     (uint8)0x00U

#define   MCU_FR_OP_OPERATION_DISABLE_STS     (uint8)0x00U

#define   MCU_FR_IP_QUEUE_HALT                (uint8)0x02U

#define   MCU_FR_IP_QUEUE_HALT_STS            (uint8)0x02U

#define   MCU_ECM1_PSEUDO_ERR_REG0            (uint32)0x33FF1F5EUL

#define   MCU_ECM1_ERROR_REG0_VALUE            (uint32)0x33FF1F5EUL

#define   MCU_RLIN3_RESET_ENABLE              (uint8)0x00U

#define   MCU_RLIN3_RESET_STS                 (uint8)0x00U

#define   MCU_ADCF_HALT_TRIGGER               (uint8)0x01U

#define   MCU_CSIH_TX_DISABLE                 (uint8)0x00U

#define   MCU_CSIH_RX_DISABLE                 (uint8)0x00U

#define   MCU_RSENT_RESET_ENABLE              (uint8)0x00U

#define   MCU_RSENT_RESET_STS                 (uint8)0x00U

#define   MCU_USRT_COMM_DISABLE               (uint8)0x00U

#define   MCU_USRT_COMM_DISABLE_STS           (uint8)0x00U

#define   MCU_USRT_SW_RESET_ENABLE            (uint8)0x01U

#define   MCU_ETH_RECEIVE_DISABLE             (uint32)0x00000040UL

#define   MCU_ETH_TRANSMIT_DISABLE            (uint32)0x00000020UL

#define   MCU_ETH_SW_RECEIVE_RESET            (uint32)0x00000001UL

#define   MCU_ETH_SW_TRANSMIT_RESET           (uint32)0x00000002UL

#define   MCU_ETH_TSU_SW_RESET                (uint32)0x00000001UL
/*Peripheral guard read/write access disable*/
#define   MCU_PBG_READ_ACCESS_DISABLE         (uint32)0x0601FE1BUL

#define   MCU_PGB_WRITE_ACCESS_DISABLE        (uint32)0x0601FE17UL

/*Peripheral guard read/write access enable/disable*/
#define   MCU_PBG_READ_ACCESS_ENABLE          (uint32)0x066DFE1BUL

#define   MCU_PGB_WRITE_ACCESS_ENABLE         (uint32)0x066DFE17UL

/* Data to be written to the protection command register to enable
 * writing to the write protected register */
#define MCU_WRITE_DATA                        (uint32)0x000000A5UL

/*Definition of Clock active and synchronize status check values*/
#define MCU_CLKOUT_ACTIVE_SYNC                (uint16)0x0003U

#define MCU_CLKOUT_SYNC                       (uint16)0x0002U

/* CVM Factor Clear value */
#define MCU_CVM_FACTOR_CLEAR                  (uint8)0x83U

/*ECM Registers Config values */
#define MCU_MAX_ECM_CONFIG_REG                (uint8)0x0CU

#define MCU_ECMEMK0_FULL_MASK                 (uint32)0x33FF1F5FUL

#define MCU_ECMEMK1_FULL_MASK                 (uint32)0x03FB033BUL

#define MCU_ECM_STATIC_MODE                   (uint32)0x00U

#define MCU_ECMEMK2_FULL_MASK                 (uint32)0x3F9FFF0FUL

#define MCU_ECM0_ERROROUTZ_HIGH               (uint32)0x80000000UL

#define MCU_RAM_MASK0_VALUE                   (uint32)0x00030000UL

#define MCU_RAM_MASK1_VALUE                   (uint32)0x00030000UL

#define MCU_ECM_DELAY_TIMER_STOP              (uint32)0x02U

#define MCU_ECM_DELAY_TIMER_START             (uint32)0x01U

#define MCU_ECM_DELAY_TIMER_START_STS         (uint32)0x11UL

#define MCU_ECM_DELAY_TIMER_STOP_STS          (uint32)0x00U

#define MCU_ECMDLY_MAX_CONFIG_REG             (uint8)0x06U

#define MCU_ECMDLY_TIMER_COMP_STS             (uint32)0x00010000UL

#define MCU_ECM_MASKABLE_INTP_ENABLE          (uint16)0x004FU

#define MCU_ERROR_SOURCE_STS                  (uint32)0x00UL

/* Calculated CVM wait delay based on CPU clock frequency */
#define MCU_CVM_DELAY_CNT                 (uint16) 3840

#define MCU_CVM_MASK_ERROR_CHECK          (uint8)0x03

#define MCU_CVM_UNMASKED_ERROR_CHECK      (uint8)0x83U

#define MCU_CVM_DIAG_MASK                 (uint8)0x01

#define CLMA_SELF_TEST_VALUE                  (uint32)0x00000008UL

/* For Comparator self diagnostic test */
#define MCU_LOCKSTEP_DUMMY_VALUE            (uint32)0x22222222UL

#define MCU_ECMMESSTR0_FULL_MASK              (uint32)0xFFFFFFFFUL

#define MCU_ERROR_STATUS_CLEAR                (uint32)0xFFFFFFFFUL

#define MCU_ECM_PSEUDO_ERR_REG0               (uint32)0x33FF1F5FUL

#define MCU_ECM_PSEUDO_ERR_REG1               (uint32)0x03FB033BUL

#define MCU_ECM_PSEUDO_ERR_REG2               (uint32)0x379FFF0FUL

#define MCU_ECM_ERROR_REG0_VALUE              (uint32)0x33FF1F5FUL

#define MCU_ECM_ERROR_REG1_VALUE              (uint32)0x03FB033BUL

#define MCU_ECM_ERROR_REG2_VALUE              (uint32)0x379FFF0FUL

#define MCU_ECM_ERROR_VALUE                   (uint32)0x33FF1F5FUL

#define MCU_ERROROUT_STATUS                   (uint32)0x80000000UL

#define MCU_ECMEMK228_MASK_VALUE              (uint32)0x10000000UL

#define MCU_ECMEMK228_UNMASK_VALUE            (uint32)0x2FFFFFFFUL

#define MCU_CVM_DIAG_LOCK_MASK                (uint8)0x04U

#define MCU_CVMDE_WV_MASK                     (uint8)0xBCU

#define MCU_ESSTR2_INTR_MASK                  (uint32)0x1FFFFFFF

#define MCU_EOCFG_MASK                        (uint32)0x00010000

#define MCU_EPCFG_MASK                        (uint32)0x00000001

#if(STD_ON == MCU_GTM_SUPPORT)
#define MCU_CMU_MASK                         (uint32)0x03U

#define MCU_CMUCLK_ENABLE                    (uint32)0x02U

#define MCU_CMUCLK_DISABLE                   (uint32)0x5555U
#endif

/* Implements MCU_ESDD_UD_035*/
#if(MCU_INTERRUPT_CONSISTENCY_CHK == STD_ON)
#define MCU_EIC_EIMK_MASK      (uint16)0x0080
#endif
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*******************************************************************************
**                      RAM Setting Data Structure                             *
*******************************************************************************/
/* Implements MCU_ESDD_UD_062,MCU_ESDD_UD_049 */
/* Implements MCU179_Conf */
/* RAM Sector Data Structure */
typedef struct STag_Mcu_RamSetting
{
  /* Value of RAM Starting Address */
  VAR(uint32,AUTOMATIC)            ulRamSectionBaseAddress;
  /* Size of RAM Section  */
  VAR(uint32,AUTOMATIC)            ulRamSectionSize;
  /* RAM Initial Value */
  VAR(uint8,AUTOMATIC)             ucRamDefaultValue;
} Mcu_RamSetting;

/*******************************************************************************
**                      Clock Setting Data Structure                         **
*******************************************************************************/
/* Implements MCU_ESDD_UD_060,MCU_ESDD_UD_049*/
/* Clock Setting data Structure*/
typedef struct STag_Mcu_ClockSetting
{
  /*PLL0 Clock Divider*/
  VAR(uint32,AUTOMATIC)            ulSysClk0Divider;
  /*PLL1 Clock Divider*/
  VAR(uint32,AUTOMATIC)            ulSysClk1Divider;
  /*External Clock0 Divider*/
  VAR(uint32,AUTOMATIC)            ulExtClk0Divider;
  /*External Clock1 Divider*/
  VAR(uint32,AUTOMATIC)            ulExtClk1Divider;
  /* Implements MCU_ESDD_UD_027 */
  #if(MCU_CLMA0_OPERATION == STD_ON)
  /* Element containing value of CLMA0CMPL register */
  VAR(uint16,AUTOMATIC)            usCLMA0CMPL;
  /* Element containing value of CLMA0CMPH register */
  VAR(uint16,AUTOMATIC)            usCLMA0CMPH;
  #endif
  #if(MCU_CLMA1_OPERATION == STD_ON)
  /* Element containing value of CLMA1CMPL register */
  VAR(uint16,AUTOMATIC)            usCLMA1CMPL;
  /* Element containing value of CLMA1CMPH register */
  VAR(uint16,AUTOMATIC)            usCLMA1CMPH;
  #endif
  #if(MCU_CLMA2_OPERATION == STD_ON)
  /* Element containing value of CLMA2CMPL register */
  VAR(uint16,AUTOMATIC)            usCLMA2CMPL;
  /* Element containing value of CLMA2CMPH register */
  VAR(uint16,AUTOMATIC)            usCLMA2CMPH;
  #endif
  #if(MCU_CLMA3_OPERATION == STD_ON)
  /* Element containing value of CLMA3CMPL register */
  VAR(uint16,AUTOMATIC)            usCLMA3CMPL;
  /* Element containing value of CLMA3CMPH register */
  VAR(uint16,AUTOMATIC)            usCLMA3CMPH;
  #endif
  #if(MCU_CLMA4_OPERATION == STD_ON)
  /* Element containing value of CLMA4CMPL register */
  VAR(uint16,AUTOMATIC)            usCLMA4CMPL;
  /* Element containing value of CLMA4CMPH register */
  VAR(uint16,AUTOMATIC)            usCLMA4CMPH;
  #endif
  /*System Clk0 Selection*/
  VAR(uint32,AUTOMATIC)             ulSysClk0SelectedSrcClock;
  /*External Clk0 Selection*/
  VAR(uint32,AUTOMATIC)             ulExtClk0SelectedSrcClock;
  /*External Clk1 Selection*/
  VAR(uint32,AUTOMATIC)             ulExtClk1SelectedSrcClock;
} Mcu_ClockSetting;

/* Implements MCU_ESDD_UD_067,MCU_ESDD_UD_049 */
/*Mcu Mode Config Type*/
typedef struct STag_Mcu_ModeSetting
{
  /*Imr Reg0 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr0MaskValue;
  /*Imr Reg1 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr1MaskValue;
  /*Imr Reg2 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr2MaskValue;
  /*Imr Reg3 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr3MaskValue;
  /*Imr Reg4 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr4MaskValue;
  /*Imr Reg5 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr5MaskValue;
  /*Imr Reg6 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr6MaskValue;
  /*Imr Reg7 Mask value */
  VAR(uint32, AUTOMATIC)           ulImr7MaskValue;
  /*Stop the Clock of target domain */
  VAR(uint16, AUTOMATIC)           usStopModeEnable;
  /*Enable the Clock of target domain after Wakeup */
  VAR(uint16, AUTOMATIC)           usWakeupEnable;
  /*Power down mode */
  VAR(uint8, AUTOMATIC)            ucModeType;
} Mcu_ModeSetting;

/* Implements MCU_ESDD_UD_064,MCU_ESDD_UD_049 */
/* Clk control Register Structure*/
typedef struct STag_Mcu_ClkSettingReg
{
  /* pointer to clk control reg */
  volatile uint32* pMcuCkscCtl;
  /* pointer to clk control status reg */
  volatile uint32* pMcuCkscStat;
  /* pointer to clk divider control reg */
  volatile uint32* pMcuClkDiv;
  /* pointer to clk divider status reg */
  volatile uint32* pMcuClkDivStat;
} Mcu_ClkSettingReg;

/* Implements MCU_ESDD_UD_061 */
typedef struct STag_Mcu_EcmSetting
{
  /* ECM Maskable interrupt config reg0 value */
  uint32 ulEcmMaskInterReg0value;
  /* ECM Maskable interrupt config reg1 value */
  uint32 ulEcmMaskInterReg1value;
 /* ECM Maskable interrupt config reg2 value */
  uint32 ulEcmMaskInterReg2value;
  /* ECM Non-Maskable interrupt config reg0 value */
  uint32 ulEcmNonMaskInterReg0value;
  /* ECM Non-Maskable interrupt config reg1 value */
  uint32 ulEcmNonMaskInterReg1value;
  /* ECM Non-Maskable interrupt config reg1 value */
  uint32 ulEcmNonMaskInterReg2value;
  /* ECM  internal reset config reg0 value */
  uint32 ulEcmInternalResetReg0value;
  /* ECM internal reset config reg1 value */
  uint32 ulEcmInternalResetReg1value;
  /* ECM internal reset config reg2 value */
  uint32 ulEcmInternalResetReg2value;
  /* ECM error mask reg 0 value */
  uint32 ulEcmErrorMaskReg0Value;
  /* ECM error mask reg 1 value */
  uint32 ulEcmErrorMaskReg1Value;
  /* ECM error mask reg 2 value */
  uint32 ulEcmErrorMaskReg2Value;
  /* ECM delay timer reg 0 value */
  uint32 ulEcmDelayTimerReg0Value;
  /* ECM delay timer reg 1 value */
  uint32 ulEcmDelayTimerReg1Value;
  /* ECM delay timer reg 2 value */
  uint32 ulEcmDelayTimerReg2Value;
  /* ECM delay timer reg 3 value */
  uint32 ulEcmDelayTimerReg3Value;
  /* ECM delay timer reg 4 value */
  uint32 ulEcmDelayTimerReg4Value;
  /* ECM delay timer reg 5 value */
  uint32 ulEcmDelayTimerReg5Value;
  /* ECM Initial Error count */
  uint8 ucEcmInitErrorCount;
} Mcu_EcmSetting;

/* Implements MCU_ESDD_UD_063,MCU_ESDD_UD_049 */
typedef struct STag_Mcu_ErrorNotification
{
  /* Pointer to callback notification function */
  P2FUNC (void, MCU_VAR, pNotificationFuncPtr )(void);
}Mcu_ErrorNotification;

/* Implements MCU_ESDD_UD_099 */
typedef struct STag_Mcu_EcmErrorInitNotification
{
  /* Pointer to callback notification function */
  P2FUNC (void, MCU_VAR, pInitNotifyFuncPtr )(void);
  /* ECM Initial Notification Mask */
  uint32 ulEcmErrorSrcMask;
  /* ECM Initial error register index */
  uint8 ucEcmRegIndx;
}Mcu_InitErrorNotification;

#if(STD_ON == MCU_GTM_SUPPORT)
/* Implements MCU_ESDD_UD_065,MCU_ESDD_UD_049 */
/* CMU Clock Setting data Structure*/
typedef struct STag_Mcu_GTMCMUClockSetting
{
  /*CMU Clock Divider */
  VAR(uint32,AUTOMATIC)            ulCMUChannelClkSrcDivider;
   /*CMU Clock Index */
  VAR(uint8,AUTOMATIC)             ucCMUClockIndex;
} Mcu_GTMCMUClockSetting;

/* Implements MCU_ESDD_UD_066,MCU_ESDD_UD_049 */
/* CMU Clock Setting data Structure*/
typedef struct STag_Mcu_GTMCMUGlobalSetting
{
  /*CMU Global Clock Numerator */
  VAR(uint32,AUTOMATIC)            ulCMUGlobalClockNumerator;
  /*CMU Global Clock Denominator */
  VAR(uint32,AUTOMATIC)            ulCMUGlobalClockDenominator;
  /* Total CMU Clocks Configured */
  VAR(uint8,AUTOMATIC)             ucMaxCMUClocks;

} Mcu_GTMCMUGlobalSetting;
#endif

/* Implements MCU_ESDD_UD_070 */
/* CLMA Self Diag */
typedef struct STag_Mcu_CLMASelfDiag
{

  VAR(uint32,AUTOMATIC) ulClma0DelayCount;
  VAR(uint32,AUTOMATIC) ulClma1DelayCount;
  VAR(uint32,AUTOMATIC) ulClma2DelayCount;
  VAR(uint32,AUTOMATIC) ulClma3DelayCount;
  VAR(uint32,AUTOMATIC) ulClma4DelayCount;
  /*CLMA Self Diagnosis */
  boolean blClma0SelfDiagTest;
  boolean blClma1SelfDiagTest;
  boolean blClma2SelfDiagTest;
  boolean blClma3SelfDiagTest;
  boolean blClma4SelfDiagTest;
} Mcu_CLMASelfDiag;



/******************************************************************************
**                       Extern declarations for Global Data                 **
******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* MCU_PBTYPES_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
