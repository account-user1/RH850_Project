/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Component                        */
/* Module       = Port_PBTypes.h                                              */
/* $Revision: 426746 $                                                        */
/* $Date: 2017-06-23 18:50:14 +0900 (金, 23 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macros, PORT type definitions, structure data types and */
/* API function prototypes of PORT Driver                                     */
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
 * V1.0.1:  23-Feb-2016   : As part of P1x-C V4.01.00 release following
 *                          changes were made:
 *                          1.Updated the copyright information
 *                          2.As per ARDAAAF-349, Added the element
 *                          ucPortPIPCIndex in structure
 *                          STag_Port_PinDioAltChangeableDetails and added
 *                          the PIPC macro's PORT_MODE_MASK, SET_PIPC_MIN_MODE,
 *                          SET_PIPC_MAX_MODE.
 *                          3.As per  ARDAAAF-17, Added the element
 *                          ucPIPCRegIndex in structure
 *                          STag_Port_PinModeChangeableGroups.
 *                          4.As per ARDAAAF-525, the elements ucPMSRRegIndex
 *                          and ucPSRRegIndex are added in
 *                          STag_Port_PinsDirChangeable structure.
 *                          5.Appended 'U' for version check macro value's.
 * V1.0.2:  27-Jan-2017   : Following changes were made:
 *                          1.As per ARDAAAF-1364, following changes were made:
 *                          a)The Port_PinsDirChangeable structure's
 *                          member name 'usDirOrMaskVal' is changed to
 *                          'usOrMaskVal'.
 *                          b)The Port_PinModeChangeableDetails, and
 *                          Port_PinDioAltChangeableDetails Structures member
 *                          name 'usModeOrMaskVal' is changed to 'usOrMask'.
 *                          c)PORT_MAX_MODE macro is removed and same will be
 *                          generated by generation tool in Port_Cfg.h file.
 *                          2.As per ARDAAAF-1459,unit design ID, proper
 *                          comments and requirement tags are added at
 *                          applicable places.
 *                          3.As per the ARDAAAF-771, justification added for
 *                          QAC Warnings and MISRA violations at applicable
 *                          places.
 *                          4.As per Jira ARDAAAF-817, the declaration of
 *                          "Port_HardwareReg" and "JPort_HardwareReg" are
 *                           corrected to standard format.
 *                          5.Copyright information is updated.
 * V1.0.3:  27-Mar-2017   : Following changes were made:
 *                          1.As per ARDAAAF-2057,
 *                          PREFIX and INITPOLICY of memory sections are
 *                          changed.
 *                          2.As per ARDAAAF-1571, The requirement
 *                          EAAR_PN0084_NR_0034 is followed for Variables
 *                          naming.
 * V1.0.4:  16-Jun-2017   : As part of ARDAAAF-2484, following changes are made:
 *                          1.Unused macros removed.
 *                          2.Alignment and spacing corrected.
 *                          3.Filter switch added for Port_GstFCLARegs and
 *                          Port_GstDNFARegs.
 *                          4.Removed array index from Port_HardwareReg array.
 */
/******************************************************************************/
/*Implements AR_PN0062_FR_0001, EAAR_PN0034_FR_0052, AR_PN0062_FR_0005*/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements EAAR_PN0034_FR_0021, EAAR_PN0034_NR_0007*/
/*Implements EAAR_PN0034_NR_0045, EAAR_PN0034_NR_0060*/
#ifndef PORT_PBTYPES_H
#define PORT_PBTYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Port_Hardware.h"
#include "Port_Types.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define PORT_PBTYPES_AR_RELEASE_MAJOR_VERSION  PORT_AR_RELEASE_MAJOR_VERSION
#define PORT_PBTYPES_AR_RELEASE_MINOR_VERSION  PORT_AR_RELEASE_MINOR_VERSION
#define PORT_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                            PORT_AR_RELEASE_REVISION_VERSION
/* File version information */
#define PORT_PBTYPES_SW_MAJOR_VERSION  PORT_SW_MAJOR_VERSION
#define PORT_PBTYPES_SW_MINOR_VERSION  PORT_SW_MINOR_VERSION

/*Implements EAAR_PN0034_NR_0002, EAAR_PN0034_NR_0026, PORT129, PORT207*/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/

