/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Can
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_Cfg.h
 *   Generation Time: 2018-04-04 16:31:42
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* -----------------------------------------------------------------------------
    Generator Info
 ----------------------------------------------------------------------------- 
  Name:     MICROSAR M_CAN driver Generator
  Version:  3.02.00
  MSN:      Can
  Origin:   CAN
  Descrip:  MICROSAR Can driver generator
  JavaPack: com.vector.cfg.gen.DrvCan_Mpc5700McanAsr
 ----------------------------------------------------------------------------- */

#if !defined(CAN_CFG_H)
#define CAN_CFG_H

/* CAN222, CAN389, CAN365, CAN366, CAN367 */
/* CAN022, CAN047, CAN388, CAN397, CAN390, CAN392  */

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "ComStack_Types.h"

#include "Can_GeneralTypes.h" /* CAN435 */

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL) /* ESCAN00070085 */
# include "Os.h"
#endif

/* -----------------------------------------------------------------------------
    General Switches for CAN module
 ----------------------------------------------------------------------------- */

#ifndef CAN_USE_DUMMY_FUNCTIONS
#define CAN_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CAN_USE_DUMMY_STATEMENT
#define CAN_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CAN_DUMMY_STATEMENT
#define CAN_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CAN_DUMMY_STATEMENT_CONST
#define CAN_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CAN_ATOMIC_VARIABLE_ACCESS
#define CAN_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CAN_PROCESSOR_RH850_1373
#define CAN_PROCESSOR_RH850_1373
#endif
#ifndef CAN_COMP_GREENHILLS
#define CAN_COMP_GREENHILLS
#endif
#ifndef CAN_GEN_GENERATOR_MSR
#define CAN_GEN_GENERATOR_MSR
#endif
#ifndef CAN_CPUTYPE_BITORDER_LSB2MSB
#define CAN_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef CAN_CONFIGURATION_VARIANT_PRECOMPILE
#define CAN_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CAN_CONFIGURATION_VARIANT_LINKTIME
#define CAN_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CAN_CONFIGURATION_VARIANT
#define CAN_CONFIGURATION_VARIANT CAN_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CAN_POSTBUILD_VARIANT_SUPPORT
#define CAN_POSTBUILD_VARIANT_SUPPORT STD_ON
#endif


/* -----------------------------------------------------------------------------
    General Switches from old v_cfg.h
 ----------------------------------------------------------------------------- */
#if !defined(V_GEN_GENERATOR5)
# define V_GEN_GENERATOR5 /* need by LL */
#endif
#if !defined(V_ENABLE_CAN_ASR_ABSTRACTION)
# define V_ENABLE_CAN_ASR_ABSTRACTION /* ATK */
#endif
#define CAN_GEN_COM_STACK_LIB

#if !defined( V_OSTYPE_AUTOSAR )
# define V_OSTYPE_AUTOSAR
#endif

#if (CPU_TYPE == CPU_TYPE_32)
# if !defined( C_CPUTYPE_32BIT )
#  define C_CPUTYPE_32BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_16)
# if !defined( C_CPUTYPE_16BIT )
#  define C_CPUTYPE_16BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_8)
# if !defined( C_CPUTYPE_8BIT )
#  define C_CPUTYPE_8BIT
# endif
#endif
#if (CPU_BIT_ORDER == LSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_LSB2MSB )
#  define C_CPUTYPE_BITORDER_LSB2MSB
# endif
#endif
#if (CPU_BIT_ORDER == MSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_MSB2LSB )
#  define C_CPUTYPE_BITORDER_MSB2LSB
# endif
#endif
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
# if !defined( C_CPUTYPE_LITTLEENDIAN )
#  define C_CPUTYPE_LITTLEENDIAN
# endif
#endif
#if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
# if !defined( C_CPUTYPE_BIGENDIAN )
#  define C_CPUTYPE_BIGENDIAN
# endif
#endif

#if !defined( V_DISABLE_USE_DUMMY_FUNCTIONS )
# define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif
#if !defined( V_ENABLE_USE_DUMMY_STATEMENT )
# define V_ENABLE_USE_DUMMY_STATEMENT
#endif

#if !defined( V_CPU_RH850 )
# define V_CPU_RH850
#endif

#if !defined( C_PROCESSOR_P1XC )
# define C_PROCESSOR_P1XC
#endif
#if !defined( V_PROCESSOR_P1XC )
# define V_PROCESSOR_P1XC
#endif

#if !defined( C_COMP_GHS_RH850_MCAN )
#define C_COMP_GHS_RH850_MCAN
#endif
#if !defined( V_COMP_GHS )
# define V_COMP_GHS
#endif
#if !defined( V_COMP_GHS_RH850 )
# define V_COMP_GHS_RH850
#endif

#if !defined( V_SUPPRESS_EXTENDED_VERSION_CHECK )
# define V_SUPPRESS_EXTENDED_VERSION_CHECK
#endif

/* -----------------------------------------------------------------------------
    Version defines
 ----------------------------------------------------------------------------- */

/* CAN024, CAN023 */
#define CAN_ASR_VERSION              0x0400U
#define CAN_GEN_BASE_CFG5_VERSION    0x0103U
#define CAN_GEN_BASESASR_VERSION     0x0407U
#define CAN_GEN_Mpc5700McanAsr_VERSION              0x0100U
#define CAN_MICROSAR_VERSION         CAN_MSR403

/* -----------------------------------------------------------------------------
    Hardcoded defines
 ----------------------------------------------------------------------------- */

#define CAN_INSTANCE_ID           0

#if !defined(CAN_RX_BASICCAN_TYPE)
# define CAN_RX_BASICCAN_TYPE                 0U
# define CAN_RX_FULLCAN_TYPE                  1U
# define CAN_TX_BASICCAN_TYPE                 2U
# define CAN_TX_FULLCAN_TYPE                  3U
# define CAN_UNUSED_CAN_TYPE                  4U
#endif

#define CAN_INTERRUPT                        0U
#define CAN_POLLING                          1U

#define kCanChannelNotUsed                     CAN_NO_CANIFCHANNELID 

#define CAN_NONE                             0U
/* RAM check (also  none) */
#define CAN_NOTIFY_ISSUE                     1U
#define CAN_NOTIFY_MAILBOX                   2U
#define CAN_EXTENDED                         3U
/* Interrupt lock (also  none) */
#define CAN_DRIVER                           1U
#define CAN_APPL                             2U
#define CAN_BOTH                             3U
/* MicroSar Version */
#define CAN_MSR30                            30U
#define CAN_MSR40                            40U
#define CAN_MSR403                           403U
/* Overrun Notification (als none,appl) */
#define CAN_DET                              1U
/* CAN FD Support */
#define CAN_BRS                              1U
#define CAN_FULL                             2U
/* CAN FD Configuration */
#define CAN_FD_RXONLY                        2U /* FD Baudrate exist (RX) */
#define CAN_FD_RXTX                          1U /* FD Baudrate also used for TX */
/* Generic Confirmation */
#define CAN_API1                             1U
#define CAN_API2                             2U

#define CAN_OS_TICK2MS(tick)     OS_TICKS2MS_OsCounter((tick))     /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_OS_COUNTER_ID        OsCounter

/* -----------------------------------------------------------------------------
    Defines / Switches
 ----------------------------------------------------------------------------- */

/* Version and Issue detection */
#define CAN_VERSION_INFO_API                 STD_OFF   /* CAN106_Conf */
#define CAN_DEV_ERROR_DETECT                 STD_ON   /* CAN064_Conf */
#define CAN_DEV_ERROR_REPORT                 STD_ON
#define CAN_PROD_ERROR_DETECT                STD_OFF
#define CAN_DEV_TIMEOUT_DETECT               STD_OFF
#define CAN_SAFE_BSW                         STD_OFF

/* Interrupt / Polling */
#define CAN_TX_PROCESSING                    CAN_INTERRUPT   /* CAN318_Conf */
#define CAN_RX_PROCESSING                    CAN_INTERRUPT   /* CAN317_Conf */
#define CAN_BUSOFF_PROCESSING                CAN_INTERRUPT   /* CAN314_Conf */
#define CAN_WAKEUP_PROCESSING                CAN_INTERRUPT   /* CAN319_Conf */
#define CAN_INDIVIDUAL_PROCESSING            STD_OFF
#define CAN_INTERRUPT_USED                   STD_ON
#define CAN_NESTED_INTERRUPTS                STD_ON
#define C_ENABLE_OSEK_OS_INTCAT2
#define C_DISABLE_ISRVOID
#define CAN_INTLOCK                          CAN_DRIVER

/* Tx Handling */
#define CAN_MULTIPLEXED_TX_MAX               1U
#define CAN_CANCEL_SUPPORT_API               STD_OFF
#define CAN_TRANSMIT_BUFFER                  STD_ON
#define CAN_MULTIPLEXED_TRANSMISSION         STD_OFF   /* CAN095_Conf */
#define CAN_HW_TRANSMIT_CANCELLATION         STD_OFF   /* CAN069_Conf */
#define CAN_IDENTICAL_ID_CANCELLATION        STD_OFF   /* CAN378_Conf */
#define CAN_MULTIPLE_BASICCAN_TX             STD_OFF

/* Rx Handling */
#define CAN_MULTIPLE_BASICCAN                STD_OFF
#define CAN_RX_QUEUE                         STD_OFF
#define CAN_OVERRUN_NOTIFICATION             CAN_APPL

/* Sleep Wakeup */
#define CAN_SLEEP_SUPPORT                    STD_OFF
#define CAN_WAKEUP_SUPPORT                   STD_OFF   /* CAN330_Conf */

/* Hardware loop check */
#define CAN_HARDWARE_CANCELLATION            STD_ON
#define CAN_TIMEOUT_DURATION                 10UL   /* CAN113_Conf */
#define CAN_LOOP_MAX                         8U

/* Appl calls */
#define CAN_EXTENDED_STATE_MACHINE           STD_OFF
#define CAN_BUSOFF_SUPPORT_API               STD_OFF
#define CAN_HW_LOOP_SUPPORT_API              STD_ON
#define CAN_GENERIC_PRECOPY                  STD_OFF
#define CAN_GENERIC_CONFIRMATION             STD_OFF
#define CAN_GENERIC_PRETRANSMIT              STD_OFF
#define CAN_USE_OS_INTERRUPT_CONTROL         STD_OFF

/* Optimization */
#define CAN_RX_FULLCAN_OBJECTS               STD_ON
#define CAN_TX_FULLCAN_OBJECTS               STD_OFF
#define CAN_RX_BASICCAN_OBJECTS              STD_ON
#define CAN_EXTENDED_ID                      STD_OFF
#define CAN_MIXED_ID                         STD_OFF
#define CAN_ONE_CONTROLLER_OPTIMIZATION      STD_OFF
#define CAN_DYNAMIC_FULLCAN_ID               STD_ON
#define CAN_SECURE_TEMP_BUFFER               STD_OFF
#define C_ENABLE_GEN_HW_START_STOP_IDX
#define CAN_CHANGE_BAUDRATE_API              STD_OFF   /* CAN460_Conf */

/* CAN FD */
#define CAN_SET_BAUDRATE_API                 STD_OFF   /* CAN482_Conf */
#define CAN_FD_SUPPORT                       CAN_FULL

/* Other */
#define CAN_MULTI_ECU_CONFIG                 STD_OFF
#define CAN_COMMON_CAN                       STD_OFF
#define CAN_PARTIAL_NETWORK                  STD_OFF
#define CAN_RAM_CHECK                        CAN_NONE
#define CAN_REINIT_START                     STD_OFF
#define CAN_GET_STATUS                       STD_OFF
#define CAN_RUNTIME_MEASUREMENT_SUPPORT      STD_OFF
#define CAN_PROTECTED_MODE                   STD_OFF
#define CAN_MIRROR_MODE                      STD_OFF
/* -----------------------------------------------------------------------------
    Channel And Maibox
 ----------------------------------------------------------------------------- */
#ifndef C_DRV_INTERNAL
# ifndef kCanNumberOfChannels
#  define kCanNumberOfChannels               1U
# endif
# ifndef kCanNumberOfHwChannels
#  define kCanNumberOfHwChannels             1U
# endif
#endif
#ifndef kCanNumberOfUsedChannels /* ATK only */
# define kCanNumberOfUsedChannels            1U
#endif

#define kCanPhysToLogChannelIndex_1 

#define kCanNumberOfPhysChannels             2U

/* -----------------------------------------------------------------------------
    Symbolic Name Values for Controller, HardwareObject and Baudrates
 ----------------------------------------------------------------------------- */
/* These definitions can change at Link-time and Post-build configuration time. Use them wisely. */



/**
 * \defgroup CanHandleIdsactivated Handle IDs of handle space activated.
 * \brief controllers by CanControllerActivation
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CanConf_CanController_CT_FD1_CAN_b4e1ca3b                     0       /**< [ECU1, ECU2] */
/**\} */
#define CanConf_CN_FD1_CAN_b4e1ca3b_Rx_Std_ECU1 42U
#define CanConf_CN_FD1_CAN_b4e1ca3b_Rx_Std_ECU2 42U
#define CanConf_CN_FD1_CAN_b4e1ca3b_Tx_Std_ECU1 0U
#define CanConf_CN_FD1_CAN_b4e1ca3b_Tx_Std_ECU2 0U
#define CanConf_CanHardwareObject_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 2U
#define CanConf_CanHardwareObject_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 2U
#define CanConf_CanHardwareObject_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be_ECU1 18U
#define CanConf_CanHardwareObject_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be_ECU2 18U
#define CanConf_CanHardwareObject_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU1 29U
#define CanConf_CanHardwareObject_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU2 29U
#define CanConf_CanHardwareObject_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU1 37U
#define CanConf_CanHardwareObject_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU2 37U
#define CanConf_CanHardwareObject_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be_ECU1 22U
#define CanConf_CanHardwareObject_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be_ECU2 22U
#define CanConf_CanHardwareObject_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be_ECU1 25U
#define CanConf_CanHardwareObject_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be_ECU2 25U
#define CanConf_CanHardwareObject_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be_ECU1 40U
#define CanConf_CanHardwareObject_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be_ECU2 40U
#define CanConf_CanHardwareObject_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be_ECU1 39U
#define CanConf_CanHardwareObject_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be_ECU2 39U
#define CanConf_CanHardwareObject_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be_ECU1 41U
#define CanConf_CanHardwareObject_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be_ECU2 41U
#define CanConf_CanHardwareObject_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be_ECU1 16U
#define CanConf_CanHardwareObject_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be_ECU2 16U
#define CanConf_CanHardwareObject_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be_ECU1 13U
#define CanConf_CanHardwareObject_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be_ECU2 13U
#define CanConf_CanHardwareObject_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be_ECU1 15U
#define CanConf_CanHardwareObject_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be_ECU2 15U
#define CanConf_CanHardwareObject_CanIfRxPduCfg_Nm_Dummy_ECU1 1U
#define CanConf_CanHardwareObject_CanIfRxPduCfg_Nm_Dummy_ECU2 1U
#define CanConf_CanHardwareObject_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 14U
#define CanConf_CanHardwareObject_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 14U
#define CanConf_CanHardwareObject_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be_ECU1 12U
#define CanConf_CanHardwareObject_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be_ECU2 12U
#define CanConf_CanHardwareObject_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be_ECU1 30U
#define CanConf_CanHardwareObject_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be_ECU2 30U
#define CanConf_CanHardwareObject_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be_ECU1 35U
#define CanConf_CanHardwareObject_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be_ECU2 35U
#define CanConf_CanHardwareObject_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be_ECU1 32U
#define CanConf_CanHardwareObject_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be_ECU2 32U
#define CanConf_CanHardwareObject_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be_ECU1 31U
#define CanConf_CanHardwareObject_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be_ECU2 31U
#define CanConf_CanHardwareObject_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be_ECU1 17U
#define CanConf_CanHardwareObject_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be_ECU2 17U
#define CanConf_CanHardwareObject_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 9U
#define CanConf_CanHardwareObject_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 9U
#define CanConf_CanHardwareObject_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be_ECU1 21U
#define CanConf_CanHardwareObject_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be_ECU2 21U
#define CanConf_CanHardwareObject_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be_ECU1 20U
#define CanConf_CanHardwareObject_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be_ECU2 20U
#define CanConf_CanHardwareObject_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU1 24U
#define CanConf_CanHardwareObject_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU2 24U
#define CanConf_CanHardwareObject_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 23U
#define CanConf_CanHardwareObject_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 23U
#define CanConf_CanHardwareObject_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be_ECU1 33U
#define CanConf_CanHardwareObject_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be_ECU2 33U
#define CanConf_CanHardwareObject_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 19U
#define CanConf_CanHardwareObject_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 19U
#define CanConf_CanHardwareObject_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 38U
#define CanConf_CanHardwareObject_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 38U
#define CanConf_CanHardwareObject_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be_ECU1 4U
#define CanConf_CanHardwareObject_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be_ECU2 4U
#define CanConf_CanHardwareObject_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 5U
#define CanConf_CanHardwareObject_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 5U
#define CanConf_CanHardwareObject_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be_ECU1 8U
#define CanConf_CanHardwareObject_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be_ECU2 8U
#define CanConf_CanHardwareObject_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU1 7U
#define CanConf_CanHardwareObject_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU2 7U
#define CanConf_CanHardwareObject_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be_ECU1 6U
#define CanConf_CanHardwareObject_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be_ECU2 6U
#define CanConf_CanHardwareObject_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU1 10U
#define CanConf_CanHardwareObject_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU2 10U
#define CanConf_CanHardwareObject_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be_ECU1 3U
#define CanConf_CanHardwareObject_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be_ECU2 3U
#define CanConf_CanHardwareObject_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU1 11U
#define CanConf_CanHardwareObject_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU2 11U
#define CanConf_CanHardwareObject_TransGearData_FD1_oFD1_CAN_Rx_3abd61be_ECU1 26U
#define CanConf_CanHardwareObject_TransGearData_FD1_oFD1_CAN_Rx_3abd61be_ECU2 26U
#define CanConf_CanHardwareObject_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be_ECU1 34U
#define CanConf_CanHardwareObject_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be_ECU2 34U
#define CanConf_CanHardwareObject_WheelData_FD1_oFD1_CAN_Rx_3abd61be_ECU1 28U
#define CanConf_CanHardwareObject_WheelData_FD1_oFD1_CAN_Rx_3abd61be_ECU2 28U
#define CanConf_CanHardwareObject_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be_ECU1 27U
#define CanConf_CanHardwareObject_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be_ECU2 27U
#define CanConf_CanHardwareObject_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1 36U
#define CanConf_CanHardwareObject_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2 36U




#define CAN_ENABLE_SELECTABLE_PB

/* -----------------------------------------------------------------------------
    Types
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */

/* HW specific Pre Can Config H file */

/* -----------------------------------------------------------------------------
    &&&~ Defines / Switches (Hw specific ) 
 ----------------------------------------------------------------------------- */

#define C_ENABLE_GENERATE_FULLCAN_MASK               /* FullCAN filter generation supported */

#define CAN_ISR_ALL_CHAN          STD_OFF
#define CAN_SHM_RAM_MULTIPLE      STD_ON

typedef VAR(uint32, CAN_VAR_NOINIT) tCanLLCanIntOld;

/* !HW specific Pre Can Config H file */ 
/* HW specific END */ 

typedef VAR(uint8, TYPEDEF) CanChannelHandle;

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL)
typedef TickType Can_ExternalTickType;
#else
typedef uint32 Can_ExternalTickType;
#endif

typedef VAR(Can_ExternalTickType, TYPEDEF) Can_LoopTimeout_dim_type[CAN_LOOP_MAX+1];         /* (ASR3: without +1) PRQA S 0850 */ /* MD_MSR_19.8 */




/* -----------------------------------------------------------------------------
    CONST Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    VAR Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */
/* HW specific global H file */

/* !HW specific global H file */
/* HW specific END */


