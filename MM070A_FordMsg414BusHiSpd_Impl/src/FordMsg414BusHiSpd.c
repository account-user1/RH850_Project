/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg414BusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM070A_FordMsg414BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg414BusHiSpd
 *  Generated at:  Tue Apr 17 12:36:28 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg414BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg414BusHiSpd.c
* Module Description: FordMsg414BusHiSpd - MM070A 
* Project           : CBD
* Author            : Sheeja R(TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 11/22/17   1       SR(TATA)  Initial version																EA4#17244
* 04/03/18   2       SNH  	   Added outputs FordVehSteerPinionChksVld and FordVehSteerPinionCntrVld
*							   Removed 1 PIM and added 5 PIMs												EA4#20143
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_FordMsg414BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but no error information is returned.
                                              [GetRefTmr100MicroSec32bit, GetTiSpan100MicroSec32bit] */

#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16			((uint16)10U)
#define EIGHTBITMASK_CNT_U16						((uint16)255U)
#define PINIONAGOFFSMAX_HWDEG_F32					(3353.5F)
#define PINIONAGOFFSMIN_HWDEG_F32					(-3200.0F)
#define PINIONAGOFFSRAWINITVAL_CNT_U16				((uint16)32000U)
#define PINIONAGOFFSRAWMAX_CNT_U16					((uint16)65535U)
#define PINIONAGOFFSRAWMIN_CNT_U16					((uint16)0)
#define PINIONAGOFFSVAL_CNT_U16						((uint16)65533U)
#define PINIONAGOFFS_HWDEG_U16						((uint16)3200U)
#define PINIONOFFSCHKSMAX_CNT_U08					((uint8)255U)
#define PINIONOFFSCHKSMIN_CNT_U08					((uint8)0U)
#define PINIONOFFSCNTMAX_CNT_U08					((uint8)15U)
#define PINIONOFFSCNTMIN_CNT_U08					((uint8)0U)
#define PINIONOFFSSCAGFAC_HWDEGPERCNT_F32			(0.1F)
#define PINIONOFFSSTSRAWMAX_CNT_U08					((uint8)3U)
#define PINIONOFFSSTSRAWMIN_CNT_U08					((uint8)0U)
#define RISHIFT_CNT_U16      						((uint16)8U)


/******************************************** Local Function Prototypes **********************************************/
static FUNC(boolean, FordMsg414BusHiSpd_CODE) FordVehSteerPinionOffsVldCovn(VAR(uint16,AUTOMATIC)FordVehSteerPinionAgOffsRaw_Cnt_T_u16,
																			VAR(Ford_StePinOffst_D_Stat,AUTOMATIC)FordVehSteerPinionOffsSts_Cnt_T_enum,
																			VAR(uint8,AUTOMATIC) FordVehSteerPinionOffsCnt_Cnt_T_u08,
																			VAR(uint8,AUTOMATIC) FordVehSteerPinionOffsChks_Cnt_T_u08,
																			VAR(uint8,AUTOMATIC) CalcFordVehSteerPinionOffsChks_Cnt_T_u08,
																			P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) CntrVldChkFlg_Cnt_T_logl,
																			P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) ChksVldChkFlg_Cnt_T_logl);