/* 1. MISRA C RULE VIOLATION:                                                 */
/*Message        : (4:3684) Array declared with unknown size.                 */
/*Rule           : MISRA-C:2004 Rule 17.4                                     */
/*Justification  : Subscripting cannot be applied on the array since size can */
/*                 grow based on configuration done by user i.e. multi        */
/*                 configuration                                              */
/*Verification   : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/*Reference      : Look for MISRA Violation: START Msg(4:3684)-1 and          */
/*                 MISRA Violation: END Msg(4:3684)-1                         */
/*                 tags in the code.                                          */
/******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#define PORT_DBTOC_VALUE\
                       (((uint32)PORT_VENDOR_ID_VALUE << 22U) | \
                       ((uint32)PORT_MODULE_ID_VALUE << 14U) | \
                       ((uint32)PORT_SW_MAJOR_VERSION_VALUE << 8U) | \
                       ((uint32)PORT_SW_MINOR_VERSION_VALUE << 3U))
/*Implements PORT_ESDD_UD_103*/
#define PORT_ZERO                      (uint8)0x00
#define PORT_ONE                       (uint8)0x01
#define PORT_FOUR                      (uint8)0x04
#define PORT_SIX                       (uint8)0x06
#define PORT_SIXTEEN                   (uint8)0x10
#define PORT_REG_NOTAVAILABLE          (uint8)0xFF

#define PORT_UNINITIALIZED             (boolean)0x00
#define PORT_INITIALIZED               (boolean)0x01
#define PORT_TRUE                      (boolean)0x01
#define PORT_FALSE                     (boolean)0x00

#define PORT_INV_NOT_CFG               (uint16)0xFFFF

#define PORT_WORD_ZERO                 (uint16)0x0000
#define PORT_LONG_WORD_ZERO            (uint32)0x00000000UL
#define PORT_MSB_MASK                  (uint32)0xFFFF0000UL

#if(PORT_SET_PIN_MODE_API == STD_ON)
#define PORT_DIO_OUT                   (Port_PinModeType)0x00
#define PORT_DIO_IN                    (Port_PinModeType)0x01
#endif

#define PORT_MODE_DIO                  (Port_PinModeType)0x00

#define PORT_MODE_ADJUST               (Port_PinModeType)0x06

#define PORT_MODE_MASK                 (uint8)0x1F
#define SET_PIPC_MIN_MODE              (uint8)0x82
#define SET_PIPC_MAX_MODE              (PORT_MAX_MODE + (uint8)(0x80))

#define PORT_SET_BYTE                  (uint8)0xFF
#define PORT_SET_WORD                  (uint16)0xFFFF
#define PORT_SET_LONG_WORD             (uint32)0xFFFFFFFFUL

#define PORT_DEM_TYPE Dem_EventStatusType
/*******************************************************************************
**  Global symbols used for For verifying the Modes
*******************************************************************************/
#define PORT_BIT3_MASK                 (uint8)0x08   /* For PMC  */
#define PORT_BIT2_MASK                 (uint8)0x04   /* For PFCE */
#define PORT_BIT1_MASK                 (uint8)0x02   /* For PFC  */
#define PORT_BIT0_MASK                 (uint8)0x01   /* For PM   */

/*******************************************************************************
** Structure declaration of port group registers, except PMSR, PFCE, PFC      **
** and PMCSR.                                                                 **
** This structure will be generated in the following sequence of registers:   **
** PSR, PINV, PIS, PISA, PIBC, PIPC, PU, PD, PBDC, PODC, PODCE, PDSC and PUCC.**
*******************************************************************************/
/*Implements PORT_ESDD_UD_075*/
typedef struct STag_Port_Regs
{
  /* Configured value of the port group registers for initial mode. */
  uint16 usInitModeRegValPSR;
  uint16 usInitModeRegValPINV;
  uint16 usInitModeRegValPIS;
  uint16 usInitModeRegValPIBC;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint16 usInitModeRegValPIPC;
  #endif
  uint16 usInitModeRegValPU;
  uint16 usInitModeRegValPD;
  uint16 usInitModeRegValPBDC;
  uint16 usInitModeRegValPODC;
  uint16 usInitModeRegValPODCE;
  uint16 usInitModeRegValPDSC;
  uint16 usInitModeRegValPUCC;
} Port_Regs;

/*******************************************************************************
** Structure declaration of PFCE, PFC and PMCSR port group registers          **
** This structure will be generated in the following sequence of registers:   **
** PFCE, PFC and PMCSR.                                                       **
*******************************************************************************/
/*Implements PORT_ESDD_UD_076*/
typedef struct STag_Port_FuncCtrlRegs
{
  /* Configured value of the port group registers for initial mode. */
  uint16 usInitModeRegValPFCE;
  uint16 usInitModeRegValPFC;
  uint16 usInitModeRegValPMCSR;
} Port_FuncCtrlRegs;

