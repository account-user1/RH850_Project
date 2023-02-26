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
 *            Module: CanIf
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanIf_Cfg.h
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

#if !defined(CANIF_CFG_H)
#define CANIF_CFG_H

/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 3453 EOF */ /* MD_MSR_19.7 */
/* PRQA S 0857 EOF */ /* MD_CanIf_1.1_NumberOfMacroDefinitions */
/* PRQA S 0777 EOF */ /* MD_CanIf_5.1 */

/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
/** 
  \brief  Required external files.
*/
#include "Can.h"




/**********************************************************************************************************************
  \def  Version defines
**********************************************************************************************************************/

#define CANIF_CFG5_VERSION                                 0x0403U
#define CANIF_CFG5_RELEASE_VERSION                         0x01U
#define IF_ASRIFCAN_GENTOOL_CFG5_MAJOR_VERSION             0x04U
#define IF_ASRIFCAN_GENTOOL_CFG5_MINOR_VERSION             0x03U
#define IF_ASRIFCAN_GENTOOL_CFG5_PATCH_VERSION             0x01U

#define CANIF_CFG5_GENERATOR_COMPATIBILITY_VERSION         0x0210U

/**********************************************************************************************************************
  \def  Switches
**********************************************************************************************************************/

#define CANIF_MULTIPLE_TX_BASICCANS                        STD_OFF
#define CANIF_TRANSMIT_BUFFER                              STD_ON /* Signals if Tx-buffer is enabled at all in CanIf. The value is determined from parameter "CanIfPublicTxBuffering". */
#define CANIF_TRANSMIT_BUFFER_PRIO_BY_CANID                STD_ON
#define CANIF_TRANSMIT_BUFFER_FIFO                         STD_OFF
#define CANIF_BITQUEUE                                     STD_OFF
#define CANIF_STATIC_FD_TXQUEUE                            STD_ON
#define CANIF_WAKEUP_SUPPORT                               STD_OFF
#define CANIF_WAKEUP_VALIDATION                            STD_OFF
#define CANIF_WAKEUP_VALID_ALL_RX_MSGS                     STD_OFF
#define CANIF_WAKEUP_VALID_ONLY_NM_RX_MSGS                 STD_OFF
#define CANIF_DEV_ERROR_DETECT                             STD_ON
#define CANIF_DEV_ERROR_REPORT                             STD_ON
#define CANIF_TRANSMIT_CANCELLATION                        STD_OFF
#define CANIF_CANCEL_SUPPORT_API                           STD_OFF
#define CANIF_VERSION_INFO_API                             STD_OFF
#define CANIF_DLC_CHECK                                    STD_ON
#define CANIF_SUPPORT_NMOSEK_INDICATION                    STD_OFF
#define CANIF_TRCV_HANDLING                                STD_OFF
#define CANIF_TRCV_MAPPING                                 STD_OFF
#define CANIF_PN_TRCV_HANDLING                             STD_OFF
#define CANIF_EXTENDEDID_SUPPORT                           STD_OFF
#define CANIF_ONE_CONTROLLER_OPTIMIZATION                  STD_OFF
#define CANIF_SETDYNAMICTXID_API                           STD_OFF
#define CANIF_PN_WU_TX_PDU_FILTER                          STD_OFF
#define CANIF_PUBLIC_TX_CONFIRM_POLLING_SUPPORT            STD_OFF
#define CANIF_RX_INDICATION_TYPE_I_IS_USED                 STD_OFF
#define CANIF_CHANGE_BAUDRATE_SUPPORT                      STD_OFF
#define CANIF_SET_BAUDRATE_API                             STD_OFF
#define CANIF_META_DATA_RX_SUPPORT                         STD_OFF
#define CANIF_META_DATA_TX_SUPPORT                         STD_OFF
#define CANIF_J1939_DYN_ADDR_SUPPORT                       CANIF_J1939_DYN_ADDR_DISABLED
#define CANIF_MULTIPLE_CANDRV_SUPPORT                      STD_OFF
#define CANIF_RX_SEARCH_CONSIDER_MSG_TYPE                  STD_ON
#define CANIF_ECUC_SAFE_BSW_CHECKS                         STD_OFF
#define CANIF_EXTENDED_RAM_CHECK_SUPPORT                   STD_OFF
#define CANIF_DATA_CHECKSUM_RX_SUPPORT                     STD_OFF
#define CANIF_DATA_CHECKSUM_TX_SUPPORT                     STD_OFF
#define CANIF_SET_PDU_RECEPTION_MODE_SUPPORT               STD_OFF 

#define CANIF_SUPPRESS_EXTENDED_VERSION_CHECK

#ifndef CANIF_USE_DUMMY_FUNCTIONS
#define CANIF_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CANIF_USE_DUMMY_STATEMENT
#define CANIF_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CANIF_DUMMY_STATEMENT
#define CANIF_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANIF_DUMMY_STATEMENT_CONST
#define CANIF_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANIF_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CANIF_ATOMIC_VARIABLE_ACCESS
#define CANIF_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CANIF_PROCESSOR_RH850_1373
#define CANIF_PROCESSOR_RH850_1373
#endif
#ifndef CANIF_COMP_GREENHILLS
#define CANIF_COMP_GREENHILLS
#endif
#ifndef CANIF_GEN_GENERATOR_MSR
#define CANIF_GEN_GENERATOR_MSR
#endif
#ifndef CANIF_CPUTYPE_BITORDER_LSB2MSB
#define CANIF_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#define CANIF_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_LINKTIME
#define CANIF_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CANIF_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CANIF_CONFIGURATION_VARIANT
#define CANIF_CONFIGURATION_VARIANT CANIF_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CANIF_POSTBUILD_VARIANT_SUPPORT
#define CANIF_POSTBUILD_VARIANT_SUPPORT STD_ON
#endif


#define CANIF_CPU_TYPE_SET_IN_ECUC_MODULE                  CPU_TYPE_32

/**********************************************************************************************************************
  \def  Search algorithm
**********************************************************************************************************************/
#define CANIF_SEARCH_ALGORITHM                             CANIF_LINEAR


/**********************************************************************************************************************
  Type definitions
**********************************************************************************************************************/

/**********************************************************************************************************************
  \def  Tx-buffer - queue size type
**********************************************************************************************************************/
typedef uint8 CanIf_TxBufferSizeType;


/**********************************************************************************************************************
  \file  Includes
**********************************************************************************************************************/
#include "CanIf_Types.h"

/**********************************************************************************************************************
  \def  Memory mapping keywords
**********************************************************************************************************************/
#define CANIF_XCFG                                         CANIF_CONST
#define CANIF_VAR_XCFG_NOINIT                              CANIF_VAR_NOINIT


/**********************************************************************************************************************
  \def  Invalid PDU handle
**********************************************************************************************************************/
#define CanIf_TxPduHnd_INVALID                             0xFFU
#define CanIf_RxPduHnd_INVALID                             0xFFU


/**********************************************************************************************************************
  \def  Tx-buffer - handling types
**********************************************************************************************************************/
#define CANIF_TXBUFFER_HANDLINGTYPE_PRIOBYCANID                                                             1U
#define CANIF_TXBUFFER_HANDLINGTYPE_FIFO                                                                    2U
#define CANIF_TXBUFFER_HANDLINGTYPE_NONE                                                                    3U



/**********************************************************************************************************************
  \def  CAN controller channels - symbolic handles
**********************************************************************************************************************/

#define CanIfConf_CanIfCtrlCfg_CT_FD1_CAN_b4e1ca3b                                                  0U




/**********************************************************************************************************************
  \def  Configuration variant
**********************************************************************************************************************/

#define CANIF_CONFIG_VARIANT                               CANIF_CFGVAR_PRECOMPILETIME






/**********************************************************************************************************************
  \def  Tx PDU handles
**********************************************************************************************************************/

#define CanIfTxPduHnd_EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be                                            0U
#define CanIfTxPduHnd_Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be                                    1U
#define CanIfTxPduHnd_PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be                               2U
#define CanIfTxPduHnd_SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be                                  3U
#define CanIfTxPduHnd_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be                          4U
#define CanIfTxPduHnd_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be                             5U
#define CanIfTxPduHnd_TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be                                     6U
#define CanIfTxPduHnd_Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be                                              7U


/**********************************************************************************************************************
  \def  Rx PDU handles (Rx indication function specific ones)
**********************************************************************************************************************/

/* These definitions can change at Link-time and Post-build configuration time. Use them wisely. */
/* Assigned to: NULL_PTR*/
/* Assigned to: CanNm_RxIndication*/
#define CanIfRxPduHnd_CanIfRxPduCfg_Nm_Dummy                                                        0U
#define CanIfRxPduHnd_CanIfRxPduCfg_Nm_Dummy_ECU1                                                   0U
#define CanIfRxPduHnd_CanIfRxPduCfg_Nm_Dummy_ECU2                                                   0U
/* Assigned to: CanTp_RxIndication*/
#define CanIfRxPduHnd_TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be                               0U
#define CanIfRxPduHnd_TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be_ECU1                          0U
#define CanIfRxPduHnd_TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be_ECU2                          0U
#define CanIfRxPduHnd_TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be                            1U
#define CanIfRxPduHnd_TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be_ECU1                       1U
#define CanIfRxPduHnd_TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be_ECU2                       1U
#define CanIfRxPduHnd_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be                             2U
#define CanIfRxPduHnd_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be_ECU1                        2U
#define CanIfRxPduHnd_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be_ECU2                        2U
#define CanIfRxPduHnd_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be                          3U
#define CanIfRxPduHnd_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be_ECU1                     3U
#define CanIfRxPduHnd_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be_ECU2                     3U
/* Assigned to: PduR_CanIfRxIndication*/
#define CanIfRxPduHnd_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be                                      0U
#define CanIfRxPduHnd_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                 0U
#define CanIfRxPduHnd_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                 0U
#define CanIfRxPduHnd_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be                                        1U
#define CanIfRxPduHnd_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   1U
#define CanIfRxPduHnd_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   1U
#define CanIfRxPduHnd_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be                                     2U
#define CanIfRxPduHnd_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                2U
#define CanIfRxPduHnd_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                2U
#define CanIfRxPduHnd_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be                                      3U
#define CanIfRxPduHnd_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                 3U
#define CanIfRxPduHnd_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                 3U
#define CanIfRxPduHnd_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be                                     4U
#define CanIfRxPduHnd_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                4U
#define CanIfRxPduHnd_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                4U
#define CanIfRxPduHnd_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be                                     5U
#define CanIfRxPduHnd_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                5U
#define CanIfRxPduHnd_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                5U
#define CanIfRxPduHnd_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be                                     6U
#define CanIfRxPduHnd_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                6U
#define CanIfRxPduHnd_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                6U
#define CanIfRxPduHnd_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be                                7U
#define CanIfRxPduHnd_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                           7U
#define CanIfRxPduHnd_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                           7U
#define CanIfRxPduHnd_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be                                     8U
#define CanIfRxPduHnd_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                8U
#define CanIfRxPduHnd_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                8U
#define CanIfRxPduHnd_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be                                          9U
#define CanIfRxPduHnd_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                     9U
#define CanIfRxPduHnd_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                     9U
#define CanIfRxPduHnd_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be                                        10U
#define CanIfRxPduHnd_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   10U
#define CanIfRxPduHnd_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   10U
#define CanIfRxPduHnd_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be                                       11U
#define CanIfRxPduHnd_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be_ECU1                                  11U
#define CanIfRxPduHnd_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be_ECU2                                  11U
#define CanIfRxPduHnd_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be                                 12U
#define CanIfRxPduHnd_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                            12U
#define CanIfRxPduHnd_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                            12U
#define CanIfRxPduHnd_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be                                     13U
#define CanIfRxPduHnd_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                13U
#define CanIfRxPduHnd_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                13U
#define CanIfRxPduHnd_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be                                        14U
#define CanIfRxPduHnd_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   14U
#define CanIfRxPduHnd_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   14U
#define CanIfRxPduHnd_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be                                15U
#define CanIfRxPduHnd_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be_ECU1                           15U
#define CanIfRxPduHnd_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be_ECU2                           15U
#define CanIfRxPduHnd_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be                                   16U
#define CanIfRxPduHnd_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be_ECU1                              16U
#define CanIfRxPduHnd_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be_ECU2                              16U
#define CanIfRxPduHnd_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be                                    17U
#define CanIfRxPduHnd_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                               17U
#define CanIfRxPduHnd_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                               17U
#define CanIfRxPduHnd_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be                                 18U
#define CanIfRxPduHnd_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be_ECU1                            18U
#define CanIfRxPduHnd_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be_ECU2                            18U
#define CanIfRxPduHnd_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be                                    19U
#define CanIfRxPduHnd_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be_ECU1                               19U
#define CanIfRxPduHnd_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be_ECU2                               19U
#define CanIfRxPduHnd_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be                                           20U
#define CanIfRxPduHnd_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                      20U
#define CanIfRxPduHnd_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                      20U
#define CanIfRxPduHnd_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be                                         21U
#define CanIfRxPduHnd_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                    21U
#define CanIfRxPduHnd_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                    21U
#define CanIfRxPduHnd_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be                                    22U
#define CanIfRxPduHnd_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU1                               22U
#define CanIfRxPduHnd_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU2                               22U
#define CanIfRxPduHnd_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be                                          23U
#define CanIfRxPduHnd_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                     23U
#define CanIfRxPduHnd_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                     23U
#define CanIfRxPduHnd_TransGearData_FD1_oFD1_CAN_Rx_3abd61be                                        24U
#define CanIfRxPduHnd_TransGearData_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   24U
#define CanIfRxPduHnd_TransGearData_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   24U
#define CanIfRxPduHnd_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be                                           25U
#define CanIfRxPduHnd_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                      25U
#define CanIfRxPduHnd_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                      25U
#define CanIfRxPduHnd_WheelData_FD1_oFD1_CAN_Rx_3abd61be                                            26U
#define CanIfRxPduHnd_WheelData_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                       26U
#define CanIfRxPduHnd_WheelData_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                       26U
#define CanIfRxPduHnd_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be                                  27U
#define CanIfRxPduHnd_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU1                             27U
#define CanIfRxPduHnd_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be_ECU2                             27U
#define CanIfRxPduHnd_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be                                       28U
#define CanIfRxPduHnd_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                  28U
#define CanIfRxPduHnd_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                  28U
#define CanIfRxPduHnd_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be                                 29U
#define CanIfRxPduHnd_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be_ECU1                            29U
#define CanIfRxPduHnd_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be_ECU2                            29U
#define CanIfRxPduHnd_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be                                30U
#define CanIfRxPduHnd_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be_ECU1                           30U
#define CanIfRxPduHnd_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be_ECU2                           30U
#define CanIfRxPduHnd_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be                                    31U
#define CanIfRxPduHnd_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be_ECU1                               31U
#define CanIfRxPduHnd_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be_ECU2                               31U
#define CanIfRxPduHnd_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be                                32U
#define CanIfRxPduHnd_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be_ECU1                           32U
#define CanIfRxPduHnd_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be_ECU2                           32U
#define CanIfRxPduHnd_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be                                         33U
#define CanIfRxPduHnd_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                    33U
#define CanIfRxPduHnd_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                    33U
#define CanIfRxPduHnd_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be                                             34U
#define CanIfRxPduHnd_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                        34U
#define CanIfRxPduHnd_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                        34U
#define CanIfRxPduHnd_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be                                35U
#define CanIfRxPduHnd_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU1                           35U
#define CanIfRxPduHnd_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be_ECU2                           35U
#define CanIfRxPduHnd_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be                                        36U
#define CanIfRxPduHnd_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   36U
#define CanIfRxPduHnd_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   36U
#define CanIfRxPduHnd_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be                                        37U
#define CanIfRxPduHnd_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   37U
#define CanIfRxPduHnd_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   37U
#define CanIfRxPduHnd_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be                                        38U
#define CanIfRxPduHnd_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   38U
#define CanIfRxPduHnd_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   38U
#define CanIfRxPduHnd_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be                                        39U
#define CanIfRxPduHnd_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be_ECU1                                   39U
#define CanIfRxPduHnd_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be_ECU2                                   39U
/* Assigned to: Xcp_CanIfRxIndication*/
#define CanIfRxPduHnd_Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be                                              0U
#define CanIfRxPduHnd_Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be_ECU1                                         0U
#define CanIfRxPduHnd_Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be_ECU2                                         0U



