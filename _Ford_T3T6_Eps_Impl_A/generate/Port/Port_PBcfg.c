/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port_PBcfg.c                                                */
/* $Revision: 476263 $                                                        */
/* $Date: 2017-09-29 15:26:19 +0530 (Fri, 29 Sep 2017) $                      */
/*============================================================================*/
/*                              COPYRIGHT                                     */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Port post-build time configurations                     */
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
 * V1.0.0:  11-Aug-2015    : Initial Version
 * V1.0.1:  17-Feb-2016    : As part of V4.01.00 release, the following changes
 *                           were made:
 *                           1.As per  ARDAAAF-17, Generation of element
 *                           ucPIPCRegIndex in structure
 *                           Port_GstSetModeGroupsList[] is updated.
 *                           2.As per  ARDAAAF-349, Generation of element
 *                           ucPortPIPCIndex in structure
 *                           Port_GstSetDioAltPinDetails[] is updated.
 *                           3.Updated Copyright information.
 *                           4.Appended 'UL' for uint32 variables and 'U' for
 *                           unsigned variables.
 *                           5.As per ARDAAAF-481, Instead of '0' and '1' value,
 *                           the 'PORT_GROUP_NUMERIC' and 'PORT_GROUP_JTAG'
 *                           of enumeration Port_GroupType values
 *                           is assigned to ucPortType
 *                           in the Port_GstSetModePinDetailsList structure.
 *                           6.As per the ARDAAAF-525,
 *                           Port_GstPinDirChangeableList[] structure is updated
 *                           for generate the ucPMSRRegIndex, and
 *                           ucPSRRegIndex elements.
 * V1.0.2:  27-Jan-2017    : Following changes were made:
 *                           1. As per the Jira ARDAAAF-1250 following changes
 *                           are done,
 *                           a)PORT_START_SEC_DBTOC_DATA_UNSPECIFIED and
 *                           PORT_STOP_SEC_DBTOC_DATA_UNSPECIFIED are removed.
 *                           b)Port_GstDNFARegs[] structure is updated for
 *                           addition of usDELAY element.
 *                           2. As per the ARDAAAF-771, justification added for
 *                           QAC Warnings and MISRA violations at applicable
 *                           places.
 *                           3. As per the ARDAAAF-1459, unit design ID, proper
 *                           comments and requirement tags are added at
 *                           applicable places.
 *                           4. Copyright information is updated.
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Port.h"
#include "Port_PBTypes.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#define PORT_PBCFG_C_AR_RELEASE_MAJOR_VERSION \
                                  PORT_AR_RELEASE_MAJOR_VERSION_VALUE
#define PORT_PBCFG_C_AR_RELEASE_MINOR_VERSION \
                                  PORT_AR_RELEASE_MINOR_VERSION_VALUE
#define PORT_PBCFG_C_AR_RELEASE_REVISION_VERSION \
                                  PORT_AR_RELEASE_REVISION_VERSION_VALUE
/* File version information */
#define PORT_PBCFG_C_SW_MAJOR_VERSION    PORT_SW_MAJOR_VERSION_VALUE
#define PORT_PBCFG_C_SW_MINOR_VERSION    PORT_SW_MINOR_VERSION_VALUE
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if(PORT_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
                                  PORT_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Major Version"
#endif
#if(PORT_PBTYPES_AR_RELEASE_MINOR_VERSION != \
                                  PORT_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Minor Version"
#endif
#if(PORT_PBTYPES_AR_RELEASE_REVISION_VERSION != \
                                  PORT_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Port_PBcfg.c : Mismatch in Release Revision Version"
#endif
#if(PORT_PBTYPES_SW_MAJOR_VERSION != \
                                 PORT_PBCFG_C_SW_MAJOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Software Major Version"
#endif
#if(PORT_PBTYPES_SW_MINOR_VERSION != \
                                 PORT_PBCFG_C_SW_MINOR_VERSION)
  #error "Port_PBcfg.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                            QAC Warning                                     **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (2:3211) The global identifier 'Port_GstConfiguration' is  */
