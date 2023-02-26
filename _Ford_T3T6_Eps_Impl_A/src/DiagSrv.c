/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DiagSrv.c
 *        Config:  C:/Users/gz324f/Desktop/working/component/Ford002A_DiagSrv_Impl/tools/Component.dpa
 *     SW-C Type:  DiagSrv
 *  Generated at:  Fri Apr  6 15:48:46 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DiagSrv>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/***********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name: DiagSrv.c
* Module Description: Rte Diagnostic Service handler
* Project           : Ford T3T6
* Author            : Xin Liu
************************************************************************************************************************
* Version Control:
* %version:         12 %
* %derived_by:      gz324f %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 09/01/17  1        XL        Initial file creation                                                        EA4#14121
* 09/08/17  2        XL        Modified session control to avoid manual Nexteer session call                EA4#14121
* 10/04/17  3        XL        Added services                                                               EA4#14121
* 10/10/17  4        XL        Added F119                                                                   EA4#14121
* 10/10/17  5        XL        Corrected FE20 Stop length                                                   EA4#14121
* 01/05/18  6        XL        Added temporary programming session support                                  EA4#18889
* 01/26/18  7        BDO       Updated for IdentityManager and FlashProgReq over UART                       EA4#20080
* 02/01/18  8        XL        Updated CMS and moved programming session to CustDiag                        EA4#20166
* 02/11/18  9        XL        Updated Nexteer DID range                                                    EA4#20166
* 02/14/18  10       XL        Added F200                                                                   EA4#20166
* 04/10/18  11       XL        Added FE88, FE89, FE8A, FE8B, FE8C                                           EA4#22505
***********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_DiagSrv.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 *
 * Array Types:
 * ============
 * Dcm_Data1024ByteType: Array with 1024 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * Dcm_Data8ByteType: Array with 8 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define DiagSrv_START_SEC_CODE
#include "DiagSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x22u, 0xFFu, 0xFD40, Data, 0u, &RespLen_Cnt_T_u16, &Error_Cnt_T_u08); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength (returns application error)
 *********************************************************************************************************************/

  *DataLength = 4U;

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReturnControlToECU> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x2Fu, 0x00u, 0xFD40u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ShortTermAdjustment> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x2Fu, 0x03u, 0xFD40u, (uint8 *)Data, DataLength, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x22u, 0xFFu, 0xFD41, Data, 0u, &RespLen_Cnt_T_u16, &Error_Cnt_T_u08); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength (returns application error)
 *********************************************************************************************************************/

	*DataLength = 4U;

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReturnControlToECU> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x2Fu, 0x00u, 0xFD41u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ShortTermAdjustment> of PortPrototype <DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x2Fu, 0x03u, 0xFD41u, (uint8 *)Data, DataLength, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagSrvInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, uint16 *CmnMfgSrvCmnMfgSrvRespLen, uint8 *CmnMfgSrvCmnMfgSrvRespCod)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagSrvInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DiagSrv_CODE) DiagSrvInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DiagSrvInit1
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NexteerDidRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDidData> of PortPrototype <DataServices_DIDRange_NexteerDidRangeF194toF1FF>
 *   - triggered by server invocation for OperationPrototype <ReadDidData> of PortPrototype <DataServices_DIDRange_NexteerDidRangeFD00toFD39>
 *   - triggered by server invocation for OperationPrototype <ReadDidData> of PortPrototype <DataServices_DIDRange_NexteerDidRangeFD43toFEFF>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NexteerDidRead(uint16 DID, uint8 *Data, Dcm_OpStatusType OpStatus, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1024ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_DCM_E_PENDING
 *   RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: NexteerDidRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) NexteerDidRead(uint16 DID, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NexteerDidRead (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;

  Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x22u, 0xFFu, DID, Data, 0u, DataLength, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  if (*ErrorCode != 0u)
  {
	Error_Cnt_T_u08 = E_NOT_OK;
  }

  return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NexteerDidWrite
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteDidData> of PortPrototype <DataServices_DIDRange_NexteerDidRangeF194toF1FF>
 *   - triggered by server invocation for OperationPrototype <WriteDidData> of PortPrototype <DataServices_DIDRange_NexteerDidRangeFD00toFD39>
 *   - triggered by server invocation for OperationPrototype <WriteDidData> of PortPrototype <DataServices_DIDRange_NexteerDidRangeFD43toFEFF>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NexteerDidWrite(uint16 DID, const uint8 *Data, Dcm_OpStatusType OpStatus, uint16 DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1024ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_DCM_E_PENDING
 *   RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: NexteerDidWrite_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) NexteerDidWrite(uint16 DID, P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NexteerDidWrite (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
  uint16 RespLen_Cnt_T_u16;

  Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x2Eu, 0xFFu, DID ,(uint8 *)Data, DataLength, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

  if (*ErrorCode != 0u)
  {
	Error_Cnt_T_u08 = E_NOT_OK;
  }

  return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults(Dcm_OpStatusType OpStatus, uint8 *Data, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x03u, 0xF100u, Data, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xF100u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x02u, 0xF100u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults(Dcm_OpStatusType OpStatus, uint8 *Data, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x03u, 0xF119u, Data, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xF119u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x02u, 0xF119u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults(Dcm_OpStatusType OpStatus, uint8 *Data, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x03u, 0xF151u, Data, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xF151u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x02u, 0xF151u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xF200u, (uint8 *)Data, 4u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFD54u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFD70u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFD71u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFD81u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFD85u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDA0u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDA1u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDA2u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDA3u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDA8u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDA9u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDAAu, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDABu, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults(Dcm_OpStatusType OpStatus, uint8 *Data, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x03u, 0xFDC2u, Data, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDC2u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x02u, 0xFDC2u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, uint8 *Data, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x03u, 0xFDF0u, Data, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDF0u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, uint8 *Data, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x03u, 0xFDF1u, Data, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFDF1u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data8ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFE20u, (uint8 *)Data, 8u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x02u, 0xFE20u, (uint8 *)Data, 4u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFE88u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_DCM_E_PENDING
 *   RTE_E_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start (returns application error)
 *********************************************************************************************************************/

	Std_ReturnType Error_Cnt_T_u08 = RTE_E_OK;
	uint16 RespLen_Cnt_T_u16;
	uint8 DummyBuffer_Cnt_T_u08[8];

	Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(0x31u, 0x01u, 0xFE89u, DummyBuffer_Cnt_T_u08, 0u, &RespLen_Cnt_T_u16, ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

	if (*ErrorCode != 0u)
	{
		Error_Cnt_T_u08 = E_NOT_OK;
	}

	return Error_Cnt_T_u08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DiagSrv_STOP_SEC_CODE
#include "DiagSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
