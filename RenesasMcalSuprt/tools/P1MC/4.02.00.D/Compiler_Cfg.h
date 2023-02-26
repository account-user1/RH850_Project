/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Compiler_Cfg.h                                              */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2016 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains compiler macros                                         */
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
 *
 * V1.0.1:  21-Sep-2016  : 1.As part of ARDAAAF-479, to adapt internal functions
 *                         CORTST_PRIVATE_CODE is defined.
 *                         2.As part of ARDAAAF-543, to adapt internal functions
 *                         FLSTST_PRIVATE_CODE is defined and Copyright Updated.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#ifndef COMPILER_CFG_H
#define COMPILER_CFG_H

/*******************************************************************************
**                      Version Information                                  **
*******************************************************************************/
/* AUTOSAR specification release version information for R4.0.3 */
#define COMPILER_CFG_AR_RELEASE_MAJOR_VERSION     4
#define COMPILER_CFG_AR_RELEASE_MINOR_VERSION     0
#define COMPILER_CFG_AR_RELEASE_REVISION_VERSION  3

/* AUTOSAR specification version information as per R3.2.2 */
#define COMPILER_CFG_AR_MAJOR_VERSION  2
#define COMPILER_CFG_AR_MINOR_VERSION  2
#define COMPILER_CFG_AR_PATCH_VERSION  0
#define COMPILER_CFG_SW_MAJOR_VERSION  1
#define COMPILER_CFG_SW_MINOR_VERSION  0
#define COMPILER_CFG_SW_PATCH_VERSION  0

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
 **                      Configuration data                                   **
*******************************************************************************/
/*
 * The following memory and pointer classes can be configured per module.
 * These #defines are passed to the compiler abstraction macros in Compiler.h
 *
 * Note:
 * module internal functions (statics) that get into one section
 * (together with API) shall fit into one page.
 */

/* ---------------------------------------------------------------------------*/
/*                   MCU                                                      */
/* ---------------------------------------------------------------------------*/

#define MCU_PUBLIC_CODE                /* API functions                       */
#define MCU_PUBLIC_CONST               /* API constants                       */

#define MCU_PRIVATE_CODE               /* Internal functions                  */

#define MCU_PRIVATE_DATA               /* Module internal data                */
#define MCU_PRIVATE_CONST              /* Internal ROM Data                   */

#define MCU_APPL_CODE                  /* callbacks of the Application        */
#define MCU_APPL_CONST                 /* Applications' ROM Data              */
#define MCU_APPL_DATA                  /* Applications' RAM Data              */
#define MCU_FAST_DATA                  /* 'Near' RAM Data                     */

#define MCU_FAST_CODE                   /* API functions                       */
#define MCU_FAST_CONST                  /* API constants                       */
#define MCU_FAST_DATA                   /* API constants                       */

#define MCU_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define MCU_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define MCU_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define MCU_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define MCU_CONST                      /* Data Constants                      */
#define MCU_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define MCU_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   GPT                                                      */
/* ---------------------------------------------------------------------------*/
#define GPT_PUBLIC_CODE                /* API functions                       */
#define GPT_PUBLIC_CONST               /* API constants                       */

#define GPT_PRIVATE_CODE               /* Internal functions                  */

#define GPT_PRIVATE_DATA               /* Module internal data                */
#define GPT_PRIVATE_CONST              /* Internal ROM Data                   */

#define GPT_APPL_CODE                  /* callbacks of the Application        */
#define GPT_APPL_CONST                 /* Applications' ROM Data              */
#define GPT_APPL_DATA                  /* Applications' RAM Data              */
#define GPT_FAST_DATA                  /* 'Near' RAM Data                     */

#define GPT_FAST_CODE                   /* API functions                       */
#define GPT_FAST_CONST                  /* API constants                       */
#define GPT_FAST_DATA                   /* API constants                       */

#define GPT_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define GPT_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define GPT_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define GPT_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define GPT_CONST                      /* Data Constants                      */
#define GPT_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define GPT_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   WDG   DRIVER A                                           */
/* ---------------------------------------------------------------------------*/

#define WDG_59_DRIVERA_PUBLIC_CODE        /* API functions                    */
#define WDG_59_DRIVERA_PUBLIC_CONST       /* API constants                    */

