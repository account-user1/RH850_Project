/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */

/* STARTSINGLE_OF_MULTIPLE */

/* KB begin CanLL_Header */
/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/** \file     Can.c / Can_Irq.c / Can_Local.h
 *  \brief    Implementation of the CAN driver
 *  \details  see functional description below
 *
 *********************************************************************************************************************/
/* ***************************************************************************
|-----------------------------------------------------------------------------
|               A U T H O R   I D E N T I T Y
|-----------------------------------------------------------------------------
| Initials     Name                      Company
| --------     ---------------------     -------------------------------------
| Her          Peter Herrmann            Vector Informatik GmbH
|-----------------------------------------------------------------------------
|               R E V I S I O N   H I S T O R Y
|-----------------------------------------------------------------------------
| Date       Version Author Description
| ---------  ------- ------ --------------------------------------------------
| 2012-04-13 1.00.00  Her - Initial revision (alpha version)
| 2012-08-28 1.00.01  Her - Initial revision (beta version )
| 2013-02-01 1.01.00  Her - ESCAN00065098: Initial release version
| 2013-03-18 1.02.00  Her - ESCAN00065594: Additional (High End) features
| 2013-06-03 1.03.00  Her - ESCAN00068062: Rx Dedicated Buffers support
|                     Her - ESCAN00068305: Reduce RAM resource consumption by tailoring the configuration
|                     Her - ESCAN00068956: CAN messages to be transmitted are missing
| 2013-07-26 1.03.80  Her - ESCAN00069335: CAN-FD Bitrate Switching Prototype
| 2013-08-08 1.04.00  Her - ESCAN00069461: Further transmissions are not accepted but a memory violation is reported
|                     Her - ESCAN00069673: Conditional ECC initialization of the embedded CAN Message RAM
|                     Her - ESCAN00069937: GHS support
| 2013-09-27 1.05.00  Her - ESCAN00070770: Use Overrun in Status
|                     Her - ESCAN00070771: Compiler error: "finishRxFullCan" undefined
| 2013-10-17 1.06.00  Her - ESCAN00070952: Support customer specific post initialization
|                     Her - ESCAN00071166: AR4-328: Predefined Runtime Measurement Points
|                     Her - ESCAN00071326: Delayed overrun notification
|                     Her - ESCAN00071493: Message processed in wrong (interrupt or task ) context 
| 2013-11-20 1.07.00  Her - ESCAN00073084: Improvements on derivative handling
| 2014-02-12 1.08.00  Her - ESCAN00073939: Enhanced CAN-FD (Full) support
| 2014-03-17 1.09.00  Her - ESCAN00074327: Support embedded assembler for DiabData
| 2014-06-13 1.10.00  Her - ESCAN00076201: Support MPC5777C derivative
| 2014-10-30 2.00.00  Her - ESCAN00079193: AR4-R11 Update using ComStackLib
| 2015-01-30 2.01.00  Her - ESCAN00079800: Added CBD support (for Traveo derivative)
| 2015-02-20 2.02.00  Her - ESCAN00081372: AR4-R11 Update using ComStackLib (support Spc58xx)
| 2015-03-18 2.02.01  Her - ESCAN00081884: compile error
| 2015-04-02 2.02.02  Her - ESCAN00082190: Power Down (sleep mode) correction
|                     Her - ESCAN00082291: Memory access misalignment exception
| 2015-04-16 2.02.03  Her - ESCAN00082521: Extended Id Type not correct detected
|                     Her - ESCAN00082722: CANbedded only: Memory access misalignment exception
|                     Her - ESCAN00082724: Speed up TxCopyToCan
| 2015-07-06 2.02.04  Her - ESCAN00083815: Tx Confirmation gets lost
|                     Her - ESCAN00088481: Compiler error occurs
| 2015-07-30 2.03.00  Her - ESCAN00084313: Support MCAN Core release 3.1.0 ff.
|                     Her - ESCAN00084515: Use generated FullCAN masks
|                     Her - ESCAN00084650: Support ARM Cortex-Mx Data Memory Barrier
|                     Her - ESCAN00084814: Compiler error due to nested macro construction
| 2015-10-09 2.03.01  Her - ESCAN00085813: Endless loop during reception of messages
| 2015-11-11 2.04.00  Her - ESCAN00086128: Dynamic Rx FullCAN Message filtering failure
|                     Her - ESCAN00086359: Bosch Errata - support of workaround
| 2015-12-02 2.04.01  Her - ESCAN00086934: Support Keil compiler
|                     Her - ESCAN00087003: Missing pre-processor constants
|                     Her - ESCAN00087005: Re-Initialization fails
|                     Her - ESCAN00087056: Erroneous cancel notification
| 2015-12-03 2.05.00  Her - ESCAN00087255: Restructured due to AR4/R14
|                     Her - ESCAN00087256: Compile warning (erratum_013)
| 2016-01-21 2.05.01  Her - ESCAN00087586: Memory overwrite during RAM check
|                     Her - ESCAN00087612: Wrong mailbox checked
| 2016-02-19 2.06.00  Her - ESCAN00088392: Support 8 CAN channels (only Organi affected)
|                     Her - ESCAN00088519: Support more than 255 Dynamic Rx Objects
|                     Her - ESCAN00088756: Reserved bits may only be written with "0"
|                     Her - ESCAN00088813: Incorrect switching between Normal CAN and CAN-FD
|                     Her - ESCAN00089048: Support Mirror Mode (CBD)
|                     Her - ESCAN00089049: Assertion causes compile error
|                     Her - ESCAN00089131: Dynamic Rx objects compile error
| 2016-04-12 2.06.01  Her - ESCAN00089406: AR4/R14 adaptations to AR3
| 2016-04-22 2.06.02  Her - ESCAN00089587: Memory overwrite during RAM check
|                     Her - ESCAN00089610: CAN-ID Rx access macros
| 2016-04-28 2.07.00  Her - ESCAN00089867: MISRA improvements
|            2.08.xx  Her - ESCAN00092200: Will be used for Silent branch
| 2016-06-22 2.09.00  Her - ESCAN00090584: Function call with missing parameter
|                     Her - ESCAN00090761: Generated filter for dynamic Rx objects must be disabled by default
|                     Her - ESCAN00090825: Omit obsolete cancellation delay 
|                     Her - ESCAN00091096: Support AR4/R16
|                     Her - ESCAN00091328: Support Mirror Mode (ASR)
|                     Her - ESCAN00091329: CAN-FD Bit Rate Switch always active
| 2016-12-12 2.09.01  Her - ESCAN00093263: Missing "if" caused by out-dated Organi file
|************************************************************************** */
/* KB end CanLL_Header */

/* \trace SPEC-1570 */
/***************************************************************************/
/* Include files                                                           */
/***************************************************************************/
/* ECO_IGNORE_BLOCK_BEGIN */
#define C_DRV_INTERNAL /* compatibility */
#define CAN_SOURCE     /* testability */
#define __CAN_SRC__              /* compatibility RTM not aware of multi driver instance */
#if !defined(__CAN_SRC__) /* driver use ORGANI without infix */ /* COV_CAN_INTERNAL */
# define __CAN_SRC__    /* for all MSR module (used by RTM) */
#endif
/* PRQA S 3109 EOF */ /* MD_Can_3109 */
/* PRQA S 0750 EOF */ /* MD_Can_0750 */
/* PRQA S 3412 EOF */ /* MD_Can_3412 */
/* PRQA S 3458 EOF */ /* MD_Can_3458 */
/* PRQA S 3453 EOF */ /* MD_Can_3453 */
/* PRQA S 0850 EOF */ /* MD_Can_0850 */
/* PRQA S 0857 EOF */ /* MD_Can_0857 */
/* PRQA S 0828 EOF */ /* MD_Can_0828 */
/* PRQA S 0715 EOF */ /* MD_Can_0715 */

/* \trace SPEC-1408, SPEC-1590, SPEC-1588 */
/* KB begin canLL_Include */
/* PRQA S 3614 EOF */ /* MD_Can_3614    */
/* PRQA S 0777 EOF */ /* MD_Can_0777_LL */
/* PRQA S 0779 EOF */ /* MD_Can_0779    */
/* KB end canLL_Include */
/* \trace SPEC-1392 */
#include "CanIf_Cbk.h"   /* for callback declaration */
/* \trace SPEC-1707 */
#include "CanIf.h"       /* for version check */
#include "Can_Local.h"    /* have to be last include due to channel define will lead to problems */

/* KB begin canLL_PostInclude */
#if !defined ( CAN_C_ENABLE_MPC5700_MCAN_MAJOR_CREL )     /* MCAN Core Release */
# error "Derivative not defined."
#endif

#if !defined ( C_ENABLE_MPC5700_MCAN_CREL_STEP )          /* COV_CAN_FIX_VERSION */
# define C_ENABLE_MPC5700_MCAN_CREL_STEP       0u         /* Step of MCAN Core Release */
#endif
#if !defined ( C_ENABLE_MPC5700_MCAN_CREL_SSTEP )         /* COV_CAN_FIX_VERSION */
# define C_ENABLE_MPC5700_MCAN_CREL_SSTEP      0u         /* Sub-Step of MCAN Core Release */
#endif

#if ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() > 3u )    /* COV_CAN_FIX_VERSION */
# error "MCAN Revision not supported yet."
#endif

#if(   ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 3u ) && ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()  >= 2u ) && ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP() >= 1u ))     /* COV_CAN_FIX_VERSION3 */
# define CAN_MCAN_REVISION  0x0321u
#elif( ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 3u ) &&  ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()  >= 2u ) && ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP() >= 0u ))  /* COV_CAN_FIX_VERSION3 */
# define CAN_MCAN_REVISION  0x0320u
#elif( ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 3u ) &&  ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()  >= 1u ) && ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP() >= 5u ))  /* COV_CAN_FIX_VERSION3 */
# define CAN_MCAN_REVISION  0x0315u
#elif( ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 3u ) &&  ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()  >= 1u ) && ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP() >= 0u ))  /* COV_CAN_FIX_VERSION3 */
# define CAN_MCAN_REVISION  0x0310u
#elif( ( Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() >= 3u ) &&  ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()  >= 0u ) && ( Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP() >= 0u ))  /* COV_CAN_FIX_VERSION3 */
# define CAN_MCAN_REVISION  0x0300u
#elif(   Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() == 2u )     /* COV_CAN_FIX_VERSION */
# define CAN_MCAN_REVISION  0x0200u
# if defined(C_ENABLE_CAN_FD_FULL)                             /* COV_CAN_FIX_VERSION */
#  error "This MCAN Revision does not support full CAN-FD!"
# endif
#elif(   Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL() == 1u )     /* COV_CAN_FIX_VERSION */
# error "This MCAN Revision is no longer supported."
#else
# error "Unknown MCAN Revision detected."
#endif
/* KB end canLL_PostInclude */

#if (CAN_DEV_ERROR_REPORT == STD_ON)
/* \trace SPEC-1596 */
# include "Det.h"
#endif
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if !defined(V_SUPPRESS_EXTENDED_VERSION_CHECK)
#  include "v_ver.h"
# endif
#endif

#if !defined(CAN_AMD_RUNTIME_MEASUREMENT) /* COV_CAN_COMPATIBILITY */
# define CAN_AMD_RUNTIME_MEASUREMENT STD_OFF
#endif
#if (CAN_AMD_RUNTIME_MEASUREMENT == STD_ON) /* COV_CAN_AMD_RUNTIME_MEASUREMENT */
# include "AmdRtm.h"
#endif

#if !defined(CAN_RUNTIME_MEASUREMENT_SUPPORT) /* COV_CAN_COMPATIBILITY */
# define CAN_RUNTIME_MEASUREMENT_SUPPORT STD_OFF
#endif
#if (CAN_RUNTIME_MEASUREMENT_SUPPORT == STD_ON)
/* AR4-328 */
# include "Rtm.h"
#endif

#if defined(C_ENABLE_CAN_FD_FULL)
# if defined(C_ENABLE_CANCEL_IN_HW) || defined(C_ENABLE_RX_QUEUE)
#  include "vstdlib.h"
# endif
#endif

/* ECO_IGNORE_BLOCK_END */

/***************************************************************************/
/* Version Check                                                           */
/***************************************************************************/
/* \trace SPEC-20329 */
/* not the SW version but all file versions that represent the SW version are checked */
#if (CAN_COREVERSION           != 0x0505u) /* \trace SPEC-1699, SPEC-3837 */
# error "Source and Header file are inconsistent!"
#endif
#if (CAN_RELEASE_COREVERSION   != 0x02u)
# error "Source and Header file are inconsistent!"
#endif
#if defined(CAN_GEN_BASE_VERSION) /* COV_CAN_COMPATIBILITY */
# if (CAN_GEN_BASE_VERSION              != 0x0106u)
#  error "Source and Generated Header file are inconsistent!"
# endif
#elif defined(CAN_GEN_BASE_CFG5_VERSION) /* COV_CAN_COMPATIBILITY */
# define CAN_GEN_BASE_VERSION  CAN_GEN_BASE_CFG5_VERSION
# if (CAN_GEN_BASE_CFG5_VERSION         != 0x0103u)
#  error "Source and Generated Header file are inconsistent!"
# endif
#else
# error "No CAN_GEN_BASE_VERSION nor CAN_GEN_BASE_CFG5_VERSION is defined"
#endif
/* KB begin canLL_VersionCheck */
#if( DRVCAN_MPC5700MCANASR_VERSION != 0x0209)
 #error "Source and Header file are inconsistent!"
#endif

#if( DRVCAN_MPC5700MCANASR_RELEASE_VERSION != 0x01)
 #error "Source and Header file are inconsistent!"
#endif

#if defined( CAN_GEN_Mpc5700McanAsr_VERSION )
# if( CAN_GEN_Mpc5700McanAsr_VERSION != 0x0100)     /* CFG5 */
#  error "Generated Data are inconsistent!"
# endif
#else
# define CAN_GEN_Mpc5700McanAsr_VERSION          CAN_GEN_MPC5700MCANASR_VERSION
# if( CAN_GEN_MPC5700MCANASR_VERSION != 0x0100)
#  error "Generated Data are inconsistent!"
# endif
#endif
/* KB end canLL_VersionCheck */

#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if !defined(V_SUPPRESS_EXTENDED_VERSION_CHECK)
/* The name of this constant variable is defined via v_ver.h and depends on the version of the C file. The value of the constant variable is also defined externally and is used for consistency checks, too. */
#  define CAN_START_SEC_CONST_UNSPECIFIED  /*--------------------------------*/
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
V_DEF_CONST(V_NONE, uint32, CONST) DRVCAN_MPC5700MCANASR_LIB_SYMBOL = DRVCAN_MPC5700MCANASR_LIB_VERSION;   /* PRQA S 3408 */ /* MD_Can_Asr_3408_libCheck */
#  define CAN_STOP_SEC_CONST_UNSPECIFIED   /*--------------------------------*/
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif
#endif

/***************************************************************************/
/* Defines                                                                 */
/***************************************************************************/
#if defined(CAN_USE_NO_VECTOR_IF) /* for testability */
# define CAN_USE_CRITICALSECTION_OVER_CONFIRMATION
#else
# if defined(CANIF_VENDOR_ID) /* COV_CAN_COMPATIBILITY */
#  if (CANIF_VENDOR_ID == 0x001E) /* COV_CAN_COMPATIBILITY */
#   define CAN_USE_VECTOR_IF
#   if defined(IF_ASRIFCAN_VERSION) /* COV_CAN_COMPATIBILITY */
#    if (IF_ASRIFCAN_VERSION < 0x0410) /* COV_CAN_COMPATIBILITY */
#     define CAN_USE_CRITICALSECTION_OVER_CONFIRMATION
#    endif
#   endif
#  else
#   define CAN_USE_CRITICALSECTION_OVER_CONFIRMATION
#  endif
# else
#  define CAN_USE_CRITICALSECTION_OVER_CONFIRMATION
# endif
#endif
/* Compatibility to CBD */
/* instead of direct canCanInterruptCounter[] use Can_GetCanInterruptCounter(Index) abstraction for ComStackLib */

/* Hook mapping */
# if (CAN_RUNTIME_MEASUREMENT_SUPPORT == STD_ON)
#define CanHookBegin_Can_Init()                              Rtm_Start(RtmConf_RtmMeasurementPoint_Can_Init)
#define CanHookEnd_Can_Init()                                Rtm_Stop(RtmConf_RtmMeasurementPoint_Can_Init)
#define CanHookBegin_Can_InitController()                    Rtm_Start(RtmConf_RtmMeasurementPoint_Can_InitController)
#define CanHookEnd_Can_InitController()                      Rtm_Stop(RtmConf_RtmMeasurementPoint_Can_InitController)
#define CanHookBegin_Can_SetControllerMode()                 Rtm_Start(RtmConf_RtmMeasurementPoint_Can_SetControllerMode)
#define CanHookEnd_Can_SetControllerMode()                   Rtm_Stop(RtmConf_RtmMeasurementPoint_Can_SetControllerMode)
#define CanHookBegin_Can_Write()                             Rtm_Start(RtmConf_RtmMeasurementPoint_Can_Write)
#define CanHookEnd_Can_Write()                               Rtm_Stop(RtmConf_RtmMeasurementPoint_Can_Write)

# else /* BRS runtime measurement */
#define CanHookBegin_Can_Init()
#define CanHookEnd_Can_Init()
#define CanHookBegin_Can_InitController() \

#define CanHookEnd_Can_InitController() \

#define CanHookBegin_Can_SetControllerMode() \

#define CanHookEnd_Can_SetControllerMode() \

#define CanHookBegin_Can_Write() \

#define CanHookEnd_Can_Write() \

# endif

#define CanHookBegin_CanHL_TxConfirmation() \

#define CanHookEnd_CanHL_TxConfirmation() \

#define CanHookBegin_CanBasicCanMsgReceived() \

#define CanHookEnd_CanBasicCanMsgReceived() \

#define CanHookBegin_CanFullCanMsgReceived() \

#define CanHookEnd_CanFullCanMsgReceived() \

#define CanHookBegin_Can_GetVersionInfo()
#define CanHookEnd_Can_GetVersionInfo()
#define CanHookBegin_Can_InitMemory()
#define CanHookEnd_Can_InitMemory()
#define CanHookBegin_Can_InitStruct()
#define CanHookEnd_Can_InitStruct()
#define CanHookBegin_Can_ChangeBaudrate()
#define CanHookEnd_Can_ChangeBaudrate()
#define CanHookBegin_Can_CheckBaudrate()
#define CanHookEnd_Can_CheckBaudrate()
#define CanHookBegin_Can_SetBaudrate()
#define CanHookEnd_Can_SetBaudrate()
#define CanHookStateChange_StartSync( oldState, newState )
#define CanHookStateChange_StopSync( oldState, newState )
#define CanHookStateChange_WakeupSync( oldState, newState )
#define CanHookStateChange_SleepSync( oldState, newState )
#define CanHookStateChange_StartAsync( oldState, newState )
#define CanHookStateChange_StopAsync( oldState, newState )
#define CanHookStateChange_WakeupAsync( oldState, newState )
#define CanHookStateChange_SleepAsync( oldState, newState )
#define CanHookBegin_Can_DisableControllerInterrupts()
#define CanHookEnd_Can_DisableControllerInterrupts()
#define CanHookBegin_Can_EnableControllerInterrupts()
#define CanHookEnd_Can_EnableControllerInterrupts()
#define CanHookBegin_Can_CheckWakeup()
#define CanHookEnd_Can_CheckWakeup()
#define CanHookBegin_Can_MainFunction_Write() \

#define CanHookEnd_Can_MainFunction_Write() \

#define CanHookBegin_Can_MainFunction_Read() \

#define CanHookEnd_Can_MainFunction_Read() \

#define CanHookBegin_Can_MainFunction_BusOff()
#define CanHookEnd_Can_MainFunction_BusOff()
#define CanHookBegin_Can_MainFunction_Wakeup()
#define CanHookEnd_Can_MainFunction_Wakeup()
#define CanHookBegin_Can_MainFunction_Mode()
#define CanHookEnd_Can_MainFunction_Mode()
#define CanHookBegin_Can_CancelTx()
#define CanHookEnd_Can_CancelTx()
#define CanHookBegin_Can_ResetBusOffStart()
#define CanHookEnd_Can_ResetBusOffStart()
#define CanHookBegin_Can_ResetBusOffEnd()
#define CanHookEnd_Can_ResetBusOffEnd()
#define CanHookBegin_Can_GetStatus()
#define CanHookEnd_Can_GetStatus()

/* KB begin CanLL_Defines */

/* Start value of the Message RAM Watchdog Counter. 
   With the reset value of '0' the counter is disabled. */
#define kCan_RWD                        0x00000000u

/* Bitmasks of MCAN CCCR */
#define kCanCCCR_INIT                   0x00000001u /* '1'= Initialization is started */
#define kCanCCCR_CCE                    0x00000002u /* Configuration Change Enable: '1'= CPU has write access to the protected configuration registers (while CCCR.INIT = '1') */
#define kCanCCCR_ASM                    0x00000004u /* Restricted Operation Mode: '1'= Restricted Operation Mode active */
#define kCanCCCR_CSA                    0x00000008u /* Clock Stop Acknowledge: '1'= M_CAN may be set in power down by stopping host and core clock */
#define kCanCCCR_CSR                    0x00000010u /* Clock Stop Request:     '1'= Clock stop requested (after all pending transfers are completed and CAN reached Bus_Idle 
                                                                                    first INIT and then CSA will be set */
#define kCanCCCR_MON                    0x00000020u /* Bus Monitoring Mode:    '1'= Bus Monitoring Mode enabled */
#define kCanCCCR_DAR                    0x00000040u /* Disable Automatic Retransmission: '1'= Automatic retransmission disabled */
#define kCanCCCR_TEST                   0x00000080u /* Test Enable Mode:       '1'= Test Mode (write access to register TEST enabled) */

#define kCanFBTP_TDC_Disable            0x00000000u          /* Transceiver Delay Compensation disabled  */
#define kCanTDCR_TDC_Disable            kCanFBTP_TDC_Disable /* TDCO moved to new register TDCR (since Rev. 3.1.0) */

#if !defined(kCanGFC_ANFS) /* COV_CAN_FIX_VERSION */
/* Non-matching Frames Standard */
# define kCanGFC_ANFS                   0x00000030u  /* 0x00000000u Accept in Rx FIFO 0
                                                        0x00000010u Accept in Rx FIFO 1
                                                        0x00000030u Reject */
#endif

#if !defined(kCanGFC_ANFE) /* COV_CAN_FIX_VERSION */
/* Non-matching Frames Extended */
# define kCanGFC_ANFE                   0x0000000Cu  /* 0x00000000u Accept in Rx FIFO 0
                                                        0x00000004u Accept in Rx FIFO 1
                                                        0x0000000Cu Reject */
#endif

#if !defined(kCanGFC_RRFS) /* COV_CAN_FIX_VERSION */
/* Remote Frames Standard */
# define kCanGFC_RRFS                   0x00000002u  /* 0x00000000 Filter Remote Frames Standard       
                                                        0x00000002 Reject Remote Frames Standard */
#endif

#if !defined(kCanGFC_RRFE) /* COV_CAN_FIX_VERSION */
/* Remote Frames Extended */
# define kCanGFC_RRFE                   0x00000001u  /* 0x00000000 Filter Remote Frames Extended       
                                                        0x00000001 Reject Remote Frames Extended */
#endif

/*  High Priority Message Status Register (HPMS):
Bits 16     FLST Filter List
Indicates the filter list of the matching filter element.
0 Standard Filter List
1 Extended Filter List

Bits 17:23  FIDX Filter Index
Index of matching filter element. Range is 0 to SIDFC[LSS] - 1 resp. XIDFC[LSE] - 1.

Bits 24:25  MSI Message Storage Indicator
00 No FIFO selected
01 FIFO overrun
10 Message stored in FIFO 0
11 Message stored in FIFO 1

Bits 26:31  BIDX Buffer Index
Index of Rx FIFO element to which the message was stored. Only valid when MSI[1] = '1'.
*/
#define kCanHPMS_FLST_STD               0x00000000u
#define kCanHPMS_FLST_EXT               0x00008000u
#define kCanHPMS_FIDX                   0x00007F00u
#define kCanHPMS_MSI_NOFIFO             0x00000000u
#define kCanHPMS_MSI_FIFO_OWFL          0x00000040u
#define kCanHPMS_MSI_FIFO_0             0x00000080u
#define kCanHPMS_MSI_FIFO_1             0x000000C0u
#define kCanHPMS_BIDX                   0x0000003Fu

/*Standard Message ID Filter element:
  Bits 31:30 SFT[1:0] Standard Filter Type
  00 Range filter from SF1ID to SF2ID (with SF2ID >= SF1ID)
  01 Dual ID filter for SF1ID or SF2ID
  10 Classic filter: SF1ID = filter, SF2ID = mask
  11 Reserved

  Bit 29:27 SFEC[2:0] Standard Filter Element Configuration
  000 Disable filter element
  001 Store in Rx FIFO 0 if filter matches
  010 Store in Rx FIFO 1 if filter matches
  011 Reject ID if filter matches
  100 Set priority if filter matches
  101 Set priority and store in FIFO 0 if filter matches
  110 Set priority and store in FIFO 1 if filter matches
  111 Store into Rx Buffer or as debug message, configuration of SFT[1:0] ignored
  All enabled filter elements are used for acceptance filtering of standard frames. 
  Acceptance filtering stops at the first matching enabled filter element or when the end 
  of the filter list is reached. 
  If SFEC = '100', '101', or '110' a match generates an interrupt (if enabled).
  In this case register HPMS is updated with the status of the priority match.

  Bits 26:16 SFID1[10:0] Standard Filter ID 1
  First ID of standard ID filter element.
  When filtering for debug messages this field defines the ID of a standard debug
  message to be stored to the re-assigned Rx FIFO 1 element 61...63. 
  The received identifiers must match exactly, no masking mechanism is used.

  Bits 10:0 SFID2[10:0] Standard Filter ID 2
  Second ID of standard ID filter element.
  When filtering for debug messages SFID2[5:0] defines the Rx FIFO 1 element number 
  for storage of a matching debug message.
  SFID2[10:9] decides whether the received message is treated as message A, B, or C of 
  the debug message sequence:
  00= Reserved
  01= Message A
  10= Message B
  11= Message C  */
#define kCanSFE_SFTRange               0x00000000u
#define kCanSFE_SFTDualId              0x40000000u
#define kCanSFE_SFTClassic             0x80000000u
#define kCanSFE_SFTRes                 0xC0000000u

#define kCanSFE_SFEC_Disable           0x00000000u
#define kCanSFE_SFEC_F0                0x08000000u
#define kCanSFE_SFEC_F1                0x10000000u
#define kCanSFE_SFEC_Reject            0x18000000u
#define kCanSFE_SFEC_SetPrio           0x20000000u
#define kCanSFE_SFEC_SetPrioStoreF0    0x28000000u
#define kCanSFE_SFEC_SetPrioStoreF1    0x30000000u
#define kCanSFE_SFEC_Dbg               0x38000000u

#define kCanSFE_SFID1                  0x07FF0000u  /* bits 16:26 */
#define kCanSFE_Res                    0x0000F800u  /* bits 11:15 */
#define kCanSFE_SFID2                  0x000007FFu  /* bits  0:10 */

/*Extended message ID filter element:
  F0 Bits 31:29 EFEC[2:0] Extended Filter Element Configuration 
  000 Disable filter element
  001 Store in Rx FIFO 0 if filter matches
  010 Store in Rx FIFO 1 if filter matches
  011 Reject ID if filter matches
  100 Set priority if filter matches
  101 Set priority and store in FIFO 0 if filter matches
  110 Set priority and store in FIFO 1 if filter matches
  111 Store as debug message, configuration of EFT[1:0] ignored

  F0 Bits 28:0 EFID1[28:0] Extended Filter ID 1
  When filtering for debug messages this field defines the ID of a extended debug 
  message to be stored to the re-assigned Rx FIFO 1 element 61...63. The received 
  identifiers must match exactly, no masking mechanism is used.

  F0 Bits 28:0  EFID1[28:0]

  F1 Bits 31:30 EFT[1:0] Extended Filter Type
  00 Range filter from EF1ID to EF2ID (EF2ID >= EF1ID)
  01 Dual ID filter for EF1ID or EF2ID
  10 Classic filter: EF1ID = filter, EF2ID = mask
  11 Range filter from EF1ID to EF2ID (EF2ID >= EF1ID), XIDAM mask not applied

  F1 Bits 28:0 EFID2[28:0]
  Extended Filter ID 2
  Second ID of extended ID filter element.
  When filtering for debug messages EFID2[5:0] defines the Rx FIFO 1 element number 
  for storage of a matching debug message.
  EFID2[10:9] decides whether the received message is treated as message A, B, or C of 
  the debug message sequence.
  00= Reserved
  01= Message A
  10= Message B
  11= Message C */
#define kCanEFE_EFTRangewMask          kCanSFE_SFTRange
#define kCanEFE_EFTDualId              kCanSFE_SFTDualId
#define kCanEFE_EFTClassic             kCanSFE_SFTClassic
#define kCanEFE_EFTRangewoMask         0xC0000000u

#define kCanEFE_EFEC_Disable           0x00000000u
#define kCanEFE_EFEC_F0                0x20000000u
#define kCanEFE_EFEC_F1                0x40000000u
#define kCanEFE_EFEC_Reject            0x60000000u
#define kCanEFE_EFEC_SetPrio           0x80000000u
#define kCanEFE_EFEC_SetPrioStoreF0    0xA0000000u
#define kCanEFE_EFEC_SetPrioStoreF1    0xC0000000u
#define kCanEFE_EFEC_Dbg               0xE0000000u

#define kCanEFE_EFID1                  0x1FFFFFFFu  /* bits  0:28 */
#define kCanEFE_Res                    0x02000000u  /* bits    29 */
#define kCanEFE_EFID2                  0x1FFFFFFFu  /* bits  0:28 */

#define kCanSIDFCMax                   128  /* max number of std filters per channel */
#define kCanXIDFCMax                    64  /* max number of ext filters per channel */

/* Rx FIFO 0/1 Configuration (RXFnC):
Bits 0          Blocking or overwrite mode 
Bits 1:7        F0WM Rx FIFO 0 Watermark
                0     Watermark interrupt disabled
                1-64  Level for Rx FIFO 0 watermark interrupt (IR[RF0W])
                >64   Watermark interrupt disabled
Bits 8:9        Reserved
Bits 10:15      F0S Rx FIFO 0 Size
                0 No Rx FIFO 0
                1-64 Number of Rx FIFO 0 elements
                >64 Values greater than 64 are interpreted as 64
                The Rx FIFO 0 elements are indexed from 0 to F0S-1
Bits 16:29      FOSA Rx FIFO 0 Start Address
                Start address of Rx FIFO 0 in Message RAM (32-bit word address, Figure 547).
Bits 30:31      Reserved */
#define kCanRXF0C_F0WM         0x7F000000u
#define kCanRXF0C_F0S          0x003F0000u
#define kCanRXF1C_F0WM         kCanRXF0C_F0WM
#define kCanRXF1C_F0S          0x007F0000u
#define kCanRXFnOM_BLOCK       0x00000000u        /* Blocking Mode  */
#define kCanRXFnOM_OVERWRITE   0x80000000u        /* Overwrite Mode */

/*Tx Buffer Configuration Register (TXBC):
Bit 1       TFQM Tx FIFO/Queue Mode
            0 Tx FIFO operation
            1 Tx Queue operation
Bits 2:7    TFQS Tx FIFO/Queue Size
            0   No Tx FIFO/Queue
            1-32 Number of Tx Buffers used for Tx FIFO/Queue
            >32 Values greater than 32 are interpreted as 32
Bits 10:15  NDTB Number of Dedicated Transmit Buffers
            0   No Dedicated Tx Buffers
            1-32 Number of Dedicated Tx Buffers
            >32 Values greater than 32 are interpreted as 32
Bits 16:29  TBSA Tx Buffers Start Address in Message RAM */
#define kCanTXBC_TFQM_MODE            0x40000000u /* 0=FIFO/1=QUEUE Mode */
#define kCanTXBC_TFQS                 0x3F000000u /* (1..32) FIFO/QUEUE size */
#define kCanTXBC_NDTB                 0x20 /* see CanTXBC: (1..32) Number of dedicated Tx buffers */
#define kCanTXBC_TBSA                 0x0000FFFCu /* Tx Buffer Start Address */

#define kCanTXBE_EFC                  0x00800000u /* Tx Buffer Event Fifo Control */

/* Tx Buffer Request Pending Register (TXBRP) */
#define kCanTXBRP_RP                  0x00000001u   /* Tx request pending */
/* Tx Buffer confirmation and cancellation interrupts */
#define kCanTXBTIE_ENABLE_ALL         0xFFFFFFFFu
#define kCanTXBCIE_ENABLE_ALL         0xFFFFFFFFu
/* Frame detection */
#define kCanFrm_XTD                   0x40000000u
#define kCanFrm_RTR                   0x20000000u

/*Tx Event FIFO Configuration (TXEFC):
Bits [0:1]      Reserved.
Bits [2:7]      EFWM Event FIFO Watermark.
                0 Watermark interrupt disabled
                1..32 Level for Tx Event FIFO watermark interrupt (IR[TEFW])
                >32 Watermark interrupt disabled
Bits [8:9]      Reserved.
Bits [10:15]    EFS Event FIFO Size.
                0 Tx Event FIFO disabled
                1..32 Number of Tx Event FIFO elements
                >32 Values greater than 32 are interpreted as 32
                The Tx Event FIFO elements are indexed from 0 to EFS - 1
Bits [16:29]    EFSA Event FIFO Start Address.
                Start address of Tx Event FIFO in Message RAM (32-bit word address,Figure 547.
Bits [30:31]    Reserved. */
#define kCanTXEFC_EFWM        0x3F000000u  /* '0' or '>32' means INT disabled */
#define kCanTXEFC_EFS         0x003F0000u  /* '0' or '>32' means Event Fifo disabled */
#define kCanTXEFC_EFSA        0x0000FFFCu  /* Event Fifo Start Address */

/* Bit Timing and Prescaler Register (BTP):
The CAN bit time may be programmed in the range of [4..25] time quanta. 
The CAN time quantum may be programmed in the range of [1..1024] MCAN clock periods. 
tq = (BRP + 1) MCAN clock period  
      where BRP = (0x40 x BRPE) + BRPL.
TSEG1 is the sum of Prop_Seg and Phase_Seg1. 
TSEG2 is Phase_Seg2. 
Therefore the length of the bit time is (programmed values) [TSEG1 + TSEG2 + 3] tq 
or (functional values) [Sync_Seg + Prop_Seg + Phase_Seg1 + Phase_Seg2] tq.

Bits 0:11       Reserved
Bits 12:15      BRPE  Baud Rate Prescaler Extension
                0x0-0xF By programming BRPE the Baud Rate Prescaler can be extended to values up to 1023.
Bit 16          Reserved
Bit 17:19       TSEG2 The time segment after the sample point
                0x0-0x7 valid values for TSeg2 are [0..7]
Bit 20:23 CSR   TSEG1[3:0]: The time segment before the sample point
                0x1-0xF valid values for TSeg1 are [1..15].
Bit 24:25       SJW (Re) Synchronization Jump Width
                0x0-0x3 valid programmed values are 0-3. 
                The actual interpretation by the hardware of this value is such that one more than the value programmed here is used
Bit 26:31       BRPL Baud Rate Prescaler Low
                0x00-0x3F The value by which the oscillator frequency is divided for generating the bit time quanta. 
                The bit time is built up from a multiple of this quanta. 
                Valid values for the Baud Rate Prescaler are [0..63]. 
                The actual interpretation by the hardware of this value is such that one more than the value programmed here is used.

With a CAN clock of 8 MHz, the reset value of 0x00002301 configures the M_CAN for a bit rate of 500 kBit/s.
0x00002301 = RRRR RRRR RRRR 0000   R010 0011 00 000001
                            BRPE                       = 0
                                    TSEG2              = 2 
                                        TSEG1          = 3
                                             SJW       = 0
                                                BRPL   = 1

The Information Processing Time (IPT) of the M_CAN is 0 tq. 
Therefore, to conform to the CAN protocol specification, the lengths for phase segment 1 (Phase_Seg1) and phase segment 2 (Phase_Seg2) must be equal.
*/

/* Bitmasks of MCAN ECR */
#define kCanECR_CEL                     0x00FF0000u  /* CAN error logging     */
#define kCanECR_RP                      0x00008000u  /* receive error passive */
#define kCanECR_REC                     0x00007F00u  /* Rx error counter      */
#define kCanECR_TEC                     0x000000FFu  /* Tx error counter      */
/* Protocol Status Register (PSR): */
#if ( CAN_MCAN_REVISION >= 0x0200u )    /* COV_CAN_FIX_VERSION */
# define kCanPSR_REDL                    0x00002000u /* Received CAN FD Message with EDL flag */
# define kCanPSR_RBRS                    0x00001000u /* BRS flag of last received CAN FD Message */
# define kCanPSR_RBSI                    0x00000800u /* ESI CAN FD Message with ESI flag */
# define kCanPSR_FLEC                    0x00000700u /* Fast Last Error Code */
#endif
#define kCanPSR_PXE                     0x00004000u /* Protocol Exception Event */
#define kCanPSR_BO                      0x00000080u /* Bus_Off status */
#define kCanPSR_EW                      0x00000040u /* Warning status */
#define kCanPSR_EP                      0x00000020u /* Error Passive  */
#define kCanPSR_ACT                     0x00000018u /* Activity */
#define kCanPSR_ACT_SYNC                0x00000000u /* Activity: synchronizing */
#define kCanPSR_ACT_IDLE                0x00000001u /* Activity: idle          */
#define kCanPSR_ACT_RX                  0x00000002u /* Activity: reception     */
#define kCanPSR_ACT_TX                  0x00000003u /* Activity: transmission  */
#define kCanPSR_LEC                     0x00000007u /* last error code */
/* Protocol Status Register (PSR):
Bit 24      BO  Bus_Off Status
            1  The M_CAN is in Bus_Off state
Bit 25      EW  Warning Status
            0  Both error counters are below the Error_Warning limit of 96
            1  At least one of error counter has reached the Error_Warning limit of 96
Bit 26      EP  Error Passive
            0  Error_Active state (takes part in bus communication and sends an active error flag when an error has been detected)
            1  M_CAN is in the Error_Passive state
Bit 27:28   ACT Activity - Monitors the module's CAN communication state.
            00  Synchronizing - node is synchronizing on CAN communication
            01  Idle - node is neither receiver nor transmitter
            10  Receiver - node is operating as receiver
            11  Transmitter - node is operating as transmitter 
Bits 29:31  LEC Last Error Code (will be cleared to '0' when a message has been transferred (Rx or Tx) without error)
            0    No Error: No error occurred since LEC has been reset by successful reception or transmission.
            1    Stuff Error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed.
            2    Form Error: A fixed format part of a received frame has the wrong format.
            3    AckError: The message transmitted by the M_CAN was not acknowledged by another node.
            4    Bit1Error: During transmission (except of the arbitration field): device wants to send a recessive level but the monitored bus value was dominant
            5    Bit0Error: During transmission (message, ACK bit, active error flag, overload flag) device wants to send a dominant level but the monitored bus value was recessive. 
                 During Bus_Off recovery this status is set each time a sequence of 11 recessive bits is monitored (monitor proceeding of Bus_Off recovery sequence).
            6    CRCError: CRC of incoming message != CRC calculated from received data.
            7    NoChange: no CAN bus event was detected since the last read access (any read access to the PSR re-initializes the LEC to '7') */

#define kCanBusoff                  0x01u       /* CAN driver is in recovery phase after bus off */ 
#define kCanBusoffInit              0x02u       /* Driver finished recovery and needs to be initialized */
#define kCanNormal                  0x03u       /* Driver completed recovery and is in normal mode */ 

#define kCan_TSCC_TCP               0x00000000u /* Timestamp Counter Prescaler (hardware uses one more than the value programmed here) */
# define kCan_TSCC_TSS              0x00000000u /* 00 Timestamp counter value always zero */

#define kCan_TOCC_TOP               0x000000C8u /* Start value of the Timeout Counter (down-counter, in multiples of CAN bit times) */
#define kCan_TOCC_TOS               0x00000000u /* Timeout Select (00=Continuous operation, 01/10/11=controlled by Tx Event FIFO/by Rx FIFO 0/by Rx FIFO 1 */
#define kCan_TOCC_ETOC              0x00000001u /* 0=Timeout Counter disabled, 1=Timeout Counter enabled */

/*(IR)  The flags are set when one of the listed conditions is detected (edge-sensitive). 
        The flags remain set until the Host clears them. 
        A flag is cleared by writing a '1' to the corresponding bit position. Writing a '0' has no effect. 
        A hard reset will clear the register. 
  (IE)  The settings determine which status changes in the IR will be signalled on an interrupt line.
  (ILE) Each of the two interrupt lines to the CPU can be enabled/disabled separately by programming bits EINT0/EINT1. */
#if !defined(kCanIR_CLEAR_ALL)          /* COV_CAN_FIX_VERSION */
# if   ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
#  define kCanIR_CLEAR_ALL              0x3FFFFFFFu  /* clear all pending INT flags        */
# elif ( CAN_MCAN_REVISION >= 0x0200u ) /* COV_CAN_FIX_VERSION */
#  define kCanIR_CLEAR_ALL              0xFFFFFFFFu  /* clear all pending INT flags        */
# else /* ( CAN_MCAN_REVISION == 0x0100u ) */
#  define kCanIR_CLEAR_ALL              0xFFF7FFFFu  /* clear all pending INT flags        */
# endif
#endif

#if !defined(kCanIE_DISABLE_ALL)        /* COV_CAN_FIX_VERSION */
# define kCanIE_DISABLE_ALL             0x00000000u
#endif
#define kCan_ALL_ONE                    0xFFFFFFFFu
#define kCanIE_ENABLE_ALL               kCan_ALL_ONE /* enable all INTs */
#define kCanILS_ALL_ONE                 kCan_ALL_ONE /* select INT line 0 */
#define kCanILS_ALL_ZERO                0x00000000u
#define kCanILE_EINT0                   0x00000001u  /* Enable  IL 0   */
#define kCanILE_DISABLE                 0x00000000u  /* Disable IL 0,1 */

/*Interrupts (IR):
Bit 0   STE   Stuff Error
Bit 1   FOE   Format Error
Bit 2   ACKE  Acknowledge Error
Bit 3   BE    Bit Error
Bit 4   CRCE  CRC Error
Bit 5   WDI   Message RAM Watchdog Interrupt 
Bit 6   BO    Bus_Off Status
Bit 7   EW    Warning Status 
Bit 8   EP    Error Passive Status
Bit 9   ELO   Error Logging Overflow
Bit 10  BEU   Message RAM Bit Error Uncorrected
Bit 11  BEC   Bit Error Corrected
Bit 12        MPC5746M = Reserved, MPC5777M = DRX (Message stored to Dedicated Rx Buffer)
Bit 13  TOO   Timeout Occurred
Bit 14  UMD   Unprocessed Message Discarded
              When a new message is received while the acceptance filtering process for the previously received message has not yet completed, this message is discarded.
Bit 15  TSW   Timestamp Wraparound
Bit 16  TEFL  Tx Event FIFO Event Lost
Bit 17  TEFF  Tx Event FIFO Full
Bit 18  TEFW  Tx Event FIFO Watermark Reached
Bit 19  TEFN  Tx Event FIFO New Entry
Bit 20  TFE   Tx FIFO Empty
Bit 21  TCF   Transmission Cancellation Finished
Bit 22  TC    Transmission Completed
Bit 23  HPM   High Priority Message
Bit 24  RF1L  Rx FIFO 1 Message Lost
Bit 25  RF1F  Rx FIFO 1 full
Bit 26  RF1W  Rx FIFO 1 Watermark Reached
Bit 27  RF1N  Rx FIFO 1 New Message
Bit 28  RF0L  Rx FIFO 0 Message Lost
Bit 29  RF0F  Rx FIFO 0 Full
Bit 30  RF0W  Rx FIFO 0 Watermark Reached
Bit 31  RF0N  Rx FIFO 0 New Message  */

#define kCanIR_STE                      0x80000000u  /* Stuff Error */
#define kCanIR_FOE                      0x40000000u  /* Format Error */
#define kCanIR_ACKE                     0x20000000u /* A transmitted message was not acknowledged by another node */
#define kCanIR_CRCE                     0x08000000u /* Received CRC did not match the calculated CRC */
#define kCanIR_WDI                      0x04000000u /* Watchdog Interrupt */
#define kCanIR_BO                       0x02000000u /* Bus_Off status changed */
#define kCanIR_EW                       0x01000000u /* Error_Warning status changed */
#define kCanIR_EP                       0x00800000u /* Error_Passive status changed */
#define kCanIR_BEU                      0x00200000u /* Bit Error Uncorrected */
#define kCanIR_BEC                      0x00100000u /* Bit Error Corrected */
#if ( CAN_MCAN_REVISION >= 0x0200u )    /* COV_CAN_FIX_VERSION */
# define kCanIR_DRX                     0x00080000u /* Message stored to Dedicated Rx Buffer (check NDAT1/2) */
#endif
#if ( CAN_MCAN_REVISION >= 0x0300u )    /* COV_CAN_FIX_VERSION */
# define kCanIR_MRAF                     0x00020000u /* Message RAM Access Failure */
#else
# define kCanIR_UMD                      0x00020000u /* Unprocessed message discarded */
#endif
#define kCanIR_PEA                      0x08000000u /* Protocol Error in Arbitration Phase */
#define kCanIR_TOO                      0x00040000u /* Timeout Occurred */
#define kCanIR_TCF                      0x00000400u /* Transmission cancellation finished */
#define kCanIR_TC                       0x00000200u /* Transmission completed */
#define kCanIR_HPM                      0x00000100u /* High Priority Message */
#define kCanIR_RF1L                     0x00000080u /* Rx FIFO 1 message lost (also set after write attempt to Rx FIFO 1 of size zero) */
#define kCanIR_RF1F                     0x00000040u /* Rx FIFO 1 full */
#define kCanIR_RF1W                     0x00000020u /* Rx FIFO 1 fill level reached watermark */
#define kCanIR_RF1N                     0x00000010u /* New message written to Rx FIFO 1 */
#define kCanIR_RF1X                     0x000000F0u /* Any Rx FIFO 1 */
#define kCanIR_RF0L                     0x00000008u /* Rx FIFO 0 message lost (also set after write attempt to Rx FIFO 0 of size zero) */
#define kCanIR_RF0F                     0x00000004u /* Rx FIFO 0 full */
#define kCanIR_RF0W                     0x00000002u /* Rx FIFO 0 fill level reached watermark */
#define kCanIR_RF0N                     0x00000001u /* New message written to Rx FIFO 0 */
#define kCanIR_RF0X                     0x0000000Fu /* Any Rx FIFO 0 */
#define kCanIR_TFE                      0x00000800u /* Tx FIFO Empty */
#define kCanIR_TEFN                     0x00001000u /* Tx Event FIFO New Entry */
#define kCanIR_TEFW                     0x00002000u /* Tx Event FIFO Watermark Reached */
#define kCanIR_TEFF                     0x00004000u /* Tx Event FIFO Full */
#define kCanIR_TEFL                     0x00008000u /* Tx Event FIFO Event Lost */
#define kCanIR_TEF_EVTYPE_TX            0x00400000u /* Tx Event FIFO Event Type = Tx Event */
#define kCanIR_TEF_EVTYPE_TXCANCEL      0x00800000u /* Tx Event FIFO Event Type = Transmission in spite of cancellation */
#define kCanIR_TSW                      0x00010000u /* Timestamp Wrap-around */
#define kCanIR_ELO                      0x00400000u /* Error Logging Overflow */

/* Fifo (RXFn): */
#define kCanRXFnS_FnGI                  0x00003F00u  /* Fifo Get Index */
#define kCanRXFnS_FnFL                  0x0000007Fu  /* Fifo Fill Level */

/*** A change of the CAN operation mode is requested by writing to this bit field. 
After change to the requested operation mode the bit field is reset to '00' and the status flags FACT and LACT are set accordingly. 
In case the requested CAN operation mode is not enabled, the value written to CMR is retained until it is overwritten by the next mode change request. 
Default is normal CAN operation. 
CAN Mode Request
  00 unchanged
  01 Long Frame Mode request
  10 Long + Fast Frame Mode request
  11 Normal CAN operation request
CAN Mode Enable
  00 Normal CAN operation according to ISO11898-1
  01 Long        Frame Mode enabled: transmission of long, reception of long and fast CAN FD frames is enabled
  10 Long + Fast Frame Mode enabled: transmission and reception of long and fast CAN FD frames is enabled
  11 Long + Fast Frame Mode enabled: transmission and reception of long and fast CAN FD frames is enabled ***/
#if ( CAN_MCAN_REVISION >= 0x0310u )    /* COV_CAN_FIX_VERSION */
/***  - CMR removed, transmit format configured in Tx Buffer element
      - CME replaced by FDOE and BRSE ***/
# define kCanCCCR_BRSE                  0x00000200u /* Bit Rate Switch enable */
# define kCanCCCR_FDOE                  0x00000100u /* FD operation enable */
# if ( CAN_MCAN_REVISION >= 0x0315u )    /* COV_CAN_FIX_VERSION */
/***  NISO added since Rev. 3.1.5 ***/
#  define kCanCCCR_NISO                 0x00008000u /* Non ISO Operation 
                                                       0= CAN FD frame format according to ISO11898-1
                                                       1= CAN FD frame format according to Bosch CAN FD Spec. V1.0 */
# endif
#else
# define kCanCCCR_CME_CAN20             0x00000300u /* NORMAL CAN */
# define kCanCCCR_CME_LONG              0x00000100u /* LONG */
# define kCanCCCR_CME_LONG_FAST         0x00000200u /* LONG & FAST */
# define kCanCCCR_CMR_CAN20             0x00000C00u /* NORMAL CAN */
# define kCanCCCR_CMR_LONG              0x00000400u /* LONG */
# define kCanCCCR_CMR_LONG_FAST         0x00000800u /* LONG & FAST */
#endif
#if ( CAN_MCAN_REVISION >= 0x0300u )   /* COV_CAN_FIX_VERSION */ /* Since rev3 */ 
# define kCanCCCR_TXP                  0x00004000u /* Transmit Pause */
# if ( CAN_MCAN_REVISION >= 0x0310u )   /* COV_CAN_FIX_VERSION */
#  define kCanCCCR_EFBI                 0x00002000u /* new control bit PXHD (Protocol Exception Handling Disable) replaces status flag FDO */
#  define kCanCCCR_PXHD                 0x00001000u /* new control bit EFBI (Edge Filtering during Bus Integration) replaces status flag FDBS */
# else
#  define kCanCCCR_FDO                  0x00001000u /* CAN FD Operation */
#  define kCanCCCR_FDBS                 0x00002000u /* CAN FD Bit Rate Switching */
# endif
#else
# define kCanCCCR_LACT                 0x00001000u /* Long Frame Mode Active */
# define kCanCCCR_FACT                 0x00002000u /* Fast Frame Mode Active */
#endif

#if ( CAN_MCAN_REVISION >= 0x0300u )    /* COV_CAN_FIX_VERSION */
# if !defined( CAN_SET_BR_ID ) /* COV_CAN_FIX_VERSION */
#  define CAN_SET_BR_ID  0x0F
# endif
#endif
#if !defined(CAN_NONE) /* COV_CAN_FIX_VERSION */
# define CAN_NONE        0u
#endif
#if !defined(CAN_BRS) /* COV_CAN_FIX_VERSION */
# define CAN_BRS         1u
#endif
#if !defined(CAN_FULL) /* COV_CAN_FIX_VERSION */
# define CAN_FULL        2u
#endif
#if !defined(CAN_FD_RXONLY) /* COV_CAN_FIX_VERSION */
# define CAN_FD_RXONLY   2u
#endif
#if !defined(CAN_FD_RXTX) /* COV_CAN_FIX_VERSION */
# define CAN_FD_RXTX     1u
#endif

#if !defined(STD_ON) /* COV_CAN_FIX_VERSION */
# define STD_ON          1u
#endif
#if !defined(STD_OFF) /* COV_CAN_FIX_VERSION */
# define STD_OFF         0u
#endif

#if( (!defined(C_ENABLE_EXTENDED_ID)) || (defined(C_ENABLE_MIXED_ID)) )
# define C_ENABLE_STD_ID
#endif

#if !defined (CAN_FD_SUPPORT)
# define CAN_FD_SUPPORT CAN_NONE
#else
# if (CAN_FD_SUPPORT != CAN_NONE)
#  define C_ENABLE_CAN_FD
#  if (CAN_FD_SUPPORT == CAN_FULL)
#   define C_ENABLE_CAN_FD_FULL
#  endif
# endif
#endif

#if !defined (CAN_TXP_SUPPORT) /* COV_CAN_FIX_VERSION */
# define CAN_TXP_SUPPORT STD_OFF
# define C_DISABLE_CAN_TXP_SUPPORT
#else
# if (CAN_TXP_SUPPORT == STD_ON)
#  define C_ENABLE_CAN_TXP_SUPPORT
# endif
#endif

#if( (defined( C_ENABLE_GENERATE_FULLCAN_MASK ))  || (defined( C_DISABLE_GENERATE_FULLCAN_MASK )) || (defined( CAN_C_ENABLE_GENERATE_FULLCAN_MASK )) )  /* COV_CAN_FIX_VERSION3 */
# define C_ENABLE_FULLCAN_FILTER_GENERATION
#else
# define C_DISABLE_FULLCAN_FILTER_GENERATION
#endif

#if ( CAN_MCAN_REVISION >= 0x0310u )  /* COV_CAN_FIX_VERSION */
/* Relevant for MCAN Rel. 2.x, 3.0.0, 3.0.1 */ 
# if !defined CAN_BOSCH_ERRATUM_006
#  define CAN_BOSCH_ERRATUM_006       STD_OFF
# endif
# if !defined CAN_BOSCH_ERRATUM_007
#  define CAN_BOSCH_ERRATUM_007       STD_OFF
# endif
# if !defined CAN_BOSCH_ERRATUM_008
#  define CAN_BOSCH_ERRATUM_008       STD_OFF
# endif
# if !defined CAN_BOSCH_ERRATUM_010
#  define CAN_BOSCH_ERRATUM_010       STD_OFF
# endif
/*  Relevant for MCAN Rel. 2.x, 3.0.0, 3.0.1, 3.1.0 */ 
# if !defined CAN_BOSCH_ERRATUM_011
#  define CAN_BOSCH_ERRATUM_011       STD_ON
# endif
# if !defined CAN_BOSCH_ERRATUM_012
#  define CAN_BOSCH_ERRATUM_012       STD_ON
# endif
#else
/* Relevant for MCAN Rel. 2.x, 3.0.0, 3.0.1 */ 
# if !defined CAN_BOSCH_ERRATUM_006
#  define CAN_BOSCH_ERRATUM_006       STD_ON
# endif
# if !defined CAN_BOSCH_ERRATUM_007
#  define CAN_BOSCH_ERRATUM_007       STD_ON
# endif
# if !defined CAN_BOSCH_ERRATUM_008
#  define CAN_BOSCH_ERRATUM_008       STD_ON
# endif
# if !defined CAN_BOSCH_ERRATUM_010
#  define CAN_BOSCH_ERRATUM_010       STD_ON
# endif
# if ( CAN_MCAN_REVISION >= 0x0300u )  /* COV_CAN_FIX_VERSION */
#  if !defined CAN_BOSCH_ERRATUM_011
#   define CAN_BOSCH_ERRATUM_011      STD_ON
#  else
#   define CAN_BOSCH_ERRATUM_011      STD_OFF /* MRAF exists since 3.0.0 */
#  endif
# endif
# if !defined CAN_BOSCH_ERRATUM_012
#  define CAN_BOSCH_ERRATUM_012       STD_OFF /* PXHD exists since 3.1.0 */
# endif
#endif

#if ( CAN_MCAN_REVISION < 0x0310u )  /* COV_CAN_FIX_VERSION */
/* No message specific switch between CAN/CAN_FD, only per channel */
# if defined( C_ENABLE_CAN_FD )
/* Allow dynamic switching between CAN <--> CAN-FD */
#  define C_ENABLE_CAN_FD_DYN
# endif
#endif

#if !defined( kCanNumberOfRxObjects )  /* COV_CAN_FIX_VERSION */
# define kCanNumberOfRxObjects 0
#endif

/* Compatibility define */
# if !defined (V_NULL) /* COV_CAN_COMPATIBILITY */
#  define V_NULL NULL_PTR
# endif

/* KB end CanLL_Defines */

/***************************************************************************/
/* macros                                                                  */
/***************************************************************************/
#if defined(CAN_TXINDIRECTIONHWTOLOG) /* COV_CAN_TXINDIRECTIONHWTOLOG */
/* CAN_HL_TX_OFFSET_HW_TO_LOG(ch) not supported for LL use CanHL_GetTxHwToLogHandle or CanHL_GetTxLogToHwHandle instead */
#else
# define CAN_HL_TX_OFFSET_HW_TO_LOG(ch) (Can_GetTxOffsetHwToLog(ch)) /* used in LL */
#endif

#if defined(C_ENABLE_MIXED_ID)
# define CAN_GET_ID_FOR_PRIOCHECK(id) ( (((id) & CAN_ID_IDE_MASK) == CAN_ID_IDE_MASK) ? ((id) & (uint32)(CAN_ID_MASK)) : (((id) & CAN_ID_MASK_STD)<<18) )
#else
# define CAN_GET_ID_FOR_PRIOCHECK(id) ((id) & CAN_ID_MASK)
#endif

/* for LL compatibility */
#if defined(C_ENABLE_GEN_HW_START_STOP_IDX) /* COV_CAN_GEN_HW_START_STOP_IDX */
# define CAN_HL_HW_TX_NORMAL_INDEX(hwch)     (Can_GetTxBasicHwStart(hwch))
# if defined(CAN_HL_HW_LAYOUT_TXBASIC_FIRST) /* COV_CAN_HW_LAYOUT_TXBASIC_FIRST */
#  define CAN_HL_HW_TX_STARTINDEX(hwch)      (Can_GetTxBasicHwStart(hwch))
# else
#  define CAN_HL_HW_TX_STARTINDEX(hwch)      (Can_GetTxFullHwStart(hwch))
# endif
# define CAN_HL_HW_TX_FULL_STARTINDEX(hwch)  (Can_GetTxFullHwStart(hwch))
# define CAN_HL_HW_UNUSED_STARTINDEX(hwch)   (Can_GetUnusedHwStart(hwch))
# define CAN_HL_HW_RX_FULL_STARTINDEX(hwch)  (Can_GetRxFullHwStart(hwch))
# define CAN_HL_HW_RX_BASIC_STARTINDEX(hwch) (Can_GetRxBasicHwStart(hwch))
# if defined(CAN_HL_HW_LAYOUT_TXBASIC_FIRST) /* COV_CAN_HW_LAYOUT_TXBASIC_FIRST */
#  define CAN_HL_HW_TX_STOPINDEX(hwch)       (Can_GetTxFullHwStop(hwch))
# else
#  define CAN_HL_HW_TX_STOPINDEX(hwch)       (Can_GetTxBasicHwStop(hwch))
# endif
# define CAN_HL_HW_TX_FULL_STOPINDEX(hwch)   (Can_GetTxFullHwStop(hwch))
# define CAN_HL_HW_UNUSED_STOPINDEX(hwch)    (Can_GetUnusedHwStop(hwch))
# define CAN_HL_HW_RX_FULL_STOPINDEX(hwch)   (Can_GetRxFullHwStop(hwch))
# define CAN_HL_HW_RX_BASIC_STOPINDEX(hwch)  (Can_GetRxBasicHwStop(hwch))
#endif
#if !defined(CAN_ACTIVESEND_STATE) /* COV_CAN_COMPATIBILITY */
/* may be overwritten within LL to handle TX FIFO/Queue */
# define CAN_ACTIVESEND_STATE(obj) (Can_GetActiveSendState(obj))
# define CAN_ACTIVESEND_STATE_SET(obj,value) (Can_SetActiveSendState((obj),(value)))
#endif
#if !defined(CAN_ACTIVESEND_PDUID) /* COV_CAN_COMPATIBILITY */
/* may be overwritten within LL to handle TX FIFO/Queue */
# define CAN_ACTIVESEND_PDUID(obj) (Can_GetActiveSendPdu(obj))
# define CAN_ACTIVESEND_PDUID_SET(obj,value) (Can_SetActiveSendPdu((obj),(value)))
#endif
/* may be used by LL to free TX mailbox between CanLL_TxBegin and CanLL_TxEnd (only necessary when not using CanLL_TxStart return value) */
#define CAN_FREE_TX_OBJECT(obj) CAN_ACTIVESEND_STATE(obj) = CAN_FREE_OBJ

#if defined(C_ENABLE_INDIVIDUAL_POLLING) || defined(CAN_HWOBJINDIVPOLLING)
/* define first index to array CanHwObjIndivPolling[][] */
#  define CAN_HWOBJINDIVPOLLING_INDEX0                     (canHwChannel)
#endif

#if defined(C_ENABLE_CAN_RAM_CHECK)
# if !defined(CAN_RAM_CHECK_MAILBOX_RESULT) /* May be defined by test suite to stimulate RAM_CHECK failure */
#  if defined( C_SINGLE_RECEIVE_CHANNEL )
#   define CAN_RAM_CHECK_MAILBOX_RESULT(ch, hwObjHandle) CanLL_IsMailboxCorrupt((hwObjHandle))
#  else
#   define CAN_RAM_CHECK_MAILBOX_RESULT(ch, hwObjHandle) CanLL_IsMailboxCorrupt((ch), (hwObjHandle))
#  endif
# endif
# if !defined(CAN_RAM_CHECK_FINISHED_CTP) /* May be defined by test suite to check RAM_CHECK finished / executed */
#  define CAN_RAM_CHECK_FINISHED_CTP(ch)
# endif
#endif

#define CanHL_IsStart(ch) ((Can_GetLogStatus(ch) & CAN_STATUS_START) == CAN_STATUS_START)
#define CanHL_IsSleep(ch) ((Can_GetLogStatus(ch) & CAN_STATUS_SLEEP) == CAN_STATUS_SLEEP)
#define CanHL_IsStop(ch) ((Can_GetLogStatus(ch) & CAN_STATUS_STOP) == CAN_STATUS_STOP)
#define CanHL_IsBusOff(ch) ((Can_GetLogStatus(ch) & CAN_STATUS_BUSOFF) == CAN_STATUS_BUSOFF)
#define CanHL_IsControllerInit(ch) ((Can_GetLogStatus(ch) & CAN_STATUS_INIT) == CAN_STATUS_INIT)

#if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
# define cantVIdentityMsk uint16
# define CanSetActiveIdentity(identityLog) \
{ \
  canActiveIdentityLog = (identityLog); \
  canActiveIdentityMsk = (cantVIdentityMsk) (((cantVIdentityMsk) 1) << (identityLog)); \
}
# if defined V_ACTIVE_IDENTITY_MSK
#  undef V_ACTIVE_IDENTITY_MSK  /* this define from v_cfg.h is replaced and no more used (but header may included by other module) */ /* PRQA S 0841 */ /* MD_Can_0841 */
# endif
# define V_ACTIVE_IDENTITY_MSK                canActiveIdentityMsk
# if defined V_ACTIVE_IDENTITY_LOG
#  undef V_ACTIVE_IDENTITY_LOG  /* this define from v_cfg.h is replaced and no more used (but header may included by other module) */ /* PRQA S 0841 */ /* MD_Can_0841 */
# endif
# define V_ACTIVE_IDENTITY_LOG                canActiveIdentityLog
#endif

#if (CAN_GENERIC_PRETRANSMIT == STD_ON)
# define PDUINFO_PTR PduInfoPtr_var
#else
# define PDUINFO_PTR PduInfo
#endif
#if defined(C_ENABLE_CAN_FD_USED)
# define PDUINFO_ID  pduInfo_var_id
# define PDUINFO_DLC pduInfo_var_dlc
#else
# define PDUINFO_ID  PDUINFO_PTR->id
# define PDUINFO_DLC PDUINFO_PTR->length
#endif

#if !defined(CAN_APPLICATION_DEM_REPORTERROR) /* COV_CAN_COMPATIBILITY */
# define CAN_APPLICATION_DEM_REPORTERROR STD_OFF
#endif
#if (CAN_APPLICATION_DEM_REPORTERROR == STD_OFF) /* COV_CAN_USER_CONFIG */
# define Can_Dem_ReportError(EventId) ( (void) Dem_ReportErrorStatus((EventId), DEM_EVENT_STATUS_FAILED) )
#endif

#if defined(C_ENABLE_CAN_FD_USED) /* also for BRS because DLC may be bigger than 8 and will be checked by CanIf */
# define CAN_DECODE_DLI(dlc) (Can_DliToBytesMap[((uint8)(dlc)) & ((uint8)0xFu)])
# define CAN_ENCODE_DLI(length) (((uint8)Can_BytesToDliMap[(length)]) & ((uint8)0x0Fu))
#else
# define CAN_DECODE_DLI(dlc) (dlc)
# define CAN_ENCODE_DLI(length) (length)
#endif
#if defined(C_ENABLE_CAN_FD_FULL)
# define CAN_MAX_RX_DATALEN         Can_GetMaxRxDataLen()
# define CAN_MAX_TX_DATALEN         Can_GetMaxTxDataLen()
# define CAN_MAX_DATALEN_OBJ(Index) Can_GetMailboxDataLen(Index)
#else
# define CAN_MAX_RX_DATALEN         8u
# define CAN_MAX_TX_DATALEN         8u
# define CAN_MAX_DATALEN_OBJ(Index) 8u
#endif
#define CanHL_IsFdMessage(id) (((id) & (Can_IdType)CAN_ID_FD_MASK) == (Can_IdType)CAN_ID_FD_MASK) /* used for LL */ /* \trace SPEC-60432, SPEC-50586 */
#define CanHL_IsFdTxBrs(ch)   (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(ch)) == CAN_FD_RXTX) /* used for LL */ /* \trace SPEC-60432, SPEC-50586 */
/* KB begin CanLL_Macros */
#if ( (((CAN_INTLOCK == CAN_DRIVER) || (CAN_INTLOCK == CAN_BOTH))) )
# define CanLL_CanInterruptDisable(canHwChannel, localInterruptOldFlagPtr) \
  *(localInterruptOldFlagPtr) = Cn->IE; \
  Cn->IE = 0;
#define CanLL_CanInterruptRestore(canHwChannel, localInterruptOldFlag) \
  Cn->IE = (localInterruptOldFlag);
#else
# define CanLL_CanInterruptDisable(canHwChannel,localInterruptOldFlag)
# define CanLL_CanInterruptRestore(canHwChannel,localInterruptOldFlag)
#endif /* C_HL_ENABLE_DRVAPI_[HLL|ASR]_COMMENT && C_ENABLE_CAN_..._INTERRUPT */

#define CanLL_TxIsHWObjFree( canHwChannel, txObjHandle ) ( ((Cn->TXBC & kCanTXBC_TFQS) > 0) ? /* check Fifo/Queue size */ \
            (kCanFalse) :  /* N/A: Fifo/Queue exists with size != zero */ \
            ( ((Cn->TXBRP & ((kCanTXBRP_RP << (txObjHandle)))) == 0) ) )   /* all buffers are dedicated buffers, return true if pending bit is not set */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
/* Each Tx Buffer has its own pending bit. 
   The bits are set via TXBAR. 
   The bits are reset after transmission has completed or has been cancelled (via TXBCR).

   A cancellation request resets the corresponding transmission request pending bit of register TXBRP. 
   The corresponding TXBCF bit is set for all unsuccessful transmissions.
   In DAR mode all transmissions are automatically cancelled if they are not successful. */

#if defined( C_ENABLE_SLEEP_WAKEUP ) /* COV_CAN_FIX_VERSION */
# define CanLL_HwIsSleep( CAN_HW_CHANNEL_CANPARA_ONLY)  ( (Cn->CCCR & (kCanCCCR_CSA | kCanCCCR_INIT)) == (kCanCCCR_CSA | kCanCCCR_INIT) )
#else
# define CanLL_HwIsSleep( CAN_HW_CHANNEL_CANPARA_ONLY)  (kCanFalse != kCanFalse)  /* avoid misra warning */
#endif
/* Power down (Sleep mode)
   Controlled by input signal clock stop request or via CCCR[CSR]. 
   As long as the clock stop request signal is active, bit CCCR[CSR] is read as one. 

   a) all pending transmission requests are completed
   b) Bus_Idle is awaited
   c) CCCR[INIT] is set to '1' (prevent any further CAN transfers)
   d) Clock stop acknowledge output signal =1, CCCR[CSA] =1 (M_CAN acknowledges that it is ready for power down)
   In this state, before the clocks are switched off, further register accesses can be made (write access to CCCR[INIT] has no effect)
   e) Module clock inputs (CAN and Host clock) may be switched off now */

#define CanLL_HwIsStop( CAN_HW_CHANNEL_CANPARA_ONLY )   ((Cn->CCCR & kCanCCCR_INIT) != 0)

#define CanLL_HwIsBusOff( CAN_HW_CHANNEL_CANPARA_ONLY ) ((Cn->PSR & kCanPSR_BO) != 0)

#if defined( C_ENABLE_EXTENDED_STATUS )
# define CanLL_HwIsPassive( CAN_HW_CHANNEL_CANPARA_ONLY ) ((Cn->PSR & kCanPSR_EP) != 0)

# define CanLL_HwIsWarning( CAN_HW_CHANNEL_CANPARA_ONLY )  ((Cn->PSR & kCanPSR_EW) != 0)
#endif /* C_ENABLE_EXTENDED_STATUS */

#if defined( C_ENABLE_HW_LOOP_TIMER )
# if defined(C_MULTIPLE_RECEIVE_CHANNEL)
#  define CanLL_ApplCanTimerStart(loop)  ApplCanTimerStart(channel, loop)
#  define CanLL_ApplCanTimerEnd(loop)    ApplCanTimerEnd(channel, loop)
#  define CanLL_ApplCanTimerLoop(loop)   ApplCanTimerLoop(channel, loop)
# else
#  define CanLL_ApplCanTimerStart(loop)  ApplCanTimerStart(loop)
#  define CanLL_ApplCanTimerEnd(loop)    ApplCanTimerEnd(loop)
#  define CanLL_ApplCanTimerLoop(loop)   ApplCanTimerLoop(loop)
# endif
#else
# define CanLL_ApplCanTimerStart(loop)
# define CanLL_ApplCanTimerEnd(loop)
# define CanLL_ApplCanTimerLoop(loop)    (vuint8)(1)
#endif

#if !defined ApplCanClockStop
# define C_DISABLE_APPL_CAN_CLOCK_STOP
# define ApplCanClockStop(CAN_HW_CHANNEL_CANTYPE_ONLY)     /* unused user callback */
#else
# define C_ENABLE_APPL_CAN_CLOCK_STOP
#endif

#if !defined ApplCanClockStart
# define ApplCanClockStart(CAN_HW_CHANNEL_CANTYPE_ONLY)    /* unused user callback */
#endif

#if defined(CAN_C_ENABLE_ARM_CORTEX_M) /* COV_CAN_FIX_VERSION */
# if defined ( V_COMP_GHS ) /* COV_CAN_FIX_VERSION2 */
#  define V_ASM   __asm
# else
#  define V_ASM   asm
# endif
# define CAN_MSG_RAM_SYNC()   V_ASM("DMB") /* Data Memory Barrier (DMB) */
/* Ensures that all explicit data memory transfers before the DMB are completed 
   before any subsequent data memory transfers after the DMB starts.
 */
#else
# define CAN_MSG_RAM_SYNC()   
#endif

#if defined (MISRA_CHECK) /* COV_CAN_MISRA */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualIdRaw0",3305           /* MD_Can_3305_LL */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualIdRaw1",3305           /* MD_Can_3305_LL */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualExtId",3305            /* MD_Can_3305_LL */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualStdId",3305            /* MD_Can_3305_LL */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualIdType",3305           /* MD_Can_3305_LL */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualDLC",3305              /* MD_Can_3305_LL */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualDLC", 0310             /* MD_Can_0310 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualDLC", 0488             /* MD_Can_0488 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualData", 0488            /* MD_Can_0488 */
# pragma PRQA_MACRO_MESSAGES_OFF "CAN_DECODE_DLI", 0310             /* MD_Can_0310 */
# pragma PRQA_MACRO_MESSAGES_OFF "CAN_DECODE_DLI", 0488             /* MD_Can_0488 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualExtId",0310            /* MD_Can_0310 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualStdId",0310            /* MD_Can_0310 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualIdType",0310           /* MD_Can_0310 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualFdType",0310           /* MD_Can_0310 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualFdType",0488           /* MD_Can_0488 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualDLC",0310              /* MD_Can_0310 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanRxActualDLC",0312              /* MD_Can_0312 */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_CanInterruptDisable",0303   /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_CanInterruptRestore",0303   /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_CanInterruptDisable",1006   /* MD_Can_1006_inlineASM */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_CanInterruptRestore",1006   /* MD_Can_1006_inlineASM */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_HwIsStop",0303              /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_HwIsPassive",0303           /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_HwIsWarning",0303           /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "CanLL_HwIsBusOff",0303            /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "Cn",0303                          /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "CnX",0303                         /* MD_Can_0303_HWaccess */
# pragma PRQA_MACRO_MESSAGES_OFF "Shm",0303                         /* MD_Can_0303_HWaccess */
#endif

/* use cpp for access via assembler */
#define canExpandQuoted(x)    canExpandQuoted2(x)
#define canExpandQuoted2(x)   canExpandQuoted3(x)
#define canExpandQuoted3(x)   #x    /* PRQA S 341,342 */ /* MD_Can_0341_ISOstringifyOp */

#if defined(C_ENABLE_CAN_FD_FULL)
# if defined(CANLL_USE_SHIFT_MULTIPLY)  /* COV_CAN_FIX_VERSION */
#  define GET_TXRXBB_OFFSET(n, dli) (((vuint32)( ((n) << CanLL_ShiftMultiplyTable[dli].v1) \
                                               + ((n) << CanLL_ShiftMultiplyTable[dli].v2) \
                                               + ((n) << CanLL_ShiftMultiplyTable[dli].v3) ))<<2)
# else
#  define GET_TXRXBB_OFFSET(num, dli) (vuint32)(num * (8 + CanLL_xES2Bytes[dli]))
# endif /* CANLL_USE_SHIFT_MULTIPLY */
# define GET_N_BYTES_FROM_ES(elementSize) (CanLL_xES2Bytes[(elementSize)&0x7u])
#endif /* C_ENABLE_CAN_FD_FULL */

#define GET_SIDF_OFFSET(num) ((num) << 2)
#define GET_XIDF_OFFSET(num) ((num) << 3)
#define GET_TXEF_OFFSET(num) ((num) << 3)

#if defined(C_ENABLE_CAN_FD_FULL)
# if !defined( CAN_GEN_COM_STACK_LIB )
#  error "CAN-FD with more than 8 data byte is not supported for GenTool GENy"
# endif
# define GET_RX0F_OFFSET(num) (GET_TXRXBB_OFFSET((num), Can_GetF0DSOfShmElementSize(canHwChannel)))
# define GET_RX1F_OFFSET(num) (GET_TXRXBB_OFFSET((num), Can_GetF1DSOfShmElementSize(canHwChannel)))
# define GET_RXB_OFFSET(num)  (GET_TXRXBB_OFFSET((num), Can_GetRBDSOfShmElementSize(canHwChannel)))
# define GET_TXB_OFFSET(num)  (GET_TXRXBB_OFFSET((num), Can_GetTBDSOfShmElementSize(canHwChannel)))
#else
# define GET_RX0F_OFFSET(num) ((num)<<4)
# define GET_RX1F_OFFSET(num) ((num)<<4)
# define GET_RXB_OFFSET(num)  ((num)<<4)
# define GET_TXB_OFFSET(num)  ((num)<<4)
#endif

#if defined(C_ENABLE_CAN_FD_DYN) && !defined(C_ENABLE_CAN_FD) /* COV_CAN_FIX_VERSION2 */
# error "Sorry, CAN-FD is not activated"
#endif
#if( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
# if defined(C_ENABLE_CAN_FD_DYN)   /* COV_CAN_FIX_VERSION */
# error "Sorry, CAN-FD is not any longer channel specific but can be used per message. Please deactivate 'C_ENABLE_CAN_FD_DYN'."
# endif
#endif
/* KB end CanLL_Macros */

/***************************************************************************/
/* Constants                                                               */
/***************************************************************************/
#define CAN_START_SEC_CONST_UNSPECIFIED  /*--------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/* BR:012 */
V_DEF_CONST(V_NONE, uint8, CONST) Can_MainVersion         = (uint8)CAN_SW_MAJOR_VERSION; /* PRQA S 3408 */ /* MD_Can_Asr_3408_libCheck */
V_DEF_CONST(V_NONE, uint8, CONST) Can_SubVersion          = (uint8)CAN_SW_MINOR_VERSION; /* PRQA S 3408 */ /* MD_Can_Asr_3408_libCheck */
V_DEF_CONST(V_NONE, uint8, CONST) Can_ReleaseVersion      = (uint8)CAN_SW_PATCH_VERSION; /* PRQA S 3408 */ /* MD_Can_Asr_3408_libCheck */

#if defined(C_ENABLE_CAN_FD_USED)
V_DEF_CONST(CAN_STATIC, uint8, CONST) Can_DliToBytesMap[16] = /* PRQA S 3218 */ /* MD_Can_3218 */
{
  0,  1,  2,  3,
  4,  5,  6,  7,
  8, 12, 16, 20,
 24, 32, 48, 64
};
V_DEF_CONST(CAN_STATIC, uint8, CONST) Can_BytesToDliMap[65] = /* PRQA S 3218 */ /* MD_Can_3218 */
{
/* 00..07 */  0,  1,  2,  3,  4,  5,  6,  7,
/* 08..15 */  8,  9,  9,  9,  9, 10, 10, 10,
/* 16..23 */ 10, 11, 11, 11, 11, 12, 12, 12,
/* 24..31 */ 12, 13, 13, 13, 13, 13, 13, 13,
/* 32..39 */ 13, 14, 14, 14, 14, 14, 14, 14,
/* 40..47 */ 14, 14, 14, 14, 14, 14, 14, 14,
/* 48..55 */ 14, 15, 15, 15, 15, 15, 15, 15,
/* 56..63 */ 15, 15, 15, 15, 15, 15, 15, 15,
/* 64     */ 15
};
#endif

/* KB begin CanLL_Constants */
/* Global constants with CAN driver main and subversion */

#if defined( C_ENABLE_CAN_RAM_CHECK )
/* ROM CATEGORY 4 START */
V_DEF_CONST(CAN_STATIC, vuint32, CONST) CanMemCheckValues32bit[3] =  /* PRQA S 3218 */ /* MD_Can_3218 */
{
  0xAAAAAAAAUL, 0x55555555UL, 0x00000000UL
};
/* ROM CATEGORY 4 END */
#endif

#if defined(C_ENABLE_CAN_FD_FULL) 
# if defined(CANLL_USE_SHIFT_MULTIPLY) /* COV_CAN_FIX_VERSION */
V_DEF_CONST(CAN_STATIC, tShiftMultiplyValueType, CONST) CanLL_ShiftMultiplyTable[8] =
{
  { 1, 0, 0 }, /* 000: 2*x + 1*x + 1*x = 4*x   ( 8bytes) */
  { 1, 1, 0 }, /* 001: 2*x + 2*x + 1*x = 5*x   (12bytes) */
  { 1, 1, 1 }, /* 010: 2*x + 2*x + 2*x = 6*x   (16bytes) */
  { 2, 1, 0 }, /* 011: 4*x + 2*x + 1*x = 7*x   (20bytes) */
  { 2, 1, 1 }, /* 100: 4*x + 2*x + 2*x = 8*x   (24bytes) */
  { 2, 2, 1 }, /* 101: 4*x + 4*x + 2*x = 10*x  (32bytes) */
  { 3, 2, 1 }, /* 110: 8*x + 4*x + 2*x = 14*x  (48bytes) */
  { 3, 3, 1 }  /* 111: 8*x + 8*x + 2*x = 18*x  (64bytes) */
};
# endif

V_DEF_CONST(CAN_STATIC, vuint8, CONST) CanLL_xES2Bytes[8] =
{
  8, 12, 16, 20,
 24, 32, 48, 64
};
#endif

/* KB end CanLL_Constants */

#define CAN_STOP_SEC_CONST_UNSPECIFIED  /*---------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***************************************************************************/
/* CAN-Hardware Data Definitions                                           */
/***************************************************************************/
/* KB begin CanLL_CanHardwareDataDefinitions */
/* e.g. McKinley
0xFFED4000        0xFFED7FFF 16 KB        15.5 KB        Shared CAN Message RAM
0xFFED8000        0xFFEDBFFF - Reserved
0xFFEDC000        0xFFEDFFFF 16 KB Time Triggered Controller Area Network (TTCAN_0)
0xFFEE0000        0xFFEE3FFF - Reserved
0xFFEE4000        0xFFEE7FFF 16 KB CAN Sub-System: Controller Area Network 1 (MCAN_1)
0xFFEE8000        0xFFEEBFFF 16 KB CAN Sub-System: Controller Area Network 2 (MCAN_2)
0xFFEEC000        0xFFEEFFFF 16 KB CAN Sub-System: Controller Area Network 3 (MCAN_3)
*/

/* KB end CanLL_CanHardwareDataDefinitions */

/***************************************************************************/
/* global data definitions                                                 */
/***************************************************************************/
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED  /*---------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
/*! bitmask of the active channels in the current identity */
V_DEF_VAR(V_NONE, uint16, VAR_NOINIT) canActiveIdentityMsk; /* PRQA S 3408 */ /* MD_Can_Asr_3408 */
/*! the activated identity handle */
V_DEF_VAR(V_NONE, uint8, VAR_NOINIT)  canActiveIdentityLog; /* PRQA S 3408 */ /* MD_Can_Asr_3408 */
#endif

/* KB begin CanLL_GlobalDataDefinition */
/* KB end CanLL_GlobalDataDefinition */

/***************************************************************************/
/* local data definitions                                                  */
/***************************************************************************/
/* \trace SPEC-1585 */
/*! Semaphore to block reentrancy for Can_MainFunction_Read() */
V_DEF_VAR(CAN_STATIC, Can_ReturnType, VAR_NOINIT) canRxTaskActive;
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
#   if (CAN_HW_LOOP_SUPPORT_API == STD_OFF) && (CAN_DEV_ERROR_DETECT == STD_ON)
/*! Save API context in witch the DET is called (Init, InitController, SetControllerMode, disable/enableControlerInterrupts) */
V_DEF_VAR(CAN_STATIC, uint8, VAR_NOINIT) canApiContext;
#   endif
#  endif
# endif
#endif

/* KB begin CanLL_LocalDataDefinition */
/* RAM CATEGORY 2 START */
#if defined(CAN_GEN_COM_STACK_LIB)
#else
# if defined( VGEN_GENY )     /* COV_CAN_FIX_VERSION */
/* In case of GenTool GENy do it yourself */
#  if defined( C_ENABLE_CAN_FD_DYN )    /* COV_CAN_FIX_VERSION */
V_DEF_VAR(CAN_STATIC, vuint32, VAR_NOINIT) Can_NonFdObjectsPendingFlag[kCanNumberOfChannels];
#  endif
# endif
#endif
/* RAM CATEGORY 2 END */
/* KB end CanLL_LocalDataDefinition */

#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED  /*----------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# define CAN_START_SEC_VAR_INIT_UNSPECIFIED  /*-----------------------------*/
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/* ! Mark module to be initialized (used to check double/none initialization) */
V_DEF_VAR(CAN_STATIC, uint8, VAR_INIT) canConfigInitFlag = CAN_STATUS_UNINIT;
# define CAN_STOP_SEC_VAR_INIT_UNSPECIFIED  /*------------------------------*/
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* not static because of debug/test usage */
#if defined(CAN_ENABLE_USE_INIT_ROOT_POINTER)
# define CAN_START_SEC_VAR_INIT_UNSPECIFIED  /*-----------------------------*/
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*! Pointer to the current configuration */
V_DEF_P2CONST (V_NONE, Can_ConfigType, VAR_INIT, CONST_PBCFG) Can_ConfigDataPtr = NULL_PTR; /* UREQ00035484 */ /* PRQA S 3408,1504 */ /* MD_Can_3408_extLinkage */
# define CAN_STOP_SEC_VAR_INIT_UNSPECIFIED  /*------------------------------*/
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#else
# define CAN_START_SEC_CONST_UNSPECIFIED  /*--------------------------------*/
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
/*! Pointer to the current configuration */
V_DEF_CONSTP2CONST(V_NONE, Can_ConfigType, CONST, CONST_PBCFG) Can_ConfigDataPtr = NULL_PTR; /* PRQA S 3408,3218,1514 */ /* MD_Can_3408_extLinkage,MD_Can_3218 */
# else
/*! Pointer to the current configuration */
V_DEF_CONSTP2CONST(V_NONE, Can_ConfigType, CONST, CONST_PBCFG) Can_ConfigDataPtr = &CanConfig; /* PRQA S 3408,3218,1514 */ /* MD_Can_3408_extLinkage,MD_Can_3218 */
# endif
# define CAN_STOP_SEC_CONST_UNSPECIFIED  /*---------------------------------*/
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

/***************************************************************************/
/*  Safe Check                                                             */
/***************************************************************************/
#if !defined(CAN_SAFE_BSW) /* COV_CAN_COMPATIBILITY */
# define CAN_SAFE_BSW   STD_OFF
#else
# if (CAN_SAFE_BSW == STD_ON) /* COV_CAN_SAFE_BSW */
#  if defined(C_ENABLE_MULTI_ECU_CONFIG) || \
     !defined(CAN_DEV_ERROR_DETECT) || \
     defined(CAN_ENABLE_TRACING) || \
     defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) || \
     !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) || \
     defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) || \
     defined(C_ENABLE_PARTIAL_NETWORK) || \
     defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) || \
     defined(CAN_ENABLE_BUSOFF_SUPPORT_API) || \
     defined(CAN_ENABLE_EXTENDED_STATE_MACHINE) || \
     (CAN_EMULATE_SLEEP != STD_ON) || \
     !defined(CAN_ENABLE_DYNAMIC_FULLCAN_ID) || \
     (CAN_AMD_RUNTIME_MEASUREMENT == STD_ON) || \
     !defined(C_ENABLE_GEN_HW_START_STOP_IDX) /* COV_CAN_SAFE_BSW_EXCLUSION */
#   error "Unsupported Feature activated for SafeBSW"
#  endif
# endif
#endif

/***************************************************************************/
/*  Error Check                                                            */
/***************************************************************************/
#if (CAN_TRANSMIT_BUFFER == STD_OFF) && defined(C_ENABLE_CANCEL_IN_HW)
# error "C_ENABLE_CANCEL_IN_HW need CAN_TRANSMIT_BUFFER == STD_ON (no FIFO buffering but PRIO_BY_CANID in CanIf) -> check Generated data"
#endif
#if defined(C_ENABLE_CANCEL_FULLCAN_IN_HW) && (CAN_CANCEL_SUPPORT_API == STD_OFF)
# error "C_ENABLE_CANCEL_FULLCAN_IN_HW need CAN_CANCEL_SUPPORT_API == STD_ON"
#endif
#if !defined(C_ENABLE_SLEEP_WAKEUP)
# if (CAN_SLEEP_SUPPORT == STD_ON) && (CAN_WAKEUP_SUPPORT == STD_ON)
#  error "C_ENABLE_SLEEP_WAKEUP organified but generated like supported"
# endif
#endif
#if (CAN_WAKEUP_SUPPORT == STD_ON) && (CAN_SLEEP_SUPPORT == STD_OFF)
# error "activated CAN_WAKEUP_SUPPORT need activated CAN_SLEEP_SUPPORT"
#endif
#if defined(C_ENABLE_HW_LOOP_TIMER)
# if (CAN_LOOP_MAX == 0)
#  error "CAN_LOOP_MAX should not be generated as 0"
# endif
#else
# if (CAN_HARDWARE_CANCELLATION == STD_ON)
#  error "C_ENABLE_HW_LOOP_TIMER organified but generated like supported"
# endif
#endif
#if !defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG TX */
# if (CAN_MULTI_ECU_CONFIG == STD_ON)
#  error "C_ENABLE_MULTI_ECU_CONFIG organified but generated like supported"
# endif
#endif
#if defined(C_ENABLE_CANCEL_IN_HW)
#else
# if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
#  error "C_ENABLE_CANCEL_IN_HW organified but generated like supported"
# endif
#endif
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  if (CAN_DEV_ERROR_DETECT == STD_OFF)
#   error "CAN_DEV_TIMEOUT_DETECT is switched on but CAN_DEV_ERROR_DETECT is not"
#  endif
# endif
#endif
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
# if defined(C_ENABLE_PARTIAL_NETWORK) /* COV_CAN_PARTIAL_NETWORK */
#  error "No need to switch on partial Network for MicroSar in version 4.x"
# endif
# if defined(CAN_ENABLE_BUSOFF_SUPPORT_API) /* COV_CAN_BUSOFF_SUPPORT_API */
#  error "BUSOFF_SUPPORT_API not supported for MicroSar in version 4.x"
# endif
# if defined(CAN_ENABLE_EXTENDED_STATE_MACHINE) /* COV_CAN_EXTENDED_STATE_MACHINE */
#  error "CAN_EXTENDED_STATE_MACHINE not supported for MicroSar in version 4.x"
# endif
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  error "CAN_DEV_TIMEOUT_DETECT not supported for MicroSar in version 4.x"
# endif
#endif
# if !defined(C_ENABLE_HW_LOOP_TIMER)
#  if defined(C_ENABLE_PARTIAL_NETWORK) /* COV_CAN_PARTIAL_NETWORK */
#   error "Feature 'partial network' (CanPnEnable) need 'Hardware Loop Check'"
#  endif
# endif
#if (CAN_MIRROR_MODE == STD_ON) && (!defined(CAN_ENABLE_GENERIC_CONFIRMATION_API2) || (CAN_GENERIC_PRECOPY == STD_OFF))
# error "CAN_MIRROR_MODE need CAN_GENERIC_CONFIRMATION with CAN_API2 and CAN_GENERIC_PRECOPY as STD_ON"
#endif
#if !defined(CAN_MULTIPLEXED_TX_MAX)
# error "CAN_MULTIPLEXED_TX_MAX is not generated"
#endif
#if (CAN_MULTIPLEXED_TRANSMISSION == STD_ON)
# if (CAN_MULTIPLEXED_TX_MAX != 3)
#  error "CAN_MULTIPLEXED_TX_MAX generated with wrong value"
# endif
#else
# if (CAN_MULTIPLEXED_TX_MAX != 1)
#  error "CAN_MULTIPLEXED_TX_MAX generated with wrong value"
# endif
#endif
#if (CAN_RAM_CHECK != CAN_NONE)
# if defined(CAN_ENABLE_EXTENDED_STATE_MACHINE) /* COV_CAN_EXTENDED_STATE_MACHINE */
# error "Feature RAM_CHECK is not available in combination with EXTENDED_STATE_MACHINE"
/* no STOP mode called after WAKEUP but need to run RAM check */
# endif
#endif
#if (CAN_MULTIPLE_BASICCAN_TX == STD_ON)
# if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/* cancellation does not work in CanHL_WritePrepareCancelTx for multiple BasicCAN messages, and is not useful for FIFO queue in CanIf (normally combined with multiple BCAN)*/
# error "CAN_MULTIPLE_BASICCAN_TX and CAN_HW_TRANSMIT_CANCELLATION are STD_ON but this combination is not supported"
# endif
#endif

#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
#endif

/***************************************************************************/
/*  Functions                                                              */
/***************************************************************************/
#define CAN_START_SEC_STATIC_CODE  /*--------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) ) || defined(C_ENABLE_HW_LOOP_TIMER) /* always used for sync mode */ /* COV_CAN_MICROSAR_VERSION */

# if defined(MISRA_CHECK) /* COV_CAN_MISRA */
/* TickRefType is pointer to TickType but unknown here */
#  pragma PRQA_MACRO_MESSAGES_OFF "CanHL_ApplCanTimerStart",432
#  pragma PRQA_MACRO_MESSAGES_OFF "CanHL_ApplCanTimerEnd",432
#  pragma PRQA_MACRO_MESSAGES_OFF "CanLL_ApplCanTimerStart",432
#  pragma PRQA_MACRO_MESSAGES_OFF "CanLL_ApplCanTimerEnd",432
# endif

# if defined( C_SINGLE_RECEIVE_CHANNEL )
#  define CanHL_ApplCanTimerStart( timerIdx )  ApplCanTimerStart( timerIdx );
#  define CanHL_ApplCanTimerEnd( timerIdx )    ApplCanTimerEnd( timerIdx );
# else
#  define CanHL_ApplCanTimerStart( timerIdx )  ApplCanTimerStart( channel, (timerIdx) );
#  define CanHL_ApplCanTimerEnd( timerIdx )    ApplCanTimerEnd( channel, (timerIdx) );
# endif
# define CanHL_ApplCanTimerLoop( timerIdx )   if (ApplCanTimerLoop( CAN_CHANNEL_CANPARA_FIRST (timerIdx) ) != CAN_OK) \
                                              { \
                                                break; \
                                              }

# if (CAN_HW_LOOP_SUPPORT_API == STD_OFF)
/* Internal handling of HW loops (like AutoSar) - otherwise ApplCanTimer... is defined an implemented by Application */
/****************************************************************************
| NAME:             ApplCanTimerStart
****************************************************************************/
/* Used as macro to save runtime and code */
#  if defined( C_SINGLE_RECEIVE_CHANNEL )
#   if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
/* \trace SPEC-1640 */
#    define ApplCanTimerStart(source)     ((void)GetCounterValue( CAN_OS_COUNTER_ID, &Can_GetCanLoopTimeout(0,(source))))
#   else
#    define ApplCanTimerStart(source)     (Can_GetCanLoopTimeout(0,(source)) = 0)
#   endif
#  else
#   if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
#    define ApplCanTimerStart(ch, source) ((void)GetCounterValue( CAN_OS_COUNTER_ID, &Can_GetCanLoopTimeout((ch),(source))))
#   else
#    define ApplCanTimerStart(ch, source) (Can_GetCanLoopTimeout((ch),(source)) = 0)
#   endif
#  endif
/****************************************************************************
| NAME:             ApplCanTimerLoop
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) ApplCanTimerLoop( CAN_CHANNEL_CANTYPE_FIRST uint8 source ) /* PRQA S 3219 */ /* MD_Can_Asr_3219 */
{ /* \trace SPEC-3952 */
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  uint8 errorId;
  uint8 apiId;
  errorId = CAN_E_NO_ERROR;
  apiId = CAN_HW_ACCESS_ID;
  retval = CAN_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller and source is valid (no INIT check because may be used inside power on INIT) */
  if (source >= CAN_LOOP_AMOUNT) /* CM_CAN_HL22 */
  {
    errorId = CAN_E_PARAM_HANDLE;
  }
  else
#   if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#   endif
#  endif
  {
    /* ----- Implementation ----------------------------------------------- */
#  if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
  /* #100 In case of MSR4: */
    TickType elapsedTime;
    TickType startTime;
    /* #110 Calculate the elapsed since time the start of this hardware loop (identified by parameter source). */
    /* Get start time (set by ApplCanTimerStart - temporary variable because GetElapsedValue modify original data */
    startTime = Can_GetCanLoopTimeout(channel,source);
    /* Get elapsed time - from start time to now */
    /* #120 Throw DET error when GetElapsedValue() failed */
    if ( GetElapsedValue( CAN_OS_COUNTER_ID, &startTime, &elapsedTime ) != (StatusType)E_OK ) /* PRQA S 432 */ /* TickRefType is pointer to TickType but unknown here */ /* SBSW_CAN_HL37 */ /* COV_CAN_GENDATA_FAILURE */
    {
      errorId = CAN_E_TIMEOUT_DET;
    }
    else
    {
      /* #130 Check if time out occurs for HW loop checks (none mode transition) \trace SPEC-1594 */
      if ( (TickType)CAN_OS_TICK2MS( elapsedTime ) < (TickType)CAN_TIMEOUT_DURATION )
      { /* no time out occur return OK */
        retval = CAN_OK;
      }
#   if defined(C_ENABLE_HW_LOOP_TIMER)
      else
      { /* Mode Change synchronous & HW loop check */
        /* #140 Throw DET error and set hardware cancellation flag */
        if (source < CAN_LOOP_MAX)
        { 
          errorId = CAN_E_TIMEOUT_DET;
          Can_SetIsHardwareCanceled(channel,TRUE); /* SBSW_CAN_HL14 */
        }
      }
#   endif
    }
    CAN_DUMMY_STATEMENT(startTime); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  else
  /* #200 In case of MSR3: */
    /* #210 Increment HW loop counter */
    Can_GetCanLoopTimeout(channel,source)++; /* SBSW_CAN_HL15 */
    /* #220 Check if time out occurs */
    if ( Can_GetCanLoopTimeout(channel,source) >= CAN_TIMEOUT_DURATION ) /* \trace SPEC-3953 */
    {
#   if defined(C_ENABLE_PARTIAL_NETWORK) /* COV_CAN_PARTIAL_NETWORK */
      /* #230 Do not throw error when partial network is active for this controller */
      if ( Can_IsTimeoutCall(channel) )
#   endif
      { /* #240 Throw DET or DEM error and set hardware cancellation flag */
#   if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
        apiId = canApiContext;
        errorId = CAN_E_TIMEOUT_DET;
#   else
#    if (CAN_PROD_ERROR_DETECT == STD_ON) /* \trace SPEC-1398 */ /* is explicit ignored due to vector general requirements */
        Can_Dem_ReportError(canDemErrorTimeout); /* \trace SPEC-1726, SPEC-1725, SPEC-3846, SPEC-3824, SPEC-3928 */
#    endif
#   endif
        Can_SetIsHardwareCanceled(channel,TRUE); /* SBSW_CAN_HL14 */
      }
    }
    else
    {
  /* #300 no time out occur return OK */
      retval = CAN_OK;
    }
#  endif /* CAN_MSR3/4 */
  }

  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)  
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(apiId, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(apiId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
  return retval;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
/****************************************************************************
| NAME:             ApplCanTimerEnd
****************************************************************************/
/* Used as macro to save runtime and code */
/* because of possible nested timers .. timer has to be reset */
#  define ApplCanTimerEnd ApplCanTimerStart
# endif /* (CAN_HW_LOOP_SUPPORT_API == STD_OFF) */

#else /* C_ENABLE_HW_LOOP_TIMER */
/* no HW loop is used at all */
# define CanHL_ApplCanTimerStart( timerIdx )
# define CanHL_ApplCanTimerLoop( timerIdx )
# define CanHL_ApplCanTimerEnd( timerIdx )
#endif

/****************************************************************************
| NAME:             CanInit
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanInit( CAN_CHANNEL_CANTYPE_FIRST uint8 initObject ) /* COV_CAN_BUSOFF_NOT_IN_ALL_CONFIG */
{
  /* ----- Local Variables ---------------------------------------------- */
  
  /* ----- Development Error Checks ------------------------------------- */
  /* parameter initObject is already checked by caller */
  /* parameter channel is already checked by caller */
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #100 Reinitialize the controller (Call fitting controller initialization function Can_InitController()) */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
    Can_InitController((uint8)channel, &Can_GetControllerBaudrateConfig(((uint8)(initObject - (uint8)(Can_GetInitObjectStartIndex(channel))) & 0x03u))); /* SBSW_CAN_HL03 */
#else
    Can_InitController((uint8)channel, NULL_PTR); /* SBSW_CAN_HL03 */
    CAN_DUMMY_STATEMENT(initObject); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
#if defined(CAN_ENABLE_BUSOFF_SUPPORT_API) /* COV_CAN_BUSOFF_SUPPORT_API */
    /* #110 Switch to START mode if BUSOFF handling is done by application */
    /* normally CanResetBusOffStart/STOP (and CanResetBusSleep) use this call so no other action is needed.
       But when application do this call the state has to be set to START here because it will not be done in SetControllerMode(). */
    { 
      (void)Can_SetControllerMode((uint8)channel, CAN_T_START);
    }
#endif
  }
}

/****************************************************************************
| NAME:             Can_CleanUpSendState
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) Can_CleanUpSendState( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  CanObjectHandle logTxObjHandle;
# if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
  CanObjectHandle logTxObjHandleStop;
# endif
  Can_HwHandleType Htrh;
  /* ----- Implementation ----------------------------------------------- */
  /* parameter channel is already checked by caller */
  /* #10 set all BasicCAN TX Objects to state FREE to allow a new transmission */
  Htrh = Can_GetTxBasicHandleStart(canHwChannel);
# if defined(C_ENABLE_MULTIPLE_BASICCAN_TX)
  for (; Htrh < Can_GetTxBasicHandleStop(canHwChannel); Htrh++)
# endif
  {
    logTxObjHandle = CanHL_GetTxHwToLogHandle(CAN_CHANNEL_CANPARA_FIRST Can_GetHwHandle(Htrh));
# if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
    logTxObjHandleStop = logTxObjHandle + (Can_HwHandleType)CAN_MULTIPLEXED_TX_MAX;
    for (; logTxObjHandle < logTxObjHandleStop; logTxObjHandle++)
# endif
    {
      CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */
    }
  }
# if defined(C_ENABLE_TX_FULLCAN_OBJECTS)
  /* #20 set all FullCAN TX Objects to state FREE to allow a new transmission */
  for (Htrh = Can_GetTxFullHandleStart(canHwChannel); Htrh < Can_GetTxFullHandleStop(canHwChannel); Htrh++)
  {
    logTxObjHandle = CanHL_GetTxHwToLogHandle(CAN_CHANNEL_CANPARA_FIRST Can_GetHwHandle(Htrh));
    CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */ 
  }
# endif
}

/****************************************************************************
| NAME:             CanHL_StartTransition
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_StartTransition( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType transitionRequest;
  Can_ReturnType retval = CAN_NOT_OK; /* PRQA S 3197 */ /* MD_MSR_14.2 */
  /* ----- Implementation ----------------------------------------------- */
  { /* #20 HW request transition (LL) \trace SPEC-1628 */
    /* KB begin CanLL_StartRequest */
    transitionRequest = kCanFailed; /* PRQA S 3198 */ /* MD_Can_3198_LL */
    #if defined(C_ENABLE_CAN_FD)
    if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) != CAN_NONE )
    {
      if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_FD_RXTX )
      { /* CAN_FD_RXTX */
      # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_BRSE     | kCanCCCR_FDOE))          == (kCanCCCR_BRSE | kCanCCCR_FDOE)) )
      #  else
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_CME_LONG | kCanCCCR_CME_LONG_FAST)) == kCanCCCR_CME_LONG_FAST) )
      #  endif
        { /* Already in operation mode */
          transitionRequest = kCanOk;
        }
      }
      else
      { /* CAN_FD_RXONLY */
      # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ( (Cn->CCCR & (kCanCCCR_BRSE     | kCanCCCR_FDOE))          == kCanCCCR_FDOE) )
      #  else
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ( (Cn->CCCR & (kCanCCCR_CME_LONG | kCanCCCR_CME_LONG_FAST)) == kCanCCCR_CME_LONG) )
      #  endif
        { /* Already in operation mode */
          transitionRequest = kCanOk;
        }
      }
    }
    else
    {
      if ( (Cn->CCCR & kCanCCCR_INIT) == 0 )
      { /* Already in operation mode */
        transitionRequest = kCanOk;
      }
    }
    #else
    if ( (Cn->CCCR & kCanCCCR_INIT) == 0 )
    { /* Already in operation mode */
      transitionRequest = kCanOk;
    }
    #endif
    if ( transitionRequest != kCanOk )
    {
      /* After resetting CCCR[INIT] the Bit Stream Processor (BSP) synchronizes itself to the data transfer 
         on the CAN bus by waiting for Bus_Idle (sequence of 11 consecutive recessive bits) .
         CCCR[CCE] is automatically reset when CCCR[INIT] is reset. */
      /* CCCR_: INIT, CCE, ASM, CSR, MON, DAR, TEST disabled (automated retransmission is enabled) */
      Cn->CCCR &= (vuint32)(~kCanCCCR_CSR);
      Cn->CCCR &= (vuint32)(~kCanCCCR_INIT);
      transitionRequest = kCanRequested;
    }
    /* KB end CanLL_StartRequest */
    if ( transitionRequest == CAN_REQUESTED ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_START */
    { /* PRQA S 3201 */ /* MD_Can_3201 */
      CanHL_ApplCanTimerStart(kCanLoopStart); /* SBSW_CAN_HL38 */
      /* #40 start Loop that wait (ASR4: short time) for transition \trace SPEC-1642, SPEC-1635, SPEC-1630 */
      do
      { /* #45 HW check mode reached (LL) */
        /* KB begin CanLL_StartProcessed */
        {
          transitionRequest = kCanFailed;
          #if defined(C_ENABLE_CAN_FD)
          if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) != CAN_NONE )
          {
            if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_FD_RXTX )
            { /* CAN_FD_RXTX */
            # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
              if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_BRSE     | kCanCCCR_FDOE))          == (kCanCCCR_BRSE | kCanCCCR_FDOE)) )
            #  else
              if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_CME_LONG | kCanCCCR_CME_LONG_FAST)) == kCanCCCR_CME_LONG_FAST) )
            #  endif
              { /* Operation mode reached */
            # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
                /* request is accomplished via Message RAM per message */
            #  else
                Cn->CCCR |= kCanCCCR_CMR_LONG_FAST; /* LONG and FAST request */
            #  endif
                transitionRequest = kCanOk;
              }
            }
            else
            { /* CAN_FD_RXONLY */
            # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
              if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_BRSE     | kCanCCCR_FDOE))          == kCanCCCR_FDOE) )
            #  else
              if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_CME_LONG | kCanCCCR_CME_LONG_FAST)) == kCanCCCR_CME_LONG) )
            #  endif
              { /* Operation mode reached */
            # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
                /* request is accomplished via Message RAM per message */
            #  else
                Cn->CCCR |= kCanCCCR_CMR_LONG; /* LONG request */
            #  endif
                transitionRequest = kCanOk;
              }
            }
          }
          else
          {
            if ( (Cn->CCCR & kCanCCCR_INIT) == 0 )
            { /* Operation mode reached */
          # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
              /* NORMAL CAN operation request is accomplished via Message RAM per message */
          #  else
              Cn->CCCR |= kCanCCCR_CMR_CAN20; /* NORMAL CAN operation request */
          #  endif
              transitionRequest = kCanOk;
            }
          }
          #else
          if ( (Cn->CCCR & kCanCCCR_INIT) == 0 )
          { /* Operation mode reached */
          # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
            /* NORMAL CAN operation request is accomplished via Message RAM per message */
          #  else
            Cn->CCCR |= kCanCCCR_CMR_CAN20; /* NORMAL CAN operation request */
          #  endif
            transitionRequest = kCanOk;
          }
          #endif
        }
        /* KB end CanLL_StartProcessed */
        CanHL_ApplCanTimerLoop(kCanLoopStart);
      } while ( transitionRequest != CAN_OK ); /* COV_CAN_TRANSITION_REQUEST_START */
      CanHL_ApplCanTimerEnd (kCanLoopStart); /* SBSW_CAN_HL38 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */ 
      if ( transitionRequest != CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_START */
      { /* PRQA S 3201 */ /* MD_Can_3201 */
#  if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
        /* #50 ASR4: transition failed so return OK but repeat it asynchronous */
        Can_SetStatusReq(channel, CAN_REQ_START); /* Asynchronous polling on */ /* SBSW_CAN_HL01 */
        retval = CAN_OK; /* PRQA S 3197,3198 */ /* MD_MSR_14.2 */
#  endif
      }
# endif
    }
  } /* loop canHwChannel */
# if defined(C_ENABLE_HW_LOOP_TIMER)
  if (( transitionRequest == CAN_OK ) && ( !Can_IsIsHardwareCanceled(channel) )) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_START */
# else
  if ( transitionRequest == CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_START */
# endif
  { /* PRQA S 3201 */ /* MD_Can_3201 */
    /* #70 transition finished synchronous return OK and change internal state */
    CanHookStateChange_StartSync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_START) );
    Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_START)); /* SBSW_CAN_HL02 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
    /* #80 allow reinitialization in notification */
    Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
    /* #90 ASR4: call notification CanIf_ControllerModeIndication() \trace SPEC-1726, SPEC-1644, SPEC-60446 */
    CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_STARTED );
#endif
    retval = CAN_OK;
  }
  return retval;
} /* PRQA S 6010,6030,6050 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL */

/****************************************************************************
| NAME:             CanHL_StopTransition
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_StopTransition( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval = CAN_NOT_OK; /* PRQA S 3197 */ /* MD_MSR_14.2 */
  /* ----- Implementation ----------------------------------------------- */
  /* #20 ESCAN00073272 need Can_InitController() (in case of HW failure) */
  if( (Can_GetLogStatus(channel) & (CAN_STATUS_STOP | CAN_STATUS_START)) == 0 ) /* COV_CAN_HARDWARE_FAILURE */
  {
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
    Can_InitController((uint8)channel, &Can_GetControllerBaudrateConfig(((uint8)(Can_GetLastInitObject(channel) - (uint8)Can_GetInitObjectStartIndex(channel)) & 0x03u))); /* SBSW_CAN_HL03 */
#else
    Can_InitController((uint8)channel, NULL_PTR); /* SBSW_CAN_HL03 */
#endif
  }
  {
    /* #25 set STOP request if not done in Can_InitController() before */
    Can_ReturnType transitionRequest;
    { /* #40 HW request transition (LL) \trace SPEC-1632 */
      /* KB begin CanLL_StopRequest */
      if( (Cn->CCCR & kCanCCCR_INIT) == 0)
      { /* While CCCR[INIT] is set, message transfer from and to the CAN bus is stopped, the status of the CAN bus transmit output is recessive (HIGH). 
           Setting CCCR[INIT] does not change any configuration register. 
           After resetting CCCR[INIT] the Bit Stream Processor (BSP) synchronizes itself to the data transfer on the CAN bus 
           by waiting for the occurrence of a sequence of 11 consecutive recessive bits (= Bus_Idle) before it can take part in bus activities and start the message transfer. */
      #if ( CAN_BOSCH_ERRATUM_008 == STD_ON )
        /* When CCCR.INIT is set while the M_CAN is receiving a frame, the next received frame         
           after resetting CCCR.INIT will cause IR.MRAF to be set.
            Workaround:
            1) Issue a clock stop request by setting bit CCCR.CSR
            2) Wait until the M_CAN sets CCCR.INIT and CCCR.CSA to one
               Before resetting CCCR.INIT first reset CCCR.CSR. */
        Cn->CCCR |= kCanCCCR_CSR;
      #else
        Cn->CCCR  = kCanCCCR_INIT;
      #endif
        transitionRequest = kCanRequested;
      }
      else
      { /* Already in stop mode */
        transitionRequest = kCanOk;
      }
      /* KB end CanLL_StopRequest */
      if ( transitionRequest == CAN_REQUESTED ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_STOP */
      { /* PRQA S 3201 */ /* MD_Can_3201 */
        CanHL_ApplCanTimerStart(kCanLoopStop); /* SBSW_CAN_HL38 */
        /* #60 start Loop that wait (ASR4: short time) for transition \trace SPEC-1636, SPEC-1635, SPEC-1630 */
        do
        { /* #65 HW check mode reached (LL) */
          /* KB begin CanLL_StopProcessed */
          {
          #if ( CAN_BOSCH_ERRATUM_008 == STD_ON )
            if( (Cn->CCCR & kCanCCCR_CSA) == kCanCCCR_CSA ) /*  When clock stop is requested, first INIT and then CSA will be set after
                                                                all pending transfer requests have been completed and the bus reached idle */
          #else
            if( (Cn->CCCR & kCanCCCR_INIT) == kCanCCCR_INIT )
          #endif
            { /* Stop mode reached */
              transitionRequest = kCanOk;
            }
            else
            {
              transitionRequest = kCanFailed;
            }
          }
          /* KB end CanLL_StopProcessed */
          CanHL_ApplCanTimerLoop(kCanLoopStop);
        } while ( transitionRequest != CAN_OK ); /* COV_CAN_TRANSITION_REQUEST_STOP */
        CanHL_ApplCanTimerEnd(kCanLoopStop); /* SBSW_CAN_HL38 */
#  if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */ 
        if ( transitionRequest != CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_STOP */
        { /* PRQA S 3201 */ /* MD_Can_3201 */
#   if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
          /* #70 ASR4: transition failed so return OK but repeat it asynchronous */
          Can_SetStatusReq(channel, CAN_REQ_STOP); /* Asynchronous polling on */ /* SBSW_CAN_HL01 */
          retval = CAN_OK;
#   endif
        }
#  endif
      }
    } /* loop canHwChannel */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
    if (( transitionRequest == CAN_OK ) && ( !Can_IsIsHardwareCanceled(channel) )) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_STOP */
#  else
    if ( transitionRequest == CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_STOP */
#  endif
    { /* PRQA S 3201 */ /* MD_Can_3201 */
      /* #110 transition finished synchronous return OK and change internal state */
      CanHookStateChange_StopSync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP) );
      retval = CAN_OK;
      { /* #120 Use short initialization instead of Can_InitController() (LL) \trace SPEC-1627, SPEC-1646, SPEC-3965 */
        CanHL_StopReinit(CAN_HW_CHANNEL_CANPARA_ONLY);
      }
      Can_CleanUpSendState(CAN_CHANNEL_CANPARA_ONLY);
      Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP)); /* SBSW_CAN_HL02 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
      /* #130 allow reinitialization in notification */
      Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
      /* #140 ASR4: call notification CanIf_ControllerModeIndication() \trace SPEC-1726, SPEC-1644, SPEC-60446 */
      CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_STOPPED );
#endif
    }
  }
  return retval;
} /* PRQA S 6010,6030,6050 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL */

/****************************************************************************
| NAME:             CanHL_WakeupTransition
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_WakeupTransition( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  /* ----- Implementation ----------------------------------------------- */
#if defined(C_ENABLE_SLEEP_WAKEUP)
  if (Can_GetWakeupSourceRef(channel) != 0) /* COV_CAN_WAKEUP_CHANNEL_NOT_IN_ALL_CONFIG */
  { /* #5 hardware is only in SLEEP if WAKEUP over bus is active and supported -> otherwise emulated SLEEP */
    /* #7 WAKEUP: set request and wait limited time and notify upper Layer (do RAM check) */
    Can_ReturnType transitionRequest;
    retval = CAN_NOT_OK; /* PRQA S 3197,3198 */ /* MD_MSR_14.2 */
    { /* #20 HW request transition (LL) */
      /* KB begin CanLL_WakeUpRequest */
      /* request RUNNING mode finish SLEEP */
      /* a) Reset CCCR[CSR] (before resetting the CSR bit the module clocks must have been turned on by the application)
         b) M_CAN will acknowledge the reset of the CSR bit by resetting CCCR[CSA]. 
         c) Now the application can reset CCCR[INIT] to restart the CAN communication */
      
      ApplCanClockStart(CAN_HW_CHANNEL_CANPARA_ONLY);        /* request the application to turn on the clocks (CAN, Host) */
      
      if ( (Cn->CCCR & kCanCCCR_CSA) == kCanCCCR_CSA)
      { /* Cancel Power Down request */
        Cn->CCCR &= (vuint32)(~kCanCCCR_CSR);
        transitionRequest = kCanRequested;
      }
      else if ( (Cn->CCCR & kCanCCCR_INIT) == kCanCCCR_INIT)
      { /* Request RUNNING mode */
        Cn->CCCR &= (vuint32)(~kCanCCCR_CSR);
        Cn->CCCR &= (vuint32)(~kCanCCCR_INIT);
        transitionRequest = kCanRequested;
      }
      else
      { /* Already RUNNING */
        transitionRequest = kCanOk;
      }
      /* KB end CanLL_WakeUpRequest */
      if ( transitionRequest == CAN_REQUESTED ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_WAKEUP */
      { /* PRQA S 3201 */ /* MD_Can_3201 */
        CanHL_ApplCanTimerStart(kCanLoopWakeup); /* SBSW_CAN_HL38 */
        /* #40 start Loop that wait (ASR4: short time) for transition \trace SPEC-1643, SPEC-1635, SPEC-1630 */
        do
        { /* #45 HW check mode reached (LL) */
          /* KB begin CanLL_WakeUpProcessed */
          {
            if ( (Cn->CCCR & kCanCCCR_INIT) == 0)
            { /* reached normal mode */
              transitionRequest = kCanOk;
            }
            else
            {
              transitionRequest = kCanFailed;
            }
          }
          /* KB end CanLL_WakeUpProcessed */
          CanHL_ApplCanTimerLoop(kCanLoopWakeup);
        } while ( transitionRequest != CAN_OK ); /* COV_CAN_TRANSITION_REQUEST_WAKEUP */
        CanHL_ApplCanTimerEnd(kCanLoopWakeup); /* SBSW_CAN_HL38 */
#  if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */ 
        if ( transitionRequest != CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_WAKEUP */
        { /* PRQA S 3201 */ /* MD_Can_3201 */
#   if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
          /* #50 ASR4: transition failed so return OK but repeat it asynchronous */
          Can_SetStatusReq(channel, CAN_REQ_WAKEUP); /* Asynchronous polling on */ /* SBSW_CAN_HL01 */
          retval = CAN_OK;
#   endif
        }
#  endif
      }
    } /* loop canHwChannel */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
    if (( transitionRequest == CAN_OK ) && ( !Can_IsIsHardwareCanceled(channel) )) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_WAKEUP */
#  else
    if ( transitionRequest == CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_WAKEUP */
#  endif
    { /* PRQA S 3201 */ /* MD_Can_3201 */
      /* #70 transition finished synchronous return OK and change internal state */
      CanHookStateChange_WakeupSync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP) );
# if defined(C_ENABLE_CAN_RAM_CHECK) 
      /* #80 do standard RAM check CanHL_DoRamCheck() */
      Can_SetLogStatus(channel, CAN_STATUS_UNINIT); /* Like PowerOn */ /* SBSW_CAN_HL02 */
      CanHL_DoRamCheck(CAN_CHANNEL_CANPARA_ONLY);
# else
      { /* #90 Use short initialization instead of Can_InitController() (LL) */
        CanHL_StopReinit(CAN_HW_CHANNEL_CANPARA_ONLY);
      }
# endif
      /* #100 remove SLEEP and set to STOP */
      Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP)); /* SBSW_CAN_HL02 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
      /* #110 allow reinitialization in notification */
      Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
      /* #120 ASR4: call notification CanIf_ControllerModeIndication() \trace SPEC-1726, SPEC-1644, SPEC-60426, SPEC-60446 */
      CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_STOPPED );
# endif
      retval = CAN_OK;
    }

  }
  else /* no WAKEUP-source-ref: do emulated SLEEP mode */
#endif
  { /* #130 emulated SLEEP (CAN_NOT_SUPPORTED is CAN_OK) (stay in STOP mode instead) \trace SPEC-1638 */
    /* #140 transition finished synchronous return OK and change internal state */
    retval = CAN_OK;
#if defined(C_ENABLE_CAN_RAM_CHECK) 
      /* #150 do standard RAM check CanHL_DoRamCheck() */
    Can_SetLogStatus(channel, CAN_STATUS_UNINIT); /* Like PowerOn */ /* SBSW_CAN_HL02 */
    CanHL_DoRamCheck(CAN_CHANNEL_CANPARA_ONLY);
#endif
    /* #160 delete SLEEP for CAN_EMULATE_SLEEP and set to STOP \trace SPEC-1653 */
    Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP)); /* SBSW_CAN_HL02 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
    /* #170 allow reinitialization in notification */
    Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
    /* #180 ASR4: call notification CanIf_ControllerModeIndication() \trace SPEC-1726, SPEC-1644, SPEC-60446 */
    CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_STOPPED );
#endif
  }
  return retval;
} /* PRQA S 6010,6030,6050 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL */

#if defined(C_ENABLE_CAN_RAM_CHECK)
/****************************************************************************
| NAME:             CanHL_DoRamCheck
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_DoRamCheck( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  /* ----- Implementation ----------------------------------------------- */
  /* SLEEP is already set as logical status for first WAKEUP after SLEEP (changed to STOP after this) */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
  /* #20 remove mark ongoing state change (force STOP transition in Can_InitController()) */
  Can_SetStatusReq(channel, Can_GetStatusReq(channel) & (uint8)(~(CAN_REQ_INIT_NO_STOP))); /* PRQA S 0277 */ /* MD_Can_0277_negation */ /* SBSW_CAN_HL01 */
  Can_SetStatusReq(channel, Can_GetStatusReq(channel) | CAN_REQ_RAM_CHECK); /* SBSW_CAN_HL01 */
# endif
  /* #30 call Can_InitController() to perform the RAM check */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
  Can_InitController((uint8)channel, &Can_GetControllerBaudrateConfig(((uint8)(Can_GetLastInitObject(channel) - (uint8)Can_GetInitObjectStartIndex(channel)) & 0x03u))); /* SBSW_CAN_HL03 */
# else
  Can_InitController((uint8)channel, NULL_PTR); /* SBSW_CAN_HL03 */
# endif
  Can_SetStatusReq(channel, Can_GetStatusReq(channel) & (uint8)(~(CAN_REQ_RAM_CHECK))); /* deactivate RamCheck - finished */ /* PRQA S 0277 */ /* MD_Can_0277_negation */ /* SBSW_CAN_HL01 */
}
#endif

/****************************************************************************
| NAME:             CanHL_SleepTransition
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_SleepTransition( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval = CAN_NOT_OK; /* PRQA S 3197 */ /* MD_MSR_14.2 */
  /* ----- Implementation ----------------------------------------------- */
#if defined(C_ENABLE_SLEEP_WAKEUP)
  /* #10 Transition only when WAKEUP by bus is configured, otherwise use emulated SLEEP \trace SPEC-1633 */
  if (Can_GetWakeupSourceRef(channel) != 0) /* COV_CAN_WAKEUP_CHANNEL_NOT_IN_ALL_CONFIG */
  {
    Can_ReturnType transitionRequest;
# if defined(CAN_ENABLE_EXTENDED_STATE_MACHINE) /* COV_CAN_EXTENDED_STATE_MACHINE */
    /* #20 call CanResetBusSleep() for ENABLE_EXTENDED_STATE_MACHINE */
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
    CanResetBusSleep(channel, Can_GetLastInitObject(channel));
#  else
    CanResetBusSleep(Can_GetLastInitObject(channel));
#  endif
# endif

# if defined(C_ENABLE_PARTIAL_NETWORK) /* COV_CAN_PARTIAL_NETWORK */
    if (Can_GetPartialNetwork(channel) == TRUE)
    { /* #30 for partial network channels deactivate DET notification in HW-loop */
      Can_SetTimeoutCall(channel,FALSE); /* SBSW_CAN_HL13 */
    }
# endif
    { /* #50 HW request transition (LL) */ /* \trace SPEC-1639 */
      /* KB begin CanLL_SleepRequest */
      {
        /*  Power down (Sleep mode):
            The M_CAN can be set into power down mode via CCCR[CSR]. 
            When clock stop is requested (CCCR[CSR]='1') first INIT and then CSA will be set after all pending transfer requests are completed and the CAN bus reached idle.
            1)  As long as the clock stop request signal is active, bit CCCR[CSR] is read as one. 
            1a) When all pending transmission requests have completed, 
            1b) then M_CAN waits until bus idle state is detected. 
            2)  The M_CAN sets CCCR[INIT] to one to prevent any further CAN transfers. 
            3)  Now M_CAN acknowledges that it is ready for power down by setting CCCR[CSA] to one. 
                In this state, before the clocks are switched off, further register accesses can be made. 
                A write access to CCCR[INIT] will have no effect. 
            4)  Now the module clock inputs (CAN clock and host clock) may be switched off. 
            5)  To leave power down mode, the application has to turn on the module clocks before resetting CCCR[CSR]. 
            5a) The M_CAN will acknowledge this by resetting CCCR[CSA]. 
            6)  Afterwards, the application can restart CAN communication by resetting bit CCCR[INIT]. */
      
        /* Put HW to halt mode, if it is not already there */
        if((Cn->CCCR & kCanCCCR_CSA) != kCanCCCR_CSA)
        { /* Set clock stop request, then wait for acknowledge (CSA) */
          Cn->CCCR = kCanCCCR_CSR;
          transitionRequest = kCanRequested;
        }
        else
        { /* Already in sleep mode. Nothing to be done */
          ApplCanClockStop(CAN_HW_CHANNEL_CANPARA_ONLY); /* request the application to turn off the clocks (CAN, Host) */
          transitionRequest = kCanOk;
        }
      }
      /* KB end CanLL_SleepRequest */
      if ( transitionRequest == CAN_REQUESTED ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_SLEEP */
      { /* PRQA S 3201 */ /* MD_Can_3201 */
        CanHL_ApplCanTimerStart(kCanLoopSleep); /* SBSW_CAN_HL38 */
        /* #70 start Loop that wait (ASR4: short time) for transition \trace SPEC-1651, SPEC-1635, SPEC-1630 */
        do
        { /* #80 HW check mode reached (LL) */
          /* KB begin CanLL_SleepProcessed */
          /* Check if sleep mode is reached now */
          if ( (Cn->CCCR & kCanCCCR_CSA) == kCanCCCR_CSA)
          { /* Power Down mode is now reached, all pending transmissions are finished and Bus Idle was detected. */
            ApplCanClockStop(CAN_HW_CHANNEL_CANPARA_ONLY); /* request the application to turn off the clocks (CAN, Host) */
            /* Enable wakeup interrupt (any pending interrupt will be raised when the locks are removed */
            Cn->ILS = kCanILS_ALL_ZERO;  /* All INTs assigned to INT line '0' */
            Cn->ILE = kCanILE_EINT0;     /* enable INT line '0' */
            Cn->IE  = Can_GetCanIntEnable(canHwChannel);
            transitionRequest = kCanOk;
          }
          else
          {
            transitionRequest = kCanFailed;
          }
          /* KB end CanLL_SleepProcessed */
          CanHL_ApplCanTimerLoop(kCanLoopSleep);
        } while ( transitionRequest != CAN_OK ); /* COV_CAN_TRANSITION_REQUEST_SLEEP */
        CanHL_ApplCanTimerEnd(kCanLoopSleep); /* SBSW_CAN_HL38 */
#  if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */ 
        if ( transitionRequest != CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_SLEEP */
        { /* PRQA S 3201 */ /* MD_Can_3201 */
#   if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
          /* #90 ASR4: transition failed so return OK but repeat it asynchronous */
          Can_SetStatusReq(channel, CAN_REQ_SLEEP); /* Asynchronous polling on */ /* SBSW_CAN_HL01 */
          retval = CAN_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */
#   endif
        }
#  endif
      }
    } /* loop canHwChannel */
# if defined(C_ENABLE_PARTIAL_NETWORK) /* COV_CAN_PARTIAL_NETWORK */
    /* #110 partial network: activate DET notification again */
    Can_SetTimeoutCall(channel,TRUE); /* SBSW_CAN_HL13 */
# endif
#  if defined(C_ENABLE_HW_LOOP_TIMER)
   if (( transitionRequest == CAN_OK ) && ( !Can_IsIsHardwareCanceled(channel) )) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_SLEEP */
#  else
    if ( transitionRequest == CAN_OK ) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */ /* COV_CAN_TRANSITION_REQUEST_SLEEP */
#  endif
    /* #120 transition finished synchronous return OK and change internal state */
    { /* PRQA S 3201 */ /* MD_Can_3201 */
      CanHookStateChange_SleepSync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_SLEEP) );
      Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_SLEEP)); /* SBSW_CAN_HL02 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
      /* #130 allow reinitialization in notification */
      Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
      /* #140 ASR4: call notification CanIf_ControllerModeIndication() \trace SPEC-1726, SPEC-1644, SPEC-60446 */
      CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_SLEEP );
# endif
      retval = CAN_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */
    }
  }
  else 
#endif
  /* #150 no WAKEUP-source-ref: do emulated SLEEP mode \trace SPEC-1629, SPEC-1641, SPEC-1645, SPEC-3914, SPEC-3927 */
  {
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
    /* #160 controller stay in STOP mode / CAN_NOT_SUPPORTED is CAN_OK */
    retval = CAN_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */
#endif
#if (CAN_EMULATE_SLEEP == STD_ON) /* COV_CAN_EMULATE_SLEEP */
    retval = CAN_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */
    Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_SLEEP)); /* SBSW_CAN_HL02 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
    /* #170 allow reinitialization in notification */
    Can_SetStatusReq(channel, Can_GetStatusReq(channel)& (uint8)(~(CAN_REQ_INIT_NO_STOP))); /* PRQA S 0277 */ /* MD_Can_0277_negation */ /* SBSW_CAN_HL01 */
    /* #180 ASR4: call notification CanIf_ControllerModeIndication() \trace SPEC-1726, SPEC-1644, SPEC-60446 */
    CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_SLEEP );
# endif
#endif
  }
#if !defined(C_ENABLE_SLEEP_WAKEUP)
# if (CAN_EMULATE_SLEEP == STD_OFF) /* COV_CAN_EMULATE_SLEEP */
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
# endif
#endif
  return retval;
} /* PRQA S 6010,6030,6050,6080*/ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */

#if defined(C_ENABLE_CANCEL_IN_HW) && defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
/****************************************************************************
| NAME:             CanHL_SortlogTxObjHandlePrioList
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_SortlogTxObjHandlePrioList( CanHlObjectHandlePtrType logTxObjHandlePrioList )
{
  /* ----- Local Variables ---------------------------------------------- */
  CanObjectHandle tmp_logTxObjHandle;
  /* ----- Implementation ----------------------------------------------- */
  /* #10 sort element 0 and 1 */
  if (   CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[0]).id)
       < CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[1]).id) )
  {
    tmp_logTxObjHandle = logTxObjHandlePrioList[0];
    logTxObjHandlePrioList[0] = logTxObjHandlePrioList[1]; /* SBSW_CAN_HL21 */
    logTxObjHandlePrioList[1] = tmp_logTxObjHandle; /* SBSW_CAN_HL21 */
  }
  /* #20 sort element 1 and 2 */
  if (   CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[1]).id)
       < CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[2]).id) )
  {
    tmp_logTxObjHandle = logTxObjHandlePrioList[1];
    logTxObjHandlePrioList[1] = logTxObjHandlePrioList[2]; /* SBSW_CAN_HL21 */
    logTxObjHandlePrioList[2] = tmp_logTxObjHandle; /* SBSW_CAN_HL21 */
  }
  /* #30 sort element 0 and 1 again */
  if (   CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[0]).id)
       < CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[1]).id) )
  {
    tmp_logTxObjHandle = logTxObjHandlePrioList[0];
    logTxObjHandlePrioList[0] = logTxObjHandlePrioList[1]; /* SBSW_CAN_HL21 */
    logTxObjHandlePrioList[1] = tmp_logTxObjHandle; /* SBSW_CAN_HL21 */
  }
}
#endif

/****************************************************************************
| NAME:             CanHL_WritePrepare
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, CanObjectHandle, STATIC_CODE) CanHL_WritePrepare( CAN_CHANNEL_CANTYPE_FIRST Can_HwHandleType Hth, Can_PduInfoPtrType PduInfo )
{
  /* ----- Local Variables ---------------------------------------------- */
  CanObjectHandle  logTxObjHandle;
  /* ----- Implementation ----------------------------------------------- */
  /* #10 calculate logical TX mailbox handle for FullCAN or for BasicCAN (Multiplexed TX) as start value */
  logTxObjHandle = CanHL_GetTxHwToLogHandle(CAN_CHANNEL_CANPARA_FIRST Can_GetHwHandle(Hth));
#if defined(C_ENABLE_TX_FULLCAN_OBJECTS)
  if ( Can_GetMailboxType(Hth) == CAN_TX_BASICCAN_TYPE )
#endif
  { /* #20 BasicCAN preparation - search for hardware and logical transmit handle and do cancellation */
#if defined(C_ENABLE_CANCEL_IN_HW)
    CanObjectHandle logTxObjHandlePrioList[CAN_MULTIPLEXED_TX_MAX]; /* CM_CAN_HL19 */
#endif
#if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION) || defined(C_ENABLE_CANCEL_IN_HW)
    uint8_least muxTx;
#endif
    /* \trace SPEC-1677, SPEC-3800, SPEC-1672, SPEC-1679, SPEC-1673, SPEC-1671 */
#if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
# if (CAN_IDENTICAL_ID_CANCELLATION == STD_ON) && defined(C_ENABLE_CANCEL_IN_HW)
    uint8_least muxTx_use;
    muxTx_use = CAN_MULTIPLEXED_TX_MAX;
# endif
    for (muxTx = 0; muxTx < CAN_MULTIPLEXED_TX_MAX; muxTx++)
    { /* #30 over all multiplexed TX objects: find free mailbox or mailbox with identical ID*/
# if defined(C_ENABLE_CANCEL_IN_HW)
      logTxObjHandlePrioList[muxTx] = logTxObjHandle; /* SBSW_CAN_HL21 */
# endif
# if (CAN_IDENTICAL_ID_CANCELLATION == STD_ON) && defined(C_ENABLE_CANCEL_IN_HW)
      if ( ((PduInfo->id) == Can_GetActiveSendId(logTxObjHandle).id ) && (CAN_ACTIVESEND_STATE(logTxObjHandle) != CAN_FREE_OBJ) )
      { /* #40 Identical ID: priority 1 - cancel identical (also when free is available) */
        muxTx_use = muxTx;
        break;
      }
      if (CAN_ACTIVESEND_STATE(logTxObjHandle) == CAN_FREE_OBJ)
      { /* #50 Identical ID: priority 2 - find free mailbox (no cancellation) */
        muxTx_use = muxTx; /* do not break ... next may be identical ID */
      }
# else
      if (CAN_ACTIVESEND_STATE(logTxObjHandle) == CAN_FREE_OBJ)
      { /* #60 else priority 1 - find free mailbox (no cancellation) */
        break;
      }
# endif
      logTxObjHandle++;
    }
# if (CAN_IDENTICAL_ID_CANCELLATION == STD_ON) && defined(C_ENABLE_CANCEL_IN_HW)
    if (muxTx_use == CAN_MULTIPLEXED_TX_MAX)
    { /* #70 found no free mailbox or identical ID - so set to last valid handle */
      logTxObjHandle--;
    }
    else
    { /* #80 found free or identical mailbox - so set handle to it */
      muxTx = muxTx_use;
      logTxObjHandle = logTxObjHandlePrioList[muxTx]; /* PRQA S 3353 */ /* MD_Can_Asr_3353_logTxobjHandle */
    }
# else
    if (muxTx == CAN_MULTIPLEXED_TX_MAX)
    { /* #90 found no free mailbox - so set to last valid handle */
      muxTx = 0; /* PRQA S 3199 */ /* MD_Can_3199_dummy */
      logTxObjHandle--;
    } /* #100 otherwise the muxTx and logTxObjHandle are the free or to be cancelled one */
# endif
#else /* C_ENABLE_MULTIPLEXED_TRANSMISSION */
# if defined(C_ENABLE_CANCEL_IN_HW)
    muxTx = 0;
    logTxObjHandlePrioList[muxTx] = logTxObjHandle; /* SBSW_CAN_HL21 */
# endif
#endif
#if defined(C_ENABLE_CANCEL_IN_HW) /* \trace SPEC-3982, SPEC-1674 */
    CanHL_WritePrepareCancelTx(CAN_CHANNEL_CANPARA_FIRST logTxObjHandle, muxTx, logTxObjHandlePrioList, PduInfo); /* SBSW_CAN_HL28 */
#endif /* (C_ENABLE_CANCEL_IN_HW) */
  } /* end BasicCAN handling */
  /* #200 no special FullCAN handling needed */
#if !defined(C_ENABLE_CANCEL_IN_HW)
  CAN_DUMMY_STATEMENT(PduInfo); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  return logTxObjHandle;
}

#if defined(C_ENABLE_CANCEL_IN_HW)
/****************************************************************************
| NAME:             CanHL_WritePrepareCancelTx
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_WritePrepareCancelTx( CAN_CHANNEL_CANTYPE_FIRST CanObjectHandle logTxObjHandle, uint8_least muxTx, CanHlObjectHandlePtrType logTxObjHandlePrioList, Can_PduInfoPtrType PduInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  /* ----- Implementation ----------------------------------------------- */
  /* #10 backup ID, DLC, data, PDU for possible cancellation - as parameter to IF */
  if (CAN_ACTIVESEND_STATE(logTxObjHandle) == CAN_FREE_OBJ)
  {
    /* #20 SDU pointer may be a null pointer in case the DLC is 0 - so do not copy data in this case */
    if(PduInfo->sdu != NULL_PTR)
    {
# if defined(C_ENABLE_CAN_FD_FULL)
      /* #25 copy data with VStdLib optimized copy routine for CAN-FD messages (use alignment info) */
      VStdMemCpy(Can_GetCanTxBasicDataBuffer(channel,muxTx),PduInfo->sdu,PduInfo->length); /* SBSW_CAN_HL22 */
# else
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[0] = PduInfo->sdu[0]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[1] = PduInfo->sdu[1]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[2] = PduInfo->sdu[2]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[3] = PduInfo->sdu[3]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[4] = PduInfo->sdu[4]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[5] = PduInfo->sdu[5]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[6] = PduInfo->sdu[6]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
      Can_GetCanTxBasicDataBuffer(channel,muxTx)[7] = PduInfo->sdu[7]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL22 */
# endif
    }
    Can_GetActiveSendId(logTxObjHandle).id = PduInfo->id; /* SBSW_CAN_HL23 */
    Can_GetActiveSendId(logTxObjHandle).length = PduInfo->length; /* SBSW_CAN_HL23 */
    Can_GetActiveSendId(logTxObjHandle).sdu = &Can_GetCanTxBasicDataBuffer(channel,muxTx)[0]; /* PRQA S 3689 */ /* MD_Can_Asr_3689_MuxTx */ /* SBSW_CAN_HL23 */
    Can_GetActiveSendId(logTxObjHandle).swPduHandle = PduInfo->swPduHandle; /* SBSW_CAN_HL23 */
  }
  else
  /* #30 no free send mailbox available */
  {
# if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
#  if (CAN_IDENTICAL_ID_CANCELLATION == STD_ON)
    /* #40 no identical ID found before */
    if (muxTx == CAN_MULTIPLEXED_TX_MAX) 
#  endif
    { /* #50 sort multiplexed TX handles to get the low priority first */
      CanHL_SortlogTxObjHandlePrioList(logTxObjHandlePrioList); /* SBSW_CAN_HL17 */
      muxTx = 0;
    }
    for (; muxTx < CAN_MULTIPLEXED_TX_MAX; muxTx++)
# else
    muxTx=0;
# endif
    { /* #60 no-MUX:       use 1st mailbox */
      /* #70 MUX:          iterate over all normal TX mailboxes */
      /* #80 identical ID: use only identical ID in mailbox */
      /* \trace SPEC-1753 */
# if (CAN_IDENTICAL_ID_CANCELLATION == STD_ON)
#  if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
      /* #90 identical include FD and ExtID flags */
      /* #100 finished when identical ID is already cancelled */
      if ( (CAN_ACTIVESEND_STATE(logTxObjHandlePrioList[muxTx]) == CAN_CANCEL_OBJ) && (PduInfo->id == Can_GetActiveSendId(logTxObjHandlePrioList[muxTx]).id))
      {
        break; 
      }
      else
#  endif
      if ( (CAN_ACTIVESEND_STATE(logTxObjHandlePrioList[muxTx]) == CAN_SEND_OBJ) && ((CAN_GET_ID_FOR_PRIOCHECK(PduInfo->id) < CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[muxTx]).id)) || (PduInfo->id == Can_GetActiveSendId(logTxObjHandlePrioList[muxTx]).id)))
# else
      if ( (CAN_ACTIVESEND_STATE(logTxObjHandlePrioList[muxTx]) == CAN_SEND_OBJ) && (CAN_GET_ID_FOR_PRIOCHECK(PduInfo->id) < CAN_GET_ID_FOR_PRIOCHECK(Can_GetActiveSendId(logTxObjHandlePrioList[muxTx]).id)))
# endif
      /* #110 found lower priority PDU or Identical ID - ready to cancel (others may in cancel process) \trace SPEC-1747, SPEC-15133, SPEC-1685, SPEC-1690, SPEC-1692, SPEC-1676, SPEC-3856, SPEC-1683, SPEC-15126 */
      {
        Can_HwHandleType txObjHandle;
        /* #120 mark as to be cancelled by hardware */
        CAN_ACTIVESEND_STATE_SET(logTxObjHandlePrioList[muxTx], CAN_CANCEL_OBJ); /* SBSW_CAN_HL04 */
        txObjHandle    = CanHL_GetTxLogToHwHandle(CAN_CHANNEL_CANPARA_FIRST logTxObjHandlePrioList[muxTx]);
        /* #125 HW cancel mailbox (LL) */
        /* KB begin CanLL_CancelInHw */
        CanLL_CancelInHw(CAN_CHANNEL_CANPARA_FIRST txObjHandle);
        /* KB end CanLL_CancelInHw */
        /* #130 do not notify IF about successful cancellation because of recursion will not work! Hardware support not possible in this case */
# if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
        /* #140 finished - only cancel one mailbox */ 
        break; /* PRQA S 0771,3333 */ /* MD_Can_14.6 */
# endif
      }
      else
      { /* avoid MISRA warning 2004 (if else if without ending else) */
        /* \trace SPEC-1754 */
      }
    }
  }
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

/****************************************************************************
| NAME:             CanHL_WriteStart
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_WriteStart( CAN_CHANNEL_CANTYPE_FIRST Can_HwHandleType Hth, CanObjectHandle logTxObjHandle, Can_PduInfoPtrType PduInfo )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  /* ----- Implementation ----------------------------------------------- */
  /* #10 free TX mailbox found so start transmission \trace SPEC-1744 */
  if (CAN_ACTIVESEND_STATE(logTxObjHandle) == CAN_FREE_OBJ)
  {
    Can_HwHandleType txObjHandle;
    Can_SduPtrType   CanMemCopySrcPtr;
#if (CAN_GENERIC_PRETRANSMIT == STD_ON)
    /* #20 temporary buffer to avoid data modification on constant data */
    Can_PduType PduInfo_var;
#endif
#if defined(C_ENABLE_CAN_FD_USED)
    Can_IdType pduInfo_var_id;
    uint8 pduInfo_var_dlc;
# if defined(C_ENABLE_CAN_FD_FULL)
    uint8 pduInfo_var_dli;
# endif
#endif
    /* KB begin CanLL_TxTransmissionLocalParameter */
    #if defined( C_CPUTYPE_BITORDER_MSB2LSB )
    vuint8          offset;
    #endif
    /* KB end CanLL_TxTransmissionLocalParameter */
#if (CAN_GENERIC_PRETRANSMIT == STD_ON)
    Can_PduInfoPtrType_var PduInfoPtr_var;
    /* #25 PduInfo copy from ROM pointer context to RAM pointer context */
    PduInfoPtr_var = &PduInfo_var;
    PduInfo_var.id = PduInfo->id; 
    PduInfo_var.length = PduInfo->length;
    PduInfo_var.sdu = PduInfo->sdu;
    PduInfo_var.swPduHandle = PduInfo->swPduHandle;
    Appl_GenericPreTransmit( (uint8)channel, PduInfoPtr_var );  /* PRQA S 0312 */ /* MD_Can_0312 */ /* SBSW_CAN_HL24 */
#endif
#if defined(C_ENABLE_CAN_FD_USED)
    pduInfo_var_id = PDUINFO_PTR->id;
    if (PduInfo->length <= 8) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
    {
      if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_NONE)
      { /* #30 remove FD flag when no FD support is activated in this initialization structure and DLC not greater than 8 */
        /* CAN FD also support an extended payload which allows the transmission of up to 64 bytes.
        This feature also depends on the CAN FD configuration (see CanControllerFdBaudrateConfig).
        Therefore, if the CAN FD feature is enabled and the CAN FD flag is set in CanId passed to
         Can_Write(), CanDrv supports the transmission of PDUs with a length up to 64 bytes.
        If there is a request to transmit a CAN FD frame without the CAN FD feature enabled the
        frame is sent as conventional CAN frame as long as the PDU length <= 8 bytes. */
        pduInfo_var_id = pduInfo_var_id & ((Can_IdType)(CAN_ID_IDE_MASK | CAN_ID_MASK)); /* CAN_FD_   mask out the FD bit */
      }
    }
#endif
    /* #40 remember PDU and send state to use it in Confirmation function \trace SPEC-1675, SPEC-3921 */
    CAN_ACTIVESEND_PDUID_SET(logTxObjHandle, PDUINFO_PTR->swPduHandle); /* SBSW_CAN_HL05 */
    CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_SEND_OBJ); /* SBSW_CAN_HL04 */
    txObjHandle =  CanHL_GetTxLogToHwHandle(CAN_CHANNEL_CANPARA_FIRST logTxObjHandle);
#if defined(C_ENABLE_CAN_FD_USED)
    /* #50 CAN FD convert data length (0-64) to DLC (0-15) and to DLI (0-8,12,16,20,24,32,48,64) */
    pduInfo_var_dlc = CAN_ENCODE_DLI(PDUINFO_PTR->length);
# if defined(C_ENABLE_CAN_FD_FULL)
    pduInfo_var_dli = CAN_DECODE_DLI(pduInfo_var_dlc);
# endif
#endif
    /* #55 HW prepare transmission (LL) */
    /* KB begin CanLL_TxBegin */
    /* KB end CanLL_TxBegin */
    /* #60 Set ID, ID type and DLC in HW register depend on ID type */
#if defined(C_ENABLE_EXTENDED_ID)
# if defined(C_ENABLE_MIXED_ID)
    if ( ((PDUINFO_ID) & CAN_ID_IDE_MASK) != CAN_ID_IDE_MASK)
    {
#  if !defined(CAN_ENABLE_DYNAMIC_FULLCAN_ID) /* COV_DYNAMIC_FULLCAN_ID */
#   if defined(C_ENABLE_TX_FULLCAN_OBJECTS) 
      if (Can_GetMailboxType(Hth) == CAN_TX_BASICCAN_TYPE)
#   endif
#  endif
      {
        /* KB begin CanLL_TxSetId */
        ShmTXB(txObjHandle).T0 = MK_STDID0(PDUINFO_ID); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 3689 */ /* MD_Can_3689 */
        /* KB end CanLL_TxSetId */
      }
      /* KB begin CanLL_TxSetDlc */
      ShmTXB(txObjHandle).T1 &= (vuint32)(~CanLL_HwDlcMask);          /* clear previous DLC */  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      ShmTXB(txObjHandle).T1 |= (vuint32) (((vuint32)MK_TX_DLC(PDUINFO_DLC)) << 16);  /* set new DLC        */  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 3689 */ /* MD_Can_3689 */
      #if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
      # if defined(C_ENABLE_CAN_FD)
      #  if defined( VGEN_GENY ) /* COV_CAN_FIX_VERSION */
      /* Always use FD with BRS, upper layers do not support per message selection */
      ShmTXB(txObjHandle).T1 |= (vuint32) (((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      #  else
      if(CanHL_IsFdMessage(PDUINFO_ID)) 
      { /* set FDF, BRS */
        ShmTXB(txObjHandle).T1 |= (vuint32)  (((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      }
      else
      { /* clear FDF, BRS */
        ShmTXB(txObjHandle).T1 &= (vuint32) ~(((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      }
      #  endif
      # endif  /* C_ENABLE_CAN_FD   */
      #endif  /* CAN_MCAN_REVISION */
      /* KB end CanLL_TxSetDlc */
    }
    else
# endif
    {
# if !defined(CAN_ENABLE_DYNAMIC_FULLCAN_ID) /* COV_DYNAMIC_FULLCAN_ID */
#  if defined(C_ENABLE_TX_FULLCAN_OBJECTS) 
      if (Can_GetMailboxType(Hth) == CAN_TX_BASICCAN_TYPE)
#  endif
# endif
      {
        /* KB begin CanLL_TxSetId */
        ShmTXB(txObjHandle).T0 = MK_EXTID0(PDUINFO_ID); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 3689 */ /* MD_Can_3689 */
        /* KB end CanLL_TxSetId */
      }
      /* KB begin CanLL_TxSetDlc */
      ShmTXB(txObjHandle).T1 &= (vuint32)(~CanLL_HwDlcMask);          /* clear previous DLC */  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      ShmTXB(txObjHandle).T1 |= (vuint32) (((vuint32)MK_TX_DLC_EXT(PDUINFO_DLC)) << 16);  /* set new DLC        */  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 3689 */ /* MD_Can_3689 */
      #if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
      # if defined(C_ENABLE_CAN_FD)
      #  if defined( VGEN_GENY ) /* COV_CAN_FIX_VERSION */
      /* Always use FD with BRS, upper layers do not support per message selection */
      ShmTXB(txObjHandle).T1 |= (vuint32) (((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      #  else
      if(CanHL_IsFdMessage(PDUINFO_ID)) 
      { /* set FDF, BRS */
        ShmTXB(txObjHandle).T1 |= (vuint32)  (((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      }
      else
      { /* clear FDF, BRS */
        ShmTXB(txObjHandle).T1 &= (vuint32) ~(((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      }
      #  endif
      # endif  /* C_ENABLE_CAN_FD   */
      #endif  /* CAN_MCAN_REVISION */
      /* KB end CanLL_TxSetDlc */
    }
#else
# if !defined(CAN_ENABLE_DYNAMIC_FULLCAN_ID) /* COV_DYNAMIC_FULLCAN_ID */
#  if defined(C_ENABLE_TX_FULLCAN_OBJECTS) 
    if (Can_GetMailboxType(Hth) == CAN_TX_BASICCAN_TYPE)
#  endif
# endif
    {
      /* KB begin CanLL_TxSetId */
      ShmTXB(txObjHandle).T0 = MK_STDID0(PDUINFO_ID); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 3689 */ /* MD_Can_3689 */
      /* KB end CanLL_TxSetId */
    }
    /* KB begin CanLL_TxSetDlc */
    ShmTXB(txObjHandle).T1 &= (vuint32)(~CanLL_HwDlcMask);          /* clear previous DLC */  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    ShmTXB(txObjHandle).T1 |= (vuint32) (((vuint32)MK_TX_DLC(PDUINFO_DLC)) << 16);  /* set new DLC        */  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 3689 */ /* MD_Can_3689 */
    #if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
    # if defined(C_ENABLE_CAN_FD)
    #  if defined( VGEN_GENY ) /* COV_CAN_FIX_VERSION */
    /* Always use FD with BRS, upper layers do not support per message selection */
    ShmTXB(txObjHandle).T1 |= (vuint32) (((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    #  else
    if(CanHL_IsFdMessage(PDUINFO_ID)) 
    { /* set FDF, BRS */
      ShmTXB(txObjHandle).T1 |= (vuint32)  (((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    }
    else
    { /* clear FDF, BRS */
      ShmTXB(txObjHandle).T1 &= (vuint32) ~(((vuint32) (kCanFdTypeEdl | kCanFdTypeBrs)) << 16) ; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    }
    #  endif
    # endif  /* C_ENABLE_CAN_FD   */
    #endif  /* CAN_MCAN_REVISION */
    /* KB end CanLL_TxSetDlc */
#endif
    if(PDUINFO_PTR->sdu != NULL_PTR)
    { /* #70 Set CAN data in HW register (LL) - only when data pointer is not null \trace SPEC-1680, SPEC-1572, SPEC-1678, SPEC-60421 */
      CanMemCopySrcPtr = PDUINFO_PTR->sdu;
#if defined(C_ENABLE_CAN_FD_FULL)
      /* KB begin CanLL_TxCopyToCanFd */
      {
        vuint8 curWord, curByte;
        tAlignCopyElem copyElem;
      
        curByte = 0;
        for (curWord = 0; (curWord<<2) < pduInfo_var_dli; curWord++) 
        {
      #if defined( C_CPUTYPE_BITORDER_LSB2MSB )
          do
          { /* for each 32 bit word */
            if(curByte < PDUINFO_PTR->length) 
            { /* either copy data */
              copyElem.b[curByte & 0x03] = CanMemCopySrcPtr[curByte];
            }
            else
            { /* or fill up with padding pattern */
              copyElem.b[curByte & 0x03] = Can_GetMailboxFdPadding(Hth);
            }
            curByte++;
          } while((curByte & 0x03) != 0); 
      #else
          offset = 3;
          do
          { /* for each 32 bit word */
            if(curByte < PDUINFO_PTR->length) 
            { /* either copy data */
              copyElem.b[offset] = CanMemCopySrcPtr[curByte];
            }
            else
            { /* or fill up with padding pattern */
              copyElem.b[offset] = Can_GetMailboxFdPadding(Hth);
            }
            curByte++;
            offset--;
          } while((curByte & 0x03) != 0); 
      #endif
          ShmTXB(txObjHandle).Tn[curWord] = copyElem.dw; /* move to Message RAM */
        }
      }
      /* KB end CanLL_TxCopyToCanFd */
#else
      /* KB begin CanLL_TxCopyToCan */
      {
        vuint8 curWord, curByte;
        tAlignCopyElem copyElem;  /* PRQA S 0759 */ /* MD_Can_0759 */
      
        curByte = 0;
        for (curWord = 0; curWord < 2; curWord += 1) 
        {
      #if defined( C_CPUTYPE_BITORDER_LSB2MSB )
          do 
          {
            copyElem.b[curByte & 0x03] = CanMemCopySrcPtr[curByte];
            curByte++;
          } while((curByte & 0x03) != 0); 
      #else
          offset = 3;
          do 
          {
            copyElem.b[offset] = CanMemCopySrcPtr[curByte];
            curByte++;
            offset--;
          } while((curByte & 0x03) != 0); 
      #endif
          /* move to Message RAM */
          ShmTXB(txObjHandle).Tn[curWord] = copyElem.dw;  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
        }
      }
      /* KB end CanLL_TxCopyToCan */
#endif
    }
    /* #80 HW start transmission (LL) */
    retval = CAN_OK; /* default is OK - LL set it to kCanFailed/CAN_NOT_OK in case of issue */
    /* KB begin CanLL_TxStart */
    retval = CanLL_TxStart(CAN_CHANNEL_CANPARA_FIRST txObjHandle);
    /* KB end CanLL_TxStart */
    if (retval == CAN_NOT_OK) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */
    { /* #90 transmit request wasn't successful in LL part - free mailbox */ /* PRQA S 3201 */ /* MD_Can_3201 */
      CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ);
    }
    /* HW finish transmission (LL) */
    /* KB begin CanLL_TxEnd */
    /* KB end CanLL_TxEnd */
  }
  else
  { /* #200 no free TX mailbox found so return busy - also in case cancellation (BasicCAN) was possible \trace SPEC-1754, SPEC-1764, SPEC-1747, SPEC-3878, SPEC-3856 */
    retval = CAN_BUSY;
  }
  CAN_DUMMY_STATEMENT(Hth); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  return retval;
}  /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
/****************************************************************************
| NAME:             CanHL_StartProcessed
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_StartProcessed( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType transitionDone;
  /* ----- Implementation ----------------------------------------------- */
  /* #5 HW check mode reached */
  /* KB begin CanLL_StartProcessed */
  {
    transitionDone = kCanFailed;
    #if defined(C_ENABLE_CAN_FD)
    if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) != CAN_NONE )
    {
      if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_FD_RXTX )
      { /* CAN_FD_RXTX */
      # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_BRSE     | kCanCCCR_FDOE))          == (kCanCCCR_BRSE | kCanCCCR_FDOE)) )
      #  else
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_CME_LONG | kCanCCCR_CME_LONG_FAST)) == kCanCCCR_CME_LONG_FAST) )
      #  endif
        { /* Operation mode reached */
      # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
          /* request is accomplished via Message RAM per message */
      #  else
          Cn->CCCR |= kCanCCCR_CMR_LONG_FAST; /* LONG and FAST request */
      #  endif
          transitionDone = kCanOk;
        }
      }
      else
      { /* CAN_FD_RXONLY */
      # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_BRSE     | kCanCCCR_FDOE))          == kCanCCCR_FDOE) )
      #  else
        if ( ((Cn->CCCR & kCanCCCR_INIT) == 0) && ((Cn->CCCR & (kCanCCCR_CME_LONG | kCanCCCR_CME_LONG_FAST)) == kCanCCCR_CME_LONG) )
      #  endif
        { /* Operation mode reached */
      # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
          /* request is accomplished via Message RAM per message */
      #  else
          Cn->CCCR |= kCanCCCR_CMR_LONG; /* LONG request */
      #  endif
          transitionDone = kCanOk;
        }
      }
    }
    else
    {
      if ( (Cn->CCCR & kCanCCCR_INIT) == 0 )
      { /* Operation mode reached */
    # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
        /* NORMAL CAN operation request is accomplished via Message RAM per message */
    #  else
        Cn->CCCR |= kCanCCCR_CMR_CAN20; /* NORMAL CAN operation request */
    #  endif
        transitionDone = kCanOk;
      }
    }
    #else
    if ( (Cn->CCCR & kCanCCCR_INIT) == 0 )
    { /* Operation mode reached */
    # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
      /* NORMAL CAN operation request is accomplished via Message RAM per message */
    #  else
      Cn->CCCR |= kCanCCCR_CMR_CAN20; /* NORMAL CAN operation request */
    #  endif
      transitionDone = kCanOk;
    }
    #endif
  }
  /* KB end CanLL_StartProcessed */
  if ( transitionDone == CAN_OK ) /* PRQA S 3355,3356,3358,3359,3353 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_Asr_3353_CommonCanTransition */
  { /* #30 Mode changed - notify CanIf_ControllerModeIndication() and reset request */  /* PRQA S 3201 */ /* MD_Can_3201 */
    CanHookStateChange_StartAsync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_START) );
    Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_START)); /* SBSW_CAN_HL02 */
    Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
    /* \trace SPEC-1726, SPEC-1644, SPEC-60446 */
    CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_STARTED );
  }
}

/****************************************************************************
| NAME:             CanHL_StopProcessed
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_StopProcessed( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType transitionDone;
  /* ----- Implementation ----------------------------------------------- */
  /* #5 HW check mode reached */
  /* KB begin CanLL_StopProcessed */
  {
  #if ( CAN_BOSCH_ERRATUM_008 == STD_ON )
    if( (Cn->CCCR & kCanCCCR_CSA) == kCanCCCR_CSA ) /*  When clock stop is requested, first INIT and then CSA will be set after
                                                        all pending transfer requests have been completed and the bus reached idle */
  #else
    if( (Cn->CCCR & kCanCCCR_INIT) == kCanCCCR_INIT )
  #endif
    { /* Stop mode reached */
      transitionDone = kCanOk;
    }
    else
    {
      transitionDone = kCanFailed;
    }
  }
  /* KB end CanLL_StopProcessed */
  if ( transitionDone == CAN_OK ) /* PRQA S 3355,3356,3358,3359,3353 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_Asr_3353_CommonCanTransition */
  { /* #30 Mode changed - notify CanIf_ControllerModeIndication() and reset request */  /* PRQA S 3201 */ /* MD_Can_3201 */
    CanHookStateChange_StopAsync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP) );
    { /* #40 short initialization after mode change (LL) \trace SPEC-1627, SPEC-1646, SPEC-3965 */
      CanHL_StopReinit(CAN_HW_CHANNEL_CANPARA_ONLY);
    }
    Can_CleanUpSendState(CAN_CHANNEL_CANPARA_ONLY);
    Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP)); /* SBSW_CAN_HL02 */
    Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
    /* \trace SPEC-1726, SPEC-1644, SPEC-1635, SPEC-60446 */
    CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_STOPPED );
  }
}

# if defined(C_ENABLE_SLEEP_WAKEUP) /* hardware is only in SLEEP if WAKEUP over bus is activate and supported */
/****************************************************************************
| NAME:             CanHL_WakeupProcessed
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_WakeupProcessed( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType transitionDone;
  /* ----- Implementation ----------------------------------------------- */
  /* #5 HW check mode reached */
  /* KB begin CanLL_WakeUpProcessed */
  {
    if ( (Cn->CCCR & kCanCCCR_INIT) == 0)
    { /* reached normal mode */
      transitionDone = kCanOk;
    }
    else
    {
      transitionDone = kCanFailed;
    }
  }
  /* KB end CanLL_WakeUpProcessed */
  if ( transitionDone == CAN_OK ) /* PRQA S 3355,3356,3358,3359,3353 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_Asr_3353_CommonCanTransition */
  { /* #30 Mode changed - notify CanIf_ControllerModeIndication() and reset request */  /* PRQA S 3201 */ /* MD_Can_3201 */
    CanHookStateChange_WakeupAsync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP) );
#  if defined(C_ENABLE_CAN_RAM_CHECK) 
    /* #40 do standard RAM check CanHL_DoRamCheck() */
    Can_SetLogStatus(channel, CAN_STATUS_UNINIT); /* Like PowerOn */ /* SBSW_CAN_HL02 */
    CanHL_DoRamCheck(CAN_CHANNEL_CANPARA_ONLY);
#  else
    { /* #50 short initialization after mode change (LL) */
      CanHL_StopReinit(CAN_HW_CHANNEL_CANPARA_ONLY);
    }
#  endif
    /* #55 remove CAN_STATUS_SLEEP after initialization call to force RAM_CHECK */ 
    Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP)); /* SBSW_CAN_HL02 */
    Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
    /* \trace SPEC-1726, SPEC-1644, SPEC-1635, SPEC-60446 */
    CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_STOPPED );
  }
}
# endif

# if defined(C_ENABLE_SLEEP_WAKEUP) /* hardware is only in SLEEP if WAKEUP over bus is activate and supported */
/****************************************************************************
| NAME:             CanHL_SleepProcessed
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_SleepProcessed( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType transitionDone;
  /* ----- Implementation ----------------------------------------------- */
  /* #5 HW check mode reached */
  /* KB begin CanLL_SleepProcessed */
  /* Check if sleep mode is reached now */
  if ( (Cn->CCCR & kCanCCCR_CSA) == kCanCCCR_CSA)
  { /* Power Down mode is now reached, all pending transmissions are finished and Bus Idle was detected. */
    ApplCanClockStop(CAN_HW_CHANNEL_CANPARA_ONLY); /* request the application to turn off the clocks (CAN, Host) */
    /* Enable wakeup interrupt (any pending interrupt will be raised when the locks are removed */
    Cn->ILS = kCanILS_ALL_ZERO;  /* All INTs assigned to INT line '0' */
    Cn->ILE = kCanILE_EINT0;     /* enable INT line '0' */
    Cn->IE  = Can_GetCanIntEnable(canHwChannel);
    transitionDone = kCanOk;
  }
  else
  {
    transitionDone = kCanFailed;
  }
  /* KB end CanLL_SleepProcessed */
  if ( transitionDone == CAN_OK ) /* PRQA S 3355,3356,3358,3359,3353 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_Asr_3353_CommonCanTransition */
  { /* #30 Mode changed - notify CanIf_ControllerModeIndication() and reset request */  /* PRQA S 3201 */ /* MD_Can_3201 */
    CanHookStateChange_SleepAsync(Can_GetLogStatus(channel), (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_SLEEP) );
    Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_SLEEP)); /* SBSW_CAN_HL02 */
    Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
    /* \trace SPEC-1726, SPEC-1644, SPEC-1635, SPEC-60446 */
    CanIf_ControllerModeIndication( (uint8)Can_GetCanToCanIfChannelMapping(channel), CANIF_CS_SLEEP );
  }
}
# endif
#endif /* CAN_ENABLE_MICROSAR_VERSION_MSR40X */

/****************************************************************************
| NAME:             CanHL_GetTxHwToLogHandle
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, CanObjectHandle, STATIC_CODE) CanHL_GetTxHwToLogHandle( CAN_CHANNEL_CANTYPE_FIRST Can_HwHandleType hwTxObjHandle )
{
  /* ----- Local Variables ---------------------------------------------- */
  CanObjectHandle logTxObjHandle;
  /* ----- Implementation ----------------------------------------------- */
#if defined(CAN_TXINDIRECTIONHWTOLOG) /* COV_CAN_TXINDIRECTIONHWTOLOG */
  /* #10 get logical handle from generated indirection table */
  logTxObjHandle = (CanObjectHandle) Can_GetTxIndirectionHwToLog((hwTxObjHandle) + Can_GetTxIndirectionHwToLogStart(channel));
#else
  /* #20 get logical handle by add generated offset to hardware handle */
  logTxObjHandle = (CanObjectHandle)(hwTxObjHandle + Can_GetTxOffsetHwToLog(channel));
#endif
  return logTxObjHandle;
}

/****************************************************************************
| NAME:             CanHL_GetTxLogToHwHandle
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_HwHandleType, STATIC_CODE) CanHL_GetTxLogToHwHandle( CAN_CHANNEL_CANTYPE_FIRST CanObjectHandle logTxObjHandle )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_HwHandleType hwTxObjHandle;
  /* ----- Implementation ----------------------------------------------- */
#if defined(CAN_TXINDIRECTIONHWTOLOG) /* COV_CAN_TXINDIRECTIONHWTOLOG */
  /* #10 get hardware handle from generated indirection table */
  hwTxObjHandle = (Can_HwHandleType) Can_GetTxIndirectionLogToHw(logTxObjHandle);
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
#else
  /* #20 get hardware handle by subtract generated offset from logical handle */
  hwTxObjHandle = (Can_HwHandleType)(logTxObjHandle - Can_GetTxOffsetHwToLog(channel));
#endif
  return hwTxObjHandle;
}

#if defined(C_ENABLE_CAN_RAM_CHECK)
/****************************************************************************
| NAME:             CanHL_RamCheckMailboxNotification
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_RamCheckMailboxNotification( CAN_CHANNEL_CANTYPE_FIRST Can_HwHandleType hwObjHandle, Can_HwHandleType htrh ) /* COV_CAN_RAM_CHECK_NO_STIMULATION */
{
  /* ----- Local Variables ---------------------------------------------- */

  /* ----- Implementation ----------------------------------------------- */
  /* #10 notify application about corrupt mailbox */
#  if defined(C_ENABLE_NOTIFY_CORRUPT_MAILBOX) /* with Mailbox Notification */
  Appl_CanCorruptMailbox((uint8)channel, (hwObjHandle));
#  endif
  /* #20 deactivate mailbox */
  Can_SetMailboxState(htrh, CAN_DISABLED_OBJ); /* SBSW_CAN_HL34 */
  /* #30 deactivate controller */
  Can_SetLogStatus(channel, Can_GetLogStatus(channel) | CAN_DEACTIVATE_CONTROLLER); /* SBSW_CAN_HL02 */

  CAN_DUMMY_STATEMENT(hwObjHandle); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CAN_DUMMY_STATEMENT(htrh); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}
#endif

/****************************************************************************
| NAME:             CanHL_InitBegin
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_InitBegin( CanInitInfoPtrType initInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanInitHandle  initObject; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL
  /* ----- Implementation ----------------------------------------------- */
  errorId = CAN_E_NO_ERROR;
#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = initInfo->channel;
#endif
  initObject = initInfo->initObject;

  /* #10 Set controller to initialization mode (LL) */
  /* KB begin CanLL_InitBeginSetToInitMode */
  CanSetAllRegister(CAN_CHANNEL_CANPARA_FIRST initInfo); /* fill in all CAN registers */
  
  #if defined( C_ENABLE_FULLCAN_FILTER_GENERATION )
  CanSetAllFilter(CAN_CHANNEL_CANPARA_FIRST initInfo);   /* fill in CAN Message RAM */
  #else
  # error "Inconsistent Generation Tool. Please update GENy DLL Hw_Mpc5700McanCpuCan to version 1.09.00 or later."
  #endif  /* GENERATED_FILTER */
  
  /* KB end CanLL_InitBeginSetToInitMode */

  /* #30 Initialize controller registers (Begin section) (LL) */
  /* KB begin CanLL_InitBeginRegister */
  /* KB end CanLL_InitBeginRegister */

#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CAN_DUMMY_STATEMENT(initObject); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  return errorId;
} /* PRQA S 6010,6050 */ /* MD_MSR_STPTH,MD_MSR_STCAL */

#if defined(C_ENABLE_TX_FULLCAN_OBJECTS)
/****************************************************************************
| NAME:             CanHL_InitTxFullCAN
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_InitTxFullCAN( CanInitInfoPtrType initInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  Can_HwHandleType hwObjHandle;
  Can_HwHandleType Htrh;
  CanObjectHandle logTxObjHandle;
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = initInfo->Controller;
# endif
  errorId = CAN_E_NO_ERROR;
  /* #10 iterate over all FullCAN TX */
  for (Htrh = Can_GetTxFullHandleStart(canHwChannel); Htrh < Can_GetTxFullHandleStop(canHwChannel); Htrh++)
  { /* #20 initialize FullCAN TX mailboxes */
    hwObjHandle = Can_GetHwHandle(Htrh);
    logTxObjHandle = CanHL_GetTxHwToLogHandle(CAN_CHANNEL_CANPARA_FIRST hwObjHandle);
    CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */
# if defined(C_ENABLE_CAN_RAM_CHECK)
    /* #30 RAM check for FullCAN TX mailboxes */
    initInfo->isMbCorrupt = kCanFalse; /* SBSW_CAN_HL36 */
    if ((Can_GetStatusReq(channel) & CAN_REQ_RAM_CHECK) == CAN_REQ_RAM_CHECK)
    {
      initInfo->isMbCorrupt = CAN_RAM_CHECK_MAILBOX_RESULT(channel, (hwObjHandle)); /* COV_CAN_HARDWARE_FAILURE */ /* SBSW_CAN_HL36 */
    } 
# endif
    /* HW specific TX initialization (LL) */
    /* KB begin CanLL_InitMailboxTx */
    Cn->TXBCR |= (vuint32)(kCanACTIVE << hwObjHandle);  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    ShmTXB(hwObjHandle).T1 = 0x00000000u;               /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    #if defined( C_ENABLE_INDIVIDUAL_POLLING )
    if(Can_GetCanHwObjIndivPolling(canHwChannel, hwObjHandle) != 0)
    { /* poll this object */
    }
    else
    #endif
    {
    #if !defined( C_ENABLE_TX_POLLING ) || defined( C_ENABLE_INDIVIDUAL_POLLING )
      CAN_HL_INFO_INIT_PTR(txbtie) |= (vuint32)(kCanACTIVE << hwObjHandle); /* allow CAN Tx Buffer confirmation and cancelation INTs */
    #endif
    }
    /* KB end CanLL_InitMailboxTx */
# if !defined(CAN_ENABLE_DYNAMIC_FULLCAN_ID) /* if needed the initialization of ID, DLC and type is done in InitTxObj to avoid problems with uninitialized registers */ /* COV_DYNAMIC_FULLCAN_ID */
    /* #40 set ID and DLC for FullCAN TX mailboxes */
#  if defined(C_ENABLE_EXTENDED_ID)
#   if defined(C_ENABLE_MIXED_ID)
    if ( (Can_GetIDValue(Htrh) & CAN_ID_IDE_MASK) != CAN_ID_IDE_MASK) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
    {
      /* KB begin CanLL_InitTxSetId */
      ShmTXB(hwObjHandle).T0 =  MK_STDID0(Can_GetIDValue(Htrh)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      /* KB end CanLL_InitTxSetId */
      /* KB begin CanLL_InitTxSetDlc */
      ShmTXB(hwObjHandle).T1 |=   (vuint32)( ((vuint32)MK_TX_DLC(Can_GetDLC_FIFO(Htrh))) << 16); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      /* KB end CanLL_InitTxSetDlc */
    }
    else
#   endif
    {
      /* KB begin CanLL_InitTxSetId */
      ShmTXB(hwObjHandle).T0 =  MK_EXTID0(Can_GetIDValue(Htrh)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      /* KB end CanLL_InitTxSetId */
      /* KB begin CanLL_InitTxSetDlc */
      ShmTXB(hwObjHandle).T1 |=   (vuint32)( ((vuint32)MK_TX_DLC_EXT(Can_GetDLC_FIFO(Htrh))) << 16); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      /* KB end CanLL_InitTxSetDlc */
    }
#  else
    /* KB begin CanLL_InitTxSetId */
    ShmTXB(hwObjHandle).T0 =  MK_STDID0(Can_GetIDValue(Htrh)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    /* KB end CanLL_InitTxSetId */
    /* KB begin CanLL_InitTxSetDlc */
    ShmTXB(hwObjHandle).T1 |=   (vuint32)( ((vuint32)MK_TX_DLC(Can_GetDLC_FIFO(Htrh))) << 16); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    /* KB end CanLL_InitTxSetDlc */
#  endif
# endif
# if defined(C_ENABLE_CAN_RAM_CHECK)
    if( (Can_GetLogStatus(channel) & CAN_STATUS_INIT) != CAN_STATUS_INIT )
    { /* PowerOn */
      Can_SetMailboxState(Htrh, CAN_ENABLE_OBJ); /* SBSW_CAN_HL34 */
    }
    if( (initInfo->isMbCorrupt == kCanTrue) || (Can_GetMailboxState(Htrh) == CAN_DISABLED_OBJ) ) /* COV_CAN_RAM_CHECK_NO_STIMULATION */
    { /* #45 deactivate corrupt mailbox */
      /* KB begin CanLL_InitMailboxTxDeactivate */
      /* KB end CanLL_InitMailboxTxDeactivate */
      if (initInfo->isMbCorrupt == kCanTrue)
      {  /* #50 notify application about corrupt mailbox and deactivate controller */
        CanHL_RamCheckMailboxNotification(CAN_CHANNEL_CANPARA_FIRST hwObjHandle, Htrh);
      }
    }
# endif
  }
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# else
  CAN_DUMMY_STATEMENT(initInfo); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  return errorId;
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */
#endif

/****************************************************************************
| NAME:             CanHL_InitTxBasicCAN
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_InitTxBasicCAN( CanInitInfoPtrType initInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  Can_HwHandleType hwObjHandle;
  Can_HwHandleType Htrh;
  CanObjectHandle logTxObjHandle;
#if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
  CanObjectHandle logTxObjHandleStop;
#endif
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
  errorId = CAN_E_NO_ERROR;
#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = initInfo->Controller;
#endif

  Htrh = Can_GetTxBasicHandleStart(canHwChannel);
#if defined(C_ENABLE_MULTIPLE_BASICCAN_TX)
  for (; Htrh < Can_GetTxBasicHandleStop(canHwChannel); Htrh++)
#endif
  { /* #10 iterate over all logical BasicCAN TX */
    hwObjHandle = Can_GetHwHandle(Htrh); /* do not use: hwObjHandle = CAN_HL_HW_TX_NORMAL_INDEX(canHwChannel) - Htrh may used by LL */
    logTxObjHandle = CanHL_GetTxHwToLogHandle(CAN_CHANNEL_CANPARA_FIRST hwObjHandle);
#if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
    logTxObjHandleStop = logTxObjHandle + (Can_HwHandleType)CAN_MULTIPLEXED_TX_MAX;
    for (; logTxObjHandle < logTxObjHandleStop; logTxObjHandle++)
#endif
    { /* #20 initialize BasicCAN TX mailboxes */
      CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */
#if defined(C_ENABLE_CAN_RAM_CHECK)
      /* #30 RAM check for BasicCAN TX mailboxes */
      if ((Can_GetStatusReq(channel) & CAN_REQ_RAM_CHECK) == CAN_REQ_RAM_CHECK)
      {
        initInfo->isMbCorrupt = CAN_RAM_CHECK_MAILBOX_RESULT(channel, (hwObjHandle)); /* COV_CAN_HARDWARE_FAILURE */ /* SBSW_CAN_HL36 */
      } 
      else
      {
        initInfo->isMbCorrupt = kCanFalse; /* SBSW_CAN_HL36 */
      }
#endif
      /* HW specific TX initialization (LL) */
      /* KB begin CanLL_InitMailboxTx */
      Cn->TXBCR |= (vuint32)(kCanACTIVE << hwObjHandle);  /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      ShmTXB(hwObjHandle).T1 = 0x00000000u;               /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
      #if defined( C_ENABLE_INDIVIDUAL_POLLING )
      if(Can_GetCanHwObjIndivPolling(canHwChannel, hwObjHandle) != 0)
      { /* poll this object */
      }
      else
      #endif
      {
      #if !defined( C_ENABLE_TX_POLLING ) || defined( C_ENABLE_INDIVIDUAL_POLLING )
        CAN_HL_INFO_INIT_PTR(txbtie) |= (vuint32)(kCanACTIVE << hwObjHandle); /* allow CAN Tx Buffer confirmation and cancelation INTs */
      #endif
      }
      /* KB end CanLL_InitMailboxTx */
#if defined(C_ENABLE_CAN_RAM_CHECK)
      if( (Can_GetLogStatus(channel) & CAN_STATUS_INIT) != CAN_STATUS_INIT )
      { /* PowerOn */
        Can_SetMailboxState(Htrh, CAN_ENABLE_OBJ); /* SBSW_CAN_HL34 */
      }
      if( (initInfo->isMbCorrupt == kCanTrue) || (Can_GetMailboxState(Htrh) == CAN_DISABLED_OBJ) ) /* COV_CAN_RAM_CHECK_NO_STIMULATION */
      { /* #45 deactivate corrupt mailbox */
        /* KB begin CanLL_InitMailboxTxDeactivate */
        /* KB end CanLL_InitMailboxTxDeactivate */
        if (initInfo->isMbCorrupt == kCanTrue)
        {  /* #50 notify application about corrupt mailbox and deactivate controller */
          CanHL_RamCheckMailboxNotification(CAN_CHANNEL_CANPARA_FIRST hwObjHandle, Htrh);
        }
      }
#endif
#if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION)
      hwObjHandle += (Can_GetDLC_FIFO(Htrh) / CAN_MULTIPLEXED_TX_MAX); /* PRQA S 3199,3198 */ /* MD_Can_3199_dummy */
#endif
    }
  }
#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#else
  CAN_DUMMY_STATEMENT(initInfo); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  return errorId;
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */

#if defined(C_ENABLE_RX_FULLCAN_OBJECTS)
/****************************************************************************
| NAME:             CanHL_InitRxFullCAN
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_InitRxFullCAN( CanInitInfoPtrType initInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  Can_HwHandleType hwObjHandle;
  Can_HwHandleType Htrh;
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
  errorId = CAN_E_NO_ERROR;
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = initInfo->Controller;
# endif
  for (Htrh = Can_GetRxFullHandleStart(canHwChannel); Htrh < Can_GetRxFullHandleStop(canHwChannel); Htrh++)
  { /* #10 iterate over all FullCAN RX mailboxes */
    hwObjHandle=Can_GetHwHandle(Htrh);
# if defined(C_ENABLE_CAN_RAM_CHECK)
    /* #20 RAM check for FullCAN RX mailboxes */
    initInfo->isMbCorrupt = kCanFalse; /* SBSW_CAN_HL36 */
    if ((Can_GetStatusReq(channel) & CAN_REQ_RAM_CHECK) == CAN_REQ_RAM_CHECK)
    {
      initInfo->isMbCorrupt = CAN_RAM_CHECK_MAILBOX_RESULT(channel, (hwObjHandle)); /* COV_CAN_HARDWARE_FAILURE */ /* SBSW_CAN_HL36 */
    } 
# endif
    /* #30 set ID for FullCAN RX mailboxes (LL) */
# if defined(C_ENABLE_EXTENDED_ID)
#  if defined(C_ENABLE_MIXED_ID)
    if ( (Can_GetIDValue(Htrh) & CAN_ID_IDE_MASK) != CAN_ID_IDE_MASK) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
    {
      /* KB begin CanLL_InitMailboxFullCAN */
      # if defined( V_ENABLE_USE_DUMMY_STATEMENT )
      hwObjHandle=hwObjHandle;   /* dummy assignment to avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
      # endif
      
      /* KB end CanLL_InitMailboxFullCAN */
    }
    else
#  endif
    {
      /* KB begin CanLL_InitMailboxFullCAN */
      # if defined( V_ENABLE_USE_DUMMY_STATEMENT )
      hwObjHandle=hwObjHandle;   /* dummy assignment to avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
      # endif
      
      /* KB end CanLL_InitMailboxFullCAN */
    }
# else
    /* KB begin CanLL_InitMailboxFullCAN */
    # if defined( V_ENABLE_USE_DUMMY_STATEMENT )
    hwObjHandle=hwObjHandle;   /* dummy assignment to avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
    # endif
    
    /* KB end CanLL_InitMailboxFullCAN */
# endif
# if defined(C_ENABLE_CAN_RAM_CHECK)
    if( (Can_GetLogStatus(channel) & CAN_STATUS_INIT) != CAN_STATUS_INIT )
    { /* PowerOn */
      Can_SetMailboxState(Htrh, CAN_ENABLE_OBJ); /* SBSW_CAN_HL34 */
    }
    if( (initInfo->isMbCorrupt == kCanTrue) || (Can_GetMailboxState(Htrh) == CAN_DISABLED_OBJ) ) /* COV_CAN_RAM_CHECK_NO_STIMULATION */
    { /* #45 deactivate corrupt mailbox */
      /* KB begin CanLL_InitMailboxFullCANDeactivate */
      
      /* KB end CanLL_InitMailboxFullCANDeactivate */
      if (initInfo->isMbCorrupt == kCanTrue)
      {  /* #50 notify application about corrupt mailbox and deactivate controller */
        CanHL_RamCheckMailboxNotification(CAN_CHANNEL_CANPARA_FIRST hwObjHandle, Htrh);
      }
    }
# endif
  }

# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# else
  CAN_DUMMY_STATEMENT(initInfo); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  return errorId;
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */
#endif

#if defined(C_ENABLE_RX_BASICCAN_OBJECTS)
/****************************************************************************
| NAME:             CanHL_InitRxBasicCAN
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_InitRxBasicCAN( CanInitInfoPtrType initInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  Can_HwHandleType hwObjHandle;
  Can_HwHandleType Htrh;
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
  errorId = CAN_E_NO_ERROR;
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = initInfo->Controller;
# endif
  for (Htrh = Can_GetRxBasicHandleStart(canHwChannel); Htrh < Can_GetRxBasicHandleStop(canHwChannel); Htrh++)
  { /* #10 iterate over all BasicCAN RX mailboxes */
    for (hwObjHandle = Can_GetHwHandle(Htrh); hwObjHandle < (Can_HwHandleType)(Can_GetHwHandle(Htrh) + Can_GetDLC_FIFO(Htrh)); hwObjHandle++)
    {
# if defined(C_ENABLE_CAN_RAM_CHECK)
      /* #20 RAM check for BasicCAN RX mailboxes */
      initInfo->isMbCorrupt = kCanFalse; /* SBSW_CAN_HL36 */
      if ((Can_GetStatusReq(channel) & CAN_REQ_RAM_CHECK) == CAN_REQ_RAM_CHECK)
      {
        initInfo->isMbCorrupt = CAN_RAM_CHECK_MAILBOX_RESULT(channel, (hwObjHandle)); /* COV_CAN_HARDWARE_FAILURE */ /* SBSW_CAN_HL36 */
      } 
# endif
      /* #30 initialize BasicCAN RX mailboxes (LL) */
      /* KB begin CanLL_InitMailboxBasicCAN */
      
      /* KB end CanLL_InitMailboxBasicCAN */
# if defined(C_ENABLE_CAN_RAM_CHECK)
      if( (Can_GetLogStatus(channel) & CAN_STATUS_INIT) != CAN_STATUS_INIT )
      { /* PowerOn */
        Can_SetMailboxState(Htrh, CAN_ENABLE_OBJ); /* SBSW_CAN_HL34 */
      }
      if( (initInfo->isMbCorrupt == kCanTrue) || (Can_GetMailboxState(Htrh) == CAN_DISABLED_OBJ) ) /* COV_CAN_RAM_CHECK_NO_STIMULATION */
      { /* #45 deactivate corrupt mailbox */
        /* KB begin CanLL_InitMailboxBasicCANDeactivate */
        
        /* KB end CanLL_InitMailboxBasicCANDeactivate */
        if (initInfo->isMbCorrupt == kCanTrue)
        {  /* #50 notify application about corrupt mailbox and deactivate controller */
          CanHL_RamCheckMailboxNotification(CAN_CHANNEL_CANPARA_FIRST hwObjHandle, Htrh);
        }
      }
# endif
    }
  }
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# else
  CAN_DUMMY_STATEMENT(initInfo); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  return errorId;
}  /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */
#endif

/****************************************************************************
| NAME:             CanHL_InitEnd_InitMode
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_InitEnd_InitMode( CanInitInfoPtrType initInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanInitHandle  initObject; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
  errorId = CAN_E_NO_ERROR;
#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = initInfo->channel;
#endif
  initObject = initInfo->initObject;

  /* #20 HW specific initialization end (LL) */
  /* KB begin CanLL_InitEndRegister */
  
  #if defined( C_ENABLE_STD_ID )
  /*  11-bit standard Message ID filtering */
  # if( kCanNumberOfStandardFilter > 0 ) 
  /* BasicCAN filter available */
  Cn->SIDFC  = (vuint32) ((vuint32)(CAN_HL_INFO_INIT_PTR(stdFeCount)) << 16);
  Cn->SIDFC |= (vuint32)(Can_GetCanSIDFC_FLSSAOfCanSIDFC(canHwChannel));
  # else
  /* No BasicCAN filter available */
  #  if( kCanNumberOfRxObjects > 0 ) /* COV_CAN_COMPATIBILITY */
  /* FullCAN filter available */
  Cn->SIDFC  = ((vuint32) (vuint32)(CAN_HL_INFO_INIT_PTR(stdFeCount)) << 16);
  Cn->SIDFC |= (vuint32)((Can_GetCanShmAdr_SIDFAOfCanShmAdr(canHwChannel)) & 0x0000FFFFul);
  #  else
  Cn->SIDFC  = 0x00000000u; /* LSS zero means no standard filters at all available */
  #  endif
  # endif
  #endif
  
  #if defined(C_ENABLE_EXTENDED_ID) 
  /*  29-bit extended Message ID filtering */
  # if (kCanNumberOfExtendedFilter > 0)
  /* BasicCAN filter available */
  Cn->XIDFC  = (vuint32) ((vuint32)(CAN_HL_INFO_INIT_PTR(extFeCount)) << 16);
  Cn->XIDFC |= (vuint32)(Can_GetCanXIDFC_FLESAOfCanXIDFC(canHwChannel));
  # else
  /* No BasicCAN filter available */
  #  if( kCanNumberOfRxObjects > 0 ) /* COV_CAN_COMPATIBILITY */
  /* FullCAN filter available */
  Cn->XIDFC  = (vuint32)((vuint32)(CAN_HL_INFO_INIT_PTR(extFeCount)) << 16);
  Cn->XIDFC |= (vuint32)((Can_GetCanShmAdr_XIDFAOfCanShmAdr(canHwChannel)) & 0x0000FFFFul);
  #  else
  Cn->XIDFC  = 0x00000000u; /* LSE zero means no extended filters at all available */
  #  endif
  # endif
  #endif
          
  Cn->TXBTIE  = CAN_HL_INFO_INIT_PTR(txbtie); /* allow CAN Tx Buffer confirmation INTs */
  Cn->TXBCIE  = CAN_HL_INFO_INIT_PTR(txbtie); /* allow CAN Tx Buffer cancellation INTs */
  
  #if ( CAN_BOSCH_ERRATUM_012 == STD_ON )
  /* The Protocol Exception Event is signalled via PSR.ACT (and PSR.PXE if MCAN Rev. >=3.1.0 ).
     Thus the status has to be monitored */
  Cn->IE |= (kCanIR_TOO); /* enable timeout interrupt */
  #endif
  Can_GetCanIntEnable(channel) = CAN_HL_INFO_INIT_PTR(ie); /* keep for usage within ISR and SetControllerMode*/
  if(CAN_HL_INFO_INIT_PTR(ie) > 0) /* PRQA S 3355,3356,3358,3359 */ /* MD_Can_13.7,MD_Can_13.7,MD_Can_13.7,MD_Can_13.7 */
  { /* PRQA S 3201 */ /* MD_Can_3201 */ 
    Cn->ILS = kCanILS_ALL_ZERO;  /* All INTs assigned to INT line '0' */
    Cn->ILE = kCanILE_EINT0;     /* enable INT line '0' */
    Cn->IE  = CAN_HL_INFO_INIT_PTR(ie);
  }
  else
  { /* PRQA S 3201 */ /* MD_Can_3201 */
    Cn->ILE = kCanILE_DISABLE;   /* disable INT lines */
    Cn->IE  = kCanIE_DISABLE_ALL;
  }
        
  CAN_MSG_RAM_SYNC();
  /* KB end CanLL_InitEndRegister */

#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CAN_DUMMY_STATEMENT(initObject); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  return errorId;
}

/****************************************************************************
| NAME:             CanHL_InitEnd_StopMode
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_InitEnd_StopMode( CanInitInfoPtrType initInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanInitHandle  initObject; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
  errorId = CAN_E_NO_ERROR;
#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = initInfo->channel;
#endif
  initObject = initInfo->initObject;

  /* #10 HW specific initialization transition to STOP (LL) */
  /* KB begin CanLL_InitEnd_StopMode */
  /* nothing to do: MCAN is in INIT mode */
  /* KB end CanLL_InitEnd_StopMode */

#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CAN_DUMMY_STATEMENT(initObject); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  return errorId;
}

/****************************************************************************
| NAME:             CanHL_StopReinit
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_StopReinit( CAN_HW_CHANNEL_CANTYPE_ONLY ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  /* ----- Implementation ----------------------------------------------- */
  /* #10 do a short initialization instead of full Can_InitController() in case of STOP transition (CanLL_StopReinit) */
  /* #20 Delete all Pending Interrupt and Pending flags for TX,RX,BUSOFF and WAKEUP */
  /* KB begin CanLL_StopReinit */
  vuint32 tmpECR; /* PRQA S 3203 */ /* MD_Can_3203_LL */
  #if defined( C_ENABLE_RX_FULLCAN_OBJECTS ) 
  Cn->NDATA[0] = kCan_ALL_ONE;
  Cn->NDATA[1] = kCan_ALL_ONE;
  #endif
  /* CAN error logging is reset by read access to ECR[CEL] */
  tmpECR = Cn->ECR; /* CAN error logging is reset by read access to ECR[CEL] */  /* PRQA S 3198 */ /* MD_Can_3198_LL */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
  #if defined( V_ENABLE_USE_DUMMY_STATEMENT )
  tmpECR = tmpECR; /* dummy assignment avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
  #endif
  /* Clear pending tx flags:
     (The following registers are reset when CCCR[CCE] is set: TXBRP, TXBTO, TXBCF, TXEFS, HPMS, RXF0S, RXF1S, TXFQS.  
     TOCV[TOC] is preset to the value configured by TOCC[TOP].
     CCCR[CCE] is automatically reset when CCCR[INIT] is reset.) */
  Cn->CCCR |= kCanCCCR_CCE;
  Can_GetCanTXBRP(canHwChannel)   = 0;
  Can_GetCanTXBCR(canHwChannel)   = 0;
  #if defined(C_ENABLE_CAN_FD)
  # if defined(C_ENABLE_CAN_FD_DYN)
  Can_GetNonFdObjectsPendingFlag(canHwChannel) = 0;
  # endif
  if(Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) != CAN_NONE)
  {
    if(Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_FD_RXTX)
    { /* CAN_FD_RXTX */
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
      Cn->CCCR |= (vuint32)(kCanCCCR_FDOE | kCanCCCR_BRSE); /* FD operation, BRS enabled */
  # else
      Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* reset CME bits */
      Cn->CCCR |= kCanCCCR_CME_LONG_FAST;           /* enable LONG and FAST */
  # endif
    }
    else
    { /* CAN_FD_RXONLY */
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
      Cn->CCCR &= (vuint32)(~(kCanCCCR_FDOE | kCanCCCR_BRSE)); /* reset FD bits */
      Cn->CCCR |= (vuint32)(kCanCCCR_FDOE);                    /* FD operation, BRS disabled */
  # else
      Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* reset CME bits */
      Cn->CCCR |= kCanCCCR_CME_LONG;                /* enable LONG  */
  # endif
    }
  }
  else
  { /* CAN_NONE */
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
    Cn->CCCR &= (vuint32)(~(kCanCCCR_FDOE | kCanCCCR_BRSE)); /* No FD operation, BRS disabled */
  # else
    Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* enable NORMAL CAN */
  # endif
  }
  #else
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
    /* FD operation disabled */
    Cn->CCCR &= (vuint32)(~(kCanCCCR_FDOE | kCanCCCR_BRSE)); /* No FD operation, BRS disabled */
  # else
    Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* enable NORMAL CAN */
  # endif
  #endif
  /* Clear all pending messages:
     Clear FIFOs */
  if((Cn->RXF0S.B.FnFL) > 0)
  {
    Cn->RXF0A = Cn->RXF0S.B.FnGI;
  }
  #if defined( C_ENABLE_MULTIPLE_BASICCAN )
  if((Cn->RXF1S.B.FnFL) > 0)
  {
    Cn->RXF1A = Cn->RXF1S.B.FnGI;
  }
  #endif
  /* Delete all pending interrupt requests */
  Cn->IR = kCanIR_CLEAR_ALL;
  /* KB end CanLL_StopReinit */
}

/****************************************************************************
| NAME:             CanHL_InitPowerOn
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_InitPowerOn(void)
{
  /* #10 HW general power on initialization (LL) */
  /* KB begin CanLL_InitPowerOn */
  #if defined( C_ENABLE_CAN_ECC_INIT_SHM ) /* COV_CAN_FIX_VERSION */
  Can_EccInit();
  #endif  /* C_ENABLE_CAN_ECC_INIT_SHM */
  /* KB end CanLL_InitPowerOn */
}

/****************************************************************************
| NAME:             CanHL_InitPowerOnChannelSpecific
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_InitPowerOnChannelSpecific( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* #10 HW controller specific power on initialization (LL) */
  /* KB begin CanLL_InitPowerOnChannelSpecific */
  Can_GetCanBusOffNotification(canHwChannel) = 0;
  Can_GetCanTXBE_T0OfCanTXBE(canHwChannel) = 0;
  Can_GetCanTXBRP(canHwChannel) = 0;
  Can_GetCanTXBCR(canHwChannel) = 0;
  Can_GetCanIntEnable(canHwChannel) = 0;
  /* KB end CanLL_InitPowerOnChannelSpecific */

#if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
}

#if defined(C_ENABLE_RX_BASICCAN_OBJECTS)
/****************************************************************************
| NAME:             CanHL_RxBasicMsgReceivedBegin
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_RxBasicMsgReceivedBegin( CanRxBasicInfoPtrType rxBasicInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL
  retval = CAN_NOT_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */

  /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = rxBasicInfo->Controller; /* PRQA S 3199 */ /* MD_MSR_14.2 */
# endif
  rxObjHandle = rxBasicInfo->rxObjHandle; /* PRQA S 3199 */ /* MD_MSR_14.2 */

  /* #10 HW reception handling begin (LL) */
  /* KB begin CanLL_RxBasicMsgReceivedBegin */
  #if defined( C_ENABLE_MULTIPLE_BASICCAN )
  if(rxObjHandle > CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel))
  { /* point to Fifo-1 */
    CAN_HL_INFO_RXBASIC_PTR(pFifoAck)    = &(Cn->RXF1A);
    CAN_HL_INFO_RXBASIC_PTR(pFifoStatus) = &(Cn->RXF1S);
  }
  else
  #else
  # if defined( V_ENABLE_USE_DUMMY_STATEMENT )
  rxObjHandle=rxObjHandle;   /* dummy assignment to avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
  # endif
  #endif
  { /* point to Fifo-0 */
    CAN_HL_INFO_RXBASIC_PTR(pFifoAck)    = &(Cn->RXF0A);
    CAN_HL_INFO_RXBASIC_PTR(pFifoStatus) = &(Cn->RXF0S);
  }
  
    CAN_HL_INFO_RXBASIC_PTR(fGetIndex)  = (vuint8)(CAN_HL_INFO_RXBASIC_PTR(pFifoStatus)->B.FnGI);
  #if defined( C_ENABLE_MULTIPLE_BASICCAN )
    if(rxObjHandle > CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel))
    { 
  # if defined(C_ENABLE_CAN_FD_FULL)
      CAN_HL_INFO_RXBASIC_PTR(fElmSize) = GET_N_BYTES_FROM_ES(Can_GetF1DSOfShmElementSize(canHwChannel)) >> 2; /* divide by 4 due to 32 bit access */
  # endif
      CAN_HL_INFO_RXBASIC_PTR(pShm) = ShmRXF1(CAN_HL_INFO_RXBASIC_PTR(fGetIndex)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    }
    else
  #endif
    {
  # if defined(C_ENABLE_CAN_FD_FULL)
      CAN_HL_INFO_RXBASIC_PTR(fElmSize) = GET_N_BYTES_FROM_ES(Can_GetF0DSOfShmElementSize(canHwChannel)) >> 2; /* divide by 4 due to 32 bit access */
  # endif
      CAN_HL_INFO_RXBASIC_PTR(pShm) = ShmRXF0(CAN_HL_INFO_RXBASIC_PTR(fGetIndex)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    }
    CAN_HL_INFO_RXBASIC_PTR(fElm).R0      = CAN_HL_INFO_RXBASIC_PTR(pShm)->R0;
    CAN_HL_INFO_RXBASIC_PTR(fElm).R1      = CAN_HL_INFO_RXBASIC_PTR(pShm)->R1;
  # if defined(C_ENABLE_CAN_FD_FULL)
    for(CAN_HL_INFO_RXBASIC_PTR(indexL) = 0; CAN_HL_INFO_RXBASIC_PTR(indexL) < CAN_HL_INFO_RXBASIC_PTR(fElmSize); CAN_HL_INFO_RXBASIC_PTR(indexL)++)
    {
  #  if defined (C_CPUTYPE_BITORDER_MSB2LSB)
      CAN_HL_INFO_RXBASIC_PTR(fElmTmp) = CAN_HL_INFO_RXBASIC_PTR(pShm)->data[CAN_HL_INFO_RXBASIC_PTR(indexL)];
      CAN_HL_INFO_RXBASIC_PTR(fElm).data[CAN_HL_INFO_RXBASIC_PTR(indexL)] = CanBswap32(CAN_HL_INFO_RXBASIC_PTR(fElmTmp));
  #  else
      CAN_HL_INFO_RXBASIC_PTR(fElm).data[CAN_HL_INFO_RXBASIC_PTR(indexL)] = CAN_HL_INFO_RXBASIC_PTR(pShm)->data[CAN_HL_INFO_RXBASIC_PTR(indexL)];
  #  endif
    }
  # else
  #  if defined (C_CPUTYPE_BITORDER_MSB2LSB)
    CAN_HL_INFO_RXBASIC_PTR(fElmTmp) = CAN_HL_INFO_RXBASIC_PTR(pShm)->data[0];
    CAN_HL_INFO_RXBASIC_PTR(fElm).data[0] = CanBswap32(CAN_HL_INFO_RXBASIC_PTR(fElmTmp));
    CAN_HL_INFO_RXBASIC_PTR(fElmTmp) = CAN_HL_INFO_RXBASIC_PTR(pShm)->data[1];
    CAN_HL_INFO_RXBASIC_PTR(fElm).data[1] = CanBswap32(CAN_HL_INFO_RXBASIC_PTR(fElmTmp));
  #  else
    CAN_HL_INFO_RXBASIC_PTR(fElm).data[0] = CAN_HL_INFO_RXBASIC_PTR(pShm)->data[0];
    CAN_HL_INFO_RXBASIC_PTR(fElm).data[1] = CAN_HL_INFO_RXBASIC_PTR(pShm)->data[1];
  #  endif
  # endif
  /* KB end CanLL_RxBasicMsgReceivedBegin */

  /* #20 HW get mailbox pointer (LL) */
  /* KB begin CanLL_RxBasicGetCANObjPtr */
  (rxBasicInfo->rxInfo.pChipMsgObj) = (CanChipMsgPtr) &CAN_HL_INFO_RXBASIC_PTR(fElm);  /* PRQA S 0310 */ /* MD_Can_0310 */
  /* KB end CanLL_RxBasicGetCANObjPtr */

  /* #30 HW get data pointer (LL) */
  /* KB begin CanLL_RxBasicGetCANDataPtr */
  (rxBasicInfo->rxInfo.pChipData) = (CanChipDataPtr) &CAN_HL_INFO_RXBASIC_PTR(fElm).data[0];  /* PRQA S 0310 */ /* MD_Can_0310 */
  /* KB end CanLL_RxBasicGetCANDataPtr */

  retval = CAN_OK;
/* Msg(4:2015) This label is not a case or default label for a switch statement. MISRA Rule 55 */
  goto finishBasicCan;     /* to avoid compiler warning */ /* PRQA S 2001 */ /* MD_Can_2001 */
finishBasicCan:
  return retval;
} /* PRQA S 6030 */ /* MD_MSR_STCYC*/

/****************************************************************************
| NAME:             CanHL_RxBasicMsgReceivedSearch
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_RxBasicMsgReceivedSearch( CanRxBasicInfoPtrType rxBasicInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL
  /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = rxBasicInfo->Controller;
# endif
  rxObjHandle = rxBasicInfo->rxObjHandle;
  /* #20 HRH calculate (multiple BasicCAN) */
  rxBasicInfo->rxInfo.localHrh = (Can_HwHandleType)((Can_HwHandleType)rxObjHandle - CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel)); /* calculate 0 based BasicCAN index */ /* SBSW_CAN_HL29 */
  rxBasicInfo->rxInfo.localHrh = (Can_HwHandleType)(rxBasicInfo->rxInfo.localHrh / (Can_GetDLC_FIFO(Can_GetRxBasicHandleStart(canHwChannel)))); /* get BasicCAN for this FIFO */ /* SBSW_CAN_HL29 */
  rxBasicInfo->rxInfo.localHrh = (Can_HwHandleType)(rxBasicInfo->rxInfo.localHrh + Can_GetRxBasicHandleStart(canHwChannel)); /* get mailbox index for this BasicCAN */ /* SBSW_CAN_HL29 */
  retval = CAN_OK;
  return retval;
}

/****************************************************************************
| NAME:             CanHL_RxBasicMsgReceivedEnd
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_RxBasicMsgReceivedEnd( CanRxBasicInfoPtrType rxBasicInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = rxBasicInfo->Controller; /* PRQA S 3199 */ /* MD_MSR_14.2 */
# endif
  rxObjHandle = rxBasicInfo->rxObjHandle; /* PRQA S 3199 */ /* MD_MSR_14.2 */

  /* #10 HW release mailbox (LL) */
  /* KB begin CanLL_RxBasicReleaseObj */
  if( (((vuint32)*(vuint32*)CAN_HL_INFO_RXBASIC_PTR(pFifoStatus)) & kCanRXFnS_FnFL) > 0)  /* PRQA S 0310 */ /* MD_Can_0310 */  /* PRQA S 0312 */ /* MD_Can_0312 */
  { /* Attention: ACK with Fill Level '0' will result in a endless read loop !!! */
    /* ACK: After the Host has read a message or a sequence of messages it has to write the buffer index of the last element read to FnAI. 
            This will set the Get Index RXFnS[FnGI] to FnAI+1 and update the FIFO Fill Level RXF0S[FnFL]. */
    *CAN_HL_INFO_RXBASIC_PTR(pFifoAck)    = (CAN_HL_INFO_RXBASIC_PTR(fGetIndex) & 0x0000003Fu); 
  }
  #  if defined( V_ENABLE_USE_DUMMY_STATEMENT )
  rxObjHandle=rxObjHandle;   /* dummy assignment to avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
  #  endif
  /* KB end CanLL_RxBasicReleaseObj */

  /* KB begin CanLL_RxBasicMsgReceivedEnd */
  /* KB end CanLL_RxBasicMsgReceivedEnd */

  CAN_DUMMY_STATEMENT(rxObjHandle);  /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller);   /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

# if defined(C_ENABLE_RX_BASICCAN_POLLING) /* COV_CAN_RX_BASICCAN_POLLING */
/****************************************************************************
| NAME:             CanHL_RxBasicMsgReceivePolling
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_RxBasicMsgReceivePolling( CAN_HW_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  /* KB begin CanLL_RxBasicCANTaskLocalParameter */
  V_DEF_P2VAR(volatile, tRXFnS, AUTOMATIC, VAR_NOINIT) pFState; /* Fifo status register (RXFnS) */
  /* KB end CanLL_RxBasicCANTaskLocalParameter */
  /* ----- Implementation ----------------------------------------------- */
  /* #10 check global pending flag (over all mailboxes - if available) */
  /* KB begin CanLL_if_RxBasicIsGlobalIndPending */
  #if defined( C_ENABLE_MULTIPLE_BASICCAN )
  if( ((Cn->RXF0S.R & kCanRXFnS_FnFL) > 0) || ((Cn->RXF1S.R & kCanRXFnS_FnFL) > 0) )
  #else
  if( ((Cn->RXF0S.R & kCanRXFnS_FnFL) > 0) )
  #endif
  {
  /* KB end CanLL_if_RxBasicIsGlobalIndPending */
    /* #20 loop over all BasicCAN mailboxes */
    { /* HW specific loop over all BasicCAN hardware objects assigned to the BasicCAN which starts with rxObjHandle */
      /* KB begin CanLL_Loop_RxBasicCanTaskLoopBegin */
      #if defined( C_ENABLE_MULTIPLE_BASICCAN )
      CanObjectHandle hwObjStart;
      CanObjectHandle hwObjStop;
      hwObjStart = CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel);
      hwObjStop  = CAN_HL_HW_RX_BASIC_STOPINDEX(canHwChannel);
      for (rxObjHandle = hwObjStart; rxObjHandle < hwObjStop; rxObjHandle++)
      #else
      rxObjHandle = CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel);
      #endif
      {
      /* KB end CanLL_Loop_RxBasicCanTaskLoopBegin */
#  if defined(C_ENABLE_INDIVIDUAL_POLLING) || defined(CAN_HWOBJINDIVPOLLING)
        /* #30 check individual polling flag */
        if ( Can_GetCanHwObjIndivPolling(CAN_HWOBJINDIVPOLLING_INDEX0,rxObjHandle) != (uint8)0 )
#  endif
        { 
          /* #40 check mailbox pending flag */
          /* KB begin CanLL_if_RxBasicIsObjIndPending */
          #if defined( C_ENABLE_MULTIPLE_BASICCAN )
          if(rxObjHandle > CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel))
          { /* point to Fifo-1 */
            pFState = &(Cn->RXF1S);
          }
          else
          #endif
          { /* point to Fifo-0 */
            pFState = &(Cn->RXF0S);
          }
          while( ((pFState->B.FnFL) > 0) ) /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
          {
          /* KB end CanLL_if_RxBasicIsObjIndPending */
            /* #50 disable CAN interrupts \trace SPEC-1569, SPEC-3785 */
            Can_DisableControllerInterrupts((uint8)channel);
            /* #60 mailbox notification CanBasicCanMsgReceived() */
            CanBasicCanMsgReceived(CAN_HW_CHANNEL_CANPARA_FIRST rxObjHandle);
            /* #70 enable CAN interrupts */
            Can_EnableControllerInterrupts((uint8)channel);
          }
        }
      }
    }
  }
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
# endif /* C_ENABLE_RX_BASICCAN_POLLING */
#endif /* C_ENABLE_RX_BASICCAN_OBJECTS */

#if defined(C_ENABLE_RX_FULLCAN_OBJECTS)
/****************************************************************************
| NAME:             CanHL_RxFullMsgReceivedBegin
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_RxFullMsgReceivedBegin( CanRxFullInfoPtrType rxFullInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL
  retval = CAN_NOT_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */

  /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = rxFullInfo->Controller;
# endif
  rxObjHandle = rxFullInfo->rxObjHandle;

  /* #10 HW reception handling begin (LL) */
  /* KB begin CanLL_RxFullMsgReceivedBegin */
  {
    /* Calculate the local rx object handle (zero-based) */
    CAN_HL_INFO_RXFULL_PTR(objectNumber) = rxObjHandle - CAN_HL_HW_RX_FULL_STARTINDEX(canHwChannel);
    /* Get the pointer to the message object */
    CAN_HL_INFO_RXFULL_PTR(pShm) = ShmRXB(CAN_HL_INFO_RXFULL_PTR(objectNumber)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
  #if defined(C_ENABLE_CAN_FD_FULL)
    CAN_HL_INFO_RXFULL_PTR(rElmSize) = GET_N_BYTES_FROM_ES(Can_GetRBDSOfShmElementSize(canHwChannel)) >> 2; /* divide by 4 due to 32 bit access */
  #endif
    /* Copy the data */
    CAN_HL_INFO_RXFULL_PTR(bfElm).R0 = CAN_HL_INFO_RXFULL_PTR(pShm)->R0;
    CAN_HL_INFO_RXFULL_PTR(bfElm).R1 = CAN_HL_INFO_RXFULL_PTR(pShm)->R1;
  #if defined(C_ENABLE_CAN_FD_FULL)
    for(CAN_HL_INFO_RXFULL_PTR(indexL) = 0; CAN_HL_INFO_RXFULL_PTR(indexL) < CAN_HL_INFO_RXFULL_PTR(rElmSize); CAN_HL_INFO_RXFULL_PTR(indexL)++)
    {
  # if defined (C_CPUTYPE_BITORDER_MSB2LSB)
      CAN_HL_INFO_RXFULL_PTR(fElmTmp) = CAN_HL_INFO_RXFULL_PTR(pShm)->data[CAN_HL_INFO_RXFULL_PTR(indexL)];
      CAN_HL_INFO_RXFULL_PTR(bfElm).data[CAN_HL_INFO_RXFULL_PTR(indexL)] = CanBswap32(CAN_HL_INFO_RXFULL_PTR(fElmTmp));
  # else
      CAN_HL_INFO_RXFULL_PTR(bfElm).data[CAN_HL_INFO_RXFULL_PTR(indexL)] = CAN_HL_INFO_RXFULL_PTR(pShm)->data[CAN_HL_INFO_RXFULL_PTR(indexL)];
  # endif
    }
  #else
  # if defined (C_CPUTYPE_BITORDER_MSB2LSB)
    CAN_HL_INFO_RXFULL_PTR(fElmTmp) = CAN_HL_INFO_RXFULL_PTR(pShm)->data[0];
    CAN_HL_INFO_RXFULL_PTR(bfElm).data[0] = CanBswap32(CAN_HL_INFO_RXFULL_PTR(fElmTmp));
    CAN_HL_INFO_RXFULL_PTR(fElmTmp) = CAN_HL_INFO_RXFULL_PTR(pShm)->data[1];
    CAN_HL_INFO_RXFULL_PTR(bfElm).data[1] = CanBswap32(CAN_HL_INFO_RXFULL_PTR(fElmTmp));
  # else
    CAN_HL_INFO_RXFULL_PTR(bfElm).data[0] = CAN_HL_INFO_RXFULL_PTR(pShm)->data[0];
    CAN_HL_INFO_RXFULL_PTR(bfElm).data[1] = CAN_HL_INFO_RXFULL_PTR(pShm)->data[1];
  # endif
  #endif
    /* The New Data flags have to be reset by the Host by writing a '1' to the respective bit position. */
    Cn->NDATA[(CAN_HL_INFO_RXFULL_PTR(objectNumber)>>0x05u)] = (0x00000001u << (CAN_HL_INFO_RXFULL_PTR(objectNumber) & 0x1Fu));
  }
  /* KB end CanLL_RxFullMsgReceivedBegin */
  
  /* #20 HW get mailbox pointer (LL) */
  /* KB begin CanLL_RxFullGetCANObjPtr */
  (rxFullInfo->rxInfo.pChipMsgObj) = (CanChipMsgPtr)&CAN_HL_INFO_RXFULL_PTR(bfElm);  /* PRQA S 0310 */ /* MD_Can_0310 */
  /* KB end CanLL_RxFullGetCANObjPtr */

  /* #30 HW get data pointer (LL) */
  /* KB begin CanLL_RxFullGetCANDataPtr */
  (rxFullInfo->rxInfo.pChipData) = (CanChipDataPtr) &CAN_HL_INFO_RXFULL_PTR(bfElm).data[0];  /* PRQA S 0310 */ /* MD_Can_0310 */ 
  /* KB end CanLL_RxFullGetCANDataPtr */

  retval = CAN_OK;
/* Msg(4:2015) This label is not a case or default label for a switch statement. MISRA Rule 55 */
  goto finishRxFullCan;     /* to avoid compiler warning */ /* PRQA S 2001 */ /* MD_Can_2001 */
finishRxFullCan:
  return retval;
}

/****************************************************************************
| NAME:             CanHL_RxFullMsgReceivedSearch
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanHL_RxFullMsgReceivedSearch( CanRxFullInfoPtrType rxFullInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = rxFullInfo->channel;
# endif
  rxObjHandle = rxFullInfo->rxObjHandle;

  /* #10 HRH Search linear */
  for (rxFullInfo->rxInfo.localHrh = Can_GetRxFullHandleStart(canHwChannel); rxFullInfo->rxInfo.localHrh < Can_GetRxFullHandleStop(canHwChannel); rxFullInfo->rxInfo.localHrh++) /* SBSW_CAN_HL30 */ /* SBSW_CAN_HL30 */ /* COV_CAN_FULLCAN_SEARCH_LINEAR */
  {
    if (Can_GetHwHandle(rxFullInfo->rxInfo.localHrh) == (Can_HwHandleType)rxObjHandle)
    {
      break;
    }
  }

  retval = CAN_OK;
  return retval;
}

/****************************************************************************
| NAME:             CanHL_RxFullMsgReceivedEnd
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_RxFullMsgReceivedEnd( CanRxFullInfoPtrType rxFullInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  CAN_CHANNEL_CANTYPE_LOCAL

  /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  Controller = rxFullInfo->channel;
# endif
  rxObjHandle = rxFullInfo->rxObjHandle;

  /* #10 HW release mailbox (LL) */
  /* KB begin CanLL_RxFullReleaseObj */
  /* KB end CanLL_RxFullReleaseObj */

  /* KB begin CanLL_RxFullMsgReceivedEnd */
  /* KB end CanLL_RxFullMsgReceivedEnd */

  CAN_DUMMY_STATEMENT(rxObjHandle);  /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller);   /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}

# if defined(C_ENABLE_RX_FULLCAN_POLLING) /* COV_CAN_RX_FULLCAN_POLLING */
/****************************************************************************
| NAME:             CanHL_RxFullMsgReceivePolling
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_RxFullMsgReceivePolling( CAN_HW_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  Can_HwHandleType Htrh;
  CanObjectHandle rxObjHandle; /* PRQA S 781 */ /* MD_Can_Asr_0781 */
  /* KB begin CanLL_RxFullCANTaskLocalParameter */
  # if defined( C_ENABLE_RX_FULLCAN_OBJECTS )
  vuint32 ndata[2], shiftVal;
  vuint16 ndfPos, ndfIdx;
  # endif
  /* KB end CanLL_RxFullCANTaskLocalParameter */
  /* ----- Implementation ----------------------------------------------- */
  /* #10 check global pending flag (over all mailboxes - if available) */
  /* KB begin CanLL_if_RxFullIsGlobalIndPending */
  if( (Cn->NDATA[0] != 0) || (Cn->NDATA[1] != 0) )
  {
    ndata[0] = Cn->NDATA[0];
    ndata[1] = Cn->NDATA[1];
  /* KB end CanLL_if_RxFullIsGlobalIndPending */
    /* #20 loop over all FullCAN mailboxes */
    for (Htrh = Can_GetRxFullHandleStart(canHwChannel); Htrh < Can_GetRxFullHandleStop(canHwChannel); Htrh++ )
    { 
      rxObjHandle = Can_GetHwHandle(Htrh);
#  if defined(C_ENABLE_INDIVIDUAL_POLLING) || defined(CAN_HWOBJINDIVPOLLING)
      /* #30 check individual polling flag */
      if ( Can_GetCanHwObjIndivPolling(CAN_HWOBJINDIVPOLLING_INDEX0,rxObjHandle) != (uint8)0 )
#  endif
      { /* #40 check mailbox pending flag */
        /* KB begin CanLL_if_RxFullIsObjIndPending */
        ndfPos = rxObjHandle - CAN_HL_HW_RX_FULL_STARTINDEX(canHwChannel); 
        if(ndfPos >= 32)
        {
          ndfPos -= 32;
          ndfIdx  = 1; 
        }
         else
         {
          ndfIdx  = 0; 
         }
        shiftVal = (vuint32)(0x00000001u << ndfPos);
        if( (ndata[ndfIdx] & shiftVal) != 0)
        {
          ndata[ndfIdx] &= (vuint32) (~shiftVal);
          /* While an Rx Buffers NDF is set the belonging ID Filter will not match, causing the acceptance filtering to continue. 
             Following ID Filters may cause the received message to be stored into another Rx Buffer or into an Rx FIFO or the message may be rejected. */
        /* KB end CanLL_if_RxFullIsObjIndPending */
          /* #50 disable CAN Interrupt \trace SPEC-1569, SPEC-3785 */
          Can_DisableControllerInterrupts((uint8)channel);
          /* #60 mailbox notification CanFullCanMsgReceived() */
          CanFullCanMsgReceived( CAN_HW_CHANNEL_CANPARA_FIRST rxObjHandle);
          /* #70 enable CAN Interrupt */
          Can_EnableControllerInterrupts((uint8)channel);
        }
      }
    }
  }
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
# endif /* C_ENABLE_RX_FULLCAN_POLLING */
#endif /* C_ENABLE_RX_FULLCAN_OBJECTS */

#if defined(C_ENABLE_RX_FULLCAN_OBJECTS) || defined(C_ENABLE_RX_BASICCAN_OBJECTS)
/****************************************************************************
| NAME:             CanHL_RxMsgReceivedNotification
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_RxMsgReceivedNotification( CAN_CHANNEL_CANTYPE_FIRST CanRxInfoPtrType rxInfo ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* ----- Local Variables ---------------------------------------------- */
# if !defined(C_ENABLE_RX_QUEUE) && (CAN_GENERIC_PRECOPY == STD_ON)
  Can_ReturnType generic_retval;
# endif
  uint8 errorId;
  errorId = CAN_E_NO_ERROR;
  /* ----- Implementation ----------------------------------------------- */
  /* #10 RX queue */
# if defined(C_ENABLE_RX_QUEUE)
  /**************************** RxQueue handling **********************************/
    /* #20 EXCLUSIVE_AREA_4 secure RxQueue data handling */
  Can_EnterCritical(CAN_EXCLUSIVE_AREA_4);
  if (Can_GetRxQueueInfo().Count < Can_GetSizeOfRxQueueBuffer()) /* CM_CAN_HL23 */
  { /* #30 Queue not full: */
      /* #45 copy HRH, ID, DLC and data to RX queue */
    Can_GetRxQueueBuffer(Can_GetRxQueueInfo().WriteIndex).Hrh = rxInfo->localHrh; /* SBSW_CAN_HL18 */
    Can_GetRxQueueBuffer(Can_GetRxQueueInfo().WriteIndex).id  = rxInfo->localId; /* SBSW_CAN_HL18 */
    Can_GetRxQueueBuffer(Can_GetRxQueueInfo().WriteIndex).dlc = rxInfo->localDlc; /* SBSW_CAN_HL18 */
#  if defined(C_ENABLE_CAN_FD_FULL)
      /* #46 copy data with VStdLib optimized copy routine for CAN-FD messages (use alignment info) */
    VStdMemCpy(Can_GetRxQueueBuffer(Can_GetRxQueueInfo().WriteIndex).data, rxInfo->pChipData, rxInfo->localDlc); /* SBSW_CAN_HL19 */ /* PRQA S 0312 */ /* MD_Can_0312 */
#  else
    {
      uint8_least i;
      for (i = 0; i < rxInfo->localDlc; i++)
      {
        Can_GetRxQueueBuffer(Can_GetRxQueueInfo().WriteIndex).data[i] = CanRxActualData(rxInfo,i); /* SBSW_CAN_HL19 */
      }
    }
#  endif
      /* #47 increase pointer to next queue element */
    Can_GetRxQueueInfo().Count++;
    if (Can_GetRxQueueInfo().WriteIndex < (uint16)(Can_GetSizeOfRxQueueBuffer() - 1) ) /* CM_CAN_HL24 */ /* CM_CAN_HL14 */
    {
      Can_GetRxQueueInfo().WriteIndex++;
    }
    else
    {
      Can_GetRxQueueInfo().WriteIndex = 0; /* CM_CAN_HL24 */
    }
  }
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  else 
  { /* #50 Queue full: last message will be lost -> overrun in queue do not change ReadIndex to override latest message because inconsistency problem (currently reading queue) */
    errorId = CAN_E_RXQUEUE;
  }
#  endif
  Can_LeaveCritical(CAN_EXCLUSIVE_AREA_4);
# else /* C_ENABLE_RX_QUEUE */
  /* #100 no RX queue */
  /* -------------------------- Interface + APPL Notifications --- */
    /* #110 call Appl_GenericPrecopy() depend on configuration and if mirror mode is active */
#  if (CAN_GENERIC_PRECOPY == STD_ON)
#   if defined(C_ENABLE_MIRROR_MODE)
  if (Can_GetMirrorModeState(channel) == CDDMIRROR_INACTIVE)
  { /* do not call Appl_GenericPrecopy() in case mirror mode was disabled */
    generic_retval = CAN_OK;
  }
  else
#   endif
  { /* \trace SPEC-3960 */
    generic_retval = Appl_GenericPrecopy((uint8)channel, (rxInfo->localId & (CAN_ID_IDE_MASK | CAN_ID_MASK)), rxInfo->localDlc, (Can_DataPtrType)rxInfo->pChipData);  /* PRQA S 0312 */ /* MD_Can_0312 */ /* SBSW_CAN_HL06 */
  }
  if (generic_retval == CAN_OK) /* \trace SPEC-15119 */
#  endif
  { /* #120 call CanIf_RxIndication() if mirror mode is no active or Appl_GenericPrecopy() return OK \trace SPEC-1726, SPEC-1688, SPEC-1687, SPEC-1687 */
    CanIf_RxIndication(rxInfo->localHrh, rxInfo->localId, rxInfo->localDlc, (Can_DataPtrType)rxInfo->pChipData); /* PRQA S 0312 */ /* MD_Can_0312 */ /* SBSW_CAN_HL07 */
  }
# endif
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  return errorId;
}
#endif

#if defined(C_ENABLE_RX_QUEUE)
/****************************************************************************
| NAME:             CanHL_RxQueueExecution
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, uint8, STATIC_CODE) CanHL_RxQueueExecution( void )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  errorId = CAN_E_NO_ERROR;
  /* ----- Implementation ----------------------------------------------- */
  /* #10 Execute RxQueue (over all channels) */
  while ( Can_GetRxQueueInfo().Count != (uint16)0 )
  { /* #20 over all filled RxQueue elements */
# if (CAN_GENERIC_PRECOPY == STD_ON)
    Can_ReturnType generic_retval;
    CAN_CHANNEL_CANTYPE_LOCAL
    generic_retval = CAN_NOT_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */
#  if !defined( C_SINGLE_RECEIVE_CHANNEL ) /* otherwise 'channel' is a define */
    channel = Can_GetMsgController(Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).Hrh);
#   if (CAN_DEV_ERROR_DETECT == STD_ON)
    if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_GENDATA_FAILURE */
    { /* #30 Check controller is valid */
      errorId = CAN_E_PARAM_CONTROLLER;
    }
    else
#   endif
#  endif
#  if defined(C_ENABLE_MIRROR_MODE)
    if (Can_GetMirrorModeState(channel) == CDDMIRROR_INACTIVE)
    { /* #40 MirrorMode: only when mirror is activated for this controller */
      generic_retval = CAN_OK;
    }
    else
#  endif
    { /* #50 call Appl_GenericPrecopy() */
      generic_retval = Appl_GenericPrecopy( (uint8)channel, /* PRQA S 2004 */ /* MD_Can_Asr_2004 */
                (Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).id & (CAN_ID_IDE_MASK | CAN_ID_MASK)),
                Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).dlc,
                (Can_DataPtrType)Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).data );  /* PRQA S 0312 */ /* MD_Can_0312 */ /* SBSW_CAN_HL06 */
    }
    if (generic_retval == CAN_OK)
# endif
    { /* #60 call CanIf_RxIndication() if Appl_GenericPrecopy() return OK or no generic precopy is used \trace SPEC-1726, SPEC-1688, SPEC-1687, SPEC-1687 */
      CanIf_RxIndication( Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).Hrh,
              Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).id,
              Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).dlc,
              (Can_DataPtrType)Can_GetRxQueueBuffer(Can_GetRxQueueInfo().ReadIndex).data ); /* PRQA S 0312 */ /* MD_Can_0312 */ /* SBSW_CAN_HL07 */
    }
    /* #70 EXCLUSIVE_AREA_4 secure RxQueue handling */
    Can_EnterCritical(CAN_EXCLUSIVE_AREA_4);
    /* #80 get next RxQueue element pointer */
    if (Can_GetRxQueueInfo().ReadIndex == (uint16)(Can_GetSizeOfRxQueueBuffer() - 1) ) /* CM_CAN_HL25 */ /* CM_CAN_HL26 */
    {
      Can_GetRxQueueInfo().ReadIndex = 0; /* CM_CAN_HL25 */
    }
    else
    {
      Can_GetRxQueueInfo().ReadIndex++;
    }
    Can_GetRxQueueInfo().Count--;
    Can_LeaveCritical(CAN_EXCLUSIVE_AREA_4);
  }
  return errorId;
}
#endif

/* KB begin CanLL_Functions */

#if defined( C_ENABLE_CAN_RAM_CHECK )
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanLL_IsMailboxCorrupt
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, vuint8, STATIC_CODE) CanLL_IsMailboxCorrupt(CAN_HW_CHANNEL_CANTYPE_FIRST CanObjectHandle hwObjHandle)
{
  vuint8 i;
  vuint8 ret_val;
  vuint32* p2Shm;
# if defined( VGEN_GENY ) /* COV_CAN_FIX_VERSION */
#  if ( CAN_MCAN_REVISION >= 0x0200u ) /* COV_CAN_FIX_VERSION */
  CanObjectHandle objHandle;
#  endif
# endif

  ret_val = kCanFalse; /* Mailbox is not corrupt */

  /* #10 identify Message RAM location */
  if(hwObjHandle < 32)
  { /* 32 Tx Buffers */
    p2Shm = (vuint32*) (pShmTXB(hwObjHandle));                                /* PRQA S 0310 */ /* MD_Can_0310 */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 0312 */ /* MD_Can_0312 */
  }
  else
  {
# if ( CAN_MCAN_REVISION >= 0x0200u ) /* COV_CAN_FIX_VERSION */
    if(hwObjHandle < 96)
    { /* 64 Rx Buffers */
#  if defined( VGEN_GENY ) /* COV_CAN_FIX_VERSION */
      objHandle = (hwObjHandle-CAN_HL_HW_RX_FULL_STARTINDEX(canHwChannel)); /* PRQA S 3689 */ /* MD_Can_3689 */
      p2Shm = (vuint32*) (ShmRXB( (CanObjectHandle)(objHandle) ));          /* PRQA S 0310 */ /* MD_Can_0310 */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */  /* PRQA S 0312 */ /* MD_Can_0312 */
#  else
      p2Shm = (vuint32*) (ShmRXB( ((CanObjectHandle)(hwObjHandle -32)) ));  /* PRQA S 0310 */ /* MD_Can_0310 */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */  /* PRQA S 0312 */ /* MD_Can_0312 */
#  endif
    }
    else
    { /* 2 FIFOs */
      if(hwObjHandle == 96)
      {
        p2Shm = (vuint32*) (ShmRXF0( (CanObjectHandle)0 ));   /* PRQA S 0310 */ /* MD_Can_0310 */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */  /* PRQA S 0312 */ /* MD_Can_0312 */
      }
      else
      {
        p2Shm = (vuint32*) (ShmRXF1( (CanObjectHandle)0 ));   /* PRQA S 0310 */ /* MD_Can_0310 */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */  /* PRQA S 0312 */ /* MD_Can_0312 */
      }
    }
# else
    { /* 2 FIFOs */
      if(hwObjHandle == 32)
      {
        p2Shm = (vuint32*) (ShmRXF0( (CanObjectHandle)0 ));   /* PRQA S 0310 */ /* MD_Can_0310 */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */  /* PRQA S 0312 */ /* MD_Can_0312 */
      }
      else
      {
        p2Shm = (vuint32*) (ShmRXF1( (CanObjectHandle)0 ));   /* PRQA S 0310 */ /* MD_Can_0310 */ /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */  /* PRQA S 0312 */ /* MD_Can_0312 */
      }
    }
# endif
  }

  assertHardware((vuint32)&p2Shm[4] <= (vuint32)Can_GetStopAdrOfShmAdr(canHwChannel), canHwChannel, kCanErrorMcanMessageRAMOverflow); /* PRQA S 0306 */ /* MD_Can_0306_HWaccess_LL */

  /* at this point the mailbox is not initialized therefore the contents are not saved! */
  /* #20 Iterate test patterns */
  for(i = 0x00U; i < 3; i++)
  { /* PRQA S 0303 QAC_Can_0303 */ /* MD_Can_0303_HWaccess */
    p2Shm[0] = CanMemCheckValues32bit[i];  /* T0/R0 */
    p2Shm[1] = CanMemCheckValues32bit[i];  /* T1/R1 */
    p2Shm[2] = CanMemCheckValues32bit[i];  /* Data (3-0) */
    p2Shm[3] = CanMemCheckValues32bit[i];  /* Data (7-4) */
    if( (p2Shm[0] != CanMemCheckValues32bit[i]) ||  /* #30 ID[E] register check   */
        (p2Shm[1] != CanMemCheckValues32bit[i]) ||  /* #40 DLC, FD register check */
        (p2Shm[2] != CanMemCheckValues32bit[i]) ||  /* #50 Data register check    */
        (p2Shm[3] != CanMemCheckValues32bit[i]) )
    /* PRQA  L:QAC_Can_0303 */
    {
      ret_val = kCanTrue; /* Mailbox is corrupt */
      /*no break allowed by QAC*/
    }
  } 
  return(ret_val);
}
/* CODE CATEGORY 4 END */
#endif  /* C_ENABLE_CAN_RAM_CHECK */

#if defined( C_ENABLE_SLEEP_WAKEUP ) 
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanLL_WakeUpHandling
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanLL_WakeUpHandling(CAN_CHANNEL_CANTYPE_ONLY)
{
  CAN_WAKEUP( channel );         /* call always and go to stop !!! */

  #if defined( C_ENABLE_APPLCANWAKEUP_FCT )
  APPL_CAN_WAKEUP( CAN_CHANNEL_CANPARA_ONLY );
  #endif
}
/* CODE CATEGORY 4 END */
#endif /* C_ENABLE_SLEEP_WAKEUP */

#if defined( C_ENABLE_CAN_ECC_INIT_SHM ) /* COV_CAN_FIX_VERSION */
/* **************************************************************************
| NAME:             Can_EccInit
| CALLED BY:        Can_Init()
| PRECONDITIONS:    MCAN clock must be available, Interrupts must be disabled
| INPUT PARAMETERS: none
| RETURN VALUES:    none
| DESCRIPTION:      The internal SRAM features Error Correcting Code (ECC). 
|                   Because these ECC bits can contain random data after the device is turned on, 
|                   all SRAM locations must be initialized before being read by application code. 
|                   Initialization is done by executing 64-bit writes to the entire SRAM block. 
|                   (The value written does not matter at this point.)
************************************************************************** */
/* CODE CATEGORY 1 START */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) Can_EccInit(void)
{
  vuint16  ch, idx;
  vuint32  len;
  vuint32* dst;

  for(ch = 0; ch < kCanNumberOfChannels; ch++)
  {
    dst = (vuint32*) Can_GetStartAdrOfShmAdr(ch);   /* PRQA S 0306 */ /* MD_Can_0306_HWaccess_LL */
    len = (Can_GetStopAdrOfShmAdr(ch) - Can_GetStartAdrOfShmAdr(ch)) >> 2;
    for(idx = 0; idx < len; idx++)
    {
      dst[idx] = 0x00000000u;
    }
  }
}
/* CODE CATEGORY 1 END */
#endif /* C_ENABLE_CAN_ECC_INIT_SHM */

/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanErrorHandlingBusOff
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, vuint8, STATIC_CODE) CanErrorHandlingBusOff(CAN_HW_CHANNEL_CANTYPE_ONLY)
{
  vuint8 ret;
  /* The Bus_Off recovery sequence cannot be shortened by setting or resetting CCCR[INIT.] 
     If the device goes Bus_Off, it will set CCCR[INIT] of its own accord, stopping all bus activities. 
     Once CCCR[INIT] has been cleared by the CPU, the device will then wait for 129 occurrences of Bus Idle 
     (129 x 11 consecutive recessive bits) before resuming normal operation. 
     At the end of the Bus_Off recovery sequence, the Error Management Counters will be reset. 
     During the waiting time after the resetting of CCCR[INIT], each time a sequence of 11 recessive bits has been monitored, 
     a Bit 0 Error code is written to PSR[LEC], enabling the CPU to readily check up whether the CAN bus is stuck at dominant or continuously disturbed 
     and to monitor the Bus_Off recovery sequence. ECR[REC] is used to count these sequences. */
  /* Uncorrected Message RAM bit error detected: BEU sets CCCR[INIT] to '1' to avoid transmission of corrupted data.
     Controlled by Message RAM bit error input signal generated by an optional external ECC logic attached to the Message RAM. */
  /* #10 check error status */
  if( (((Cn->IR & kCanIR_BO)  != 0) && ((Cn->PSR & kCanPSR_BO) != 0))
    || ((Cn->IR & kCanIR_BEU) != 0) 
#if ( CAN_MCAN_REVISION >= 0x0300u ) /* COV_CAN_FIX_VERSION */
    || ((Cn->IR & kCanIR_MRAF) != 0) 
#endif
    )
  { 
    /* #20 BusOff state, Bit Error Uncorrected or Message RAM failure detected */
    { /* BusOff status changed to BusOff OR Bit Error Uncorrected appeared */
      if(Can_GetCanBusOffNotification(canHwChannel) == kCanBusoff)
      { /* already detected */
      }
      else
      { 
        Can_GetCanBusOffNotification(canHwChannel) = kCanBusoff;
      }
    }

#if ( CAN_MCAN_REVISION >= 0x0300u ) /* COV_CAN_FIX_VERSION */
    if(((Cn->IR & kCanIR_MRAF) != 0))
    { /* Message RAM annoyance */
      /* #30 check for Restricted Mode, if so try to get back to normal mode */
      if((Cn->CCCR & kCanCCCR_ASM) != 0) 
      { /* Regained in Restricted Mode, Tx Handler read problem assumed.
         In Restricted Operation Mode the node is able to receive data and remote frames and to give
         acknowledge to valid frames, but it does not send any frames (data, remote, active error or overload). 
         In case of an error or overload condition, it does not send dominant bits but waits for bus idle to resynchronize itself. */
# if ( CAN_BOSCH_ERRATUM_007 == STD_ON )
       /* Effects:
           With the next transmission after leaving Restricted Operation Mode (reset CCCR.ASM), a frame with an 
           unexpected identifier and control field is transmitted which accidentally might be accepted by another receiver.
           Workaround:
           To recover from Restricted Operation Mode proceed as follows:
           1) Cancel all pending transmission requests by writing 0hFFFF FFFF to register TXBCR
           2) Issue a clock stop request by setting bit CCCR.CSR
           3) Wait until the M_CAN sets CCCR.INIT and CCCR.CSA to one
           4) First reset CCCR.CSR
           5) Then reset CCCR.INIT
           6) Wait until CCCR.INIT is read as zero
           7) Issue a second clock stop request by setting bit CCCR.CSR
           8) Wait until the M_CAN sets CCCR.INIT and CCCR.CSA to one
           9) Set CCCR.CCE, reset CCCR.CSR, and reset CCCR.ASM
           10) Restart M_CAN by writing CCCR.INIT = '0'
           11) Configure the CAN operation mode by writing to CCCR.CMR
           12) Request the transmissions cancelled by step one */
        Cn->TXBCR = kCan_ALL_ONE;           /* cancel all */
        Cn->CCCR |= (vuint32)kCanCCCR_CSR;  /* clock stop request */
        /*  After CSR first INIT and then CSA will be set after all pending transfer requests have been completed and the CAN bus reached idle. */
        CanLL_ApplCanTimerStart(kCanLoopSleep);
        while( ((Cn->CCCR & kCanCCCR_CSA) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopSleep)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
        { /* Assure that CSA and thus also INIT has been accepted */ }
        CanLL_ApplCanTimerEnd(kCanLoopSleep);
        Cn->CCCR &= (vuint32)(~kCanCCCR_CSR);     /* reset CSR  */
        Cn->CCCR &= (vuint32)(~kCanCCCR_INIT);    /* reset INIT */
        CanLL_ApplCanTimerStart(kCanLoopInit);
        while( ((Cn->CCCR & kCanCCCR_INIT) != 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
        { /* Assure that INIT has been accepted */ }
        CanLL_ApplCanTimerEnd(kCanLoopInit);
        Cn->CCCR |= (vuint32)kCanCCCR_CSR;  /* 2'nd clock stop request */
        CanLL_ApplCanTimerStart(kCanLoopSleep);
        while( ((Cn->CCCR & kCanCCCR_CSA) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopSleep)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
        { /* Assure that CSA and thus also INIT has been accepted */ }
        CanLL_ApplCanTimerEnd(kCanLoopSleep);
        Cn->CCCR |= (vuint32)kCanCCCR_CCE;        /* configuration change enabled */
        Cn->CCCR &= (vuint32)(~kCanCCCR_CSR);     /* reset CSR  */
        Cn->CCCR &= (vuint32)(~kCanCCCR_ASM);     /* now leave restricted mode  */
        /* Step 10) and 11) is accomplished during start transition, 
           Step 12) has to be done by the application! */
# else
        Cn->CCCR &= ( (~kCanCCCR_ASM) ); /* leave Restricted Mode */
# endif
      }
      else
      { /* Rx Handler filtering or access to Message RAM access problem assumed */
        /* At least one message was discarded (kCanIR_UMD for MCAN < 3.0.0) */
      }
    }
    /* #40 reset flags */
    Cn->IR = (vuint32)(kCanIR_BO | kCanIR_BEU | kCanIR_MRAF); /* reset flags */
#else  /* CAN_MCAN_REVISION >= 0x0300u */
    /* #40 reset flags */
    Cn->IR = (vuint32)(kCanIR_BO | kCanIR_BEU); /* reset flags */
#endif /* CAN_MCAN_REVISION >= 0x0300u */
    ret = kCanTrue;
  }
  else
  {
    ret = kCanFalse;
  }
  return(ret);
} /* CanErrorHandlingBusOff */
/* CODE CATEGORY 4 END */

/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanSetAllFilter
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanSetAllFilter(CAN_CHANNEL_CANTYPE_FIRST CanInitInfoPtrType initInfo)
{
  /* 10 set std id filter */
  # if defined( C_ENABLE_STD_ID ) && (kCanNumberOfStandardFilter > 0)  /* at least one std filter is available */
  CAN_HL_INFO_INIT_PTR(pFS) = &Can_GetCanSIDFE(Can_GetCanSIDFEStartIndex(canHwChannel));
  for(CAN_HL_INFO_INIT_PTR(tmpVal) = 0; CAN_HL_INFO_INIT_PTR(tmpVal) < (Can_GetCanSIDFC_LSSOfCanSIDFC(canHwChannel)); CAN_HL_INFO_INIT_PTR(tmpVal)++)
  { /* copy std filter elements to SHM */
    ShmSIDF(CAN_HL_INFO_INIT_PTR(stdFeCount)).S0 = CAN_HL_INFO_INIT_PTR(pFS)[CAN_HL_INFO_INIT_PTR(tmpVal)]; /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    CAN_HL_INFO_INIT_PTR(stdFeCount)++;
  }
  # endif  /* STD_FILTER */

  /* 10 set ext id filter */
  # if defined(C_ENABLE_EXTENDED_ID) && (kCanNumberOfExtendedFilter > 0)
  for(CAN_HL_INFO_INIT_PTR(tmpVal) = 0; CAN_HL_INFO_INIT_PTR(tmpVal) < (Can_GetCanXIDFC_LSEOfCanXIDFC(canHwChannel)); CAN_HL_INFO_INIT_PTR(tmpVal)++)
  { /* copy ext filter elements to SHM */
    ShmXIDF(CAN_HL_INFO_INIT_PTR(extFeCount)).F0 = Can_GetCanXIDFEEIDFE_0OfCanXIDFE(Can_GetCanXIDFEStartIndex(canHwChannel) + CAN_HL_INFO_INIT_PTR(tmpVal)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    ShmXIDF(CAN_HL_INFO_INIT_PTR(extFeCount)).F1 = Can_GetCanXIDFEEIDFE_1OfCanXIDFE(Can_GetCanXIDFEStartIndex(canHwChannel) + CAN_HL_INFO_INIT_PTR(tmpVal)); /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */
    CAN_HL_INFO_INIT_PTR(extFeCount)++;
  }
  # endif /* EXT_FILTER */
} /* CanSetAllFilter */
/* CODE CATEGORY 4 END */
 
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanSetAllRegister
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanSetAllRegister(CAN_CHANNEL_CANTYPE_FIRST CanInitInfoPtrType initInfo)
{
  CAN_HL_INFO_INIT_PTR(tmpVal) = 0;
  #if defined( C_ENABLE_STD_ID )
  CAN_HL_INFO_INIT_PTR(stdFeCount) = 0;
  #endif
  #if defined(C_ENABLE_EXTENDED_ID)
  CAN_HL_INFO_INIT_PTR(extFeCount) = 0;
  #endif
  
  #if defined( V_ENABLE_USE_DUMMY_STATEMENT )
  # if defined(C_ENABLE_STD_ID)
    CAN_HL_INFO_INIT_PTR(stdFeCount) = CAN_HL_INFO_INIT_PTR(stdFeCount);
  # endif
  # if defined(C_ENABLE_EXTENDED_ID)
    CAN_HL_INFO_INIT_PTR(extFeCount) = CAN_HL_INFO_INIT_PTR(extFeCount);
  # endif
  #endif
  
  /* #10 assure configuration enable mode */
  /* Initialization is started by setting CCCR[INIT]. This does not change any configuration register.
     M_CAN configuration register access is only enabled when CCCR[INIT] and CCCR[CCE] are set (protected write).
     While CCCR[INIT]==1: 
     - message transfer on CAN bus is stopped, 
     - CAN bus Tx output is recessive. */
  
  #if ( CAN_BOSCH_ERRATUM_008 == STD_ON )
  /* When CCCR.INIT is set while the M_CAN is receiving a frame, the next received frame         
     after resetting CCCR.INIT will cause IR.MRAF to be set.
     Effects:
     IR.MRAF is set when the first frame after resetting CCCR.INIT is received although that
     frame is received correctly.
     Workaround:
     1) Issue a clock stop request by setting bit CCCR.CSR
        When clock stop is requested, first CCCR.INIT and then CCCR.CSA will be set 
        after all pending transfer requests have been completed and the CAN bus reached idle.
     2) Wait until the M_CAN sets CCCR.INIT and CCCR.CSA to one
     3) Before resetting CCCR.INIT first reset CCCR.CSR. */
  /*  When CSR is requested, first INIT and then CSA will be set after all pending transfer 
      requests have been completed and the CAN bus reached idle. */
  Cn->CCCR |= kCanCCCR_CSR;
  CanLL_ApplCanTimerStart(kCanLoopClockStop );
  while( ((Cn->CCCR & kCanCCCR_CSA) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopClockStop)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
  { /* Assure that CSA/INIT has been accepted. */ }
  CanLL_ApplCanTimerEnd( kCanLoopClockStop );
  #else
  Cn->CCCR  = kCanCCCR_INIT;
  CanLL_ApplCanTimerStart(kCanLoopInit );
  while( ((Cn->CCCR & kCanCCCR_INIT) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
  { /* Assure that INIT has been accepted. */ }
  CanLL_ApplCanTimerEnd( kCanLoopInit );
  #endif      
  
  #if ( CAN_BOSCH_ERRATUM_010 == STD_ON )
  CanBoschErratum_010(CAN_CHANNEL_CANPARA_ONLY);
  #else
  Cn->CCCR |= kCanCCCR_CCE;
  CanLL_ApplCanTimerStart(kCanLoopInit);
  while( ((Cn->CCCR & kCanCCCR_CCE) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
  { /* Assure that the previous value has been accepted. */ }
  CanLL_ApplCanTimerEnd( kCanLoopInit );
  #endif
  
  /* #20 support additional features via user config file */
  /* >>> Note: no GenTool support, the features below are FFS */
  #if defined (C_ENABLE_CAN_CREL_CHECK)
  /* Read CREL and compare with expectations of the configuration */
  assertHardware((vuint32)((Cn->CREL & 0xFFF00000ul) >> 20) >= CAN_MCAN_REVISION, canHwChannel, kCanErrorMcanRevision);
  #endif
  
  #if defined (C_ENABLE_CAN_TXP_SUPPORT)
  Cn->CCCR |= kCanCCCR_TXP; /* Since rev3:  pause 2 CAN bit times after successful frame transmission before next transmission is started */
  #endif
  
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
  # if defined (C_ENABLE_CAN_PXHD_SUPPORT)
  Cn->CCCR |= kCanCCCR_PXHD; /* Since rev3.1.0:  An FD tolerant receiver shall detect a protocol exception event when it detects 
                                                 the recessive FDF bit of an FD Frame instead of the dominant FDF bit of a Classical Frame.
                                                 In case Protocol Exception Handling is disabled (CCCR.PXHD = 1), the M_CAN will treat a 
                                                 recessive bit as a form error and will respond with an error frame. */
  # endif
  # if defined (C_ENABLE_CAN_EFBI_SUPPORT)
  Cn->CCCR |= kCanCCCR_EFBI; /* Since rev3.1.0:  Two consecutive nominal time quanta with dominant bus state shall be required 
                                                 to detect an edge that causes synchronization when this option is enabled by configuration. */
    
  # endif
  #endif  /* CAN_MCAN_REVISION >= 0x0310u */
  /* <<< Note: no GenTool support, the features above are FFS */

  /* #30 support CAN-FD */
  #if ( CAN_MCAN_REVISION >= 0x0315u ) /* COV_CAN_FIX_VERSION */
  # if ( Can_GetCAN_FD_NISO() == 1)
    Cn->CCCR |= kCanCCCR_NISO; /* Non ISO Operation, do it like Bosch */
  # endif
  #endif
  
  #if defined( C_ENABLE_CAN_FD )
  # if defined( C_ENABLE_CAN_FD_DYN )
  Can_GetNonFdObjectsPendingFlag(canHwChannel) = 0;
  # endif
  if(Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) != CAN_NONE)
  {
    if(Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_FD_RXTX)
    { /* CAN_FD_RXTX */
    # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
      Cn->CCCR |= (vuint32)(kCanCCCR_FDOE | kCanCCCR_BRSE); /* FD operation, BRS enabled */
    # else
      Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* reset CME bits */
      Cn->CCCR |= kCanCCCR_CME_LONG_FAST;           /* enable LONG and FAST */
    # endif
    }
    else
    { /* CAN_FD_RXONLY */
    # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
      Cn->CCCR &= (vuint32)(~(kCanCCCR_FDOE | kCanCCCR_BRSE)); /* reset FD bits */
      Cn->CCCR |= (vuint32)(kCanCCCR_FDOE);                    /* FD operation, BRS disabled */
    # else
      Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* reset CME bits */
      Cn->CCCR |= kCanCCCR_CME_LONG;                /* enable LONG */
    # endif
    }
  }
  else
  {
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
    /* FD operation disabled */
    Cn->CCCR &= (vuint32)(~(kCanCCCR_FDOE | kCanCCCR_BRSE)); /* reset FD bits */
  # else
    Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* enable NORMAL CAN */
  # endif
  }
  #else
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
  /* FD operation disabled */
  Cn->CCCR &= (vuint32)(~(kCanCCCR_FDOE | kCanCCCR_BRSE)); /* reset FD bits */
  # else
  Cn->CCCR &= (vuint32)(~(kCanCCCR_CME_CAN20)); /* enable NORMAL CAN */
  # endif
  #endif

  /* #40 support Rx FullCAN */
  /* Delete all pending interrupt requests */
  Cn->IR       = kCanIR_CLEAR_ALL;
  #if defined( C_ENABLE_RX_FULLCAN_OBJECTS ) 
  Cn->NDATA[0] = kCan_ALL_ONE;
  Cn->NDATA[1] = kCan_ALL_ONE;
  #endif
  
  /* Start value of the Message RAM Watchdog Counter. 
     The RAM Watchdog Counter is clocked by the Host clock. 
     With the reset value of '0' the counter is disabled. */
  #if ( CAN_MCAN_REVISION >= 0x0300u ) /* COV_CAN_FIX_VERSION */
  /* Only with ( CAN_BOSCH_ERRATUM_013 == STD_ON )
     This Errata is not considered by the CAN driver (see "Note" below).
     When the M_CAN wants to store a received frame and the Message RAM does not respond in time, 
     this message cannot be stored completely and is discarded. Interrupt flag IR.MRAF is set. 
     It may happen that the next received message is stored incomplete, then the respective 
     Rx Buffer holds inconsistent data.
     Workaround:
     Configure the RAM Watchdog to the maximum expected Message RAM access delay. 
     In case the Watchdog Interrupt IR.WDI is set discard the frame received after IR.MRAF has been activated.
     Note:
     When the M_CAN has been integrated correctly, this can only occur in case of a Message RAM/Arbiter problem.
     if(IR.MRAF .AND. IR.WDI) then just Acknowledge and proceed for further messages. */
  #endif
  /* Start value of the Message RAM Watchdog Counter. With the reset value of '0' the counter is disabled. 
     A Message RAM access via the M_CAN's Master Interface starts the Watchdog Counter with RWD.WDC. 
     The counter is reloaded with RWD.WDC when the Message RAM signals successful completion. 
     In case there is no response from the Message RAM until the counter has counted down to zero, 
     the counter stops and IR.WDI is set. 
     The RAM Watchdog Counter is clocked by the Host clock. */
  Cn->RWD = kCan_RWD;
  
  #if ( CAN_MCAN_REVISION >= 0x0200u ) /* COV_CAN_FIX_VERSION */
  /* CAN-FD available */
  # if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
  #  if defined( C_ENABLE_CAN_FD ) 
  Cn->FBTP = Can_GetCanFBTP(initInfo->initObject);  /* Fast Bit Timing and Prescaler Register (FBTP) */
  Cn->TDCR = Can_GetCanTDCR(initInfo->initObject);  /* Transmitter Delay Compensation Register (TDCR.[TDCO|TDCF]) */
  #  else
  Cn->FBTP = kCanFBTP_TDC_Disable;        /* Transceiver Delay Compensation disabled */
  Cn->TDCR = kCanTDCR_TDC_Disable;        /* Transceiver Delay Compensation disabled */
  #  endif
  # else  /* MCAN Core Release < 0x0310u */
  #  if defined( C_ENABLE_CAN_FD ) 
  Cn->FBTP = Can_GetCanFBTP(initInfo->initObject);  /* Fast Bit Timing and Prescaler Register (FBTP) */
  #  else
  Cn->FBTP = kCanFBTP_TDC_Disable;        /* Transceiver Delay Compensation disabled */
  #  endif
  # endif  /* CAN_MCAN_REVISION >= 0x0310u */
  #endif  /* CREL() >= 2u */
  
  /* Bit Timing and Prescaler Register (BTP) */
  Cn->BTP = Can_GetCanBTP(initInfo->initObject);
  
  /* TSCC-Timestamp Counter Configuration Register */
  #if ( CAN_MCAN_REVISION >= 0x0200u ) /* COV_CAN_FIX_VERSION */
  # if defined ( C_ENABLE_CAN_FD ) && (kCan_TSCC_TSS > 0)
  #  error ">>> Note: With CAN FD an external counter is required for timestamp generation (TSCC.TSS = "10") <<<"
  # endif
  #endif
  Cn->TSCC = (vuint32)(kCan_TSCC_TCP|kCan_TSCC_TSS); /* '0' = keep the counter quiet - otherwise use (kCan_TSCC_TCP|kCan_TSCC_TSS) */
  /* TSCV-Timestamp Counter Value Register 
     With TSCC[TSS] = '01' the Counter is incremented. The counter value is captured on start of frame (both Rx and Tx).
     A wrap around sets interrupt flag IR[TSW].
     Write access resets the counter to zero. */
  Cn->TSCV = 0x00000000u;
  
  /* TOCC-Timeout Counter Configuration Register */
  /* Note: If CAN FD BRS feature is used then the timeout counter is clocked differently in arbitration and data field. */
#if ( CAN_BOSCH_ERRATUM_012 == STD_ON )
  Cn->TOCC = (vuint32) ((vuint32)(kCan_TOCC_TOP<<16)|kCan_TOCC_TOS|kCan_TOCC_ETOC);
#else
  Cn->TOCC = 0;  /* '0' = keep the counter quiet */
#endif
  /* TOP[15:0]  Timeout Period - Start value of the Timeout Counter (down-counter).
     TOS[29:30] Timeout Select - When operating in Continuous mode, a write to TOCV presets the counter to TOCC[TOP] and continues down-counting. 
                                 00=Continuous operation, 01/10/11=controlled by Tx Event FIFO/by Rx FIFO 0/by Rx FIFO 1
     ETOC[31]   '1' = Enable Timeout Counter */
  /* TOCV-Timeout Counter Value Register
     The Timeout Counter is decremented in multiples of CAN bit times depending on the configuration of TSCC.TCP. 
     When decremented to zero, interrupt flag IR.TOO is set and the Timeout Counter is stopped. 
     Start and reset/restart conditions are configured via TOCC.TOS. */
  Cn->TOCV = 0x00000000u;
  
  /* The counters of the Error Management Logic EML are unchanged. */
  CAN_HL_INFO_INIT_PTR(tmpVal) = Cn->ECR; /* CAN error logging is reset by read access to ECR[CEL] */  /* PRQA S 3198 */ /* MD_Can_3198_LL */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
  #if defined( V_ENABLE_USE_DUMMY_STATEMENT )
  CAN_HL_INFO_INIT_PTR(tmpVal) = CAN_HL_INFO_INIT_PTR(tmpVal); /* dummy assignment avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
  #endif
  
  /* Global settings for Message ID filtering. 
     The GFC controls the filter path for standard and extended messages */
  Cn->GFC    = Can_GetCanGFC(canHwChannel); /* accept/reject non matching and remote (Std/Ext) frames */
  
  /* Acceptance filtering of ext. frames the "Ext-ID AND Mask (XIDAM)" is ANDed with the received Message ID */
  /* There are two possibilities when range filtering is used together with extended frames:
     EFT = '00': The ID of received frames is ANDed with XIDAM before the range filter is applied
     EFT = '11': XIDAM is not used for range filtering.
     Intended for masking of 29-bit IDs in SAE J1939. With the reset value of all bits set to one the mask is not active. */
  Cn->XIDAM  = (Can_GetCanXIDAM(canHwChannel));
  /* Copy Standard and extended message ID filter table to shared message RAM */
  
  #if ( CAN_MCAN_REVISION >= 0x0200u ) /* COV_CAN_FIX_VERSION */
  Cn->RXBC = Can_GetCanRXBC(canHwChannel);  /* Rx Buffer Start Address (RBSA) configures the start address of the Rx Buffers section in the Message RAM */
  # if defined(C_ENABLE_CAN_FD_FULL)
  /* Rx Buffer/FIFO Element Size Configuration (RXESC): number of data bytes for an Rx element, sizes >8 bytes are for CAN FD only.
     RBDS: Rx Buffer Data Field Size = 8,12,16,20,24,32,48,64 byte
     F1DS: Rx FIFO 1 Data Field Size = 8,12,16,20,24,32,48,64 byte
     F0DS: Rx FIFO 0 Data Field Size = 8,12,16,20,24,32,48,64 byte
     Note: In case the data field size of an accepted CAN frame exceeds the data field size configured for the matching Rx element, 
           only the number of bytes as configured by RXESC are stored. The rest of the frame data field is ignored. */
  Cn->RXESC.B.RBDS = (Can_GetRBDSOfShmElementSize(canHwChannel));
  Cn->RXESC.B.F0DS = (Can_GetF0DSOfShmElementSize(canHwChannel));
  Cn->RXESC.B.F1DS = (Can_GetF1DSOfShmElementSize(canHwChannel));
  # else
  Cn->RXESC.R      = 0x00000000u; /* Reset to default value */
  # endif
  #endif
  
  /* #60 support (Multiple) BasicCAN */
  #if defined( C_ENABLE_RX_BASICCAN_OBJECTS )
  /* Rx FIFO 0 Configuration (RXF0C) */
  if(Can_GetRxBasicHandleMaxOfControllerConfig(canHwChannel) > 0)
  {
    Cn->RXF0C.R = Can_GetCanRXF0C(canHwChannel);   /* Using default value kCanRXFnOM_BLOCK */
  }
  else
  { /* PRQA S 3201 */ /* MD_Can_3201 */
    Cn->RXF0C.R = 0x00000000u;
  }
  /* RXF0S-Rx FIFO 0 Status Register (reset with CCCR.INIT) */
  /* RXF0A-Rx FIFO 0 Acknowledge Register (reset with CCCR.INIT)
     After reading a message (or a sequence of messages) the buffer index of the last element read has to be written to F0AI. 
     This sets the Get Index to F0AI + 1 and updates the Fill Level */
  
  # if defined( C_ENABLE_MULTIPLE_BASICCAN )
  /* Rx FIFO 1 Configuration (RXF1C) */
  if(Can_GetRxBasicHandleMaxOfControllerConfig(canHwChannel) > 1)
  {
    Cn->RXF1C.R = Can_GetCanRXF1C(canHwChannel);   /* Using default value kCanRXFnOM_BLOCK */
  }
  else
  { /* PRQA S 3201 */ /* MD_Can_3201 */
    Cn->RXF1C.R = 0x00000000u;
  }
  # else
  Cn->RXF1C.R = 0x00000000u; /* Fifo 1 not supported */
  # endif
  /* RXF1S-Rx FIFO 1 Status Register */
  /* RXF1A-Rx FIFO 1 Acknowledge Register 
     After reading a message (or a sequence of messages) the buffer index of the last element read has to be written to F0AI. 
     This sets the Get Index to F0AI + 1 and updates the Fill Level */
  #else /* C_ENABLE_RX_BASICCAN_OBJECTS */
  Cn->RXF0C.R = 0x00000000u; /* Fifo 0 not supported */
  Cn->RXF1C.R = 0x00000000u; /* Fifo 1 not supported */
  #endif /* C_ENABLE_RX_BASICCAN_OBJECTS */
  
  /* Tx Buffer Configuration (TXBC):
     NOTE: AUTOSAR requires at least three Tx Queue Buffers and support of transmit cancellation */
  Cn->TXBC  = Can_GetCanTXBC(canHwChannel);
  
  /* #70 support Tx side */
  #if( CAN_MCAN_REVISION >= 0x0200u ) /* COV_CAN_FIX_VERSION */
  # if defined( C_ENABLE_CAN_FD_FULL )
  /* Tx Buffer Element Size Configuration (TXESC): number of data bytes for a Tx Buffer element, sizes >8 bytes are for CAN FD only. */
  Cn->TXESC = Can_GetTBDSOfShmElementSize(canHwChannel);
  /*  TBDS: Tx Buffer Data Field Size = 8,12,16,20,24,32,48,64 byte
      Note: In case the data length code DLC of a Tx Buffer element is configured to a value higher than the Tx Buffer data field size TXESC.TBDS, 
      the bytes not defined by the Tx Buffer are transmitted as '0xCC' (padding bytes). */
  # else
  Cn->TXESC = 0x00000000u; /* 8 data bytes */
  # endif
  #endif
  
  /* Tx Event FIFO Configuration (TXEFC) */
  Cn->TXEFC = 0x00000000u; /* No Tx Event Fifo supported */

  /* #80 interrupt control */
  /* Interrupt registers */
  CAN_HL_INFO_INIT_PTR(ie)     = kCanIE_DISABLE_ALL;
  CAN_HL_INFO_INIT_PTR(txbtie) = kCanIE_DISABLE_ALL;
  
  #if !defined(C_ENABLE_RX_POLLING) || defined( C_ENABLE_INDIVIDUAL_POLLING )
  # if defined( C_ENABLE_RX_BASICCAN_OBJECTS )  
  #  if( (!defined( C_ENABLE_RX_BASICCAN_POLLING )) || (defined( C_ENABLE_INDIVIDUAL_POLLING )) )
  if(Can_GetRxBasicHandleMaxOfControllerConfig(canHwChannel) > 0)
  {
  #   if defined( C_ENABLE_INDIVIDUAL_POLLING )
    if(Can_GetCanHwObjIndivPolling(canHwChannel, CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel)) == 0)
  #   endif
    {
      CAN_HL_INFO_INIT_PTR(ie) |= kCanIR_RF0N;  /* use new msg */
    }
  }
  #   if defined( C_ENABLE_MULTIPLE_BASICCAN )
  if(Can_GetRxBasicHandleMaxOfControllerConfig(canHwChannel) > 1)
  {
  #    if defined( C_ENABLE_INDIVIDUAL_POLLING )
    if(Can_GetCanHwObjIndivPolling(canHwChannel, CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel) +1) == 0)
  #    endif
    {
      CAN_HL_INFO_INIT_PTR(ie) |= kCanIR_RF1N;  /* use new msg */
    }
  }
  #   endif
  /* In case a message is received while the corresponding Rx FIFO is full, this message is discarded and interrupt flag IR.RFnL is set.
     Bit 24 RF1LE   Rx FIFO 1 Message Lost Interrupt Enable
     Bit 25 RF1FE   Rx FIFO 1 Full Interrupt Disable
     Bit 26 RF1WE   Rx FIFO 1 Watermark Reached Interrupt Disable
     Bit 27 RF1NE   Rx FIFO 1 New Message Interrupt Enable
     Bit 28 RF0LE   Rx FIFO 0 Message Lost Interrupt Enable
     Bit 29 RF0FE   Rx FIFO 0 Full Interrupt Disable
     Bit 30 RF0WE   Rx FIFO 0 Watermark Reached Interrupt Disable
     Bit 31 RF0NE   Rx FIFO 0 New Message Interrupt Enable */
  #  endif
  # endif   /* C_ENABLE_RX_BASICCAN_OBJECTS */
  
  # if defined( C_ENABLE_RX_FULLCAN_OBJECTS )  
  #  if( (!defined( C_ENABLE_RX_FULLCAN_POLLING )) || (defined( C_ENABLE_INDIVIDUAL_POLLING )) )
  CAN_HL_INFO_INIT_PTR(ie) |= (kCanIR_DRX);  /*    Bit 12 DRX     Message stored to Dedicated Rx Buffer */
  /* After the last word of a matching Rx message has been written to the Message RAM the NDF within NDAT1,2 is set. 
     As long as the NDF is set, the respective Rx Buffer is locked. The NDF has to be reset by the Host.
     While a specific NDF is set the refering Filter Element will not match, causing the acceptance filtering to continue. 
     Subsequent Filter Elements may cause the received message to be stored into 
     - another Rx Buffer, or 
     - an Rx FIFO, or
     - the message may be rejected. */
  #  endif
  # endif /* ( C_ENABLE_RX_FULLCAN_OBJECTS ) */
  #endif  /* (!C_ENABLE_RX_POLLING) || ( C_ENABLE_INDIVIDUAL_POLLING ) */
  
  #if !defined(C_ENABLE_TX_POLLING) || defined( C_ENABLE_INDIVIDUAL_POLLING )
  /* Bit 19 TEFNE   Tx Event FIFO New Entry Interrupt Enable
     Bit 21 TCFE    Transmission Cancellation Finished Interrupt Enable
     Bit 22 TCE     Transmission Completed Interrupt Enable */
  CAN_HL_INFO_INIT_PTR(ie) |= (kCanIR_TC | kCanIR_TCF);
  #endif
  #if !defined(C_ENABLE_ERROR_POLLING)
  CAN_HL_INFO_INIT_PTR(ie) |= (kCanIR_BO | kCanIR_BEU);  /* BusOff, Bit Error Uncorrected */
  #if ( CAN_MCAN_REVISION >= 0x0300u ) /* COV_CAN_FIX_VERSION */
  CAN_HL_INFO_INIT_PTR(ie) |= (kCanIR_MRAF);
  #endif
  /* Bit 0  STEE    Stuff Error Interrupt Enable
     Bit 1  FOEE    Format Error Interrupt Enable
     Bit 2  ACKEE   Acknowledge Error Interrupt Enable
     Bit 3  BEE     Bit Error Interrupt Disable
     Bit 4  CRCEE   CRC Error Interrupt Enable
     Bit 5  WDIE    Watchdog Interrupt Enable
     Bit 6  BOE     Bus_Off Status Interrupt Enable
     Bit 7  EWE     Warning Status Interrupt Enable
     Bit 8  EPE     Error Passive Interrupt Enable
     Bit 9  ELO     Error Logging Overflow Enable
     Bit10  BEU     Bit Error Uncorrected Enable
     Bit11  BEC     Bit Error Corrected Enable
     Bit17  MRAF    Message RAM Access Failure (since MCAN 3.0.0)
     Bit27  PEA     Protocol Error in Arbitration Phase (since MCAN 3.1.0) */
  # if defined( C_ENABLE_RX_BASICCAN_OBJECTS )
  if(Can_GetRxBasicHandleMaxOfControllerConfig(canHwChannel) > 0)
  {
    CAN_HL_INFO_INIT_PTR(ie) |= kCanIR_RF0L;  /* use overrun */
  }
  #  if defined( C_ENABLE_MULTIPLE_BASICCAN )
  if(Can_GetRxBasicHandleMaxOfControllerConfig(canHwChannel) > 1)
  {
    CAN_HL_INFO_INIT_PTR(ie) |= kCanIR_RF1L;  /* use overrun */
  }
  #  endif
  # endif
  #endif

  /* #90 if available keep TTCAN quiet */
  #if defined ( C_ENABLE_TTCAN_AVAILABLE ) /* COV_CAN_FIX_VERSION */
  if(Can_IsIsTTCan(canHwChannel) != 0) /* TTCAN */
  {
    Cn->TTOCF = 0x00000000u;     /* TT Operation Configuration Register:  Event-driven CAN communication, Application Watchdog disabled  */
  }
  #endif
} /* PRQA S 6010,6030,6050 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL */ 
/* CanSetAllRegister */
/* CODE CATEGORY 4 END */
 
#if defined( C_ENABLE_TX_POLLING )
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanLL_if_TxIsObjConfPending
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, vuint8, STATIC_CODE) CanLL_if_TxIsObjConfPending( CAN_CHANNEL_CANTYPE_FIRST vuint32 txBuffer ) 
{
  vuint8 ret;

  ret = kCanTrue; /* assume at least one Tx object confirmation is pending */

  /* #10 check operation */
  if( ((Can_GetCanTXBCR(canHwChannel) & txBuffer) != 0) && ((Cn->TXBCF & txBuffer) != 0) )        /* PRQA S 3673 */ /* MD_Can_3673 */
  { /* #20 cancelation finished matches pending request */
  }
  else if( ((Can_GetCanTXBRP(canHwChannel) & txBuffer) != 0) && ((Cn->TXBTO & txBuffer) != 0) )   /* PRQA S 3673 */ /* MD_Can_3673 */
  { /* #70 confirmation */
  }
  else
  { /* #80 no request pending for this object */
    ret = kCanFalse;
  }
  return(ret);
}/* CanLL_if_TxIsObjConfPending */
/* CODE CATEGORY 4 END */
#endif

/****************************************************************************
| NAME:             CanLL_TxStart
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, Can_ReturnType, STATIC_CODE) CanLL_TxStart( CAN_CHANNEL_CANTYPE_FIRST Can_HwHandleType txObjHandle) 
{
  Can_ReturnType ret = kCanOk;
  vuint32 txBRP = (vuint32)(kCanACTIVE << txObjHandle);

#if ( CAN_MCAN_REVISION < 0x0310u ) /* COV_CAN_FIX_VERSION */
# if defined(C_ENABLE_CAN_FD_DYN)   /* COV_CAN_FIX_VERSION */
  /* #10 check for Normal CAN configuration */
  if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_NONE )
  { /* Normal CAN has to be transmitted */
    if((Cn->CCCR & (kCanCCCR_FDO | kCanCCCR_FDBS)) != 0)
    { /* #20 CAN-FD detected */
#  if ( CAN_BOSCH_ERRATUM_006 == STD_ON )
      if (Can_GetNonFdObjectsPendingFlag(canHwChannel) == 0)
      { /* #30 no other NORMAL CAN transmits pending, switch to Normal CAN */
        Cn->CCCR &= (vuint32)(~kCanCCCR_CMR_CAN20); /* clear request */
        Cn->CCCR |= kCanCCCR_CMR_CAN20;             /* request NORMAL CAN */
        CanLL_ApplCanTimerStart(kCanLoopInit );
        while( ((Cn->CCCR & kCanCCCR_CMR_CAN20) != 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
        { /* Assure that CMR has been accepted:  After change to the requested operation mode the bit field is reset to '00' 
             and the status flags FDBS and FDO are set accordingly */ 
        }
        CanLL_ApplCanTimerEnd( kCanLoopInit );
        Can_GetNonFdObjectsPendingFlag(canHwChannel) |= txBRP; /* Store the non-fd pending information */
      }
      else
      { /* When CCCR.CMR is changed during start of transmission and a 
        switch from CAN FD with/without bit rate switching -> Classic CAN is performed then:
        IR.MRAF is set, the M_CAN switches to Restricted Operation Mode, and the transmission is aborted. 
        Workaround:
        Do not change the CAN operation mode by writing to CCCR.CMR as long as there are pending transmission requests (TXBRP != '0'). */
        /* #40 competing NORMAL CAN detected, switch to Normal CAN not possible */
        ret = kCanFailed;            
      }
#  else
      /* #50 switch to Normal CAN */
      Cn->CCCR &= (vuint32)(~kCanCCCR_CMR_CAN20); /* clear request */
      Cn->CCCR |= kCanCCCR_CMR_CAN20;             /* request NORMAL CAN */
      CanLL_ApplCanTimerStart(kCanLoopInit );
      while( ((Cn->CCCR & kCanCCCR_CMR_CAN20) != 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
      { /* Assure that CMR has been accepted:  After change to the requested operation mode the bit field is reset to '00' 
           and the status flags FDBS and FDO are set accordingly */ 
      }
      CanLL_ApplCanTimerEnd( kCanLoopInit );
#  endif
    }
  }
  else /* (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) != CAN_NONE ) */
  { /* #60 CAN-FD configuration detected */
    if(CanHL_IsFdMessage(PDUINFO_ID)) 
    { /* #70 FD message has to be transmitted */
      if((Cn->CCCR & (kCanCCCR_FDO | kCanCCCR_FDBS)) != 0)
      { /* CAN-FD enabled */
      }
      else
      { /* #80 switch to CAN-FD mode */
        Cn->CCCR &= (vuint32)(~kCanCCCR_CMR_LONG_FAST); /* clear request  */
        Cn->CCCR |= kCanCCCR_CMR_LONG_FAST;             /* request CAN-FD */
        CanLL_ApplCanTimerStart(kCanLoopInit );
        while( ((Cn->CCCR & kCanCCCR_CMR_LONG_FAST) != 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
        { /* Assure that CMR has been accepted:  After change to the requested operation mode the bit field is reset to '00' 
             and the status flags FDBS and FDO are set accordingly */ 
        }
        CanLL_ApplCanTimerEnd( kCanLoopInit );
      }
    }
  }
  if(ret == kCanOk)   /* PRQA S 3355,3358 */ /* MD_Can_13.7,MD_Can_13.7 */
# endif /* C_ENABLE_CAN_FD_DYN */
#endif /* CAN_MCAN_REVISION */
  {
    /* Each Tx Buffer has its own Add Request bit. 
       Writing a '1' will set the corresponding Add Request bit (writing a '0' has no impact). 
       This enables the Host to set transmission requests for multiple Tx Buffers with one write to TXBAR. 
       TXBAR bits are set only for those Tx Buffers configured via TXBC. 
       When no Tx scan is running, the bits are reset immediately, else the bits remain set until the Tx scan process has completed. */
    CAN_MSG_RAM_SYNC();
    Cn->TXBAR |= txBRP;
    /* Each Tx Buffer has its own Transmission Request Pending bit. 
       The bits are set via register TXBAR. The bits are reset after a requested transmission has completed or has been cancelled via register TXBCR.
       TXBRP bits are set only for those Tx Buffers configured via TXBC. 
       After a TXBRP bit has been set, a Tx scan is started to check for the pending Tx request with the highest priority (lowest ID).
       A cancellation request resets the corresponding transmission request pending bit of register TXBRP. 
       In case a transmission has already been started when a cancellation is requested, this is done at the end of the transmission, 
       regardless whether the transmission was successful or not. The cancellation request bits are reset directly after the corresponding TXBRP bit has been reset. */
    if( ((Cn->TXBAR & txBRP) > 0) || ((Cn->TXBRP & txBRP) > 0)  )
    {
      Can_GetCanTXBRP(channel) |= txBRP; 
      ret = kCanOk;
    }
    else
    {
      ret = kCanFailed;
    }
  }
  return(ret);
} /* CanLL_TxStart */

#if defined( C_ENABLE_CANCEL_IN_HW )
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanLL_CancelInHw
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanLL_CancelInHw( CAN_CHANNEL_CANTYPE_FIRST Can_HwHandleType txObjHandle) 
{ /* The TXBCR bits remain set until the corresponding bit of TXBRP is reset. 
     The TXBCF bits are set when the corresponding TXBRP bit is cleared after a cancellation was requested via TXBCR. 
     In case the corresponding TXBRP bit was not set at the point of cancellation, TXBCF is set immediately. */
  vuint32 txBRP;
  txBRP = (vuint32)(kCanACTIVE << txObjHandle);
  /* #10 check transmission state */
  if( ((Cn->TXBAR & txBRP) != 0) || ((Cn->TXBRP & txBRP) != 0) )
  { /* transmission not started yet or still in progress */
    /* #20 request active transmission cancellation */
    Cn->TXBCR = txBRP; /* cancel - if possible */
    Can_GetCanTXBCR(canHwChannel) |= txBRP;
  }
} /* CanLL_CancelInHw */
/* CODE CATEGORY 4 END */
#endif

#if ( CAN_BOSCH_ERRATUM_010 == STD_ON )
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanBoschErratum_010
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanBoschErratum_010( CAN_HW_CHANNEL_CANTYPE_ONLY ) /* PRQA S 3673 */ /* MD_Can_3673 */
{
  /* When CCCR.CCE is set while a Tx scan is in progress, the Tx Handler FSM stops. 
     After CCCR.INIT and CCCR.CCE are reset, the Tx Handler FSM does not execute transmission requests.
     Workaround:
     1) Cancel all pending transmission requests by writing 0hFFFF FFFF to register TXBCR
     2) Issue a clock stop request by setting bit CCCR.CSR
     3) Wait until the M_CAN sets CCCR.INIT and CCCR.CSA to one
     4) First reset CCCR.CSR
     5) Then reset CCCR.INIT
     6) Wait until CCCR.INIT is read as zero
     7) Issue a second clock stop request by setting bit CCCR.CSR
     8) Wait until the M_CAN sets CCCR.INIT and CCCR.CSA to one
     9) Set CCCR.CCE and reset CCCR.CSR */

  if((Cn->PSR & kCanPSR_ACT_TX) == kCanPSR_ACT_TX) /* #10 check operation */
  { /* operating as transmitter */
    Cn->TXBCR = kCan_ALL_ONE; /* #20 cancel pending tx requests */
    Cn->CCCR |= kCanCCCR_CSR; /* #30 issue clock stop request   */

    /* #40 await clock stop acknowledge */
    CanLL_ApplCanTimerStart(kCanLoopClockStop);
    while( ((Cn->CCCR & kCanCCCR_CSA) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopClockStop)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
    { /* Assure that the previous value has been accepted. */ }
    CanLL_ApplCanTimerEnd( kCanLoopClockStop );

    /* #50 return to normal mode */
    Cn->CCCR &= (vuint32)(~kCanCCCR_CSR);
    Cn->CCCR &= (vuint32)(~kCanCCCR_INIT);
    CanLL_ApplCanTimerStart(kCanLoopInit );
    while( ((Cn->CCCR & kCanCCCR_INIT) != 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
    { /* Assure that the previous value written to INIT has been accepted. */ }
    CanLL_ApplCanTimerEnd( kCanLoopInit );

    /* #60 issue 2'nd clock stop request */
    Cn->CCCR |= kCanCCCR_CSR;
    CanLL_ApplCanTimerStart(kCanLoopClockStop );
    while( ((Cn->CCCR & kCanCCCR_CSA) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopClockStop)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
    { /* Assure that the previous value written to CSR has been accepted. */ }
    CanLL_ApplCanTimerEnd( kCanLoopClockStop );

    /* #70 now CCE can be set */
    Cn->CCCR |= kCanCCCR_CCE;
    CanLL_ApplCanTimerStart(kCanLoopInit );
    while( ((Cn->CCCR & kCanCCCR_CCE) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
    { /* Assure that the previous value written to CCE has been accepted. */ }
    CanLL_ApplCanTimerEnd( kCanLoopInit );

    /* #80 reset clock stop request */
    Cn->CCCR &= (vuint32)(~kCanCCCR_CSR);
  }
  else
  { /* #90 CCE can be set immediately */
    Cn->CCCR |= kCanCCCR_CCE;
    CanLL_ApplCanTimerStart(kCanLoopInit);
    while( ((Cn->CCCR & kCanCCCR_CCE) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
    { /* Assure that the previous value has been accepted. */ }
    CanLL_ApplCanTimerEnd( kCanLoopInit );
  }
} /* CanBoschErratum_010 */
/* CODE CATEGORY 4 END */ 
#endif
  
#if ((defined( C_ENABLE_RX_BASICCAN_OBJECTS ) && !defined( C_ENABLE_RX_BASICCAN_POLLING )) || \
     (defined( C_ENABLE_RX_FULLCAN_OBJECTS )  && !defined( C_ENABLE_RX_FULLCAN_POLLING ))  || \
       defined( C_ENABLE_INDIVIDUAL_POLLING ) )        /* ISR necessary; no pure polling configuration*/
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanInterruptRx
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanInterruptRx(CAN_HW_CHANNEL_CANTYPE_ONLY)
{
#if defined ( C_ENABLE_RX_FULLCAN_OBJECTS  )
  vuint32 ndata[2], shiftVal;
  vuint8  ndf, idx, objNumber;
#endif

#if defined(C_ENABLE_RX_HPM)
  if( ((Cn->IR) & kCanIR_HPM ) != 0)
  { /* high prio msg rcvd */
    Cn->IR = (kCanIR_HPM); /* clear */
    /* N/A */
  }
#endif

#if defined( C_ENABLE_RX_FULLCAN_OBJECTS )
# if( (!defined(C_ENABLE_RX_FULLCAN_POLLING)) || (defined(C_ENABLE_INDIVIDUAL_POLLING)) )        /* ISR necessary; no pure polling configuration*/
  /*Rx Buffer Handling
    - Reset interrupt flag IR.DRX
    - Read New Data registers
    - Read messages from Message RAM
    - Reset New Data flags of processed messages */
  if( ((Cn->IR) & kCanIR_DRX ) != 0)
  { /* rcvd FullCAN msg(s) */
    Cn->IR = (kCanIR_DRX);    /* Reset interrupt flag */
    ndata[0] = Cn->NDATA[0];  /* Read New Data registers */
    ndata[1] = Cn->NDATA[1];
    /* After the last word of a matching received message has been written to the Message RAM, the respective New Data flag in register NDAT1,2 is set. 
       As long as the New Data flag is set, the respective Rx Buffer is locked against updates from received matching frames. */
    ndf =  0;
    idx =  0;
    objNumber = 0;
    while((ndata[0] | ndata[1]) > 0)
    {
      shiftVal = (vuint32)(0x00000001u << ndf);
      if((ndata[idx] & shiftVal) != 0)
      {
#  if defined( C_ENABLE_INDIVIDUAL_POLLING )
        if(Can_GetCanHwObjIndivPolling(canHwChannel, (CAN_HL_HW_RX_FULL_STARTINDEX(canHwChannel)) + objNumber) != 0)
        { /* poll this object */
        }
        else
#  endif
        {
          /* While an Rx Buffers NDF is set the belonging ID Filter will not match, causing the acceptance filtering to continue. 
             Following ID Filters may cause the received message to be stored into another Rx Buffer or into an Rx FIFO or the message may be rejected. */
          CanFullCanMsgReceived(CAN_HW_CHANNEL_CANPARA_FIRST ((CAN_HL_HW_RX_FULL_STARTINDEX(canHwChannel)) + objNumber) );
        }
        ndata[idx] &= (vuint32) (~shiftVal);
      }
      objNumber++;
      ndf++;
      if(ndf >= 32)
      {
        ndf = 0;
        idx++;
      }
    } /* endwhile */
  } /* endif Rx FullCAN interrupt */
# endif
#endif

#if defined( C_ENABLE_RX_BASICCAN_OBJECTS ) 
# if( (!defined(C_ENABLE_RX_BASICCAN_POLLING)) || (defined(C_ENABLE_INDIVIDUAL_POLLING)) )        /* ISR necessary; no pure polling configuration*/
  if( ((Cn->IR) & kCanIR_RF0N) != 0)
  { /* rcvd new msg in FIFO 0 */
    Cn->IR = (kCanIR_RF0N); /* clear */
#  if defined( C_ENABLE_INDIVIDUAL_POLLING )
    if(Can_GetCanHwObjIndivPolling(canHwChannel, CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel)) != 0)
    { /* poll this object */
    }
    else
#  endif
    {
      CanLL_ApplCanTimerStart(kCanLoopRxFifo );
      while( (((Cn->RXF0S).B.FnFL) > 0) && (CanLL_ApplCanTimerLoop(kCanLoopRxFifo)) ) /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
      {
        CanBasicCanMsgReceived(CAN_HW_CHANNEL_CANPARA_FIRST (CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel)) );
      }
      CanLL_ApplCanTimerEnd( kCanLoopRxFifo);
    }
  }
#  if defined(C_ENABLE_RX_RFXW)
  else if( ((Cn->IR) & kCanIR_RF0W) != 0)
  { /* FIFO 0 fill level reached watermark */
    Cn->IR = (kCanIR_RF0W); /* clear */
    /* N/A */
  }
#  endif

#  if defined( C_ENABLE_MULTIPLE_BASICCAN )
  if( ((Cn->IR) & kCanIR_RF1N) != 0)
  { /* rcvd new msg in FIFO 1 */
    Cn->IR = (kCanIR_RF1N); /* clear */
#   if defined( C_ENABLE_INDIVIDUAL_POLLING )
    if(Can_GetCanHwObjIndivPolling(canHwChannel, CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel) +1) != 0)
    { /* poll this object */
    }
    else
#   endif
    {
      CanLL_ApplCanTimerStart(kCanLoopRxFifo );
      while( (((Cn->RXF1S).B.FnFL) > 0) && (CanLL_ApplCanTimerLoop(kCanLoopRxFifo)) ) /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
      {
        /* Increment the rxObjHandle. There is an  additional mailbox object for FIFO-1 */
        CanBasicCanMsgReceived(CAN_HW_CHANNEL_CANPARA_FIRST (CAN_HL_HW_RX_BASIC_STARTINDEX(canHwChannel)) +1); 
      }
      CanLL_ApplCanTimerEnd( kCanLoopRxFifo);
    }
  }
#   if defined(C_ENABLE_RX_RFXW)
  else if( ((Cn->IR) & kCanIR_RF1W) != 0)
  { /* FIFO 1 fill level reached watermark */
    Cn->IR = (kCanIR_RF1W); /* clear */
    /* N/A */
  }
#   endif
#  endif /* C_ENABLE_MULTIPLE_BASICCAN */
# endif /* (!C_ENABLE_RX_BASICCAN_POLLING)) || (C_ENABLE_INDIVIDUAL_POLLING) */
#endif /* C_ENABLE_RX_BASICCAN_OBJECTS */

#if defined(C_ENABLE_RX_UMD)
  else if( ((Cn->IR) & (kCanIR_UMD)) != 0)
  { /* discarded unprocessed msg due to filtering still in process */
    Cn->IR = (kCanIR_UMD);
    /* N/A */
  }
#endif
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */  
/* CanInterruptRx */
/* CODE CATEGORY 4 END */
#endif

/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanInterruptErrorHandling
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
#if !defined(C_ENABLE_ERROR_POLLING)
V_DEF_FUNC(CAN_LOCAL_INLINE, vuint8, STATIC_CODE) CanInterruptErrorHandling(CAN_HW_CHANNEL_CANTYPE_ONLY)
{
  vuint8 ret;

# if defined( C_ENABLE_MULTIPLE_BASICCAN )
  if(((Cn->IR & Cn->IE & kCanIR_RF0L) != 0) || ((Cn->IR & Cn->IE & kCanIR_RF1L) != 0))
# else
  if( (Cn->IR & Cn->IE & kCanIR_RF0L) != 0)
# endif
  { /* msg lost due to either FIFO 0/1 full or with size zero */
    CanHL_ErrorHandling(CAN_HW_CHANNEL_CANPARA_ONLY); /* call Interrupt handling with logical channel */
    Cn->IR = (vuint32)(kCanIR_RF0L | kCanIR_RF0F | kCanIR_RF1L | kCanIR_RF1F);    /* clear flag(s) */
  }

  ret = 1; /* do not proceed with further IR Flags evaluation */
  if( (Cn->IR & Cn->IE & kCanIR_BEU) != 0)
  { /* Bit Error Uncorrected */
    CanHL_ErrorHandling(CAN_HW_CHANNEL_CANPARA_ONLY); /* call Interrupt handling with logical channel */
    Cn->IR = (kCanIR_BEU); /* clear flag */
  }
  else if( (Cn->IR & Cn->IE & kCanIR_BO) != 0)
  { /* Bus_Off status changed */
    CanHL_ErrorHandling(CAN_HW_CHANNEL_CANPARA_ONLY); /* call Interrupt handling with logical channel */
    /*  In contrast to Bus_Off neither Warning-/Error- status nor ACK or CRC errors are considered (kCanIR_EW,kCanIR_EP,kCanIR_ACKE, kCanIR_CRCE,) */
    Cn->IR = (kCanIR_BO); /* clear flag */
  }
# if ( CAN_MCAN_REVISION >= 0x0300u ) /* COV_CAN_FIX_VERSION */
  else if( (Cn->IR & Cn->IE & kCanIR_MRAF) != 0)
  { /* Message RAM Access Failure
        The flag is set, when the Rx Handler
        - has not completed acceptance filtering or storage of an accepted message until the arbitration
        field of the following message has been received. In this case acceptance filtering or message
        storage is aborted and the Rx Handler starts processing of the following message.
        - was not able to write a message to the Message RAM. In this case message storage is aborted.
        In both cases the FIFO put index is not updated resp. the New Data flag for a dedicated Rx Buffer
        is not set, a partly stored message is overwritten when the next message is stored to this location.
        
        The flag is also set when the Tx Handler 
        - was not able to read a message from the Message RAM in time. 
        In this case message transmission is aborted. 
        In case of a Tx Handler access failure the M_CAN is switched into Restricted Operation Mode.  */
    CanHL_ErrorHandling(CAN_HW_CHANNEL_CANPARA_ONLY); /* call Interrupt handling with logical channel */
    Cn->IR = (kCanIR_MRAF); /* clear flag */
  } 
# endif /* CAN_MCAN_REVISION */
  else
  {
    ret = 0;  /* PRQA S 2400 */ /* test_MD_Can_2004_14.10 */
  }
  return(ret);
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */
/* CanInterruptErrorHandling */
/* CODE CATEGORY 4 END */
#endif

/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanInterruptTx
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
#if !defined(C_ENABLE_TX_POLLING) || defined( C_ENABLE_INDIVIDUAL_POLLING )
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanInterruptTx(CAN_HW_CHANNEL_CANTYPE_ONLY)
{
  vuint8  index;
  vuint32 bPos;

  if( (Cn->IR & Cn->IE & kCanIR_TCF) != 0)
  { /* Transmission Cancelation finished */
    Cn->IR = (kCanIR_TCF); /* clear */

    bPos = kCanACTIVE;
    index = 0;
    while ( (index < kCanTXBC_NDTB) && (Can_GetCanTXBCR(canHwChannel) > 0) )
    { /* Any cancel request pending */
      if( ((Can_GetCanTXBCR(canHwChannel) & bPos) != 0) && (((Cn->TXBCF) & bPos) != 0) )
      { /* cancelation pending */
# if defined( C_ENABLE_INDIVIDUAL_POLLING )
        if(Can_GetCanHwObjIndivPolling(canHwChannel, index) != 0)
        { /* poll this object */
        }
        else
# endif
        {
          /* A cancellation request resets the corresponding transmission request pending bit of register TXBRP:
              - In case a transmission has already been started when a cancellation is requested, this is done at the end of the transmission, 
                regardless whether the transmission was successful or not. 
                The cancellation request bits are reset directly after the corresponding TXBRP bit has been reset. */
          CanHL_TxConfirmation(CAN_CHANNEL_CANPARA_FIRST index); /* either cancelled or transmitted in spite of cancel request */
        }
      }
      else
      { /* no cancelation pending for this transmit buffer */
      }
      index++;     
      bPos <<= 1;
    } /* end while */
  } /* endif TCF */

  if( (Cn->IR & Cn->IE & kCanIR_TC) != 0)
  { /* Tx Confirmation */
    Cn->IR = (kCanIR_TC); /* clear */
    /* Each Tx Buffer has its own Transmission Occurred bit. 
       The bits are set when the corresponding TXBRP bit is cleared after a successful transmission. 
       The bits are reset when a new transmission is requested by writing a '1' to the corresponding bit of register TXBAR. */
    bPos = kCanACTIVE;
    index = 0;
    while ( (index < kCanTXBC_NDTB) && (Can_GetCanTXBRP(canHwChannel) > 0) )
    { /* at least one transmission is pending */
      if( ((Can_GetCanTXBRP(canHwChannel) & bPos) != 0) && ( ((Cn->TXBTO & bPos) != 0) ) )
      { /* found requested confirmation */
# if defined( C_ENABLE_INDIVIDUAL_POLLING )
        if(Can_GetCanHwObjIndivPolling(canHwChannel, index) != 0)
        { /* poll this object */
        }
        else
# endif
        {
          CanHL_TxConfirmation(CAN_CHANNEL_CANPARA_FIRST index);
        }
      }
      index++;
      bPos <<= 1;
    } /* end while */
  }  /* endif TC */

} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */
/* CanInterruptTx */
/* CODE CATEGORY 4 END */
#endif

#if( CAN_BOSCH_ERRATUM_012 == STD_ON )
/* CODE CATEGORY 4 START */
/****************************************************************************
| NAME:             CanInterruptTimeoutCounter
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanInterruptTimeoutCounter(CAN_HW_CHANNEL_CANTYPE_ONLY)
{
  /* timeout arrived */

  /* The erratum is limited to the case where a receiving M_CAN with PXHD enabled enters Bus Integration state 
     after detection of bits FDF and res both recessive.
     Effects:
     The receiver stops for an unpredictable amount of time.
     To leave Bus Integration state, at least one dominant bit has to be detected by a receiving
     M_CAN to start counting of 11 consecutive recessive bits.
     With Protocol Exception Handling enabled (CCCR.PXHD = '0'):
      - PSR.PXE (Protocol Exception Event) is signalled
      - Operation state changes from Receiver (PSR.ACT = '10') to Integrating (PSR.ACT = '00') at the next sample point.
      Workaround:
       R3.1.0: disable Protocol Exception Event Handling (CCCR.PXHD = '1')
       Other revisions: set and release INIT  */
  /* #10 check for protocol error */
#  if ( CAN_MCAN_REVISION >= 0x0310u ) /* COV_CAN_FIX_VERSION */
  if( ((Cn->CCCR & kCanCCCR_PXHD) == 0) && ((Cn->PSR & kCanPSR_PXE) != 0) && ((Cn->PSR & kCanPSR_ACT) == 0) )
#  elif ( CAN_MCAN_REVISION >= 0x0300u ) /* COV_CAN_FIX_VERSION */
  if( ((Cn->PSR & kCanPSR_BO) == 0) && ((Cn->PSR & kCanPSR_ACT) == 0) )
#  endif /* CAN_MCAN_REVISION */
  { /* PXE and ACT is reset on read.
       Note: Disable Protocol Exception Handling 'CCCR.PXHD = 1' generates an error frame thus we prefer this workaround */
    /* #20 accomplish propagated workaround */
    Cn->CCCR |= kCanCCCR_INIT; /* Setting INIT means the MCAN node is detached from the CAN Bus, the Tx Pin becomes recessive '1'.
                                  During INIT = '1' the MCAN is stopped, all other nodes are not disturbed.) */
    CanLL_ApplCanTimerStart(kCanLoopInit );
    while( ((Cn->CCCR & kCanCCCR_INIT) == 0) && (CanLL_ApplCanTimerLoop(kCanLoopInit)) )   /* PRQA S 3415 */ /* MD_Can_3415_RHsideEffect */
    { /* Assure that INIT has been accepted */ }
    CanLL_ApplCanTimerEnd( kCanLoopInit );
    Cn->CCCR &= (vuint32)(~kCanCCCR_INIT);
  }

  /* #30 keep counter running for further supervision */
  /* further periodical interruption requested due to PSR monitoring */
  Cn->TOCV = 0;        /* When the counter reaches zero IR.TOO is set. In Continuous Mode the counter is immediately restarted at TOCC.TOP.
                          Thus reload counter once more NOW (before clearing the IR) with TOCC[TOP] and continue down counting */
  Cn->IR = kCanIR_TOO; /* clear */
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */
/* CanInterruptTimeoutCounter */
/* CODE CATEGORY 4 END */
#endif

#if ((defined( C_ENABLE_RX_BASICCAN_OBJECTS ) && !defined( C_ENABLE_RX_BASICCAN_POLLING )) || \
     (defined( C_ENABLE_RX_FULLCAN_OBJECTS )  && !defined( C_ENABLE_RX_FULLCAN_POLLING ))  || \
      !defined( C_ENABLE_TX_POLLING )         || \
       defined( C_ENABLE_INDIVIDUAL_POLLING ) || \
      !defined( C_ENABLE_ERROR_POLLING )      || \
      !defined( C_ENABLE_WAKEUP_POLLING ))        /* ISR necessary; no pure polling configuration*/
/* **************************************************************************
| NAME:             CanInterrupt
| CALLED BY:        CanIsr<Name>_<physicalChannelIndex>()
| PRECONDITIONS:
| INPUT PARAMETERS: canHwChannel
| RETURN VALUES:    none
| DESCRIPTION:      Interrupt service functions according to the CAN controller
|                   interrupt structure
|                   - check for the interrupt reason ( interrupt source )
|                   - work appropriate interrupt:
|                     + status/error interrupt (BUSOFF, wakeup, error warning)
|                     + basic can receive
|                     + full can receive
|                     + can transmit
|
|                   If an RX-Interrupt occurs while the CAN controller is in Sleep mode, 
|                   a wakeup has to be generated. 
|
|                   If an TX-Interrupt occurs while the CAN controller is in Sleep mode, 
|                   an assertion has to be called and the interrupt has to be ignored.
|
|                   The name of BrsTimeStrt...() and BrsTimeStop...() can be adapted to 
|                   really used name of the interrupt functions.
|
************************************************************************** */
V_DEF_FUNC(V_NONE, void, CODE) CanInterrupt(CAN_HW_CHANNEL_CANTYPE_ONLY)
{
# if ( CAN_RUNTIME_MEASUREMENT_SUPPORT == STD_ON )
  Rtm_Start(RtmConf_RtmMeasurementPoint_CanInterrupt);
# endif

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
# if !defined ( C_SINGLE_RECEIVE_CHANNEL )
  canHwChannel = canHwChannel; /* PRQA S 3199 */ /* MD_Can_3199_dummy */
# endif
#endif

#if !defined(C_ENABLE_ERROR_POLLING)
  if(CanInterruptErrorHandling(CAN_HW_CHANNEL_CANPARA_ONLY) == 0)
#endif
  {
#if !defined(C_ENABLE_TX_POLLING) || defined( C_ENABLE_INDIVIDUAL_POLLING )
    CanInterruptTx(CAN_HW_CHANNEL_CANPARA_ONLY);
#endif

#if ( CAN_BOSCH_ERRATUM_012 == STD_ON )
  if( (Cn->IR  & Cn->IE & kCanIR_TOO) != 0)
  { /* timeout arrived */
    CanInterruptTimeoutCounter(CAN_HW_CHANNEL_CANPARA_ONLY);
  }
#endif

#if defined( C_ENABLE_RX_BASICCAN_OBJECTS )
# if( (!defined( C_ENABLE_RX_BASICCAN_POLLING )) || (defined( C_ENABLE_INDIVIDUAL_POLLING )) )        /* ISR necessary; no pure polling configuration*/
#  if defined( C_ENABLE_MULTIPLE_BASICCAN )
    if( (Cn->IR & Can_GetCanIntEnable(canHwChannel) & (kCanIR_RF0N | kCanIR_RF1N)) != 0)
#  else
    if( (Cn->IR & Can_GetCanIntEnable(canHwChannel) &  kCanIR_RF0N) != 0)
#  endif
    { /* Rx FIFO(0,1) */
      CanInterruptRx(CAN_HW_CHANNEL_CANPARA_ONLY);     /* call Interrupt handling with logical channel */
    }
# endif
#endif
#if ( (defined( C_ENABLE_RX_FULLCAN_OBJECTS ))  && \
   ((!defined( C_ENABLE_RX_FULLCAN_POLLING )) || (defined( C_ENABLE_INDIVIDUAL_POLLING ))) )          /* ISR necessary; no pure polling configuration*/
    /*Rx Buffer Handling
      - Reset interrupt flag IR.DRX
      - Read New Data registers
      - Read messages from Message RAM
      - Reset New Data flags of processed messages */
    if( (Cn->IR & Can_GetCanIntEnable(canHwChannel) & kCanIR_DRX) != 0)
    { /* rcvd FullCAN msg(s) */
      CanInterruptRx(CAN_HW_CHANNEL_CANPARA_ONLY);     /* call Interrupt handling with logical channel */
    }
#endif
  }

# if ( CAN_RUNTIME_MEASUREMENT_SUPPORT == STD_ON )
  Rtm_Stop(RtmConf_RtmMeasurementPoint_CanInterrupt);
# endif
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */
/* CanInterrupt */
/* CODE CATEGORY 1 END */
#endif

/* KB end CanLL_Functions */

/****************************************************************************
| NAME:             CanHL_TxConfirmation
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
/* explicite not inline (big code + multiple calls) */
V_DEF_FUNC(CAN_STATIC, void, STATIC_CODE) CanHL_TxConfirmation( CAN_HW_CHANNEL_CANTYPE_FIRST CanObjectHandle txObjHandle )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanHookBegin_CanHL_TxConfirmation();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
# if !defined(C_ENABLE_TX_POLLING) /* COV_CAN_TX_POLLING */
  /* #10 Check if parameter controller and txObjHandle is valid (only for Interrupt system, polling do this by caller) */
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_GENDATA_FAILURE */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
  if (((txObjHandle < CAN_HL_HW_TX_STARTINDEX(canHwChannel)) || (txObjHandle >= CAN_HL_HW_TX_STOPINDEX(canHwChannel)))) /* CM_CAN_HL27 */ /* COV_CAN_GENDATA_FAILURE */
  {
    errorId = CAN_E_PARAM_HANDLE;
  }
  else
# endif
#endif
  {
    /* ----- Implementation ----------------------------------------------- */
    CanObjectHandle logTxObjHandle;
    PduIdType tmp_pdu;
#if (CAN_CANCEL_SUPPORT_API == STD_ON)
    uint8_least tmp_state;
#endif
#if defined(CAN_ENABLE_GENERIC_CONFIRMATION_API2)
    Can_ReturnType generic_retval;
#endif
    /* KB begin CanLL_TxMsgConfLocalParameter */
    vuint32 txBRP;
    /* KB end CanLL_TxMsgConfLocalParameter */
#if (defined(CAN_USE_CRITICALSECTION_OVER_CONFIRMATION) && (CAN_TRANSMIT_BUFFER == STD_ON)) || defined(CAN_ENABLE_GENERIC_CONFIRMATION_API2)
    /* #100 EXCLUSIVE_AREA_3 needed to avoid another can_write while interface send out of queue (first send out of queue avoid inversion) or call GenericConfirmation2 (data consistency) */
    Can_EnterCritical(CAN_EXCLUSIVE_AREA_3);
#endif
    logTxObjHandle = CanHL_GetTxHwToLogHandle(CAN_CHANNEL_CANPARA_FIRST (Can_HwHandleType)txObjHandle);
    {
      /* #120 Pre Release HW transmit object (LL) */
      /* KB begin CanLL_TxMsgConfBegin */
      txBRP = (vuint32)(kCanACTIVE << txObjHandle);
      CanNestedGlobalInterruptDisable();
      Can_GetCanTXBRP(canHwChannel)     &= ((vuint32)~txBRP);
      Can_GetCanTXBCR(canHwChannel)     &= ((vuint32)~txBRP);
      #if defined(C_ENABLE_CAN_FD_DYN)
      if (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) != CAN_NONE )
      {
        Can_GetNonFdObjectsPendingFlag(canHwChannel) &= ((vuint32)~txBRP);
        if (Can_GetNonFdObjectsPendingFlag(canHwChannel) == 0)
        { /* no other NORMAL CAN transmits pending */
          /* After change to the requested operation mode the bitfield is reset to '00' and the status flags FDBS and FDO are set accordingly. 
             If the requested CAN operation mode is not enabled, the value written to CMR is retained until overwritten by the next request. */
          Cn->CCCR |= kCanCCCR_CMR_LONG_FAST; /* assume LONG & FAST */
        }
      }
      #endif
      /* KB end CanLL_TxMsgConfBegin */
      /* #130 Remember PDU for confirmation parameter */
      tmp_pdu   = CAN_ACTIVESEND_PDUID(logTxObjHandle);
#if (CAN_CANCEL_SUPPORT_API == STD_ON)
      /* #140 Remember SEND STATE which may be modified due to new transmit call in indication */
      tmp_state = (uint8_least)CAN_ACTIVESEND_STATE(logTxObjHandle);
#endif
#if defined(C_ENABLE_CANCEL_IN_HW) || defined(C_ENABLE_CANCEL_FULLCAN_IN_HW) /* cancel interrupt occur */
      /* #150 If the message was successfully transmitted (without cancellation) (LL): */
      /* KB begin CanLL_TxIsMsgTransmitted */
      /* The  TXBRP bits are reset after transmission completion or in case of a cancellation.
         After a TXBRP bit was set, a Tx scan starts (check for pending request with highest priority (lowest Message ID))
         A cancellation request resets the TXBRP bit. 
      
         In case a transmission has already been started when a cancellation is requested, this is done at the 
         end of the transmission, regardless whether the transmission was successful or not. 
         The cancellation request bits are reset directly after the corresponding TXBRP bit has been reset.
      
         After a cancellation has been requested, a finished cancellation is signalled via TXBCF
         - after successful transmission together with the corresponding TXBTO bit
         - before the transmission has been started at the point of cancellation
         - when the transmission has been aborted due to lost arbitration
         - when an error occurred during frame transmission
         
         In DAR mode all transmissions are automatically cancelled if they are not successful. 
         The corresponding TXBCF bit is set for all unsuccessful transmissions. */
      if((Cn->TXBTO & txBRP) != 0)  /* transmission successful */
      /* KB end CanLL_TxIsMsgTransmitted */
#endif
      { /* #200 Set send state to free to allow next TX out of confirmation or direct (reload queue) */
        /* #210 Notify the application by call Appl_GenericConfirmation() and CanIf_TxConfirmation() */
        /*      - Appl_GenericConfirmation() if configured and mirror mode is active
                and afterwards depend of return value
                - CanIf_TxConfirmation() if generic confirmation return OK, or no generic is used, and TX is not cancelled */
#if defined(CAN_ENABLE_GENERIC_CONFIRMATION_API1)
        CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */
        if (Appl_GenericConfirmation( tmp_pdu ) == CAN_OK)
#elif defined(CAN_ENABLE_GENERIC_CONFIRMATION_API2)
# if defined(C_ENABLE_MIRROR_MODE)
        if (Can_GetMirrorModeState(channel) == CDDMIRROR_INACTIVE)
        { /* MirrorMode is inactive so call the following CanIf_TxConfirmation() */
          CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */
          generic_retval = CAN_OK;
        }
        else
# endif
        { /* #230 For generic confirmation with API2 copy PDU data as parameter for Appl_GenericConfirmation() */
          Can_PduType canPdu;
          tCanTxInfoStruct canTxInfoStruct;
          
          /* KB begin CanLL_TxGetCANDataPtr */
          
          {
          # if defined(C_ENABLE_CAN_FD_FULL)
            V_DEF_VAR(CAN_STATIC, vuint32, VAR_NOINIT) data[16];
            vuint8 i;
          # else
            V_DEF_VAR(CAN_STATIC, vuint32, VAR_NOINIT) data[2];
          # endif
            (canTxInfoStruct.pChipMsgObj) =  (CanChipMsgPtr) &ShmTXB(txObjHandle).T0;   /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 0310 */ /* MD_Can_0310 */ 
            (canTxInfoStruct.pChipData)   =  (CanChipDataPtr)&ShmTXB(txObjHandle).Tn;   /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 0310 */ /* MD_Can_0310 */ 
          # if defined(C_ENABLE_CAN_FD_FULL)
            for(i = 0; i < CanTxActualDLC((&canTxInfoStruct)); i+=4)
            {
              data[(i>>2)] = CanBswap32( ((vuint32)*((vuint32*)&canTxInfoStruct.pChipData[i])) );
            }
          # else
            data[0] = CanBswap32( ((vuint32)*((vuint32*)&canTxInfoStruct.pChipData[0])) );
            data[1] = CanBswap32( ((vuint32)*((vuint32*)&canTxInfoStruct.pChipData[4])) );
          # endif
            (canTxInfoStruct.pChipData)   =  (CanChipDataPtr)&data;   /* PRQA S 0303 */ /* MD_Can_0303_HWaccess */ /* PRQA S 0310 */ /* MD_Can_0310 */ 
          }
          /* KB end CanLL_TxGetCANDataPtr */
          canPdu.sdu = (Can_SduPtrType)canTxInfoStruct.pChipData; /* PRQA S 0312 */ /* MD_Can_0312 */
          canPdu.length = CanTxActualDLC((&canTxInfoStruct));
# if defined(C_ENABLE_EXTENDED_ID)
#  if defined(C_ENABLE_MIXED_ID)
          if ( CanTxActualIdType((&canTxInfoStruct)) == kCanIdTypeStd)
          { /* Mixed ID */
            canPdu.id = (Can_IdType)CanTxActualStdId((&canTxInfoStruct));
          }
          else
#  endif  /* pure Extended ID */
          { /* Extended ID */
            canPdu.id = (Can_IdType)(CanTxActualExtId((&canTxInfoStruct)) | CAN_ID_IDE_MASK);
          }
# else    /* Standard ID */
          canPdu.id = CanTxActualStdId((&canTxInfoStruct));
# endif
          canPdu.swPduHandle = tmp_pdu;
          CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */ /* release after copy data to avoid data inconsistency */
          /* call Appl_GenericConfirmation() and in case of CAN_OK also the following CanIf_TxConfirmation() */
          generic_retval = Appl_GenericConfirmation( (uint8)channel, &canPdu ); /* PRQA S 0312 */ /* MD_Can_0312 */ /* SBSW_CAN_HL32 */
        }
        /* #300 Appl_GenericConfirmation() decide to call Indication */
        if (generic_retval == CAN_OK)
#else /* no generic confirmation */
        CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */
#endif
        {
#if (CAN_CANCEL_SUPPORT_API == STD_ON)
          /* #310 If TX is SW cancelled call CanIf_CancelTxNotification() */
          if (tmp_state == CAN_CANCEL_OBJ_SW)
          {
            CanIf_CancelTxNotification( tmp_pdu, FALSE );
          }
          else
#endif  /* #320 otherwise call CanIf_TxConfirmation() */
          {
            CanIf_TxConfirmation( tmp_pdu ); /* \trace SPEC-1726, SPEC-1571 */
          }
        }
#if (defined(CAN_ENABLE_GENERIC_CONFIRMATION_API1) || defined(CAN_ENABLE_GENERIC_CONFIRMATION_API2)) && (CAN_TRANSMIT_BUFFER == STD_ON)
        /* #350 otherwise no CanIf_TxConfirmation() will be called so call CanIf_CancelTxNotification() just to notify IF to restart sending out of Queue */
        else
        {
# if (CAN_CANCEL_SUPPORT_API == STD_OFF)
#  error "When using Generic Confirmation and Transmit buffer (If) the Cancel-support-api (if) has to be activated"
# else
          CanIf_CancelTxNotification( tmp_pdu, FALSE );
# endif
        }
#endif
      }
#if defined(C_ENABLE_CANCEL_TX_IN_HW) 
      /* #400 otherwise mailbox is cancelled successful */
      else
      {
# if (CAN_CANCEL_SUPPORT_API == STD_ON)
        if (tmp_state == CAN_CANCEL_OBJ_SW)
        { /* #410 free active PDU to allow next TX out of confirmation or direct (reload queue) */
          CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ); /* SBSW_CAN_HL04 */
          /* #420 SW cancellation: just call CanIf_CancelTxNotification() (no interrupt lock used here! - worst case can_write came in between and a unnecessary cancellation appear) */
          CanIf_CancelTxNotification( tmp_pdu, TRUE );
        }
        else
# endif
        {
# if defined(C_ENABLE_CANCEL_IN_HW) /* COV_CAN_CANCEL_IN_HW TX */
          /* always CancelSW when only FullCAN TX is cancelled so never called */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
          /* #440 Check send state is not free now, to secure that ActiveSendId is already set before used */
          if (CAN_ACTIVESEND_STATE(logTxObjHandle) == CAN_FREE_OBJ) /* COV_CAN_HARDWARE_FAILURE */
          {
            errorId = CAN_E_PARAM_HANDLE;
          }
          else
#  endif
          { /* #450 EXCLUSIVE_AREA_3 -> no call to upper layer here */
            Can_EnterCritical(CAN_EXCLUSIVE_AREA_3);
            /* #460 free active PDU to allow next TX out of confirmation or direct (reload queue) */
            CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_FREE_OBJ);  /* SBSW_CAN_HL04 */          
            /* #470 call CanIf_CancelTxConfirmation() to re trigger queue \trace SPEC-1726, SPEC-1725, SPEC-1684, SPEC-1689, SPEC-3932, SPEC-3908 */
#  if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
            CanIf_CancelTxConfirmation( Can_GetActiveSendId(logTxObjHandle).swPduHandle, &Can_GetActiveSendId(logTxObjHandle) ); /* SBSW_CAN_HL25 */
#  else
            CanIf_CancelTxConfirmation( &Can_GetActiveSendId(logTxObjHandle) ); /* SBSW_CAN_HL25 */
#  endif
            Can_LeaveCritical(CAN_EXCLUSIVE_AREA_3);
          }
# endif
        }
      }
#endif
      /* #500 Post release HW transmit object (LL) */
      /* KB begin CanLL_TxMsgConfEnd */
      CanNestedGlobalInterruptRestore();
      /* KB end CanLL_TxMsgConfEnd */
    }

#if (defined(CAN_USE_CRITICALSECTION_OVER_CONFIRMATION) && (CAN_TRANSMIT_BUFFER == STD_ON)) || defined(CAN_ENABLE_GENERIC_CONFIRMATION_API2)
    Can_LeaveCritical(CAN_EXCLUSIVE_AREA_3);
#endif
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
# if !defined(C_ENABLE_TX_POLLING) /* COV_CAN_TX_POLLING */
  if (errorId != CAN_E_NO_ERROR) /* COV_CAN_HARDWARE_FAILURE */
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_TXCNF_ID, errorId);
  }
# endif
#endif
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CanHookEnd_CanHL_TxConfirmation();
} /* PRQA S 6010,6030,6050,6080 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */

#if defined(C_ENABLE_RX_BASICCAN_OBJECTS)
/****************************************************************************
| NAME:             CanBasicCanMsgReceived
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
/* explicite not inline (big code + multiple calls) */
V_DEF_FUNC(CAN_STATIC, void, STATIC_CODE) CanBasicCanMsgReceived( CAN_HW_CHANNEL_CANTYPE_FIRST CanObjectHandle rxObjHandle )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  tCanRxBasicInfoStruct rxBasicInfo;
  CanHookBegin_CanBasicCanMsgReceived();
  errorId = CAN_E_NO_ERROR;
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  rxBasicInfo.Controller = Controller;
# endif
  rxBasicInfo.rxObjHandle = rxObjHandle;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON) && !defined(C_ENABLE_RX_BASICCAN_POLLING)
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  /* #10 Check if parameter controller is in expected limit (already checked in polling task - do it only for interrupt) */
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_GENDATA_FAILURE */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
# endif 
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #25 receive handling begin CanHL_RxBasicMsgReceivedBegin() \trace SPEC-1682, SPEC-1694 */
    if (CanHL_RxBasicMsgReceivedBegin(&rxBasicInfo) == CAN_OK) /* SBSW_CAN_HL26 */ /* COV_CAN_RxBasicMsgReceivedBegin */
    {
# if defined(C_ENABLE_CAN_RAM_CHECK)
      /* -------------------------- RAM check failed --- */
      if ((Can_GetLogStatus(channel) & CAN_DEACTIVATE_CONTROLLER) != CAN_DEACTIVATE_CONTROLLER) /* COV_CAN_HARDWARE_FAILURE */
# endif
      { /* #30 RAM CHECK pass so continue reception */
# if !defined(C_HL_ENABLE_OVERRUN_IN_STATUS) /* COV_CAN_OVERRUN_IN_STATUS */
# endif
        /* \trace SPEC-1346 */
        {
          /* -------------------------- Get DLC and Data Pointer --- */
          /* #60 get ID, DLC and data from HW \trace SPEC-1691, SPEC-1693 */
          rxBasicInfo.rxInfo.localDlc = CAN_DECODE_DLI(CanRxActualDLC((&rxBasicInfo.rxInfo)));
          /* -------------------------- Get ID  &  reject unwanted ID type --- */
# if defined(C_ENABLE_EXTENDED_ID)
#  if defined(C_ENABLE_MIXED_ID)
          if ( CanRxActualIdType((&rxBasicInfo.rxInfo)) == kCanIdTypeStd) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
          { /* mixed - standard ID */
            rxBasicInfo.rxInfo.localId = (Can_IdType)CanRxActualStdId((&rxBasicInfo.rxInfo));
          }
          else
#  endif 
          { /* mixed or pure - extended ID */
            rxBasicInfo.rxInfo.localId = (Can_IdType)(CanRxActualExtId((&rxBasicInfo.rxInfo)) | CAN_ID_IDE_MASK);
          }
          {
# else 
          { /* pure - standard ID */
            rxBasicInfo.rxInfo.localId = CanRxActualStdId((&rxBasicInfo.rxInfo));
# endif
# if defined(C_ENABLE_CAN_FD_USED)
            if ( CanRxActualFdType((&rxBasicInfo.rxInfo)) == kCanFdTypeFd )
            { /* \trace SPEC-60428 */
              rxBasicInfo.rxInfo.localId |= (Can_IdType)CAN_ID_FD_MASK;
            }
            /* DLC is not bigger than expected length (8) for CLASSIC CAN msg (additional to # 145) */
            if ((CanRxActualFdType((&rxBasicInfo.rxInfo)) != kCanFdTypeFd) && (rxBasicInfo.rxInfo.localDlc > 8)) /* ESCAN00084263 */ /* COV_CAN_HARDWARE_FAILURE */
            {
              errorId = CAN_E_PARAM_DLC;
            }
            else
# endif
            /* -------------------------- Search HRH  --- */
            /* #130 search HRH for the given rxObjHandle CanHL_RxBasicMsgReceivedSearch() */
            if (CanHL_RxBasicMsgReceivedSearch(&rxBasicInfo) == CAN_OK) /* PRQA S 2004 */ /* MD_Can_Asr_2004 */ /* SBSW_CAN_HL26 */ /* COV_CAN_GENDATA_FAILURE */
            {
# if (CAN_DEV_ERROR_DETECT == STD_ON)
#  if (!defined(C_ENABLE_RX_BASICCAN_POLLING) || defined(C_ENABLE_INDIVIDUAL_POLLING))
              /* #140 Check HRH is BasicCAN (already checked in polling task - do it only for interrupt) */
              if ( (rxBasicInfo.rxInfo.localHrh < Can_GetRxBasicHandleStart(canHwChannel)) ||
                   (rxBasicInfo.rxInfo.localHrh >= Can_GetRxBasicHandleStop(canHwChannel)) ) /* CM_CAN_HL18 */ /* COV_CAN_GENDATA_FAILURE */
              {
                errorId = CAN_E_PARAM_HANDLE;
              } 
              else
#  endif
# endif
              /* #145 DLC is not bigger than expected length from mailbox (MAX over all BasicCAN msg) */
              if (rxBasicInfo.rxInfo.localDlc > CAN_MAX_DATALEN_OBJ(rxBasicInfo.rxInfo.localHrh)) /* CM_CAN_HL17 */ /* ESCAN00084263 */ /* COV_CAN_HARDWARE_FAILURE */
              {
                errorId = CAN_E_PARAM_DLC;
              }
              else
              {
                /* -------------------------- Notification --- */
                /* #150 RX queue and notification handling CanHL_RxMsgReceivedNotification() */
                errorId = CanHL_RxMsgReceivedNotification(CAN_CHANNEL_CANPARA_FIRST &rxBasicInfo.rxInfo); /* SBSW_CAN_HL26 */
              }
            }
          }
        }
      }
    }
    /* #160 receive handling end CanHL_RxBasicMsgReceivedEnd() */
    CanHL_RxBasicMsgReceivedEnd(&rxBasicInfo); /* SBSW_CAN_HL26 */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR) /* PRQA S 3356,3359 */ /* MD_Can_13.7 */ /* COV_CAN_HARDWARE_FAILURE */
  { /* Throw DET if an error detected before */ /* PRQA S 3201 */ /* MD_Can_3201 */
    Can_CallDetReportError(CAN_RXINDI_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  CanHookEnd_CanBasicCanMsgReceived();
} /* PRQA S 6030,6080 */ /* MD_MSR_STCYC,MD_MSR_STMIF */
#endif /* C_ENABLE_RX_BASICCAN_OBJECTS */

#if defined(C_ENABLE_RX_FULLCAN_OBJECTS)
/****************************************************************************
| NAME:             CanFullCanMsgReceived
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
/* explicite not inline (big code + multiple calls) */
V_DEF_FUNC(CAN_STATIC, void, STATIC_CODE) CanFullCanMsgReceived( CAN_HW_CHANNEL_CANTYPE_FIRST CanObjectHandle rxObjHandle )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  tCanRxFullInfoStruct rxFullInfo;
  CanHookBegin_CanFullCanMsgReceived();
  errorId = CAN_E_NO_ERROR;
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  rxFullInfo.Controller = channel;
# endif
  rxFullInfo.rxObjHandle = rxObjHandle;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
#  if !defined(C_ENABLE_RX_FULLCAN_POLLING) /* COV_CAN_RX_FULLCAN_POLLING */
#   if !defined( C_SINGLE_RECEIVE_CHANNEL )
  /* #10 Check if parameter controller is in expected limit (already checked in polling task - do it only for interrupt) */
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_GENDATA_FAILURE */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#   endif
#  endif
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #25 receive handling begin CanHL_RxFullMsgReceivedBegin() \trace SPEC-1682, SPEC-1694 */
    if (CanHL_RxFullMsgReceivedBegin(&rxFullInfo) == CAN_OK) /* SBSW_CAN_HL27 */ /* COV_CAN_RxFullMsgReceivedBegin */
    {
  /* -------------------------- RAM check failed --- */
# if defined(C_ENABLE_CAN_RAM_CHECK)
      if ((Can_GetLogStatus(channel) & CAN_DEACTIVATE_CONTROLLER) != CAN_DEACTIVATE_CONTROLLER) /* COV_CAN_HARDWARE_FAILURE */
# endif
      { /* #30 RAM CHECK pass so continue reception */
        /* -------------------------- Overrun --- */
# if !defined(C_HL_ENABLE_OVERRUN_IN_STATUS) /* COV_CAN_OVERRUN_IN_STATUS */
# endif
        {
          /* -------------------------- Get DLC and Data Pointer --- */
          /* #60 get ID, DLC and data from HW \trace SPEC-1691, SPEC-1693 */
          rxFullInfo.rxInfo.localDlc = CAN_DECODE_DLI(CanRxActualDLC((&rxFullInfo.rxInfo)));
          /* -------------------------- Get ID  &  reject unwanted ID type --- */
# if defined(C_ENABLE_EXTENDED_ID)
#  if defined(C_ENABLE_MIXED_ID)
          if ( CanRxActualIdType((&rxFullInfo.rxInfo)) == kCanIdTypeStd) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
          { /* mixed - standard ID*/
            rxFullInfo.rxInfo.localId = (Can_IdType)CanRxActualStdId((&rxFullInfo.rxInfo));
          }
          else
#  endif 
          { /* mixed or pure - extended ID */
            rxFullInfo.rxInfo.localId = (Can_IdType)(CanRxActualExtId((&rxFullInfo.rxInfo)) | CAN_ID_IDE_MASK);
          }
          {
# else 
          { /* pure - standard ID */
            rxFullInfo.rxInfo.localId = CanRxActualStdId((&rxFullInfo.rxInfo));
# endif
# if defined(C_ENABLE_CAN_FD_USED)
            if ( CanRxActualFdType((&rxFullInfo.rxInfo)) == kCanFdTypeFd )
            { /* \trace SPEC-60428 */
              rxFullInfo.rxInfo.localId |= (Can_IdType)CAN_ID_FD_MASK;
            }
# endif
            /* -------------------------- Search HRH --- */
            /* #130 search HRH for the given rxObjHandle */
            if (CanHL_RxFullMsgReceivedSearch(&rxFullInfo) == CAN_OK) /* SBSW_CAN_HL27 */ /* COV_CAN_GENDATA_FAILURE */
            {
# if (CAN_DEV_ERROR_DETECT == STD_ON)
#  if (!defined(C_ENABLE_RX_FULLCAN_POLLING) || defined(C_ENABLE_INDIVIDUAL_POLLING)) /* COV_CAN_RX_FULLCAN_POLLING */
              /* #140 Check HRH is FullCAN (already checked in polling task - do it only for interrupt) */
              if ( (rxFullInfo.rxInfo.localHrh < Can_GetRxFullHandleStart(canHwChannel)) ||
                   (rxFullInfo.rxInfo.localHrh >= Can_GetRxFullHandleStop(canHwChannel)) ) /* CM_CAN_HL18 */ /* COV_CAN_GENDATA_FAILURE */
              {
                errorId = CAN_E_PARAM_HANDLE;
              }
              else
#  endif
# endif
              /* #145 DLC is not bigger than expected length from mailbox */
              if (rxFullInfo.rxInfo.localDlc > CAN_MAX_DATALEN_OBJ(rxFullInfo.rxInfo.localHrh)) /* CM_CAN_HL17 */ /* ESCAN00084263 */ /* COV_CAN_HARDWARE_FAILURE */
              {
                errorId = CAN_E_PARAM_DLC;
              }
              else
              {
                /* -------------------------- Notification --- */
                /* #150 RX queue and notification handling CanHL_RxMsgReceivedNotification() */
                errorId = CanHL_RxMsgReceivedNotification(CAN_CHANNEL_CANPARA_FIRST &rxFullInfo.rxInfo); /* SBSW_CAN_HL27 */
              }
            }
          }
        }
      }
    }
    /* #160 receive handling end CanHL_RxFullMsgReceivedEnd() */
    CanHL_RxFullMsgReceivedEnd(&rxFullInfo); /* SBSW_CAN_HL27 */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR) /* PRQA S 3356,3359 */ /* MD_Can_13.7 */ /* COV_CAN_HARDWARE_FAILURE */
  { /* Throw DET if an error detected before */ /* PRQA S 3201 */ /* MD_Can_3201 */
    Can_CallDetReportError(CAN_RXINDI_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  CanHookEnd_CanFullCanMsgReceived();
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif /* C_ENABLE_RX_FULLCAN_OBJECTS */

/****************************************************************************
| NAME:             CanHL_ErrorHandling
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
/* explicite not inline (big code + multiple calls) */
V_DEF_FUNC(CAN_STATIC, void, STATIC_CODE) CanHL_ErrorHandling( CAN_HW_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
# if !defined(C_ENABLE_ERROR_POLLING) /* COV_CAN_ERROR_POLLING */
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  /* #10 Check if parameter controller is in expected limit */
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_GENDATA_FAILURE */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
# endif
#endif
  {
    /* ----- Implementation ----------------------------------------------- */
    /* KB begin CanLL_ErrorHandlingLocalParameter */
    /* KB end CanLL_ErrorHandlingLocalParameter */
    /* #20 Pre Error handling (LL) */
    /* KB begin CanLL_ErrorHandlingBegin */
    /* ***
    If the CAN protocol controller has detected an error condition (e.g. CRC error), the message is 
    discarded with the following impact on the affected Rx Buffer or Rx FIFO:
    Rx Buffer: NDF of matching Rx Buffer is NOT set, but Rx Buffer (partly) overwritten with received data. 
    Rx FIFO:   Put index of FIFO is NOT updated,  but FIFO element (partly) overwritten with received data. 
    
    If the matching Rx FIFO is operated in overwrite mode, the boundary conditions have to be considered
    It might happen that a received message is written to the Message RAM (put index) while the CPU is 
    reading from the Message RAM (get index). 
    In this case inconsistent data may be read from the FIFO element.
    For error type see PSR.LEC respectively PSR.FLEC.
    *** */
    #if ( CAN_MCAN_REVISION >= 0x0300u ) /* COV_CAN_FIX_VERSION */
    # if ( CAN_BOSCH_ERRATUM_011 == STD_ON )
    if((Cn->IR & kCanIR_MRAF) != 0) 
    {  /* IR.MRAF is erroneously set during frame reception while the M_CAN is in Error Passive state and 
          the Receive Error Counter has the value ECR.REC = 127.
          Workaround:
          The Message RAM Access Failure routine needs to check whether ECR.RP = '1' 
          (REC has reached the error passive level of 128) and ECR.REC = 127. 
          In this case reset IR.MRAF, no further action required. */
      if( ((Cn->ECR & kCanECR_RP) != 0) && (((Cn->ECR & kCanECR_REC) >> 8) == 127) )
      {
        Cn->IR = kCanIR_MRAF; /* reset and forget */
      }
    }
    # endif
    #endif
    /* KB end CanLL_ErrorHandlingBegin */
    /* KB begin CanLL_if_BusOffOccured */
        
    if(CanErrorHandlingBusOff(CAN_HW_CHANNEL_CANPARA_ONLY) == kCanTrue)
    {
    /* KB end CanLL_if_BusOffOccured */
      /* #90 EXCLUSIVE_AREA_6 secure mode changes */
      Can_EnterCritical(CAN_EXCLUSIVE_AREA_6);
      /* #100 BUSOFF occur -> ECU Manager restart Controller (no ResetBusOffStart/End needed) */
      Can_SetIsBusOff(channel,TRUE); /* SBSW_CAN_HL08 */ /* attention: platform use this for BUSOFF 128*11 treatment!!! */
      Can_SetLogStatus(channel, Can_GetLogStatus(channel) | CAN_STATUS_BUSOFF); /* SBSW_CAN_HL02 */
#if !defined(CAN_ENABLE_BUSOFF_SUPPORT_API) /* COV_CAN_BUSOFF_SUPPORT_API */
      /* #110 CanResetBusOffStart need when BUSOFF handled by Application */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
      CanResetBusOffStart(channel, Can_GetLastInitObject(channel));
# else
      CanResetBusOffStart(Can_GetLastInitObject(channel));
# endif
#endif
      /* #115 Controller is in STOP mode after CanResetBusOffStart \trace SPEC-1578, SPEC-1664, SPEC-1663, SPEC-3828 */
      /* #120 Status changed to STOP - no more call of STOP from CAN Interface */
      Can_SetLogStatus(channel, (uint8)((Can_GetLogStatus(channel) & CAN_STATUS_MASK_NOMODE) | CAN_STATUS_STOP)); /* SBSW_CAN_HL02 */
      Can_LeaveCritical(CAN_EXCLUSIVE_AREA_6);
      /* #130 notify higher layer by call CanIf_ControllerBusOff() \trace SPEC-1726, SPEC-1578 */
      CanIf_ControllerBusOff((uint8)Can_GetCanToCanIfChannelMapping(channel));
    }
#if defined(C_HL_ENABLE_OVERRUN_IN_STATUS) /* COV_CAN_OVERRUN_IN_STATUS */
    /* #135 check for status register (overrun occur) */
# if defined(C_ENABLE_OVERRUN)
    /* #140 notify BasicCAN overrun DET or Appl_CanOverrun() */
    /* KB begin CanLL_if_RxCanOverrun */
    #  if defined( C_ENABLE_MULTIPLE_BASICCAN )
    if( ((Cn->IR) & (kCanIR_RF0L | kCanIR_RF1L) ) != 0)
    #  else
    if( ((Cn->IR) & (kCanIR_RF0L) ) != 0)
    #  endif
    {
    /* KB end CanLL_if_RxCanOverrun */
#  if (CAN_OVERRUN_NOTIFICATION == CAN_DET)
      errorId = CAN_E_DATALOST; /* \trace SPEC-1686 */
#  else /* CAN_OVERRUN_NOTIFICATION == CAN_APPL */
      Appl_CanOverrun( (uint8)channel );
#  endif
    }
# endif
#endif
    /* #200 Post Error handling (LL) */
    /* KB begin CanLL_ErrorHandlingEnd */
    #if defined( C_ENABLE_MULTIPLE_BASICCAN )
    if( ((Cn->IR) & (kCanIR_RF0L | kCanIR_RF1L) ) != 0)
    #else
    if( ((Cn->IR) & (kCanIR_RF0L) ) != 0)
    #endif
    { /* also clear the full flags */
      Cn->IR = (vuint32)(kCanIR_RF0L | kCanIR_RF0F | kCanIR_RF1L | kCanIR_RF1F);
    }
    /* KB end CanLL_ErrorHandlingEnd */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR) /* COV_CAN_GENDATA_FAILURE */ /* PRQA S 3356,3359 */ /* MD_Can_13.7,MD_Can_13.7 */
  { /* Throw DET if an error detected before */ /* PRQA S 3201 */ /* MD_Can_3201 */
    Can_CallDetReportError(CAN_CTRBUSOFF_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
} /* PRQA S 6010,6030,6050 */ /* MD_MSR_STPTH,MD_MSR_STCYC,MD_MSR_STCAL */

# if defined(C_ENABLE_SLEEP_WAKEUP)

/****************************************************************************
| NAME:             CanHL_WakeUpHandling
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(CAN_LOCAL_INLINE, void, STATIC_CODE) CanHL_WakeUpHandling( CAN_CHANNEL_CANTYPE_ONLY )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
#   if !defined(C_ENABLE_WAKEUP_POLLING) /* COV_CAN_WAKEUP_POLLING */
#    if !defined( C_SINGLE_RECEIVE_CHANNEL )
  /* #10 Check if parameter controller is in expected limit */
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_HARDWARE_FAILURE */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#    endif
#   endif
#  endif
  {
    /* ----- Implementation ----------------------------------------------- */
    /* #20 WAKEUP already done in "CanLL_WakeUpHandling" via macro "CanWakeUp" -> (void)Can_SetControllerMode(controller, CAN_T_WAKEUP); */
    /* #30 ESCAN00032401: don't change to STOP mode here this will be done later from inside CANIf after Transceiver is switched to normal mode to avoid blocking while Transceiver produce dominant disturbance */
    Can_SetIsWakeup(channel,TRUE); /* SBSW_CAN_HL09 */
    /* #40 call EcuM_CheckWakeup()  - old API: CanIf_SetWakeupEvent();  \trace SPEC-1725, SPEC-1659, SPEC-1697, SPEC-3966, SPEC-3971 */
    EcuM_CheckWakeup(Can_GetWakeupSourceRef(channel));
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR) /* COV_CAN_HARDWARE_FAILURE */ /* PRQA S 3356,3359 */ /* MD_Can_13.7,MD_Can_13.7 */
  { /* Throw DET if an error detected before */ /* PRQA S 3201 */ /* MD_Can_3201 */
    Can_CallDetReportError(CAN_CTRWAKEUP_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
}
# endif

#define CAN_STOP_SEC_STATIC_CODE  /*---------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*-------------------------------------------------------------------------*/

#define CAN_START_SEC_CODE  /*---------------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#if (CAN_VERSION_INFO_API == STD_ON) /* \trace SPEC-1716, SPEC-3964 */
/****************************************************************************
| NAME:             Can_GetVersionInfo
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_GetVersionInfo( Can_VersionInfoPtrType VersionInfo )
{ /* \trace SPEC-1723, SPEC-3881 */
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanHookBegin_Can_GetVersionInfo();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter versionInfo is an illegal null pointer \trace SPEC-1721, SPEC-3847 */
  if (VersionInfo == NULL_PTR)
  {
    errorId = CAN_E_PARAM_POINTER;
  }
  else
# endif
  { /* #100 copy version info to given pointer parameter \trace SPEC-1717, SPEC-3845 */
    /* ----- Implementation ----------------------------------------------- */
    VersionInfo->vendorID   = CAN_VENDOR_ID; /* SBSW_CAN_HL10 */
    VersionInfo->moduleID   = CAN_MODULE_ID; /* SBSW_CAN_HL10 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
    VersionInfo->instanceID = CAN_INSTANCE_ID; /* SBSW_CAN_HL10 */
# endif
    VersionInfo->sw_major_version = (uint8)CAN_SW_MAJOR_VERSION; /* SBSW_CAN_HL10 */
    VersionInfo->sw_minor_version = (uint8)CAN_SW_MINOR_VERSION; /* SBSW_CAN_HL10 */
    VersionInfo->sw_patch_version = (uint8)CAN_SW_PATCH_VERSION; /* SBSW_CAN_HL10 */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_VERSION_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  CanHookEnd_Can_GetVersionInfo();
}
#endif

/****************************************************************************
| NAME:             Can_InitMemory
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_InitMemory( void )
{ /* BR:011 */
  /* ----- Local Variables ---------------------------------------------- */
  /* ----- Implementation ----------------------------------------------- */
  CanHookBegin_Can_InitMemory();
  /* #10 mark driver as uninitialized \trace SPEC-1650, SPEC-3787 */
  canConfigInitFlag = CAN_STATUS_UNINIT;
#if defined(CAN_ENABLE_USE_INIT_ROOT_POINTER)
  /* #20 reset global configuration pointer */
  Can_ConfigDataPtr = NULL_PTR;
#endif /* otherwise constant pointer is used */
  /* #30 HW reset memory */
  /* KB begin CanLL_InitMemoryPowerOn */
  /* only needed by ASR (and only if variables have to be initialized but will not be done in normal init) */
  /* KB end CanLL_InitMemoryPowerOn */
#if(CAN_DEV_ERROR_DETECT == STD_OFF)
  CAN_DUMMY_STATEMENT(canConfigInitFlag); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_InitMemory();
}

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
/****************************************************************************
| NAME:             Can_InitStruct
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_InitStruct( uint8 Controller, uint8 Index )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanHookBegin_Can_InitStruct();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON) && !defined( C_SINGLE_RECEIVE_CHANNEL )
  /* #10 Check if parameter controller and index are valid */
  if ( (channel >= kCanNumberOfChannels) || (Index >= (uint8)(Can_GetInitObjectStartIndex(channel+1) - Can_GetInitObjectStartIndex(channel))) ) /* CM_CAN_HL01 */
  {
    errorId = CAN_E_PARAM_HANDLE;
  }
  else
# endif
  { /* #20 set initialization structure that should be used for next controller initialization. */
    /* ----- Implementation ----------------------------------------------- */
    Can_SetLastInitObject(channel, (uint8)(Can_GetInitObjectStartIndex(channel) + Index)); /* SBSW_CAN_HL11 */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON) && !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_INIT_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
# if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  CanHookEnd_Can_InitStruct();
}
#endif

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if ((CAN_CHANGE_BAUDRATE_API == STD_ON) || (CAN_SET_BAUDRATE_API == STD_OFF))
/****************************************************************************
| NAME:             Can_ChangeBaudrate
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_ChangeBaudrate( uint8 Controller, V_DEF_CONST(V_NONE, uint16, APPL_CONST) Baudrate )
{ /* \trace SPEC-20314 */
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal;
  uint8 errorId;
  CanHookBegin_Can_ChangeBaudrate();
  retVal = E_NOT_OK;
  errorId = CAN_E_PARAM_BAUDRATE; /* explicit default as Issue - remove when baud rate fit */ /* \trace SPEC-20321 */
  
  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT and STOP \trace SPEC-20338 */
  if ( canConfigInitFlag == CAN_STATUS_UNINIT )
  {
    errorId = CAN_E_UNINIT;
  }
  else
#   if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if ( channel >= kCanNumberOfChannels ) /* CM_CAN_HL01 */
  { /* \trace SPEC-20331 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#   endif
  if ( (Can_GetLogStatus(channel) & CAN_STATUS_STOP) != CAN_STATUS_STOP )
  { /* \trace SPEC-1655, SPEC-20312 */
    errorId = CAN_E_TRANSITION;
  }
  else
#  endif
  {
    /* ----- Implementation ----------------------------------------------- */
    uint8_least baudrateIndex;
    for (baudrateIndex = Can_GetInitObjectStartIndex(channel); baudrateIndex < Can_GetInitObjectStartIndex(channel+1); baudrateIndex++)
    { /* #30 search for baud rate configuration */
      if (Can_GetInitObjectBaudrate(baudrateIndex) == Baudrate)
      { /* #40 set baud rate and reinitialize controller to activate baud rate \trace SPEC-1669 */
        Can_SetLastInitObject(channel, (uint8)baudrateIndex); /* SBSW_CAN_HL11 */
        Can_InitController((uint8)channel, NULL_PTR); /* SBSW_CAN_HL03 */
        CanHookEnd_Can_ChangeBaudrate();
        retVal = E_OK;
        errorId = CAN_E_NO_ERROR;
        break;
      }
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_CHANGE_BR_ID, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
#  if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
  CanHookEnd_Can_ChangeBaudrate();
  return retVal;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
# endif

# if (CAN_CHANGE_BAUDRATE_API == STD_ON)
/****************************************************************************
| NAME:             Can_CheckBaudrate
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_CheckBaudrate( uint8 Controller, V_DEF_CONST(V_NONE, uint16, APPL_CONST) Baudrate )
{ /* \trace SPEC-20311 */
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retVal;
  uint8 errorId;
  CanHookBegin_Can_CheckBaudrate();
  retVal = E_NOT_OK;
  errorId = CAN_E_PARAM_BAUDRATE; /* \trace SPEC-20317 */
  
  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT \trace SPEC-20328, SPEC-20318 */
  if ( canConfigInitFlag == CAN_STATUS_UNINIT )
  {
    errorId = CAN_E_UNINIT;
  }
  else
#   if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if ( channel >= kCanNumberOfChannels )
  { /* \trace SPEC-20335 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#   endif
#  endif
  {
    /* ----- Implementation ----------------------------------------------- */
    uint8_least baudrateIndex;
    for (baudrateIndex = Can_GetInitObjectStartIndex(channel); baudrateIndex < Can_GetInitObjectStartIndex(channel+1); baudrateIndex++)
    { /* #30 search for baud rate configuration */
      if (Can_GetInitObjectBaudrate(baudrateIndex) == Baudrate)
      { /* #40 requested baud rate is set - return OK */
        CanHookEnd_Can_CheckBaudrate();
        retVal = E_OK;
        errorId = CAN_E_NO_ERROR;
        break;
      }
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_CHECK_BR_ID, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
#  if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
  CanHookEnd_Can_CheckBaudrate();
  return retVal;
}
# endif /* CAN_CHANGE_BAUDRATE_API == STD_ON */

# if (CAN_SET_BAUDRATE_API == STD_ON)
/****************************************************************************
| NAME:             Can_SetBaudrate
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_SetBaudrate( uint8 Controller, uint16 BaudRateConfigID )
{ /* \trace SPEC-50605 */
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retval;
  uint8 errorId;
  CanHookBegin_Can_SetBaudrate();
  retval = E_NOT_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT and STOP \trace SPEC-50595 */
  if ( canConfigInitFlag == CAN_STATUS_UNINIT )
  {
    errorId = CAN_E_UNINIT;
  }
  else
#   if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if ( channel >= kCanNumberOfChannels ) /* CM_CAN_HL01 */
  { /* \trace SPEC-50587 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#   endif
  if ( (Can_GetLogStatus(channel) & CAN_STATUS_STOP) != CAN_STATUS_STOP )
  { /* \trace SPEC-50584 */
    errorId = CAN_E_TRANSITION;
  }
  else
  if ( BaudRateConfigID >= (uint16)(Can_GetInitObjectStartIndex(channel+1) - Can_GetInitObjectStartIndex(channel)) )
  { /* \trace SPEC-50625, SPEC-50563 */
    errorId = CAN_E_PARAM_BAUDRATE;
  }
  else
#  endif
  { /* #50 set baud rate and reinitialize controller to activate baud rate */
    /* ----- Implementation ----------------------------------------------- */
    Can_SetLastInitObject(channel, (uint8)(Can_GetInitObjectStartIndex(channel) + BaudRateConfigID)); /* SBSW_CAN_HL11 */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
    Can_SetIsHardwareCanceled(channel,FALSE); /* SBSW_CAN_HL14 */
#  endif
    Can_InitController((uint8)channel, NULL_PTR); /* SBSW_CAN_HL03 */ /* \trace SPEC-50576, SPEC-50563, SPEC-50617 */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
    /* #60 check if hardware cancellation appear while mode change, so for the baud rate set is not successful \trace SPEC-60434 */
    if ( !Can_IsIsHardwareCanceled(channel) ) /* COV_CAN_HARDWARE_FAILURE */
#  endif
    {
      retval = E_OK;
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_SET_BR_ID, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
#  if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
  CanHookEnd_Can_SetBaudrate();
  return retval;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
# endif /* CAN_SET_BAUDRATE_API == STD_ON */
#endif /* only MSR403 */

/****************************************************************************
| NAME:             Can_Init
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_Init( Can_ConfigPtrType ConfigPtr )
{ /* \trace SPEC-1587, SPEC-3850, SPEC-3794, SPEC-1708, SPEC-3826, SPEC-3861 */
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CAN_CHANNEL_CANTYPE_LOCAL
  CanHookBegin_Can_Init();
  errorId = CAN_E_NO_ERROR;
#if defined(CAN_ENABLE_USE_INIT_ROOT_POINTER) /* PostBuild (load+sel) */
  Can_ConfigDataPtr = ConfigPtr; /* \trace SPEC-1394, SPEC-1575 */
# if defined(CAN_ENABLE_USE_ECUM_BSW_ERROR_HOOK) /* PostBuildLoadable */
  if (ConfigPtr == NULL_PTR)
  { /* #10 EcuM null pointer configuration check and notification */
    EcuM_BswErrorHook((uint16) CAN_MODULE_ID, (uint8) ECUM_BSWERROR_NULLPTR);
  }
  else
#  if (CAN_FINALMAGICNUMBER == STD_ON) /* COV_CAN_FINALMAGICNUMBER */
  if (Can_GetFinalMagicNumber() != 20510u) /* COV_CAN_GENDATA_FAILURE */
  { /* #20 EcuM wrong magic number check and notification */
    EcuM_BswErrorHook((uint16) CAN_MODULE_ID, (uint8) ECUM_BSWERROR_MAGICNUMBER);
  }
  else
#  endif
# else
  
  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #30 Check if all parameters are valid \trace SPEC-1724, SPEC-3789 */
  if (ConfigPtr == NULL_PTR)
  {
    errorId = CAN_E_PARAM_POINTER;
  }
  else
  /* #40 Check wrong magic number */
#   if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
  /* not CAN_ENABLE_USE_ECUM_BSW_ERROR_HOOK --> not PostBuildLoadable so CAN_FINALMAGICNUMBER is always false */
#   else
  if (Can_GetFinalMagicNumber() != 0xaffeu) /* COV_CAN_GENDATA_FAILURE */
  {
    errorId = CAN_E_PARAM_POINTER;
  }
  else
#   endif
#  endif
# endif
#else
  CAN_DUMMY_STATEMENT(ConfigPtr); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199, 3198 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# if defined(V_ENABLE_USE_DUMMY_STATEMENT) /* COV_CAN_COMPATIBILITY */
  ConfigPtr = Can_ConfigDataPtr; /* dummy assignment avoid compiler warning */ /* PRQA S 3199 */ /* MD_Can_3199_dummy */
# endif
#endif /* CAN_ENABLE_USE_INIT_ROOT_POINTER */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
  if (canConfigInitFlag != CAN_STATUS_UNINIT)
  {
    /* #60 Check already initialized -> 2nd call is not allowed \trace SPEC-1712, SPEC-3934, SPEC-3767, SPEC-1722 */
    errorId = CAN_E_TRANSITION;
  }
  else
#endif
  if (  ( Can_GetBaseDll_GeneratorVersion()     != (uint16)CAN_GEN_BASE_VERSION ) ||  /* PRQA S 3325 */ /* MD_Can_3325 */
        ( Can_GetPlatformDll_GeneratorVersion() != (uint16)CAN_GEN_Mpc5700McanAsr_VERSION ) ) /* COV_CAN_GENDATA_FAILURE */
  { /* PRQA S 3201 */ /* MD_Can_3201 */
    /* #70 EcuM generator and compatibility version check and notification */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_USE_ECUM_BSW_ERROR_HOOK) /* not for PostBuildSelectable */
    EcuM_BswErrorHook((uint16) CAN_MODULE_ID, (uint8) ECUM_BSWERROR_COMPATIBILITYVERSION);
# else
    errorId = CAN_E_UNINIT;
# endif
#else
    EcuM_GeneratorCompatibilityError((uint16) CAN_MODULE_ID, (uint8) 0);
#endif
  }
  else
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if (CAN_CRC_CHECK == STD_ON)
  if (( Can_GetPrecompileCRC() != CAN_PRECOMPILE_CRC ) || ( Can_GetLinktimeCRC() != Can_LinktimeCRC )) /* COV_CAN_GENDATA_FAILURE */
  { /* #80 EcuM generator pre compile and link time CRC check and notification */
    EcuM_GeneratorCompatibilityError((uint16) CAN_MODULE_ID, (uint8) 0u);
  }
  else
# endif
#endif
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if CAN_DEV_ERROR_DETECT == STD_ON
#  if defined(CAN_ENABLE_SELECTABLE_PB) 
  if (
       (kCanNumberOfChannels > kCanNumberOfMaxUsedControllers) ||
       (kCanNumberOfUsedHwChannels > kCanNumberOfMaxUsedControllers) )
  { /* #90 check consistency of generated Data (real channel amount against maximum value) */
    errorId = CAN_E_PARAM_POINTER;
  }
  else
#  endif
# endif
#endif
  {
    /* ----- Implementation ----------------------------------------------- */
    {
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
      Can_SignedHwHandleType tmp_objcnt;
      tmp_objcnt=0;
#endif
      canRxTaskActive = CAN_FREE;
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
#   if (CAN_HW_LOOP_SUPPORT_API == STD_OFF) && (CAN_DEV_ERROR_DETECT == STD_ON)
      canApiContext = CAN_INIT_ID;
#   endif
#  endif
# endif
#endif
#if defined(C_ENABLE_RX_QUEUE)
      /* #110 delete RxQueue (all channels) */
      Can_GetRxQueueInfo().WriteIndex = 0;  /* CM_CAN_HL24 */
      Can_GetRxQueueInfo().ReadIndex = 0;
      Can_GetRxQueueInfo().Count = 0;
#endif
      /* #120 Set active Identity */
#if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
      CanSetActiveIdentity(Can_GetIdentitySelected());
#endif
      /* #130 HW specific power on (LL) */
      CanHL_InitPowerOn();

      canConfigInitFlag = CAN_STATUS_INIT; /* \trace SPEC-1648, SPEC-3962, SPEC-3943 */ /* before Controller initialization begin */
#if !defined( C_SINGLE_RECEIVE_CHANNEL )
      for (channel = 0; channel < kCanNumberOfChannels; channel++)
#endif
      { /* #132 for each controller */
#if (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON) /* one controller optimization is always off */
        if ( Can_GetCanIfChannelId(channel) == kCanChannelNotUsed ) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
        { /* #134 not for inactive controller */
          continue; /* PRQA S 0770 */ /* MD_Can_0770 */
        }
#endif
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
# if defined(C_ENABLE_GEN_HW_START_STOP_IDX) /* generated as tool-table */
        /* #136 calculate logical TX handle (HW to log - done here because of multiple ECU) */
#  if defined(CAN_HL_HW_LAYOUT_TXBASIC_FIRST) /* COV_CAN_HW_LAYOUT_TXBASIC_FIRST */
        CAN_HL_TX_OFFSET_HW_TO_LOG(channel) = (Can_SignedHwHandleType)(tmp_objcnt - (Can_SignedHwHandleType)Can_GetTxBasicHwStart(CAN_HL_HW_CHANNEL_STARTINDEX(channel)));
#  else
        CAN_HL_TX_OFFSET_HW_TO_LOG(channel) = (Can_SignedHwHandleType)(tmp_objcnt - (Can_SignedHwHandleType)Can_GetTxFullHwStart(CAN_HL_HW_CHANNEL_STARTINDEX(channel)));
#  endif
# endif
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
        tmp_objcnt = (Can_SignedHwHandleType)(tmp_objcnt + (Can_SignedHwHandleType)Can_GetTxFullHandleMax(CAN_HL_HW_CHANNEL_STARTINDEX(channel)) + (Can_SignedHwHandleType)(Can_GetTxBasicHandleMax(CAN_HL_HW_CHANNEL_STARTINDEX(channel)) * CAN_MULTIPLEXED_TX_MAX));
# endif
#endif
        /* #140 initialize start up values for each controllers */
        Can_SetLogStatus(channel, CAN_STATUS_UNINIT); /* SBSW_CAN_HL02 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
        Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
#endif
#if defined(C_ENABLE_CAN_RAM_CHECK)
        Can_SetStatusReq(channel, Can_GetStatusReq(channel) | CAN_REQ_RAM_CHECK); /* execute power on RamCheck*/ /* SBSW_CAN_HL01 */
#endif
        Can_SetIsBusOff(channel,FALSE);  /* start up: no BUSOFF */ /* SBSW_CAN_HL08 */
        Can_SetLastInitObject(channel, (uint8)(Can_GetInitObjectStartIndex(channel))); /* SBSW_CAN_HL11 */
#if defined(C_ENABLE_SLEEP_WAKEUP)
        Can_SetIsWakeup(channel,FALSE); /* SBSW_CAN_HL09 */
#endif
        Can_SetCanInterruptCounter(channel, 0); /* SBSW_CAN_HL12 */
#if defined(C_ENABLE_PARTIAL_NETWORK) /* COV_CAN_PARTIAL_NETWORK */
        Can_SetTimeoutCall(channel,TRUE); /* SBSW_CAN_HL13 */
#endif
#if defined(C_ENABLE_MIRROR_MODE)
        Can_SetMirrorModeState(channel, CDDMIRROR_INACTIVE); /* SBSW_CAN_HL20 */
#endif
        /* #155 HW channel specific power on */
        CanHL_InitPowerOnChannelSpecific(CAN_CHANNEL_CANPARA_ONLY);

        /* #160 set baud rate and initialize all CAN controllers \trace SPEC-1587, SPEC-1656, SPEC-3981 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
        Can_InitController((uint8)channel, &Can_GetControllerBaudrateConfig(0));      /* use always first initStruct */ /* SBSW_CAN_HL03 */
#elif defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
        Can_SetLogStatus(channel, Can_GetLogStatus(channel) | CAN_STATUS_STOP); /* set to STOP mode before set baud rate to avoid DET */ /* SBSW_CAN_HL02 */
# if (CAN_SET_BAUDRATE_API == STD_ON)
        (void)Can_SetBaudrate( (uint8)channel, Can_GetCanControllerDefaultBaudrateIdx(CAN_HL_HW_CHANNEL_STARTINDEX(channel)));
# else
        (void)Can_ChangeBaudrate( (uint8)channel, Can_GetCanControllerDefaultBaudrate(CAN_HL_HW_CHANNEL_STARTINDEX(channel))); /* \trace SPEC-15127 */
# endif
#else
# if !defined(CAN_USE_VECTOR_IF) 
        /* #170 call Can_InitController() - For Vector ASR3 this will be done within Can Interface */
        Can_InitController((uint8)channel, NULL_PTR); /* SBSW_CAN_HL03 */
# endif
#endif
#if defined(C_ENABLE_CAN_RAM_CHECK)
        Can_SetStatusReq(channel, Can_GetStatusReq(channel) & (uint8)(~(CAN_REQ_RAM_CHECK))); /* deactivate RamCheck - finished */ /* SBSW_CAN_HL01 */ /* PRQA S 0277 */ /* MD_Can_0277_negation */ 
#endif
      }
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_INIT_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_Init();
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_InitController
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
V_DEF_FUNC(V_NONE, void, CODE) Can_InitController( uint8 Controller, Can_ControllerConfigPtrType ControllerConfigPtr )
#elif defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
V_DEF_FUNC(V_NONE, void, CODE) Can_InitController( uint8 Controller, Can_ControllerBaudrateConfigPtrType Config )
#elif  defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
V_DEF_FUNC(V_NONE, void, CODE) Can_InitController( uint8 Controller, Can_ControllerConfigPtrType ControllerConfigPtr )
#endif
{ /* \trace SPEC-1719, SPEC-1589, SPEC-1346, SPEC-1565, SPEC-3883 */
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanHookBegin_Can_InitController();
  errorId = CAN_E_NO_ERROR; /* PRQA S 3198 */ /* MD_MSR_14.2 */
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller and ControllerConfigPtr is valid and state is INIT \trace SPEC-3962 */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* \trace SPEC-1718, SPEC-3797 */
    errorId = CAN_E_UNINIT;
  }
  else
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  { /* \trace SPEC-1713, SPEC-3821 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# endif
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
  if (Config == NULL_PTR)
  { /* \trace SPEC-1711, SPEC-3774 */
    errorId = CAN_E_PARAM_POINTER;
  }
  else
# endif
# if (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
  if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
  { /* \trace SPEC-1713 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# endif
#endif
#if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
  /* #50 Check controller is in active ECU - otherwise nothing to do here */
  if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) != (cantVIdentityMsk)0 )  /* PRQA S 2004 */ /* MD_Can_Asr_2004 */ /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
#endif
  {
    /* ----- Implementation ----------------------------------------------- */
    tCanInitInfoStruct initInfo;
    /* #100 initialization controller states and initialization objects --- */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
    Can_SetLastInitObject(channel, (uint8)((uint8)Can_GetInitObjectStartIndex(channel) + (uint8)*Config)); /* SBSW_CAN_HL11 */
#endif
    initInfo.initObject = Can_GetLastInitObject(channel);
#if !defined( C_SINGLE_RECEIVE_CHANNEL )
    initInfo.Controller = channel;
#endif
    initInfo.isChCorrupt = kCanFalse;
    /* #110 clean up status (do not activate communication and let SLEEP and initialization to detect ram-check request) */
#if defined(C_ENABLE_CAN_RAM_CHECK) 
    if ((Can_GetStatusReq(channel) & CAN_REQ_RAM_CHECK) == CAN_REQ_RAM_CHECK)
    { /* #112 standard RAM check will be performed so delete old status CAN_DEACTIVATE_CONTROLLER */
      Can_SetLogStatus(channel, Can_GetLogStatus(channel) & CAN_STATUS_INIT);  /* SBSW_CAN_HL02 */
    }
    else
#endif
    { /* #114 extended RAM check may be performed so delete old status except CAN_DEACTIVATE_CONTROLLER */
      Can_SetLogStatus(channel, Can_GetLogStatus(channel) & (uint8)(CAN_DEACTIVATE_CONTROLLER | CAN_STATUS_INIT));  /* SBSW_CAN_HL02 */
    }
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
#   if (CAN_HW_LOOP_SUPPORT_API == STD_OFF) && (CAN_DEV_ERROR_DETECT == STD_ON)
    canApiContext = CAN_INITCTR_ID;
#   endif
#  endif
# endif
#endif
    { /* #125 begin initialization CanHL_InitBegin() */
      {
        errorId = CanHL_InitBegin(&initInfo); /* SBSW_CAN_HL31 */ /* PRQA S 3198 */ /* MD_MSR_14.2 */
      }
      {
#if defined(C_ENABLE_TX_FULLCAN_OBJECTS)
        /* #140 do TX FullCAN initialization CanHL_InitTxFullCAN()*/
        CAN_IS_NO_ERROR(errorId)
        { /* do it only when no error occur before */
          errorId = CanHL_InitTxFullCAN(&initInfo); /* SBSW_CAN_HL31 */ /* PRQA S 3198 */ /* MD_MSR_14.2 */
        }
#endif
        /* #150 do TX BasicCAN initialization CanHL_InitTxBasicCAN() */
        CAN_IS_NO_ERROR(errorId)
        { /* do it only when no error occur before */
          errorId = CanHL_InitTxBasicCAN(&initInfo); /* SBSW_CAN_HL31 */ /* PRQA S 3198 */ /* MD_MSR_14.2 */
        }
      } /* Common CAN:  TX only on first hwChannel */
#if defined(C_ENABLE_RX_FULLCAN_OBJECTS)
      /* #170 do RX FullCAN initialization CanHL_InitRxFullCAN() */
      CAN_IS_NO_ERROR(errorId)
      { /* do it only when no error occur before */
        errorId = CanHL_InitRxFullCAN(&initInfo); /* SBSW_CAN_HL31 */ /* PRQA S 3198 */ /* MD_MSR_14.2 */
      }
#endif
#if defined(C_ENABLE_RX_BASICCAN_OBJECTS)
      /* #180 do RX BasicCAN initialization CanHL_InitRxBasicCAN() */
      CAN_IS_NO_ERROR(errorId)
      { /* do it only when no error occur before */
        errorId = CanHL_InitRxBasicCAN(&initInfo); /* SBSW_CAN_HL31 */ /* PRQA S 3198 */ /* MD_MSR_14.2 */
      }
#endif
      /* #190 end initialization CanHL_InitEnd_InitMode() */
      CAN_IS_NO_ERROR(errorId)
      { /* do it only when no error occur before */
        errorId = CanHL_InitEnd_InitMode(&initInfo); /* SBSW_CAN_HL31 */ /* PRQA S 3198 */ /* MD_MSR_14.2 */
      }
#if defined(C_ENABLE_CAN_RAM_CHECK)
      if ((Can_GetStatusReq(channel) & CAN_REQ_RAM_CHECK) == CAN_REQ_RAM_CHECK)
      { 
        if( (Can_GetLogStatus(channel) & CAN_DEACTIVATE_CONTROLLER) == CAN_DEACTIVATE_CONTROLLER ) /* COV_CAN_RAM_CHECK_NO_STIMULATION */
        { /* #210 standard RAM check issue occur - call Appl_CanRamCheckFailed() */
          if (Appl_CanRamCheckFailed((uint8)channel) != CAN_DEACTIVATE_CONTROLLER)
          { /* #220 let the application decide if communication stay disabled as set by RAM check or not */
            Can_SetLogStatus(channel, Can_GetLogStatus(channel) & (uint8)(~(CAN_DEACTIVATE_CONTROLLER))); /* Application decide to activate communication in case RAM_CHECK failed */  /* PRQA S 0277 */ /* MD_Can_0277_negation */ /* SBSW_CAN_HL02 */
          }
        }
        CAN_RAM_CHECK_FINISHED_CTP(channel)
      }
#endif
      {
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
        /* #250 BUSOFF, WAKEUP and Re-initialization lead direct to STOP mode, otherwise it is only a re-initialization with transition afterwards. */
        if ( (Can_GetStatusReq(channel) & CAN_REQ_INIT_NO_STOP) != CAN_REQ_INIT_NO_STOP ) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
        { /* #260 no more polling or notification, BUSOFF, WAKEUP notified before otherwise Re-initialization only allowed in STOP mode */
          Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
#endif
          /* #270 Switch to STOP mode CanHL_InitEnd_StopMode() */
          CAN_IS_NO_ERROR(errorId)
          { /* do it only when no error occur before */
            errorId = CanHL_InitEnd_StopMode(&initInfo); /* SBSW_CAN_HL31 */ /* PRQA S 3198 */ /* MD_MSR_14.2 */
          }
          Can_SetLogStatus(channel, Can_GetLogStatus(channel) | CAN_STATUS_STOP);  /* \trace SPEC-1657, SPEC-1647 set STOP */ /* SBSW_CAN_HL02 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
        }
#endif
      }
    } /* end of loop over all HW channels */
    { /* #280 set controller init flag when no issue occure before */
      Can_SetLogStatus(channel, Can_GetLogStatus(channel) | (CAN_STATUS_INIT)); /* SBSW_CAN_HL02 */
    }
#if defined(C_ENABLE_SLEEP_WAKEUP)
    if (Can_IsIsWakeup(channel)) /* \trace SPEC-15124 */ /* COV_CAN_HARDWARE_FAILURE */
    { /* #290 notify EcuM in case controller WAKEUP while initialization (LL: check before) \trace SPEC-15124 */
      Can_SetIsWakeup(channel,FALSE); /* SBSW_CAN_HL09 */
      EcuM_SetWakeupEvent(Can_GetWakeupSourceRef(channel));
    }
#endif
  } /* controller active in multiple ECU configuration */

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_INITCTR_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
#if !defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
  CAN_DUMMY_STATEMENT(ControllerConfigPtr); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
#if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_InitController();
} /* PRQA S 6010,6050,6030,6080 */ /* MD_Can_Asr_STPTH,MD_MSR_STCAL,MD_MSR_STCYC,MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_SetControllerMode
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, Can_ReturnType, CODE) Can_SetControllerMode( uint8 Controller, Can_StateTransitionType Transition )
{ /* \trace SPEC-1715, SPEC-3894 */
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  Can_ReturnType retval;
  CanHookBegin_Can_SetControllerMode();
  retval = CAN_NOT_OK;  /* \trace SPEC-1407 */ /* For successful transition it is set explicit to CAN_OK */
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller and Transition is valid and state is INIT */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* \trace SPEC-1731, SPEC-3962, SPEC-3872 */
    errorId = CAN_E_UNINIT;
  }
  else
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  { /* \trace SPEC-1732 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# endif
# if (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
  if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
  { 
    errorId = CAN_E_PARAM_CONTROLLER; /* \trace SPEC3874 */
  }
  else
# endif
#endif
#if defined(C_ENABLE_MULTI_ECU_CONFIG) /* move below channel DET check */ /* COV_CAN_MULTI_ECU_CONFIG */
  /* #40 Check controller is in active ECU */
  if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) != (cantVIdentityMsk)0 ) /* PRQA S 2004 */ /* MD_Can_Asr_2004 */ /* only for active Controller */
#endif
  { /* #50 second level check (modes and transitions) only valid when controller is in active ECU and valid */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
    if (!CanHL_IsControllerInit(channel))
    { /* #60 Check controller is initialized \trace SPEC-3962 */
      errorId = CAN_E_UNINIT;
    }
    else
    if ((!CanHL_IsStop(channel)) && (Transition == CAN_T_START))
    { /* #70 Check No-STOP -> START-Req is invalid \trace SPEC-1637, SPEC-3862 */ /* ESCAN00073272 */
      errorId = CAN_E_TRANSITION;
    }
    else
# if (CAN_TRANSITION_CHECK == STD_ON)  /* ASR4 extension SREQ00000291 */ /* COV_CAN_USER_CONFIG */
    if ( ((!CanHL_IsStop(channel)) && (!CanHL_IsSleep(channel)) && ((Transition == CAN_T_WAKEUP) || (Transition == CAN_T_SLEEP))) ||
         ((CanHL_IsSleep(channel)) && (Transition == CAN_T_STOP)) )
    { /* #80 Check  No STOP Nor SLEEP -> SLEEP-Req   or   No SLEEP Nor STOP --> WAKEUP-Req   is invalid \trace SPEC-1654, SPEC-1649 */
      /* #90 Check  No START Nor STOP -> STOP-Req is invalid \trace SPEC-1652 */
      errorId = CAN_E_TRANSITION; /* trace SPEC-3862 */
    }
    else
# endif
#endif
    {
      /* ----- Implementation ----------------------------------------------- */
      /* #100 EXCLUSIVE_AREA_6 avoid nesting mode changes (e.g. same API, initialization or BUSOFF) */
      Can_EnterCritical(CAN_EXCLUSIVE_AREA_6);
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
#   if (CAN_HW_LOOP_SUPPORT_API == STD_OFF) && (CAN_DEV_ERROR_DETECT == STD_ON)
      canApiContext = CAN_SETCTR_ID;
#   endif
#  endif
# endif
#endif
#if defined(C_ENABLE_HW_LOOP_TIMER)
      /* #110 reset flag that may be set in LL-initialization or HW-loop as notification that transition failed */
      Can_SetIsHardwareCanceled(channel,FALSE); /* SBSW_CAN_HL14 */
#endif
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
      /* #120 mark ongoing state change (suppress STOP transition in Can_InitController()) */ 
      Can_SetStatusReq(channel, Can_GetStatusReq(channel) | CAN_REQ_INIT_NO_STOP); /* SBSW_CAN_HL01 */
#endif
      /* #125 HW begin mode transition */
      /* KB begin CanLL_SetControllerModeBegin */
      /* KB end CanLL_SetControllerModeBegin */
      switch(Transition)
      {
      case CAN_T_START: /* \trace SPEC-3963 */
        /* #200 Handle --- START --- transition */
#if !defined(CAN_ENABLE_BUSOFF_SUPPORT_API) /* COV_CAN_BUSOFF_SUPPORT_API */
        if (Can_IsIsBusOff(channel)) /* COV_CAN_BUSOFF_NOT_IN_ALL_CONFIG */
        { /* #210 BUSOFF occur so finish BUSOFF handling with CanResetBusOffEnd() */
          /* #215 reset BUSOFF flag - do this before CanResetBusOffEnd() so LL may overwrite it */
          Can_SetIsBusOff(channel,FALSE); /* SBSW_CAN_HL08 */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
          CanResetBusOffEnd(channel, Can_GetLastInitObject(channel));
# else
          CanResetBusOffEnd(Can_GetLastInitObject(channel));
# endif
          /* #220 do not re-initialization after BUSOFF, this will be done while CanResetBusOffStart/End() */
        }
        else
#endif
        {
#if (CAN_REINIT_START == STD_ON) 
          /* #230 additional to STOP-transition-re initialization a Can_InitController() may be activated for START transition \trace SPEC-1730 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40) /* COV_CAN_MICROSAR_VERSION */
          Can_InitController((uint8)channel, &Can_GetControllerBaudrateConfig(((uint8)(Can_GetLastInitObject(channel) - (uint8)Can_GetInitObjectStartIndex(channel)) & 0x03u))); /* SBSW_CAN_HL03 */
# else
          Can_InitController((uint8)channel, NULL_PTR); /* SBSW_CAN_HL03 */
# endif
#endif
#if defined(C_ENABLE_HW_LOOP_TIMER)
          if ( Can_IsIsHardwareCanceled(channel) ) /* COV_CAN_HARDWARE_FAILURE */
          { /* #240 break START transition when Can_InitContoller() failed */
            break;  /* PRQA S 3333 */ /* MD_Can_14.6 */
          }
#endif
        }
        /* #250 START: set request and wait limited time and notify upper Layer - CanHL_StartTransition() */
        retval = CanHL_StartTransition(CAN_CHANNEL_CANPARA_ONLY);
        break;

      case CAN_T_STOP: /* \trace SPEC-3976 */
        /* #300 Handle --- STOP --- transition */
        /* #310 ESCAN00032291: no call of STOP inside BUSOFF (avoid blocking) */
        if (!Can_IsIsBusOff(channel)) /* COV_CAN_HARDWARE_FAILURE */
        {
          /* #320 STOP: set request and wait limited time and notify upper Layer - CanHL_StopTransition() */
          retval = CanHL_StopTransition(CAN_CHANNEL_CANPARA_ONLY);
        } /* IsBusOff */
        break;

      case CAN_T_WAKEUP:
        /* #400 Handle --- WAKEUP --- transition */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* does not appear in MSR30 (synchronous) */ /* COV_CAN_MICROSAR_VERSION */
        if ( Can_GetStatusReq(channel) == CAN_REQ_SLEEP ) /* COV_CAN_TESTSTIMULATION */
        { /* #410 ASR4: Check WAKEUP not allowed while transition to SLEEP \trace SPEC-1573, SPEC-1402, SPEC-1403, SPEC-3848, SPEC-1660 */
          errorId = CAN_E_TRANSITION;
        }
        else
#endif
        {
          /* #420 WAKEUP: set request and wait limited time and notify upper Layer (RAM-check, Emulated SLEEP handling) - CanHL_WakeupTransition() */
          retval = CanHL_WakeupTransition(CAN_CHANNEL_CANPARA_ONLY);
        }
        break;

      case CAN_T_SLEEP: /* \trace SPEC-3926, SPEC-1639 */
        /* #500 Handle --- SLEEP --- transition */
        /* #510 SLEEP: set request and wait limited time and notify upper Layer (Emulated SLEEP handling) - CanHL_SleepTransition() */
        retval = CanHL_SleepTransition(CAN_CHANNEL_CANPARA_ONLY);
        break; /* CAN_T_SLEEP */

      default: /* PRQA S 2018 */ /* MD_Can_Asr_2018 */
        /* #600 check unknown transition, return NOT_OK \trace SPEC-1573, SPEC-1402, SPEC-1403 */
        errorId = CAN_E_TRANSITION; /* \trace SPEC-1733, SPEC-1407 */
        break;
      } /* switch */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
      /* #700 remove mark ongoing state change (suppress STOP transition in Can_InitController()) */ 
      Can_SetStatusReq(channel, Can_GetStatusReq(channel) & (uint8)(~(CAN_REQ_INIT_NO_STOP))); /* PRQA S 0277 */ /* MD_Can_0277_negation */ /* SBSW_CAN_HL01 */
#endif
#if defined(C_ENABLE_HW_LOOP_TIMER)
      if ( Can_IsIsHardwareCanceled(channel) ) /* COV_CAN_HARDWARE_FAILURE */
      { /* #705 while mode change a hardware cancellation appear and there for the mode change is not successful */
        Can_SetIsHardwareCanceled(channel,FALSE); /* SBSW_CAN_HL14 */
        /* \trace SPEC-1573, SPEC-1402, SPEC-1403 */
        errorId = CAN_E_TRANSITION;
        retval = CAN_NOT_OK; /* \trace SPEC-3782, SPEC-3769 */
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
        /* #710 ASR4: no more status polling - request failed */ 
        Can_SetStatusReq(channel, CAN_REQ_NONE); /* SBSW_CAN_HL01 */
# endif
      }
#endif
      Can_LeaveCritical(CAN_EXCLUSIVE_AREA_6);
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_SETCTR_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
#if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_SetControllerMode();
  return retval;
} /* PRQA S 6030,6050,6080 */ /* MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_DisableControllerInterrupts
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_DisableControllerInterrupts( uint8 Controller )
{ /* \trace SPEC-1746, SPEC-3886 */
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanHookBegin_Can_DisableControllerInterrupts();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* \trace SPEC-1750, SPEC-3880, SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  { /* \trace SPEC-1742, SPEC-3860 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# endif
# if defined(C_ENABLE_MULTI_ECU_CONFIG) /* move below channel DET check */ /* COV_CAN_MULTI_ECU_CONFIG */
  if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
  { /* #30 Check controller is in active ECU */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
  if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# endif
  if (!CanHL_IsControllerInit(channel))
  { /* #40 Check controller is initialized \trace SPEC-1750, SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#endif
  { /* ----- Implementation ----------------------------------------------- */
    /* #100 EXCLUSIVE_AREA_1 secure interrupt lock handling */
    Can_EnterCritical(CAN_EXCLUSIVE_AREA_1);
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
#   if (CAN_HW_LOOP_SUPPORT_API == STD_OFF) && (CAN_DEV_ERROR_DETECT == STD_ON)
    canApiContext = CAN_DIINT_ID;
#   endif
#  endif
# endif
#endif
    if (Can_GetCanInterruptCounter(channel) == 0)
    { /* #110 Disable only when not disabled before (count nesting) \trace SPEC-1735, SPEC-1745, SPEC-3783 */
#if (CAN_INTLOCK == CAN_DRIVER) || (CAN_INTLOCK == CAN_BOTH) /* COV_CAN_LOCK_ISR_BY_APPL */
      { /* #120 Disable CAN interrupt for each HW channel */
        CanLL_CanInterruptDisable(canHwChannel, &Can_GetCanInterruptOldStatus(canHwChannel)); /* SBSW_CAN_HL16 */
      }
#endif
#if (CAN_INTLOCK == CAN_APPL) || (CAN_INTLOCK == CAN_BOTH) /* COV_CAN_LOCK_ISR_BY_APPL */
      /* #130 Let application Disable CAN interrupt ApplCanInterruptDisable() */
      ApplCanInterruptDisable((uint8)channel);
#endif
    }
    Can_SetCanInterruptCounter(channel, Can_GetCanInterruptCounter(channel)+1); /* \trace SPEC-1748, SPEC-3875, SPEC-3876 */ /* SBSW_CAN_HL12 */
    Can_LeaveCritical(CAN_EXCLUSIVE_AREA_1);
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_DIINT_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
#if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_DisableControllerInterrupts();
} /* PRQA S 6050,6080 */ /* MD_MSR_STCAL,MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_EnableControllerInterrupts
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_EnableControllerInterrupts( uint8 Controller )
{ /* \trace SPEC-1741, SPEC-3891 */
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanHookBegin_Can_EnableControllerInterrupts();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* \trace SPEC-3866, SPEC-1739, SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  { /* \trace SPEC-1752, SPEC-3858 */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# endif
# if defined(C_ENABLE_MULTI_ECU_CONFIG) /* move below channel DET check */ /* COV_CAN_MULTI_ECU_CONFIG */
  if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
  { /* #30 Check controller is in active ECU */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
  if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
# endif
  if (!CanHL_IsControllerInit(channel))
  { /* #40 Check controller is initialized \trace SPEC-1739, SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#endif
  { /* ----- Implementation ----------------------------------------------- */
    /* #100 EXCLUSIVE_AREA_1 secure interrupt lock handling */
    Can_EnterCritical(CAN_EXCLUSIVE_AREA_1);
    if (Can_GetCanInterruptCounter(channel) != 0)
    { /* #110 Enable only when disabled before (count nesting) \trace SPEC-1749, SPEC-1748, SPEC-3875 */
      Can_SetCanInterruptCounter(channel, Can_GetCanInterruptCounter(channel)-1); /* SBSW_CAN_HL12 */
#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR30) /* COV_CAN_MICROSAR_VERSION */
# if defined(CAN_ENABLE_DEV_TIMEOUT_DETECT) /* COV_CAN_DEV_TIMEOUT_DETECT */
#  if defined(C_ENABLE_HW_LOOP_TIMER)
#   if (CAN_HW_LOOP_SUPPORT_API == STD_OFF) && (CAN_DEV_ERROR_DETECT == STD_ON)
      canApiContext = CAN_ENINT_ID;
#   endif
#  endif
# endif
#endif
      if (Can_GetCanInterruptCounter(channel) == 0) /* \trace SPEC-1736, SPEC-1756, SPEC-3877 */
      {
#if (CAN_INTLOCK == CAN_DRIVER) || (CAN_INTLOCK == CAN_BOTH) /* COV_CAN_LOCK_ISR_BY_APPL */
        { /* #120 Disable CAN interrupt for each HW channel */
          CanLL_CanInterruptRestore(canHwChannel, Can_GetCanInterruptOldStatus(canHwChannel));
        }
#endif
#if (CAN_INTLOCK == CAN_APPL) || (CAN_INTLOCK == CAN_BOTH) /* COV_CAN_LOCK_ISR_BY_APPL */
        /* #130 Let application Enable CAN interrupt ApplCanInterruptRestore() */
        ApplCanInterruptRestore((uint8)channel);
#endif
      }
    }
    Can_LeaveCritical(CAN_EXCLUSIVE_AREA_1);
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_ENINT_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
#if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_EnableControllerInterrupts();
} /* PRQA S 6050,6080 */ /* MD_MSR_STCAL,MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_Write
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, Can_ReturnType, CODE) Can_Write( Can_HwHandleType Hth, Can_PduInfoPtrType PduInfo )
{ /* \trace SPEC-1751, SPEC-3887,   SPEC-1760, SPEC-1406 */
  /* ----- Local Variables ---------------------------------------------- */
  Can_ReturnType retval;
  CAN_CHANNEL_CANTYPE_LOCAL
  uint8 errorId;
  CanHookBegin_Can_Write();
  errorId = CAN_E_NO_ERROR;
  retval = CAN_NOT_OK; /* PRQA S 3198 */ /* MD_MSR_14.2 */
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* \trace SPEC-1759, SPEC-3864 */
    errorId = CAN_E_UNINIT;
  }
  else
# if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
  if (Hth >= Can_GetSizeOfMailbox()) {
    errorId = CAN_E_PARAM_HANDLE;
  }
  else
# endif
#endif
  {
#if !defined( C_SINGLE_RECEIVE_CHANNEL ) /* otherwise 'channel' is a define */
    channel = Can_GetMsgController(Hth);
#endif
#if (CAN_DEV_ERROR_DETECT == STD_ON)
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
    if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_GENDATA_FAILURE */
    {
      errorId = CAN_E_PARAM_HANDLE;
    }
    else
# endif
# if defined(C_ENABLE_MULTI_ECU_CONFIG) /* move below channel DET check */ /* COV_CAN_MULTI_ECU_CONFIG */
    if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
    { /* #30 Check controller is in active ECU */
      errorId = CAN_E_PARAM_HANDLE;
    }
    else
# elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
    if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
    {
      errorId = CAN_E_PARAM_HANDLE;
    }
    else
# endif
    if (!CanHL_IsControllerInit(channel))
    { /* #40 Check controller is initialized \trace SPEC-1407, SPEC-3962 */
      errorId = CAN_E_UNINIT;
    }
    else
# if defined(C_ENABLE_TX_FULLCAN_OBJECTS)
    if ( (Can_GetMailboxType(Hth) != CAN_TX_BASICCAN_TYPE) && (Can_GetMailboxType(Hth) != CAN_TX_FULLCAN_TYPE) )
# else
    if ( Can_GetMailboxType(Hth) != CAN_TX_BASICCAN_TYPE )
# endif
    { /* \trace SPEC-1763, SPEC-3870 */
      errorId = CAN_E_PARAM_HANDLE;
    }
    else
    if ((PduInfo == NULL_PTR) || ((PduInfo->sdu == NULL_PTR) && (PduInfo->length != 0)))
    { /* \trace SPEC-1761, SPEC-3868 */
      errorId = CAN_E_PARAM_POINTER;
    }
    else
# if !defined(C_ENABLE_CAN_FD_USED)
    if ( CanHL_IsFdMessage(PduInfo->id) )
    { /* no CAN_FD: Check parameter PduInfo->id should not have FD bit in ID */
      errorId = CAN_E_PARAM_POINTER;
    }
    else
# endif
# if defined(C_ENABLE_CAN_FD_FULL)
    if ( ((PduInfo->length > 8) && (Can_GetInitObjectFdBrsConfig(Can_GetLastInitObject(channel)) == CAN_NONE)) ||
         (PduInfo->length > CAN_MAX_DATALEN_OBJ(Hth)) )
         { /* \trace SPEC-1758, SPEC-3865 */
      /* \trace SPEC-60433 */ /* CAN_FD: Check parameter PduInfo->length is smaller than 9 for none FD configuration
         If development error detection for the CAN module is enabled and the CAN Controller is not in CAN FD mode (no CanControllerFdBaudrateConfig):
         The function Can_Write shall raise the error CAN_E_PARAM_DLC and shall return CAN_NOT_OK if the length is more than 8 byte.() */
      /* CAN_FD: Check parameter PduInfo->length against PDU maximum size */
      errorId = CAN_E_PARAM_DLC;
    }
    else
# else
    if ( PduInfo->length > CAN_MAX_DATALEN_OBJ(Hth) )
    { /* \trace SPEC-1758 */ /* Check parameter PduInfo->length against maximum buffer size */
      errorId = CAN_E_PARAM_DLC;
    }
    else
# endif
# if defined(C_ENABLE_MIXED_ID)
    if ( ((PduInfo->id & (Can_IdType)CAN_ID_IDE_MASK) != (Can_IdType)CAN_ID_IDE_MASK ) && ( (PduInfo->id & (Can_IdType)CAN_ID_MASK) > (Can_IdType)CAN_ID_MASK_STD ) )
    { /* Check parameter PduInfo->id for STD ID is in STD range (EXT is always in range) */
      errorId = CAN_E_PARAM_POINTER;
    }
    else
# endif
    if ( (PduInfo->id & (Can_IdType)CAN_ID_UNUSED_MASK) != 0 )
    { /* Check parameter PduInfo->id contains illegal bits (e.g. bigger ID value than MAX for given type) */
      errorId = CAN_E_PARAM_POINTER;
    }
    else
#endif
    /* ----- Implementation ----------------------------------------------- */
#if defined(C_ENABLE_CAN_RAM_CHECK)
    /* #150 reject deactivated mailbox (by RamCheck) */
    if (Can_GetMailboxState(Hth) == CAN_DISABLED_OBJ) /* COV_CAN_RAM_CHECK_NO_STIMULATION */
    {
      retval = CAN_NOT_OK;
    }
    else
#endif
    /* #180 check Hardware is in BUSOFF recovery state and is not able to handle a request: return BUSY \trace SPEC-1764 */
    if (Can_IsIsBusOff(channel)) /* COV_CAN_BUSOFF_NOT_IN_ALL_CONFIG */
    {
      retval = CAN_BUSY;
    }
    else
#if defined(C_ENABLE_CAN_RAM_CHECK)
    /* #200 controller is active (no RAM check issue): */
    if ((Can_GetLogStatus(channel) & CAN_DEACTIVATE_CONTROLLER) != CAN_DEACTIVATE_CONTROLLER) /* PRQA S 2004 */ /* MD_Can_Asr_2004 */ /* COV_CAN_HARDWARE_FAILURE */
#endif
    {
      CanObjectHandle  logTxObjHandle;
      /* #210 EXCLUSIVE_AREA_2: Interrupts may not be locked and re-entrant call may occur. */
      /*                        Time in between ID search and lock of mailbox is critical 
                                (only when no Vector Interface used otherwise CanIf EXCLUSIVE_AREA is used instead) 
                                Can_Write() could be called re-entrant, there for also for polling systems the interrupts have to be locked  
                                this is essential while check for mailbox is free (in between if (free) and set to not free) and save PDU handle */
#if !defined(CAN_USE_VECTOR_IF)
      Can_EnterCritical(CAN_EXCLUSIVE_AREA_2);
#endif
      /* #220 search for BasicCAN object handle to transmit (Multiplexed TX) and backup data for cancel TX object if necessary */
      logTxObjHandle = CanHL_WritePrepare(CAN_CHANNEL_CANPARA_FIRST Hth, PduInfo); /* SBSW_CAN_HL28 */
      /* #230 start transmission for given handle (if free) and return state */
      retval = CanHL_WriteStart(CAN_CHANNEL_CANPARA_FIRST Hth, logTxObjHandle, PduInfo); /* SBSW_CAN_HL28 */

#if !defined(CAN_USE_VECTOR_IF) /* No Vector Interface used, Interrupts may not be locked */
      /* avoid change of PDU information due to TX interrupt while changing */
      Can_LeaveCritical(CAN_EXCLUSIVE_AREA_2);
#endif
    }
  }
  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_WRITE_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_Write();
  return retval;
} /* PRQA S 6030,6080 */ /* MD_MSR_STCYC,MD_MSR_STMIF */

/****************************************************************************
| NAME:             ASR4.x - Can_CheckWakeup / ASR3.x - Can_Cbk_CheckWakeup
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, Std_ReturnType, CODE) Can_CheckWakeup( uint8 Controller )
{ /* \trace SPEC-1740, SPEC-3922 */
  /* ----- Local Variables ---------------------------------------------- */
  Std_ReturnType retval;
  CanHookBegin_Can_CheckWakeup();
  retval = E_NOT_OK; /* \trace SPEC-1407 */
#if defined(C_ENABLE_SLEEP_WAKEUP)
  {
    uint8 errorId;
    errorId = CAN_E_NO_ERROR;
  
    /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
    /* #10 Check if parameter controller is valid and state is INIT */
    if (canConfigInitFlag == CAN_STATUS_UNINIT)
    { /* #20 Check Driver is initialized \trace SPEC-3962, SPEC-3903 */
      errorId = CAN_E_UNINIT;
    }
    else
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
    if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
    { /* \trace SPEC-1738, SPEC-3945 */
      errorId = CAN_E_PARAM_CONTROLLER;
    }
    else
#  endif
#  if (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
    if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
    {
      errorId = CAN_E_PARAM_CONTROLLER;
    }
    else
#  endif
    if (!CanHL_IsControllerInit(channel))
    { /* #40 Check controller is initialized \trace SPEC-1743 */ /* ESCAN00045884 */
      errorId = CAN_E_UNINIT;
    }
    else
# endif
# if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
    if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) != (cantVIdentityMsk)0 ) /* PRQA S 2004 */ /* MD_Can_Asr_2004 */
      /* #50 Check controller is in active ECU */
# endif
    {
     /* ----- Implementation ----------------------------------------------- */
     /* #100 if WAKEUP occur: */
     if (Can_IsIsWakeup(channel))
      {
        Can_SetIsWakeup(channel,FALSE); /* SBSW_CAN_HL09 */
        /* #110 Driver call EcuM_SetWakeupEvent() to prevent missing WAKEUP notification (multiple call is OK) */
        /*      since there is no more call from CanIf to EcuM_SetWakeupEvent() in AutoSar 3.2.1/4.0.3 */
        EcuM_SetWakeupEvent(Can_GetWakeupSourceRef(channel)); /* \trace SPEC-50550 */
        retval = E_OK; /* \trace SPEC-3954, SPEC-1755 */
      }
    }

    /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
    if (errorId != CAN_E_NO_ERROR)
    { /* Throw DET if an error detected before */
      Can_CallDetReportError(CAN_CKWAKEUP_ID, errorId);
    }
#  else
    CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
# if defined( C_SINGLE_RECEIVE_CHANNEL )
    CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }
#else
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_CheckWakeup();
  return retval;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_MainFunction_Write
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Write( void )
{ /* \trace SPEC-3873, SPEC-1766 */
  /* ----- Local Variables ---------------------------------------------- */
#if defined(C_ENABLE_TX_POLLING) 
  CAN_CHANNEL_CANTYPE_LOCAL
  CanObjectHandle txObjHandle;
  uint8 errorId;
  /* KB begin CanLL_TxTaskLocalParameter */
  vuint32 txBRP;  /* pending Tx requests */
  /* KB end CanLL_TxTaskLocalParameter */
  errorId = CAN_E_NO_ERROR;
  CanHookBegin_Can_MainFunction_Write();
  /* canSendSemaphor no more needed because of ControllerInterrupts disabled while Can_Write() */
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #10 Check Driver is initialized \trace SPEC-3784, SPEC-1767,  SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
# endif
  {  
    /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
    for (channel = 0; channel < kCanNumberOfChannels; channel++)
# endif
    { /* #20 over all active controller */
# if defined(C_ENABLE_MULTI_ECU_CONFIG) /* one controller optimization is always off */ /* COV_CAN_MULTI_ECU_CONFIG */
      if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
# elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON) /* one controller optimization is always off */
      if ( Can_GetCanIfChannelId(channel) == kCanChannelNotUsed ) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
# endif
# if (CAN_DEV_ERROR_DETECT == STD_ON) /* \trace SPEC-1573, SPEC-1402, SPEC-1403 */
      if (!CanHL_IsControllerInit(channel))
      { /* #50 Check controller is initialized */ /* \trace SPEC-3962 */
        errorId = CAN_E_UNINIT;
      }
      else
# endif
      {
# if defined(C_ENABLE_SLEEP_WAKEUP) || (CAN_EMULATE_SLEEP == STD_ON) /* COV_CAN_EMULATE_SLEEP */
        if ( !CanHL_IsSleep(channel) )
# endif
        { /* #60 do not access CAN hardware in SLEEP */
          {
# if defined(C_ENABLE_TX_POLLING) /* COV_CAN_TX_POLLING TX */ /* always true when no hw-cancel is supported */
            /* #100 do confirmation handling for pending mailboxes */
            /* KB begin CanLL_if_TxIsGlobalConfPending */
            if(Can_GetCanTXBRP(canHwChannel) != 0)
            { /* Tx request is pending (do not check the HW Flags because reset is done only within next transmit request) */
            /* KB end CanLL_if_TxIsGlobalConfPending */
              for ( txObjHandle = CAN_HL_HW_TX_STARTINDEX(canHwChannel); txObjHandle < CAN_HL_HW_TX_STOPINDEX(canHwChannel); txObjHandle++ )
              { /* #110 over all TX mailboxes */
#  if defined(C_ENABLE_INDIVIDUAL_POLLING) || defined(CAN_HWOBJINDIVPOLLING)
                if ( Can_GetCanHwObjIndivPolling(CAN_HWOBJINDIVPOLLING_INDEX0,txObjHandle) != (uint8)0 )
#  endif
                { /* #120 polling object? do individual polling */
                  /* KB begin CanLL_if_TxIsObjConfPending */
                  CanNestedGlobalInterruptDisable();
                  txBRP = CanLL_if_TxIsObjConfPending(CAN_CHANNEL_CANPARA_FIRST ((vuint32)(kCanACTIVE << txObjHandle)));
                  CanNestedGlobalInterruptRestore();
                  if (txBRP == kCanTrue)
                  { /* at least one Tx buffer is pending */
                  /* KB end CanLL_if_TxIsObjConfPending */
                    /* #125 Lock CAN controller interrupts. (avoid nested call of confirmation (individual polling) and CancelTx interrupt confirmation out of Can interrupt like TP) */
                    Can_DisableControllerInterrupts((uint8)channel);
                    /* #130 confirmation pending - do handling \trace SPEC-1574, SPEC-3779 */
                    CanHL_TxConfirmation( CAN_HW_CHANNEL_CANPARA_FIRST txObjHandle );
                    Can_EnableControllerInterrupts((uint8)channel);
                  }
                }
              }
            }
# endif
          } /* CanHL_IsSleep */
        } /* end of loop over all HW channels */
      }
    }
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_MAINFCT_WRITE_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif

#else
  CanHookBegin_Can_MainFunction_Write();
#endif /* C_ENABLE_TX_POLLING */
  CanHookEnd_Can_MainFunction_Write();
} /* PRQA S 6030,6050,6080 */ /* MD_MSR_STCYC,MD_MSR_STCAL,MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_MainFunction_Read
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Read( void )
{ /* \trace SPEC-3871, SPEC-1776 */
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  CanHookBegin_Can_MainFunction_Read();
  errorId = CAN_E_NO_ERROR; /* PRQA S 3198 */ /* MD_MSR_14.2 */
  
  /* ----- Development Error Checks ------------------------------------- */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check Driver is initialized \trace SPEC-3841, SPEC-1784, SPEC-3852,  SPEC-3962 */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  {
    errorId = CAN_E_UNINIT; /* PRQA S 3198 */ /* MD_MSR_14.2 */
  }
  else
#endif
  /* ----- Implementation ----------------------------------------------- */
  /* #20 semaphore to secure parallel access to RX buffers interrupt or polling \trace SPEC-1569, SPEC-3785 */
  if ( canRxTaskActive == CAN_FREE)  /* PRQA S 2004 */ /* MD_Can_Asr_2004 */ /* COV_CAN_TESTSTIMULATION */
  {
#if defined(C_ENABLE_RX_POLLING) /* COV_CAN_RX_POLLING */
    CAN_CHANNEL_CANTYPE_LOCAL
#endif
    canRxTaskActive = CAN_BUSY; /* PRQA S 3198 */ /* MD_MSR_14.2 */
#if defined(C_ENABLE_RX_POLLING) /* \trace SPEC-1782, SPEC-3771 */ /* COV_CAN_RX_POLLING */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
    for (channel = 0; channel < kCanNumberOfChannels; channel++)
# endif
    { /* #30 iterate over all active controller */
# if defined(C_ENABLE_MULTI_ECU_CONFIG) /* one controller optimization is always off */ /* COV_CAN_MULTI_ECU_CONFIG */
      if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
# elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON) /* one controller optimization is always off */
      if ( Can_GetCanIfChannelId(channel) == kCanChannelNotUsed ) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
# endif
# if (CAN_DEV_ERROR_DETECT == STD_ON)
      if (!CanHL_IsControllerInit(channel))
      { /* #60 Check controller is initialized \trace SPEC-3962 */
        errorId = CAN_E_UNINIT; /* PRQA S 3198 */ /* MD_MSR_14.2 */
      }
      else
# endif
      {
# if defined(C_ENABLE_SLEEP_WAKEUP) || (CAN_EMULATE_SLEEP == STD_ON) /* COV_CAN_EMULATE_SLEEP */
        if ( !CanHL_IsSleep(channel) )
# endif
        { /* #70 do not access CAN hardware in SLEEP */
          { /* #80 over all HW channel \trace SPEC-3814, SPEC-1774 */
# if defined(C_ENABLE_RX_FULLCAN_OBJECTS)
            /* #90 search for all pending FullCAN mailbox objects and call notification */
            CanHL_RxFullMsgReceivePolling(CAN_HW_CHANNEL_CANPARA_ONLY);
# endif
# if defined(C_ENABLE_RX_BASICCAN_OBJECTS)
            /* #100 search for all pending BasicCAN mailbox objects and call notification */
            CanHL_RxBasicMsgReceivePolling(CAN_HW_CHANNEL_CANPARA_ONLY);
# endif
          } /* CanHL_IsSleep */
        } /* end of loop over all HW channels */
      }
    }
#endif /* C_ENABLE_RX_POLLING */
#if defined(C_ENABLE_RX_QUEUE)
    /* #200 execute RxQueue CanHL_RxQueueExecution() */
    errorId |= CanHL_RxQueueExecution();
#endif
    canRxTaskActive = CAN_FREE;
  }

  /* ----- Development Error Report --------------------------------------- */
#if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR) /* PRQA S 3356,3359 */ /* MD_Can_13.7,MD_Can_13.7 */
  { /* Throw DET if an error detected before */ /* PRQA S 3201 */ /* MD_Can_3201 */
    Can_CallDetReportError(CAN_MAINFCT_READ_ID, errorId);
  }
#else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif
  CanHookEnd_Can_MainFunction_Read();
} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_MainFunction_BusOff
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_BusOff( void )
{ /* \trace SPEC-1783, SPEC-3867 */
  /* ----- Local Variables ---------------------------------------------- */
#if defined(C_ENABLE_ERROR_POLLING) /* \trace SPEC-1778, SPEC-3818 */ /* COV_CAN_ERROR_POLLING */
  CAN_CHANNEL_CANTYPE_LOCAL
  uint8 errorId;
  CanHookBegin_Can_MainFunction_BusOff();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #10 Check Driver is initialized \trace SPEC-3835,  SPEC-1780, SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
# endif
  {  
    /* ----- Implementation ----------------------------------------------- */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
    for (channel = 0; channel < kCanNumberOfChannels; channel++)
# endif
    { /* #20 over all active controller */
# if defined(C_ENABLE_MULTI_ECU_CONFIG) /* one controller optimization is always off */ /* COV_CAN_MULTI_ECU_CONFIG */
      if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
# elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON) /* one controller optimization is always off */
      if ( Can_GetCanIfChannelId(channel) == kCanChannelNotUsed ) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
# endif
# if (CAN_DEV_ERROR_DETECT == STD_ON)
      if (!CanHL_IsControllerInit(channel))
      { /* #50 Check controller is initialized */ /* \trace SPEC-3962 */
        errorId = CAN_E_UNINIT;
      }
      else
# endif
      {
# if defined(C_ENABLE_SLEEP_WAKEUP) || (CAN_EMULATE_SLEEP == STD_ON) /* COV_CAN_EMULATE_SLEEP */
        if ( !CanHL_IsSleep(channel) )
# endif
        { /* #60 do not access CAN hardware in SLEEP */
          { /* #70 loop over all HW controllers and call CanHL_ErrorHandling() \trace SPEC-1772, SPEC-3790 */
            /* #80 disable CAN interrupts */
            Can_DisableControllerInterrupts((uint8)channel);
            CanHL_ErrorHandling( CAN_HW_CHANNEL_CANPARA_ONLY );
            Can_EnableControllerInterrupts((uint8)channel);
          }
        }
      }
    }
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_MAINFCT_BO_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
#else /* C_ENABLE_ERROR_POLLING */
  CanHookBegin_Can_MainFunction_BusOff();
#endif /* C_ENABLE_ERROR_POLLING */
  CanHookEnd_Can_MainFunction_BusOff();
}

/****************************************************************************
| NAME:             Can_MainFunction_Wakeup
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Wakeup( void )
{ /* \trace SPEC-1770, SPEC-3885 */
  /* ----- Local Variables ---------------------------------------------- */
#if defined(C_ENABLE_WAKEUP_POLLING) /* COV_CAN_WAKEUP_POLLING */
# if defined(C_ENABLE_SLEEP_WAKEUP) /* \trace SPEC-1777, SPEC-3778 */
  CAN_CHANNEL_CANTYPE_LOCAL
  uint8 errorId;
  /* KB begin CanLL_WakeUpTaskLocalParameter */
  /* KB end CanLL_WakeUpTaskLocalParameter */
  CanHookBegin_Can_MainFunction_Wakeup();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #10 Check Driver is initialized \trace SPEC-1781, SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#  endif
  {  
    /* ----- Implementation ----------------------------------------------- */
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
    for (channel = 0; channel < kCanNumberOfChannels; channel++)
#  endif
    { /* #20 over all active controller */
#  if defined(C_ENABLE_MULTI_ECU_CONFIG) /* one controller optimization is always off */ /* COV_CAN_MULTI_ECU_CONFIG */
      if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
#  elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON) /* one controller optimization is always off */
      if ( Can_GetCanIfChannelId(channel) == kCanChannelNotUsed ) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
#  endif
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
      if (!CanHL_IsControllerInit(channel))
      { /* #50 Check controller is initialized \trace SPEC-3962 */
        errorId = CAN_E_UNINIT;
      }
      else
#  endif
      {
        /* #65 HW WAKEUP occur */
        /* KB begin CanLL_if_WakeUpOccured */
        /* M_CAN can be set to power down via CCCR[CSR]. 
           When all pending transmission requests are complete M_CAN waits until bus idle state is detected. 
           Then M_CAN sets then CCCR[INIT] to one (prevent any further transfers). 
           Now  M_CAN sets CCCR[CSA] to one (acknowledges being ready for power down). 
           Now the module clock inputs (CAN clock and host clock) may be switched off. 
           
           To leave power down mode, the application has to turn on the module clocks before resetting CCCR[CSR]. 
           The M_CAN acknowledges this by resetting CCCR[CSA]. 
           After that the application can restart CAN communication by resetting bit CCCR[INIT]. */
        
        if (  (Cn->IR & kCanIR_CLEAR_ALL) != 0) /* wakeup occured == true */ )
        {
        /* KB end CanLL_if_WakeUpOccured */
          /* #70 EXCLUSIVE_AREA_5 secure WAKEUP handling - refer to ESCAN00021223 - same problem like for CBD */
          Can_EnterCritical(CAN_EXCLUSIVE_AREA_5);
          /* #80 call CanLL_WakeUpHandling() if any WAKEUP occur for the logical controller \trace SPEC-1773, SPEC-3772 */
          CanLL_WakeUpHandling(CAN_CHANNEL_CANPARA_ONLY);
          Can_LeaveCritical(CAN_EXCLUSIVE_AREA_5);
        }
      }
    }
  }

  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_MAINFCT_WU_ID, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
# else
  CanHookBegin_Can_MainFunction_Wakeup();
# endif
#else
  CanHookBegin_Can_MainFunction_Wakeup();
#endif
  CanHookEnd_Can_MainFunction_Wakeup();
}

#if defined(CAN_ENABLE_MICROSAR_VERSION_MSR40X) /* COV_CAN_MICROSAR_VERSION */
/****************************************************************************
| NAME:             Can_MainFunction_Mode
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Mode( void )
{ /* \trace SPEC-1775 */
  /* ----- Local Variables ---------------------------------------------- */
  CAN_CHANNEL_CANTYPE_LOCAL
  uint8 errorId;
  CanHookBegin_Can_MainFunction_Mode();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #10 Check Driver is initialized \trace SPEC-1779, SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#  endif
  { /* #15 EXCLUSIVE_AREA_6 avoid nesting mode changes (e.g. same API, initialization or BUSOFF) */
    /* ----- Implementation ----------------------------------------------- */
    Can_EnterCritical(CAN_EXCLUSIVE_AREA_6);
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
    for (channel = 0; channel < kCanNumberOfChannels; channel++)
#  endif
    { /* #20 over all active controller */
#  if defined(C_ENABLE_MULTI_ECU_CONFIG) /* one controller optimization is always off */ /* COV_CAN_MULTI_ECU_CONFIG */
      if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
#  elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON) /* one controller optimization is always off */
      if ( Can_GetCanIfChannelId(channel) == kCanChannelNotUsed ) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
      { /* not for inactive controller */
        continue; /* PRQA S 0770 */ /* MD_Can_0770 */
      }
#  endif
#  if (CAN_DEV_ERROR_DETECT == STD_ON)
      if (!CanHL_IsControllerInit(channel))
      { /* #50 Check controller is initialized */ /* \trace SPEC-1779, SPEC-3962 */
        errorId = CAN_E_UNINIT;
      }
      else
#  endif
      {
        switch (Can_GetStatusReq(channel))
        { /* #55 only one transition request at one time is possible */
          case CAN_REQ_START:
            /* #60 check/handle START transition \trace SPEC-1771 */
            CanHL_StartProcessed(CAN_CHANNEL_CANPARA_ONLY);
            break;
          case CAN_REQ_STOP:
            /* #70 check/handle STOP transition \trace SPEC-1771 */
            CanHL_StopProcessed(CAN_CHANNEL_CANPARA_ONLY);
            break;
#   if defined(C_ENABLE_SLEEP_WAKEUP)
          /* #75 hardware is only in SLEEP if WAKEUP over bus is active and supported */
          case CAN_REQ_WAKEUP:
            /* #80 check/handle WAKEUP transition \trace SPEC-1771 */
            CanHL_WakeupProcessed(CAN_CHANNEL_CANPARA_ONLY);
            break;
#   endif
#   if defined(C_ENABLE_SLEEP_WAKEUP)
          /* #85 hardware is only in SLEEP if WAKEUP over bus is active and supported */
          case CAN_REQ_SLEEP:
            /* #90 check/handle SLEEP transition \trace SPEC-1771 */
            CanHL_SleepProcessed(CAN_CHANNEL_CANPARA_ONLY);
            break;
#   endif
          case CAN_REQ_NONE:
            break;
          default:
            /* #100 check illegal transition request */
            errorId = CAN_E_TRANSITION;
            break;
        }
      }
    } /* over all channels*/
    Can_LeaveCritical(CAN_EXCLUSIVE_AREA_6);
  }

  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_MAINFCT_MODE_ID, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
  CanHookEnd_Can_MainFunction_Mode();
} /* PRQA S 6050 */ /* MD_MSR_STCAL */
#endif

/****************************************************************************
| NAME:             Can_CancelTx
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_CancelTx( Can_HwHandleType Hth, PduIdType PduId )
{
  /* ----- Local Variables ---------------------------------------------- */
#if (CAN_CANCEL_SUPPORT_API == STD_ON)
  CAN_CHANNEL_CANTYPE_LOCAL
  Can_HwHandleType txObjHandle;
  CanObjectHandle logTxObjHandle;
  uint8 errorId;
  CanHookBegin_Can_CancelTx();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #10 Check Driver is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#  if defined(CAN_ENABLE_MICROSAR_VERSION_MSR403) /* COV_CAN_MICROSAR_VERSION */
  if (Hth >= Can_GetSizeOfMailbox())
  { /* #20 Check Hth is in range */
    errorId = CAN_E_PARAM_HANDLE;
  }
  else
#  endif
# if defined(C_ENABLE_TX_FULLCAN_OBJECTS)
  if ((Can_GetMailboxType(Hth) != CAN_TX_BASICCAN_TYPE) && (Can_GetMailboxType(Hth) != CAN_TX_FULLCAN_TYPE))
# else
  if ( Can_GetMailboxType(Hth) != CAN_TX_BASICCAN_TYPE )
# endif
  { /* #30 Check Hth is FullCAN or BasicCAN */
    errorId = CAN_E_PARAM_HANDLE;
  }
  else
# endif
  {
# if !defined( C_SINGLE_RECEIVE_CHANNEL ) /* otherwise 'channel' is a define */
    channel = Can_GetMsgController(Hth);
# endif
    txObjHandle = Can_GetHwHandle(Hth);
    logTxObjHandle = CanHL_GetTxHwToLogHandle(CAN_CHANNEL_CANPARA_FIRST txObjHandle);  
# if (CAN_DEV_ERROR_DETECT == STD_ON)
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
    if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */ /* COV_CAN_GENDATA_FAILURE */
    { /* #40 Check parameter controller is in range */
      errorId = CAN_E_PARAM_CONTROLLER;
    }
    else
#  endif
#  if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
    if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 ) /* COV_CAN_GENDATA_FAILURE */
    { /* #50 Check controller is in active ECU */
      errorId = CAN_E_PARAM_CONTROLLER;
    }
    else
#  elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
    if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_FAILURE */
    { /* #60 Check parameter controller is valid */
      errorId = CAN_E_PARAM_CONTROLLER;
    }
    else
#  endif
    if (!CanHL_IsControllerInit(channel))
    { /* #70 Check controller is initialized \trace SPEC-3962 */
      errorId = CAN_E_UNINIT;
    }
    else
# endif
    {
      /* ----- Implementation ----------------------------------------------- */
# if defined(C_ENABLE_MULTIPLEXED_TRANSMISSION) /* \trace SPEC-1677, SPEC-3957 */
      uint8_least muxTx;
      if ( Can_GetMailboxType(Hth) == CAN_TX_BASICCAN_TYPE )
      { /* #80 is BasicCAN and Multiplexed TX - search for handle */
        for (muxTx = 0; muxTx < CAN_MULTIPLEXED_TX_MAX; muxTx++)
        {
          if (CAN_ACTIVESEND_PDUID(logTxObjHandle) == PduId)
          { /* #90 PDU found in active send list - handle found */
            break;
          }
          logTxObjHandle++;
          txObjHandle++;
        }
      }
# endif
      if (CAN_ACTIVESEND_PDUID(logTxObjHandle) == PduId)
      {
        if ((CAN_ACTIVESEND_STATE(logTxObjHandle) == CAN_SEND_OBJ)
# if defined(C_ENABLE_CANCEL_TX_IN_HW)
            || (CAN_ACTIVESEND_STATE(logTxObjHandle) == CAN_CANCEL_OBJ)
# endif
           )
        { /* #100 mailbox to cancel is valid (PDU, handle, send state OK) */
          CAN_ACTIVESEND_STATE_SET(logTxObjHandle, CAN_CANCEL_OBJ_SW); /* mark as cancelled by SW */ /* SBSW_CAN_HL04 */
          /* #110 CANCEL_IN_HW nor CANCEL_FULLCAN_IN_HW is active - just suppress TX confirmation */
# if defined(C_ENABLE_CANCEL_IN_HW) || defined(C_ENABLE_CANCEL_FULLCAN_IN_HW)
          /* #120 only CANCEL_FULLCAN_IN_HW so no BasicCAN cancellation - need both arguments because of ORGANI */
#  if defined(C_ENABLE_CANCEL_FULLCAN_IN_HW) && !defined(C_ENABLE_CANCEL_IN_HW)
          /* #125 do it only for FullCAN TX (may no TX Buffer is active for re-queuing) */
          if (Can_GetMailboxType(Hth) == CAN_TX_FULLCAN_TYPE)
#  endif
          { /* #130 LL TX cancel in HW */ /* \trace SPEC-1690, SPEC-3947 */
            /* KB begin CanLL_CancelInHw */
            CanLL_CancelInHw(CAN_CHANNEL_CANPARA_FIRST txObjHandle);
            /* KB end CanLL_CancelInHw */
          }
# endif
        }
      }
    }
  }
  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_WRITE_ID, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
#else /* CAN_CANCEL_SUPPORT_API == STD_ON */
  CanHookBegin_Can_CancelTx();
  CAN_DUMMY_STATEMENT(Hth); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  CAN_DUMMY_STATEMENT(PduId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif /* CAN_CANCEL_SUPPORT_API == STD_ON */
  CanHookEnd_Can_CancelTx();
} /* PRQA S 6030,6080 */ /* MD_MSR_STCYC,MD_MSR_STMIF */

/****************************************************************************
| NAME:             Can_ResetBusOffStart
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_ResetBusOffStart( uint8 Controller )
{
  /* ----- Local Variables ---------------------------------------------- */
#if defined(CAN_ENABLE_BUSOFF_SUPPORT_API) /* COV_CAN_BUSOFF_SUPPORT_API */
  uint8 errorId;
  CanHookBegin_Can_ResetBusOffStart();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #20 Check Driver is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
#  if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
  if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
  { /* #40 Check controller is in active ECU */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
  if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
  if (!CanHL_IsControllerInit(channel))
  { /* #50 Check controller is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
# endif
  { /* ----- Implementation ----------------------------------------------- */
    /* #60 do BUSOFF handling begin by call CanResetBusOffStart() - controller should be stopped afterwards but does not wait for bus transition here */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
    CanResetBusOffStart(channel, Can_GetLastInitObject(channel));
    CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# else
    CanResetBusOffStart(Can_GetLastInitObject(channel));
    CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
#  if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_CTRBUSOFF_ID, errorId);
  }
#  else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#  endif
#else
  CanHookBegin_Can_ResetBusOffStart();
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif /* ( BUSOFF_SUPPORT_API ) */
  CanHookEnd_Can_ResetBusOffStart();
}

/****************************************************************************
| NAME:             Can_ResetBusOffEnd
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_ResetBusOffEnd( uint8 Controller )
{
  /* ----- Local Variables ---------------------------------------------- */
#if defined(CAN_ENABLE_BUSOFF_SUPPORT_API) /* COV_CAN_BUSOFF_SUPPORT_API */
  uint8 errorId;
  CanHookBegin_Can_ResetBusOffEnd();
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #20 Check Driver is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
#  if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
  if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
  { /* #40 Check controller is in active ECU */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
  if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
  if (!CanHL_IsControllerInit(channel))
  { /* #50 Check controller is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
# endif
  { /* #60 reset BUSOFF flag do this before CanResetBusOffEnd() so LL may overwrite it */
    /* ----- Implementation ----------------------------------------------- */
    Can_SetIsBusOff(channel,FALSE); /* SBSW_CAN_HL08 */ 
    /* #70 do BUSOFF finish handling by call CanResetBusOffEnd() - controller should be re initialized afterwards */
# if !defined( C_SINGLE_RECEIVE_CHANNEL )
    CanResetBusOffEnd(channel, Can_GetLastInitObject(channel));
    CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# else
    CanResetBusOffEnd(Can_GetLastInitObject(channel));
    CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_CTRBUSOFF_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
#else
  CanHookBegin_Can_ResetBusOffEnd();
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif /* ( BUSOFF_SUPPORT_API ) */
  CanHookEnd_Can_ResetBusOffEnd();
}

#if (CAN_GET_STATUS == STD_ON)
/****************************************************************************
| NAME:             Can_GetStatus
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, uint8, CODE) Can_GetStatus( uint8 Controller )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 canReturnCode;
  uint8 errorId;
  /* KB begin CanLL_GetStatusLocalParameter */
  /* KB end CanLL_GetStatusLocalParameter */
  CanHookBegin_Can_GetStatus();
  errorId = CAN_E_NO_ERROR;
  canReturnCode = CAN_STATUS_INCONSISTENT; /* PRQA S 3198 */ /* MD_MSR_14.2 */
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  /* #10 Check if parameter controller is valid and state is INIT */
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #20 Check Driver is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
#  if defined(C_ENABLE_MULTI_ECU_CONFIG) /* COV_CAN_MULTI_ECU_CONFIG */
  if ( (cantVIdentityMsk)(Can_GetChannelIdentityAssignment(channel) & V_ACTIVE_IDENTITY_MSK) == (cantVIdentityMsk)0 )
  { /* #40 Check controller is in active ECU */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  elif (CAN_POSTBUILD_VARIANT_SUPPORT == STD_ON)
  if (Can_GetCanIfChannelId(channel) == kCanChannelNotUsed) /* COV_CAN_GENDATA_NOT_IN_ALL_CONFIG */
  {
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
  if (!CanHL_IsControllerInit(channel))
  { /* #50 Check controller is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
    /* KB begin CanLL_GetStatusBegin */
    /* KB end CanLL_GetStatusBegin */
    /* #100 set logical state as return value */
    canReturnCode = (uint8)Can_GetLogStatus(channel); /* PRQA S 3198 */ /* MD_MSR_14.2 */
    if ( CanLL_HwIsBusOff(CAN_HW_CHANNEL_CANPARA_ONLY) ) /* COV_CAN_HARDWARE_FAILURE */
    { /* #150 set BUSOFF - BUSOFF can only happen on first HW channel (with TX objects) */
      canReturnCode |= CAN_STATUS_BUSOFF;
    }
# if defined(C_ENABLE_EXTENDED_STATUS) /* COV_CAN_EXTENDED_STATUS */
    {    
      if ( CanLL_HwIsPassive(CAN_HW_CHANNEL_CANPARA_ONLY) ) /* COV_CAN_HARDWARE_FAILURE */
      { /* #160 set Error Passive */
        canReturnCode |= CAN_STATUS_PASSIVE;
      }    
      if ( CanLL_HwIsWarning(CAN_HW_CHANNEL_CANPARA_ONLY) ) /* COV_CAN_HARDWARE_FAILURE */
      { /* #170 set Error Warning */
        canReturnCode |= CAN_STATUS_WARNING;
      }
    }
# endif /* C_ENABLE_EXTENDED_STATUS */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_HW_ACCESS_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
# if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
  CanHookEnd_Can_GetStatus();
  return (uint8)canReturnCode;
} /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if defined(C_ENABLE_MIRROR_MODE)
/****************************************************************************
| NAME:             Can_SetMirrorMode
****************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
V_DEF_FUNC(V_NONE, void, CODE) Can_SetMirrorMode ( uint8 Controller , CddMirror_MirrorModeType mirrorMode )
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId;
  errorId = CAN_E_NO_ERROR;
  
  /* ----- Development Error Checks ------------------------------------- */
# if (CAN_DEV_ERROR_DETECT == STD_ON)
  if (canConfigInitFlag == CAN_STATUS_UNINIT)
  { /* #10 Check Driver is initialized \trace SPEC-3962 */
    errorId = CAN_E_UNINIT;
  }
  else
#  if !defined( C_SINGLE_RECEIVE_CHANNEL )
  if (channel >= kCanNumberOfChannels) /* CM_CAN_HL01 */
  { /* #20 Check parameter controller is in range */
    errorId = CAN_E_PARAM_CONTROLLER;
  }
  else
#  endif
# endif
  { /* #30 set mirror mode for given controller */
    /* ----- Implementation ----------------------------------------------- */
    Can_SetMirrorModeState(channel, mirrorMode); /* SBSW_CAN_HL20 */
  }

  /* ----- Development Error Report --------------------------------------- */
# if (CAN_DEV_ERROR_REPORT == STD_ON)
  if (errorId != CAN_E_NO_ERROR)
  { /* Throw DET if an error detected before */
    Can_CallDetReportError(CAN_HW_ACCESS_ID, errorId);
  }
# else
  CAN_DUMMY_STATEMENT(errorId); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
# if defined( C_SINGLE_RECEIVE_CHANNEL )
  CAN_DUMMY_STATEMENT(Controller); /* dummy assignment avoid compiler warning */ /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
# endif
}
#endif

#define CAN_STOP_SEC_CODE  /*----------------------------------------------*/
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/****************************************************************************/

/****************************************************************************/
/*  excluded Requirements                                                   */
/****************************************************************************/
/* part of other component: SPEC-1597, SPEC-3898, SPEC-3972 */
/* Currently no use-case / not supported: SPEC-1601, SPEC-3889, SPEC-1592, SPEC-1582 */

/****************************************************************************/
/*  MISRA deviations                                                        */
/****************************************************************************/
/* Justification for module-specific MISRA deviations:

MD_Can_Asr_Unused
Misra Rule Major
  Reason: Symbol not needed in each configuration or for each platform/derivative
  Risk: None
  Prevention: None

MD_Can_Asr_0781
Misra Rule 5.6
  Reason: Same name is used for same kind of data
  Risk: None
  Prevention: None

MD_Can_Asr_3408_libCheck
Misra Rule 8.8
  Reason: external linkage used for library check
  Risk: library check failed.
  Prevention: Integration test version check

MD_Can_Asr_3447
Misra Rule 8.8
  Reason: external linkage but not in header file because this is only used for Driver internal
  Risk: Symbolic conflict for other module
  Prevention: module prefix are part of symbol and possible conflicts checked by linker

MD_Can_Asr_3408
Misra Rule 8.8
  Reason: external linkage but not in header file because this is only used for Driver internal
  Risk: Symbolic conflict for other module
  Prevention: module prefix are part of symbol and possible conflicts checked by linker

MD_Can_Asr_3451
Misra Rule 8.8
  Reason: external linked symbol used in more than one file but should not be declared in header to prevent a external visibility
  Risk: different declaration of same object
  Prevention: possible conflicts checked by linker

MD_Can_Asr_3353_logTxobjHandle
Misra Rule 9.1
  Reason: Because CAN_MULTIPLEXED_TX_MAX is at least 1 the variable logTxobjHandle_use is always set before
  Risk: None
  Prevention: None

MD_Can_Asr_3353_CommonCanTransition
Misra Rule 9.1
  Reason: TransitionDone will be set depend on CommonCAN loop usage. Because CommonCAN loop will always be entered the value will be set.
  Risk: None
  Prevention: None

MD_Can_Asr_3418
Misra Rule 12.10
  Reason: comma operator in for-loop header used to get a compact code
  Risk: None
  Prevention: None

MD_Can_Asr_2018
Misra Rule 14.1
  Reason: default case is not necessary for all configurations
  Risk: None
  Prevention: None

MD_Can_Asr_3219
Misra Rule 14.1
  Reason: static function is not used depend on configuration aspect. No preprocessor used here to avoid unreadable code.
  Risk: None
  Prevention: None

MD_Can_Asr_2004
Misra Rule 14.10
  Reason: no default handling needed for if-else-if here
  Risk: missing default handling
  Prevention: Review

MD_Can_Asr_0881_abstract
Misra Rule 19.12
  Reason: Compiler abstraction need replacement of classes to avoid name conflict. Order of ## operator is irrelevant here.
  Risk: None
  Prevention: None

MD_Can_Asr_3689_MuxTx
Misra Rule 21.1
  Reason: muxTx index seems to be out of bounds for the array canTxBasicDataBuffer but it is limited to maximum size of array.
  Risk: None
  Prevention: Review

MD_Can_Asr_STPTH
Misra Metric STPTH
  Reason: control structure to evaluate ErrorId used sequential instead of nested to increase readability. PTH is 128 times lower than the worst case value from QAC.
  Risk: None
  Prevention: Review

MD_Can_3436:
Major
  Reason: Compatibility define used here.
  Risk: name conflict.
  Prevention: Code review and compiler check for name conflicts.

MD_Can_3199_dummy:
Redundancy
  Reason: Dummy assignment used to satisfy API parameters that are never used.
  Risk: None.
  Prevention: None.

MD_Can_0715:
Misra Rule 1.1
  Reason: Complex code structure used and not split in modules or functions to make the code compact and efficent.
  Risk: Hard to understand.
  Prevention: Code inspection and multiple configuration aspects used in component test.

MD_Can_0828:
Misra Rule 1.1
  Reason: Nesting of #if statements bigger than 8 depends on configuration aspects.
  Risk: Compiler does not support that.
  Prevention: Used Compilers checked and limitations form ANSI is not relevant.

MD_Can_0857:
Misra Rule 1.1
  Reason: Macros used to make the code compact and efficent.
  Risk: Hard to understand.
  Prevention: Code inspection and multiple configuration aspects used in component test.

MD_Can_0505:
Misra Rule 1.2
  Reason: Assertion prevents dereferencing a NULL pointer
  Risk: Undefined behaviour.
  Prevention: Code inspection.

MD_Can_0277_negation:
Misra Rule 3.1
  Reason: negation of an unsigned value used to mask bits.
  Risk: None.
  Prevention: None.

MD_Can_0277_invalid:
Misra Rule 3.1
  Reason: define a invalid value by use highest value of the given data type.
  Risk: None.
  Prevention: None.

MD_Can_3218:
Misra Rule 8.7
  Reason: The usage of variables depend on configuration aspects and may be used only once, or defined global to improve overview.
  Risk: name conflict.
  Prevention: Compiler optimize and check for name conflicts.

MD_Can_3207:
Misra Rule 8.7
  Reason: The usage of variables depend on configuration aspects and may be used or not once in this particular configuration.
  Risk: unnecessary RAM occupied.
  Prevention: Compiler optimize and check for name conflicts.
  
MD_Can_3408_extLinkage:
Misra Rule 8.8
  Reason: Declaration of generated data is only internal to restrict visibility
  Risk: None.
  Prevention: None.

MD_Can_3447:
Misra Rule 8.8
  Reason: This appears only in internal test configurations.
  Risk: Symbolic conflict for other module.
  Prevention: -
  
MD_Can_3684:
Misra Rule 8.12
  Reason: Arrays declared without size, because size depends on configuration and is unknown here, especially for linktime tables.
  Risk: Data access outside table.
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_3760_LogToHw:
Misra Rule 10.01
  Reason: Calculating hardware index out of logical need a negative value in calcuation, but result is always positive.
  Risk: Data access out of bounce.
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_1281:
Misra Rule 10.6
  Reason: type of casting variable can be configured
  Risk: wrong size of data type could be used
  Prevention: Code inspection.

MD_Can_0303_HWaccess:
Misra Rule 11.3
  Reason: Hardware access need pointer to CAN cell as volatile.
  Risk: Access of unknown memory.
  Prevention: Runtime tests.

MD_Can_0310:
Misra Rule 11.4
  Reason: cast increase performance here.
  Risk: pointer alignment does not fit and wrong memory is accessed.
  Prevention: Code inspection and component test.

MD_Can_0311:
Misra Rule 11.5
  Reason: Const pointer used only for read access. Same macro is used also for none const pointer.
  Risk: None.
  Prevention: None.

MD_Can_0312:
Misra Rule 11.5
  Reason: cast to none volatile pointer is ok here because usage of data is read only here.
  Risk: Upper Layer has to make sure that there is no write access to this data.
  Prevention: Documentation of API.

MD_Can_13.7:
Misra Rule 13.7
  Reason: Result or value is always true or false depend on configuration aspect and used platform specific implementation
  Risk: Incorrect platform specific return will be ignored.
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_3201:
Misra Rule 14.1
  Reason: Configuration or platform specific dependent unreachable code.
  Risk: Incorrect behavior depend on settings.
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_3325:
Misra Rule 14.1
  Reason: This control expression is always true or false depend on configuration aspect and used platform specific implementation.
  Risk: Incorrect behavior depend on settings.
  Prevention: Code inspection and test of the different variants in the component test.
  
MD_Can_3109:
Misra Rule 14.3
  Reason: Empty statements occur multiple times because macros used like functions, and configuration aspects may deactivate complete functionality.
  Risk: Functionality unexpected missing.
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_2001:
Misra Rule 14.4
  Reason: 'goto' statement used to optimize code (readability and runtime).
  Risk: Incorrect jump.
  Prevention: Code inspection.

MD_Can_0770:
Misra Rule 14.5
  Reason: 'continue' statement used to optimize code (readability and runtime).
  Risk: Relevant fragments of code not executed.
  Prevention: Code inspection.

MD_Can_14.6:
Misra Rule 14.6
  Reason: multiple break used for optimize code runtime
  Risk: Relevant fragments of code not executed.
  Prevention: Code inspection.

MD_Can_2006:
Misra Rule 14.7
  Reason: Multiple return path used to optimize code (readability and runtime).
  Risk: Return a function too soon.
  Prevention: Code inspection.

MD_Can_1330:
Misra Rule 16.4
  Reason: no impact on functionality, due to different configurations the function paramters can be different
  Risk: traceability could be diffcult 
  Prevention: Code inspection.
  
MD_Can_1334:
Misra Rule 16.4
  Reason: no impact on functionality, due to different configurations the function paramters can be different
  Risk: traceability could be diffcult 
  Prevention: Code inspection.
  
MD_Can_3673:
Misra Rule 16.7
  Reason: no change due to compatibility of the API
  Risk: data could be modified without intention
  Prevention: Code inspection.
  
MD_Can_17.4:
Misra Rule 17.4
  Reason: Pointer arithmetic used multiple times to optimize runtime.
  Risk: Access wrong memory.
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_0750:
Misra Rule 18.4
  Reason: Using union type to handel configuration specific data access.
  Risk: Misinterpreted data.
  Prevention: Code inspection.
  
MD_Can_0759:
Misra Rule 18.4
  Reason: Using union type to handle configuration specific data access.
  Risk: Misinterpreted data.
  Prevention: Code inspection.

MD_Can_3412:
Misra Rule 19.4
  Reason: Complex Macros with unrecognised code-fragment used to optimize code runtime.
  Risk: Readability reduced.
  Prevention: Code inspection.

MD_Can_3458:
Misra Rule 19.4
  Reason:Complex Macros with unbraced code statement blocks used to optimize code runtime.
  Risk: Readability reduced.
  Prevention: Code inspection.

MD_Can_3460:
Misra Rule 19.4
  Reason: void used as macro to get configuration specific API.
  Risk: Readability reduced.
  Prevention: Compile test.
  
MD_Can_0841:
Misra Rule 19.6
  Reason:undefine macro for compatibility reasons and re-usage of platform specific code.
  Risk: Meaning of macro is uncertain and may lead to wrong implementation.
  Prevention: Code inspection, compile tests and runtime tests.

MD_Can_3453:
Misra Rule 19.7
  Reason: Complex Macros used to optimize code runtime.
  Risk: Readability reduced.
  Prevention: Code inspection.

MD_Can_0850:
Misra Rule 19.8
  Reason: Macro argument is empty depend on usage of compiler abstraction.
  Risk: None.
  Prevention: Code inspection.

  MD_Can_3410:
Misra Rule 19.10
  Reason: Parameter used in structures that does not allow brackets
  Risk: None atomic parameter lead to compile errors
  Prevention: Used parameter is always atomic depend on usage

MD_Can_0342:
Misra Rule 19.13
  Reason: Glue operator used to abstract AuotSar compiler abstraction
  Risk: Only K&R compiler support glue operator
  Prevention: Compile test show whether compiler accept glue operator

MD_Can_0291:
Misra Rule 21.1
  Reason: "if" query prevents negative arithmetic result
  Risk: index of array could be negative and therefore undefined
  Prevention: Code inspection. 
  
MD_Can_3382:
Misra Rule 21.1
  Reason: "if" query prevents overflow arithmetic result
  Risk: index of array could exceed dimension (due to overflow) and therefore undefined
  Prevention: Code inspection.  
  
MD_Can_3689:
Misra Rule 21.1
  Reason: assertion prevents out of bound indexing
  Risk: undefined behaviour
  Prevention: Code inspection. Index cannot exceed the maximum dimension of the array.
  
MD_Can_3197_LL:
Misra Rule 0.0
  Reason: Due to fragmented source code it is more safe to do a pre initialization
  Risk: None
  Prevention: Code inspection. Assure that the variable is always assigned before used.

MD_Can_3305_LL:
Misra Rule 0.0
  Reason: Generic access macro for normal and extended CAN-IDs
  Risk: Memory access exception error.
  Prevention: Code inspection. Alignment is checked for each specific platform.

MD_Can_0828_PreProcNesting:
Misra Rule 1.1
  Reason: Portability: Higher complexity is accepted to reach a reduced resource consumption.
  Risk: None
  Prevention: None

MD_Can_1006_inlineASM:
Misra Rule 1.1
  Reason: Improve performance by using (platform specific) inline assembler.
  Risk: None
  Prevention: None

MD_Can_0286_basicCharSet:
Misra Rule 3.1
  Reason: The characters used are not from the C language standard but needed from the Compiler/Assembler used.
  Risk: None
  Prevention: None

MD_Can_0781_LL:
Misra Rule 5.6
  Reason: The name space is unique. It is just referenced within a structure.
  Risk: None
  Prevention: None

MD_Can_0777_LL:
Misra Rule 5.1
  Reason: Identifiers rely on the significance of more than 31 characters.
  Risk: compile or linker error
  Prevention: None

MD_Can_0306_HWaccess_LL:
Misra Rule 11.3
  Reason: Hardware access need pointer to CAN Message RAM.
  Risk: Access of unknown memory.
  Prevention: Runtime tests.

MD_Can_0336_stringifyOp:
Misra Rule 7.1
  Reason: The number is not used as octal constant but as a string for assembler coding.
  Risk: None
  Prevention: None

MD_Can_3447_LL:
Misra Rule 8.8
  Reason: due to include sequence
  Risk: None
  Prevention: reorganize definitions in LL tokens

MD_Can_3684_LL:
Misra Rule 8.12
Reason: Arrays declared without size, because size depends on configuration and is unknown here, especially
        for Link-time tables.
Risk: Data access outside table.
Prevention: Code inspection and test of the different variants in the component test.

MD_Can_0686:
Misra Rule 9.2
  Reason: The entries are not used (Also the ISO C Standard specifies that all remaining elements are initialised to zero.)
  Risk: None
  Prevention: None

MD_Can_3415_RHsideEffect:
Misra Rule 12.4
  Reason: Right hand side evaluation does not need to take place in the case where the left hand side evaluates to false.
  Risk: None
  Prevention: None

MD_Can_3219_LL:
Misra Rule 14.1
  Reason: In this case it is not called at all from within the existing code because it was replaced from the testsuit.
  Risk: None
  Prevention: None

MD_Can_3325_LL:
Misra Rule 14.1
  Reason: Configuration or platform specific dependent constant control expression and thus unreachable code.
  Risk: Incorrect behavior depend on settings.
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_0635:
Misra Rule 6.4
  Reason: Using unsigned int as approved by MISRA
  Risk: None
  Prevention: Code inspection and test of the different variants in the component test.

MD_Can_0341_ISOstringifyOp:
Misra Rule 19.3
  Reason: The hash character is not used for stringify operations but for assembler coding.
  Risk: None
  Prevention: None

MD_Can_3431_LL:
Misra Rule 19.4
  Reason: This control statement definition is explicitly the intention here.
  Risk: None
  Prevention: None

MD_Can_0842_LL:
Misra Rule 19.5
  Reason: Defined within a block due to code repetition mechanism.
  Risk: Readability reduced.
  Prevention: Code inspection, compile tests and runtime tests.

MD_Can_3198_LL:
Major
  Reason: Preset with default value or read to reset the hardware.
  Risk:   None
  Prevention: None

MD_Can_3203_LL:
Redundancy
  Reason: Used for hardware access due to reset at read.
  Risk:   None
  Prevention: None

MD_Can_0488_LL:
Misra Rule 17.4
  Reason: performing pointer arithmetic
  Risk: Segmentation faults or storage violations
  Prevention: Code review and runtime tests

*/

/****************************************************************************/
/*  Silent deviations                                                       */
/****************************************************************************/
/* SBSW_JUSTIFICATION_BEGIN

\ID SBSW_CAN_HL01
 \DESCRIPTION Write access to CanStatusReq with channel as index. Index is checked by caller.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL02]

\ID SBSW_CAN_HL02
 \DESCRIPTION Write access to CanLogStatus with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL03]

\ID SBSW_CAN_HL03
 \DESCRIPTION Call Can_InitController() with parameter configuration pointer.
 \COUNTERMEASURE \N The configuration pointer is never used in called function.

\ID SBSW_CAN_HL04
 \DESCRIPTION Write access to CanActiveSendState with logTxObjHandle as index.
 \COUNTERMEASURE \R [CM_CAN_HL04]
                 \R [CM_CAN_HL13]
                 \R [CM_CAN_HL27]

\ID SBSW_CAN_HL05
 \DESCRIPTION Write access to CanActiveSendPdu with logTxObjHandle as index.
 \COUNTERMEASURE \R [CM_CAN_HL05]
                 \R [CM_CAN_HL13]

\ID SBSW_CAN_HL06
 \DESCRIPTION Call Can_GenericPrecopy() with parameter data pointer. The data pointer is used for read access and it is always a valid pointer.
 \COUNTERMEASURE \R [CM_CAN_HL25]
                 \R [CM_CAN_HL26]

\ID SBSW_CAN_HL07
 \DESCRIPTION Call CanIf_RxIndication() with parameter data pointer. The data pointer is used for read access and it is always a valid pointer.
 \COUNTERMEASURE \R [CM_CAN_HL25]
                 \R [CM_CAN_HL26]

\ID SBSW_CAN_HL08
 \DESCRIPTION Write access to CanIsBusOff with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL06]

\ID SBSW_CAN_HL09
 \DESCRIPTION Write access to CanIsWakeup with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL07]

\ID SBSW_CAN_HL10
 \DESCRIPTION Write access to VersionInfo pointer within function Can_GetVersionInfo()
 \COUNTERMEASURE \N caller of Can_GetVersionInfo() has to ensure that VersionInfo pointer is valid. (global description available)

\ID SBSW_CAN_HL11
 \DESCRIPTION Write access to CanLastInitObject with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL08]

\ID SBSW_CAN_HL12
 \DESCRIPTION Write access to CanInterruptCounter with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL09]

\ID SBSW_CAN_HL13
 \DESCRIPTION Write access to CanTimeoutCall with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL10]

\ID SBSW_CAN_HL14
 \DESCRIPTION Write access to CanIsHardwareCanceled with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL11]

\ID SBSW_CAN_HL15
 \DESCRIPTION Write access to CanLoopTimeout with channel and source as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL22]

\ID SBSW_CAN_HL16
 \DESCRIPTION Call CanLL_CanInterruptDisable() with parameter CanInterruptOldStatus pointer.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL12]

\ID SBSW_CAN_HL17
 \DESCRIPTION Call CanHL_SortlogTxObjHandlePrioList() with parameter logTxObjHandlePrioList pointer.
 \COUNTERMEASURE \R [CM_CAN_HL19]

\ID SBSW_CAN_HL18
 \DESCRIPTION Write access to CanRxQueueBuffer with queue write index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL24]
                 \R [CM_CAN_HL14]

\ID SBSW_CAN_HL19
 \DESCRIPTION Write access to CanRxQueueBuffer.data with queue write index and data index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL17]
                 \R [CM_CAN_HL14]
                 \R [CM_CAN_HL15]

\ID SBSW_CAN_HL20
 \DESCRIPTION Write access to CanMirrorModeState with channel as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL16]

\ID SBSW_CAN_HL21
 \DESCRIPTION Write access to logTxObjHandlePrioList with muxTx as index.
 \COUNTERMEASURE \R [CM_CAN_HL19]

\ID SBSW_CAN_HL22
 \DESCRIPTION Write access to CanTxBasicDataBuffer with channel and muxTx as index.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL20]

\ID SBSW_CAN_HL23
 \DESCRIPTION Write access to CanActiveSendId with logTxObjHandle as index.
 \COUNTERMEASURE \R [CM_CAN_HL21]
                 \R [CM_CAN_HL13]

\ID SBSW_CAN_HL24
 \DESCRIPTION Call Appl_GenericPreTransmit() with parameter PduInfoPtr_var pointer
 \COUNTERMEASURE \N The pointer is static and always valid.

\ID SBSW_CAN_HL25
 \DESCRIPTION Call CanIf_CancelTxConfirmation() with parameter CanActiveSendId[logTxObjHandle] pointer.
 \COUNTERMEASURE \R [CM_CAN_HL13]
                 \R [CM_CAN_HL21]

\ID SBSW_CAN_HL26
 \DESCRIPTION Call CanHL_RxBasicMsgReceivedBegin(), CanHL_RxBasicMsgReceivedSearch(), CanHL_RxMsgReceivedNotification() and CanHL_RxBasicMsgReceivedEnd() with parameter rxBasicInfo pointer.
 \COUNTERMEASURE \N The pointer is static and always valid.

\ID SBSW_CAN_HL27
 \DESCRIPTION Call CanHL_RxFullMsgReceivedBegin(), CanHL_RxFullMsgReceivedSearch(), CanHL_RxFullReceivedNotification() and CanHL_RxFullMsgReceivedEnd() with parameter rxFullInfo pointer.
 \COUNTERMEASURE \N The pointer is static and always valid.

\ID SBSW_CAN_HL28
 \DESCRIPTION Call CanHL_WritePrepare(), CanHL_WriteStart() and CanHL_WritePrepareCancelTx() with parameter PduInfo pointer.
 \COUNTERMEASURE \N Caller ensures validity of pointer parameter.

\ID SBSW_CAN_HL29
 \DESCRIPTION Write access to rxBasicInfo.
 \COUNTERMEASURE \N The structure is static and always valid.

\ID SBSW_CAN_HL30
 \DESCRIPTION Write access to rxFullInfo.
 \COUNTERMEASURE \N The structure is static and always valid.

\ID SBSW_CAN_HL31
 \DESCRIPTION Call Initialization subroutines with initInfo pointer as parameter.
 \COUNTERMEASURE \N The structure is static and always valid (pointer to a local stack variable)

\ID SBSW_CAN_HL32
 \DESCRIPTION Call Appl_GenericConfirmation with canPdu pointer as parameter.
 \COUNTERMEASURE \N The structure is static and always valid.

\ID SBSW_CAN_HL33
 \DESCRIPTION Write access to rxInfo pointer.
 \COUNTERMEASURE \N Caller ensures validity of pointer parameter.

\ID SBSW_CAN_HL34
 \DESCRIPTION Write access to CanMailboxState with mailbox handle as index.
 \COUNTERMEASURE \R [CM_CAN_HL28]

\ID SBSW_CAN_HL35
 \DESCRIPTION Write access to CAN cell register.
 \COUNTERMEASURE \N Caller ensures validity of pointer parameter.

\ID SBSW_CAN_HL36
 \DESCRIPTION Write access to initInfo structure as pointer.
 \COUNTERMEASURE \N The structure is static and always valid.

\ID SBSW_CAN_HL37
 \DESCRIPTION Call GetElapsedValue with timer value pointers as parameter.
 \COUNTERMEASURE \N The timer values are static and always valid.

\ID SBSW_CAN_HL38
 \DESCRIPTION Call GetCounterValue with timer value pointers as parameter.
 \COUNTERMEASURE \R [CM_CAN_HL01]
                 \R [CM_CAN_HL22]

SBSW_JUSTIFICATION_END */

/* Counter measurement description

\CM_CAN_HL01 As addition to Saturation (see below), a runtime DET check ensures controller index is always smaller than number of elements in arrays with controller amount as dimension.
             (CanStatusReq, CanLogStatus, CanIsBusOff, CanIsWakeup, CanLastInitObject, CanInterruptCounter, CanTimeoutCall, CanIsHardwareCanceled, CanMirrorModeState, CanTxBasicDataBuffer <--> SizeOfLogStatus)
\CM_CAN_HL02 Qualified use-case with SATURATION-strategy (Var: CanStatusReq).
\CM_CAN_HL03 Qualified use-case with SATURATION-strategy (Var: CanLogStatus).
\CM_CAN_HL04 Qualified use-case with SATURATION-strategy (Var: CanActiveSendState).
\CM_CAN_HL05 Qualified use-case with SATURATION-strategy (Var: CanActiveSendPdu).
\CM_CAN_HL06 Qualified use-case with SATURATION-strategy (Var: CanIsBusOff).
\CM_CAN_HL07 Qualified use-case with SATURATION-strategy (Var: CanIsWakeup).
\CM_CAN_HL08 Qualified use-case with SATURATION-strategy (Var: CanLastInitObject).
\CM_CAN_HL09 Qualified use-case with SATURATION-strategy (Var: CanInterruptCounter).
\CM_CAN_HL10 Qualified use-case with SATURATION-strategy (Var: CanTimeoutCall).
\CM_CAN_HL11 Qualified use-case with SATURATION-strategy (Var: CanIsHardwareCanceled).
\CM_CAN_HL12 Qualified use-case with SATURATION-strategy (Var: CanInterruptOldStatus).
\CM_CAN_HL13 Qualified use-case with SATURATION-strategy (Var: CanActiveSendState, CanActiveSendPdu, CanActiveSendId).
\CM_CAN_HL14 Qualified use-case with SATURATION-strategy (Var: CanRxQueueBuffer).
\CM_CAN_HL15 Qualified use-case with SATURATION-strategy (Var: CanRxQueueBuffer).
\CM_CAN_HL16 Qualified use-case with SATURATION-strategy (Var: CanMirrorModeState).
\CM_CAN_HL17 A runtime DET check ensures DLC index is always smaller than the dimension of CanRxQueueBuffer.data.
\CM_CAN_HL18 A runtime DET check ensures HRH values is always in range of start stop index of the given mailbox type.
\CM_CAN_HL19 Static defined size of logTxObjHandlePrioList (muxTx limited to 1 or 3 by preprocessor define), or pointer to this static variable used.
\CM_CAN_HL20 Qualified use-case with SATURATION-strategy (Var: CanTxBasicDataBuffer).
\CM_CAN_HL21 Qualified use-case with SATURATION-strategy (Var: CanActiveSendId).
\CM_CAN_HL22 A runtime DET check ensures source index for LoopTimeout array is always smaller than the dimension of LoopTimeout.
\CM_CAN_HL24 A runtime check ensures RxQueue write index is always smaller than the dimension of RxQueue.
\CM_CAN_HL25 A runtime check ensures RxQueue read index is always smaller than the dimension of RxQueue.
\CM_CAN_HL26 Qualified use-case with SATURATION-strategy (Var: RxQueueInfo).
\CM_CAN_HL27 A runtime DET check ensures txObjHandle is a valid hardware index.
\CM_CAN_HL28 Qualified use-case with SATURATION-strategy (Var: CanMailboxState).

*/

/****************************************************************************/
/*  Coverage Justification                                                  */
/****************************************************************************/
/* START_COVERAGE_JUSTIFICATION

\ID COV_CAN_MISRA
  \ACCEPT XF
  \ACCEPT TX
  \REASON only used for MISRA analysis not active in production code.

\ID COV_CAN_COMPATIBILITY
  \ACCEPT TX
  \ACCEPT XF
  \REASON The condition checks whether a switch is defined and conditionally assigns a default value. This is used to ensure compatibility to older AUTOSAR/Component versions. 

\ID COV_CAN_INTERNAL
  \ACCEPT XF
  \ACCEPT TX
  \REASON This switch is always active within CAN driver context. Secure visibility of internal interface and cannot be stimulated to off while test. The code is verified by code inspection.

\ID COV_CAN_USER_CONFIG
  \ACCEPT TX
  \REASON This switch is used to ensure compatibility to none Vector stacks. It will be deactivated on demand in a special integration SIP. The code is verified by code inspection.

\ID COV_CAN_TESTSTIMULATION
  \ACCEPT TX
  \ACCEPT XF
  \REASON It is not possible to stimulate this code by Testsuite due to internal visibility. The code is verified by code inspection.

\ID COV_CAN_MICROSAR_VERSION
  \ACCEPT TX
  \ACCEPT TX tx tx
  \ACCEPT TX tx xf
  \ACCEPT TX xf tx
  \ACCEPT TX xf xf
  \ACCEPT TX tx tf
  \ACCEPT XF
  \ACCEPT XF xf xf
  \ACCEPT TF tx tf
  \ACCEPT TF xf tf
  \ACCEPT TF tf tx
  \REASON The MicroSar version is not changeable in a project. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_MULTI_ECU_CONFIG
  \ACCEPT XF
  \REASON The feature Multiple ECU Configurations is not supported for MSR403 but will be used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_AMD_RUNTIME_MEASUREMENT
  \ACCEPT XF
  \REASON The feature AMD Runtime Measurement is not supported for SafeBSW but will be used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_DEV_TIMEOUT_DETECT
  \ACCEPT XF
  \REASON The feature Develop Timeout Detect is not supported for SafeBSW but will be used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_BUSOFF_SUPPORT_API
  \ACCEPT TX
  \ACCEPT XF
  \REASON The feature Busoff Support API is not supported for SafeBSW but will be used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_EXTENDED_STATE_MACHINE
  \ACCEPT XF
  \REASON The feature Extended State Machine is not supported for SafeBSW but will be used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_DYNAMIC_FULLCAN_ID
  \ACCEPT TX
  \ACCEPT XF
  \REASON The feature Dynamic FullCAN ID is always supported for SafeBSW but may be not used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_FINALMAGICNUMBER
  \ACCEPT TX
  \REASON Switch is always true is OK here no side effect will occur when switch is false verified by review.

\ID COV_CAN_SAFE_BSW_EXCLUSION
  \ACCEPT XF xf tx xf xf tx xf xf xf xf xf xf tx xf tx
  \REASON SafeBsw restricted feature will not be enforced to be deactivated or activated.

\ID COV_CAN_BUSOFF_NOT_IN_ALL_CONFIG
  \ACCEPT X
  \ACCEPT XF
  \REASON BUSOFF not stimulated in each configruation. The behavior does not depend on each configuration variant but TCASE-274 takes long runtime and will not be executed for each configuration.   

\ID COV_CAN_WAKEUP_CHANNEL_NOT_IN_ALL_CONFIG
  \ACCEPT XF
  \ACCEPT TX
  \REASON Wakeup may be always activated or deactivated depend on configuration. Not all configurations contain activated or deactivated wakeup for at least one controller, but is sufficiantly tested in some configuations with both settings.

---------------- LL ------------------

\ID COV_CAN_FIX_VERSION
  \ACCEPT XF tx 
  \ACCEPT TX xf
  \ACCEPT TF
  \ACCEPT XF
  \ACCEPT XX
  \REASON The condition checks for revision/hardware specific defines which do not change. The code is verified by code inspection.

\ID COV_CAN_FIX_VERSION2
  \ACCEPT XF tf xf
  \ACCEPT XF xf tf
  \ACCEPT XF xf xf
  \ACCEPT XF xx xx
  \ACCEPT XX xx xx
  \ACCEPT TF tf xf
  \REASON The condition checks for revision/hardware specific defines which do not change. The code is verified by code inspection.

\ID COV_CAN_FIX_VERSION3
  \ACCEPT	TF tf xf xf
  \ACCEPT	TX tf tf xf
  \ACCEPT	TX tf xf xf
  \ACCEPT	TX tx tx tx
  \ACCEPT	XF tf tf tf
  \ACCEPT	XF tf xf tf
  \ACCEPT	XF tx xf tx
  \ACCEPT	XX xx xx xx
  \ACCEPT	XX
  \REASON The condition checks for revision/hardware specific defines which do not change. The code is verified by code inspection.

\ID COV_CAN_GEN_HW_START_STOP_IDX
  \ACCEPT TX
  \REASON The feature GEN_HW_START_STOP is always supported for SafeBSW but may be not used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_PARTIAL_NETWORK
  \ACCEPT XF
  \REASON The feature Partial Network is not supported for SafeBSW but be used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_SLEEP_SUPPORT
  \ACCEPT TX
  \REASON The feature is platform specific - always active.

\ID COV_CAN_WAKEUP_SUPPORT
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_EMULATE_SLEEP
  \ACCEPT TX
  \ACCEPT TX tf tx
  \ACCEPT TX tx tx
  \ACCEPT TX xf tx
  \ACCEPT XF
  \REASON The feature Emulated Sleep is always supported for SafeBSW but used in MSR3. A MSSV plugin enforces this configuration for SafeBSW.

\ID COV_CAN_TX_POLLING
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_RX_POLLING
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_RX_BASICCAN_POLLING
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_RX_FULLCAN_POLLING
  \ACCEPT TF
  \REASON The feature configuration specific - fully supported.

\ID COV_CAN_ERROR_POLLING
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_WAKEUP_POLLING
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_INDIVIDUAL_POLLING
  \ACCEPT TF
  \REASON The feature is platform and Project specific.

\ID COV_CAN_TX_POLLING_OR_CANCEL_IN_HW_TASK
  \ACCEPT TF tf tf tx
  \ACCEPT TF tf tf xf
  \REASON The feature is platform specific - C_HL_ENABLE_CANCEL_IN_HW_TASK is always true or false.

\ID COV_CAN_GENERIC_CONFIRMATION_API2
  \ACCEPT TF
  \REASON The feature is platform and Project specific - fully supported.

\ID COV_CAN_FD_SUPPORT
  \ACCEPT TF
  \REASON The feature is platform and Project specific - fully supported.

\ID COV_CAN_MULTIPLE_BASICCAN
  \ACCEPT TF
  \REASON The feature is platform and Project specific - fully supported.

\ID COV_CAN_TX_FULLCAN_OBJECTS
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_RX_FULLCAN_OBJECTS
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_HW_TRANSMIT_CANCELLATION
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_CANCEL_IN_HW
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_HARDWARE_CANCELLATION
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_EXTENDED_ID
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_MIXED_ID
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_SECURE_TEMP_BUFFER
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_COMMON_CAN
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_OVERRUN_NOTIFICATION
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_MULTIPLEXED_TRANSMISSION
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_RX_QUEUE
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_TXINDIRECTIONHWTOLOG
  \ACCEPT XF
  \REASON The feature is platform specific - always deactivated.

\ID COV_CAN_HW_LAYOUT_TXBASIC_FIRST
  \ACCEPT XF
  \REASON The feature is platform specific - always deactivated.

\ID COV_CAN_TX_FULLCAN_HWHANDLE_REVERSE
  \ACCEPT XF
  \REASON The feature is platform specific - always deactivated.

\ID COV_CAN_RX_FULLCAN_HWHANDLE_REVERSE
  \ACCEPT XF
  \REASON The feature is platform specific - always deactivated.

\ID COV_CAN_BASICCAN_HWHANDLE_REVERSE
  \ACCEPT XF
  \REASON The feature is platform specific - always deactivated.

\ID COV_CAN_EXTENDED_STATUS
  \ACCEPT TX
  \REASON The feature is platform specific - always active.

\ID COV_CAN_OVERRUN_IN_STATUS
  \ACCEPT XF
  \REASON The feature is platform specific - always deactivated.

\ID COV_CAN_RxBasicMsgReceivedBegin
  \ACCEPT TX
  \REASON The feature is platform specific - always active.

\ID COV_CAN_RxFullMsgReceivedBegin
  \ACCEPT TX
  \REASON The feature is platform specific - always active.

\ID COV_CAN_HW_EXIT_TRANSMIT
  \ACCEPT TX
  \REASON The feature is platform specific - always active.

\ID COV_CAN_HARDWARE_FAILURE
  \ACCEPT TX
  \ACCEPT XF
  \ACCEPT XF xf xf
  \ACCEPT TF tf xf
  \ACCEPT TF tf tx
  \REASON The condition checks for hardware failures that cannot be stimulated. The code is verified by code inspection.

\ID COV_CAN_GENDATA_FAILURE
  \ACCEPT TX
  \ACCEPT XF
  \ACCEPT XF xf xf
  \ACCEPT TF tf xf
  \REASON The condition checks for generated data failures that cannot be simulated. The code is verified by code inspection.

\ID COV_CAN_GENDATA_NOT_IN_ALL_CONFIG
  \ACCEPT TX
  \ACCEPT XF
  \REASON Generated data does not contain all data sets but checked in code. Not encapsulated with preprocessor switch to simplify code.  

\ID COV_CAN_OS_USAGE
  \ACCEPT TX
  \ACCEPT TX xf tx
  \ACCEPT TX tx xf
  \ACCEPT XF
  \ACCEPT XF xf tx
  \REASON Os may be used in component test or not. The code is verified by code inspection.

\ID COV_CAN_LOCK_ISR_BY_APPL
  \ACCEPT TX tf tf
  \ACCEPT TF xf tf 
  \REASON CAN interrupts never locked by application only within tests. It is not part of the component test to check application code. The code is verified by code inspection.

\ID COV_CAN_RAM_CHECK
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_RAM_CHECK_EXTENDED
  \ACCEPT TF
  \REASON The feature is platform specific - fully supported.

\ID COV_CAN_TIMEOUT_DURATION
  \ACCEPT TF
  \REASON Hardware loop time out is platform specific never reached.

\ID COV_CAN_TRANSITION_REQUEST_START
  \ACCEPT TF
  \ACCEPT TF tf tf
  \REASON Mode transition is platform specific always true or false.

\ID COV_CAN_TRANSITION_REQUEST_STOP
  \ACCEPT TF
  \ACCEPT TF tf tf
  \REASON Mode transition is platform specific always true or false.

\ID COV_CAN_TRANSITION_REQUEST_WAKEUP
  \ACCEPT TF
  \ACCEPT TF tf tf
  \REASON Mode transition is platform specific always true or false.

\ID COV_CAN_TRANSITION_REQUEST_SLEEP
  \ACCEPT TF
  \ACCEPT TF tf tf
  \REASON Mode transition is platform specific always true or false.

\ID COV_CAN_BASICCAN_SEARCH_LINEAR
  \ACCEPT TX
  \ACCEPT TF tx tf
  \REASON Received BasicCAN mailbox is always a valid object and found while search.

\ID COV_CAN_FULLCAN_SEARCH_LINEAR
  \ACCEPT TX
  \ACCEPT TF tx tf
  \REASON Received FullCAN mailbox is always a valid object and found while search.

\ID COV_CAN_RAM_CHECK_NO_STIMULATION
  \ACCEPT X
  \ACCEPT XF
  \ACCEPT TX
  \ACCEPT XF xf xf
  \REASON some configurations do not stimulate RamCheck by test suite, to check the standard CAN driver behaviour.

END_COVERAGE_JUSTIFICATION */ 

/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */

/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */

/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */

/* Kernbauer Version: 1.09 Konfiguration: DrvCan_Rh850McanAsr Erzeugungsgangnummer: 362 */

