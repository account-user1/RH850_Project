/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DualCtrlrOutpMgr.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF062B_DualCtrlrOutpMgr_Impl/tools/Component.dpa
 *     SW-C Type:  DualCtrlrOutpMgr
 *  Generated at:  Mon Oct 23 08:56:44 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DualCtrlrOutpMgr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DualCtrlrOutpMgr.c
* Module Description: Implementation of Dual Controller Output Manager - SF062B
* Project           : CBD 
* Author            : Shawn Penning
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz3541 %
*------------------------------------------------------------------------------------------------------------------------
* Date       Rev     Author    Change Description                                                   	         SCR #
* -------   -------  --------  ---------------------------------------------------------------------------    -----------
* 10/18/17   1       SPP       Initial Version                                                		          EA4#15146
*------------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/
/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

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
 * ImcArbnRxSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * SysSt1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * u10p6
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

#include "Rte_DualCtrlrOutpMgr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
/************************************************ Include Statements *************************************************/
#include "ArchGlbPrm.h"
#include "NxtrMath.h"
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"
#include "ImcArbn.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for function calls: Rte_Read, Rte_Write, 
											  Rte_IrvWrite, Rte_Call_GetRefTmr100MicroSec32bit and Rte_Call_GetTiSpan100MicroSec32bit*/ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


/********************************************* Embedded Local Constants **********************************************/
#define OUTPSCALOWRLIM_ULS_F32                0.0F 
#define OUTPSCAUPPRLIM_ULS_F32                1.0F 
#define BIT0MASK_CNT_U08			        ((uint8)1U)
#define BIT1MASK_CNT_U08			        ((uint8)2U)
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16 ((uint16)10U)

#define PrmDualCtrlrOutpMgrVehSpdRefTblX_u10p6  (*(const Ary1D_u10p6_10 *)	(Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D()))
#define PrmDualCtrlrOutpMgrDiRateTblY_u10p6  (*(const Ary1D_u10p6_10 *)	(Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D()))

/***********Local Functions **********/
static FUNC(void, DualCtrlrOutpMgr_APPL_CODE) ElapsedTimeFlag(VAR(uint16, AUTOMATIC) PrmTmrThd_Cnt_T_u16,
															  VAR(boolean, AUTOMATIC) FltStsFlag1_Cnt_T_logl,
															  P2VAR(boolean, AUTOMATIC, DualCtrlrOutpMgr_APPL_CODE) PimFlag_Cnt_T_logl,
															  P2VAR(uint32, AUTOMATIC, DualCtrlrOutpMgr_APPL_CODE) PimTmr_Cnt_T_u32,
															  VAR(boolean, AUTOMATIC) PimFlgPrev_Cnt_T_logl,
															  P2VAR(boolean, AUTOMATIC, DualCtrlrOutpMgr_APPL_CODE) OutpFlg_Cnt_T_logl);

static FUNC(boolean, DualCtrlrOutpMgr_APPL_CODE) Andoper(VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl,
														 VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEna_Cnt_T_logl);
														 