/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/* Can_GlobalConfig: CAN354_Conf */
/* Can_ConfigType: CAN413 */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPCDataSwitches  Can Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_ACTIVESENDPDU                                             STD_ON
#define CAN_ACTIVESENDSTATE                                           STD_ON
#define CAN_BTP                                                       STD_ON
#define CAN_BASEDLL_GENERATORVERSION                                  STD_ON
#define CAN_BASISADR                                                  STD_ON
#define CAN_BUFFERCONFIG                                              STD_ON
#define CAN_RXBCOFBUFFERCONFIG                                        STD_ON
#define CAN_RXF0COFBUFFERCONFIG                                       STD_ON
#define CAN_RXF1COFBUFFERCONFIG                                       STD_ON
#define CAN_TXBCOFBUFFERCONFIG                                        STD_ON
#define CAN_TXEFCOFBUFFERCONFIG                                       STD_ON
#define CAN_BUSOFFNOTIFICATION                                        STD_ON
#define CAN_CAN_FD_NISO                                               STD_ON
#define CAN_C_ENABLE_MPC5700_MCAN_CREL_SSTEP                          STD_ON
#define CAN_C_ENABLE_MPC5700_MCAN_CREL_STEP                           STD_ON
#define CAN_C_ENABLE_MPC5700_MCAN_MAJOR_CREL                          STD_ON
#define CAN_CANIFCHANNELID                                            STD_ON
#define CAN_CANINTERRUPTCOUNTER                                       STD_ON
#define CAN_CANINTERRUPTOLDSTATUS                                     STD_ON
#define CAN_CONTROLLERCONFIG                                          STD_ON
#define CAN_CANCONTROLLERDEFAULTBAUDRATEIDXOFCONTROLLERCONFIG         STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.CanControllerDefaultBaudrateIdx' Reason: '/ActiveEcuC/Can/CanGeneral[0:CanSetBaudrateApi] is configured to 'false'' and Deactivateable: 'Can_ControllerConfig.CanControllerDefaultBaudrateIdx' Reason: '/ActiveEcuC/Can/CanGeneral[0:CanSetBaudrateApi] is configured to 'false'' */
#define CAN_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG            STD_ON
#define CAN_RXBASICHANDLEMAXOFCONTROLLERCONFIG                        STD_ON
#define CAN_RXBASICHANDLESTARTOFCONTROLLERCONFIG                      STD_ON
#define CAN_RXBASICHANDLESTOPOFCONTROLLERCONFIG                       STD_ON
#define CAN_RXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_RXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHANDLEMAXOFCONTROLLERCONFIG                         STD_ON
#define CAN_RXFULLHANDLESTARTOFCONTROLLERCONFIG                       STD_ON
#define CAN_RXFULLHANDLESTOPOFCONTROLLERCONFIG                        STD_ON
#define CAN_RXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_TXBASICHANDLEMAXOFCONTROLLERCONFIG                        STD_ON
#define CAN_TXBASICHANDLESTARTOFCONTROLLERCONFIG                      STD_ON
#define CAN_TXBASICHANDLESTOPOFCONTROLLERCONFIG                       STD_ON
#define CAN_TXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_TXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHANDLEMAXOFCONTROLLERCONFIG                         STD_ON
#define CAN_TXFULLHANDLESTARTOFCONTROLLERCONFIG                       STD_ON
#define CAN_TXFULLHANDLESTOPOFCONTROLLERCONFIG                        STD_ON
#define CAN_TXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                         STD_ON
#define CAN_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                       STD_ON
#define CAN_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                        STD_ON
#define CAN_UNUSEDHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_UNUSEDHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_FBTP                                                      STD_ON
#define CAN_FINALMAGICNUMBER                                          STD_OFF  /**< Deactivateable: 'Can_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_GFC                                                       STD_ON
#define CAN_IDENTITYSELECTED                                          STD_ON
#define CAN_INITDATAHASHCODE                                          STD_OFF  /**< Deactivateable: 'Can_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECTBAUDRATE                                        STD_ON
#define CAN_INITOBJECTFDBRSCONFIG                                     STD_ON
#define CAN_INITOBJECTSTARTINDEX                                      STD_ON
#define CAN_INTENABLE                                                 STD_ON
#define CAN_ISBUSOFF                                                  STD_ON
#define CAN_ISHARDWARECANCELED                                        STD_ON
#define CAN_ISTTCAN                                                   STD_ON
#define CAN_LASTINITOBJECT                                            STD_ON
#define CAN_LOGSTATUS                                                 STD_ON
#define CAN_LOOPTIMEOUT                                               STD_ON
#define CAN_MAILBOX                                                   STD_ON
#define CAN_DLC_FIFOOFMAILBOX                                         STD_ON
#define CAN_FDPADDINGOFMAILBOX                                        STD_ON
#define CAN_HWHANDLEOFMAILBOX                                         STD_ON
#define CAN_IDVALUEOFMAILBOX                                          STD_ON
#define CAN_MAILBOXTYPEOFMAILBOX                                      STD_ON
#define CAN_MAXDATALENOFMAILBOX                                       STD_ON
#define CAN_MSGCONTROLLEROFMAILBOX                                    STD_ON
#define CAN_MAXRXDATALEN                                              STD_ON
#define CAN_MAXTXDATALEN                                              STD_ON
#define CAN_NONFDOBJECTSPENDINGFLAG                                   STD_ON
#define CAN_PHYSTOLOGCHANNEL                                          STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSION                              STD_ON
#define CAN_SIDFC                                                     STD_ON
#define CAN_FLSSAOFSIDFC                                              STD_ON
#define CAN_LSSOFSIDFC                                                STD_ON
#define CAN_SIDFEENDIDXOFSIDFC                                        STD_ON
#define CAN_SIDFESTARTIDXOFSIDFC                                      STD_ON
#define CAN_SIDFEUSEDOFSIDFC                                          STD_ON
#define CAN_SIDFE                                                     STD_ON
#define CAN_SHMADR                                                    STD_ON
#define CAN_RXBAOFSHMADR                                              STD_ON
#define CAN_RXF0AOFSHMADR                                             STD_ON
#define CAN_RXF1AOFSHMADR                                             STD_ON
#define CAN_SIDFAOFSHMADR                                             STD_ON
#define CAN_STARTADROFSHMADR                                          STD_ON
#define CAN_STOPADROFSHMADR                                           STD_ON
#define CAN_TXBAOFSHMADR                                              STD_ON
#define CAN_TXEFAOFSHMADR                                             STD_ON
#define CAN_XIDFAOFSHMADR                                             STD_ON
#define CAN_SHMELEMENTSIZE                                            STD_ON
#define CAN_F0DSOFSHMELEMENTSIZE                                      STD_ON
#define CAN_F1DSOFSHMELEMENTSIZE                                      STD_ON
#define CAN_RBDSOFSHMELEMENTSIZE                                      STD_ON
#define CAN_TBDSOFSHMELEMENTSIZE                                      STD_ON
#define CAN_TEFBDSOFSHMELEMENTSIZE                                    STD_ON
#define CAN_SIZEOFACTIVESENDPDU                                       STD_ON
#define CAN_SIZEOFACTIVESENDSTATE                                     STD_ON
#define CAN_SIZEOFBTP                                                 STD_ON
#define CAN_SIZEOFBASISADR                                            STD_ON
#define CAN_SIZEOFBUFFERCONFIG                                        STD_ON
#define CAN_SIZEOFBUSOFFNOTIFICATION                                  STD_ON
#define CAN_SIZEOFCANIFCHANNELID                                      STD_ON
#define CAN_SIZEOFCANINTERRUPTCOUNTER                                 STD_ON
#define CAN_SIZEOFCANINTERRUPTOLDSTATUS                               STD_ON
#define CAN_SIZEOFCONTROLLERCONFIG                                    STD_ON
#define CAN_SIZEOFFBTP                                                STD_ON
#define CAN_SIZEOFGFC                                                 STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATE                                  STD_ON
#define CAN_SIZEOFINITOBJECTFDBRSCONFIG                               STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEX                                STD_ON
#define CAN_SIZEOFINTENABLE                                           STD_ON
#define CAN_SIZEOFISBUSOFF                                            STD_ON
#define CAN_SIZEOFISHARDWARECANCELED                                  STD_ON
#define CAN_SIZEOFISTTCAN                                             STD_ON
#define CAN_SIZEOFLASTINITOBJECT                                      STD_ON
#define CAN_SIZEOFLOGSTATUS                                           STD_ON
#define CAN_SIZEOFLOOPTIMEOUT                                         STD_ON
#define CAN_SIZEOFMAILBOX                                             STD_ON
#define CAN_SIZEOFNONFDOBJECTSPENDINGFLAG                             STD_ON
#define CAN_SIZEOFPHYSTOLOGCHANNEL                                    STD_ON
#define CAN_SIZEOFSIDFC                                               STD_ON
#define CAN_SIZEOFSIDFE                                               STD_ON
#define CAN_SIZEOFSHMADR                                              STD_ON
#define CAN_SIZEOFSHMELEMENTSIZE                                      STD_ON
#define CAN_SIZEOFSTATUSREQ                                           STD_ON
#define CAN_SIZEOFTDCR                                                STD_ON
#define CAN_SIZEOFTXBCR                                               STD_ON
#define CAN_SIZEOFTXBE                                                STD_ON
#define CAN_SIZEOFTXBRP                                               STD_ON
#define CAN_SIZEOFTXOFFSETHWTOLOG                                     STD_ON
#define CAN_SIZEOFXIDAM                                               STD_ON
#define CAN_SIZEOFXIDFC                                               STD_ON
#define CAN_SIZEOFXIDFE                                               STD_ON
#define CAN_STATUSREQ                                                 STD_ON
#define CAN_TDCR                                                      STD_ON
#define CAN_TXBCR                                                     STD_ON
#define CAN_TXBE                                                      STD_ON
#define CAN_T0OFTXBE                                                  STD_ON
#define CAN_T1OFTXBE                                                  STD_ON
#define CAN_TXBRP                                                     STD_ON
#define CAN_TXOFFSETHWTOLOG                                           STD_ON
#define CAN_XIDAM                                                     STD_ON
#define CAN_XIDFC                                                     STD_ON
#define CAN_FLESAOFXIDFC                                              STD_ON
#define CAN_LSEOFXIDFC                                                STD_ON
#define CAN_XIDFEENDIDXOFXIDFC                                        STD_OFF  /**< Deactivateable: 'Can_XIDFC.XIDFEEndIdx' Reason: 'the optional indirection is deactivated because XIDFEUsedOfXIDFC is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' and Deactivateable: 'Can_XIDFC.XIDFEEndIdx' Reason: 'the optional indirection is deactivated because XIDFEUsedOfXIDFC is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_XIDFESTARTIDXOFXIDFC                                      STD_OFF  /**< Deactivateable: 'Can_XIDFC.XIDFEStartIdx' Reason: 'the optional indirection is deactivated because XIDFEUsedOfXIDFC is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' and Deactivateable: 'Can_XIDFC.XIDFEStartIdx' Reason: 'the optional indirection is deactivated because XIDFEUsedOfXIDFC is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_XIDFEUSEDOFXIDFC                                          STD_OFF  /**< Deactivateable: 'Can_XIDFC.XIDFEUsed' Reason: 'the optional indirection is deactivated because XIDFEUsedOfXIDFC is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' and Deactivateable: 'Can_XIDFC.XIDFEUsed' Reason: 'the optional indirection is deactivated because XIDFEUsedOfXIDFC is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define CAN_XIDFE                                                     STD_ON
#define CAN_EIDFE_0OFXIDFE                                            STD_ON
#define CAN_EIDFE_1OFXIDFE                                            STD_ON
#define CAN_PCCONFIG                                                  STD_ON
#define CAN_ACTIVESENDPDUOFPCCONFIG                                   STD_ON
#define CAN_ACTIVESENDSTATEOFPCCONFIG                                 STD_ON
#define CAN_BTPOFPCCONFIG                                             STD_ON
#define CAN_BASEDLL_GENERATORVERSIONOFPCCONFIG                        STD_ON
#define CAN_BASISADROFPCCONFIG                                        STD_ON
#define CAN_BUFFERCONFIGOFPCCONFIG                                    STD_ON
#define CAN_BUSOFFNOTIFICATIONOFPCCONFIG                              STD_ON
#define CAN_CAN_FD_NISOOFPCCONFIG                                     STD_ON
#define CAN_C_ENABLE_MPC5700_MCAN_CREL_SSTEPOFPCCONFIG                STD_ON
#define CAN_C_ENABLE_MPC5700_MCAN_CREL_STEPOFPCCONFIG                 STD_ON
#define CAN_C_ENABLE_MPC5700_MCAN_MAJOR_CRELOFPCCONFIG                STD_ON
#define CAN_CANIFCHANNELIDOFPCCONFIG                                  STD_ON
#define CAN_CANINTERRUPTCOUNTEROFPCCONFIG                             STD_ON
#define CAN_CANINTERRUPTOLDSTATUSOFPCCONFIG                           STD_ON
#define CAN_CONTROLLERCONFIGOFPCCONFIG                                STD_ON
#define CAN_FBTPOFPCCONFIG                                            STD_ON
#define CAN_FINALMAGICNUMBEROFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_GFCOFPCCONFIG                                             STD_ON
#define CAN_IDENTITYSELECTEDOFPCCONFIG                                STD_ON
#define CAN_INITDATAHASHCODEOFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECTBAUDRATEOFPCCONFIG                              STD_ON
#define CAN_INITOBJECTFDBRSCONFIGOFPCCONFIG                           STD_ON
#define CAN_INITOBJECTSTARTINDEXOFPCCONFIG                            STD_ON
#define CAN_INTENABLEOFPCCONFIG                                       STD_ON
#define CAN_ISBUSOFFOFPCCONFIG                                        STD_ON
#define CAN_ISHARDWARECANCELEDOFPCCONFIG                              STD_ON
#define CAN_ISTTCANOFPCCONFIG                                         STD_ON
#define CAN_LASTINITOBJECTOFPCCONFIG                                  STD_ON
#define CAN_LOGSTATUSOFPCCONFIG                                       STD_ON
#define CAN_LOOPTIMEOUTOFPCCONFIG                                     STD_ON
#define CAN_MAILBOXOFPCCONFIG                                         STD_ON
#define CAN_MAXRXDATALENOFPCCONFIG                                    STD_ON
#define CAN_MAXTXDATALENOFPCCONFIG                                    STD_ON
#define CAN_NONFDOBJECTSPENDINGFLAGOFPCCONFIG                         STD_ON
#define CAN_PHYSTOLOGCHANNELOFPCCONFIG                                STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSIONOFPCCONFIG                    STD_ON
#define CAN_SIDFCOFPCCONFIG                                           STD_ON
#define CAN_SIDFEOFPCCONFIG                                           STD_ON
#define CAN_SHMADROFPCCONFIG                                          STD_ON
#define CAN_SHMELEMENTSIZEOFPCCONFIG                                  STD_ON
#define CAN_SIZEOFACTIVESENDPDUOFPCCONFIG                             STD_ON
#define CAN_SIZEOFACTIVESENDSTATEOFPCCONFIG                           STD_ON
#define CAN_SIZEOFBTPOFPCCONFIG                                       STD_ON
#define CAN_SIZEOFBASISADROFPCCONFIG                                  STD_ON
#define CAN_SIZEOFBUFFERCONFIGOFPCCONFIG                              STD_ON
#define CAN_SIZEOFBUSOFFNOTIFICATIONOFPCCONFIG                        STD_ON
#define CAN_SIZEOFCANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_SIZEOFCANINTERRUPTCOUNTEROFPCCONFIG                       STD_ON
#define CAN_SIZEOFCANINTERRUPTOLDSTATUSOFPCCONFIG                     STD_ON
#define CAN_SIZEOFCONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_SIZEOFFBTPOFPCCONFIG                                      STD_ON
#define CAN_SIZEOFGFCOFPCCONFIG                                       STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_SIZEOFINITOBJECTFDBRSCONFIGOFPCCONFIG                     STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_SIZEOFINTENABLEOFPCCONFIG                                 STD_ON
#define CAN_SIZEOFISBUSOFFOFPCCONFIG                                  STD_ON
#define CAN_SIZEOFISHARDWARECANCELEDOFPCCONFIG                        STD_ON
#define CAN_SIZEOFISTTCANOFPCCONFIG                                   STD_ON
#define CAN_SIZEOFLASTINITOBJECTOFPCCONFIG                            STD_ON
#define CAN_SIZEOFLOGSTATUSOFPCCONFIG                                 STD_ON
#define CAN_SIZEOFLOOPTIMEOUTOFPCCONFIG                               STD_ON
#define CAN_SIZEOFMAILBOXOFPCCONFIG                                   STD_ON
#define CAN_SIZEOFNONFDOBJECTSPENDINGFLAGOFPCCONFIG                   STD_ON
#define CAN_SIZEOFPHYSTOLOGCHANNELOFPCCONFIG                          STD_ON
#define CAN_SIZEOFSIDFCOFPCCONFIG                                     STD_ON
#define CAN_SIZEOFSIDFEOFPCCONFIG                                     STD_ON
#define CAN_SIZEOFSHMADROFPCCONFIG                                    STD_ON
#define CAN_SIZEOFSHMELEMENTSIZEOFPCCONFIG                            STD_ON
#define CAN_SIZEOFSTATUSREQOFPCCONFIG                                 STD_ON
#define CAN_SIZEOFTDCROFPCCONFIG                                      STD_ON
#define CAN_SIZEOFTXBCROFPCCONFIG                                     STD_ON
#define CAN_SIZEOFTXBEOFPCCONFIG                                      STD_ON
#define CAN_SIZEOFTXBRPOFPCCONFIG                                     STD_ON
#define CAN_SIZEOFTXOFFSETHWTOLOGOFPCCONFIG                           STD_ON
#define CAN_SIZEOFXIDAMOFPCCONFIG                                     STD_ON
#define CAN_SIZEOFXIDFCOFPCCONFIG                                     STD_ON
#define CAN_SIZEOFXIDFEOFPCCONFIG                                     STD_ON
#define CAN_STATUSREQOFPCCONFIG                                       STD_ON
#define CAN_TDCROFPCCONFIG                                            STD_ON
#define CAN_TXBCROFPCCONFIG                                           STD_ON
#define CAN_TXBEOFPCCONFIG                                            STD_ON
#define CAN_TXBRPOFPCCONFIG                                           STD_ON
#define CAN_TXOFFSETHWTOLOGOFPCCONFIG                                 STD_ON
#define CAN_XIDAMOFPCCONFIG                                           STD_ON
#define CAN_XIDFCOFPCCONFIG                                           STD_ON
#define CAN_XIDFEOFPCCONFIG                                           STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMinNumericValueDefines  Can Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CAN_MIN_ACTIVESENDPDU                                         0U
#define CAN_MIN_ACTIVESENDSTATE                                       0U
#define CAN_MIN_BUSOFFNOTIFICATION                                    0U
#define CAN_MIN_CANINTERRUPTCOUNTER                                   0U
#define CAN_MIN_INTENABLE                                             0UL
#define CAN_MIN_LASTINITOBJECT                                        0U
#define CAN_MIN_LOGSTATUS                                             0U
#define CAN_MIN_NONFDOBJECTSPENDINGFLAG                               0UL
#define CAN_MIN_STATUSREQ                                             0U
#define CAN_MIN_TXBCR                                                 0UL
#define CAN_MIN_T0OFTXBE                                              0UL
#define CAN_MIN_T1OFTXBE                                              0UL
#define CAN_MIN_TXBRP                                                 0UL
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMaxNumericValueDefines  Can Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CAN_MAX_ACTIVESENDPDU                                         255U
#define CAN_MAX_ACTIVESENDSTATE                                       255U
#define CAN_MAX_BUSOFFNOTIFICATION                                    255U
#define CAN_MAX_CANINTERRUPTCOUNTER                                   255U
#define CAN_MAX_INTENABLE                                             4294967295UL
#define CAN_MAX_LASTINITOBJECT                                        255U
#define CAN_MAX_LOGSTATUS                                             255U
#define CAN_MAX_NONFDOBJECTSPENDINGFLAG                               4294967295UL
#define CAN_MAX_STATUSREQ                                             255U
#define CAN_MAX_TXBCR                                                 4294967295UL
#define CAN_MAX_T0OFTXBE                                              4294967295UL
#define CAN_MAX_T1OFTXBE                                              4294967295UL
#define CAN_MAX_TXBRP                                                 4294967295UL
/** 
  \}
*/ 