static FUNC(void, FordMsg414BusHiSpd_CODE) VldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR)AgOffsVldPassdElpdTi_Cnt_T_logl,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR)AgOffsVldFaildElpdTi_Cnt_T_logl,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR)ChksVldFaildElpdTi_Cnt_T_logl);
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
 * Ford_StePinOffst_No_Cnt: Integer in interval [0...15]
 *   Unit: [unitless], Factor: 1, Offset: 0
 * Ford_StePinOffst_No_Cs: Integer in interval [0...255]
 *   Unit: [Unitless], Factor: 1, Offset: 0
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_StePinOffst_An_Est: Enumeration of integer in interval [0...65535] with enumerators
 *   CxFFFE_NoDataExists (65534U)
 *   CxFFFF_Faulty (65535U)
 *   Unit: [Degrees], Factor: 0.1, Offset: -3200
 * Ford_StePinOffst_D_Stat: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_OffsetNotCalculated (0U)
 *   Cx1_StoredOffset (1U)
 *   Cx2_CoarseOffset (2U)
 *   Cx3_FineOffset (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehSteerPinionAgOffsPrev(void)
 *   uint32 *Rte_Pim_AgOffsVldFaildRefTi(void)
 *   uint32 *Rte_Pim_AgOffsVldMissRefTi(void)
 *   uint32 *Rte_Pim_AgOffsVldPassdRefTi(void)
 *   uint32 *Rte_Pim_ChksVldFaildRefTi(void)
 *   uint32 *Rte_Pim_ChksVldMissRefTi(void)
 *   uint32 *Rte_Pim_CntrVldMissRefTi(void)
 *   uint16 *Rte_Pim_FordVehSteerPinionAgOffsRawPrev(void)
 *   uint8 *Rte_Pim_FordVehSteerPinionOffsChksPrev(void)
 *   uint8 *Rte_Pim_FordVehSteerPinionOffsCntPrev(void)
 *   Ford_StePinOffst_D_Stat *Rte_Pim_FordVehSteerPinionOffsStsPrev(void)
 *   uint8 *Rte_Pim_FordVehSteerPinionOffsStsRawPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehMsg414Miss(void)
 *   boolean *Rte_Pim_FordVehSteerPinionAgOffsVldPrev(void)
 *   boolean *Rte_Pim_FordVehSteerPinionChksVldPrev(void)
 *   boolean *Rte_Pim_FordVehSteerPinionCntrVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg414BusHiSpdAgOffsVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdAgOffsVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdAgOffsVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdChksVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdChksVldMissThd_Val(void)
 *   uint16 Rte_Prm_FordMsg414BusHiSpdCntrVldMissThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg414BusHiSpd_START_SEC_CODE
#include "FordMsg414BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg414BusHiSpdInit1
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
 * Symbol: FordMsg414BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg414BusHiSpd_CODE) FordMsg414BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg414BusHiSpdInit1
 *********************************************************************************************************************/