#define WDG_59_DRIVERA_PRIVATE_CODE       /* Internal functions               */

#define WDG_59_DRIVERA_PRIVATE_DATA       /* Module internal data             */
#define WDG_59_DRIVERA_PRIVATE_CONST      /* Internal ROM Data                */

#define WDG_59_DRIVERA_APPL_CODE          /* callbacks of the Application     */
#define WDG_59_DRIVERA_APPL_CONST         /* Applications' ROM Data           */
#define WDG_59_DRIVERA_APPL_DATA          /* Applications' RAM Data           */
#define WDG_59_DRIVERA_FAST_DATA          /* 'Near' RAM Data                  */

#define WDG_59_DRIVERA_FAST_CODE           /* API functions                    */
#define WDG_59_DRIVERA_FAST_CONST          /* API constants                    */
#define WDG_59_DRIVERA_FAST_DATA           /* API constants                    */

#define WDG_59_DRIVERA_CONFIG_CONST       /* Desc. Tables -> Config-dependent */
#define WDG_59_DRIVERA_CONFIG_DATA        /* Config. dependent (reg. size)
                                             data                             */

#define WDG_59_DRIVERA_INIT_DATA          /* Data which is initialized during
                                             Startup                          */
#define WDG_59_DRIVERA_NOINIT_DATA        /* Data which is not initialized
                                             during Startup                   */
#define WDG_59_DRIVERA_CONST              /* Data Constants                   */
#define WDG_59_DRIVERA_VAR             /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define WDG_59_DRIVERA_VAR_NOINIT      /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   WDG   DRIVER B                                           */
/* ---------------------------------------------------------------------------*/

#define WDG_59_DRIVERB_PUBLIC_CODE        /* API functions                    */
#define WDG_59_DRIVERB_PUBLIC_CONST       /* API constants                    */

#define WDG_59_DRIVERB_PRIVATE_CODE       /* Internal functions               */

#define WDG_59_DRIVERB_PRIVATE_DATA       /* Module internal data             */
#define WDG_59_DRIVERB_PRIVATE_CONST      /* Internal ROM Data                */

#define WDG_59_DRIVERB_APPL_CODE          /* callbacks of the Application     */
#define WDG_59_DRIVERB_APPL_CONST         /* Applications' ROM Data           */
#define WDG_59_DRIVERB_APPL_DATA          /* Applications' RAM Data           */
#define WDG_59_DRIVERB_FAST_DATA          /* 'Near' RAM Data                  */

#define WDG_59_DRIVERB_FAST_CODE           /* API functions                    */
#define WDG_59_DRIVERB_FAST_CONST          /* API constants                    */
#define WDG_59_DRIVERB_FAST_DATA           /* API constants                    */

#define WDG_59_DRIVERB_CONFIG_CONST       /* Desc. Tables -> Config-dependent */
#define WDG_59_DRIVERB_CONFIG_DATA        /* Config. dependent (reg. size)
                                             data                             */

#define WDG_59_DRIVERB_INIT_DATA          /* Data which is initialized during
                                             Startup                          */
#define WDG_59_DRIVERB_NOINIT_DATA        /* Data which is not initialized
                                             during Startup                   */
#define WDG_59_DRIVERB_CONST              /* Data Constants                   */
#define WDG_59_DRIVERB_VAR             /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define WDG_59_DRIVERB_VAR_NOINIT      /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   PORT                                                     */
/* ---------------------------------------------------------------------------*/

#define PORT_PUBLIC_CODE                /* API functions                      */
#define PORT_PUBLIC_CONST               /* API constants                      */

#define PORT_PRIVATE_CODE               /* Internal functions                 */

#define PORT_PRIVATE_DATA               /* Module internal data               */
#define PORT_PRIVATE_CONST              /* Internal ROM Data                  */

#define PORT_APPL_CODE                  /* callbacks of the Application       */
#define PORT_APPL_CONST                 /* Applications' ROM Data             */
#define PORT_APPL_DATA                  /* Applications' RAM Data             */
#define PORT_FAST_DATA                  /* 'Near' RAM Data                    */

#define PORT_FAST_CODE                   /* API functions                      */
#define PORT_FAST_CONST                  /* API constants                      */
#define PORT_FAST_DATA                   /* API constants                      */