/** 
  \defgroup  CanPCNoReferenceDefines  Can No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CAN_NO_CANIFCHANNELID                                         255U
#define CAN_NO_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG         65535U
#define CAN_NO_RXBASICHANDLEMAXOFCONTROLLERCONFIG                     255U
#define CAN_NO_RXBASICHANDLESTARTOFCONTROLLERCONFIG                   255U
#define CAN_NO_RXBASICHANDLESTOPOFCONTROLLERCONFIG                    255U
#define CAN_NO_RXBASICHWSTARTOFCONTROLLERCONFIG                       255U
#define CAN_NO_RXBASICHWSTOPOFCONTROLLERCONFIG                        255U
#define CAN_NO_RXFULLHANDLEMAXOFCONTROLLERCONFIG                      255U
#define CAN_NO_RXFULLHANDLESTARTOFCONTROLLERCONFIG                    255U
#define CAN_NO_RXFULLHANDLESTOPOFCONTROLLERCONFIG                     255U
#define CAN_NO_RXFULLHWSTARTOFCONTROLLERCONFIG                        255U
#define CAN_NO_RXFULLHWSTOPOFCONTROLLERCONFIG                         255U
#define CAN_NO_TXBASICHANDLEMAXOFCONTROLLERCONFIG                     255U
#define CAN_NO_TXBASICHANDLESTARTOFCONTROLLERCONFIG                   255U
#define CAN_NO_TXBASICHANDLESTOPOFCONTROLLERCONFIG                    255U
#define CAN_NO_TXBASICHWSTARTOFCONTROLLERCONFIG                       255U
#define CAN_NO_TXBASICHWSTOPOFCONTROLLERCONFIG                        255U
#define CAN_NO_TXFULLHANDLEMAXOFCONTROLLERCONFIG                      255U
#define CAN_NO_TXFULLHANDLESTARTOFCONTROLLERCONFIG                    255U
#define CAN_NO_TXFULLHANDLESTOPOFCONTROLLERCONFIG                     255U
#define CAN_NO_TXFULLHWSTARTOFCONTROLLERCONFIG                        255U
#define CAN_NO_TXFULLHWSTOPOFCONTROLLERCONFIG                         255U
#define CAN_NO_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                      255U
#define CAN_NO_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                    255U
#define CAN_NO_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                     255U
#define CAN_NO_UNUSEDHWSTARTOFCONTROLLERCONFIG                        255U
#define CAN_NO_UNUSEDHWSTOPOFCONTROLLERCONFIG                         255U
#define CAN_NO_PHYSTOLOGCHANNEL                                       255U
#define CAN_NO_SIDFEENDIDXOFSIDFC                                     65535U
#define CAN_NO_SIDFESTARTIDXOFSIDFC                                   65535U
#define CAN_NO_TXOFFSETHWTOLOG                                        32767
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumExistsDefines  Can Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define CAN_EXISTS_NONE_INITOBJECTFDBRSCONFIG                         STD_OFF
#define CAN_EXISTS_FD_RXTX_INITOBJECTFDBRSCONFIG                      STD_ON
#define CAN_EXISTS_FD_RXONLY_INITOBJECTFDBRSCONFIG                    STD_OFF
#define CAN_EXISTS_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_ON
#define CAN_EXISTS_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_OFF
#define CAN_EXISTS_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumDefines  Can Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define CAN_FD_RXTX_INITOBJECTFDBRSCONFIG                             0x01U
#define CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x00U
#define CAN_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX                      0x01U
#define CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x02U
#define CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX                      0x04U
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIsReducedToDefineDefines  Can Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CAN_ISDEF_BTP                                                 STD_OFF
#define CAN_ISDEF_BASISADR                                            STD_OFF
#define CAN_ISDEF_RXBCOFBUFFERCONFIG                                  STD_OFF
#define CAN_ISDEF_RXF0COFBUFFERCONFIG                                 STD_OFF
#define CAN_ISDEF_RXF1COFBUFFERCONFIG                                 STD_OFF
#define CAN_ISDEF_TXBCOFBUFFERCONFIG                                  STD_OFF
#define CAN_ISDEF_TXEFCOFBUFFERCONFIG                                 STD_OFF
#define CAN_ISDEF_CANIFCHANNELID                                      STD_OFF
#define CAN_ISDEF_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG      STD_OFF
#define CAN_ISDEF_RXBASICHANDLEMAXOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_RXBASICHANDLESTARTOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_RXBASICHANDLESTOPOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_RXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_RXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHANDLEMAXOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_RXFULLHANDLESTARTOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_RXFULLHANDLESTOPOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_RXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_TXBASICHANDLEMAXOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_TXBASICHANDLESTARTOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_TXBASICHANDLESTOPOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_TXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_TXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHANDLEMAXOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_TXFULLHANDLESTARTOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_TXFULLHANDLESTOPOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_TXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_UNUSEDHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_UNUSEDHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_FBTP                                                STD_OFF
#define CAN_ISDEF_GFC                                                 STD_OFF
#define CAN_ISDEF_INITOBJECTBAUDRATE                                  STD_OFF
#define CAN_ISDEF_INITOBJECTFDBRSCONFIG                               STD_OFF
#define CAN_ISDEF_INITOBJECTSTARTINDEX                                STD_OFF
#define CAN_ISDEF_ISTTCAN                                             STD_OFF
#define CAN_ISDEF_DLC_FIFOOFMAILBOX                                   STD_OFF
#define CAN_ISDEF_FDPADDINGOFMAILBOX                                  STD_OFF
#define CAN_ISDEF_HWHANDLEOFMAILBOX                                   STD_OFF
#define CAN_ISDEF_IDVALUEOFMAILBOX                                    STD_OFF
#define CAN_ISDEF_MAILBOXTYPEOFMAILBOX                                STD_OFF
#define CAN_ISDEF_MAXDATALENOFMAILBOX                                 STD_OFF
#define CAN_ISDEF_MSGCONTROLLEROFMAILBOX                              STD_OFF
#define CAN_ISDEF_PHYSTOLOGCHANNEL                                    STD_OFF
#define CAN_ISDEF_FLSSAOFSIDFC                                        STD_OFF
#define CAN_ISDEF_LSSOFSIDFC                                          STD_OFF
#define CAN_ISDEF_SIDFEENDIDXOFSIDFC                                  STD_OFF
#define CAN_ISDEF_SIDFESTARTIDXOFSIDFC                                STD_OFF
#define CAN_ISDEF_SIDFEUSEDOFSIDFC                                    STD_OFF
#define CAN_ISDEF_SIDFE                                               STD_OFF
#define CAN_ISDEF_RXBAOFSHMADR                                        STD_OFF
#define CAN_ISDEF_RXF0AOFSHMADR                                       STD_OFF
#define CAN_ISDEF_RXF1AOFSHMADR                                       STD_OFF
#define CAN_ISDEF_SIDFAOFSHMADR                                       STD_OFF
#define CAN_ISDEF_STARTADROFSHMADR                                    STD_OFF
#define CAN_ISDEF_STOPADROFSHMADR                                     STD_OFF
#define CAN_ISDEF_TXBAOFSHMADR                                        STD_OFF
#define CAN_ISDEF_TXEFAOFSHMADR                                       STD_OFF
#define CAN_ISDEF_XIDFAOFSHMADR                                       STD_OFF
#define CAN_ISDEF_F0DSOFSHMELEMENTSIZE                                STD_OFF
#define CAN_ISDEF_F1DSOFSHMELEMENTSIZE                                STD_OFF
#define CAN_ISDEF_RBDSOFSHMELEMENTSIZE                                STD_OFF
#define CAN_ISDEF_TBDSOFSHMELEMENTSIZE                                STD_OFF
#define CAN_ISDEF_TEFBDSOFSHMELEMENTSIZE                              STD_OFF
#define CAN_ISDEF_TDCR                                                STD_OFF
#define CAN_ISDEF_TXOFFSETHWTOLOG                                     STD_OFF
#define CAN_ISDEF_XIDAM                                               STD_OFF
#define CAN_ISDEF_FLESAOFXIDFC                                        STD_OFF
#define CAN_ISDEF_LSEOFXIDFC                                          STD_OFF
#define CAN_ISDEF_EIDFE_0OFXIDFE                                      STD_OFF
#define CAN_ISDEF_EIDFE_1OFXIDFE                                      STD_OFF
#define CAN_ISDEF_ACTIVESENDPDUOFPCCONFIG                             STD_ON
#define CAN_ISDEF_ACTIVESENDSTATEOFPCCONFIG                           STD_ON
#define CAN_ISDEF_BTPOFPCCONFIG                                       STD_ON
#define CAN_ISDEF_BASISADROFPCCONFIG                                  STD_ON
#define CAN_ISDEF_BUFFERCONFIGOFPCCONFIG                              STD_ON
#define CAN_ISDEF_BUSOFFNOTIFICATIONOFPCCONFIG                        STD_ON
#define CAN_ISDEF_CANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_ISDEF_CANINTERRUPTCOUNTEROFPCCONFIG                       STD_ON
#define CAN_ISDEF_CANINTERRUPTOLDSTATUSOFPCCONFIG                     STD_ON
#define CAN_ISDEF_CONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_ISDEF_FBTPOFPCCONFIG                                      STD_ON
#define CAN_ISDEF_GFCOFPCCONFIG                                       STD_ON
#define CAN_ISDEF_IDENTITYSELECTEDOFPCCONFIG                          STD_OFF
#define CAN_ISDEF_INITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_ISDEF_INITOBJECTFDBRSCONFIGOFPCCONFIG                     STD_ON
#define CAN_ISDEF_INITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_ISDEF_INTENABLEOFPCCONFIG                                 STD_ON
#define CAN_ISDEF_ISBUSOFFOFPCCONFIG                                  STD_ON
#define CAN_ISDEF_ISHARDWARECANCELEDOFPCCONFIG                        STD_ON
#define CAN_ISDEF_ISTTCANOFPCCONFIG                                   STD_ON
#define CAN_ISDEF_LASTINITOBJECTOFPCCONFIG                            STD_ON
#define CAN_ISDEF_LOGSTATUSOFPCCONFIG                                 STD_ON
#define CAN_ISDEF_LOOPTIMEOUTOFPCCONFIG                               STD_ON
#define CAN_ISDEF_MAILBOXOFPCCONFIG                                   STD_ON
#define CAN_ISDEF_NONFDOBJECTSPENDINGFLAGOFPCCONFIG                   STD_ON
#define CAN_ISDEF_PHYSTOLOGCHANNELOFPCCONFIG                          STD_ON
#define CAN_ISDEF_SIDFCOFPCCONFIG                                     STD_ON
#define CAN_ISDEF_SIDFEOFPCCONFIG                                     STD_ON
#define CAN_ISDEF_SHMADROFPCCONFIG                                    STD_ON
#define CAN_ISDEF_SHMELEMENTSIZEOFPCCONFIG                            STD_ON
#define CAN_ISDEF_STATUSREQOFPCCONFIG                                 STD_ON
#define CAN_ISDEF_TDCROFPCCONFIG                                      STD_ON
#define CAN_ISDEF_TXBCROFPCCONFIG                                     STD_ON
#define CAN_ISDEF_TXBEOFPCCONFIG                                      STD_ON
#define CAN_ISDEF_TXBRPOFPCCONFIG                                     STD_ON
#define CAN_ISDEF_TXOFFSETHWTOLOGOFPCCONFIG                           STD_ON
#define CAN_ISDEF_XIDAMOFPCCONFIG                                     STD_ON
#define CAN_ISDEF_XIDFCOFPCCONFIG                                     STD_ON
#define CAN_ISDEF_XIDFEOFPCCONFIG                                     STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEqualsAlwaysToDefines  Can Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CAN_EQ2_BTP                                                   
#define CAN_EQ2_BASISADR                                              
#define CAN_EQ2_RXBCOFBUFFERCONFIG                                    
#define CAN_EQ2_RXF0COFBUFFERCONFIG                                   
#define CAN_EQ2_RXF1COFBUFFERCONFIG                                   
#define CAN_EQ2_TXBCOFBUFFERCONFIG                                    
#define CAN_EQ2_TXEFCOFBUFFERCONFIG                                   
#define CAN_EQ2_CANIFCHANNELID                                        
#define CAN_EQ2_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG        
#define CAN_EQ2_RXBASICHANDLEMAXOFCONTROLLERCONFIG                    
#define CAN_EQ2_RXBASICHANDLESTARTOFCONTROLLERCONFIG                  
#define CAN_EQ2_RXBASICHANDLESTOPOFCONTROLLERCONFIG                   
#define CAN_EQ2_RXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_RXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHANDLEMAXOFCONTROLLERCONFIG                     
#define CAN_EQ2_RXFULLHANDLESTARTOFCONTROLLERCONFIG                   
#define CAN_EQ2_RXFULLHANDLESTOPOFCONTROLLERCONFIG                    
#define CAN_EQ2_RXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_TXBASICHANDLEMAXOFCONTROLLERCONFIG                    
#define CAN_EQ2_TXBASICHANDLESTARTOFCONTROLLERCONFIG                  
#define CAN_EQ2_TXBASICHANDLESTOPOFCONTROLLERCONFIG                   
#define CAN_EQ2_TXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_TXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHANDLEMAXOFCONTROLLERCONFIG                     
#define CAN_EQ2_TXFULLHANDLESTARTOFCONTROLLERCONFIG                   
#define CAN_EQ2_TXFULLHANDLESTOPOFCONTROLLERCONFIG                    
#define CAN_EQ2_TXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                     
#define CAN_EQ2_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                   
#define CAN_EQ2_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                    
#define CAN_EQ2_UNUSEDHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_UNUSEDHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_FBTP                                                  
#define CAN_EQ2_GFC                                                   
#define CAN_EQ2_INITOBJECTBAUDRATE                                    
#define CAN_EQ2_INITOBJECTFDBRSCONFIG                                 
#define CAN_EQ2_INITOBJECTSTARTINDEX                                  
#define CAN_EQ2_ISTTCAN                                               
#define CAN_EQ2_DLC_FIFOOFMAILBOX                                     
#define CAN_EQ2_FDPADDINGOFMAILBOX                                    
#define CAN_EQ2_HWHANDLEOFMAILBOX                                     
#define CAN_EQ2_IDVALUEOFMAILBOX                                      
#define CAN_EQ2_MAILBOXTYPEOFMAILBOX                                  
#define CAN_EQ2_MAXDATALENOFMAILBOX                                   
#define CAN_EQ2_MSGCONTROLLEROFMAILBOX                                
#define CAN_EQ2_PHYSTOLOGCHANNEL                                      
#define CAN_EQ2_FLSSAOFSIDFC                                          
#define CAN_EQ2_LSSOFSIDFC                                            
#define CAN_EQ2_SIDFEENDIDXOFSIDFC                                    
#define CAN_EQ2_SIDFESTARTIDXOFSIDFC                                  
#define CAN_EQ2_SIDFEUSEDOFSIDFC                                      
#define CAN_EQ2_SIDFE                                                 
#define CAN_EQ2_RXBAOFSHMADR                                          
#define CAN_EQ2_RXF0AOFSHMADR                                         
#define CAN_EQ2_RXF1AOFSHMADR                                         
#define CAN_EQ2_SIDFAOFSHMADR                                         
#define CAN_EQ2_STARTADROFSHMADR                                      
#define CAN_EQ2_STOPADROFSHMADR                                       
#define CAN_EQ2_TXBAOFSHMADR                                          
#define CAN_EQ2_TXEFAOFSHMADR                                         
#define CAN_EQ2_XIDFAOFSHMADR                                         
#define CAN_EQ2_F0DSOFSHMELEMENTSIZE                                  
#define CAN_EQ2_F1DSOFSHMELEMENTSIZE                                  
#define CAN_EQ2_RBDSOFSHMELEMENTSIZE                                  
#define CAN_EQ2_TBDSOFSHMELEMENTSIZE                                  
#define CAN_EQ2_TEFBDSOFSHMELEMENTSIZE                                
#define CAN_EQ2_TDCR                                                  
#define CAN_EQ2_TXOFFSETHWTOLOG                                       
#define CAN_EQ2_XIDAM                                                 
#define CAN_EQ2_FLESAOFXIDFC                                          
#define CAN_EQ2_LSEOFXIDFC                                            
#define CAN_EQ2_EIDFE_0OFXIDFE                                        
#define CAN_EQ2_EIDFE_1OFXIDFE                                        
#define CAN_EQ2_ACTIVESENDPDUOFPCCONFIG                               Can_ActiveSendPdu
#define CAN_EQ2_ACTIVESENDSTATEOFPCCONFIG                             Can_ActiveSendState
#define CAN_EQ2_BTPOFPCCONFIG                                         Can_BTP
#define CAN_EQ2_BASISADROFPCCONFIG                                    Can_BasisAdr
#define CAN_EQ2_BUFFERCONFIGOFPCCONFIG                                Can_BufferConfig
#define CAN_EQ2_BUSOFFNOTIFICATIONOFPCCONFIG                          Can_BusOffNotification
#define CAN_EQ2_CANIFCHANNELIDOFPCCONFIG                              Can_CanIfChannelId
#define CAN_EQ2_CANINTERRUPTCOUNTEROFPCCONFIG                         Can_CanInterruptCounter
#define CAN_EQ2_CANINTERRUPTOLDSTATUSOFPCCONFIG                       Can_CanInterruptOldStatus
#define CAN_EQ2_CONTROLLERCONFIGOFPCCONFIG                            Can_ControllerConfig
#define CAN_EQ2_FBTPOFPCCONFIG                                        Can_FBTP
#define CAN_EQ2_GFCOFPCCONFIG                                         Can_GFC
#define CAN_EQ2_IDENTITYSELECTEDOFPCCONFIG                            
#define CAN_EQ2_INITOBJECTBAUDRATEOFPCCONFIG                          Can_InitObjectBaudrate
#define CAN_EQ2_INITOBJECTFDBRSCONFIGOFPCCONFIG                       Can_InitObjectFdBrsConfig
#define CAN_EQ2_INITOBJECTSTARTINDEXOFPCCONFIG                        Can_InitObjectStartIndex
#define CAN_EQ2_INTENABLEOFPCCONFIG                                   Can_IntEnable
#define CAN_EQ2_ISBUSOFFOFPCCONFIG                                    Can_IsBusOff
#define CAN_EQ2_ISHARDWARECANCELEDOFPCCONFIG                          Can_IsHardwareCanceled
#define CAN_EQ2_ISTTCANOFPCCONFIG                                     Can_IsTTCan
#define CAN_EQ2_LASTINITOBJECTOFPCCONFIG                              Can_LastInitObject
#define CAN_EQ2_LOGSTATUSOFPCCONFIG                                   Can_LogStatus
#define CAN_EQ2_LOOPTIMEOUTOFPCCONFIG                                 Can_LoopTimeout
#define CAN_EQ2_MAILBOXOFPCCONFIG                                     Can_Mailbox
#define CAN_EQ2_NONFDOBJECTSPENDINGFLAGOFPCCONFIG                     Can_NonFdObjectsPendingFlag
#define CAN_EQ2_PHYSTOLOGCHANNELOFPCCONFIG                            Can_PhysToLogChannel
#define CAN_EQ2_SIDFCOFPCCONFIG                                       Can_SIDFC
#define CAN_EQ2_SIDFEOFPCCONFIG                                       Can_SIDFE
#define CAN_EQ2_SHMADROFPCCONFIG                                      Can_ShmAdr
#define CAN_EQ2_SHMELEMENTSIZEOFPCCONFIG                              Can_ShmElementSize
#define CAN_EQ2_STATUSREQOFPCCONFIG                                   Can_StatusReq
#define CAN_EQ2_TDCROFPCCONFIG                                        Can_TDCR
#define CAN_EQ2_TXBCROFPCCONFIG                                       Can_TXBCR
#define CAN_EQ2_TXBEOFPCCONFIG                                        Can_TXBE
#define CAN_EQ2_TXBRPOFPCCONFIG                                       Can_TXBRP
#define CAN_EQ2_TXOFFSETHWTOLOGOFPCCONFIG                             Can_TxOffsetHwToLog
#define CAN_EQ2_XIDAMOFPCCONFIG                                       Can_XIDAM
#define CAN_EQ2_XIDFCOFPCCONFIG                                       Can_XIDFC
#define CAN_EQ2_XIDFEOFPCCONFIG                                       Can_XIDFE
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSymbolicInitializationPointers  Can Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Can_Config_ECU1_Ptr                                           &(Can_PCConfig.Config_ECU1)  /**< symbolic identifier which shall be used to initialize 'Can' */
#define Can_Config_ECU2_Ptr                                           &(Can_PCConfig.Config_ECU2)  /**< symbolic identifier which shall be used to initialize 'Can' */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCInitializationSymbols  Can Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Can_Config_ECU1                                               Can_PCConfig.Config_ECU1  /**< symbolic identifier which could be used to initialize 'Can */
#define Can_Config_ECU2                                               Can_PCConfig.Config_ECU2  /**< symbolic identifier which could be used to initialize 'Can */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGeneral  Can General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CAN_CHECK_INIT_POINTER                                        STD_ON  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CAN_FINAL_MAGIC_NUMBER                                        0x501EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Can */
#define CAN_INDIVIDUAL_POSTBUILD                                      STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Can' is not configured to be postbuild capable. */
#define CAN_INIT_DATA                                                 CAN_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CAN_INIT_DATA_HASH_CODE                                       -1177390237L  /**< the precompile constant to validate the initialization structure at initialization time of Can with a hashcode. The seed value is '0x501EU' */
#define CAN_USE_ECUM_BSW_ERROR_HOOK                                   STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CAN_USE_INIT_POINTER                                          STD_ON  /**< STD_ON if the init pointer Can shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanLTDataSwitches  Can Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPBDataSwitches  Can Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_PBCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_LTCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_PCCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPCGetRootDataMacros  Can Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define Can_GetIdentitySelectedOfPCConfig()                           Can_ConfigDataPtr->IdentitySelectedOfPCConfig
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetConstantDuplicatedRootDataMacros  Can Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Can_GetActiveSendPduOfPCConfig()                              Can_ActiveSendPdu  /**< the pointer to Can_ActiveSendPdu */
#define Can_GetActiveSendStateOfPCConfig()                            Can_ActiveSendState  /**< the pointer to Can_ActiveSendState */
#define Can_GetBTPOfPCConfig()                                        Can_BTP  /**< the pointer to Can_BTP */
#define Can_GetBaseDll_GeneratorVersionOfPCConfig()                   0x0103U
#define Can_GetBasisAdrOfPCConfig()                                   Can_BasisAdr  /**< the pointer to Can_BasisAdr */
#define Can_GetBufferConfigOfPCConfig()                               Can_BufferConfig  /**< the pointer to Can_BufferConfig */
#define Can_GetBusOffNotificationOfPCConfig()                         Can_BusOffNotification  /**< the pointer to Can_BusOffNotification */
#define Can_GetCAN_FD_NISOOfPCConfig()                                0x00U  /**< MCAN ISO/Bosch conformance */
#define Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEPOfPCConfig()           0x05U  /**< MCAN Release Sub Step */
#define Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEPOfPCConfig()            0x01U  /**< MCAN Release Step */
#define Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CRELOfPCConfig()           0x03U  /**< MCAN Release Version */
#define Can_GetCanIfChannelIdOfPCConfig()                             Can_CanIfChannelId  /**< the pointer to Can_CanIfChannelId */
#define Can_GetCanInterruptCounterOfPCConfig()                        Can_CanInterruptCounter  /**< the pointer to Can_CanInterruptCounter */
#define Can_GetCanInterruptOldStatusOfPCConfig()                      Can_CanInterruptOldStatus  /**< the pointer to Can_CanInterruptOldStatus */
#define Can_GetControllerConfigOfPCConfig()                           Can_ControllerConfig  /**< the pointer to Can_ControllerConfig */
#define Can_GetFBTPOfPCConfig()                                       Can_FBTP  /**< the pointer to Can_FBTP */
#define Can_GetGFCOfPCConfig()                                        Can_GFC  /**< the pointer to Can_GFC */
#define Can_GetInitObjectBaudrateOfPCConfig()                         Can_InitObjectBaudrate  /**< the pointer to Can_InitObjectBaudrate */
#define Can_GetInitObjectFdBrsConfigOfPCConfig()                      Can_InitObjectFdBrsConfig  /**< the pointer to Can_InitObjectFdBrsConfig */
#define Can_GetInitObjectStartIndexOfPCConfig()                       Can_InitObjectStartIndex  /**< the pointer to Can_InitObjectStartIndex */
#define Can_GetIntEnableOfPCConfig()                                  Can_IntEnable  /**< the pointer to Can_IntEnable */
#define Can_GetIsBusOffOfPCConfig()                                   Can_IsBusOff  /**< the pointer to Can_IsBusOff */
#define Can_GetIsHardwareCanceledOfPCConfig()                         Can_IsHardwareCanceled  /**< the pointer to Can_IsHardwareCanceled */
#define Can_GetIsTTCanOfPCConfig()                                    Can_IsTTCan  /**< the pointer to Can_IsTTCan */
#define Can_GetLastInitObjectOfPCConfig()                             Can_LastInitObject  /**< the pointer to Can_LastInitObject */
#define Can_GetLogStatusOfPCConfig()                                  Can_LogStatus  /**< the pointer to Can_LogStatus */
#define Can_GetLoopTimeoutOfPCConfig()                                Can_LoopTimeout  /**< the pointer to Can_LoopTimeout */
#define Can_GetMailboxOfPCConfig()                                    Can_Mailbox  /**< the pointer to Can_Mailbox */
#define Can_GetMaxRxDataLenOfPCConfig()                               0x0040U
#define Can_GetMaxTxDataLenOfPCConfig()                               0x0040U
#define Can_GetNonFdObjectsPendingFlagOfPCConfig()                    Can_NonFdObjectsPendingFlag  /**< the pointer to Can_NonFdObjectsPendingFlag */
#define Can_GetPhysToLogChannelOfPCConfig()                           Can_PhysToLogChannel  /**< the pointer to Can_PhysToLogChannel */
#define Can_GetPlatformDll_GeneratorVersionOfPCConfig()               0x0100U
#define Can_GetSIDFCOfPCConfig()                                      Can_SIDFC  /**< the pointer to Can_SIDFC */
#define Can_GetSIDFEOfPCConfig()                                      Can_SIDFE  /**< the pointer to Can_SIDFE */
#define Can_GetShmAdrOfPCConfig()                                     Can_ShmAdr  /**< the pointer to Can_ShmAdr */
#define Can_GetShmElementSizeOfPCConfig()                             Can_ShmElementSize  /**< the pointer to Can_ShmElementSize */
#define Can_GetSizeOfActiveSendPduOfPCConfig()                        1U  /**< the number of accomplishable value elements in Can_ActiveSendPdu */
#define Can_GetSizeOfActiveSendStateOfPCConfig()                      1U  /**< the number of accomplishable value elements in Can_ActiveSendState */
#define Can_GetSizeOfBTPOfPCConfig()                                  1U  /**< the number of accomplishable value elements in Can_BTP */
#define Can_GetSizeOfBasisAdrOfPCConfig()                             1U  /**< the number of accomplishable value elements in Can_BasisAdr */
#define Can_GetSizeOfBufferConfigOfPCConfig()                         1U  /**< the number of accomplishable value elements in Can_BufferConfig */
#define Can_GetSizeOfBusOffNotificationOfPCConfig()                   1U  /**< the number of accomplishable value elements in Can_BusOffNotification */
#define Can_GetSizeOfCanIfChannelIdOfPCConfig()                       1U  /**< the number of accomplishable value elements in Can_CanIfChannelId */
#define Can_GetSizeOfCanInterruptCounterOfPCConfig()                  1U  /**< the number of accomplishable value elements in Can_CanInterruptCounter */
#define Can_GetSizeOfCanInterruptOldStatusOfPCConfig()                1U  /**< the number of accomplishable value elements in Can_CanInterruptOldStatus */
#define Can_GetSizeOfControllerConfigOfPCConfig()                     1U  /**< the number of accomplishable value elements in Can_ControllerConfig */
#define Can_GetSizeOfFBTPOfPCConfig()                                 1U  /**< the number of accomplishable value elements in Can_FBTP */
#define Can_GetSizeOfGFCOfPCConfig()                                  1U  /**< the number of accomplishable value elements in Can_GFC */
#define Can_GetSizeOfInitObjectBaudrateOfPCConfig()                   1U  /**< the number of accomplishable value elements in Can_InitObjectBaudrate */
#define Can_GetSizeOfInitObjectFdBrsConfigOfPCConfig()                1U  /**< the number of accomplishable value elements in Can_InitObjectFdBrsConfig */
#define Can_GetSizeOfInitObjectStartIndexOfPCConfig()                 2U  /**< the number of accomplishable value elements in Can_InitObjectStartIndex */
#define Can_GetSizeOfIntEnableOfPCConfig()                            1U  /**< the number of accomplishable value elements in Can_IntEnable */
#define Can_GetSizeOfIsBusOffOfPCConfig()                             1U  /**< the number of accomplishable value elements in Can_IsBusOff */
#define Can_GetSizeOfIsHardwareCanceledOfPCConfig()                   1U  /**< the number of accomplishable value elements in Can_IsHardwareCanceled */
#define Can_GetSizeOfIsTTCanOfPCConfig()                              1U  /**< the number of accomplishable value elements in Can_IsTTCan */
#define Can_GetSizeOfLastInitObjectOfPCConfig()                       1U  /**< the number of accomplishable value elements in Can_LastInitObject */
#define Can_GetSizeOfLogStatusOfPCConfig()                            1U  /**< the number of accomplishable value elements in Can_LogStatus */
#define Can_GetSizeOfLoopTimeoutOfPCConfig()                          1U  /**< the number of accomplishable value elements in Can_LoopTimeout */
#define Can_GetSizeOfMailboxOfPCConfig()                              46U  /**< the number of accomplishable value elements in Can_Mailbox */
#define Can_GetSizeOfNonFdObjectsPendingFlagOfPCConfig()              1U  /**< the number of accomplishable value elements in Can_NonFdObjectsPendingFlag */
#define Can_GetSizeOfPhysToLogChannelOfPCConfig()                     2U  /**< the number of accomplishable value elements in Can_PhysToLogChannel */
#define Can_GetSizeOfSIDFCOfPCConfig()                                1U  /**< the number of accomplishable value elements in Can_SIDFC */
#define Can_GetSizeOfSIDFEOfPCConfig()                                42U  /**< the number of accomplishable value elements in Can_SIDFE */
#define Can_GetSizeOfShmAdrOfPCConfig()                               1U  /**< the number of accomplishable value elements in Can_ShmAdr */
#define Can_GetSizeOfShmElementSizeOfPCConfig()                       1U  /**< the number of accomplishable value elements in Can_ShmElementSize */
#define Can_GetSizeOfStatusReqOfPCConfig()                            1U  /**< the number of accomplishable value elements in Can_StatusReq */
#define Can_GetSizeOfTDCROfPCConfig()                                 1U  /**< the number of accomplishable value elements in Can_TDCR */
#define Can_GetSizeOfTXBCROfPCConfig()                                1U  /**< the number of accomplishable value elements in Can_TXBCR */
#define Can_GetSizeOfTXBEOfPCConfig()                                 1U  /**< the number of accomplishable value elements in Can_TXBE */
#define Can_GetSizeOfTXBRPOfPCConfig()                                1U  /**< the number of accomplishable value elements in Can_TXBRP */
#define Can_GetSizeOfTxOffsetHwToLogOfPCConfig()                      1U  /**< the number of accomplishable value elements in Can_TxOffsetHwToLog */
#define Can_GetSizeOfXIDAMOfPCConfig()                                1U  /**< the number of accomplishable value elements in Can_XIDAM */
#define Can_GetSizeOfXIDFCOfPCConfig()                                1U  /**< the number of accomplishable value elements in Can_XIDFC */
#define Can_GetSizeOfXIDFEOfPCConfig()                                1U  /**< the number of accomplishable value elements in Can_XIDFE */
#define Can_GetStatusReqOfPCConfig()                                  Can_StatusReq  /**< the pointer to Can_StatusReq */
#define Can_GetTDCROfPCConfig()                                       Can_TDCR  /**< the pointer to Can_TDCR */
#define Can_GetTXBCROfPCConfig()                                      Can_TXBCR  /**< the pointer to Can_TXBCR */
#define Can_GetTXBEOfPCConfig()                                       Can_TXBE  /**< the pointer to Can_TXBE */
#define Can_GetTXBRPOfPCConfig()                                      Can_TXBRP  /**< the pointer to Can_TXBRP */
#define Can_GetTxOffsetHwToLogOfPCConfig()                            Can_TxOffsetHwToLog  /**< the pointer to Can_TxOffsetHwToLog */
#define Can_GetXIDAMOfPCConfig()                                      Can_XIDAM  /**< the pointer to Can_XIDAM */
#define Can_GetXIDFCOfPCConfig()                                      Can_XIDFC  /**< the pointer to Can_XIDFC */
#define Can_GetXIDFEOfPCConfig()                                      Can_XIDFE  /**< the pointer to Can_XIDFE */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDataMacros  Can Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Can_GetActiveSendPdu(Index)                                   (Can_GetActiveSendPduOfPCConfig()[(Index)])
#define Can_GetActiveSendState(Index)                                 (Can_GetActiveSendStateOfPCConfig()[(Index)])
#define Can_GetBTP(Index)                                             (Can_GetBTPOfPCConfig()[(Index)])
#define Can_GetBasisAdr(Index)                                        (Can_GetBasisAdrOfPCConfig()[(Index)])
#define Can_GetRXBCOfBufferConfig(Index)                              (Can_GetBufferConfigOfPCConfig()[(Index)].RXBCOfBufferConfig)
#define Can_GetRXF0COfBufferConfig(Index)                             (Can_GetBufferConfigOfPCConfig()[(Index)].RXF0COfBufferConfig)
#define Can_GetRXF1COfBufferConfig(Index)                             (Can_GetBufferConfigOfPCConfig()[(Index)].RXF1COfBufferConfig)
#define Can_GetTXBCOfBufferConfig(Index)                              (Can_GetBufferConfigOfPCConfig()[(Index)].TXBCOfBufferConfig)
#define Can_GetTXEFCOfBufferConfig(Index)                             (Can_GetBufferConfigOfPCConfig()[(Index)].TXEFCOfBufferConfig)
#define Can_GetBusOffNotification(Index)                              (Can_GetBusOffNotificationOfPCConfig()[(Index)])
#define Can_GetCanIfChannelId(Index)                                  (Can_GetCanIfChannelIdOfPCConfig()[(Index)])
#define Can_GetCanInterruptCounter(Index)                             (Can_GetCanInterruptCounterOfPCConfig()[(Index)])
#define Can_GetCanInterruptOldStatus(Index)                           (Can_GetCanInterruptOldStatusOfPCConfig()[(Index)])
#define Can_GetCanControllerDefaultBaudrateOfControllerConfig(Index)  (Can_GetControllerConfigOfPCConfig()[(Index)].CanControllerDefaultBaudrateOfControllerConfig)
#define Can_GetRxBasicHandleMaxOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHandleMaxOfControllerConfig)
#define Can_GetRxBasicHandleStartOfControllerConfig(Index)            (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHandleStartOfControllerConfig)
#define Can_GetRxBasicHandleStopOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHandleStopOfControllerConfig)
#define Can_GetRxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStartOfControllerConfig)
#define Can_GetRxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStopOfControllerConfig)
#define Can_GetRxFullHandleMaxOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHandleMaxOfControllerConfig)
#define Can_GetRxFullHandleStartOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHandleStartOfControllerConfig)
#define Can_GetRxFullHandleStopOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHandleStopOfControllerConfig)
#define Can_GetRxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStartOfControllerConfig)
#define Can_GetRxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStopOfControllerConfig)
#define Can_GetTxBasicHandleMaxOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHandleMaxOfControllerConfig)
#define Can_GetTxBasicHandleStartOfControllerConfig(Index)            (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHandleStartOfControllerConfig)
#define Can_GetTxBasicHandleStopOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHandleStopOfControllerConfig)
#define Can_GetTxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStartOfControllerConfig)
#define Can_GetTxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStopOfControllerConfig)
#define Can_GetTxFullHandleMaxOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHandleMaxOfControllerConfig)
#define Can_GetTxFullHandleStartOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHandleStartOfControllerConfig)
#define Can_GetTxFullHandleStopOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHandleStopOfControllerConfig)
#define Can_GetTxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStartOfControllerConfig)
#define Can_GetTxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStopOfControllerConfig)
#define Can_GetUnusedHandleMaxOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHandleMaxOfControllerConfig)
#define Can_GetUnusedHandleStartOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHandleStartOfControllerConfig)
#define Can_GetUnusedHandleStopOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHandleStopOfControllerConfig)
#define Can_GetUnusedHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStartOfControllerConfig)
#define Can_GetUnusedHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStopOfControllerConfig)
#define Can_GetFBTP(Index)                                            (Can_GetFBTPOfPCConfig()[(Index)])
#define Can_GetGFC(Index)                                             (Can_GetGFCOfPCConfig()[(Index)])
#define Can_GetInitObjectBaudrate(Index)                              (Can_GetInitObjectBaudrateOfPCConfig()[(Index)])
#define Can_GetInitObjectFdBrsConfig(Index)                           (Can_GetInitObjectFdBrsConfigOfPCConfig()[(Index)])
#define Can_GetInitObjectStartIndex(Index)                            (Can_GetInitObjectStartIndexOfPCConfig()[(Index)])
#define Can_GetIntEnable(Index)                                       (Can_GetIntEnableOfPCConfig()[(Index)])
#define Can_IsIsBusOff(Index)                                         ((Can_GetIsBusOffOfPCConfig()[(Index)]) != FALSE)
#define Can_IsIsHardwareCanceled(Index)                               ((Can_GetIsHardwareCanceledOfPCConfig()[(Index)]) != FALSE)
#define Can_IsIsTTCan(Index)                                          ((Can_GetIsTTCanOfPCConfig()[(Index)]) != FALSE)
#define Can_GetLastInitObject(Index)                                  (Can_GetLastInitObjectOfPCConfig()[(Index)])
#define Can_GetLogStatus(Index)                                       (Can_GetLogStatusOfPCConfig()[(Index)])
#define Can_GetLoopTimeout(Index)                                     (Can_GetLoopTimeoutOfPCConfig()[(Index)])
#define Can_GetDLC_FIFOOfMailbox(Index)                               (Can_GetMailboxOfPCConfig()[(Index)].DLC_FIFOOfMailbox)
#define Can_GetFdPaddingOfMailbox(Index)                              (Can_GetMailboxOfPCConfig()[(Index)].FdPaddingOfMailbox)
#define Can_GetHwHandleOfMailbox(Index)                               (Can_GetMailboxOfPCConfig()[(Index)].HwHandleOfMailbox)
#define Can_GetIDValueOfMailbox(Index)                                (Can_GetMailboxOfPCConfig()[(Index)].IDValueOfMailbox)
#define Can_GetMailboxTypeOfMailbox(Index)                            (Can_GetMailboxOfPCConfig()[(Index)].MailboxTypeOfMailbox)
#define Can_GetMaxDataLenOfMailbox(Index)                             (Can_GetMailboxOfPCConfig()[(Index)].MaxDataLenOfMailbox)
#define Can_GetMsgControllerOfMailbox(Index)                          (Can_GetMailboxOfPCConfig()[(Index)].MsgControllerOfMailbox)
#define Can_GetNonFdObjectsPendingFlag(Index)                         (Can_GetNonFdObjectsPendingFlagOfPCConfig()[(Index)])
#define Can_GetPhysToLogChannel(Index)                                (Can_GetPhysToLogChannelOfPCConfig()[(Index)])
#define Can_GetFLSSAOfSIDFC(Index)                                    (Can_GetSIDFCOfPCConfig()[(Index)].FLSSAOfSIDFC)
#define Can_GetLSSOfSIDFC(Index)                                      (Can_GetSIDFCOfPCConfig()[(Index)].LSSOfSIDFC)
#define Can_GetSIDFEEndIdxOfSIDFC(Index)                              (Can_GetSIDFCOfPCConfig()[(Index)].SIDFEEndIdxOfSIDFC)
#define Can_GetSIDFEStartIdxOfSIDFC(Index)                            (Can_GetSIDFCOfPCConfig()[(Index)].SIDFEStartIdxOfSIDFC)
#define Can_GetSIDFE(Index)                                           (Can_GetSIDFEOfPCConfig()[(Index)])
#define Can_GetRXBAOfShmAdr(Index)                                    (Can_GetShmAdrOfPCConfig()[(Index)].RXBAOfShmAdr)
#define Can_GetRXF0AOfShmAdr(Index)                                   (Can_GetShmAdrOfPCConfig()[(Index)].RXF0AOfShmAdr)
#define Can_GetRXF1AOfShmAdr(Index)                                   (Can_GetShmAdrOfPCConfig()[(Index)].RXF1AOfShmAdr)
#define Can_GetSIDFAOfShmAdr(Index)                                   (Can_GetShmAdrOfPCConfig()[(Index)].SIDFAOfShmAdr)
#define Can_GetStartAdrOfShmAdr(Index)                                (Can_GetShmAdrOfPCConfig()[(Index)].StartAdrOfShmAdr)
#define Can_GetStopAdrOfShmAdr(Index)                                 (Can_GetShmAdrOfPCConfig()[(Index)].StopAdrOfShmAdr)
#define Can_GetTXBAOfShmAdr(Index)                                    (Can_GetShmAdrOfPCConfig()[(Index)].TXBAOfShmAdr)
#define Can_GetTXEFAOfShmAdr(Index)                                   (Can_GetShmAdrOfPCConfig()[(Index)].TXEFAOfShmAdr)
#define Can_GetXIDFAOfShmAdr(Index)                                   (Can_GetShmAdrOfPCConfig()[(Index)].XIDFAOfShmAdr)
#define Can_GetF0DSOfShmElementSize(Index)                            (Can_GetShmElementSizeOfPCConfig()[(Index)].F0DSOfShmElementSize)
#define Can_GetF1DSOfShmElementSize(Index)                            (Can_GetShmElementSizeOfPCConfig()[(Index)].F1DSOfShmElementSize)
#define Can_GetRBDSOfShmElementSize(Index)                            (Can_GetShmElementSizeOfPCConfig()[(Index)].RBDSOfShmElementSize)
#define Can_GetTBDSOfShmElementSize(Index)                            (Can_GetShmElementSizeOfPCConfig()[(Index)].TBDSOfShmElementSize)
#define Can_GetTEFBDSOfShmElementSize(Index)                          (Can_GetShmElementSizeOfPCConfig()[(Index)].TEFBDSOfShmElementSize)
#define Can_GetStatusReq(Index)                                       (Can_GetStatusReqOfPCConfig()[(Index)])
#define Can_GetTDCR(Index)                                            (Can_GetTDCROfPCConfig()[(Index)])
#define Can_GetTXBCR(Index)                                           (Can_GetTXBCROfPCConfig()[(Index)])
#define Can_GetT0OfTXBE(Index)                                        (Can_GetTXBEOfPCConfig()[(Index)].T0OfTXBE)
#define Can_GetT1OfTXBE(Index)                                        (Can_GetTXBEOfPCConfig()[(Index)].T1OfTXBE)
#define Can_GetTXBRP(Index)                                           (Can_GetTXBRPOfPCConfig()[(Index)])
#define Can_GetTxOffsetHwToLog(Index)                                 (Can_GetTxOffsetHwToLogOfPCConfig()[(Index)])
#define Can_GetXIDAM(Index)                                           (Can_GetXIDAMOfPCConfig()[(Index)])
#define Can_GetFLESAOfXIDFC(Index)                                    (Can_GetXIDFCOfPCConfig()[(Index)].FLESAOfXIDFC)
#define Can_GetLSEOfXIDFC(Index)                                      (Can_GetXIDFCOfPCConfig()[(Index)].LSEOfXIDFC)
#define Can_GetEIDFE_0OfXIDFE(Index)                                  (Can_GetXIDFEOfPCConfig()[(Index)].EIDFE_0OfXIDFE)
#define Can_GetEIDFE_1OfXIDFE(Index)                                  (Can_GetXIDFEOfPCConfig()[(Index)].EIDFE_1OfXIDFE)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDeduplicatedDataMacros  Can Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Can_GetBaseDll_GeneratorVersion()                             Can_GetBaseDll_GeneratorVersionOfPCConfig()
#define Can_GetCAN_FD_NISO()                                          Can_GetCAN_FD_NISOOfPCConfig()
#define Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEP()                     Can_GetC_ENABLE_MPC5700_MCAN_CREL_SSTEPOfPCConfig()
#define Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEP()                      Can_GetC_ENABLE_MPC5700_MCAN_CREL_STEPOfPCConfig()
#define Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CREL()                     Can_GetC_ENABLE_MPC5700_MCAN_MAJOR_CRELOfPCConfig()
#define Can_GetIdentitySelected()                                     Can_GetIdentitySelectedOfPCConfig()
#define Can_GetMaxRxDataLen()                                         Can_GetMaxRxDataLenOfPCConfig()
#define Can_GetMaxTxDataLen()                                         Can_GetMaxTxDataLenOfPCConfig()
#define Can_GetPlatformDll_GeneratorVersion()                         Can_GetPlatformDll_GeneratorVersionOfPCConfig()
#define Can_IsSIDFEUsedOfSIDFC(Index)                                 (((boolean)(Can_GetSIDFEStartIdxOfSIDFC(Index) != CAN_NO_SIDFESTARTIDXOFSIDFC)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Can_SIDFE */
#define Can_GetSizeOfActiveSendPdu()                                  Can_GetSizeOfActiveSendPduOfPCConfig()
#define Can_GetSizeOfActiveSendState()                                Can_GetSizeOfActiveSendStateOfPCConfig()
#define Can_GetSizeOfBTP()                                            Can_GetSizeOfBTPOfPCConfig()
#define Can_GetSizeOfBasisAdr()                                       Can_GetSizeOfBasisAdrOfPCConfig()
#define Can_GetSizeOfBufferConfig()                                   Can_GetSizeOfBufferConfigOfPCConfig()
#define Can_GetSizeOfBusOffNotification()                             Can_GetSizeOfBusOffNotificationOfPCConfig()
#define Can_GetSizeOfCanIfChannelId()                                 Can_GetSizeOfCanIfChannelIdOfPCConfig()
#define Can_GetSizeOfCanInterruptCounter()                            Can_GetSizeOfCanInterruptCounterOfPCConfig()
#define Can_GetSizeOfCanInterruptOldStatus()                          Can_GetSizeOfCanInterruptOldStatusOfPCConfig()
#define Can_GetSizeOfControllerConfig()                               Can_GetSizeOfControllerConfigOfPCConfig()
#define Can_GetSizeOfFBTP()                                           Can_GetSizeOfFBTPOfPCConfig()
#define Can_GetSizeOfGFC()                                            Can_GetSizeOfGFCOfPCConfig()
#define Can_GetSizeOfInitObjectBaudrate()                             Can_GetSizeOfInitObjectBaudrateOfPCConfig()
#define Can_GetSizeOfInitObjectFdBrsConfig()                          Can_GetSizeOfInitObjectFdBrsConfigOfPCConfig()
#define Can_GetSizeOfInitObjectStartIndex()                           Can_GetSizeOfInitObjectStartIndexOfPCConfig()
#define Can_GetSizeOfIntEnable()                                      Can_GetSizeOfIntEnableOfPCConfig()
#define Can_GetSizeOfIsBusOff()                                       Can_GetSizeOfIsBusOffOfPCConfig()
#define Can_GetSizeOfIsHardwareCanceled()                             Can_GetSizeOfIsHardwareCanceledOfPCConfig()
#define Can_GetSizeOfIsTTCan()                                        Can_GetSizeOfIsTTCanOfPCConfig()
#define Can_GetSizeOfLastInitObject()                                 Can_GetSizeOfLastInitObjectOfPCConfig()
#define Can_GetSizeOfLogStatus()                                      Can_GetSizeOfLogStatusOfPCConfig()
#define Can_GetSizeOfLoopTimeout()                                    Can_GetSizeOfLoopTimeoutOfPCConfig()
#define Can_GetSizeOfMailbox()                                        Can_GetSizeOfMailboxOfPCConfig()
#define Can_GetSizeOfNonFdObjectsPendingFlag()                        Can_GetSizeOfNonFdObjectsPendingFlagOfPCConfig()
#define Can_GetSizeOfPhysToLogChannel()                               Can_GetSizeOfPhysToLogChannelOfPCConfig()
#define Can_GetSizeOfSIDFC()                                          Can_GetSizeOfSIDFCOfPCConfig()
#define Can_GetSizeOfSIDFE()                                          Can_GetSizeOfSIDFEOfPCConfig()
#define Can_GetSizeOfShmAdr()                                         Can_GetSizeOfShmAdrOfPCConfig()
#define Can_GetSizeOfShmElementSize()                                 Can_GetSizeOfShmElementSizeOfPCConfig()
#define Can_GetSizeOfStatusReq()                                      Can_GetSizeOfStatusReqOfPCConfig()
#define Can_GetSizeOfTDCR()                                           Can_GetSizeOfTDCROfPCConfig()
#define Can_GetSizeOfTXBCR()                                          Can_GetSizeOfTXBCROfPCConfig()
#define Can_GetSizeOfTXBE()                                           Can_GetSizeOfTXBEOfPCConfig()
#define Can_GetSizeOfTXBRP()                                          Can_GetSizeOfTXBRPOfPCConfig()
#define Can_GetSizeOfTxOffsetHwToLog()                                Can_GetSizeOfTxOffsetHwToLogOfPCConfig()
#define Can_GetSizeOfXIDAM()                                          Can_GetSizeOfXIDAMOfPCConfig()
#define Can_GetSizeOfXIDFC()                                          Can_GetSizeOfXIDFCOfPCConfig()
#define Can_GetSizeOfXIDFE()                                          Can_GetSizeOfXIDFEOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSetDataMacros  Can Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Can_SetActiveSendPdu(Index, Value)                            Can_GetActiveSendPduOfPCConfig()[(Index)] = (Value)
#define Can_SetActiveSendState(Index, Value)                          Can_GetActiveSendStateOfPCConfig()[(Index)] = (Value)
#define Can_SetBusOffNotification(Index, Value)                       Can_GetBusOffNotificationOfPCConfig()[(Index)] = (Value)
#define Can_SetCanInterruptCounter(Index, Value)                      Can_GetCanInterruptCounterOfPCConfig()[(Index)] = (Value)
#define Can_SetCanInterruptOldStatus(Index, Value)                    Can_GetCanInterruptOldStatusOfPCConfig()[(Index)] = (Value)
#define Can_SetIntEnable(Index, Value)                                Can_GetIntEnableOfPCConfig()[(Index)] = (Value)
#define Can_SetIsBusOff(Index, Value)                                 Can_GetIsBusOffOfPCConfig()[(Index)] = (Value)
#define Can_SetIsHardwareCanceled(Index, Value)                       Can_GetIsHardwareCanceledOfPCConfig()[(Index)] = (Value)
#define Can_SetLastInitObject(Index, Value)                           Can_GetLastInitObjectOfPCConfig()[(Index)] = (Value)
#define Can_SetLogStatus(Index, Value)                                Can_GetLogStatusOfPCConfig()[(Index)] = (Value)
#define Can_SetLoopTimeout(Index, Value)                              Can_GetLoopTimeoutOfPCConfig()[(Index)] = (Value)
#define Can_SetNonFdObjectsPendingFlag(Index, Value)                  Can_GetNonFdObjectsPendingFlagOfPCConfig()[(Index)] = (Value)
#define Can_SetStatusReq(Index, Value)                                Can_GetStatusReqOfPCConfig()[(Index)] = (Value)
#define Can_SetTXBCR(Index, Value)                                    Can_GetTXBCROfPCConfig()[(Index)] = (Value)
#define Can_SetT0OfTXBE(Index, Value)                                 Can_GetTXBEOfPCConfig()[(Index)].T0OfTXBE = (Value)
#define Can_SetT1OfTXBE(Index, Value)                                 Can_GetTXBEOfPCConfig()[(Index)].T1OfTXBE = (Value)
#define Can_SetTXBRP(Index, Value)                                    Can_GetTXBRPOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCHasMacros  Can Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Can_HasActiveSendPdu()                                        (TRUE != FALSE)
#define Can_HasActiveSendState()                                      (TRUE != FALSE)
#define Can_HasBTP()                                                  (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersion()                             (TRUE != FALSE)
#define Can_HasBasisAdr()                                             (TRUE != FALSE)
#define Can_HasBufferConfig()                                         (TRUE != FALSE)
#define Can_HasRXBCOfBufferConfig()                                   (TRUE != FALSE)
#define Can_HasRXF0COfBufferConfig()                                  (TRUE != FALSE)
#define Can_HasRXF1COfBufferConfig()                                  (TRUE != FALSE)
#define Can_HasTXBCOfBufferConfig()                                   (TRUE != FALSE)
#define Can_HasTXEFCOfBufferConfig()                                  (TRUE != FALSE)
#define Can_HasBusOffNotification()                                   (TRUE != FALSE)
#define Can_HasCAN_FD_NISO()                                          (TRUE != FALSE)
#define Can_HasC_ENABLE_MPC5700_MCAN_CREL_SSTEP()                     (TRUE != FALSE)
#define Can_HasC_ENABLE_MPC5700_MCAN_CREL_STEP()                      (TRUE != FALSE)
#define Can_HasC_ENABLE_MPC5700_MCAN_MAJOR_CREL()                     (TRUE != FALSE)
#define Can_HasCanIfChannelId()                                       (TRUE != FALSE)
#define Can_HasCanInterruptCounter()                                  (TRUE != FALSE)
#define Can_HasCanInterruptOldStatus()                                (TRUE != FALSE)
#define Can_HasControllerConfig()                                     (TRUE != FALSE)
#define Can_HasCanControllerDefaultBaudrateOfControllerConfig()       (TRUE != FALSE)
#define Can_HasRxBasicHandleMaxOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasRxBasicHandleStartOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasRxBasicHandleStopOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasRxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasRxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHandleMaxOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasRxFullHandleStartOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasRxFullHandleStopOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasRxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasTxBasicHandleMaxOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasTxBasicHandleStartOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasTxBasicHandleStopOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasTxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasTxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHandleMaxOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasTxFullHandleStartOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasTxFullHandleStopOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasTxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasUnusedHandleMaxOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasUnusedHandleStartOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasUnusedHandleStopOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasUnusedHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasUnusedHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasFBTP()                                                 (TRUE != FALSE)
#define Can_HasGFC()                                                  (TRUE != FALSE)
#define Can_HasIdentitySelected()                                     (TRUE != FALSE)
#define Can_HasInitObjectBaudrate()                                   (TRUE != FALSE)
#define Can_HasInitObjectFdBrsConfig()                                (TRUE != FALSE)
#define Can_HasInitObjectStartIndex()                                 (TRUE != FALSE)
#define Can_HasIntEnable()                                            (TRUE != FALSE)
#define Can_HasIsBusOff()                                             (TRUE != FALSE)
#define Can_HasIsHardwareCanceled()                                   (TRUE != FALSE)
#define Can_HasIsTTCan()                                              (TRUE != FALSE)
#define Can_HasLastInitObject()                                       (TRUE != FALSE)
#define Can_HasLogStatus()                                            (TRUE != FALSE)
#define Can_HasLoopTimeout()                                          (TRUE != FALSE)
#define Can_HasMailbox()                                              (TRUE != FALSE)
#define Can_HasDLC_FIFOOfMailbox()                                    (TRUE != FALSE)
#define Can_HasFdPaddingOfMailbox()                                   (TRUE != FALSE)
#define Can_HasHwHandleOfMailbox()                                    (TRUE != FALSE)
#define Can_HasIDValueOfMailbox()                                     (TRUE != FALSE)
#define Can_HasMailboxTypeOfMailbox()                                 (TRUE != FALSE)
#define Can_HasMaxDataLenOfMailbox()                                  (TRUE != FALSE)
#define Can_HasMsgControllerOfMailbox()                               (TRUE != FALSE)
#define Can_HasMaxRxDataLen()                                         (TRUE != FALSE)
#define Can_HasMaxTxDataLen()                                         (TRUE != FALSE)
#define Can_HasNonFdObjectsPendingFlag()                              (TRUE != FALSE)
#define Can_HasPhysToLogChannel()                                     (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersion()                         (TRUE != FALSE)
#define Can_HasSIDFC()                                                (TRUE != FALSE)
#define Can_HasFLSSAOfSIDFC()                                         (TRUE != FALSE)
#define Can_HasLSSOfSIDFC()                                           (TRUE != FALSE)
#define Can_HasSIDFEEndIdxOfSIDFC()                                   (TRUE != FALSE)
#define Can_HasSIDFEStartIdxOfSIDFC()                                 (TRUE != FALSE)
#define Can_HasSIDFEUsedOfSIDFC()                                     (TRUE != FALSE)
#define Can_HasSIDFE()                                                (TRUE != FALSE)
#define Can_HasShmAdr()                                               (TRUE != FALSE)
#define Can_HasRXBAOfShmAdr()                                         (TRUE != FALSE)
#define Can_HasRXF0AOfShmAdr()                                        (TRUE != FALSE)
#define Can_HasRXF1AOfShmAdr()                                        (TRUE != FALSE)
#define Can_HasSIDFAOfShmAdr()                                        (TRUE != FALSE)
#define Can_HasStartAdrOfShmAdr()                                     (TRUE != FALSE)
#define Can_HasStopAdrOfShmAdr()                                      (TRUE != FALSE)
#define Can_HasTXBAOfShmAdr()                                         (TRUE != FALSE)
#define Can_HasTXEFAOfShmAdr()                                        (TRUE != FALSE)
#define Can_HasXIDFAOfShmAdr()                                        (TRUE != FALSE)
#define Can_HasShmElementSize()                                       (TRUE != FALSE)
#define Can_HasF0DSOfShmElementSize()                                 (TRUE != FALSE)
#define Can_HasF1DSOfShmElementSize()                                 (TRUE != FALSE)
#define Can_HasRBDSOfShmElementSize()                                 (TRUE != FALSE)
#define Can_HasTBDSOfShmElementSize()                                 (TRUE != FALSE)
#define Can_HasTEFBDSOfShmElementSize()                               (TRUE != FALSE)
#define Can_HasSizeOfActiveSendPdu()                                  (TRUE != FALSE)
#define Can_HasSizeOfActiveSendState()                                (TRUE != FALSE)
#define Can_HasSizeOfBTP()                                            (TRUE != FALSE)
#define Can_HasSizeOfBasisAdr()                                       (TRUE != FALSE)
#define Can_HasSizeOfBufferConfig()                                   (TRUE != FALSE)
#define Can_HasSizeOfBusOffNotification()                             (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelId()                                 (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptCounter()                            (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptOldStatus()                          (TRUE != FALSE)
#define Can_HasSizeOfControllerConfig()                               (TRUE != FALSE)
#define Can_HasSizeOfFBTP()                                           (TRUE != FALSE)
#define Can_HasSizeOfGFC()                                            (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrate()                             (TRUE != FALSE)
#define Can_HasSizeOfInitObjectFdBrsConfig()                          (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndex()                           (TRUE != FALSE)
#define Can_HasSizeOfIntEnable()                                      (TRUE != FALSE)
#define Can_HasSizeOfIsBusOff()                                       (TRUE != FALSE)
#define Can_HasSizeOfIsHardwareCanceled()                             (TRUE != FALSE)
#define Can_HasSizeOfIsTTCan()                                        (TRUE != FALSE)
#define Can_HasSizeOfLastInitObject()                                 (TRUE != FALSE)
#define Can_HasSizeOfLogStatus()                                      (TRUE != FALSE)
#define Can_HasSizeOfLoopTimeout()                                    (TRUE != FALSE)
#define Can_HasSizeOfMailbox()                                        (TRUE != FALSE)
#define Can_HasSizeOfNonFdObjectsPendingFlag()                        (TRUE != FALSE)
#define Can_HasSizeOfPhysToLogChannel()                               (TRUE != FALSE)
#define Can_HasSizeOfSIDFC()                                          (TRUE != FALSE)
#define Can_HasSizeOfSIDFE()                                          (TRUE != FALSE)
#define Can_HasSizeOfShmAdr()                                         (TRUE != FALSE)
#define Can_HasSizeOfShmElementSize()                                 (TRUE != FALSE)
#define Can_HasSizeOfStatusReq()                                      (TRUE != FALSE)
#define Can_HasSizeOfTDCR()                                           (TRUE != FALSE)
#define Can_HasSizeOfTXBCR()                                          (TRUE != FALSE)
#define Can_HasSizeOfTXBE()                                           (TRUE != FALSE)
#define Can_HasSizeOfTXBRP()                                          (TRUE != FALSE)
#define Can_HasSizeOfTxOffsetHwToLog()                                (TRUE != FALSE)
#define Can_HasSizeOfXIDAM()                                          (TRUE != FALSE)
#define Can_HasSizeOfXIDFC()                                          (TRUE != FALSE)
#define Can_HasSizeOfXIDFE()                                          (TRUE != FALSE)
#define Can_HasStatusReq()                                            (TRUE != FALSE)
#define Can_HasTDCR()                                                 (TRUE != FALSE)
#define Can_HasTXBCR()                                                (TRUE != FALSE)
#define Can_HasTXBE()                                                 (TRUE != FALSE)
#define Can_HasT0OfTXBE()                                             (TRUE != FALSE)
#define Can_HasT1OfTXBE()                                             (TRUE != FALSE)
#define Can_HasTXBRP()                                                (TRUE != FALSE)
#define Can_HasTxOffsetHwToLog()                                      (TRUE != FALSE)
#define Can_HasXIDAM()                                                (TRUE != FALSE)
#define Can_HasXIDFC()                                                (TRUE != FALSE)
#define Can_HasFLESAOfXIDFC()                                         (TRUE != FALSE)
#define Can_HasLSEOfXIDFC()                                           (TRUE != FALSE)
#define Can_HasXIDFE()                                                (TRUE != FALSE)
#define Can_HasEIDFE_0OfXIDFE()                                       (TRUE != FALSE)
#define Can_HasEIDFE_1OfXIDFE()                                       (TRUE != FALSE)
#define Can_HasPCConfig()                                             (TRUE != FALSE)
#define Can_HasActiveSendPduOfPCConfig()                              (TRUE != FALSE)
#define Can_HasActiveSendStateOfPCConfig()                            (TRUE != FALSE)
#define Can_HasBTPOfPCConfig()                                        (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersionOfPCConfig()                   (TRUE != FALSE)
#define Can_HasBasisAdrOfPCConfig()                                   (TRUE != FALSE)
#define Can_HasBufferConfigOfPCConfig()                               (TRUE != FALSE)
#define Can_HasBusOffNotificationOfPCConfig()                         (TRUE != FALSE)
#define Can_HasCAN_FD_NISOOfPCConfig()                                (TRUE != FALSE)
#define Can_HasC_ENABLE_MPC5700_MCAN_CREL_SSTEPOfPCConfig()           (TRUE != FALSE)
#define Can_HasC_ENABLE_MPC5700_MCAN_CREL_STEPOfPCConfig()            (TRUE != FALSE)
#define Can_HasC_ENABLE_MPC5700_MCAN_MAJOR_CRELOfPCConfig()           (TRUE != FALSE)
#define Can_HasCanIfChannelIdOfPCConfig()                             (TRUE != FALSE)
#define Can_HasCanInterruptCounterOfPCConfig()                        (TRUE != FALSE)
#define Can_HasCanInterruptOldStatusOfPCConfig()                      (TRUE != FALSE)
#define Can_HasControllerConfigOfPCConfig()                           (TRUE != FALSE)
#define Can_HasFBTPOfPCConfig()                                       (TRUE != FALSE)
#define Can_HasGFCOfPCConfig()                                        (TRUE != FALSE)
#define Can_HasIdentitySelectedOfPCConfig()                           (TRUE != FALSE)
#define Can_HasInitObjectBaudrateOfPCConfig()                         (TRUE != FALSE)
#define Can_HasInitObjectFdBrsConfigOfPCConfig()                      (TRUE != FALSE)
#define Can_HasInitObjectStartIndexOfPCConfig()                       (TRUE != FALSE)
#define Can_HasIntEnableOfPCConfig()                                  (TRUE != FALSE)
#define Can_HasIsBusOffOfPCConfig()                                   (TRUE != FALSE)
#define Can_HasIsHardwareCanceledOfPCConfig()                         (TRUE != FALSE)
#define Can_HasIsTTCanOfPCConfig()                                    (TRUE != FALSE)
#define Can_HasLastInitObjectOfPCConfig()                             (TRUE != FALSE)
#define Can_HasLogStatusOfPCConfig()                                  (TRUE != FALSE)
#define Can_HasLoopTimeoutOfPCConfig()                                (TRUE != FALSE)
#define Can_HasMailboxOfPCConfig()                                    (TRUE != FALSE)
#define Can_HasMaxRxDataLenOfPCConfig()                               (TRUE != FALSE)
#define Can_HasMaxTxDataLenOfPCConfig()                               (TRUE != FALSE)
#define Can_HasNonFdObjectsPendingFlagOfPCConfig()                    (TRUE != FALSE)
#define Can_HasPhysToLogChannelOfPCConfig()                           (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersionOfPCConfig()               (TRUE != FALSE)
#define Can_HasSIDFCOfPCConfig()                                      (TRUE != FALSE)
#define Can_HasSIDFEOfPCConfig()                                      (TRUE != FALSE)
#define Can_HasShmAdrOfPCConfig()                                     (TRUE != FALSE)
#define Can_HasShmElementSizeOfPCConfig()                             (TRUE != FALSE)
#define Can_HasSizeOfActiveSendPduOfPCConfig()                        (TRUE != FALSE)
#define Can_HasSizeOfActiveSendStateOfPCConfig()                      (TRUE != FALSE)
#define Can_HasSizeOfBTPOfPCConfig()                                  (TRUE != FALSE)
#define Can_HasSizeOfBasisAdrOfPCConfig()                             (TRUE != FALSE)
#define Can_HasSizeOfBufferConfigOfPCConfig()                         (TRUE != FALSE)
#define Can_HasSizeOfBusOffNotificationOfPCConfig()                   (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelIdOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptCounterOfPCConfig()                  (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptOldStatusOfPCConfig()                (TRUE != FALSE)
#define Can_HasSizeOfControllerConfigOfPCConfig()                     (TRUE != FALSE)
#define Can_HasSizeOfFBTPOfPCConfig()                                 (TRUE != FALSE)
#define Can_HasSizeOfGFCOfPCConfig()                                  (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrateOfPCConfig()                   (TRUE != FALSE)
#define Can_HasSizeOfInitObjectFdBrsConfigOfPCConfig()                (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndexOfPCConfig()                 (TRUE != FALSE)
#define Can_HasSizeOfIntEnableOfPCConfig()                            (TRUE != FALSE)
#define Can_HasSizeOfIsBusOffOfPCConfig()                             (TRUE != FALSE)
#define Can_HasSizeOfIsHardwareCanceledOfPCConfig()                   (TRUE != FALSE)
#define Can_HasSizeOfIsTTCanOfPCConfig()                              (TRUE != FALSE)
#define Can_HasSizeOfLastInitObjectOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfLogStatusOfPCConfig()                            (TRUE != FALSE)
#define Can_HasSizeOfLoopTimeoutOfPCConfig()                          (TRUE != FALSE)
#define Can_HasSizeOfMailboxOfPCConfig()                              (TRUE != FALSE)
#define Can_HasSizeOfNonFdObjectsPendingFlagOfPCConfig()              (TRUE != FALSE)
#define Can_HasSizeOfPhysToLogChannelOfPCConfig()                     (TRUE != FALSE)
#define Can_HasSizeOfSIDFCOfPCConfig()                                (TRUE != FALSE)
#define Can_HasSizeOfSIDFEOfPCConfig()                                (TRUE != FALSE)
#define Can_HasSizeOfShmAdrOfPCConfig()                               (TRUE != FALSE)
#define Can_HasSizeOfShmElementSizeOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfStatusReqOfPCConfig()                            (TRUE != FALSE)
#define Can_HasSizeOfTDCROfPCConfig()                                 (TRUE != FALSE)
#define Can_HasSizeOfTXBCROfPCConfig()                                (TRUE != FALSE)
#define Can_HasSizeOfTXBEOfPCConfig()                                 (TRUE != FALSE)
#define Can_HasSizeOfTXBRPOfPCConfig()                                (TRUE != FALSE)
#define Can_HasSizeOfTxOffsetHwToLogOfPCConfig()                      (TRUE != FALSE)
#define Can_HasSizeOfXIDAMOfPCConfig()                                (TRUE != FALSE)
#define Can_HasSizeOfXIDFCOfPCConfig()                                (TRUE != FALSE)
#define Can_HasSizeOfXIDFEOfPCConfig()                                (TRUE != FALSE)
#define Can_HasStatusReqOfPCConfig()                                  (TRUE != FALSE)
#define Can_HasTDCROfPCConfig()                                       (TRUE != FALSE)
#define Can_HasTXBCROfPCConfig()                                      (TRUE != FALSE)
#define Can_HasTXBEOfPCConfig()                                       (TRUE != FALSE)
#define Can_HasTXBRPOfPCConfig()                                      (TRUE != FALSE)
#define Can_HasTxOffsetHwToLogOfPCConfig()                            (TRUE != FALSE)
#define Can_HasXIDAMOfPCConfig()                                      (TRUE != FALSE)
#define Can_HasXIDFCOfPCConfig()                                      (TRUE != FALSE)
#define Can_HasXIDFEOfPCConfig()                                      (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIncrementDataMacros  Can Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Can_IncActiveSendPdu(Index)                                   Can_GetActiveSendPdu(Index)++
#define Can_IncActiveSendState(Index)                                 Can_GetActiveSendState(Index)++
#define Can_IncBusOffNotification(Index)                              Can_GetBusOffNotification(Index)++
#define Can_IncCanInterruptCounter(Index)                             Can_GetCanInterruptCounter(Index)++
#define Can_IncCanInterruptOldStatus(Index)                           Can_GetCanInterruptOldStatus(Index)++
#define Can_IncIntEnable(Index)                                       Can_GetIntEnable(Index)++
#define Can_IncLastInitObject(Index)                                  Can_GetLastInitObject(Index)++
#define Can_IncLogStatus(Index)                                       Can_GetLogStatus(Index)++
#define Can_IncLoopTimeout(Index)                                     Can_GetLoopTimeout(Index)++
#define Can_IncNonFdObjectsPendingFlag(Index)                         Can_GetNonFdObjectsPendingFlag(Index)++
#define Can_IncStatusReq(Index)                                       Can_GetStatusReq(Index)++
#define Can_IncTXBCR(Index)                                           Can_GetTXBCR(Index)++
#define Can_IncT0OfTXBE(Index)                                        Can_GetT0OfTXBE(Index)++
#define Can_IncT1OfTXBE(Index)                                        Can_GetT1OfTXBE(Index)++
#define Can_IncTXBRP(Index)                                           Can_GetTXBRP(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanPCDecrementDataMacros  Can Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Can_DecActiveSendPdu(Index)                                   Can_GetActiveSendPdu(Index)--
#define Can_DecActiveSendState(Index)                                 Can_GetActiveSendState(Index)--
#define Can_DecBusOffNotification(Index)                              Can_GetBusOffNotification(Index)--
#define Can_DecCanInterruptCounter(Index)                             Can_GetCanInterruptCounter(Index)--
#define Can_DecCanInterruptOldStatus(Index)                           Can_GetCanInterruptOldStatus(Index)--
#define Can_DecIntEnable(Index)                                       Can_GetIntEnable(Index)--
#define Can_DecLastInitObject(Index)                                  Can_GetLastInitObject(Index)--
#define Can_DecLogStatus(Index)                                       Can_GetLogStatus(Index)--
#define Can_DecLoopTimeout(Index)                                     Can_GetLoopTimeout(Index)--
#define Can_DecNonFdObjectsPendingFlag(Index)                         Can_GetNonFdObjectsPendingFlag(Index)--
#define Can_DecStatusReq(Index)                                       Can_GetStatusReq(Index)--
#define Can_DecTXBCR(Index)                                           Can_GetTXBCR(Index)--
#define Can_DecT0OfTXBE(Index)                                        Can_GetT0OfTXBE(Index)--
#define Can_DecT1OfTXBE(Index)                                        Can_GetT1OfTXBE(Index)--
#define Can_DecTXBRP(Index)                                           Can_GetTXBRP(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanPCIterableTypes  Can Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Can_ActiveSendPdu */
typedef uint8_least Can_ActiveSendPduIterType;

