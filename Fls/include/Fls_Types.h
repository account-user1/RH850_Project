/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_Types.h                                                 */
/* $Revision: 367439 $                                                        */
/* $Date: 2017-02-23 11:57:02 +0000 (Thu, 23 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision of Flash Wrapper Component specific types used within the module.*/
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
 *                           2) As per JIRA ARDAAAF-424, code flash related
 *                              structures are removed.
 *
 * V1.0.2:  23-Feb-2017    : The following changes are made:
 *                           1) W.r.t Jira ARDAAAF-907, Pre compile switches
 *                              are corrected.
 *                           2) W.r.t Jira ARDAAAF-559, Register Write Verify
 *                              macros are removed.
*/
/******************************************************************************/
#ifndef FLS_TYPES_H
#define FLS_TYPES_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Included for Type definitions */
#include "Std_Types.h"
/* Included for pre-compile options */
#include "Fls_PBTypes.h"
#if ( FLS_USE_WV_ERROR_INTERFACE == STD_OFF )
#include "Dem.h"
#endif
/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/

/* Functionality related to R4.0 */
/* AUTOSAR release version information */
#define FLS_TYPES_AR_RELEASE_MAJOR_VERSION    FLS_AR_RELEASE_MAJOR_VERSION
#define FLS_TYPES_AR_RELEASE_MINOR_VERSION    FLS_AR_RELEASE_MINOR_VERSION
#define FLS_TYPES_AR_RELEASE_REVISION_VERSION \
                                     FLS_AR_RELEASE_REVISION_VERSION



/* Module Software version information */
#define FLS_TYPES_SW_MAJOR_VERSION    FLS_SW_MAJOR_VERSION
#define FLS_TYPES_SW_MINOR_VERSION    FLS_SW_MINOR_VERSION


/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:3132) Hard coded 'magic' number, '', used to define the */
/*                 size of an array.                                          */
/* Justification : Hard coded Numbers are added instead of macros for better  */
/*                 readability.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3132)-1 and                           */
/*                 END Msg(2:3132)-1 tags in the code.                        */
/******************************************************************************/
/* 2.QAC Warning :                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a Qac Warning.     */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/

/*******************************************************************************
**                      GLOBAL DATA TYPES                                     **
*******************************************************************************/

/* Enumeration for flash read type */
typedef enum ETag_Fls_FlashReadType
{
  FLS_MISALIGNED_READ = 0,
  FLS_ALIGNED_READ
} Fls_FlashReadType;

/* Enumeration for driver commands */
typedef enum ETag_Fls_CommandType
{
  FLS_COMMAND_NONE = 0,
  FLS_COMMAND_ERASE,
  FLS_COMMAND_WRITE,
  FLS_COMMAND_READ,
  FLS_COMMAND_COMPARE,
  FLS_COMMAND_BLANKCHECK,
  FLS_COMMAND_READ_IMM
} Fls_CommandType;

/* Enumeration for returning FCU status values */
typedef enum ETag_Fls_FcuStatusType
{
  FLS_FCU_OK = 0,
  FLS_FCU_BUSY ,
  FLS_FCU_SUSPENDED ,
  FLS_FCU_ERR_CONFIGURATION ,
  FLS_FCU_ERR_REJECTED  ,
  FLS_FCU_ERR_WRITE ,
  FLS_FCU_ERR_ERASE  ,
  FLS_FCU_ERR_BLANKCHECK ,
  FLS_FCU_ERR_ECC_SED ,
  FLS_FCU_ERR_ECC_DED  ,
  FLS_FCU_ERR_INTERNAL ,
  FLS_FCU_CANCELED,
} Fls_FcuStatusType;