/**********************************************************************************************************************
  \def  AUTOSAR Tx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfTxPduCfg_EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be                                  0U
#define CanIfConf_CanIfTxPduCfg_Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be                          1U
#define CanIfConf_CanIfTxPduCfg_PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be                     2U
#define CanIfConf_CanIfTxPduCfg_SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be                        3U
#define CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be                4U
#define CanIfConf_CanIfTxPduCfg_TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be                   5U
#define CanIfConf_CanIfTxPduCfg_TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be                           6U
#define CanIfConf_CanIfTxPduCfg_Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be                                    7U


/**********************************************************************************************************************
  \def  AUTOSAR Rx PDU handles
**********************************************************************************************************************/

#define CanIfConf_CanIfRxPduCfg_ABS_BrkBst_Data_FD1_oFD1_CAN_Rx_3abd61be                            0U
#define CanIfConf_CanIfRxPduCfg_APIM_Send_Signals1_FD1_oFD1_CAN_Rx_3abd61be                         1U
#define CanIfConf_CanIfRxPduCfg_APIM_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be                        2U
#define CanIfConf_CanIfRxPduCfg_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_Rx_3abd61be                      3U
#define CanIfConf_CanIfRxPduCfg_BodyInfo_3_FD1_oFD1_CAN_Rx_3abd61be                                 4U
#define CanIfConf_CanIfRxPduCfg_Body_Info_4_FD1_oFD1_CAN_Rx_3abd61be                                5U
#define CanIfConf_CanIfRxPduCfg_BrakeSnData_3_FD1_oFD1_CAN_Rx_3abd61be                              6U
#define CanIfConf_CanIfRxPduCfg_BrakeSnData_4_FD1_oFD1_CAN_Rx_3abd61be                              7U
#define CanIfConf_CanIfRxPduCfg_BrakeSnData_5_FD1_oFD1_CAN_Rx_3abd61be                              8U
#define CanIfConf_CanIfRxPduCfg_BrakeSnData_6_FD1_oFD1_CAN_Rx_3abd61be                              9U
#define CanIfConf_CanIfRxPduCfg_BrakeSysFeatures_3_oFD1_CAN_Rx_3abd61be                             10U
#define CanIfConf_CanIfRxPduCfg_BrakeSysFeatures_FD1_oFD1_CAN_Rx_3abd61be                           11U
#define CanIfConf_CanIfRxPduCfg_CanIfRxPduCfg_Nm_Dummy                                              12U
#define CanIfConf_CanIfRxPduCfg_Climate_Control_Data_FD1_oFD1_CAN_Rx_3abd61be                       13U
#define CanIfConf_CanIfRxPduCfg_Cluster_Info1_FD1_oFD1_CAN_Rx_3abd61be                              14U
#define CanIfConf_CanIfRxPduCfg_DesiredTorqBrk_FD1_oFD1_CAN_Rx_3abd61be                             15U
#define CanIfConf_CanIfRxPduCfg_EngBrakeData_FD1_oFD1_CAN_Rx_3abd61be                               16U
#define CanIfConf_CanIfRxPduCfg_EngVehicleSpThrottle2_FD1_oFD1_CAN_Rx_3abd61be                      17U
#define CanIfConf_CanIfRxPduCfg_EngVehicleSpThrottle_FD1_oFD1_CAN_Rx_3abd61be                       18U
#define CanIfConf_CanIfRxPduCfg_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_Rx_3abd61be                      19U
#define CanIfConf_CanIfRxPduCfg_Image_Processing_Data_FD1_oFD1_CAN_Rx_3abd61be                      20U
#define CanIfConf_CanIfRxPduCfg_Lane_Assist_Data1_FD1_oFD1_CAN_Rx_3abd61be                          21U
#define CanIfConf_CanIfRxPduCfg_LateralMotionControl_FD1_oFD1_CAN_Rx_3abd61be                       22U
#define CanIfConf_CanIfRxPduCfg_Mc_Send_Signals_2_FD1_oFD1_CAN_Rx_3abd61be                          23U
#define CanIfConf_CanIfRxPduCfg_ParkAid_Data_FD1_oFD1_CAN_Rx_3abd61be                               24U
#define CanIfConf_CanIfRxPduCfg_PowertrainData_10_FD1_oFD1_CAN_Rx_3abd61be                          25U
#define CanIfConf_CanIfRxPduCfg_Steer_Assist_Data_FD1_oFD1_CAN_Rx_3abd61be                          26U
#define CanIfConf_CanIfRxPduCfg_Steering_Data_FD1_oFD1_CAN_Rx_3abd61be                              27U
#define CanIfConf_CanIfRxPduCfg_TesterFunctionalReq_FD1_Tp_oFD1_CAN_20_Rx_3abd61be                  28U
#define CanIfConf_CanIfRxPduCfg_TesterFunctionalReq_FD1_Tp_oFD1_CAN_Rx_3abd61be                     29U
#define CanIfConf_CanIfRxPduCfg_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_20_Rx_3abd61be                30U
#define CanIfConf_CanIfRxPduCfg_TesterPhysicalReqPSCM_FD1_Tp_oFD1_CAN_Rx_3abd61be                   31U
#define CanIfConf_CanIfRxPduCfg_TrailerAid_Data3_FD1_oFD1_CAN_Rx_3abd61be                           32U
#define CanIfConf_CanIfRxPduCfg_TrailerAid_Data_FD1_oFD1_CAN_Rx_3abd61be                            33U
#define CanIfConf_CanIfRxPduCfg_TrailerAid_Stat1_FD1_oFD1_CAN_Rx_3abd61be                           34U
#define CanIfConf_CanIfRxPduCfg_TrailerAid_Stat2_FD1_oFD1_CAN_Rx_3abd61be                           35U
#define CanIfConf_CanIfRxPduCfg_TrailerAid_Stat3_FD1_oFD1_CAN_Rx_3abd61be                           36U
#define CanIfConf_CanIfRxPduCfg_TrailerBrakeInfo_FD1_oFD1_CAN_Rx_3abd61be                           37U
#define CanIfConf_CanIfRxPduCfg_TrailerInfo_2_FD1_oFD1_CAN_Rx_3abd61be                              38U
#define CanIfConf_CanIfRxPduCfg_TrailerInfo_FD1_oFD1_CAN_Rx_3abd61be                                39U
#define CanIfConf_CanIfRxPduCfg_TransGearData_FD1_oFD1_CAN_Rx_3abd61be                              40U
#define CanIfConf_CanIfRxPduCfg_VehicleOperatingModes_FD1_oFD1_CAN_Rx_3abd61be                      41U
#define CanIfConf_CanIfRxPduCfg_WheelData_FD1_oFD1_CAN_Rx_3abd61be                                  42U
#define CanIfConf_CanIfRxPduCfg_WheelSpeed_FD1_oFD1_CAN_Rx_3abd61be                                 43U
#define CanIfConf_CanIfRxPduCfg_Xcp_CRO_Msg_oFD1_CAN_Rx_3abd61be                                    44U
#define CanIfConf_CanIfRxPduCfg_Yaw_Data_FD1_oFD1_CAN_Rx_3abd61be                                   45U



/**********************************************************************************************************************
  \def  Tx buffer type
**********************************************************************************************************************/

#define CanIfTxBufferType                    BYTE_QUEUE







/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define CANIF_CFG_MAXRXDLC_PLUS_MAXMETADATA     0U