/**   \brief  type used to iterate Can_ActiveSendState */
typedef uint8_least Can_ActiveSendStateIterType;

/**   \brief  type used to iterate Can_BTP */
typedef uint8_least Can_BTPIterType;

/**   \brief  type used to iterate Can_BasisAdr */
typedef uint8_least Can_BasisAdrIterType;

/**   \brief  type used to iterate Can_BufferConfig */
typedef uint8_least Can_BufferConfigIterType;

/**   \brief  type used to iterate Can_BusOffNotification */
typedef uint8_least Can_BusOffNotificationIterType;

/**   \brief  type used to iterate Can_CanIfChannelId */
typedef uint8_least Can_CanIfChannelIdIterType;

/**   \brief  type used to iterate Can_CanInterruptCounter */
typedef uint8_least Can_CanInterruptCounterIterType;

/**   \brief  type used to iterate Can_CanInterruptOldStatus */
typedef uint8_least Can_CanInterruptOldStatusIterType;

/**   \brief  type used to iterate Can_ControllerConfig */
typedef uint8_least Can_ControllerConfigIterType;

/**   \brief  type used to iterate Can_FBTP */
typedef uint8_least Can_FBTPIterType;

/**   \brief  type used to iterate Can_GFC */
typedef uint8_least Can_GFCIterType;

