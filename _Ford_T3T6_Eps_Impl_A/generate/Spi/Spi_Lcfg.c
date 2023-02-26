/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi                                                         */
/* $Revision: 358825 $                                                        */
/* $Date: 2017-02-08 14:34:45 +0530 (Wed, 08 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015     Renesas Electronics Corporation                      */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Spi link time configurations                            */
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
 * V1.0.0:  01-Aug-2015    : Initial Version
 * V1.0.1:  05-Feb-2016    : As part of P1x-C 4.01.00 release the following
 *                           changes were made:
 *                           1. Copyright information is updated.
 *                           2. As The ecode adapted from P1x following
 *                              structures are redefined.
 *                              a. Spi_GstHWUnitInfo
 * V1.0.2:  14-Nov-2016    : Following changes were made:
 *                           1. As part of ARDAAAF-947, condition for
 *                              generating element 'pEccBaseAddress' in
 *                              'Spi_GstHWUnitInfo' structure is updated.
 *                           2. As part of ARDAAAF-778, QAC Warning
 *                              section is updated and START and END tag for
 *                              Msg(2:3211), Msg(2:3132) and Msg(2:3674) are
 *                              added at respective places.
 *                           3. Software Major version updated.
 *                           4. As part of ARDAAAF-1487, Path dependency of job
 *                              is removed for the checking of 'blIsSynchronous'
 *                              in structure 'Spi_GstHWUnitInfo'.
 *                           5. Changed the memory section declaration for
 *                              Spi_GaaJobResult and Spi_GaaSeqResult from
 *                              SPI_START_SEC_VAR_NO_INIT_8 to
 *                              SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED.
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Spi.h"
#include "Spi_PBTypes.h"
#include "Spi_LTTypes.h"
#include "Spi_Hardware.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR specification version information */
#define SPI_LCFG_C_AR_RELEASE_MAJOR_VERSION  4U
#define SPI_LCFG_C_AR_RELEASE_MINOR_VERSION  0U
#define SPI_LCFG_C_AR_RELEASE_REVISION_VERSION  3U
/* File version information */
#define SPI_LCFG_C_SW_MAJOR_VERSION  2U
#define SPI_LCFG_C_SW_MINOR_VERSION  0U
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_LTTYPES_AR_RELEASE_MAJOR_VERSION != \
         SPI_LCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Release Major Version"
#endif
#if (SPI_LTTYPES_AR_RELEASE_MINOR_VERSION != \
         SPI_LCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Release Minor Version"
#endif
#if (SPI_LTTYPES_AR_RELEASE_REVISION_VERSION != \
         SPI_LCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Release Revision Version"
#endif
#if (SPI_LTTYPES_SW_MAJOR_VERSION != SPI_LCFG_C_SW_MAJOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Software Major Version"
#endif
#if (SPI_LTTYPES_SW_MINOR_VERSION != SPI_LCFG_C_SW_MINOR_VERSION)
  #error "Spi_Lcfg.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0312) A cast is being applied to a pointer addressing   */