/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCDataSwitches  CanIf Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_BUSOFFNOTIFICATIONFCTPTR                                STD_ON
#define CANIF_CANCHANNELIDUPTOLOWMAP                                  STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU1' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU2' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLIDXOFCANCHANNELIDUPTOLOWMAP                 STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU1.CanDrvFctTblIdx' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU2.CanDrvFctTblIdx' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBLUSEDOFCANCHANNELIDUPTOLOWMAP                STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU1.CanDrvFctTblUsed' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU2.CanDrvFctTblUsed' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHANNELINDEXOFCANCHANNELIDUPTOLOWMAP                    STD_OFF  /**< Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU1.ChannelIndex' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanChannelIdUpToLowMapECU2.ChannelIndex' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANDRVFCTTBL                                            STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANCELTXFCTOFCANDRVFCTTBL                               STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.CancelTxFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.CancelTxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHANGEBAUDRATEFCTOFCANDRVFCTTBL                         STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.ChangeBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.ChangeBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKBAUDRATEFCTOFCANDRVFCTTBL                          STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.CheckBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.CheckBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANDRVFCTTBL                            STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.CheckWakeupFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.CheckWakeupFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLECONTROLLERFCTOFCANDRVFCTTBL               STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.RamCheckEnableControllerFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.RamCheckEnableControllerFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKENABLEMAILBOXFCTOFCANDRVFCTTBL                  STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.RamCheckEnableMailboxFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.RamCheckEnableMailboxFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_RAMCHECKEXECUTEFCTOFCANDRVFCTTBL                        STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.RamCheckExecuteFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.RamCheckExecuteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETBAUDRATEFCTOFCANDRVFCTTBL                            STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.SetBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.SetBaudrateFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_SETCONTROLLERMODEFCTOFCANDRVFCTTBL                      STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.SetControllerModeFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.SetControllerModeFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_WRITEFCTOFCANDRVFCTTBL                                  STD_OFF  /**< Deactivateable: 'CanIf_CanDrvFctTblECU1.WriteFct' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_CanDrvFctTblECU2.WriteFct' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIG                       STD_ON
#define CANIF_INVALIDHNDOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG           STD_OFF  /**< Deactivateable: 'CanIf_CanIfCtrlId2MappedTxBuffersConfig.InvalidHnd' Reason: 'the value of CanIf_InvalidHndOfCanIfCtrlId2MappedTxBuffersConfig is always 'false' due to this, the array is deactivated.' and Deactivateable: 'CanIf_CanIfCtrlId2MappedTxBuffersConfig.InvalidHnd' Reason: 'the value of CanIf_InvalidHndOfCanIfCtrlId2MappedTxBuffersConfig is always 'false' due to this, the array is deactivated.' */
#define CANIF_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_ON
#define CANIF_CANTRCVFCTTBL                                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEFLAGFCTOFCANTRCVFCTTBL                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1.CheckWakeFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2.CheckWakeFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CHECKWAKEUPFCTOFCANTRCVFCTTBL                           STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1.CheckWakeupFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2.CheckWakeupFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CLEARTRCVWUFFLAGFCTOFCANTRCVFCTTBL                      STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1.ClearTrcvWufFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2.ClearTrcvWufFlagFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETBUSWUREASONFCTOFCANTRCVFCTTBL                        STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1.GetBusWuReasonFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2.GetBusWuReasonFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_GETOPMODEFCTOFCANTRCVFCTTBL                             STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1.GetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2.GetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETOPMODEFCTOFCANTRCVFCTTBL                             STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1.SetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2.SetOpModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_SETWAKEUPMODEFCTOFCANTRCVFCTTBL                         STD_OFF  /**< Deactivateable: 'CanIf_CanTrcvFctTblECU1.SetWakeupModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' and Deactivateable: 'CanIf_CanTrcvFctTblECU2.SetWakeupModeFct' Reason: 'Transceiver handling and transceiver mapping are deactivated.' */
#define CANIF_CTRLID2J1939DYNADDROFFSET                               STD_OFF  /**< Deactivateable: 'CanIf_CtrlId2J1939DynAddrOffsetECU1' Reason: 'J1939 dynamic address support is deactivated.' and Deactivateable: 'CanIf_CtrlId2J1939DynAddrOffsetECU2' Reason: 'J1939 dynamic address support is deactivated.' */
#define CANIF_CTRLJ1939DYNADDRSUPPORT                                 STD_OFF  /**< Deactivateable: 'CanIf_CtrlJ1939DynAddrSupportECU1' Reason: 'J1939 dynamic address support is deactivated.' and Deactivateable: 'CanIf_CtrlJ1939DynAddrSupportECU2' Reason: 'J1939 dynamic address support is deactivated.' */
#define CANIF_CTRLMODEINDICATIONFCTPTR                                STD_ON
#define CANIF_CTRLSTATES                                              STD_ON
#define CANIF_CTRLMODEOFCTRLSTATES                                    STD_ON
#define CANIF_PDUMODEOFCTRLSTATES                                     STD_ON
#define CANIF_FEATUREPNWUTXPDUFILTERENABLED                           STD_OFF  /**< Deactivateable: 'CanIf_FeaturePnWuTxPduFilterEnabledECU1' Reason: 'PN wake-up Tx-PDU filter is deactivated.' and Deactivateable: 'CanIf_FeaturePnWuTxPduFilterEnabledECU2' Reason: 'PN wake-up Tx-PDU filter is deactivated.' */
#define CANIF_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'CanIf_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSION                           STD_ON
#define CANIF_GENERATORVERSION                                        STD_ON
#define CANIF_HXHOFFSET                                               STD_OFF  /**< Deactivateable: 'CanIf_HxhOffsetECU1' Reason: 'Multiple CAN driver support is deactivated.' and Deactivateable: 'CanIf_HxhOffsetECU2' Reason: 'Multiple CAN driver support is deactivated.' */
#define CANIF_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'CanIf_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIG                                           STD_ON
#define CANIF_CTRLSTATESIDXOFMAILBOXCONFIG                            STD_ON
#define CANIF_MAILBOXTYPEOFMAILBOXCONFIG                              STD_ON
#define CANIF_PDUIDFIRSTOFMAILBOXCONFIG                               STD_ON
#define CANIF_PDUIDLASTOFMAILBOXCONFIG                                STD_ON
#define CANIF_TXBUFFERCFGIDXOFMAILBOXCONFIG                           STD_ON
#define CANIF_TXBUFFERCFGUSEDOFMAILBOXCONFIG                          STD_ON
#define CANIF_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG                     STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIG                                   STD_ON
#define CANIF_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG                 STD_ON
#define CANIF_MAXVALIDRXDLC                                           STD_ON
#define CANIF_PDURXMODE                                               STD_OFF  /**< Deactivateable: 'CanIf_PduRxModeECU1' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' and Deactivateable: 'CanIf_PduRxModeECU2' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANIF_RXDHADJUST                                              STD_OFF  /**< Deactivateable: 'CanIf_RxDHAdjustECU1' Reason: 'Search algorithm "double hash" is deactivated.' and Deactivateable: 'CanIf_RxDHAdjustECU2' Reason: 'Search algorithm "double hash" is deactivated.' */
#define CANIF_RXDHRANDOMNUMBER1                                       STD_OFF  /**< Deactivateable: 'CanIf_RxDHRandomNumber1ECU1' Reason: 'Search algorithm "double hash" is deactivated.' and Deactivateable: 'CanIf_RxDHRandomNumber1ECU2' Reason: 'Search algorithm "double hash" is deactivated.' */
#define CANIF_RXDHRANDOMNUMBER2                                       STD_OFF  /**< Deactivateable: 'CanIf_RxDHRandomNumber2ECU1' Reason: 'Search algorithm "double hash" is deactivated.' and Deactivateable: 'CanIf_RxDHRandomNumber2ECU2' Reason: 'Search algorithm "double hash" is deactivated.' */
#define CANIF_RXINDICATIONFCTLIST                                     STD_ON
#define CANIF_RXINDICATIONFCTOFRXINDICATIONFCTLIST                    STD_ON
#define CANIF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST                 STD_ON
#define CANIF_RXPDUCANID                                              STD_ON
#define CANIF_RXPDUCONFIG                                             STD_ON
#define CANIF_DLCOFRXPDUCONFIG                                        STD_ON
#define CANIF_ISDATACHECKSUMRXPDUOFRXPDUCONFIG                        STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfigECU1.IsDataChecksumRxPdu' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' and Deactivateable: 'CanIf_RxPduConfigECU2.IsDataChecksumRxPdu' Reason: '"CanIfDataChecksumRxSupport" is deactivated.' */
#define CANIF_MSGTYPEOFRXPDUCONFIG                                    STD_ON
#define CANIF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                     STD_ON
#define CANIF_RXMETADATALENGTHOFRXPDUCONFIG                           STD_OFF  /**< Deactivateable: 'CanIf_RxPduConfigECU1.RxMetaDataLength' Reason: 'Rx meta data support is deactivated.' and Deactivateable: 'CanIf_RxPduConfigECU2.RxMetaDataLength' Reason: 'Rx meta data support is deactivated.' */
#define CANIF_UPPERPDUIDOFRXPDUCONFIG                                 STD_ON
#define CANIF_RXPDUMASK                                               STD_ON
#define CANIF_SIZEOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG                 STD_ON
#define CANIF_SIZEOFCTRLSTATES                                        STD_ON
#define CANIF_SIZEOFMAILBOXCONFIG                                     STD_ON
#define CANIF_SIZEOFMAPPEDTXBUFFERSCONFIG                             STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLIST                               STD_ON
#define CANIF_SIZEOFRXPDUCANID                                        STD_ON
#define CANIF_SIZEOFRXPDUCONFIG                                       STD_ON
#define CANIF_SIZEOFRXPDUMASK                                         STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBASE                           STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG                STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS          STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLIST                             STD_ON
#define CANIF_SIZEOFTXPDUCONFIG                                       STD_ON
#define CANIF_SIZEOFTXPDUQUEUEINDEX                                   STD_ON
#define CANIF_SIZEOFTXQUEUE                                           STD_ON
#define CANIF_SIZEOFTXQUEUEDATA                                       STD_ON
#define CANIF_SIZEOFTXQUEUEINDEX2DATASTARTSTOP                        STD_ON
#define CANIF_SIZEOFULTXPDUID2INTERNALTXPDUID                         STD_ON
#define CANIF_TRANSCEIVERUPTOLOWMAP                                   STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMapECU1' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' and Deactivateable: 'CanIf_TransceiverUpToLowMapECU2' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_CANTRCVFCTTBLIDXOFTRANSCEIVERUPTOLOWMAP                 STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMapECU1.CanTrcvFctTblIdx' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' and Deactivateable: 'CanIf_TransceiverUpToLowMapECU2.CanTrcvFctTblIdx' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_CHANNELINDEXOFTRANSCEIVERUPTOLOWMAP                     STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToLowMapECU1.ChannelIndex' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' and Deactivateable: 'CanIf_TransceiverUpToLowMapECU2.ChannelIndex' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_TRANSCEIVERUPTOUPPERMAP                                 STD_OFF  /**< Deactivateable: 'CanIf_TransceiverUpToUpperMapECU1' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' and Deactivateable: 'CanIf_TransceiverUpToUpperMapECU2' Reason: 'Transceiver handling and transceiver mapping are deactivated and one controller optimization is activated.' */
#define CANIF_TRCVTOCTRLMAP                                           STD_OFF  /**< Deactivateable: 'CanIf_TrcvToCtrlMapECU1' Reason: 'Transceiver handling is deactivated.' and Deactivateable: 'CanIf_TrcvToCtrlMapECU2' Reason: 'Transceiver handling is deactivated.' */
#define CANIF_TXBUFFERFIFOCONFIG                                      STD_OFF  /**< Deactivateable: 'CanIf_TxBufferFifoConfigECU1' Reason: 'Tx-buffer FIFO support is deactivated.' and Deactivateable: 'CanIf_TxBufferFifoConfigECU2' Reason: 'Tx-buffer FIFO support is deactivated.' */
#define CANIF_SIZEOFONEPAYLOADELOFTXBUFFERFIFOCONFIG                  STD_OFF  /**< Deactivateable: 'CanIf_TxBufferFifoConfigECU1.SizeOfOnePayloadEl' Reason: 'Tx-buffer FIFO support is deactivated.' and Deactivateable: 'CanIf_TxBufferFifoConfigECU2.SizeOfOnePayloadEl' Reason: 'Tx-buffer FIFO support is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBASE                                 STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBITQUEUECONFIG                       STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfigECU1' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' and Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfigECU2' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' */
#define CANIF_BITPOS2TXPDUIDOFFSETOFTXBUFFERPRIOBYCANIDBITQUEUECONFIG STD_OFF  /**< Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfigECU1.BitPos2TxPduIdOffset' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' and Deactivateable: 'CanIf_TxBufferPrioByCanIdBitQueueConfigECU2.BitPos2TxPduIdOffset' Reason: 'Tx-buffer PRIO_BY_CANID support as BIT_QUEUE is deactivated.' */
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIG                      STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBASEIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSENDIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSLENGTHOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSSTARTIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS                STD_ON
#define CANIF_TXPDUCONFIGIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS STD_ON
#define CANIF_TXCONFIRMATIONFCTLIST                                   STD_ON
#define CANIF_TXPDUCONFIG                                             STD_ON
#define CANIF_CANIDOFTXPDUCONFIG                                      STD_ON
#define CANIF_CANIDTXMASKOFTXPDUCONFIG                                STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfigECU1.CanIdTxMask' Reason: 'Tx meta data support is deactivated.' and Deactivateable: 'CanIf_TxPduConfigECU2.CanIdTxMask' Reason: 'Tx meta data support is deactivated.' */
#define CANIF_CTRLSTATESIDXOFTXPDUCONFIG                              STD_ON
#define CANIF_DLCOFTXPDUCONFIG                                        STD_ON
#define CANIF_ISDATACHECKSUMTXPDUOFTXPDUCONFIG                        STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfigECU1.IsDataChecksumTxPdu' Reason: '"CanIfDataChecksumTxSupport" is deactivated.' and Deactivateable: 'CanIf_TxPduConfigECU2.IsDataChecksumTxPdu' Reason: '"CanIfDataChecksumTxSupport" is deactivated.' */
#define CANIF_MAILBOXCONFIGIDXOFTXPDUCONFIG                           STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG                   STD_ON
#define CANIF_TXMETADATALENGTHOFTXPDUCONFIG                           STD_OFF  /**< Deactivateable: 'CanIf_TxPduConfigECU1.TxMetaDataLength' Reason: 'Tx meta data support is deactivated.' and Deactivateable: 'CanIf_TxPduConfigECU2.TxMetaDataLength' Reason: 'Tx meta data support is deactivated.' */
#define CANIF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                          STD_ON
#define CANIF_TXPDUQUEUEINDEX                                         STD_ON
#define CANIF_TXQUEUEIDXOFTXPDUQUEUEINDEX                             STD_ON
#define CANIF_TXQUEUEINDEX2DATASTARTSTOPIDXOFTXPDUQUEUEINDEX          STD_ON
#define CANIF_TXQUEUEINDEX2DATASTARTSTOPUSEDOFTXPDUQUEUEINDEX         STD_ON
#define CANIF_TXQUEUEUSEDOFTXPDUQUEUEINDEX                            STD_ON
#define CANIF_TXPDUSTATIC2DYNAMICINDIRECTION                          STD_OFF  /**< Deactivateable: 'CanIf_TxPduStatic2DynamicIndirectionECU1' Reason: 'Dynamic Tx-CanId support is deactivated.' and Deactivateable: 'CanIf_TxPduStatic2DynamicIndirectionECU2' Reason: 'Dynamic Tx-CanId support is deactivated.' */
#define CANIF_TXQUEUE                                                 STD_ON
#define CANIF_TXQUEUEDATA                                             STD_ON
#define CANIF_TXQUEUEINDEX2DATASTARTSTOP                              STD_ON
#define CANIF_TXQUEUEDATAENDIDXOFTXQUEUEINDEX2DATASTARTSTOP           STD_ON
#define CANIF_TXQUEUEDATALENGTHOFTXQUEUEINDEX2DATASTARTSTOP           STD_ON
#define CANIF_TXQUEUEDATASTARTIDXOFTXQUEUEINDEX2DATASTARTSTOP         STD_ON
#define CANIF_TXQUEUEDATAUSEDOFTXQUEUEINDEX2DATASTARTSTOP             STD_ON
#define CANIF_ULRXPDUID2INTERNALRXPDUID                               STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduIdECU1' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' and Deactivateable: 'CanIf_UlRxPduId2InternalRxPduIdECU2' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGIDXOFULRXPDUID2INTERNALRXPDUID               STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduIdECU1.RxPduConfigIdx' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' and Deactivateable: 'CanIf_UlRxPduId2InternalRxPduIdECU2.RxPduConfigIdx' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_RXPDUCONFIGUSEDOFULRXPDUID2INTERNALRXPDUID              STD_OFF  /**< Deactivateable: 'CanIf_UlRxPduId2InternalRxPduIdECU1.RxPduConfigUsed' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' and Deactivateable: 'CanIf_UlRxPduId2InternalRxPduIdECU2.RxPduConfigUsed' Reason: 'Configuration variant is Pre-compile and the feature to be able to set the reception mode of a Rx-PDU at runtime is disabled!' */
#define CANIF_ULTXPDUID2INTERNALTXPDUID                               STD_ON
#define CANIF_WAKEUPCONFIG                                            STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfigECU1' Reason: 'Wake-up support is deactivated.' and Deactivateable: 'CanIf_WakeUpConfigECU2' Reason: 'Wake-up support is deactivated.' */
#define CANIF_CONTROLLEROFWAKEUPCONFIG                                STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfigECU1.Controller' Reason: 'Wake-up support is deactivated.' and Deactivateable: 'CanIf_WakeUpConfigECU2.Controller' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPSOURCEOFWAKEUPCONFIG                              STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfigECU1.WakeUpSource' Reason: 'Wake-up support is deactivated.' and Deactivateable: 'CanIf_WakeUpConfigECU2.WakeUpSource' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPTARGETADDRESSOFWAKEUPCONFIG                       STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfigECU1.WakeUpTargetAddress' Reason: 'Wake-up support is deactivated.' and Deactivateable: 'CanIf_WakeUpConfigECU2.WakeUpTargetAddress' Reason: 'Wake-up support is deactivated.' */
#define CANIF_WAKEUPTARGETMODULEOFWAKEUPCONFIG                        STD_OFF  /**< Deactivateable: 'CanIf_WakeUpConfigECU1.WakeUpTargetModule' Reason: 'Wake-up support is deactivated.' and Deactivateable: 'CanIf_WakeUpConfigECU2.WakeUpTargetModule' Reason: 'Wake-up support is deactivated.' */
#define CANIF_PCCONFIG                                                STD_ON
#define CANIF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                      STD_ON
#define CANIF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG             STD_ON
#define CANIF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                      STD_ON
#define CANIF_CTRLSTATESOFPCCONFIG                                    STD_ON
#define CANIF_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                 STD_ON
#define CANIF_GENERATORVERSIONOFPCCONFIG                              STD_ON
#define CANIF_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanIf_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANIF_MAILBOXCONFIGOFPCCONFIG                                 STD_ON
#define CANIF_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                         STD_ON
#define CANIF_MAXVALIDRXDLCOFPCCONFIG                                 STD_ON
#define CANIF_RXINDICATIONFCTLISTOFPCCONFIG                           STD_ON
#define CANIF_RXPDUCANIDOFPCCONFIG                                    STD_ON
#define CANIF_RXPDUCONFIGOFPCCONFIG                                   STD_ON
#define CANIF_RXPDUMASKOFPCCONFIG                                     STD_ON
#define CANIF_SIZEOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG       STD_ON
#define CANIF_SIZEOFCTRLSTATESOFPCCONFIG                              STD_ON
#define CANIF_SIZEOFMAILBOXCONFIGOFPCCONFIG                           STD_ON
#define CANIF_SIZEOFMAPPEDTXBUFFERSCONFIGOFPCCONFIG                   STD_ON
#define CANIF_SIZEOFRXINDICATIONFCTLISTOFPCCONFIG                     STD_ON
#define CANIF_SIZEOFRXPDUCANIDOFPCCONFIG                              STD_ON
#define CANIF_SIZEOFRXPDUCONFIGOFPCCONFIG                             STD_ON
#define CANIF_SIZEOFRXPDUMASKOFPCCONFIG                               STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBASEOFPCCONFIG                 STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIGOFPCCONFIG      STD_ON
#define CANIF_SIZEOFTXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSOFPCCONFIG STD_ON
#define CANIF_SIZEOFTXCONFIRMATIONFCTLISTOFPCCONFIG                   STD_ON
#define CANIF_SIZEOFTXPDUCONFIGOFPCCONFIG                             STD_ON
#define CANIF_SIZEOFTXPDUQUEUEINDEXOFPCCONFIG                         STD_ON
#define CANIF_SIZEOFTXQUEUEDATAOFPCCONFIG                             STD_ON
#define CANIF_SIZEOFTXQUEUEINDEX2DATASTARTSTOPOFPCCONFIG              STD_ON
#define CANIF_SIZEOFTXQUEUEOFPCCONFIG                                 STD_ON
#define CANIF_SIZEOFULTXPDUID2INTERNALTXPDUIDOFPCCONFIG               STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBASEOFPCCONFIG                       STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIGOFPCCONFIG            STD_ON
#define CANIF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSOFPCCONFIG      STD_ON
#define CANIF_TXCONFIRMATIONFCTLISTOFPCCONFIG                         STD_ON
#define CANIF_TXPDUCONFIGOFPCCONFIG                                   STD_ON
#define CANIF_TXPDUQUEUEINDEXOFPCCONFIG                               STD_ON
#define CANIF_TXQUEUEDATAOFPCCONFIG                                   STD_ON
#define CANIF_TXQUEUEINDEX2DATASTARTSTOPOFPCCONFIG                    STD_ON
#define CANIF_TXQUEUEOFPCCONFIG                                       STD_ON
#define CANIF_ULTXPDUID2INTERNALTXPDUIDOFPCCONFIG                     STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCMinNumericValueDefines  CanIf Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CANIF_MIN_TXQUEUEDATA                                         0U
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCMaxNumericValueDefines  CanIf Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CANIF_MAX_TXQUEUEDATA                                         255U
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCNoReferenceDefines  CanIf No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG                        255U
#define CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX                          255U
#define CANIF_NO_TXQUEUEINDEX2DATASTARTSTOPIDXOFTXPDUQUEUEINDEX       255U
#define CANIF_NO_TXQUEUEDATAENDIDXOFTXQUEUEINDEX2DATASTARTSTOP        255U
#define CANIF_NO_TXQUEUEDATASTARTIDXOFTXQUEUEINDEX2DATASTARTSTOP      255U
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIsReducedToDefineDefines  CanIf Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_OFF
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG STD_OFF
#define CANIF_ISDEF_CTRLSTATESIDXOFMAILBOXCONFIG                      STD_OFF
#define CANIF_ISDEF_MAILBOXTYPEOFMAILBOXCONFIG                        STD_OFF
#define CANIF_ISDEF_PDUIDFIRSTOFMAILBOXCONFIG                         STD_OFF
#define CANIF_ISDEF_PDUIDLASTOFMAILBOXCONFIG                          STD_OFF
#define CANIF_ISDEF_TXBUFFERCFGIDXOFMAILBOXCONFIG                     STD_OFF
#define CANIF_ISDEF_TXBUFFERCFGUSEDOFMAILBOXCONFIG                    STD_OFF
#define CANIF_ISDEF_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG               STD_OFF
#define CANIF_ISDEF_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG           STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTOFRXINDICATIONFCTLIST              STD_OFF
#define CANIF_ISDEF_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST           STD_OFF
#define CANIF_ISDEF_RXPDUCANID                                        STD_OFF
#define CANIF_ISDEF_DLCOFRXPDUCONFIG                                  STD_OFF
#define CANIF_ISDEF_MSGTYPEOFRXPDUCONFIG                              STD_OFF
#define CANIF_ISDEF_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG               STD_OFF
#define CANIF_ISDEF_UPPERPDUIDOFRXPDUCONFIG                           STD_OFF
#define CANIF_ISDEF_RXPDUMASK                                         STD_OFF
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBASEIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSENDIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSLENGTHOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSSTARTIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG STD_OFF
#define CANIF_ISDEF_TXPDUCONFIGIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLIST                             STD_OFF
#define CANIF_ISDEF_CANIDOFTXPDUCONFIG                                STD_OFF
#define CANIF_ISDEF_CTRLSTATESIDXOFTXPDUCONFIG                        STD_OFF
#define CANIF_ISDEF_DLCOFTXPDUCONFIG                                  STD_OFF
#define CANIF_ISDEF_MAILBOXCONFIGIDXOFTXPDUCONFIG                     STD_OFF
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG             STD_OFF
#define CANIF_ISDEF_UPPERLAYERTXPDUIDOFTXPDUCONFIG                    STD_OFF
#define CANIF_ISDEF_TXQUEUEIDXOFTXPDUQUEUEINDEX                       STD_OFF
#define CANIF_ISDEF_TXQUEUEINDEX2DATASTARTSTOPIDXOFTXPDUQUEUEINDEX    STD_OFF
#define CANIF_ISDEF_TXQUEUEINDEX2DATASTARTSTOPUSEDOFTXPDUQUEUEINDEX   STD_OFF
#define CANIF_ISDEF_TXQUEUEUSEDOFTXPDUQUEUEINDEX                      STD_OFF
#define CANIF_ISDEF_TXQUEUEDATAENDIDXOFTXQUEUEINDEX2DATASTARTSTOP     STD_OFF
#define CANIF_ISDEF_TXQUEUEDATALENGTHOFTXQUEUEINDEX2DATASTARTSTOP     STD_OFF
#define CANIF_ISDEF_TXQUEUEDATASTARTIDXOFTXQUEUEINDEX2DATASTARTSTOP   STD_OFF
#define CANIF_ISDEF_TXQUEUEDATAUSEDOFTXQUEUEINDEX2DATASTARTSTOP       STD_OFF
#define CANIF_ISDEF_ULTXPDUID2INTERNALTXPDUID                         STD_OFF
#define CANIF_ISDEF_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                STD_ON
#define CANIF_ISDEF_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG       STD_ON
#define CANIF_ISDEF_CTRLMODEINDICATIONFCTPTROFPCCONFIG                STD_ON
#define CANIF_ISDEF_CTRLSTATESOFPCCONFIG                              STD_ON
#define CANIF_ISDEF_MAILBOXCONFIGOFPCCONFIG                           STD_ON
#define CANIF_ISDEF_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                   STD_ON
#define CANIF_ISDEF_RXINDICATIONFCTLISTOFPCCONFIG                     STD_ON
#define CANIF_ISDEF_RXPDUCANIDOFPCCONFIG                              STD_OFF
#define CANIF_ISDEF_RXPDUCONFIGOFPCCONFIG                             STD_OFF
#define CANIF_ISDEF_RXPDUMASKOFPCCONFIG                               STD_ON
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBASEOFPCCONFIG                 STD_ON
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIGOFPCCONFIG      STD_ON
#define CANIF_ISDEF_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSOFPCCONFIG STD_ON
#define CANIF_ISDEF_TXCONFIRMATIONFCTLISTOFPCCONFIG                   STD_ON
#define CANIF_ISDEF_TXPDUCONFIGOFPCCONFIG                             STD_OFF
#define CANIF_ISDEF_TXPDUQUEUEINDEXOFPCCONFIG                         STD_ON
#define CANIF_ISDEF_TXQUEUEDATAOFPCCONFIG                             STD_ON
#define CANIF_ISDEF_TXQUEUEINDEX2DATASTARTSTOPOFPCCONFIG              STD_OFF
#define CANIF_ISDEF_TXQUEUEOFPCCONFIG                                 STD_ON
#define CANIF_ISDEF_ULTXPDUID2INTERNALTXPDUIDOFPCCONFIG               STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCEqualsAlwaysToDefines  CanIf Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGENDIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG 
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGSTARTIDXOFCANIFCTRLID2MAPPEDTXBUFFERSCONFIG 
#define CANIF_EQ2_CTRLSTATESIDXOFMAILBOXCONFIG                        
#define CANIF_EQ2_MAILBOXTYPEOFMAILBOXCONFIG                          
#define CANIF_EQ2_PDUIDFIRSTOFMAILBOXCONFIG                           
#define CANIF_EQ2_PDUIDLASTOFMAILBOXCONFIG                            
#define CANIF_EQ2_TXBUFFERCFGIDXOFMAILBOXCONFIG                       
#define CANIF_EQ2_TXBUFFERCFGUSEDOFMAILBOXCONFIG                      
#define CANIF_EQ2_TXBUFFERHANDLINGTYPEOFMAILBOXCONFIG                 
#define CANIF_EQ2_MAILBOXCONFIGIDXOFMAPPEDTXBUFFERSCONFIG             
#define CANIF_EQ2_RXINDICATIONFCTOFRXINDICATIONFCTLIST                
#define CANIF_EQ2_RXINDICATIONLAYOUTOFRXINDICATIONFCTLIST             
#define CANIF_EQ2_RXPDUCANID                                          
#define CANIF_EQ2_DLCOFRXPDUCONFIG                                    
#define CANIF_EQ2_MSGTYPEOFRXPDUCONFIG                                
#define CANIF_EQ2_RXINDICATIONFCTLISTIDXOFRXPDUCONFIG                 
#define CANIF_EQ2_UPPERPDUIDOFRXPDUCONFIG                             
#define CANIF_EQ2_RXPDUMASK                                           
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBASEIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG 
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSENDIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG 
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSLENGTHOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG 
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSSTARTIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUECONFIG 
#define CANIF_EQ2_TXPDUCONFIGIDXOFTXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUS 
#define CANIF_EQ2_TXCONFIRMATIONFCTLIST                               
#define CANIF_EQ2_CANIDOFTXPDUCONFIG                                  
#define CANIF_EQ2_CTRLSTATESIDXOFTXPDUCONFIG                          
#define CANIF_EQ2_DLCOFTXPDUCONFIG                                    
#define CANIF_EQ2_MAILBOXCONFIGIDXOFTXPDUCONFIG                       
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTIDXOFTXPDUCONFIG               
#define CANIF_EQ2_UPPERLAYERTXPDUIDOFTXPDUCONFIG                      
#define CANIF_EQ2_TXQUEUEIDXOFTXPDUQUEUEINDEX                         
#define CANIF_EQ2_TXQUEUEINDEX2DATASTARTSTOPIDXOFTXPDUQUEUEINDEX      
#define CANIF_EQ2_TXQUEUEINDEX2DATASTARTSTOPUSEDOFTXPDUQUEUEINDEX     
#define CANIF_EQ2_TXQUEUEUSEDOFTXPDUQUEUEINDEX                        
#define CANIF_EQ2_TXQUEUEDATAENDIDXOFTXQUEUEINDEX2DATASTARTSTOP       
#define CANIF_EQ2_TXQUEUEDATALENGTHOFTXQUEUEINDEX2DATASTARTSTOP       
#define CANIF_EQ2_TXQUEUEDATASTARTIDXOFTXQUEUEINDEX2DATASTARTSTOP     
#define CANIF_EQ2_TXQUEUEDATAUSEDOFTXQUEUEINDEX2DATASTARTSTOP         
#define CANIF_EQ2_ULTXPDUID2INTERNALTXPDUID                           
#define CANIF_EQ2_BUSOFFNOTIFICATIONFCTPTROFPCCONFIG                  CanIf_BusOffNotificationFctPtr
#define CANIF_EQ2_CANIFCTRLID2MAPPEDTXBUFFERSCONFIGOFPCCONFIG         CanIf_CanIfCtrlId2MappedTxBuffersConfig
#define CANIF_EQ2_CTRLMODEINDICATIONFCTPTROFPCCONFIG                  CanIf_CtrlModeIndicationFctPtr
#define CANIF_EQ2_CTRLSTATESOFPCCONFIG                                CanIf_CtrlStates.raw
#define CANIF_EQ2_MAILBOXCONFIGOFPCCONFIG                             CanIf_MailBoxConfig
#define CANIF_EQ2_MAPPEDTXBUFFERSCONFIGOFPCCONFIG                     CanIf_MappedTxBuffersConfig
#define CANIF_EQ2_RXINDICATIONFCTLISTOFPCCONFIG                       CanIf_RxIndicationFctList
#define CANIF_EQ2_RXPDUCANIDOFPCCONFIG                                
#define CANIF_EQ2_RXPDUCONFIGOFPCCONFIG                               
#define CANIF_EQ2_RXPDUMASKOFPCCONFIG                                 CanIf_RxPduMask
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBASEOFPCCONFIG                   CanIf_TxBufferPrioByCanIdBase.raw
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBYTEQUEUECONFIGOFPCCONFIG        CanIf_TxBufferPrioByCanIdByteQueueConfig
#define CANIF_EQ2_TXBUFFERPRIOBYCANIDBYTEQUEUEMAPPEDTXPDUSOFPCCONFIG  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
#define CANIF_EQ2_TXCONFIRMATIONFCTLISTOFPCCONFIG                     CanIf_TxConfirmationFctList
#define CANIF_EQ2_TXPDUCONFIGOFPCCONFIG                               
#define CANIF_EQ2_TXPDUQUEUEINDEXOFPCCONFIG                           CanIf_TxPduQueueIndex
#define CANIF_EQ2_TXQUEUEDATAOFPCCONFIG                               CanIf_TxQueueData.raw
#define CANIF_EQ2_TXQUEUEINDEX2DATASTARTSTOPOFPCCONFIG                
#define CANIF_EQ2_TXQUEUEOFPCCONFIG                                   CanIf_TxQueue.raw
#define CANIF_EQ2_ULTXPDUID2INTERNALTXPDUIDOFPCCONFIG                 
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicInitializationPointers  CanIf Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define CanIf_Config_ECU1_Ptr                                         &(CanIf_PCConfig.Config_ECU1)  /**< symbolic identifier which shall be used to initialize 'CanIf' */
#define CanIf_Config_ECU2_Ptr                                         &(CanIf_PCConfig.Config_ECU2)  /**< symbolic identifier which shall be used to initialize 'CanIf' */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCInitializationSymbols  CanIf Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define CanIf_Config_ECU1                                             CanIf_PCConfig.Config_ECU1  /**< symbolic identifier which could be used to initialize 'CanIf */
#define CanIf_Config_ECU2                                             CanIf_PCConfig.Config_ECU2  /**< symbolic identifier which could be used to initialize 'CanIf */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGeneral  CanIf General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CANIF_CHECK_INIT_POINTER                                      STD_ON  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CANIF_FINAL_MAGIC_NUMBER                                      0x3C1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of CanIf */
#define CANIF_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'CanIf' is not configured to be postbuild capable. */
#define CANIF_INIT_DATA                                               CANIF_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CANIF_INIT_DATA_HASH_CODE                                     -424642102L  /**< the precompile constant to validate the initialization structure at initialization time of CanIf with a hashcode. The seed value is '0x3C1EU' */
#define CANIF_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CANIF_USE_INIT_POINTER                                        STD_ON  /**< STD_ON if the init pointer CanIf shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfLTDataSwitches  CanIf Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_LTCONFIG                                                STD_OFF  /**< Deactivateable: 'CanIf_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPBDataSwitches  CanIf Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANIF_PBCONFIG                                                STD_OFF  /**< Deactivateable: 'CanIf_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_LTCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANIF_PCCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanIf_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
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
  \defgroup  CanIfPCGetRootDataMacros  CanIf Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define CanIf_GetRxPduCanIdOfPCConfig()                               CanIf_ConfigDataPtr->RxPduCanIdOfPCConfig