/* Structure contains all Fcu internal data */
typedef struct Stag_Fls_FcuDataType
{
  /* Flash hardware frequency in MHz */
  uint16 usCpuFrequencyMHz;
  /* Data Flash pool size in no. of blocks */
  uint16 usDFPoolSize;
  /* Data Flash size, required for boundary checks */
  uint32 ulFcuDfSize;
  /* ECC base address determined on firmware parameter version */
  uint32 ulFcuBaseAddrECC;
  /* Checksum end address */
  uint32 ulFcuChksumEndAddr;
  /* Checksum value */
  uint32 ulFcuChksumVal;
  /* Current Flash operating mode: P/E or Read */
  volatile uint16 usFcuFlashMode;
} Fls_FcuDataType;
/* QAC Warning: START Msg(2:3132)-1 */
/* Global Structure to handle the FACI Registers */
typedef struct STag_Fls_RegistersType
{
  uint8  volatile ucReserved1[16];
  /* Flash Access Status Register */
  uint8  volatile ucFASTAT;
  uint8  volatile ucReserved2[31];
  /* Flash Command Start Address Register */
  uint32 volatile ulFSADDR;
  /* Flash Command End Address Register */
  uint32 volatile ulFEADDR;
  uint8  volatile ucReserved3[28];
  /* FCURAM Enable Register */
  uint16 volatile usFCURAME;
  uint8  volatile ucReserved4[42];
  /* Flash Status Register */
  uint32 volatile ulFSTATR;
  /* Flash P/E Entry Register */
  uint16 volatile usFENTRYR;
  uint8  volatile ucReserved5[78];
  /* DF Blank Check Status Register */
  uint8  volatile ucFBCSTAT;
  uint8  volatile ucReserved6[3];
  /* DF Programming Start Address Register */
  uint32 volatile ulFPSADDR;
  uint8  volatile ucReserved7[8];
  /* Flash Sequencer Processing Clock Notify Register */
  uint16 volatile usFPCKAR;
}Fls_FACIRegType;

/* Global Structure to handle the ECC Registers */
typedef struct STag_Fls_ECCRegType
{
  /* ECC control Register */
  uint16 volatile usDFECCCTL;
  uint8  volatile ucReserved8[2];
  /* Data Flash Error Status Register - ECC */
  uint32 volatile ulDFERSTR;
  /* Data Flash Error Clear Register - ECC */
  uint8  volatile ucDFERSTC;
  uint8  volatile ucReserved9[11];
  /* Data Flash Error Interrupt Register - ECC */
  uint8  volatile ucDFERRINT;
  uint8  volatile ucReserved10[7];
  /* Test Control Register */
  uint16 volatile usDFTSTCTL;
}Fls_ECCRegType;
/* END Msg(2:3132)-1 */

/* Structure for Fls Init Configuration */
/* Overall Module Configuration Data Structure */
typedef struct STag_Fls_ConfigType
{
  /* Database start value - 0x0EDF0400 */
  uint32 ulStartOfDbToc;
  /* Pointer to job end callback notification */
  P2FUNC (void, FLS_APPL_CODE, pJobEndNotificationPointer)(void);
  /* Pointer to job error callback notification */
  P2FUNC (void, FLS_APPL_CODE, pJobErrorNotificationPointer)(void);
  /* Pointer to ECC SED callback notification */
  P2FUNC (void, FLS_APPL_CODE, pEccSEDNotificationPointer)(uint32);
  /* Pointer to ECC DED callback notification */
  P2FUNC (void, FLS_APPL_CODE, pEccDEDNotificationPointer)(uint32);
  /* Maximum number of Read bytes in Normal Mode */
  uint32 ulFlsSlowModeMaxReadBytes;
  /* Maximum number of Read bytes in Fast Mode */
  uint32 ulFlsFastModeMaxReadBytes;
  /* Default Mode value */
  MemIf_ModeType ddDefaultMode;
} Fls_ConfigType;

typedef struct STag_Fls_GstVarProperties
{
  /* Variable to store the source address */
  P2CONST(volatile uint8, AUTOMATIC, FLS_INIT_DATA) pBufferAddress;
  /* Variable to store the source address */
  P2CONST(volatile uint8, AUTOMATIC, FLS_INIT_DATA) pTempBufferAddress;
  /* Variable to store the target address */
  volatile uint32 GulSrcDestAddress;
  /* Variable to store the read address */
  volatile uint32 GulReadAddress;
  /* Variable to hold the erase/write start address */
  volatile uint32 GulJobStartAddress;
  /* Variable to hold the erase/write end address */
  volatile uint32 GulJobEndAddress;
  /* Variable to hold the length */
  volatile uint32 GulCurrentLength;
  /* Variable to store the requested number of bytes to be processed */
  volatile uint32 GulRequestedLength;
  /* Variable to hold offset by masking the source address with page size */
  volatile uint8 GucOffset;
  /* Variable to store the Flash read type */
  volatile Fls_FlashReadType GucReadType;
  /* Variable to store the requested commands */
  volatile Fls_CommandType GucGenCommand;
  /* Variable to hold the state of FLS software component */
  VAR(volatile Fls_FcuStatusType, FLS_INIT_DATA) GucDFStatus;

} Fls_GstVarProperties;

#endif  /* FLS_TYPES_H */

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
