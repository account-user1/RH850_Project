/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_PBTypes.h                                               */
/* $Revision: 368300 $                                                        */
/* $Date: 2017-02-24 16:30:08 +0000 (Fri, 24 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the type definitions of Post Build time Parameters      */
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
 * V1.0.0:  06-Aug-2015    : Initial Version.
 *
 * V1.0.1:  07-Apr-2016    : As part of V4.01.00 release, following changes are
 *                           made:
 *                           1) Copy right year is updated.
 *                           2) As per JIRA ARDAAAF-424, library related
 *                              enumerations are added.
 *
 * V1.0.2:  24-Feb-2017    : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
 *                           2) W.r.t Jira ARDAAAF-559,
 *                              a)Write verification macros are moved to
 *                              Fls_RegWrite.h
 *                              b)FACI1 supporting code parts are removed.
 *                           3) As part of JIRA ID ARDAAAF-1397,added
 *                              FLS_FCU_FRDY_POOL_COUNT macro.
 *                           4) As part of JIRA ID ARDAAAF-770, added type cast
 *                              in macro definitions
 */
/******************************************************************************/
#ifndef FLS_PBTYPES_H
#define FLS_PBTYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for module version information */
#include "Fls.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_PBTYPES_AR_RELEASE_MAJOR_VERSION  FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_PBTYPES_AR_RELEASE_MINOR_VERSION  FLS_AR_RELEASE_MINOR_VERSION
#define FLS_PBTYPES_AR_RELEASE_REVISION_VERSION \
                                            FLS_AR_RELEASE_REVISION_VERSION


/* File version information */
#define FLS_PBTYPES_SW_MAJOR_VERSION  FLS_SW_MAJOR_VERSION
#define FLS_PBTYPES_SW_MINOR_VERSION  FLS_SW_MINOR_VERSION

/*******************************************************************************
**                         MISRA C Rule Violations                            **
*******************************************************************************/

/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : Msg(4:3453) A function could probably be used instead of   */
/*                 this function-like macro.                                  */
/* Rule          : MISRA-C:2004 Rule 1.1                                      */
/* Justification : This function macro is used here to reduce the complexity  */
/*                 of having utility functions for performing 8, 16 and 32 bit*/
/*                 data flash reading and writing operations                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3453)-1 and                           */
/*                 END Msg(4:3453)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3684) Array declared with unknown size.                 */
/* Rule          : MISRA-C:2004 Rule 8.12                                     */
/* Justification : All operations are checked and array is necessary to       */
/*                 perform read/compare functionality. This is used in        */
/*                 misalignment handling.Temporary buffer array size is       */
/*                 configuration dependent.                                   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3684)-2 and                           */
/*                 END Msg(4:3684)-2 tags in the code.                        */
/******************************************************************************/

/*******************************************************************************
**                         Macro Defines                                      **
*******************************************************************************/

/* Macros for DEM */
#define FLS_DEM_TYPE Dem_EventStatusType

/* API IDs for all APIs in Fls.c and Fls_Internal.c for register write
verification User interface error notification */

/* For APIs which uses static registers, we give APIid as FLS_INIT_API_ID */

/* Macro to check the CPU frequency */
#define FLS_CPU_FREQUENCY_120MHZ           120U
#define FLS_CPU_FREQUENCY_160MHZ           160U
#define FLS_CPU_FREQUENCY_240MHZ           240U

/*Macro for FACI Units */
#define FLS_FACI0                      0U

/* General defines */
#define FLS_DBTOC_VALUE                 ((FLS_VENDOR_ID_VALUE << 22) | \
                                         (FLS_MODULE_ID_VALUE << 14) | \
                                         (FLS_SW_MAJOR_VERSION_VALUE << 8) | \
                                         (FLS_SW_MINOR_VERSION_VALUE << 3))
/* Driver status Macros */
#define FLS_INITIALIZED               (boolean)1
#define FLS_UNINITIALIZED             (boolean)0

/* Macros to avoid direct numbers */
#define FLS_ZERO                               (uint8)0
#define FLS_ONE                                (uint8)1
#define FLS_TWO                                (uint8)2
#define FLS_THREE                              (uint8)3
#define FLS_FOUR                               (uint8)4
#define FLS_EIGHT                              (uint16)8

