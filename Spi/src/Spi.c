/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi.c                                                       */
/* $Revision: 368026 $                                                        */
/* $Date: 2017-02-24 10:58:50 +0000 (Fri, 24 Feb 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2017 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains the implementations AUTOSAR specified APIs for SPI      */
/* handler.                                                                   */
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
 * V1.0.0:  03-Aug-2015  : Initial Version
 * V1.0.1:  04-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. As per ARDAAAF-298, 'Spi_GusHwStatus' hardware
 *                            status flag has be clear in 'Spi_SyncTransmit()'
 *                            function if either sequence result is SPI_SEQ_OK
 *                            or SPI_SEQ_FAILED.
 *                         2. Copyright information is updated.
 *                         3. As per ARDAAAF-352, "Spi_GetVersionInfo"
 *                            implemented as a function.
 *                         4. As per ARDAAAF-380, in Spi_AsyncTransmit function
 *                            the call to Start-notification have to be moved
 *                            where actual transmission starts.
 *                         5. The file adapted from P1x.
 * V2.0.0:  16-Feb-2017   : Following changes were made:
 *                         1. As per ARDAAAF-946, All APIs are updated with
 *                            changing/adding description and QAC messages.
 *                         2. New public APIs "Spi_GetErrorInfo" and
 *                            "Spi_SelfTest" are added for internal Diagnosis.
 *                         3. As a part of ticket ARDAAAF-916,
 *                            Spi_MainFunction_Handling is updated to exit
 *                            functionality if the driver is uninitialized.
 *                         4. As part of ticket ARDAAAF-778, MISRA
 *                            violation START and END msgs for Msg(2:3204) is
 *                            added at respective places.
 *                         5. As part of ticket ARDAAAF-443 fix, added NULL
 *                            pointer check for Spi_GpConfigPtr->pStatusArray
 *                            and Spi_GpConfigPtr->pStsValueArray in the
 *                            function Spi_AsyncTransmit.
 *                         6. Added UD ID's 'SPI_ESDD_UD_xxx' and Requirements
 *                            at respective places.
 *                         7. As part of ARDAAAF-1322,unit testing activity,
 *                            compilation warning removed in the Api Spi_Init,
 *                            when level delivered is configured as zero and
 *                            HW priority is enabled.
 *                         8. Software Major version updated.
 *                         9. Updated Spi_SelfTest API to perform the
 *                            Spi_GddDriverStatus busy check even when DET
 *                            is off.
 *                        10. Updated Spi_ReadIB API to put the accessing of
 *                            Spi_GpConfigPtr->pChannelIBRead under correct
 *                            pre-compile.
 *                        11. Copyright information updated.
 *                        12. As part of ARDAAAF-1315, added untraced
 *                            requirements.
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Implements SPI092, SPI272, SPI273 */
#include "Spi.h"
#include "Spi_Scheduler.h"
#include "Spi_Ram.h"
#include "Spi_Driver.h"
#include "Dem.h"
#include "Spi_Hardware.h"

#if (SPI_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif

#if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
#include "SchM_Spi.h"
#endif
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define SPI_C_AR_RELEASE_MAJOR_VERSION \
                                  SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_C_AR_RELEASE_MINOR_VERSION \
                                  SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_C_AR_RELEASE_REVISION_VERSION \
                               SPI_AR_RELEASE_REVISION_VERSION_VALUE

/* MISRA Violation: START Msg(6:0857)-19 */
/* File version information */
#define SPI_C_SW_MAJOR_VERSION    2U
#define SPI_C_SW_MINOR_VERSION    0U
/* END Msg(6:0857)-19 */

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_AR_RELEASE_MAJOR_VERSION != SPI_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi.c : Mismatch in Release Major Version"
#endif

#if (SPI_AR_RELEASE_MINOR_VERSION != SPI_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi.c : Mismatch in Release Minor Version"
#endif

#if (SPI_AR_RELEASE_REVISION_VERSION != SPI_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi.c : Mismatch in Release Revision Version"
#endif

#if (SPI_SW_MAJOR_VERSION != SPI_C_SW_MAJOR_VERSION)
  #error "Spi.c : Mismatch in Software Major Version"
#endif /* END of SPI_SW_MAJOR_VERSION */

#if (SPI_SW_MINOR_VERSION != SPI_C_SW_MINOR_VERSION)
  #error "Spi.c : Mismatch in Software Minor Version"
#endif /* END of SPI_SW_MINOR_VERSION */

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message      : (4:0489) Increment or decrement operation performed         */
/*                on pointer                                                  */
/* Rule         : MISRA-C:2004 Rule 17.4                                      */
/* Justification: To access these pointers in optimized                       */
/*                way in this function                                        */
/* Verification : However, part of the code is verified                       */
/*                manually and it is not having any impact                    */
/* Reference    : Look for START Msg(4:0489)-1 and                            */
/*                END Msg(4:0489)-1 tags in the code.                         */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488) Performing pointer arithmetic.                    */
/*                 pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : Pointer arithmetic is used to achieve better throughput.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-2 and                           */
/*                 END Msg(4:0488)-2 tags in the code.                        */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0316) Cast from a pointer to void to a pointer to       */
/*                  object.                                                   */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : Cast is performed between a pointer to void to pointer to  */
/*                 object type to prevent publishing of internal structure.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0316)-3 and                           */
/*                 END Msg(4:0316)-3 tags in the code.                        */
/*******************************************************************************
**                         QAC Warnings                                       **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       : (2:3227) The value of this function parameter is never     */
/*                 modified. It could be declared with the 'const' type       */
/*                 Qualifier.                                                 */
/* Rule          : NA                                                         */
/* Justification : The function parameters of AUTOSAR APIs and Vendor specific*/
/*                 APIs cannot be modified to be made as constant.            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:3227)-1 and               */
/*                 END Msg(2:3227)-1 tags in the code.                        */
/******************************************************************************/

/* 2. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:2814)-2 and               */
/*                 END Msg(2:2814)-2 tags in the code.                        */
/******************************************************************************/

/* 3. QAC Warning:                                                            */
/* Message       : (2:2824) Possible: Arithmetic operation on NULL pointer.   */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:2824)-3 and               */
/*                 END Msg(2:2824)-3  tags in the code.                       */
/******************************************************************************/

/* 4. QAC Warning:                                                            */
/* Message       : (2:0862) This #include "U:/temp/MemMap.h" directive is     */
/*                 redundant.                                                 */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without  side effects.                                     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/

/* 5. QAC Warning:                                                            */
/* Message       : (2:3204) The variable 'LenReturnValue' is only set once and*/
/*                 so it could be declared with the 'const' qualifier.        */
/* Rule          : MISRA-C:2004 Message 3204                                  */
/* Justification : LenReturnValue is set more than twice when DET is enabled. */
/*                 and when DET is disabled it needs to be initialised. Hence */
/*                 cannot be declared with 'const' qualifier.                 */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:3204)-5 and               */
/*                 END Msg(2:3204)-5 tags in the code.                        */
/******************************************************************************/

/* Implements AR_PN0063_NR_0009, AR_PN0063_FR_0010, EAAR_PN0034_FR_0066 */
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/