static FUNC(boolean, DualCtrlrOutpMgr_APPL_CODE) Decoder(VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08);


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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u10p6: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ImcArbnRxSts1: Enumeration of integer in interval [0...255] with enumerators
 *   IMCARBNRXSTS_NODATA (0U)
 *   IMCARBNRXSTS_VLD (1U)
 *   IMCARBNRXSTS_INVLD (2U)
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_u10p6_10: Array with 10 element(s) of type u10p6
 * Ary1D_u9p7_10: Array with 10 element(s) of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_OutpSca(void)
 *   uint32 *Rte_Pim_FltRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_LtchRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_MaxOutpRefTiEna(void)
 *   uint32 *Rte_Pim_NonRecFltRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_RefTiEnaLrng(void)
 *   uint32 *Rte_Pim_SysStRefTiEnaLrng(void)
 *   boolean *Rte_Pim_FltLrngEnaPrev(void)
 *   boolean *Rte_Pim_FltStsPrev(void)
 *   boolean *Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev(void)
 *   boolean *Rte_Pim_LtchSysStPrev(void)
 *   boolean *Rte_Pim_MaxOutpTmrCmpl(void)
 *   boolean *Rte_Pim_NonRecFltEnaPrev(void)
 *   boolean *Rte_Pim_PrevLtch(void)
 *   boolean *Rte_Pim_PrevLtchNonRecFlt(void)
 *   boolean *Rte_Pim_SysStLrngEnaPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val(void)
 *   float32 Rte_Prm_DualCtrlrOutpMgrEnaRate_Val(void)
 *   float32 Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val(void)
 *   float32 Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrThdTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val(void)
 *   u10p6 *Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_10
 *   u9p7 *Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_10
 *
 *********************************************************************************************************************/