/*******************************************************************************
** Structure declaration of PMSR registers for all port groups                **
*******************************************************************************/
/*Implements PORT_ESDD_UD_077*/
typedef struct STag_Port_PMSRRegs
{
  /* Bit value of upper 16 bits (31 - 16) = 0 if for pin
   * "PortPinDirectionChangeable" is configured as true
   * Bit value of upper 16 bits (31 - 16) = 1 if for pin
   * "PortPinDirectionChangeable" configured as false
   * Bit value of lower 16 bits(15 - 0) = Initial value of the corresponding pin
   */
  uint32 ulMaskAndConfigValue;

   /* Configured PMSR register value for initial mode. */
  uint16 usInitModeRegVal;
} Port_PMSRRegs;

/*******************************************************************************
** Structure containing information on PINs whose direction can be changed    **
** during run time                                                            **
*******************************************************************************/
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
/*Implements PORT_ESDD_UD_078*/
typedef struct STag_Port_PinsDirChangeable
{
  /* The PIN number whose direction is configured as changeable at run time */
  Port_PinType usPinId;

  /* Port Index value to access the direction changeable Port group.
   */
  uint8 ucPortIndex;
  #if (PORT_PINV_REG_AVAILABLE == STD_ON)

  /* Configured level value for PINV register */
  uint16 usPortinversionVal;
  #endif /* End of PORT_PINV_REG_AVAILABLE == STD_ON */
  /* Mask value to check whether the requested direction and current direction
   * of the PIN are same.
   */
  uint16 usOrMaskVal;
   /* Configured level value for PSR register */
  uint16 usChangeableConfigVal;
   /* Indicates the Port type (Numeric/ Analog / JTAG) */
  Port_GroupType enPortType;
  /* Index of PMSR register in the structure array of PMSR registers */
  uint8 ucPMSRRegIndex;
  /* Index of the PSR register in the structure array, where all port group
   * registers, except PMSR, are generated.
   */
  uint8 ucPSRRegIndex;
} Port_PinsDirChangeable;
#endif /* End of PORT_SET_PIN_DIRECTION_API == STD_ON */

/*******************************************************************************
** Structure contains information about the port groups, containing the PINs  **
** whose mode can be changed during run time.                                 **
*******************************************************************************/
#if(PORT_SET_PIN_MODE_API == STD_ON)
/*Implements PORT_ESDD_UD_079*/
typedef struct STag_Port_PinModeChangeableGroups
{
   /* Index of the PSR register in the structure array, where all port group
    * registers, except PMSR, are generated.
    */
  uint8 ucPSRRegIndex;
  /* Index of the PFCE register in the structure array, where all port group
   * registers, except PMSR, are generated.
   */
  uint8 ucPFCERegIndex;
  /* Index of the PFC register in the structure array, where all port group
   * registers, except PMSR, are generated.
   */
  uint8 ucPFCRegIndex;
  /* Index of the PMCSR register in the structure array, where all port group
   * registers, except PMSR, are generated.
   */
  uint8 ucPMCSRRegIndex;
  /* Index of PMSR register in the structure array of PMSR registers.*/
  uint8 ucPMSRRegIndex;
  /* Index of the PIPC register in the structure array, where all port group
   * registers, except PMSR, are generated.
   */
  uint8 ucPIPCRegIndex;
} Port_PinModeChangeableGroups;
#endif /* End of PORT_SET_PIN_MODE_API == STD_ON */

/*******************************************************************************
** Structure contains details of PINs whose mode can be changed during run    **
** time.                                                                      **
*******************************************************************************/
#if (PORT_SET_PIN_MODE_API == STD_ON)
/*Implements PORT_ESDD_UD_080*/
typedef struct STag_Port_PinModeChangeableDetails
{
   /* The PIN number whose mode is configured as changeable at run time. */
  Port_PinType usPinId;
   /* Or mask value of the port pin */
  uint16 usOrMask;
   /* Index of the structure array which provide the information of port groups,
    * containing the PINs whose mode can be changed during run time
    */
  uint8 ucSetModeIndex;
   /* Indicates the Port type (Numeric/ Analog / JTAG) */
  Port_GroupType enPortType;
} Port_PinModeChangeableDetails;
#endif /* End of PORT_SET_PIN_MODE_API == STD_ON */