/*******************************************************************************
** Function Name       : Spi_Init
**
** Service ID          : 0x00
**
** Description         : This service performs initialization of the SPI Driver
**                       component
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : const Spi_ConfigType *ConfigPtr
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : None
**
** Preconditions       : None
**
** Global Variable     : Spi_GddDriverStatus,Spi_GpFirstJobList,
**                       Spi_GpConfigPtr, Spi_GpFirstChannel, Spi_GpFirstJob
**                       Spi_GpFirstSeq,Spi_GddQueueIndex, Spi_GblQueueStatus
**                       Spi_GusAllQueueSts,Spi_GstCommErrorInfo,
**                       Spi_GucBufferIndex, Spi_GaaHighPriorityCommRequest
**                       Spi_GblSyncTx, Spi_GusHwStatus
**
** Function Invoked    : Det_ReportError, Spi_StaticInit, Spi_LoopBackSelfTest
**                       Spi_EccSelfTest, Spi_SeqJobChannelInit,
**                       Spi_InitDetCheck
**
** Registers Used      : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnSTCR0, ICRn,
**                       CSIHnBRSy, CSIHnCFGx, CSIHnTX0W, CSIHnRX0H, CSIHnSTR0,
**                       ECCCSIHnTRC, ECCCSIHnTMC, ECCCSIHnCTL, ECCCSIHnTED,
**                       CSIHnMCTL1, CSIHnMCTL2, DTCTn, IMRn, DDAn, DSAn,
**                       DCENn, DTFRn, DCSTCn, DCSTn, CSIHnMCTL0, CSIHnMRWP0
*******************************************************************************/
#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_001 */
/* Implements SPI_ESDD_UD_123 */
/* Implements SPI298, SPI013, SPI082, SPI128, SPI010, SPI008, SPI359, SPI344 */
/* Implements SPI299, SPI015, SPI283, SPI225_Conf, SPI064, AR_PN0063_FR_0005*/
/* Implements SPI175, SPI091_Conf, SPI103_Conf, SPI106_Conf,AR_PN0063_FR_0090 */
/* Implements SPI005, SPI100, SPI228_Conf, SPI249, SPI250, AR_PN0063_FR_0001 */
/* Implements SPI235, SPI234, EAAR_PN0034_FR_0025, EAAR_PN0034_FR_0064 */
/*
 * The ConfigPtr cannot be removed from this API as the pointer is used as per
 * the AUTOSAR requirement. The Null check for the ConfigPtr has been done in
 * the DET check. In addition to that a data base check also carried out in the
 * code to make sure the validity of the ConfigPtr
 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(void, SPI_PUBLIC_CODE) Spi_Init
(P2CONST(Spi_ConfigType, AUTOMATIC, SPI_APPL_CONST) ConfigPtr)
/* END Msg(2:3227)-1 */
{
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  boolean LblErrorFlag;
  #endif /*END of SPI_DEV_ERROR_DETECT */

  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* Defining a local pointer for the status byte */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStatusPtr;
  #endif /*
          * END of ((SPI_LEVEL_DELIVERED == SPI_ONE) ||
          *        (SPI_LEVEL_DELIVERED == SPI_TWO))
          */

  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                        (SPI_LEVEL_DELIVERED == SPI_TWO))
  uint8 LucVar;
  #endif
  /* Implements SPI_ESDD_UD_159 */
  #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
  Spi_CommErrorType LstErrorType;
  uint8 LucVariable;
  #endif

  #if (SPI_LOOPBACK_SELFTEST == SPI_ONE || SPI_LOOPBACK_SELFTEST == SPI_TWO || \
       SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO )
  Std_ReturnType LenReturnValue;
  #if (SPI_LOOPBACK_SELFTEST == SPI_ZERO)
  LenReturnValue = E_OK ;
  #endif
  #endif

  /* Loop back self test for configured HW units */
  #if (SPI_LOOPBACK_SELFTEST == SPI_ONE || SPI_LOOPBACK_SELFTEST == SPI_TWO)
    LenReturnValue = Spi_LoopBackSelfTest();
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  #if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO )
    if (E_OK == LenReturnValue)
    {
      LenReturnValue = Spi_EccSelfTest();
    }
    else
    {
      /* No action required */
    }
  #endif
  #endif

  #if (SPI_LOOPBACK_SELFTEST == SPI_ONE || SPI_LOOPBACK_SELFTEST == SPI_TWO || \
       SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO )
  if (E_OK == LenReturnValue)
  #endif
  {
    #if (SPI_DEV_ERROR_DETECT == STD_ON)
    /* Check for NULL Pointer and Already Init Det errors */
    LblErrorFlag = Spi_InitDetCheck(ConfigPtr);
    /* If no DET errors, continue */
    if (SPI_FALSE == LblErrorFlag)
    #endif /* (SPI_DEV_ERROR_DETECT == STD_ON) */
    {
      /* QAC Warning START Msg(2:2814)-2 */
      /* Initialize the module only if Database is present */
      if (SPI_DBTOC_VALUE != ConfigPtr->ulStartOfDbToc)
      /* END Msg(2:2814)-2 */
      {
        #if (SPI_DEV_ERROR_DETECT == STD_ON)
        /* Implements SPI_ESDD_UD_091 */
        /* Implements SPI_ESDD_UD_117 */
        /* Report to DET */
        (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_INIT_SID, SPI_E_INVALID_DATABASE);
        #endif /* (SPI_DEV_ERROR_DETECT == STD_ON) */
      }
      else /* ConfigPtr->ulStartOfDbToc != SPI_DBTOC_VALUE */
      {
        /* Implements SPI_ESDD_UD_185 */
        /*
         * The ConfigPtr cannot be removed from this API as the pointer is used
         * as per the AUTOSAR requirement. The Null check for the ConfigPtr has
         * been done in the DET check. In addition to that a data base check
         * also carried out in the code to make sure the validity of the
         * ConfigPtr. Also Spi_GpConfigPtr is pointer to a constant and it is
         * not getting modified by other API's.
         */
        /* Load ConfigPtr to Global pointer variable  */
        Spi_GpConfigPtr = ConfigPtr;
        /*
         * Spi_GpConfigPtr is loaded with ConfigPtr. The ConfigPtr cannot be
         * removed from this API as the pointer is used as per the AUTOSAR
         * requirement. The Null check for the ConfigPtr has been done in the
         * DET check. In addition to that a data base check also carried out in
         * the code to make sure the validity of ConfigPtr. Spi_GpConfigPtr is
         * pointer to a constant and it is not getting modified by other API's.
         * Also Spi_GpFirstChannel is pointer to a constant and it is not
         * getting modified by other API's.
         */
        /* MISRA Violation: START Msg(4:0316)-3 */
        /* Implements SPI_ESDD_UD_109 */
        /* QAC Warning START Msg(2:2814)-2 */
        /* Load first channel to Global pointer variable */
        Spi_GpFirstChannel =
         (P2CONST(Spi_ChannelPBConfigType, SPI_DATA, SPI_PRIVATE_CONST))
                                                Spi_GpConfigPtr->pFirstChannel;
        /* END Msg(2:2814)-2 */
        /*
         * Spi_GpConfigPtr is loaded with ConfigPtr. The ConfigPtr cannot be
         * removed from this API as the pointer is used as per the AUTOSAR
         * requirement. The Null check for the ConfigPtr has been done in the
         * DET check. In addition to that a data base check also carried out in
         * the code to make sure the validity of ConfigPtr. Spi_GpConfigPtr is
         * pointer to a constant and it is not getting modified by other API's.
         * Also Spi_GpFirstJob is pointer to a constant and it is not
         * getting modified by other API's.
         */
        /* Implements SPI_ESDD_UD_107 */
        /* Load first job to Global pointer variable*/
        Spi_GpFirstJob =
         (P2CONST(Spi_JobConfigType, SPI_DATA, SPI_PRIVATE_CONST))
                                                   Spi_GpConfigPtr->pFirstJob;
        /*
         * Spi_GpConfigPtr is loaded with ConfigPtr. The ConfigPtr cannot be
         * removed from this API as the pointer is used as per the AUTOSAR
         * requirement. The Null check for the ConfigPtr has been done in the
         * DET check. In addition to that a data base check also carried out in
         * the code to make sure the validity of ConfigPtr. Spi_GpConfigPtr is
         * pointer to a constant and it is not getting modified by other API's.
         * Also Spi_GpFirstSeq is pointer to a constant and it is not
         * getting modified by other API's.
        */
        /* Implements SPI_ESDD_UD_108 */
        /*  Load first sequence to Global pointer variable */
        Spi_GpFirstSeq =
          (P2CONST(Spi_SequenceConfigType, SPI_DATA, SPI_PRIVATE_CONST))
                                                   Spi_GpConfigPtr->pFirstSeq;
        /*
         * Spi_GpConfigPtr is loaded with ConfigPtr. The ConfigPtr cannot be
         * removed from this API as the pointer is used as per the AUTOSAR
         * requirement. The Null check for the ConfigPtr has been done in the
         * DET check. In addition to that a data base check also carried out in
         * the code to make sure the validity of ConfigPtr. Spi_GpConfigPtr is
         * pointer to a constant and it is not getting modified by other API's.
         * Also Spi_GpFirstJobList is pointer to a constant and it is not
         * getting modified by other API's.
        */
        /*  Load first job to Global pointer variable */
        Spi_GpFirstJobList =
          (P2CONST(Spi_JobListType, SPI_DATA, SPI_PRIVATE_CONST))
                                                   Spi_GpConfigPtr->pJobList;
        /* END Msg(4:0316)-3 */
        #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
        /* Clear the Hardware unit Index */
        LstErrorType.HwUnit = SPI_ZERO;
        /* Clear the Sequence Index */
        LstErrorType.SeqID = SPI_ZERO;
        /* Clear the Job Index */
        LstErrorType.JobID = SPI_ZERO;
        /* Clear the Error */
        LstErrorType.ErrorType = SPI_NO_ERROR;

        LucVariable = SPI_ZERO;
        /* Implements SPI_ESDD_UD_159 */
        while (SPI_MAX_ERROR_BUFFER_SIZE > LucVariable)
        {
          /* Initialise the Error Information buffer with no error */
          Spi_GstCommErrorInfo[LucVariable] = LstErrorType;
          LucVariable++;
        }
        /* Initialise the Error index with zero */
        Spi_GucBufferIndex = SPI_ZERO;
        #endif
         /* Invoke the function for initializing Spi sequence results,
                 Job results and channel data. */
        Spi_SeqJobChannelInit();

        #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                              (SPI_LEVEL_DELIVERED == SPI_TWO))
        /* Initialize the counter as zero */
        LucVar = SPI_ZERO;
        /*
         * Spi_GpConfigPtr is loaded with ConfigPtr. The ConfigPtr cannot be
         * removed from this API as the pointer is used as per the AUTOSAR
         * requirement. The Null check for the ConfigPtr has been done in the
         * DET check. In addition to that a data base check also carried out in
         * the code to make sure the validity of ConfigPtr.
        */
        LpStatusPtr = Spi_GpConfigPtr->pStatusArray;

        while ((Spi_GpConfigPtr->ucNoofStatusByte > LucVar) &&
                            (NULL_PTR != LpStatusPtr))
        {
          /* In the Tool code the structure elements pStatusArray and
           * ucNoofStatusByte in Spi_GstConfiguration is filled only when
           * SpiLevelDelivered is not equal to LEVEL 0 and index of RAM array
           * Spi_GaaSeqStatusBitArray not equal to 0. LpStatusPtr will be a NULL
           * POINTER only when Spi_GaaSeqStatusBitArray is equal to 0. In that
           * case value of ucNoofStatusByte also will be 0 and the while loop
           * shall not be executed. There shall be no harm with the pointer
           * usage here
           */
          /* QAC Warning START Msg(2:2814)-2 */
          /* Initialize the status byte as zero */
          *LpStatusPtr = SPI_ZERO;
          /* END Msg(2:2814)-2 */
          /* MISRA Violation: START Msg(4:0489)-1 */
          /* Increment the pointer to status byte */
          LpStatusPtr++;
          /* END Msg (4:0489)-1 */

          /* Increment the counter */
          LucVar++;
        }

        /* Initialize the queue elements with zero */
        /* Initialize the counter as zero */
        LucVar = SPI_ZERO;
        /* Implements SPI_ESDD_UD_154 */
        while (SPI_MAX_QUEUE > LucVar)
        {
          Spi_GblQueueStatus[LucVar] = SPI_QUEUE_EMPTY;
          Spi_GddQueueIndex[LucVar] = SPI_ZERO;

          /* Increment number of jobs configured */
          LucVar++;
        }
        #endif /*
                * #if ((SPI_LEVEL_DELIVERED == SPI_ONE) ||
                *                         (SPI_LEVEL_DELIVERED == SPI_TWO))
                */

        #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        Spi_GucHwUnitStatus = SPI_ZERO;
        #endif

        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        /* Initialize the queue elements with zero */
        /* Initialize the counter as zero */
        LucVar = SPI_ZERO;
        /* Implements SPI_ESDD_UD_153 */
        /* MISRA Violation: START Msg(2:2877)-9 */
        while ((uint8)SPI_MAX_CSIH_HW_INDEX > LucVar)
        /* END Msg(2:2877)-9 */
        {
          Spi_GaaHighPriorityCommRequest[LucVar] = SPI_FALSE;
          Spi_GaaHighPriorityCommActive[LucVar] = SPI_FALSE;
          Spi_GaaHighPriorityCommRequestAtIdle[LucVar] = SPI_FALSE;
          Spi_GaaHighPrioritySequence[LucVar] = SPI_NO_SEQ;
          /* Increment number of jobs configured */
          LucVar++;
        }
        #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */

        #if ((SPI_LEVEL_DELIVERED == SPI_TWO) || \
                                              (SPI_LEVEL_DELIVERED == SPI_ZERO))
        Spi_GblSyncTx = SPI_FALSE;
        #endif
        /* Implements SPI_ESDD_UD_157 */
        #if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
        Spi_GusHwStatus = SPI_ZERO;
        #endif
        Spi_GusAllQueueSts = SPI_ZERO;
        /* Global Status variable is SPI_IDLE */
        Spi_GddDriverStatus = SPI_IDLE;

        /*Initialization when Persistent hardware configuration is
                                                               configured ON */
        #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON)
        Spi_StaticInit(SPI_INIT_SID);
        #endif
      } /* Else of ConfigPtr->ulStartOfDbToc != SPI_DBTOC_VALUE */
    }
    #if (SPI_DEV_ERROR_DETECT == STD_ON)
    else
    #endif
    {
      /* No action required */
    }
  }
  #if (SPI_LOOPBACK_SELFTEST == SPI_ONE || SPI_LOOPBACK_SELFTEST == SPI_TWO || \
       SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO )
  else
  {
    /* No action required */
  }
  #endif
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_DeInit
**
** Service ID          : 0x01
**
** Description         : This service is used for de-initialization of SPI
**                       Driver component
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : None
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : None
**
** Global Variable     : Spi_GddDriverStatus
**
** Function invoked    : Det_ReportError, Spi_HWDeInit
**
** Registers Used      : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnSTCR0, CSIHnSTR0,
**                       CSIHnMCTL0, CSIHnMCTL1, CSIHnMCTL2, CSIHnMRWP0,
**                       CSIHnCFGx, CSIHnBRSy, DCENn, DTFRRQCn, DTFRn, DSAn,
**                       DDAn, DTCTn, DCSTCn, ICRn, IMRn, DTFRRQn, DCSTn
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI_ESDD_UD_002 */
/* Implements SPI021, SPI300, SPI301, SPI302, SPI046, SPI242 */
/* Implements SPI252, SPI253, SPI022, SPI176, SPI303, EAAR_PN0034_FR_0058 */
/* Implements EAAR_PN0034_FR_0064 */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_DeInit(void)
{
  Std_ReturnType LenReturnValue;

  LenReturnValue = E_NOT_OK;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_DEINIT_SID, SPI_E_UNINIT);
  }
  else
  #endif
  {
    /* Check if Global status variable is SPI_BUSY */
    if (SPI_BUSY != Spi_GddDriverStatus)
    {
      Spi_HWDeInit();
      LenReturnValue = E_OK;

      /* Update the SPI driver status as uninitialized */
      Spi_GddDriverStatus = SPI_UNINIT;
    }
    else
    {
      /* No action required */
    }
  }
  /* Return the value */
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_WriteIB
**
** Service ID          : 0x02
**
** Description         : This service for writing one or more data to an
**                       IB SPI Handler/Driver channel specified
**                       by parameter
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Channel - Channel ID
**                       DataBufferPtr - Pointer to source data buffer
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus, Spi_GpFirstChannel
**
** Function invoked    : Det_ReportError, Spi_InternalWriteIB
**
** Registers Used      : CSIHnMRWP0, CSIHnTX0W, CSIHMCTL0
*******************************************************************************/
/* Implements SPI_ESDD_UD_003 */
/* Implements SPI_ESDD_UD_218 */
/* Implements SPI_ESDD_UD_102 */
#if (((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)) && (SPI_IB_CONFIGURED == STD_ON))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements SPI177, SPI018, SPI306, SPI004, SPI031, SPI305, SPI024, SPI098 */
/* Implements SPI356, SPI111, SPI115, SPI117, SPI137, SPI227_Conf, SPI279 */
/* Implements SPI356, SPI201_Conf, SPI197_Conf, AR_PN0063_FR_0045, SPI173 */
/* Implements AR_PN0063_FR_0046, AR_PN0063_FR_0054, AR_PN0063_FR_0058, SPI307 */
/* Implements SPI304, EAAR_PN0034_FR_0064 */