#define FLS_NULL                               (uint8*)0x00000000uL

/* Macros for boolean variables */
#define FLS_FALSE                             (boolean)0
#define FLS_TRUE                              (boolean)1

/* Macros for Flash protection Support */
#define SUPPORTED                              0

#define FLS_DFECCCTL_RESET_VAL                (uint16)0
#define FLS_DFERRINT_RESET_VAL                (uint8)6
#define FLS_DFTSTCTL_RESET_VAL                (uint16)0
#define FLS_FACI_FRTEINT_RESET_VAL            (uint8)3

#define FLS_CLEAR_INT_REQ                     (uint16)0x1000
#define FLS_SET_INT_REQ                       (uint16)0x1000
#define FLS_RESET_INT_REQ                     (uint16)0xEFFF

#if ( FLS_CPU_FREQUENCY_MHZ == FLS_CPU_FREQUENCY_240MHZ )
#define FLS_FACI_CLK_DIV                      (uint16)6
#endif
#if (FLS_CPU_FREQUENCY_MHZ == FLS_CPU_FREQUENCY_160MHZ )
#define FLS_FACI_CLK_DIV                      (uint16)4
#endif
#if (FLS_CPU_FREQUENCY_MHZ == FLS_CPU_FREQUENCY_120MHZ )
#define FLS_FACI_CLK_DIV                      (uint16)3
#endif

#if (FLS_FHVE_REGS == SUPPORTED)
/* Macro to enable flash memory software protection */
#define FLS_FLASH_PROTECTION_ON                (uint8)0
/* Macro to disable flash memory software protection */
#define FLS_FLASH_PROTECTION_OFF               (uint8)1
#endif /* End of #if (FLS_FHVE_REGS == SUPPORTED) */

/* FASTAT */
#define FLS_FCU_REGBIT_FASTAT_CMDLK     (0x10u)

/* FCURAME */
#define FLS_FCU_REGBIT_FCURAME_KEY       (uint16)(0xC400u)
#define FLS_FCU_REGBIT_FCURAME_FCRME     (uint16)(0x0001u)
#define FLS_FCU_REGBIT_FCURAME_FRAMTRAN  (uint16)(0x0002u)
#define FLS_FCU_REGBIT_FCURAME_RESET     (uint16)(0x0000u)

/* FSTATR */
#define FLS_FCU_REGBIT_FSTATR_ILGERR    (0x00004000uL)
#define FLS_FCU_REGBIT_FSTATR_FRDY      (0x00008000uL)
#define FLS_FCU_REGBIT_FSTATR_SUSRDY    (0x00000800uL)

/* FENTRYR */
#define FLS_FCU_REGBIT_FENTRY_KEY       (0xAA00u)
#define FLS_FCU_REGBIT_FENTRY_KEYMASK   (0x00FFu)
#define FLS_FCU_MODE_PE                 (0x0080u)
#define FLS_FCU_MODE_CPE                (0x0001u)
#define FLS_FCU_MODE_USER               (0x0000u)

/* FBCSTAT */
#define FLS_FCU_REGBIT_FBCSTAT_BCST     (0x01u)

/* FPCKAR */
#define FLS_FCU_REGBIT_FPCKAR_KEY        (0x1E00u)

/* DFERSTR */
#define FLS_FCU_REGBIT_DFERSTR_SEDF     (0x0001uL)
#define FLS_FCU_REGBIT_DFERSTR_DEDF     (0x0002uL)
#define FLS_FCU_REGVAL_DFERSTR_NOERR    (0x0000uL)

/* DFERSTC */
#define FLS_FCU_REGBIT_DFERSTC_ERRCLR   (0x01u)

/* DFERRINT */
#define FLS_FCU_REGVAL_DFERRINT_NOINT    (0x00u)

#define FLS_FCU_DF_SIZE_MASK            (0x0000FFFFuL)

#define FLS_FCU_DISABLE_BFLASH                      (0x00u)
#define FLS_FCU_ENABLE_BFLASH                       (0x01u)