*Rte_Pim_FirstTranVldFlg()= TRUE;
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldPassdRefTi());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldFaildRefTi());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldMissRefTi());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ChksVldMissRefTi());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CntrVldMissRefTi());
(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ChksVldFaildRefTi());	
*Rte_Pim_FordVehSteerPinionAgOffsRawPrev() = PINIONAGOFFSRAWINITVAL_CNT_U16;	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg414BusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est(Ford_StePinOffst_An_Est *data)
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat(Ford_StePinOffst_D_Stat *data)
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt(Ford_StePinOffst_No_Cnt *data)
 *   Std_ReturnType Rte_Read_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs(Ford_StePinOffst_No_Cs *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehSteerPinionAgOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionAgOffsRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionAgOffsVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionChksVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionCntrVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsChks_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsCnt_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat(Ford_StePinOffst_D_Stat data)
 *   Std_ReturnType Rte_Write_FordVehSteerPinionOffsStsRaw_Val(uint8 data)
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
 * Symbol: FordMsg414BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg414BusHiSpd_CODE) FordMsg414BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg414BusHiSpdPer1
 *********************************************************************************************************************/
 	/* Local Variable Definition*/
	VAR(uint32,AUTOMATIC) 					TiSpan_Cnt_T_u32;
	
	VAR(boolean,AUTOMATIC) 					FordVehSteerPinionAgOffsVld_Cnt_T_logl;
	VAR(boolean,AUTOMATIC)					VldChkFlg_Cnt_T_logl;
	VAR(boolean,AUTOMATIC)					AgOffsVldPassdElpdTi_Cnt_T_logl;
	VAR(boolean,AUTOMATIC)					AgOffsVldFaildElpdTi_Cnt_T_logl;
	VAR(boolean,AUTOMATIC)					FordVehSteerPinionChksVld_Cnt_T_logl;
	VAR(boolean,AUTOMATIC)					FordVehSteerPinionCntrVld_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) 					CntrVldChkFlg_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) 					ChksVldChkFlg_Cnt_T_logl;
	VAR(boolean,AUTOMATIC)					ChksVldFaildElpdTi_Cnt_T_logl;
	
	VAR(Ford_StePinOffst_An_Est,AUTOMATIC)  Ford_StePinOffst_An_Est_Cnt_T_enum;
	VAR(uint16,AUTOMATIC)      				FordVehSteerPinionAgOffsRaw_Cnt_T_u16;
	
	VAR(float32,AUTOMATIC)      			FordVehSteerPinionAgOffs_Cnt_T_f32;
	
	VAR(Ford_StePinOffst_D_Stat,AUTOMATIC)  FordVehSteerPinionOffsSts_Cnt_T_enum;
	VAR(Ford_StePinOffst_D_Stat,AUTOMATIC)  Ford_StePinOffst_D_Stat_Cnt_T_enum;
		
	VAR(uint8,AUTOMATIC)      				FordVehSteerPinionOffsStsRaw_Cnt_T_u08;
	VAR(uint8,AUTOMATIC)      				FordVehSteerPinionOffsCnt_Cnt_T_u08;
	VAR(uint8,AUTOMATIC)      				FordVehSteerPinionOffsChks_Cnt_T_u08;
	VAR(Ford_StePinOffst_No_Cnt,AUTOMATIC)  Ford_StePinOffst_No_Cnt_Cnt_T_enum;
	VAR(uint8,AUTOMATIC)      				CalcFordVehSteerPinionOffsChks_Cnt_T_u08;
	VAR(Ford_StePinOffst_No_Cs,AUTOMATIC)	Ford_StePinOffst_No_Cs_Cnt_T_enum;

	
	 /*** Start of Temp variable  ***/
	VAR(uint8,AUTOMATIC)      				Ford_StePinOffst_An_EstBitShift_Cnt_T_u08;
	VAR(uint8,AUTOMATIC)      				Ford_StePinOffst_An_EstBitMask_Cnt_T_u08;
	VAR(uint8,AUTOMATIC)      				CalcFordVehSteerPinionOffs_Cnt_T_u08;
		

	 /*** End of Temp variable  ***/
	 
 
		/*Reading inputs from RTE*/
   (void)Rte_Read_Ford_StePinOffst_An_Est_Ford_StePinOffst_An_Est(&Ford_StePinOffst_An_Est_Cnt_T_enum);
   (void)Rte_Read_Ford_StePinOffst_D_Stat_Ford_StePinOffst_D_Stat(&Ford_StePinOffst_D_Stat_Cnt_T_enum);
   (void)Rte_Read_Ford_StePinOffst_No_Cnt_Ford_StePinOffst_No_Cnt(&Ford_StePinOffst_No_Cnt_Cnt_T_enum);
   (void)Rte_Read_Ford_StePinOffst_No_Cs_Ford_StePinOffst_No_Cs(&Ford_StePinOffst_No_Cs_Cnt_T_enum);


 
 if(TRUE == *Rte_Pim_FordVehMsg414Miss())
	{
		 /*** Start of MsgMiss ***/
	 
   		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_AgOffsVldMissRefTi(),&TiSpan_Cnt_T_u32); 
		if( TiSpan_Cnt_T_u32>((uint32) (Rte_Prm_FordMsg414BusHiSpdAgOffsVldMissThd_Val() *(uint32) CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))

		{
			FordVehSteerPinionAgOffsVld_Cnt_T_logl = FALSE;
		}
		else
		{
			FordVehSteerPinionAgOffsVld_Cnt_T_logl = *Rte_Pim_FordVehSteerPinionAgOffsVldPrev();
		}
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ChksVldMissRefTi(),&TiSpan_Cnt_T_u32); 
		if( TiSpan_Cnt_T_u32>((uint32) (Rte_Prm_FordMsg414BusHiSpdChksVldMissThd_Val() *(uint32) CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))

		{
			FordVehSteerPinionChksVld_Cnt_T_logl = FALSE;
		}
		else
		{
			FordVehSteerPinionChksVld_Cnt_T_logl = *Rte_Pim_FordVehSteerPinionChksVldPrev();
		}
		
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_CntrVldMissRefTi(),&TiSpan_Cnt_T_u32); 
		if( TiSpan_Cnt_T_u32>((uint32) (Rte_Prm_FordMsg414BusHiSpdCntrVldMissThd_Val() *(uint32) CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))

		{
			FordVehSteerPinionCntrVld_Cnt_T_logl = FALSE;
		}
		else
		{
			FordVehSteerPinionCntrVld_Cnt_T_logl = *Rte_Pim_FordVehSteerPinionCntrVldPrev();
		}
			
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldPassdRefTi());
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldFaildRefTi());
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ChksVldFaildRefTi());
		FordVehSteerPinionAgOffsRaw_Cnt_T_u16 = *Rte_Pim_FordVehSteerPinionAgOffsRawPrev();
		FordVehSteerPinionAgOffs_Cnt_T_f32 = *Rte_Pim_FordVehSteerPinionAgOffsPrev();
		FordVehSteerPinionOffsSts_Cnt_T_enum = *Rte_Pim_FordVehSteerPinionOffsStsPrev();
		FordVehSteerPinionOffsStsRaw_Cnt_T_u08 = *Rte_Pim_FordVehSteerPinionOffsStsRawPrev();
		FordVehSteerPinionOffsCnt_Cnt_T_u08 = *Rte_Pim_FordVehSteerPinionOffsCntPrev();
		FordVehSteerPinionOffsChks_Cnt_T_u08 = *Rte_Pim_FordVehSteerPinionOffsChksPrev();
	/*** End of MsgMiss ***/
	}

 else
	{
		/*** Start of MsgPrsnt ***/

		  /*** Start of SigProcg ***/
		       /*** Start of FordVehSteerPinionAgOffsCovn ***/
			FordVehSteerPinionAgOffsRaw_Cnt_T_u16 = Ford_StePinOffst_An_Est_Cnt_T_enum;
			FordVehSteerPinionAgOffs_Cnt_T_f32 = (FixdToFloat_f32_u16(Ford_StePinOffst_An_Est_Cnt_T_enum,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * PINIONOFFSSCAGFAC_HWDEGPERCNT_F32)- (float32)(PINIONAGOFFS_HWDEG_U16);
		       /*** End of FordVehSteerPinionAgOffsCovn ***/	
			   
		       /*** Start of FordVehSteerPinionOffsStsCovn ***/			
			FordVehSteerPinionOffsSts_Cnt_T_enum  = Ford_StePinOffst_D_Stat_Cnt_T_enum;
			FordVehSteerPinionOffsStsRaw_Cnt_T_u08 = (uint8)Ford_StePinOffst_D_Stat_Cnt_T_enum;
		       /*** End of FordVehSteerPinionOffsStsCovn ***/		

		       /*** Start of FordVehSteerPinionOffsCntCovn ***/				   
			FordVehSteerPinionOffsCnt_Cnt_T_u08 = Ford_StePinOffst_No_Cnt_Cnt_T_enum;
				/*** End of FordVehSteerPinionOffsCntCovn ***/
			
			  /*** Start of FordVehSteerPinionOffsChksCalcn ***/			
			Ford_StePinOffst_An_EstBitShift_Cnt_T_u08 = (uint8)(FordVehSteerPinionAgOffsRaw_Cnt_T_u16 >> RISHIFT_CNT_U16);
			Ford_StePinOffst_An_EstBitMask_Cnt_T_u08 = (uint8)(FordVehSteerPinionAgOffsRaw_Cnt_T_u16 & EIGHTBITMASK_CNT_U16);
			CalcFordVehSteerPinionOffs_Cnt_T_u08 = (Ford_StePinOffst_An_EstBitMask_Cnt_T_u08+Ford_StePinOffst_An_EstBitShift_Cnt_T_u08);
			CalcFordVehSteerPinionOffsChks_Cnt_T_u08 = (uint8)(CalcFordVehSteerPinionOffs_Cnt_T_u08+Ford_StePinOffst_No_Cnt_Cnt_T_enum+(uint8)(Ford_StePinOffst_D_Stat_Cnt_T_enum));
			CalcFordVehSteerPinionOffsChks_Cnt_T_u08 = (~CalcFordVehSteerPinionOffsChks_Cnt_T_u08);
			  /*** End of FordVehSteerPinionOffsChksCalcn ***/	
			  
			  /*** Start of FordVehSteerPinionOffsChksCovn ***/	
			FordVehSteerPinionOffsChks_Cnt_T_u08 = Ford_StePinOffst_No_Cs_Cnt_T_enum; 
			  /*** End of FordVehSteerPinionOffsCh*ksCovn ***/
			 
			 /*** Start of FordVehSteerPinionOffsVldCovn ***/
			VldChkFlg_Cnt_T_logl = FordVehSteerPinionOffsVldCovn(FordVehSteerPinionAgOffsRaw_Cnt_T_u16,
										                         FordVehSteerPinionOffsSts_Cnt_T_enum,
										                         FordVehSteerPinionOffsCnt_Cnt_T_u08,
									                             FordVehSteerPinionOffsChks_Cnt_T_u08,
										                         CalcFordVehSteerPinionOffsChks_Cnt_T_u08,
																 &CntrVldChkFlg_Cnt_T_logl,
																 &ChksVldChkFlg_Cnt_T_logl);
	        /*** End of FordVehSteerPinionOffsVldCovn ***/
			
			/*** Start of VldElpdTi ***/	
			VldElpdTi(&AgOffsVldPassdElpdTi_Cnt_T_logl,
					  &AgOffsVldFaildElpdTi_Cnt_T_logl,
					  &ChksVldFaildElpdTi_Cnt_T_logl);			 
			/*** End of VldElpdTi ***/
			
			if(TRUE == *Rte_Pim_FirstTranVldFlg())
			{
				/*** Start of FirstTran ***/	
			    FordVehSteerPinionAgOffsVld_Cnt_T_logl = VldChkFlg_Cnt_T_logl;
			    *Rte_Pim_FirstTranVldFlg()= FALSE;
			}
				/*** End of FirstTran ***/
				
			else
			{
				/*** Start of ChkElpdTi ***/	
				if( TRUE == VldChkFlg_Cnt_T_logl)
				{
					if( TRUE == AgOffsVldPassdElpdTi_Cnt_T_logl)
					{
				        FordVehSteerPinionAgOffsVld_Cnt_T_logl = TRUE;
					}
					else
					{
				        FordVehSteerPinionAgOffsVld_Cnt_T_logl = *Rte_Pim_FordVehSteerPinionAgOffsVldPrev();		
					}
				    (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldFaildRefTi());
				}
				else
				{
					if( TRUE == AgOffsVldFaildElpdTi_Cnt_T_logl)
					{
				        FordVehSteerPinionAgOffsVld_Cnt_T_logl = FALSE;
					}
					else
					{
						FordVehSteerPinionAgOffsVld_Cnt_T_logl = *Rte_Pim_FordVehSteerPinionAgOffsVldPrev();		
					}
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldPassdRefTi());						
				}	
			
				/*** End of ChkElpdTi ***/
			}
			/*** Start of SteerPinionChksVld ***/
			if( TRUE == ChksVldChkFlg_Cnt_T_logl )
			{
				FordVehSteerPinionChksVld_Cnt_T_logl = ChksVldChkFlg_Cnt_T_logl;
				(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ChksVldFaildRefTi());
			}
			else
			{
				if( TRUE == ChksVldFaildElpdTi_Cnt_T_logl )
				{
					FordVehSteerPinionChksVld_Cnt_T_logl = FALSE;
				}
				else
				{
					FordVehSteerPinionChksVld_Cnt_T_logl = *Rte_Pim_FordVehSteerPinionChksVldPrev();
				}
			}
			/*** End of SteerPinionChksVld ***/	
			
			/*** Start of SteerPinionCntrVld ***/
			if( TRUE == CntrVldChkFlg_Cnt_T_logl )
			{
				FordVehSteerPinionCntrVld_Cnt_T_logl = CntrVldChkFlg_Cnt_T_logl;
			}
			else
			{
				FordVehSteerPinionCntrVld_Cnt_T_logl = FALSE;
			}
			/*** End of SteerPinionCntrVld ***/
			
			/*** End of SigProcg ***/

			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_CntrVldMissRefTi());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_ChksVldMissRefTi());
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_AgOffsVldMissRefTi());
		/*** End of MsgPrsnt ***/
	}
							 
	FordVehSteerPinionAgOffsRaw_Cnt_T_u16 = Lim_u16(FordVehSteerPinionAgOffsRaw_Cnt_T_u16, PINIONAGOFFSRAWMIN_CNT_U16, PINIONAGOFFSRAWMAX_CNT_U16); 
	*Rte_Pim_FordVehSteerPinionAgOffsRawPrev() = FordVehSteerPinionAgOffsRaw_Cnt_T_u16;
	
	FordVehSteerPinionAgOffs_Cnt_T_f32 = Lim_f32(FordVehSteerPinionAgOffs_Cnt_T_f32, PINIONAGOFFSMIN_HWDEG_F32, PINIONAGOFFSMAX_HWDEG_F32); 
	*Rte_Pim_FordVehSteerPinionAgOffsPrev() = FordVehSteerPinionAgOffs_Cnt_T_f32;
	
	*Rte_Pim_FordVehSteerPinionOffsStsPrev() = FordVehSteerPinionOffsSts_Cnt_T_enum;
	
	FordVehSteerPinionOffsStsRaw_Cnt_T_u08 = Lim_u08(FordVehSteerPinionOffsStsRaw_Cnt_T_u08, PINIONOFFSSTSRAWMIN_CNT_U08, PINIONOFFSSTSRAWMAX_CNT_U08); 
	*Rte_Pim_FordVehSteerPinionOffsStsRawPrev() = FordVehSteerPinionOffsStsRaw_Cnt_T_u08;
	
	FordVehSteerPinionOffsCnt_Cnt_T_u08 = Lim_u08(FordVehSteerPinionOffsCnt_Cnt_T_u08, PINIONOFFSCNTMIN_CNT_U08, PINIONOFFSCNTMAX_CNT_U08);
	*Rte_Pim_FordVehSteerPinionOffsCntPrev() = FordVehSteerPinionOffsCnt_Cnt_T_u08;
	
	FordVehSteerPinionOffsChks_Cnt_T_u08 = Lim_u08(FordVehSteerPinionOffsChks_Cnt_T_u08, PINIONOFFSCHKSMIN_CNT_U08, PINIONOFFSCHKSMAX_CNT_U08);	
	*Rte_Pim_FordVehSteerPinionOffsChksPrev() = FordVehSteerPinionOffsChks_Cnt_T_u08;
	
	*Rte_Pim_FordVehSteerPinionAgOffsVldPrev() = FordVehSteerPinionAgOffsVld_Cnt_T_logl;
	*Rte_Pim_FordVehSteerPinionChksVldPrev() = FordVehSteerPinionChksVld_Cnt_T_logl;
	*Rte_Pim_FordVehSteerPinionCntrVldPrev() = FordVehSteerPinionCntrVld_Cnt_T_logl;

  /*Writing outputs to RTE*/