/**   \brief  type used to iterate Can_InitObjectBaudrate */
typedef uint8_least Can_InitObjectBaudrateIterType;

/**   \brief  type used to iterate Can_InitObjectFdBrsConfig */
typedef uint8_least Can_InitObjectFdBrsConfigIterType;

/**   \brief  type used to iterate Can_InitObjectStartIndex */
typedef uint8_least Can_InitObjectStartIndexIterType;

/**   \brief  type used to iterate Can_IntEnable */
typedef uint8_least Can_IntEnableIterType;

/**   \brief  type used to iterate Can_IsBusOff */
typedef uint8_least Can_IsBusOffIterType;

/**   \brief  type used to iterate Can_IsHardwareCanceled */
typedef uint8_least Can_IsHardwareCanceledIterType;

/**   \brief  type used to iterate Can_IsTTCan */
typedef uint8_least Can_IsTTCanIterType;

/**   \brief  type used to iterate Can_LastInitObject */
typedef uint8_least Can_LastInitObjectIterType;

/**   \brief  type used to iterate Can_LogStatus */
typedef uint8_least Can_LogStatusIterType;

/**   \brief  type used to iterate Can_LoopTimeout */
typedef uint8_least Can_LoopTimeoutIterType;

/**   \brief  type used to iterate Can_Mailbox */
typedef uint8_least Can_MailboxIterType;