#define PORT_CONFIG_CONST               /* Desc. Tables -> Config-dependent   */
#define PORT_CONFIG_DATA                /* Config. dependent (reg. size) data */

#define PORT_INIT_DATA                  /* Data which is initialized during
                                           Startup                            */
#define PORT_NOINIT_DATA                /* Data which is not initialized during
                                           Startup                            */
#define PORT_CONST                      /* Data Constants                     */
#define PORT_VAR                        /* Memory class for global variables  */
                                        /* which are initialized after every  */
                                        /* reset                              */
#define PORT_VAR_NOINIT                 /* Memory class for global variables  */
                                        /* which are initialized by driver    */

/* ---------------------------------------------------------------------------*/
/*                   DIO                                                      */
/* ---------------------------------------------------------------------------*/

#define DIO_PUBLIC_CODE                /* API functions                       */
#define DIO_PUBLIC_CONST               /* API constants                       */

#define DIO_PRIVATE_CODE               /* Internal functions                  */

#define DIO_PRIVATE_DATA               /* Module internal data                */
#define DIO_PRIVATE_CONST              /* Internal ROM Data                   */

#define DIO_APPL_CODE                  /* callbacks of the Application        */
#define DIO_APPL_CONST                 /* Applications' ROM Data              */
#define DIO_APPL_DATA                  /* Applications' RAM Data              */
#define DIO_FAST_DATA                  /* 'Near' RAM Data                     */

#define DIO_FAST_CODE                   /* API functions                       */
#define DIO_FAST_CONST                  /* API constants                       */
#define DIO_FAST_DATA                   /* API constants                       */

#define DIO_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define DIO_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define DIO_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define DIO_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define DIO_CONST                      /* Data Constants                      */
#define DIO_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define DIO_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   FEE                                                      */
/* ---------------------------------------------------------------------------*/

#define FEE_PUBLIC_CODE                /* API functions                       */
#define FEE_PUBLIC_CONST               /* API constants                       */

#define FEE_PRIVATE_CODE               /* Internal functions                  */

#define FEE_PRIVATE_DATA               /* Module internal data                */
#define FEE_PRIVATE_CONST              /* Internal ROM Data                   */

#define FEE_APPL_CODE                  /* callbacks of the Application        */
#define FEE_APPL_CONST                 /* Applications' ROM Data              */
#define FEE_APPL_DATA                  /* Applications' RAM Data              */
#define FEE_FAST_DATA                  /* 'Near' RAM Data                     */

#define FEE_FAST_CODE                   /* API functions                       */
#define FEE_FAST_CONST                  /* API constants                       */
#define FEE_FAST_DATA                   /* API constants                       */

#define FEE_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define FEE_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define FEE_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define FEE_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define FEE_CONST                      /* Data Constants                      */
#define FEE_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define FEE_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   PWM                                                      */
/* ---------------------------------------------------------------------------*/

#define PWM_PUBLIC_CODE                /* API functions                       */
#define PWM_PUBLIC_CONST               /* API constants                       */

#define PWM_PRIVATE_CODE               /* Internal functions                  */

#define PWM_PRIVATE_DATA               /* Module internal data                */
#define PWM_PRIVATE_CONST              /* Internal ROM Data                   */

#define PWM_APPL_CODE                  /* callbacks of the Application        */
#define PWM_APPL_CONST                 /* Applications' ROM Data              */
#define PWM_APPL_DATA                  /* Applications' RAM Data              */
#define PWM_FAST_DATA                  /* 'Near' RAM Data                     */

#define PWM_FAST_CODE                   /* API functions                       */
#define PWM_FAST_CONST                  /* API constants                       */
#define PWM_FAST_DATA                   /* API constants                       */

#define PWM_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define PWM_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define PWM_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define PWM_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define PWM_CONST                      /* Data Constants                      */
#define PWM_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define PWM_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   SPI                                                      */
/* ---------------------------------------------------------------------------*/

#define SPI_PUBLIC_CODE                /* API functions                       */
#define SPI_PUBLIC_CONST               /* API constants                       */

#define SPI_PRIVATE_CODE               /* Internal functions                  */

#define SPI_PRIVATE_DATA               /* Module internal data                */
#define SPI_PRIVATE_CONST              /* Internal ROM Data                   */