#define CanIf_GetRxPduConfigOfPCConfig()                              CanIf_ConfigDataPtr->RxPduConfigOfPCConfig
#define CanIf_GetTxPduConfigOfPCConfig()                              CanIf_ConfigDataPtr->TxPduConfigOfPCConfig
#define CanIf_GetTxQueueIndex2DataStartStopOfPCConfig()               CanIf_ConfigDataPtr->TxQueueIndex2DataStartStopOfPCConfig
#define CanIf_GetUlTxPduId2InternalTxPduIdOfPCConfig()                CanIf_ConfigDataPtr->UlTxPduId2InternalTxPduIdOfPCConfig
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetConstantDuplicatedRootDataMacros  CanIf Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtrOfPCConfig()                 CanIf_BusOffNotificationFctPtr  /**< the pointer to CanIf_BusOffNotificationFctPtr */
#define CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()        CanIf_CanIfCtrlId2MappedTxBuffersConfig  /**< the pointer to CanIf_CanIfCtrlId2MappedTxBuffersConfig */
#define CanIf_GetCtrlModeIndicationFctPtrOfPCConfig()                 CanIf_CtrlModeIndicationFctPtr  /**< the pointer to CanIf_CtrlModeIndicationFctPtr */
#define CanIf_GetCtrlStatesOfPCConfig()                               CanIf_CtrlStates.raw  /**< the pointer to CanIf_CtrlStates */
#define CanIf_GetGeneratorCompatibilityVersionOfPCConfig()            0x0210U
#define CanIf_GetGeneratorVersionOfPCConfig()                         0x00040301UL
#define CanIf_GetMailBoxConfigOfPCConfig()                            CanIf_MailBoxConfig  /**< the pointer to CanIf_MailBoxConfig */
#define CanIf_GetMappedTxBuffersConfigOfPCConfig()                    CanIf_MappedTxBuffersConfig  /**< the pointer to CanIf_MappedTxBuffersConfig */
#define CanIf_GetMaxValidRxDlcOfPCConfig()                            64U
#define CanIf_GetRxIndicationFctListOfPCConfig()                      CanIf_RxIndicationFctList  /**< the pointer to CanIf_RxIndicationFctList */
#define CanIf_GetRxPduMaskOfPCConfig()                                CanIf_RxPduMask  /**< the pointer to CanIf_RxPduMask */
#define CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()  1UL  /**< the number of accomplishable value elements in CanIf_CanIfCtrlId2MappedTxBuffersConfig */
#define CanIf_GetSizeOfCtrlStatesOfPCConfig()                         1UL  /**< the number of accomplishable value elements in CanIf_CtrlStates */
#define CanIf_GetSizeOfMailBoxConfigOfPCConfig()                      43UL  /**< the number of accomplishable value elements in CanIf_MailBoxConfig */
#define CanIf_GetSizeOfMappedTxBuffersConfigOfPCConfig()              1UL  /**< the number of accomplishable value elements in CanIf_MappedTxBuffersConfig */
#define CanIf_GetSizeOfRxIndicationFctListOfPCConfig()                5UL  /**< the number of accomplishable value elements in CanIf_RxIndicationFctList */
#define CanIf_GetSizeOfRxPduCanIdOfPCConfig()                         46UL  /**< the number of accomplishable value elements in CanIf_RxPduCanId */
#define CanIf_GetSizeOfRxPduConfigOfPCConfig()                        46UL  /**< the number of accomplishable value elements in CanIf_RxPduConfig */
#define CanIf_GetSizeOfRxPduMaskOfPCConfig()                          46UL  /**< the number of accomplishable value elements in CanIf_RxPduMask */
#define CanIf_GetSizeOfTxBufferPrioByCanIdBaseOfPCConfig()            1UL  /**< the number of accomplishable value elements in CanIf_TxBufferPrioByCanIdBase */
#define CanIf_GetSizeOfTxBufferPrioByCanIdByteQueueConfigOfPCConfig() 1UL  /**< the number of accomplishable value elements in CanIf_TxBufferPrioByCanIdByteQueueConfig */
#define CanIf_GetSizeOfTxBufferPrioByCanIdByteQueueMappedTxPdusOfPCConfig() 8UL  /**< the number of accomplishable value elements in CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
#define CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()              5UL  /**< the number of accomplishable value elements in CanIf_TxConfirmationFctList */
#define CanIf_GetSizeOfTxPduConfigOfPCConfig()                        8UL  /**< the number of accomplishable value elements in CanIf_TxPduConfig */
#define CanIf_GetSizeOfTxPduQueueIndexOfPCConfig()                    8UL  /**< the number of accomplishable value elements in CanIf_TxPduQueueIndex */
#define CanIf_GetSizeOfTxQueueDataOfPCConfig()                        120UL  /**< the number of accomplishable value elements in CanIf_TxQueueData */
#define CanIf_GetSizeOfTxQueueIndex2DataStartStopOfPCConfig()         8UL  /**< the number of accomplishable value elements in CanIf_TxQueueIndex2DataStartStop */
#define CanIf_GetSizeOfTxQueueOfPCConfig()                            8UL  /**< the number of accomplishable value elements in CanIf_TxQueue */
#define CanIf_GetSizeOfUlTxPduId2InternalTxPduIdOfPCConfig()          8UL  /**< the number of accomplishable value elements in CanIf_UlTxPduId2InternalTxPduId */
#define CanIf_GetTxBufferPrioByCanIdBaseOfPCConfig()                  CanIf_TxBufferPrioByCanIdBase.raw  /**< the pointer to CanIf_TxBufferPrioByCanIdBase */
#define CanIf_GetTxBufferPrioByCanIdByteQueueConfigOfPCConfig()       CanIf_TxBufferPrioByCanIdByteQueueConfig  /**< the pointer to CanIf_TxBufferPrioByCanIdByteQueueConfig */
#define CanIf_GetTxBufferPrioByCanIdByteQueueMappedTxPdusOfPCConfig() CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus  /**< the pointer to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
#define CanIf_GetTxConfirmationFctListOfPCConfig()                    CanIf_TxConfirmationFctList  /**< the pointer to CanIf_TxConfirmationFctList */
#define CanIf_GetTxPduQueueIndexOfPCConfig()                          CanIf_TxPduQueueIndex  /**< the pointer to CanIf_TxPduQueueIndex */
#define CanIf_GetTxQueueDataOfPCConfig()                              CanIf_TxQueueData.raw  /**< the pointer to CanIf_TxQueueData */
#define CanIf_GetTxQueueOfPCConfig()                                  CanIf_TxQueue.raw  /**< the pointer to CanIf_TxQueue */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDataMacros  CanIf Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define CanIf_GetBusOffNotificationFctPtr()                           (CanIf_GetBusOffNotificationFctPtrOfPCConfig())
#define CanIf_GetMappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig(Index) (CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()[(Index)].MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig)
#define CanIf_GetMappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig(Index) (CanIf_GetCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()[(Index)].MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig)
#define CanIf_GetCtrlModeIndicationFctPtr()                           (CanIf_GetCtrlModeIndicationFctPtrOfPCConfig())
#define CanIf_GetCtrlModeOfCtrlStates(Index)                          (CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates)
#define CanIf_GetPduModeOfCtrlStates(Index)                           (CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates)
#define CanIf_GetCtrlStatesIdxOfMailBoxConfig(Index)                  (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].CtrlStatesIdxOfMailBoxConfig)
#define CanIf_GetMailBoxTypeOfMailBoxConfig(Index)                    (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].MailBoxTypeOfMailBoxConfig)
#define CanIf_GetPduIdFirstOfMailBoxConfig(Index)                     (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdFirstOfMailBoxConfig)
#define CanIf_GetPduIdLastOfMailBoxConfig(Index)                      (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].PduIdLastOfMailBoxConfig)
#define CanIf_GetTxBufferCfgIdxOfMailBoxConfig(Index)                 (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].TxBufferCfgIdxOfMailBoxConfig)
#define CanIf_GetTxBufferHandlingTypeOfMailBoxConfig(Index)           (CanIf_GetMailBoxConfigOfPCConfig()[(Index)].TxBufferHandlingTypeOfMailBoxConfig)
#define CanIf_GetMailBoxConfigIdxOfMappedTxBuffersConfig(Index)       (CanIf_GetMappedTxBuffersConfigOfPCConfig()[(Index)].MailBoxConfigIdxOfMappedTxBuffersConfig)
#define CanIf_GetRxIndicationFctOfRxIndicationFctList(Index)          (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationFctOfRxIndicationFctList)
#define CanIf_GetRxIndicationLayoutOfRxIndicationFctList(Index)       (CanIf_GetRxIndicationFctListOfPCConfig()[(Index)].RxIndicationLayoutOfRxIndicationFctList)
#define CanIf_GetRxPduCanId(Index)                                    (CanIf_GetRxPduCanIdOfPCConfig()[(Index)])
#define CanIf_GetDlcOfRxPduConfig(Index)                              (CanIf_GetRxPduConfigOfPCConfig()[(Index)].DlcOfRxPduConfig)
#define CanIf_GetMsgTypeOfRxPduConfig(Index)                          (CanIf_GetRxPduConfigOfPCConfig()[(Index)].MsgTypeOfRxPduConfig)
#define CanIf_GetRxIndicationFctListIdxOfRxPduConfig(Index)           (CanIf_GetRxPduConfigOfPCConfig()[(Index)].RxIndicationFctListIdxOfRxPduConfig)
#define CanIf_GetUpperPduIdOfRxPduConfig(Index)                       (CanIf_GetRxPduConfigOfPCConfig()[(Index)].UpperPduIdOfRxPduConfig)
#define CanIf_GetRxPduMask(Index)                                     (CanIf_GetRxPduMaskOfPCConfig()[(Index)])
#define CanIf_GetTxBufferPrioByCanIdBase(Index)                       (CanIf_GetTxBufferPrioByCanIdBaseOfPCConfig()[(Index)])
#define CanIf_GetTxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdByteQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdByteQueueConfigOfPCConfig()[(Index)].TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdByteQueueConfig)
#define CanIf_GetTxBufferPrioByCanIdByteQueueMappedTxPdusEndIdxOfTxBufferPrioByCanIdByteQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdByteQueueConfigOfPCConfig()[(Index)].TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdxOfTxBufferPrioByCanIdByteQueueConfig)
#define CanIf_GetTxBufferPrioByCanIdByteQueueMappedTxPdusLengthOfTxBufferPrioByCanIdByteQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdByteQueueConfigOfPCConfig()[(Index)].TxBufferPrioByCanIdByteQueueMappedTxPdusLengthOfTxBufferPrioByCanIdByteQueueConfig)
#define CanIf_GetTxBufferPrioByCanIdByteQueueMappedTxPdusStartIdxOfTxBufferPrioByCanIdByteQueueConfig(Index) (CanIf_GetTxBufferPrioByCanIdByteQueueConfigOfPCConfig()[(Index)].TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdxOfTxBufferPrioByCanIdByteQueueConfig)
#define CanIf_GetTxPduConfigIdxOfTxBufferPrioByCanIdByteQueueMappedTxPdus(Index) (CanIf_GetTxBufferPrioByCanIdByteQueueMappedTxPdusOfPCConfig()[(Index)].TxPduConfigIdxOfTxBufferPrioByCanIdByteQueueMappedTxPdus)
#define CanIf_GetTxConfirmationFctList(Index)                         (CanIf_GetTxConfirmationFctListOfPCConfig()[(Index)])
#define CanIf_GetCanIdOfTxPduConfig(Index)                            (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CanIdOfTxPduConfig)
#define CanIf_GetCtrlStatesIdxOfTxPduConfig(Index)                    (CanIf_GetTxPduConfigOfPCConfig()[(Index)].CtrlStatesIdxOfTxPduConfig)
#define CanIf_GetDlcOfTxPduConfig(Index)                              (CanIf_GetTxPduConfigOfPCConfig()[(Index)].DlcOfTxPduConfig)
#define CanIf_GetMailBoxConfigIdxOfTxPduConfig(Index)                 (CanIf_GetTxPduConfigOfPCConfig()[(Index)].MailBoxConfigIdxOfTxPduConfig)
#define CanIf_GetTxConfirmationFctListIdxOfTxPduConfig(Index)         (CanIf_GetTxPduConfigOfPCConfig()[(Index)].TxConfirmationFctListIdxOfTxPduConfig)
#define CanIf_GetUpperLayerTxPduIdOfTxPduConfig(Index)                (CanIf_GetTxPduConfigOfPCConfig()[(Index)].UpperLayerTxPduIdOfTxPduConfig)
#define CanIf_GetTxQueueIdxOfTxPduQueueIndex(Index)                   (CanIf_GetTxPduQueueIndexOfPCConfig()[(Index)].TxQueueIdxOfTxPduQueueIndex)
#define CanIf_GetTxQueueIndex2DataStartStopIdxOfTxPduQueueIndex(Index) (CanIf_GetTxPduQueueIndexOfPCConfig()[(Index)].TxQueueIndex2DataStartStopIdxOfTxPduQueueIndex)
#define CanIf_GetTxQueue(Index)                                       (CanIf_GetTxQueueOfPCConfig()[(Index)])
#define CanIf_GetTxQueueData(Index)                                   (CanIf_GetTxQueueDataOfPCConfig()[(Index)])
#define CanIf_GetTxQueueDataEndIdxOfTxQueueIndex2DataStartStop(Index) (CanIf_GetTxQueueIndex2DataStartStopOfPCConfig()[(Index)].TxQueueDataEndIdxOfTxQueueIndex2DataStartStop)
#define CanIf_GetTxQueueDataLengthOfTxQueueIndex2DataStartStop(Index) (CanIf_GetTxQueueIndex2DataStartStopOfPCConfig()[(Index)].TxQueueDataLengthOfTxQueueIndex2DataStartStop)
#define CanIf_GetTxQueueDataStartIdxOfTxQueueIndex2DataStartStop(Index) (CanIf_GetTxQueueIndex2DataStartStopOfPCConfig()[(Index)].TxQueueDataStartIdxOfTxQueueIndex2DataStartStop)
#define CanIf_GetUlTxPduId2InternalTxPduId(Index)                     (CanIf_GetUlTxPduId2InternalTxPduIdOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetDeduplicatedDataMacros  CanIf Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define CanIf_GetGeneratorCompatibilityVersion()                      CanIf_GetGeneratorCompatibilityVersionOfPCConfig()
#define CanIf_GetGeneratorVersion()                                   CanIf_GetGeneratorVersionOfPCConfig()
#define CanIf_IsTxBufferCfgUsedOfMailBoxConfig(Index)                 (((boolean)(CanIf_GetTxBufferCfgIdxOfMailBoxConfig(Index) != CANIF_NO_TXBUFFERCFGIDXOFMAILBOXCONFIG)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig */
#define CanIf_GetMaxValidRxDlc()                                      CanIf_GetMaxValidRxDlcOfPCConfig()
#define CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfig()            CanIf_GetSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()
#define CanIf_GetSizeOfCtrlStates()                                   CanIf_GetSizeOfCtrlStatesOfPCConfig()
#define CanIf_GetSizeOfMailBoxConfig()                                CanIf_GetSizeOfMailBoxConfigOfPCConfig()
#define CanIf_GetSizeOfMappedTxBuffersConfig()                        CanIf_GetSizeOfMappedTxBuffersConfigOfPCConfig()
#define CanIf_GetSizeOfRxIndicationFctList()                          CanIf_GetSizeOfRxIndicationFctListOfPCConfig()
#define CanIf_GetSizeOfRxPduCanId()                                   CanIf_GetSizeOfRxPduCanIdOfPCConfig()
#define CanIf_GetSizeOfRxPduConfig()                                  CanIf_GetSizeOfRxPduConfigOfPCConfig()
#define CanIf_GetSizeOfRxPduMask()                                    CanIf_GetSizeOfRxPduMaskOfPCConfig()
#define CanIf_GetSizeOfTxBufferPrioByCanIdBase()                      CanIf_GetSizeOfTxBufferPrioByCanIdBaseOfPCConfig()
#define CanIf_GetSizeOfTxBufferPrioByCanIdByteQueueConfig()           CanIf_GetSizeOfTxBufferPrioByCanIdByteQueueConfigOfPCConfig()
#define CanIf_GetSizeOfTxBufferPrioByCanIdByteQueueMappedTxPdus()     CanIf_GetSizeOfTxBufferPrioByCanIdByteQueueMappedTxPdusOfPCConfig()
#define CanIf_GetSizeOfTxConfirmationFctList()                        CanIf_GetSizeOfTxConfirmationFctListOfPCConfig()
#define CanIf_GetSizeOfTxPduConfig()                                  CanIf_GetSizeOfTxPduConfigOfPCConfig()
#define CanIf_GetSizeOfTxPduQueueIndex()                              CanIf_GetSizeOfTxPduQueueIndexOfPCConfig()
#define CanIf_GetSizeOfTxQueue()                                      CanIf_GetSizeOfTxQueueOfPCConfig()
#define CanIf_GetSizeOfTxQueueData()                                  CanIf_GetSizeOfTxQueueDataOfPCConfig()
#define CanIf_GetSizeOfTxQueueIndex2DataStartStop()                   CanIf_GetSizeOfTxQueueIndex2DataStartStopOfPCConfig()
#define CanIf_GetSizeOfUlTxPduId2InternalTxPduId()                    CanIf_GetSizeOfUlTxPduId2InternalTxPduIdOfPCConfig()
#define CanIf_IsTxQueueIndex2DataStartStopUsedOfTxPduQueueIndex(Index) (((boolean)(CanIf_GetTxQueueIndex2DataStartStopIdxOfTxPduQueueIndex(Index) != CANIF_NO_TXQUEUEINDEX2DATASTARTSTOPIDXOFTXPDUQUEUEINDEX)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanIf_TxQueueIndex2DataStartStop */
#define CanIf_IsTxQueueUsedOfTxPduQueueIndex(Index)                   (((boolean)(CanIf_GetTxQueueIdxOfTxPduQueueIndex(Index) != CANIF_NO_TXQUEUEIDXOFTXPDUQUEUEINDEX)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to CanIf_TxQueue */
#define CanIf_IsTxQueueDataUsedOfTxQueueIndex2DataStartStop(Index)    (((boolean)(CanIf_GetTxQueueDataLengthOfTxQueueIndex2DataStartStop(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to CanIf_TxQueueData */
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSetDataMacros  CanIf Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define CanIf_SetCtrlModeOfCtrlStates(Index, Value)                   CanIf_GetCtrlStatesOfPCConfig()[(Index)].CtrlModeOfCtrlStates = (Value)
#define CanIf_SetPduModeOfCtrlStates(Index, Value)                    CanIf_GetCtrlStatesOfPCConfig()[(Index)].PduModeOfCtrlStates = (Value)
#define CanIf_SetTxBufferPrioByCanIdBase(Index, Value)                CanIf_GetTxBufferPrioByCanIdBaseOfPCConfig()[(Index)] = (Value)
#define CanIf_SetTxQueue(Index, Value)                                CanIf_GetTxQueueOfPCConfig()[(Index)] = (Value)
#define CanIf_SetTxQueueData(Index, Value)                            CanIf_GetTxQueueDataOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCGetAddressOfDataMacros  CanIf Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define CanIf_GetAddrTxQueueData(Index)                               &CanIf_GetTxQueueData(Index)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCHasMacros  CanIf Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define CanIf_HasBusOffNotificationFctPtr()                           (TRUE != FALSE)
#define CanIf_HasCanIfCtrlId2MappedTxBuffersConfig()                  (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig() (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig() (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtr()                           (TRUE != FALSE)
#define CanIf_HasCtrlStates()                                         (TRUE != FALSE)
#define CanIf_HasCtrlModeOfCtrlStates()                               (TRUE != FALSE)
#define CanIf_HasPduModeOfCtrlStates()                                (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersion()                      (TRUE != FALSE)
#define CanIf_HasGeneratorVersion()                                   (TRUE != FALSE)
#define CanIf_HasMailBoxConfig()                                      (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfMailBoxConfig()                       (TRUE != FALSE)
#define CanIf_HasMailBoxTypeOfMailBoxConfig()                         (TRUE != FALSE)
#define CanIf_HasPduIdFirstOfMailBoxConfig()                          (TRUE != FALSE)
#define CanIf_HasPduIdLastOfMailBoxConfig()                           (TRUE != FALSE)
#define CanIf_HasTxBufferCfgIdxOfMailBoxConfig()                      (TRUE != FALSE)
#define CanIf_HasTxBufferCfgUsedOfMailBoxConfig()                     (TRUE != FALSE)
#define CanIf_HasTxBufferHandlingTypeOfMailBoxConfig()                (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfig()                              (TRUE != FALSE)
#define CanIf_HasMailBoxConfigIdxOfMappedTxBuffersConfig()            (TRUE != FALSE)
#define CanIf_HasMaxValidRxDlc()                                      (TRUE != FALSE)
#define CanIf_HasRxIndicationFctList()                                (TRUE != FALSE)
#define CanIf_HasRxIndicationFctOfRxIndicationFctList()               (TRUE != FALSE)
#define CanIf_HasRxIndicationLayoutOfRxIndicationFctList()            (TRUE != FALSE)
#define CanIf_HasRxPduCanId()                                         (CanIf_GetRxPduCanIdOfPCConfig() != NULL_PTR)
#define CanIf_HasRxPduConfig()                                        (CanIf_GetRxPduConfigOfPCConfig() != NULL_PTR)
#define CanIf_HasDlcOfRxPduConfig()                                   (TRUE != FALSE)
#define CanIf_HasMsgTypeOfRxPduConfig()                               (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListIdxOfRxPduConfig()                (TRUE != FALSE)
#define CanIf_HasUpperPduIdOfRxPduConfig()                            (TRUE != FALSE)
#define CanIf_HasRxPduMask()                                          (TRUE != FALSE)
#define CanIf_HasSizeOfCanIfCtrlId2MappedTxBuffersConfig()            (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStates()                                   (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfig()                                (TRUE != FALSE)
#define CanIf_HasSizeOfMappedTxBuffersConfig()                        (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctList()                          (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduCanId()                                   (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfig()                                  (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduMask()                                    (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdBase()                      (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdByteQueueConfig()           (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdByteQueueMappedTxPdus()     (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctList()                        (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfig()                                  (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduQueueIndex()                              (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueue()                                      (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueData()                                  (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueIndex2DataStartStop()                   (TRUE != FALSE)
#define CanIf_HasSizeOfUlTxPduId2InternalTxPduId()                    (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBase()                            (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdByteQueueConfig()                 (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdByteQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdByteQueueMappedTxPdusEndIdxOfTxBufferPrioByCanIdByteQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdByteQueueMappedTxPdusLengthOfTxBufferPrioByCanIdByteQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdByteQueueMappedTxPdusStartIdxOfTxBufferPrioByCanIdByteQueueConfig() (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdByteQueueMappedTxPdus()           (TRUE != FALSE)
#define CanIf_HasTxPduConfigIdxOfTxBufferPrioByCanIdByteQueueMappedTxPdus() (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctList()                              (TRUE != FALSE)
#define CanIf_HasTxPduConfig()                                        (CanIf_GetTxPduConfigOfPCConfig() != NULL_PTR)
#define CanIf_HasCanIdOfTxPduConfig()                                 (TRUE != FALSE)
#define CanIf_HasCtrlStatesIdxOfTxPduConfig()                         (TRUE != FALSE)
#define CanIf_HasDlcOfTxPduConfig()                                   (TRUE != FALSE)
#define CanIf_HasMailBoxConfigIdxOfTxPduConfig()                      (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListIdxOfTxPduConfig()              (TRUE != FALSE)
#define CanIf_HasUpperLayerTxPduIdOfTxPduConfig()                     (TRUE != FALSE)
#define CanIf_HasTxPduQueueIndex()                                    (TRUE != FALSE)
#define CanIf_HasTxQueueIdxOfTxPduQueueIndex()                        (TRUE != FALSE)
#define CanIf_HasTxQueueIndex2DataStartStopIdxOfTxPduQueueIndex()     (TRUE != FALSE)
#define CanIf_HasTxQueueIndex2DataStartStopUsedOfTxPduQueueIndex()    (TRUE != FALSE)
#define CanIf_HasTxQueueUsedOfTxPduQueueIndex()                       (TRUE != FALSE)
#define CanIf_HasTxQueue()                                            (TRUE != FALSE)
#define CanIf_HasTxQueueData()                                        (TRUE != FALSE)
#define CanIf_HasTxQueueIndex2DataStartStop()                         (CanIf_GetTxQueueIndex2DataStartStopOfPCConfig() != NULL_PTR)
#define CanIf_HasTxQueueDataEndIdxOfTxQueueIndex2DataStartStop()      (TRUE != FALSE)
#define CanIf_HasTxQueueDataLengthOfTxQueueIndex2DataStartStop()      (TRUE != FALSE)
#define CanIf_HasTxQueueDataStartIdxOfTxQueueIndex2DataStartStop()    (TRUE != FALSE)
#define CanIf_HasTxQueueDataUsedOfTxQueueIndex2DataStartStop()        (TRUE != FALSE)
#define CanIf_HasUlTxPduId2InternalTxPduId()                          (CanIf_GetUlTxPduId2InternalTxPduIdOfPCConfig() != NULL_PTR)
#define CanIf_HasPCConfig()                                           (TRUE != FALSE)
#define CanIf_HasBusOffNotificationFctPtrOfPCConfig()                 (TRUE != FALSE)
#define CanIf_HasCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()        (TRUE != FALSE)
#define CanIf_HasCtrlModeIndicationFctPtrOfPCConfig()                 (TRUE != FALSE)
#define CanIf_HasCtrlStatesOfPCConfig()                               (TRUE != FALSE)
#define CanIf_HasGeneratorCompatibilityVersionOfPCConfig()            (TRUE != FALSE)
#define CanIf_HasGeneratorVersionOfPCConfig()                         (TRUE != FALSE)
#define CanIf_HasMailBoxConfigOfPCConfig()                            (TRUE != FALSE)
#define CanIf_HasMappedTxBuffersConfigOfPCConfig()                    (TRUE != FALSE)
#define CanIf_HasMaxValidRxDlcOfPCConfig()                            (TRUE != FALSE)
#define CanIf_HasRxIndicationFctListOfPCConfig()                      (TRUE != FALSE)
#define CanIf_HasRxPduCanIdOfPCConfig()                               (TRUE != FALSE)
#define CanIf_HasRxPduConfigOfPCConfig()                              (TRUE != FALSE)
#define CanIf_HasRxPduMaskOfPCConfig()                                (TRUE != FALSE)
#define CanIf_HasSizeOfCanIfCtrlId2MappedTxBuffersConfigOfPCConfig()  (TRUE != FALSE)
#define CanIf_HasSizeOfCtrlStatesOfPCConfig()                         (TRUE != FALSE)
#define CanIf_HasSizeOfMailBoxConfigOfPCConfig()                      (TRUE != FALSE)
#define CanIf_HasSizeOfMappedTxBuffersConfigOfPCConfig()              (TRUE != FALSE)
#define CanIf_HasSizeOfRxIndicationFctListOfPCConfig()                (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduCanIdOfPCConfig()                         (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduConfigOfPCConfig()                        (TRUE != FALSE)
#define CanIf_HasSizeOfRxPduMaskOfPCConfig()                          (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdBaseOfPCConfig()            (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdByteQueueConfigOfPCConfig() (TRUE != FALSE)
#define CanIf_HasSizeOfTxBufferPrioByCanIdByteQueueMappedTxPdusOfPCConfig() (TRUE != FALSE)
#define CanIf_HasSizeOfTxConfirmationFctListOfPCConfig()              (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduConfigOfPCConfig()                        (TRUE != FALSE)
#define CanIf_HasSizeOfTxPduQueueIndexOfPCConfig()                    (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueDataOfPCConfig()                        (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueIndex2DataStartStopOfPCConfig()         (TRUE != FALSE)
#define CanIf_HasSizeOfTxQueueOfPCConfig()                            (TRUE != FALSE)
#define CanIf_HasSizeOfUlTxPduId2InternalTxPduIdOfPCConfig()          (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdBaseOfPCConfig()                  (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdByteQueueConfigOfPCConfig()       (TRUE != FALSE)
#define CanIf_HasTxBufferPrioByCanIdByteQueueMappedTxPdusOfPCConfig() (TRUE != FALSE)
#define CanIf_HasTxConfirmationFctListOfPCConfig()                    (TRUE != FALSE)
#define CanIf_HasTxPduConfigOfPCConfig()                              (TRUE != FALSE)
#define CanIf_HasTxPduQueueIndexOfPCConfig()                          (TRUE != FALSE)
#define CanIf_HasTxQueueDataOfPCConfig()                              (TRUE != FALSE)
#define CanIf_HasTxQueueIndex2DataStartStopOfPCConfig()               (TRUE != FALSE)
#define CanIf_HasTxQueueOfPCConfig()                                  (TRUE != FALSE)
#define CanIf_HasUlTxPduId2InternalTxPduIdOfPCConfig()                (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCIncrementDataMacros  CanIf Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define CanIf_IncCtrlModeOfCtrlStates(Index)                          CanIf_GetCtrlModeOfCtrlStates(Index)++
#define CanIf_IncPduModeOfCtrlStates(Index)                           CanIf_GetPduModeOfCtrlStates(Index)++
#define CanIf_IncTxBufferPrioByCanIdBase(Index)                       CanIf_GetTxBufferPrioByCanIdBase(Index)++
#define CanIf_IncTxQueue(Index)                                       CanIf_GetTxQueue(Index)++
#define CanIf_IncTxQueueData(Index)                                   CanIf_GetTxQueueData(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCDecrementDataMacros  CanIf Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define CanIf_DecCtrlModeOfCtrlStates(Index)                          CanIf_GetCtrlModeOfCtrlStates(Index)--
#define CanIf_DecPduModeOfCtrlStates(Index)                           CanIf_GetPduModeOfCtrlStates(Index)--
#define CanIf_DecTxBufferPrioByCanIdBase(Index)                       CanIf_GetTxBufferPrioByCanIdBase(Index)--
#define CanIf_DecTxQueue(Index)                                       CanIf_GetTxQueue(Index)--
#define CanIf_DecTxQueueData(Index)                                   CanIf_GetTxQueueData(Index)--
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
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCIterableTypes  CanIf Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate CanIf_CanIfCtrlId2MappedTxBuffersConfig */
typedef uint8_least CanIf_CanIfCtrlId2MappedTxBuffersConfigIterType;

