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
 *            Module: Com
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cbk.h
 *   Generation Time: 2018-01-24 11:34:48
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


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA S 0777 EOF */ /* MD_Com_0777_IPduCallouts */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_ABS_BrkBst_Data_FD1_oFD1_CAN_3abd61be         0       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_APIM_Send_Signals1_FD1_oFD1_CAN_3abd61be      1       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_APIM_Send_Signals_2_FD1_oFD1_CAN_3abd61be     2       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_ActiveFrontStrg_Stat2_FD1_oFD1_CAN_3abd61be   3       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_BodyInfo_3_FD1_oFD1_CAN_3abd61be              4       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Body_Info_4_FD1_oFD1_CAN_3abd61be             5       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_BrakeSnData_3_FD1_oFD1_CAN_3abd61be           6       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_BrakeSnData_4_FD1_oFD1_CAN_3abd61be           7       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_BrakeSnData_5_FD1_oFD1_CAN_3abd61be           8       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_BrakeSnData_6_FD1_oFD1_CAN_3abd61be           9       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_BrakeSysFeatures_3_oFD1_CAN_3abd61be          10      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_BrakeSysFeatures_FD1_oFD1_CAN_3abd61be        11      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Climate_Control_Data_FD1_oFD1_CAN_3abd61be    12      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Cluster_Info1_FD1_oFD1_CAN_3abd61be           13      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_DeliveryVersion_oFD1_CAN_3abd61be             14      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_DesiredTorqBrk_FD1_oFD1_CAN_3abd61be          15      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_EngBrakeData_FD1_oFD1_CAN_3abd61be            16      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_EngVehicleSpThrottle2_FD1_oFD1_CAN_3abd61be   17      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_EngVehicleSpThrottle_FD1_oFD1_CAN_3abd61be    18      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_FileVersion_oFD1_CAN_3abd61be                 19      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_GGCC_Config_Mgmt_ID_1_FD1_oFD1_CAN_3abd61be   20      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Image_Processing_Data_FD1_oFD1_CAN_3abd61be   21      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Lane_Assist_Data1_FD1_oFD1_CAN_3abd61be       22      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_LateralMotionControl_FD1_oFD1_CAN_3abd61be    23      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Mc_Send_Signals_2_FD1_oFD1_CAN_3abd61be       24      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_ParkAid_Data_FD1_oFD1_CAN_3abd61be            25      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_PowertrainData_10_FD1_oFD1_CAN_3abd61be       26      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Steer_Assist_Data_FD1_oFD1_CAN_3abd61be       27      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Steering_Data_FD1_oFD1_CAN_3abd61be           28      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerAid_Data3_FD1_oFD1_CAN_3abd61be        29      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerAid_Data_FD1_oFD1_CAN_3abd61be         30      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerAid_Stat1_FD1_oFD1_CAN_3abd61be        31      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerAid_Stat2_FD1_oFD1_CAN_3abd61be        32      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerAid_Stat3_FD1_oFD1_CAN_3abd61be        33      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerBrakeInfo_FD1_oFD1_CAN_3abd61be        34      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerInfo_2_FD1_oFD1_CAN_3abd61be           35      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerInfo_FD1_oFD1_CAN_3abd61be             36      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TransGearData_FD1_oFD1_CAN_3abd61be           37      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_VehicleOperatingModes_FD1_oFD1_CAN_3abd61be   38      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_WheelData_FD1_oFD1_CAN_3abd61be               39      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_WheelSpeed_FD1_oFD1_CAN_3abd61be              40      /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Yaw_Data_FD1_oFD1_CAN_3abd61be                41      /**< [InvariantValuesModelView] */
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in a single predefined variant */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_EPAS_INFO_FD1_oFD1_CAN_3abd61be               0       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_Lane_Assist_Data3_FD1_oFD1_CAN_3abd61be       1       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_SteeringPinion_Data_FD1_oFD1_CAN_3abd61be     2       /**< [InvariantValuesModelView] */
#define ComConf_ComIPdu_TrailerAid_Data2_FD1_oFD1_CAN_3abd61be        3       /**< [InvariantValuesModelView] */
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after an I-PDU has been received.
    \param    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                              Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    PduInfoPtr      Payload information of the received I-PDU (pointer to data and data length).
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used. 
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Com_TxConfirmation
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after the PDU has been transmitted on the network.
              A confirmation that is received for an I-PDU that does not require a confirmation is silently discarded.
    \param    TxPduId    ID of AUTOSAR COM I-PDU that has been transmitted.
                            Range: 0..(maximum number of I-PDU IDs transmitted by AUTOSAR COM) - 1
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used. 
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxConfirmation(PduIdType TxPduId);



#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