(void)Rte_Write_FordVehSteerPinionAgOffsRaw_Val(FordVehSteerPinionAgOffsRaw_Cnt_T_u16);
(void)Rte_Write_FordVehSteerPinionAgOffs_Val(FordVehSteerPinionAgOffs_Cnt_T_f32);
(void)Rte_Write_FordVehSteerPinionOffsSts_Ford_StePinOffst_D_Stat(FordVehSteerPinionOffsSts_Cnt_T_enum);
(void)Rte_Write_FordVehSteerPinionOffsStsRaw_Val(FordVehSteerPinionOffsStsRaw_Cnt_T_u08);
(void)Rte_Write_FordVehSteerPinionOffsCnt_Val(FordVehSteerPinionOffsCnt_Cnt_T_u08);
(void)Rte_Write_FordVehSteerPinionOffsChks_Val(FordVehSteerPinionOffsChks_Cnt_T_u08);
(void)Rte_Write_FordVehSteerPinionAgOffsVld_Logl(FordVehSteerPinionAgOffsVld_Cnt_T_logl);
(void)Rte_Write_FordVehSteerPinionChksVld_Logl(FordVehSteerPinionChksVld_Cnt_T_logl);
(void)Rte_Write_FordVehSteerPinionCntrVld_Logl(FordVehSteerPinionCntrVld_Cnt_T_logl);

	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg414BusHiSpd_STOP_SEC_CODE