/**   \brief  type used to iterate CanIf_CtrlStates */
typedef uint8_least CanIf_CtrlStatesIterType;

/**   \brief  type used to iterate CanIf_MailBoxConfig */
typedef uint8_least CanIf_MailBoxConfigIterType;

/**   \brief  type used to iterate CanIf_MappedTxBuffersConfig */
typedef uint8_least CanIf_MappedTxBuffersConfigIterType;

/**   \brief  type used to iterate CanIf_RxIndicationFctList */
typedef uint8_least CanIf_RxIndicationFctListIterType;

/**   \brief  type used to iterate CanIf_RxPduCanId */
typedef uint8_least CanIf_RxPduCanIdIterType;

/**   \brief  type used to iterate CanIf_RxPduConfig */
typedef uint8_least CanIf_RxPduConfigIterType;

/**   \brief  type used to iterate CanIf_RxPduMask */
typedef uint8_least CanIf_RxPduMaskIterType;

/**   \brief  type used to iterate CanIf_TxBufferPrioByCanIdBase */
typedef uint8_least CanIf_TxBufferPrioByCanIdBaseIterType;

/**   \brief  type used to iterate CanIf_TxBufferPrioByCanIdByteQueueConfig */
typedef uint8_least CanIf_TxBufferPrioByCanIdByteQueueConfigIterType;