#define SPI_APPL_CODE                  /* callbacks of the Application        */
#define SPI_APPL_CONST                 /* Applications' ROM Data              */
#define SPI_APPL_DATA                  /* Applications' RAM Data              */
#define SPI_FAST_DATA                  /* 'Near' RAM Data                     */

#define SPI_FAST_CODE                   /* API functions                       */
#define SPI_FAST_CONST                  /* API constants                       */
#define SPI_FAST_DATA                   /* API constants                       */

#define SPI_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define SPI_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define SPI_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define SPI_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define SPI_CONST                      /* Data Constants                      */
#define SPI_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define SPI_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   ADC                                                      */
/* ---------------------------------------------------------------------------*/

#define ADC_PUBLIC_CODE                /* API functions                       */
#define ADC_PUBLIC_CONST               /* API constants                       */

#define ADC_PRIVATE_CODE               /* Internal functions                  */

#define ADC_PRIVATE_DATA               /* Module internal data                */
#define ADC_PRIVATE_CONST              /* Internal ROM Data                   */

#define ADC_APPL_CODE                  /* callbacks of the Application        */
#define ADC_APPL_CONST                 /* Applications' ROM Data              */
#define ADC_APPL_DATA                  /* Applications' RAM Data              */
#define ADC_FAST_DATA                  /* 'Near' RAM Data                     */

#define ADC_FAST_CODE                   /* API functions                       */
#define ADC_FAST_CONST                  /* API constants                       */
#define ADC_FAST_DATA                   /* API constants                       */

#define ADC_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define ADC_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define ADC_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define ADC_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define ADC_CONST                      /* Data Constants                      */
#define ADC_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define ADC_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   ICU                                                      */
/* ---------------------------------------------------------------------------*/

#define ICU_PUBLIC_CODE                /* API functions                       */
#define ICU_PUBLIC_CONST               /* API constants                       */

#define ICU_PRIVATE_CODE               /* Internal functions                  */

#define ICU_PRIVATE_DATA               /* Module internal data                */
#define ICU_PRIVATE_CONST              /* Internal ROM Data                   */

#define ICU_APPL_CODE                  /* callbacks of the Application        */
#define ICU_APPL_CONST                 /* Applications' ROM Data              */
#define ICU_APPL_DATA                  /* Applications' RAM Data              */
#define ICU_FAST_DATA                  /* 'Near' RAM Data                     */

#define ICU_FAST_CODE                   /* API functions                       */
#define ICU_FAST_CONST                  /* API constants                       */
#define ICU_FAST_DATA                   /* API constants                       */

#define ICU_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define ICU_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define ICU_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define ICU_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define ICU_CONST                      /* Data Constants                      */
#define ICU_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define ICU_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */


/* -------------------------------------------------------------------------- */
/*             FlexRay Driver                                                 */
/* -------------------------------------------------------------------------- */
#define FR_PRIVATE_CODE                /* module internal functions           */
#define FR_PRIVATE_CONST               /* module internal consts              */
#define FR_FAST_DATA                   /* module internal data in fast RAM    */
#define FR_PRIVATE_DATA                /* module internal data                */

#define FR_PUBLIC_CODE                 /* API functions                       */
#define FR_PUBLIC_CONST                /* API constants                       */
#define FR_CODE
#define FR_APPL_CODE                   /* callbacks of the Application        */
#define FR_APPL_CONST                  /* Applications' ROM Data              */

#define FR_FAST_CODE                   /* API functions                        */
#define FR_FAST_CONST                  /* API constants                        */
#define FR_FAST_DATA                   /* API constants                        */

#define FR_INIT_DATA                   /* module variables                    */
#define FR_CONST                       /* module constants                    */

#define FR_NOINIT_DATA                 /* module variables that are           */
                                              /* not initialized              */
#define FR_VAR_POWER_ON_INIT           /* module variables that are           */
                                             /* initialized on Powerup        */
#define FR_VAR                         /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define FR_VAR_NOINIT                  /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/*
 * the applications' data blocks must have the same classifier
 * like the EEPIF expects
 */
#define FR_APPL_DATA              /* Applications' Ram Data                   */
#define FR_CONFIG_CONST           /* Descriptor Tables -> Config-dependent    */
#define FR_CONFIG_DATA            /* Configuration dependent (reg. size) data */
#define FR_DATA                   /* Global Variables                         */