#include "FordMsg414BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*****************************************************************************
  * Name            : FordVehSteerPinionOffsVldCovn
  * Description     : Implementation of "FordVehSteerPinionOffsVldCovn" subsystem in model.
  * Inputs          : FordVehSteerPinionAgOffsRaw_Cnt_T_u16,
  *                   FordVehSteerPinionOffsSts_Cnt_T_enum,
  *				      FordVehSteerPinionOffsCnt_Cnt_T_u08,
  *				      FordVehSteerPinionOffsChks_Cnt_T_u08,
  *					  CntrVldChkFlg_Cnt_T_logl,
  *					  ChksVldChkFlg_Cnt_T_logl.
  * Outputs         : CntrVldChkFlg_Cnt_T_logl, ChksVldChkFlg_Cnt_T_logl
  * Returns    	 	: VldChkFlg_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(boolean, FordMsg414BusHiSpd_CODE) FordVehSteerPinionOffsVldCovn(VAR(uint16,AUTOMATIC)FordVehSteerPinionAgOffsRaw_Cnt_T_u16,
																			VAR(Ford_StePinOffst_D_Stat,AUTOMATIC)FordVehSteerPinionOffsSts_Cnt_T_enum,
																			VAR(uint8,AUTOMATIC) FordVehSteerPinionOffsCnt_Cnt_T_u08,
																			VAR(uint8,AUTOMATIC) FordVehSteerPinionOffsChks_Cnt_T_u08,
																			VAR(uint8,AUTOMATIC) CalcFordVehSteerPinionOffsChks_Cnt_T_u08,
																			P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) CntrVldChkFlg_Cnt_T_logl,
																			P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR) ChksVldChkFlg_Cnt_T_logl)
{

	VAR(boolean,AUTOMATIC) FordVehSteerPinionAgOffsRawcmp_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) FordVehSteerPinionOffsStscmp_Cnt_T_logl;
	VAR(boolean,AUTOMATIC) VldChkFlg_Cnt_T_logl;
	
