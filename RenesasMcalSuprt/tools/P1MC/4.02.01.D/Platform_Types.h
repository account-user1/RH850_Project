/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* File name    = Platform_Types.h                                            */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision for platform and compiler dependent types                        */
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
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  03-Aug-2015  : Initial Version
 */
/******************************************************************************/
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR specification release version information for R4.0.3 */
#define PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION     4
#define PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION     0
#define PLATFORM_TYPES_AR_RELEASE_REVISION_VERSION  3

/* AUTOSAR specification version information as per R3.2.2 */
#define PLATFORM_TYPES_AR_MAJOR_VERSION  2
#define PLATFORM_TYPES_AR_MINOR_VERSION  5
#define PLATFORM_TYPES_AR_PATCH_VERSION  0

/* File version information */
#define PLATFORM_TYPES_SW_MAJOR_VERSION  1
#define PLATFORM_TYPES_SW_MINOR_VERSION  0
#define PLATFORM_TYPES_SW_PATCH_VERSION  0

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/*
 * CPU register type width
 */
#define CPU_TYPE_8        8
#define CPU_TYPE_16       16
#define CPU_TYPE_32       32

/*
 * Bit order definition
 */
#define MSB_FIRST         0                 /* Big endian bit ordering       */
#define LSB_FIRST         1                 /* Little endian bit ordering    */

/*
 * Byte order definition
 */
#define HIGH_BYTE_FIRST   0                 /* Big endian byte ordering      */
#define LOW_BYTE_FIRST    1                 /* Little endian byte ordering   */

/*
 * Word order definition
 */
#define HIGH_WORD_FIRST   0                 /* Big endian word ordering      */
#define LOW_WORD_FIRST    1                 /* Little endian word ordering   */


/*
 * Platform type and endianess definitions for X1x.
 */
#define CPU_TYPE            CPU_TYPE_32
#define CPU_BIT_ORDER       LSB_FIRST
#define CPU_BYTE_ORDER      LOW_BYTE_FIRST
#define CPU_WORD_ORDER      LOW_WORD_FIRST

/*
 * Interrupt Mode definitions for X1x.
 */
#define MCAL_ISR_TYPE_TOOLCHAIN  1
#define MCAL_ISR_TYPE_OS         2
#define MCAL_ISR_TYPE_NONE       3

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
/*
 * AUTOSAR integer data types
 */
typedef signed char         sint8;          /*        -128 .. +127           */
typedef unsigned char       uint8;          /*           0 .. 255            */
typedef signed short        sint16;         /*      -32768 .. +32767         */
typedef unsigned short      uint16;         /*           0 .. 65535          */
typedef signed long         sint32;         /* -2147483648 .. +2147483647    */
typedef unsigned long       uint32;         /*           0 .. 4294967295     */
typedef float               float32;
typedef double              float64;

typedef unsigned long       uint8_least;    /* At least 8 bit                */
typedef unsigned long       uint16_least;   /* At least 16 bit               */
typedef unsigned long       uint32_least;   /* At least 32 bit               */
typedef signed long         sint8_least;    /* At least 7 bit + 1 bit sign   */
typedef signed long         sint16_least;   /* At least 15 bit + 1 bit sign  */
typedef signed long         sint32_least;   /* At least 31 bit + 1 bit sign  */
typedef unsigned char       boolean;        /* for use with TRUE/FALSE       */

#ifndef TRUE                                /* conditional check */
  #define TRUE      1
#endif

#ifndef FALSE                               /* conditional check */
  #define FALSE     0
#endif

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

#endif /* PLATFORM_TYPES_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