/* DataBufferPtr is the Pointer to source data buffer.As per AUTOSAR
 * requirement If this pointer is null, It is assumed that the data to be
 * transmitted is not relevant and the default transmit value of this
 * channel will be used instead. This pointer cannot be removed as it is using
 * as per the AUTOSAR requirement
 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_WriteIB(Spi_ChannelType Channel,
           P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) DataBufferPtr)
/* END Msg(2:3227)-1 */
{
  #if ((SPI_DEV_ERROR_DETECT == STD_ON) && \
       (SPI_CHANNEL_BUFFERS_ALLOWED != SPI_ZERO))
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #endif
  /* QAC Warning START Msg(2:3204)-5 */
  Std_ReturnType LenReturnValue;
  /* END Msg(2:3204)-5 */
  LenReturnValue = E_OK;
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_WRITEIB_SID,
                                                          SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Implements SPI_ESDD_UD_103 */
  /* Implements SPI_ESDD_UD_135 */
  /* Check if the channel ID passed, is valid */
  if (SPI_MAX_CHANNEL <= Channel)
  {
    /* Implements SPI_ESDD_UD_113 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_WRITEIB_SID, SPI_E_PARAM_CHANNEL);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Implements SPI_ESDD_UD_102 */
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  /* Check for no DET errors */
  if (E_OK == LenReturnValue)
  {
    /*
     * Spi_GpFirstChannel is initialized with a valid value pFirstChannel in the
     * API Spi_Init(), and it has not been modified by other functions. So
     * Spi_GpFirstChannel shall be a valid pointer. Also validation of the
     * channel ID is already taken care in DET check. LpPBChannelConfig is a
     * pointer to the constant and it is not getting modified in the code. There
     * shall be no accidental harm on the code by the usage of these pointers
     */
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer to the post-build structure of the requested channel */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(4:0488)-2 */
    /* END Msg(2:2824)-3 */

    /* QAC Warning START Msg(2:2814)-2 */
    /* Check if the channel is configured with external buffer */
    if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
    /* END Msg(2:2814)-2 */
    {
      /* Implements SPI_ESDD_UD_113 */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_WRITEIB_SID, SPI_E_PARAM_CHANNEL);
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  #endif /* End of (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */

  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* End of (SPI_DEV_ERROR_DETECT == STD_ON) */

  {
    /* DataBufferPtr is the Pointer to source data buffer.As per AUTOSAR
     * requirement If this pointer is null, It is assumed that the data to be
     * transmitted is not relevant and the default transmit value of this
     * channel will be used instead. This pointer cannot be removed as it is
     * using as per the AUTOSAR requirement
     */
    #if (SPI_IB_CONFIGURED == STD_ON)
    Spi_InternalWriteIB(Channel, DataBufferPtr, SPI_WRITEIB_SID);
    #endif /* End of (SPI_IB_CONFIGURED == STD_ON) */
  } /* End of all operations if there is no DET error */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /*
        * End of ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) ||
        * (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))
        */

/*******************************************************************************
** Function Name       : Spi_AsyncTransmit
**
** Service ID          : 0x03
**
** Description         : This service for transmitting data asynchronously
**
** Sync/Async          : Asynchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GaaSeqResult, Spi_GpFirstSeq,
**                       Spi_GpFirstJob, Spi_GaaSeqCancel,
**                       Spi_GaaSeqQueue, Spi_GpFirstJobList,
**                       Spi_GblQueueStatus, Spi_GaaJobCount,
**                       Spi_GddQueueIndex, Spi_GusAllQueueSts
**
** Function invoked    : Det_ReportError, Spi_InitiateJobTx, Spi_AsyncDetCheck
**                       Spi_AsyncInDirAccOrFifoMod, SPI_ENTER_CRITICAL_SECTION
**                       SPI_EXIT_CRITICAL_SECTION
**
** Registers Used      : CSIHnTX0W, CSIHnCTL0, CSIHnSTCR0, CSIHnSTR0,
**                       CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnBRSy,
**                       CSIHnCFGx, DCSTCn, DCSTn, DSAn, DTCTn, DTFRn,
**                       DTCn, DCENn, DCSTSn, IMRn, ICRn, DDAn, DTFRRQCn,
**                       CSIHnTX0H, DTFRRQn, CSIHnMCTL2, CSIHnRX0H,
**                       CSIHnRX0W
*******************************************************************************/
/* Implements SPI_ESDD_UD_006 */
/* Implements SPI_ESDD_UD_144 */
/* Implements SPI_ESDD_UD_141 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI178, SPI086, SPI308, SPI310, SPI309, SPI055, SPI081, SPI243 */
/* Implements SPI020, SPI167, SPI357, SPI359, SPI169, SPI217_Conf, SPI133 */
/* Implements SPI216_Conf, SPI219_Conf, SPI226_Conf, SPI230, SPI311 */
/* Implements AR_PN0063_FR_0003, AR_PN0063_FR_0030, AR_PN0063_FR_0021 */
/* Implements AR_PN0063_FR_0022, AR_PN0063_FR_0027, AR_PN0063_FR_0106 */
/* Implements AR_PN0063_FR_0109, AR_PN0063_FR_0070, AR_PN0063_FR_0072 */
/* Implements SPI085, SPI036, SPI014, SPI002, SPI236, SPI262 */
/* Implements AR_PN0063_NR_0013, AR_PN0063_FR_0118, SPI221_Conf */
/* Implements AR_PN0063_FR_0084, EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0064 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_AsyncTransmit
                                               (Spi_SequenceType Sequence)
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  /* Implements SPI_ESDD_UD_194 */
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  #endif
  /*
   * Declare a local pointer to point to status bytes ROM value for the
   * sequence
   */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  /* Declare a local pointer to point to the start byte of RAM area */
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;
  Std_ReturnType LenReturnValue;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnit;
  Spi_HWUnitType LddHWUnitNumber;
  /* Implements SPI_ESDD_UD_131 */
  Spi_JobType LddJobListIndex;
  #endif

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_JobType LddSeqCounterBottom;
  Spi_JobType LddLowestQueueIndex;
  Spi_JobType LddReqJobListIndex;
  uint8 LucQueueIndex;
  Spi_JobType LddNoOfJobs;
  #endif
  uint8 LucHWMemoryMode;
  uint8 LucVar;
  uint8 LucMask;

  #if (SPI_DEV_ERROR_DETECT == STD_OFF)
  LenReturnValue = E_OK;
  #endif

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  LenReturnValue = Spi_AsyncDetCheck(Sequence);
  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /*
     * Spi_GpFirstSeq is initialized with a valid value pFirstSeq in the
     * API Spi_Init(), and it has not been modified by other functions. Also
     * validation of the Sequence ID is already taken care in DET check.
     * LpSeqConfig is a pointer to constant value and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /* END Msg(2:2824)-3 */
    /* END Msg(4:0488)-2 */

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    /* QAC Warning START Msg(2:2814)-2 */
    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;
    /*
     * Spi_GpFirstJobList is initialized with a valid value pJobList in the
     * API Spi_Init(), and it has not been modified by other functions.
     * LddJobListIndex is the SPI job list index and will have a valid value
     * LpJobList is Pointer to a constant and will got modify further.
     * There shall be no accidental harm on the code by the usage of these
     * pointers
     */
    /* END Msg(2:2814)-2 */
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer to the job list */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* END Msg(2:2824)-3 */
    /*
     * Spi_GpFirstJob is initialized with a valid value pFirstJob in the
     * API Spi_Init(), and it has not been modified by other functions.
     * ddJobIndex is the SpiJobId and it will have a valid value.
     * LpJobList is Pointer to a constant and will got modify further.
     * There shall be no accidental harm on the code by the usage of pointer
     * these pointers
     */
    /* QAC Warning START Msg(2:2814)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer of the last job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + (LpJobList->ddJobIndex);
    /* END Msg(2:2824)-3 */
    /* END Msg(2:2814)-2 */
    /* END Msg(4:0488)-2 */
    #endif
    /* Get the status byte mask for the requested sequence */
    LucMask = LpSeqConfig->ucStsByteMask;
    /*
     * Spi_GpConfigPtr is loaded with ConfigPtr. The Null check for the
     * ConfigPtr has been done in the DET check. In addition to that a data
     * base check also carried out in the code to make sure the validity
     * of ConfigPtr. variable LpSeqConfig  points to the sequence structure.
     * There shall be no accidental harm on the code by the usage of these
     * pointers
     */
    if ((SPI_ZERO != LucMask) && (NULL_PTR != Spi_GpConfigPtr->pStatusArray))
    {
      /* MISRA Violation: START Msg(4:0488)-2 */
      /* QAC Warning START Msg(2:2814)-2 */
      LucVar =
        *((Spi_GpConfigPtr->pStatusArray) + (LpSeqConfig->usStsCheckByteIdx));
      /* END Msg(2:2814)-2 */
      /* END Msg(4:0488)-2 */

      LucVar = LucVar & LucMask;
    }
    else
    {
      LucVar = SPI_ZERO;
    }

    /*
     * Check if status byte mask is zero. This is to check if the requested
     * sequence shares any job with on - going sequence. If status byte mask
     * zero, check if any sequence with shared job in progress
     */
    if ((SPI_ZERO != LucMask) && (SPI_ZERO != LucVar))
    {
      /* Implements SPI_ESDD_UD_110 */
      #if (SPI_DEV_ERROR_DETECT == STD_ON)
      /*
       * The sequence sharing job with requested sequence is in progress
       * so, report to DET
       */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                  SPI_ASYNCTRANSMIT_SID, SPI_E_SEQ_PENDING);
      #endif
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      #if (SPI_CANCEL_API == STD_ON)
      /* Implements SPI_ESDD_UD_196 */
      /* Get the cancel byte offset for the requested sequence  */
      LucVar = Spi_GstSeqProcess[Sequence].ucCancelOffset;
      /* Get the cancel byte mask */
      LucMask = Spi_GstSeqProcess[Sequence].ucCancelMask;
      /* Implements SPI_ESDD_UD_096 */
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif

      /* Reset the cancel bit array for this sequence */
      Spi_GaaSeqCancel[LucVar] =
                               (Spi_GaaSeqCancel[LucVar] & ((uint8)(~LucMask)));

      /* Implements SPI_ESDD_UD_096 */
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif
      #endif /* End loop of (SPI_CANCEL_API == STD_ON) */
      /*
      * Spi_GpConfigPtr is loaded with ConfigPtr. The Null check for the
      * ConfigPtr has been done in the DET check. In addition to that a data
      * base check also carried out in the code to make sure the validity
      * of ConfigPtr. variable LpSeqConfig  points to the sequence structure.
      * There shall be no accidental harm on the code by the usage of these
      * pointers
      */

      /* MISRA Violation: START Msg(4:0488)-2 */
      if(NULL_PTR != Spi_GpConfigPtr->pStsValueArray)
      {
        /* Get the pointer to status bytes ROM value for the sequence */
        LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                          (LpSeqConfig->usStsValueStartByteIdx);
        /* END Msg(4:0488)-2 */
      }
      else
      {
        LpStsByteValue = NULL_PTR;
      }
      /* Get the number of status byte ROM value */
      LucVar = LpSeqConfig->ucNoOfStsByteValue;
      /* MISRA Violation: START Msg(4:0488)-2 */
      if(NULL_PTR != Spi_GpConfigPtr->pStatusArray)
      {
        /* Get the pointer to the start byte of RAM area */
        LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                        (LpSeqConfig->usStsUpdateStartByteIdx);
      }
      else
      {
        LpStsByte = NULL_PTR;
      }
      /* END Msg(4:0488)-2 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif
      /* Update driver status as busy */
      Spi_GddDriverStatus = SPI_BUSY;

      /*
       * Since no errors are reported, accept the sequence for transmission
       * Update the sequence result as SPI_SEQ_PENDING
       */
      Spi_GaaSeqResult[Sequence] = SPI_SEQ_PENDING;

      while ((SPI_ZERO < LucVar) && (NULL_PTR != LpStsByte)
                                              && (NULL_PTR != LpStsByteValue))
      {
        /* QAC Warning START Msg(2:2814)-2 */
        /*
         * Update the status bit of the requested sequence and the sequences
         * that have jobs shared with the requested sequence
         */
        *LpStsByte = (*LpStsByte | *LpStsByteValue);
        /* END Msg(2:2814)-2 */
        /* MISRA Violation: START Msg(4:0489)-1 */
        LpStsByte++;
        LpStsByteValue++;
        /* END Msg(4:0489)-1 */

        LucVar--;
      }

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif

      #if (SPI_CSIH_CONFIGURED == STD_ON)

      #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
            /* Get the number of jobs configured for the requested sequence */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
      #endif
      /* QAC Warning START Msg(2:2814)-2 */
      /* Get the HW Unit index of the any of the job in the sequence */
      LddHWUnit = LpJobConfig->ddHWUnitIndex;
      /* END Msg(2:2814)-2 */

      #if (SPI_CSIH_CONFIGURED == STD_ON)
      LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
      #endif
      #endif
      /* Implements SPI_ESDD_UD_094 */
      /* Check if Start sequence macro is enabled*/
      #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
      /* Check if the notification function is configured */
      if (NULL_PTR != LpSeqConfig->pSpiSeqStartNotification)
      {
        /* Invoke the start sequence notification function */
        LpSeqConfig->pSpiSeqStartNotification();
      }
      else
      {
        /* No action required */
      }
      #endif/* #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */

      /* Implements SPI_ESDD_UD_158 */
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      if ((SPI_TWO > LucHWMemoryMode) ||
                               (SPI_TRUE == LpSeqConfig->blIsHighPriority))
      #else
      if (SPI_TWO > LucHWMemoryMode)
      #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */
      {
        #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON)\
                                         || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        Spi_AsyncInDirAccOrFifoMod(Sequence);
        #endif /*
                * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                *           (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                *                   (SPI_FIFO_MODE == STD_ON) || \
                *                           (SPI_HW_PRIORITY_ENABLED == STD_ON))
                */
      }
      else
      {
        #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        /* Get the index of the job list for the first job of the sequence */
        LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);
        /* Implements SPI_ESDD_UD_133 */
        /* Check the value of Global variable for Hardware status */
        if (SPI_ZERO == (Spi_GucHwUnitStatus &
                                ((Spi_HWUnitType)(SPI_ONE << LddHWUnitNumber))))

        {
          /* Implements SPI_ESDD_UD_094 */
          /* Check if Start sequence macro is enabled*/
          #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
          /* Check if the notification function is configured */
          if (NULL_PTR != LpSeqConfig->pSpiSeqStartNotification)
          {
            /* Invoke the start sequence notification function */
            LpSeqConfig->pSpiSeqStartNotification();
          }
          else
          {
            /* No action required */
          }
          #endif/* #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /* Disable relevant interrupts */
          SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
          #endif

          LucQueueIndex = LddHWUnitNumber + SPI_TWO;

          /* Updating the status of the hardware */
          Spi_GucHwUnitStatus = (Spi_GucHwUnitStatus |
                                ((Spi_HWUnitType)(SPI_ONE << LddHWUnitNumber)));


          Spi_GddQueueIndex[LucQueueIndex] =
                   Spi_GpConfigPtr->aaHWUnitQueueIndex[LddHWUnit];

          /* Change the queue status as FILLED */
          Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_FILLED;

          Spi_GusAllQueueSts = (Spi_GusAllQueueSts |
                               ((uint16)((uint8)(SPI_ONE << (LucQueueIndex)))));
          /* Put the sequence in the queue */
          Spi_GaaSeqQueue[Spi_GddQueueIndex[LucQueueIndex]] = Sequence;

         #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /* Enable relevant interrupts */
          SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

          #endif
          /* Initiate the transmission for that sequence */
          Spi_InitiateJobTx(LddReqJobListIndex);
        }
        else
        {
          LucQueueIndex = LddHWUnitNumber + SPI_TWO;

          LddLowestQueueIndex = Spi_GpConfigPtr->aaHWUnitQueueIndex[LddHWUnit];

          /* Check if critical section protection is required */
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /*
           * Disable relevant interrupts to protect this critical
           * section
           */
          SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

          #endif
          /*
           * Place the sequence at the bottom of the queue by shifting
           * the sequences already in the queue by one position
           */
          LddSeqCounterBottom = Spi_GddQueueIndex[LucQueueIndex] + SPI_ONE;

          /* Load back the queue index to the bottom most element */
          Spi_GddQueueIndex[LucQueueIndex] = LddSeqCounterBottom;

          while(LddSeqCounterBottom > LddLowestQueueIndex )
          {
            /* Move the sequence entry one up in the queue */
            Spi_GaaSeqQueue[LddSeqCounterBottom] =
                            Spi_GaaSeqQueue[LddSeqCounterBottom - SPI_ONE];
            /* Decrement the pointer */
            LddSeqCounterBottom--;
          }
          /* Place the requested sequence index at the top */
          Spi_GaaSeqQueue[LddSeqCounterBottom] = Sequence;

          /* Check if critical section protection is required */
          #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
          /* Disable relevant interrupts to protect this critical section */
          SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

          #endif
        }
        #endif /*
                * End of ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
                *                           (SPI_TX_ONLY_MODE == STD_ON))
                */
      } /* End of else loop of checking if the job queue is empty */
    } /* End of else loop of checking for sequences sharing jobs */
  } /* End of the check if any DET error has occurred */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        *   (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name       : Spi_ReadIB
**
** Service ID          : 0x04
**
** Description         : This service for reading one or more data from an
**                       IB SPI Handler/Driver channel specified by
**                       parameter
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Channel - Channel ID
**                       DataBufferPointer - Pointer to destination data
**                       buffer
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus
**
** Function invoked    : Det_ReportError, Spi_HWReadIB
**
** Registers Used      : CSIHnRX0W, CSIHnRX0H, CSIHnMRWP0
*******************************************************************************/
/* Implements SPI_ESDD_UD_004 */
#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI138, SPI312, SPI313, SPI314, SPI179, SPI027, SPI016, SPI315 */
/* Implements SPI004, SPI031, SPI063, SPI104_Conf, SPI204_Conf, SPI205_Conf */
/* Implements SPI202_Conf, SPI206_Conf, SPI149, AR_PN0063_FR_0019, SPI173 */
/* Implements SPI065, SPI034, EAAR_PN0034_FR_0064 */
/*
 * DataBufferPointer is the Pointer to destination data buffer in RAM. This
 * pointer cannot be removed as it has been used as per the AUTOSAR requirement.
 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_ReadIB
               (Spi_ChannelType Channel, P2VAR(Spi_DataType, AUTOMATIC,
                                          SPI_APPL_DATA) DataBufferPointer)
/* END Msg(2:3227)-1 */
{
  #if (((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) && \
      (SPI_DEV_ERROR_DETECT == STD_ON)) || (SPI_IB_MODE == STD_ON)|| \
      ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO)))

  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #endif

  #if ((SPI_IB_MODE == STD_ON) ||  ((SPI_TX_ONLY_MODE == STD_ON) && \
                                        (SPI_INTERNAL_RW_BUFFERS == STD_ON)))
  /* Defining a local pointer variable to hold the destination data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpDesPtr;
  /* Implements SPI_ESDD_UD_128 */
  Spi_NumberOfDataType LddNoOfBuffers;
  #endif

  #if (SPI_IB_MODE == STD_ON)
  /*
   * Defining a local pointer variable to point to internal buffer of the
   * requested channel
   */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpChannelIB;
  #endif
  /* Implements SPI_ESDD_UD_147 */
  #if ((SPI_TX_ONLY_MODE == STD_ON) && (SPI_INTERNAL_RW_BUFFERS == STD_ON))
  /* Defining a local pointer variable to hold the Tx data of requested IB */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpTxOnlyData;

  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  Spi_DataAccess LunDataAccess1;
  #endif
  /* Implements SPI_ESDD_UD_127 */
  Spi_DataType LddData;
  #endif /* #if (SPI_TX_ONLY_MODE == STD_ON) */
  #if ((SPI_IB_MODE == STD_ON) || ((SPI_CSIH_CONFIGURED == STD_ON)\
                                   && (SPI_LEVEL_DELIVERED != SPI_ZERO)))
  uint8 LucChannelBufferType;
  #endif
  /* QAC Warning START Msg(2:3204)-5 */
  Std_ReturnType LenReturnValue;
  /* END Msg(2:3204)-5 */

  LenReturnValue = E_OK;
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_READIB_SID,
                                                         SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Implements SPI_ESDD_UD_103 */
  /* Implements SPI_ESDD_UD_135 */
  /* Check if the channel ID passed, is valid */
  if (SPI_MAX_CHANNEL <= Channel)
  {
    /* Implements SPI_ESDD_UD_113 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_READIB_SID, SPI_E_PARAM_CHANNEL);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  /* Check if the data buffer pointer passed, is NULL pointer */
  if (NULL_PTR == DataBufferPointer)
  {
    /* Implements SPI_ESDD_UD_119 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_READIB_SID, SPI_E_PARAM_POINTER);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  /* Implements SPI_ESDD_UD_102 */
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  /* Check for no DET errors */
  if (E_OK == LenReturnValue)
  {
    /*
     * Spi_GpFirstChannel is initialized with a valid value pFirstChannel in the
     * API Spi_Init(), and it has not been modified by other functions.
     * The validation of the channel ID is already taken care in DET check.
     * LpPBChannelConfig is pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer to the post-build structure of the requested channel */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(2:2824)-3 */
    /* END Msg(4:0488)-2 */

    /* QAC Warning START Msg(2:2814)-2 */
    /* Check if the channel is configured with external buffer */
    if (SPI_ONE == (LpPBChannelConfig->ucChannelBufferType))
    /* END Msg(2:2814)-2 */
    {
      /* Implements SPI_ESDD_UD_113 */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_READIB_SID, SPI_E_PARAM_CHANNEL);
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  #endif /* End of (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */

  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* End of SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /*
     * Spi_GpFirstChannel is initialized with a valid value pFirstChannel in the
     * API Spi_Init(), and it has not been modified by other functions. Also
     * validation of the channel ID is already taken care in DET check.
     * LpPBChannelConfig is pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    #if ((SPI_IB_MODE == STD_ON)|| ((SPI_CSIH_CONFIGURED == STD_ON) \
                                    && (SPI_LEVEL_DELIVERED != SPI_ZERO)))
    /* Get the pointer to the post-build structure of the channel */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(4:0488)-2 */
    /* END Msg(2:2824)-3 */
    /* QAC Warning START Msg(2:2814)-2 */
    /* Get the the type of the channel */
    LucChannelBufferType = LpPBChannelConfig->ucChannelBufferType;
    /* END Msg(2:2814)-2 */
    #endif

    #if ((SPI_IB_MODE == STD_ON) || ((SPI_TX_ONLY_MODE == STD_ON) && \
                                     (SPI_INTERNAL_RW_BUFFERS == STD_ON)))
    /*
     * DataBufferPtr is the Pointer to destination data buffer in RAM. This
     * pointer cannot be removed as it has been used as per the AUTOSAR
     * requirement
     */
    /* Copy the destination pointer value to a local pointer variable */
    LpDesPtr = DataBufferPointer;
    /* Implements SPI_ESDD_UD_186 */
    /* Get the number of buffers configured for the requested channel */
    LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
    #endif

    #if (SPI_IB_MODE == STD_ON)
    /* Check if the buffer type is internal buffer and not hardware buffer */
    if (SPI_TWO > LucChannelBufferType)
    {
      /* Spi_GpConfigPtr is loaded with ConfigPtr.
       * The Null check for the ConfigPtr has been done in the
       * DET check. In addition to that a data base check also carried out in
       * the code to make sure the validity of ConfigPtr. The pointer
       * pChannelIBRead is filled with a valid value when direct access/fifo
       * mode is configured and it has been taken care in the code. There shall
       * be no accidental harm in the code by the usage of pointer LpChannelIB
       */
      /* MISRA Violation: START Msg(4:0488)-2 */
      /* QAC Warning START Msg(2:2814)-2 */
      /* Get the pointer to the internal buffer of the requested channel */
      LpChannelIB = Spi_GpConfigPtr->pChannelIBRead;
      /* END Msg(2:2814)-2 */
      /* Implements SPI_ESDD_UD_208 */
      /* QAC Warning START Msg(2:2824)-3 */
      LpChannelIB = LpChannelIB + LpPBChannelConfig->ddBufferIndex;
      /* END Msg(2:2824)-3 */
      /* END Msg(4:0488)-2 */

      do
      {
        /*
         * Copy the data from the internal buffer to the destination data
         * buffer
         */
        /* Data width is maximum 8-bit */
        /* QAC Warning START Msg(2:2814)-2 */
        *LpDesPtr = *LpChannelIB;
        /* END Msg(2:2814)-2 */

        /* MISRA Violation: START Msg(4:0489)-1*/
        /* Increment the internal buffer pointer */
        LpChannelIB++;

        /* Increment the destination pointer */
        LpDesPtr++;
        /* END Msg(4:0489)-1*/

        /* Decrement the counter for number of buffers */
        LddNoOfBuffers--;
      } while (SPI_ZERO < LddNoOfBuffers);
    } /* End of operations if the buffer type is 'internal buffer' */
    else
    #endif /* #if (SPI_IB_MODE == STD_ON) */
    {
      #if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED != SPI_ZERO))
      if (SPI_TX_ONLY_MODE_CONFIGURED ==
             (Spi_GpConfigPtr->aaHWMemoryMode[LucChannelBufferType - SPI_TWO]))
      {
        #if ((SPI_TX_ONLY_MODE == STD_ON) && \
                                          (SPI_INTERNAL_RW_BUFFERS == STD_ON))
        /*
         * The pointer pChannelIBRead is filled with a valid value when direct
         * access/fifo mode is configured and it has been checked in the code.
         * ddBufferIndex is filled with value in accordance with the mandatory
         * parameter SpiChannelType.SPI_RX_BUFFER_START is filled if both direct
         * access/fifo mode and tx only mode is configured. So there shall be no
         * harm on performing pointer arithmetic here
         */
        /* Get the pointer to the internal buffer of the requested channel */
        /* MISRA Violation: START Msg(4:0488)-2 */
        LpTxOnlyData = Spi_GpConfigPtr->pChannelIBRead +
                     ((LpPBChannelConfig->ddBufferIndex) + SPI_RX_BUFFER_START);
        /* END Msg(4:0488)-2 */
        do
        {
          #if (SPI_8BIT_DATA_WIDTH == STD_ON)
          /*
           * Data width is maximum 8-bit. Hence, Receive the data from the Rx
           * register to local union variable
           */
          /* QAC Warning START Msg(2:2814)-2 */
          LddData = (uint8)(*LpTxOnlyData);
          /* END Msg(2:2814)-2 */

          #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
          LddData = *LpTxOnlyData;

          #else
          /*
           * Data width is maximum 32-bit, check if the the data width of
           * requested channel is more than 16 bits
           */
          LddData = *LpTxOnlyData;

          if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
          {
            /* MISRA Violation: START Msg(4:0489)-1 */
            LpTxOnlyData++;
            /* END Msg(4:0489)-1 */

            LddNoOfBuffers--;
            /* Check if the configured data direction is LSB first */
            if (SPI_TRUE == LpPBChannelConfig->blDirection)
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
              LddData = ((LddData) >> (SPI_SIXTEEN ));
              LunDataAccess1.usRegData5[0] = (uint16)LddData;
              (*LpTxOnlyData ) = ((*LpTxOnlyData) >> (SPI_SIXTEEN));
              LunDataAccess1.usRegData5[1] = (uint16)(*LpTxOnlyData);
            }
            else
            {
              /*
               * Take a local union variable to construct the value from RX0W
               * register
               */
               if (SPI_ZERO != LpPBChannelConfig->ucDLSSetting)
               {
                 LunDataAccess1.usRegData5[1] = (uint16)LddData;
                 LunDataAccess1.usRegData5[0] = (uint16)*LpTxOnlyData;
                 LunDataAccess1.usRegData5[0] = LunDataAccess1.usRegData5[0] <<
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
                 LunDataAccess1.ulRegData  = LunDataAccess1.ulRegData >>
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
               }
               else
               {
                 LunDataAccess1.usRegData5[1] = (uint16)LddData;
                 LunDataAccess1.usRegData5[0] = (uint16)*LpTxOnlyData;
               }
            } /* End of if (SPI_TRUE == LpPBChannelConfig->blDirection) */
            LddData = LunDataAccess1.ulRegData;
          }
          else
          {
            /* No action required */
          }
          #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON)*/

          *LpDesPtr = LddData;
          /* MISRA Violation: START Msg(4:0489)-1 */
          LpTxOnlyData++;
          /* Increment the destination pointer */
          LpDesPtr++;
          /* END Msg(4:0489)-1 */

          /* Decrement the counter for number of buffers */
          LddNoOfBuffers--;
        } while (SPI_ZERO < LddNoOfBuffers);
        #endif /* (SPI_TX_ONLY_MODE == STD_ON) */
      } /*
         *#if ((SPI_CSIH_CONFIGURED == STD_ON) && (SPI_LEVEL_DELIVERED !=
         * SPI_ZERO))
         */
      else
      {
        /*
         * DataBufferPointer is the Pointer to destination data buffer in RAM.
         * This pointer cannot be removed as it has been used as per the AUTOSAR
         * requirement.
         */

        #if (SPI_DUAL_BUFFER_MODE == STD_ON)
        /* Memory mode is 'Dual Buffer Mode' */
        Spi_HWReadIB(Channel, DataBufferPointer);
        #endif /* (SPI_DUAL_BUFFER_MODE == STD_ON) */
      }
      #endif /* End of ((SPI_CSIH_CONFIGURED == STD_ON) &&
                                      (SPI_LEVEL_DELIVERED != SPI_ZERO))*/
    }
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ZERO) || \
                     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)) */