/**   \brief  type used to iterate CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
typedef uint8_least CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusIterType;

/**   \brief  type used to iterate CanIf_TxConfirmationFctList */
typedef uint8_least CanIf_TxConfirmationFctListIterType;

/**   \brief  type used to iterate CanIf_TxPduConfig */
typedef uint8_least CanIf_TxPduConfigIterType;

/**   \brief  type used to iterate CanIf_TxPduQueueIndex */
typedef uint8_least CanIf_TxPduQueueIndexIterType;

/**   \brief  type used to iterate CanIf_TxQueue */
typedef uint8_least CanIf_TxQueueIterType;

/**   \brief  type used to iterate CanIf_TxQueueData */
typedef uint8_least CanIf_TxQueueDataIterType;

/**   \brief  type used to iterate CanIf_TxQueueIndex2DataStartStop */
typedef uint8_least CanIf_TxQueueIndex2DataStartStopIterType;

/**   \brief  type used to iterate CanIf_UlTxPduId2InternalTxPduId */
typedef uint8_least CanIf_UlTxPduId2InternalTxPduIdIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCValueTypes  CanIf Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_GeneratorCompatibilityVersion */
typedef uint16 CanIf_GeneratorCompatibilityVersionType;

/**   \brief  value based type definition for CanIf_GeneratorVersion */
typedef uint32 CanIf_GeneratorVersionType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfMailBoxConfig */
typedef uint8 CanIf_CtrlStatesIdxOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdFirstOfMailBoxConfig */
typedef uint8 CanIf_PduIdFirstOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_PduIdLastOfMailBoxConfig */
typedef uint8 CanIf_PduIdLastOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferCfgIdxOfMailBoxConfig */
typedef uint8 CanIf_TxBufferCfgIdxOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferCfgUsedOfMailBoxConfig */
typedef boolean CanIf_TxBufferCfgUsedOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_TxBufferHandlingTypeOfMailBoxConfig */
typedef uint8 CanIf_TxBufferHandlingTypeOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_MailBoxConfigIdxOfMappedTxBuffersConfig */
typedef uint8 CanIf_MailBoxConfigIdxOfMappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_MaxValidRxDlc */
typedef uint8 CanIf_MaxValidRxDlcType;

/**   \brief  value based type definition for CanIf_RxPduCanId */
typedef uint16 CanIf_RxPduCanIdType;

/**   \brief  value based type definition for CanIf_DlcOfRxPduConfig */
typedef uint8 CanIf_DlcOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxIndicationFctListIdxOfRxPduConfig */
typedef uint8 CanIf_RxIndicationFctListIdxOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperPduIdOfRxPduConfig */
typedef PduIdType CanIf_UpperPduIdOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_RxPduMask */
typedef uint16 CanIf_RxPduMaskType;

/**   \brief  value based type definition for CanIf_SizeOfCanIfCtrlId2MappedTxBuffersConfig */
typedef uint8 CanIf_SizeOfCanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_SizeOfCtrlStates */
typedef uint8 CanIf_SizeOfCtrlStatesType;

/**   \brief  value based type definition for CanIf_SizeOfMailBoxConfig */
typedef uint8 CanIf_SizeOfMailBoxConfigType;

/**   \brief  value based type definition for CanIf_SizeOfMappedTxBuffersConfig */
typedef uint8 CanIf_SizeOfMappedTxBuffersConfigType;

/**   \brief  value based type definition for CanIf_SizeOfRxIndicationFctList */
typedef uint8 CanIf_SizeOfRxIndicationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfRxPduCanId */
typedef uint8 CanIf_SizeOfRxPduCanIdType;

/**   \brief  value based type definition for CanIf_SizeOfRxPduConfig */
typedef uint8 CanIf_SizeOfRxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfRxPduMask */
typedef uint8 CanIf_SizeOfRxPduMaskType;

/**   \brief  value based type definition for CanIf_SizeOfTxBufferPrioByCanIdBase */
typedef uint8 CanIf_SizeOfTxBufferPrioByCanIdBaseType;