/*******************************************************************************
** Structure contains details of PINs whose mode can be changed to DIO or     **
** alternate mode during runtime.                                             **
*******************************************************************************/
#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)
/*Implements PORT_ESDD_UD_072*/
typedef struct STag_Port_PinDioAltChangeableDetails
{
   /* The PIN number whose mode is configured as changeable at run time. */
  Port_PinType usPinId;
   /* Or mask value of the port pin */
  uint16 usOrMask;
   /* Index of the structure array Port_GstNumFuncCtrlRegs[PORT_FUNC_REGS],
    * which provide the information of the PMCSR register of the port group to
    * which this pin belongs.
    */
  uint8 ucPortGroupIndex;
   /* Indicates the Port type (Numeric/ Analog / JTAG) */
  Port_GroupType enPortType;
     /* Index of the PIPC register in the structure array */
  uint8 ucPortPIPCIndex;
} Port_PinDioAltChangeableDetails;
#endif /* End of PORT_SET_PIN_MODE_API == STD_ON */

/*******************************************************************************
** Structure contains the declaration for DNFA registers                      **
** This structure will be generated in the following sequence of registers:   **
** DNFAnCTL, DNFAnEN.                                                         **
*******************************************************************************/
/*Implements PORT_ESDD_UD_070*/
typedef struct STag_Port_DNFARegs
{
  /* Configured Index for DNFA noise elimination enable register */
  uint8 ucDnfaIndex;

  /* Configured value for DNFA noise elimination enable register */
  uint16 usDNFAEN;

  /* Configured value for DNFA noise elimination control register */
  uint8 ucDNFACTL;

  uint16 usDELAY;
} Port_DNFARegs;

/*******************************************************************************
** Structure contains the declaration for FCLA registers                      **
** This structure will be generated in the following sequence of registers:   **
** FCLAnCTL.                                                                  **
*******************************************************************************/
/*Implements PORT_ESDD_UD_071*/
typedef struct STag_Port_FCLARegs
{
  /* Configured Index for FCLA noise elimination control register */
  uint8 ucFCLABaseIndex;

  /* Configured Index for FCLA-CTL noise elimination control register */
  uint8 ucFclaCTLIndex;

  /* Configured value for FCLA noise elimination control register */
  uint8 ucFCLACTL;
} Port_FCLARegs;

/*******************************************************************************
**                      GLOBAL DATA TYPES                                     **
*******************************************************************************/
/* Structure for Port Init Configuration */
/* Overall Module Configuration Data Structure */
/*Implements PORT_ESDD_UD_074, PORT_ESDD_UD_076, PORT_ESDD_UD_077*/
/*Implements PORT073*/
typedef struct STag_Port_ConfigType
{
    /* Database start value - 0x0EDF0400 */
  uint32 ulStartOfDbToc;

  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  /* Pointer to structure of Numeric Port Group registers in sequence: PSR,
   *  PINV, PIS, PISA, PIBC, PIPC, PU, PD, PBDC,PODC, PODCE, PDSC and PUCC.
   */
  P2CONST(Port_Regs, AUTOMATIC, PORT_CONFIG_CONST) pPortNumRegs;
  /* Pointer to structure of Numeric Function Control Port Group registers
   * in sequence: PFCE, PFC and PMCSR
   */
  P2CONST(Port_FuncCtrlRegs, AUTOMATIC, PORT_CONFIG_CONST) \
                                                      pPortNumFuncCtrlRegs;
  /* Pointer to structure of Numeric PMSR Port Group registers */
  P2CONST(Port_PMSRRegs, AUTOMATIC, PORT_CONFIG_CONST) \
                                                          pPortNumPMSRRegs;
  #endif

  #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
  /* Pointer to structure of JTAG Port Group registers in sequence: PSR,
   *  PINV, PIS, PISA, PIBC, PIPC, PU, PD, PBDC,PODC, PODCE, PDSC and PUCC.
   */
  P2CONST(Port_Regs, AUTOMATIC, PORT_CONFIG_CONST) pPortJRegs;
  /* Pointer to structure of JTAG Function Control Port Group registers
   * in sequence: PFCE, PFC and PMCSR
   */
  P2CONST(Port_FuncCtrlRegs, AUTOMATIC, PORT_CONFIG_CONST) \
                                                        pPortJFuncCtrlRegs;
  /* Pointer to structure of JTAG PMSR Port Group registers */
  P2CONST(Port_PMSRRegs, AUTOMATIC, PORT_CONFIG_CONST) \
                                                            pPortJPMSRRegs;
  #endif

  #if (PORT_SET_PIN_DIRECTION_API == STD_ON)
  /* Pointer to structure containing details about the pins whose direction
   * can be changed during run time
   */
  P2CONST(Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_CONST) \
                                                     pPinDirChangeable;
  #endif
  #if (PORT_SET_PIN_MODE_API == STD_ON)
  /* Pointer to structure containing details about the port pin mode */
  P2CONST(Port_PinModeChangeableGroups, AUTOMATIC, \
                                PORT_CONFIG_CONST) pPinModeChangeableGroups;
  P2CONST(Port_PinModeChangeableDetails, AUTOMATIC, \
                               PORT_CONFIG_CONST) pPinModeChangeableDetails;
  #endif

  #if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)
  /* Pointer to structure containing details about the port dio or alternate
   * pin mode
   */
  P2CONST(Port_PinDioAltChangeableDetails, AUTOMATIC, \
                                   PORT_CONFIG_CONST) pPinDioAltModeDetails;
  #endif

  #if(PORT_DNFA_REG_CONFIG == STD_ON)
  /* Pointer to array of structure containing details about DNFA registers  */
  P2CONST(Port_DNFARegs, AUTOMATIC, PORT_CONFIG_CONST)pPortDNFARegs;
  #endif

  #if(PORT_FCLA_REG_CONFIG == STD_ON)
  /* Pointer to array of structure containing details about FCLA registers */
  P2CONST(Port_FCLARegs, AUTOMATIC, PORT_CONFIG_CONST)pPortFCLARegs;
  #endif

  #if (PORT_SET_PIN_DIRECTION_API == STD_ON)
  /* The Total number of Pins configured for Direction Change at run time. */
  uint8 ucNoOfPinsDirChangeable;
  #endif

  #if (PORT_SET_PIN_MODE_API == STD_ON)
  /* The Total number of Pins configured for Mode Change at run time. */
  uint8 ucNoOfPinsModeChangeable;
  #endif

  #if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)
  /*
   * The Total number of Pins configured for Dio or Alternate Mode
   * changeable at run time.
   */
  uint8 ucNoOfPinsDioAltModeChangeable;
  #endif

  #if(PORT_DNFA_REG_CONFIG == STD_ON)
  /* The total number of DNFA noise elimination registers configured */
  uint8 ucNoOfDNFARegs;
  #endif

  #if(PORT_FCLA_REG_CONFIG == STD_ON)
  /* The total number of FCLA noise elimination registers configured */
  uint8 ucNoOfFCLARegs;
  #endif
} Port_ConfigType;

