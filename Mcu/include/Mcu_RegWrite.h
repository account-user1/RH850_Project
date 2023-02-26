/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Mcu_RegWrite.h                                              */
/* $Revision: 319712 $                                                        */
/* $Date: 2016-10-25 18:43:49 +0530 (Tue, 25 Oct 2016) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2016 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains macro definitions for the registers write and           */
/* register write verification.                                               */
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
 * V1.0.0:  22-Nov-2016 : Initial Version
 */
/******************************************************************************/

#ifndef MCU_REG_WRITE_H
#define MCU_REG_WRITE_H

/*******************************************************************************
**                     Include Section                                        **
*******************************************************************************/
/* Implements MCU_ESDD_UD_076 */
/* Dem.h inclusion to get Dem_ReportErrorStatus declaration */
#if( MCU_USE_WV_ERROR_INTERFACE == STD_OFF )
#include "Dem.h"
#endif

#include "Std_Types.h"
#include "Mcu_Cfg.h"
#include "Mcu_Cbk.h"

/*******************************************************************************
**                        Version Information                                 **
*******************************************************************************/
/* Implements EAAR_PN0034_FR_0055, EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0045 */
/* Implements EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0002 */
/* Implements EAAR_PN0034_NR_0018 */
/* AUTOSAR release version information */
#define MCU_REGWRITE_AR_RELEASE_MAJOR_VERSION    MCU_AR_RELEASE_MAJOR_VERSION
#define MCU_REGWRITE_AR_RELEASE_MINOR_VERSION    MCU_AR_RELEASE_MINOR_VERSION
#define MCU_REGWRITE_AR_RELEASE_REVISION_VERSION \
                                     MCU_AR_RELEASE_REVISION_VERSION

/* Module Software version information */
#define MCU_REGWRITE_SW_MAJOR_VERSION    MCU_SW_MAJOR_VERSION
#define MCU_REGWRITE_SW_MINOR_VERSION    MCU_SW_MINOR_VERSION

/*******************************************************************************
**                       MISRA C Rule Violations                              **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3412) Macro defines an unrecognized code-fragment       */
/* Rule          : MISRA-C:2004 Rule 19.4                                     */
/* Justification : Macro definition as multi-line operation hence multi-line  */
/*                 macro is used                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3412)-1 and                           */
/*                 END Msg(4:3412)-1 tags in the code.                        */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:3458) Macro defines a braced code statement block.      */
/* Rule          : NA                                                         */
/* Justification : Since the macros are implemented as function macros braces */
/*                 cannot be avoided.                                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3458)-2 and                           */
/*                 END Msg(4:3458)-2 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/******************************************************************************/
/* 1. QAC Warning :                                                           */
/* Message       : (2:3457) Macro defines a braced code statement block.      */
/* Rule          : NA                                                         */
/* Justification : Since the macros are implemented as function macros braces */
/*                 cannot be avoided.                                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:3457)-1 and               */
/*                 END Msg(2:3457)-1 tags in the code.                        */
/******************************************************************************/
/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/* Macro for Register readback disable */
#define MCU_WV_DISABLE                      0U
/* Macro for Register readback INIT_ONLY*/
#define MCU_WV_INIT_ONLY                    1U
/* Macro for Register readback INIT_RUNTIME */
#define MCU_WV_INIT_RUNTIME                 2U

#define MCU_FULL_MASK                   (uint32) 0xFFFFFFFFUL

#define MCU_16BIT_MASK                  (uint16) 0xFFFFU

#define MCU_8BIT_MASK                   (uint8)  0xFFU

#define MCU_DTMCMP_MASK                 (uint32) 0x0000FFFFUL

#define MCU_CVMF_MASK                   (uint8)  0x83U

#define MCU_EMK2_WV_MASK                (uint32) 0x3FFFFFFFU

#define MCU_EPCFG_WV_MASK               (uint32) 0x00000001U

#define MCU_CMUCLKxCTRL_WV_MASK         (uint32) 0x00FFFFFFU

#define MCU_CVMMON_WV_MASK              (uint8)  0x01U

#define MCU_CVMDIAG_WV_MASK             (uint8)  0x0CU

#define MCU_CMPH_WV_MASK                (uint16) 0x0FFFU

#define MCU_CMPL_WV_MASK                (uint16) 0x0FFFU

#define MCU_CTL0_WV_MASK                (uint8)  0x01U