/* do not use brackets to access system register */
#define FLS_FCU_SYSTEM_REGISTER_CDBCR     24, 13
#define FLS_FCU_SYSTEM_REGISTER_PID       6, 1
#define FLS_FCU_SYSTEM_REGISTER_ICCTRL    24, 4
/* Macro define for clearing the ICHCLR bit of ICCTRL register */
#define FLS_FCU_REGBIT_ICHCLR           (uint32)0x00000100uL

#define FLS_FCU_RAM_ADD                 (0xFFA12000uL)

#if (FLS_FWCOPY_SUPPORTED == STD_ON)
/* Other Data Flash related defines */
#define FLS_FCU_RAM_SIZE                (0x00001000uL)
#define FLS_FCU_RAM_SRC_ADD             (0x00017000uL)
#define FLS_FCU_RAM_ADD_CHKSUM_END      (0x00017FF8uL)
#define FLS_FCU_RAM_ADD_CHKSUM          (0x00017FFCuL)
#define FLS_FCU_EXTRA3_FDIV_FWVER       (0x00010264uL)
#define FLS_FCU_EXTRA3_FWVER            (0x00010219uL)
#define FLS_FCU_EXTRA3_FMAX             (0x00010234uL)
#define FLS_FCU_EXTRA3_FMIN             (0x00010238uL)
#define FLS_FCU_EXTRA3_FPCLK_FWVER_03   (0x00010274uL)
#define FLS_FCU_EXTRA3_FPCLK_FWVER_04   (0x00010278uL)
#define FLS_FCU_EXTRA3_SCDSADD          (0x00010270uL)
#define FLS_FCU_EXTRA3_ECCADDR          (0x00010288uL)


#else
#define FLS_FCU_EXTRA3_FWVER            (0x01030219uL)
#define FLS_FCU_EXTRA3_FMAX             (0x01030234uL)
#define FLS_FCU_EXTRA3_FMIN             (0x01030238uL)
#define FLS_FCU_EXTRA3_FDIV_FWVER       (0x01030264uL)
#define FLS_FCU_EXTRA3_FPCLK_FWVER_03   (0x01030274uL)
#define FLS_FCU_EXTRA3_FDIV_FWVER_04    (0x01030265uL)
#define FLS_FCU_EXTRA3_FPCLK_FWVER_04   (0x01030278uL)
#define FLS_FCU_EXTRA3_SCDSADD          (0x01030270uL)
#define FLS_FCU_EXTRA3_ECCADDR          (0x01030288uL)

#endif /* End of #if (FLS_FWCOPY_SUPPORTED == STD_ON) */

#define FLS_FCU_FWVER_VAL_MASK          (0x00000003uL)

#define FLS_FCU_PRDSEL1_OFFSET                (0xC0uL)
#define FLS_FCU_PRDSEL2_OFFSET                (0xC4uL)
#define FLS_FCU_PRDSEL3_OFFSET                (0xC8uL)
#define FLS_FCU_PRDSEL4_OFFSET                (0xCCuL)

/* FCU Process Command Macros */
#define FLS_FACI_CMD_ERASE               (0x20u)
#define FLS_FACI_CMD_CLEARSTAT           (0x50u)
#define FLS_FACI_CMD_BLANKCHECK          (0x71u)
#define FLS_FACI_CMD_SUSPEND             (0xB0u)
#define FLS_FACI_CMD_FORCED_STOP         (0xB3u)
#define FLS_FACI_CMD_WRITE               (0xE8u)
#define FLS_FACI_CMD_EXE                 (0xD0u)

/* Data Flash Size macros */
#define FLS_FCU_BLOCK_SIZE              (0x0040u)
#define FLS_FCU_BLOCK_SIZE_2N           (0x0006u)
#define FLS_FCU_WRITE_SIZE              (0x00000004uL)

#define FLS_FCU_NULL                     0x00000000uL

#define FLS_FCU_ADDR_REG_RESET          (uint32)0x00000000uL
#define FLS_FCU_WORD_ZERO               (uint16)0x0000u
#define FLS_FCU_ZERO                    (uint32)0x00000000uL
#define FLS_FCU_ONE                     (uint32)0x00000001uL
#define FLS_FCU_TWO                     (uint32)0x00000002uL
#define FLS_FCU_THREE                   (uint32)0x00000003uL
#define FLS_FCU_FOUR                    (uint32)0x00000004uL
#define FLS_FCU_FIVE                    (uint32)0x00000005uL
#define FLS_FCU_EIGHT                   (uint32)0x00000008uL
#define FLS_FCU_FIFTEEN                 (uint32)0x0000000FuL
#define FLS_FCU_ONE_KB                  (uint32)0x00000400uL
#define FLS_FCU_BYTE_RESET              (uint8)0xFFu
#define FLS_FCU_ONE_MHZ                 (uint32)0x000F4240uL