/**   \brief  type used to iterate Can_NonFdObjectsPendingFlag */
typedef uint8_least Can_NonFdObjectsPendingFlagIterType;

/**   \brief  type used to iterate Can_PhysToLogChannel */
typedef uint8_least Can_PhysToLogChannelIterType;

/**   \brief  type used to iterate Can_SIDFC */
typedef uint8_least Can_SIDFCIterType;

/**   \brief  type used to iterate Can_SIDFE */
typedef uint8_least Can_SIDFEIterType;

/**   \brief  type used to iterate Can_ShmAdr */
typedef uint8_least Can_ShmAdrIterType;

/**   \brief  type used to iterate Can_ShmElementSize */
typedef uint8_least Can_ShmElementSizeIterType;

/**   \brief  type used to iterate Can_StatusReq */
typedef uint8_least Can_StatusReqIterType;

/**   \brief  type used to iterate Can_TDCR */
typedef uint8_least Can_TDCRIterType;

/**   \brief  type used to iterate Can_TXBCR */
typedef uint8_least Can_TXBCRIterType;

/**   \brief  type used to iterate Can_TXBE */
typedef uint8_least Can_TXBEIterType;

/**   \brief  type used to iterate Can_TXBRP */
typedef uint8_least Can_TXBRPIterType;

/**   \brief  type used to iterate Can_TxOffsetHwToLog */
typedef uint8_least Can_TxOffsetHwToLogIterType;

/**   \brief  type used to iterate Can_XIDAM */
typedef uint8_least Can_XIDAMIterType;

/**   \brief  type used to iterate Can_XIDFC */
typedef uint8_least Can_XIDFCIterType;

/**   \brief  type used to iterate Can_XIDFE */
typedef uint8_least Can_XIDFEIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCValueTypes  Can Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Can_ActiveSendPdu */
typedef PduIdType Can_ActiveSendPduType;

/**   \brief  value based type definition for Can_ActiveSendState */
typedef uint8 Can_ActiveSendStateType;

/**   \brief  value based type definition for Can_BTP */
typedef uint32 Can_BTPType;

/**   \brief  value based type definition for Can_BaseDll_GeneratorVersion */
typedef uint16 Can_BaseDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_BasisAdr */
typedef uint32 Can_BasisAdrType;

/**   \brief  value based type definition for Can_RXBCOfBufferConfig */
typedef uint32 Can_RXBCOfBufferConfigType;

/**   \brief  value based type definition for Can_RXF0COfBufferConfig */
typedef uint32 Can_RXF0COfBufferConfigType;

/**   \brief  value based type definition for Can_RXF1COfBufferConfig */
typedef uint32 Can_RXF1COfBufferConfigType;

/**   \brief  value based type definition for Can_TXBCOfBufferConfig */
typedef uint32 Can_TXBCOfBufferConfigType;

/**   \brief  value based type definition for Can_TXEFCOfBufferConfig */
typedef uint32 Can_TXEFCOfBufferConfigType;