/*******************************************************************************
** Function Name       : Spi_SetupEB
**
** Service ID          : 0x05
**
** Description         : This service for setting the buffers and the length
**                       of data for the external buffer of the channel
**                       specified
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Channel - Channel ID
**                       SrcDataBufferPtr - Pointer to source data buffer
**                       DesDataBufferPtr - Pointer to destination data
**                       buffer in RAM Length - Length of the data
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus, Spi_GpConfigPtr,
**                       Spi_GaaChannelEBData, Spi_GpFirstChannel
**
* Function invoked     : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_005 */
/* Implements SPI_ESDD_UD_102 */
#if ((SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE) || \
     (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*
 * SrcDataBufferPtr is the pointer to the source data buffer and
 * DesDataBufferPtr is the Pointer to destination data buffer in RAM.
 * SrcDataBufferPtr and DesDataBufferPtr has been given as per the AUTOSAR
 * requirement and it cannot be removed
 */
/* Implements SPI180, SPI028, SPI058, SPI030, SPI317, SPI316, SPI318, SPI139 */
/* Implements SPI067, SPI046, SPI004, SPI031, SPI060, SPI258, SPI240, SPI355 */
/* Implements AR_PN0063_FR_0020, AR_PN0063_FR_0043, AR_PN0063_FR_0044*/
/* Implements EAAR_PN0034_FR_0064*/
/* Implements SPI_ESDD_UD_129, SPI078, SPI077, SPI037, SPI173 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SetupEB
    (Spi_ChannelType Channel,
     P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_DATA) SrcDataBufferPtr,
     P2VAR(Spi_DataType, AUTOMATIC, SPI_APPL_DATA) DesDataBufferPtr,
     Spi_NumberOfDataType Length)
/* END Msg(2:3227)-1 */
{
  #if ((SPI_DEV_ERROR_DETECT == STD_ON) || \
      ((SPI_EB_CONFIGURED == STD_ON) && (SPI_DEV_ERROR_DETECT == STD_OFF)))
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  #endif
  /* Implements SPI_ESDD_UD_093 */
  #if (SPI_EB_CONFIGURED == STD_ON)
  /*
   * Defining a local pointer variable to point to buffer of the
   * requested channel
   */
  P2VAR(Spi_EBData, AUTOMATIC, SPI_CONFIG_DATA) LpChannelEB;
  #endif
  /* QAC Warning START Msg(2:3204)-5 */
  Std_ReturnType LenReturnValue;
  /* END Msg(2:3204)-5 */

  LenReturnValue = E_OK;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_SETUPEB_SID,
                                                            SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {

  }
  /* Implements SPI_ESDD_UD_103 */
  /* Implements SPI_ESDD_UD_135 */
  /* Check if the channel ID passed, is valid */
  if ((SPI_MAX_CHANNEL <= Channel) && (E_OK == LenReturnValue))
  {
    /* Implements SPI_ESDD_UD_113 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                      SPI_SETUPEB_SID, SPI_E_PARAM_CHANNEL);
    LenReturnValue = E_NOT_OK;
  }
  /* If it is valid channel ID, check if the length passed is valid */
  else
  {
    /*
     * Spi_GpFirstChannel is initialized with a valid value pFirstChannel in the
     * API Spi_Init(),and it has not been modified by other functions.validation
     * of the channel ID is also taken care in the code. LpPBChannelConfig
     * is a pointer to the constant and it is not getting modified in the code.
     * There shall be no accidental harm on the code by the usage of these
     * pointers
    */
    if (E_OK == LenReturnValue)
    {
      /* START Msg(2:0488)-2 */
      /* QAC Warning START Msg(2:2824)-3 */
      /* Get the pointer to the channel link-time structure */
      LpPBChannelConfig = Spi_GpFirstChannel + Channel;
      /* END Msg(2:2824)-3 */
      /* END Msg(2:0488)-2 */

      /*
       * Check if the 'length' parameter is greater than configured length and if
       * length is equal to zero
       */
      /* QAC Warning START Msg(2:2814)-2 */
      if ((SPI_ZERO == Length) || (Length > (LpPBChannelConfig->ddNoOfBuffers)))
      /* END Msg(2:2814)-2 */
      {
        /* Implements SPI_ESDD_UD_118 */
        /* Report to DET */
        (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                           SPI_SETUPEB_SID, SPI_E_PARAM_LENGTH);
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* No action required */
    }
    /* Implements SPI_ESDD_UD_102 */
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    if (E_OK == LenReturnValue)
    {
      /* Check if the requested channel is configured for internal buffer */
      if (SPI_ONE != (LpPBChannelConfig->ucChannelBufferType))
      {
        /* Implements SPI_ESDD_UD_113 */
        /* Report to DET */
        (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                          SPI_SETUPEB_SID, SPI_E_PARAM_CHANNEL);
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* No action required */
    }
    #endif /* (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */
  }

  /* Check if any DET error has occurred */
  if (E_OK == LenReturnValue)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    #if (SPI_EB_CONFIGURED == STD_ON)
    #if (SPI_DEV_ERROR_DETECT == STD_OFF)

    /*
     * Spi_GpFirstChannel is initialized with a valid value pFirstChannel in the
     * API Spi_Init(), and it has not been modified by other functions.
     * The validation of the channel ID is already taken care in DET check.
     * LpPBChannelConfig is pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* START Msg(2:0488)-2 */
    /* Get the pointer to the requested structure */
    /* QAC Warning START Msg(2:2824)-3 */
    LpPBChannelConfig = Spi_GpFirstChannel + Channel;
    /* END Msg(2:2824)-3 */
    /* END Msg(2:0488)-2 */
    #endif
    /*
     * ddBufferIndex is filled with value in accordance with the mandatory
     * parameter SpiChannelType. LddBufferIndex shall not be a Null value
     */
    /* Get the pointer to the buffer of the requested channel */
    /* QAC Warning START Msg(2:2814)-2 */
    LpChannelEB = &Spi_GaaChannelEBData[LpPBChannelConfig->ddBufferIndex];
    /* END Msg(2:2814)-2 */
    /*
     * Copy the source pointer to RAM area allocated for the external
     * buffer attributes of the channel
     */
    /* Implements SPI_ESDD_UD_197 */
    LpChannelEB->pSrcPtr = SrcDataBufferPtr;
    /* Copy the destination pointer value to a local pointer variable */
    LpChannelEB->pDestPtr = DesDataBufferPtr;
    /* Copy length for that channel */
    LpChannelEB->ddEBLength = Length;
    #endif  /* End of (SPI_EB_CONFIGURED == STD_ON) */
  } /* End of all operations if there is no DET error */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_ONE ||
                    SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */

/*******************************************************************************
** Function Name       : Spi_GetStatus
**
** Service ID          : 0x06
**
** Description         : This service is for getting the status of SPI
**                       Driver Component
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : None
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_StatusType (SPI_UNINIT/SPI_IDLE/SPI_BUSY)
**
** Preconditions       : None
**
** Global Variable     : Spi_GddDriverStatus
**
** Function Invoked    : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI_ESDD_UD_009 */
/* Implements SPI181, SPI025, SPI319, SPI345, SPI320, SPI347, SPI046, SPI259 */

FUNC(Spi_StatusType, SPI_PUBLIC_CODE) Spi_GetStatus(void)
{
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                 SPI_GETSTATUS_SID, SPI_E_UNINIT);
  }
  else
  {
    /* No action required */
  }
  #endif /* (SPI_DEV_ERROR_DETECT == STD_ON) */
  return(Spi_GddDriverStatus);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_GetJobResult
**
** Service ID          : 0x07
**
** Description         : This service is for getting result of the
**                       specified job
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Job - Job ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_JobResultType
**                       (SPI_JOB_OK/SPI_JOB_PENDING/SPI_JOB_FAILED)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaJobResult
**
** Function invoked    : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* QAC Warning START Msg(2:3227)-1 */
/* Implements SPI_ESDD_UD_011 */
/* Implements SPI026, SPI038, SPI182, SPI321, SPI322, SPI046, SPI032, SPI350 */
/* Implements SPI237, SPI062, SPI012, SPI261, SPI198_Conf, SPI256, SPI267 */
/* Implements EAAR_PN0034_FR_0064 */
FUNC(Spi_JobResultType, SPI_PUBLIC_CODE)
                       Spi_GetJobResult(Spi_JobType Job)
/* END Msg(2:3227)-1 */
{
  /* Implements SPI_ESDD_UD_125 */
  Spi_JobResultType LddJobResult;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_GETJOBRESULT_SID, SPI_E_UNINIT);
    LddJobResult = SPI_JOB_FAILED;
  }
  else
  {
    LddJobResult = SPI_JOB_OK;
  }
  /* Implements SPI_ESDD_UD_104 */
  /* Implements SPI_ESDD_UD_136 */
  /* Check if the job ID passed, is valid */
  if (SPI_MAX_JOB <= Job)
  {
    /* Implements SPI_ESDD_UD_112 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_GETJOBRESULT_SID, SPI_E_PARAM_JOB);
    if (SPI_JOB_OK == LddJobResult)
    {
      LddJobResult = SPI_JOB_FAILED;
    }
    else
    {
      /* No Action Required */
    }
  }
  else
  {
    /* No Action Required */
  }

  if (SPI_JOB_OK == LddJobResult)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    LddJobResult = Spi_GaaJobResult[Job];
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LddJobResult);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_GetSequenceResult
**
** Service ID          : 0x08
**
** Description         : This service is for getting result of the specified
**                       sequence
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_SeqResultType
**                       (SPI_SEQ_OK/SPI_SEQ_PENDING/SPI_SEQ_FAILED/
**                        SPI_SEQ_CANCELLED)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaSeqResult
**
** Function invoked    : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI_ESDD_UD_012 */
/* Implements SPI_ESDD_UD_126 */
/* Implements SPI183, SPI042, SPI324, SPI353, SPI354, SPI251, SPI323, SPI046 */
/* Implements SPI032, SPI039, SPI017, SPI019, SPI351, SPI199_Conf */
/* Implements EAAR_PN0034_FR_0064 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Spi_SeqResultType, SPI_PUBLIC_CODE)
                       Spi_GetSequenceResult(Spi_SequenceType Sequence)
/* END Msg(2:3227)-1 */
{
  Spi_SeqResultType LddSeqResult;
  /* Implements SPI_ESDD_UD_139 */
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                  SPI_GETSEQUENCERESULT_SID, SPI_E_UNINIT);
    LddSeqResult = SPI_SEQ_FAILED;
  }
  else
  {
    LddSeqResult = SPI_SEQ_OK;
  }
  /* Implements SPI_ESDD_UD_105 */
  /* Implements SPI_ESDD_UD_114 */
  /* Implements SPI_ESDD_UD_137 */
  /* Check if the Sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                  SPI_GETSEQUENCERESULT_SID, SPI_E_PARAM_SEQ);
    if (SPI_SEQ_OK == LddSeqResult)
    {
      LddSeqResult = SPI_SEQ_FAILED;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }

  if (SPI_SEQ_OK == LddSeqResult)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    LddSeqResult = Spi_GaaSeqResult[Sequence];
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LddSeqResult);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_SyncTransmit
**
** Service ID          : 0x0A
**
** Description         : This service is for transmitting data synchronously
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus, Spi_GpFirstSeq,
**                       Spi_GpFirstJob, Spi_GddSyncDriverStatus,
**                       Spi_GstHWUnitInfo, Spi_GpFirstJobList, Spi_GusHwStatus
**
** Function invoked    : Det_ReportError, Spi_InitiateSycTransmit,
**                       SPI_EXIT_CRITICAL_SECTION, SPI_ENTER_CRITICAL_SECTION
**
** Registers Used      : CSIHnCTL0, CSIHnCFGx, ICRn, CSIHnMCTL0, CSIHnSTCR0,
**                       CSIHnCTL2, CSIHnBRSy, CSIHnSTR0, CSIHnTX0W,
**                       CSIHnRX0H, CSIHnCTL1
*******************************************************************************/
/* Implements SPI_ESDD_UD_165 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI_ESDD_UD_132 */
/* Implements SPI185, SPI327, SPI329, SPI046, SPI032, SPI135, SPI238_Conf */
/* Implements SPI109, SPI110, SPI136, SPI160, SPI162, SPI231_Conf */
/* Implements SPI237_Conf, AR_PN0063_FR_0131, AR_PN0063_FR_0132, SPI140 */
/* Implements AR_PN0063_FR_0027, AR_PN0063_FR_0108, SPI330, AR_PN0063_NR_0014 */
/* Implements EAAR_PN0034_FSR_0011, SPI130, SPI129, EAAR_PN0034_FR_0061 */
/* Implements EAAR_PN0034_FR_0064 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SyncTransmit
                                                (Spi_SequenceType Sequence)
/* END Msg(2:3227)-1 */
{
  #if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON || \
          ( (SPI_DEV_ERROR_DETECT == STD_ON) && SPI_LEVEL_DELIVERED == SPI_TWO))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #endif
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  #if (SPI_LEVEL_DELIVERED == SPI_TWO)
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobIndex;
  #endif
  #endif
  Std_ReturnType LenReturnValue;

  LenReturnValue = E_OK;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_SYNCTRANSMIT_SID, SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Implements SPI_ESDD_UD_105 */
  /* Implements SPI_ESDD_UD_137 */
  /* Check if the sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Implements SPI_ESDD_UD_114 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_SYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }

  if (E_OK == LenReturnValue)
  {
    /*
     * Spi_GpFirstSeq is initialized with a valid value pFirstSeq in the
     * API Spi_Init(), and it has not been modified by other functions. Also
     * validation of the Sequence ID is already taken care in DET check.
     * LpSeqConfig is pointer to constant and it is not getting modified further
     * There shall be no accidental harm on the code by the usage of the pointer
     */
    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    /* START Msg(2:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /*
     * Spi_GpFirstJobList is initialized with a valid value pJobList in the
     * API Spi_Init(), and it has not been modified by other functions.
     * ddJobListIndex is the SPI job list index and it has a valid value.
     * LpJobList is pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* QAC Warning START Msg(2:2814)-2 */
    LpJobList = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
    /* END Msg(2:0488)-2 */
    /* END Msg(2:2824)-3 */
    /* END Msg(2:2814)-2 */
    /*
     * ddJobIndex is the SpiJobId and it is a mandatory parameter. So there
     * shall be no harm on  using pointer here
     */
    /* QAC Warning START Msg(2:2814)-2 */
    LddJobIndex = LpJobList->ddJobIndex;
    /* END Msg(2:2814)-2 */
    /*
     * Spi_GpFirstJob is initialized with a valid value pFirstJob in the
     * API Spi_Init(), and it has not been modified by other functions.
     * LddJobIndex is the SpiJobId and it has a valid value.  LpJobConfig is
     * a pointer to constant and it is not getting modified further.
     * There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* START Msg(2:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer of the first job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + LddJobIndex;
    /* END Msg(2:0488)-2 */
    /* END Msg(2:2824)-3 */
    /* QAC Warning START Msg(2:2814)-2 */
    if (SPI_FALSE ==
                (Spi_GstHWUnitInfo[LpJobConfig->ddHWUnitIndex].blIsSynchronous))
    /* END Msg(2:2814)-2 */
    {
      /* Implements SPI_ESDD_UD_114 */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                       SPI_SYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */
  }
  else
  {
    /* No action required */
  }

  if (E_OK == LenReturnValue)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /*
     * Spi_GpFirstSeq is initialized with a valid value pFirstSeq in the
     * API Spi_Init(), and it has not been modified by other functions. Also
     * validation of the Sequence ID is already taken care in DET check.
     * LpSeqConfig is a pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * the pointer
     */
    /* Check if the concurrent sync transmit is enabled */

    /* Implements SPI_ESDD_UD_157 */
    #if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
    #if ((SPI_DEV_ERROR_DETECT == STD_OFF) || (SPI_LEVEL_DELIVERED != SPI_TWO))
    /* START Msg(2:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /* END Msg(2:0488)-2 */
    /* END Msg(2:2824)-3 */
    #endif
    /* QAC Warning START Msg(2:2814)-2 */
    /* Check the value of Global variable for Hardware status */
    if (SPI_ZERO == (Spi_GusHwStatus & (LpSeqConfig->usHWListIndex)))
    /* END Msg(2:2814)-2 */
    {
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif

      /* Updating the status of the hardware */
      Spi_GusHwStatus = (Spi_GusHwStatus | (LpSeqConfig->usHWListIndex));

      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif
    }
    else
    {
      /* Implements SPI_ESDD_UD_111 */
      /* Report to DET */
      #if (SPI_DEV_ERROR_DETECT == STD_ON)
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_SYNCTRANSMIT_SID, SPI_E_SEQ_IN_PROCESS);
      #endif

      LenReturnValue = E_NOT_OK;
    }
    #else
    /* Check if the SPI Driver is transmitting a sequence */
    if (SPI_BUSY == Spi_GddSyncDriverStatus)
    {
      /* Implements SPI_ESDD_UD_111 */
      #if (SPI_DEV_ERROR_DETECT == STD_ON)
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_SYNCTRANSMIT_SID, SPI_E_SEQ_IN_PROCESS);
      #endif

      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
    #endif /* (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON) */
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }

  if (E_OK == LenReturnValue)
  {
    LenReturnValue = Spi_InitiateSyncTransmit(Sequence);
  }
  else
  {
    /* No action required */
  }

   return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
        * ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        *                                 (SPI_DIRECT_ACCESS_MODE == STD_ON)))
        */