#define MCU_GTMIRQ_WV_MASK              (uint32) 0x00000003U

#define MCU_CMUGCLKNUM_WV_MASK          (uint32) 0x00FFFFFFU

#define MCU_CMUGCLKDEN_WV_MASK          (uint32) 0x00FFFFFFU

#define MCU_CMUCLKEN_WV_MASK            (uint32) 0x00FFFFFFU

#define MCU_MSR_LMx_WV_MASK             (uint32) 0x00000001U

#define MCU_CLMATEST_WV_MASK            (uint32) 0x000001FFU

#define MCU_CVMDMASK_WV_MASK            (uint8)  0x01U

#define MCU_PEM_WV_MASK                 (uint32) 0x00000003U

#define MCU_DTMCTL_WV_MASK              (uint32) 0x00000011U

/* Macros for DEM */
#define MCU_DEM_TYPE Dem_EventStatusType


#define MCU_FEINT_ISR_SID                  (uint8)0x0BU

#define MCU_ECM_EIC_ISR_SID                (uint8)0x0CU

#define MCU_CONFIGUREECMRAMERRORS_SID      (uint8)0x0DU

#define MCU_ECMRESETREASON_SID             (uint8)0x0EU

#define MCU_WAKEUPCONFIGURE_SID            (uint8)0x0FU

#define MCU_CONFIGUREECMRAMERR_SID         (uint8)0x10U

/*******************************************************************************
** Macro Name            : MCU_WRITE_REG_ONLY
**
** Description           : This macro is to perform the write operation to the
**                         register which is passed. This macro shall be used
**                         for registers for witch Ram Mirroring is not possible
**                         (Write-Only or Static registers)
**
** Input Parameters      : pWriteRegAddr, uiRegWriteValue
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
/* MISRA Violation: START Msg(4:3458)-2 */
#define MCU_WRITE_REG_ONLY(pWriteRegAddr, uiRegWriteValue)  \
{ \
    (*(pWriteRegAddr)) = (uiRegWriteValue); \
}
 /* END Msg(4:3458)-2 */
/******************************************************************************/
/*****************************WRITE-VERIFY MACROS******************************/
/******************************************************************************/

/*******************************************************************************
** Macro Name            : MCU_WV_REPORT_ERROR
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
**                         MCU_ERROR_NOTIFICATION
*******************************************************************************/
/* Implements MCU_ESDD_UD_076 */
/* MISRA Violation: START Msg(4:3412)-1 */
#if ( MCU_USE_WV_ERROR_INTERFACE == STD_ON )
#define MCU_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                        MCU_ERROR_NOTIFICATION(WVErrId, uiApiId);
#else
#define MCU_WV_REPORT_ERROR(WVErrId, ErrStat, uiApiId) \
                        Dem_ReportErrorStatus(WVErrId, (ErrStat));

#endif
 /* END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : MCU_CHECK_WRITE_VERIFY
**
** Description           : This macro is to do the comparison check and do
**                         the error reporting if the comparison fails.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiApiId,
**                         uiuiApiId
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
/* Implements MCU_ESDD_UD_069 */
/* MISRA Violation: START Msg(4:3412)-1 */
#define MCU_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
  { \
    if((uiCheckValue) != (*(pCompareRegAddr))) \
    { \
        MCU_WV_REPORT_ERROR(MCU_E_REG_WRITE_VERIFY, DEM_EVENT_STATUS_FAILED, \
                                                                      uiApiId) \
    } \
    else \
    { \
    } \
  }
/* END Msg(4:3412)-1 */
/*******************************************************************************
** Macro Name            : MCU_CHECK_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify call only for
**                         MCU_Init API.
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
/* Implements MCU_ESDD_UD_034, EAAR_PN0034_FSR_0003 */
/* QAC Warning: START Msg(2:3457)-1 */
/* MISRA Violation: START Msg(4:3412)-1 */
#if (MCU_WRITE_VERIFY != MCU_WV_DISABLE)

#define MCU_CHECK_WRITE_VERIFY_INIT(pCompareRegAddr, uiCheckValue, uiApiId) \
    { \
    MCU_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
    }
#else
#define MCU_CHECK_WRITE_VERIFY_INIT(pCompareRegAddr, uiCheckValue, uiApiId) \
    {\
    }
#endif
/* END Msg(4:3412)-1 */
 /* END Msg(2:3457)-1 */