/**   \brief  value based type definition for Can_BusOffNotification */
typedef uint8 Can_BusOffNotificationType;

/**   \brief  value based type definition for Can_CAN_FD_NISO */
typedef uint8 Can_CAN_FD_NISOType;

/**   \brief  value based type definition for Can_C_ENABLE_MPC5700_MCAN_CREL_SSTEP */
typedef uint8 Can_C_ENABLE_MPC5700_MCAN_CREL_SSTEPType;

/**   \brief  value based type definition for Can_C_ENABLE_MPC5700_MCAN_CREL_STEP */
typedef uint8 Can_C_ENABLE_MPC5700_MCAN_CREL_STEPType;

/**   \brief  value based type definition for Can_C_ENABLE_MPC5700_MCAN_MAJOR_CREL */
typedef uint8 Can_C_ENABLE_MPC5700_MCAN_MAJOR_CRELType;

/**   \brief  value based type definition for Can_CanIfChannelId */
typedef uint8 Can_CanIfChannelIdType;

/**   \brief  value based type definition for Can_CanInterruptCounter */
typedef uint8 Can_CanInterruptCounterType;

/**   \brief  value based type definition for Can_CanControllerDefaultBaudrateOfControllerConfig */
typedef uint16 Can_CanControllerDefaultBaudrateOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHandleMaxOfControllerConfig */
typedef uint8 Can_RxBasicHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHandleStartOfControllerConfig */
typedef uint8 Can_RxBasicHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHandleStopOfControllerConfig */
typedef uint8 Can_RxBasicHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStartOfControllerConfig */
typedef uint8 Can_RxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStopOfControllerConfig */
typedef uint8 Can_RxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHandleMaxOfControllerConfig */
typedef uint8 Can_RxFullHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHandleStartOfControllerConfig */
typedef uint8 Can_RxFullHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHandleStopOfControllerConfig */
typedef uint8 Can_RxFullHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStartOfControllerConfig */
typedef uint8 Can_RxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStopOfControllerConfig */
typedef uint8 Can_RxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHandleMaxOfControllerConfig */
typedef uint8 Can_TxBasicHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHandleStartOfControllerConfig */
typedef uint8 Can_TxBasicHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHandleStopOfControllerConfig */
typedef uint8 Can_TxBasicHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStartOfControllerConfig */
typedef uint8 Can_TxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStopOfControllerConfig */
typedef uint8 Can_TxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHandleMaxOfControllerConfig */
typedef uint8 Can_TxFullHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHandleStartOfControllerConfig */
typedef uint8 Can_TxFullHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHandleStopOfControllerConfig */
typedef uint8 Can_TxFullHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStartOfControllerConfig */
typedef uint8 Can_TxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStopOfControllerConfig */
typedef uint8 Can_TxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHandleMaxOfControllerConfig */
typedef uint8 Can_UnusedHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHandleStartOfControllerConfig */
typedef uint8 Can_UnusedHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHandleStopOfControllerConfig */
typedef uint8 Can_UnusedHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStartOfControllerConfig */
typedef uint8 Can_UnusedHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStopOfControllerConfig */
typedef uint8 Can_UnusedHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_FBTP */
typedef uint32 Can_FBTPType;

/**   \brief  value based type definition for Can_GFC */
typedef uint32 Can_GFCType;

/**   \brief  value based type definition for Can_IdentitySelected */
typedef uint8 Can_IdentitySelectedType;

/**   \brief  value based type definition for Can_InitObjectBaudrate */
typedef uint16 Can_InitObjectBaudrateType;

/**   \brief  value based type definition for Can_InitObjectFdBrsConfig */
typedef uint8 Can_InitObjectFdBrsConfigType;

/**   \brief  value based type definition for Can_InitObjectStartIndex */
typedef uint8 Can_InitObjectStartIndexType;

/**   \brief  value based type definition for Can_IntEnable */
typedef uint32 Can_IntEnableType;

/**   \brief  value based type definition for Can_IsBusOff */
typedef boolean Can_IsBusOffType;

/**   \brief  value based type definition for Can_IsHardwareCanceled */
typedef boolean Can_IsHardwareCanceledType;

/**   \brief  value based type definition for Can_IsTTCan */
typedef boolean Can_IsTTCanType;

/**   \brief  value based type definition for Can_LastInitObject */
typedef uint8 Can_LastInitObjectType;

/**   \brief  value based type definition for Can_LogStatus */
typedef uint8 Can_LogStatusType;

/**   \brief  value based type definition for Can_DLC_FIFOOfMailbox */
typedef uint8 Can_DLC_FIFOOfMailboxType;

/**   \brief  value based type definition for Can_FdPaddingOfMailbox */
typedef uint8 Can_FdPaddingOfMailboxType;

/**   \brief  value based type definition for Can_HwHandleOfMailbox */
typedef uint8 Can_HwHandleOfMailboxType;

/**   \brief  value based type definition for Can_IDValueOfMailbox */
typedef uint16 Can_IDValueOfMailboxType;

/**   \brief  value based type definition for Can_MailboxTypeOfMailbox */
typedef uint8 Can_MailboxTypeOfMailboxType;

/**   \brief  value based type definition for Can_MaxDataLenOfMailbox */
typedef uint8 Can_MaxDataLenOfMailboxType;

/**   \brief  value based type definition for Can_MsgControllerOfMailbox */
typedef uint8 Can_MsgControllerOfMailboxType;

/**   \brief  value based type definition for Can_MaxRxDataLen */
typedef uint16 Can_MaxRxDataLenType;

/**   \brief  value based type definition for Can_MaxTxDataLen */
typedef uint16 Can_MaxTxDataLenType;

/**   \brief  value based type definition for Can_NonFdObjectsPendingFlag */
typedef uint32 Can_NonFdObjectsPendingFlagType;

/**   \brief  value based type definition for Can_PhysToLogChannel */
typedef uint8 Can_PhysToLogChannelType;

/**   \brief  value based type definition for Can_PlatformDll_GeneratorVersion */
typedef uint16 Can_PlatformDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_FLSSAOfSIDFC */
typedef uint16 Can_FLSSAOfSIDFCType;

/**   \brief  value based type definition for Can_LSSOfSIDFC */
typedef uint8 Can_LSSOfSIDFCType;

/**   \brief  value based type definition for Can_SIDFEEndIdxOfSIDFC */
typedef uint16 Can_SIDFEEndIdxOfSIDFCType;

/**   \brief  value based type definition for Can_SIDFEStartIdxOfSIDFC */
typedef uint16 Can_SIDFEStartIdxOfSIDFCType;

/**   \brief  value based type definition for Can_SIDFEUsedOfSIDFC */
typedef boolean Can_SIDFEUsedOfSIDFCType;

/**   \brief  value based type definition for Can_SIDFE */
typedef uint32 Can_SIDFEType;

/**   \brief  value based type definition for Can_RXBAOfShmAdr */
typedef uint32 Can_RXBAOfShmAdrType;

/**   \brief  value based type definition for Can_RXF0AOfShmAdr */
typedef uint32 Can_RXF0AOfShmAdrType;

/**   \brief  value based type definition for Can_RXF1AOfShmAdr */
typedef uint32 Can_RXF1AOfShmAdrType;

/**   \brief  value based type definition for Can_SIDFAOfShmAdr */
typedef uint32 Can_SIDFAOfShmAdrType;

/**   \brief  value based type definition for Can_StartAdrOfShmAdr */
typedef uint32 Can_StartAdrOfShmAdrType;

/**   \brief  value based type definition for Can_StopAdrOfShmAdr */
typedef uint32 Can_StopAdrOfShmAdrType;

/**   \brief  value based type definition for Can_TXBAOfShmAdr */
typedef uint32 Can_TXBAOfShmAdrType;

/**   \brief  value based type definition for Can_TXEFAOfShmAdr */
typedef uint32 Can_TXEFAOfShmAdrType;

/**   \brief  value based type definition for Can_XIDFAOfShmAdr */
typedef uint32 Can_XIDFAOfShmAdrType;

/**   \brief  value based type definition for Can_F0DSOfShmElementSize */
typedef uint8 Can_F0DSOfShmElementSizeType;

/**   \brief  value based type definition for Can_F1DSOfShmElementSize */
typedef uint8 Can_F1DSOfShmElementSizeType;

/**   \brief  value based type definition for Can_RBDSOfShmElementSize */
typedef uint8 Can_RBDSOfShmElementSizeType;

/**   \brief  value based type definition for Can_TBDSOfShmElementSize */
typedef uint8 Can_TBDSOfShmElementSizeType;

/**   \brief  value based type definition for Can_TEFBDSOfShmElementSize */
typedef uint8 Can_TEFBDSOfShmElementSizeType;

/**   \brief  value based type definition for Can_SizeOfActiveSendPdu */
typedef uint16 Can_SizeOfActiveSendPduType;

/**   \brief  value based type definition for Can_SizeOfActiveSendState */
typedef uint16 Can_SizeOfActiveSendStateType;

/**   \brief  value based type definition for Can_SizeOfBTP */
typedef uint16 Can_SizeOfBTPType;

/**   \brief  value based type definition for Can_SizeOfBasisAdr */
typedef uint16 Can_SizeOfBasisAdrType;

/**   \brief  value based type definition for Can_SizeOfBufferConfig */
typedef uint16 Can_SizeOfBufferConfigType;

/**   \brief  value based type definition for Can_SizeOfBusOffNotification */
typedef uint16 Can_SizeOfBusOffNotificationType;

/**   \brief  value based type definition for Can_SizeOfCanIfChannelId */
typedef uint16 Can_SizeOfCanIfChannelIdType;

/**   \brief  value based type definition for Can_SizeOfCanInterruptCounter */
typedef uint16 Can_SizeOfCanInterruptCounterType;

/**   \brief  value based type definition for Can_SizeOfCanInterruptOldStatus */
typedef uint16 Can_SizeOfCanInterruptOldStatusType;

/**   \brief  value based type definition for Can_SizeOfControllerConfig */
typedef uint16 Can_SizeOfControllerConfigType;

/**   \brief  value based type definition for Can_SizeOfFBTP */
typedef uint16 Can_SizeOfFBTPType;

/**   \brief  value based type definition for Can_SizeOfGFC */
typedef uint16 Can_SizeOfGFCType;

/**   \brief  value based type definition for Can_SizeOfInitObjectBaudrate */
typedef uint16 Can_SizeOfInitObjectBaudrateType;

/**   \brief  value based type definition for Can_SizeOfInitObjectFdBrsConfig */
typedef uint16 Can_SizeOfInitObjectFdBrsConfigType;

/**   \brief  value based type definition for Can_SizeOfInitObjectStartIndex */
typedef uint16 Can_SizeOfInitObjectStartIndexType;

/**   \brief  value based type definition for Can_SizeOfIntEnable */
typedef uint16 Can_SizeOfIntEnableType;

/**   \brief  value based type definition for Can_SizeOfIsBusOff */
typedef uint16 Can_SizeOfIsBusOffType;

/**   \brief  value based type definition for Can_SizeOfIsHardwareCanceled */
typedef uint16 Can_SizeOfIsHardwareCanceledType;

/**   \brief  value based type definition for Can_SizeOfIsTTCan */
typedef uint16 Can_SizeOfIsTTCanType;

/**   \brief  value based type definition for Can_SizeOfLastInitObject */
typedef uint16 Can_SizeOfLastInitObjectType;

/**   \brief  value based type definition for Can_SizeOfLogStatus */
typedef uint16 Can_SizeOfLogStatusType;

/**   \brief  value based type definition for Can_SizeOfLoopTimeout */
typedef uint16 Can_SizeOfLoopTimeoutType;

/**   \brief  value based type definition for Can_SizeOfMailbox */
typedef uint16 Can_SizeOfMailboxType;

/**   \brief  value based type definition for Can_SizeOfNonFdObjectsPendingFlag */
typedef uint16 Can_SizeOfNonFdObjectsPendingFlagType;

/**   \brief  value based type definition for Can_SizeOfPhysToLogChannel */
typedef uint16 Can_SizeOfPhysToLogChannelType;

/**   \brief  value based type definition for Can_SizeOfSIDFC */
typedef uint16 Can_SizeOfSIDFCType;

/**   \brief  value based type definition for Can_SizeOfSIDFE */
typedef uint16 Can_SizeOfSIDFEType;

/**   \brief  value based type definition for Can_SizeOfShmAdr */
typedef uint16 Can_SizeOfShmAdrType;

/**   \brief  value based type definition for Can_SizeOfShmElementSize */
typedef uint16 Can_SizeOfShmElementSizeType;

/**   \brief  value based type definition for Can_SizeOfStatusReq */
typedef uint16 Can_SizeOfStatusReqType;

/**   \brief  value based type definition for Can_SizeOfTDCR */
typedef uint16 Can_SizeOfTDCRType;

/**   \brief  value based type definition for Can_SizeOfTXBCR */
typedef uint16 Can_SizeOfTXBCRType;

/**   \brief  value based type definition for Can_SizeOfTXBE */
typedef uint16 Can_SizeOfTXBEType;

/**   \brief  value based type definition for Can_SizeOfTXBRP */
typedef uint16 Can_SizeOfTXBRPType;

/**   \brief  value based type definition for Can_SizeOfTxOffsetHwToLog */
typedef uint16 Can_SizeOfTxOffsetHwToLogType;

/**   \brief  value based type definition for Can_SizeOfXIDAM */
typedef uint16 Can_SizeOfXIDAMType;

/**   \brief  value based type definition for Can_SizeOfXIDFC */
typedef uint16 Can_SizeOfXIDFCType;

/**   \brief  value based type definition for Can_SizeOfXIDFE */
typedef uint16 Can_SizeOfXIDFEType;

/**   \brief  value based type definition for Can_StatusReq */
typedef uint8 Can_StatusReqType;

/**   \brief  value based type definition for Can_TDCR */
typedef uint32 Can_TDCRType;

/**   \brief  value based type definition for Can_TXBCR */
typedef uint32 Can_TXBCRType;

/**   \brief  value based type definition for Can_T0OfTXBE */
typedef uint32 Can_T0OfTXBEType;

/**   \brief  value based type definition for Can_T1OfTXBE */
typedef uint32 Can_T1OfTXBEType;

/**   \brief  value based type definition for Can_TXBRP */
typedef uint32 Can_TXBRPType;

/**   \brief  value based type definition for Can_TxOffsetHwToLog */
typedef sint16 Can_TxOffsetHwToLogType;

/**   \brief  value based type definition for Can_XIDAM */
typedef uint32 Can_XIDAMType;

/**   \brief  value based type definition for Can_FLESAOfXIDFC */
typedef uint16 Can_FLESAOfXIDFCType;

/**   \brief  value based type definition for Can_LSEOfXIDFC */
typedef uint8 Can_LSEOfXIDFCType;

/**   \brief  value based type definition for Can_EIDFE_0OfXIDFE */
typedef uint32 Can_EIDFE_0OfXIDFEType;

/**   \brief  value based type definition for Can_EIDFE_1OfXIDFE */
typedef uint32 Can_EIDFE_1OfXIDFEType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCStructTypes  Can Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Can_BufferConfig */
typedef struct sCan_BufferConfigType
{
  Can_RXBCOfBufferConfigType RXBCOfBufferConfig;
  Can_RXF0COfBufferConfigType RXF0COfBufferConfig;
  Can_RXF1COfBufferConfigType RXF1COfBufferConfig;
  Can_TXBCOfBufferConfigType TXBCOfBufferConfig;
  Can_TXEFCOfBufferConfigType TXEFCOfBufferConfig;
} Can_BufferConfigType;

/**   \brief  type used in Can_ControllerConfig */
typedef struct sCan_ControllerConfigType
{
  Can_CanControllerDefaultBaudrateOfControllerConfigType CanControllerDefaultBaudrateOfControllerConfig;
  Can_RxBasicHandleMaxOfControllerConfigType RxBasicHandleMaxOfControllerConfig;
  Can_RxBasicHandleStartOfControllerConfigType RxBasicHandleStartOfControllerConfig;
  Can_RxBasicHandleStopOfControllerConfigType RxBasicHandleStopOfControllerConfig;
  Can_RxBasicHwStartOfControllerConfigType RxBasicHwStartOfControllerConfig;
  Can_RxBasicHwStopOfControllerConfigType RxBasicHwStopOfControllerConfig;
  Can_RxFullHandleMaxOfControllerConfigType RxFullHandleMaxOfControllerConfig;
  Can_RxFullHandleStartOfControllerConfigType RxFullHandleStartOfControllerConfig;
  Can_RxFullHandleStopOfControllerConfigType RxFullHandleStopOfControllerConfig;
  Can_RxFullHwStartOfControllerConfigType RxFullHwStartOfControllerConfig;
  Can_RxFullHwStopOfControllerConfigType RxFullHwStopOfControllerConfig;
  Can_TxBasicHandleMaxOfControllerConfigType TxBasicHandleMaxOfControllerConfig;
  Can_TxBasicHandleStartOfControllerConfigType TxBasicHandleStartOfControllerConfig;
  Can_TxBasicHandleStopOfControllerConfigType TxBasicHandleStopOfControllerConfig;
  Can_TxBasicHwStartOfControllerConfigType TxBasicHwStartOfControllerConfig;
  Can_TxBasicHwStopOfControllerConfigType TxBasicHwStopOfControllerConfig;
  Can_TxFullHandleMaxOfControllerConfigType TxFullHandleMaxOfControllerConfig;
  Can_TxFullHandleStartOfControllerConfigType TxFullHandleStartOfControllerConfig;
  Can_TxFullHandleStopOfControllerConfigType TxFullHandleStopOfControllerConfig;
  Can_TxFullHwStartOfControllerConfigType TxFullHwStartOfControllerConfig;
  Can_TxFullHwStopOfControllerConfigType TxFullHwStopOfControllerConfig;
  Can_UnusedHandleMaxOfControllerConfigType UnusedHandleMaxOfControllerConfig;
  Can_UnusedHandleStartOfControllerConfigType UnusedHandleStartOfControllerConfig;
  Can_UnusedHandleStopOfControllerConfigType UnusedHandleStopOfControllerConfig;
  Can_UnusedHwStartOfControllerConfigType UnusedHwStartOfControllerConfig;
  Can_UnusedHwStopOfControllerConfigType UnusedHwStopOfControllerConfig;
} Can_ControllerConfigType;

/**   \brief  type used in Can_Mailbox */
typedef struct sCan_MailboxType
{
  Can_IDValueOfMailboxType IDValueOfMailbox;
  Can_DLC_FIFOOfMailboxType DLC_FIFOOfMailbox;
  Can_FdPaddingOfMailboxType FdPaddingOfMailbox;
  Can_HwHandleOfMailboxType HwHandleOfMailbox;
  Can_MailboxTypeOfMailboxType MailboxTypeOfMailbox;
  Can_MaxDataLenOfMailboxType MaxDataLenOfMailbox;
  Can_MsgControllerOfMailboxType MsgControllerOfMailbox;
} Can_MailboxType;

/**   \brief  type used in Can_SIDFC */
typedef struct sCan_SIDFCType
{
  Can_FLSSAOfSIDFCType FLSSAOfSIDFC;  /**< Filter List Standard Start Address */
  Can_SIDFEEndIdxOfSIDFCType SIDFEEndIdxOfSIDFC;  /**< the end index of the 0:n relation pointing to Can_SIDFE */
  Can_SIDFEStartIdxOfSIDFCType SIDFEStartIdxOfSIDFC;  /**< the start index of the 0:n relation pointing to Can_SIDFE */
  Can_LSSOfSIDFCType LSSOfSIDFC;  /**< List size standard */
} Can_SIDFCType;

