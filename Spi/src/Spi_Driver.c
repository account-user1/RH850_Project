/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Spi_Driver.c                                                */
/* $Revision: 473401 $                                                        */
/* $Date: 2017-09-22 15:45:14 +0530 (Fri, 22 Sep 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Low level driver function definitions of the SPI        */
/* Driver                                                                     */
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
 * V1.0.1:  05-Feb-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. As per ARDAAAF-384, error interrupt registers are
 *                            enabled.
 *                         2. Copyright information is updated.
 *                         3. As per ARDAAAF-422, NULL POINTER checking added
 *                            before entering in functions 'Spi_HWActivateCS'
 *                            and 'Spi_HWDeActivateCS'.
 *                         4. As per ARDAAAF-308, SPI_CSRI_FLAG_MASK
 *                            is set just before the last job within the
 *                            pre-Compile switch SPI_PERSISTENT_HW_CONFIGURATION
 *                            _ENABLED is OFF.
 *                         5. As per ARDAAAF-380, invoke of start-notification
 *                            function removed from Spi_ProcessSequence()
 *                            function.
 *                         6. The file adapted from P1x.
 *                         7. As per ARDAAAF-461, SYNCP instruction updated in
 *                            following functions.
 *                            a. Spi_HWTransmitSyncJob.
 *                            b. Spi_ProcessChannel.
 *                            c. Spi_TxDmaConfig.
 *                            d. Spi_RxDmaConfig.
 *                            e. Spi_HWCancel.
 * V2.0.0:  27-Jan-2017  : Following changes were made:
 *                         1. As per ARDAAAF-946, All APIs are updated with
 *                            changing/adding description and QAC messages.
 *                         2. As part of Write-verify implementation, added
 *                            APIID as argument for the required functions.
 *                         3. As per ARDAAAF-946, the following new functions
 *                            are created:
 *                            Spi_StaticInit, Spi_LoopBackSelfTest,
 *                            Spi_EccSelfTest, Spi_CsihStaticInit,
 *                            Spi_CsihLoopBackSelfTest, Spi_EccAllZeroTest,
 *                            Spi_EccAllOneTest, Spi_EccWalkOneTest,
 *                            Spi_EccTwoBitTest, Spi_InitDetCheck,
 *                            Spi_SeqJobChannelInit, Spi_InitiateSyncTransmit,
 *                            Spi_SyncProcessData, Spi_GetCurrentRxData,
 *                            Spi_SetEojAndCsriBits, Spi_SyncRegSettings,
 *                            Spi_CsihTxDataAndErrorProcessing,
 *                            Spi_GetCurrentRxData, Spi_CheckRegEmpty,
 *                            Spi_CheckErrorInt, Spi_ReportErrorInSyncTx,
 *                            Spi_StoreErrorInfo, Spi_AsyncDetCheck,
 *                            Spi_AsyncInDirAccOrFifoMod,
 *                            Spi_ProcessTransmission,
 *                            Spi_ProcessChannelInFifoMod,
 *                            Spi_ProcessChannelInDualOrTxMod,
 *                            Spi_ProcessChannelInDirAccMod,
 *                            Spi_AsyncChannelRegSettings, Spi_GetTxRegValue,
 *                            Spi_FifoWriteData, Spi_CfgRegSettings,
 *                            Spi_ProcessDirectAcessData, Spi_ProcessCsihData,
 *                            Spi_ProcessExtendedData, Spi_ProcessFifoData,
 *                            Spi_CheckAndInvokeTxIsr, Spi_CheckAndInvokeRxIsr
 *                            Spi_ProcessDualBufferData, Spi_ReceiveCsihData
 *                            Spi_ProcesSeqInDualOrTxMod,Spi_ChkCancelReqForSeq,
 *                            and Spi_ReceiveChannelPropSame.
 *                            Removed the functions 'Spi_HWActivateCS' and
 *                            'Spi_HWDeActivateCS' since these functions are
 *                            used only for CSIG hardware.
 *                            Removed Deactivate chip select from DeInit since
 *                            functionality is used only for CSIG hardware.
 *                         4. As per ARDAAAF-521, In Spi_CsihStaticInit API
 *                            the parameter 'LpHWUnitInfo' and add new parameter
 *                            'LddHWUnit'.
 *                         5. As per ARDAAAF-440, global variable
 *                            'Spi_GusDataAccess' has been split into variables
 *                            'Spi_GusSynDataAccess' and 'Spi_GusAsynDataAccess'
 *                            for Synchronous and Asynchronous transmission
 *                            respectively.
 *                         6. As part of JIRA ticket ARDAAAF-1026, updated
 *                            register write verification implementation as per
 *                            the proposed template.
 *                         7. As part of JIRA ticket ARDAAAF-433,
 *                            RH850_SV_MODE_ICR_AND is added for
 *                            'pErrorIntCntlAddress' and
 *                            'pTxCancelIntCntlAddress' in
 *                            Spi_HWDisableInterrupts function.
 *                         8. As part of JIRA ticket ARDAAAF-441, in order to
 *                            update all CSIHnCFGx registers for all configured
 *                            chip selects, do-while loop is added in function
 *                            Spi_CsihStaticInit, Spi_CfgRegSettings and
 *                            Spi_SeqJobChannelInit.
 *                         9. As part of JIRA ticket ARDAAAF-778, MISRA
 *                            violation START and END Msgs for Msg(4:0715) is
 *                            added at respective places.
 *                        10. As part of JIRA ticket ARDAAAF-569 fix,
 *                            Spi_HWInit and Spi_HWDeInit functions are
 *                            updated.
 *                        11. As part of ARDAAAF-487, updated Spi_HWWriteIB
 *                            to set memory mode as Tx only or Dual buffer in
 *                            register CSIHnMCTL0 before writing into CSIHnTX0W
 *                            and CSIHnMRWP0 to avoid setting of bits which are
 *                            prohibited in other memory modes.
 *                        12. As part of JIRA ticket ARDAAAF-443 fix,added NULL
 *                            pointer check for Spi_GpConfigPtr->pStatusArray
 *                            and Spi_GpConfigPtr->pStsValueArray in
 *                            Spi_TransmitCancelISR and Spi_ChkCancelReqForSeq
 *                            functions.
 *                        13. As part of JIRA ticket ARDAAAF-489 fix, updated
 *                            functions Spi_HWMainFunction_Handling and
 *                            Spi_CheckAndInvokeTxIsr for direct access mode.
 *                        14. Removed DMA_TYPE_ONE related code implementation,
 *                            since P1H-C supports DMA of DMA_TYPE_TWO only.
 *                        15. As part of ARDAAAF-450 fix, invoked
 *                            Spi_CheckErrorInt function after reception
 *                            to check for errors in Spi_GetCsihRxData function.
 *                        16. As part of JIRA ticket ARDAAAF-431, Check is
 *                            updated in functions Spi_ProcessCsihData and
 *                            Spi_ProcessChannelInDirAccMod in such a way that
 *                            bit CSIHnEOJ will be set only if blEDLEnabled
 *                            is SPI_FALSE.
 *                        17. As part of JIRA ticket ARDAAAF-605, In API
 *                            'Spi_CsihStaticInit' is updated for
 *                            CSRI bit is masked for FIFO Mode when number of
 *                            buffers is greater than 128 and in API
 *                            'Spi_ProcessFifoData' is updated to reset PWR bit.
 *                        18. Added UD ID's 'SPI_ESDD_UD_xxx' and
 *                            Requirements at respective places.
 *                        19. As part of ARDAAAF-478, Spi_TxDmaConfig function
 *                            has been updated.
 *                        20. As part of ARDAAAF-1322,unit testing activity,
 *                            Compilation warning removed in Spi_ProcessCsihData
 *                            When 32 bit data width and High priority HW
 *                            are enabled.
 *                        21. As part of ARDAAAF-1322,unit testing activity,
 *                            UT ID TAGs 'SPI_UT_xxx' are added for the
 *                            uncovered parts of the code.
 *                        22. As per ARDAAAF-521, In Spi_CsihStaticInit API
 *                            the parameter 'LpHWUnitInfo' removed and added
 *                            new parameter 'LddHWUnit'.
 *                        23. In order to avoid QAC warning, updated API's
 *                             a. Spi_HWDeInit
 *                             b. Spi_ProcessCsihData
 *                             c. Spi_InitiateJobTx.
 *                        24. As per ARDAAAF-1522, In Spi_ReportErrorInSyncTx
 *                            API error buffer updated with Hardware unit Index.
 *                        25. As per ARDAAAF-1522, In Spi_CsihStaticInit API
 *                            'SPI_SET_SLIT' masking updated.
 *                        26. As part of fixing the ticket ARDAAAF-1108,
 *                            updated Spi_ProcessChannelInFifoMod, Spi_DmaISR
 *                            Spi_ProcessFifoData and Spi_TxDmaConfig functions
 *                            for permitting more than 128 bytes of data when
 *                            DMA is enabled in FIFO mode.
 *                        27. As part of fixing the ticket ARDAAAF-1576,
 *                            updated Spi_HWTransmitSyncJob and
 *                            Spi_InitiateSyncTransmit APIs to update
 *                            configuration register.
 *                        28. As part of fixing the ticket ARDAAAF-1237,
 *                            initialize the register CSIHnMCTL0 with configured
 *                            memory mode in Spi_CsihStaticInit API.
 *                        29. As part of fixing the ticket ARDAAAF-1315, added
 *                            untraced requirements.
 * Ver4.02.00.D_SPI_HF003 : 22-Sep-2017 : Related Tickets :
 *                        JIRA #ARDAAAF-3026: Modification Info :
 *                           Function Spi_ProcessChannelInFifoMod has been
 *                           updated to protect filling of buffer section.
 *                        : Modification Info Ends :
 */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Spi_Scheduler.h"
#include "rh850_Types.h"
#include "Spi_Hardware.h"
/* Implements SPI_ESDD_UD_160 */
/* Implements SPI_ESDD_UD_161 */
/* Implements SPI_ESDD_UD_163 */
/* Implements EAAR_PN0034_FSR_0004, EAAR_PN0034_FSR_0003 */
/* Implements EAAR_PN0034_FSR_0002 */
#include "Spi_RegWrite.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/* AUTOSAR release version information */
#define SPI_DRIVER_C_AR_RELEASE_MAJOR_VERSION \
                                  SPI_AR_RELEASE_MAJOR_VERSION_VALUE
#define SPI_DRIVER_C_AR_RELEASE_MINOR_VERSION \
                                  SPI_AR_RELEASE_MINOR_VERSION_VALUE
#define SPI_DRIVER_C_AR_RELEASE_REVISION_VERSION \
                               SPI_AR_RELEASE_REVISION_VERSION_VALUE

/* MISRA Violation: START Msg(6:0857)-25 */
/* File version information */
#define SPI_DRIVER_C_SW_MAJOR_VERSION    SPI_SW_MAJOR_VERSION_VALUE
#define SPI_DRIVER_C_SW_MINOR_VERSION    SPI_SW_MINOR_VERSION_VALUE
/* END Msg(6:0857)-25 */

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
#if (SPI_DRIVER_AR_RELEASE_MAJOR_VERSION != \
                                       SPI_DRIVER_C_AR_RELEASE_MAJOR_VERSION)
  #error "Spi_Driver.c : Mismatch in Release Major Version"
#endif

#if (SPI_DRIVER_AR_RELEASE_MINOR_VERSION != \
                                       SPI_DRIVER_C_AR_RELEASE_MINOR_VERSION)
  #error "Spi_Driver.c : Mismatch in Release Minor Version"
#endif

#if (SPI_DRIVER_AR_RELEASE_REVISION_VERSION != \
                                       SPI_DRIVER_C_AR_RELEASE_REVISION_VERSION)
  #error "Spi_Driver.c : Mismatch in Release Revision Version"
#endif

#if (SPI_DRIVER_SW_MAJOR_VERSION != SPI_DRIVER_C_SW_MAJOR_VERSION)
  #error "Spi_Driver.c : Mismatch in Software Major Version"
#endif /*END of SPI_DRIVER_SW_MAJOR_VERSION */

#if (SPI_DRIVER_SW_MINOR_VERSION != SPI_DRIVER_C_SW_MINOR_VERSION)
  #error "Spi_Driver.c : Mismatch in Software Minor Version"
#endif /*END of SPI_DRIVER_SW_MINOR_VERSION */

/*******************************************************************************
**                         Global Data                                        **
*******************************************************************************/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0759) An object of union type has been defined.         */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : To access only the lower byte of the converted values      */
/*                 from the conversion register.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0759)-1 and                           */
/*                 END Msg(4:0759)-1 tags in the code.                        */
/******************************************************************************/

/* 2. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2982) This assignment is redundant. The value of this   */
/*                 object is never used before being modified..               */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : Pointer variable have to be updated to use in the function */
/*                 called.                                                    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2982)-2 and                           */
/*                 END Msg(4:2982)-2 tags in the code.                        */
/******************************************************************************/

/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0489) Increment or decrement operation performed on     */
/*                 pointer.                                                   */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0489)-3 and                           */
/*                 END Msg(4:0489)-3 tags in the code.                        */
/******************************************************************************/

/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0488)Performing pointer arithmetic.                     */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/* Justification : To have a better readability of the code which will help   */
/*                 for debugging purpose array indexing is not performed.     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0488)-4 and                           */
/*                 END Msg(4:0488)-4 tags in the code.                        */
/******************************************************************************/

/* 5. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0317) An expression of type 'pointer-to-void' is being  */
/*                 implicitly converted to a 'pointer-to-object' type.        */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : Implicit conversion is performed between a pointer to void */
/*                 to pointer to prevent publishing of internal structure.    */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg (4:0317)-5  and                         */
/*                 END Msg (4:0317)-5  tags in the code.                      */
/******************************************************************************/

/* 6. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2996) The result of this logical operation is always    */
/*                 'false'.                                                   */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The result of this logical operation is always false since */
/*                 only one job is configured. However, when two or more jobs */
/*                 are configured this warning ceases to exist.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2996)-6 and                           */
/*                 END Msg(4:2996)-6 tags in the code.                        */
/******************************************************************************/

/* 7. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2993) The value of this 'do - while' loop controlling   */
/*                 expression is always 'false'. The loop will only be        */
/*                 executed once.                                             */
/* Rule          : MISRA-C:2004 Rule 10.5                                     */
/* Justification : The result of this logical operation is always false since */
/*                 only one job is configured. However, when two or more jobs */
/*                 are configured this warning ceases to exist.               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2993)-7 and                           */
/*                 END Msg(4:2993)-7 tags in the code.                        */
/******************************************************************************/

/* 8. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0306) Cast between a pointer to object and an integral  */
/*                  type.                                                     */
/* Rule          : MISRA-C:2004 Rule 17.4                                     */
/*                 REFERENCE - ISO-6.3.4 Semantics                            */
/* Justification : Typecasting is done as per the register size, to access    */
/*                 hardware registers.                                        */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0306)-8 and                           */
/*                 END Msg(4:0306)-8 tags in the code.                        */
/******************************************************************************/

/* 9. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:2984) This operation is redundant. The value of the     */
/*                 result is always '0'.                                      */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : The value of the object is based on the user configuration.*/
/*                 Hence this warning ceases to exist in case multiple        */
/*                 sequence/job/channels are configured.                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2984)-9 and                           */
/*                 END Msg(4:2984)-9 tags in the code.                        */
/******************************************************************************/

/* 10. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2962) Using value of uninitialized automatic object.    */
/* Rule          : MISRA-C:2004 Rule 9.1                                      */
/* Justification : The object is initialized under pre-compile section, and   */
/*                 the pre-compile macros are generated by generation tool    */
/*                 based on user configuration.                               */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2962)-10 and                          */
/*                 END Msg(4:2962)-10 tags in the code.                       */
/******************************************************************************/

/* 11. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2877) This loop will only be executed once and so the   */
/*                 loop mechanism is redundant.                               */
/* Rule          : MISRA-C:2004 Rule 21.1                                     */
/* Justification : This operation appears to be redundant because only one    */
/*                 controller is configured.                                  */
/*                 However, when two or more controllers are configured       */
/*                 this warning ceases to exist.                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2877)-11 and                          */
/*                 END Msg(4:2877)-11 tags in the code.                       */
/******************************************************************************/

/* 12. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0402) An object being modified and accessed between     */
/*                 sequence points - evaluation order unspecified.            */
/* Rule          : MISRA-C:2004 Rule 1.2                                      */
/* Justification : This is a problem due to the improper interpretation of    */
/*                 of priority of operators for bitwiseOR and AND operations  */
/*                 by macro functions. This is already taken care by  proper  */
/*                 use of brackets to determine the order of execution.       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0402)-12 and                          */
/*                 END Msg(4:0402)-12 tags in the code.                       */
/******************************************************************************/

/* 13. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:3673)The object addressed by the pointer parameter      */
/*                 is not modified and so the pointer could be of type        */
/*                 'pointer to const'.                                        */
/* Rule          : MISRA-C:2004 Rule 16.7                                     */
/* Justification : pointer variable is used to modify the value at the address*/
/*                 so the pointer cannot be declared as 'pointer to const'    */
/*                 type.                                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:3673)-13 and                          */
/*                 END Msg(4:3673)-13 tags in the code.                       */
/******************************************************************************/

/* 14. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:0715)Nesting of control structures (statements)         */
/*                 exceeds 15 - program is non-conforming.                    */
/* Rule          : MISRA-C:2004 Rule 1.1                                      */
/* Justification : It is used to achieve better throughput instead of         */
/*                 invoking a function call.                                  */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:0715)-14 and                          */
/*                 END Msg(4:0715)-14 tags in the code.                       */
/******************************************************************************/

/* 15. MISRA C RULE VIOLATION:                                                */
/* Message       : (4:2995) The result of this logical operation is always    */
/*                 'true'.                                                    */
/* Rule          : MISRA-C:2004 Rule 13.7                                     */
/* Justification : The value of this 'if' control expression is true because  */
/*                 of the variable updated in pre-compile condition. The      */
/*                 variable can be configured at pre-compile for false value  */
/*                 in If condition                                            */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for START Msg(4:2995)-15 and                          */
/*                 END Msg(4:2995)-15 tags in the code.                       */
/******************************************************************************/
/**                         QAC Warnings                                     **/
/******************************************************************************/
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
/* Message       : (2:2824) Possible: Arithmetic operation on NULL pointer.   */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:2824)-2 and               */
/*                 END Msg(2:2824)-2  tags in the code.                       */
/******************************************************************************/

/* 3. QAC Warning:                                                            */
/* Message       : (3:3352) This 'switch' statement contains only two         */
/*                 execution paths.                                           */
/* Rule          : NA                                                         */
/* Justification : Case statements which used in this functions are executed  */
/*                 only when the Macros are enabled                           */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(3:3352)-3 and               */
/*                 END Msg(3:3352)-3 tags in the code.                        */
/******************************************************************************/

/* 4. QAC Warning:                                                            */
/* Message       : (3:3203) The variable 'XXX' is set but never used          */
/* Rule          : NA                                                         */
/* Justification : These variables are used for dummy read of registers       */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(3:3203)-4 and               */
/*                 END Msg(3:3203)-4 tags in the code.                        */
/******************************************************************************/

/* 5. QAC Warning:                                                            */
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
/* Reference     : NA                                                         */
/******************************************************************************/

/* 6. QAC Warning:                                                            */
/* Message       : (2:2814) Possible: Dereference of NULL pointer.            */
/* Rule          : NA                                                         */
/* Justification : The Pointers generated using Post Build configurations may */
/*                  not be NULL.                                              */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:2814)-6 and               */
/*                 END Msg(2:2814)-6 tags in the code.                        */
/******************************************************************************/

/* 7. QAC Warning:                                                            */
/* Message       : (2:3206)The parameter 'XXX' is not used in this function   */
/* Rule          : NA                                                         */
/* Justification : The parameter is used only when the user interface is      */
/*                 configured for write-verify error notification. Creating   */
/*                 different macros will increase the code complexity, Hence  */
/*                 used the same macro in both the cases.                     */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:3206)-7 and               */
/*                 END Msg(2:3206)-7  tags in the code.                       */
/******************************************************************************/

/* 8. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted   */
/*                 to another type                                            */
/* Rule          : NA                                                         */
/* Justification : This is done to change the behaviour of  the expression    */
/*                 so as to get the correct value(of similar size) assigned   */
/*                 to the RHS.                                                */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning START Msg(2:3892)-8 and               */
/*                 END (2:3892)-8 tags in the code.                           */
/******************************************************************************/
/*******************************************************************************
**                      Function Definitions                                  **
*******************************************************************************/
/*******************************************************************************
** Function Name      : Spi_ReportErrorInSyncTx
**
** Service ID         : Not Applicable
**
** Description        : Function to store Hardware Error Details
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Reentrant
**
** Input Parameters   : LpHWUnitInfo - Basic Hardware Register Details
**                      LddSequenceID - Sequence ID
**                      LddJobID - Job ID
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Spi_StoreErrorInfo
**
** Registers Used     : CSIHnSTR0, CSIHnSTCR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_056 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_INTERNAL_DIAG_BUFF == STD_ON) &&  \
    ((SPI_LEVEL_DELIVERED == SPI_ZERO) ||   \
     ((SPI_LEVEL_DELIVERED == SPI_TWO) && (SPI_DIRECT_ACCESS_MODE == STD_ON))))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* Implements SPI_ESDD_UD_132 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_ReportErrorInSyncTx
(Spi_SequenceType LddSequenceID, Spi_JobType LddJobID, Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
{
  Spi_CommErrorType LstErrorType;
  uint32 LulErrorValue;
  /* START Msg(2:2814)-6 */
  /* Take the Error value as backup */
  LulErrorValue = Csih_BaseAddress[LddHWUnit]->STR0;
  /* Copy the Hardware unit Index */
  LstErrorType.HwUnit = LddHWUnit;
  /* Copy the Sequence Index */
  LstErrorType.SeqID = LddSequenceID;
  /* Copy the Job Index */
  LstErrorType.JobID = LddJobID;
  /* Check for Over run Error */
  /* START Msg(2:3892)-8 */
  if (SPI_OVE_ERR == (LulErrorValue & SPI_OVE_ERR))
  {
    /* Implements SPI_ESDD_UD_206 */
    /* Clear the status register */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                               (uint16)SPI_OVE_ERR_CLR)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0),(uint32)SPI_ZERO, SPI_OVE_ERR_CLR,
                                                        SPI_SYNCTRANSMIT_SID)

    /* END Msg(2:3892)-8 */
    /* END Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_182 */
    LstErrorType.ErrorType = SPI_OVERRUN_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }
/* Check for Parity Error */
  if (SPI_PE_ERR == (LulErrorValue & SPI_PE_ERR))
  {
    /* Implements SPI_ESDD_UD_206 */
    /* Clear the status register */
    /* START Msg(2:2814)-6 */
    /* START Msg(2:3892)-8 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                              (uint16)SPI_PE_ERR_CLR)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0),(uint32)SPI_ZERO,
                            SPI_PE_ERR_CLR, SPI_SYNCTRANSMIT_SID)

    /* END Msg(2:3892)-8 */
    /* END Msg(2:2814)-6*/
    /* Implements SPI_ESDD_UD_182 */
    LstErrorType.ErrorType = SPI_PARITY_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }

  /* Check for Data Consistency Error */
  if (SPI_DCE_ERR == (LulErrorValue & SPI_DCE_ERR))
  {
    /* Implements SPI_ESDD_UD_206 */
    /* Clear the status register */
    /* START Msg(2:2814)-6 */
    /* START Msg(2:3892)-8 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                               (uint16)SPI_DCE_ERR_CLR)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0),(uint32)SPI_ZERO,
                               SPI_DCE_ERR_CLR, SPI_SYNCTRANSMIT_SID)

    /* END Msg(2:3892)-8 */
    /* END Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_182 */
    LstErrorType.ErrorType = SPI_DATA_CONSISTENCY_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }

  /* Check for Overflow Error */
  if (SPI_OFE_ERR == (LulErrorValue & SPI_OFE_ERR))
  {
    /* Implements SPI_ESDD_UD_206 */
    /* Clear the status register */
    /* START Msg(2:2814)-6 */
    /* START Msg(2:3892)-8 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                                 (uint16)SPI_OFE_ERR_CLR)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0),(uint32)SPI_ZERO,
                                   SPI_OFE_ERR_CLR, SPI_SYNCTRANSMIT_SID)

    /* END Msg(2:3892)-8 */
    /* END Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_182 */
    LstErrorType.ErrorType = SPI_OVERFLOW_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((SPI_INTERNAL_DIAG_BUFF == STD_ON) &&  \
        *        ((SPI_LEVEL_DELIVERED == SPI_ZERO) ||   \
        *        ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        *        (SPI_DIRECT_ACCESS_MODE == STD_ON))))
        */
/*******************************************************************************
** Function Name      : Spi_StoreErrorInfo
**
** Service ID         : Not Applicable
**
** Description        : Function to store Hardware Error Details
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Reentrant
**
** Input Parameters   : LpErrorDetails - Error Details
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstCommErrorInfo, Spi_GucBufferIndex
**
** Function Invoked   : None
**
** Registers Used     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_057 */
/* Implements SPI_ESDD_UD_159 */
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_StoreErrorInfo (
          P2CONST(Spi_CommErrorType, AUTOMATIC, SPI_APPL_CONST) LpErrorDetails )
/* END Msg(2:3227)-1 */
{
  /* START Msg(2:2814)-6 */
  /* Copy the Error details into the Error Buffer */
  Spi_GstCommErrorInfo[Spi_GucBufferIndex] = *LpErrorDetails;
  /* END Msg(2:2814)-6 */
  /* Index Pointing to the next location */
  Spi_GucBufferIndex++;
  /* Implements SPI_ESDD_UD_159 */
  /* Spi_GucBufferIndex updating to zero, since it is a cyclic buffer */
  if (SPI_MAX_ERROR_BUFFER_SIZE  <= Spi_GucBufferIndex)
  {
    Spi_GucBufferIndex = SPI_ZERO;
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of (SPI_INTERNAL_DIAG_BUFF == STD_ON) */
/*******************************************************************************
** Function Name      : Spi_HWInit
**
** Service ID         : Not Applicable
**
** Description        : This service initializes the HW Unit
**
** Sync/Async         : Synchronous.
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variable    : Spi_GpDmaUnitConfig, Spi_GstHWUnitInfo
**
** Function invoked   : None
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnMCTL1, CSIHnMCTL2,
**                      DCSTn, DCSTSn, DCENn, DTCTn, DDAn, DSAn, DTFRn, DCSTCn,
**                      IMRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_017 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements AR_PN0063_FR_0035, AR_PN0063_FR_0129, EAAR_PN0034_FR_0023 */
/* Implements EAAR_PN0034_FSR_0001, AR_PN0063_FR_0142, EAAR_PN0034_FR_0067 */
FUNC(void, SPI_PRIVATE_CODE) Spi_HWInit(void)
{
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
       (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA) LpImrAddress;
  #endif

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA) LpDmaImrIntCntlReg;
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
  (SPI_FIFO_MODE == STD_ON))
  uint8 LucHWMemoryMode;
  #endif
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  Spi_HWUnitType LddHWUnit;
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  uint8 LucLoopCount;
  uint8 LucMaxDmaChannels;
  #endif
  #if (SPI_FIFO_MODE == STD_ON)
  /* Initialize Spi_GblCSRIMask to false */
  Spi_GblCSRIMask = SPI_FALSE;
  #endif

  /* START Msg(2:2814)-6 */
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* MISRA Violation: START Msg(4:0317)-5 */
  /* START Msg(2:2824)-2 */
  Spi_GpDmaUnitConfig = Spi_GpConfigPtr->pDMAConfiguration;
  /* END Msg(2:2824)-2 */
  /* END Msg(4:0317)-5 */
  LucMaxDmaChannels = Spi_GpConfigPtr->ucMaxDmaChannels;
  /* END Msg(2:2814)-6 */
  for (LucLoopCount = SPI_ZERO;
                           LucLoopCount < LucMaxDmaChannels; LucLoopCount++)
  {
    /* MISRA Violation: START Msg(2:0491)-5 */
    LpDmaConfig = &Spi_GpDmaUnitConfig[LucLoopCount];
    /* END Msg(2:0491)-5 */
    /* Implements SPI_ESDD_UD_190 */
    /* START Msg(2:2814)-6 */
    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;

    /* Disable the DMA interrupt control register */
    LpDmaImrIntCntlReg = LpDmaConfig->pDmaImrIntCntlReg;

    RH850_SV_MODE_IMR_OR(32, (LpDmaImrIntCntlReg),
                                        (~(LpDmaConfig->ulDmaImrMask)));
    /* Implements SPI_ESDD_UD_161 */
    /* Disable channel operation */
    /* MISRA Violation: START Msg(4:0402)-12 */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCSTCn,
                           (LpDmaRegisters->ulDCSTCn | SPI_DMA_STR_CLEAR))
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT(&(LpDmaRegisters->ulDCSTn),
    (uint32)SPI_ZERO, SPI_DMA_STR_CLEAR, SPI_INIT_SID)

    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_DISABLE)
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT(&(LpDmaRegisters->ulDCENn),
                        SPI_DMA_DCEN_DISABLE, SPI_DCEN_MASK, SPI_INIT_SID)
    /* END Msg(2:2814)-6 */
    if (SPI_ONE == LpDmaConfig->blComDmaChannel)
    {
      /* Implements SPI_ESDD_UD_191 */
      /* Implements SPI_ESDD_UD_161 */
      /* DMA channel for reception. Hence load the source address register */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDSAn,
                                              LpDmaConfig->ulTxRxRegAddress)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT(&(LpDmaRegisters->ulDSAn),
      LpDmaConfig->ulTxRxRegAddress, SPI_CTLREG_32_BIT_MASK, SPI_INIT_SID)

      /* Load the transfer control register */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, SPI_DMA_16BIT_RX_SETTINGS)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT(&(LpDmaRegisters->ulDTCTn),
                         SPI_DMA_16BIT_RX_SETTINGS, SPI_DTCT_MASK, SPI_INIT_SID)
    }
    else
    {
      /* DMA channel for transmission. Hence load the destination address */
      /* register */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDDAn,
                                               LpDmaConfig->ulTxRxRegAddress)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT(&(LpDmaRegisters->ulDDAn),
           LpDmaConfig->ulTxRxRegAddress, SPI_CTLREG_32_BIT_MASK, SPI_INIT_SID)

      /* Load the transfer control register */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, SPI_DMA_16BIT_TX_SETTINGS)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT(&(LpDmaRegisters->ulDTCTn),
                         SPI_DMA_16BIT_TX_SETTINGS, SPI_DTCT_MASK, SPI_INIT_SID)
    }
    /* Load the trigger factor configured */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTFRn,
                                       (uint32)(LpDmaConfig->usDmaDtfrRegValue))
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_INIT(&(LpDmaRegisters->ulDTFRn),
            (uint32)(LpDmaConfig->usDmaDtfrRegValue),SPI_DTFR_MASK,SPI_INIT_SID)

    /* END Msg(4:0402)-12 */
  }
  #endif /* End of #if (SPI_DMA_MODE_ENABLE == STD_ON) */
  /* END Msg(2:0303)-10 */

  /* Initialize number of HW Unit as zero */
  LddHWUnit = SPI_ZERO;
  /* Implements SPI_ESDD_UD_134 */
  /* Check for maximum HW Unit configured */
  while (SPI_MAX_HW_DETAILS > LddHWUnit)
  {
    /* START Msg(2:2814)-6 */
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
    /* END Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_160 */
    /* Reset the PWR bit in main control register 0 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8, SPI_ZERO)
    SPI_CSIH_CHECK_WRITE_VERIFY_INIT(
           &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), SPI_ZERO, SPI_INIT_SID)

    LunDataAccess1.ulRegData = SPI_ZERO;

    LunDataAccess1.ucRegData4[SPI_ONE] =
                          Spi_GpConfigPtr->aaChipSelect[LddHWUnitNumber];
    /* Implements SPI_ESDD_UD_160 */
    /* Configure all chip selects with configured polarity */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1,
                                               LunDataAccess1.ulRegData)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
    &(Csih_BaseAddress[LddHWUnit]->CTL1), LunDataAccess1.ulRegData,
                                   SPI_CTLREG_32_BIT_MASK, SPI_INIT_SID)

    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
          (SPI_TX_ONLY_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];

    if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
    {
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Implements SPI_ESDD_UD_160 */
        /* Implements SPI_ESDD_UD_205 */
        /* Initialize CSIH memory register */
        /* START Msg(2:2814)-6 */
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL1,
                                                  SPI_CTL_32BIT_REG_VAL)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->MCTL1),SPI_CTL_32BIT_REG_VAL,
                                             SPI_CSIHMCTL1_MASK, SPI_INIT_SID)
        /* END Msg(2:2814)-6 */
      }
      else
      {
        /* START Msg(2:2814)-6 */
        /* Load the MCTL2 register to start the communication */
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL2,
                                                       SPI_CTL_32BIT_REG_VAL)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->MCTL2),SPI_CTL_32BIT_REG_VAL,
                                             SPI_CSIHMCTL2_MASK, SPI_INIT_SID)
        /* END Msg(2:2814)-6 */
      }
    }
    else
    {
      /* No action Required */
    }
    #endif /*
              * ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
              *  (SPI_TX_ONLY_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
              */
    #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */

    /* Clear the interrupts in asynchronous mode */
    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
         (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    /* Implements SPI_ESDD_UD_200 */
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxImrAddress;
    /* MISRA Violation: START Msg(2:2814)-6 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulRxImrMask)));
    /* END Msg(2:2814)-6 */
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulTxImrMask)));
    /* END Msg(4:4397)-2 */

    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pErrorImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulErrorImrMask)));
    /* END Msg(4:4397)-2 */
    #endif

    #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) \
          && (SPI_CANCEL_API == STD_ON))
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxCancelImrAddress;

    /* MISRA Violation: START Msg(4:4397)-2 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulTxCancelImrMask)));
    /* END Msg(4:4397)-2 */
    #endif /*
            * (((SPI_DUAL_BUFFER_MODE == STD_ON) || \
            *      (SPI_TX_ONLY_MODE == STD_ON)) && (SPI_CANCEL_API == STD_ON))
            */

    /* Increment HW Unit index */
    /* MISRA Violation: START Msg(4:2984)-9 */
    LddHWUnit++;
    /* END Msg(4:2984)-9 */
  } /* End of while (LddHWUnit < SPI_MAX_HW_DETAILS) */
} /* End of Spi_HWInit */

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* #if ((SPI_LEVEL_DELIVERED == SPI_ONE)
            || (SPI_LEVEL_DELIVERED == SPI_TWO)) */

/*******************************************************************************
** Function Name      : Spi_StaticInit
**
** Service ID         : Not Applicable
**
** Description        : This service performs static initialization
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpFirstSeq, Spi_GpFirstJobList,
**                      Spi_GpFirstJob, Spi_GpConfigPtr
**
** Function invoked   : Spi_CsihStaticInit
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnSTCR0, CSIHnCTL2, CSIHnMCTL0,
**                      CSIHnBRSy, CSIHnCFGx, CSIHnSTR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_044 */
/* Implements SPI_ESDD_UD_097 */
#if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON)
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI368, SPI166, SPI263, SPI212_Conf, SPI009, SPI066 */
/* Implements SPI215_Conf */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_StaticInit(uint8 LucApId)
{
  /* End Msg(2:3227)-1 */
  /* Declare a local pointer to point to the Sequence Config Data */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;

  Spi_JobType LddJobIndex;
  Spi_HWUnitType LddHWUnit;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  Spi_JobType LddNoOfJobs;
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) \
                                                 ||(SPI_FIFO_MODE == STD_ON))
  uint8 LucHWMemoryMode;
  #endif
  #endif /*END of SPI_CSIH_CONFIGURED */
  Spi_SequenceType LddNumSeq;
  uint8 LucCxCtl0;

  /* Load the number of sequence configured as zero */
  LddNumSeq = SPI_ZERO;
  /* Implements SPI_ESDD_UD_137 */
  while (SPI_MAX_SEQUENCE > LddNumSeq)
  {
    /* START Msg(2:2824)-2 */
    /* START Msg(2:2814)-6 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpSeqConfig = Spi_GpFirstSeq + LddNumSeq;
    /* Get the pointer to the job list */
    LpJobList = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
    /* Get the index of the job and sequence */
    LddJobIndex = LpJobList->ddJobIndex;
    /* Get the pointer of the first job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + LddJobIndex;

    LddHWUnit = LpJobConfig->ddHWUnitIndex;
    /* END Msg(2:2824)-2 */

    /* Increment number of sequences configured */
    LddNumSeq++;

    /* END Msg(4:0488)-4 */
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) \
                                                 ||(SPI_FIFO_MODE == STD_ON))
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
    #endif
    #endif

    /* MISRA Violation: START Msg(4:0402)-12 */
    /* START Msg(2:3892)-8 */
    /* Reset the PWR bit since other registers need to be written */
    LucCxCtl0 = (Csih_BaseAddress[LddHWUnit]->CTL0.UINT8 & SPI_RESET_PWR);
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8, LucCxCtl0)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
    &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), LucCxCtl0,
                                     SPI_CTLREG_8_BIT_MASK, LucApId)
    /* END Msg(2:3892)-8 */
    /* END Msg(4:0402)-12 */
    /* END Msg(2:2814)-6 */

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    if ((SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode) ||
                          (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode))
    {
      /* Get the number of jobs */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
    }
    else
    #endif /*
            * ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
            *                                (SPI_TX_ONLY_MODE == STD_ON))
            */
    {
      LddNoOfJobs = SPI_ONE;
    }
    Spi_CsihStaticInit( LpJobList, LddNoOfJobs,
                                         LddHWUnitNumber, LddHWUnit, LucApId );
    #endif /* #if (SPI_CSIH_CONFIGURED == STD_ON) */

    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) \
                                                 ||(SPI_FIFO_MODE == STD_ON))
    if (SPI_ZERO < LucHWMemoryMode)
    {
      /* Load Main CTL0 register, without setting PWR bit */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                 SPI_SET_MEMORY_ACCESS)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
      &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8),SPI_SET_MEMORY_ACCESS,
                                        SPI_CTLREG_8_BIT_MASK, LucApId)
    }
    else
    #endif
    {
      /* Load Main CTL0 register, setting PWR bit at the same time */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                 SPI_SET_DIRECT_ACCESS)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
      &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8),SPI_SET_DIRECT_ACCESS,
                                          SPI_CTLREG_8_BIT_MASK, LucApId)
    }
  } /*  End of while (SPI_MAX_SEQUENCE > LddNumSeq) */

}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_HWDeInit
**
** Service ID         : Not Applicable
**
** Description        : This service de-initializes the HW Unit
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : Spi_Init should have been invoked.
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpDmaUnitConfig,
**                      Spi_GpConfigPtr
**
** Function invoked   : None
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnSTCR0, CSIHnSTR0,
**                      CSIHnMCTL0, CSIHnMCTL1, CSIHnMCTL2, CSIHnMRWP0,
**                      CSIHnCFGx, CSIHnBRSy, DCENn, DTFRRQCn, DTFRn, DSAn,
**                      DTFRRQn, DDAn, DTCTn, DCSTCn, DCSTn, ICRn, IMRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_021 */
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
FUNC(void, SPI_PRIVATE_CODE) Spi_HWDeInit(void)
{
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpIntCntlAddress;
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
     (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA) LpImrAddress;
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) || \
  (SPI_FIFO_MODE == STD_ON)) && (SPI_LEVEL_DELIVERED != SPI_ZERO))
  uint8 LucHWMemoryMode;
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  #endif

  Spi_HWUnitType LddHWUnit;
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  uint8 LucLoopCount;
  uint8 LucMaxDmaChannels;
  uint32 LulDmaDCSTCn;
  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  #endif
  /* Set the maximum number of zero */
  LddHWUnit = SPI_ZERO;
  /* Implements SPI_ESDD_UD_134 */
  /* Initialize each HW Unit */
  /* MISRA Violation: START Msg(4:2877)-11 */
  while (SPI_MAX_HW_DETAILS > LddHWUnit)
  /* END Msg(4:2877)-11 */
  {
    /* Initialize control register 0 to zero */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8, SPI_ZERO)
    /* START Msg(2:2814)-6 */

    SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), SPI_ZERO,SPI_DEINIT_SID)

    /* Initialize CTL1 register to zero */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1, (uint32)SPI_ZERO)

    SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(&(Csih_BaseAddress[LddHWUnit]->CTL1),
                                          (uint32)SPI_ZERO, SPI_DEINIT_SID)

    /* END Msg(2:2814)-6 */
    /* START Msg(2:3892)-8 */
    /* Initialize CTL2 register to value after reset */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL2,
                                              SPI_CTL2_16BIT_REG_DEINIT)

    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CTL2), SPI_CTL2_16BIT_REG_DEINIT,
                                    SPI_CTLREG_16_BIT_MASK, SPI_DEINIT_SID)

    /* Initialize STCR0 register to value after reset */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0, SPI_STCR0_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0), SPI_CTL_16BIT_REG_DEINIT,
                                   SPI_STCR0_VAL, SPI_DEINIT_SID)
    /* END Msg(2:3892)-8 */

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
        (SPI_TX_ONLY_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
    #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
    #endif
    if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
    {
      /* START Msg(2:3892)-8 */
      /* Implements SPI_ESDD_UD_203 */
      /* Initialize MCTL0 register to value after reset*/
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL0,
                                                   SPI_MCTL0_16BIT_REG_DEINIT)

      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->MCTL0), SPI_MCTL0_16BIT_REG_DEINIT,
                                         SPI_CSIHMCTL0_MASK,SPI_DEINIT_SID)
      /* END Msg(2:3892)-8 */
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Implements SPI_ESDD_UD_205 */
        /* START Msg(2:2814)-6 */
        /* Initialize MCTL1 register to value after reset */
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL1,
                                                  SPI_CTL_32BIT_REG_VAL)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
        &(Csih_BaseAddress[LddHWUnit]->MCTL1), SPI_CTL_32BIT_REG_VAL,
                                        SPI_CSIHMCTL1_MASK, SPI_DEINIT_SID)
       /* END Msg(2:2814)-6 */
      }
      else
      {
         /* START Msg(2:2814)-6 */
        /* Initialize MCTL2 register to value after reset */
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL2,
                                                       SPI_CTL_32BIT_REG_VAL)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->MCTL2),SPI_CTL_32BIT_REG_VAL,
                                            SPI_CSIHMCTL2_MASK, SPI_INIT_SID)

        /* Initialize MRWP0 register to value after reset */
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MRWP0,
                                                      SPI_CTL_32BIT_REG_VAL)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
        &(Csih_BaseAddress[LddHWUnit]->MRWP0), SPI_CTL_32BIT_REG_VAL,
                                          SPI_CSIHMRWP0_MASK,SPI_DEINIT_SID)
         /* END Msg(2:2814)-6 */
      }
    }
    else
    {
      /* No action required */
    }
    #endif /*
            * ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
            *  (SPI_TX_ONLY_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON))
            */

    /* Implements SPI_ESDD_UD_203 */
    /* START Msg(2:2814)-6 */
    /* Initialize CSIH configuration register */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG0),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG1,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG1),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG2,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG2),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG3,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG3),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG4,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG4),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG5,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG5),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG6,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG6),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG7,
                                                   SPI_CTL_32BIT_REG_VAL)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CFG7),SPI_CTL_32BIT_REG_VAL,
                                     SPI_CSIHCFG_MASK, SPI_DEINIT_SID)
    /* END Msg(2:2814)-6 */

    /* START Msg(2:3892)-8 */
    /* Implements SPI_ESDD_UD_187 */
    /* Initialize BRS register to value after reset */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS0,
                                                 SPI_CTL_16BIT_REG_DEINIT)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS0), SPI_CTL_16BIT_REG_DEINIT,
                                            SPI_CSIHBRS_MASK, SPI_DEINIT_SID)

    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS1,
                                                 SPI_CTL_16BIT_REG_DEINIT)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS1), SPI_CTL_16BIT_REG_DEINIT,
                                            SPI_CSIHBRS_MASK, SPI_DEINIT_SID)

    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS2,
                                                 SPI_CTL_16BIT_REG_DEINIT)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS2), SPI_CTL_16BIT_REG_DEINIT,
                                            SPI_CSIHBRS_MASK, SPI_DEINIT_SID)

    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS3,
                                                 SPI_CTL_16BIT_REG_DEINIT)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS3), SPI_CTL_16BIT_REG_DEINIT,
                                            SPI_CSIHBRS_MASK, SPI_DEINIT_SID)
    /* END Msg(2:3892)-8 */

    #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */

    /* Clear the interrupts in asynchronous mode */
    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
         (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    /* Implements SPI_ESDD_UD_200 */
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxImrAddress;
    /* Disable interrupt processing */
    /* START Msg(2:2814)-6 */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                            (~(Spi_GstHWUnitInfo[LddHWUnit].ulRxImrMask)));
    /* END Msg(2:2814)-6 */
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxImrAddress;

    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                         (~(Spi_GstHWUnitInfo[LddHWUnit].ulTxImrMask)));

    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pErrorImrAddress;

    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                           (~(Spi_GstHWUnitInfo[LddHWUnit].ulErrorImrMask)));
    #endif

    #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) &&\
      (SPI_CANCEL_API == STD_ON))
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxCancelImrAddress;
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulTxCancelImrMask)));
    #endif

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxIntCntlAddress;

    /* Clear Tx pending interrupt */
    /* START Msg(2:2814)-6 */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));
    /* END Msg(2:2814)-6 */

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxIntCntlAddress;
    /* Clear Rx pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pErrorIntCntlAddress;
    /* Clear Error pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));

    #if (((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) &&\
      (SPI_CANCEL_API == STD_ON))
    /* Address for transmit cancel interrupt control registers (TIJC) */
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxCancelIntCntlAddress;
    /* Clear transmit cancel pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));
    #endif

    LddHWUnit++;

  } /* End of while (SPI_MAX_HW_DETAILS > LddHWUnit) */

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  /* MISRA Violation: START Msg(4:0317)-5 */
  /* START Msg(2:2814)-6 */
  Spi_GpDmaUnitConfig = Spi_GpConfigPtr->pDMAConfiguration;
  /* END Msg(2:2814)-6*/
  /* END Msg(4:0317)-5 */
  LucMaxDmaChannels = Spi_GpConfigPtr->ucMaxDmaChannels;
  for (LucLoopCount = SPI_ZERO; LucLoopCount <
                                              LucMaxDmaChannels; LucLoopCount++)
  {
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    LpDmaConfig = Spi_GpDmaUnitConfig + LucLoopCount;
    /* END Msg(2:2824)-2 */
    /* END Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;
    /* MISRA Violation: START Msg(4:0402)-12 */
    /* Disable channel operation */

    SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_DISABLE)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
                          SPI_DMA_DCEN_DISABLE, SPI_DCEN_MASK, SPI_DEINIT_SID)

    /* END Msg(2:2814)-6 */
    /* Clear DMA Transfer Request */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTFRRQCn,SPI_DMA_DRQ_CLEAR)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRRQn),
                     (uint32)SPI_ZERO, SPI_DMA_DRQ_CLEAR, SPI_DEINIT_SID)

    /* Clear Software request flag */
    LulDmaDCSTCn = (LpDmaRegisters->ulDCSTCn | SPI_DMA_STR_CLEAR);
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCSTCn, LulDmaDCSTCn)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCSTn),
                         (uint32)SPI_ZERO, SPI_DMA_STR_CLEAR, SPI_DEINIT_SID)

    /* Initialise the source address register */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDSAn,SPI_DMA_DEINIT)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDSAn),
                     SPI_DMA_DEINIT,SPI_CTLREG_32_BIT_MASK, SPI_DEINIT_SID)

    /* Initialise the transmission register */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDDAn,SPI_DMA_DEINIT)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDDAn),
                      SPI_DMA_DEINIT, SPI_CTLREG_32_BIT_MASK, SPI_DEINIT_SID)

    /* Initialise the transfer control register */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn,SPI_DMA_DEINIT)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                                  SPI_DMA_DEINIT,SPI_DTCT_MASK,SPI_DEINIT_SID)

     /* Initialise the trigger factor configured register*/
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTFRn, SPI_DMA_DEINIT)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRn),
                                   SPI_DMA_DEINIT,SPI_DTFR_MASK,SPI_DEINIT_SID)

    /* END Msg(4:0402)-12 */
  }
  #endif /* #if (SPI_DMA_MODE_ENABLE == STD_ON) */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name      : Spi_InternalWriteIB
**
** Service ID         : Not Applicable
**
** Description        : This service writes the data into HW Buffer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Channel - Channel ID
**                      DataBufferPtr - Pointer to source data buffer
**                      LucApId - Service ID
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstChannel, Spi_GpConfigPtr
**
** Function Invoked   : Spi_HWWriteIB
**
** Registers Used     : CSIHnMRWP0, CSIHnTX0W, CSIHnMCTL0
*******************************************************************************/
/* Implements SPI_ESDD_UD_023 */
/* Implements SPI_ESDD_UD_092 */
/* Implements SPI_ESDD_UD_129 */
#if (SPI_IB_CONFIGURED == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* Implements SPI023, SPI035, SPI203_Conf, SPI164, SPI112, AR_PN0063_FR_0121 */
/* Implements AR_PN0063_FR_0114, AR_PN0063_FR_0115 AR_PN0063_FR_0117 */
/* Implements AR_PN0063_FR_0116 */
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(void, SPI_PRIVATE_CODE) Spi_InternalWriteIB(Spi_ChannelType Channel,
           P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr,
           uint8 LucApId)
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  /* Implements SPI_ESDD_UD_152 */
  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
       ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
       (SPI_LEVEL_DELIVERED == SPI_ZERO)))
  /* Defining a local pointer to point to the source buffer */
  P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpSrcPtr;
  /*
   * Defining a local pointer variable to point to internal buffer of the
   * requested channel
   */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpChannelIB;
  Spi_NumberOfDataType LddNoOfBuffers;
  #endif

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + Channel;
  /* END Msg (2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Check if the buffer type is internal buffer (not hardware buffer) */
  if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      || (SPI_ONE < LpPBChannelConfig->ucChannelBufferType)
      #endif
      )
  /* END Msg(2:2814)-6 */
  {
    #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
         ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) || \
         (SPI_LEVEL_DELIVERED == SPI_ZERO)))

    /* Get the local reference to the source buffer */
    LpSrcPtr = LpDataBufferPtr;
    /* START Msg(2:2814)-6 */
    LpChannelIB = Spi_GpConfigPtr->pChannelIBWrite;
    /* END Msg(2:2814)-6 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    LpChannelIB = LpChannelIB + LpPBChannelConfig->ddBufferIndex;
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */
    LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;

    do
    {
      if (NULL_PTR != LpSrcPtr)
      {
        /* Copy the data from the source buffer to the internal buffer */
        *LpChannelIB = *LpSrcPtr;
        /* MISRA Violation: START Msg(4:0489)-3*/
        /* Increment the source pointer */
        LpSrcPtr++;
        /* END Msg (4:0489)-3 */
      }
      else
      {
        *LpChannelIB = LpPBChannelConfig->ddDefaultData;
      }

      /* MISRA Violation: START Msg(4:0489)-3*/
      /* Increment the buffer pointer */
      LpChannelIB++;
      /* END Msg (4:0489)-3 */

      /* Decrement the counter for number of buffers */
      LddNoOfBuffers--;
    } while (SPI_ZERO < LddNoOfBuffers);
    #endif /*
            * ((SPI_INTERNAL_RW_BUFFERS == STD_ON) && \
            * ((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON) \
            * || (SPI_LEVEL_DELIVERED == SPI_ZERO)))
            */

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_ONE < LpPBChannelConfig->ucChannelBufferType)
    {
      /* Buffer type is 'hardware buffer' */
      Spi_HWWriteIB(Channel, LpDataBufferPtr, LucApId);
    }
    else
    {
      /* No action required */
    }
    #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */
  } /* End of operations if the buffer type is 'internal buffer' */
  else
  {
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    /* Buffer type is 'hardware buffer' */
    Spi_HWWriteIB(Channel, LpDataBufferPtr, LucApId);
    #endif
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name      : Spi_HWWriteIB
**
** Service ID         : Not Applicable
**
** Description        : This service writes the data into HW Buffer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Channel - Channel ID
**                      DataBufferPtr - Pointer to source data buffer
**                      LucApId - Service ID
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstChannel
**
** Function Invoked   : None
**
** Registers Used     : CSIHnMRWP0, CSIHnTX0W, CSIHnMCTL0
*******************************************************************************/
/* Implements SPI_ESDD_UD_022 */
/* Implements SPI_ESDD_UD_129 */
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI149, SPI289, SPI290, SPI291, AR_PN0063_FR_0063 */
/* START Msg(2:3206)-7 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_HWWriteIB(Spi_ChannelType Channel,
           P2CONST(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr,
               uint8 LucApId)
/* END Msg(2:3227)-1 */
/* END Msg(2:3206)-7 */
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  uint16 LusMctlData;
  uint8 Lucflag;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  Spi_DataAccess LunDataAccess2;
  #endif
  /* END Msg(4:0759)-1 */
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  uint32 LulShiftData;
  #endif

  Spi_NumberOfDataType LddNoOfBuffers;
  Spi_HWUnitType LddHWUnit;

  /* Implements SPI_ESDD_UD_184 */
  Spi_DataType LddData;
  Lucflag = SPI_ZERO;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + Channel;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Implements SPI_ESDD_UD_156 */
  /* Get the index of the HW Unit */
  LddHWUnit = (Spi_HWUnitType)
                          ((LpPBChannelConfig->ucChannelBufferType - SPI_TWO));

  LusMctlData = Csih_BaseAddress[LddHWUnit]->MCTL0;

  /* If Tx Only or Dual Buffer Mode */
  if (SPI_ZERO == (LusMctlData & SPI_CHECK_BUFFER_MODE))
  {

    #if(SPI_TX_ONLY_MODE == STD_ON)
    /* Implements SPI_ESDD_UD_203 */
    /* Initialize CSIH memory register for TX Only Mode */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL0,
                                                         SPI_TX_ONLY_MODE_SET)

    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->MCTL0), SPI_TX_ONLY_MODE_SET,
                                               SPI_CSIHMCTL0_MASK, LucApId)
    #else
    /* Initialize CSIH memory register for Dual Buffer Mode */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL0,
                                                    SPI_DUAL_BUFFER_MODE_SET)

    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->MCTL0), SPI_DUAL_BUFFER_MODE_SET,
                                                 SPI_CSIHMCTL0_MASK, LucApId)
    #endif

    Lucflag++;
  }
  else
  {
    /* No action required */
  }
  /* Implements SPI_ESDD_UD_193 */
  /* Implements SPI_ESDD_UD_204 */
  /* Read the existing value from the Read-Write pointer register to */
  /* a local variable */
  LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->MRWP0;

  /* Load the local variable with the value of Tx-Buffer Read/Write Pointer */
  LunDataAccess1.usRegData5[SPI_ZERO] = LpPBChannelConfig->ddBufferIndex;
  /* END Msg(2:2814)-6 */
  /* Load back the value of the local variable to Read-Write pointer register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MRWP0,
                                              LunDataAccess1.ulRegData)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->MRWP0), LunDataAccess1.ulRegData,
                                          SPI_CSIHMRWP0_MASK, LucApId)

  /* Get the number of buffers configured for the requested channel */
  LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;

  do
  {
    /* Take a local union variable to construct the value for TX0W register */
    LunDataAccess1.ulRegData = SPI_ZERO;

    LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpPBChannelConfig->ucCSInfo;
    /* Check if the source pointer is NULL pointer */
    if (NULL_PTR == LpDataBufferPtr)
    {
      /* get the configured default value */
      LddData = LpPBChannelConfig->ddDefaultData;
    }
    else
    {
      /* Get the value from the source pointer */
      LddData = *LpDataBufferPtr;
      /* MISRA Violation: START Msg(4:0489)-3*/
      LpDataBufferPtr++;
      /* END Msg (4:0489)-3 */
    }
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /* Data width is maximum 8-bit. Hence, load Tx data portion of the local
     * variable with the 8-bit data to be transmitted
     */
    LunDataAccess1.ucRegData4[SPI_ZERO] = LddData;

    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /* Implements SPI_ESDD_UD_193 */
    /* Data width is maximum 16-bit. Hence, load Tx data portion of the local
     * variable with the 16-bit data to be transmitted
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;

    #else
    if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                  (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                  (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                  (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
    {
      LulShiftData = (uint32)LddData;
      LulShiftData = (uint32)(LulShiftData << (SPI_SIXTEEN -
                                        (LpPBChannelConfig->ucDLSSetting)));
      LunDataAccess2.ulRegData = LulShiftData;
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
      (LunDataAccess2.usRegData5[SPI_ZERO] >> (SPI_SIXTEEN -
                                         (LpPBChannelConfig->ucDLSSetting)));
      LunDataAccess2.usRegData5[SPI_ZERO] =
                                   LunDataAccess1.Tst_ByteAccess.usRegData1;
    }
    else
    {
      /* Data width is maximum 32-bit. Tx data needs to be split to
       * LS Byte and MS Byte. Hence, load the Tx data to local union variable
       */
      LunDataAccess2.ulRegData = LddData;
    }
    /* Since data width is maximum 32-bit, check if the the data width of
     * requested channel is more than 16 bits
     */
    if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    {
      /* Data width is maximum 16-bit. Hence, load LSB portion of the
       * local variable with the 16-bit data to be transmitted
       */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                       LunDataAccess2.usRegData5[SPI_ZERO];
    }
    else
    {
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Load Tx data portion of the local variable with LSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                       LunDataAccess2.usRegData5[SPI_ZERO];
      }
      else
      {
        /* Load Tx data portion of the local variable with MSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                          LunDataAccess2.usRegData5[SPI_ONE];
      }

      /* MISRA Violation: START Msg(4:2984)-9 */
      /* Set the EDL bit in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                      (LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EDL);
      /* END Msg(4:2984)-9 */

      /* Load the value of the local union variable to TX0W register */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                            LunDataAccess1.ulRegData)

      /* Decrement the counter for number of buffers */
      LddNoOfBuffers--;
      /* MISRA Violation: START Msg(4:2984)-9 */
      /* Reset the EDL bit in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                    (LunDataAccess1.Tst_ByteAccess.ucRegData3 & SPI_RESET_EDL);
      /* END Msg(4:2984)-9 */

      /* Check the data direction again to load other part of data */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Load Tx data portion of the local variable with MSB */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                        LunDataAccess2.usRegData5[SPI_ONE];
      }
      else
      {
        /* Load Tx data portion of the local variable with LSB */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                        LunDataAccess2.usRegData5[SPI_ZERO];
      }
    } /* End of !if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)*/
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON) */
    /* Check if the buffer is last buffer of the channel */
    if (SPI_ONE == LddNoOfBuffers)
    {
      /* Check if it is last channel in the job */
      if (SPI_ONE == LpPBChannelConfig->ucChannelInfo)
      {
        /* MISRA Violation: START Msg(4:2984)-9 */
        /*
         * Since buffer is last buffer of the job and not last buffer of
         * the sequence, set only EOJ
         */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                       (LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EOJ);
        /* END Msg(4:2984)-9 */
      }
      else if (SPI_TWO == LpPBChannelConfig->ucChannelInfo)
      {
        /* MISRA Violation: START Msg(4:2984)-9 */
        /* Since last buffer of sequence, set both CIRE and EOJ */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                   (LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_CIREEOJ);
        /* END Msg(4:2984)-9 */
      }
      else
      {
        /* No action Required */
      }
    } /* End of if (SPI_ONE == LddNoOfBuffers) */
    else
    {
      /* No action required */
    }
    /* Load the value of the local union variable to TX0W register */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                          LunDataAccess1.ulRegData)

    /* Decrement the counter for number of buffers */
    LddNoOfBuffers--;

  }while (SPI_ZERO < LddNoOfBuffers);
  if (Lucflag != SPI_ZERO)
  {
    /* Reset CSIH memory register */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL0, LusMctlData)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->MCTL0), LusMctlData,
    SPI_CSIHMCTL0_MASK, LucApId)
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of ((SPI_DUAL_BUFFER_MODE == STD_ON) ||
        * (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_HWReadIB
**
** Service ID         : Not Applicable
**
** Description        : This service reads the data from HW Buffer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Channel - Channel ID
**                      DataBufferPtr - Pointer to destination data buffer
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstChannel
**
** Function Invoked   : None
**
** Registers Used     : CSIHnRX0W, CSIHnRX0H, CSIHnMRWP0
*******************************************************************************/
/* Implements SPI_ESDD_UD_024 */
/* Implements SPI_ESDD_UD_129 */
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_HWReadIB(Spi_ChannelType Channel,
           P2VAR(Spi_DataType, AUTOMATIC, SPI_APPL_CONST) LpDataBufferPtr)
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;

  /* Defining a local pointer variable to hold the destination data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpDesPtr;
  Spi_NumberOfDataType LddNoOfBuffers;

  Spi_DataType LddData;

  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  Spi_DataAccess LunDataAccess2;
  /* END Msg(4:0759)-1 */

  Spi_HWUnitType LddHWUnit;

  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  uint32 LulShiftData;
  uint32 LulShiftDataLow;
  uint32 LulShiftDataHigh;
  #endif /* (SPI_EXTENDED_DATA_LENGTH == STD_ON) */

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + Channel;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Get the index of the HW Unit */
  LddHWUnit = (Spi_HWUnitType)
                          ((LpPBChannelConfig->ucChannelBufferType - SPI_TWO));

  /*
   * Read the existing value from the Read-Write pointer register to
   * a local variable
   */
  /* Implements SPI_ESDD_UD_193 */
  LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->MRWP0;

  /* Load the local variable with the value of Tx-Buffer Read/Write Pointer */
  LunDataAccess1.usRegData5[SPI_ONE] = LpPBChannelConfig->ddBufferIndex;
  /* END Msg(2:2814)-6 */
  /* Load back the value of the local variable to Read-Write pointer register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MRWP0,
                                               LunDataAccess1.ulRegData)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->MRWP0), LunDataAccess1.ulRegData,
                                       SPI_CSIHMRWP0_MASK, SPI_READIB_SID)

  /* Copy the destination pointer value to a local pointer variable */
  LpDesPtr = LpDataBufferPtr;

  /* Get the number of buffers configured for the requested channel */
  LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;

  do
  {
    LunDataAccess2.ulRegData = Csih_BaseAddress[LddHWUnit]->RX0W;
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */

    LddData = LunDataAccess2.ucRegData4[SPI_ZERO];
    /*
     * Data width is maximum 16-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */
    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /* Load data from union variable to local variable */
    LddData = LunDataAccess2.usRegData5[SPI_ZERO];

    #else
    /* Load data from union variable to local variable */

    /*
     * Data width is maximum 32-bit, Check if the the data width of
     * requested channel is more than 16 bits
     */
    if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                  (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                  (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                  (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
    {
      LulShiftData =  LunDataAccess1.ulRegData;
      LulShiftDataHigh = LulShiftData & SPI_HIGH_DATA_MASK;
      LulShiftDataLow = LulShiftData & SPI_LOW_DATA_MASK;
      LulShiftDataLow = LulShiftDataLow << (SPI_SIXTEEN -
                                     (LpPBChannelConfig->ucDLSSetting));
      LulShiftData = LulShiftDataHigh | LulShiftDataLow;
      LulShiftData = LulShiftData >> (SPI_SIXTEEN -
                               (LpPBChannelConfig->ucDLSSetting));
      LddData  = LulShiftData;
    }
    /*
     * Data width is maximum 32-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */
    else
    {
      LddData = LunDataAccess1.ulRegData;
    }
    LddData = LunDataAccess2.usRegData5[SPI_ZERO];

    if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
    {
      LddNoOfBuffers--;
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /*
         * Take a local union variable to construct the value from RX0W
         * register
         */
        LunDataAccess2.usRegData5[SPI_ZERO] = (uint16)LddData;
        LunDataAccess2.usRegData5[SPI_ONE] = Csih_BaseAddress[LddHWUnit]->RX0H;
      }
      else
      {
        /*
         * Take a local union variable to construct the value from RX0W
         * register
         */
         if (SPI_ZERO != LpPBChannelConfig->ucDLSSetting)
         {
           LunDataAccess2.usRegData5[SPI_ONE] = (uint16)LddData;
           LunDataAccess2.usRegData5[SPI_ZERO] =
                                          Csih_BaseAddress[LddHWUnit]->RX0H;
           LunDataAccess2.usRegData5[SPI_ZERO] =
                             ((LunDataAccess2.usRegData5[SPI_ZERO]) <<
                             (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting)));
           LunDataAccess2.ulRegData = ((LunDataAccess2.ulRegData) >>
                         (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting)));
         }
         else
         {
           LunDataAccess2.usRegData5[SPI_ONE] = (uint16)LddData;
           LunDataAccess2.usRegData5[SPI_ZERO] =
                                       Csih_BaseAddress[LddHWUnit]->RX0H;
         }
      }
      /* Load data from union variable to local variable */
      LddData = LunDataAccess2.ulRegData;
    }
    else
    {
      /* No action required */
    }
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON)*/
    /* START Msg(2:2814)-6 */
    *LpDesPtr = LddData;
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpDesPtr++;
    /* END Msg (4:0489)-3 */
    /* END Msg(2:2814)-6 */

    /* Decrement the counter for number of buffers */
    LddNoOfBuffers--;
  }while (SPI_ZERO < LddNoOfBuffers);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((SPI_DUAL_BUFFER_MODE == STD_ON) || \
        * (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_HWUnitStatus
**
** Service ID         : Not Applicable
**
** Description        : This service gets the Hardware unit status
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType HWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Spi_StatusType (SPI_IDLE/SPI_BUSY)
**
** Preconditions      : Spi_Init should have been invoked
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function invoked   : None
**
** Registers Used     : CSIHnSTR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_032 */
/* Implements SPI_ESDD_UD_084 */
#if (SPI_HW_STATUS_API == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* Implements SPI349, SPI029 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(Spi_StatusType, SPI_PRIVATE_CODE) Spi_HWUnitStatus
                                                     (Spi_HWUnitType HWUnit)
/* END Msg(2:3227)-1 */
{

  Spi_StatusType LddHWUnitSts;

  /* Is bit TSF = 1 */
  if (((Csih_BaseAddress[HWUnit]->STR0) & SPI_CSIH_BUSY) == SPI_CSIH_BUSY)
  {
    LddHWUnitSts = SPI_BUSY;
  }
  else /* Is bit TSF = 0 */
  {
    LddHWUnitSts = SPI_IDLE;
  }

  return(LddHWUnitSts);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_HW_STATUS_API == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_HWTransmitSyncJob
**
** Service ID         : Not Applicable
**
** Description        : This service is used for transmitting the sequences
**                      synchronously
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_JobConfigType *LpJobConfiguration
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType (E_OK/E_NOT_OK)
**
** Preconditions      : None
**
** Global Variables   : Spi_GstHWUnitInfo, Spi_GpFirstChannel, Spi_GpConfigPtr,
**                      Spi_GblSyncTx
**
** Function Invoked   : Spi_SyncRegSettings,
**                      Spi_SyncProcessData
**
** Registers Used     : CSIHnMCTL0, CSIHnCTL0, CSIHnSTCR0, CSIHnCTL1, CSIHnCTL2,
**                      CSIHnCFGx, CSIHnBRSy, CSIHnSTR0, CSIHnRX0H, CSIHnTX0W,
**                      ICRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_027 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* Implements AR_PN0063_FR_0089 */
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_HWTransmitSyncJob
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
                          Spi_SequenceType LddSequenceID, Spi_JobType LddJobID)
/* END Msg(2:3227)-1 */
#else
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_HWTransmitSyncJob
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig)
/* END Msg(2:3227)-1 */
#endif
{
  /* Defining a local pointer to point to structure of HW Unit information */
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;
  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  uint8 LucCxCtl0;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;
  uint8 LucVar;
  #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg (4:0759)-1 */
  #endif /* (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) */

  /* Declare a local pointer to point to the channel Config Data */
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  /* Declare a local pointer to point to the channel list */
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_PRIVATE_CONST) LpChannelList;
  Spi_ChannelType LddNoOfChannels;
  Std_ReturnType LenReturnValue;
  Spi_HWUnitType LddHWUnit;

  LenReturnValue = E_OK;
  /* START Msg(2:2814)-6 */
  /* Get the HW Unit index */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;
  /* END Msg(2:2814)-6 */
  /* Get the number of channels */
  LddNoOfChannels = LpJobConfig->ddNoOfChannels;
  LpChannelList = LpJobConfig->pChannelList;
  /* Get the base address of the HW Unit */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  /* do the Cfg and Cntl register settings */
  Spi_SyncRegSettings(LpJobConfig);
  #endif /* #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED) */

  /* Clear Interrupt flags */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                        (SPI_CLR_INT_REQ));
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                        (SPI_CLR_INT_REQ));
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                                        (SPI_CLR_INT_REQ));
  do
  {
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the channel linked to the job */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpChannelList);
    /* END Msg(2:2824)-2 */
    /* END Msg(2:2814)-6 */
    /* END Msg (4:0488)-4 */

    /* Implements SPI_ESDD_UD_097 */
    #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
    if ((LddNoOfChannels == LpJobConfig->ddNoOfChannels) ||
                            (SPI_FALSE == LpJobConfig->blIsChannelPropSame))
    {
      /* Clear pending interrupts when channel properties not same */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                               (SPI_CLR_INT_REQ));

      #if (SPI_CSIH_CONFIGURED == STD_ON)
      /* START Msg(2:2814)-6 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the value for multiple chip selects configured  */
      LpChipSelect = (Spi_GpConfigPtr->pCSArray) +
                                                (LpJobConfig->ucCSArrayIndex);
      /* END Msg(4:0488)-4 */
      /* END Msg(2:2814)-6 */

      /* MISRA Violation: START Msg(4:0488)-4 */
      /*
       * To load configuration register, read the existing value to
       * local union variable
       */
      /* Implements SPI_ESDD_UD_193 */
      /* START Msg(2:2814)-6 */
      if(SPI_ZERO == *LpChipSelect)
      /* END Msg(2:2814)-6 */
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG0;
      }
      else if(SPI_ONE == *LpChipSelect)
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG1;
      }
      else if(SPI_TWO == *LpChipSelect)
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG2;
      }
      else if(SPI_THREE == *LpChipSelect)
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG3;
      }
      else if(SPI_FOUR == *LpChipSelect)
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG4;
      }
      else if(SPI_FIVE == *LpChipSelect)
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG5;
      }
      else if(SPI_SIX == *LpChipSelect)
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG6;
      }
      /* MISRA Violation: START Msg(4:0715)-14 */
      else if(SPI_SEVEN == *LpChipSelect)
      {
        LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG7;
      }
      else
      {
        /*Misra*/
      }
      /* END Msg(4:0715)-14 */
      /* END Msg (4:0488)-4 */
      /* START Msg(4:2962)-10 */
      /* START Msg(2:2814)-6 */
      /* Load the local variable with data width */
      LunDataAccess1.ucRegData4[SPI_THREE] =
                LunDataAccess1.ucRegData4[SPI_THREE] & SPI_DLS_MASK;
      LunDataAccess1.ucRegData4[SPI_THREE] =
      (LunDataAccess1.ucRegData4[SPI_THREE] | LpPBChannelConfig->ucDLSSetting);
      /* END Msg(4:2962)-10 */
      /* END Msg(2:2814)-6 */
      /* Load the local variable with configured direction */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Direction is LSB, set DIR bit */
        LunDataAccess1.ucRegData4[SPI_TWO] =
                        LunDataAccess1.ucRegData4[SPI_TWO] | SPI_SET_DIR_LSB;
      }
      else
      {
        /* Direction is MSB, reset DIR bit */
        LunDataAccess1.ucRegData4[SPI_TWO] =
                LunDataAccess1.ucRegData4[SPI_TWO] & SPI_RESET_DIR_LSB;
      }

      /* Load the number of chip selects */
      LucVar = LpJobConfig->ucNoOfCS;
      /* MISRA Violation: START Msg(4:0402)-12 */
      /* Reset the PWR bit since other registers need to be written */
      LucCxCtl0 = (Csih_BaseAddress[LddHWUnit]->CTL0.UINT8 & SPI_RESET_PWR);
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                                  LucCxCtl0)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), LucCxCtl0,
      SPI_CTLREG_8_BIT_MASK, SPI_SYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */
      do
      {
        /* Implements SPI_ESDD_UD_203 */
        /* Initialize CSIH configuration register */
        if(SPI_ZERO == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG0), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        else if(SPI_ONE == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG1,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG1), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        else if(SPI_TWO == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG2,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG2), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        else if(SPI_THREE == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG3,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG3), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        else if(SPI_FOUR == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG4,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG4), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        else if(SPI_FIVE == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG5,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG5), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        else if(SPI_SIX == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG6,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG6), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        /* MISRA Violation: START Msg(4:0715)-14 */
        else if(SPI_SEVEN == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG7,
                                          LunDataAccess1.ulRegData)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
          &(Csih_BaseAddress[LddHWUnit]->CFG7), LunDataAccess1.ulRegData,
          SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
        }
        else
        {
          /* To avoid Misra */
        }
        /* END Msg(4:0715)-14 */
        /* Decrement number of chip selects */
        LucVar--;
        /* MISRA Violation: START Msg(4:0489)-3 */
        LpChipSelect++;
        /* END Msg (4:0489)-3 */
      }while (SPI_ZERO < LucVar);
      /* Set the PWR bit */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LucCxCtl0 = (Csih_BaseAddress[LddHWUnit]->CTL0.UINT8 | SPI_SET_PWR);
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                                 LucCxCtl0)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), LucCxCtl0,
      SPI_CTLREG_8_BIT_MASK, SPI_SYNCTRANSMIT_SID)

      /* END Msg(4:0402)-12 */
      #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
    }
    else
    {
      /* No action required */
    }
    #endif /* #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF ) */
   /* Set the data to transmit and Read the receive data */
    #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
    LenReturnValue = Spi_SyncProcessData(LpJobConfig, LpPBChannelConfig,
                                     LddNoOfChannels, LddSequenceID, LddJobID );
    #else
    LenReturnValue = Spi_SyncProcessData(LpJobConfig, LpPBChannelConfig,
                                                               LddNoOfChannels);
    #endif
    /* Increment the pointer to the channel */
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpChannelList++;
    /* END Msg (4:0489)-3 */

    /* Decrement the counter for number of channels */
    LddNoOfChannels--;

   }while ((SPI_ZERO < LddNoOfChannels) && (E_OK == LenReturnValue));

   return(LenReturnValue);
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((SPI_LEVEL_DELIVERED == SPI_ZERO) ||
        *  ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        *  (SPI_DIRECT_ACCESS_MODE == STD_ON)))
        */

/*******************************************************************************
** Function Name      : Spi_InitiateJobTx
**
** Service ID         : Not Applicable
**
** Description        : This service initiates the SPI transmission. This is
**                      common for all modes of asynchronous transmission
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_JobType LddJobListIndex
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstSeq, Spi_GpFirstJob, Spi_GpFirstJobList,
**                      Spi_GpConfigPtr, Spi_GaaHighPriorityCommActive
**                      Spi_GddDriverStatus, Spi_GpFirstChannel
**                      Spi_GstCurrentCommData, Spi_GstDualBufferCurrentCommData
**                      Spi_GaaSeqCurrentHWUnit, Spi_GblInitiateJobTx
**
** Function Invoked   : Spi_ProcessChannelInDirAccMod,
**                      Spi_ProcessChannelInFifoMod,
**                      Spi_ProcessChannelInDualOrTxMod
**                      SPI_EXIT_CRITICAL_SECTION, SPI_ENTER_CRITICAL_SECTION
**
** Registers Used    :  CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W, CSIHnBRSy, CSIHnCFGx,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_028 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI234_Conf, SPI233_Conf, SPI116, EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_131 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_InitiateJobTx(Spi_JobType LddJobListIndex)
/* END Msg(2:3227)-1 */
{
  /* Declare a local pointer to point to the Job Config Structure */
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;

  Spi_JobType LddJobIndex;
  Spi_HWUnitType LddHWUnit;
  uint8 LucHWMemoryMode;
  #if (((SPI_TX_ONLY_MODE == STD_ON) && (SPI_INTERNAL_RW_BUFFERS == STD_ON)) ||\
        (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_CANCEL_API == STD_ON))
  /* Defining a local variable to hold to index of the sequence */
  Spi_SequenceType LddSeqIndex;
  #endif

  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif

  #if ((SPI_TX_ONLY_MODE == STD_ON) && (SPI_INTERNAL_RW_BUFFERS == STD_ON))
  /* Defining a local variable to hold to index of the buffer */
  Spi_NumberOfDataType LddBufferIndex;
  /* Declare a local pointer to point to the channel Config Data */
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, PI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  P2VAR(Spi_TxOnlyCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpTxOnlyCurrentCommData;
  #endif

  #if (SPI_DUAL_BUFFER_MODE == STD_ON)
  P2VAR(Spi_DualBufferCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpDualBufferCurrentCommData;
  #endif

  #if (((SPI_TX_ONLY_MODE == STD_ON) && (SPI_INTERNAL_RW_BUFFERS == STD_ON))\
                                        || (SPI_DUAL_BUFFER_MODE == STD_ON))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the respective job list index */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */

  #if (((SPI_TX_ONLY_MODE == STD_ON) && (SPI_INTERNAL_RW_BUFFERS == STD_ON))\
           || (SPI_DUAL_BUFFER_MODE == STD_ON) ||(SPI_CANCEL_API == STD_ON))
  /* Get the index of the sequence */
  LddSeqIndex = LpJobList->ddSequenceIndex;
  #endif

  #if (((SPI_TX_ONLY_MODE == STD_ON) && (SPI_INTERNAL_RW_BUFFERS == STD_ON))\
                                        || (SPI_DUAL_BUFFER_MODE == STD_ON))
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  #endif
  /* Implements SPI_ESDD_UD_096 */
  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  #endif

  /* Update driver status as busy */
  Spi_GddDriverStatus = SPI_BUSY;
  /* Implements SPI_ESDD_UD_096 */
  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  #endif
  /* START Msg(2:2814)-6 */
  /* Get the HW Unit index of the any of the job in the sequence */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;
  /* END Msg(2:2814)-6 */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* Since High priority communication is active, memory mode is DAM */
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif /* End of #if (SPI_HW_PRIORITY_ENABLED == STD_ON) */

  #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */

  /* Implements SPI_ESDD_UD_144 */
  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  /* MISRA Violation: START Msg(4:2995)-15 */
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  /* END Msg(4:2995)-15 */
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    /* MISRA Violation: START Msg(4:2962)-10 */
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    /* END Msg(4:2962)-10 */
    #endif
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
    }
    #endif

    /*
     * Store the index of the current HW Unit in the RAM area to be
     * used by the ISR
     */
    /* Implements SPI_ESDD_UD_199 */
    LpCurrentCommData->ddHWUnitIndex = LddHWUnit;

    /* Save the current channel list to be transmitted */
    LpCurrentCommData->pCurrentTxChannelList = (LpJobConfig->pChannelList);

    /* Save the current channel list to be received */
    LpCurrentCommData->pCurrentRxChannelList = (LpJobConfig->pChannelList);

    /* Save the number of channels yet to be transmitted */
    LpCurrentCommData->ddNoOfTxChannels = (LpJobConfig->ddNoOfChannels);

    /* Save the number of channels yet to be received */
    LpCurrentCommData->ddNoOfRxChannels = (LpJobConfig->ddNoOfChannels);

    #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
    /* Reset the flag for indicating EDL */
    LpCurrentCommData->blTxEDL = SPI_FALSE;

    /* Reset the flag for indicating EDL */
    LpCurrentCommData->blRxEDL = SPI_FALSE;
    #endif
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if (SPI_DIRECT_ACCESS_MODE == STD_ON) */

  /* Implements SPI_ESDD_UD_147 */
  #if ((SPI_TX_ONLY_MODE == STD_ON) && (SPI_INTERNAL_RW_BUFFERS == STD_ON))
  if (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode)
  {
    LpTxOnlyCurrentCommData =
     &Spi_GstTxOnlyCurrentCommData
                 [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];
    /* START Msg(2:2824)-2 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpPBChannelConfig = Spi_GpFirstChannel + (*(LpJobConfig->pChannelList));
    /* END Msg (4:0488)-4 */
    /* END Msg(2:2824)-2 */
    /* START Msg(2:2814)-6 */
    /* Get the buffer index value */
    LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
    /* END Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_195 */
    /* Implements SPI_ESDD_UD_198 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpTxOnlyCurrentCommData->pCurrentRxData = (Spi_GpConfigPtr->pChannelIBRead +
                                        (LddBufferIndex + SPI_RX_BUFFER_START));
    /* END Msg (4:0488)-4 */

    /* Get the pointer to the post-build structure of the channel */
    LpTxOnlyCurrentCommData->ddChannelIndex = *(LpJobConfig->pChannelList);
    /* START Msg(2:2814)-6 */
    /* Save the number of buffers to be received */
    LpTxOnlyCurrentCommData->ddNoOfBuffers = LpSeqConfig->ddNoOfBuffers;
    /* END Msg(2:2814)-6 */
    /* Save the number of buffers received */
    LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd = SPI_ZERO;

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Save the number of buffers to be received before a notification */
    LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx =
                    (Spi_GpConfigPtr->pJobNotifyIndex) +
                                        LpSeqConfig->ddNxtNotifyIndex;
    /* END Msg (4:0488)-4 */
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if ((SPI_TX_ONLY_MODE == STD_ON) && \
                               (SPI_INTERNAL_RW_BUFFERS == STD_ON)) */

  /* Implements SPI_ESDD_UD_146 */
  #if (SPI_DUAL_BUFFER_MODE == STD_ON)
  if (SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode)
  {
    LpDualBufferCurrentCommData = &Spi_GstDualBufferCurrentCommData
                 [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

     /* MISRA Violation: START Msg(4:0488)-4 */
    LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx =
                          (Spi_GpConfigPtr->pJobNotifyIndex) +
                                          (LpSeqConfig->ddNxtNotifyIndex);
    /* END Msg(4:0488)-4 */

    LpDualBufferCurrentCommData->ddNoOfBuffersTxtd =
                *(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx);
  }
  else
  {
    /* No action required */
  }
  #endif

  #if (SPI_CANCEL_API == STD_ON)
  Spi_GaaSeqCurrentHWUnit[LddSeqIndex] = LddHWUnit;
  #endif

  /*
   * Global boolean variable to avoid copy of properties repeatedly if
   * properties of all channels are same. This boolean allows copying channel
   * properties once. This boolean will be reset immediately after its use
   */
  Spi_GblInitiateJobTx = SPI_TRUE;

  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON))|| \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
    Spi_ProcessChannelInDirAccMod(LddHWUnit, LucHWMemoryMode);
  #endif
  }
  #if (SPI_FIFO_MODE == STD_ON)
  else if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
  {
    Spi_ProcessChannelInFifoMod(LddHWUnit, LucHWMemoryMode);
  }
  #endif
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  else if ((SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode) ||
                               (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode))
  {
    Spi_ProcessChannelInDualOrTxMod(LddHWUnit, LucHWMemoryMode);
  }
  #endif
  else
  {
   /* no action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_TransmitISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIC ISR for processing
**                      communication status interrupt request
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Spi_ProcessDirectAcessData, Spi_ProcessFifoData,
**                      Spi_ProcessDualBufferData
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      CSIHnTX0H, CSIHnRX0W, CSIHnRX0H, ICRn, IMRn, DCENn,
**                      DCSTCn, DCSTn, DDAn, DTCTn, DTCn, DTFRn, DTFRRQCn,
**                      DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_040 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE) Spi_TransmitISR
                             (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
                                        && (SPI_DUAL_BUFFER_MODE == STD_ON))
  if (SPI_TWO > LucHWMemoryMode)
  #endif
  {
    if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
    {
      #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
      Spi_ProcessDirectAcessData(LddHWUnit, LucHWMemoryMode);
      #endif
    } /* End of if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode) */
    else
    {
      #if (SPI_FIFO_MODE == STD_ON)
      Spi_ProcessFifoData(LddHWUnit, LucHWMemoryMode);
      #endif
    }
  }
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
      && (SPI_DUAL_BUFFER_MODE == STD_ON))
  else
  #endif
  {
    #if (SPI_DUAL_BUFFER_MODE == STD_ON)
    if (SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode)
    {
      Spi_ProcessDualBufferData(LddHWUnit, LucHWMemoryMode);
    }
    else
    {
        /* No action required */
    }
    #endif /* End of (SPI_DUAL_BUFFER_MODE == STD_ON) */
  } /* End of else loop of LucHWMemoryMode < SPI_TWO */
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) ||
        * (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_TransmitCancelISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIJC ISR for processing
**                      job completion interrupt request
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GaaSeqQueue, Spi_GaaSeqResult,
**                      Spi_GpFirstSeq, Spi_GddQueueIndex
**
** Function Invoked   : Spi_ProcessSequence,
**                      SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn,DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_039 */
#if (((SPI_CANCEL_API == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
    ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE) Spi_TransmitCancelISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;
  uint8 LucVar;
  #endif
  Spi_SequenceType LddSeqIndex;
  Spi_HWUnitType LddHWUnitNumber;
  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */
  LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  /* Disable transmit cancel interrupt control */
  RH850_SV_MODE_IMR_OR(32, (LpHWUnitInfo->pTxCancelImrAddress),
                      (~(LpHWUnitInfo->ulTxCancelImrMask)));


  /* Update sequence result as CANCELLED */
  Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_CANCELLED;
  /* Implements SPI_ESDD_UD_089 */
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2814)-6 */
  if(NULL_PTR != Spi_GpConfigPtr->pStsValueArray)
  {
    /* Get the pointer to status bytes ROM value for the sequence */
    LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                  (LpSeqConfig->usStsValueStartByteIdx);
  }
  else
  {
    LpStsByteValue = NULL_PTR;
  }

  /* END Msg(2:2814)-6 */
  /* END Msg(4:0488)-4 */

  /* Get the number of status byte ROM value */
  LucVar = LpSeqConfig->ucNoOfStsByteValue;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2814)-6 */
  if(NULL_PTR != Spi_GpConfigPtr->pStatusArray)
  {
    /* Get the pointer to the start byte of RAM area */
    LpStsByte = (Spi_GpConfigPtr->pStatusArray) +
                                  (LpSeqConfig->usStsUpdateStartByteIdx);
  }
  else
  {
    LpStsByte =  NULL_PTR;
  }
  /* END Msg(2:2814)-6 */
  /* END Msg(4:0488)-4 */
  /* Implements SPI_ESDD_UD_096 */
  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  #endif

  while ((SPI_ZERO < LucVar) && (NULL_PTR != LpStsByte)
                                          && (NULL_PTR != LpStsByteValue))
  {
    /*
     * Reset the status bit of the requested sequence and the sequences
     * that have jobs shared with the requested sequence
     */
     /* START Msg(2:2814)-6 */
    *LpStsByte = (*LpStsByte & ((uint8)(~(*LpStsByteValue))));


    /* END Msg(2:2814)-6 */

    /* MISRA Violation: START Msg(4:0489)-3 */
    LpStsByte++;
    /* END Msg(4:0489)-3 */

    /* MISRA Violation: START Msg(4:0489)-3 */
    LpStsByteValue++;
    /* END Msg(4:0489)-3 */

    LucVar--;
  } /* End of while (LucVar > SPI_ZERO) */

  /* Implements SPI_ESDD_UD_096 */
  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Enable relevant interrupts to protect this critical section */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif
  #endif
  Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of #if (((SPI_CANCEL_API == STD_ON) ||
        * (SPI_HW_PRIORITY_ENABLED == STD_ON)) && \
        * ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
        */

/*******************************************************************************
** Function Name      : Spi_ReceiveISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIR ISR for processing
**                      receive status interrupt request
**
** Sync/Async         : Asynchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpFirstChannel, Spi_GpFirstJob,
**                      Spi_GaaSeqQueue, Spi_GaaJobResult, Spi_GaaSeqResult,
**                      Spi_GstTxOnlyCurrentCommData, Spi_GpConfigPtr
**                      Spi_GpFirstJobList, Spi_GddQueueIndex,
**                      Spi_GusAsynDataAccess
**
** Function Invoked   : Spi_ReceiveDirectAcessData, Spi_ProcessSequence
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      CSIHnRX0H, ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn,
**                      DTCTn, DTCn, DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_144 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI_ESDD_UD_169 */
/* Implements SPI118, SPI071, SPI054, SPI218_Conf, SPI295 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE) Spi_ReceiveISR
       (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{

  #if (SPI_TX_ONLY_MODE == STD_ON)
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                              LpPBChannelConfig;
  #endif
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpTxOnlyRxData;
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobListTmptr;
  P2VAR(Spi_TxOnlyCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpTxOnlyCurrentCommData;
  Spi_JobType LddNoOfJobs;
  Spi_SequenceType LddSeqIndex;
  Spi_DataType LddData;
  Spi_HWUnitType LddHWUnitNumber;
  Spi_JobType LddJobIndex;
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  #endif
  /* START Msg(3:3203)-4 */
  volatile uint16 Lus16BitData;
  /* END Msg(3:3203)-4 */
  #endif


  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    Spi_ReceiveDirectAcessData(LddHWUnit, LucHWMemoryMode);
  }
  else
  {
    /* No action required */
  }
  #endif /*
          * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
          *                 (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
          *                                 (SPI_HW_PRIORITY_ENABLED == STD_ON))
          */
  /* Implements SPI_ESDD_UD_147 */
  #if (SPI_TX_ONLY_MODE == STD_ON)
  if (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode)
  {
    /* START Msg(2:2814)-6 */
    LpTxOnlyCurrentCommData =
     &Spi_GstTxOnlyCurrentCommData
            [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];
    /* END Msg(2:2814)-6 */
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

    #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && \
                                           (SPI_16BIT_DATA_WIDTH == STD_OFF))
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpPBChannelConfig = Spi_GpFirstChannel +
             LpTxOnlyCurrentCommData->ddChannelIndex;
    /* END Msg (4:0488)-4 */
    #endif

    LpTxOnlyRxData = LpTxOnlyCurrentCommData->pCurrentRxData;

    if (NULL_PTR != LpTxOnlyRxData)
    {
      #if (SPI_8BIT_DATA_WIDTH == STD_ON)
      /*
       * Data width is maximum 8-bit. Hence, Receive the data from the
       * Rx register to local union variable
       */
      /* START Msg(2:2814)-6 */
      LddData = (uint8) Csih_BaseAddress[LddHWUnit]->RX0H;
      /* END Msg(2:2814)-6 */
      #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
      /* Data width is maximum 16-bit */
      LddData = Csih_BaseAddress[LddHWUnit]->RX0H;
      #else
      /*
       * Data width is maximum 32-bit, check if the the data width of
       * requested channel is more than 16 bits
       */
      if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
      {
        LddData = Csih_BaseAddress[LddHWUnit]->RX0H;
      }
      else
      {
        /* Check if the configured data direction is LSB first */
        if (SPI_TRUE == LpPBChannelConfig->blDirection)
        {
          /*
           * Take a local union variable to construct the value from RX0W
           * register
           */
          LunDataAccess1.usRegData5[SPI_ONE] =
                                       Csih_BaseAddress[LddHWUnit]->RX0H;
          LunDataAccess1.usRegData5[SPI_ZERO] = Spi_GusAsynDataAccess;
        }
        else
        {
          /*
           * Take a local union variable to construct the value from RX0W
           * register
           */
          LunDataAccess1.usRegData5[SPI_ZERO] =
                                        Csih_BaseAddress[LddHWUnit]->RX0H;
          LunDataAccess1.usRegData5[SPI_ONE] = Spi_GusAsynDataAccess;
        } /* End of checking direction */

        LddData = LunDataAccess1.ulRegData;
      }
      #endif /* End of #if (SPI_8BIT_DATA_WIDTH == STD_ON) */
    }
    else
    {
      Lus16BitData = Csih_BaseAddress[LddHWUnit]->RX0H;
    }
    if (NULL_PTR != LpTxOnlyRxData)
    {
      /* MISRA Violation: START Msg(4:2962)-10 */
      *LpTxOnlyRxData = LddData;
      /* END Msg (4:2962)-10*/

      /* MISRA Violation: START Msg(4:0489)-3 */
      LpTxOnlyRxData++;
      /* END Msg (4:0489)-3 */

      LpTxOnlyCurrentCommData->pCurrentRxData = LpTxOnlyRxData;
    }
    else
    {
      /* no action required */
    }
    /* Get the sequence index from the queue for normal operation */
    LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
    /* START Msg(2:2824)-2 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
    /* END Msg (4:0488)-4 */
    /* END Msg(2:2824)-2 */

    (LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd)++;
    /* START Msg(2:2814)-6 */
    if ((LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd) <
                                                  LpSeqConfig->ddNoOfBuffers)
    {
      /* END Msg(2:2814)-6 */
      if ((LpTxOnlyCurrentCommData->ddNoOfBuffersRcvd) >=
                     *(LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx))
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment the notify index value */
        (LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
        /* END Msg (4:0489)-3 */
        /* START Msg(2:2814)-6 */
        LddJobIndex =
         (Spi_JobType)(*(LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx));
        /* END Msg(2:2814)-6 */
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* START Msg(2:2824)-2 */
        /* Check if notification is configured */
        if (NULL_PTR != ((Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification))
        {
          (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification();
          /* END Msg(2:2824)-2 */
          /* END Msg(4:0488)-4 */
        }
        else
        {
          /* No action required */
        }

        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment the notify index value */
        (LpTxOnlyCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
        /* END Msg (4:0489)-3 */
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /*
       * All channels are transmitted and received. Hence the sequence is
       * completed
       */

      /* Update sequence result as OK */
      Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_OK;

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* START Msg(2:2824)-2 */
      /* Load Job List pointer to temporary variable */
      LpJobListTmptr = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
      /* END Msg(2:2824)-2 */
      /* END Msg (4:0488)-4 */

      /* Load total number of Jobs in current sequence to local variable */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      do
      {
        /* START Msg(2:2814)-6 */
        /* Update the job result variable */
        Spi_GaaJobResult[LpJobListTmptr->ddJobIndex] = SPI_JOB_OK;
        /* END Msg(2:2814)-6 */
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Increment local pointer to the job list */
        LpJobListTmptr++;
        /* END Msg (4:0489)-3 */

        LddNoOfJobs--;
      }
      while (SPI_ZERO < LddNoOfJobs);

      Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
    }
  }
  else
  {
    /* No action required */
  }
  #endif /* End of #if (SPI_TX_ONLY_MODE == STD_ON) */
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /*
        * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        *  (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_ProcessSequence
**
** Service ID         : Not Applicable
**
** Description        : This function is to process remaining jobs in
**                      the sequence to be transmitted
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpConfigPtr, Spi_GpFirstJobList,
**                      Spi_GaaJobQueue, Spi_GddQueueIndex,
**                      Spi_GaaHighPriorityCommActive, Spi_GstCurrentCommData
**                      Spi_GaaJobResult, Spi_GpFirstJob,
**                      Spi_GucHWFifoBufferSts.
**
** Function Invoked   : Spi_ProcessChannelInDirAccMod,
**                      Spi_PopFromQueue, Spi_ProcesSeqInDualOrTxMod
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_034 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
             (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* Implements SPI292, SPI350, SPI118, SPI119, SPI088, SPI071, SPI054 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessSequence
                   (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  #endif

  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_CONFIG_CONST) LpHWUnitInfo;

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
  Spi_JobType LddJobIndex;
  #endif

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
        && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  if (SPI_TWO > LucHWMemoryMode)
  #endif
  {
    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON)\
                                         || (SPI_HW_PRIORITY_ENABLED == STD_ON))

    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    /* START Msg(2:2814)-6 */
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
    /* END Msg(2:2814)-6 */

    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
    }
    #endif
    if ((SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode) &&
                            (SPI_ZERO < LpCurrentCommData->ddNoOfRxChannels))
    {
      /* More channels to be transmitted. Hence transmit next channel */
      Spi_ProcessChannelInDirAccMod(LddHWUnit, LucHWMemoryMode);
    }
    else
    #endif /*
            * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            *                   (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
            *                               (SPI_HW_PRIORITY_ENABLED == STD_ON))
            */
    {
      /* START Msg(2:2824)-2 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      LpJobList = Spi_GpFirstJobList +
                        Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber +
                                         SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
      #else

      LpJobList = Spi_GpFirstJobList +
                        Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
      /* END Msg(2:2824)-2 */
      /* END Msg (4:0488)-4 */
      #endif

      /* Get the index of the first job linked to this sequence */
      /* START Msg(2:2814)-6 */
      LddJobIndex = LpJobList->ddJobIndex;
      /* END Msg(2:2814)-6 */

      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
      #endif
      {

        /* Disable transmit interrupt control */
        RH850_SV_MODE_IMR_OR(32, (LpHWUnitInfo->pTxImrAddress),
                                             (~(LpHWUnitInfo->ulTxImrMask)));

        /* Disable receive interrupt control */
        RH850_SV_MODE_IMR_OR(32, (LpHWUnitInfo->pRxImrAddress),
                                             (~(LpHWUnitInfo->ulRxImrMask)));

      }
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      else
      #endif
      {
        /* No action required */
      }

      if (SPI_JOB_FAILED != Spi_GaaJobResult[LddJobIndex])
      {
        /* Update the RAM area for job sequence */
        Spi_GaaJobResult[LddJobIndex] = SPI_JOB_OK;
      }
      else
      {
        /* No action required */
      }

      /* Check if the notification function is configured */
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* START Msg(2:2824)-2 */
      if (NULL_PTR != (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification)
      {
        /* END Msg(2:2824)-2 */
        /* Invoke the notification function */
        (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification();
        /* END Msg (4:0488)-4 */
      }
      else
      {
        /* No action required */
      }
      #if (SPI_FIFO_MODE == STD_ON)
      /* START Msg(2:3892)-8 */
      /* Reset the Buffer status to UNINT */
      Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_UNINIT;
      Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_UNINIT;
      /* END Msg (2:3892)-8 */
      #endif
      /* Pop next job in the queue */
      Spi_PopFromQueue(LddHWUnit, LucHWMemoryMode);

    } /* End of checking memory modes */
    #endif /*
            * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON)\
            *                            || (SPI_HW_PRIORITY_ENABLED == STD_ON))
            */
  }
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
      && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  else
  #endif
  {
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

    Spi_ProcesSeqInDualOrTxMod(LpHWUnitInfo, LddHWUnit);

    #endif /* End of ((SPI_DUAL_BUFFER_MODE == STD_ON)
                   || (SPI_TX_ONLY_MODE == STD_ON))*/
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_TxDmaConfig
**
** Service ID         : Not Applicable
**
** Description        : This function is to set the attributes for DMA transfer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : LpJobConfig, LpTxData, LddNoOfBuffers
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GpDmaUnitConfig
**
** Function Invoked   : None
**
** Registers Used     : DCSTCn, DCSTn, DSAn, DTCTn, DTFRn, DTCn, DCENn, DTFRRQn,
**                      DTFRRQCn, DCSTSn, CSIHnTX0W
*******************************************************************************/
/* Implements SPI_ESDD_UD_042 */
/* Implements SPI_ESDD_UD_090 */
/* Implements AR_PN0063_FR_0031 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_TxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_CONST) LpTxData,
 Spi_NumberOfDataType LddNoOfBuffers)
/* END Msg(2:3227)-1 */
{

  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  uint32 LulDTCTVal;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnit;
  Spi_HWUnitType LddHWUnitNumber;
  /* MISRA Violation: START Msg(4:0759)-1 */
  volatile Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  uint16 LusTotalNoOfBuffers;
  #endif

  uint8 LucHWMemoryMode;
  uint8 LucIndex;
  uint32 LulDmaDtct;
  uint32 LulDmaDCSTCn;
  /* START Msg(2:2814)-6*/
  /* Get the Tx DMA index for this HW Unit */
  LucIndex = LpJobConfig->ucTxDmaDeviceIndex;
  /* END Msg(2:2814)-6 */

  /* Initialize memory mode as DIRECT ACCESS */
  LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Get the Hardware Unit index */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;

  /* Store the number of buffers in a temp variable. */
  LusTotalNoOfBuffers = LddNoOfBuffers;

  /* START Msg(2:2814)-6*/
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */

  /* Get the configured memory mode for this HW Unit */
  LucHWMemoryMode =  Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  #endif

  if (SPI_INVALID_DMAUNIT != LucIndex)
  {
    /* To set Chip Select configuration in TX0W register in FIFO mode for DMA */
    if ((SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode) &&
                                      (LddNoOfBuffers > SPI_ONE ))
    {
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      LunDataAccess1.ulRegData = SPI_ZERO;

      /* Set chip select in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;

      if (NULL_PTR == LpTxData)
      {
         LunDataAccess1.Tst_ByteAccess.usRegData1 = Spi_GddDmaData;
      }
      else
      {
        LunDataAccess1.Tst_ByteAccess.usRegData1 = *LpTxData;
        /* MISRA Violation: START Msg(4:0489)-3 */
        LpTxData++;
        /* END Msg (4:0489)-3 */
      }
      LddNoOfBuffers--;
      #endif
    }
    else
    {
      /* No action required */
    }

    /* Set the parameters for Tx DMA Unit */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Set the DMA channel control register value */
    LpDmaConfig = &Spi_GpDmaUnitConfig[LucIndex];
    /* END Msg(2:2824)-2 */
    /* END Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;

    /* MISRA Violation: START Msg(4:0402)-12 */
    /*Clear the software transfer request flag*/
    LulDmaDCSTCn = (LpDmaRegisters->ulDCSTCn | SPI_DMA_STR_CLEAR);
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCSTCn, LulDmaDCSTCn)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCSTn),
                      (uint32)SPI_ZERO,SPI_DMA_STR_CLEAR,SPI_ASYNCTRANSMIT_SID)
    /* END Msg(2:2814)-6 */
    /* END Msg(4:0402)-12 */

    if (NULL_PTR == LpTxData)
    {
      /* MISRA Violation: START Msg(4:0306)-8 */
      /* Load the source register with pointer to default value */
      SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDSAn,(uint32)(&Spi_GddDmaData))

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDSAn),
       (uint32)(&Spi_GddDmaData),SPI_CTLREG_32_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0306)-8 */

      LulDTCTVal = SPI_DMA_FIXED_TX_SETTINGS;
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        LulDTCTVal = LulDTCTVal | SPI_DMA_BLOCK_SETTINGS;
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      /* Load the control register with fixed settings */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LulDmaDtct = (LpDmaRegisters->ulDTCTn | LulDTCTVal);
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, LulDmaDtct)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                           LulDmaDtct,SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */
    }
    else
    {
      if ((SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode) ||
                                                    (SPI_ONE == LddNoOfBuffers))
      {
        /* MISRA Violation: START Msg(4:0306)-8 */
        SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDSAn, (uint32)LpTxData)

        SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDSAn),
            (uint32)LpTxData, SPI_CTLREG_32_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
        /* END Msg(4:0306)-8 */
      }
      else
      {
        /* MISRA Violation: START Msg(4:0306)-8 */
        /* MISRA Violation: START Msg(4:0489)-3 */
        SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDSAn,
                                             (uint32)(LpTxData + SPI_ONE ))

        SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDSAn),
                       (uint32)(LpTxData + SPI_ONE ),SPI_CTLREG_32_BIT_MASK,
                                                      SPI_ASYNCTRANSMIT_SID)
        /* END Msg(4:0489)-3 */
        /* END Msg(4:0306)-8 */
      }
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        /* MISRA Violation: START Msg(4:0402)-12 */
        LulDmaDtct = (LpDmaRegisters->ulDTCTn | SPI_DMA_BLOCK_SETTINGS);
        SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTCTn, LulDmaDtct)

        SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                            LulDmaDtct, SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
        /* END Msg(4:0402)-12 */
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LulDmaDtct = (LpDmaRegisters->ulDTCTn & SPI_DMA_INV_TX_SETTINGS);
      SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTCTn, LulDmaDtct)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                           LulDmaDtct,SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */

    }

    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {

      /* Load the trigger factor configured */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTFRn, (uint32)SPI_ZERO)

      SPI_DMA_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRn),
                                      (uint32)SPI_ZERO, SPI_ASYNCTRANSMIT_SID)
      /* Load the transfer count value to the DMA register */
      SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTCn, LddNoOfBuffers)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCn),
                 LddNoOfBuffers, SPI_CTLREG_32_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else if (SPI_ONE == LddNoOfBuffers)
    {
      /* Load the transfer count value to the DMA register */
      SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTCn, LddNoOfBuffers)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCn),
            LddNoOfBuffers, SPI_CTLREG_32_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* Disable the trigger factor configured */
      SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTFRn, (uint32)SPI_ZERO)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRn),
                    (uint32)SPI_ZERO, SPI_DTFR_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else
    {
      /* Load the trigger factor configured */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTFRn,
                                  (uint32)(LpDmaConfig->usDmaDtfrRegValue))

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRn),
                   (uint32)(LpDmaConfig->usDmaDtfrRegValue), SPI_DTFR_MASK,
                                                     SPI_ASYNCTRANSMIT_SID)
      /* Load the transfer count value to the DMA register */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCn,
                            ((uint32)((uint16)(LddNoOfBuffers - SPI_ONE))))

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCn),
       ((uint32)((uint16)(LddNoOfBuffers - SPI_ONE))), SPI_CTLREG_32_BIT_MASK,
                                                        SPI_ASYNCTRANSMIT_SID)
    }

    /* Clear the MLE bit for data transfer once */
    /* MISRA Violation: START Msg(4:0402)-12 */
    LulDmaDtct = ((LpDmaRegisters->ulDTCTn  & SPI_DMA_ONCE) |
                                              SPI_DMA_HARDWARE_TRIGGER);
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, LulDmaDtct)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                       LulDmaDtct, ~SPI_DMA_DRS_MLE_MASK, SPI_ASYNCTRANSMIT_SID)
    /* END Msg(4:0402)-12 */
    /* Disable channel operation */
    SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_DISABLE)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
              SPI_DMA_DCEN_DISABLE, SPI_DCEN_MASK, SPI_ASYNCTRANSMIT_SID)
    /* Clear DMA Transfer Request */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTFRRQCn, SPI_DMA_DRQ_CLEAR)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRRQn),
                (uint32)SPI_ZERO, SPI_DMA_DRQ_CLEAR, SPI_ASYNCTRANSMIT_SID)

    if ((SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode) ||
                                               (SPI_ONE == LddNoOfBuffers))
    {
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      if ((SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode) &&
                                      (LusTotalNoOfBuffers > SPI_ONE ))
      {
        /* START Msg(2:2814)-6 */
        /* Load the value of the local union variable to TX0W register */
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                            LunDataAccess1.ulRegData)
        /* END Msg(2:2814)-6 */
      }
      else
      {
        /* No action required */
      }
      #endif
      /* DMA transfer enable  */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LulDmaDtct = (LpDmaRegisters->ulDTCTn  & SPI_DMA_STR_REQ);
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, LulDmaDtct)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                      (uint32)SPI_ZERO, ~SPI_DMA_STR_REQ, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCSTSn, SPI_DMA_STR)

      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_ENABLE)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
                 SPI_DMA_DCEN_ENABLE, SPI_DCEN_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else
    {
      /* DMA transfer enable  */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_ENABLE)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
                 SPI_DMA_DCEN_ENABLE, SPI_DCEN_MASK, SPI_ASYNCTRANSMIT_SID)
    }
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_DMA_MODE_ENABLE == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_RxDmaConfig
**
** Service ID         : Not Applicable
**
** Description        : This function is to set the attributes for DMA transfer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : LpJobConfig, LpRxData, LddNoOfBuffers
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GpDmaUnitConfig
**
** Function Invoked   : None
**
** Registers Used     : DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      ICRn, IMRn, DTFRn, DTFRRQCn, DCSTSn, DTFRRQn
*******************************************************************************/
/* Implements SPI_ESDD_UD_038 */
/* Implements SPI_ESDD_UD_090 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* START Msg(2:3227)-1 */
/* Implements EAAR_PN0034_FR_0068, EAAR_PN0034_FR_0061 */
FUNC(void, SPI_PRIVATE_CODE) Spi_RxDmaConfig
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
 P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpRxData,
 Spi_NumberOfDataType LddNoOfBuffers)

 /* END Msg(2:3227)-1 */
{
  P2CONST(Spi_DmaUnitConfig, AUTOMATIC, SPI_CONFIG_DATA) LpDmaConfig;
  P2VAR(Spi_DmaAddrRegs, AUTOMATIC, SPI_CONFIG_DATA) LpDmaRegisters;
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA) LpDmaImrIntCntlReg;

  uint32 LulDTCTVal;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnit;
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  uint32 LulDmaDtct;
  uint8 LucHWMemoryMode;
  uint8 LucIndex;
  /* START Msg(2:2814)-6 */
  /* Get the Rx DMA index for this HW Unit */
  LucIndex = LpJobConfig->ucRxDmaDeviceIndex;
  /* END Msg(2:2814)-6 */

  /* Initialize memory mode as DIRECT ACCESS */
  LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;

  /* Get the configured memory mode for this HW Unit */
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Get the Hardware Unit index */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;

  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */

  /* Get the configured memory mode for this HW Unit */
  LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  #endif

  if (SPI_INVALID_DMAUNIT != LucIndex)
  {
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Set the DMA channel control register value */
    LpDmaConfig = Spi_GpDmaUnitConfig + LucIndex;
    /* END Msg(2:2824)-2 */
    /* END Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    LpDmaRegisters = LpDmaConfig->pDmaCntlRegBase;

    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_DISABLE)

    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
              SPI_DMA_DCEN_DISABLE, SPI_DCEN_MASK, SPI_ASYNCTRANSMIT_SID)
    /* END Msg(2:2814)-6 */
    /*Clear the software transfer request flag*/
    /* MISRA Violation: START Msg(4:0402)-12 */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCSTCn, SPI_DMA_STR_CLEAR)
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCSTn),
                      (uint32)SPI_ZERO,SPI_DMA_STR_CLEAR,SPI_ASYNCTRANSMIT_SID)
    /* END Msg(4:0402)-12 */
    if (NULL_PTR == LpRxData)
    {
      /* MISRA Violation: START Msg(4:0306)-8 */
      /* Load the source register with pointer to default value */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDDAn,
                                              (uint32)(&Spi_GddDmaRxData))
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDDAn),
      (uint32)(&Spi_GddDmaRxData),SPI_CTLREG_32_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0306)-8 */

      LulDTCTVal = SPI_DMA_FIXED_RX_SETTINGS;
      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        LulDTCTVal = LulDTCTVal | SPI_DMA_BLOCK_SETTINGS;
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LulDmaDtct =  (LpDmaRegisters->ulDTCTn | LulDTCTVal);
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, LulDmaDtct)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                           LulDmaDtct,SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */
    }
    else
    {
      /* MISRA Violation: START Msg(4:0306)-8 */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDDAn, (uint32)LpRxData)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDDAn),
          (uint32)LpRxData, SPI_CTLREG_32_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0306)-8 */

      #if (SPI_FIFO_MODE == STD_ON)
      if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
      {
        /* Load the control register with Block Transfer 1 settings */
        /* MISRA Violation: START Msg(4:0402)-12 */
        LulDmaDtct = (LpDmaRegisters->ulDTCTn | SPI_DMA_BLOCK_SETTINGS);
        SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTCTn, LulDmaDtct)
        SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                            LulDmaDtct, SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
        /* END Msg(4:0402)-12 */
      }
      else
      {
        /* No Action Required */
      }
      #endif /* End of #if (SPI_FIFO_MODE == STD_ON) */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LulDmaDtct = (LpDmaRegisters->ulDTCTn & SPI_DMA_INV_RX_SETTINGS);
      SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTCTn, LulDmaDtct)

      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                          LulDmaDtct, SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */
    }

    /* Load the transfer count value to the DMA register */
    SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTCn, LddNoOfBuffers)
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCn),
               LddNoOfBuffers, SPI_CTLREG_32_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
    /* Clear the MLE bit for data transfer once */
    /* MISRA Violation: START Msg(4:0402)-12 */
    LulDmaDtct = (LpDmaRegisters->ulDTCTn  & SPI_DMA_ONCE);
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, LulDmaDtct)
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                        LulDmaDtct, SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
    /* END Msg(4:0402)-12 */

    /* Clear the pending interrupts */
    RH850_SV_MODE_ICR_AND(16, (LpDmaConfig->pDmaIntCntlReg), (SPI_CLR_INT_REQ));
    /* Register dummy read-write  */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpDmaConfig->pDmaIntCntlReg), (SPI_CLR_INT_REQ));
    #endif
    /* SYNCP execution */
    EXECUTE_SYNCP();
    /* Enable the DMA interrupt control register */
    LpDmaImrIntCntlReg = LpDmaConfig->pDmaImrIntCntlReg;
    /* START Msg(2:2814)-6 */
    RH850_SV_MODE_IMR_AND(32, (LpDmaImrIntCntlReg), \
                                                  (LpDmaConfig->ulDmaImrMask));
    /* END Msg(2:2814)-6 */
    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {

      /* Disable the trigger factor configured */
      SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDTFRn, (uint32)SPI_ZERO)
      SPI_DMA_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRn),
                                      (uint32)SPI_ZERO, SPI_ASYNCTRANSMIT_SID)
    }
    else
    {
      /* No action required */
    }

    /* Disable channel operation */
    SPI_DMA_WRITE_REG_ONLY( LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_DISABLE)
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
              SPI_DMA_DCEN_DISABLE, SPI_DCEN_MASK, SPI_ASYNCTRANSMIT_SID)

    /* Clear DMA Transfer Request */
    SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTFRRQCn, SPI_DMA_DRQ_CLEAR)
    SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTFRRQn),
                (uint32)SPI_ZERO, SPI_DMA_DRQ_CLEAR, SPI_ASYNCTRANSMIT_SID)

    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {

      /* DMA transfer enable  */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LulDmaDtct = (LpDmaRegisters->ulDTCTn  & SPI_DMA_STR_REQ);
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDTCTn, LulDmaDtct)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDTCTn),
                          LulDmaDtct, SPI_DTCT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCSTSn, SPI_DMA_STR)

      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_ENABLE)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
                 SPI_DMA_DCEN_ENABLE, SPI_DCEN_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else
    {

      /* DMA transfer enable  */
      SPI_DMA_WRITE_REG_ONLY(LpDmaRegisters->ulDCENn, SPI_DMA_DCEN_ENABLE)
      SPI_DMA_MASKED_CHECK_WRITE_VERIFY_RUNTIME(&(LpDmaRegisters->ulDCENn),
                 SPI_DMA_DCEN_ENABLE, SPI_DCEN_MASK, SPI_ASYNCTRANSMIT_SID)
    }
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_DMA_MODE_ENABLE == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_DmaISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the DMA ISR for processing
**                      DMA request
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : uint8 LddDmaUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GpFirstChannel, Spi_GpFirstJob,
**                      Spi_GpDmaUnitConfig, Spi_GaaChannelEBData
**
** Function Invoked   : Spi_ProcessSequence, Spi_TxDmaConfig
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_030 */
/* Implements SPI_ESDD_UD_090 */
#if (SPI_DMA_MODE_ENABLE == STD_ON)

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements AR_PN0063_FR_0038 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE) Spi_DmaISR (uint8 LucDmaUnit)
/* END Msg (2:3227)-1*/
{
  Spi_HWUnitType LddHWUnit;
  uint8 LucHWMemoryMode;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  #if (SPI_FIFO_MODE == STD_ON)
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpChannelList;
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;

  Spi_ChannelType LddNoOfChannels;
  Spi_NumberOfDataType LddNoOfBuffers;
  Spi_NumberOfDataType LddBufferIndex;
  Spi_JobType LddJobIndex;
  uint8 LucCxCtl0;
  #endif

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2814)-6 */
  LddHWUnit = *((Spi_GpConfigPtr->pDmaSpiHWUnitMap) + LucDmaUnit);
  /* END Msg (2:2814)-6 */
  /* END Msg (4:0488)-4 */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* Since High priority communication is active, memory mode is DAM */
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  }
  #endif
  #endif

  #if (SPI_FIFO_MODE == STD_ON)
  if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
  {
    /* Get the current job index */
    LddJobIndex = Spi_GstFifoCurrentCommData.ddJobIndex;
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the job structure */
    LpJobConfig = Spi_GpFirstJob + LddJobIndex;
    /* END Msg(2:2824)-2 */
    /* Get the HW Unit index */
    /* START Msg(2:2814)-6 */
    LddHWUnit = LpJobConfig->ddHWUnitIndex;
    /* END Msg(2:2814)-6 */
    /* Check if the Receive buffer is full */
    if (Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] == SPI_FIFO_BUFFER_FULL)
    {
      /* START Msg(2:2824)-2 */
      /* Update the RAM data since a Reception is completed */
      Spi_GstFifoCurrentCommData.pCurrentRxData =
                     Spi_GstFifoCurrentCommData.pCurrentRxData + SPI_FIFO_SIZE;
      Spi_GstFifoCurrentCommData.ddNoOfRxBuffers =
                  Spi_GstFifoCurrentCommData.ddNoOfRxBuffers - SPI_FIFO_SIZE;
      /* END Msg(2:2824)-2 */
    }
    /* END Msg (4:0488)-4 */
    else
    {
      if (Spi_GstFifoCurrentCommData.ddNoOfRxChannels > SPI_ZERO)
      {
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* START Msg(2:2824)-2 */
        /* Increment the channel list to point to next channel */
        Spi_GstFifoCurrentCommData.pCurrentRxChannelList++;
        /* END Msg(4:0489)-3 */
        /* Decrement the number of channels */
        Spi_GstFifoCurrentCommData.ddNoOfRxChannels--;
        /* END Msg (4:0488)-4 */
        /* END Msg(2:2824)-2 */
      }
      else
      {
        /* No action required */
      }
    }
    /* Check if the Tx buffer status is Empty to initiate next transmission */
    if (Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] == SPI_FIFO_BUFFER_EMPTY)
    {
      if (Spi_GstFifoCurrentCommData.ddNoOfTxChannels > SPI_ZERO)
      {
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* START Msg(2:2824)-2 */
        /* Increment the channel list to point to next channel */
        Spi_GstFifoCurrentCommData.pCurrentTxChannelList++;
        /* Decrement the number of channels */
        Spi_GstFifoCurrentCommData.ddNoOfTxChannels--;
        /* END Msg (4:0488)-4 */
        LpChannelList = Spi_GstFifoCurrentCommData.pCurrentTxChannelList;
        LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfTxChannels;
        /* END Msg(4:0489)-3 */
        /* END Msg(2:2824)-2 */
      }
      else
      {
        /* No channels to transmit */
        LddNoOfChannels = SPI_ZERO;
      }
    }
    else
    {
      LpChannelList = Spi_GstFifoCurrentCommData.pCurrentTxChannelList;
      LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfTxChannels;
    }

    if (SPI_ZERO < LddNoOfChannels)
    {
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* START Msg(2:2814)-6 */
      /* START Msg(2:2824)-2 */
      /* Get the pointer to the post-build structure of the channel */
      LpPBChannelConfig = Spi_GpFirstChannel + (*LpChannelList);
      /* END Msg (4:0488)-4 */
      /* END Msg(2:2814)-6 */
      /* END Msg(2:2824)-2 */
      /* START Msg(2:3892)-8 */
      if (SPI_FIFO_BUFFER_FULL != Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX])
      {
        /* END Msg(2:3892)-8 */
        /* START Msg(2:2814)-6 */
        LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
        /* END Msg(2:2814)-6 */
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        /* Check if the buffer type is internal buffer */
        if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
        #endif
        {
          #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
          /* MISRA Violation: START Msg(4:0488)-4 */
          /* START Msg(2:2814)-6 */
          /* Update the RAM variable for Tx pointer with channel IB index */
          LpNextTxData = (Spi_GpConfigPtr->pChannelIBWrite) + LddBufferIndex;
          /* END Msg (4:0488)-4 */
          /* Update the RAM variable for number of buffers of the channel */
          LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
          /* END Msg (2:2814)-6 */
          #endif
        }
        #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
        else
        #endif
        {
          #if (SPI_EB_CONFIGURED == STD_ON)
          /*
           * Update the RAM variable for Tx pointer with channel EB source
           * pointer
           */
          LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;

          /* Update the local counter with number of buffers of the channel */
          LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
          #endif
        }
      }
      else
      {
        /* Load the data from RAM */
        LpNextTxData = Spi_GstFifoCurrentCommData.pNextTxData;
        LddNoOfBuffers = Spi_GstFifoCurrentCommData.ddNoOfTxBuffers;
      }
      /* START Msg(2:3892)-8 */
      if (SPI_FIFO_SIZE < LddNoOfBuffers)
      {
        /* START Msg(2:2824)-2 */
        /* Set the flag to indicate Buffer is FULL */
        Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_FULL;
        /* Save the current status in RAM */
        /* MISRA Violation: START Msg(4:0488)-4 */
        Spi_GstFifoCurrentCommData.pNextTxData = LpNextTxData + SPI_FIFO_SIZE;
        Spi_GstFifoCurrentCommData.ddNoOfTxBuffers =
                                              (LddNoOfBuffers - SPI_FIFO_SIZE);
        /* Update the number of transfer bytes to max size */
        LddNoOfBuffers = SPI_FIFO_SIZE;
        /* END Msg(4:0488)-4 */
        /* END Msg(2:2824)-2 */
        /* END Msg(2:3892)-8 */
      }
      else
      {
        /* Set the flag to indicate Buffer is Empty */
        /* START Msg(2:3892)-8 */
        Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_EMPTY;
        /* END Msg(2:3892)-8 */
      }

      Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;
      /* MISRA Violation: START Msg(4:2962)-10 */
      Spi_TxDmaConfig(LpJobConfig, LpNextTxData, LddNoOfBuffers);
      /* END Msg(4:2962)-10 */
    }
    else
    {
      if (SPI_TRUE == LpJobConfig->blCSRIMasked)
      {
        /* MISRA Violation: START Msg(4:0402)-12 */
        /* START Msg(2:2814)-6 */
        /* Reset the PWR bit to make CS inactive since CSRI settings masked */
        LucCxCtl0 = (Csih_BaseAddress[LddHWUnit]->CTL0.UINT8 & SPI_RESET_PWR);
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                                   LucCxCtl0)

        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
                         &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), LucCxCtl0,
                                  SPI_CTLREG_8_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
        /* END Msg(4:0402)-12 */
        /* END Msg(2:2814)-6 */
      }
      else
      {
        /* No action required */
      }
      /* Update the sequence status */
      Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
    }
  }
  else
  #endif /* #if (SPI_FIFO_MODE == STD_ON) */
  {
    Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of (SPI_DMA_MODE_ENABLE == STD_ON) */

/*******************************************************************************
** Function Name      : Spi_HWCancel
**
** Service ID         : Not Applicable
**
** Description        : This service is for setting the JOBE bit of the
**                      HW Unit to cancel an on-going sequence
**
** Sync/Async         : Asynchronous
**
** Re-entrancy        : Reentrant
**
** Input Parameters   : Sequence - Sequence ID
**
**InOut Parameters    : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : Spi_Init should have been invoked
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function invoked   : None
**
** Registers Used     : CSIHnCTL0, ICRn, IMRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_031 */
#if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) && \
        (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0068 */
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(void, SPI_PRIVATE_CODE) Spi_HWCancel(uint8 LucIndex, uint8 LucApId)
{
  /* END Msg(2:3206)-7 */
  /* END Msg(2:3227)-1 */
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  uint8 LucCxCtl0;
  /* Get the base address of the HW Unit */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LucIndex];
  /* START Msg(2:2814)-6 */
  if (SPI_ZERO != ((Csih_BaseAddress[LucIndex]->CTL0.UINT8) & SPI_CHECK_PWR))
  {
    /* END Msg(2:2814)-6 */
    /* Clear the pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxCancelIntCntlAddress),
                                                   (SPI_CLR_INT_REQ));
    /* Enable transmit cancel interrupt control */
    RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pTxCancelImrAddress),
                               (LpHWUnitInfo->ulTxCancelImrMask));

    /* Implements SPI_ESDD_UD_096 */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* Register dummy read-write  */
    RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pTxCancelImrAddress),
                               (LpHWUnitInfo->ulTxCancelImrMask));

    #endif
    /* SYNCP execution */
    EXECUTE_SYNCP();

    /* Set JOBE bit of the HW Unit */
    /* MISRA Violation: START Msg(4:0402)-12 */
    /* START Msg(2:3892)-8 */
    LucCxCtl0 = (Csih_BaseAddress[LucIndex]->CTL0.UINT8 | SPI_SET_JOBE);
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LucIndex]->CTL0.UINT8, LucCxCtl0)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LucIndex]->CTL0.UINT8), LucCxCtl0,
    SPI_CTLREG_8_BIT_MASK, LucApId)
    /* END Msg(2:3892)-8 */
    /* END Msg (4:0402)-12 */
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((((SPI_DUAL_BUFFER_MODE == STD_ON) ||
        * (SPI_TX_ONLY_MODE == STD_ON)) && \
        * (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_HWDisableInterrupts
**
** Service ID         : Not Applicable
**
** Description        : This service is for disabling all interrupts in case
**                      of polling mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function invoked   : None
**
** Registers Used     : IMRn, ICRn
**
*******************************************************************************/
/* Implements SPI_ESDD_UD_020 */
/* Implements SPI_ESDD_UD_089 */
#if (SPI_LEVEL_DELIVERED == SPI_TWO)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE) Spi_HWDisableInterrupts(void)
{
  P2VAR(volatile uint16, AUTOMATIC, SPI_CONFIG_DATA) LpIntCntlAddress;
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA) LpImrAddress;

  Spi_HWUnitType LddHWUnit;

  /* Initialize number of HW Unit as zero */
  LddHWUnit = SPI_ZERO;
  /* Check for maximum HW Unit configured */
  /* MISRA Violation: START Msg(4:2877)-11 */
  /* Implements SPI_ESDD_UD_134 */
  do
  /* END Msg(4:2877)-11 */
  {
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxImrAddress;
    /* START Msg(2:2814)-6 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulRxImrMask)));
    /* END Msg(2:2814)-6 */

    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxImrAddress;

    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulTxImrMask)));

    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pErrorImrAddress;

    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulErrorImrMask)));

    #if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) \
     && (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    LpImrAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxCancelImrAddress;

    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                        (~(Spi_GstHWUnitInfo[LddHWUnit].ulTxCancelImrMask)));
    #endif
    #endif
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxIntCntlAddress;

    /* START Msg(2:2814)-6 */
    /* Clear Tx pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));
    /* END Msg(2:2814)-6 */
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pRxIntCntlAddress;

    /* Clear Rx pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));

    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pErrorIntCntlAddress;

    /* Clear Error pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));

    #if ((((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)) \
     && (SPI_CANCEL_API == STD_ON)) || (SPI_HW_PRIORITY_ENABLED == STD_ON))
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    /* Address for transmit cancel interrupt control registers (TIJC) */
    LpIntCntlAddress = Spi_GstHWUnitInfo[LddHWUnit].pTxCancelIntCntlAddress;
    /* Clear transmit cancel pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpIntCntlAddress), (SPI_CLR_INT_REQ));
    #endif
    #endif

    /* Increment HW Unit index */
    /* MISRA Violation: START Msg(4:2984)-9 */
    LddHWUnit++;
    /* END Msg(4:2984)-9 */
  /* MISRA Violation: START Msg(4:2993)-7 */
  /* MISRA Violation: START Msg (4:2996)-6 */
  }  while (SPI_MAX_CSIH_HW_INDEX > LddHWUnit);
  /* End of while (SPI_MAX_CSIH_HW_INDEX > LddHWUnit) */
  /* END Msg  (4:2993)-7  */
  /* END Msg  (4:2996)-6 */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of (SPI_LEVEL_DELIVERED == SPI_TWO) */

/*******************************************************************************
** Function Name      : Spi_HWMainFunction_Handling
**
** Service ID         : Not Applicable
**
** Description        : This function is HW specific function for
**                      Spi_MainFunction_Driving API
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpConfigPtr
**
** Function Invoked   : Spi_CheckAndInvokeTxIsr, Spi_CheckAndInvokeRxIsr,
**                      Spi_ComErrorISR
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      CSIHnTX0H, CSIHnRX0W, CSIHnRX0H, ICRn, IMRn, DCENn,
**                      DCSTCn, DCSTn, DDAn, DTCTn, DTCn, DTFRn, DTFRRQCn,
**                      DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
#if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
             (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* Implements SPI_ESDD_UD_172 */
FUNC(void, SPI_PRIVATE_CODE) Spi_HWMainFunction_Handling(void)
{
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;

  Spi_HWUnitType LddHWUnit;
  uint8 LucHWMemoryMode;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  LddHWUnit = SPI_ZERO;
  /* Implements SPI_ESDD_UD_134 */
  do
  {
    /* Check if the HW Unit configured */
    if (SPI_FALSE == Spi_GstHWUnitInfo[LddHWUnit].blIsSynchronous)
    {
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
      /* Get the configured memory mode for this HW Unit */
      LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
      #endif

      /* Get the pointer to the structure of HW Unit information */
      LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

      /* START Msg(2:3892)-8 */
      /* Check if the HWUnit is ON */
      if(SPI_SET_PWR ==
               (uint8)((Csih_BaseAddress[LddHWUnit]->CTL0.UINT8) & SPI_SET_PWR))
      /* END Msg(2:3892)-8 */
      {
        /* START Msg(3:3352)-3 */
        /* Check if the HWUnit is busy */
        switch (LucHWMemoryMode)
        {
          /* Implements SPI_ESDD_UD_144 */
          /* Implements SPI_ESDD_UD_141 */
          #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                          (SPI_HWUNIT_ASYNCHRONOUS == STD_ON))
          /* START Msg(2:3892)-8 */
        case SPI_DIRECT_ACCESS_MODE_CONFIGURED:

              Spi_CheckAndInvokeTxIsr(LpHWUnitInfo, LddHWUnit, LucHWMemoryMode);
              break;
          #endif
          /* Implements SPI_ESDD_UD_145 */
          #if (SPI_FIFO_MODE == STD_ON)
        case SPI_FIFO_MODE_CONFIGURED:

              Spi_CheckAndInvokeTxIsr(LpHWUnitInfo, LddHWUnit, LucHWMemoryMode);

              break;
          #endif
          /* Implements SPI_ESDD_UD_146 */
          #if (SPI_DUAL_BUFFER_MODE == STD_ON)
        case SPI_DUAL_BUFFER_MODE_CONFIGURED:

             Spi_CheckAndInvokeTxIsr(LpHWUnitInfo, LddHWUnit, LucHWMemoryMode);

              break;
          #endif

          /* Implements SPI_ESDD_UD_147 */
          #if (SPI_TX_ONLY_MODE == STD_ON)
        case SPI_TX_ONLY_MODE_CONFIGURED:

             Spi_CheckAndInvokeRxIsr(LpHWUnitInfo, LddHWUnit, LucHWMemoryMode);

              break;
          #endif
        /*Start : SPI_UT_007*/
        default:
             /* Dummy write operation to avoid QAC warning */
             LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
        break;
        /* End : SPI_UT_007 */
        }
        /* END Msg(3:3352)-3 */
        /* START Msg(2:3892)-8 */
        /* Check for Error Interrupt flag */
        if (SPI_INT_FLAG_MASK ==
            (uint16)((*LpHWUnitInfo->pErrorIntCntlAddress) & SPI_INT_FLAG_MASK))
        /* END Msg(2:3892)-8 */
        {
          /* Clear the interrupt flag */
          RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                                    (SPI_CLR_INT_REQ));
          /* Invoke communication error function */
          Spi_ComErrorISR(LddHWUnit, LucHWMemoryMode);
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
    }
    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    else
    {
      /* No action required */
    }
    #endif
    /* MISRA Violation: START Msg(4:2984)-9 */
    LddHWUnit++;
    /* END Msg(4:2984)-9 */
    /* MISRA Violation: START Msg(4:2877)-11 */
    /* MISRA Violation: START Msg(4:2993)-7 */
    /* MISRA Violation: START Msg (4:2996)-6 */
  } while (SPI_MAX_HW_DETAILS > LddHWUnit);
    /* END Msg (4:2877)-11 */
    /* END Msg (4:2993)-7  */
    /* END Msg (4:2996)-6 */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((#if ((SPI_LEVEL_DELIVERED == SPI_ONE) ||
        * ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
        * (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))))
        */

/*******************************************************************************
** Function Name      : Spi_ComErrorISR
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIRE ISR for processing
**                      communication error interrupt request
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GaaJobResult, Spi_GpFirstJobList
**                      Spi_GaaSeqResult, Spi_GaaSeqQueue, Spi_GaaJobQueue,
**                      Spi_GddQueueIndex, Spi_GpConfigPtr
**
** Function Invoked   : Dem_ReportErrorStatus, Spi_StoreErrorInfo,
**                      Spi_PopFromQueue
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W, CSIHnBRSy, CSIHnCFGx,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_029 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
            (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI191, SPI006, SPI293, SPI174, SPI158, SPI097, SPI195 */
/* Implements AR_PN0063_FR_0093 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE) Spi_ComErrorISR
                 (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{
  /* If Internal Diagnosis Error Buffer size is Greater than Zero */
  #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
  Spi_CommErrorType LstErrorType;
  uint32 LulErrorValue;
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON))
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobIndex;
  #endif

  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  Spi_SequenceType LddSeqIndex;

  #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];
  #endif

  /* If Internal Diagnosis Error Buffer size is Greater than Zero */
  #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
  /* START Msg(2:2814)-6 */
  /* Take the Error value as backup */
  LulErrorValue = Csih_BaseAddress[LddHWUnit]->STR0;
  #endif
  /* Implements SPI_ESDD_UD_087*/
  if ((uint32)SPI_ZERO !=
                      (Csih_BaseAddress[LddHWUnit]->STR0 & SPI_PARITY_DCC_ERR))
  {
    /* START Msg(2:3892)-8 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                     (uint16)(~(SPI_PARITY_DCC_ERR_CLR)))
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0), (uint32)SPI_ZERO,
    (uint32)((uint16)(~(SPI_PARITY_DCC_ERR_CLR))), SPI_ASYNCTRANSMIT_SID)
     /* End Msg(2:3892)-8 */
    /* End Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_122 */
    /*Report error to DEM*/
    Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED);
  }
  else
  {
    /* No action required */
  }

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
        && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  if (SPI_TWO > LucHWMemoryMode)
  #endif
  {
    #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
          (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON))
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    LpJobList = Spi_GpFirstJobList +
                 Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */
    /* START Msg(2:2814)-6 */
    /* Get the index of the first job linked to this sequence */
    LddJobIndex = LpJobList->ddJobIndex;
    /* END Msg(2:2814)-6 */
    /* Get the index of the sequence */
    LddSeqIndex = LpJobList->ddSequenceIndex;

    /* Job is failed. Update job result as FAILED */
    Spi_GaaJobResult[LddJobIndex] = SPI_JOB_FAILED;

    /* Implements SPI_ESDD_UD_145 */
    #if ((SPI_FIFO_MODE == STD_ON) && (SPI_DEV_ERROR_DETECT == STD_ON))
    if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
    {
      /* Check if overrun error has occurred */
      if ((uint32)SPI_ZERO !=
                    (Csih_BaseAddress[LddHWUnit]->STR0 & SPI_OVRFLW_OVRRUN_ERR))
      {
        /* START Msg(2:2814)-6 */
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                  (uint16)(~(SPI_OVRFLW_OVRRUN_ERR_CLR)))
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
        &(Csih_BaseAddress[LddHWUnit]->STR0), (uint32)SPI_ZERO,
        (uint32)((uint16)(~(SPI_OVRFLW_OVRRUN_ERR_CLR))), SPI_ASYNCTRANSMIT_SID)
        /* End Msg(2:2814)-6 */
        /* Implements SPI_ESDD_UD_122 */
        /* Report error to DEM */
        Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED);
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
    #endif /* End of #if ((SPI_FIFO_MODE == STD_ON) &&
            * (SPI_DEV_ERROR_DETECT == STD_ON))
            */
    #endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON))
            */
  }
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) || (SPI_FIFO_MODE == STD_ON)) \
      && ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON)))
  else
  #endif
  {
    /* START Msg(2:2814)-6 */
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
    LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
    #endif
    /* END Msg(2:2814)-6 */
  }
  /* If Internal Diagnosis Error Buffer size is Greater than Zero */
  #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
  /* Copy the Hardware unit Index */
  LstErrorType.HwUnit = LpHWUnitInfo->ucHWUnit;
  /* Copy the Sequence Index */
  LstErrorType.SeqID = LddSeqIndex;
  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON))
  /* Copy the Job Index */
  /* MISRA Violation: START Msg(4:2962)-10 */
  LstErrorType.JobID = LddJobIndex;
  /* END Msg(4:2962)-10 */
  #else
  /* Copy the Job Index */
  LstErrorType.JobID = SPI_ZERO;
  #endif
  /* Check for Over run Error */
  if (SPI_OVE_ERR == (LulErrorValue & SPI_OVE_ERR))
  {
    LstErrorType.ErrorType = SPI_OVERRUN_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }
  /* Check for Parity Error */
  if (SPI_PE_ERR == (LulErrorValue & SPI_PE_ERR))
  {
    LstErrorType.ErrorType = SPI_PARITY_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }
  /* Check for Data Consistency Error */
  if (SPI_DCE_ERR == (LulErrorValue & SPI_DCE_ERR))
  {
    LstErrorType.ErrorType = SPI_DATA_CONSISTENCY_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }
  /* Check for Overflow Error */
  if (SPI_OFE_ERR == (LulErrorValue & SPI_OFE_ERR))
  {
    LstErrorType.ErrorType = SPI_OVERFLOW_ERROR;
    /* Report Error Details */
    Spi_StoreErrorInfo(&LstErrorType);
  }
  else
  {
    /* No action required */
  }

  /* Sequence is failed. Update sequence result as FAILED */
  Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_FAILED;
  /* Transmitting Next jobs */
  Spi_PopFromQueue(LddHWUnit, LucHWMemoryMode);
  #else
  /* Sequence is failed. Update sequence result as FAILED */
  Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_FAILED;
  #endif
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif /* End of #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        * (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
        * (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
        */

/*******************************************************************************
** Function Name      : Spi_LoopBackSelfTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform data transmission self test
**                      using loop back mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function Invoked   : Spi_CsihLoopBackSelfTest, Dem_ReportErrorStatus
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnSTCR0, CSIHnBRS0,
**                      CSIHnSTR0, CSIHCFG0, CSIHnTX0W, CSIHnRX0H, ICRn, IMRn
*******************************************************************************/
/* Check if LooP back self test is configured for calling it in Init or
                                                                    Run time */
/* Implements SPI_ESDD_UD_018 */
/* Implements SPI_ESDD_UD_098 */
 #if (SPI_LOOPBACK_SELFTEST == SPI_ONE ||SPI_LOOPBACK_SELFTEST == SPI_TWO )
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements AR_PN0063_FSR_0211, AR_PN0063_FSR_0202, EAAR_PN0034_FR_0061 */
/* Implements EAAR_PN0034_FR_0068 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_LoopBackSelfTest(void)
{
  Std_ReturnType LenReturnValue;
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
  P2VAR(volatile uint32, AUTOMATIC, SPI_CONFIG_DATA) LpImrAddress;
  #endif
  Spi_HWUnitType LddHWUnit;
  uint8 LucData;
  /* Initialize Return Value */
  LenReturnValue = E_OK;
  /* Initialize number of HW Unit as zero */
  LddHWUnit = SPI_ZERO;
  /* Implements SPI_ESDD_UD_134 */
  /* Check for maximum HW Unit configured */
  /* MISRA Violation: START Msg(4:2877)-11 */
  while ((SPI_MAX_HW_DETAILS > LddHWUnit) && (LenReturnValue == E_OK))
  /* END Msg(4:2877)-11 */
  {
    /* Get the pointer to the structure of HW Unit information */
    LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

    /* Implements SPI_ESDD_UD_089 */
    #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || (SPI_LEVEL_DELIVERED == SPI_TWO))
    /* Clear pending interrupts */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                             (SPI_CLR_INT_REQ));
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                             (SPI_CLR_INT_REQ));
    /* Implements SPI_ESDD_UD_096 */
    /* Register dummy read-write  */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                             (SPI_CLR_INT_REQ));
    #endif
    /* SYNCP execution */
    EXECUTE_SYNCP();

    /* Implements SPI_ESDD_UD_200 */
    LpImrAddress = LpHWUnitInfo->pRxImrAddress;

    /* START Msg(2:2814)-6 */
    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                      (~(Spi_GstHWUnitInfo[LddHWUnit].ulRxImrMask)));
    /* End Msg(2:2814)-6 */
    LpImrAddress = LpHWUnitInfo->pTxImrAddress;

    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                       (~(Spi_GstHWUnitInfo[LddHWUnit].ulTxImrMask)));

    LpImrAddress = LpHWUnitInfo->pErrorImrAddress;

    /* Disable interrupt processing */
    RH850_SV_MODE_IMR_OR(32, (LpImrAddress),
                    (~(Spi_GstHWUnitInfo[LddHWUnit].ulErrorImrMask)));

    #endif
    /* START Msg(2:2814)-6 */
    /* Reset the PWR bit since other registers need to be written */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8, SPI_ZERO)
    SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8),(uint8)SPI_ZERO,
                                                        SPI_SELFTEST_SID)
    /* End Msg(2:2814)-6 */

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    LucData = Spi_CsihLoopBackSelfTest(LpHWUnitInfo, LddHWUnit);
    #endif /* #if (SPI_CSIH_CONFIGURED == STD_ON) */

    if (SPI_LOOPBACK_DATA != LucData)
    {
      /* Implements SPI_ESDD_UD_122 */
      Dem_ReportErrorStatus(SPI_E_LOOPBACK_SELFTEST_FAILURE,
                                                   DEM_EVENT_STATUS_FAILED);
      LenReturnValue = E_NOT_OK;
    }
    else
    {
       /* No action required */
    }
    /* Increment HW Unit index */
    /* MISRA Violation: START Msg(4:2984)-9 */
    LddHWUnit++;
    /* END Msg(4:2984)-9 */
  }/* End of while (LddHWUnit < SPI_MAX_HW_DETAILS) */
  return LenReturnValue;
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of #if (SPI_LOOPBACK_SELFTEST == SPI_ONE
                                       ||SPI_LOOPBACK_SELFTEST == SPI_TWO )*/

/*******************************************************************************
** Function Name      : Spi_EccSelfTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform Ecc self test
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function Invoked   : Spi_EccAllZeroTest, Spi_EccAllOneTest,
**                      Spi_EccWalkOneTest, Spi_EccTwoBitTest
**
** Registers Used     : ECCCSIHnTMC, ECCCSIHnCTL, ECCCSIHnTED, ECCCSIHnTRC
*******************************************************************************/
/* Implements SPI_ESDD_UD_019 */
/* Implements SPI_ESDD_UD_099 */
/* Implements SPI_ESDD_UD_148 */
#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_EccSelfTest(void)
{
  Spi_HWUnitType LddHWUnit;
  Std_ReturnType LenReturnValue ;
  uint8 LucTestPattern;
  LenReturnValue = E_OK;
  LddHWUnit = SPI_ZERO;
  LucTestPattern = SPI_ZERO;
  /* Implements SPI_ESDD_UD_134 */
  /* Check for maximum HW Unit configured */
  /* MISRA Violation: START Msg(4:2877)-11 */
  while (SPI_MAX_HW_DETAILS > LddHWUnit)
  /* END Msg(4:2877)-11 */
  {
    /* START Msg(2:2814)-6 */
    /* Set ECREIS, ECDCS, ECTRRS, ECTMCE AND ETMA[1:0] bits of TMC register */
    Ecc_BaseAddress[LddHWUnit]->TMC.UINT16[SPI_ZERO] =
       (uint16)(Ecc_BaseAddress[LddHWUnit]->TMC.UINT16[SPI_ZERO]| SET_TMC_BITS);
    /* Enable one bit and 2 bit error detection */
    Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 = (uint32)SET_EC1EDIC_EC2EDIC;
    /* End Msg(2:2814)-6 */
    do
    {
      switch (LucTestPattern)
      {
      case SPI_ZERO :  /* All-0 Test Pattern */
                     LenReturnValue =
                                 Spi_EccAllZeroTest(LddHWUnit);
                     break;
      case SPI_ONE :  /* All ONE test pattern */
                    LenReturnValue =
                                 Spi_EccAllOneTest(LddHWUnit);
                    break;
      case SPI_TWO :  /* Walk One Test Pattern */
                    LenReturnValue =
                                 Spi_EccWalkOneTest(LddHWUnit);
                    break;
      case SPI_THREE :  /* Two Bit test pattern */
                       LenReturnValue =
                                 Spi_EccTwoBitTest(LddHWUnit);
                       break;
      /*Start : SPI_UT_003*/
      default:  /* Dummy assigning of return value */
                LenReturnValue = E_NOT_OK;
                break;
      /* End : SPI_UT_003 */
      }
    LucTestPattern++;
    }while ((SPI_THREE >= LucTestPattern) && (E_NOT_OK != LenReturnValue));

    /* Set ECTMCE =0 in TMC register */
    Ecc_BaseAddress[LddHWUnit]->TMC.UINT16[SPI_ZERO] = SET_TEST_DISABLE;

    /* Iterate through all the CSIH HwUnits configured */
    LddHWUnit++;
    /* Reset the test pattern to continue ECC self test for next Hw unit */
    LucTestPattern = SPI_ZERO;
  }
  /* Return test status */
  return LenReturnValue;
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of #if (SPI_ECC_SELFTEST == SPI_ONE
                                      || SPI_ECC_SELFTEST == SPI_TWO) */
#endif

/*******************************************************************************
** Function Name      : Spi_InitDetCheck
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform Det checks of Spi_Init Api
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_ConfigType, AUTOMATIC, SPI_APPL_CONST)
**                                                                     ConfigPtr
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : boolean
**
** Preconditions      : None
**
** Global Variable    : Spi_GddDriverStatus
**
** Function Invoked   : Det_ReportError
**
** Registers Used     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_043 */
/* Implements SPI_ESDD_UD_139 */
#if (SPI_DEV_ERROR_DETECT == STD_ON)
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI233, SPI246, SPI029, SPI007, EAAR_PN0034_FR_0064 */
/* Implements SPI_ESDD_UD_106 */
/* START Msg(2:3227)-1 */
FUNC(boolean, SPI_PRIVATE_CODE) Spi_InitDetCheck
                  (P2CONST(Spi_ConfigType, AUTOMATIC, SPI_APPL_CONST) ConfigPtr)
/* END Msg(2:3227)-1 */
{
  boolean LblErrorFlag;

  LblErrorFlag = SPI_FALSE;
  /* Check if SPI configuration pointer is a NULL Pointer */
  if (NULL_PTR == ConfigPtr)
  {
    /* Implements SPI_ESDD_UD_116 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                              SPI_INIT_SID, SPI_E_PARAM_CONFIG);
    LblErrorFlag = SPI_TRUE;
  }
  else
  {
    /* Implements SPI_ESDD_UD_095 */
    #if (SPI_ALREADY_INIT_DET_CHECK == STD_ON)
    if (SPI_UNINIT != Spi_GddDriverStatus)
    {
      /* Implements SPI_ESDD_UD_115 */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_INIT_SID, SPI_E_ALREADY_INITIALIZED);
      LblErrorFlag = SPI_TRUE;
    }
    else
    {
      /* No action required */
    }
    #endif /* #if (SPI_ALREADY_INIT_DET_CHECK == STD_ON) */
  }
  return LblErrorFlag;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name      : Spi_AsyncDetCheck
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform Det checks in
**                      Spi_AsyncTransmit Api
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_SequenceType Sequence
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : Spi_GddDriverStatus, Spi_GpFirstSeq, Spi_GpFirstJobList
**                      Spi_GpFirstJob, Spi_GaaSeqResult, Spi_GstHWUnitInfo
**
** Function Invoked   : Det_ReportError
**
** Registers Used     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_047 */
/* Implements SPI_ESDD_UD_139 */
#if (SPI_DEV_ERROR_DETECT == STD_ON)
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI046, SPI032, SPI055, SPI081, SPI243, SPI266 */
/* Implements EAAR_PN0034_FR_0064 */
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_AsyncDetCheck
                                                    (Spi_SequenceType Sequence)
/* END Msg(2:3227)-1 */
{
  #if (SPI_LEVEL_DELIVERED == SPI_TWO)
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;

  Spi_JobType LddJobListIndex;

  #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */
  Std_ReturnType LenReturnValue;

  LenReturnValue = E_OK;
  /* Check if SPI Driver is initialized */
  if (SPI_UNINIT == Spi_GddDriverStatus)
  {
    /* Implements SPI_ESDD_UD_121 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                           SPI_ASYNCTRANSMIT_SID, SPI_E_UNINIT);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Implements SPI_ESDD_UD_137 */
  /* Check if the sequence ID passed, is valid */
  if (SPI_MAX_SEQUENCE <= Sequence)
  {
    /* Implements SPI_ESDD_UD_114 */
    /* Report to DET */
    (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                        SPI_ASYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /* Check if any DET error has occurred to check other DET errors */
  if (E_OK == LenReturnValue)
  {
    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the sequence structure */
    LpSeqConfig = Spi_GpFirstSeq + Sequence;
    /* END Msg(2:2824)-2 */
    /* START Msg(2:2814)-6 */
    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;
    /* END Msg(2:2814)-6 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the job list */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* Get the pointer of the last job linked to this sequence */
    LpJobConfig = Spi_GpFirstJob + (LpJobList->ddJobIndex);
    /* END Msg(4:0488)-4 */
    /* END Msg(2:2814)-6 */
    /* END Msg(2:2824)-2 */
    #endif
    /* Check if the requested sequence already pending */
    if (SPI_SEQ_PENDING == Spi_GaaSeqResult[Sequence])
    {
      /* Implements SPI_ESDD_UD_110 */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                                    SPI_ASYNCTRANSMIT_SID, SPI_E_SEQ_PENDING);
      LenReturnValue = E_NOT_OK;
    }

    #if (SPI_LEVEL_DELIVERED == SPI_TWO)
    /*
     * Check if the HW Unit of the job is configured for synchronous
     * transmission
     */
    /* START Msg(2:2814)-6 */
    else if (SPI_TRUE ==
                (Spi_GstHWUnitInfo[LpJobConfig->ddHWUnitIndex].blIsSynchronous))
    /* END Msg(2:2814)-6 */
    {
      /* Implements SPI_ESDD_UD_114 */
      /* Report to DET */
      (void)Det_ReportError(SPI_MODULE_ID, SPI_INSTANCE_ID,
                               SPI_ASYNCTRANSMIT_SID, SPI_E_PARAM_SEQ);
      LenReturnValue = E_NOT_OK;
    }
    #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
    return LenReturnValue;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_SyncRegSettings
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform register settings in
**                      HwTransmitSyncJob function.
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                   LpJobConfig
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpConfigPtr
**
** Function Invoked   : None
**
** Registers Used     : CSIHnMCTL0, CSIHnCTL0, CSIHnSTCR0, CSIHnCTL1,
**                      CSIHnCTL2, CSIHnCFGx, CSIHnBRSy, CSIHnSTR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_059 */
#if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI213_Conf, SPI211_Conf, AR_PN0063_FR_0029, SPI208_Conf */
/* Implements AR_PN0063_FR_0009 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE)Spi_SyncRegSettings
          (P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig)
/* END Msg(2:3227)-1 */
{
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;

  Spi_HWUnitType LddHWUnitNumber;
  uint8 LucVar;
  uint32 LulBRSRegIndex;
  #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
  uint32 LulCxCTL1;
  uint16 LusCtl2Value;
  uint8 LucCxCtl0;
  uint16 LusBRSValue;
  Spi_HWUnitType LddHWUnit;
  /* START Msg(2:2814)-6 */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;
  /* END Msg(2:2814)-6 */

  /* MISRA Violation: START Msg(4:0402)-12 */
  /* START Msg(2:2814)-6 */
  /* Reset the PWR bit since other registers need to be written */
  LucCxCtl0 = (Csih_BaseAddress[LddHWUnit]->CTL0.UINT8 & SPI_RESET_PWR);
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8, LucCxCtl0)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8),LucCxCtl0,
                           SPI_CTLREG_8_BIT_MASK, SPI_SYNCTRANSMIT_SID)
  /* END Msg(2:2814)-6 */
  /* END Msg(4:0402)-12 */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Clear the status register */
   /* START Msg(2:2814)-6 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                                  SPI_CSIH_CLR_STS_FLAGS)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->STR0),(uint32)SPI_ZERO,
               (uint32)(SPI_CSIH_CLR_STS_FLAGS), SPI_SYNCTRANSMIT_SID)
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */

  /*
   * Load the local union variable with Ctl1 register value of current Job
   * with CSRI bit masked
   */
  /* START Msg(2:2814)-6 */
  LunDataAccess1.ulRegData = LpJobConfig->ulMainCtl1Value & SPI_CSRI_AND_MASK;
  /* Write the value with configured polarity of all chip selects */
  LunDataAccess1.ucRegData4[SPI_ONE] =
                          Spi_GpConfigPtr->aaChipSelect[LddHWUnitNumber];
  /* End Msg(2:2814)-6 */
  /* Load the control register 1 with the value of local union variable */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1,
                                              LunDataAccess1.ulRegData)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL1), LunDataAccess1.ulRegData,
   SPI_CTLREG_32_BIT_MASK, SPI_SYNCTRANSMIT_SID)
  /* Set the SLIT bit */
  /* MISRA Violation: START Msg(4:0402)-12 */
  LulCxCTL1 = (Csih_BaseAddress[LddHWUnit]->CTL1 | SPI_SET_SLIT);
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1, LulCxCTL1)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL1), LulCxCTL1, SPI_CTLREG_32_BIT_MASK,
                                                         SPI_SYNCTRANSMIT_SID)
  /* END Msg (4:0402)-12 */
  /* Update the Pre-scalar value from control register2 */
  LusCtl2Value = ((LpJobConfig->usCtl2Value) & SPI_CSIH_PRE_MASK);
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL2, LusCtl2Value)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL2), LusCtl2Value, SPI_CTLREG_16_BIT_MASK,
  SPI_SYNCTRANSMIT_SID)

  /* Initialize CSIH memory register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL0,
                                              LpJobConfig->usMCtl0Value)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->MCTL0),LpJobConfig->usMCtl0Value,
                                     SPI_CSIHMCTL0_MASK, SPI_SYNCTRANSMIT_SID)
  /* Implements SPI_ESDD_UD_187 */
  /* Implements SPI_ESDD_UD_203 */
  LulBRSRegIndex = (((LpJobConfig->ulConfigRegValue) &
                                    SPI_CSIH_BRS_SELECT_MASK) >> SPI_THIRTY);
  LusBRSValue = ((LpJobConfig->usCtl2Value) & SPI_CSIH_BRS_MASK);
  /* Update the Baud rate value from control register2 */
  if((uint32)SPI_ZERO == LulBRSRegIndex)
  {
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS0, LusBRSValue)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS0), LusBRSValue,
                                SPI_CSIHBRS_MASK, SPI_SYNCTRANSMIT_SID)
  }
  else if((uint32)SPI_ONE == LulBRSRegIndex)
  {
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS1, LusBRSValue)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS1), LusBRSValue,
                                SPI_CSIHBRS_MASK, SPI_SYNCTRANSMIT_SID)
  }
  else if((uint32)SPI_TWO == LulBRSRegIndex)
  {
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS2, LusBRSValue)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS2), LusBRSValue,
                                SPI_CSIHBRS_MASK, SPI_SYNCTRANSMIT_SID)
  }
  /* START Msg(4:2995)-15 */
  else
  {
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS3, LusBRSValue)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->BRS3), LusBRSValue,
                                SPI_CSIHBRS_MASK, SPI_SYNCTRANSMIT_SID)
  }
  /* END Msg(4:2995)-15 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the value for multiple chip selects configured  */
  LpChipSelect = (Spi_GpConfigPtr->pCSArray) + (LpJobConfig->ucCSArrayIndex);
  /* END Msg (4:0488)-4 */

  /* Load the number of chip selects */
  LucVar = LpJobConfig->ucNoOfCS;
  do
  {
    /* START Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_203 */
    /* Initialize CSIH configuration register */
    if(SPI_ZERO == *LpChipSelect)
    /* END Msg(2:2814)-6 */
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG0), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    else if(SPI_ONE == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG1,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG1), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    else if(SPI_TWO == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG2,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG2), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    else if(SPI_THREE == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG3,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG3), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    else if(SPI_FOUR == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG4,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG4), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    else if(SPI_FIVE == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG5,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG5), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    else if(SPI_SIX == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG6,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG6), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    /* MISRA Violation: START Msg(4:0715)-14 */
    else if(SPI_SEVEN == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG7,
                                                LpJobConfig->ulConfigRegValue)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG7), LpJobConfig->ulConfigRegValue,
                                      SPI_CSIHCFG_MASK, SPI_SYNCTRANSMIT_SID)
    }
    /* END Msg(4:0715)-14 */
    else
    {
      /*To avoid Misra*/
    }
    /* Decrement the number of chip selects */
    LucVar--;

    /* MISRA Violation: START Msg(4:0489)-3 */
    LpChipSelect++;
    /* END Msg (4:0489)-3 */
  }while (SPI_ZERO < LucVar);

  /* Load Main CTL0 register, setting PWR bit at the same time */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                  SPI_SET_DIRECT_ACCESS)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), SPI_SET_DIRECT_ACCESS,
                               SPI_CTLREG_8_BIT_MASK, SPI_SYNCTRANSMIT_SID)
  #endif /*#if (SPI_CSIH_CONFIGURED == STD_ON)*/
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_SyncProcessData
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform data processing of channel
**                      in Synchronous transmission
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** Input Parameters   : P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                 LpJobConfig,
**                      P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                           SPI_CONFIG_CONST)LpPBChannelConfig,
**                      Spi_ChannelType LddNoOfChannels
**
** Output Parameters  : None
**
** Return parameter   : boolean
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GaaChannelEBData
**
** Function Invoked   : Spi_GetCurrentRxData, Spi_CsihTxDataAndErrorProcessing,
**                      Spi_SetEojAndCsriBits/Spi_SetEojBit, Spi_GetCsihRxData
**
** Registers Used     : CSIHnRX0H, CSIHnTX0W, ICRn, CSIHnSTR0, CSIHnSTCR0
*******************************************************************************/
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* Implements SPI_ESDD_UD_174 */
/* Implements SPI165, SPI224_Conf */
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC( Std_ReturnType, SPI_PRIVATE_CODE)Spi_SyncProcessData
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
Spi_ChannelType LddNoOfChannels,Spi_SequenceType LddSequenceID,
                                                           Spi_JobType LddJobID)
/* END Msg(2:3227)-1 */
#else
/* START Msg(2:3227)-1 */
FUNC( Std_ReturnType, SPI_PRIVATE_CODE)Spi_SyncProcessData
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
Spi_ChannelType LddNoOfChannels)
/* END Msg(2:3227)-1 */
#endif
{
  P2VAR(Spi_DataAndErrorFlag, AUTOMATIC, SPI_CONFIG_DATA) LpDataAndDemFlag;

  #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  Spi_NumberOfDataType LddBufferIndex;
  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  #endif

  Std_ReturnType LenReturnValue;

  #endif
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess2;
  /* END Msg(4:0759)-1 */

  Spi_DataType LddData;

  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  uint32 LulShiftData;
  #endif
  Spi_DataAndErrorFlag Spi_SyncDataFlag;
  Spi_NumberOfDataType LddNoOfTxBuffers;
  Spi_NumberOfDataType LddNoOfRxBuffers;
  Spi_HWUnitType LddHWUnit;
  /* START Msg(2:2814)-6 */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;
  /* END Msg(2:2814)-6 */
  LpDataAndDemFlag = &Spi_SyncDataFlag;

  #if ((SPI_EB_CONFIGURED == STD_ON) || (SPI_INTERNAL_RW_BUFFERS == STD_ON))
  /* START Msg(2:2814)-6 */
  /* Get the buffer index value */
  LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
  /* END Msg(2:2814)-6 */
  #endif
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  /* Check if the buffer type is internal buffer */
  if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
  #endif
  {
    #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
    /* START Msg(2:2814)-6 */
    /* Update the RAM variable for Tx pointer with channel IB index */
    LpNextTxData = Spi_GpConfigPtr->pChannelIBWrite;
    /* END Msg(2:2814)-6 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    LpNextTxData = LpNextTxData + LddBufferIndex;
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */
    /* Update the RAM variable for number of buffers of the channel */
    LddNoOfTxBuffers = LpPBChannelConfig->ddNoOfBuffers;
    #endif
  }
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  else
  #endif
  {
    #if (SPI_EB_CONFIGURED == STD_ON)
    /*
    * Update the RAM variable for Tx pointer with channel EB
    * source pointer
    */
    /* Implements SPI_ESDD_UD_197 */
    LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;
    /* Update the local counter with number of buffers of the channel */
    LddNoOfTxBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
    #endif
  }

  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  LpCurrentRxData = Spi_GetCurrentRxData
                 (LpPBChannelConfig->ucChannelBufferType, LddBufferIndex);
  #else
  LpCurrentRxData = Spi_GetCurrentRxData(LddBufferIndex);
  #endif

  #if ((SPI_EB_CONFIGURED == STD_ON) || (SPI_INTERNAL_RW_BUFFERS == STD_ON))
  /* MISRA Violation: START Msg(4:2962)-10 */
  LddNoOfRxBuffers = LddNoOfTxBuffers;
  /* END Msg(4:2962)-10 */
  #endif
  do
  {
    /*
     * Take a local union variable to construct the value for TX0W
     * register
     */
    LunDataAccess2.ulRegData = SPI_ZERO;
    #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))
    /* Check if the source pointer is NULL pointer */
    if (NULL_PTR == LpNextTxData)
    #endif /* ((SPI_INTERNAL_RW_BUFFERS == STD_ON) ||
            *  (SPI_EB_CONFIGURED == STD_ON))
            */
    {
      /* Get the configured default value */
      LddData = LpPBChannelConfig->ddDefaultData;
    }
    #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))
    else
    {
      /* Get the value from the source pointer */
      LddData = *LpNextTxData;
      /* MISRA Violation: START Msg(4:0489)-3*/
      LpNextTxData++;
      /* END Msg (4:0489)-3 */
    }
    #endif

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    /* Set the EOJ bit & CSRI bit to inactive state before the last job */
    #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
    Spi_SetEojAndCsriBits( LpJobConfig, &LunDataAccess2,
                               LddNoOfTxBuffers, LddNoOfChannels, LddHWUnit );
    #else
    Spi_SetEojBit(&LunDataAccess2, LddNoOfTxBuffers, LddNoOfChannels);
    #endif
    #endif

    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, load Tx data portion of the
     * local variable with the 8-bit data to be transmitted
     */
    LunDataAccess2.Tst_ByteAccess.usRegData1 = (uint16)LddData;
    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 16-bit. Hence, load Tx data portion of the
     * local variable with the 16-bit data to be transmitted
     */
    LunDataAccess2.Tst_ByteAccess.usRegData1 = LddData;
    #else
    if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
        (SPI_TRUE != LpPBChannelConfig->blDirection) &&
        (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
        (SPI_ONE <= LpPBChannelConfig->ucDLSSetting)
       )
    {
      LulShiftData = (uint32)LddData;
      LulShiftData = (uint32)(LulShiftData << (SPI_SIXTEEN -
                                        (LpPBChannelConfig->ucDLSSetting)));
      LunDataAccess2.ulRegData = LulShiftData;
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
      LunDataAccess2.usRegData5[SPI_ZERO] >> (SPI_SIXTEEN -
                                         (LpPBChannelConfig->ucDLSSetting));
      LunDataAccess2.usRegData5[SPI_ZERO] =
                                   LunDataAccess1.Tst_ByteAccess.usRegData1;
    }
    else
    {
      /*
       * Data width is maximum 32-bit. Tx data needs to be split to
       * LS Byte and MS Byte. Hence, load the Tx data to local union variable
       */
      LunDataAccess2.ulRegData = LddData;
    }
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON) */

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
    LenReturnValue = Spi_CsihTxDataAndErrorProcessing(LpJobConfig,
                  LpPBChannelConfig, LunDataAccess2, LddSequenceID, LddJobID);
    #else
    LenReturnValue = Spi_CsihTxDataAndErrorProcessing(LpJobConfig,
                                           LpPBChannelConfig, LunDataAccess2);
    #endif
    #endif
     /* End of #if (SPI_CSIH_CONFIGURED == STD_ON)*/
    /* Checking of Dem error for exit time out for HW status Registers */
    if (E_OK == LenReturnValue)
    {
      LddNoOfTxBuffers--;

      if (SPI_ZERO < LddNoOfRxBuffers)
      {
        #if (SPI_CSIH_CONFIGURED == STD_ON)
        #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
        Spi_GetCsihRxData(LpPBChannelConfig, LpDataAndDemFlag, LddSequenceID,
                                                          LddJobID, LddHWUnit);
        #else
        Spi_GetCsihRxData(LpPBChannelConfig, LpDataAndDemFlag, LddHWUnit);

        #endif
        #endif

        LenReturnValue = LpDataAndDemFlag->ddReturnValue;
        if (E_OK == LenReturnValue)
        {
          /* Decrement the number of buffers received */
          LddNoOfRxBuffers--;
          #if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || \
                                                  (SPI_EB_CONFIGURED == STD_ON))
          if (NULL_PTR != LpCurrentRxData)
          {
            *LpCurrentRxData = LpDataAndDemFlag->ddData;
            /* MISRA Violation: START Msg(4:0489)-3 */
            LpCurrentRxData++;
            /* END Msg (4:0489)-3 */
          }
          else
          {
            /* No Action Required */
          }
          #endif
        }
        else
        {
          /* No Action Required */
        }
      }
      /*Start : SPI_UT_009*/
      else
      {
        /* No Action Required */
      }
      /* End : SPI_UT_009 */
    }
    else
    {
      /* No Action Required */
    }
  }while ((E_OK == LenReturnValue) && ((SPI_ZERO < LddNoOfTxBuffers) ||
                            ((SPI_ZERO < LddNoOfRxBuffers) &&
                            (SPI_TRUE == LpJobConfig->blIsChannelPropSame))));
  return LenReturnValue;

}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_CsihTxDataAndErrorProcessing
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform data processing for CSIH H/W
**                      in Synchronous transmission.
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                  LpJobConfig,
**                      P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                           SPI_CONFIG_CONST)LpPBChannelConfig,
**                      Spi_DataAccess LunDataAccess2
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : Spi_GusSynDataAccess
**
** Function Invoked   : Spi_CheckRegEmpty, Spi_CheckErrorInt
**
** Registers Used     : CSIHnRX0H, CSIHnTX0W, ICRn, CSIHnSTR0, CSIHnSTCR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_062 */
/* Implements SPI_ESDD_UD_148 */
#if ((SPI_CSIH_CONFIGURED == STD_ON)&&((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
     ((SPI_LEVEL_DELIVERED == SPI_TWO) &&(SPI_DIRECT_ACCESS_MODE == STD_ON))))
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0068 */
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* MISRA Violation: START Msg(4:0759)-1 */
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CsihTxDataAndErrorProcessing
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
Spi_DataAccess LunDataAccess2, Spi_SequenceType LddSequenceID,
                                                           Spi_JobType LddJobID)
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */
/* END Msg(4:0759)-1 */
#else
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CsihTxDataAndErrorProcessing
(P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
Spi_DataAccess LunDataAccess2)
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */

#endif
/* MISRA Violation: START Msg(4:0759)-1 */
{
  /* Defining a local pointer to point to structure of HW Unit information */
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;

  Std_ReturnType LenReturnValue;
  Spi_HWUnitType LddHWUnit;
  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  #endif
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess3;
  /* END Msg(4:0759)-1 */
  #endif
  LenReturnValue = E_OK;
  /* START Msg(2:2814)-6 */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;
  /* END Msg(2:2814)-6 */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];
  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  /*
   * Since data width is maximum 32-bit, check if the the data width of
   * requested channel is more than 16 bits
  */
  /* START Msg(2:2814)-6 */
  if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
  /* END Msg(2:2814)-6 */
  {
    /*
     * Data width is maximum 16-bit. Hence, load LSB portion of the
     * local variable with the 16-bit data to be transmitted
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                     LunDataAccess2.usRegData5[SPI_ZERO];
  }
  else
  {
    /* Check if the configured data direction is LSB first */
    if (SPI_TRUE == LpPBChannelConfig->blDirection)
    {
      /* Load Tx data portion of the local variable with LSB first */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                      LunDataAccess2.usRegData5[SPI_ZERO];
    }
    else
    {
      /* Load Tx data portion of the local variable with MSB first */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                       LunDataAccess2.usRegData5[SPI_ONE];
    }
    /* Set the EDL bit in the local union variable */
    LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EDL;
    LunDataAccess3.ulRegData = LunDataAccess1.ulRegData;
    /*
     * Check the configured data direction again to load other
     * part of data
     */
    if (SPI_TRUE == LpPBChannelConfig->blDirection)
    {
      /* Load Tx data portion of the local variable with MSB */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                      LunDataAccess2.usRegData5[SPI_ONE];
    }
    else
    {
      /* Load Tx data portion of the local variable with LSB */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                     LunDataAccess2.usRegData5[SPI_ZERO];
    }
    /* MISRA Violation: START Msg(4:2984)-9 */
    /* Reset the EDL bit in the local union variable */
    LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                  (LunDataAccess1.Tst_ByteAccess.ucRegData3 & SPI_RESET_EDL);
    /* END Msg(4:2984)-9 */
  } /* End of !if ( SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
  #endif
  /* Set chip select in the local union variable */
  LunDataAccess2.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;

  /* Implements SPI_ESDD_UD_150 */
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  /*
   * Since data width is maximum 32-bit, check if the the data width of
   * requested channel is more than 16 bits
  */
  if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
  {
    /* Set chip select in the local union variable */
    LunDataAccess3.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
    /* Set chip select in the local union variable */
    LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
    /* Clear pending Tx interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                            (SPI_CLR_INT_REQ));
    /* Clear pending Error interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                             (SPI_CLR_INT_REQ));
    /* Register dummy read-write  */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                            (SPI_CLR_INT_REQ));
    #endif
    /* SYNCP execution */
    EXECUTE_SYNCP();
    /* START Msg(2:2814)-6 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                            LunDataAccess3.ulRegData)
    /* END Msg(2:2814)-6 */
    /* Wait for Tx0 register to get empty */
    LenReturnValue = Spi_CheckRegEmpty(LpHWUnitInfo, LenReturnValue, SPI_TX);
    /* Check for Error interrupt flag */
    #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
    LenReturnValue = Spi_CheckErrorInt(LpHWUnitInfo, LenReturnValue,
                                          LddSequenceID, LddJobID, LddHWUnit );
    #else
    LenReturnValue = Spi_CheckErrorInt(LpHWUnitInfo, LenReturnValue);
    #endif
    if (E_OK == LenReturnValue)
    {
      /* Wait till Rx0 register is full */
      LenReturnValue = Spi_CheckRegEmpty(LpHWUnitInfo, LenReturnValue, SPI_RX);
      /* Check for Error interrupt flag */
      #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
      LenReturnValue = Spi_CheckErrorInt(LpHWUnitInfo, LenReturnValue,
                                           LddSequenceID, LddJobID, LddHWUnit);
      #else
      LenReturnValue = Spi_CheckErrorInt(LpHWUnitInfo, LenReturnValue);
      #endif
      /* Clear pending Rx interrupt */
      RH850_SV_MODE_ICR_AND(16,(LpHWUnitInfo->pRxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      /* Clear pending Error interrupt */
      RH850_SV_MODE_ICR_AND(16,(LpHWUnitInfo->pErrorIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      #endif
      /* SYNCP execution */
      EXECUTE_SYNCP();
      /* Save the received data to a variable */
      Spi_GusSynDataAccess = Csih_BaseAddress[LddHWUnit]->RX0H;
    }
    else
    {
      /* No action required */
    }
    if (E_OK == LenReturnValue)
    {
      /* Clear pending Tx interrupt */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      /* Clear pending Error interrupt */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      /* Register dummy read-write  */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      #endif
      /* SYNCP execution */
      EXECUTE_SYNCP();

      /* Load the value of the local union variable to TX0W register */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                            LunDataAccess1.ulRegData)

    }
    else
    {
      /* No action required */
    }
  }
  else
  {
     /* Clear pending Tx interrupt */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                           (SPI_CLR_INT_REQ));
  /* Clear pending Error interrupt */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                           (SPI_CLR_INT_REQ));
  /* Register dummy read-write  */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                          (SPI_CLR_INT_REQ));
  #endif
  /* SYNCP execution */
  EXECUTE_SYNCP();
  /* START Msg(2:2814)-6 */
  /* Load the value of the local union variable to TX0W register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                            LunDataAccess2.ulRegData)

  /* END Msg(2:2814)-6 */
  }

  #else
  {
     /* Clear pending Tx interrupt */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                          (SPI_CLR_INT_REQ));
  /* Clear pending Error interrupt */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                          (SPI_CLR_INT_REQ));
  /* Register dummy read-write  */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                           (SPI_CLR_INT_REQ));
  #endif
  /* SYNCP execution */
  EXECUTE_SYNCP();
  /* START Msg(2:2814)-6 */
  /* Load the value of the local union variable to TX0W register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                           LunDataAccess2.ulRegData)

  /* END Msg(2:2814)-6 */
  }
  /* Decrement the number of buffers to be transmitted  */
  #endif /* End of #if (SPI_EXTENDED_DATA_LENGTH == STD_ON) */
  /* Wait for Tx0 register to get empty */
  LenReturnValue = Spi_CheckRegEmpty(LpHWUnitInfo, LenReturnValue, SPI_TX);
  /* Check for Error interrupt flag */
  #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
  LenReturnValue = Spi_CheckErrorInt(LpHWUnitInfo, LenReturnValue,
                                          LddSequenceID, LddJobID, LddHWUnit);
  #else
  LenReturnValue = Spi_CheckErrorInt(LpHWUnitInfo, LenReturnValue);
  #endif

  return LenReturnValue;

 }
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_GetCsihRxData
**
** Service ID         : Not Applicable
**
** Description        : This function returns the receive data for CSIH H/W unit
**                      in Synchronous transmission
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                          SPI_CONFIG_CONST)LpPBChannelConfig,
**                      Spi_SequenceType LddSequenceID, Spi_JobType LddJobID,
**                      Spi_HWUnitType LddHWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Spi_DataType
**
** Preconditions      : None
**
** Global Variable    : Spi_GusSynDataAccess
**
** Function Invoked   : Spi_CheckRegEmpty, Spi_CheckErrorInt
**
** Registers Used     : CSIHnRX0H, ICRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_064 */
/* Implements SPI_ESDD_UD_089 */
#if (SPI_CSIH_CONFIGURED == STD_ON)
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0068 */
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* Implements SPI_ESDD_UD_132 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(void, SPI_PRIVATE_CODE)Spi_GetCsihRxData
(P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
P2VAR(Spi_DataAndErrorFlag, AUTOMATIC, SPI_CONFIG_DATA) LpDataAndDemFlag,
Spi_SequenceType LddSequenceID, Spi_JobType LddJobID, Spi_HWUnitType LddHWUnit)
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */
#else
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(void, SPI_PRIVATE_CODE)Spi_GetCsihRxData
(P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
P2VAR(Spi_DataAndErrorFlag, AUTOMATIC, SPI_CONFIG_DATA) LpDataAndDemFlag,
Spi_HWUnitType LddHWUnit)
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */

#endif
{
  /* Defining a local pointer to point to structure of HW Unit information */
  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo;
  #if (SPI_8BIT_DATA_WIDTH == STD_OFF && SPI_16BIT_DATA_WIDTH == STD_OFF)
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  #endif

  /* START Msg(2:2814)-6 */
  LpDataAndDemFlag->ddReturnValue = E_OK;
  /* END Msg(2:2814)-6 */
  LpDataAndDemFlag->ddData = SPI_ZERO;

  /* Get the base address of the HW Unit */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  /* Wait till Rx register is full */
  LpDataAndDemFlag->ddReturnValue = Spi_CheckRegEmpty(LpHWUnitInfo,
                                      LpDataAndDemFlag->ddReturnValue, SPI_RX);
   /* Check for Error interrupt flag */
  #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
  LpDataAndDemFlag->ddReturnValue = Spi_CheckErrorInt(LpHWUnitInfo,
           LpDataAndDemFlag->ddReturnValue, LddSequenceID, LddJobID, LddHWUnit);
  #else
  LpDataAndDemFlag->ddReturnValue = Spi_CheckErrorInt(LpHWUnitInfo,
                                              LpDataAndDemFlag->ddReturnValue);
  #endif
  if (E_OK == LpDataAndDemFlag->ddReturnValue)
  {
    /* START Msg(2:2814)-6 */
    /* Clear the pending Rx interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                             (SPI_CLR_INT_REQ));
    /* END Msg(2:2814)-6 */
    /* Clear the pending Error interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                                             (SPI_CLR_INT_REQ));
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                             (SPI_CLR_INT_REQ));
    #endif
    /* SYNCP execution */
    EXECUTE_SYNCP();

    /* START Msg(2:2814)-6 */
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */
    LpDataAndDemFlag->ddData = (uint8)Csih_BaseAddress[LddHWUnit]->RX0H;
    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    LpDataAndDemFlag->ddData = Csih_BaseAddress[LddHWUnit]->RX0H;
    /* END Msg(2:2814)-6 */
    #else
    /*
     * Data width is maximum 32-bit, Check if the the data width of
     * requested channel is more than 16 bits
     */
    /* START Msg(2:2814)-6 */
    if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    {
      /*
       * Data width is maximum 8-bit. Hence, Receive the data from the
       * Rx register to local union variable
       */
       LpDataAndDemFlag->ddData = Csih_BaseAddress[LddHWUnit]->RX0H;
    /* END Msg(2:2814)-6 */
    }
    else
    {
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Store the received data */
        LunDataAccess1.usRegData5[SPI_ONE] =
                                   (uint16)Csih_BaseAddress[LddHWUnit]->RX0H;
        LunDataAccess1.usRegData5[SPI_ZERO] = Spi_GusSynDataAccess;
      }
      else
      {
        LunDataAccess1.usRegData5[SPI_ZERO] =
                               (uint16)Csih_BaseAddress[LddHWUnit]->RX0H;
        LunDataAccess1.usRegData5[SPI_ZERO] =
                                     LunDataAccess1.usRegData5[SPI_ZERO] <<
                    (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
        LunDataAccess1.usRegData5[SPI_ONE] = Spi_GusSynDataAccess;
        LunDataAccess1.ulRegData = LunDataAccess1.ulRegData >>
                    (SPI_SIXTEEN - (LpPBChannelConfig->ucDLSSetting));
      }
       /* Return the received data */
       LpDataAndDemFlag->ddData = LunDataAccess1.ulRegData;
    } /* End of if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
    #endif
    /* Check for Error interrupt flag */
    #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
    LpDataAndDemFlag->ddReturnValue = Spi_CheckErrorInt(LpHWUnitInfo,
          LpDataAndDemFlag->ddReturnValue, LddSequenceID, LddJobID, LddHWUnit);
    #else
    LpDataAndDemFlag->ddReturnValue = Spi_CheckErrorInt(LpHWUnitInfo,
                                              LpDataAndDemFlag->ddReturnValue);
    #endif
  }
  else
  {
    /* No action required */
  }
 }
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif
#endif

/*******************************************************************************
** Function Name      : Spi_CheckRegEmpty
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform data processing of channel
**                      in Synchronous transmission
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : boolean
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Dem_ReportErrorStatus
**
** Registers Used     : ICRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_066 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CheckRegEmpty
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo ,
 Std_ReturnType LenReturnValue, uint8 Lucflag)
/* END Msg(2:3227)-1 */
{
  uint16 LusIndex;
  LusIndex = SPI_ZERO;
  /* wait for Tx or Rx Reg empty/full */
  if (SPI_TX == Lucflag)
  {
    /* START Msg(2:2814)-6 */
    /* START Msg(2:3892)-8 */
    while ((SPI_INT_FLAG_MASK != (uint16)(*(LpHWUnitInfo->pTxIntCntlAddress)
                       & SPI_INT_FLAG_MASK)) && (E_OK == LenReturnValue))
    /* END Msg(2:3892)-8 */
    /* END Msg(2:2814)-6 */
    {

      LusIndex++;
      /* Implements SPI_ESDD_UD_140 */
      /* Raise production error */
      /* Report error to DEM    */
      if (SPI_LOOP_TIMEOUT <= LusIndex)
      {
        /* Implements SPI_ESDD_UD_122 */
        Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
    }
  }
  else
  {
    /* START Msg(2:3892)-8 */
    while ((SPI_INT_FLAG_MASK != (uint16)(*(LpHWUnitInfo->pRxIntCntlAddress)
                       & SPI_INT_FLAG_MASK)) && (E_OK == LenReturnValue))
    /* END Msg(2:3892)-8 */
    {

      LusIndex++;
      /* Implements SPI_ESDD_UD_140 */
      /* Raise production error */
      /* Report error to DEM    */
      if (SPI_LOOP_TIMEOUT <= LusIndex)
      {
        /* Implements SPI_ESDD_UD_122 */
        Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                  DEM_EVENT_STATUS_FAILED);
        LenReturnValue = E_NOT_OK;
      }
      else
      {
        /* No action required */
      }
    }

  }
  return LenReturnValue;
 }
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_CheckErrorInt
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform the check for any
**                      reported hardware errors
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : boolean
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Dem_ReportErrorStatus, Spi_ReportErrorInSyncTx
**
** Registers Used     : CSIHnSTR0, CSIHnSTCR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_058 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
#if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
/* Implements SPI_ESDD_UD_183 */
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CheckErrorInt
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Std_ReturnType LenReturnValue, Spi_SequenceType LddSequenceID,
                                Spi_JobType LddJobID, Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
#else
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_CheckErrorInt
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Std_ReturnType LenReturnValue)
/* END Msg(2:3227)-1 */
#endif
{
  /* check for any hardware errors */
  /* START Msg(2:2814)-6 */
  /* START Msg(2:3892)-8 */
  if ((SPI_INT_FLAG_MASK == (uint16)(*(LpHWUnitInfo->pErrorIntCntlAddress) &
                      SPI_INT_FLAG_MASK)) && (E_OK == LenReturnValue))
  /* END Msg(2:3892)-8 */
  /* END Msg(2:2814)-6 */
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Raise production error */
    /* Report error to DEM    */
    Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR,
                                          DEM_EVENT_STATUS_FAILED);
    LenReturnValue = E_NOT_OK;
    #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
    Spi_ReportErrorInSyncTx(LddSequenceID, LddJobID, LddHWUnit);
    #endif
  }
  else
  {
    /* No action required */
  }

    return LenReturnValue;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_GetCurrentRxData
**
** Service ID         : Not Applicable
**
** Description        : This function is to return the pointer to current Rxdata
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : uint8 LucChannelBufferType
**                      Spi_NumberOfDataType LddBufferIndex
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Spi_DataType
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GaaChannelEBData
**
** Function Invoked   : None
**
** Registers Used     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_065 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))
#if ((SPI_INTERNAL_RW_BUFFERS == STD_ON) || (SPI_EB_CONFIGURED == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
/* START Msg(2:3227)-1 */
FUNC(P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA), SPI_PRIVATE_CODE)
Spi_GetCurrentRxData(uint8 LucChannelBufferType,
                                            Spi_NumberOfDataType LddBufferIndex)
/* END Msg(2:3227)-1 */
#else
FUNC(P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA), SPI_PRIVATE_CODE)
Spi_GetCurrentRxData(Spi_NumberOfDataType LddBufferIndex)
#endif
{
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  /* Check if the buffer type is internal buffer */
  if (SPI_ZERO == LucChannelBufferType)
  #endif
  {
    #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    /* Update the RAM variable for Rx pointer with channel IB index */
    LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;
    /* END Msg (2:2814)-6 */
    /* START Msg(2:2824)-2 */
    LpCurrentRxData = LpCurrentRxData + LddBufferIndex;
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */

    #endif
  }
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  else
  #endif
  {
    #if (SPI_EB_CONFIGURED == STD_ON)
    /* Update the RAM variable for Rx pointer with channel EB index */
    LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;
    #endif
  }
  /* MISRA Violation: START Msg(4:2962)-10 */
  return LpCurrentRxData;
  /* END Msg(4:2962)-10 */
 }
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif
#endif

/*******************************************************************************
** Function Name      : Spi_CsihStaticInit
**
** Service ID         : Not Applicable
**
** Description        : This service performs static initialization for CSIH
**                      hardware unit
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** InOut Parameters   : None
**
** Input Parameters   : P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                 LpHWUnitInfo,
**                      P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST)
**                                                                  LpJobConfig,
**                      P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                           SPI_CONFIG_CONST)LpPBChannelConfig,
**                      P2CONST(Spi_SequenceConfigType, AUTOMATIC,
**                                                SPI_CONFIG_CONST) LpSeqConfig,
**                                                Spi_HWUnitType LddHWUnitNumber
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GpFirstJob, Spi_GpFirstChannel
**                      Spi_GaaHighPriorityCommActive, Spi_GstCurrentCommData
**
** Function invoked   : None
**
** Registers Used     : CSIHnCTL1, CSIHnSTCR0, CSIHnCTL2, CSIHnMCTL0, CSIHnBRSy,
**                      CSIHnCFGx, CSIHnSTR0
*******************************************************************************/
/* Implements SPI_ESDD_UD_046 */
/* Implements SPI_ESDD_UD_148 */
#if(SPI_CSIH_CONFIGURED == STD_ON)
#if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) ||\
    ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
    (SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) || \
                                      (SPI_TX_ONLY_MODE == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements AR_PN0063_FR_0081, AR_PN0063_FR_0080 */
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(void, SPI_PRIVATE_CODE)Spi_CsihStaticInit
(P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList,
Spi_JobType LddNoOfJobs, Spi_HWUnitType LddHWUnitNumber,
                                    Spi_HWUnitType LddHWUnit, uint8 LucApId )
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfigCSConfig;
  /* Declare a local pointer to point to the Configured chip select of job */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;
  #if (SPI_DIRECT_ACCESS_MODE == STD_ON && \
                        (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF))
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif
  #if ((SPI_DIRECT_ACCESS_MODE == STD_ON && \
                (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)) || \
                (SPI_FIFO_MODE == STD_ON))
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentTxChannelList;
  #endif
  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  uint32 LulCxCTL1;
  #endif
  uint16 LusCxCtl2;
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                              LpPBChannelConfig;

  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;

  Spi_JobType LddJobIndexCSConfig;
  Spi_JobType LddJobIndex;
  uint32 LulBRSRegIndex;
  uint16 LusBRSValue;
  /* MISRA Violation: START Msg(4:0759)-4 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-4 */
  uint8 LucVar;
  uint8 LucHWMemoryMode;
  /* START Msg(2:2814)-6 */
  /* Get the index of the job and sequence */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer of the first job linked to this sequence */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg(4:0488)-4 */
  #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
  /* START Msg(2:2814)-6 */
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* Get the configured memory mode for this HW Unit */
    LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED ;
  }
  #endif
  /* END Msg(2:2814)-6 */
  #else
  LucHWMemoryMode = SPI_DIRECT_ACCESS_MODE_CONFIGURED;
  #endif /*
          * ((SPI_CSIH_CONFIGURED == STD_ON) &&
          *                               (SPI_LEVEL_DELIVERED != SPI_ZERO))
          */

  /* Implements SPI_ESDD_UD_206 */
  /* Clear the status register */
  /* START Msg(2:2814)-6 */
  /* START Msg(2:3892)-8 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                                  SPI_CSIH_CLR_STS_FLAGS)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
  &(Csih_BaseAddress[LddHWUnit]->STR0), (uint32)SPI_ZERO,
                                   (uint32)(SPI_CSIH_CLR_STS_FLAGS), LucApId)
  /* END Msg(2:3892)-8 */
  /* END Msg(2:2814)-6 */

  /* Load the local union variable with Ctl1 reg value of current Job */
  /* START Msg(2:2814)-6 */
  LunDataAccess1.ulRegData = LpJobConfig->ulMainCtl1Value;
  /* END Msg(2:2814)-6 */

  #if (SPI_FIFO_MODE == STD_ON)
  if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
  {
    /* To get LddNoOfBuffers */
    LpCurrentTxChannelList = LpJobConfig->pChannelList;

    /* Get the pointer to the post-build structure of the channel */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);

    if ((SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode) &&
                    (SPI_ONE_TWENTY_EIGHT < LpPBChannelConfig->ddNoOfBuffers))
    {
      /* CSRI bit is masked for FIFO Mode when number of buffers is
                                                           greater than 128 */
      LunDataAccess1.ulRegData &= SPI_CSRI_AND_MASK;
      Spi_GblCSRIMask = SPI_TRUE;
    }
    else
    {
      /* No action required */
    }
  }
  #endif

  /* Write the value with configured polarity of all chip selects */
  LunDataAccess1.ucRegData4[SPI_ONE] =
                              Spi_GpConfigPtr->aaChipSelect[LddHWUnitNumber];
  /* Load the control register 1 with the value of local union variable */
  /* START Msg(2:2814)-6 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1,
                                           LunDataAccess1.ulRegData)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(&(Csih_BaseAddress[LddHWUnit]->CTL1),
  LunDataAccess1.ulRegData, SPI_CTLREG_32_BIT_MASK, LucApId)
  /* END Msg(2:2814)-6 */
  /* Implements SPI_ESDD_UD_144 */
  #if (SPI_DIRECT_ACCESS_MODE == STD_ON)
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if(SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
    }
    #endif

    LpCurrentTxChannelList = LpCurrentCommData->pCurrentTxChannelList;

    /* Get the pointer to the post-build structure of the channel */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* START Msg(2:2814)-6 */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);
    /* END Msg(2:2814)-6 */
    #else

    LpPBChannelConfig = Spi_GpFirstChannel + (*(LpJobConfig->pChannelList));
    #endif
    /* MISRA Violation: START Msg(4:0402)-12 */
    /* Set the SLIT bit */
    LulCxCTL1 = (Csih_BaseAddress[LddHWUnit]->CTL1 | SPI_SET_SLIT);
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1, LulCxCTL1)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
                         &(Csih_BaseAddress[LddHWUnit]->CTL1), LulCxCTL1,
                                         SPI_CTLREG_32_BIT_MASK, LucApId)
    /* END Msg(4:0402)-12 */
    /* END Msg(2:2824)-2 */
    /* END Msg(4:0488)-4 */
  }
  else
  {
    /* No action required */
  }
  #endif /* (SPI_DIRECT_ACCESS_MODE == STD_ON) */
  /* Update the Pre-scalar value from control register2 */
  LusCxCtl2 = ((LpJobConfig->usCtl2Value) & SPI_CSIH_PRE_MASK);
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL2, LusCxCtl2)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(&(Csih_BaseAddress[LddHWUnit]->CTL2),
                                    LusCxCtl2, SPI_CTLREG_16_BIT_MASK, LucApId)

  /* START Msg(2:2814)-6 */
  /* Initialize CSIH memory register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL0,
                                                 LpJobConfig->usMCtl0Value)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->MCTL0), LpJobConfig->usMCtl0Value,
                                               SPI_CSIHMCTL0_MASK, LucApId)
  /* END Msg(2:2814)-6 */

  do
  {
    /* START Msg(2:2814)-6 */
    LddJobIndexCSConfig = LpJobList->ddJobIndex;
    /* END Msg(2:2814)-6 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    LpJobConfigCSConfig = Spi_GpFirstJob + LddJobIndexCSConfig;
    /* END Msg(2:2824)-2 */
    /* START Msg(2:2814)-6 */
    /* Get the value for multiple chip selects configured */
    LpChipSelect = (Spi_GpConfigPtr->pCSArray) +
                                          (LpJobConfigCSConfig->ucCSArrayIndex);
    /* END Msg(2:2814)-6 */
    /* END Msg(4:0488)-4 */
    #if ((SPI_FIFO_MODE == STD_ON) || (SPI_DUAL_BUFFER_MODE == STD_ON) \
                                       || (SPI_TX_ONLY_MODE == STD_ON))
    if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
    {
      /* START Msg(2:2824)-2 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the post-build structure of the channel */
      LpPBChannelConfig = Spi_GpFirstChannel +
                                  (*LpJobConfigCSConfig->pChannelList);
      /* END Msg(4:0488)-4 */
      /* END Msg(2:2824)-2 */
    }
    else
    {
      /* No action required */
    }
    #endif /*
            * ((SPI_FIFO_MODE == STD_ON) || \
            *         (SPI_DUAL_BUFFER_MODE == STD_ON) || \
            *                               (SPI_TX_ONLY_MODE == STD_ON))
            */

    /*
     * To load configuration register, read the existing communication
     * type values  to a local union variable
     */
    LunDataAccess1.ulRegData = LpJobConfigCSConfig->ulConfigRegValue;
    /* Load the local variable with data width */
    LunDataAccess1.ucRegData4[SPI_THREE] =
                            LunDataAccess1.ucRegData4[SPI_THREE] & SPI_DLS_MASK;
    /* MISRA Violation: START Msg(4:2962)-10 */
    /* START Msg(2:2814)-6 */
    LunDataAccess1.ucRegData4[SPI_THREE] =
      (LunDataAccess1.ucRegData4[SPI_THREE] | LpPBChannelConfig->ucDLSSetting);
    /* END Msg(2:2814)-6 */
    /* END Msg(4:2962)-10 */
    /* Load the local variable with configured direction */
    if (SPI_TRUE == LpPBChannelConfig->blDirection)
    {
      /* Direction is LSB, set DIR bit */
      LunDataAccess1.ucRegData4[SPI_TWO] = LunDataAccess1.ucRegData4[SPI_TWO] |
                                           SPI_SET_DIR_LSB;
    }
    else
    {
      /* Direction is MSB, reset DIR bit */
      LunDataAccess1.ucRegData4[SPI_TWO] =
                     LunDataAccess1.ucRegData4[SPI_TWO] & SPI_RESET_DIR_LSB;
    }

    /* Get the index of the baud rate register */
    LulBRSRegIndex = (((LpJobConfigCSConfig->ulConfigRegValue) &
                                       SPI_CSIH_BRS_SELECT_MASK) >> SPI_THIRTY);

    LusBRSValue = ((LpJobConfigCSConfig->usCtl2Value) & SPI_CSIH_BRS_MASK);
    /* Update the Baud rate value from control register2 */
    if((uint32)SPI_ZERO == LulBRSRegIndex)
    {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS0, LusBRSValue)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->BRS0), LusBRSValue,
                                             SPI_CSIHBRS_MASK, LucApId)
    }
    else if((uint32)SPI_ONE == LulBRSRegIndex)
    {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS1, LusBRSValue)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->BRS1), LusBRSValue,
                                             SPI_CSIHBRS_MASK, LucApId)
    }
    else if((uint32)SPI_TWO == LulBRSRegIndex)
    {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS2, LusBRSValue)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->BRS2), LusBRSValue,
                                             SPI_CSIHBRS_MASK, LucApId)
    }
    /* START Msg(4:2995)-15 */
    else
    {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS3, LusBRSValue)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->BRS3), LusBRSValue,
                                             SPI_CSIHBRS_MASK, LucApId)
    }
    /* END Msg(4:2995)-15 */
    /* Load the number of chip selects */
    LucVar = LpJobConfigCSConfig->ucNoOfCS;
    do
    {
      /* Implements SPI_ESDD_UD_203 */
      /* Initialize CSIH configuration register */
      if(SPI_ZERO == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG0), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      else if(SPI_ONE == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG1,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG1), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      else if(SPI_TWO == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG2,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG2), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      else if(SPI_THREE == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG3,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG3), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      else if(SPI_FOUR == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG4,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG4), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      else if(SPI_FIVE == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG5,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG5), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      else if(SPI_SIX == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG6,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG6), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      /* MISRA Violation: START Msg(4:0715)-14 */
      else if(SPI_SEVEN == *LpChipSelect)
      {
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG7,
                                             LunDataAccess1.ulRegData)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
        &(Csih_BaseAddress[LddHWUnit]->CFG7), LunDataAccess1.ulRegData,
                                                SPI_CSIHCFG_MASK, LucApId)
      }
      else
      {
        /*To avoid Misra*/
      }
      /* END Msg (4:0715)-14 */
      /* Decrement number of chip selects */
      LucVar--;
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpChipSelect++;
      /* END Msg(4:0489)-3 */
    }while (SPI_ZERO < LucVar);

    /* Implements SPI_ESDD_UD_207 */
    /* MISRA Violation: START Msg(4:0489)-3 */
    if (SPI_TRUE != LpJobList->blIsLastJob)
    {
      LpJobList--;
    }
    else
    {
      /* No action required */
    }
    /* END Msg(4:0489)-3 */
    LddNoOfJobs--;
  /* MISRA Violation: START Msg(4:2877)-11 */
  }while (SPI_ZERO < LddNoOfJobs);
  /* END Msg(4:2877)-11 */
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_ON) */
#endif

/*******************************************************************************
** Function Name      : Spi_CsihLoopBackSelfTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform data transmission self test
**                      using loop back mode in CSIH hardware unit
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                LpHWUnitInfo
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : uint8
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : None
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnSTCR0, CSIHnBRS0,
**                      CSIHnSTR0, CSIHCFG0, CSIHnTX0W, CSIHnRX0H, ICRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_049 */
/* Implements SPI_ESDD_UD_148 */
/* Implements SPI_ESDD_UD_098 */
#if (SPI_LOOPBACK_SELFTEST == SPI_ONE ||SPI_LOOPBACK_SELFTEST == SPI_TWO )
#if (SPI_CSIH_CONFIGURED == STD_ON)
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_133 */
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0068 */
/* START Msg(2:3227)-1 */
FUNC(uint8, SPI_PRIVATE_CODE)Spi_CsihLoopBackSelfTest
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo,
                                                    Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
{
  Std_ReturnType LenReturnValue;
  uint16 LucIndex;
  uint8 LucData;
  LucData = SPI_ZERO;
  LenReturnValue = E_OK;
  /* Clear the status register */
   /* START Msg(2:2814)-6 */
   /* START Msg(2:3892)-8 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                              SPI_CSIH_CLR_STS_FLAGS)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->STR0), (uint32)SPI_ZERO,
                            (uint32)(SPI_CSIH_CLR_STS_FLAGS),SPI_SELFTEST_SID)
  /* END Msg(2:3892)-8 */

  /* Load the control register 1 with the value of LoopBack enable */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1,
                                                     SPI_LOOPBACK_ENABLE)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL1), SPI_LOOPBACK_ENABLE,
                                  SPI_CTLREG_32_BIT_MASK, SPI_SELFTEST_SID)
  /* Update the Pre-scalar value from control register2 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL2,
                              SPI_LOOPBACK_CSIH_CNTRL2_VALUE)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL2), SPI_LOOPBACK_CSIH_CNTRL2_VALUE,
                                    SPI_CTLREG_16_BIT_MASK, SPI_SELFTEST_SID)
  /* Implements SPI_ESDD_UD_187 */
  /* Update the Baud rate value from BRS register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS0,
                                   SPI_LOOPBACK_CSIH_BRS0_VALUE)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->BRS0), SPI_LOOPBACK_CSIH_BRS0_VALUE,
                                    SPI_CSIHBRS_MASK, SPI_SELFTEST_SID)
  /* Initialize CSIH configuration register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0,
                                          SPI_LOOPBACK_DLS_SETTING)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CFG0), SPI_LOOPBACK_DLS_SETTING,
                                SPI_CSIHCFG_MASK, SPI_SELFTEST_SID)
  /* Load Main CTL0 register, setting PWR bit at the same time */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                SPI_SET_DIRECT_ACCESS)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), SPI_SET_DIRECT_ACCESS,
                               SPI_CTLREG_8_BIT_MASK, SPI_SELFTEST_SID)
  /* Clear pending interrupts */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                           (SPI_CLR_INT_REQ));
  /* Register dummy read-write  */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                          (SPI_CLR_INT_REQ));
  #endif
  /* SYNCP execution */
  EXECUTE_SYNCP();
  /* START Msg(2:3892)-8 */
  /* Load the loop back test dummy data to TX0W register */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W, SPI_LOOPBACK_DATA)

  /* END Msg(2:3892)-8 */
  /* END Msg(2:2814)-6 */
  /* Delay for RX update */
  LucIndex = SPI_TWO;
  while (SPI_ZERO < LucIndex)
  {
    LucIndex--;
  }
  LucIndex = SPI_ZERO;
  /* Wait in the loop until the communication is stopped */
  while ((SPI_HW_BUSY == (Csih_BaseAddress[LddHWUnit]->STR0 & SPI_HW_BUSY))
                                                  && (E_OK == LenReturnValue))
  {
    LucIndex++;
    /* Implements SPI_ESDD_UD_140 */
    /* Raise production error */
    if (SPI_LOOP_TIMEOUT <= LucIndex)
    {
      /* Implements SPI_ESDD_UD_122 */
      Dem_ReportErrorStatus(SPI_E_DATA_TX_TIMEOUT_FAILURE,
                                                       DEM_EVENT_STATUS_FAILED);
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
  }

  if (E_OK == LenReturnValue)
  {
    /* Save the received data to a variable */
    LucData = (uint8)Csih_BaseAddress[LddHWUnit]->RX0H;
  }
  else
  {
    /*no action required */
  }
  /* START Msg(2:3892)-8 */
  /* Check for any Parity error */
   if ((uint32)SPI_ZERO != ((Csih_BaseAddress[LddHWUnit]->STR0) & SPI_PE_ERR))
  {
    /*Clear the status bit */
    /* START Msg(2:2814)-6 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                                     (uint16)SPI_PE_ERR_CLR)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0), (uint32)SPI_ZERO, SPI_PE_ERR_CLR,
                                                         SPI_ASYNCTRANSMIT_SID)
    /* End Msg(2:2814)-6 */
    /* END Msg(2:3892)-8 */
    /* Implements SPI_ESDD_UD_122 */
    /*Report error to DEM*/
    Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED);
    /*Set invalid data */
    LucData = SPI_LOOPBACK_ERROR;
  }
  else
  {
    /* No action required */
  }
  /* Clear pending interrupts */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                           (SPI_CLR_INT_REQ));
  /* Clear pending interrupts */
  RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                           (SPI_CLR_INT_REQ));
  /* Reset all registers */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8, SPI_ZERO)
  SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), SPI_ZERO, SPI_SELFTEST_SID)

  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1, SPI_ZERO)
  SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL1), SPI_ZERO, SPI_SELFTEST_SID)

  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL2, SPI_ZERO)
  SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL2), SPI_ZERO, SPI_SELFTEST_SID)

  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->BRS0, SPI_ZERO)
  SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->BRS0), SPI_ZERO, SPI_SELFTEST_SID)

  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0, SPI_ZERO)
  SPI_CSIH_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CFG0), SPI_ZERO, SPI_SELFTEST_SID)
  /* START Msg(2:3892)-8 */
  /* START Msg(2:2814)-6 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                              SPI_CSIH_CLR_STS_FLAGS)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->STR0), (uint32)SPI_ZERO,
                             (uint32)(SPI_CSIH_CLR_STS_FLAGS), SPI_SELFTEST_SID)
  /* END Msg(2:2814)-6 */
  /* END Msg(2:3892)-8 */
  return LucData;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* END of #if SPI_CSIH_CONFIGURED == STD_ON */
#endif /* END of #if (SPI_LOOPBACK_SELFTEST == SPI_ONE \
                      ||SPI_LOOPBACK_SELFTEST == SPI_TWO ) */

/*******************************************************************************
** Function Name      : Spi_EccAllZeroTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform Ecc one bit error test
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Dem_ReportErrorStatus
**
** Registers Used     : ECCCSIHnCTL, ECCCSIHnTED, ECCCSIHnTRC
*******************************************************************************/
/* Implements SPI_ESDD_UD_050 */
/* Implements SPI_ESDD_UD_148 */
/* Implements SPI_ESDD_UD_099 */
#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccAllZeroTest
                                                 (Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
{
  Std_ReturnType LenReturnValue;
  LenReturnValue = E_OK;
  /* Initialize RAM */
  /* START Msg(2:2814)-6 */
  Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)RAM_INITIALIZE;
  /* END Msg(2:2814)-6 */
  /* Check ECEMF of CTL register is SET */
  if ( SPI_ZERO ==((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)& ECC_CTL_ECEMF_SET))
  {
    /* Clearing 1-bit and 2-bit error flags in case if ECEMF is 0 */
    Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
                    (uint32)((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)&
                                               ECC_CTL_ECER1F_ECER2F_CLEAR);
  }
  else
  {
    /* No action required */
  }

  /* Write All zero test pattern to RAM */
  Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)ALL_ZERO_PATTERN;
  /* Implements SPI_ESDD_UD_189 */
  /* Write to ECC bits */
  Ecc_BaseAddress[LddHWUnit]->TRC.REGS8.ERDB.UINT8 = (uint8)TRC_ERDB_INITIALIZE;
  /* Dummy Read value from RAM */
  if ((uint32)SPI_ZERO == Ecc_BaseAddress[LddHWUnit]->TED.UINT32)
  {
    /*no action required, dummy read */
  }
  /*Start : SPI_UT_002*/
  else
  {
    /* No action required */
  }
  /* End : SPI_UT_002 */
  /* Check any error flag is set */
  if (SPI_ZERO != ((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)& CTL_ERR_FLAG))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Report to DEM */
    Dem_ReportErrorStatus(SPI_E_ECC_SELFTEST_FAILURE,
                                             DEM_EVENT_STATUS_FAILED);
    /* Clear Error flags */
    Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
             (uint32)(Ecc_BaseAddress[LddHWUnit]->CTL.UINT32| CTL_ERRCLR_FLAG);

    /* Set Return value */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  return LenReturnValue;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of #if (SPI_ECC_SELFTEST == SPI_ONE
                                           || SPI_ECC_SELFTEST == SPI_TWO) */
#endif

/*******************************************************************************
** Function Name      : Spi_EccAllOneTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform Ecc one bit error test
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Dem_ReportErrorStatus
**
** Registers Used     : ECCCSIHnCTL, ECCCSIHnTED, ECCCSIHnTRC
*******************************************************************************/
/* Implements SPI_ESDD_UD_051 */
/* Implements SPI_ESDD_UD_148 */
/* Implements SPI_ESDD_UD_099 */
#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccAllOneTest
                                             (Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
{
  Std_ReturnType LenReturnValue ;
  LenReturnValue = E_OK;
  /* START Msg(2:2814)-6 */
  /* Implements SPI_ESDD_UD_188 */
  /* Initialize RAM */
  Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)RAM_INITIALIZE;
  /* END Msg(2:2814)-6 */
  /* Check ECEMF of CTL register is SET */
  if (SPI_ZERO == ((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)& ECC_CTL_ECEMF_SET))
  {
    /* Clearing 1-bit and 2-bit error flags in case if ECEMF is 0 */
    Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
                            (uint32)((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)&
                                             ECC_CTL_ECER1F_ECER2F_CLEAR);
  }
  else
  {
    /* No action required */
  }
  /* Write All ONE test pattern to RAM */
  Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)ALL_ONE_PATTERN;
  /* Implements SPI_ESDD_UD_189 */
  /* write to ECC bits */
  Ecc_BaseAddress[LddHWUnit]->TRC.REGS8.ERDB.UINT8 = (uint8)TRC_ERDB_INITIALIZE;
  /* Dummy Read value from RAM */
  /*Start : SPI_UT_001*/
  if ((uint32)SPI_ZERO == Ecc_BaseAddress[LddHWUnit]->TED.UINT32)
  {
    /* No action required */
  }
  /* End : SPI_UT_001 */
  else
  {
    /* No action required */
  }
  /* Check any error flag is set */
  if (((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)& (CTL_ERR_FLAG)) !=
                                                             (uint32)SPI_ZERO)
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Report DEM */
    Dem_ReportErrorStatus(SPI_E_ECC_SELFTEST_FAILURE, DEM_EVENT_STATUS_FAILED);
    /* Clear Error flags */
    Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
           (uint32)(Ecc_BaseAddress[LddHWUnit]->CTL.UINT32| CTL_ERRCLR_FLAG);

    /* Set Return value */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* No Action required */
  }
  return LenReturnValue;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of #if (SPI_ECC_SELFTEST == SPI_ONE
                                         || SPI_ECC_SELFTEST == SPI_TWO) */
#endif

/*******************************************************************************
** Function Name      : Spi_EccWalkOneTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform Ecc one bit error test
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Dem_ReportErrorStatus
**
** Registers Used     : ECCCSIHnCTL, ECCCSIHnTED, ECCCSIHnTRC
*******************************************************************************/
/* Implements SPI_ESDD_UD_052 */
/* Implements SPI_ESDD_UD_148 */
/* Implements SPI_ESDD_UD_099 */
#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* START Msg(2:3227)-1 */
/* Implements SPI_ESDD_UD_133 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccWalkOneTest
                                                (Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
{
  Std_ReturnType LenReturnValue ;
  uint8 LucCount;
  LenReturnValue = E_OK;
  LucCount = SPI_ZERO;
  do
  {
    /* START Msg(2:2814)-6 */
    /* Initialize RAM */
    Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)RAM_INITIALIZE;
    /* END Msg(2:2814)-6 */
    /* Check ECEMF of CTL register is SET */
    if ( (Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 & ECC_CTL_ECEMF_SET) ==
                                                                   SPI_ZERO)
    {
      /* Clearing 1-bit and 2-bit error flags in case if ECEMF is 0 */
      Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
                            (uint32)((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)&
                                              ECC_CTL_ECER1F_ECER2F_CLEAR);
    }
    else
    {
        /* No action required */
    }
    /* A single data bit is set to 1 and "walked" through the
    entire code word and Other bits are set to "0" */
    Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)(SPI_ONE << LucCount);
    Ecc_BaseAddress[LddHWUnit]->TRC.REGS8.ERDB.UINT8 =
                                                (uint8)TRC_ERDB_INITIALIZE ;
    /* Dummy Read of the value from RAM */
    /*Start : SPI_UT_005*/
    if ((uint32)SPI_ZERO == Ecc_BaseAddress[LddHWUnit]->TED.UINT32)
    {
      /*no action required */
    }
    /*End : SPI_UT_005*/
    else
    {
        /* No action required */
    }
    if ( (uint32)SPI_ZERO ==
                    (Ecc_BaseAddress[LddHWUnit]->CTL.UINT32& CTL_1BIT_ERR_FLAG))
    /* Check any error flag is set - Expected 1 bit error */
    {
      /* Implements SPI_ESDD_UD_122 */
      /* Report DEM */
      Dem_ReportErrorStatus(SPI_E_ECC_SELFTEST_FAILURE,
                                           DEM_EVENT_STATUS_FAILED);
      /* Set Return value */
      LenReturnValue = E_NOT_OK;
    }
    else
    {
      LucCount++;
      /* Clear the one bit error flag by setting ECER1C bit of CTL Register */
     Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
         (uint32)(Ecc_BaseAddress[LddHWUnit]->CTL.UINT32| CTL_1BIT_ERRCLR_FLAG);

    }
  }while ((SPI_DATAWORDLENGTH >= LucCount) && (E_NOT_OK != LenReturnValue));

  return LenReturnValue;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (SPI_ECC_SELFTEST == SPI_ONE \
                                              || SPI_ECC_SELFTEST == SPI_TWO) */
#endif

/*******************************************************************************
** Function Name      : Spi_EccTwoBitTest
**
** Service ID         : Not Applicable
**
** Description        : This function is to perform Ecc two bit error test
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : Std_ReturnType
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Dem_ReportErrorStatus
**
** Registers Used     : ECCCSIHnCTL, ECCCSIHnTED, ECCCSIHnTRC
*******************************************************************************/
/* Implements SPI_ESDD_UD_053 */
/* Implements SPI_ESDD_UD_099 */
#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (SPI_ECC_SELFTEST == SPI_ONE || SPI_ECC_SELFTEST == SPI_TWO)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE)Spi_EccTwoBitTest
                                             (Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
{
  Std_ReturnType LenReturnValue ;
  LenReturnValue = E_OK;
  /* START Msg(2:2814)-6 */
  /* Initialize RAM */
  Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)RAM_INITIALIZE;
  /* END Msg(2:2814)-6 */
  /* Check ECEMF of CTL register is SET */
  if ((uint32)SPI_ZERO ==
                 (Ecc_BaseAddress[LddHWUnit]->CTL.UINT32& ECC_CTL_ECEMF_SET))
  {
    /* Clearing 1-bit and 2-bit error flags in case if ECEMF is 0 */
    Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
                          (uint32)(Ecc_BaseAddress[LddHWUnit]->CTL.UINT32&
                                               ECC_CTL_ECER1F_ECER2F_CLEAR);
  }
  else
  {
      /* No action required */
  }
  /* Write two bit test pattern to RAM */
  Ecc_BaseAddress[LddHWUnit]->TED.UINT32 = (uint32)TWO_BIT_PATTERN;
  Ecc_BaseAddress[LddHWUnit]->TRC.REGS8.ERDB.UINT8 = (uint8)TRC_ERDB_INITIALIZE ;
  /* Dummy Read value from RAM */
  /*Start : SPI_UT_004*/
  if ((uint32)SPI_ZERO == Ecc_BaseAddress[LddHWUnit]->TED.UINT32)
  {
    /*no action required */
  }
  /* End : SPI_UT_004 */
  else
  {
    /* No action required */
  }
  /* Check any error flag is set - Expected 2 bit error */
  if ((uint32)SPI_ZERO ==
                ((Ecc_BaseAddress[LddHWUnit]->CTL.UINT32)& (CTL_2BIT_ERR_FLAG)))
  {
    /* Implements SPI_ESDD_UD_122 */
    /* Report DEM */
    Dem_ReportErrorStatus(SPI_E_ECC_SELFTEST_FAILURE,
                                            DEM_EVENT_STATUS_FAILED);
    /* Set Return value */
    LenReturnValue = E_NOT_OK;
  }
  else
  {
    /* Clear the one bit error flag by setting ECER2C bit of
                                                       CTL Register */
    Ecc_BaseAddress[LddHWUnit]->CTL.UINT32 =
        (uint32)(Ecc_BaseAddress[LddHWUnit]->CTL.UINT32| CTL_2BIT_ERRCLR_FLAG);

  }

  return LenReturnValue;
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* End of #if (SPI_ECC_SELFTEST == SPI_ONE
                                            || SPI_ECC_SELFTEST == SPI_TWO) */
#endif

/*******************************************************************************
** Function Name      : Spi_ProcessDirectAcessData
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the Transmit ISR for
**                      processing the data in direct access mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstJob, Spi_GaaChannelEBData,
**                      Spi_GpFirstChannel, Spi_GaaJobQueue,
**                      Spi_GpFirstJobList, Spi_GddQueueIndex,
**                      Spi_GpConfigPtr, Spi_GstCurrentCommData,
**                      Spi_GaaHighPriorityCommActive
**
** Function Invoked   : Spi_ProcessExtendedData, Spi_ProcessCsihData,
**                      SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIHnTX0H, CSIHnTX0W
*******************************************************************************/
/* Implements SPI_ESDD_UD_067 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                   (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE)Spi_ProcessDirectAcessData
                               (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpTxCurrentChannelList;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;

  Spi_JobType LddJobIndex;
  Spi_NumberOfDataType LddBufferIndex;

  Spi_DataType LddData;
  Spi_JobType LddJobListIndex;

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
   Spi_HWUnitType LddHWUnitNumber;
  #endif
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
  }
  /* END Msg(2:2814)-6 */
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
  }
  #endif
  LpTxCurrentChannelList = LpCurrentCommData->pCurrentTxChannelList;
  /* MISRA Violation: START Msg(4:0489)-3*/
  /* START Msg(2:2824)-2 */
  /* Decrement the source pointer */
  LpTxCurrentChannelList--;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0489)-3 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + (*LpTxCurrentChannelList);
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* Get the pointer to the next data to be transmitted */
  LpNextTxData = LpCurrentCommData->pNextTxData;
  /* Get the index of job list for the current job from the job queue */
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber
                                   + SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
  #else
  LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
  #endif
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the respective job list index  */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* Get the index of the job */
  /* START Msg(2:2814)-6 */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */

  /* START Msg(2:2814)-6 */
  /* Update RAM with next channel, if channel properties are same */
  if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers) &&
            (SPI_TRUE == LpJobConfig->blIsChannelPropSame) &&
                (SPI_ZERO < LpCurrentCommData->ddNoOfTxChannels)
                        #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
                        && (SPI_FALSE == LpCurrentCommData->blTxEDL)
                        #endif
     )
  /* END Msg(2:2814)-6 */
  {
    /* MISRA Violation: START Msg(4:0489)-3 */
    /* Increment the source pointer */
    LpTxCurrentChannelList++;
    /* END Msg (4:0489)-3 */
    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    /* MISRA Violation: START Msg(4:0489)-3 */
    (LpCurrentCommData->pCurrentTxChannelList)++;
    /* END Msg (4:0489)-3 */
    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* Get the pointer to the post-build structure of the channel */
    LpPBChannelConfig = Spi_GpFirstChannel +
                                         (*LpTxCurrentChannelList);
    /* END Msg (4:0488)-4 */
    /* START Msg(2:2814)-6 */
    LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
    /* END Msg(2:2814)-6 */
    /* Update the RAM for next channel */
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    /* Check if the buffer type is internal buffer */
    if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      || ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
      && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
      #endif
         )
    #endif
    {
      #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
      /* START Msg(2:2814)-6 */
      LpNextTxData = Spi_GpConfigPtr->pChannelIBWrite;
      /* END Msg(2:2814)-6 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* START Msg(2:2824)-2 */
      LpNextTxData = LpNextTxData + LddBufferIndex;
      /* END Msg(2:2824)-2 */
      /* END Msg (4:0488)-4 */
      LpCurrentCommData->ddNoOfTxBuffers =
                                LpPBChannelConfig->ddNoOfBuffers;
      #endif
    }
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    else if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
    #endif
    {
      #if (SPI_EB_CONFIGURED == STD_ON)
      LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;
      LpCurrentCommData->ddNoOfTxBuffers =
                            Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
      #endif
    }
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    else
    {
      /* No action required */
    }
    #endif
    /* MISRA Violation: START Msg(4:2962)-10 */
    if (NULL_PTR != LpNextTxData)
    /* END Msg (4:2962)-10 */
    {
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpNextTxData--;
      /* END Msg (4:0489)-3 */
    }
    else
    {
      /* No action required */
    }
    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    /* Save the pointer to next data to be transmitted */
    LpCurrentCommData->pNextTxData = LpNextTxData;
    (LpCurrentCommData->ddNoOfTxChannels)--;

    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
  }
  else
  {
    /* No action required */
  }
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  if (SPI_TRUE == LpCurrentCommData->blTxEDL)
  {
    /* Reset the flag for indicating EDL */
    LpCurrentCommData->blTxEDL = SPI_FALSE;
    Spi_ProcessExtendedData(LddHWUnit, LpJobConfig, LpPBChannelConfig,
                                       LpCurrentCommData, LpNextTxData );
  }
  else
  #endif
  {
    /* Check if all buffers in the channel are transmitted */
    if (SPI_ZERO < LpCurrentCommData->ddNoOfTxBuffers)
    {
      if (NULL_PTR == LpNextTxData)
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* Get the configured default value */
        LddData = LpPBChannelConfig->ddDefaultData;
        /* END Msg (4:0489) -3 */
      }
      else
      {
        /* MISRA Violation: START Msg(4:0489)-3  */
        /* Get the value from the source pointer */
        LpNextTxData++;
        /* END Msg (4:0489)-3 */
        LddData = *LpNextTxData;
        LpCurrentCommData->pNextTxData = LpNextTxData;
      }

      /* MISRA Violation: START Msg(4:0489)-3 */
      /* Decrement the number of buffers to be transmitted */
      (LpCurrentCommData->ddNoOfTxBuffers)--;
      /* END Msg (4:0489)-3 */

      #if (SPI_CSIH_CONFIGURED == STD_ON)
      #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
      Spi_ProcessCsihData(LddHWUnit, LpJobConfig, LpPBChannelConfig,
                                             LpCurrentCommData, LddData );
      #else
      Spi_ProcessCsihData(LddHWUnit, LpJobConfig, LpCurrentCommData,
                                                                LddData );
      #endif
      #endif
    }
    else
    {
      /* No action required */
    }
  }
}
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif /*
          * End of (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
          *      (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
          *                          (SPI_HW_PRIORITY_ENABLED == STD_ON))
          */

/*******************************************************************************
** Function Name      : Spi_ProcessCsihData
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the transmit ISR for
**                      processing Csih data
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit,
**                      P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST)
**                                                                  LpJobConfig,
**                      P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                          SPI_CONFIG_CONST) LpPBChannelConfig,
**                      P2VAR(Spi_CurrentCommData, AUTOMATIC,
**                                           SPI_CONFIG_DATA) LpCurrentCommData,
**                      Spi_DataType LddData
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpConfigPtr, Spi_GaaHighPriorityCommRequest
**
** Function Invoked   : None
**
** Registers Used     : CSIHnTX0H, CSIHnTX0W
*******************************************************************************/
/* Implements SPI_ESDD_UD_071 */
/* Implements SPI_ESDD_UD_148 */
 #if (SPI_CSIH_CONFIGURED == STD_ON)
 #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                   (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI_ESDD_UD_133 */
/* START Msg(4:3673)-13  */
/* START Msg(2:3227)-1 */
#if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
FUNC(void, SPI_FAST_CODE)Spi_ProcessCsihData(Spi_HWUnitType LddHWUnit,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_DataType LddData)
#else
FUNC(void, SPI_FAST_CODE)Spi_ProcessCsihData(Spi_HWUnitType LddHWUnit,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_DataType LddData)
#endif
/* END Msg(2:3227)-1 */
/* END Msg(4:3673)-13 */
{
  /* MISRA Violation: START Msg(4:0759)-1  */
  Spi_DataAccess LunDataAccess1;
  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  Spi_DataAccess LunDataAccess2;
  /* END Msg(4:0759)-1 */
  uint32 LulShiftData;
  #endif
  #if ((SPI_HW_PRIORITY_ENABLED == STD_ON) && \
          ((SPI_8BIT_DATA_WIDTH == STD_ON) || (SPI_16BIT_DATA_WIDTH == STD_ON)))
   Spi_HWUnitType LddHWUnitNumber;
  #endif

  #if ((SPI_HW_PRIORITY_ENABLED == STD_ON) && \
          ((SPI_8BIT_DATA_WIDTH == STD_ON) || (SPI_16BIT_DATA_WIDTH == STD_ON)))
  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */
  #endif

  #if (SPI_8BIT_DATA_WIDTH == STD_ON) || \
                                     (SPI_16BIT_DATA_WIDTH == STD_ON)
  /* START Msg(2:2814)-6 */
  /* Check if the buffer is last buffer of the channel */
  if (SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers)
  /* END Msg(2:2814)-6 */
  {
    /* Check if it is last channel in the job */
    if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxChannels)
        #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        && (SPI_FALSE ==  Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
        #endif
       )
    {
      /*
      * Data width is maximum 16-bit. Hence, load Tx data portion
      * of the local variable with the data to be transmitted
      */
      LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;
      /* Set chip select in the local union variable */
      /* START Msg(2:2814)-6 */
      LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
      /* END Msg(2:2814)-6 */
      /* Since buffer is last buffer of the job set EOJ */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;
      /* START Msg(2:2814)-6 */
      /* Load the value of the local union variable to TX0W
       * register
       */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                                 LunDataAccess1.ulRegData)

      /* END Msg(2:2814)-6 */
    }
    else
    {
      /* Load the value of the local union variable to TX0H
       * register
       */
       SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0H,
                                                          (uint16)LddData)
       SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
       &(Csih_BaseAddress[LddHWUnit]->TX0H),(uint16)LddData,
                               SPI_CTLREG_16_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
    }
  }
  else
  {
    /* Load the value of the local union variable to TX0H
    * register
    */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0H, (uint16)LddData)
    /* START Msg(2:3892)-8 */
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->TX0H), (uint16)LddData,
                            SPI_CTLREG_16_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
    /* END Msg(2:3892)-8 */
  }
  #else
  /* START Msg(2:2814)-6 */
  /* Take a local union variable to construct the value for TX0W
   * register
   */
  LunDataAccess1.ulRegData = SPI_ZERO;
  if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
  /* END Msg(2:2814)-6 */
               (SPI_TRUE != LpPBChannelConfig->blDirection) &&
               (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
               (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
  {
    LulShiftData = (uint32) LddData;
    LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                            (LpPBChannelConfig->ucDLSSetting)));
    LunDataAccess2.ulRegData = LulShiftData;
    LunDataAccess1.Tst_ByteAccess.usRegData1 =
    LunDataAccess2.usRegData5[SPI_ZERO] >> (SPI_SIXTEEN -
                                             (LpPBChannelConfig->ucDLSSetting));
    LunDataAccess2.usRegData5[SPI_ZERO] =
                                     LunDataAccess1.Tst_ByteAccess.usRegData1;
  }
  else
  {
    /* Data width is maximum 32-bit. Tx data needs to be split to
    * LS Byte and MS Byte. Hence, load the Tx data to local variable
    */
    LunDataAccess2.ulRegData = LddData;
  }

  if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
  {
    /* START Msg(2:2814)-6 */
    /* Check if the buffer is last buffer of the channel */
    if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers) &&
                (SPI_ZERO == LpCurrentCommData->ddNoOfTxChannels))
    {
      /* Set chip select in the local union variable */
      LunDataAccess2.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
      /* Since buffer is last buffer of the job set EOJ */
      LunDataAccess2.Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;

      /* Load the value of the local union to TX0W register */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                                     LunDataAccess2.ulRegData)
    }
    else
    {
      /* Data width is maximum 16-bit. Hence, load LSB portion of the
      * local variable with the 16-bit data to be transmitted
      */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0H,
                                       LunDataAccess2.usRegData5[SPI_ZERO])
      /* START Msg(2:3892)-8 */
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->TX0H), LunDataAccess2.usRegData5[SPI_ZERO],
      SPI_CTLREG_16_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
      /* END Msg(2:3892)-8 */
    }
    /* END Msg(2:2814)-6 */
  }
  else
  {
    if (SPI_TRUE == LpPBChannelConfig->blDirection)
    {
      /* Load Tx data portion of the local variable with LSB first */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                          LunDataAccess2.usRegData5[SPI_ZERO];
    }
    else
    {
      /* Load Tx data portion of the local variable with MSB first */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                          LunDataAccess2.usRegData5[SPI_ONE];
    }
    /* START Msg(2:2814)-6 */
    /* Set chip select in the local union variable */
    LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
    /* END Msg(2:2814)-6 */

    /* Set the EDL bit in the local union variable */
    LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EDL;

    /* START Msg(2:2814)-6 */
    /* Set the flag for indicating EDL */
    LpCurrentCommData->blTxEDL = SPI_TRUE;
    /* END Msg(2:2814)-6 */

    /* Load the value of the local union variable to TX0W register */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                            LunDataAccess1.ulRegData)

  }
  #endif
}
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif
#endif

/*******************************************************************************
** Function Name      : Spi_ProcessExtendedData
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in SPI_DIRECT_ACCESS_MODE to
**                      process the data grater than 16-bit
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST)
**                                                                  LpJobConfig,
**                      P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                          SPI_CONFIG_CONST) LpPBChannelConfig,
**                      P2VAR(Spi_CurrentCommData, AUTOMATIC,
**                                           SPI_CONFIG_DATA) LpCurrentCommData,
**                      P2CONST(Spi_DataType, AUTOMATIC,
**                                                 SPI_CONFIG_DATA) LpNextTxData
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : None
**
** Registers Used     : CSIHnTX0W
*******************************************************************************/
/* Implements SPI_ESDD_UD_072 */
/* Implements SPI_ESDD_UD_150 */
#if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                   (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"

/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE)Spi_ProcessExtendedData(Spi_HWUnitType LddHWUnit,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2CONST(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData )
{
  /* END Msg(2:3227)-1 */

  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  Spi_DataAccess LunDataAccess2;
  /* END Msg(4:0759)-1 */

  Spi_DataType LddData;

  /* MISRA Violation: START Msg(4:2962)-10 */
  if (NULL_PTR == LpNextTxData)
  /* END Msg (4:2962)-10 */
  {
  /* START Msg(2:2814)-6 */
    LddData = LpPBChannelConfig->ddDefaultData;
  /* END Msg(2:2814)-6 */
  }
  else
  {
    LddData = *LpNextTxData;
  }

  /* Take a local union variable to construct the value for TX0W
   * register
   */
  LunDataAccess1.ulRegData = SPI_ZERO;
  /* Data width is maximum 32-bit. Tx data needs to be split to
   * LS Byte and MS Byte. Hence, load the Tx data to local variable
   */
  LunDataAccess2.ulRegData = LddData;

  /* Check if the configured data direction is LSB first */
  if (SPI_TRUE == LpPBChannelConfig->blDirection)
  {
    /* Load Tx data portion of the local variable with LSB first */
    LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                   LunDataAccess2.usRegData5[SPI_ONE];
  }
  else
  {
    /* Load Tx data portion of the local variable with MSB first */
    LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                  LunDataAccess2.usRegData5[SPI_ZERO];
  }

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* START Msg(2:2814)-6 */
  /* Set chip select in the local union variable */
  LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
  /* END Msg(2:2814)-6 */
    /* Check if the buffer is last buffer of the Job */
  /* START Msg(2:2814)-6 */
  if ((SPI_ZERO == LpCurrentCommData->ddNoOfTxBuffers) &&
  /* END Msg(2:2814)-6 */
                (SPI_ZERO == LpCurrentCommData->ddNoOfTxChannels))
  {
    /* Since buffer is last buffer of the job set EOJ */
    LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;
  }
  else
  {
    /* No action required */
  }
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Load the value of the local union variable to TX0W register */
  /* START Msg(2:2814)-6 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                                   LunDataAccess1.ulRegData)

  /* END Msg(2:2814)-6 */
  #endif

 }
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif
#endif

/*******************************************************************************
** Function Name      : Spi_ProcessFifoData
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIC ISR for processing
**                      communication status interrupt request in Fifo mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GddAsyncMode, Spi_GpFirstJob,
**                      Spi_GaaChannelEBData, Spi_GpFirstChannel,
**                      Spi_GaaJobResult, Spi_GaaSeqResult, Spi_GaaSeqQueue,
**                      Spi_GaaJobQueue, Spi_GpFirstJobList, Spi_GddQueueIndex,
**                      Spi_GpFirstSeq
**
** Function Invoked   : Spi_ProcessSequence, Spi_RxDmaConfig, Spi_FifoReadData,
**                      Spi_ProcessChannelInFifoMod
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      CSIHnRX0W, CSIHnRX0H, ICRn, IMRn, DCENn, DCSTCn, DCSTn,
**                      DDAn, DTCTn, DTCn, DTFRn, DTFRRQCn, DCSTSn, DTFRRQn,
**                      DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_068 */
/* Implements SPI_ESDD_UD_145 */
#if (SPI_FIFO_MODE == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements AR_PN0063_FR_0073, AR_PN0063_FR_0075, AR_PN0063_FR_0079 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE)Spi_ProcessFifoData(Spi_HWUnitType LddHWUnit,
                          uint8 LucHWMemoryMode)
/* END Msg (2:3227)-1 */
{
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentRxChannelList;
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  Spi_JobType LddJobIndex;
  Spi_NumberOfDataType LddBufferIndex;
  Spi_NumberOfDataType LddNoOfBuffers;
  Spi_ChannelType LddNoOfChannels;
  uint8 LucCxCtl0;

  /* START Msg(2:2824)-2 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  LpJobList = Spi_GpFirstJobList +
                            Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
  /* END Msg Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */

  /* Get the index of the first job linked to this sequence */
  /* START Msg(2:2814)-6 */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */
  /* START Msg(2:2824)-2 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg (4:0488)-4 */
  /* END Msg(2:2824)-2 */
  /* START Msg(2:3892)-8 */
  if (SPI_FIFO_BUFFER_UNINIT ==
                               (uint8)Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX])
  /* END Msg(2:3892)-8 */
  {
    /* START Msg(2:2814)-6 */
    Spi_GstFifoCurrentCommData.pCurrentRxChannelList =
                                                      LpJobConfig->pChannelList;
    /* END Msg(2:2814)-6 */
    Spi_GstFifoCurrentCommData.ddNoOfRxChannels = LpJobConfig->ddNoOfChannels;
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    Spi_GstFifoCurrentCommData.ddJobIndex = LddJobIndex;
    #endif
  }
  else
  {
    /* No Action Required */
  }
  Spi_GstFifoCurrentCommData.usBufferCount = SPI_ZERO;
  do
  {
    LpCurrentRxChannelList = Spi_GstFifoCurrentCommData.pCurrentRxChannelList;

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the post-build structure of the channel */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentRxChannelList);
    /* END Msg (2:2824)-2 */
    /* END Msg (4:0488)-4 */

    /* START Msg(2:3892)-8 */
    if (SPI_FIFO_BUFFER_FULL !=
                               (uint8)Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX])
    /* END Msg(2:3892)-8 */
    {
      LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
      /* END Msg (2:2814)-6 */

      #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
      /* Check if the buffer type is internal buffer */
      if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #endif
      {
        #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
        /* START Msg(2:2814)-6 */
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Update the RAM variable for Rx pointer with channel IB index */
        LpCurrentRxData = (Spi_GpConfigPtr->pChannelIBRead) + LddBufferIndex;
        /* END Msg (2:2814)-6 */
        /* END Msg (4:0488)-4 */

        /* Update the RAM variable for number of buffers of the channel */
        LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
        #endif
      }

      #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
      else
      #endif
      {
        #if (SPI_EB_CONFIGURED == STD_ON)
        /* Update the RAM variable for Rx pointer */
        LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;

        /* Update the local counter with number of buffers of the channel */
        LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
        #endif
      }
    }
    else
    {
      /* Load data from the RAM */
      LpCurrentRxData = Spi_GstFifoCurrentCommData.pCurrentRxData;
      LddNoOfBuffers = Spi_GstFifoCurrentCommData.ddNoOfRxBuffers;
    }

    /* If the selected asynchronous mode is DMA mode */
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    /* MISRA Violation: START Msg(4:2962)-10 */
    if ((SPI_INTERRUPT_MODE == Spi_GddAsyncMode) &&
                (SPI_INVALID_DMAUNIT == LpJobConfig->ucRxDmaDeviceIndex))
    /* END Msg(4:2962)-10 */
    #endif
    {
      Spi_FifoReadData(LpPBChannelConfig, LpCurrentRxData, LddNoOfBuffers,
                                                                LddHWUnit);
    }
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    else
    {

      /* START Msg(2:3892)-8 */
      /* Check the number of buffers to be transmitted */
      if (SPI_FIFO_SIZE < LddNoOfBuffers)
      {
        /* Set the flag as the number of buffers are more than Fifo size */
        Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_FULL;
        /* Save the current details in RAM */
        Spi_GstFifoCurrentCommData.pCurrentRxData = LpCurrentRxData;
        Spi_GstFifoCurrentCommData.ddNoOfRxBuffers = LddNoOfBuffers;
        /* Update the number of buffers to Max size */
        LddNoOfBuffers = SPI_FIFO_SIZE;
        /* END Msg(2:3892)-8 */
      }
      else
      {
        /* START Msg(2:3892)-8 */
        Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_EMPTY;
        /* END Msg(2:3892)-8 */
      }

      Spi_GstFifoCurrentCommData.ucDmaDeviceIndex =
                                                LpJobConfig->ucRxDmaDeviceIndex;
      Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;

      /* MISRA Violation: START Msg(4:2962)-10 */
      Spi_RxDmaConfig(LpJobConfig, LpCurrentRxData, LddNoOfBuffers);
      /* END Msg(4:2962)-10 */
    }
    #endif
    /* If the selected asynchronous mode is DMA mode */
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    /* MISRA Violation: START Msg(4:2962)-11 */
    if (SPI_INVALID_DMAUNIT == LpJobConfig->ucRxDmaDeviceIndex)
    /* END Msg(4:2962)-11 */
    #endif
    {
      /* START Msg(2:3892)-8 */
      if ((SPI_FIFO_BUFFER_EMPTY ==
                           (uint8)Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX]) &&
                       (SPI_ZERO < Spi_GstFifoCurrentCommData.ddNoOfRxChannels))
      /* END Msg(2:3892)-8 */
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* START Msg(2:2824)-2 */
        Spi_GstFifoCurrentCommData.pCurrentRxChannelList++;
        /* END Msg (4:0489)-3 */
        /* END Msg (2:2824)-2 */
        /* Decrement the counter for number of channels */
        Spi_GstFifoCurrentCommData.ddNoOfRxChannels--;

        /* START Msg(2:3892)-8 */
        if (SPI_FIFO_SIZE <= Spi_GstFifoCurrentCommData.usBufferCount)
        /* END Msg(2:3892)-8 */
        {
          /* Break the loop */
          LddNoOfChannels = SPI_ZERO;
        }
        else
        {
          /* Get the remaining number of channels */
          LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfRxChannels;
        }
      }
      else
      {
        /* Break the loop */
        LddNoOfChannels = SPI_ZERO;
        Spi_GstFifoCurrentCommData.usBufferCount = SPI_ZERO;
      }
    }
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    else
    {
      /* Break the loop in case of DMA mode*/
      LddNoOfChannels = SPI_ZERO;
    }
    #endif
  }while (SPI_ZERO < LddNoOfChannels);
  /* If the selected asynchronous mode is DMA mode */
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  if ((SPI_INTERRUPT_MODE == Spi_GddAsyncMode) &&
                (SPI_INVALID_DMAUNIT == LpJobConfig->ucRxDmaDeviceIndex))
  #endif
  {
    /* START Msg(2:3892)-8 */
    if ((SPI_FIFO_BUFFER_EMPTY ==
                              (uint8)Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX])
                && (SPI_FIFO_SIZE > Spi_GstFifoCurrentCommData.usBufferCount ))
     /* END Msg(2:3892)-8 */
    {
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      /* MISRA Violation: START Msg(4:0488)-4 */
      LpJobList = Spi_GpFirstJobList +
                   Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
      /* END Msg (4:0488)-4 */

      /* Get the index of the first job linked to this sequence */
      LddJobIndex = LpJobList->ddJobIndex;

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the job structure */
      LpJobConfig = Spi_GpFirstJob + LddJobIndex;
      /* END Msg (4:0488)-4 */

      /* Check if CSIHnCSRI bit is Set and reset the PWR Bit */
      if (((LpJobConfig->ulMainCtl1Value & SPI_CSRI_FLAG_MASK) ==
                           SPI_CSRI_FLAG_MASK) && (Spi_GblCSRIMask == SPI_TRUE))
      {
        /* MISRA Violation: START Msg(4:0402)-12 */
        /* START Msg(2:3892)-8 */
        /* Reset the PWR bit */
        LucCxCtl0 = (Csih_BaseAddress[LddHWUnit]->CTL0.UINT8 & SPI_RESET_PWR);
        SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                                   LucCxCtl0)
        SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
        &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), LucCxCtl0,
                                  SPI_CTLREG_8_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
        /* END Msg(2:3892)-8 */
        /* END Msg(4:0402)- 13 */
        Spi_GblCSRIMask = SPI_FALSE;
      }
      else
      {
        /* No Action Required */
      }
      #endif
      /* All channels are transmitted. Hence the job is transmitted */
      Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
    }
    else
    {
      /* Reset the buffer count as the Fifo is full */
      Spi_GstFifoCurrentCommData.usBufferCount = SPI_ZERO;
      /* Process the remaining data */
      Spi_ProcessChannelInFifoMod(LddHWUnit, LucHWMemoryMode);
    }
  }
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  else
  #endif
  {
    /* No action required */
  }
}
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_ProcessDualBufferData
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked in the TIC ISR for processing
**                      communication status interrupt request in Dual buffer
**                      mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit
**                      uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GddAsyncMode, Spi_GpFirstJob,
**                      Spi_GaaChannelEBData, Spi_GpFirstChannel,
**                      Spi_GaaJobResult, Spi_GaaSeqResult, Spi_GaaSeqQueue,
**                      Spi_GaaJobQueue, Spi_GpFirstJobList, Spi_GddQueueIndex,
**                      Spi_GpFirstSeq
**
** Function Invoked   : Spi_ProcessSequence
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_069 */
/* Implements SPI_ESDD_UD_146 */
#if (SPI_DUAL_BUFFER_MODE == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI118, SPI071, SPI054 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE)Spi_ProcessDualBufferData(Spi_HWUnitType LddHWUnit,
                          uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobListTmptr;
  P2VAR(Spi_DualBufferCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                                LpDualBufferCurrentCommData;
  Spi_JobType LddJobIndex;
  Spi_NumberOfDataType LddBufferIndex;
  Spi_NumberOfDataType LddNoOfBuffers;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  Spi_JobType LddNoOfJobs;
  Spi_SequenceType LddSeqIndex;
  Spi_HWUnitType LddHWUnitNumber;

  /* START Msg(2:2814)-6 */
  LpDualBufferCurrentCommData = &Spi_GstDualBufferCurrentCommData
                     [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */
  /* Get the index of the sequence */
  LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];

  /* START Msg(2:2824)-2 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg (4:0488)-4 */
  /* END Msg(2:2824)-2 */
  /* Get the buffer index value */
  LddBufferIndex = *(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx);

  /* MISRA Violation: START Msg(4:0489)-3 */
  /* Increment the notify index value */
  (LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
  /* END Msg (4:0489)-3 */
  /* Get the index of the job and sequence */
  LddJobIndex =
       (Spi_JobType)(*(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx));

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Check if notification is configured */
  /* START Msg(2:2824)-2 */
  if (NULL_PTR != ((Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification))
  /* END Msg (4:0488)-4 */
  {
    /* END Msg(2:2824)-2 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    (Spi_GpFirstJob + LddJobIndex)->pSpiJobNotification();
    /* END Msg (4:0488)-4 */
  }
  else
  {
    /* No action required */
  }
  /* START Msg(2:2814)-6 */
  if ((LpDualBufferCurrentCommData->ddNoOfBuffersTxtd) <
                                                     LpSeqConfig->ddNoOfBuffers)
  {
    /* END Msg(2:2814)-6 */
    /* MISRA Violation: START Msg(4:0489)-3 */
    /* Increment the notify index value */
    (LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx)++;
    /* END Msg (4:0489)-3 */
    /* Get the number of buffers configured for the requested channel */
    LddNoOfBuffers = (*(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx)
                                                         - LddBufferIndex);

    LpDualBufferCurrentCommData->ddNoOfBuffersTxtd =
                LpDualBufferCurrentCommData->ddNoOfBuffersTxtd + LddNoOfBuffers;

    /*
     * Take a local union variable to construct the value for MCTL2
     * register and load the local union variable with SOP value
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 = LddBufferIndex;

    /* Load the local union variable with number of data */
    LunDataAccess1.Tst_ByteAccess.ucRegData2 = (uint8)LddNoOfBuffers;

    /* Set BTST bit */
    LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_BTST;

    /* START Msg(2:2814)-6 */
    /* Load the MCTL2 register to start the communication */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL2,
                                             LunDataAccess1.ulRegData)
    /* END Msg(2:2814)-6 */
  }
  else
  {
    /*
     * All channels are transmitted and received. Hence the sequence is
     * completed
     */
    /* Update sequence result as OK */
    Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_OK;

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Load Job List pointer to temporary variable */
    LpJobListTmptr = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */

    /* Load total number of Jobs in current sequence to local variable */
    LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

    do
    {
      /* START Msg(2:2814)-6 */
      /* Update the job result variable */
      Spi_GaaJobResult[LpJobListTmptr->ddJobIndex] = SPI_JOB_OK;
      /* END Msg(2:2814)-6 */
      /* MISRA Violation: START Msg(4:0489)-3 */
      /* Increment local pointer to the job list */
      LpJobListTmptr++;
      /* END Msg (4:0489)-3 */
      LddNoOfJobs--;
    }
    while (SPI_ZERO < LddNoOfJobs);
    /* All channels are transmitted. Hence the job is transmitted */
    Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
  }
}
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name       : Spi_SeqJobChannelInit
**
** Service ID          : Not Applicable
**
** Description         : This service performs initialization of the SPI Driver
**                       Sequence results, job results and channel data
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
** Return parameter    : None
**
** Preconditions       : None
**
** Global Variable     : Spi_GaaChannelEBData, Spi_GpConfigPtr,
**                       Spi_GpFirstChannel, Spi_GpFirstJob, Spi_GpFirstSeq,
**                       Spi_GaaJobResult, Spi_GaaSeqResult, Spi_GddAsyncMode,
**                       Spi_GaaSeqCancel, Spi_GpFirstJobList
**
** Function Invoked    : Spi_InternalWriteIB, Spi_HWInit
**
** Registers Used      : CSIHnCFGx, CSIHnMRWP0, CSIHnTX0W, CSIHnMCTL0,
**                       CSIHnCTL0, CSIHnCTL1, CSIHnMCTL1, CSIHnMCTL2, DCSTn,
**                       DCSTSn, DCENn, DCSTCn, DTCTn, DDAn, DSAn, DTFRn, IMRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_054 */
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"

FUNC(void, SPI_PRIVATE_CODE)Spi_SeqJobChannelInit(void)
{
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                              LpPBChannelConfig;
  #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) && \
                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
  /* Declare a local pointer to point to the Sequence Config Data */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Declare a local pointer to point to the Configured chipselect of job */
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;
  uint8 LucCSCount;
  #endif /*END of SPI_CSIH_CONFIGURED */
  Spi_JobType LddJobIndex;
  #endif /*END of SPI_HW_PRIORITY_ENABLED */
  #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) && \
                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))

  Spi_HWUnitType LddHWUnit;
  #endif
  #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) && \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  #endif

  #if (SPI_EB_CONFIGURED == STD_ON)
  Spi_NumberOfDataType LddNoOfBuffers;
  #endif
  #if (SPI_CANCEL_API == STD_ON)
  uint8 LucVar;
  #endif
  Spi_JobType LddNumJobs;
  Spi_SequenceType LddNumSeq;
  Spi_ChannelType LddNumChannel;

  LddNumJobs = SPI_ZERO;
  /* Implements SPI_ESDD_UD_136 */
  /* MISRA Violation: START Msg(4:2877)-11 */
  while (SPI_MAX_JOB > LddNumJobs)
  /* END Msg(4:2877)-11 */
  {
    /* Update contents of Job result pointer */
    Spi_GaaJobResult[LddNumJobs] = SPI_JOB_OK;
    /* MISRA Violation: START Msg(4:2984)-9 */
    /* Increment number of jobs configured */
    LddNumJobs++;
    /* END Msg(4:2984)-9 */
  }

  /* Load the number of sequence configured as zero */
  LddNumSeq = SPI_ZERO ;
  /* Implements SPI_ESDD_UD_137 */
  /* MISRA Violation: START Msg(4:2877)-11 */
  while (SPI_MAX_SEQUENCE > LddNumSeq)
  /* END Msg(4:2877)-11 */
  {
    /* Update contents of Sequence result pointer */
    Spi_GaaSeqResult[LddNumSeq] = SPI_SEQ_OK;

    #if ((SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) && \
                                   (SPI_HW_PRIORITY_ENABLED == STD_ON))
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpSeqConfig = Spi_GpFirstSeq + LddNumSeq;
    /* END Msg(4:0488)-4 */
    if (SPI_TRUE == LpSeqConfig->blIsHighPriority)
    {
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the job list */
      LpJobList = Spi_GpFirstJobList + (LpSeqConfig->ddJobListIndex);
      /* END Msg(4:0488)-4 */

      /* Get the index of the job and sequence */
      LddJobIndex = LpJobList->ddJobIndex;

      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer of the first job linked to this sequence */
      LpJobConfig = Spi_GpFirstJob + LddJobIndex;
      /* END Msg(4:0488)-4 */

      LddHWUnit = LpJobConfig->ddHWUnitIndex;
      #if (SPI_CSIH_CONFIGURED == STD_ON)
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the value for multiple chip selects configured */
      LpChipSelect =
                  (Spi_GpConfigPtr->pCSArray) + (LpJobConfig->ucCSArrayIndex);
      /* END Msg(4:0488)-4 */
      LucCSCount = LpJobConfig->ucNoOfCS;
      do
      {
        /* Initialize CSIH configuration register */
        if(SPI_ZERO == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG0), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        else if(SPI_ONE == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG1,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG1), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        else if(SPI_TWO == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG2,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG2), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        else if(SPI_THREE == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG3,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG3), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        else if(SPI_FOUR == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG4,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG4), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        else if(SPI_FIVE == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG5,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG5), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        else if(SPI_SIX == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG6,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG6), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        /* MISRA Violation: START Msg(4:0715)-14 */
        else if(SPI_SEVEN == *LpChipSelect)
        {
          SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG7,
                                      LpJobConfig->ulConfigRegValue)
          SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_INIT(
          &(Csih_BaseAddress[LddHWUnit]->CFG7), LpJobConfig->ulConfigRegValue,
                                                 SPI_CSIHCFG_MASK, SPI_INIT_SID)
        }
        else
        {
          /* To avoid Misra */
        }
        /* END Msg(4:0715)-14 */
        LucCSCount--;
        /* MISRA Violation: START Msg(4:0489)-3*/
        LpChipSelect++;
        /* END Msg(4:0489)-3*/
      }while (SPI_ZERO < LucCSCount);
      #endif /* (SPI_CSIH_CONFIGURED == STD_ON) */
    }
    else
    {
      /* No action required */
    }
    #endif /*
            * (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) && \
            *                       (SPI_HW_PRIORITY_ENABLED == STD_ON)
            */
    /* MISRA Violation: START Msg(4:2984)-9 */
    /* Increment number of sequences configured */
    LddNumSeq++;
    /* END Msg(4:2984)-9 */
  }
  /* Get the number of channels configured */
  LddNumChannel = SPI_ZERO;
  /* Get the pointer to the post-build structure of channel */
  LpPBChannelConfig = Spi_GpFirstChannel;
  /* Implements SPI_ESDD_UD_135 */
  while (SPI_MAX_CHANNEL > LddNumChannel)
  {
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    /* START Msg(2:2814)-6 */
    if (SPI_ONE == LpPBChannelConfig->ucChannelBufferType)
    /* END Msg(2:2814)-6 */
    #endif
    {
      #if (SPI_EB_CONFIGURED == STD_ON)
      /* Implements SPI_ESDD_UD_197 */
      LddNoOfBuffers = LpPBChannelConfig->ddBufferIndex;

      /* Length of external buffer in RAM area of EB */
      Spi_GaaChannelEBData[LddNoOfBuffers].ddEBLength =
                                            (LpPBChannelConfig->ddNoOfBuffers);

      /*
       * Copy the source pointer to RAM area allocated for the external
       * buffer attributes of the channel
       */
      Spi_GaaChannelEBData[LddNoOfBuffers].pSrcPtr = NULL_PTR;
      /*
       * Copy the destination pointer value to a local pointer
       * variable
       */
      Spi_GaaChannelEBData[LddNoOfBuffers].pDestPtr = NULL_PTR;

      #endif /* (SPI_EB_CONFIGURED == STD_ON) */
    }
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    else
    #endif /* (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO) */
    {
      #if (SPI_IB_CONFIGURED == STD_ON)
      Spi_InternalWriteIB(LddNumChannel, NULL_PTR, SPI_INIT_SID);
      #endif /* (SPI_IB_CONFIGURED == STD_ON) */
    }

    /* MISRA Violation: START Msg(4:0489)-3 */
    LpPBChannelConfig++;
    /* END Msg(4:0489)-3*/
    /* Increment the number of channels */
    LddNumChannel++;
  } /* End of while (SPI_MAX_CHANNEL > LddNumChannel) */
  #if (SPI_LEVEL_DELIVERED == SPI_TWO)
  /*Global variable for asynchronous mode is polling mode */
  Spi_GddAsyncMode = SPI_POLLING_MODE;
  #else
  /* Set default asynchronous transmit mode as interrupt mode */
  Spi_GddAsyncMode = SPI_INTERRUPT_MODE;
  #endif /* (SPI_LEVEL_DELIVERED == SPI_TWO) */

  #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                        (SPI_LEVEL_DELIVERED == SPI_TWO))
  Spi_HWInit();
  #endif

  #if (SPI_CANCEL_API == STD_ON)
  /* Initialize the counter as zero */
  LucVar = SPI_ZERO;
  /* Implements SPI_ESDD_UD_162 */
  /* MISRA Violation: START Msg(4:2877)-11 */
  while ((uint8)SPI_MAX_CANCEL_BYTES > LucVar)
  /* END Msg  (4:2877)-11 */
  {
    /* Initialize the cancel status byte as zero */
    Spi_GaaSeqCancel[LucVar] = SPI_ZERO;
    /* MISRA Violation: START Msg(4:2984)-9 */
    /* Increment number of cancel status bytes */
    LucVar++;
    /* END Msg  (4:2984)-9 */
  }
  #endif /* (SPI_CANCEL_API == STD_ON) */

}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*******************************************************************************
** Function Name       : Spi_AsyncInDirAccOrFifoMod
**
** Service ID          : Not Applicable
**
** Description         : This service for transmitting data asynchronously in
**                       Direct access and FIFO mode
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
** Return parameter    : void
**
** Preconditions       : None
**
** Global Variable     : Spi_GpFirstSeq, Spi_GpFirstJob, Spi_GpConfigPtr,
**                       Spi_GpFirstJobList, Spi_GblQueueStatus,
**                       Spi_GddQueueIndex, Spi_GucHwUnitStatus,
**                       Spi_GaaHighPriorityCommRequestAtIdle,
**                       Spi_GaaHighPriorityCommActive,
**                       Spi_GaaHighPriorityCommRequest,
**                       Spi_GaaHighPrioritySequence
**
** Function invoked    : Spi_ProcessTransmission, Spi_HWCancel,
**                       SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used      : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0,
**                       CSIHnMCTL2, CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W,
**                       CSIHnBRSy, CSIHnCFGx, ICRn, IMRn, DCENn, DCSTCn, DCSTn,
**                       DDAn, DTCTn, DTCn, DTFRn, DTFRRQCn, DCSTSn, DTFRRQn,
**                       DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_173 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI055, EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE)Spi_AsyncInDirAccOrFifoMod
                                                     (Spi_SequenceType Sequence)
/* END Msg(2:3227)-1 */
{

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  Spi_HWUnitType LddHWUnit;
  Spi_HWUnitType LddHWUnitNumber;

  Spi_JobType LddJobListIndex;
  #endif
  Spi_JobType LddLowestQueueIndex;
  boolean LblInitiateTx;
  uint8 LucQueueIndex;
  uint8 LucHWMemoryMode;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(2:2824)-2 */
  /* END Msg(4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Get the job list index of the last job of the sequence */
  LddJobListIndex = LpSeqConfig->ddJobListIndex;
  /* END Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the job list */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg(4:0488)-4 */
  /* Get the pointer of the last job linked to this sequence */
  /* START Msg(2:2814)-6  */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  LpJobConfig = Spi_GpFirstJob + (LpJobList->ddJobIndex);
  /* END Msg(2:2824)-2 */
  /* END Msg(4:0488)-4 */
  /* END Msg(2:2814)-6  */
  /* START Msg(2:2814)-6  */
  LddHWUnit = LpJobConfig->ddHWUnitIndex;
  /* END Msg(2:2814)-6  */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* START Msg(2:2814)-6  */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6  */
  /* Get the configured memory mode for this HW Unit */
  LucHWMemoryMode = Spi_GpConfigPtr->aaHWMemoryMode[LddHWUnitNumber];
  #endif
  #endif

  /* MISRA Violation: START Msg(4:2995)-15 */
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
  /* END Msg(4:2995)-15 */
  {
    LddLowestQueueIndex = SPI_ZERO;
  }
  /* MISRA Violation: START Msg(4:2992)-16 */
  /* MISRA Violation: START Msg(4:2996)-6 */
  else if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
  /* END Msg(4:2992)-16 */
  /* END Msg(4:2996)-6 */
  {
    LddLowestQueueIndex = Spi_GpConfigPtr->ddDirectAccessQueueSize;
  }
  else
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    LddLowestQueueIndex =
                  Spi_GpConfigPtr->aaHighprioirtyJobQueueIndex[LddHWUnitNumber];
    #else
    LddLowestQueueIndex = SPI_ZERO;
    #endif
  }

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == LpSeqConfig->blIsHighPriority)
  #endif
  {
    LucQueueIndex = LucHWMemoryMode;
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    /* START Msg(2:3892)-8 */
    /* MISRA Violation: START Msg(4:2962)-10 */
    LucQueueIndex = (uint8)LddHWUnitNumber + SPI_MAX_CSIH_HW_INDEX + SPI_TWO;
    /* END Msg(4:2962)-10 */
    /* END Msg(2:3892)-8 */
  }
  #endif

  /* Implements SPI_ESDD_UD_096 */
  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  #endif

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if (SPI_FALSE == LpSeqConfig->blIsHighPriority)
  #endif
  {
    /* START Msg(2:3892)-8 */
    /* MISRA Violation: START Msg(4:2962)-10 */
    if ((SPI_QUEUE_EMPTY == (Spi_GblQueueStatus[LucQueueIndex])) ||
         ((SPI_QUEUE_FILLED == (Spi_GblQueueStatus[LucQueueIndex])) &&
            (Spi_GddQueueIndex[LucQueueIndex] == LddLowestQueueIndex)))
    /* END Msg (4:2962)-10 */
    {
      /* END Msg(2:3892)-8 */
      /* Proceed with the communication */
      LblInitiateTx = SPI_TRUE;
    }
    else
    {
      /* Do not Proceed with the communication */
      LblInitiateTx = SPI_FALSE;
    }

  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {

    if (SPI_ZERO == (Spi_GucHwUnitStatus &
                                ((Spi_HWUnitType)(SPI_ONE << LddHWUnitNumber))))
    {
      /* Updating the status of the hardware */
      Spi_GucHwUnitStatus = (Spi_GucHwUnitStatus |
                                ((Spi_HWUnitType)(SPI_ONE << LddHWUnitNumber)));

      Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber] = SPI_TRUE;
      Spi_GaaHighPriorityCommActive[LddHWUnitNumber] = SPI_TRUE;
      Spi_GaaHighPriorityCommRequest[LddHWUnitNumber] = SPI_TRUE;
      /* Proceed with the communication */
      LblInitiateTx = SPI_TRUE;
    }
    else
    {
      if ((SPI_FALSE == Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
         && (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber]))
      {
        Spi_GaaHighPriorityCommRequest[LddHWUnitNumber] = SPI_TRUE;
        Spi_GaaHighPrioritySequence[LddHWUnitNumber] = Sequence;
        Spi_HWCancel(LddHWUnit, SPI_ASYNCTRANSMIT_SID);
        Spi_GddQueueIndex[LucQueueIndex] = LddLowestQueueIndex;
      }
      else
      {
        /* No action required */
      }
      /* Do not Proceed with the communication */
      LblInitiateTx = SPI_FALSE;
    }
  }
  #endif /* (SPI_HW_PRIORITY_ENABLED == STD_ON) */
  /* Implements SPI_ESDD_UD_096 */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  #endif
  Spi_ProcessTransmission(Sequence, LblInitiateTx, LucQueueIndex,
                                    LucHWMemoryMode, LddLowestQueueIndex);
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name       : Spi_ProcessChannelInDirAccMod
**
** Service ID          : Not Applicable
**
** Description         : This function is to process remaining channels to be
**                       transmitted in Direct access mode
**
** Sync/Async          : Asynchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : void
**
** Preconditions       : Spi_Init should have been invoked.
**
** Global Variable     : Spi_GpFirstChannel, Spi_GpConfigPtr,
**                       Spi_GaaJobQueue, Spi_GddQueueIndex, Spi_GddDmaData
**                       Spi_GpFirstJobList,Spi_GpFirstJob, Spi_GstHWUnitInfo
**                       Spi_GaaChannelEBData, Spi_GstCurrentCommData
**                       Spi_GaaHighPriorityCommActive, Spi_GddAsyncMode
**
** Function invoked    : Spi_AsyncChannelRegSettings, Spi_TxDmaConfig,
**                       Spi_RxDmaConfig, SPI_ENTER_CRITICAL_SECTION,
**                       SPI_EXIT_CRITICAL_SECTION, Spi_GetTxRegValue
**
** Registers Used      : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0,
**                       CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                       ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                       DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_081 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON))|| \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0030, EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0061 */
/* Implements EAAR_PN0034_FR_0068 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannelInDirAccMod
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobIndex;

  Spi_JobType LddJobListIndex;

  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentTxChannelList;

  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  /* Declare a local pointer variable to hold Rx data */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;

  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;
  Spi_NumberOfDataType LddBufferIndex;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess;
  /* END Msg (4:0759)-1 */
  P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST) LpDataAccess;
  Spi_NumberOfDataType LddNoOfBuffers;

  Spi_DataType LddData;

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  /* START Msg(2:2814)-6 */
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
  }
  #endif

  LpCurrentTxChannelList = LpCurrentCommData->pCurrentTxChannelList;

  /* Get the pointer to the post-build structure of the channel */
  /* START Msg(2:2814)-6*/
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
  /* END Msg(2:2814)-6 */
  /* Implements SPI_ESDD_UD_102 */
  #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
  /* Check if the buffer type is internal buffer */
  if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      || ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
      && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
      #endif
      )
  {
     /* Implements SPI_ESDD_UD_152 */
    #if(SPI_INTERNAL_RW_BUFFERS == STD_ON)
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2814)-6*/
    /* Update the RAM variable for Tx pointer with channel IB index */
    LpNextTxData = Spi_GpConfigPtr->pChannelIBWrite;
    /* END Msg(2:2814)-6  */
    /* START Msg(2:2824)-2 */
    LpNextTxData = (LpNextTxData + LddBufferIndex);
    /* END Msg(2:2824)-2 */
    /* Update the RAM variable for Rx pointer with channel IB index */
    LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;
    /* START Msg(2:2824)-2 */
    LpCurrentRxData = (LpCurrentRxData + LddBufferIndex);
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */

    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
                       && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
    {
      /* MISRA Violation: START Msg(4:0488)-4 */
      LpCurrentRxData = (LpCurrentRxData + SPI_RX_BUFFER_START);
      /* END Msg (4:0488)-4 */
    }
    else
    {
      /* No action required */
    }
    #endif
    /* Update the RAM variable for number of buffers of the channel */
    LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
    #endif
  }
  else
  {
    #if (SPI_EB_CONFIGURED == STD_ON)
    /* Implements SPI_ESDD_UD_197 */
    /*
     * Update the RAM variable for Tx pointer with channel EB
     * source pointer
     */
    LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;

    /* Update the RAM variable for Rx pointer */
    LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;

    /* Update the local counter with number of buffers of the channel */
    LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
    #endif
  }
  #elif(SPI_INTERNAL_RW_BUFFERS == STD_ON)

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Update the RAM variable for Tx pointer with channel IB index */
  LpNextTxData = Spi_GpConfigPtr->pChannelIBWrite;
  LpNextTxData = (LpNextTxData + LddBufferIndex);
  /* Update the RAM variable for Rx pointer with channel IB index */
  LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;
  LpCurrentRxData = (LpCurrentRxData + LddBufferIndex);
  /* END Msg (4:0488)-4 */
  /*Start : SPI_UT_006*/
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  if((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
                   && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
  {
    /* End : SPI_UT_006 */
    LpCurrentRxData = (LpCurrentRxData + SPI_RX_BUFFER_START);
  }
  else
  {
    /* No action required */
  }
  #endif

  /* Update the RAM variable for number of buffers of the channel */
  LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;

  #else
   /*
   * Update the RAM variable for Tx pointer with channel EB
   * source pointer
   */
  #if (SPI_EB_CONFIGURED == STD_ON)
  LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;

  /* Update the RAM variable for Rx pointer */
  LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;

  /* Update the local counter with number of buffers of the channel */
  LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
  #endif

  #endif
  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif

  /* Implements SPI_ESDD_UD_199 */
  /* MISRA Violation: START Msg(4:2962)-10 */
  /* Save the pointer to data to be received */
  LpCurrentCommData->pCurrentRxData = LpCurrentRxData;
  /* Get the data to be transmitted */
  if (NULL_PTR == LpNextTxData)
  /* END Msg (4:2962)-10 */
  {
    /* Get the configured default value */
    LddData = LpPBChannelConfig->ddDefaultData;
  }
  else
  {
    /* Get the value from the source pointer */
    LddData = *LpNextTxData;
  }

  /* Save the pointer to next data to be transmitted */
  LpCurrentCommData->pNextTxData = LpNextTxData;

  /* MISRA Violation: START Msg(4:2962)-10 */
  /* Save and decrement the number of buffers */
  LpCurrentCommData->ddNoOfTxBuffers = LddNoOfBuffers;
  /* END Msg (4:2962)-10 */

  LpCurrentCommData->ddNoOfRxBuffers = LddNoOfBuffers;

  (LpCurrentCommData->ddNoOfTxBuffers)--;
  (LpCurrentCommData->ddNoOfRxBuffers)--;

  /* Check if critical section protection is required */
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

  /* Enable relevant interrupts */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

  #endif

  /* Get the index of job list for the current job from the job queue */
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber
                                   + SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
  #else
  LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
  #endif /* End of #if (SPI_HW_PRIORITY_ENABLED == STD_ON) */

  /* Get the pointer to the respective job list index  */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];
  /* Implements SPI_ESDD_UD_097 */
  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  /* call function for settings */
  /* START Msg(2:2814)-6 */
  if (((SPI_TRUE == Spi_GblInitiateJobTx) ||
                            (SPI_FALSE == LpJobConfig->blIsChannelPropSame))
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      && (SPI_FALSE == (Spi_GaaHighPriorityCommActive[LddHWUnitNumber]
      ^ Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber]))
      #endif /* End of #if (SPI_HW_PRIORITY_ENABLED == STD_ON)*/
      )
  /* END Msg(2:2814)-6 */
  {
    Spi_AsyncChannelRegSettings( LddHWUnit, LucHWMemoryMode);
  }
  else
  {
    /* No action required */
  }
  #endif

  /* MISRA Violation: START Msg(4:0489)-3 */
  (LpCurrentCommData->pCurrentTxChannelList)++;
  (LpCurrentCommData->pCurrentRxChannelList)++;
  /* END Msg (4:0489)-3 */

  /* Decrement the number of channels yet to be transmitted  */
  (LpCurrentCommData->ddNoOfTxChannels)--;
  (LpCurrentCommData->ddNoOfRxChannels)--;

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  if (SPI_TRUE != LpJobConfig->blHWUnitDmaMode)
  #endif
  {
    if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
    {
      /* Clear the pending interrupt */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                            (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                            (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                            (SPI_CLR_INT_REQ));

      /* Register dummy read-write  */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                            (SPI_CLR_INT_REQ));
      #endif
      /* SYNCP execution */
      EXECUTE_SYNCP();

      RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pTxImrAddress),
                                            (LpHWUnitInfo->ulTxImrMask));
      RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pRxImrAddress),
                                            (LpHWUnitInfo->ulRxImrMask));
      RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pErrorImrAddress),
                                            (LpHWUnitInfo->ulErrorImrMask));
    }
    else
    {
      /* No action required */
    }
  }
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  else
  {
    if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
    {
      /* MISRA Violation: START Msg(4:2962)-10 */
      /* If the selected asynchronous mode is DMA mode */
      Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;
      Spi_RxDmaConfig(LpJobConfig, LpCurrentCommData->pCurrentRxData,
                                   LddNoOfBuffers);
      /* END Msg (4:2962)-10 */
      Spi_TxDmaConfig(LpJobConfig, LpNextTxData, LddNoOfBuffers);
    }
    else
    {
      /* No action required */
    }
  }
  #endif
  /* Take a local union variable to construct the value for TX0W register */

  LpDataAccess = &LunDataAccess;

  /* START Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:2982)-2 */
  /* Take a local union variable to construct the value for TX0W register */
  LpDataAccess->ulRegData = SPI_ZERO;
  /* END Msg(4:2982)-2 */
  /* END Msg(2:2814)-6 */
  #if (SPI_8BIT_DATA_WIDTH == STD_ON)
  /*
   * Data width is maximum 8-bit. Hence, load Tx data portion of the local
   * variable with the 8-bit data to be transmitted
   */
  LpDataAccess->usRegData5[SPI_ZERO] = LddData;
  #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
  /* Data width is maximum 16-bit. Hence, load Tx data portion of the local
   * variable with the 16-bit data to be transmitted
   */
  LpDataAccess->Tst_ByteAccess.usRegData1 = LddData;
  #else

  Spi_GetTxRegValue(LpPBChannelConfig, LpDataAccess,
                                                    LpCurrentCommData, LddData);
  #endif

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* START Msg(2:2814)-6 */
  /* Set chip select in the local union variable */
  LpDataAccess->Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
  /* END Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:2962)-10 */
  /* Check if the buffer is last buffer of the channel */
  if ((SPI_ONE == LddNoOfBuffers) &&
      ((SPI_ZERO == (LpCurrentCommData->ddNoOfTxChannels))
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
        && (SPI_FALSE == Spi_GaaHighPriorityCommRequest[LddHWUnitNumber])
    #endif
    #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
        && (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    #endif
        ))
  {
    /* MISRA Violation: START Msg(4:2984)-9 */
    /* Since buffer is last buffer of the job set EOJ */
    LpDataAccess->Tst_ByteAccess.ucRegData3 =
                  (LpDataAccess->Tst_ByteAccess.ucRegData3 | SPI_SET_EOJ);
    /* END Msg (4:2984)-9 */
  }
  else
  {
      /* No action required */
  }
  #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */

  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  if (SPI_ONE < LddNoOfBuffers)
  #endif
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    /* START Msg(2:2814)-6 */
    /* Load the value of the local union variable to TX0W register */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                                    LpDataAccess->ulRegData)
    /* END Msg(2:2814)-6 */
    #endif
  }
  #if (SPI_DMA_MODE_ENABLE == STD_ON)
  else
  #endif
  {
    /* No action required */
  }/* End of (SPI_DMA_MODE_ENABLE == STD_ON) */
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name       : Spi_AsyncChannelRegSettings
**
** Service ID          : Not Applicable
**
** Description         : This service for setting the registers dynamically
**                       during Asynchronous transmission
**
** Sync/Async          : Asynchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : void
**
** Preconditions       : None
**
** Global Variable     : Spi_GpConfigPtr, Spi_GaaHighPriorityCommActive,
**                       Spi_GpFirstSeq, Spi_GaaJobResult, Spi_GddQueueIndex,
**                       Spi_GstCurrentCommData, Spi_GpFirstChannel,
**                       Spi_GaaJobQueue, Spi_GpFirstJobList, Spi_GaaSeqQueue,
**                       Spi_GblInitiateJobTx, Spi_GstHWUnitInfo, Spi_GpFirstJob
**
** Function invoked    : Spi_CsihStaticInit, Spi_CfgRegSettings
**
** Registers Used      : CSIHnCTL0, CSIHnSTCR0, CSIHnSTR0, CSIHnCTL1, CSIHnCTL2,
**                       CSIHnMCTL0, CSIHnBRSy, CSIHnCFGx
*******************************************************************************/
/* Implements SPI_ESDD_UD_078 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI157, SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
 FUNC(void, SPI_PRIVATE_CODE) Spi_AsyncChannelRegSettings
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
 {

  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  #if ((SPI_DIRECT_ACCESS_MODE == STD_ON)&& \
     ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || SPI_HW_PRIORITY_ENABLED == STD_ON))
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentTxChannelList;
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  #endif

  #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
  ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || SPI_HW_PRIORITY_ENABLED == STD_ON)) \
                                 || (SPI_FIFO_MODE == STD_ON))
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                              LpPBChannelConfig;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  #endif
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_SequenceType LddSeqIndex;
  #endif
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  Spi_JobType LddNoOfJobs;
  Spi_HWUnitType LddHWUnitNumber;
  #endif
  Spi_JobType LddJobIndex;
  Spi_JobType LddJobListIndex;
  uint8 LucCxCtl0;

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* MISRA Violation: START Msg(4:2982)-2 */
  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
   /* END Msg(2:2814)-6 */
   /* END Msg(4:2982)-2 */
  #endif

  #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
     ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || SPI_HW_PRIORITY_ENABLED == STD_ON))
  #if(SPI_CSIH_CONFIGURED == STD_ON)
  if (SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode )
  #endif
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
    #endif
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
      LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
      LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber
                                         + SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
    }
    #endif

    LpCurrentTxChannelList = LpCurrentCommData->pCurrentTxChannelList;

    /* Get the pointer to the post-build structure of the channel */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2814)-6 */
    /* START Msg(2:2824)-2 */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);
    /* END Msg(2:2824)-2 */
    /* END Msg (2:2814)-6 */
    /* END Msg (4:0488)-4 */
  }
  #if(SPI_CSIH_CONFIGURED == STD_ON)
  else
  {
    /* No action required */
  }
  #endif
  #endif

  #if ((SPI_FIFO_MODE == STD_ON) || \
               (SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
  if (SPI_FIFO_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_FIFO_MODE == STD_ON)
    LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
    #endif
  }
  else
  {
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
    /* START Msg(2:2824)-2 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
    /* END Msg (4:0488)-4 */
    /* START Msg(2:2814)-6 */
    /* Get the job list index of the last job of the sequence */
    LddJobListIndex = LpSeqConfig->ddJobListIndex;
    /* END Msg(2:2814)-6 */
    /* Get the index of the job list for the first job of the sequence */
    LddJobListIndex = LddJobListIndex + ((LpSeqConfig->ddNoOfJobs) - SPI_ONE);
    #endif
  }
  #endif
  /* Get the pointer to the respective job list index  */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* MISRA Violation: START Msg(4:2962)-10 */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:2962)-10 */
  /* END Msg (4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */
  #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
   ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))\
                                        || (SPI_FIFO_MODE == STD_ON))
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */
  #endif

  /* MISRA Violation: START Msg(4:0402)-12 */
  /* START Msg(2:2814)-6 */
  /* START Msg(2:3892)-8 */
  /* Reset the PWR bit since other registers need to be written */
  LucCxCtl0 = (Csih_BaseAddress[LddHWUnit]->CTL0.UINT8 & SPI_RESET_PWR);
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8, LucCxCtl0)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), LucCxCtl0,
                               SPI_CTLREG_8_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
  /* END Msg(2:2814)-6 */
  /* END Msg(2:3892)-8 */
  /* END Msg(4:0402)-12 */

  if (SPI_TRUE == Spi_GblInitiateJobTx)
  {
    Spi_GblInitiateJobTx = SPI_FALSE;
    Spi_GaaJobResult[LddJobIndex] = SPI_JOB_PENDING;

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
    #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
    if ((SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode) ||
                           (SPI_TX_ONLY_MODE_CONFIGURED == LucHWMemoryMode))
    {
      /* Get the number of jobs */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
    }
    else
    #endif
    /*((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))*/
    {
      LddNoOfJobs = SPI_ONE;
    }
    /* Perform the initial settings of all registers */
    Spi_CsihStaticInit(LpJobList, LddNoOfJobs,
                           LddHWUnitNumber, LddHWUnit, SPI_ASYNCTRANSMIT_SID);
    #endif
  }
  else
  {
    #if(SPI_FIFO_MODE == STD_ON)
    if (SPI_DIRECT_ACCESS_MODE_CONFIGURED != LucHWMemoryMode)
    {
      /* START Msg(2:2824)-2 */
      /* START Msg(2:2814)-6 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the post-build structure of the channel */
      LpPBChannelConfig = Spi_GpFirstChannel + (*LpJobConfig->pChannelList);
      /* END Msg (4:0488)-4 */
      /* END Msg(2:2814)-6 */
      /* END Msg(2:2824)-2 */
    }
    else
    {
      /* No action required */
    }
    #endif
    #if ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
   ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))\
                                        || (SPI_FIFO_MODE == STD_ON))
    /* MISRA Violation: START Msg(4:2962)-10 */
    /* Perform the configuration register settings */
    Spi_CfgRegSettings(LpPBChannelConfig, LpJobConfig, LddHWUnit);
    /* END Msg(4:2962)-10 */
    #endif

  }
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON) \
                                                 ||(SPI_FIFO_MODE == STD_ON))

  if (SPI_ZERO < LucHWMemoryMode)
  {
     /* START Msg(2:3892)-8 */
     /* START Msg(2:2814)-6 */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                                SPI_CSIH_CLR_STS_FLAGS)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->STR0),(uint32)SPI_ZERO,
                       (uint32)SPI_CSIH_CLR_STS_FLAGS, SPI_ASYNCTRANSMIT_SID)
    /* END Msg(2:2814)-6 */
    /* END Msg(2:3892)-8 */
    /* Load Main CTL0 register, without setting PWR bit */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                   SPI_SET_MEMORY_ACCESS)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), SPI_SET_MEMORY_ACCESS,
                             SPI_CTLREG_8_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
  }
  else
  #endif
  {
    /* Load Main CTL0 register, setting PWR bit at the same time */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8,
                                                SPI_SET_DIRECT_ACCESS)
    SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
    &(Csih_BaseAddress[LddHWUnit]->CTL0.UINT8), SPI_SET_DIRECT_ACCESS,
                             SPI_CTLREG_8_BIT_MASK, SPI_ASYNCTRANSMIT_SID)
  }
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_ProcessChannelInFifoMod
**
** Service ID         : Not Applicable
**
** Description        : This function is to process remaining channels
**                      to be transmitted in FIFO mode.
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpFirstChannel,
**                      Spi_GpFirstJobList, Spi_GaaChannelEBData,
**                      Spi_GddAsyncMode, Spi_GpFirstJob, Spi_GddDmaData,
**                      Spi_GaaSeqQueue, Spi_GaaJobQueue, Spi_GpConfigPtr
**
** Function Invoked   : Spi_AsyncChannelRegSettings, Spi_TxDmaConfig,
**                      Spi_FifoWriteData, SPI_ENTER_CRITICAL_SECTION,
**                      SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIHnCTL0, CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W, ICRn, IMRn,
**                      DCSTCn, DCSTn, DSAn, DTCTn, DTFRn, DTCn, DCENn, DTFRRQn,
**                      DTFRRQCn, DCSTSn
*******************************************************************************/
/* Implements SPI_ESDD_UD_083 */
/* Implements SPI_ESDD_UD_145 */
#if (SPI_FIFO_MODE == STD_ON)

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0068 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannelInFifoMod
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
{
  /* End Msg(2:3227)-1 */
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobIndex;

  Spi_JobType LddJobListIndex;

  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData;
  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentTxChannelList;
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;

  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;

  Spi_NumberOfDataType LddBufferIndex;

  Spi_NumberOfDataType LddNoOfBuffers;

  Spi_ChannelType LddNoOfChannels;

  LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];

  /* Get the pointer to the respective job list index  */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* MISRA Violation: START Msg(4:2962)-10 */
  /* START Msg(2:2824)-2 */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg (4:2962)-10 */
  /* END Msg (4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg (4:0488)-4 */
  /* END Msg(2:2824)-2 */

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];
  /* START Msg(2:2814)-6 */
  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  if ((SPI_TRUE == Spi_GblInitiateJobTx) ||
                            (SPI_FALSE == LpJobConfig->blIsChannelPropSame))
  {
    /* END Msg(2:2814)-6 */
    Spi_AsyncChannelRegSettings( LddHWUnit, LucHWMemoryMode);
  }
  else
  {
    /* No Action required */
  }
  #endif

  if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
  {
    /* Clear the pending interrupt */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                            (SPI_CLR_INT_REQ));
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                            (SPI_CLR_INT_REQ));

    /* Register dummy read-write  */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                            (SPI_CLR_INT_REQ));
    #endif
    /* SYNCP execution */
    EXECUTE_SYNCP();

    /* Enable transmit interrupt */
    RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pTxImrAddress),
                                            (LpHWUnitInfo->ulTxImrMask));
    /* Enable Error interrupt */
    RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pErrorImrAddress),
                                            (LpHWUnitInfo->ulErrorImrMask));
  }
  else
  {
    /* No action required */
  }
  /* START Msg(2:3892)-8 */
  if (SPI_FIFO_BUFFER_UNINIT == Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX])
  {
    Spi_GstFifoCurrentCommData.pCurrentTxChannelList =
                                                    LpJobConfig->pChannelList;
    Spi_GstFifoCurrentCommData.ddNoOfTxChannels = LpJobConfig->ddNoOfChannels;
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    /* Save JobIndex to refer to the ongoing job */
    Spi_GstFifoCurrentCommData.ddJobIndex = LddJobIndex;
    #endif
  }
  /* END Msg(2:3892)-8 */
  else
  {
    /* No Action Required */
  }
  Spi_GstFifoCurrentCommData.usBufferCount = SPI_ZERO;
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Disable relevant interrupts to protect this critical section */
  SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  #endif
  do
  {
    LpCurrentTxChannelList = Spi_GstFifoCurrentCommData.pCurrentTxChannelList;
    LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfTxChannels;

    /* START Msg(2:2814)-6 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the post-build structure of the channel */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */
    /* START Msg(2:3892)-8 */
    if (SPI_FIFO_BUFFER_FULL != Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX])
    {
      /* END Msg(2:3892)-8 */
      LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
      #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
      /* Check if the buffer type is internal buffer */
      if (SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #endif
      {
        #if (SPI_INTERNAL_RW_BUFFERS == STD_ON)
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* Update the RAM variable for Tx pointer with channel IB index */
        LpNextTxData = (Spi_GpConfigPtr->pChannelIBWrite) + LddBufferIndex;
        /* END Msg (4:0488)-4 */
        /* END Msg (2:2814)-6 */

        /* Update the RAM variable for number of buffers of the channel */
        LddNoOfBuffers = LpPBChannelConfig->ddNoOfBuffers;
        #endif
      }
      #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
      else
      #endif
      {
        #if (SPI_EB_CONFIGURED == STD_ON)
        /*
         * Update the RAM variable for Tx pointer with channel EB source
         * pointer
         */
        LpNextTxData = Spi_GaaChannelEBData[LddBufferIndex].pSrcPtr;

        /* Update the local counter with number of buffers of the channel */
        LddNoOfBuffers = Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
        #endif
      }
    }
    else
    {
      /* Load the data from RAM */
      LpNextTxData = Spi_GstFifoCurrentCommData.pNextTxData;
      LddNoOfBuffers = Spi_GstFifoCurrentCommData.ddNoOfTxBuffers;
    }
    /* If the selected asynchronous mode is DMA mode */
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    if ((SPI_INTERRUPT_MODE == Spi_GddAsyncMode) &&
                  (SPI_INVALID_DMAUNIT == LpJobConfig->ucTxDmaDeviceIndex))
    #endif
    {
      /* Implements SPI_ESDD_UD_096 */
      /* Critical section protection is added as per #25251 */
      Spi_FifoWriteData(LpJobList, LddNoOfChannels, LddNoOfBuffers,
                                           LpNextTxData, LddHWUnit);
    }
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    else if (SPI_TRUE == LpJobConfig->blHWUnitDmaMode)
    {
      /* START Msg(2:3892)-8 */
      /* Check the number of buffers to be transmitted */
      if (LddNoOfBuffers > SPI_FIFO_SIZE)
      {
        /* Set the flag as the number of buffers are more than Fifo size */
        Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_FULL;
        /* END Msg(2:3892)-8 */
        /* Save the current status in RAM */
        Spi_GstFifoCurrentCommData.pNextTxData = (LpNextTxData + SPI_FIFO_SIZE);
        Spi_GstFifoCurrentCommData.ddNoOfTxBuffers =
                                               (LddNoOfBuffers - SPI_FIFO_SIZE);
        /* Update the number of buffers to Max size */
        LddNoOfBuffers = SPI_FIFO_SIZE;
      }
      else
      {
        /* Set the flag to indicate Buffer is Empty */
        /* START Msg(2:3892)-8 */
        Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_EMPTY;
        /* END Msg(2:3892)-8 */
      }

      Spi_GddDmaData = LpPBChannelConfig->ddDefaultData;
      Spi_GstFifoCurrentCommData.ucDmaDeviceIndex =
                                           LpJobConfig->ucTxDmaDeviceIndex;
      /* MISRA Violation: START Msg(4:2962)-10 */
      Spi_TxDmaConfig(LpJobConfig, LpNextTxData, LddNoOfBuffers);
      /* END Msg (4:2962)-10 */
    }
    else
    {
      /* No actions required */
    }
    #endif
      #if (SPI_DMA_MODE_ENABLE == STD_ON)
    if (SPI_TRUE != LpJobConfig->blHWUnitDmaMode)
    #endif
    {
      /* START Msg(2:3892)-8 */
      if ((SPI_FIFO_BUFFER_EMPTY ==
                            (uint8) Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX])
                  && (SPI_ZERO < Spi_GstFifoCurrentCommData.ddNoOfTxChannels))
      /* END Msg (2:3892)-8 */
      {
        /* MISRA Violation: START Msg(4:0489)-3 */
        /* START Msg(2:2824)-2 */
        /* Increment the pointer to the next channel */
        Spi_GstFifoCurrentCommData.pCurrentTxChannelList++;
        /* END Msg(2:2824)-2 */
        /* END Msg (4:0489)-3 */

        /* Decrement the counter for number of channels */
        Spi_GstFifoCurrentCommData.ddNoOfTxChannels--;

        /* START Msg(2:3892)-8 */
        if (SPI_FIFO_SIZE <= Spi_GstFifoCurrentCommData.usBufferCount)
        /* END Msg(2:3892)-8 */
        {
          /* Break the loop */
          LddNoOfChannels = SPI_ZERO;
          /* Reset the buffer count */
          Spi_GstFifoCurrentCommData.usBufferCount = SPI_ZERO;
        }
        else
        {
          /* Get the remaining number of channels */
          LddNoOfChannels = Spi_GstFifoCurrentCommData.ddNoOfTxChannels;
        }
      }
      else
      {
        /* Break the loop */
        LddNoOfChannels = SPI_ZERO;
        /* Reset the buffer count */
        Spi_GstFifoCurrentCommData.usBufferCount = SPI_ZERO;
      }
    }
    #if (SPI_DMA_MODE_ENABLE == STD_ON)
    else
    {
      /* Break the loop */
      LddNoOfChannels = SPI_ZERO;
    }
    #endif
  }while (SPI_ZERO < LddNoOfChannels);
  #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
  /* Enable relevant interrupts */
  SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
  #endif
}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_ProcessChannelInDualOrTxMod
**
** Service ID         : Not Applicable
**
** Description        : This function is to process remaining channels
**                      to be transmitted in Dual buffer mode or TX Only mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpFirstChannel, Spi_GaaJobQueue,
**                      Spi_GpFirstJobList, Spi_GpConfigPtr, Spi_GpFirstSeq,
**                      Spi_GddAsyncMode, Spi_GpFirstJob, Spi_GddQueueIndex,
**                      Spi_GaaSeqQueue
**
** Function Invoked   : Spi_AsyncChannelRegSettings, Spi_RxDmaConfig
**
** Registers Used     : CSIHnCTL0, CSIHnSTCR0, CSIHnSTR0, CSIHnMCTL2, ICRn,
**                      IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn, DTFRn,
**                      DTFRRQCn, DCSTSn, DTFRRQn
*******************************************************************************/
/* Implements SPI_ESDD_UD_082 */
  #if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0068 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessChannelInDualOrTxMod
(Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddJobIndex;

  Spi_JobType LddJobListIndex;

  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  Spi_SequenceType LddSeqIndex;
  #if (SPI_DUAL_BUFFER_MODE == STD_ON)
  P2VAR(Spi_DualBufferCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                              LpDualBufferCurrentCommData;
  #endif
  #if (SPI_TX_ONLY_MODE == STD_ON)
  /* Declare a local pointer variable to hold Tx only communication data */
  P2VAR(Spi_TxOnlyCurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
                                               LpTxOnlyCurrentCommData;
  #endif

  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;

  Spi_HWUnitType LddHWUnitNumber;

  P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)LpHWUnitInfo;

  Spi_NumberOfDataType LddBufferIndex;

  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg (4:0759)-1 */
  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

  LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
  /* START Msg(2:2824)-2 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg (4:0488)-4 */
  /* Get the job list index of the last job of the sequence */
  LddJobListIndex = LpSeqConfig->ddJobListIndex;

  /* Get the index of the job list for the first job of the sequence */
  LddJobListIndex = LddJobListIndex + ((LpSeqConfig->ddNoOfJobs) - SPI_ONE);
  /* Get the pointer to the respective job list index  */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* MISRA Violation: START Msg(4:2962)-10 */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg (4:2962)-10 */
  /* END Msg (4:0488)-4 */

  /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg (4:0488)-4 */

  /* Get the pointer to the structure of HW Unit information */
  LpHWUnitInfo = &Spi_GstHWUnitInfo[LddHWUnit];

  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  if (((SPI_TRUE == Spi_GblInitiateJobTx) ||
                            (SPI_FALSE == LpJobConfig->blIsChannelPropSame))
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      && (SPI_FALSE == (Spi_GaaHighPriorityCommActive[LddHWUnitNumber]
      ^ Spi_GaaHighPriorityCommRequestAtIdle[LddHWUnitNumber]))
      #endif /* End of #if (SPI_HW_PRIORITY_ENABLED == STD_ON)*/
      )
  {
    Spi_AsyncChannelRegSettings( LddHWUnit, LucHWMemoryMode);
  }
  #endif
  /* MISRA Violation: START Msg(4:0488)-4 */
  LpPBChannelConfig = Spi_GpFirstChannel + (*(LpJobConfig->pChannelList));
  /* END Msg (4:0488)-4 */
  LddBufferIndex = LpPBChannelConfig->ddBufferIndex;

  /*
   * Take a local union variable to construct the value for MCTL2
   * register and load the local union variable with SOP value
   */
  LunDataAccess1.Tst_ByteAccess.usRegData1 = LddBufferIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg(2:2814)-6 */
  if (SPI_DUAL_BUFFER_MODE_CONFIGURED == LucHWMemoryMode)
  {
    #if (SPI_DUAL_BUFFER_MODE == STD_ON)
    LpDualBufferCurrentCommData = &Spi_GstDualBufferCurrentCommData
                 [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

    LunDataAccess1.Tst_ByteAccess.ucRegData2 =
         (uint8)(*(LpDualBufferCurrentCommData->ddNoOfNxtNotifyBuffersIdx));

    if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
    {
      /* Clear the pending interrupt */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      /* Register dummy read-write  */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      #endif
      /* SYNCP execution */
      EXECUTE_SYNCP();


      RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pTxImrAddress),
                                               (LpHWUnitInfo->ulTxImrMask));
      RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pErrorImrAddress),
                                              (LpHWUnitInfo->ulErrorImrMask));
    }
    else
    {
      /* No action required */
    }
    #endif /* #if (SPI_DUAL_BUFFER_MODE == STD_ON) */
  }
  #if (SPI_TX_ONLY_MODE == STD_ON)
  else
  {
    LpTxOnlyCurrentCommData = &Spi_GstTxOnlyCurrentCommData
                     [Spi_GpConfigPtr->aaHWUnitCurrentCommDataIndex[LddHWUnit]];

    LunDataAccess1.Tst_ByteAccess.ucRegData2 =
                          (uint8)(LpTxOnlyCurrentCommData->ddNoOfBuffers);

    if (SPI_INTERRUPT_MODE == Spi_GddAsyncMode)
    {
      #if (SPI_DMA_MODE_ENABLE == STD_ON)
      if (SPI_TRUE == LpJobConfig->blHWUnitDmaMode)
      {
        Spi_RxDmaConfig(LpJobConfig, LpTxOnlyCurrentCommData->pCurrentRxData,
                                     LpTxOnlyCurrentCommData->ddNoOfBuffers);
      }
      else
      {
        /* Clear the pending interrupt */
        RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                (SPI_CLR_INT_REQ));
        RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                                (SPI_CLR_INT_REQ));

        /* Register dummy read-write  */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
        RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                (SPI_CLR_INT_REQ));
        #endif
        /* SYNCP execution */
        EXECUTE_SYNCP();

        RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pRxImrAddress),
                                                (LpHWUnitInfo->ulRxImrMask));
        RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pErrorImrAddress),
                                                (LpHWUnitInfo->ulErrorImrMask));
      }
      #else
      /* Clear the pending interrupt */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                               (SPI_CLR_INT_REQ));

      /* Register dummy read-write  */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pErrorIntCntlAddress),
                                               (SPI_CLR_INT_REQ));
      #endif
      /* SYNCP execution */
      EXECUTE_SYNCP();

      RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pRxImrAddress),
                                              (LpHWUnitInfo->ulRxImrMask));
      RH850_SV_MODE_IMR_AND(32, (LpHWUnitInfo->pErrorImrAddress),
                                              (LpHWUnitInfo->ulErrorImrMask));
      #endif /* End of #if (SPI_DMA_MODE_ENABLE == STD_ON) */
    }
    else
    {
      /* No action required */
    }
  }
  #endif /* End of #if (SPI_TX_ONLY_MODE == STD_ON) */

  LunDataAccess1.Tst_ByteAccess.ucRegData3 = SPI_SET_BTST;
  /* START Msg(2:2814)-6 */
  /* Load the MCTL2 register to start the communication */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->MCTL2,
                                             LunDataAccess1.ulRegData)
  /* End Msg(2:2814)-6 */

}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_FifoWriteData
**
** Service ID         : Not Applicable
**
** Description        : This function is to write the data in to FIFO buffer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST)
**                      LpHWUnitInfo,
**                      P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST)
**                      LpJobList, Spi_ChannelType LddNoOfChannels,
**                      Spi_NumberOfDataType LddNoOfBuffers,
**                      P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA)
**                      LpNextTxData.
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstJob, Spi_GpFirstChannel,
**                      Spi_GstFifoCurrentCommData, Spi_GucHWFifoBufferSts
**
** Function Invoked   : None
**
** Registers Used     : CSIHnTX0W
*******************************************************************************/
/* Implements SPI_ESDD_UD_080 */
/* Implements SPI_ESDD_UD_145 */
#if (SPI_FIFO_MODE == STD_ON)
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_FifoWriteData
(P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList,
  Spi_ChannelType LddNoOfChannels, Spi_NumberOfDataType LddNoOfBuffers,
  P2CONST(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpNextTxData,
  Spi_HWUnitType LddHWUnit)
/* END Msg (2:3227)-1 */
{

  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentTxChannelList;
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                             LpPBChannelConfig;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg (4:0759)-1 */
  Spi_JobType LddJobIndex;
  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))

  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess2;
  /* END Msg (4:0759)-1 */
  uint32 LulShiftData;
  #endif

  Spi_DataType LddData;
  /* START Msg(2:2814)-6 */
   /* Get the index of the job */
  LddJobIndex = LpJobList->ddJobIndex;
  /* END Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* START Msg(2:2814)-6 */
  /* Get the pointer to the job structure */
  LpJobConfig = Spi_GpFirstJob + LddJobIndex;
  /* END Msg(2:2814)-6 */
  /* END Msg (2:2824)-2*/
  /* END Msg (4:0488)-4 */

  LpCurrentTxChannelList = Spi_GstFifoCurrentCommData.pCurrentTxChannelList;
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2814)-6 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the post-build structure of the channel */
  LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentTxChannelList);
  /* END Msg(2:2824)-2 */
  /* END Msg(2:2814)-6 */
  /* END Msg (4:0488)-4 */
  do
  {
    /* Get the data to be transmitted */
    if (NULL_PTR == LpNextTxData)
    {
      /* START Msg(2:2814)-6 */
      /* Get the pointer to the configured default value */
      LddData = LpPBChannelConfig->ddDefaultData;
      /* END Msg(2:2814)-6 */
    }
    else
    {
      /* Get the value from the source pointer */
      LddData = *LpNextTxData;
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpNextTxData++;
      /* END Msg (4:0489)-3 */
    }

    /*
     * Take a local union variable to construct the value for TX0W
     * register
     */
    LunDataAccess1.ulRegData = SPI_ZERO;
    /* START Msg(2:2814)-6 */
    /* Set chip select in the local union variable */
    LunDataAccess1.Tst_ByteAccess.ucRegData2 = LpJobConfig->ucChipSelect;
    /* END Msg(2:2814)-6 */
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, load Tx data portion of
     * the local variable with the 8-bit data to be transmitted
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 = (uint16)LddData;
    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 16-bit. Hence, load Tx data portion of
     * the local variable with the 16-bit data to be transmitted
     */
    LunDataAccess1.Tst_ByteAccess.usRegData1 = LddData;
    #else
    if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                    (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                    (SPI_SIXTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                    (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
    {
      LulShiftData = (uint32)LddData;
      LulShiftData = (LulShiftData << (SPI_SIXTEEN -
                                    (LpPBChannelConfig->ucDLSSetting)));
      LunDataAccess2.ulRegData = LulShiftData;
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
      LunDataAccess2.usRegData5[SPI_ZERO] >> (SPI_SIXTEEN -
                                    (LpPBChannelConfig->ucDLSSetting));
      LunDataAccess2.usRegData5[SPI_ZERO] =
                                   LunDataAccess1.Tst_ByteAccess.usRegData1;

    }
    else
    {
      /*
       * Data width is maximum 32-bit. Tx data needs to be split to
       * LS Byte and MS Byte. Hence, load the Tx data to local union
       * variable
      */
      LunDataAccess2.ulRegData = LddData;
    }
    /*
     * Since data width is maximum 32-bit, check if the the data
     * of requested channel is more than 16 bits
     */
    if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    {
      /*
       * Data width is maximum 16-bit. Hence, load LSB portion of the
       * width local variable with the 16-bit data to be transmitted
       */
      LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                         LunDataAccess2.usRegData5[SPI_ZERO];
    }
    else
    {
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Load Tx data portion of the local variable with LSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                           LunDataAccess2.usRegData5[SPI_ZERO];
      }
      else
      {
        /* Load Tx data portion of the local variable with MSB first */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                            LunDataAccess2.usRegData5[SPI_ONE];
      }
      /* MISRA Violation: START Msg(4:2984)-9 */
      /* Set the EDL bit in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 =
                (LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EDL);
      /* END Msg(4:2984)-9 */
      /* START Msg(2:2814)-6 */
      /* Load the value of the local union variable to TX0W register */
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                             LunDataAccess1.ulRegData)

      /* END Msg(2:2814)-6 */
      /* MISRA Violation: START Msg(4:2984)-9 */
      /* Reset the EDL bit in the local union variable */
      LunDataAccess1.Tst_ByteAccess.ucRegData3 =
              (LunDataAccess1.Tst_ByteAccess.ucRegData3 & SPI_RESET_EDL);
      /* END Msg(4:2984)-9 */

      /*
       * Check the configured data direction again to load other part
       * of data
       */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /* Load Tx data portion of the local variable with MSB */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                           LunDataAccess2.usRegData5[SPI_ONE];
      }
      else
      {
        /* Load Tx data portion of the local variable with LSB */
        LunDataAccess1.Tst_ByteAccess.usRegData1 =
                                           LunDataAccess2.usRegData5[SPI_ZERO];
      }
    } /* End of !if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON) */

    /* MISRA Violation: START Msg(4:2962)-10 */
    /* Check if the buffer is last buffer of the channel */
    if ((SPI_ONE == LddNoOfBuffers) && (SPI_ONE == LddNoOfChannels))
    /* END Msg (4:2962)-10 */
    {
      if (SPI_TRUE == LpJobList->blIsLastJob)
      {
        /* MISRA Violation: START Msg(4:2984)-9 */
        /* Since buffer is the last buffer of sequence, set both CIRE and
         * EOJ
         */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 =
              (LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_CIREEOJ);
        /* END Msg(4:2984)-9 */
      }
      else
      {
        /* MISRA Violation: START Msg(4:2984)-9 */
        /*
         * Since buffer is last buffer of the job and not last buffer
         * of the sequence, set only EOJ
         */
        LunDataAccess1.Tst_ByteAccess.ucRegData3 =
            (LunDataAccess1.Tst_ByteAccess.ucRegData3 | SPI_SET_EOJ);
        /* END Msg(4:2984)-9 */
      }
    }
    else
    {
      /* No action required */
    }/*
      * End of if ((LddNoOfBuffers == SPI_ONE) &&
      *           (LddNoOfChannels == SPI_ONE))
      */
    /* Load the value of the local union variable to TX0W register */
    SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->TX0W,
                                           LunDataAccess1.ulRegData)

    /* Decrement the counter for number of buffers */
    LddNoOfBuffers--;
    /* Increment the counter for number of buffers transmitted */
    Spi_GstFifoCurrentCommData.usBufferCount++;
    /* Check all buffers are transmitted */
    if (SPI_ZERO == LddNoOfBuffers)
    {
      /* START Msg(2:3892)-8 */
      Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_EMPTY;
    }
    /* Check number of buffers do not exceed H/W Buffer size */
    else if (Spi_GstFifoCurrentCommData.usBufferCount >= SPI_FIFO_SIZE)
    {
      /* Set the flag to indicate Buffer is FULL */
      Spi_GucHWFifoBufferSts[SPI_FIFO_TX_INDEX] = SPI_FIFO_BUFFER_FULL;
      /* END Msg(2:3892)-8 */
      /* Save the current status in RAM */
      Spi_GstFifoCurrentCommData.pNextTxData = LpNextTxData;
      Spi_GstFifoCurrentCommData.ddNoOfTxBuffers = LddNoOfBuffers;
      /* Break the loop */
      LddNoOfBuffers = SPI_ZERO;
    }
    else
    {
      /* No Action Required */
    }
   }while (SPI_ZERO < LddNoOfBuffers);
}
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_FifoReadData
**
** Service ID         : Not Applicable
**
** Description        : This function is to read the data from FIFO buffer
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                      SPI_CONFIG_CONST) LpPBChannelConfig,
**                      P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA)
**                      LpCurrentRxData,
**                      Spi_NumberOfDataType LddNoOfBuffers,
**                      Spi_HWUnitType LddHWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstFifoCurrentCommData, Spi_GucHWFifoBufferSts
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIHnRX0W, CSIHnRX0H
*******************************************************************************/
/* Implements SPI_ESDD_UD_079 */
/* Implements SPI_ESDD_UD_145 */
#if (SPI_FIFO_MODE == STD_ON)

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE) Spi_FifoReadData
(P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                       LpPBChannelConfig,
P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData,
Spi_NumberOfDataType LddNoOfBuffers, Spi_HWUnitType LddHWUnit)
/* END Msg (2:3227)-1 */
{
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess2;
  /* END Msg (4:0759)-1 */
  #if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))
  uint32 LulShiftData;
  uint32 LulShiftDataLow;
  uint32 LulShiftDataHigh;
  #endif
  Spi_DataType LddData;

  do
  {
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */
    LunDataAccess2.ulRegData = Csih_BaseAddress[LddHWUnit]->RX0W;
    LddData = LunDataAccess2.ucRegData4[SPI_ZERO];

    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    LunDataAccess2.ulRegData = Csih_BaseAddress[LddHWUnit]->RX0W;
    /* Load the value from union variable to local variable */
    LddData = LunDataAccess2.usRegData5[SPI_ZERO];

    #else
    /*
     * Data width is maximum 32-bit, Check if the the data width of
     * requested channel is more than 16 bits
     */
     /* START Msg(2:2814)-6 */
    if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    {
      LunDataAccess2.ulRegData = Csih_BaseAddress[LddHWUnit]->RX0W;

      LddData = LunDataAccess2.usRegData5[SPI_ZERO];
    }
    /* END Msg(2:2814)-6 */
    else
    {
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /*
         * Take a local union variable to construct the value from
         * RX0W register
         */
        LunDataAccess2.ulRegData = Csih_BaseAddress[LddHWUnit]->RX0W;
        LunDataAccess2.usRegData5[SPI_ONE] = Csih_BaseAddress[LddHWUnit]->RX0H;
      }
      else
      {
        /*
         * Take a local union variable to construct the value from
         * RX0W register
         */
        LunDataAccess2.ulRegData = Csih_BaseAddress[LddHWUnit]->RX0W;
        LunDataAccess2.usRegData5[SPI_ONE] =
                                     LunDataAccess2.usRegData5[SPI_ZERO];
        LunDataAccess2.usRegData5[SPI_ZERO] = Csih_BaseAddress[LddHWUnit]->RX0H;
      }

      LddData = LunDataAccess2.ulRegData;
    }
    #endif /* End of (SPI_8BIT_DATA_WIDTH == STD_ON)*/
    if (NULL_PTR != LpCurrentRxData)
    {
      /* Implements SPI_ESDD_UD_062 */
      #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
      /* MISRA Violation: START Msg(4:2962)-10 */
      if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
             (SPI_TRUE != LpPBChannelConfig->blDirection) &&
              (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
      /* END Msg(4:2962)-10 */
      {
        LulShiftData =  LunDataAccess2.ulRegData;
        LulShiftDataHigh = LulShiftData & SPI_HIGH_DATA_MASK;
        LulShiftDataLow = LulShiftData & SPI_LOW_DATA_MASK;
        LulShiftDataLow = (uint32)(LulShiftDataLow << (SPI_SIXTEEN -
                                         (LpPBChannelConfig->ucDLSSetting)));
        LulShiftData = LulShiftDataHigh | LulShiftDataLow;
        LulShiftData = LulShiftData >> (SPI_SIXTEEN -
                                         (LpPBChannelConfig->ucDLSSetting));
        *LpCurrentRxData = (Spi_DataType)LulShiftData;
      }
      else
      #endif
      {
        *LpCurrentRxData = LddData;
      }
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpCurrentRxData++;
      /* END Msg (4:0489)-3 */
    }
    else
    {
      /* No Action Required */
    }
    /* Decrement the counter for number of buffers */
    LddNoOfBuffers--;
    /* Increment the counter for number of buffers transmitted */
    Spi_GstFifoCurrentCommData.usBufferCount++;
    /* Check all buffers are transmitted */
    if (SPI_ZERO == LddNoOfBuffers)
    {
       /* START Msg(2:3892)-8 */
      Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_EMPTY;
      /* END Msg(2:3892)-8 */
    }
    /* START Msg(2:3892)-8 */
    /* Check number of buffers do not exceed H/W Buffer size */
    else if (SPI_FIFO_SIZE <= Spi_GstFifoCurrentCommData.usBufferCount)
     /* END Msg(2:3892)-8 */
    {
      /* Implements SPI_ESDD_UD_096 */
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif

      /* Set a flag to indicate PAUSE of transfer */
      Spi_GucHWFifoBufferSts[SPI_FIFO_RX_INDEX] = SPI_FIFO_BUFFER_FULL;
      /* Save the current status in RAM */
      Spi_GstFifoCurrentCommData.pCurrentRxData = LpCurrentRxData;
      Spi_GstFifoCurrentCommData.ddNoOfRxBuffers = LddNoOfBuffers;

      /* Implements SPI_ESDD_UD_096 */
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif

      /* Break the loop */
      LddNoOfBuffers = SPI_ZERO;
    }
    else
    {
      /* No Action Required */
    }
  }while (SPI_ZERO < LddNoOfBuffers);
}
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_ReceiveDirectAcessData
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked from the ReceiveIsr function
**                      for processing the received data in direct Access mode
**
** Sync/Async         : Asynchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo, Spi_GpFirstChannel, Spi_GpFirstJob,
**                      Spi_GaaJobQueue, Spi_GpFirstJobList, Spi_GddQueueIndex,
**                      Spi_GusAsynDataAccess
**
** Function Invoked   : Spi_ReceiveCsihData, Spi_ReceiveChannelPropSame,
**                      Spi_ProcessSequence
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      CSIHnRX0H, ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn,
**                      DTCTn, DTCn, DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/

 #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* Implements SPI_ESDD_UD_170 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE)Spi_ReceiveDirectAcessData
                               (Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
/* END Msg(2:3227)-1 */
{

  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData;
  Spi_JobType LddJobIndex;
  Spi_JobType LddJobListIndex;
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)

  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                             LpPBChannelConfig;

  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentRxChannelList;
  #endif

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  Spi_HWUnitType LddHWUnitNumber;
  #endif

  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  /* START Msg(2:2814)-6 */
  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];
  /* END Msg(2:2814)-6 */
  if (SPI_FALSE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
  #endif
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ZERO]);
  }
  #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
  else
  {
    LpCurrentCommData = &(Spi_GstCurrentCommData[SPI_ONE + LddHWUnitNumber]);
  }
  #endif
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  LpCurrentRxChannelList = LpCurrentCommData->pCurrentRxChannelList;
  /* MISRA Violation: START Msg(4:0489)-3*/
  /* START Msg(2:2824)-2 */
  /* Decrement the source pointer */
  LpCurrentRxChannelList--;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0489)-3 */

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentRxChannelList);
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */

  if (SPI_TRUE == LpCurrentCommData->blRxEDL)
  {
    /* Reset the flag for indicating EDL */
    LpCurrentCommData->blRxEDL = SPI_FALSE;

    #if (SPI_CSIH_CONFIGURED == STD_ON)
    /* Store the received data in a variable */
    Spi_GusAsynDataAccess = Csih_BaseAddress[LddHWUnit]->RX0H;
    #endif
  }
  else
  #endif /* End of #if (SPI_EXTENDED_DATA_LENGTH == STD_ON) */
  {
    #if (SPI_CSIH_CONFIGURED == STD_ON)
    #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
    Spi_ReceiveCsihData(LpPBChannelConfig, LpCurrentCommData, LddHWUnit);
    #else
    Spi_ReceiveCsihData(LpCurrentCommData, LddHWUnit);
    #endif
    #endif

    /* Get the index of job list for the current job from the job queue */
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[(LddHWUnitNumber
                                        + SPI_MAX_CSIH_HW_INDEX + SPI_TWO)]];
    #else
    LddJobListIndex = Spi_GaaJobQueue[Spi_GddQueueIndex[LucHWMemoryMode]];
    #endif

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the respective job list index  */
    LpJobList = Spi_GpFirstJobList + LddJobListIndex;
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */

    /* Get the index of the job */
    /* START Msg(2:2814)-6 */
    LddJobIndex = LpJobList->ddJobIndex;
    /* END Msg(2:2814)-6 */

    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the job structure */
    LpJobConfig = Spi_GpFirstJob + LddJobIndex;
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */
    /* START Msg(2:2814)-6 */
    if (SPI_TRUE == LpJobConfig->blIsChannelPropSame)
    /* END Msg(2:2814)-6 */
    {

      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      Spi_ReceiveChannelPropSame(LpCurrentCommData, LddHWUnit, LucHWMemoryMode,
                                                              LddHWUnitNumber);
      #else
      Spi_ReceiveChannelPropSame(LpCurrentCommData, LddHWUnit, LucHWMemoryMode);
      #endif
    }
    else
    {
      /* Check if all buffers in the channel are transmitted */
      if (SPI_ZERO < LpCurrentCommData->ddNoOfRxBuffers)
      {
        /* Decrement the number of buffers to be transmitted */
        (LpCurrentCommData->ddNoOfRxBuffers)--;
      }
      else
      {
        #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
        if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
        {
           LpCurrentCommData->blRxEDL = SPI_FALSE;
        }
        else
        {
           /* No action required */
        }
        #endif
        /* All channels are transmitted. Hence the job is transmitted */
        Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
      }
    }
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name      : Spi_ReceiveCsihData
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked from Spi_ReceiveDirectAcessData
**                      for processing the received data for CSIH hardware unit
**                      in Direct Access Mode
**
** Sync/Async         : Asynchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                          SPI_CONFIG_CONST) LpPBChannelConfig,
**                      P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_CONST)
**                                                            LpCurrentCommData,
**                      Spi_HWUnitType LddHWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GusAsynDataAccess
**
** Function Invoked   : None
**
** Registers Used     : CSIHnRX0H
*******************************************************************************/
/* Implements SPI_ESDD_UD_168 */
/* Implements SPI_ESDD_UD_148 */
#if (SPI_CSIH_CONFIGURED == STD_ON)
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                    (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))

#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
/* START Msg(2:3227)-1 */
#if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
/* Implements SPI_ESDD_UD_133 */
FUNC(void, SPI_FAST_CODE)Spi_ReceiveCsihData(
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_CONST)LpCurrentCommData,
Spi_HWUnitType LddHWUnit)
#else
FUNC(void, SPI_FAST_CODE)Spi_ReceiveCsihData(
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_CONST)LpCurrentCommData,
Spi_HWUnitType LddHWUnit)
#endif
{
/* END Msg(2:3227)-1 */
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
  uint32 LulShiftData;
  uint32 LulShiftDataLow;
  uint32 LulShiftDataHigh;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg(4:0759)-1 */
  #endif
  Spi_DataType LddData;
  /* START Msg(3:3203)-4 */
  volatile uint16 Lus16BitData;
  /* END Msg (3:3203)-4 */
  /* START Msg(2:2814)-6 */
  LpCurrentRxData = LpCurrentCommData->pCurrentRxData;
  /* END Msg(2:2814)-6 */
  if (NULL_PTR != LpCurrentRxData)
  {
    #if (SPI_8BIT_DATA_WIDTH == STD_ON)
    /*
     * Data width is maximum 8-bit. Hence, Receive the data from the
     * Rx register to local union variable
     */
     /* START Msg(2:2814)-6 */
    LddData = (uint8) Csih_BaseAddress[LddHWUnit]->RX0H;
    /* END Msg(2:2814)-6 */
    #elif (SPI_16BIT_DATA_WIDTH == STD_ON)
    /* START Msg(2:2814)-6 */
    LddData = Csih_BaseAddress[LddHWUnit]->RX0H;
    /* END Msg(2:2814)-6 */
    #else
    /*
     * Data width is maximum 32-bit, check if the the data width of
     * requested channel is more than 16 bits
     */
    if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
    {
      LddData = Csih_BaseAddress[LddHWUnit]->RX0H;
    }
    else
    {
      /* Check if the configured data direction is LSB first */
      if (SPI_TRUE == LpPBChannelConfig->blDirection)
      {
        /*
         * Take a local union variable to construct the value from RX0W
         * register
         */
        LunDataAccess1.usRegData5[SPI_ONE] = Csih_BaseAddress[LddHWUnit]->RX0H;
        LunDataAccess1.usRegData5[SPI_ZERO] = Spi_GusAsynDataAccess;
      }
      else
      {
        /*
         * Take a local union variable to construct the value from RX0W
         * register
         */
        LunDataAccess1.usRegData5[SPI_ZERO] = Csih_BaseAddress[LddHWUnit]->RX0H;
        LunDataAccess1.usRegData5[SPI_ONE] = Spi_GusAsynDataAccess;

      } /* End of if (SPI_TRUE == LpPBChannelConfig->blDirection) */
      /*Start : SPI_UT_008*/
      if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                    (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                    (SPI_FIFTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                    (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
      /* End : SPI_UT_008 */
      {
        LulShiftData =  LunDataAccess1.ulRegData;
        LulShiftDataHigh = LulShiftData & SPI_HIGH_DATA_MASK;
        LulShiftDataLow = LulShiftData & SPI_LOW_DATA_MASK;
        LulShiftDataLow = LulShiftDataLow << (SPI_SIXTEEN -
                                     (LpPBChannelConfig->ucDLSSetting));
        LulShiftData = LulShiftDataHigh | LulShiftDataLow;
        LulShiftData = LulShiftData >> (SPI_SIXTEEN -
                                 (LpPBChannelConfig->ucDLSSetting));
        LddData  = LulShiftData;
      }
      else
      {
        LddData = LunDataAccess1.ulRegData;
      }
      LpCurrentCommData->blRxEDL = SPI_TRUE;
    } /* End of if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */
    #endif

    *LpCurrentRxData = LddData;

    /* MISRA Violation: START Msg(4:0489)-3 */
    LpCurrentRxData++;
    /* END Msg (4:0489)- 3 */

    LpCurrentCommData->pCurrentRxData = LpCurrentRxData;

  }
  else
  {
    Lus16BitData = Csih_BaseAddress[LddHWUnit]->RX0H;
    #if (SPI_EXTENDED_DATA_LENGTH == STD_ON)
     if (SPI_TRUE == LpPBChannelConfig->blEDLEnabled)
     {
        LpCurrentCommData->blRxEDL = SPI_TRUE;
     }
     else
     {
        /* No action required */
     }
    #endif
  }
}

#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif
#endif

/*******************************************************************************
** Function Name      : Spi_ReceiveChannelPropSame
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked from Spi_ReceiveDirectAcessData
**                      for processing the remaining buffers when channel
**                      properties are same
**
** Sync/Async         : Asynchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
**                                                             LpCurrentCommData
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstChannel,
**                      Spi_GaaHighPriorityCommActive[], Spi_GpConfigPtr,
**                      Spi_GaaChannelEBData
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_037 */
 #if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                            (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
/* Implements EAAR_PN0034_FR_0061 */
#define SPI_START_SEC_CODE_FAST
#include "MemMap.h"
#if (SPI_HW_PRIORITY_ENABLED == STD_ON)
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_FAST_CODE)Spi_ReceiveChannelPropSame(
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode, Spi_HWUnitType LddHWUnitNumber)
#else
FUNC(void, SPI_FAST_CODE)Spi_ReceiveChannelPropSame(
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode)
#endif
/* END Msg(2:3227)-1 */
{

  P2CONST(Spi_ChannelType, AUTOMATIC, SPI_CONFIG_CONST) LpCurrentRxChannelList;
  P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)
                                                            LpPBChannelConfig;
  Spi_NumberOfDataType LddBufferIndex;
  P2VAR(Spi_DataType, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentRxData;
  /* START Msg(2:2814)-6 */
  if ((SPI_ZERO < LpCurrentCommData->ddNoOfRxChannels) &&
                        (SPI_ZERO == LpCurrentCommData->ddNoOfRxBuffers))
  {

    LpCurrentRxChannelList = LpCurrentCommData->pCurrentRxChannelList;
    /* Get the pointer to the post-build structure of the channel */
    /* MISRA Violation: START Msg(4:0488)-4 */
    /* START Msg(2:2824)-2 */
    LpPBChannelConfig = Spi_GpFirstChannel + (*LpCurrentRxChannelList);
    /* END Msg(2:2824)-2 */
    /* END Msg (4:0488)-4 */

    LddBufferIndex = LpPBChannelConfig->ddBufferIndex;
    /* END Msg(2:2814)-6 */
    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif

    /* MISRA Violation: START Msg(4:0489)-3 */
    (LpCurrentCommData->pCurrentRxChannelList)++;
    /* END Msg (4:0489)-3 */

    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif

    /* Implements SPI_ESDD_UD_102 */
    #if (SPI_CHANNEL_BUFFERS_ALLOWED == SPI_TWO)
    /* Check if the buffer type is internal buffer */
    if ((SPI_ZERO == LpPBChannelConfig->ucChannelBufferType)
      #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
      || ((SPI_TRUE == Spi_GaaHighPriorityCommActive[LddHWUnitNumber])
      && (SPI_ONE != LpPBChannelConfig->ucChannelBufferType))
      #endif
      )
    {
      #if(SPI_INTERNAL_RW_BUFFERS == STD_ON)
      /* Update the RAM variable for Rx pointer with channel IB index */
      /* START Msg(2:2814)-6 */
      LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;
      /* END Msg(2:2814)-6 */
      /* START Msg(2:2824)-2 */
      /* MISRA Violation: START Msg(4:0488)-4 */
      LpCurrentRxData = LpCurrentRxData + LddBufferIndex;
      /* END Msg (4:0488)-4 */
      /* END Msg(2:2824)-2 */
      LpCurrentCommData->ddNoOfRxBuffers = LpPBChannelConfig->ddNoOfBuffers;
      #endif
    }
    else
    {
      #if (SPI_EB_CONFIGURED == STD_ON)
      /* Update the RAM variable for Rx pointer */
      LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;
      /* Update counter with number of buffers of the channel */
      LpCurrentCommData->ddNoOfRxBuffers =
                                Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
      #endif
    }
    #elif(SPI_INTERNAL_RW_BUFFERS == STD_ON)

    /* Update the RAM variable for Rx pointer with channel IB index */
    /* START Msg(2:2814)-6 */
    LpCurrentRxData = Spi_GpConfigPtr->pChannelIBRead;
    /* END Msg(2:2814)-6 */

    /* START Msg(2:2824)-2 */
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpCurrentRxData = LpCurrentRxData + LddBufferIndex;
    /* END Msg (4:0488)-4 */
    /* END Msg(2:2824)-2 */

    LpCurrentCommData->ddNoOfRxBuffers = LpPBChannelConfig->ddNoOfBuffers;
    #else
     /*
     * Update the RAM variable for Tx pointer with channel EB
     * source pointer
     */
    #if (SPI_EB_CONFIGURED == STD_ON)
    /* Update the RAM variable for Rx pointer */
    LpCurrentRxData = Spi_GaaChannelEBData[LddBufferIndex].pDestPtr;
    /* Update counter with number of buffers of the channel */
    LpCurrentCommData->ddNoOfRxBuffers =
                                Spi_GaaChannelEBData[LddBufferIndex].ddEBLength;
    #endif
    #endif

    /* Implements SPI_ESDD_UD_096 */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    (LpCurrentCommData->ddNoOfRxChannels)--;
    /* MISRA Violation: START Msg(4:2962)-10 */
    /* Save the pointer to data to be received */
    LpCurrentCommData->pCurrentRxData = LpCurrentRxData;
    /* END Msg(4:2962)-10 */
    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
  }
  else
  {
    /* No action required */
  }
  /* Check if all buffers in the channel are transmitted */
  if (SPI_ZERO < LpCurrentCommData->ddNoOfRxBuffers)
  {
    /* Decrement the number of buffers to be transmitted */
    (LpCurrentCommData->ddNoOfRxBuffers)--;
  }
  /* Check if all buffers in the channel are transmitted */
  else if (SPI_ZERO == LpCurrentCommData->ddNoOfRxChannels)
  {
    /* All channels are transmitted. Hence the job is transmitted */
    Spi_ProcessSequence(LddHWUnit, LucHWMemoryMode);
  }
  else
  {
    /* No action required */
  }
}
#define SPI_STOP_SEC_CODE_FAST
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name      : Spi_ProcesSeqInDualOrTxMod
**
** Service ID         : Not Applicable
**
** Description        : This function is to process remaining jobs in
**                      the sequence to be transmitted in Dual buffer mode or
**                      Tx only mode
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_CONFIG_CONST)
**                      LpHWUnitInfo, Spi_HWUnitType LddHWUnit
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstSeq, Spi_GstSeqProcess, Spi_GpConfigPtr,
**                      Spi_GddDriverStatus, Spi_GaaSeqCancel, Spi_GaaSeqQueue,
**                      Spi_GddQueueIndex, Spi_GblQueueStatus,
**                      Spi_GucHwUnitStatus, Spi_GusAllQueueSts
**
** Function Invoked   : Spi_InitiateJobTx, Spi_ChkCancelReqForSeq
**                      SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W, CSIHnBRSy, CSIHnCFGx,
**                      ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn, DTCTn, DTCn,
**                      DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_166 */
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI073, SPI120, SPI264, AR_PN0063_FR_0110, SPI075, SPI163 */
/* Implements EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE)Spi_ProcesSeqInDualOrTxMod(
P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_CONFIG_CONST) LpHWUnitInfo,
Spi_HWUnitType LddHWUnit)
{
  /*END Msg(2:3227)-1 */
  Spi_HWUnitType LddHWUnitNumber;
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  #if (SPI_CANCEL_API == STD_ON)
  uint8 LucStatusMask;
  uint8 LucVar;
  uint8 LucMask;
  #endif
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddJobListIndex;
  Spi_JobType LddReqJobListIndex;

  Spi_SequenceType LddSeqIndex;
  Spi_SequenceType LddLowestQueueIndex;

  #if (SPI_CANCEL_API == STD_ON)
  /* MISRA Violation: START Msg(4:2982)-2 */
  LucStatusMask = SPI_ZERO;
  /* END Msg(4:2982)-2 */
  #endif
  /* START Msg(2:2814)-6 */
  /* Disable transmit interrupt control */
  RH850_SV_MODE_IMR_OR(32, (LpHWUnitInfo->pTxImrAddress),
                                          (~(LpHWUnitInfo->ulTxImrMask)));

  /* Disable receive interrupt control */
  RH850_SV_MODE_IMR_OR(32, (LpHWUnitInfo->pRxImrAddress),
                                          (~(LpHWUnitInfo->ulRxImrMask)));


  LddHWUnitNumber = Spi_GpConfigPtr->aaHWUnitNumber[LddHWUnit];

  LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];

  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the post-build sequence structure */
  /* START Msg(2:2824)-2 */
  LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg (4:0488)-4 */

  #if (SPI_LEVEL_DELIVERED != SPI_ZERO)
  /* Check if the notification function is configured */
  if (NULL_PTR != LpSeqConfig->pSpiSeqEndNotification)
  {
    /* END Msg(2:2814)-6 */
    /* Invoke the notification function */
    LpSeqConfig->pSpiSeqEndNotification();
  }
  else
  {
    /* No action required */
  }
  #endif

  LddLowestQueueIndex = Spi_GpConfigPtr->aaHWUnitQueueIndex[LddHWUnit];

  if ( (Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]) == LddLowestQueueIndex)
  {
    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif

    Spi_GblQueueStatus[LddHWUnitNumber + SPI_TWO] = SPI_QUEUE_EMPTY;

    /*
     * Changing the hardware status after completing the sequence
     * transmission
     */
    /* START Msg(2:3892)-8 */
    Spi_GucHwUnitStatus = (Spi_GucHwUnitStatus ^
                              ((Spi_HWUnitType)(SPI_ONE << LddHWUnitNumber)));
    Spi_GusAllQueueSts = (Spi_GusAllQueueSts & ((Spi_HWUnitType)
             (~((Spi_HWUnitType)(SPI_ONE << (LddHWUnitNumber + SPI_TWO))))));

    /* END Msg(2:3892)-8 */
    /* Implements SPI_ESDD_UD_096 */
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts to protect this critical section */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif

    if (SPI_ZERO == Spi_GusAllQueueSts)
    {
      /* Update driver status as idle */
      Spi_GddDriverStatus = SPI_IDLE;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    #if (SPI_CANCEL_API == STD_ON)
    LucStatusMask = Spi_ChkCancelReqForSeq
                                         (LddHWUnitNumber, LddLowestQueueIndex);

    if (SPI_ZERO == LucStatusMask)
    #endif
    {
      #if (SPI_CANCEL_API == STD_OFF)
      Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]--;
      #endif
      LddSeqIndex =
                  Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];


      /* MISRA Violation: START Msg(4:0488)-4 */
      /* Get the pointer to the post-build sequence structure */
      LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
      /* END Msg (4:0488)-4 */

      /* Get the job list index of the last job of the sequence */
      LddJobListIndex = LpSeqConfig->ddJobListIndex;

      /* Get the number of jobs configured for the requested sequence */
      LddNoOfJobs = LpSeqConfig->ddNoOfJobs;

      /* Get the index of the job list for the first job of the sequence */
      LddReqJobListIndex = LddJobListIndex + (LddNoOfJobs - SPI_ONE);

      #if (SPI_CANCEL_API == STD_ON)
      /* Implements SPI_ESDD_UD_196 */
      /* Get the cancel byte offset for the requested sequence  */
      LucVar = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;
      /* Get the cancel byte mask */
      LucMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif


      /* Reset the cancel bit array for this sequence */
      Spi_GaaSeqCancel[LucVar] =
                             (Spi_GaaSeqCancel[LucVar] & ((uint8)(~LucMask)));


      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Enable relevant interrupts to protect this critical section */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif
      #endif /* End of (SPI_CANCEL_API == STD_ON) */
      /* Implements SPI_ESDD_UD_094 */
      /* Check if start sequence notification is enabled */
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
      #endif /*if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)*/

      /* Initiate the transmission for that sequence */
      Spi_InitiateJobTx(LddReqJobListIndex);
    } /* End of if (SPI_ZERO != Spi_GddQueueIndex[LucHWMemoryMode]) */
    #if (SPI_CANCEL_API == STD_ON)
    else
    {
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Disable relevant interrupts to protect this critical section */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif
      /* START Msg(2:3892)-8 */
      Spi_GblQueueStatus[LddHWUnitNumber + SPI_TWO] = SPI_QUEUE_EMPTY;

      Spi_GusAllQueueSts = (Spi_GusAllQueueSts & ((Spi_HWUnitType)
              (~((Spi_HWUnitType)(SPI_ONE << (LddHWUnitNumber + SPI_TWO))))));

      /* END Msg(2:3892)-8 */

      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

      /* Enable relevant interrupts to protect this critical section */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

      #endif
      if (SPI_ZERO == Spi_GusAllQueueSts)
      {
        /* Update driver status as idle */
        Spi_GddDriverStatus = SPI_IDLE;
      }
      else
      {
        /* No action required */
      }
    }
    #endif /* End of (SPI_CANCEL_API == STD_ON) */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* End of ((SPI_DUAL_BUFFER_MODE == STD_ON)
                                             || (SPI_TX_ONLY_MODE == STD_ON))*/

/*******************************************************************************
** Function Name      : Spi_ChkCancelReqForSeq
**
** Service ID         : Not Applicable
**
** Description        : This function is to check for the cancel requests during
**                      the processing of the sequence in Dual buffer or TX only
**                      modes and is called from Spi_ProcesSeqInDualOrTxMod
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : Spi_HWUnitType LddHWUnitNumber,
**                      Spi_SequenceType LddLowestQueueIndex
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : uint8 LucStatusMask
**
** Preconditions      : None
**
** Global Variable    : Spi_GpFirstSeq, Spi_GstSeqProcess, Spi_GpConfigPtr,
**                      Spi_GaaSeqCancel, Spi_GaaSeqQueue, Spi_GaaSeqResult
**                      Spi_GddQueueIndex
**
** Function Invoked   : SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used     : None
*******************************************************************************/
/* Implements SPI_ESDD_UD_035 */
#if ((SPI_DUAL_BUFFER_MODE == STD_ON) || (SPI_TX_ONLY_MODE == STD_ON))
/* Implements SPI_ESDD_UD_086 */
#if (SPI_CANCEL_API == STD_ON)
/* Implements EAAR_PN0034_FR_0061 */
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC(uint8, SPI_PRIVATE_CODE)Spi_ChkCancelReqForSeq(
           Spi_HWUnitType LddHWUnitNumber, Spi_SequenceType LddLowestQueueIndex)
{
  /* END Msg(2:3227)-1 */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_CONST) LpStsByteValue;
  P2VAR(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpStsByte;
  Spi_SequenceType LddSeqIndex;
  uint8 LucStatusOffset;
  uint8 LucStatusMask;
  uint8 LucVar;

  do
  {
    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Disable relevant interrupts to protect this critical section */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif

    Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]--;

    /* Check if critical section protection is required */
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

    /* Enable relevant interrupts to protect this critical section */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

    #endif
    /* START Msg(2:2824)-2 */
    LddSeqIndex = Spi_GaaSeqQueue[Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO]];
    /* MISRA Violation: START Msg(4:0488)-4 */
    LpSeqConfig = Spi_GpFirstSeq + LddSeqIndex;
    /* END Msg (4:0488)-4 */
    /* END Msg(2:2824)-2 */
    /* Implements SPI_ESDD_UD_196 */
    /* Get the cancel byte mask */
    LucStatusMask = Spi_GstSeqProcess[LddSeqIndex].ucCancelMask;
    if (SPI_SEQ_CANCELLED != Spi_GaaSeqResult[LddSeqIndex])
    {
      /* Get the cancel byte offset for the requested sequence  */
      LucStatusOffset = Spi_GstSeqProcess[LddSeqIndex].ucCancelOffset;

      /* Get the cancel status for this sequence */
      LucStatusMask = LucStatusMask & Spi_GaaSeqCancel[LucStatusOffset];
      if (SPI_ZERO != LucStatusMask)
      {
        Spi_GaaSeqResult[LddSeqIndex] = SPI_SEQ_CANCELLED;
        #if ((SPI_LEVEL_DELIVERED == SPI_ONE) || \
                                           (SPI_LEVEL_DELIVERED == SPI_TWO))
        /* MISRA Violation: START Msg(4:0488)-4 */
        /* START Msg(2:2814)-6 */
        if(NULL_PTR != Spi_GpConfigPtr->pStsValueArray)
        {
          /* Get the pointer to status bytes ROM value for the sequence */
          LpStsByteValue = (Spi_GpConfigPtr->pStsValueArray) +
                                    (LpSeqConfig->usStsValueStartByteIdx);
        }
        else
        {
          LpStsByteValue = NULL_PTR;
        }

        /* END Msg(2:2814)-6 */
        /* END Msg(4:0488)-4 */
        /* Get the number of status byte ROM value */
        LucVar = LpSeqConfig->ucNoOfStsByteValue;
        /* MISRA Violation: START Msg(4:0488)-4 */
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

        /* END Msg(4:0488)-4 */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

        /* Disable relevant interrupts to protect this critical section */
        SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

        #endif

        while ((SPI_ZERO < LucVar) && (NULL_PTR != LpStsByte)
                                               && (NULL_PTR != LpStsByteValue))
        {

          /*
           * Reset the status bit of the requested sequence and the
           * sequences that have jobs shared with the requested sequence
           */
          /* START Msg(2:2814)-6 */
          *LpStsByte = (*LpStsByte & ((uint8)(~(*LpStsByteValue))));
          /* END Msg(2:2814)-6 */
          /* MISRA Violation: START Msg(4:0489)-3 */
          LpStsByte++;
          /* END Msg(4:0489)-3 */
          /* MISRA Violation: START Msg(4:0489)-3 */
          LpStsByteValue++;
          /* END Msg(4:0489)-3 */
          LucVar--;
        } /* End of while (LucVar > SPI_ZERO) */

        /* Check if critical section protection is required */
        #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)

        /* Enable relevant interrupts to protect this critical section */
        SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);

        #endif
        #endif
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
  }while ((SPI_SEQ_CANCELLED == Spi_GaaSeqResult[LddSeqIndex]) &&
          (Spi_GddQueueIndex[LddHWUnitNumber + SPI_TWO] >
                                                    LddLowestQueueIndex));

  return LucStatusMask;
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif
#endif

/*******************************************************************************
** Function Name       : Spi_InitiateSyncTransmit
**
** Service ID          : Not Applicable
**
** Description         : This function is called from Spi_SyncTransmit API to
**                       initiate the synchronous transmission of the sequence
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
** Preconditions       : None
**
** Global Variable     : Spi_GpFirstSeq,  Spi_GblSyncTx, Spi_GpFirstJobList,
**                       Spi_GaaSeqResult, Spi_GpFirstJob, Spi_GaaJobResult,
**                       Spi_GddSyncDriverStatus, Spi_GusHwStatus
**
** Function invoked    : Dem_ReportErrorStatus,
**                       Spi_HWTransmitSyncJob, SPI_EXIT_CRITICAL_SECTION,
**                       SPI_ENTER_CRITICAL_SECTION
**
** Registers Used      : CSIHnMCTL0, CSIHnCTL0, CSIHnSTCR0, CSIHnCTL1,
**                       CSIHnCTL2, CSIHnCFGx, CSIHnBRSy, CSIHnSTR0, CSIHnRX0H,
**                       CSIHnTX0W, ICRn
*******************************************************************************/
/* Implements SPI_ESDD_UD_007 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI285, SPI134, SPI286, SPI328, SPI083, SPI254, SPI265 */
/* Implements SPI191, SPI006, SPI114, SPI073, SPI054, SPI281, SPI264 */
/* Implements SPI223_Conf, AR_PN0063_FR_0107, EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC(Std_ReturnType, SPI_PRIVATE_CODE) Spi_InitiateSyncTransmit
                                                     (Spi_SequenceType Sequence)
{
  /* END Msg(2:3227)-1 */
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;
  P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig;
  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  Spi_JobType LddNoOfJobs;
  Spi_JobType LddJobIndex;
  Spi_JobType LddJobListIndex;
  Std_ReturnType LenReturnValue;
  uint8 LucVar;
  /* Initialize Return Value */
  LenReturnValue = E_OK;
  /* START Msg(2:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the requested structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(2:2824)-2 */
  /* END Msg(2:0488)-4 */

  /* Update the Global status variable */
  Spi_GddSyncDriverStatus = SPI_BUSY;
  #if ((SPI_LEVEL_DELIVERED == SPI_TWO) || \
                                          (SPI_LEVEL_DELIVERED == SPI_ZERO))
  /*
   * Global boolean variable to avoid copy of properties repeatedly if
   * properties of all channels are same. This boolean allows copying channel
   * properties once. This boolean will be reset immediately after its use
   */
  Spi_GblSyncTx = SPI_TRUE;
  #endif

  /* Update the sequence result variable to SPI_SEQ_PENDING */
  Spi_GaaSeqResult[Sequence] = SPI_SEQ_PENDING;

  /* Get the number of jobs */
  /* START Msg(2:2814)-6 */
  LddNoOfJobs = LpSeqConfig->ddNoOfJobs;
  /* END Msg(2:2814)-6 */

  /* Get the index of the job list for the requested sequence */
  LddJobListIndex = (LpSeqConfig->ddJobListIndex) + (LddNoOfJobs - SPI_ONE);

  /* START Msg(2:0488)-4 */
  /* START Msg(2:2824)-2 */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg(2:0488)-4 */
  /* Implements SPI_ESDD_UD_094 */
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
  #endif /* #if (SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */

  while (SPI_ZERO < LddNoOfJobs)
  {
    /* START Msg(2:2814)-6 */
    LddJobIndex = LpJobList->ddJobIndex;
    /* END Msg(2:2814)-6 */
    LucVar = LpJobList->ucJobCount;
    LucVar++;

    /* START Msg(2:0488)-4 */
    /* START Msg(2:2824)-2 */
    /* Get the pointer to the job of the sequence */
    LpJobConfig = Spi_GpFirstJob + LddJobIndex;
    /* END Msg(2:2824)-2 */
    /* END Msg(2:0488)-4 */

    /* Update the job result variable */
    Spi_GaaJobResult[LddJobIndex] = SPI_JOB_PENDING;

    do
    {
      #if (SPI_INTERNAL_DIAG_BUFF == STD_ON)
      /* Invoke the lower layer function to synchronously transmit */
      LenReturnValue =
                    Spi_HWTransmitSyncJob(LpJobConfig, Sequence, LddJobIndex);
      #else
      /* Invoke the lower layer function to synchronously transmit */
      LenReturnValue = Spi_HWTransmitSyncJob(LpJobConfig);
      #endif

      if (E_OK != LenReturnValue)
      {
        /* Update the job result variable */
        Spi_GaaJobResult[LddJobIndex] = SPI_JOB_FAILED;
        /* Break the loops */
        LucVar = SPI_ZERO;
        LddNoOfJobs = SPI_ONE;
      }
      else
      {
        /* Decrement the job count */
        LucVar--;
      }
    }while (SPI_ZERO < LucVar);

    if (SPI_JOB_FAILED != Spi_GaaJobResult[LddJobIndex])
    {
      /* Update the job result variable */
      Spi_GaaJobResult[LddJobIndex] = SPI_JOB_OK;
    }
    else
    {
      /* No action required */
    }

    /* MISRA Violation: START Msg(4:0489)-1 */
    /* Decrement the pointer to the job list */
    LpJobList--;
    /* END Msg(4:0489)-1 */

    /* Decrement the number of jobs */
    LddNoOfJobs--;
  }

  if (E_OK == LenReturnValue)
  {
    /* Update the sequence result variable to SPI_SEQ_OK */
    Spi_GaaSeqResult[Sequence] = SPI_SEQ_OK;
  }
  else
  {
    /* Update the sequence result variable to SPI_SEQ_FAILED */
    Spi_GaaSeqResult[Sequence] = SPI_SEQ_FAILED;

    /* Implements SPI_ESDD_UD_122 */
    /* Raise production error */
    /* Report error to DEM    */
    Dem_ReportErrorStatus(SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED);
  }
    /* Implements SPI_ESDD_UD_157 */
    #if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
       /* Disable relevant interrupts */
    SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    #endif

    /*
     * Changing the hardware status after completing the sequence
     * transmission
     */
    Spi_GusHwStatus = (Spi_GusHwStatus ^ (LpSeqConfig->usHWListIndex));

    #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
    /* Enable relevant interrupts */
    SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
    #endif
  if (SPI_ZERO == Spi_GusHwStatus)
  #endif /* (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON) */
  {
    Spi_GddSyncDriverStatus = SPI_IDLE;
  }
  #if (SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT == STD_ON)
  else
  #endif
  {
    /* No action required */
  }

  #if ((SPI_LEVEL_DELIVERED == SPI_TWO) || \
                                          (SPI_LEVEL_DELIVERED == SPI_ZERO))
  if (SPI_IDLE == Spi_GddSyncDriverStatus)
  {
    /* Reset the Synchronous transmit flag */
    Spi_GblSyncTx = SPI_FALSE;
  }
  else
  {
    /* No action required */
  }
  #endif
  /* Implements SPI_ESDD_UD_101 */
  /* Implements SPI_ESDD_UD_209 */
  #if ((SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED == STD_ON) && \
                         ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
                               (SPI_LEVEL_DELIVERED == SPI_TWO)))
  /* Check if the notification function is configured */
  if (NULL_PTR != LpSeqConfig->pSpiSyncSeqEndNotification)
  {
    /* Invoke the notification function */
    LpSeqConfig->pSpiSyncSeqEndNotification();
  }
  else
  {
    /* No action required */
  }
  #endif /*
          * ((SPI_SYNC_SEQ_ENDNOTIFICATION_ENABLED == STD_ON) && \
          *                       ((SPI_LEVEL_DELIVERED == SPI_ZERO) || \
          *                                (SPI_LEVEL_DELIVERED == SPI_TWO)))
          */
  return LenReturnValue;
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name       : Spi_GetTxRegValue
**
** Service ID          : Not Applicable
**
** Description         : This service is called from
**                       Spi_ProcessChannelInDirAccMod to get the data to be
**                       written in to Tx register
**
** Sync/Async          : Asynchronous.
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST)
**                                                                  LpJobConfig,
**                       P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                           SPI_CONFIG_CONST)LpPBChannelConfig,
**                       P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                 LpDataAccess,
**                       P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA)
**                                                            LpCurrentCommData,
**                       Spi_DataType LddData
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : void
**
** Preconditions       : None
**
** Global Variable     : None
**
** Function invoked    : None
**
** Registers Used      : None
*******************************************************************************/

#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                                        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON))|| \
                                        (SPI_HW_PRIORITY_ENABLED == STD_ON))

#if ((SPI_8BIT_DATA_WIDTH == STD_OFF) && (SPI_16BIT_DATA_WIDTH == STD_OFF))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_178 */
/* START Msg(2:3227)-1 */
/* START Msg(2:3206)-7 */
FUNC(void, SPI_PRIVATE_CODE)Spi_GetTxRegValue(
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST)LpPBChannelConfig,
P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST)LpDataAccess,
P2VAR(Spi_CurrentCommData, AUTOMATIC, SPI_CONFIG_DATA) LpCurrentCommData,
Spi_DataType LddData)
/* END Msg(2:3206)-7 */
/* END Msg(2:3227)-1 */
{

  uint32 LulShiftData;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess2;
  /* END Msg(4:0759)-1 */
  /* START Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:2962)-10 */
  if ((SPI_TRUE == LpPBChannelConfig->blEDLEnabled) &&
                     (SPI_TRUE != LpPBChannelConfig->blDirection) &&
                     (SPI_SIXTEEN >= LpPBChannelConfig->ucDLSSetting) &&
                     (SPI_ONE <= LpPBChannelConfig->ucDLSSetting))
  /* END Msg (4:2962)-10 */
  /* END Msg(2:2814)-6 */
  {
    LulShiftData = (uint32)LddData;
    LulShiftData = (uint32)(LulShiftData << (SPI_SIXTEEN -
                                            (LpPBChannelConfig->ucDLSSetting)));
    LunDataAccess2.ulRegData = LulShiftData;
    /* START Msg(2:2814)-6 */
    LpDataAccess->Tst_ByteAccess.usRegData1 =
              LunDataAccess2.usRegData5[SPI_ZERO] >> (SPI_SIXTEEN -
                                             (LpPBChannelConfig->ucDLSSetting));
    /* END Msg(2:2814)-6 */
    LunDataAccess2.usRegData5[SPI_ZERO] =
                                    LpDataAccess->Tst_ByteAccess.usRegData1;
  }
  else
  {
    /*
     * Data width is maximum 32-bit. Tx data needs to be split to
     * LS Byte and MS Byte. Hence, load the Tx data to local union variable
     */
    LunDataAccess2.ulRegData = LddData;
  }

  /* Since data width is maximum 32-bit, check if the the data width of
   * requested channel is more than 16 bits
   */
  if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled)
  {
    /* Data width is maximum 16-bit. Hence, load LSB portion of the
     * local variable with the 16-bit data to be transmitted
     */
    LpDataAccess->Tst_ByteAccess.usRegData1 =
                                      LunDataAccess2.usRegData5[SPI_ZERO];
  }
  else
  {
    /* Check if the configured data direction is LSB first */
    if (SPI_TRUE == LpPBChannelConfig->blDirection)
    {
      /* Load Tx data portion of the local variable with LSB first */
      LpDataAccess->Tst_ByteAccess.usRegData1 =
                                     LunDataAccess2.usRegData5[SPI_ZERO];
    }
    else
    {
      /* Load Tx data portion of the local variable with MSB first */
      LpDataAccess->Tst_ByteAccess.usRegData1 =
                                      LunDataAccess2.usRegData5[SPI_ONE];
    }

    /* Set the EDL bit in the local union variable */
    LpDataAccess->Tst_ByteAccess.ucRegData3 = SPI_SET_EDL;
    /* START Msg(2:2814)-6 */
    /* Set the flag for indicating EDL */
    LpCurrentCommData->blTxEDL = SPI_TRUE;
    /* END Msg(2:2814)-6 */
    LpCurrentCommData->blRxEDL = SPI_TRUE;

  } /* End of !if (SPI_TRUE != LpPBChannelConfig->blEDLEnabled) */

}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif
#endif

/*******************************************************************************
** Function Name       : Spi_ProcessTransmission
**
** Service ID          : Not Applicable
**
** Description         : This service is called from Spi_AsyncInDirAccOrFifoMod
**                       to initiate job transmission or to Push the sequence in
**                       Queue in case for ongoing transmission
**
** Sync/Async          : Asynchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : Spi_SequenceType Sequence, boolean LblInitiateTx,
**                       uint8 LucQueueIndex, uint8 LucHWMemoryMode,
**                       Spi_JobType LddLowestQueueIndex
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : void
**
** Preconditions       : None
**
** Global Variable     : Spi_GpFirstSeq, Spi_GpFirstJob, Spi_GaaJobResult,
**                       Spi_GaaJobQueue, Spi_GpFirstJobList,
**                       Spi_GblQueueStatus, Spi_GaaJobCount,
**                       Spi_GddQueueIndex, Spi_GusAllQueueSts
**
** Function invoked    : Spi_InitiateJobTx, Spi_PushToQueue,
**                       SPI_ENTER_CRITICAL_SECTION, SPI_EXIT_CRITICAL_SECTION
**
** Registers Used      : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0,
**                       CSIHnMCTL2, CSIHnSTCR0, CSIHnSTR0, CSIHnTX0W,
**                       CSIHnBRSy, CSIHnCFGx, ICRn, IMRn, DCENn, DCSTCn, DCSTn,
**                       DDAn, DTCTn, DTCn, DTFRn, DTFRRQCn, DCSTSn, DTFRRQn,
**                       DSAn
*******************************************************************************/
/* Implements SPI_ESDD_UD_055 */
#if (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                            (SPI_HW_PRIORITY_ENABLED == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI194, AR_PN0063_FR_0077, AR_PN0063_FR_0078 */
/* Implements EAAR_PN0034_FR_0061 */
/* Implements SPI_ESDD_UD_132 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE) Spi_ProcessTransmission
(Spi_SequenceType Sequence, boolean LblInitiateTx, uint8 LucQueueIndex,
uint8 LucHWMemoryMode, Spi_JobType LddLowestQueueIndex)
/* END Msg(2:3227)-1 */
{

  P2CONST(Spi_JobListType, AUTOMATIC, SPI_CONFIG_CONST) LpJobList;
  P2CONST(Spi_SequenceConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpSeqConfig;

  Spi_JobType LddJobListIndex;
  Spi_JobType LddReqJobListIndex;
  Spi_JobType LddCntrForJobsReq;
  Spi_JobType LddJob;
  /* START Msg(2:2824)-2 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the pointer to the sequence structure */
  LpSeqConfig = Spi_GpFirstSeq + Sequence;
  /* END Msg(4:0488)-4 */
  /* END Msg(2:2824)-2 */
  /* Implements SPI_ESDD_UD_181 */
  /* START Msg(2:2814)-6 */
  /* Copy a counter with number of jobs configured for the requested sequence */
  LddCntrForJobsReq = LpSeqConfig->ddNoOfJobs;
   /* END Msg(2:2814)-6 */
  /* Get the job list index of the last job of the sequence */
  LddJobListIndex = LpSeqConfig->ddJobListIndex;
   /* MISRA Violation: START Msg(4:0488)-4 */
  /* START Msg(2:2824)-2 */
  /* Get the pointer to the job list */
  LpJobList = Spi_GpFirstJobList + LddJobListIndex;
  /* END Msg(2:2824)-2 */
  /* END Msg(4:0488)-4 */
  /* Get the index of the job list for the first job of the sequence */
  LddReqJobListIndex = LddJobListIndex + (LddCntrForJobsReq - SPI_ONE);


  if (SPI_TRUE == LblInitiateTx)
  {
    Spi_GddQueueIndex[LucQueueIndex] = LddLowestQueueIndex;

    if (SPI_QUEUE_EMPTY != Spi_GblQueueStatus[LucQueueIndex])
    {
      LddJob = Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]];
    }
    else
    {
      /* No action required */
    }
    do
    {
      /* Push the job list index into the queue */
      Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] = LddJobListIndex;

      /* Set the Job status as SPI_JOB_QUEUED*/
      /* START Msg(2:2814)-6 */
      Spi_GaaJobResult[LpJobList->ddJobIndex] = SPI_JOB_QUEUED;
      /* END Msg(2:2814)-6 */

      /* Push the job count into RAM */
      Spi_GaaJobCount[LpJobList->ddJobIndex] = LpJobList->ucJobCount;
      /* Increment the job list index */
      LddJobListIndex++;
      /* MISRA Violation: START Msg(4:0489)-3 */
      /*Increment the job list*/
      LpJobList++;
      /* END Msg(4:0489)-3 */
      Spi_GddQueueIndex[LucQueueIndex]++;
      /* Decrement the number of jobs */
      LddCntrForJobsReq--;
    }while (SPI_ZERO < LddCntrForJobsReq);

    if (SPI_QUEUE_EMPTY != Spi_GblQueueStatus[LucQueueIndex])
    {
      /* MISRA Violation: START Msg(4:2962)-10 */
      Spi_GaaJobQueue[Spi_GddQueueIndex[LucQueueIndex]] = LddJob;
      /* END Msg (4:2962)-10 */
    }
    else
    {
      /* Check if Start sequence macro is enabled*/
      #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON)
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
      #endif/* #if(SPI_SEQ_STARTNOTIFICATION_ENABLED == STD_ON) */
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif
      Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_FILLED;

      /* MISRA Violation: START Msg(4:1891)-11 */
      /* MISRA Violation: START Msg(4:2984)-9 */
      Spi_GusAllQueueSts = (Spi_GusAllQueueSts |
                                 ((uint16)((uint8)(SPI_ONE << LucQueueIndex))));
      /* END Msg(4:1891)-11 */

      /* END Msg(4:2984)-9 */
      /* Point to the index of the last job pushed to the queue */
      Spi_GddQueueIndex[LucQueueIndex]--;
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif
      /* Initiate the transmission for that sequence */
      Spi_InitiateJobTx(LddReqJobListIndex);
    }
  } /* End of queue is empty */
  else
  {
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    if (SPI_FALSE == LpSeqConfig->blIsHighPriority)
    #endif
    {
      Spi_PushToQueue(Sequence, LucHWMemoryMode);
    }
    #if (SPI_HW_PRIORITY_ENABLED == STD_ON)
    else
    {
      Spi_PushToQueue(Sequence, SPI_DIRECT_ACCESS_MODE_CONFIGURED);
      /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Disable relevant interrupts */
      SPI_ENTER_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif
      /* Change the queue status as FILLED */
      Spi_GblQueueStatus[LucQueueIndex] = SPI_QUEUE_FILLED;
        /* Check if critical section protection is required */
      #if (SPI_CRITICAL_SECTION_PROTECTION == STD_ON)
      /* Enable relevant interrupts */
      SPI_EXIT_CRITICAL_SECTION(SPI_RAM_DATA_PROTECTION);
      #endif
    }
    #endif
  } /* End of Queue is not empty */

}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name       : Spi_CfgRegSettings
**
** Service ID          : Not Applicable
**
** Description         : This service is called from Spi_AsyncChannelRegSettings
**                       function for setting the configuration register when
**                       Spi_GblInitiateJobTx is false during the Asynchronous
**                       transmission
**
** Sync/Async          : Asynchronous
**
** Re-entrancy         : Reentrant
**
** Input Parameters    : P2CONST(Spi_ChannelPBConfigType, AUTOMATIC,
**                                          SPI_CONFIG_CONST) LpPBChannelConfig,
**                       P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST)
**                                                                  LpJobConfig,
**                       Spi_HWUnitType LddHWUnit
**
** InOut Parameters    : None
**
** Output Parameters   : None
**
** Return parameter    : void
**
** Preconditions       : None
**
** Global Variable     : Spi_GstHWUnitInfo, Spi_GpConfigPtr
**
** Function invoked    : None
**
** Registers Used      : CSIHnSTCR0, CSIHnSTR0, CSIHnCFGx
*******************************************************************************/

#if ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
   ((SPI_HWUNIT_ASYNCHRONOUS == STD_ON) || (SPI_HW_PRIORITY_ENABLED == STD_ON))\
                                        || (SPI_FIFO_MODE == STD_ON))
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_176 */
/* START Msg(2:3227)-1 */
FUNC(void, SPI_PRIVATE_CODE)Spi_CfgRegSettings(
P2CONST(Spi_ChannelPBConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpPBChannelConfig,
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_CONFIG_CONST) LpJobConfig,
Spi_HWUnitType LddHWUnit)
/* END Msg(2:3227)-1 */
{
  #if (SPI_CSIH_CONFIGURED == STD_ON)
  P2CONST(uint8, AUTOMATIC, SPI_CONFIG_DATA) LpChipSelect;
  uint8 LucVar;
  #endif
  /* MISRA Violation: START Msg(4:0759)-1 */
  Spi_DataAccess LunDataAccess1;
  /* END Msg (4:0759)-1 */

  #if (SPI_CSIH_CONFIGURED == STD_ON)
  /* Implements SPI_ESDD_UD_206 */
  /* Clear the status register */
  /* START Msg(2:3892)-8 */
  /* START Msg(2:2814)-6 */
  SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->STCR0,
                                                     SPI_CSIH_CLR_STS_FLAGS)
  SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
  &(Csih_BaseAddress[LddHWUnit]->STR0), (uint32)SPI_ZERO,
                       (uint32)(SPI_CSIH_CLR_STS_FLAGS), SPI_ASYNCTRANSMIT_SID)
  /* End Msg(2:2814)-6 */
  /* END Msg(2:3892)-8 */

  /* START Msg(2:2814)-6 */
  /* MISRA Violation: START Msg(4:0488)-4 */
  /* Get the value for multiple chip selects configured */
  LpChipSelect = (Spi_GpConfigPtr->pCSArray) + (LpJobConfig->ucCSArrayIndex);
  /* END Msg (4:0488)-4 */
  /* END Msg(2:2814)-6 */
  /* Load the number of chip selects */
  LucVar = LpJobConfig->ucNoOfCS;
  /*
  * To load configuration register, read the existing value to
  * local union variable
  */
  /* START Msg(2:2814)-6 */
  if(SPI_ZERO == *LpChipSelect)
  /* END Msg(2:2814)-6 */
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG0;
  }
  else if(SPI_ONE == *LpChipSelect)
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG1;
  }
  else if(SPI_TWO == *LpChipSelect)
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG2;
  }
  else if(SPI_THREE == *LpChipSelect)
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG3;
  }
  else if(SPI_FOUR == *LpChipSelect)
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG4;
  }
  else if(SPI_FIVE == *LpChipSelect)
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG5;
  }
  else if(SPI_SIX == *LpChipSelect)
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG6;
  }
  /* MISRA Violation: START Msg(4:0715)-14 */
  else if(SPI_SEVEN == *LpChipSelect)
  {
    LunDataAccess1.ulRegData = Csih_BaseAddress[LddHWUnit]->CFG7;
  }
  else
  {
    /*To avoid misra*/
  }
  /* END Msg(4:0715)-14 */
  /* MISRA Violation: START Msg(4:2962)-10 */
  /* Load the local variable with data width */
  LunDataAccess1.ucRegData4[SPI_THREE] =
                      (LunDataAccess1.ucRegData4[SPI_THREE] & SPI_DLS_MASK);
  /* START Msg(2:2814)-6 */
  LunDataAccess1.ucRegData4[SPI_THREE] =
   (LunDataAccess1.ucRegData4[SPI_THREE] | LpPBChannelConfig->ucDLSSetting);
  /* END Msg (2:2814)-6 */
  /* END Msg (4:2962)-10 */
  /* Load the local variable with configured direction */
  if (SPI_TRUE == LpPBChannelConfig->blDirection)
  {
    /* Direction is LSB, set DIR bit */
    LunDataAccess1.ucRegData4[SPI_TWO] = (LunDataAccess1.ucRegData4[SPI_TWO]
                                                         | SPI_SET_DIR_LSB);
  }
  else
  {
    /* Direction is MSB, reset DIR bit */
    LunDataAccess1.ucRegData4[SPI_TWO] = (LunDataAccess1.ucRegData4[SPI_TWO]
                                                      & SPI_RESET_DIR_LSB);
  }
  do
  {
    /* Initialize CSIH configuration register */
    if(SPI_ZERO == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG0,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG0), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else if(SPI_ONE == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG1,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG1), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else if(SPI_TWO == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG2,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG2), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else if(SPI_THREE == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG3,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG3), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else if(SPI_FOUR == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG4,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG4), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else if(SPI_FIVE == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG5,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG5), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else if(SPI_SIX == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG6,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG6), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    /* MISRA Violation: START Msg(4:0715)-14 */
    else if(SPI_SEVEN == *LpChipSelect)
    {
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CFG7,
                                                   LunDataAccess1.ulRegData)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CFG7), LunDataAccess1.ulRegData,
                                    SPI_CSIHCFG_MASK, SPI_ASYNCTRANSMIT_SID)
    }
    else
    {
      /*To avoid Misra*/
    }
    /* END Msg(4:0715)-14 */
    LucVar--;
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpChipSelect++;
    /* END Msg(4:0489)-3 */
  }while (SPI_ZERO < LucVar);
  #endif /* End of #if (SPI_CSIH_CONFIGURED == STD_ON) */

}
#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
** Function Name      : Spi_CheckAndInvokeTxIsr
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked from
**                      Spi_HWMainFunction_Handling to check the Tx interrupt
**                      flag in polling mode and invoke Spi_TransmitISR function
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_HWUnitInfo, AUTOMATIC,
**                                              SPI_PRIVATE_CONST) LpHWUnitInfo,
**                      Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : Spi_GstHWUnitInfo
**
** Function Invoked   : Spi_TransmitISR, Spi_ReceiveISR
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      CSIHnTX0H, CSIHnRX0W, CSIHnRX0H, ICRn, IMRn, DCENn,
**                      DCSTCn, DCSTn, DDAn, DTCTn, DTCn, DTFRn, DTFRRQCn,
**                      DCSTSn, DTFRRQn, DSAn
*******************************************************************************/

#if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_FIFO_MODE == STD_ON) || \
                                             (SPI_DUAL_BUFFER_MODE == STD_ON)))
/* START Msg(2:3227)-1 */
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_171 */
/* Implements SPI_ESDD_UD_133 */
FUNC(void, SPI_PRIVATE_CODE) Spi_CheckAndInvokeTxIsr
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode )
{
  /* END Msg(2:3227)-1 */
  /* START Msg(2:2814)-6 */
  /* START Msg(2:3892)-8 */
  if (SPI_INT_FLAG_MASK ==
           ((*LpHWUnitInfo->pTxIntCntlAddress) & SPI_INT_FLAG_MASK))
  /* END Msg(2:2814)-6 */
  /* END Msg(2:3892)-8 */
  {
    #if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                ((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
                        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)))
    if(SPI_DIRECT_ACCESS_MODE_CONFIGURED == LucHWMemoryMode)
    {
      /* START Msg(2:3892)-8 */
      if (SPI_INT_FLAG_MASK ==
                  ((*LpHWUnitInfo->pRxIntCntlAddress) & SPI_INT_FLAG_MASK))
      /* END Msg(2:3892)-8 */
      {
        /* Clear the interrupt flag */
        RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                       (SPI_CLR_INT_REQ));
        /* Clear the interrupt flag */
        RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                                       (SPI_CLR_INT_REQ));
        /* Transmit next data */
        Spi_TransmitISR(LddHWUnit, LucHWMemoryMode);

        /* Read received data */
        Spi_ReceiveISR(LddHWUnit, LucHWMemoryMode);
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* Clear the interrupt flag */
      RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                    (SPI_CLR_INT_REQ));
      /* Transmit next data */
      Spi_TransmitISR(LddHWUnit, LucHWMemoryMode);
    }
    #else
    /* Clear the interrupt flag */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pTxIntCntlAddress),
                                                   (SPI_CLR_INT_REQ));
    /* Transmit next data */
    Spi_TransmitISR(LddHWUnit, LucHWMemoryMode);
    #endif
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name      : Spi_CheckAndInvokeRxIsr
**
** Service ID         : Not Applicable
**
** Description        : This function is invoked from
**                      Spi_HWMainFunction_Handling to check the Rx interrupt
**                      flag in polling mode and invoke Spi_ReceiveISR function
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : P2CONST(Spi_HWUnitInfo, AUTOMATIC,
**                                              SPI_PRIVATE_CONST) LpHWUnitInfo,
**                      Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode
**
** InOut Parameters   : None
**
** Output Parameters  : None
**
** Return parameter   : void
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : Spi_ReceiveISR
**
** Registers Used     : CSIHnCTL0, CSIHnCTL1, CSIHnCTL2, CSIHnMCTL0, CSIHnMCTL2,
**                      CSIHnSTCR0, CSIHnSTR0, CSIHnBRSy, CSIHnCFGx, CSIHnTX0W,
**                      CSIHnRX0H, ICRn, IMRn, DCENn, DCSTCn, DCSTn, DDAn,
**                      DTCTn, DTCn, DTFRn, DTFRRQCn, DCSTSn, DTFRRQn, DSA
*******************************************************************************/
/* Implements SPI_ESDD_UD_041 */
#if ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
     (((SPI_DIRECT_ACCESS_MODE == STD_ON) && \
        (SPI_HWUNIT_ASYNCHRONOUS == STD_ON)) || (SPI_TX_ONLY_MODE == STD_ON)))
/* START Msg(2:3227)-1 */
#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_133 */
FUNC(void, SPI_PRIVATE_CODE) Spi_CheckAndInvokeRxIsr
(P2CONST(Spi_HWUnitInfo, AUTOMATIC, SPI_PRIVATE_CONST) LpHWUnitInfo,
Spi_HWUnitType LddHWUnit, uint8 LucHWMemoryMode )
{
  /* END Msg(2:3227)-1 */
  /* START Msg(2:2814)-6 */
  if (SPI_INT_FLAG_MASK ==
               (uint16)((*LpHWUnitInfo->pRxIntCntlAddress) & SPI_INT_FLAG_MASK))
  {
    /* END Msg(2:2814)-6 */
    /* Clear the interrupt flag */
    RH850_SV_MODE_ICR_AND(16, (LpHWUnitInfo->pRxIntCntlAddress),
                                              (SPI_CLR_INT_REQ));
    /* Read received data */
    Spi_ReceiveISR(LddHWUnit, LucHWMemoryMode);
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif

/*******************************************************************************
** Function Name      : Spi_SetEojAndCsriBits / Spi_SetEojBit
**
** Service ID         : Not Applicable
**
** Description        : This function is to Set the EOJ bit & CSRI bit to
**                      inactive state before the last job
**
** Sync/Async         : Synchronous
**
** Re-entrancy        : Non-Reentrant
**
** Input Parameters   : None
**
** Input Parameters   : P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                  LpJobConfig,
**                      P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST)
**                                                                 LpDataAccess,
**                      Spi_NumberOfDataType LddNoOfTxBuffers,
**                      Spi_ChannelType LddNoOfChannels,
**                      Spi_HWUnitType LddHWUnit
**
** Output Parameters  : None
**
** Return parameter   : None
**
** Preconditions      : None
**
** Global Variable    : None
**
** Function Invoked   : None
**
** Registers Used     : CSIHnCTL1
*******************************************************************************/
/* Implements SPI_ESDD_UD_060 */
/* Implements SPI_ESDD_UD_089 */
#if ((SPI_LEVEL_DELIVERED == SPI_ZERO) || ((SPI_LEVEL_DELIVERED == SPI_TWO) && \
                                            (SPI_DIRECT_ACCESS_MODE == STD_ON)))

#define SPI_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements SPI_ESDD_UD_097 */
/* Implements SPI_ESDD_UD_133 */
/* START Msg(2:3227)-1 */
#if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
FUNC(void, SPI_PRIVATE_CODE) Spi_SetEojAndCsriBits(
P2CONST(Spi_JobConfigType, AUTOMATIC, SPI_PRIVATE_CONST) LpJobConfig,
P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST) LpDataAccess,
Spi_NumberOfDataType LddNoOfTxBuffers, Spi_ChannelType LddNoOfChannels,
                                                   Spi_HWUnitType LddHWUnit)
#else
FUNC(void, SPI_PRIVATE_CODE) Spi_SetEojBit(
P2VAR(Spi_DataAccess, AUTOMATIC, SPI_PRIVATE_CONST) LpDataAccess,
Spi_NumberOfDataType LddNoOfTxBuffers, Spi_ChannelType LddNoOfChannels)
#endif
/* END Msg(2:3227)-1 */
{
  #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
  uint32 LulCxCTL1;
  #endif /* (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF) */
  if ((SPI_ONE == LddNoOfTxBuffers) && (SPI_ONE == LddNoOfChannels))
  {
    LpDataAccess->Tst_ByteAccess.ucRegData3 = SPI_SET_EOJ;
    #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF)
    /* START Msg(2:2814)-6 */
    /* Check if CSIHnCSRI bit is configured true  */
    if (SPI_CSRI_FLAG_MASK == (uint8)(LpJobConfig->ulMainCtl1Value
                                      & SPI_CSRI_FLAG_MASK))
    /* END Msg(2:2814)-6 */
    {
      /* Set CSRI bit of CSIHnCTL1 register before the last job */
      /* MISRA Violation: START Msg(4:0402)-12 */
      LulCxCTL1 = (Csih_BaseAddress[LddHWUnit]->CTL1 | (~SPI_CSRI_AND_MASK));
      SPI_CSIH_WRITE_REG_ONLY(Csih_BaseAddress[LddHWUnit]->CTL1, LulCxCTL1)
      SPI_CSIH_MASKED_CHECK_WRITE_VERIFY_RUNTIME(
      &(Csih_BaseAddress[LddHWUnit]->CTL1), LulCxCTL1,
                              SPI_CTLREG_32_BIT_MASK, SPI_SYNCTRANSMIT_SID)
      /* END Msg(4:0402)-12 */
    }
    else
    {
      /* No action required */
    }
    #endif /* #if (SPI_PERSISTENT_HW_CONFIGURATION_ENABLED == STD_OFF ) */
  }
  else
  {
    /* No action required */
  }
}

#define SPI_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif

/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