/*******************************************************************************
** Function Name       : Spi_GetHWUnitStatus
**
** Service ID          : 0x0B
**
** Description         : This service is getting the status of the SPI
**                       Hardware micro-controller peripheral
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : HWUnit - ID of CSIG/CSIH Hardware Unit
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Spi_StatusType (SPI_UNINIT/SPI_IDLE/SPI_BUSY)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus
**
** Function invoked    : Det_ReportError, Spi_HWUnitStatus
**
** Registers Used      : CSIHnSTR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_084 */
#if (SPI_HW_STATUS_API == STD_ON)

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* QAC Warning START Msg(2:3227)-1 */
/* Implements SPI_ESDD_UD_010 */
/* Implements SPI_ESDD_UD_124 */
/* Implements SPI186, SPI141, SPI288, SPI331, SPI332, SPI287, SPI046, SPI143 */
/* Implements SPI241, SPI061, SPI011, SPI348, SPI346, SPI367, SPI275, SPI142 */
/* Implements EAAR_PN0034_FR_0064 */
/* Implements SPI229_Conf, SPI260 */
FUNC(Spi_StatusType, SPI_PUBLIC_CODE) Spi_GetHWUnitStatus
                                                 (Spi_HWUnitType HWUnit)
/* END Msg(2:3227)-1 */
{
  Spi_StatusType LddHWUnitSts;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_GETHWUNITSTATUS_SID, SPI_E_UNINIT);
    LddHWUnitSts = SPI_UNINIT;
  }
  else
  {
    LddHWUnitSts = SPI_IDLE;
  }
  /* Implements SPI_ESDD_UD_155 */
  if (SPI_MAX_HW_DETAILS <= HWUnit)
  {
    /* Implements SPI_ESDD_UD_120 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_GETHWUNITSTATUS_SID, SPI_E_PARAM_UNIT);
    if (SPI_IDLE == LddHWUnitSts)
    {
      LddHWUnitSts = SPI_UNINIT;
    }
    else
    {
      /* No Action Required */
    }
  }
  else
  {
    /* No Action Required */
  }
  if (SPI_IDLE == LddHWUnitSts)
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    LddHWUnitSts = Spi_HWUnitStatus(HWUnit);
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
  return(LddHWUnitSts);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* End of (SPI_HW_STATUS_API == STD_ON) */