#define DualCtrlrOutpMgr_START_SEC_CODE
#include "DualCtrlrOutpMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DualCtrlrOutpMgrInit1
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
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DualCtrlrOutpMgrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DualCtrlrOutpMgrInit1
 *********************************************************************************************************************/
	VAR(uint32, AUTOMATIC) RefTmrTi_Cnt_T_u32;

    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&RefTmrTi_Cnt_T_u32);
	*Rte_Pim_LtchRefTiEnaLrng() = RefTmrTi_Cnt_T_u32;
	*Rte_Pim_RefTiEnaLrng()= RefTmrTi_Cnt_T_u32;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DualCtrlrOutpMgrPer1
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
 *   Std_ReturnType Rte_Read_ImcSysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_ImcSysStVld_Val(ImcArbnRxSts1 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DualEcuFltMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DualEcuFltMtgtnSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_DualEcuMotCtrlMtgtnEna_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt(void)
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(void)
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna(void)
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DualCtrlrOutpMgrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DualCtrlrOutpMgrPer1
 *********************************************************************************************************************/

 	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) DualEcuFltMtgtnSca_Uls_T_f32;

	VAR(float32, AUTOMATIC) DualCtrlrOutpMgrDiRateTblY_Uls_T_f32;

    VAR(uint8, AUTOMATIC)MotAndThermProtnLoaMod_Cnt_T_u08;	
	VAR(uint32, AUTOMATIC) TiSpan1_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) TiSpan2_Cnt_T_u32;
	
	VAR(uint16, AUTOMATIC) VehSpd_Kph_T_u9p7;
	
	VAR(ImcArbnRxSts1, AUTOMATIC) ImcSysStVld_Cnt_T_enum;
	
	VAR(SysSt1, AUTOMATIC) ImcSysSt_Cnt_T_enum;
	VAR(SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;
	
	VAR(boolean, AUTOMATIC) DualEcuFltMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) DualEcuMotCtrlMtgtnEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) OutpSca_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) NonRecFltActv_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MaxOutpCmpl_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ActvFlt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FltStsFlag1_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) PimFlgPrev_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ImcDiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ImcDiagcStsNonRcvrlReqDiFltPrsntVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LoaMod_Cnt_T_logl;
	
	 
	/*** Read RTE inputs ***/ 	
	(void)Rte_Read_ImcSysSt_Val(&ImcSysSt_Cnt_T_enum);
	(void)Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);
	(void)Rte_Read_ImcSysStVld_Val(&ImcSysStVld_Cnt_T_enum);
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
	(void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);	
	ImcDualMotCtrlMtgtnEna_Cnt_T_logl 					= Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna();
	ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl 				= Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld();
	ImcDiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl 		= Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt();
	ImcDiagcStsNonRcvrlReqDiFltPrsntVld_Cnt_T_logl 		= Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld();
	
	
	
	/*** Start of IMC connection established at startup ***/
	if((ImcSysStVld_Cnt_T_enum == IMCARBNRXSTS_VLD) || (*Rte_Pim_PrevLtch() == TRUE))
	{
		/*** Start of IMC Connection valid ***/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LtchRefTiEnaLrng());
		/*** Start of Non-Recoverable Fault Present ***/
		if( (ImcDiagcStsNonRcvrlReqDiFltPrsntVld_Cnt_T_logl == TRUE) && 
			(ImcDiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl == TRUE) )
		{
			FltStsFlag1_Cnt_T_logl = TRUE;
		}
		else
		{
			FltStsFlag1_Cnt_T_logl = FALSE;
		}
		/* Priority 1 Pim set */
		PimFlgPrev_Cnt_T_logl  = *Rte_Pim_PrevLtchNonRecFlt();
		/* ElapsedTime2 */
		ElapsedTimeFlag(Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val(),
						FltStsFlag1_Cnt_T_logl,
						Rte_Pim_NonRecFltEnaPrev(),
						Rte_Pim_NonRecFltRefTiEnaLrng(),
						PimFlgPrev_Cnt_T_logl,
						&NonRecFltActv_Cnt_T_logl);	
		/* Priority 2 Pim set */
		*Rte_Pim_PrevLtchNonRecFlt() = NonRecFltActv_Cnt_T_logl;
		/*** End of Non-Recoverable Fault Present ***/
		/* Set IMCSysStFlt flag before entering System State Handling with Latch */
		if(ImcSysSt_Cnt_T_enum == SYSST_DI)
	
		{
			FltStsFlag1_Cnt_T_logl = TRUE;
		}
		else
		{
			FltStsFlag1_Cnt_T_logl = FALSE;
		}
		/*** Start of System State Handling with Latch ***/	
        /* Priority 1 - read the Pim (no Priority 2) */		
		PimFlgPrev_Cnt_T_logl  = *Rte_Pim_LtchSysStPrev();
		/* ElapsedTime1 */
		ElapsedTimeFlag(Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val(),
						FltStsFlag1_Cnt_T_logl,
						Rte_Pim_SysStLrngEnaPrev(),
						Rte_Pim_SysStRefTiEnaLrng(),
						PimFlgPrev_Cnt_T_logl,
						&OutpSca_Cnt_T_logl);
		/*** End of System State Handling with Latch ***/
		
		if((NonRecFltActv_Cnt_T_logl == TRUE) && (OutpSca_Cnt_T_logl == TRUE) && (SysSt_Cnt_T_enum != SYSST_DI))
		/*** ActiveRecFault ***/
		{
			ActvFlt_Cnt_T_logl = TRUE;
		}
		/*** ActiveFault ***/
		else
		{
			ActvFlt_Cnt_T_logl = FALSE;
		}
				
		*Rte_Pim_LtchSysStPrev() = ActvFlt_Cnt_T_logl;
					
		/*** Start of IMC system down ***/
		if(ActvFlt_Cnt_T_logl == TRUE)
		{
			/* ImcDwn in model is DualEcuFltMtgnEna_Cnt_T_logl in code. */
			DualEcuFltMtgtnEna_Cnt_T_logl = TRUE;
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_RefTiEnaLrng(), &TiSpan1_Cnt_T_u32);
            /* Priority 1 - MaxOutpTmrCmpl */
			if ((TiSpan1_Cnt_T_u32 >= (((uint32)Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val()) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))) && 
				(*Rte_Pim_MaxOutpTmrCmpl() != TRUE) )
			/*** Ramp up to Maximum scale and hold  ***/
			{
				/* DualEcuFltMtgtnSca_Uls_T_f32 is OutpSca in the model */
				DualEcuFltMtgtnSca_Uls_T_f32 = Min_f32( (*Rte_Pim_OutpSca() + (Rte_Prm_DualCtrlrOutpMgrEnaRate_Val()*ARCHGLBPRM_2MILLISEC_SEC_F32)), 
														(Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val()) );
				PimFlgPrev_Cnt_T_logl = FALSE;
				if(DualEcuFltMtgtnSca_Uls_T_f32 >= Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val())
				{
					FltStsFlag1_Cnt_T_logl = TRUE;
				}
				else
				{
					FltStsFlag1_Cnt_T_logl = FALSE;
				}
				/* ElapsedTime1 */
				ElapsedTimeFlag(Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val(),
								FltStsFlag1_Cnt_T_logl,
								Rte_Pim_FltStsPrev(),
								Rte_Pim_MaxOutpRefTiEna(),
								PimFlgPrev_Cnt_T_logl,
								&MaxOutpCmpl_Cnt_T_logl);
				*Rte_Pim_MaxOutpTmrCmpl() = MaxOutpCmpl_Cnt_T_logl;
			}
			/*** RampDown output to lower scale ***/
			else if(*Rte_Pim_MaxOutpTmrCmpl() == TRUE)
			{
				VehSpd_Kph_T_u9p7 =  FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
				DualCtrlrOutpMgrDiRateTblY_Uls_T_f32 = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmDualCtrlrOutpMgrVehSpdRefTblX_u10p6,
																										  PrmDualCtrlrOutpMgrDiRateTblY_u10p6,
																										  (uint16)TblSize_m(PrmDualCtrlrOutpMgrVehSpdRefTblX_u10p6),
																										  VehSpd_Kph_T_u9p7), NXTRFIXDPT_P6TOFLOAT_ULS_F32);
				/* DualEcuFltMtgtnSca_Uls_T_f32 is OutpSca in the model */
				DualEcuFltMtgtnSca_Uls_T_f32 = Max_f32( (*Rte_Pim_OutpSca() - (DualCtrlrOutpMgrDiRateTblY_Uls_T_f32*ARCHGLBPRM_2MILLISEC_SEC_F32)), 
														(Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val()) );
			}
			/*** Flush out existing Tq- Zero scale ***/
			else
			{
				DualEcuFltMtgtnSca_Uls_T_f32 = 0.0F;
			}
		}
		/*** End of IMC system down ***/
	
		/*** Start of Normal Operating Conditions ***/
		else
		{
			/* OutpSca in the model is DualEcuFltMtgtnSca_Uls_T_f32  */
			DualEcuFltMtgtnSca_Uls_T_f32 = Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val();
			/* ImcDwn in model is DualEcuFltMtgtnEna_Cnt_T_logl in code. */
			DualEcuFltMtgtnEna_Cnt_T_logl = FALSE;
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_RefTiEnaLrng());
		}
		/*** End of Normal Operating Conditions ***/
		/* OutpSca in the model is DualEcuFltMtgtnSca_Uls_T_f32 in code and is also MotTqOutpSca in model  */		
		*Rte_Pim_OutpSca() = DualEcuFltMtgtnSca_Uls_T_f32;
		
		if( (DualEcuFltMtgtnEna_Cnt_T_logl == TRUE) || (*Rte_Pim_PrevLtch() == TRUE) )
		{
			DualEcuFltMtgtnEna_Cnt_T_logl = TRUE;
		}
		/*** End of IMC Connection valid ***/
	
	}
	else
	{   
        /*** Start of IMC Connection invalid with timer logic implemented ***/
        DualEcuFltMtgtnSca_Uls_T_f32 = Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val(); 

		if(ImcSysStVld_Cnt_T_enum == IMCARBNRXSTS_INVLD)
		{
        /*** ImcDwnforInvld ***/
		    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LtchRefTiEnaLrng(), &TiSpan2_Cnt_T_u32);

		    if(TiSpan2_Cnt_T_u32 >= (Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val() * ((uint32)(CNVMILLISECTOCNT_CNTPERMILLISEC_U16))))
			/* IMC_down in model is DualEcuFltMtgtnEna_Cnt_T_logl */
		    {
		    	DualEcuFltMtgtnEna_Cnt_T_logl = TRUE;
		    }
		    else
		    {
		    	DualEcuFltMtgtnEna_Cnt_T_logl = *Rte_Pim_PrevLtch();
		    }
		/*** End ImcDwnforInvld ***/
		}
		else
		/*** ImcDwnforNoData ***/
		{
			DualEcuFltMtgtnEna_Cnt_T_logl = FALSE;
		}
		/*** End of IMC Connection invalid with timer logic implemented ***/
	}
	/* Priority 2 - Imc_Dwn in model is DualEcuFltMtgtnEna_Cnt_T_logl in code. */
	*Rte_Pim_PrevLtch() = DualEcuFltMtgtnEna_Cnt_T_logl;
	/*** End of IMC connection established at startup ***/

	FltStsFlag1_Cnt_T_logl = Andoper(ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl, ImcDualMotCtrlMtgtnEna_Cnt_T_logl);
	/*** Start of Voltage Mode Transition with Latch Logic ***/
	/* Priority 1 - Get Prev value from Pim */
	PimFlgPrev_Cnt_T_logl  = *Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev();
	ElapsedTimeFlag(Rte_Prm_DualCtrlrOutpMgrThdTmr_Val(),
					FltStsFlag1_Cnt_T_logl,
					Rte_Pim_FltLrngEnaPrev(),
					Rte_Pim_FltRefTiEnaLrng(),
					PimFlgPrev_Cnt_T_logl,
					&ImcDualMotCtrlMtgtnEna_Cnt_T_logl);
	/* Priority 2 - Assign returned value to Prev Pim */
	*Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev() = ImcDualMotCtrlMtgtnEna_Cnt_T_logl;
	/*** End of Voltage Mode Transition with Latch Logic ***/
	
	/*** Start of Decoder ***/	
	LoaMod_Cnt_T_logl = Decoder(MotAndThermProtnLoaMod_Cnt_T_u08);
	/*** End of Decoder ***/
		
	if((ImcDualMotCtrlMtgtnEna_Cnt_T_logl == TRUE) || (DualEcuFltMtgtnEna_Cnt_T_logl == TRUE) || (LoaMod_Cnt_T_logl == TRUE))
	{
		DualEcuMotCtrlMtgtnEna_Cnt_T_logl = TRUE;
	}
	else
	{
		DualEcuMotCtrlMtgtnEna_Cnt_T_logl = FALSE;
	}
	
	/*** Range Limit and write RTE outputs ***/ 	
	(void)Rte_Write_DualEcuFltMtgtnEna_Logl(DualEcuFltMtgtnEna_Cnt_T_logl);
	(void)Rte_Write_DualEcuFltMtgtnSca_Val((Lim_f32(DualEcuFltMtgtnSca_Uls_T_f32, OUTPSCALOWRLIM_ULS_F32, OUTPSCAUPPRLIM_ULS_F32)));
	(void)Rte_Write_DualEcuMotCtrlMtgtnEna_Logl(DualEcuMotCtrlMtgtnEna_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DualCtrlrOutpMgrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(boolean data)
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(boolean data)
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(boolean data)
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DualCtrlrOutpMgrPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DualCtrlrOutpMgrPer2
 *********************************************************************************************************************/

 	 VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl = FALSE;
	 VAR(boolean, AUTOMATIC) ImcDiagcStsNonRcvrlReqDiFltPrsntVld_Cnt_T_logl = FALSE;
	 
	 VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEna_Cnt_T_logl = FALSE;
	 VAR(boolean, AUTOMATIC) ImcDiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl = FALSE;
	 	 
	 VAR(ImcArbnRxSts1, AUTOMATIC) ImcDualMotCtrlMtgtnEnaSts_Cnt_T_enum;
	 VAR(ImcArbnRxSts1, AUTOMATIC) ImcDiagcStsNonRcvrlReqDiFltPrsntSts_Cnt_T_enum;
	 
	 VAR(Std_ReturnType, AUTOMATIC) ImcDualMotCtrlMtgtnEnaRtn_Cnt_T_enum;
	 VAR(Std_ReturnType, AUTOMATIC) ImcDiagcStsNonRcvrlReqDiFltPrsntRtn_Cnt_T_enum;
	 
	ImcDualMotCtrlMtgtnEnaRtn_Cnt_T_enum = Rte_Call_GetSigImcData_logl_Oper(IMCARBN_DUALCTRLROUTPMGRDUALECUMOTCTRLMTGTNENA_CNT_U16, 
																	   &ImcDualMotCtrlMtgtnEna_Cnt_T_logl, 
																	   &ImcDualMotCtrlMtgtnEnaSts_Cnt_T_enum);
	if((ImcDualMotCtrlMtgtnEnaSts_Cnt_T_enum == IMCARBNRXSTS_VLD) && (ImcDualMotCtrlMtgtnEnaRtn_Cnt_T_enum != E_NOT_OK))
	{
		ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl = TRUE;
	}
	
	
	ImcDiagcStsNonRcvrlReqDiFltPrsntRtn_Cnt_T_enum = Rte_Call_GetSigImcData_logl_Oper(IMCARBN_DUALCTRLROUTPMGRDIAGCSTSNONRCRVLREQDIFLTPRSNT_CNT_U16, 
																					  &ImcDiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl, 
																					  &ImcDiagcStsNonRcvrlReqDiFltPrsntSts_Cnt_T_enum);
	if((ImcDiagcStsNonRcvrlReqDiFltPrsntSts_Cnt_T_enum == IMCARBNRXSTS_VLD) && (ImcDiagcStsNonRcvrlReqDiFltPrsntRtn_Cnt_T_enum != E_NOT_OK))
	{
		ImcDiagcStsNonRcvrlReqDiFltPrsntVld_Cnt_T_logl = TRUE;
	}
	
	
	(void)Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(ImcDualMotCtrlMtgtnEna_Cnt_T_logl);
	(void)Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl);
	(void)Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(ImcDiagcStsNonRcvrlReqDiFltPrsnt_Cnt_T_logl);
	(void)Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(ImcDiagcStsNonRcvrlReqDiFltPrsntVld_Cnt_T_logl);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DualCtrlrOutpMgr_STOP_SEC_CODE