/*                 defined here but is not used in this translation unit.     */
/* Rule          : NA                                                         */
/* Justification : The identifier is defined here as the elements within are  */
/*                 depending on user configuration and is used by Port driver */
/*                 for module initialization and other functions.             */
/* Verification  : However, part of the code is verified manually and it does */
/*                 not have any impact.                                       */
/* Reference     : Look for QAC Warning: START Message(2:3211)-1 and          */
/*                 QAC Warning: END Message(2:3211)-1 tags in the code.       */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (2:3674) Array size defined implicitly by the number of    */
/*                 initializers.                                              */
/* Rule          : NA                                                         */
/* Justification : The size of the array is defined implicitly as the number  */
/*                 of elements in the array depend on the user configuration  */
/*                 and is generated POST BUILD and cannot be predefined.      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning: START Msg(2:3674)-2 and              */
/*                 QAC Warning: END Msg(2:3674)-2 tags in the code.           */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.       */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
/*Implements PORT148, PORT125_Conf, PORT126_Conf*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* The following structure indicates the starting point of database */
/* QAC Warning: START Msg(2:3211)-1 */
/* QAC Warning: START Msg(2:3674)-2 */
/*Implements PORT134_Conf, AR_PN0062_FR_0010, AR_PN0062_FR_0034*/
CONST(Port_ConfigType, PORT_CONST) Port_GstConfiguration[] =
{
  /* Index: 0 - PortConfigSet0 */
  {
    /* ulStartOfDbToc */
    0x0EDF0100UL,
    /* pPortNumRegs */
    &Port_GstNumRegs[0],
    /* pPortNumFuncCtrlRegs */
    &Port_GstNumFuncCtrlRegs[0],
    /* pPortNumPMSRRegs */
    &Port_GstNumPMSRRegs[0],
    /* pPortJRegs */
    &Port_GstJTAGRegs[0],
    /* pPortJFuncCtrlRegs */
    &Port_GstJTAGFuncCtrlRegs[0],
    /* pPortJPMSRRegs */
    &Port_GstJTAGPMSRRegs[0],
    /* pPinModeChangeableGroups */
    &Port_GstSetModeGroupsList[0],
    /* pPinModeChangeableDetails */
    &Port_GstSetModePinDetailsList[0],
    /* pPinDioAltModeDetails */
    &Port_GstSetDioAltPinDetails[0],
    /* ucNoOfPinsModeChangeable */
    0x06U,
    /* ucNoOfPinsDioAltModeChangeable */
    0x06U
  }
};
/* QAC Warning: END Msg(2:3211)-1 */
/* QAC Warning: END Msg(2:3674)-2 */
/*
 * Array of structures of all port group registers, except PMSR, PFCE, PFC and
 * PMCSR, in the sequence of PSR, PINV, PIS, PISA, PIBC, PIPC, PU, PD, PBDC,
 * PODC, PODCE, PDSC and PUCC.
 */
