/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu_Hardware.h                                              */
/* $Revision: 504011 $                                                        */
/* $Date: 2017-12-22 10:51:05 +0530 (Fri, 22 Dec 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Mcu Register configurations                             */
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
 *                           2. As per JIRA ID ARDAAAF-536, removed the
 *                              Global variable definition of P-Bus guard
 *                              registers, updated the Stand-by Control
 *                              registers and added Software Limited Reset
 *                              Status Registers.
 *                           3. As per JIRA ID ARDAAAF-526, removed the
 *                              generation of registers MCU_CKSC1CL and
 *                              MCU_CKSC1SL.
 * V1.0.2:  02-Nov-2016    : Following changes are made:
 *                           1. As per JIRA ID ARDAAAF-823, structure tag is
 *                              updated.
 *                           2. As per JIRA ID ARDAAAF-477, structure instance
 *                              of Clma_BaseAddress(CLMA4) added for all device
 *                              variant except P1M-C device.
 *                           3. As per JIRA ID ARDAAAF-1302, added support
 *                              for CLMA Self Diagnosis Test.
 *                           4. As per JIRA ID ARDAAAF-1462, added register
 *                              macro support for CVM.
 *                           5. As per JIRA ID ARDAAAF-1451, added support
 *                              for Compare Unit Start-up Self Diagnosis Test.
 * Ver4.02.00.D_MCU_HF002: 22-Dec-2017 : Related Tickets :
 *                         JIRA #ARDAAAF-3326
 *                       : Modification Info :
 *                         Included P1X_C_Hardware_Types.h file.
 *                       : Modification Info Ends :
 */