#include "DualCtrlrOutpMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 /*****************************************************************************************************************
* Name         : ElapsedTimeFlag
* Description  : Implementation of 'ElapsedTimeX' block (X=1,2,3 etc)
* Inputs       : PrmTmrThd_Cnt_T_u16, FltStsFlag1_Cnt_T_logl, PimFlgPrev_Cnt_T_logl.
* Outputs	   : *PimFlag_Cnt_T_logl, *PimTmr_Cnt_T_u32, *OutpFlg_Cnt_T_logl.
* Usage Notes  : None
****************************************************************************************************************/
static FUNC(void, DualCtrlrOutpMgr_APPL_CODE) ElapsedTimeFlag(VAR(uint16, AUTOMATIC) PrmTmrThd_Cnt_T_u16,
															  VAR(boolean, AUTOMATIC) FltStsFlag1_Cnt_T_logl,
															  P2VAR(boolean, AUTOMATIC, DualCtrlrOutpMgr_APPL_CODE) PimFlag_Cnt_T_logl,
															  P2VAR(uint32, AUTOMATIC, DualCtrlrOutpMgr_APPL_CODE) PimTmr_Cnt_T_u32,
															  VAR(boolean, AUTOMATIC) PimFlgPrev_Cnt_T_logl,
															  P2VAR(boolean, AUTOMATIC, DualCtrlrOutpMgr_APPL_CODE) OutpFlg_Cnt_T_logl)
{
	/* ElapsedTime 1 or 2 Start */
	VAR(uint32, AUTOMATIC)	TiSpan1_Cnt_T_u32;

	/* If not true elapsed time = 0. */
	if( FltStsFlag1_Cnt_T_logl == FALSE )
	{
		TiSpan1_Cnt_T_u32 = 0U;
	}
	/* If true and last step not true, elapsed time = 0, get reference time. */
	/* Priority 1 - Check Pims NonRecFltEnaPrev, SysStLrngEnaPrev, FltStsPrev which are passed in separate function calls as PimFlag_Cnt_T_logl. */
	else if(*PimFlag_Cnt_T_logl != TRUE)
	{
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(PimTmr_Cnt_T_u32);
		TiSpan1_Cnt_T_u32 = 0U;
	}
	/* If true and last step is true, calculate elapsed time. */
	else
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*PimTmr_Cnt_T_u32, &TiSpan1_Cnt_T_u32);
	}
	
	/* Priority 2 - Set Pims NonRecFltEnaPrev, SysStLrngEnaPrev, FltStsPrev which are passed in separate function calls as PimFlag_Cnt_T_logl. */
	*PimFlag_Cnt_T_logl = FltStsFlag1_Cnt_T_logl;