/*** Start of FordVehSteerPinionOffsVldCovn ***/	
	if(FordVehSteerPinionAgOffsRaw_Cnt_T_u16 < PINIONAGOFFSVAL_CNT_U16)
	{
		FordVehSteerPinionAgOffsRawcmp_Cnt_T_logl = TRUE;
	}
	else
	{
		FordVehSteerPinionAgOffsRawcmp_Cnt_T_logl = FALSE;
	}
	
	if((FordVehSteerPinionOffsSts_Cnt_T_enum ==  Cx1_StoredOffset) || (FordVehSteerPinionOffsSts_Cnt_T_enum ==  Cx3_FineOffset))
	{
	  	FordVehSteerPinionOffsStscmp_Cnt_T_logl = TRUE;
	}
	else
	{
		FordVehSteerPinionOffsStscmp_Cnt_T_logl = FALSE;
	}
	
	if(FordVehSteerPinionOffsCnt_Cnt_T_u08 != *Rte_Pim_FordVehSteerPinionOffsCntPrev())
	{
	  	*CntrVldChkFlg_Cnt_T_logl = TRUE;
	}
	else
	{
		*CntrVldChkFlg_Cnt_T_logl = FALSE;
	}
	
	if(FordVehSteerPinionOffsChks_Cnt_T_u08 == CalcFordVehSteerPinionOffsChks_Cnt_T_u08)
	{
	  	*ChksVldChkFlg_Cnt_T_logl = TRUE;
	}
	else
	{
		*ChksVldChkFlg_Cnt_T_logl = FALSE;
	}
	
    if((TRUE == FordVehSteerPinionAgOffsRawcmp_Cnt_T_logl) && 
	   (TRUE == FordVehSteerPinionOffsStscmp_Cnt_T_logl) && 
	   (TRUE == *CntrVldChkFlg_Cnt_T_logl) && 
	   (TRUE == *ChksVldChkFlg_Cnt_T_logl))
	{
	    VldChkFlg_Cnt_T_logl = TRUE;
	}
	else
	{
	    VldChkFlg_Cnt_T_logl = FALSE;
	}
	return(VldChkFlg_Cnt_T_logl);
