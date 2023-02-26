/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotCtrlPrmEstimn.c
 *        Config:  C:/Component/SF102A_MotCtrlPrmEstimn_Impl/tools/Component.dpa
 *     SW-C Type:  MotCtrlPrmEstimn
 *  Generated at:  Fri Sep 22 15:02:50 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotCtrlPrmEstimn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : MotCtrlPrmEstimn.c
* Module Description: Implementation of "Motor Control Parameter Estimation" component
* Project           : CBD 
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/16/15  1        Rijvi       Initial Version                                                                 EA4#281    
* 08/16/15  2        Selva       A1041 fix implemented                                                           EA4#1336   
* 03/03/16  3        Rijvi       Anomaly EA4#2279 fix implementation                                             EA4#2414   
* 04/06/16  4        Rijvi       Updated per design rev. 1.5.0                                                   EA4#4844
* 11/29/16	5		 ML			 Updated per design rev. 2.1.0													 EA4#7528
* 09/25/17  6        RMG(TATA)   New Input added MotAndThermProtnLoaMod and deleted IvtrLoaMtgtnEna        		 EA4#13239
**********************************************************************************************************************/

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
 * u2p14
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u9p7
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_MotCtrlPrmEstimn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/

#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"


/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of Rte_Read and Rte_Write, GetErrorStatus and SetRamBlockStatus */ 




/********************************************* Embedded Local Constants **********************************************/
#define  FETTESTHILIM_DEGCGRD_F32 			(200.0F)
#define  FETTESTLOLIM_DEGCGRD_F32 			(-50.0F)
#define  MAGNETTESTHILIM_DEGCGRD_F32 		(150.0F)
#define  MAGNETTESTLOLIM_DEGCGRD_F32 		(-50.0F)
#define  MOTWIDGTESTHILIM_DEGCGRD_F32 		(300.0F)
#define  MOTWIDGTESTLOLIM_DEGCGRD_F32 		(-50.0F)
#define  MOTINDUIVSHILIM_IVSHENRY_F32		(33334.0F)
#define  MOTINDUIVSLOLIM_IVSHENRY_F32		(2440.0F)
#define  BITMASK2_CNT_U08					((uint8)2U)


/* Typecasting the calibration array pointer/address to the proper array type */
#define  PrmMotCtrlPrmEstimnMotBackEmfConSatnX           ( *(const Ary1D_u9p7_16   *) (Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D()) )
#define  PrmMotCtrlPrmEstimnMotBackEmfConSatnY  		 ( *(const Ary1D_u2p14_16  *) (Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D()) )
#define  PrmMotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln  ( *(const Ary1D_u9p7_6    *) (Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D()) )
#define  PrmMotCtrlPrmEstimnMotCurrQaxInduSatnX  		 ( *(const Ary1D_u9p7_7    *) (Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D()) )
#define  PrmMotCtrlPrmEstimnMotInduDaxSatnScaY  		 ( *(const Ary2D_u2p14_7_6 *) (Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D()) )
#define  PrmMotCtrlPrmEstimnMotInduQaxSatnScaY  		 ( *(const Ary2D_u2p14_7_6 *) (Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D()) )
 