/******************************************************************************/
#ifndef MCU_HARDWARE_H
#define MCU_HARDWARE_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "P1X_C_Hardware_Types.h"
#include "Compiler.h"
/*******************************************************************************
**                      Macro definitions                                     **
*******************************************************************************/
#define MCU_DEVICE_VARIANT         R7F701373
/*Clock Control Registers*/
#define MCU_CLKD0DIVL              CLKD0DIVL
#define MCU_CLKD1DIVL              CLKD1DIVL
#define MCU_CLKD2DIVL              CLKD2DIVL
#define MCU_CLKD3DIVL              CLKD3DIVL
#define MCU_CLKD0STATL             CLKD0STATL
#define MCU_CLKD1STATL             CLKD1STATL
#define MCU_CLKD2STATL             CLKD2STATL
#define MCU_CLKD3STATL             CLKD3STATL
#define MCU_CKSC0CL                CKSC0CL
#define MCU_CKSC2CL                CKSC2CL
#define MCU_CKSC3CL                CKSC3CL
#define MCU_CKSC0SL                CKSC0SL
#define MCU_CKSC2SL                CKSC2SL
#define MCU_CKSC3SL                CKSC3SL
/*CVM Control Register*/
#define MCU_CVMDEW                 CVMDEW
#define MCU_CVMDMASK               CVMDMASK
#define MCU_CVMFC                  CVMFC
#define MCU_CVMF                   CVMF
#define MCU_CVMDIAG                CVMDIAG
#define MCU_CVMMON                 CVMMON
#define MCU_CVMDE                  CVMDE
/*Reset Control Registers*/
#define MCU_RESF                   RESF
#define MCU_RESFC                  RESFC
#define MCU_SWSRESA0               SWSRESA0
#define MCU_SWARESA0               SWARESA0
#define MCU_RESC                   RESC
/*Stand-by Control Registers*/
#define MCU_MCAN_MSR_LM3           MSR_LM3
#define MCU_FR_MSR_LM4             MSR_LM4
#define MCU_GTM_MSR_LM5            MSR_LM5
#define MCU_ETH_MSR_LM6            MSR_LM6
#define MCU_RESNT_MSR_LM7          MSR_LM7
#define MCU_USRT_MSR_LM8           MSR_LM8
#define MCU_CSIH_MSR_LM10          MSR_LM10
#define MCU_RLIN3_MSR_LM11         MSR_LM11
#define MCU_ADC_MSR_LM12           MSR_LM12
/*Interrupt Control Registers*/
#define MCU_EIC0                   EIC0
#define MCU_EIC1                   EIC1
#define MCU_EIC2                   EIC2
#define MCU_EIC3                   EIC3
#define MCU_EIC8                   EIC8
#define MCU_EIC9                   EIC9
#define MCU_EIC32                  EIC32
#define MCU_EIC33                  EIC33
#define MCU_EIC34                  EIC34
#define MCU_EIC35                  EIC35
#define MCU_EIC36                  EIC36
#define MCU_EIC38                  EIC38
#define MCU_EIC39                  EIC39
#define MCU_EIC41                  EIC41
#define MCU_EIC42                  EIC42
#define MCU_EIC53                  EIC53
#define MCU_EIC54                  EIC54
#define MCU_EIC61                  EIC61
#define MCU_EIC62                  EIC62
#define MCU_EIC83                  EIC83
#define MCU_EIC87                  EIC87
#define MCU_EIC91                  EIC91
#define MCU_EIC111                 EIC111
#define MCU_EIC114                 EIC114
#define MCU_EIC128                 EIC128
#define MCU_EIC129                 EIC129
#define MCU_EIC130                 EIC130
#define MCU_EIC131                 EIC131
#define MCU_EIC132                 EIC132
#define MCU_EIC141                 EIC141
#define MCU_EIC142                 EIC142
#define MCU_EIC174                 EIC174
#define MCU_EIC177                 EIC177
#define MCU_EIC184                 EIC184
#define MCU_EIC186                 EIC186
#define MCU_EIC197                 EIC197
#define MCU_EIC209                 EIC209
#define MCU_EIC211                 EIC211
#define MCU_EIC240                 EIC240
#define MCU_EIC241                 EIC241
#define MCU_EIC242                 EIC242
#define MCU_EIC243                 EIC243
#define MCU_EIC244                 EIC244
#define MCU_EIC245                 EIC245
#define MCU_IMR0                   IMR0
#define MCU_IMR1                   IMR1
#define MCU_IMR2                   IMR2
#define MCU_IMR3                   IMR3
#define MCU_IMR4                   IMR4
#define MCU_IMR5                   IMR5
#define MCU_IMR6                   IMR6
#define MCU_IMR7                   IMR7
/*Target IP Control Registers*/
/*Flexray Control Register*/
#define MCU_FLXA0FRITCLL           FLXA0FRITCLL
#define MCU_FLXA0FROTCLL           FLXA0FROTCLL
#define MCU_FLXA0FRITSLL           FLXA0FRITSLL
#define MCU_FLXA0FROTSLL           FLXA0FROTSLL
#define MCU_FLXA1FRITCLL           FLXA1FRITCLL
#define MCU_FLXA1FROTCLL           FLXA1FROTCLL
#define MCU_FLXA1FRITSLL           FLXA1FRITSLL
#define MCU_FLXA1FROTSLL           FLXA1FROTSLL
/*RLIN3 Control Register*/
#define MCU_RLN30LCUC              RLN30LCUC
#define MCU_RLN30LMST              RLN30LMST
#define MCU_RLN31LCUC              RLN31LCUC
#define MCU_RLN31LMST              RLN31LMST
#define MCU_RLN32LCUC              RLN32LCUC
#define MCU_RLN32LMST              RLN32LMST
#define MCU_RLN33LCUC              RLN33LCUC
#define MCU_RLN33LMST              RLN33LMST
/*ADC Control Register*/
#define MCU_ADCF0ADHALTR           ADCF0ADHALTR
#define MCU_ADCF1ADHALTR           ADCF1ADHALTR
/*CSIH Control Register*/
#define MCU_CSIH0TXE               CSIH0TXE
#define MCU_CSIH1TXE               CSIH1TXE
#define MCU_CSIH2TXE               CSIH2TXE
#define MCU_CSIH3TXE               CSIH3TXE
#define MCU_CSIH0RXE               CSIH0RXE
#define MCU_CSIH1RXE               CSIH1RXE
#define MCU_CSIH2RXE               CSIH2RXE
#define MCU_CSIH3RXE               CSIH3RXE
/*RSENT Control Register*/
#define MCU_RSENT0MDCLL            RSENT0MDCLL
#define MCU_RSENT1MDCLL            RSENT1MDCLL
#define MCU_RSENT2MDCLL            RSENT2MDCLL
#define MCU_RSENT3MDCLL            RSENT3MDCLL
#define MCU_RSENT4MDCLL            RSENT4MDCLL
#define MCU_RSENT5MDCLL            RSENT5MDCLL
#define MCU_RSENT6MDCLL            RSENT6MDCLL
#define MCU_RSENT7MDCLL            RSENT7MDCLL
#define MCU_RSENT8MDCLL            RSENT8MDCLL
#define MCU_RSENT9MDCLL            RSENT9MDCLL
#define MCU_RSENT0MSTLL            RSENT0MSTLL
#define MCU_RSENT1MSTLL            RSENT1MSTLL
#define MCU_RSENT2MSTLL            RSENT2MSTLL
#define MCU_RSENT3MSTLL            RSENT3MSTLL
#define MCU_RSENT4MSTLL            RSENT4MSTLL
#define MCU_RSENT5MSTLL            RSENT5MSTLL
#define MCU_RSENT6MSTLL            RSENT6MSTLL
#define MCU_RSENT7MSTLL            RSENT7MSTLL
#define MCU_RSENT8MSTLL            RSENT8MSTLL
#define MCU_RSENT9MSTLL            RSENT9MSTLL
/*HS-USRT Control Register*/
#define MCU_HSUS0EN                HSUS0EN
#define MCU_HSUS0CST               HSUS0CST
#define MCU_HSUS0SRST              HSUS0SRST
#define MCU_HSUS1EN                HSUS1EN
#define MCU_HSUS1CST               HSUS1CST
#define MCU_HSUS1SRST              HSUS1SRST
#define MCU_HSUS2EN                HSUS2EN
#define MCU_HSUS2CST               HSUS2CST
#define MCU_HSUS2SRST              HSUS2SRST
#define MCU_HSUS3EN                HSUS3EN
#define MCU_HSUS3CST               HSUS3CST
#define MCU_HSUS3SRST              HSUS3SRST
#define MCU_ETNA0EMR0              ETNA0EMR0
#define MCU_ETNA0EDMR0             ETNA0EDMR0
#define MCU_ETNA0EMR1              ETNA0EMR1
#define MCU_ETNA0EDMR1             ETNA0EDMR1
#define MCU_ETNA0ARSTR             ETNA0ARSTR
/* Mcu Lockstep compare registers */
#define MCU_CMPTST0                CMPTST0
#define MCU_CMPTST1                CMPTST1
#define MCU_SWLRESS3               SWLRESS3
#define MCU_SWLRESS4               SWLRESS4
#define MCU_SWLRESS5               SWLRESS5
#define MCU_SWLRESS6               SWLRESS6
#define MCU_SWLRESS7               SWLRESS7
#define MCU_SWLRESS8               SWLRESS8
#define MCU_SWLRESS10              SWLRESS10
#define MCU_SWLRESS11              SWLRESS11
#define MCU_SWLRESS12              SWLRESS12
#define MCU_CLMATEST               CLMATEST
#define MCU_CLMATESTS              CLMATESTS
/*******************************************************************************
*                         Configurable Definitions                             *
*******************************************************************************/
/* Total number of ECM hardware units supported by P1x-C 701370A device */
#define MCU_ECM_INSTANCES         2u
/* Total number of CLMA supported by P1x-C 701370A device */
#define MCU_CLMA_INSTANCES        4u
/* Global variable declaration which holds the base address of CLMA and ECM
   units of P1x-C 701372 device */
#define MCU_START_SEC_CONST_32
#include "MemMap.h"
extern CONSTP2VAR(volatile T_CLMA0,MCU_CONST, MCU_CONFIG_CONST)
                  Clma_BaseAddress[MCU_CLMA_INSTANCES];
extern CONSTP2VAR(volatile T_ECM0,MCU_CONST, MCU_CONFIG_CONST)
                  Ecm0_BaseAddress[MCU_ECM_INSTANCES];
extern CONSTP2VAR(volatile T_ECMM0,MCU_CONST, MCU_CONFIG_CONST)
                  Ecmm0_BaseAddress[MCU_ECM_INSTANCES];
extern CONSTP2VAR(volatile T_ECMC0,MCU_CONST, MCU_CONFIG_CONST)
                  Ecmc0_BaseAddress[MCU_ECM_INSTANCES];
#define MCU_STOP_SEC_CONST_32
#include "MemMap.h"
#endif /* MCU_HARDWARE_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

