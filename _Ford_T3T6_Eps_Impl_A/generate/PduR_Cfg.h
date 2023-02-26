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
 *            Module: PduR
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Cfg.h
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

#if !defined (PDUR_CFG_H)
# define PDUR_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR_Types.h"

/**********************************************************************************************************************
 * GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#ifndef PDUR_USE_DUMMY_FUNCTIONS
#define PDUR_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef PDUR_USE_DUMMY_STATEMENT
#define PDUR_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef PDUR_DUMMY_STATEMENT
#define PDUR_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_DUMMY_STATEMENT_CONST
#define PDUR_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define PDUR_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef PDUR_ATOMIC_VARIABLE_ACCESS
#define PDUR_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef PDUR_PROCESSOR_RH850_1373
#define PDUR_PROCESSOR_RH850_1373
#endif
#ifndef PDUR_COMP_GREENHILLS
#define PDUR_COMP_GREENHILLS
#endif
#ifndef PDUR_GEN_GENERATOR_MSR
#define PDUR_GEN_GENERATOR_MSR
#endif
#ifndef PDUR_CPUTYPE_BITORDER_LSB2MSB
#define PDUR_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#define PDUR_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_LINKTIME
#define PDUR_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define PDUR_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef PDUR_CONFIGURATION_VARIANT
#define PDUR_CONFIGURATION_VARIANT PDUR_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef PDUR_POSTBUILD_VARIANT_SUPPORT
#define PDUR_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define PDUR_DEV_ERROR_DETECT STD_ON  /**< /ActiveEcuC/EcuC/EcucGeneral[0:EcuCSafeBswChecks] || /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */
#define PDUR_DEV_ERROR_REPORT STD_ON  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRDevErrorDetect] */

#define PDUR_METADATA_SUPPORT STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRMetaDataSupport] */
#define PDUR_VERSION_INFO_API STD_OFF  /**< /ActiveEcuC/PduR/PduRGeneral[0:PduRVersionInfoApi] */

 #define PDUR_ERROR_NOTIFICATION STD_OFF


#define PduR_PBConfigIdType uint32

#define PDUR_INVALID_VARARRAYIDX                                      ((uint16)0xFFFF) /**< Invalid VarArray element */

 /*  DET Error define list  */ 
#define PDUR_FCT_CANIFRXIND 0x01U 
#define PDUR_FCT_CANIFTX 0x09U 
#define PDUR_FCT_CANIFTXCFM 0x02U 
#define PDUR_FCT_COMTX 0x89U 
#define PDUR_FCT_CANTPRXIND 0x05U 
#define PDUR_FCT_CANTPTX 0x09U 
#define PDUR_FCT_CANTPTXCFM 0x08U 
#define PDUR_FCT_CANTPSOR 0x06U 
#define PDUR_FCT_CANTPCPYRX 0x04U 
#define PDUR_FCT_CANTPCPYTX 0x07U 
#define PDUR_FCT_DCMTX 0x99U 
 /*   PduR_CanIfIfRxIndication  PduR_CanIfTransmit  PduR_CanIfTxConfirmation  PduR_ComTransmit  PduR_CanTpTpRxIndication  PduR_CanTpTransmit  PduR_CanTpTxConfirmation  PduR_CanTpStartOfReception  PduR_CanTpCopyRxData  PduR_CanTpCopyTxData  PduR_DcmTransmit  */ 



/**
 * \defgroup PduRHandleIdsIfRxDest Handle IDs of handle space IfRxDest.
 * \brief Communication interface Rx destination PDUs
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_DST_Can_PT_ABS_BrkBst_Data_FD1_3290b631  0       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_APIM_Send_Signals1_FD1_3290b631 1     /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_APIM_Send_Signals_2_FD1_3290b631 2    /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_ActiveFrontStrg_Stat2_FD1_3290b631 3  /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_BodyInfo_3_FD1_3290b631       4       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Body_Info_4_FD1_3290b631      5       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_BrakeSnData_3_FD1_3290b631    6       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_BrakeSnData_4_FD1_3290b631    7       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_BrakeSnData_5_FD1_3290b631    8       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_BrakeSnData_6_FD1_3290b631    9       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_BrakeSysFeatures_3_3290b631   10      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_BrakeSysFeatures_FD1_3290b631 11      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Climate_Control_Data_FD1_3290b631 12  /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Cluster_Info1_FD1_3290b631    13      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_DesiredTorqBrk_FD1_3290b631   14      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_EngBrakeData_FD1_3290b631     15      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_EngVehicleSpThrottle2_FD1_3290b631 16 /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_EngVehicleSpThrottle_FD1_3290b631 17  /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_GGCC_Config_Mgmt_ID_1_FD1_3290b631 18 /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Image_Processing_Data_FD1_3290b631 19 /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Lane_Assist_Data1_FD1_3290b631 20     /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_LateralMotionControl_FD1_3290b631 21  /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Mc_Send_Signals_2_FD1_3290b631 22     /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_ParkAid_Data_FD1_3290b631     23      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_PowertrainData_10_FD1_3290b631 24     /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Steer_Assist_Data_FD1_3290b631 25     /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Steering_Data_FD1_3290b631    26      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Data3_FD1_3290b631 27      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Data_FD1_3290b631  28      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Stat1_FD1_3290b631 29      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Stat2_FD1_3290b631 30      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Stat3_FD1_3290b631 31      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerBrakeInfo_FD1_3290b631 32      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerInfo_2_FD1_3290b631    33      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerInfo_FD1_3290b631      34      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TransGearData_FD1_3290b631    35      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_VehicleOperatingModes_FD1_3290b631 36 /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_WheelData_FD1_3290b631        37      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_WheelSpeed_FD1_3290b631       38      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Yaw_Data_FD1_3290b631         39      /**< [InvariantValuesModelView] */
/**\} */