/*******************************************************************************
** Function Name       : Spi_Cancel
**
** Service ID          : 0x0C
**
** Description         : This service is for cancelling a on-going sequence
**
** Sync/Async          : Asynchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Sequence - Sequence ID
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : None
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus, Spi_GaaSeqCancel,
**                       Spi_GpFirstSeq, Spi_GpFirstJob, Spi_GstHWUnitInfo,
**                       Spi_GpFirstJobList
**
** Function invoked    : Det_ReportError, Spi_HWCancel
**                       SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used      : CSIHnCTL0, ICRn, IMRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_008 */
/* Implements SPI_ESDD_UD_086 */
#if (SPI_CANCEL_API == STD_ON)

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI145, SPI187, SPI333, SPI334, SPI046, SPI032, SPI144, SPI238 */
/* Implements SPI105_Conf, SPI146, EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0064 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(void, SPI_PUBLIC_CODE) Spi_Cancel(Spi_SequenceType Sequence)
/* END Msg(2:3227)-1 */
{
  #if ((SPI_LEVEL_DELIVERED == SPI_TWO) && (SPI_DEV_ERROR_DETECT == STD_ON))
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobListIndex;
  #endif
  #if ((SPI_LEVEL_DELIVERED == SPI_TWO) && (SPI_DEV_ERROR_DETECT == STD_ON))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #endif
  uint8 LucStatusOffset;
  uint8 LucStatusMask;

  #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON))
  uint8 LucIndex;
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  boolean LblErrorValue;
  #endif

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  LblErrorValue = SPI_FALSE;

  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_CANCEL_SID, SPI_E_UNINIT);
    LblErrorValue = SPI_TRUE;
  }
  else
  {
    /* No action required */
  }
  /* Implements SPI_ESDD_UD_105 */
  /* Implements SPI_ESDD_UD_137 */
  /* Check if the sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Implements SPI_ESDD_UD_114 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                     SPI_CANCEL_SID, SPI_E_PARAM_SEQ);
    LblErrorValue = SPI_TRUE;
  }
  else
  {
    /* No action required */
  }

  #if (SPI_LEVEL_DELIVERED == SPI_TWO)
  if (SPI_FALSE == LblErrorValue)
  {
    /*
     * Spi_GpFirstSeq is initialized with a valid value pFirstSeq in the
     * API Spi_Init(), and it has not been modified by other functions.
     * The validation of the Sequence ID is already taken care in DET check.
     * LpSeqConfig is pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* START Msg(2:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /* END Msg(2:0488)-2 */
    /* END Msg(2:2824)-3 */
    /* QAC Warning START Msg(2:2814)-2 */
    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;
    /* END Msg(2:2814)-2 */
    /*
     * Spi_GpFirstJobList is initialized with a valid value pJobList in the
     * API Spi_Init(), and it has not been modified by other functions.
     * LddJobListIndex is the SPI job list index and it has a valid value.
     * LpJobList is pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* QAC Warning START Msg(2:2824)-3 */
    /* START Msg(2:0488)-2 */
    /* Get the pointer to the job list */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* END Msg(2:0488)-2 */
    /* END Msg(2:2824)-3 */
    /*
     * Spi_GpFirstJob is initialized with a valid value pFirstJob in the
     * API Spi_Init(), and it has not been modified by other functions.
     * ddJobIndex is the SpiJobId and it has a valid value.
     * LpJobConfig is pointer to constant and it is not getting modified
     * further. There shall be no accidental harm on the code by the usage of
     * these pointers
     */
    /* START Msg(2:0488)-2 */
    /* QAC Warning START Msg(2:2824)-3 */
    /* QAC Warning START Msg(2:2814)-2 */
   /* Get the pointer of the last job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + (LpJobList->ddJobIndex);
    /* END Msg(2:0488)-2 */
    /* END Msg(2:2824)-3 */
    /* END Msg(2:2814)-2 */

    /* QAC Warning START Msg(2:2814)-2 */
    /*
     * Check if the HW Unit of the job is configured for synchronous
     * transmission
     */
    if (SPI_TRUE ==
                (Spi_GstHWUnitInfo[LpJobConfig->ddHWUnitIndex].blIsSynchronous))
    /* END Msg(2:2814)-2 */
    {
      /* Implements SPI_ESDD_UD_114 */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                               SPI_CANCEL_SID, SPI_E_PARAM_SEQ);

      LblErrorValue = SPI_TRUE;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */

  if (SPI_FALSE == LblErrorValue)
  #endif /* End of SPI_DEV_ERROR_DETECT == STD_ON */
  {
    /* Implements SPI_ESDD_UD_196 */
    /* Get the cancel byte offset for the requested sequence */
    LucStatusOffset = Spi_GstSeqProcess[Sequence].ucCancelOffset;

    /* Get the cancel byte mask */
    LucStatusMask = Spi_GstSeqProcess[Sequence].ucCancelMask;

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    #endif

    /* Update the cancel bit array for this sequence */
    Spi_GaaSeqCancel[LucStatusOffset] =
                            Spi_GaaSeqCancel[LucStatusOffset] | LucStatusMask;

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    #endif
    /* Implements SPI_ESDD_UD_146 */
    #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON))
    LucIndex = Spi_GaaSeqCurrentHWUnit[Sequence];

    /*
     * Spi_GpConfigPtr is loaded with ConfigPtr. The Null check for the
     * ConfigPtr has been done in the DET check. In addition to that a data
     * base check also carried out in the code to make sure the validity of
     * ConfigPtr
     */
    /* QAC Warning START Msg(2:2814)-2 */
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LucIndex];
    /* END Msg(2:2814)-2 */

    if (SPI_ONE < Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber])
    {
      Spi_HWCancel(LucIndex, SPI_CANCEL_SID);
    }
    else
    {
      /* No action required */
    }
    #endif /*
            * (((SPI_DUAL_BUFFER_MODE == STD_ON) || \
            *                   (SPI_TX_ONLY_MODE == STD_ON)) && \
            *                                     (SPI_CANCEL_API == STD_ON))
            */
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif  /* End of (SPI_CANCEL_API == STD_ON) */

