/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Fls_PBcfg.c                                                 */
/* $Revision: 443760 $                                                        */
/* $Date: 2017-07-25 15:23:42 +0530 (Tue, 25 Jul 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains post-build time parameters.                             */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
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
 * V1.0.0:  06-Aug-2015    : Initial Version
 *
 * V1.0.1:  27-Mar-2016    : As part of P1x-C V4.01.00, following changes are
 *                           done:
 *                           1) CopyRight information is updated.
 *                           2) Removed parsing of Code Flash related parameters
 *                           3) Included Fls_Cbk.h in include section.
 *
 * V1.0.2:  27-Feb-2017    :1)As part of ARDAAAF-770,
 *                            1.QAC Warnings are Justified.
 *                            2.Added justification for qac warning Msg(2:0862)
 *                          2)W.r.t ARDAAAF-1482,
 *                            FlsJobEndNotification, FlsJobErrorNotification,
 *                            FlsEccSedNotification and FlsEccDedNotification,
 *                            FlsWriteVerifyErrorInterface are updated
 * Ver4.02.00.D_FLS_HF001 : 25-July-2017 : Related Tickets :
 *                        JIRA #ARDAAAF-2806: Modification Info :
 *                        1. Changed the parameter name  FlsFdlCpuFrequency
 *                           to FlsCpuFrequency
 *                        2. Modified "Destination_Ref" path for
 *                           "FlsCpuFrequency"
 *                        : Modification Info Ends :
 * Ver4.02.00.D_FLS_HF002 : 31-July-2017 : Related Tickets :
 *                        JIRA #ARDAAAF-2823: Modification Info :
 *                        ValidateParamMap()check done for optional parmaters
 *                        FlsJobErrorNotification, FlsJobEndNotification,
 *                        FlsEccSedNotification, FlsEccDedNotification before
 *                        filling the configuration structure
 *                        Fls_GstConfiguration[].
 *                        : Modification Info Ends :
 */
/******************************************************************************/
/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Fls.h"
#include "Fls_PBTypes.h"
#include "Fls_Cbk.h"
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:5087)  statements in a file should only be      */
/*                 preceded by other preprocessor directives or comments.     */
/* Rule          : MISRA-C:2004 Rule 19.1                                     */
/* Justification : This is done as per AUTOSAR Memory Mapping Requirement     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:5087)-1 and                           */
/*                 END Msg(4:5087)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message      : (2:3211) The global identifier 'Fls_GpConfigPtr' is defined */
/*                here but is not used in this translation unit.              */
/* Justification: As per AUTOSAR, all global variables extern declaration     */
/*                shall be given in Fls_Ram.h                                 */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(2:3211)-1 and                            */
/*                END Msg(2:3211)-1 tags in the code.                         */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:2022) This is a tentative definition and according to   */
/*                 the ISO:C Standard, the object will automatically be       */
/*                 initialized to zero.                                       */
/* Rule          : No rules applicable                                        */
/* Justification : The expression has no reliance on the effects of integral  */
/*                 promotion.                                                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:2022)-2 and                           */
/*                 END Msg(2:2022)-2 tags in the code.                        */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:3132) Hard coded 'magic' number, '', used to define the */
/*                 size of an array.                                          */
/* Rule          : MISRA-C:2004 Message 3132                                  */
/* Justification : Hard coded Numbers are added instead of macros for better  */
/*                 readability.                                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(2:3132)-3 and                           */
/*                 END Msg(2:3132)-3 tags in the code.                        */
/******************************************************************************/
/* 4.QAC Warning :                                                            */
/* Message       :(2:0862)  "MemMap.h" directive is redundant.        */
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
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR Release version information */
#define FLS_PBCFG_C_AR_RELEASE_MAJOR_VERSION \
                                        FLS_AR_RELEASE_MAJOR_VERSION_VALUE
#define FLS_PBCFG_C_AR_RELEASE_MINOR_VERSION \
                                        FLS_AR_RELEASE_MINOR_VERSION_VALUE
#define FLS_PBCFG_C_AR_RELEASE_REVISION_VERSION \
                                        FLS_AR_RELEASE_REVISION_VERSION_VALUE
/* File version information */
#define FLS_PBCFG_C_SW_MAJOR_VERSION     FLS_SW_MAJOR_VERSION_VALUE
#define FLS_PBCFG_C_SW_MINOR_VERSION     FLS_SW_MINOR_VERSION_VALUE
/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (FLS_PBTYPES_AR_RELEASE_MAJOR_VERSION != \
                                 FLS_PBCFG_C_AR_RELEASE_MAJOR_VERSION)
  #error "Fls_PBcfg.c : Mismatch in Release Major Version"
#endif
#if (FLS_PBTYPES_AR_RELEASE_MINOR_VERSION != \
                                 FLS_PBCFG_C_AR_RELEASE_MINOR_VERSION)
  #error "Fls_PBcfg.c : Mismatch in Release Minor Version"
#endif
#if (FLS_PBTYPES_AR_RELEASE_REVISION_VERSION != \
                                 FLS_PBCFG_C_AR_RELEASE_REVISION_VERSION)
  #error "Fls_PBcfg.c : Mismatch in Release Revision Version"
#endif
#if (FLS_PBTYPES_SW_MAJOR_VERSION != FLS_PBCFG_C_SW_MAJOR_VERSION)
  #error "Fls_PBcfg.c : Mismatch in Software Major Version"
#endif
#if (FLS_PBTYPES_SW_MINOR_VERSION != FLS_PBCFG_C_SW_MINOR_VERSION)
  #error "Fls_PBcfg.c : Mismatch in Software Minor Version"
#endif
/******************************************************************************
 * Post Build Configurations
*******************************************************************************/
/******************************************************************************/
/*                         Configurable Definitions                           */
/******************************************************************************/
#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "MemMap.h"
/* QAC Warning: START Msg(2:3211)-1 */
/* Structure for FLS Init configuration */
CONST(Fls_ConfigType, FLS_CONST) Fls_GstConfiguration[1] =
/* END Msg(2:3211)-1 */
{
  /* FlsModuleConfiguration: 0  */
  {
    /* ulStartOfDbToc */
    0x0ED70100UL,
    /* Pointer to job end callback notification */
        NULL_PTR,
    /* Pointer to job error callback notification */
        NULL_PTR,
    /* Pointer to  Single-bit error notification */
        NULL_PTR,
    /* Pointer to Double-bit error notification */
        NULL_PTR,
    /* ulFlsSlowModeMaxReadBytes */
    0x00000100UL,
    /* ulFlsFastModeMaxReadBytes */
    0x00000200UL,
    /*ddDefaultMode*/
    MEMIF_MODE_SLOW
    }
};
#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* START Msg(4:5087)-1 */
#include "MemMap.h"
/* END Msg(4:5087)-1 */
#define FLS_START_SEC_VAR_NOINIT_32
#include "MemMap.h"
/* QAC Warning: START Msg(2:3211)-1 */
/* QAC Warning: START Msg(2:2022)-2 */
/* QAC Warning: START Msg(2:3132)-3 */
VAR(uint32, AUTOMATIC) Fls_GulTempBuffer[256];
/* END Msg(2:3132)-3 */
/* END Msg(2:2022)-2 */
/* END Msg(2:3211)-1 */
#define FLS_STOP_SEC_VAR_NOINIT_32
#include "MemMap.h"
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