/* QAC Warning: START Msg(2:3674)-2 */
/*Implements PORT129_Conf, AR_PN0062_FR_0070, AR_PN0062_FR_0071*/
/*Implements AR_PN0062_FR_0072, AR_PN0062_FR_0073, AR_PN0062_FR_0074*/
/*Implements AR_PN0062_FR_0076, AR_PN0062_FR_0011, AR_PN0062_FR_0013*/
CONST(Port_Regs, PORT_CONST) Port_GstNumRegs[] =
{
  /* Index:0 - PortConfigSet0_PortGroup0 */
  {
    /* usInitModeRegVal of PSR0*/
    0x2082U,
    /* usInitModeRegVal of PINV0 */
    0x0U,
    /* usInitModeRegVal of PIS0*/
    0x0U,
    /* usInitModeRegVal of PIBC0*/
    0x8U,
    /* usInitModeRegVal of PIPC0*/
    0x20U,
    /* usInitModeRegVal of PU0 */
    0x0U,
    /* usInitModeRegVal of PD0 */
    0x0U,
    /* usInitModeRegVal of PBDC0 */
    0x2082U,
    /* usInitModeRegVal of PODC0 */
    0x67dbU,
    /* usInitModeRegVal PODCE0 */
    0x0U,
    /* usInitModeRegVal PDSC0 */
    0x2002U,
    /* usInitModeRegVal of PUCC0 */
    0x0U
  },
  /* Index:1 - PortConfigSet0_PortGroup1 */
  {
    /* usInitModeRegVal of PSR1*/
    0x0U,
    /* usInitModeRegVal of PINV1 */
    0x0U,
    /* usInitModeRegVal of PIS1*/
    0x0U,
    /* usInitModeRegVal of PIBC1*/
    0x0U,
    /* usInitModeRegVal of PIPC1*/
    0x0U,
    /* usInitModeRegVal of PU1 */
    0x0U,
    /* usInitModeRegVal of PD1 */
    0x0U,
    /* usInitModeRegVal of PBDC1 */
    0x0U,
    /* usInitModeRegVal of PODC1 */
    0xeaU,
    /* usInitModeRegVal PODCE1 */
    0x0U,
    /* usInitModeRegVal PDSC1 */
    0x0U,
    /* usInitModeRegVal of PUCC1 */
    0x0U
  },
  /* Index:2 - PortConfigSet0_PortGroup2 */
  {
    /* usInitModeRegVal of PSR2*/
    0x0U,
    /* usInitModeRegVal of PINV2 */
    0x0U,
    /* usInitModeRegVal of PIS2*/
    0x0U,
    /* usInitModeRegVal of PIBC2*/
    0x2000U,
    /* usInitModeRegVal of PIPC2*/
    0x3U,
    /* usInitModeRegVal of PU2 */
    0x210U,
    /* usInitModeRegVal of PD2 */
    0x0U,
    /* usInitModeRegVal of PBDC2 */
    0x0U,
    /* usInitModeRegVal of PODC2 */
    0xff58U,
    /* usInitModeRegVal PODCE2 */
    0x0U,
    /* usInitModeRegVal PDSC2 */
    0x0U,
    /* usInitModeRegVal of PUCC2 */
    0x0U
  },
  /* Index:3 - PortConfigSet0_PortGroup3 */
  {
    /* usInitModeRegVal of PSR3*/
    0x21aU,
    /* usInitModeRegVal of PINV3 */
    0x0U,
    /* usInitModeRegVal of PIS3*/
    0x0U,
    /* usInitModeRegVal of PIBC3*/
    0x800U,
    /* usInitModeRegVal of PIPC3*/
    0x1000U,
    /* usInitModeRegVal of PU3 */
    0x0U,
    /* usInitModeRegVal of PD3 */
    0x0U,
    /* usInitModeRegVal of PBDC3 */
    0x212U,
    /* usInitModeRegVal of PODC3 */
    0x6f77U,
    /* usInitModeRegVal PODCE3 */
    0x0U,
    /* usInitModeRegVal PDSC3 */
    0x21aU,
    /* usInitModeRegVal of PUCC3 */
    0x0U
  },
  /* Index:4 - PortConfigSet0_PortGroup4 */
  {
    /* usInitModeRegVal of PSR4*/
    0x3800U,
    /* usInitModeRegVal of PINV4 */
    0x0U,
    /* usInitModeRegVal of PIS4*/
    0x0U,
    /* usInitModeRegVal of PIBC4*/
    0x50U,
    /* usInitModeRegVal of PIPC4*/
    0x102U,
    /* usInitModeRegVal of PU4 */
    0x0U,
    /* usInitModeRegVal of PD4 */
    0x0U,
    /* usInitModeRegVal of PBDC4 */
    0x3000U,
    /* usInitModeRegVal of PODC4 */
    0x76fdU,
    /* usInitModeRegVal PODCE4 */
    0x0U,
    /* usInitModeRegVal PDSC4 */
    0x2000U,
    /* usInitModeRegVal of PUCC4 */
    0x0U
  },
  /* Index:5 - PortConfigSet0_PortGroup5 */
  {
    /* usInitModeRegVal of PSR5*/
    0x2U,
    /* usInitModeRegVal of PINV5 */
    0x0U,
    /* usInitModeRegVal of PIS5*/
    0x0U,
    /* usInitModeRegVal of PIBC5*/
    0x800U,
    /* usInitModeRegVal of PIPC5*/
    0x8360U,
    /* usInitModeRegVal of PU5 */
    0x0U,
    /* usInitModeRegVal of PD5 */
    0x0U,
    /* usInitModeRegVal of PBDC5 */
    0x0U,
    /* usInitModeRegVal of PODC5 */
    0x7c91U,
    /* usInitModeRegVal PODCE5 */
    0x0U,
    /* usInitModeRegVal PDSC5 */
    0x0U,
    /* usInitModeRegVal of PUCC5 */
    0x0U
  },
  /* Index:6 - PortConfigSet0_PortGroup6 */
  {
    /* usInitModeRegVal of PSR6*/
    0x0U,
    /* usInitModeRegVal of PINV6 */
    0x0U,
    /* usInitModeRegVal of PIS6*/
    0x0U,
    /* usInitModeRegVal of PIBC6*/
    0x0U,
    /* usInitModeRegVal of PIPC6*/
    0x0U,
    /* usInitModeRegVal of PU6 */
    0x0U,
    /* usInitModeRegVal of PD6 */
    0x0U,
    /* usInitModeRegVal of PBDC6 */
    0x0U,
    /* usInitModeRegVal of PODC6 */
    0x3c77U,
    /* usInitModeRegVal PODCE6 */
    0x0U,
    /* usInitModeRegVal PDSC6 */
    0x0U,
    /* usInitModeRegVal of PUCC6 */
    0x0U
  },
  /* Index:7 - PortConfigSet0_PortGroup7 */
  {
    /* usInitModeRegVal of PSR7*/
    0x0U,
    /* usInitModeRegVal of PINV7 */
    0x0U,
    /* usInitModeRegVal of PIS7*/
    0x0U,
    /* usInitModeRegVal of PIBC7*/
    0x0U,
    /* usInitModeRegVal of PIPC7*/
    0x0U,
    /* usInitModeRegVal of PU7 */
    0x0U,
    /* usInitModeRegVal of PD7 */
    0x0U,
    /* usInitModeRegVal of PBDC7 */
    0x0U,
    /* usInitModeRegVal of PODC7 */
    0x3fU,
    /* usInitModeRegVal PODCE7 */
    0x0U,
    /* usInitModeRegVal PDSC7 */
    0x0U,
    /* usInitModeRegVal of PUCC7 */
    0x0U
  },
  /* Index:8 - PortConfigSet0_PortGroup9 */
  {
    /* usInitModeRegVal of PSR9*/
    0x0U,
    /* usInitModeRegVal of PINV9 */
    0x0U,
    /* usInitModeRegVal of PIS9*/
    0x0U,
    /* usInitModeRegVal of PIBC9*/
    0x0U,
    /* usInitModeRegVal of PIPC9*/
    0x0U,
    /* usInitModeRegVal of PU9 */
    0x0U,
    /* usInitModeRegVal of PD9 */
    0x0U,
    /* usInitModeRegVal of PBDC9 */
    0x0U,
    /* usInitModeRegVal of PODC9 */
    0x180U,
    /* usInitModeRegVal PODCE9 */
    0x0U,
    /* usInitModeRegVal PDSC9 */
    0x0U,
    /* usInitModeRegVal of PUCC9 */
    0x0U
  }
};
 /* QAC Warning: END Msg(2:3674)-2 */