/**
 * \defgroup PduRHandleIdsIfRxSrc Handle IDs of handle space IfRxSrc.
 * \brief Communication interface Rx source PDUs
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_ABS_BrkBst_Data_FD1_3290b631   0       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_APIM_Send_Signals1_FD1_3290b631 1      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_APIM_Send_Signals_2_FD1_3290b631 2     /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_ActiveFrontStrg_Stat2_FD1_3290b631 3   /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_BodyInfo_3_FD1_3290b631        4       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Body_Info_4_FD1_3290b631       5       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_3_FD1_3290b631     6       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_4_FD1_3290b631     7       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_5_FD1_3290b631     8       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSnData_6_FD1_3290b631     9       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSysFeatures_3_3290b631    10      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_BrakeSysFeatures_FD1_3290b631  11      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Climate_Control_Data_FD1_3290b631 12   /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Cluster_Info1_FD1_3290b631     13      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_DesiredTorqBrk_FD1_3290b631    14      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_EngBrakeData_FD1_3290b631      15      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_EngVehicleSpThrottle2_FD1_3290b631 16  /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_EngVehicleSpThrottle_FD1_3290b631 17   /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_GGCC_Config_Mgmt_ID_1_FD1_3290b631 18  /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Image_Processing_Data_FD1_3290b631 19  /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Lane_Assist_Data1_FD1_3290b631 20      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_LateralMotionControl_FD1_3290b631 21   /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Mc_Send_Signals_2_FD1_3290b631 22      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_ParkAid_Data_FD1_3290b631      23      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_PowertrainData_10_FD1_3290b631 24      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Steer_Assist_Data_FD1_3290b631 25      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Steering_Data_FD1_3290b631     26      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data3_FD1_3290b631  27      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data_FD1_3290b631   28      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat1_FD1_3290b631  29      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat2_FD1_3290b631  30      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Stat3_FD1_3290b631  31      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerBrakeInfo_FD1_3290b631  32      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerInfo_2_FD1_3290b631     33      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerInfo_FD1_3290b631       34      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TransGearData_FD1_3290b631     35      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_VehicleOperatingModes_FD1_3290b631 36  /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_WheelData_FD1_3290b631         37      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_WheelSpeed_FD1_3290b631        38      /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Yaw_Data_FD1_3290b631          39      /**< [InvariantValuesModelView] */
/**\} */

/**
 * \defgroup PduRHandleIdsIfTpTxSrc Handle IDs of handle space IfTpTxSrc.
 * \brief Communication interface and transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_EPAS_INFO_FD1_3290b631         0       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_Lane_Assist_Data3_FD1_3290b631 1       /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_SteeringPinion_Data_FD1_3290b631 2     /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalResPSCM_FD1_20_3290b631 3 /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalResPSCM_FD1_3290b631 4   /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TrailerAid_Data2_FD1_3290b631  5       /**< [InvariantValuesModelView] */
/**\} */

/**
 * \defgroup PduRHandleIdsIfTxDest Handle IDs of handle space IfTxDest.
 * \brief Communication interface Tx destination PDUs
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_DST_Can_PT_EPAS_INFO_FD1_3290b631        0       /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_Lane_Assist_Data3_FD1_3290b631 1      /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_SteeringPinion_Data_FD1_3290b631 2    /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TrailerAid_Data2_FD1_3290b631 3       /**< [InvariantValuesModelView] */
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxDest Handle IDs of handle space TpRxDest.
 * \brief Transport protocol Rx destination PDUs
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_DST_Can_PT_TesterFunctionalReq_FD1_20_3290b631 0 /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TesterFunctionalReq_FD1_3290b631 1    /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TesterPhysicalReqPSCM_FD1_20_3290b631 2 /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TesterPhysicalReqPSCM_FD1_3290b631 3  /**< [InvariantValuesModelView] */
/**\} */

/**
 * \defgroup PduRHandleIdsTpRxSrc Handle IDs of handle space TpRxSrc.
 * \brief Transport protocol Rx source PDUs
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TesterFunctionalReq_FD1_20_3290b631 0  /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TesterFunctionalReq_FD1_3290b631 1     /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalReqPSCM_FD1_20_3290b631 2 /**< [InvariantValuesModelView] */
#define PduRConf_PduRSrcPdu_SRC_Can_PT_TesterPhysicalReqPSCM_FD1_3290b631 3   /**< [InvariantValuesModelView] */
/**\} */

/**
 * \defgroup PduRHandleIdsTpTxDest Handle IDs of handle space TpTxDest.
 * \brief Transport protocol Tx PDUs
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define PduRConf_PduRDestPdu_DST_Can_PT_TesterPhysicalResPSCM_FD1_20_3290b631 0 /**< [InvariantValuesModelView] */
#define PduRConf_PduRDestPdu_DST_Can_PT_TesterPhysicalResPSCM_FD1_3290b631 1  /**< [InvariantValuesModelView] */
/**\} */


/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
 * GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#endif  /* PDUR_CFG_H */
/**********************************************************************************************************************
 * END OF FILE: PduR_Cfg.h
 *********************************************************************************************************************/