/*                 'volatile' data and the cast has the effect of removing    */
/*                  the 'volatile' qualification.                             */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact                                */
/* Reference     : Look for START Msg(4:0312)-1 and                           */
/*                 END Msg(4:0312)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:1290) An integer constant of 'essentially signed' type  */
/*                  is being converted to unsigned type on assignment.        */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The variable which is used of unsigned type and it can not */
/*                 be signed type for module implementation.                  */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact                                */
/* Reference     : Look for START Msg(4:1290)-2 and                           */
/*                 END Msg(4:1290)-2 tags in the code.                        */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0310) Casting to different object pointer type.         */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/*                 REFERENCE - ISO-6.3.4 Cast Operators                       */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0310)-3 and                           */
/*                 END Msg(4:0310)-3 tags in the code.                        */
/******************************************************************************/
/**                         QAC Warnings                                     **/
/******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:2022) Object/function '%s', with external linkage, has  */
/*                          been defined in a header file                     */
/* Rule          : MISRA-C:2004 Rule 8.5                                      */
/* Justification : As per Rule 8.5.There is no definition of objects  or      */
/*                 functions in a header file                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2022)-1 and                           */
/*                 END Msg(2:2022)-1 tags in the code.                        */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:5087) #include statements in a file should only be      */
/*                 preceded by other preprocessor directives or comments.     */
/* Rule          : MISRA-C:2004 Rule 19.1                                     */
/* Justification : This is done as per AUTOSAR Memory Mapping Requirement     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:5087)-2 and                           */
/*                 END Msg(2:5087)-2 tags in the code.                        */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:0314) An expression of type 'pointer-to-object' is      */
/*                  being cast to type 'pointer-to-void'.                     */
/* Rule          : MISRA-C:2004 Rule 10.1                                     */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact                                */
/* Reference     : Look for START Msg(2:0314)-3 and                           */
/*                 END Msg(2:0314)-3 tags in the code.                        */
/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier is defined here but is not   */
/*                 used in this translation unit.                             */
/* Rule         : NA                                                          */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in header file.                              */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-4 and                            */
/*                END Msg(2:3211)-4 tags in the code.                         */
/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:3132) Hard coded 'magic' number, '', used to define the */
/*                 size of an array.                                          */
/* Rule          : NA                                                         */
/* Justification : Hard coded Numbers are added instead of macros for better  */
/*                 readability.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3132)-5 and                           */
/*                 END Msg(2:3132)-5 tags in the code.                        */
/******************************************************************************/
/* 6. QAC Warning:                                                            */
/* Message       : (2:3674) Array size defined implicitly by the number of    */
/*                 initializers.                                              */
/* Rule          : NA                                                         */
/* Justification : Array size vary in different configurations.               */
/*                 So giving fixed array size is not possible.                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3674)-6 and                           */
/*                 END Msg(2:3674)-6 tags in the code.                        */
/******************************************************************************/
#define SPI_START_SEC_VAR_NO_INIT_8
#include "MemMap.h"
/*QAC Warning:START Msg(2:2022)-1 */
/*QAC Warning:START Msg(2:3211)-4 */
/*QAC Warning:START Msg(2:3132)-5 */
/* Global RAM bit array for cancel status of sequences */
VAR(uint8, SPI_VAR_NOINIT) Spi_GaaSeqCancel[4];
VAR(uint8, SPI_VAR_NOINIT) Spi_GaaSeqCurrentHWUnit[27];
/* Global RAM area to count repeated jobs */
VAR(uint8, SPI_VAR_NOINIT) Spi_GaaJobCount[27];
#define SPI_STOP_SEC_VAR_NO_INIT_8
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
#define SPI_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
/* Global RAM Area for Job result */
VAR(Spi_JobResultType, SPI_CONFIG_DATA) Spi_GaaJobResult[27];
/* Global RAM Area for Sequence result */
VAR(Spi_SeqResultType, SPI_CONFIG_DATA) Spi_GaaSeqResult[27];
/*END Msg(2:2022)-1 */
/*END Msg(2:3211)-4 */
/*END Msg(2:3132)-5 */
#define SPI_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
#define SPI_START_SEC_VAR_NO_INIT_16
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
/* Global RAM area for job queue for both direct access mode and FIFO mode*/
/*QAC Warning:START Msg(2:2022)-1 */
/*QAC Warning:START Msg(2:3211)-4 */
/*QAC Warning:START Msg(2:3132)-5 */
VAR(Spi_JobType, SPI_VAR_NOINIT) Spi_GaaJobQueue[27];
/*END Msg(2:2022)-1 */
/*END Msg(2:3211)-4 */
/*END Msg(2:3132)-5 */
#define SPI_STOP_SEC_VAR_NO_INIT_16
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
#define SPI_START_SEC_CONST_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
/*QAC Warning:START Msg(2:3211)-4 */
/*QAC Warning:START Msg(2:3674)-6 */
/* Array for hardware unit information */
CONST(Spi_HWUnitInfo, SPI_CONST) Spi_GstHWUnitInfo[] =
/*END Msg(2:3211)-4 */
/*END Msg(2:3674)-6 */
{
  /*MISRA Violation:START Msg(4:0310)-3 */
  /*MISRA Violation:START Msg(4:0312)-1 */
  /*QAC Warning:START Msg(2:0314)-3 */
  /* Index: 0 - CSIH0 */
  {
    /* pHwMainUserBaseAddress */
    (P2VAR(Spi_MainUserRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH0,
    /* pHwMainOsBaseAddress */
    (P2VAR(Spi_MainOsRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH0.CTL1,
    /* pHwUserBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH0.MCTL1,
    /* pHwOsBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH0.MCTL0,
    /* pRxIntCntlAddress */
    &EIC87,
    /* pTxIntCntlAddress */
    &EIC88,
    /* pErrorIntCntlAddress */
    &EIC86,
    /* pRxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* pTxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* pErrorImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* ulRxImrMask */
    0xFF7FFFFFUL,
    /* ulTxImrMask */
    0xFEFFFFFFUL,
    /* ulErrorImrMask */
    0xFFBFFFFFUL,
    /* ucHWUnit */
    /* MISRA Violation: START Msg (4:1290)-2 */
    0,
    /* END Msg(4:1290)-2 */
  },
  /* Index: 1 - CSIH1 */
  {
    /* pHwMainUserBaseAddress */
    (P2VAR(Spi_MainUserRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH1,
    /* pHwMainOsBaseAddress */
    (P2VAR(Spi_MainOsRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH1.CTL1,
    /* pHwUserBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH1.MCTL1,
    /* pHwOsBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH1.MCTL0,
    /* pRxIntCntlAddress */
    &EIC91,
    /* pTxIntCntlAddress */
    &EIC92,
    /* pErrorIntCntlAddress */
    &EIC90,
        /* pRxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* pTxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* pErrorImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* ulRxImrMask */
    0xF7FFFFFFUL,
    /* ulTxImrMask */
    0xEFFFFFFFUL,
    /* ulErrorImrMask */
    0xFBFFFFFFUL,
    /* ucHWUnit */
    /* MISRA Violation: START Msg (4:1290)-2 */
    1,
    /* END Msg(4:1290)-2 */
  },
  /* Index: 2 - CSIH2 */
  {
    /* pHwMainUserBaseAddress */
    (P2VAR(Spi_MainUserRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH2,
    /* pHwMainOsBaseAddress */
    (P2VAR(Spi_MainOsRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH2.CTL1,
    /* pHwUserBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH2.MCTL1,
    /* pHwOsBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH2.MCTL0,
    /* pRxIntCntlAddress */
    &EIC95,
    /* pTxIntCntlAddress */
    &EIC96,
    /* pErrorIntCntlAddress */
    &EIC94,
    /* pRxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* pTxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR3,
    /* pErrorImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR2,
    /* ulRxImrMask */
    0x7FFFFFFFUL,
    /* ulTxImrMask */
    0xFFFFFFFEUL,
    /* ulErrorImrMask */
    0xBFFFFFFFUL,
    /* ucHWUnit */
    /* MISRA Violation: START Msg (4:1290)-2 */
    2,
    /* END Msg(4:1290)-2 */
  },
  /* Index: 3 - CSIH3 */
  {
    /* pHwMainUserBaseAddress */
    (P2VAR(Spi_MainUserRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH3,
    /* pHwMainOsBaseAddress */
    (P2VAR(Spi_MainOsRegs, AUTOMATIC,SPI_CONFIG_DATA))&CSIH3.CTL1,
    /* pHwUserBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH3.MCTL1,
    /* pHwOsBufferAddress */
    (P2VAR(void, AUTOMATIC, SPI_CONFIG_DATA))&CSIH3.MCTL0,
    /* pRxIntCntlAddress */
    &EIC99,
    /* pTxIntCntlAddress */
    &EIC100,
    /* pErrorIntCntlAddress */
    &EIC98,
    /* pRxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR3,
    /* pTxImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR3,
    /* pErrorImrAddress */
    (P2VAR(uint32, AUTOMATIC, SPI_CONFIG_DATA))&IMR3,
    /* ulRxImrMask */
    0xFFFFFFF7UL,
    /* ulTxImrMask */
    0xFFFFFFEFUL,
    /* ulErrorImrMask */
    0xFFFFFFFBUL,
    /* ucHWUnit */
    /* MISRA Violation: START Msg (4:1290)-2 */
    3,
    /* END Msg(4:1290)-2 */
  }
  /* END Mag(4:0310)-3 */
  /* END Mag(4:0312)-1 */
  /* END Mag(2:0314)-3 */
};
/*QAC Warning:START Msg(2:3211)-4 */
/*QAC Warning:START Msg(2:3674)-6 */
/* Array structure for Sequence cancel */
CONST(Spi_SeqProcessType, SPI_CONST) Spi_GstSeqProcess[] =
/*END Msg(2:3211)-4 */
/*END Msg(2:3674)-6 */
{
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x1
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x2
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x4
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x8
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x10
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x20
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x40
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x0,
    /*ucCancelMask*/
        0x80
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x1
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x2
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x4
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x8
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x10
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x20
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x40
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x1,
    /*ucCancelMask*/
        0x80
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x1
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x2
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x4
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x8
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x10
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x20
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x40
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x2,
    /*ucCancelMask*/
        0x80
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x3,
    /*ucCancelMask*/
        0x1
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x3,
    /*ucCancelMask*/
        0x2
    /* END Msg(4:1290)-2 */
  },
  {
    /* MISRA Violation: START Msg (4:1290)-2 */
    /*ucCancelOffset*/
        0x3,
    /*ucCancelMask*/
        0x4
    /* END Msg(4:1290)-2 */
  }
};
#define SPI_STOP_SEC_CONST_UNSPECIFIED
/*QAC Warning:START Msg(2:5087)-2 */
#include "MemMap.h"
/*END Msg(2:5087)-2 */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