/*******************************************************************************
** Macro Name            : MCU_CHECK_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify call only for
**                         the API's other than MCU_Init.
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
/* Implements MCU_ESDD_UD_034, EAAR_PN0034_FSR_0002, EAAR_PN0034_FSR_0003 */
/* Implements EAAR_PN0034_FSR_0004 */
/* QAC Warning: START Msg(2:3457)-1 */
/* MISRA Violation: START Msg(4:3412)-1 */
#if (MCU_WRITE_VERIFY == MCU_WV_INIT_RUNTIME)

#define MCU_CHECK_WRITE_VERIFY_RUNTIME(pCompareRegAddr, uiCheckValue, uiApiId) \
    {\
    MCU_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiApiId) \
    }
#else
#define MCU_CHECK_WRITE_VERIFY_RUNTIME(pCompareRegAddr, uiCheckValue, uiApiId) \
    {\
    }
#endif
/* END Msg(4:3412)-1 */
 /* END Msg(2:3457)-1 */
/*******************************************************************************
** Macro Name            : MCU_MASKED_CHECK_WRITE_VERIFY
**
** Description           : This macro is to do the comparison check and do
**                         the error reporting if the comparison fails.
**
** Input Parameters      : pCompareRegAddr, uiCheckValue, uiApiId,
**                         uiuiApiId
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
/* Implements MCU_ESDD_UD_069, EAAR_PN0034_FSR_0002, EAAR_PN0034_FSR_0003 */
/* Implements EAAR_PN0034_FSR_0004 */
/* QAC Warning: START Msg(2:3457)-1 */
/* MISRA Violation: START Msg(4:3412)-1 */
#define MCU_MASKED_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, \
                                                         uiMaskValue, uiApiId) \
  { \
    if((uiCheckValue) != ((*(pCompareRegAddr)) & (uiMaskValue))) \
    { \
        MCU_WV_REPORT_ERROR(MCU_E_REG_WRITE_VERIFY, DEM_EVENT_STATUS_FAILED, \
                                                                      uiApiId) \
    } \
    else \
    { \
    } \
  }
/* END Msg(4:3412)-1 */
/* END Msg(2:3457)-1 */
/*******************************************************************************
** Macro Name            : MCU_MASKED_CHECK_WRITE_VERIFY_INIT
**
** Description           : This macro is to do the write verify call only for
**                         MCU_Init API.
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
/* Implements MCU_ESDD_UD_034, EAAR_PN0034_FSR_0002, EAAR_PN0034_FSR_0003 */
/* QAC Warning: START Msg(2:3457)-1 */
/* MISRA Violation: START Msg(4:3412)-1 */
#if (MCU_WRITE_VERIFY != MCU_WV_DISABLE)

#define MCU_MASKED_CHECK_WRITE_VERIFY_INIT(pCompareRegAddr,  uiCheckValue, \
                                                         uiMaskValue, uiApiId) \
    { \
    MCU_MASKED_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiMaskValue, \
                                                               uiApiId) \
    }
#else
#define MCU_MASKED_CHECK_WRITE_VERIFY_INIT(pCompareRegAddr, uiCheckValue, \
                                                         uiMaskValue, uiApiId) \
    {\
    }
#endif
/* END Msg(4:3412)-1 */
/* END Msg(2:3457)-1 */
/*******************************************************************************
** Macro Name            : MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME
**
** Description           : This macro is to do the write verify call only for
**                         the API's other than MCU_Init.
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
/* Implements MCU_ESDD_UD_034, EAAR_PN0034_FSR_0003 */
/* QAC Warning: START Msg(2:3457)-1 */
/* MISRA Violation: START Msg(4:3412)-1 */
#if (MCU_WRITE_VERIFY == MCU_WV_INIT_RUNTIME)

#define MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(pCompareRegAddr, uiCheckValue, \
                                                        uiMaskValue, uiApiId)  \
    { \
    MCU_MASKED_CHECK_WRITE_VERIFY(pCompareRegAddr, uiCheckValue, uiMaskValue, \
                                                                     uiApiId) \
    }
#else
#define MCU_MASKED_CHECK_WRITE_VERIFY_RUNTIME(pCompareRegAddr, uiCheckValue, \
                                                         uiMaskValue, uiApiId) \
    {\
    }
#endif
#endif /*  MCU_REG_WRITE_H */
/* END Msg(4:3412)-1 */
/* END Msg(2:3457)-1 */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