/*** End of FordVehSteerPinionOffsVldCovn ***/	
}

/*****************************************************************************
  * Name            : VldElpdTi
  * Description     : Implementation of "VldElpdTi" subsystem in model.
  * Inputs          : None
  * Outputs         : AgOffsVldPassdElpdTi_Cnt_T_logl, 
  *                   AgOffsVldFaildElpdTi_Cnt_T_logl,  
  *                   ChksVldFaildElpdTi_Cnt_T_logl.
  * Returns    	 	: None
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg414BusHiSpd_CODE)VldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR)AgOffsVldPassdElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR)AgOffsVldFaildElpdTi_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG414BUSHISPD_APPL_VAR)ChksVldFaildElpdTi_Cnt_T_logl)
{
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_AgOffsVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	if( TiSpan_Cnt_T_u32>((uint32) (Rte_Prm_FordMsg414BusHiSpdAgOffsVldPassdThd_Val() *(uint32) CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))

	{
		*AgOffsVldPassdElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*AgOffsVldPassdElpdTi_Cnt_T_logl = FALSE;
					
	}
		
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_AgOffsVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if( TiSpan_Cnt_T_u32>((uint32) (Rte_Prm_FordMsg414BusHiSpdAgOffsVldFaildThd_Val() *(uint32) CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
	{
		*AgOffsVldFaildElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*AgOffsVldFaildElpdTi_Cnt_T_logl = FALSE;		
	}
		
	(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ChksVldFaildRefTi(),&TiSpan_Cnt_T_u32);
	if( TiSpan_Cnt_T_u32>((uint32) (Rte_Prm_FordMsg414BusHiSpdChksVldFaildThd_Val() *(uint32) CNVMILLISECTOCNT_CNTPERMILLISEC_U16)))
	{
		*ChksVldFaildElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*ChksVldFaildElpdTi_Cnt_T_logl = FALSE;		
	}
}	

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