/*******************************************************************************
** Function Name       : Spi_SetAsyncMode
**
** Service ID          : 0x0D
**
** Description         : This service is for setting the asynchronous mode
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : Mode - New Mode Required
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions       : Spi_Init should have been invoked
**
** Global Variable     : Spi_GddDriverStatus, Spi_GddAsyncMode
**
** Function invoked    : Det_ReportError, Spi_HWDisableInterrupts
**
** Registers Used      : IMRn, ICRn
*******************************************************************************/

/* Implements SPI_ESDD_UD_013 */
/* Implements SPI_ESDD_UD_089 */
#if (SPI_LEVEL_DELIVERED == SPI_TWO)

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements SPI_ESDD_UD_130 */
/* Implements SPI150, SPI170, SPI172, SPI337, SPI335, SPI336, SPI156, SPI188*/
/* Implements SPI152, SPI360, SPI171, SPI155, AR_PN0063_FR_0030, SPI338 */
/* Implements SPI362, SPI361, EAAR_PN0034_FR_0064 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PUBLIC_CODE) Spi_SetAsyncMode(Spi_AsyncModeType Mode)
/* END Msg(2:3227)-1 */
{
  Std_ReturnType LenReturnValue;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID, SPI_SETAYNCMODE_SID,
                                                                 SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  {
    if (((SPI_BUSY == Spi_GddDriverStatus) && (SPI_FALSE == Spi_GblSyncTx))
         || (SPI_INTERRUPT_MODE < Mode))
    {
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      Spi_GddAsyncMode = Mode;
      LenReturnValue = E_OK;
      if (SPI_POLLING_MODE == Mode)
      {
        Spi_HWDisableInterrupts();
      }
      else
      {
        /* No action required */
      }
    }
  }
  return(LenReturnValue);
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif  /* End of (SPI_LEVEL_DELIVERED == SPI_TWO) */

/*******************************************************************************
** Function Name       : Spi_MainFunction_Handling
**
** Service ID          : 0x10
**
** Description         : This function is to be invoked in the scheduler
**                       loop for asynchronous transmission in polling mode
**
** Sync/Async          : NA
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : None
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : None
**
** Preconditions       : This function should be invoked only when polling
**                       mechanism is selected by Spi_SetAsyncMode API
**
** Global Variable     : Spi_GddDriverStatus
**
** Function Invoked    : Det_ReportError, Spi_HWMainFunction_Handling
**
** Registers Used      : CSIHnTX0W, CSIHnCTL0, CSIHnSTCR0, CSIHnSTR0,
**                       CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnBRSy,
**                       CSIHnCFGx, DTFRRQn, DCSTCn, DCSTn, DSAn, DTCTn,
**                       DTFRn, DTCn, DCENn, DCSTSn, IMRn, ICRn, DDAn,
**                       DTFRRQCn, CSIHnMCTL2, CSIHnTX0H, CSIHnRX0W,
**                       CSIHnRX0H
*******************************************************************************/
/* Implements SPI_ESDD_UD_016 */
#if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
            (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))