/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

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
 * Boolean: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u2p14: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * Ary1D_u2p14_16: Array with 16 element(s) of type u2p14
 * Ary1D_u2p14_7: Array with 7 element(s) of type u2p14
 * Ary1D_u9p7_16: Array with 16 element(s) of type u9p7
 * Ary1D_u9p7_6: Array with 6 element(s) of type u9p7
 * Ary1D_u9p7_7: Array with 7 element(s) of type u9p7
 * Ary2D_u2p14_6_7: Array with 6 element(s) of type Ary1D_u2p14_7
 *
 * Record Types:
 * =============
 * MotPrmNomEolRec3: Record with elements
 *   MotBackEmfConNom of type float32
 *   MotRNom of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax(void)
 *   float32 *Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd(void)
 *   MotPrmNomEolRec3 *Rte_Pim_MotPrmNom(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCtrlPrmEstimnFetRNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotRNom_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val(void)
 *   float32 Rte_Prm_MotCtrlPrmEstimnTNom_Val(void)
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_16
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnY_Ary1D(void)
 *     Returnvalue: u2p14* is of type Ary1D_u2p14_16
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_6
 *   u9p7 *Rte_Prm_MotCtrlPrmEstimnMotCurrQaxInduSatnX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_7
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotInduDaxSatnScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_7
 *   u2p14 *Rte_Prm_MotCtrlPrmEstimnMotInduQaxSatnScaY_Ary2D(void)
 *     Returnvalue: u2p14* is of type Ary2D_u2p14_6_7
 *
 *********************************************************************************************************************/


#define MotCtrlPrmEstimn_START_SEC_CODE
#include "MotCtrlPrmEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotPrmNomEol_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotPrmNomEol>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GetMotPrmNomEol_Oper(float32 *MotBackEmfConNom_Arg, float32 *MotRNom_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GetMotPrmNomEol2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotPrmNomEol_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, MotCtrlPrmEstimn_CODE) GetMotPrmNomEol_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotBackEmfConNom_Arg, P2VAR(float32, AUTOMATIC, RTE_MOTCTRLPRMESTIMN_APPL_VAR) MotRNom_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotPrmNomEol_Oper (returns application error)
 *********************************************************************************************************************/

	/* REQ: SF102A #83 I */ 
 
	*MotBackEmfConNom_Arg  =  Rte_Pim_MotPrmNom()->MotBackEmfConNom;
	*MotRNom_Arg   =  Rte_Pim_MotPrmNom()->MotRNom;
	
	return RTE_E_OK;
	
	/* ENDREQ: SF102A #83 */ 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfConEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotREstimd_Val(float32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotPrmNom_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotPrmNom_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnInit1
 *********************************************************************************************************************/

 	 
	VAR(NvM_RequestResultType,  AUTOMATIC)  MotPrmNomErrSts_Cnt_T_enum;
	 
	 
	/* REQ: SF102A #77 I */  
	 
	/* Write module o/p */
	(void) Rte_Write_MotInduDaxEstimd_Val( Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val() ); 
	(void) Rte_Write_MotInduQaxEstimd_Val( Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val() );
	
	
	(void) Rte_Call_MotPrmNom_GetErrorStatus( &MotPrmNomErrSts_Cnt_T_enum );
	
	
	/* NVM RAM shadow (PIM) is okay to use */		
	/* Write module o/p */
	
	if( MotPrmNomErrSts_Cnt_T_enum != NVM_REQ_OK )
	{
		/* NVM RAM shadow (PIM) is NOT okay to use */
		
		/* Write module o/p */
		Rte_Pim_MotPrmNom()->MotBackEmfConNom = Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val();
		Rte_Pim_MotPrmNom()->MotRNom = Rte_Prm_MotCtrlPrmEstimnMotRNom_Val();
		
		(void) Rte_Call_MotPrmNom_SetRamBlockStatus( TRUE );
		  
	}
	(void) Rte_Write_MotBackEmfConEstimd_Val( Rte_Pim_MotPrmNom()->MotBackEmfConNom );  
	(void) Rte_Write_MotREstimd_Val( Rte_Pim_MotPrmNom()->MotRNom );
	/* ENDREQ: SF102A #77 */ 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotBackEmfConEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduDaxEstimdIvs_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimd_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotInduQaxEstimdIvs_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   float32 Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer1
 *********************************************************************************************************************/

	/* REQ: SF102A #64 I */ 
 
 	/* Temporary variables for module i/p */
	VAR(boolean,   AUTOMATIC)  IvtrLoaMtgtnEna_Cnt_T_logl;
	VAR(boolean,   AUTOMATIC)  DualEcuFltMtgtnEna_Uls_T_logl;
	VAR(float32,   AUTOMATIC)  MotCurrDaxCmd_Ampr_T_f32;
	VAR(float32,   AUTOMATIC)  MotCurrQaxCmd_Ampr_T_f32;
    VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
	
	/* Temporary variables for module internal */
	VAR(u9p7,      AUTOMATIC)  MotCurrAbsDax_Ampr_T_u9p7;
	VAR(u9p7,      AUTOMATIC)  MotCurrAbsQax_Ampr_T_u9p7;
	VAR(float32,   AUTOMATIC)  MotBackEmfConEstimdSatnSclFac_Uls_T_f32; 
	VAR(float32,   AUTOMATIC)  MotBackEmfConEstimdPreLmt_VoltPerMotRadPerSec_T_f32; 
	VAR(float32,   AUTOMATIC)  MotKeEstimd_VoltPerMotRadPerSec_T_f32; 
	VAR(u2p14,     AUTOMATIC)  MotInduEstimdSatnSclFacQax_Uls_T_u2p14;
	VAR(float32,   AUTOMATIC)  MotInduEstimdSatnSclFacQax_Uls_T_f32; 
	VAR(float32,   AUTOMATIC)  MotInduEstimdPreLmtQax_Henry_T_f32;  
	VAR(float32,   AUTOMATIC)  MotInduQaxEstimd_Henry_T_f32; 
	VAR(u2p14,     AUTOMATIC)  MotInduEstimdSatnSclFacDax_Uls_T_u2p14;
	VAR(float32,   AUTOMATIC)  MotInduEstimdSatnSclFacDax_Uls_T_f32; 
	VAR(float32,   AUTOMATIC)  MotInduEstimdPreLmtDax_Henry_T_f32;  
	VAR(float32,   AUTOMATIC)  MotInduDaxEstimd_Henry_T_f32; 
	VAR(float32,   AUTOMATIC)  MotInduQaxEstimdIvs_IvsHenry_T_f32;
	VAR(float32,   AUTOMATIC)  MotInduDaxEstimdIvs_IvsHenry_T_f32;
	
	
	/* Read Module inputs */
	
	(void) Rte_Read_DualEcuFltMtgtnEna_Logl( &DualEcuFltMtgtnEna_Uls_T_logl);
	(void) Rte_Read_MotCurrDaxCmd_Val( &MotCurrDaxCmd_Ampr_T_f32 ); /* REQ: SF102A #36 I */ /* REQ: SF102A #72 I */ 
	(void) Rte_Read_MotCurrQaxCmd_Val( &MotCurrQaxCmd_Ampr_T_f32 ); /* REQ: SF102A #27 I */ /* REQ: SF102A #72 I */
	(void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);	

	
	/*** Start of Decoder ***/
	
	if((MotAndThermProtnLoaMod_Cnt_T_u08 & BITMASK2_CNT_U08) == BITMASK2_CNT_U08)
	{
	    IvtrLoaMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
	    IvtrLoaMtgtnEna_Cnt_T_logl = FALSE;
	}
	
	/*** End of Decoder ***/
	/* REQ: SF102A #50 I */ 
	/* REQ: SF102A #53 I */ 
	/* REQ: SF102A #56 I */ 
	MotCurrAbsDax_Ampr_T_u9p7 = FloatToFixd_u16_f32( Abslt_f32_f32(MotCurrDaxCmd_Ampr_T_f32), 
													 NXTRFIXDPT_FLOATTOP7_ULS_F32 );
	MotCurrAbsQax_Ampr_T_u9p7 = FloatToFixd_u16_f32( Abslt_f32_f32(MotCurrQaxCmd_Ampr_T_f32),
												     NXTRFIXDPT_FLOATTOP7_ULS_F32 );
	
	/* ENDREQ: SF102A #50 */ 
	/* ENDREQ: SF102A #53 */ 
	/* ENDREQ: SF102A #56 */ 
	
	
	
	
	/* REQ: SF102A #50 I */ 
	/* REQ: SF102A #51 I */ 
	/* REQ: SF102A #58 I */ 
	/* REQ: SF102A #77 I */ 
	/* REQ: SF102A #97 I */ 
	/* REQ: SF102A #98 I */ 
	/*** ------------------- START: Ke_Satn -------------------------------------- ***/
	
	MotBackEmfConEstimdSatnSclFac_Uls_T_f32 = FixdToFloat_f32_u16(  
												LnrIntrpn_u16_u16VariXu16VariY( 
															PrmMotCtrlPrmEstimnMotBackEmfConSatnX,
															PrmMotCtrlPrmEstimnMotBackEmfConSatnY,
															(uint16)TblSize_m( PrmMotCtrlPrmEstimnMotBackEmfConSatnX ),  
															MotCurrAbsQax_Ampr_T_u9p7 
																			  ),
												NXTRFIXDPT_P14TOFLOAT_ULS_F32 
												              );	
															  
	if( (IvtrLoaMtgtnEna_Cnt_T_logl == TRUE) || (DualEcuFltMtgtnEna_Uls_T_logl == TRUE) )
	{
		MotBackEmfConEstimdSatnSclFac_Uls_T_f32 = 1.0F - ( Rte_Prm_MotCtrlPrmEstimnMotBackEmfConSatnScaIvtrLoaMtgtn_Val()  
		                                                   * (1.0F - MotBackEmfConEstimdSatnSclFac_Uls_T_f32) );
	}
	
	
	*Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdSatnSca() = MotBackEmfConEstimdSatnSclFac_Uls_T_f32;
	
	MotBackEmfConEstimdPreLmt_VoltPerMotRadPerSec_T_f32 = MotBackEmfConEstimdSatnSclFac_Uls_T_f32 * Rte_IrvRead_MotCtrlPrmEstimnPer1_MotBackEmfConFf();
	
	*Rte_Pim_dMotCtrlPrmEstimnMotBackEmfConEstimdPreLim() = MotBackEmfConEstimdPreLmt_VoltPerMotRadPerSec_T_f32;
	
	MotKeEstimd_VoltPerMotRadPerSec_T_f32 = Lim_f32( MotBackEmfConEstimdPreLmt_VoltPerMotRadPerSec_T_f32,
													 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val(),
													 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val() );
	

		
	/* Write module o/p */
	(void) Rte_Write_MotBackEmfConEstimd_Val( MotKeEstimd_VoltPerMotRadPerSec_T_f32 ); 	/* REQ: SF102A #40 I */ 

	
	/*** ------------------- END  : Ke_Satn -------------------------------------- ***/
	/* ENDREQ: SF102A #50 */ 
	/* ENDREQ: SF102A #51 */
	/* ENDREQ: SF102A #58 */
	/* ENDREQ: SF102A #77 */
	/* ENDREQ: SF102A #97 */
	/* ENDREQ: SF102A #98 */
	
	
	
	
	
	/* REQ: SF102A #53 I */ 
	/* REQ: SF102A #60 I */ 
	/* REQ: SF102A #77 I */ 
	/* REQ: SF102A #55 I */ 
	/* REQ: SF102A #89 I */ 
	/* REQ: SF102A #91 I */ 
	/*** ------------------- START: Indu_Satn_Qax ------------------------------- ***/
	
	MotInduEstimdSatnSclFacQax_Uls_T_u2p14 = BilnrIntrpnWithRound_u16_u16CmnXu16MplY( 
													MotCurrAbsDax_Ampr_T_u9p7,
													MotCurrAbsQax_Ampr_T_u9p7, 
													PrmMotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln, 
													(uint16)TblSize_m( PrmMotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln ), 
													PrmMotCtrlPrmEstimnMotCurrQaxInduSatnX, 
													(P2CONST(uint16, AUTOMATIC, MotCtrlPrmEstimn_CONST))PrmMotCtrlPrmEstimnMotInduQaxSatnScaY,  
													(uint16)TblSize_m( PrmMotCtrlPrmEstimnMotCurrQaxInduSatnX ) 
																				 ); 
	
	MotInduEstimdSatnSclFacQax_Uls_T_f32 = FixdToFloat_f32_u16( MotInduEstimdSatnSclFacQax_Uls_T_u2p14, 
															 NXTRFIXDPT_P14TOFLOAT_ULS_F32 );
															 
	*Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaQax() = MotInduEstimdSatnSclFacQax_Uls_T_f32;
	
	if( (IvtrLoaMtgtnEna_Cnt_T_logl == TRUE) || (DualEcuFltMtgtnEna_Uls_T_logl == TRUE))
	{
		MotInduEstimdPreLmtQax_Henry_T_f32 = Rte_Prm_MotCtrlPrmEstimnMotInduQaxIvtrLoaMtgtn_Val() * MotInduEstimdSatnSclFacQax_Uls_T_f32;
	}
	else
	{
		MotInduEstimdPreLmtQax_Henry_T_f32 = Rte_Prm_MotCtrlPrmEstimnMotInduQaxNom_Val() * MotInduEstimdSatnSclFacQax_Uls_T_f32;
	}
	
	
	*Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimQax() = MotInduEstimdPreLmtQax_Henry_T_f32;
	
	MotInduQaxEstimd_Henry_T_f32 = Lim_f32( MotInduEstimdPreLmtQax_Henry_T_f32,
										    Rte_Prm_MotCtrlPrmEstimnMotInduQaxLoLim_Val(),
											Rte_Prm_MotCtrlPrmEstimnMotInduQaxHiLim_Val() );
											
	MotInduQaxEstimdIvs_IvsHenry_T_f32 = Lim_f32( (1.0F/MotInduQaxEstimd_Henry_T_f32),
												   MOTINDUIVSLOLIM_IVSHENRY_F32,
												   MOTINDUIVSHILIM_IVSHENRY_F32 );
											
	/* Write module o/p */
	(void) Rte_Write_MotInduQaxEstimd_Val( MotInduQaxEstimd_Henry_T_f32 ); 	/* REQ: SF102A #41 I */ 
	(void) Rte_Write_MotInduQaxEstimdIvs_Val( MotInduQaxEstimdIvs_IvsHenry_T_f32 );
	
	/*** ------------------- END  : Indu_Satn_Qax ------------------------------- ***/
	/* ENDREQ: SF102A #53 */ 
	/* ENDREQ: SF102A #60 */
	/* ENDREQ: SF102A #77 */
	/* ENDREQ: SF102A #55 */
	/* ENDREQ: SF102A #89 */
	/* ENDREQ: SF102A #91 */
	
	
	
	
	
	/* REQ: SF102A #55 I */ 
	/* REQ: SF102A #56 I */ 
	/* REQ: SF102A #60 I */ 
	/* REQ: SF102A #77 I */ 
	/* REQ: SF102A #90 I */
	/* REQ: SF102A #92 I */
	/*** ------------------- START: Indu_Satn_Dax ------------------------------- ***/
	       
	MotInduEstimdSatnSclFacDax_Uls_T_u2p14 = BilnrIntrpnWithRound_u16_u16CmnXu16MplY( 
													MotCurrAbsDax_Ampr_T_u9p7,
													MotCurrAbsQax_Ampr_T_u9p7, 
													PrmMotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln, 
													(uint16)TblSize_m( PrmMotCtrlPrmEstimnMotCurrDaxInduSatnBilnrSeln ), 
													PrmMotCtrlPrmEstimnMotCurrQaxInduSatnX, 
													(P2CONST(uint16, AUTOMATIC, MotCtrlPrmEstimn_CONST))PrmMotCtrlPrmEstimnMotInduDaxSatnScaY,  
													(uint16)TblSize_m( PrmMotCtrlPrmEstimnMotCurrQaxInduSatnX ) 
																				 ); 
	
	MotInduEstimdSatnSclFacDax_Uls_T_f32 = FixdToFloat_f32_u16( MotInduEstimdSatnSclFacDax_Uls_T_u2p14, 
															 NXTRFIXDPT_P14TOFLOAT_ULS_F32 );
			
	*Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdSatnScaDax() = MotInduEstimdSatnSclFacDax_Uls_T_f32;
	   
	   
	if( (IvtrLoaMtgtnEna_Cnt_T_logl == TRUE) || (DualEcuFltMtgtnEna_Uls_T_logl == TRUE) )
	{
		MotInduEstimdPreLmtDax_Henry_T_f32 = Rte_Prm_MotCtrlPrmEstimnMotInduDaxIvtrLoaMtgtn_Val() * MotInduEstimdSatnSclFacDax_Uls_T_f32;
	}
	else
	{
		MotInduEstimdPreLmtDax_Henry_T_f32 = Rte_Prm_MotCtrlPrmEstimnMotInduDaxNom_Val() * MotInduEstimdSatnSclFacDax_Uls_T_f32;
	}
	
	
	*Rte_Pim_dMotCtrlPrmEstimnMotInduEstimdPreLimDax() = MotInduEstimdPreLmtDax_Henry_T_f32;
	
	MotInduDaxEstimd_Henry_T_f32 = Lim_f32( MotInduEstimdPreLmtDax_Henry_T_f32,
										    Rte_Prm_MotCtrlPrmEstimnMotInduDaxLoLim_Val(),
											Rte_Prm_MotCtrlPrmEstimnMotInduDaxHiLim_Val() );
											
	MotInduDaxEstimdIvs_IvsHenry_T_f32 = Lim_f32( (1.0F/MotInduDaxEstimd_Henry_T_f32),
												   MOTINDUIVSLOLIM_IVSHENRY_F32,
												   MOTINDUIVSHILIM_IVSHENRY_F32 );
											
	/* Write module o/p */  
	(void) Rte_Write_MotInduDaxEstimd_Val( MotInduDaxEstimd_Henry_T_f32 ); 	/* REQ: SF102A #42 I */
	(void) Rte_Write_MotInduDaxEstimdIvs_Val( MotInduDaxEstimdIvs_IvsHenry_T_f32 );
		
	/*** ------------------- END  : Indu_Satn_Dax ------------------------------- ***/
	/* ENDREQ: SF102A #55 */ 
	/* ENDREQ: SF102A #56 */
	/* ENDREQ: SF102A #60 */
	/* ENDREQ: SF102A #77 */
	/* ENDREQ: SF102A #90 */
	/* ENDREQ: SF102A #92 */
	


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlPrmEstimnPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotFetT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotMagT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotWidgT_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotREstimd_Val(float32 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, MotCtrlPrmEstimn_CODE) MotCtrlPrmEstimnPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotCtrlPrmEstimnPer2
 *********************************************************************************************************************/

	/* REQ: SF102A #63 I */ 

	/* Temporary variables for module i/p */
	VAR(float32,   AUTOMATIC)  MotFetT_DegCgrd_T_f32;
	VAR(float32,   AUTOMATIC)  MotMagT_DegCgrd_T_f32;
	VAR(float32,   AUTOMATIC)  MotWidgT_DegCgrd_T_f32;
	
	/* Temporary variables for module internal */
	VAR(float32,   AUTOMATIC)  MotRFfEstimd_Ohm_T_f32; 
	VAR(float32,   AUTOMATIC)  FetRFfEstimd_Ohm_T_f32; 
	VAR(float32,   AUTOMATIC)  REstimdPreLmt_Ohm_T_f32;
	VAR(float32,   AUTOMATIC)  MotREstimd_Ohm_T_f32;
	VAR(float32,   AUTOMATIC)  MotKeFf_VoltPerMotRadPerSec_T_f32; 
	
	
	/* Read Module inputs */
	(void) Rte_Read_MotFetT_Val( &MotFetT_DegCgrd_T_f32 );   /* REQ: SF102A #39 I */ 
	(void) Rte_Read_MotMagT_Val( &MotMagT_DegCgrd_T_f32 );   /* REQ: SF102A #37 I */ 
	(void) Rte_Read_MotWidgT_Val( &MotWidgT_DegCgrd_T_f32 ); /* REQ: SF102A #38 I */ 
	
	
	
	
	/* REQ: SF102A #77 I */ 
	/* REQ: SF102A #78 I */ 
	/* REQ: SF102A #79 I */ 
	/* REQ: SF102A #80 I */ 
	/* REQ: SF102A #59 I */  
	/*** ------------------- START: Estimate_Motor_Resitance --------------------- ***/
	
	MotRFfEstimd_Ohm_T_f32 = ( ( Lim_f32( MotWidgT_DegCgrd_T_f32, 
									   MOTWIDGTESTLOLIM_DEGCGRD_F32, 
									   MOTWIDGTESTHILIM_DEGCGRD_F32 ) - Rte_Prm_MotCtrlPrmEstimnTNom_Val() )
							* Rte_Prm_MotCtrlPrmEstimnMotWidgThermCoeff_Val()
							* Rte_Pim_MotPrmNom()->MotRNom )
						  + Rte_Pim_MotPrmNom()->MotRNom ;
								
	*Rte_Pim_dMotCtrlPrmEstimnMotRFfEstimd() = MotRFfEstimd_Ohm_T_f32;  
	
	FetRFfEstimd_Ohm_T_f32 = ( ( Lim_f32( MotFetT_DegCgrd_T_f32, 
									   FETTESTLOLIM_DEGCGRD_F32, 
									   FETTESTHILIM_DEGCGRD_F32 ) - Rte_Prm_MotCtrlPrmEstimnTNom_Val() )
							* Rte_Prm_MotCtrlPrmEstimnFetThermCoeff_Val()
							* Rte_Prm_MotCtrlPrmEstimnFetRNom_Val() )
						  + Rte_Prm_MotCtrlPrmEstimnFetRNom_Val() ;
	*Rte_Pim_dMotCtrlPrmEstimnFetRFfEstimd() = FetRFfEstimd_Ohm_T_f32; 
	
	
	REstimdPreLmt_Ohm_T_f32 = MotRFfEstimd_Ohm_T_f32 + FetRFfEstimd_Ohm_T_f32;
	
	*Rte_Pim_dMotCtrlPrmEstimnCtrlrREstimdPreLim() = REstimdPreLmt_Ohm_T_f32;
	
	
	MotREstimd_Ohm_T_f32 = Lim_f32( REstimdPreLmt_Ohm_T_f32, 
									Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val(), 
									Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val() );
									
	/* Write module o/p */
	(void) Rte_Write_MotREstimd_Val( MotREstimd_Ohm_T_f32 ); /* REQ: SF102A #28 I */ 
	
	/*** ------------------- END  : Estimate_Motor_Resitance --------------------- ***/
	/* ENDREQ: SF102A #77 */
	/* ENDREQ: SF102A #78 */
	/* ENDREQ: SF102A #79 */
	/* ENDREQ: SF102A #80 */
	/* ENDREQ: SF102A #59 */
	
	
	
	
	
	/* REQ: SF102A #77 I */ 
	/* REQ: SF102A #78 I */ 
	/* REQ: SF102A #79 I */  
	/*** ------------------- START: Estimate_Motor_Ke ---------------------------- ***/
	
	MotKeFf_VoltPerMotRadPerSec_T_f32 = ( ( Lim_f32( MotMagT_DegCgrd_T_f32, 
													 MAGNETTESTLOLIM_DEGCGRD_F32, 
													 MAGNETTESTHILIM_DEGCGRD_F32 ) - Rte_Prm_MotCtrlPrmEstimnTNom_Val() )
										  * Rte_Prm_MotCtrlPrmEstimnMagThermCoeff_Val()
										  * Rte_Pim_MotPrmNom()->MotBackEmfConNom )
										+ Rte_Pim_MotPrmNom()->MotBackEmfConNom ;
										
	MotKeFf_VoltPerMotRadPerSec_T_f32 = Lim_f32( MotKeFf_VoltPerMotRadPerSec_T_f32, 
												 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val(),
												 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val() );
										
	(void)Rte_IrvWrite_MotCtrlPrmEstimnPer2_MotBackEmfConFf( MotKeFf_VoltPerMotRadPerSec_T_f32 );  
	
	/*** ------------------- END  : Estimate_Motor_Ke ---------------------------- ***/
	/* ENDREQ: SF102A #77 */
	/* ENDREQ: SF102A #78 */
	/* ENDREQ: SF102A #79 */
	
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotPrmNomEol_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotPrmNomEol>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotPrmNom_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SetMotPrmNomEol_Oper(float32 MotBackEmfConNom_Arg, float32 MotRNom_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SetMotPrmNomEol2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotPrmNomEol_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, MotCtrlPrmEstimn_CODE) SetMotPrmNomEol_Oper(float32 MotBackEmfConNom_Arg, float32 MotRNom_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotPrmNomEol_Oper (returns application error)
 *********************************************************************************************************************/

	/* REQ: SF102A #81 I */ 
	/* REQ: SF102A #58 I */ 
	/* REQ: SF102A #59 I */ 
	/* REQ: SF102A #77 I */ 
	/* REQ: SF102A #32 I */ 
 
	Rte_Pim_MotPrmNom()->MotBackEmfConNom = Lim_f32( MotBackEmfConNom_Arg, 
											 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConLoLim_Val(), 
											 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConHiLim_Val() );
											 
	Rte_Pim_MotPrmNom()->MotRNom  = Lim_f32( MotRNom_Arg, 
											 Rte_Prm_MotCtrlPrmEstimnMotRLoLim_Val(), 
											 Rte_Prm_MotCtrlPrmEstimnMotRHiLim_Val() );
											 
											 
	(void) Rte_Call_MotPrmNom_SetRamBlockStatus( TRUE );
	
	return RTE_E_OK;
	
	/* ENDREQ: SF102A #81 */  
	/* ENDREQ: SF102A #58 */ 
	/* ENDREQ: SF102A #59 */ 
	/* ENDREQ: SF102A #77 */ 
	/* ENDREQ: SF102A #32 */ 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotCtrlPrmEstimn_STOP_SEC_CODE
#include "MotCtrlPrmEstimn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