/**   \brief  value based type definition for CanIf_SizeOfTxBufferPrioByCanIdByteQueueConfig */
typedef uint8 CanIf_SizeOfTxBufferPrioByCanIdByteQueueConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTxBufferPrioByCanIdByteQueueMappedTxPdus */
typedef uint8 CanIf_SizeOfTxBufferPrioByCanIdByteQueueMappedTxPdusType;

/**   \brief  value based type definition for CanIf_SizeOfTxConfirmationFctList */
typedef uint8 CanIf_SizeOfTxConfirmationFctListType;

/**   \brief  value based type definition for CanIf_SizeOfTxPduConfig */
typedef uint8 CanIf_SizeOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_SizeOfTxPduQueueIndex */
typedef uint8 CanIf_SizeOfTxPduQueueIndexType;

/**   \brief  value based type definition for CanIf_SizeOfTxQueue */
typedef uint8 CanIf_SizeOfTxQueueType;

/**   \brief  value based type definition for CanIf_SizeOfTxQueueData */
typedef uint8 CanIf_SizeOfTxQueueDataType;

/**   \brief  value based type definition for CanIf_SizeOfTxQueueIndex2DataStartStop */
typedef uint8 CanIf_SizeOfTxQueueIndex2DataStartStopType;

/**   \brief  value based type definition for CanIf_SizeOfUlTxPduId2InternalTxPduId */
typedef uint8 CanIf_SizeOfUlTxPduId2InternalTxPduIdType;

/**   \brief  value based type definition for CanIf_TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdByteQueueConfig */
typedef uint8 CanIf_TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdByteQueueConfigType;

/**   \brief  value based type definition for CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdxOfTxBufferPrioByCanIdByteQueueConfig */
typedef uint8 CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdxOfTxBufferPrioByCanIdByteQueueConfigType;

/**   \brief  value based type definition for CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusLengthOfTxBufferPrioByCanIdByteQueueConfig */
typedef uint8 CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusLengthOfTxBufferPrioByCanIdByteQueueConfigType;

/**   \brief  value based type definition for CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdxOfTxBufferPrioByCanIdByteQueueConfig */
typedef uint8 CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdxOfTxBufferPrioByCanIdByteQueueConfigType;

/**   \brief  value based type definition for CanIf_TxPduConfigIdxOfTxBufferPrioByCanIdByteQueueMappedTxPdus */
typedef uint8 CanIf_TxPduConfigIdxOfTxBufferPrioByCanIdByteQueueMappedTxPdusType;

/**   \brief  value based type definition for CanIf_CanIdOfTxPduConfig */
typedef uint16 CanIf_CanIdOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_CtrlStatesIdxOfTxPduConfig */
typedef uint8 CanIf_CtrlStatesIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_DlcOfTxPduConfig */
typedef uint8 CanIf_DlcOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_MailBoxConfigIdxOfTxPduConfig */
typedef uint8 CanIf_MailBoxConfigIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxConfirmationFctListIdxOfTxPduConfig */
typedef uint8 CanIf_TxConfirmationFctListIdxOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_UpperLayerTxPduIdOfTxPduConfig */
typedef PduIdType CanIf_UpperLayerTxPduIdOfTxPduConfigType;

/**   \brief  value based type definition for CanIf_TxQueueIdxOfTxPduQueueIndex */
typedef uint8 CanIf_TxQueueIdxOfTxPduQueueIndexType;

/**   \brief  value based type definition for CanIf_TxQueueIndex2DataStartStopIdxOfTxPduQueueIndex */
typedef uint8 CanIf_TxQueueIndex2DataStartStopIdxOfTxPduQueueIndexType;

/**   \brief  value based type definition for CanIf_TxQueueIndex2DataStartStopUsedOfTxPduQueueIndex */
typedef boolean CanIf_TxQueueIndex2DataStartStopUsedOfTxPduQueueIndexType;

/**   \brief  value based type definition for CanIf_TxQueueUsedOfTxPduQueueIndex */
typedef boolean CanIf_TxQueueUsedOfTxPduQueueIndexType;

/**   \brief  value based type definition for CanIf_TxQueueData */
typedef uint8 CanIf_TxQueueDataType;

/**   \brief  value based type definition for CanIf_TxQueueDataEndIdxOfTxQueueIndex2DataStartStop */
typedef uint8 CanIf_TxQueueDataEndIdxOfTxQueueIndex2DataStartStopType;

/**   \brief  value based type definition for CanIf_TxQueueDataLengthOfTxQueueIndex2DataStartStop */
typedef uint8 CanIf_TxQueueDataLengthOfTxQueueIndex2DataStartStopType;

/**   \brief  value based type definition for CanIf_TxQueueDataStartIdxOfTxQueueIndex2DataStartStop */
typedef uint8 CanIf_TxQueueDataStartIdxOfTxQueueIndex2DataStartStopType;

/**   \brief  value based type definition for CanIf_TxQueueDataUsedOfTxQueueIndex2DataStartStop */
typedef boolean CanIf_TxQueueDataUsedOfTxQueueIndex2DataStartStopType;

/**   \brief  value based type definition for CanIf_UlTxPduId2InternalTxPduId */
typedef uint8 CanIf_UlTxPduId2InternalTxPduIdType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanIfPCStructTypes  CanIf Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in CanIf_CanIfCtrlId2MappedTxBuffersConfig */
typedef struct sCanIf_CanIfCtrlId2MappedTxBuffersConfigType
{
  CanIf_MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfigType MappedTxBuffersConfigEndIdxOfCanIfCtrlId2MappedTxBuffersConfig;  /**< the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig */
  CanIf_MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfigType MappedTxBuffersConfigStartIdxOfCanIfCtrlId2MappedTxBuffersConfig;  /**< the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig */
} CanIf_CanIfCtrlId2MappedTxBuffersConfigType;

/**   \brief  type used in CanIf_CtrlStates */
typedef struct sCanIf_CtrlStatesType
{
  CanIf_ControllerModeType CtrlModeOfCtrlStates;  /**< Controller mode. */
  CanIf_PduGetModeType PduModeOfCtrlStates;  /**< PDU mode state. */
} CanIf_CtrlStatesType;

/**   \brief  type used in CanIf_MailBoxConfig */
typedef struct sCanIf_MailBoxConfigType
{
  CanIf_CtrlStatesIdxOfMailBoxConfigType CtrlStatesIdxOfMailBoxConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_PduIdFirstOfMailBoxConfigType PduIdFirstOfMailBoxConfig;  /**< "First" PDU mapped to mailbox. */
  CanIf_PduIdLastOfMailBoxConfigType PduIdLastOfMailBoxConfig;  /**< "Last" PDU mapped to mailbox. */
  CanIf_TxBufferCfgIdxOfMailBoxConfigType TxBufferCfgIdxOfMailBoxConfig;  /**< the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig */
  CanIf_TxBufferHandlingTypeOfMailBoxConfigType TxBufferHandlingTypeOfMailBoxConfig;
  CanIf_MailBoxTypeType MailBoxTypeOfMailBoxConfig;  /**< Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused. */
} CanIf_MailBoxConfigType;

/**   \brief  type used in CanIf_MappedTxBuffersConfig */
typedef struct sCanIf_MappedTxBuffersConfigType
{
  CanIf_MailBoxConfigIdxOfMappedTxBuffersConfigType MailBoxConfigIdxOfMappedTxBuffersConfig;  /**< the index of the 1:1 relation pointing to CanIf_MailBoxConfig */
} CanIf_MappedTxBuffersConfigType;

/**   \brief  type used in CanIf_RxIndicationFctList */
typedef struct sCanIf_RxIndicationFctListType
{
  CanIf_RxIndicationFctType RxIndicationFctOfRxIndicationFctList;  /**< Rx indication function. */
  CanIf_RxIndicationLayoutType RxIndicationLayoutOfRxIndicationFctList;  /**< Layout of Rx indication function. */
} CanIf_RxIndicationFctListType;

/**   \brief  type used in CanIf_RxPduConfig */
typedef struct sCanIf_RxPduConfigType
{
  CanIf_UpperPduIdOfRxPduConfigType UpperPduIdOfRxPduConfig;  /**< PDU ID defined by upper layer. */
  CanIf_DlcOfRxPduConfigType DlcOfRxPduConfig;  /**< Data length code. */
  CanIf_RxIndicationFctListIdxOfRxPduConfigType RxIndicationFctListIdxOfRxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_RxIndicationFctList */
  CanIf_MsgType MsgTypeOfRxPduConfig;  /**< Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0). */
} CanIf_RxPduConfigType;

/**   \brief  type used in CanIf_TxBufferPrioByCanIdByteQueueConfig */
typedef struct sCanIf_TxBufferPrioByCanIdByteQueueConfigType
{
  CanIf_TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdByteQueueConfigType TxBufferPrioByCanIdBaseIdxOfTxBufferPrioByCanIdByteQueueConfig;  /**< the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase */
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdxOfTxBufferPrioByCanIdByteQueueConfigType TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdxOfTxBufferPrioByCanIdByteQueueConfig;  /**< the end index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusLengthOfTxBufferPrioByCanIdByteQueueConfigType TxBufferPrioByCanIdByteQueueMappedTxPdusLengthOfTxBufferPrioByCanIdByteQueueConfig;  /**< the number of relations pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdxOfTxBufferPrioByCanIdByteQueueConfigType TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdxOfTxBufferPrioByCanIdByteQueueConfig;  /**< the start index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
} CanIf_TxBufferPrioByCanIdByteQueueConfigType;

/**   \brief  type used in CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
typedef struct sCanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType
{
  CanIf_TxPduConfigIdxOfTxBufferPrioByCanIdByteQueueMappedTxPdusType TxPduConfigIdxOfTxBufferPrioByCanIdByteQueueMappedTxPdus;  /**< the index of the 1:1 relation pointing to CanIf_TxPduConfig */
} CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType;

/**   \brief  type used in CanIf_TxPduConfig */
typedef struct sCanIf_TxPduConfigType
{
  CanIf_CanIdOfTxPduConfigType CanIdOfTxPduConfig;  /**< CAN identifier (16bit / 32bit). */
  CanIf_UpperLayerTxPduIdOfTxPduConfigType UpperLayerTxPduIdOfTxPduConfig;  /**< Upper layer handle ID (8bit / 16bit). */
  CanIf_CtrlStatesIdxOfTxPduConfigType CtrlStatesIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_CtrlStates */
  CanIf_DlcOfTxPduConfigType DlcOfTxPduConfig;  /**< Data length code. */
  CanIf_MailBoxConfigIdxOfTxPduConfigType MailBoxConfigIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_MailBoxConfig */
  CanIf_TxConfirmationFctListIdxOfTxPduConfigType TxConfirmationFctListIdxOfTxPduConfig;  /**< the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList */
} CanIf_TxPduConfigType;

/**   \brief  type used in CanIf_TxPduQueueIndex */
typedef struct sCanIf_TxPduQueueIndexType
{
  CanIf_TxQueueIdxOfTxPduQueueIndexType TxQueueIdxOfTxPduQueueIndex;  /**< the index of the 0:1 relation pointing to CanIf_TxQueue */
  CanIf_TxQueueIndex2DataStartStopIdxOfTxPduQueueIndexType TxQueueIndex2DataStartStopIdxOfTxPduQueueIndex;  /**< the index of the 0:1 relation pointing to CanIf_TxQueueIndex2DataStartStop */
} CanIf_TxPduQueueIndexType;

/**   \brief  type used in CanIf_TxQueueIndex2DataStartStop */
typedef struct sCanIf_TxQueueIndex2DataStartStopType
{
  CanIf_TxQueueDataEndIdxOfTxQueueIndex2DataStartStopType TxQueueDataEndIdxOfTxQueueIndex2DataStartStop;  /**< the end index of the 0:n relation pointing to CanIf_TxQueueData */
  CanIf_TxQueueDataLengthOfTxQueueIndex2DataStartStopType TxQueueDataLengthOfTxQueueIndex2DataStartStop;  /**< the number of relations pointing to CanIf_TxQueueData */
  CanIf_TxQueueDataStartIdxOfTxQueueIndex2DataStartStopType TxQueueDataStartIdxOfTxQueueIndex2DataStartStop;  /**< the start index of the 0:n relation pointing to CanIf_TxQueueData */
} CanIf_TxQueueIndex2DataStartStopType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCSymbolicStructTypes  CanIf Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to CanIf_CtrlStates in the predefined variant ECU1 */
typedef struct CanIf_CtrlStatesECU1StructSTag
{
  CanIf_CtrlStatesType CT_FD1_CAN_b4e1ca3b[1];
} CanIf_CtrlStatesECU1StructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_CtrlStates in the predefined variant ECU2 */
typedef struct CanIf_CtrlStatesECU2StructSTag
{
  CanIf_CtrlStatesType CT_FD1_CAN_b4e1ca3b[1];
} CanIf_CtrlStatesECU2StructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxBufferPrioByCanIdBase in the predefined variant ECU1 */
typedef struct CanIf_TxBufferPrioByCanIdBaseECU1StructSTag
{
  CanIf_TxBufferPrioByCanIdBaseType CanIfBufferCfg_Tx_Std_3290b631[1];
} CanIf_TxBufferPrioByCanIdBaseECU1StructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxBufferPrioByCanIdBase in the predefined variant ECU2 */
typedef struct CanIf_TxBufferPrioByCanIdBaseECU2StructSTag
{
  CanIf_TxBufferPrioByCanIdBaseType CanIfBufferCfg_Tx_Std_3290b631[1];
} CanIf_TxBufferPrioByCanIdBaseECU2StructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxQueue in the predefined variant ECU1 */
typedef struct CanIf_TxQueueECU1StructSTag
{
  CanIf_TxPrioByCanIdByteQueueType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be[1];
} CanIf_TxQueueECU1StructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxQueue in the predefined variant ECU2 */
typedef struct CanIf_TxQueueECU2StructSTag
{
  CanIf_TxPrioByCanIdByteQueueType PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be[1];
  CanIf_TxPrioByCanIdByteQueueType SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be[1];
} CanIf_TxQueueECU2StructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxQueueData in the predefined variant ECU1 */
typedef struct CanIf_TxQueueDataECU1StructSTag
{
  CanIf_TxQueueDataType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be[64];
  CanIf_TxQueueDataType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be[8];
  CanIf_TxQueueDataType Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be[8];
} CanIf_TxQueueDataECU1StructSType;

/**   \brief  type to be used as symbolic data element access to CanIf_TxQueueData in the predefined variant ECU2 */
typedef struct CanIf_TxQueueDataECU2StructSTag
{
  CanIf_TxQueueDataType PSCM_AutoSar_NetwrkMgt_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType Xcp_DTO_Msg_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_Tx_3abd61be[64];
  CanIf_TxQueueDataType TesterPhysicalResPSCM_FD1_Tp_oFD1_CAN_20_Tx_3abd61be[8];
  CanIf_TxQueueDataType TrailerAid_Data2_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType Lane_Assist_Data3_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType EPAS_INFO_FD1_oFD1_CAN_Tx_3abd61be[8];
  CanIf_TxQueueDataType SteeringPinion_Data_FD1_oFD1_CAN_Tx_3abd61be[8];
} CanIf_TxQueueDataECU2StructSType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCUnionIndexAndSymbolTypes  CanIf Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access CanIf_CtrlStates in an index and symbol based style. */
typedef union CanIf_CtrlStatesUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_CtrlStatesType raw[1];
  CanIf_CtrlStatesECU1StructSType strECU1;
  CanIf_CtrlStatesECU2StructSType strECU2;
} CanIf_CtrlStatesUType;

/**   \brief  type to access CanIf_TxBufferPrioByCanIdBase in an index and symbol based style. */
typedef union CanIf_TxBufferPrioByCanIdBaseUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_TxBufferPrioByCanIdBaseType raw[1];
  CanIf_TxBufferPrioByCanIdBaseECU1StructSType strECU1;
  CanIf_TxBufferPrioByCanIdBaseECU2StructSType strECU2;
} CanIf_TxBufferPrioByCanIdBaseUType;