/**   \brief  type used in Can_ShmAdr */
typedef struct sCan_ShmAdrType
{
  Can_RXBAOfShmAdrType RXBAOfShmAdr;  /**< RX Buffer Address */
  Can_RXF0AOfShmAdrType RXF0AOfShmAdr;  /**< RX FIFO0 Address */
  Can_RXF1AOfShmAdrType RXF1AOfShmAdr;  /**< RX FIFO1 Address */
  Can_SIDFAOfShmAdrType SIDFAOfShmAdr;  /**< Standard Filters Address */
  Can_StartAdrOfShmAdrType StartAdrOfShmAdr;  /**< Start address of the shared memory area */
  Can_StopAdrOfShmAdrType StopAdrOfShmAdr;  /**< Stop address of the shared memory area */
  Can_TXBAOfShmAdrType TXBAOfShmAdr;  /**< TX Buffer address */
  Can_TXEFAOfShmAdrType TXEFAOfShmAdr;  /**< TX Event FIFO address */
  Can_XIDFAOfShmAdrType XIDFAOfShmAdr;  /**< Extended Filters Address */
} Can_ShmAdrType;

/**   \brief  type used in Can_ShmElementSize */
typedef struct sCan_ShmElementSizeType
{
  Can_F0DSOfShmElementSizeType F0DSOfShmElementSize;
  Can_F1DSOfShmElementSizeType F1DSOfShmElementSize;
  Can_RBDSOfShmElementSizeType RBDSOfShmElementSize;
  Can_TBDSOfShmElementSizeType TBDSOfShmElementSize;
  Can_TEFBDSOfShmElementSizeType TEFBDSOfShmElementSize;
} Can_ShmElementSizeType;

/**   \brief  type used in Can_TXBE */
typedef struct sCan_TXBEType
{
  Can_T0OfTXBEType T0OfTXBE;  /**< Tx T0 Buffer Element */
  Can_T1OfTXBEType T1OfTXBE;  /**< Tx T1 Buffer Element */
} Can_TXBEType;

/**   \brief  type used in Can_XIDFC */
typedef struct sCan_XIDFCType
{
  Can_FLESAOfXIDFCType FLESAOfXIDFC;  /**< Filter List Extended Start Address */
  Can_LSEOfXIDFCType LSEOfXIDFC;  /**< List size extended */
} Can_XIDFCType;

/**   \brief  type used in Can_XIDFE */
typedef struct sCan_XIDFEType
{
  Can_EIDFE_0OfXIDFEType EIDFE_0OfXIDFE;
  Can_EIDFE_1OfXIDFEType EIDFE_1OfXIDFE;
} Can_XIDFEType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCRootPointerTypes  Can Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/**   \brief  type used to point to Can_ActiveSendPdu */
typedef P2VAR(Can_ActiveSendPduType, TYPEDEF, CAN_VAR_NOINIT) Can_ActiveSendPduPtrType;

/**   \brief  type used to point to Can_ActiveSendState */
typedef P2VAR(Can_ActiveSendStateType, TYPEDEF, CAN_VAR_NOINIT) Can_ActiveSendStatePtrType;

/**   \brief  type used to point to Can_BTP */
typedef P2CONST(Can_BTPType, TYPEDEF, CAN_CONST) Can_BTPPtrType;

/**   \brief  type used to point to Can_BasisAdr */
typedef P2CONST(Can_BasisAdrType, TYPEDEF, CAN_CONST) Can_BasisAdrPtrType;

/**   \brief  type used to point to Can_BufferConfig */
typedef P2CONST(Can_BufferConfigType, TYPEDEF, CAN_CONST) Can_BufferConfigPtrType;

/**   \brief  type used to point to Can_BusOffNotification */
typedef P2VAR(volatile Can_BusOffNotificationType, TYPEDEF, CAN_VAR_NOINIT) Can_BusOffNotificationPtrType;

/**   \brief  type used to point to Can_CanIfChannelId */
typedef P2CONST(Can_CanIfChannelIdType, TYPEDEF, CAN_CONST) Can_CanIfChannelIdPtrType;

/**   \brief  type used to point to Can_CanInterruptCounter */
typedef P2VAR(volatile Can_CanInterruptCounterType, TYPEDEF, CAN_VAR_NOINIT) Can_CanInterruptCounterPtrType;

/**   \brief  type used to point to Can_CanInterruptOldStatus */
typedef P2VAR(tCanLLCanIntOld, TYPEDEF, CAN_VAR_NOINIT) Can_CanInterruptOldStatusPtrType;

/**   \brief  type used to point to Can_ControllerConfig */
typedef P2CONST(Can_ControllerConfigType, TYPEDEF, CAN_CONST) Can_ControllerConfigPtrType;

/**   \brief  type used to point to Can_FBTP */
typedef P2CONST(Can_FBTPType, TYPEDEF, CAN_CONST) Can_FBTPPtrType;

/**   \brief  type used to point to Can_GFC */
typedef P2CONST(Can_GFCType, TYPEDEF, CAN_CONST) Can_GFCPtrType;

/**   \brief  type used to point to Can_InitObjectBaudrate */
typedef P2CONST(Can_InitObjectBaudrateType, TYPEDEF, CAN_CONST) Can_InitObjectBaudratePtrType;

/**   \brief  type used to point to Can_InitObjectFdBrsConfig */
typedef P2CONST(Can_InitObjectFdBrsConfigType, TYPEDEF, CAN_CONST) Can_InitObjectFdBrsConfigPtrType;

/**   \brief  type used to point to Can_InitObjectStartIndex */
typedef P2CONST(Can_InitObjectStartIndexType, TYPEDEF, CAN_CONST) Can_InitObjectStartIndexPtrType;

/**   \brief  type used to point to Can_IntEnable */
typedef P2VAR(volatile Can_IntEnableType, TYPEDEF, CAN_VAR_NOINIT) Can_IntEnablePtrType;

/**   \brief  type used to point to Can_IsBusOff */
typedef P2VAR(volatile Can_IsBusOffType, TYPEDEF, CAN_VAR_NOINIT) Can_IsBusOffPtrType;

/**   \brief  type used to point to Can_IsHardwareCanceled */
typedef P2VAR(Can_IsHardwareCanceledType, TYPEDEF, CAN_VAR_NOINIT) Can_IsHardwareCanceledPtrType;

/**   \brief  type used to point to Can_IsTTCan */
typedef P2CONST(Can_IsTTCanType, TYPEDEF, CAN_CONST) Can_IsTTCanPtrType;

/**   \brief  type used to point to Can_LastInitObject */
typedef P2VAR(Can_LastInitObjectType, TYPEDEF, CAN_VAR_NOINIT) Can_LastInitObjectPtrType;

/**   \brief  type used to point to Can_LogStatus */
typedef P2VAR(volatile Can_LogStatusType, TYPEDEF, CAN_VAR_NOINIT) Can_LogStatusPtrType;

/**   \brief  type used to point to Can_LoopTimeout */
typedef P2VAR(Can_LoopTimeout_dim_type, TYPEDEF, CAN_VAR_NOINIT) Can_LoopTimeoutPtrType;

/**   \brief  type used to point to Can_Mailbox */
typedef P2CONST(Can_MailboxType, TYPEDEF, CAN_CONST) Can_MailboxPtrType;

/**   \brief  type used to point to Can_NonFdObjectsPendingFlag */
typedef P2VAR(volatile Can_NonFdObjectsPendingFlagType, TYPEDEF, CAN_VAR_NOINIT) Can_NonFdObjectsPendingFlagPtrType;

/**   \brief  type used to point to Can_PhysToLogChannel */
typedef P2CONST(Can_PhysToLogChannelType, TYPEDEF, CAN_CONST) Can_PhysToLogChannelPtrType;

/**   \brief  type used to point to Can_SIDFC */
typedef P2CONST(Can_SIDFCType, TYPEDEF, CAN_CONST) Can_SIDFCPtrType;

/**   \brief  type used to point to Can_SIDFE */
typedef P2CONST(Can_SIDFEType, TYPEDEF, CAN_CONST) Can_SIDFEPtrType;

/**   \brief  type used to point to Can_ShmAdr */
typedef P2CONST(Can_ShmAdrType, TYPEDEF, CAN_CONST) Can_ShmAdrPtrType;

/**   \brief  type used to point to Can_ShmElementSize */
typedef P2CONST(Can_ShmElementSizeType, TYPEDEF, CAN_CONST) Can_ShmElementSizePtrType;

/**   \brief  type used to point to Can_StatusReq */
typedef P2VAR(volatile Can_StatusReqType, TYPEDEF, CAN_VAR_NOINIT) Can_StatusReqPtrType;

/**   \brief  type used to point to Can_TDCR */
typedef P2CONST(Can_TDCRType, TYPEDEF, CAN_CONST) Can_TDCRPtrType;

/**   \brief  type used to point to Can_TXBCR */
typedef P2VAR(volatile Can_TXBCRType, TYPEDEF, CAN_VAR_NOINIT) Can_TXBCRPtrType;

/**   \brief  type used to point to Can_TXBE */
typedef P2VAR(Can_TXBEType, TYPEDEF, CAN_VAR_NOINIT) Can_TXBEPtrType;

/**   \brief  type used to point to Can_TXBRP */
typedef P2VAR(volatile Can_TXBRPType, TYPEDEF, CAN_VAR_NOINIT) Can_TXBRPPtrType;

/**   \brief  type used to point to Can_TxOffsetHwToLog */
typedef P2CONST(Can_TxOffsetHwToLogType, TYPEDEF, CAN_CONST) Can_TxOffsetHwToLogPtrType;

/**   \brief  type used to point to Can_XIDAM */
typedef P2CONST(Can_XIDAMType, TYPEDEF, CAN_CONST) Can_XIDAMPtrType;

/**   \brief  type used to point to Can_XIDFC */
typedef P2CONST(Can_XIDFCType, TYPEDEF, CAN_CONST) Can_XIDFCPtrType;

/**   \brief  type used to point to Can_XIDFE */
typedef P2CONST(Can_XIDFEType, TYPEDEF, CAN_CONST) Can_XIDFEPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCRootValueTypes  Can Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Can_PCConfig */
typedef struct sCan_PCConfigType
{
  Can_IdentitySelectedType IdentitySelectedOfPCConfig;
} Can_PCConfigType;

typedef Can_PCConfigType Can_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/**   \brief  type to access Can_PCConfig in a symbol based style. */
typedef struct sCan_PCConfigsType
{
  Can_PCConfigType Config_ECU1;  /**< [Config_ECU1] */
  Can_PCConfigType Config_ECU2;  /**< [Config_ECU2] */
} Can_PCConfigsType;

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Can_BTP
**********************************************************************************************************************/
/** 
  \var    Can_BTP
  \brief  Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_BTPType, CAN_CONST) Can_BTP[1];
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_BasisAdr
**********************************************************************************************************************/
/** 
  \var    Can_BasisAdr
  \brief  CAN channel base address
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_BasisAdrType, CAN_CONST) Can_BasisAdr[1];
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_BufferConfig
**********************************************************************************************************************/
/** 
  \var    Can_BufferConfig
  \brief  CAN Buffer Configuration
  \details
  Element    Description
  RXBC   
  RXF0C  
  RXF1C  
  TXBC   
  TXEFC  
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_BufferConfigType, CAN_CONST) Can_BufferConfig[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[1];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                         Description
  CanControllerDefaultBaudrate
  RxBasicHandleMax            
  RxBasicHandleStart          
  RxBasicHandleStop           
  RxBasicHwStart              
  RxBasicHwStop               
  RxFullHandleMax             
  RxFullHandleStart           
  RxFullHandleStop            
  RxFullHwStart               
  RxFullHwStop                
  TxBasicHandleMax            
  TxBasicHandleStart          
  TxBasicHandleStop           
  TxBasicHwStart              
  TxBasicHwStop               
  TxFullHandleMax             
  TxFullHandleStart           
  TxFullHandleStop            
  TxFullHwStart               
  TxFullHwStop                
  UnusedHandleMax             
  UnusedHandleStart           
  UnusedHandleStop            
  UnusedHwStart               
  UnusedHwStop                
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_FBTP
**********************************************************************************************************************/
/** 
  \var    Can_FBTP
  \brief  Fast Bit Timing and Prescaler
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_FBTPType, CAN_CONST) Can_FBTP[1];
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_GFC
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_GFCType, CAN_CONST) Can_GFC[1];
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectBaudrate
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectBaudrate
  \brief  baudrates ('InitStruct' as index)
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[1];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectFdBrsConfig
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectFdBrsConfig
  \brief  FD config ('BaudrateObject' as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectFdBrsConfigType, CAN_CONST) Can_InitObjectFdBrsConfig[1];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectStartIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectStartIndex
  \brief  Start index of 'InitStruct'  / baudratesets (controllers as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[2];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsTTCan
**********************************************************************************************************************/
/** 
  \var    Can_IsTTCan
  \brief  TTCAN channel support
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_IsTTCanType, CAN_CONST) Can_IsTTCan[1];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element          Description
  IDValue      
  DLC_FIFO     
  FdPadding    
  HwHandle     
  MailboxType  
  MaxDataLen   
  MsgController
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[46];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_PhysToLogChannel
**********************************************************************************************************************/
/** 
  \var    Can_PhysToLogChannel
  \brief  indirection table physical to logical controller
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_PhysToLogChannelType, CAN_CONST) Can_PhysToLogChannel[2];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFC
**********************************************************************************************************************/
/** 
  \var    Can_SIDFC
  \brief  Standard ID filter configuration
  \details
  Element          Description
  FLSSA            Filter List Standard Start Address
  SIDFEEndIdx      the end index of the 0:n relation pointing to Can_SIDFE
  SIDFEStartIdx    the start index of the 0:n relation pointing to Can_SIDFE
  LSS              List size standard
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_SIDFCType, CAN_CONST) Can_SIDFC[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_SIDFE
**********************************************************************************************************************/
/** 
  \var    Can_SIDFE
  \brief  Standard ID filters
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_SIDFEType, CAN_CONST) Can_SIDFE[42];
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ShmAdr
**********************************************************************************************************************/
/** 
  \var    Can_ShmAdr
  \brief  CAN Shared Message RAM configuration
  \details
  Element     Description
  RXBA        RX Buffer Address
  RXF0A       RX FIFO0 Address
  RXF1A       RX FIFO1 Address
  SIDFA       Standard Filters Address
  StartAdr    Start address of the shared memory area
  StopAdr     Stop address of the shared memory area
  TXBA        TX Buffer address
  TXEFA       TX Event FIFO address
  XIDFA       Extended Filters Address
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_ShmAdrType, CAN_CONST) Can_ShmAdr[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ShmElementSize
**********************************************************************************************************************/
/** 
  \var    Can_ShmElementSize
  \brief  data buffer size in case of CAN_FD Full
  \details
  Element    Description
  F0DS   
  F1DS   
  RBDS   
  TBDS   
  TEFBDS 
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_ShmElementSizeType, CAN_CONST) Can_ShmElementSize[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TDCR
**********************************************************************************************************************/
/** 
  \var    Can_TDCR
  \brief  Transmitter Delay Compensation
*/ 
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_TDCRType, CAN_CONST) Can_TDCR[1];
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TxOffsetHwToLog
**********************************************************************************************************************/
/** 
  \var    Can_TxOffsetHwToLog
  \brief  tx hardware to logical handle indirection table
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_TxOffsetHwToLogType, CAN_CONST) Can_TxOffsetHwToLog[1];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDAM
**********************************************************************************************************************/
#define CAN_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_XIDAMType, CAN_CONST) Can_XIDAM[1];
#define CAN_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFC
**********************************************************************************************************************/
/** 
  \var    Can_XIDFC
  \brief  Extended ID filter configuration
  \details
  Element    Description
  FLESA      Filter List Extended Start Address
  LSE        List size extended
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_XIDFCType, CAN_CONST) Can_XIDFC[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_XIDFE
**********************************************************************************************************************/
/** 
  \var    Can_XIDFE
  \brief  Extended ID filters
  \details
  Element    Description
  EIDFE_0
  EIDFE_1
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_XIDFEType, CAN_CONST) Can_XIDFE[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendPdu
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendPdu
  \brief  temporary pduId buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_ActiveSendPduType, CAN_VAR_NOINIT) Can_ActiveSendPdu[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendState
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendState
  \brief  temporary send state buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_ActiveSendStateType, CAN_VAR_NOINIT) Can_ActiveSendState[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_BusOffNotification
**********************************************************************************************************************/
/** 
  \var    Can_BusOffNotification
  \brief  CAN state for each controller: busoff occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_BusOffNotificationType, CAN_VAR_NOINIT) Can_BusOffNotification[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptCounter
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptCounter
  \brief  CAN interrupt disable counter for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_CanInterruptCounterType, CAN_VAR_NOINIT) Can_CanInterruptCounter[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptOldStatus
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptOldStatus
  \brief  last CAN interrupt status for restore interrupt for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(tCanLLCanIntOld, CAN_VAR_NOINIT) Can_CanInterruptOldStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IntEnable
**********************************************************************************************************************/
/** 
  \var    Can_IntEnable
  \brief  CAN Interrupt Enable state for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_IntEnableType, CAN_VAR_NOINIT) Can_IntEnable[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsBusOff
**********************************************************************************************************************/
/** 
  \var    Can_IsBusOff
  \brief  CAN state for each controller: busoff occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_IsBusOffType, CAN_VAR_NOINIT) Can_IsBusOff[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsHardwareCanceled
**********************************************************************************************************************/
/** 
  \var    Can_IsHardwareCanceled
  \brief  hw loop timeout occur for controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_IsHardwareCanceledType, CAN_VAR_NOINIT) Can_IsHardwareCanceled[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LastInitObject
**********************************************************************************************************************/
/** 
  \var    Can_LastInitObject
  \brief  last set baudrate for reinit
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_LastInitObjectType, CAN_VAR_NOINIT) Can_LastInitObject[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LogStatus
**********************************************************************************************************************/
/** 
  \var    Can_LogStatus
  \brief  CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_LogStatusType, CAN_VAR_NOINIT) Can_LogStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LoopTimeout
**********************************************************************************************************************/
/** 
  \var    Can_LoopTimeout
  \brief  hw loop timeout for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_LoopTimeout_dim_type, CAN_VAR_NOINIT) Can_LoopTimeout[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_NonFdObjectsPendingFlag
**********************************************************************************************************************/
/** 
  \var    Can_NonFdObjectsPendingFlag
  \brief  CAN Tx Objects pending with CAN-FD format
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_NonFdObjectsPendingFlagType, CAN_VAR_NOINIT) Can_NonFdObjectsPendingFlag[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_StatusReq
**********************************************************************************************************************/
/** 
  \var    Can_StatusReq
  \brief  CAN state request for each controller: START=0x01, STOP=0x02, WAKEUP=0x08, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_StatusReqType, CAN_VAR_NOINIT) Can_StatusReq[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TXBCR
**********************************************************************************************************************/
/** 
  \var    Can_TXBCR
  \brief  CAN Tx Buffer Cancellation Request for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_TXBCRType, CAN_VAR_NOINIT) Can_TXBCR[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TXBE
**********************************************************************************************************************/
/** 
  \var    Can_TXBE
  \brief  Tx Buffer Element
  \details
  Element    Description
  T0         Tx T0 Buffer Element
  T1         Tx T1 Buffer Element
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_TXBEType, CAN_VAR_NOINIT) Can_TXBE[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TXBRP
**********************************************************************************************************************/
/** 
  \var    Can_TXBRP
  \brief  CAN Tx Buffer request Pending for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_TXBRPType, CAN_VAR_NOINIT) Can_TXBRP[1];
#define CAN_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_PCConfig
**********************************************************************************************************************/
/** 
  \var    Can_PCConfig
  \details
  Element             Description
  IdentitySelected
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_PCConfigsType, CAN_CONST) Can_PCConfig;
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    UserConfigFile
 ----------------------------------------------------------------------------- */
/* User Config File Start */

/* User Config File End */



#endif  /* CAN_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Can_Cfg.h
**********************************************************************************************************************/
 