#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements SPI189, SPI046, EAAR_PN0034_FR_0064 */
FUNC(void, SPI_PUBLIC_CODE) Spi_MainFunction_Handling (void)
{

  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    #if (SPI_DEV_ERROR_DETECT == STD_ON)
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                          SPI_MAINFUNCTION_HANDLING_SID, SPI_E_UNINIT);
    #endif
  }
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if Main function is called in Interrupt Mode */
  else if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
  {
    /* Implements SPI_ESDD_UD_164 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                          SPI_MAINFUNCTION_HANDLING_SID,
                          SPI_E_MAINFUNCTION_HANDLING_INVALIDMODE );
  }
  #endif /* SPI_DEV_ERROR_DETECT == STD_ON */
  else
  {
    Spi_HWMainFunction_Handling();
  }
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /*
        * ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
        * (((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        *  (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        *    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
        *      (SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) \
        *                                   || (SPI_TX_ONLY_MODE == STD_ON))))
        */

/*******************************************************************************
** Function Name       : Spi_GetVersionInfo
**
** Service ID          : 0x09
**
** Description         : This API returns the version information of SPI
**                       driver component
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : versioninfo
**
** Output Parameters   : versioninfo
**
** Return parameter    : None
**
** Preconditions       : None
**
** Global Variables    : None
**
** Functions invoked   : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_085 */
#if (SPI_VERSION_INFO_API == STD_ON)
#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_045 */
/* Implements SPI_ESDD_UD_142 */
/* Implements SPI232_Conf, SPI278, SPI184, SPI325, SPI326, SPI296, SPI371 */
/* Implements SPI102, SPI101, AR_PN0040_FR_0013, AR_PN0040_FR_0026 */
/* Implements AR_PN0040_FR_0031, SPI089, EAAR_PN0034_FR_0064 */
/* Implements SPI_ESDD_UD_143 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(void, SPI_PUBLIC_CODE) Spi_GetVersionInfo(
              P2VAR(Std_VersionInfoType, AUTOMATIC, SPI_APPL_DATA) versioninfo)
/* END Msg(2:3227)-1 */
{
  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  if(versioninfo == NULL_PTR)
  {
    /* Implements SPI_ESDD_UD_119 */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                            SPI_GETVERSIONINFO_SID, SPI_E_PARAM_POINTER);
  }
  else
  #endif /* END of (SPI_DEV_ERROR_DETECT == STD_ON) */
  {
    /* QAC Warning START Msg(2:2814)-2 */
    /* Copy the vendor Id */
    versioninfo->vendorID = (uint16)SPI_VENDOR_ID;
    /* Copy the module Id */
    versioninfo->moduleID = (uint16)SPI_MODULE_ID;
    /* Copy Software Major Version */
    versioninfo->sw_major_version = SPI_SW_MAJOR_VERSION;
    /* Copy Software Minor Version */
    versioninfo->sw_minor_version = SPI_SW_MINOR_VERSION;
    /* Copy Software Patch Version */
    versioninfo->sw_patch_version = SPI_SW_PATCH_VERSION;
    /* END Msg(2:2814)-2 */
  }
}
#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* END of (SPI_VERSION_INFO_API == STD_ON) */

/*******************************************************************************
** Function Name       : Spi_SelfTest
**
** Service ID          : 0x11
**
** Description         : Function to Execute SPI Self Test
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Non-Reentrant
**
** Input Parameters    : LucTestFeature - SelfTest Type
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : SPI_SELFTEST_PASS / SPI_SELFTEST_FAILED /
**                       SPI_SELFTEST_DRIVERBUSY
**
** Preconditions       : None
**
** Global Variable     : None
**
** Function Invoked    : Det_ReportError, Spi_LoopBackSelfTest, Spi_EccSelfTest,
**                       Spi_StaticInit
**
** Registers Used      : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnSTCR0, ICRn,
**                       CSIHnBRSy, CSIHnCFGx, CSIHnTX0W, CSIHnRX0H, CSIHnSTR0,
**                       ECCCSIHnTRC, ECCCSIHnTMC, ECCCSIHnCTL, ECCCSIHnTED,
**                       IMRn, CSIHnMCTL0
*******************************************************************************/
/* Implements SPI_ESDD_UD_015 */
/* Implements SPI_ESDD_UD_100 */
#if (SPI_SELF_TEST_API == STD_ON)
#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_179 */
/* Implements SPI_ESDD_UD_180 */
/* Implements SPI245, EAAR_PN0034_FR_0064 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(Spi_ReturnStatus, SPI_PUBLIC_CODE) Spi_SelfTest
                             (Spi_SelfTestType LucTestFeature)
/* END Msg(2:3227)-1 */
{
  Spi_ReturnStatus LenReturnTestStatus;
  Std_ReturnType LenReturnValue;

  /* Check if SPI Driver is Busy */
  if (SPI_BUSY == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_111 */
    #if (SPI_DEV_ERROR_DETECT == STD_ON)
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                       SPI_SELFTEST_SID, SPI_E_SEQ_IN_PROCESS);
    #endif /* #if (SPI_DEV_ERROR_DETECT == STD_ON) */
    LenReturnTestStatus = SPI_SELFTEST_DRIVERBUSY;
  }
  else
  {
    /* Call Self Test API */
    switch (LucTestFeature)
    {
      #if (SPI_LOOPBACK_SELFTEST == SPI_TWO && SPI_ECC_SELFTEST == SPI_TWO)
      case SPI_ALL_SELF_TEST:
      {
        /* Call Loop Back Self Test API */
        LenReturnValue = Spi_LoopBackSelfTest();
        /* Call ECC Self Test API */
        if (E_OK == LenReturnValue)
        {
          LenReturnValue = Spi_EccSelfTest();
        }
        else
        {
          /* No action required */
        }
        if (E_OK == LenReturnValue)
        {
          LenReturnTestStatus = SPI_SELFTEST_PASS;
        }
        else
        {
          LenReturnTestStatus = SPI_SELFTEST_FAILED;
        }
        /* Retain the static register settings */
        #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON)
        if(SPI_UNINIT != Spi_GddDriverStatus)
        {
          Spi_StaticInit(SPI_SELFTEST_SID);
        }
        else
        {
          /* No action required */
        }
        #endif
        break;
      }
      #endif
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      #if (SPI_ECC_SELFTEST == SPI_TWO)
      case SPI_ECC_SELF_TEST:
      {
        /* Call ECC Self Test API */
        LenReturnValue = Spi_EccSelfTest();
        if (E_OK == LenReturnValue)
        {
          LenReturnTestStatus = SPI_SELFTEST_PASS;
        }
        else
        {
          LenReturnTestStatus = SPI_SELFTEST_FAILED;
        }
        break;
      }
      #endif
      #endif
      #if (SPI_LOOPBACK_SELFTEST == SPI_TWO)
      case SPI_LOOP_BACK_SELF_TEST:
      {
        /* Call Loop Back Self Test API */
        LenReturnValue = Spi_LoopBackSelfTest();
        if (E_OK == LenReturnValue)
        {
          LenReturnTestStatus = SPI_SELFTEST_PASS;
        }
        else
        {
          LenReturnTestStatus = SPI_SELFTEST_FAILED;
        }
        /* Retain the static register settings */
        #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON)
        if(SPI_UNINIT != Spi_GddDriverStatus)
        {
          Spi_StaticInit(SPI_SELFTEST_SID);
        }
        else
        {
          /* No action required */
        }
        #endif
        break;
      }
      #endif
      default :
        /* Set the status to invalid mode */
        LenReturnTestStatus = SPI_SELFTEST_INVALID_MODE;
        break;
    }
  }
  return LenReturnTestStatus;
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* #if (SPI_SELF_TEST_API == STD_ON) */

/*******************************************************************************
** Function Name       : Spi_GetErrorInfo
**
** Service ID          : 0x12
**
** Description         : Function to Copy Hardware Error Details to User Buffer
**
** Sync/Async          : Synchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : LpUserBuffer - User Buffer pointer
**                       LucBufferSize - Number of Errors To be copied
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : LucNoOfErrorsCopied - Number of Errors Copied
**
** Preconditions       : None
**
** Global Variable     : Spi_GstCommErrorInfo
**
** Function Invoked    : Det_ReportError
**
** Registers Used      : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_014 */
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
#define SPI_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* Null check for the LpUserBuffer has been carried out in the code. There shall
 * be no accidental harm on the code by the usage of this pointer
 */
/* Implements SPI046, AR_PN0063_FSR_0094, AR_PN0063_FR_0215 */
/* Implements AR_PN0063_FR_0216, AR_PN0063_FR_0217, AR_PN0063_FR_0218 */
/* Implements EAAR_PN0034_FR_0064 */
/* QAC Warning START Msg(2:3227)-1 */
FUNC(uint8, SPI_PUBLIC_CODE) Spi_GetErrorInfo (
              P2VAR(Spi_CommErrorType, AUTOMATIC, SPI_CONFIG_DATA) LpUserBuffer,
              uint8 LucBufferSize )
/* END Msg(2:3227)-1 */
{
  /* Variable to count the number of errors copied to the user buffer */
  uint8  LucNoOfErrorsCopied = SPI_ZERO;
  /* variable to hold Error Buffer index */
  uint8  LucBuffIndex;

  #if (SPI_DEV_ERROR_DETECT == STD_ON)
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                         SPI_GETERRORINFO_SID, SPI_E_UNINIT);
  }
  else
  #endif
  {
    if ((NULL_PTR != LpUserBuffer) &&
                                (LucBufferSize <= SPI_MAX_ERROR_BUFFER_SIZE))
    {
      /* Copy the Error Buffer index */
      LucBuffIndex = Spi_GucBufferIndex;
      /* Don't Access currently updating Error Location */
      if (SPI_ZERO != LucBuffIndex)
      {
        LucBuffIndex--;
      }
      else
      {
        LucBuffIndex = SPI_MAX_ERROR_BUFFER_SIZE - SPI_ONE;
      }

      while ( (SPI_MAX_ERROR_BUFFER_SIZE > LucNoOfErrorsCopied) && \
                (LucNoOfErrorsCopied < LucBufferSize) && \
             (SPI_NO_ERROR != Spi_GstCommErrorInfo[LucBuffIndex].ErrorType))
      {
        /*
         * Null check for the LpUserBuffer is carried out in the code.
         * Initialized the Error Information buffer Spi_GstCommErrorInfo with no
         * error in Spi_Init. There shall be no accidental harm on the code by
         * the usage of this pointer
         */
        /* Copy the Error Details in to user buffer */
        *LpUserBuffer =  Spi_GstCommErrorInfo[LucBuffIndex];
        /* Increment the User Buffer Location */
        LucNoOfErrorsCopied++;
        /* MISRA Violation: START Msg(4:0489)-1 */
        LpUserBuffer++;
        /* END Msg(4:0489)-1 */
        /*
         * since The Error Buffer is a cyclic one, update the Buffer Index with
         * Maximum Buffer size if reaches zero
         */
        if (SPI_ZERO == LucBuffIndex)
        {
          LucBuffIndex = SPI_MAX_ERROR_BUFFER_SIZE - SPI_ONE;
        }
        else
        {
          LucBuffIndex--;
        }
      }
    }
    else
    {
       /* No action required */
    }
  }
  return LucNoOfErrorsCopied;
}

#define SPI_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* End of (SPI_INTERNAL_DIAG_BUFF == STD_ON) */
/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