/* ElapsedTime 1 or 2 End */

	/* Check ElpdTi compared to Thd or Outp Timers coverted to CntPerMillisec */
	if(TiSpan1_Cnt_T_u32 >= (((uint32)PrmTmrThd_Cnt_T_u16) * ((uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
	{
		*OutpFlg_Cnt_T_logl = TRUE;
	}
	else
	{
		*OutpFlg_Cnt_T_logl = PimFlgPrev_Cnt_T_logl;
	}
}


/*****************************************************************************************************************
* Name         : Andoper
* Description  : Implementation of Andoper to handle cyclomatic complexity.
* Inputs       : ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl, ImcDualMotCtrlMtgtnEna_Cnt_T_logl.
* Outputs	   : FltStsFlag1_Cnt_T_logl.
* Usage Notes  : None
****************************************************************************************************************/
static FUNC(boolean, DualCtrlrOutpMgr_APPL_CODE) Andoper(VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl,
														 VAR(boolean, AUTOMATIC) ImcDualMotCtrlMtgtnEna_Cnt_T_logl)
{
	VAR(boolean, AUTOMATIC) FltStsFlag1_Cnt_T_logl;
	
	if( (ImcDualMotCtrlMtgtnEnaVld_Cnt_T_logl == TRUE) && (ImcDualMotCtrlMtgtnEna_Cnt_T_logl == TRUE) )
	{
		FltStsFlag1_Cnt_T_logl = TRUE;
	}
	else
	{
		FltStsFlag1_Cnt_T_logl = FALSE;
	}
	
	return (FltStsFlag1_Cnt_T_logl);
}



/*****************************************************************************************************************
* Name         : Decoder
* Description  : Implementation of Decoder to reduce path count.
* Inputs       : MotAndThermProtnLoaMod_Cnt_T_u08, LoaMod_Cnt_T_logl.
* Outputs	   : LoaMod_Cnt_T_logl.
* Usage Notes  : None
****************************************************************************************************************/
static FUNC(boolean, DualCtrlrOutpMgr_APPL_CODE) Decoder(VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08)
{
	VAR(boolean, AUTOMATIC) LoaMod_Cnt_T_logl;
	
	if(((MotAndThermProtnLoaMod_Cnt_T_u08 & BIT0MASK_CNT_U08) == BIT0MASK_CNT_U08) || ((MotAndThermProtnLoaMod_Cnt_T_u08 & BIT1MASK_CNT_U08) == BIT1MASK_CNT_U08))
	{
	    LoaMod_Cnt_T_logl = TRUE;
	}
	else
	{
	    LoaMod_Cnt_T_logl = FALSE;
	}
	return (LoaMod_Cnt_T_logl);
}
/*** End of Decoder ***/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