/**   \brief  type to access CanIf_TxQueue in an index and symbol based style. */
typedef union CanIf_TxQueueUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_TxPrioByCanIdByteQueueType raw[8];
  CanIf_TxQueueECU1StructSType strECU1;
  CanIf_TxQueueECU2StructSType strECU2;
} CanIf_TxQueueUType;

/**   \brief  type to access CanIf_TxQueueData in an index and symbol based style. */
typedef union CanIf_TxQueueDataUTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanIf_TxQueueDataType raw[120];
  CanIf_TxQueueDataECU1StructSType strECU1;
  CanIf_TxQueueDataECU2StructSType strECU2;
} CanIf_TxQueueDataUType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCRootPointerTypes  CanIf Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/**   \brief  type used to point to CanIf_CanIfCtrlId2MappedTxBuffersConfig */
typedef P2CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, TYPEDEF, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfigPtrType;

/**   \brief  type used to point to CanIf_CtrlStates */
typedef P2VAR(CanIf_CtrlStatesType, TYPEDEF, CANIF_VAR_NOINIT) CanIf_CtrlStatesPtrType;

/**   \brief  type used to point to CanIf_MailBoxConfig */
typedef P2CONST(CanIf_MailBoxConfigType, TYPEDEF, CANIF_CONST) CanIf_MailBoxConfigPtrType;

/**   \brief  type used to point to CanIf_MappedTxBuffersConfig */
typedef P2CONST(CanIf_MappedTxBuffersConfigType, TYPEDEF, CANIF_CONST) CanIf_MappedTxBuffersConfigPtrType;

/**   \brief  type used to point to CanIf_RxIndicationFctList */
typedef P2CONST(CanIf_RxIndicationFctListType, TYPEDEF, CANIF_CONST) CanIf_RxIndicationFctListPtrType;

/**   \brief  type used to point to CanIf_RxPduCanId */
typedef P2CONST(CanIf_RxPduCanIdType, TYPEDEF, CANIF_CONST) CanIf_RxPduCanIdPtrType;

/**   \brief  type used to point to CanIf_RxPduConfig */
typedef P2CONST(CanIf_RxPduConfigType, TYPEDEF, CANIF_CONST) CanIf_RxPduConfigPtrType;

/**   \brief  type used to point to CanIf_RxPduMask */
typedef P2CONST(CanIf_RxPduMaskType, TYPEDEF, CANIF_CONST) CanIf_RxPduMaskPtrType;

/**   \brief  type used to point to CanIf_TxBufferPrioByCanIdBase */
typedef P2VAR(CanIf_TxBufferPrioByCanIdBaseType, TYPEDEF, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBasePtrType;

/**   \brief  type used to point to CanIf_TxBufferPrioByCanIdByteQueueConfig */
typedef P2CONST(CanIf_TxBufferPrioByCanIdByteQueueConfigType, TYPEDEF, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueConfigPtrType;

/**   \brief  type used to point to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus */
typedef P2CONST(CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType, TYPEDEF, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusPtrType;

/**   \brief  type used to point to CanIf_TxConfirmationFctList */
typedef P2CONST(CanIf_TxConfirmationFctType, TYPEDEF, CANIF_CONST) CanIf_TxConfirmationFctListPtrType;

/**   \brief  type used to point to CanIf_TxPduConfig */
typedef P2CONST(CanIf_TxPduConfigType, TYPEDEF, CANIF_CONST) CanIf_TxPduConfigPtrType;

/**   \brief  type used to point to CanIf_TxPduQueueIndex */
typedef P2CONST(CanIf_TxPduQueueIndexType, TYPEDEF, CANIF_CONST) CanIf_TxPduQueueIndexPtrType;

/**   \brief  type used to point to CanIf_TxQueue */
typedef P2VAR(CanIf_TxPrioByCanIdByteQueueType, TYPEDEF, CANIF_VAR_NOINIT) CanIf_TxQueuePtrType;

/**   \brief  type used to point to CanIf_TxQueueData */
typedef P2VAR(CanIf_TxQueueDataType, TYPEDEF, CANIF_VAR_NOINIT_FAST) CanIf_TxQueueDataPtrType;

/**   \brief  type used to point to CanIf_TxQueueIndex2DataStartStop */
typedef P2CONST(CanIf_TxQueueIndex2DataStartStopType, TYPEDEF, CANIF_CONST) CanIf_TxQueueIndex2DataStartStopPtrType;

/**   \brief  type used to point to CanIf_UlTxPduId2InternalTxPduId */
typedef P2CONST(CanIf_UlTxPduId2InternalTxPduIdType, TYPEDEF, CANIF_CONST) CanIf_UlTxPduId2InternalTxPduIdPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  CanIfPCRootValueTypes  CanIf Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in CanIf_PCConfig */
typedef struct sCanIf_PCConfigType
{
  CanIf_RxPduCanIdPtrType RxPduCanIdOfPCConfig;  /**< the pointer to CanIf_RxPduCanId */
  CanIf_RxPduConfigPtrType RxPduConfigOfPCConfig;  /**< the pointer to CanIf_RxPduConfig */
  CanIf_TxPduConfigPtrType TxPduConfigOfPCConfig;  /**< the pointer to CanIf_TxPduConfig */
  CanIf_TxQueueIndex2DataStartStopPtrType TxQueueIndex2DataStartStopOfPCConfig;  /**< the pointer to CanIf_TxQueueIndex2DataStartStop */
  CanIf_UlTxPduId2InternalTxPduIdPtrType UlTxPduId2InternalTxPduIdOfPCConfig;  /**< the pointer to CanIf_UlTxPduId2InternalTxPduId */
} CanIf_PCConfigType;

typedef CanIf_PCConfigType CanIf_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/**   \brief  type to access CanIf_PCConfig in a symbol based style. */
typedef struct sCanIf_PCConfigsType
{
  CanIf_PCConfigType Config_ECU1;  /**< [Config_ECU1] */
  CanIf_PCConfigType Config_ECU2;  /**< [Config_ECU2] */
} CanIf_PCConfigsType;

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanIf_BusOffNotificationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_BusOffNotificationFctType, CANIF_CONST) CanIf_BusOffNotificationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CanIfCtrlId2MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_CanIfCtrlId2MappedTxBuffersConfig
  \brief  CAN controller configuration - mapped Tx-buffer(s).
  \details
  Element                          Description
  MappedTxBuffersConfigEndIdx      the end index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
  MappedTxBuffersConfigStartIdx    the start index of the 1:n relation pointing to CanIf_MappedTxBuffersConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_CanIfCtrlId2MappedTxBuffersConfigType, CANIF_CONST) CanIf_CanIfCtrlId2MappedTxBuffersConfig[1];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlModeIndicationFctPtr
**********************************************************************************************************************/
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_CtrlModeIndicationFctType, CANIF_CONST) CanIf_CtrlModeIndicationFctPtr;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MailBoxConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MailBoxConfig
  \brief  Mailbox table.
  \details
  Element                 Description
  CtrlStatesIdx           the index of the 1:1 relation pointing to CanIf_CtrlStates
  PduIdFirst              "First" PDU mapped to mailbox.
  PduIdLast               "Last" PDU mapped to mailbox.
  TxBufferCfgIdx          the index of the 0:1 relation pointing to CanIf_TxBufferPrioByCanIdByteQueueConfig
  TxBufferHandlingType
  MailBoxType             Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_MailBoxConfigType, CANIF_CONST) CanIf_MailBoxConfig[43];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_MappedTxBuffersConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_MappedTxBuffersConfig
  \brief  Mapped Tx-buffer(s)
  \details
  Element             Description
  MailBoxConfigIdx    the index of the 1:1 relation pointing to CanIf_MailBoxConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_MappedTxBuffersConfigType, CANIF_CONST) CanIf_MappedTxBuffersConfig[1];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxIndicationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_RxIndicationFctList
  \brief  Rx indication functions table.
  \details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxIndicationFctListType, CANIF_CONST) CanIf_RxIndicationFctList[5];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduCanIdECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduCanIdECU1
  \brief  Rx-PDU: CAN identifier.
*/ 
#define CANIF_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxPduCanIdType, CANIF_CONST) CanIf_RxPduCanIdECU1[46];
#define CANIF_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduCanIdECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduCanIdECU2
  \brief  Rx-PDU: CAN identifier.
*/ 
#define CANIF_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxPduCanIdType, CANIF_CONST) CanIf_RxPduCanIdECU2[46];
#define CANIF_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfigECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfigECU1
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  UpperPduId                PDU ID defined by upper layer.
  Dlc                       Data length code.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  MsgType                   Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfigECU1[46];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduConfigECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduConfigECU2
  \brief  Rx-PDU configuration table.
  \details
  Element                   Description
  UpperPduId                PDU ID defined by upper layer.
  Dlc                       Data length code.
  RxIndicationFctListIdx    the index of the 1:1 relation pointing to CanIf_RxIndicationFctList
  MsgType                   Type of CAN message: *CAN (both 2.0 or FD), *FD_CAN (only FD), *NO_FD_CAN (only 2.0).
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxPduConfigType, CANIF_CONST) CanIf_RxPduConfigECU2[46];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_RxPduMask
**********************************************************************************************************************/
/** 
  \var    CanIf_RxPduMask
  \brief  Rx-PDU: CAN identifier mask.
*/ 
#define CANIF_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_RxPduMaskType, CANIF_CONST) CanIf_RxPduMask[46];
#define CANIF_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueConfig
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE
  \details
  Element                                             Description
  TxBufferPrioByCanIdBaseIdx                          the index of the 1:1 relation pointing to CanIf_TxBufferPrioByCanIdBase
  TxBufferPrioByCanIdByteQueueMappedTxPdusEndIdx      the end index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusLength      the number of relations pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  TxBufferPrioByCanIdByteQueueMappedTxPdusStartIdx    the start index of the 1:n relation pointing to CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxBufferPrioByCanIdByteQueueConfigType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueConfig[1];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus
  \brief  Tx-buffer: PRIO_BY_CANID as BYTE_QUEUE: Mapped Tx-PDUs
  \details
  Element           Description
  TxPduConfigIdx    the index of the 1:1 relation pointing to CanIf_TxPduConfig
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdusType, CANIF_CONST) CanIf_TxBufferPrioByCanIdByteQueueMappedTxPdus[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  \var    CanIf_TxConfirmationFctList
  \brief  Tx confirmation functions table.
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxConfirmationFctType, CANIF_CONST) CanIf_TxConfirmationFctList[5];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfigECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfigECU1
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  Dlc                         Data length code.
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfigECU1[8];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduConfigECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduConfigECU2
  \brief  Tx-PDUs - configuration.
  \details
  Element                     Description
  CanId                       CAN identifier (16bit / 32bit).
  UpperLayerTxPduId           Upper layer handle ID (8bit / 16bit).
  CtrlStatesIdx               the index of the 1:1 relation pointing to CanIf_CtrlStates
  Dlc                         Data length code.
  MailBoxConfigIdx            the index of the 1:1 relation pointing to CanIf_MailBoxConfig
  TxConfirmationFctListIdx    the index of the 1:1 relation pointing to CanIf_TxConfirmationFctList
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxPduConfigType, CANIF_CONST) CanIf_TxPduConfigECU2[8];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxPduQueueIndex
**********************************************************************************************************************/
/** 
  \var    CanIf_TxPduQueueIndex
  \brief  Indirection table: Tx-PDU handle ID to corresponding Tx buffer handle ID. NOTE: Only BasicCAN Tx-PDUs have a valid indirection into the Tx buffer.
  \details
  Element                          Description
  TxQueueIdx                       the index of the 0:1 relation pointing to CanIf_TxQueue
  TxQueueIndex2DataStartStopIdx    the index of the 0:1 relation pointing to CanIf_TxQueueIndex2DataStartStop
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxPduQueueIndexType, CANIF_CONST) CanIf_TxPduQueueIndex[8];
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueIndex2DataStartStopECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueIndex2DataStartStopECU1
  \details
  Element                Description
  TxQueueDataEndIdx      the end index of the 0:n relation pointing to CanIf_TxQueueData
  TxQueueDataLength      the number of relations pointing to CanIf_TxQueueData
  TxQueueDataStartIdx    the start index of the 0:n relation pointing to CanIf_TxQueueData
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxQueueIndex2DataStartStopType, CANIF_CONST) CanIf_TxQueueIndex2DataStartStopECU1[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueIndex2DataStartStopECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueIndex2DataStartStopECU2
  \details
  Element                Description
  TxQueueDataEndIdx      the end index of the 0:n relation pointing to CanIf_TxQueueData
  TxQueueDataLength      the number of relations pointing to CanIf_TxQueueData
  TxQueueDataStartIdx    the start index of the 0:n relation pointing to CanIf_TxQueueData
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_TxQueueIndex2DataStartStopType, CANIF_CONST) CanIf_TxQueueIndex2DataStartStopECU2[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_UlTxPduId2InternalTxPduIdECU1
**********************************************************************************************************************/
/** 
  \var    CanIf_UlTxPduId2InternalTxPduIdECU1
  \brief  Indirection table - Upper layer Tx-PduId to internal one.
*/ 
#define CANIF_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_UlTxPduId2InternalTxPduIdType, CANIF_CONST) CanIf_UlTxPduId2InternalTxPduIdECU1[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_UlTxPduId2InternalTxPduIdECU2
**********************************************************************************************************************/
/** 
  \var    CanIf_UlTxPduId2InternalTxPduIdECU2
  \brief  Indirection table - Upper layer Tx-PduId to internal one.
*/ 
#define CANIF_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_UlTxPduId2InternalTxPduIdType, CANIF_CONST) CanIf_UlTxPduId2InternalTxPduIdECU2[8];  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define CANIF_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_CtrlStates
**********************************************************************************************************************/
/** 
  \var    CanIf_CtrlStates
  \details
  Element     Description
  CtrlMode    Controller mode.
  PduMode     PDU mode state.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_CtrlStatesUType, CANIF_VAR_NOINIT) CanIf_CtrlStates;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxBufferPrioByCanIdBase
**********************************************************************************************************************/
/** 
  \var    CanIf_TxBufferPrioByCanIdBase
  \brief  Variable declaration - Tx-buffer: PRIO_BY_CANID as byte/bit-queue. Stores at least the QueueCounter.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_TxBufferPrioByCanIdBaseUType, CANIF_VAR_NOINIT) CanIf_TxBufferPrioByCanIdBase;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueue
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueue
  \brief  Variable declaration - Tx byte queue.
*/ 
#define CANIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_TxQueueUType, CANIF_VAR_NOINIT) CanIf_TxQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_TxQueueData
**********************************************************************************************************************/
/** 
  \var    CanIf_TxQueueData
  \brief  Variable declaration - Tx queue data.
*/ 
#define CANIF_START_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanIf_TxQueueDataUType, CANIF_VAR_NOINIT_FAST) CanIf_TxQueueData;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANIF_STOP_SEC_VAR_FAST_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanIf_PCConfig
**********************************************************************************************************************/
/** 
  \var    CanIf_PCConfig
  \details
  Element                       Description
  RxPduCanId                    the pointer to CanIf_RxPduCanId
  RxPduConfig                   the pointer to CanIf_RxPduConfig
  TxPduConfig                   the pointer to CanIf_TxPduConfig
  TxQueueIndex2DataStartStop    the pointer to CanIf_TxQueueIndex2DataStartStop
  UlTxPduId2InternalTxPduId     the pointer to CanIf_UlTxPduId2InternalTxPduId
*/ 
#define CANIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanIf_PCConfigsType, CANIF_CONST) CanIf_PCConfig;
#define CANIF_STOP_SEC_CONST_UNSPECIFIED
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




#endif  /* CANIF_CFG_H */
/**********************************************************************************************************************
  END OF FILE: CanIf_Cfg.h
**********************************************************************************************************************/