/* ---------------------------------------------------------------------------*/
/*                   CAN                                                      */
/* ---------------------------------------------------------------------------*/

#define CAN_RSCAN_PUBLIC_CODE          /* API functions                       */
#define CAN_RSCAN_PUBLIC_CONST         /* API constants                       */

#define CAN_RSCAN_PRIVATE_CODE         /* Internal functions                  */

#define CAN_RSCAN_PRIVATE_DATA         /* Module internal data                */
#define CAN_RSCAN_PRIVATE_CONST        /* Internal ROM Data                   */

#define CAN_RSCAN_APPL_CODE            /* callbacks of the Application        */
#define CAN_RSCAN_APPL_CONST           /* Applications' ROM Data              */
#define CAN_RSCAN_APPL_DATA            /* Applications' RAM Data              */
#define CAN_RSCAN_FAST_DATA            /* 'Near' RAM Data                     */

#define CAN_FAST_CODE                   /* API functions                       */
#define CAN_FAST_CONST                  /* API constants                       */
#define CAN_FAST_DATA                   /* API constants                       */

#define CAN_RSCAN_CONFIG_CONST         /* Desc. Tables -> Config-dependent    */
#define CAN_RSCAN_CONFIG_DATA          /* Config. dependent (reg. size) data  */

#define CAN_RSCAN_INIT_DATA            /* Data which is initialized during
                                          Startup                             */
#define CAN_RSCAN_NOINIT_DATA          /* Data which is not initialized during
                                          Startup                             */
#define CAN_RSCAN_CONST                /* Data Constants                      */
#define CAN_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define CAN_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */


/* ---------------------------------------------------------------------------*/
/*                   LIN                                                      */
/* ---------------------------------------------------------------------------*/

#define LIN_PUBLIC_CODE                /* API functions                       */
#define LIN_PUBLIC_CONST               /* API constants                       */

#define LIN_PRIVATE_CODE               /* Internal functions                  */

#define LIN_PRIVATE_DATA               /* Module internal data                */
#define LIN_PRIVATE_CONST              /* Internal ROM Data                   */

#define LIN_APPL_CODE                  /* callbacks of the Application        */
#define LIN_APPL_CONST                 /* Applications' ROM Data              */
#define LIN_APPL_DATA                  /* Applications' RAM Data              */
#define LIN_FAST_DATA                  /* 'Near' RAM Data                     */

#define LIN_FAST_CODE                   /* API functions                       */
#define LIN_FAST_CONST                  /* API constants                       */
#define LIN_FAST_DATA                   /* API constants                       */

#define LIN_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define LIN_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define LIN_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define LIN_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define LIN_CONST                      /* Data Constants                      */
#define LIN_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define LIN_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   FLS                                                      */
/* ---------------------------------------------------------------------------*/

#define FLS_PUBLIC_CODE                /* API functions                       */
#define FLS_PUBLIC_CONST               /* API constants                       */

#define FLS_PRIVATE_CODE               /* Internal functions                  */

#define FLS_PRIVATE_DATA               /* Module internal data                */
#define FLS_PRIVATE_CONST              /* Internal ROM Data                   */

#define FLS_APPL_CODE                  /* callbacks of the Application        */
#define FLS_APPL_CONST                 /* Applications' ROM Data              */
#define FLS_APPL_DATA                  /* Applications' RAM Data              */
#define FLS_FAST_DATA                  /* 'Near' RAM Data                     */

#define FLS_FAST_CODE                   /* API functions                       */
#define FLS_FAST_CONST                  /* API constants                       */
#define FLS_FAST_DATA                   /* API constants                       */

#define FLS_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define FLS_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define FLS_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define FLS_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define FLS_CONST                      /* Data Constants                      */
#define FLS_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define FLS_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */

/* ---------------------------------------------------------------------------*/
/*                   FLSTST                                                   */
/* ---------------------------------------------------------------------------*/

#define FLSTST_PUBLIC_CODE                /* API functions                    */
#define FLSTST_PRIVATE_CODE               /* Internal functions               */
#define FLSTST_PUBLIC_CONST               /* API constants                    */

