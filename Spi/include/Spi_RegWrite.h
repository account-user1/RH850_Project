/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_RegWrite.h                                              */
/* $Revision: 366141 $                                                        */
/* $Date: 2017-02-21 13:22:30 +0000 (Tue, 21 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2017 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file is to have macro definitions for the register write verification.*/
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
 * V1.0.0:  16-Feb-2017  : Initial Version
 */
/******************************************************************************/
#ifndef SPI_REGWRITE_H
#define SPI_REGWRITE_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/

/* Included for pre-compile options */
#include "Spi_Cfg.h"

/* AUTOSAR standard types */
#include "Std_Types.h"
#include "Spi_Cbk.h"

/* Dem.h inclusion to get Dem_ReportErrorStatus declaration */
#if( SPI_USE_WV_ERROR_INTERFACE == STD_OFF )
#include "Dem.h"
#endif

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognised code-fragment       */
/* Rule          : MISRA-C:2004 Rule                                          */
/* Justification : Semicolon is added to avoid compilation warnings and       */
/*                 additional QAC warning.                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3412)-1 and                           */
/*                 END Msg(4:3412)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/

/* AUTOSAR Release version information */
#define SPI_REGWRITE_H_AR_RELEASE_MAJOR_VERSION   \
                                                   SPI_AR_RELEASE_MAJOR_VERSION
#define SPI_REGWRITE_H_AR_RELEASE_MINOR_VERSION   \
                                                   SPI_AR_RELEASE_MINOR_VERSION
#define SPI_REGWRITE_H_AR_RELEASE_REVISION_VERSION \
                                                SPI_AR_RELEASE_REVISION_VERSION

/* File version information */
#define SPI_REGWRITE_SW_MAJOR_VERSION  SPI_SW_MAJOR_VERSION
#define SPI_REGWRITE_SW_MINOR_VERSION  SPI_SW_MINOR_VERSION

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
/* Macro for Register readback disable */
#define SPI_WV_DISABLE                       0x0U
/* Macro for Register readback INIT_ONLY */
#define SPI_WV_INIT_ONLY                     0x1U
/* Macro for Register readback INIT_RUNTIME */
#define SPI_WV_INIT_RUNTIME                  0x2U

#define SPI_DEM_TYPE Dem_EventStatusType
/*******************************************************************************
** Macro Name            : SPI_CSIH_WRITE_REG_ONLY
**
** Description           : This Macro performs direct writing
**                         operation into CSIXxxx registers.
**
** Input Parameters      : REG : CSIH Register address
**                         VAL : Value written to the register.
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
#define SPI_CSIH_WRITE_REG_ONLY(REG, VAL)         (REG) = (VAL);

/*******************************************************************************
** Macro Name            : SPI_DMA_WRITE_REG_ONLY
**
** Description           : This Macro performs DMAxxxx register
**                         direct writing.
**
** Input Parameters      : REG : DMA Register address
**                         VAL : Value written to the register.
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_090 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
#define SPI_DMA_WRITE_REG_ONLY(REG, VAL)         (REG) = (VAL);
#endif
/*******************************************************************************
** Macro Name            : SPI_WV_REPORT_ERROR
**
** Description           : This macro is to report the error to respective
**                         interface.
**
** Input Parameters      : WVErrId, ErrStat, uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : Dem_ReportErrorStatus
**                         SPI_ERROR_NOTIFICATION
*******************************************************************************/
/* Implements SPI_ESDD_UD_163 */
#if ( SPI_USE_WV_ERROR_INTERFACE == STD_ON )
#define SPI_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                        SPI_ERROR_NOTIFICATION(WVErrId, uiApiId);
#else
#define SPI_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                        Dem_ReportErrorStatus(WVErrId, (SPI_DEM_TYPE)(ErrStat));

#endif /*SPI_USE_WV_ERROR_INTERFACE */
/*******************************************************************************
** Macro Name            : SPI_CHECK_WRITE_VERIFY
**
** Description           : This macro is to do the comparison check and do
**                         the error reporting if the comparison fails.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_122 */
#define SPI_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
  { \
    if((uiCheckValue) != (*(pCompareRegAddr))) \
    { \
        SPI_WV_REPORT_ERROR( \
                    SPI_E_REG_WRITE_VERIFY, DEM_EVENT_STATUS_FAILED, uiApiId) \
    } \
    else \
    { \
    } \
  }
/*******************************************************************************
** Macro Name            : SPI_CSIH_CHECK_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify call only for
**                         SPI_Init API.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_160 */
#if (SPI_CSIH_WRITE_VERIFY != SPI_WV_DISABLE)

#define SPI_CSIH_CHECK_WRITE_VERIFY_INIT( \
                             pCompareRegAddr, uiCheckValue, uiApiId) \
    { \
    SPI_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
    }