/* FACI Clock frequency range*/
#define FLS_FCU_FMIN                  (0x04u)
#define FLS_FCU_FMAX                  (0x2du)

#define FLS_FCU_SWITCHMODE_WAIT_COUNT   (uint8)(0x20)
#define FLS_FCU_FORCESTOP_WAIT_COUNT    (uint8)(0x20)
#define FLS_FCU_BLANKCHECK_COUNT        (uint16)(0x100)
#define FLS_TIMEOUT_INIT_VALUE          (uint32)(0x0100)
#define FLS_SUSPEND_DELAY_TIME          (uint16)(0xFFF)
/* To mask the error bits of FSTATR register during Erase operation */
#define FLS_FCU_ERASE_ERROR_CHECK       (uint32)(0x0000E0C0)

/* To mask the error bits of FSTATR register during Write operation */
#define FLS_FCU_WRITE_ERROR_CHECK       (uint32)(0x0000D040)
/* Program and erase error bits */
#define FLS_FCU_FSTATR_PE_ERROR         (uint32)(0x00007040)
/* ERRSPD and PRGSPD bits of status register FSTATR */
#define FLS_SUSPEND_CHK_FOR_ERASE       (uint32)(0x00000300)
/* PRGSPD bit of status register FSTATR */
#define FLS_SUSPEND_CHK_FOR_WRITE       (uint32)(0x00000100)

/* The time it takes for the flash sequencer to process         */
/* a command. Determined empirically, as there where no timing */
/* information, regarding the flash sequencer cmd issuing,      */
/* at the moment of implementation.                             */
#define FLS_FCU_FRDY_POOL_COUNT               (uint32)(0x00000BB8)
/*******************************************************************************
**                         Macro Functions                                   **
*******************************************************************************/
/* MISRA Violation: START Msg(4:3453)-1 */
#define FLS_DF_READ16(Address)             \
                (*((volatile uint16 *)(Address)))

#define FLS_DF_READ8(Address)             \
                (*((volatile uint8 *)(Address)))

#define FLS_DF_WRITE8(Address, Data)             \
                ((*((volatile uint8 *)(Address))) = (Data))

#define FLS_DF_WRITE16(Address, Data)             \
                ((*((volatile uint16 *)(Address))) = (Data))

#define FLS_DF_READ32(Address)             \
                (*((volatile uint32 *)(Address)))

#define FLS_DF_WRITE32(Address, Data)      \
         ((*((volatile uint32*)(Address))) = (Data))

#define FLS_FCU_DF_ISSUE_BYTE_CMD(Command)     \
          ((*((volatile uint8*)(0xFFA20000uL))) = (Command))

#define FLS_FCU_DF_ISSUE_WORD_CMD(Command)     \
          ((*((volatile uint16*)(0xFFA20000uL))) = (Command))

/* END Msg(4:3453)-1 */

/*******************************************************************************
**               SchM Critical Section Protection Macros                      **
*******************************************************************************/
#define FLS_ENTER_CRITICAL_SECTION(Exclusive_Area) \
                                   SchM_Enter_Fls_##Exclusive_Area()
#define FLS_EXIT_CRITICAL_SECTION(Exclusive_Area) \
                                   SchM_Exit_Fls_##Exclusive_Area()
/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**             Extern declarations for Global Arrays Of Structures            **
*******************************************************************************/
#define FLS_START_SEC_VAR_NOINIT_32
#include "MemMap.h"
/* MISRA Violation: START Msg(4:3684)-2 */
/* Temporary Buffer used for read/compare functionality */
extern VAR(uint32, AUTOMATIC)Fls_GulTempBuffer[];
/* END Msg(4:3684)-2 */
#define FLS_STOP_SEC_VAR_NOINIT_32
#include "MemMap.h"

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* FLS_PBTYPES_H  */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