#define FLSTST_APPL_CODE                  /* callbacks of the Application        */
#define FLSTST_APPL_CONST                 /* Applications' ROM Data              */
#define FLSTST_APPL_DATA                  /* Applications' RAM Data              */
#define FLSTST_FAST_DATA                  /* 'Near' RAM Data                     */

#define FLSTST_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define FLSTST_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define FLSTST_INIT_DATA                  /* Data which is initialized during    */
                                          /*Startup                              */
#define FLSTST_NOINIT_DATA                /* Data which is not initialized during */
                                          /*Startup                              */
#define FLSTST_CONST                      /* Data Constants                      */

/* ---------------------------------------------------------------------------*/
/*                   CORTST                                                   */
/* ---------------------------------------------------------------------------*/

#define CORTST_PUBLIC_CODE             /* API functions                       */
#define CORTST_PRIVATE_CODE            /* Internal functions                  */

#define CORTST_APPL_CODE               /* callbacks of the Application        */
#define CORTST_APPL_DATA               /* Applications' RAM Data              */

#define CORTST_CONFIG_CONST            /* Desc. Tables -> Config-dependent    */
#define CORTST_CONFIG_DATA             /* Config. dependent (reg. size) data  */

#define CORTST_INIT_DATA               /* Data which is initialized during    */
                                       /* Startup                             */
#define CORTST_NOINIT_DATA             /* Data which is not initialized during*/
                                       /* Startup                             */
#define CORTST_CONST                   /* Data Constants                      */

#define CORTST_FAST_CODE               /* API functions                       */
#define CORTST_FAST_CONST              /* API constants                       */
#define CORTST_FAST_DATA               /* API constants                       */

/* ---------------------------------------------------------------------------*/
/*                   RAMTST                                                   */
/* ---------------------------------------------------------------------------*/

#define RAMTST_PUBLIC_CODE                /* API functions                       */
#define RAMTST_PUBLIC_CONST               /* API constants                       */

#define RAMTST_PRIVATE_CODE               /* Internal functions                  */

#define RAMTST_PRIVATE_DATA               /* Module internal data                */
#define RAMTST_PRIVATE_CONST              /* Internal ROM Data                   */

#define RAMTST_APPL_CODE                  /* callbacks of the Application        */
#define RAMTST_APPL_CONST                 /* Applications' ROM Data              */
#define RAMTST_APPL_DATA                  /* Applications' RAM Data              */
#define RAMTST_FAST_DATA                  /* 'Near' RAM Data                     */


#define RAMTST_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define RAMTST_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define RAMTST_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define RAMTST_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define RAMTST_CONST                      /* Data Constants                      */

/* ---------------------------------------------------------------------------*/
/*                   ETH                                                      */
/* ---------------------------------------------------------------------------*/

#define ETH_59_PUBLIC_CODE                /* API functions                       */
#define ETH_59_PUBLIC_CONST               /* API constants                       */

#define ETH_59_PRIVATE_CODE               /* Internal functions                  */

#define ETH_59_PRIVATE_DATA               /* Module internal data                */
#define ETH_59_PRIVATE_CONST              /* Internal ROM Data                   */

#define ETH_59_APPL_CODE                  /* callbacks of the Application        */
#define ETH_59_APPL_CONST                 /* Applications' ROM Data              */
#define ETH_59_APPL_DATA                  /* Applications' RAM Data              */
#define ETH_59_FAST_DATA                  /* 'Near' RAM Data                     */

#define ETH_59_FAST_CODE                   /* API functions                       */
#define ETH_59_FAST_CONST                  /* API constants                       */
#define ETH_59_FAST_DATA                   /* API constants                       */

#define ETH_59_CONFIG_CONST               /* Desc. Tables -> Config-dependent    */
#define ETH_59_CONFIG_DATA                /* Config. dependent (reg. size) data  */

#define ETH_59_INIT_DATA                  /* Data which is initialized during
                                          Startup                             */
#define ETH_59_NOINIT_DATA                /* Data which is not initialized during
                                          Startup                             */
#define ETH_59_CONST                      /* Data Constants                      */
#define ETH_59_VAR                        /* Memory class for global variables   */
                                       /* which are initialized after every   */
                                       /* reset                               */
#define ETH_59_VAR_NOINIT                 /* Memory class for global variables   */
                                       /* which are initialized by driver     */


/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/


#endif /* COMPILER_CFG_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