#else
#define SPI_CSIH_CHECK_WRITE_VERIFY_INIT( \
                             pCompareRegAddr, uiCheckValue, uiApiId) \
    {\
    }
#endif
/*******************************************************************************
** Macro Name            : SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify call only for
**                         the API's other than SPI_Init.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_160 */
#if (SPI_CSIH_WRITE_VERIFY == SPI_WV_INIT_RUNTIME)

#define SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME( \
                               pCompareRegAddr, uiCheckValue, uiApiId)  \
    { \
    SPI_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
    }
#else
#define SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME( \
                                    pCompareRegAddr, uiCheckValue, uiApiId) \
    {\
    }
#endif
/*******************************************************************************
** Macro Name            : SPI_MASKED_CHECK_WRITE_VERIFY
**
** Description           : This macro is to do the comparison check and do
**                         the error reporting if the comparison fails.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_122 */
#define SPI_MASKED_CHECK_WRITE_VERIFY( \
                  pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
  { \
    if((uiCheckValue) != ((*(pCompareRegAddr)) & (uiMaskValue))) \
    { \
        SPI_WV_REPORT_ERROR( \
                  SPI_E_REG_WRITE_VERIFY, DEM_EVENT_STATUS_FAILED, uiApiId) \
    } \
    else \
    { \
    } \
  }
/* MISRA Violation: START Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify call only for
**                         SPI_Init API.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_160 */
#if (SPI_CSIH_WRITE_VERIFY != SPI_WV_DISABLE)

#define SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT( \
               pCompareRegAddr,  uiCheckValue, uiMaskValue, uiApiId) \
    { \
    SPI_MASKED_CHECK_WRITE_VERIFY( \
                    pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    }
#else
#define SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT( \
                   pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    {\
    }
#endif

/*******************************************************************************
** Macro Name            : SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify call only for
**                         the API's other than SPI_Init.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_160 */
#if (SPI_CSIH_WRITE_VERIFY == SPI_WV_INIT_RUNTIME)

#define SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME( \
                       pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId)  \
    { \
    SPI_MASKED_CHECK_WRITE_VERIFY( \
                 pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    }
#else
#define SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME( \
                         pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    {\
    }
#endif
/*******************************************************************************
** Macro Name            : SPI_DMA_CHECK_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify call only for
**                         SPI_Init API.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_090 */
/* Implements SPI_ESDD_UD_161 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
#if (SPI_DMA_WRITE_VERIFY != SPI_WV_DISABLE)

#define SPI_DMA_CHECK_WRITE_VERIFY_INIT(pCompareRegAddr, uiCheckValue, uiApiId)\
    { \
    SPI_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
    }
#else
#define SPI_DMA_CHECK_WRITE_VERIFY_INIT(pCompareRegAddr, uiCheckValue, uiApiId)\
    {\
    }
#endif
#endif
/*******************************************************************************
** Macro Name            : SPI_DMA_CHECK_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify call only for
**                         the API's other than SPI_Init.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_090 */
/* Implements SPI_ESDD_UD_161 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
#if (SPI_DMA_WRITE_VERIFY == SPI_WV_INIT_RUNTIME)

#define SPI_DMA_CHECK_WRITE_VERIFY_RUNTIME( \
                                     pCompareRegAddr, uiCheckValue, uiApiId) \
    { \
    SPI_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
    }
#else
#define SPI_DMA_CHECK_WRITE_VERIFY_RUNTIME( \
                                    pCompareRegAddr, uiCheckValue, uiApiId) \
    {\
    }
#endif
#endif
/*******************************************************************************
** Macro Name            : SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify call only for
**                         SPI_Init API.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_090 */
/* Implements SPI_ESDD_UD_161 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
#if (SPI_DMA_WRITE_VERIFY != SPI_WV_DISABLE)

#define SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT( \
               pCompareRegAddr,  uiCheckValue, uiMaskValue, uiApiId) \
    { \
    SPI_MASKED_CHECK_WRITE_VERIFY( \
                    pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    }
#else
#define SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT( \
                   pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    {\
    }
#endif
#endif
/*******************************************************************************
** Macro Name            : SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify call only for
**                         the API's other than SPI_Init.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return parameter      : None
**
** Pre-conditions        : None
**
** Functions invoked     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_090 */
/* Implements SPI_ESDD_UD_161 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)
#if (SPI_DMA_WRITE_VERIFY == SPI_WV_INIT_RUNTIME)

#define SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME( \
                       pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId)  \
    { \
    SPI_MASKED_CHECK_WRITE_VERIFY( \
                 pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    }
#else
#define SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME( \
                         pCompareRegAddr, uiCheckValue, uiMaskValue, uiApiId) \
    {\
    }
#endif
#endif
#endif /* SPI_REGWRITE_H */
/* END Msg(4:3412)-1 */
/* End of write verification macro definitions. */
/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/