/*
* Array of structures of all function control port group registers, in the
* sequence of PFCE, PFC and PMCSR.
*/
/* QAC Warning: START Msg(2:3674)-2 */
/*Implements PORT128_Conf, PORT130_Conf */
CONST(Port_FuncCtrlRegs, PORT_CONST) Port_GstNumFuncCtrlRegs[] =
{
  /* Index:0 - PortConfigSet0_PortGroup0 */
  {
    /* usInitModeRegVal of PFCE0 */
    0x2006U,
    /* usInitModeRegVal  of PFC0 */
    0x0U,
    /* usInitModeRegVal  of PMCSR0 */
    0x20a6U
  },
  /* Index:1 - PortConfigSet0_PortGroup1 */
  {
    /* usInitModeRegVal of PFCE1 */
    0x0U,
    /* usInitModeRegVal  of PFC1 */
    0x0U,
    /* usInitModeRegVal  of PMCSR1 */
    0x0U
  },
  /* Index:2 - PortConfigSet0_PortGroup2 */
  {
    /* usInitModeRegVal of PFCE2 */
    0x23bU,
    /* usInitModeRegVal  of PFC2 */
    0x4U,
    /* usInitModeRegVal  of PMCSR2 */
    0x3bfU
  },
  /* Index:3 - PortConfigSet0_PortGroup3 */
  {
    /* usInitModeRegVal of PFCE3 */
    0x80U,
    /* usInitModeRegVal  of PFC3 */
    0x0U,
    /* usInitModeRegVal  of PMCSR3 */
    0x1080U
  },
  /* Index:4 - PortConfigSet0_PortGroup4 */
  {
    /* usInitModeRegVal of PFCE4 */
    0x2000U,
    /* usInitModeRegVal  of PFC4 */
    0xc00U,
    /* usInitModeRegVal  of PMCSR4 */
    0x3d03U
  },
  /* Index:5 - PortConfigSet0_PortGroup5 */
  {
    /* usInitModeRegVal of PFCE5 */
    0x3U,
    /* usInitModeRegVal  of PFC5 */
    0xe0U,
    /* usInitModeRegVal  of PMCSR5 */
    0xa3e3U
  },
  /* Index:6 - PortConfigSet0_PortGroup6 */
  {
    /* usInitModeRegVal of PFCE6 */
    0x0U,
    /* usInitModeRegVal  of PFC6 */
    0x0U,
    /* usInitModeRegVal  of PMCSR6 */
    0x0U
  },
  /* Index:7 - PortConfigSet0_PortGroup7 */
  {
    /* usInitModeRegVal of PFCE7 */
    0x0U,
    /* usInitModeRegVal  of PFC7 */
    0x0U,
    /* usInitModeRegVal  of PMCSR7 */
    0x0U
  },
  /* Index:9 - PortConfigSet0_PortGroup9 */
  {
    /* usInitModeRegVal of PFCE9 */
    0x0U,
    /* usInitModeRegVal  of PFC9 */
    0x0U,
    /* usInitModeRegVal  of PMCSR9 */
    0x0U
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
* Array of structures for 32-Bit PMSR Registers
*/
/* QAC Warning: START Msg(2:3674)-2 */
CONST(Port_PMSRRegs, PORT_CONST) Port_GstNumPMSRRegs[] =
{
  /* Index:0 - PortConfigSet0 PortGroup0 */
  {
    /* ulMaskAndConfigValue */
    0xffffffdbUL,
    /* usInitModeRegVal of PMSR0*/
    0xffdbU
  },
  /* Index:1 - PortConfigSet0 PortGroup1 */
  {
    /* ulMaskAndConfigValue */
    0xffffffebUL,
    /* usInitModeRegVal of PMSR1*/
    0xffebU
  },
  /* Index:2 - PortConfigSet0 PortGroup2 */
  {
    /* ulMaskAndConfigValue */
    0xffffff58UL,
    /* usInitModeRegVal of PMSR2*/
    0xff58U
  },
  /* Index:3 - PortConfigSet0 PortGroup3 */
  {
    /* ulMaskAndConfigValue */
    0xffffef77UL,
    /* usInitModeRegVal of PMSR3*/
    0xef77U
  },
  /* Index:4 - PortConfigSet0 PortGroup4 */
  {
    /* ulMaskAndConfigValue */
    0xfffff6fdUL,
    /* usInitModeRegVal of PMSR4*/
    0xf6fdU
  },
  /* Index:5 - PortConfigSet0 PortGroup5 */
  {
    /* ulMaskAndConfigValue */
    0xffff7c9dUL,
    /* usInitModeRegVal of PMSR5*/
    0x7c9dU
  },
  /* Index:6 - PortConfigSet0 PortGroup6 */
  {
    /* ulMaskAndConfigValue */
    0xfffffff7UL,
    /* usInitModeRegVal of PMSR6*/
    0xfff7U
  },
  /* Index:7 - PortConfigSet0 PortGroup7 */
  {
    /* ulMaskAndConfigValue */
    0xffffffffUL,
    /* usInitModeRegVal of PMSR7*/
    0xffffU
  },
  /* Index:9 - PortConfigSet0 PortGroup9 */
  {
    /* ulMaskAndConfigValue */
    0xffffffffUL,
    /* usInitModeRegVal of PMSR9*/
    0xffffU
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
* Array of structures of all JTAG port group registers, except PMSR, PFCE, PFC
* and PMCSR, in the sequence of PSR, PINV, PIS, PISA, PIBC, PU, PD, PBDC,
* PODC, PODCE, PDSC and PUCC.
*/
/* QAC Warning: START Msg(2:3674)-2 */
CONST(Port_Regs, PORT_CONST) Port_GstJTAGRegs[] =
{
  /* Index:0 - PortConfigSet0_JPortGroup00 */
  {
    /* usInitModeRegVal of JPSR0 */
    0x0U,
    /* usInitModeRegVal of JPINV0 */
    0x0U,
    /* usInitModeRegVal of JPIS0 */
    0x0U,
    /* usInitModeRegVal of JPIBC0 */
    0x0U,
    /* dummy value*/
    0x0U,
    /* usInitModeRegVal of  JPU0*/
    0x0U,
    /* usInitModeRegVal of JPD0 */
    0x0U,
    /* usInitModeRegVal of JPBDC0 */
    0x0U,
    /* usInitModeRegVal of JPODC0 */
    0x0U,
    /* usInitModeRegVal of JPODCE0 */
    0x0U,
    /* usInitModeRegVal of JPDSC0 */
    0x0U,
    /* usInitModeRegVal of JPUCC0 */
    0x0U
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
* Array of structures of all function control port group registers, in the
* sequence of PFCE, PFC and PMCSR.
*/
 /* QAC Warning: START Msg(2:3674)-2 */
/*Implements AR_PN0062_FR_0036*/
CONST(Port_FuncCtrlRegs, PORT_CONST) Port_GstJTAGFuncCtrlRegs[] =
{
  /* Index:0 - PortConfigSet0_PortGroupJtag00 */
  {
    /* usInitModeRegVal of PFCE0 */
    0x0U,
    /* usInitModeRegVal of PFC0*/
    0x0U,
    /* usInitModeRegVal */
    0x0U
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
 * Array of structures for 32-Bit PMSR Registers
 */
/* QAC Warning: START Msg(2:3674)-2 */
CONST(Port_PMSRRegs, PORT_CONST) Port_GstJTAGPMSRRegs[] =
{
  /* Index:0 - PortConfigSet0 PortGroupJtag00 */
  {
    /* ulMaskAndConfigValue */
    0xffff00ffUL,
    /* usInitModeRegVal of JPMSR0*/
    0xffU
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
* Array provides information of port groups which contain run time mode
* changeable port pins.
*/
/* QAC Warning: START Msg(2:3674)-2 */
/*Implements AR_PN0062_FR_0075*/
CONST(Port_PinModeChangeableGroups, PORT_CONST) \
                                              Port_GstSetModeGroupsList[] =
{
  /* Index:0 - PortConfigSet0 NUMERIC_PortGroup0 Pin7 */
  {
    /* ucPSRRegIndex */
    0x00U,
    /* ucPFCERegIndex */
    0x00U,
    /* ucPFCRegIndex */
    0x00U,
    /* ucPMCSRRegIndex */
    0x00U,
    /* ucPMSRRegIndex */
    0x00U,
    /* ucPIPCRegIndex */
    0x00U
  },
  /* Index:1 - PortConfigSet0 NUMERIC_PortGroup0 Pin10 */
  {
    /* ucPSRRegIndex */
    0x00U,
    /* ucPFCERegIndex */
    0x00U,
    /* ucPFCRegIndex */
    0x00U,
    /* ucPMCSRRegIndex */
    0x00U,
    /* ucPMSRRegIndex */
    0x00U,
    /* ucPIPCRegIndex */
    0xFFU
  },
  /* Index:2 - PortConfigSet0 NUMERIC_PortGroup3 Pin1 */
  {
    /* ucPSRRegIndex */
    0x03U,
    /* ucPFCERegIndex */
    0x03U,
    /* ucPFCRegIndex */
    0x03U,
    /* ucPMCSRRegIndex */
    0x03U,
    /* ucPMSRRegIndex */
    0x03U,
    /* ucPIPCRegIndex */
    0xFFU
  },
  /* Index:3 - PortConfigSet0 NUMERIC_PortGroup3 Pin4 */
  {
    /* ucPSRRegIndex */
    0x03U,
    /* ucPFCERegIndex */
    0x03U,
    /* ucPFCRegIndex */
    0x03U,
    /* ucPMCSRRegIndex */
    0x03U,
    /* ucPMSRRegIndex */
    0x03U,
    /* ucPIPCRegIndex */
    0x03U
  },
  /* Index:4 - PortConfigSet0 NUMERIC_PortGroup3 Pin9 */
  {
    /* ucPSRRegIndex */
    0x03U,
    /* ucPFCERegIndex */
    0x03U,
    /* ucPFCRegIndex */
    0x03U,
    /* ucPMCSRRegIndex */
    0x03U,
    /* ucPMSRRegIndex */
    0x03U,
    /* ucPIPCRegIndex */
    0x03U
  },
  /* Index:5 - PortConfigSet0 NUMERIC_PortGroup4 Pin12 */
  {
    /* ucPSRRegIndex */
    0x04U,
    /* ucPFCERegIndex */
    0x04U,
    /* ucPFCRegIndex */
    0x04U,
    /* ucPMCSRRegIndex */
    0x04U,
    /* ucPMSRRegIndex */
    0x04U,
    /* ucPIPCRegIndex */
    0x04U
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
* Array contains details of port pins, whose mode can be changed during run
* time.
*/
/* QAC Warning: START Msg(2:3674)-2 */
CONST(Port_PinModeChangeableDetails, PORT_CONST) \
                                          Port_GstSetModePinDetailsList[] =
{
  /* Index:0 - PortConfigSet0 NUMERIC_PortGroup0 Pin7 */
  {
    /* ddPinId */
    0x0007U,
    /* usOrMask */
    0x0080U,
    /* ucSetModeIndex */
    0x00U,
    /* ucPortType */
    PORT_GROUP_NUMERIC
  },
  /* Index:1 - PortConfigSet0 NUMERIC_PortGroup0 Pin10 */
  {
    /* ddPinId */
    0x000AU,
    /* usOrMask */
    0x0400U,
    /* ucSetModeIndex */
    0x01U,
    /* ucPortType */
    PORT_GROUP_NUMERIC
  },
  /* Index:2 - PortConfigSet0 NUMERIC_PortGroup3 Pin1 */
  {
    /* ddPinId */
    0x0025U,
    /* usOrMask */
    0x0002U,
    /* ucSetModeIndex */
    0x02U,
    /* ucPortType */
    PORT_GROUP_NUMERIC
  },
  /* Index:3 - PortConfigSet0 NUMERIC_PortGroup3 Pin4 */
  {
    /* ddPinId */
    0x0028U,
    /* usOrMask */
    0x0010U,
    /* ucSetModeIndex */
    0x03U,
    /* ucPortType */
    PORT_GROUP_NUMERIC
  },
  /* Index:4 - PortConfigSet0 NUMERIC_PortGroup3 Pin9 */
  {
    /* ddPinId */
    0x002DU,
    /* usOrMask */
    0x0200U,
    /* ucSetModeIndex */
    0x04U,
    /* ucPortType */
    PORT_GROUP_NUMERIC
  },
  /* Index:5 - PortConfigSet0 NUMERIC_PortGroup4 Pin12 */
  {
    /* ddPinId */
    0x003FU,
    /* usOrMask */
    0x1000U,
    /* ucSetModeIndex */
    0x05U,
    /* ucPortType */
    PORT_GROUP_NUMERIC
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
* Array contains details of port pins, whose Dio Alternate mode can be changed
* during run time.
*/
/* QAC Warning: START Msg(2:3674)-2 */
CONST(Port_PinDioAltChangeableDetails, PORT_CONST) \
                                          Port_GstSetDioAltPinDetails[] =
{
  /* Index:0 - PortConfigSet0 NUMERIC_PortGroup3 Pin12 */
  {
    /* ddPinId */
    0x0030U,
    /* usOrMask */
    0x1000U,
    /* ucPortGroupIndex */
    0x03U,
    /* ucPortType */
    PORT_GROUP_NUMERIC,
    /* ucPortPIPCIndex */
    0x03U
  },
  /* Index:1 - PortConfigSet0 NUMERIC_PortGroup4 Pin1 */
  {
    /* ddPinId */
    0x0034U,
    /* usOrMask */
    0x0002U,
    /* ucPortGroupIndex */
    0x04U,
    /* ucPortType */
    PORT_GROUP_NUMERIC,
    /* ucPortPIPCIndex */
    0x04U
  },
  /* Index:2 - PortConfigSet0 NUMERIC_PortGroup4 Pin8 */
  {
    /* ddPinId */
    0x003BU,
    /* usOrMask */
    0x0100U,
    /* ucPortGroupIndex */
    0x04U,
    /* ucPortType */
    PORT_GROUP_NUMERIC,
    /* ucPortPIPCIndex */
    0x04U
  },
  /* Index:3 - PortConfigSet0 NUMERIC_PortGroup5 Pin8 */
  {
    /* ddPinId */
    0x0048U,
    /* usOrMask */
    0x0100U,
    /* ucPortGroupIndex */
    0x05U,
    /* ucPortType */
    PORT_GROUP_NUMERIC,
    /* ucPortPIPCIndex */
    0x05U
  },
  /* Index:4 - PortConfigSet0 NUMERIC_PortGroup5 Pin9 */
  {
    /* ddPinId */
    0x0049U,
    /* usOrMask */
    0x0200U,
    /* ucPortGroupIndex */
    0x05U,
    /* ucPortType */
    PORT_GROUP_NUMERIC,
    /* ucPortPIPCIndex */
    0x05U
  },
  /* Index:5 - PortConfigSet0 NUMERIC_PortGroup5 Pin15 */
  {
    /* ddPinId */
    0x004FU,
    /* usOrMask */
    0x8000U,
    /* ucPortGroupIndex */
    0x05U,
    /* ucPortType */
    PORT_GROUP_NUMERIC,
    /* ucPortPIPCIndex */
    0x05U
  }
};
/* QAC Warning: END Msg(2:3674)-2 */
/*
 * Array contains list of port pins whose direction can be changed during
 * run time.
 */
/* CONST(Port_PinsDirChangeable, PORT_CONST) \
                                        Port_GstPinDirChangeableList[]; */
/* Array of structures for Digital Filter registers */
/* CONST(Port_DNFARegs, PORT_CONST) Port_GstDNFARegs[]; */
/* Array for Analog Filter registers */
/* CONST(Port_FCLARegs, PORT_CONST) Port_GstFCLARegs[]; */
#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