/*******************************************************************************
**                       Extern declarations for Global Data                  **
*******************************************************************************/
#define PORT_59_RENESAS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

/*Implements PORT_ESDD_UD_108, PORT_ESDD_UD_075*/
/* MISRA Violation: START Msg(4:3684)-1 */
#if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
extern CONSTP2VAR(volatile Port_Registers,PORT_CONST, PORT_CONFIG_CONST) \
  Port_HardwareReg[];
extern CONST(Port_Regs, PORT_CONST) Port_GstNumRegs[];
extern CONST(Port_FuncCtrlRegs, PORT_CONST) \
  Port_GstNumFuncCtrlRegs[];
extern CONST(Port_PMSRRegs, PORT_CONST) Port_GstNumPMSRRegs[];
#endif

#if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
extern CONSTP2VAR(volatile JPort_Registers,PORT_CONST, PORT_CONFIG_CONST) \
  JPort_HardwareReg;
extern CONST(Port_Regs, PORT_CONST) Port_GstJTAGRegs[];
extern CONST(Port_FuncCtrlRegs, PORT_CONST) \
  Port_GstJTAGFuncCtrlRegs[];
extern CONST(Port_PMSRRegs, PORT_CONST) Port_GstJTAGPMSRRegs[];
#endif

#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
extern CONST(Port_PinsDirChangeable, PORT_CONST) \
  Port_GstPinDirChangeableList[];
#endif

#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)
extern CONST(Port_PinDioAltChangeableDetails, PORT_CONST) \
  Port_GstSetDioAltPinDetails[];
#endif

#if (PORT_SET_PIN_MODE_API == STD_ON)
extern CONST(Port_PinModeChangeableGroups, PORT_CONST) \
  Port_GstSetModeGroupsList[];
extern CONST (Port_PinModeChangeableDetails, PORT_CONST) \
  Port_GstSetModePinDetailsList[];
#endif
#if (PORT_DNFA_REG_CONFIG == STD_ON )
extern CONST(Port_DNFARegs, PORT_CONST) Port_GstDNFARegs[];
#endif
#if (PORT_FCLA_REG_CONFIG == STD_ON )
extern CONST(Port_FCLARegs, PORT_CONST) Port_GstFCLARegs[];
#endif

/* MISRA Violation: END Msg(4:3684)-1 */

#define PORT_59_RENESAS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"

#endif /* PORT_PBTYPES_H  */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
