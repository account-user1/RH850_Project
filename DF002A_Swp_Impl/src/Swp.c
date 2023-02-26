/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Swp.c
 *     SW-C Type:  Swp
 *  Generated at:  Wed Jan 20 13:21:42 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <Swp>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : Swp.c
* Module Description: Implementation of Sweep algorithm (FDD DF002A)
* Project           : CBD 
* Author            : Krishna Kanth Anne
************************************************************************************************************************
* Version Control:
* %version          : 4 %
* %derived_by       : nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author     Change Description                                                             SCR #
* -------   -------  --------  ---------------------------------------------------------------------------    ---------
* 08/27/15  1        KK        	Initial Version                                                               EA4#968 
* 01/20/16  2        KK        	Fix for anomaly EA4#2461 (as per FDD v1.6.0)                                  EA4#3356                                                                
* 05/19/17  3        KK        	As per FDD v1.8.0                                  							  EA4#8052                                                             
* 05/31/17  4        KK         Update to fix compilation issue                    							  EA4#12393                                                             
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Swp.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Swp.h"
#include "NxtrMath.h"
#include "ArchGlbPrm.h"
#include "SysGlbPrm.h"

#define SWPHWTQLOLIM_HWNWTMTR_F32			(-10.0F)
#define SWPHWTQHILIM_HWNWTMTR_F32			(10.0F)

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
#if(STD_ON == SWPENA)
#define	SWPMOTTQ_CNT_U08					(1U) 
#define	SWPMOTTQCFG_CNT_U08					(1U)
#define SWPHWTQ_CNT_U08						(2U) 
#define SWPHWTQCFG_CNT_U08					(2U)
#define SWPRAMPST_CNT_U08					(4U)
#define SWPSTOPST_CNT_U08					(3U)
#define SWPSTRTST_CNT_U08					(0U)
#define SWPTRANST_CNT_U08					(1U)
#define SWPTIUNITCNVN_MILLISECPERCNT_F32	(0.1F)
#define MICROSEC100TOMILLISEC_ULS_F32		(0.1F)
#define MILLISECTOSEC_ULS_F32				(0.001F)
#define SWPSTRT_CNT_U16						(0U)
#define SWPTRAN_CNT_U16						(1U)
#define SWPDWELL_CNT_U16					(2U) 
#define SWPDWELLST_CNT_U16					(2U)
#define SWPSTOP_CNT_U16						(3U)
#define SWPRAMP_CNT_U16						(4U)
#define SWPDONE_CNT_U16						(5U) 
#define SWPDONEST_CNT_U08					(5U)
#define SWPGAININIVAL_ULS_F32				(0.45F)
#define SWPSINAMPINIVAL_HWNWTMTR_F32		(0.50F)

/* Map variables to code section so only one set of memory map statement needs to be modified in integration project to map variables to global shared data. */

#define Swp_START_SEC_DATA
#include "Swp_MemMap.h" 
/*** For DFs, it was decided to use the module level variables in place of PIMs defined in the FDD (PIM section of .m file), 
This is a deviation from regular EA4 process ***/
static volatile VAR(uint16, Swp_VAR)	SwpCfg_M		= 1U;
static VAR(float32, Swp_VAR)			SwpSinTq_M 		= 0.0F;			
static volatile VAR(boolean, Swp_VAR)	SwpModEna_M 	= TRUE;	
#define Swp_STOP_SEC_DATA
#include "Swp_MemMap.h" 
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


#define Swp_START_SEC_CODE
#include "Swp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwpInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, Swp_CODE) SwpInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwpInit1
 *********************************************************************************************************************/
#if(STD_ON == SWPENA)
 
	/*** FDD does the initializations in a different way but functionally matches with the initializations in Per1 ***/

#else 

	/*** Dummy Initialization function to correlate with the FDD (.m file) ***/
	
#endif		
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwpPer1
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
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTqSwp_Val(float32 data)
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

FUNC(void, Swp_CODE) SwpPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwpPer1
 *********************************************************************************************************************/
#if(STD_ON == SWPENA)

	VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) GenHwTq_Cnt_T_logl;
	
	VAR(uint16, AUTOMATIC) SwpSwtSt_Uls_T_u16;
	VAR(uint16, AUTOMATIC) StateTime_MilliSec_T_u16p0;
		
	VAR(uint32, AUTOMATIC) ElapsedTime_Cnt_T_u32; 		/*** Units are 100microsecs per count ***/
	VAR(uint32, AUTOMATIC) SwpTranStrtTi_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) SwpDwellStrtTi_Cnt_T_u32;
		
	VAR(float32, AUTOMATIC) SinArg_Uls_T_f32;
	VAR(float32, AUTOMATIC) SinArgRad_Rad_T_f32;
	VAR(float32, AUTOMATIC) FreqSpan_Hz_T_f32;
	VAR(float32, AUTOMATIC) SwpInstsFrq_Uls_T_f32;
	VAR(float32, AUTOMATIC) ScaleFactor_Uls_T_f32;
	VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
	VAR(float32, AUTOMATIC) HwTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) OutputHwTrq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) TimeScale_Uls_T_f32;
	VAR(float32, AUTOMATIC) SwpSinTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) SwpCosTq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	ElapsedTime_MilliSec_T_f32;

	
	/*** For DFs, it was decided to use the Function level variables in place of PIMs defined in the FDD (PIM section of .m file), 
	This is a deviation from regular EA4 process ***/
	static volatile VAR(float32, Swp_VAR)	SwpVehspdMax_F		= 1.0F;		
	static volatile VAR(boolean, Swp_VAR)	SwpVehSpdChkEna_F	= TRUE;		
	static volatile VAR(uint16, Swp_VAR)	SwpTranTi_F[100]	= {2000U,	500U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	250U,	1000U};
	static volatile VAR(float32, Swp_VAR)	SwpFrqList_F[100]	= {0.0F,	1.0F,	1.2F,	1.4F,	1.6F,	1.8F,	2.0F,	2.25F,	2.5F,	2.75F,	3.0F,	3.25F,	3.5F,	3.75F,	4.0F,	4.25F,	4.5F,	4.75F,	5.0F,	5.25F,	5.5F,	5.75F,	6.0F,	6.25F,	6.5F,	6.75F,	7.0F,	7.25F,	7.5F,	7.75F,	8.0F,	8.25F,	8.5F,	8.75F,	9.0F,	9.25F,	9.5F,	9.75F,	10.0F,	10.25F,	10.5F,	10.75F,	11.0F,	11.25F,	11.5F,	11.75F,	12.0F,	12.25F,	12.5F,	12.75F,	13.0F,	13.25F,	13.5F,	13.75F,	14.0F,	14.25F,	14.5F,	14.75F,	15.0F,	15.5F,	16.0F,	16.5F,	17.0F,	17.5F,	18.0F,	18.5F,	19.0F,	19.5F,	20.0F,	21.0F,	22.0F,	23.0F,	24.0F,	25.0F,	26.0F,	27.0F,	28.0F,	29.0F,	30.0F,	32.0F,	34.0F,	36.0F,	38.0F,	40.0F,	42.0F,	44.0F,	46.0F,	48.0F,	50.0F,	55.0F,	60.0F,	65.0F,	70.0F,	75.0F,	80.0F,	85.0F,	90.0F,	95.0F,	100.0F,	105.0F};
	static volatile VAR(uint16, Swp_VAR)	SwpDwellTi_F[100]	= {0U,	32000U,	18333U,	10714U,	9375U,	8333U,	7500U,	6667U,	6000U,	5455U,	4667U,	4308U,	3714U,	3467U,	3000U,	2824U,	2667U,	2526U,	2400U,	2286U,	2182U,	2087U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U,	2000U};
	static volatile VAR(float32, Swp_VAR)	SwpHwTqOffs_F 			= 0.0F;		
	static volatile	VAR(boolean, Swp_VAR)	SwpGenHwTq_F 		= FALSE;
	static volatile VAR(float32, Swp_VAR)	SwpSinAmp_F			= 0.5F;		

	static VAR(uint16, Swp_VAR)				SwpSwtSt_F 			= 0U;		
	static VAR(float32, Swp_VAR)			SwpInstsFrq_F 		= 0.0F;		
	static VAR(float32, Swp_VAR)			SwpCosTq_F 			= 1.0F;		
	static VAR(uint16, Swp_VAR)				SwpFrqIdx_F 		= 0U;		
	static VAR(float32, Swp_VAR)			SwpLstStSinArg_F 	= 0.0F;	
	static VAR(uint32, Swp_VAR)				SwpDwellStrtTi_F	= 0U;
	static VAR(uint32, Swp_VAR)				SwpTranStrtTi_F		= 0U;
	
	/*** Read Inputs from RTE ***/
	(void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
	(void)Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);
	(void)Rte_Read_HwTq_Val(&HwTq_HwNwtMtr_T_f32);
	
	/*** Local copies for Functional level and Module level variables ***/
	GenHwTq_Cnt_T_logl			= SwpGenHwTq_F;
	SwpInstsFrq_Uls_T_f32 		= SwpInstsFrq_F;
	SwpSwtSt_Uls_T_u16			= SwpSwtSt_F;
	SwpSinTq_HwNwtMtr_T_f32		= SwpSinTq_M;
	SwpCosTq_HwNwtMtr_T_f32		= SwpCosTq_F;
	SwpTranStrtTi_Cnt_T_u32		= SwpTranStrtTi_F;
	SwpDwellStrtTi_Cnt_T_u32	= SwpDwellStrtTi_F;
	
	/*** Start of Check GenHwTrq and VehSpd ***/
	if(TRUE == GenHwTq_Cnt_T_logl)
		{
			if ( (TRUE == SwpVehSpdChkEna_F)&& 
				 ((VehSpd_Kph_T_f32 >= SwpVehspdMax_F) || 
				  (TRUE != VehSpdVld_Cnt_T_logl)))
			{
				if ((SWPRAMP_CNT_U16 != SwpSwtSt_Uls_T_u16 )&& 
				    (SWPDONE_CNT_U16 != SwpSwtSt_Uls_T_u16 )) 
			    {
					SwpSwtSt_Uls_T_u16 = SWPRAMP_CNT_U16;
					(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&SwpTranStrtTi_Cnt_T_u32);
				}
			}
			
			/*** Start of Switch Case Block ***/
			switch(SwpSwtSt_Uls_T_u16)
			{
				/*** Case 0 : Start ***/
				case SWPSTRT_CNT_U16: 
				/*** Case 1 : Transistion ***/
				case SWPTRAN_CNT_U16: 
					(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(SwpTranStrtTi_Cnt_T_u32, &ElapsedTime_Cnt_T_u32);
					ElapsedTime_MilliSec_T_f32 	= (float32)ElapsedTime_Cnt_T_u32 * SWPTIUNITCNVN_MILLISECPERCNT_F32;
					TimeScale_Uls_T_f32 		= ElapsedTime_MilliSec_T_f32 / (float32)(SwpTranTi_F[SwpFrqIdx_F]);
					FreqSpan_Hz_T_f32 			= SwpFrqList_F[SwpFrqIdx_F + 1U] - SwpFrqList_F[SwpFrqIdx_F];
					
					/*** Inst Frequency Calculation ***/
					SwpInstsFrq_Uls_T_f32 	= (FreqSpan_Hz_T_f32 * TimeScale_Uls_T_f32) + SwpFrqList_F[SwpFrqIdx_F];
									
					SinArg_Uls_T_f32 		= (((TimeScale_Uls_T_f32 * FreqSpan_Hz_T_f32 * ONEOVERTWO_ULS_F32) + SwpFrqList_F[SwpFrqIdx_F] ) * ElapsedTime_MilliSec_T_f32 * 0.001F) + SwpLstStSinArg_F;
					
					/*** Start of Scale Factor Calculation ***/
					if(SwpFrqIdx_F == 0U) 
					{
						ScaleFactor_Uls_T_f32 = TimeScale_Uls_T_f32;
					}
					else
					{
						ScaleFactor_Uls_T_f32 = 1.0F;
					}
					/*** End of Scale Factor Calculation ***/	
					
					/*** Sine Calculation ***/
					SinArgRad_Rad_T_f32 			= SinArg_Uls_T_f32 * ARCHGLBPRM_2PI_ULS_F32;
					SwpSinTq_HwNwtMtr_T_f32 		= ( ((Sin_f32(SinArgRad_Rad_T_f32) * (SwpSinAmp_F) ) + SwpHwTqOffs_F ) * ScaleFactor_Uls_T_f32 );
					
					/*** CoSine Calculation ***/
					SwpCosTq_HwNwtMtr_T_f32			= ( ((Cos_f32(SinArgRad_Rad_T_f32) * (SwpSinAmp_F) ) + SwpHwTqOffs_F ) * ScaleFactor_Uls_T_f32 );
					
					
					if( ElapsedTime_MilliSec_T_f32 >= ((float32)SwpTranTi_F[SwpFrqIdx_F]))
					{
						(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&SwpDwellStrtTi_Cnt_T_u32);
						SwpSwtSt_Uls_T_u16				= SWPDWELL_CNT_U16;											/*** SweepState=Dwell1 ***/
						SwpLstStSinArg_F				= SinArg_Uls_T_f32;
						SwpFrqIdx_F++;
					}
				break;
					
				/*** Case 2 : Dwell ***/
				case SWPDWELL_CNT_U16: 
				/*** Case 3 : Stop ***/
				case SWPSTOP_CNT_U16: 
					(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(SwpDwellStrtTi_Cnt_T_u32, &ElapsedTime_Cnt_T_u32);
					ElapsedTime_MilliSec_T_f32 	= (float32)ElapsedTime_Cnt_T_u32 * SWPTIUNITCNVN_MILLISECPERCNT_F32;
					TimeScale_Uls_T_f32			= ElapsedTime_MilliSec_T_f32 / ((float32)(SwpTranTi_F[SwpFrqIdx_F]));
					SinArg_Uls_T_f32 			= (ElapsedTime_MilliSec_T_f32 * 0.001F * SwpFrqList_F[SwpFrqIdx_F]) + SwpLstStSinArg_F;
					
					/*** Inst Frequency Calculation ***/
					SwpInstsFrq_Uls_T_f32 = SwpFrqList_F[SwpFrqIdx_F];
					
					/*** Scale Factor Calculation ***/
					if (SwpSwtSt_Uls_T_u16 == SWPSTOP_CNT_U16)
					{
						ScaleFactor_Uls_T_f32 		= 1.0F - TimeScale_Uls_T_f32;
						StateTime_MilliSec_T_u16p0 	= SwpTranTi_F[SwpFrqIdx_F];
					}
					else
					{
						ScaleFactor_Uls_T_f32 		= 1.0F;
						StateTime_MilliSec_T_u16p0 	= SwpDwellTi_F[SwpFrqIdx_F];
					}
					
					/*** Sine Calculation ***/
					SinArgRad_Rad_T_f32 		= SinArg_Uls_T_f32 * ARCHGLBPRM_2PI_ULS_F32;
					SwpSinTq_HwNwtMtr_T_f32 	= ( ((Sin_f32(SinArgRad_Rad_T_f32) * (SwpSinAmp_F) ) + SwpHwTqOffs_F ) * ScaleFactor_Uls_T_f32 );
					
					/*** CoSine Calculation ***/
					SwpCosTq_HwNwtMtr_T_f32		= ( ((Cos_f32(SinArgRad_Rad_T_f32) * (SwpSinAmp_F) ) + SwpHwTqOffs_F ) * ScaleFactor_Uls_T_f32 );
								
					if(ElapsedTime_MilliSec_T_f32 >= (float32)(StateTime_MilliSec_T_u16p0))
					{
						if(SwpSwtSt_Uls_T_u16 == SWPSTOP_CNT_U16)
						{
							SwpSwtSt_Uls_T_u16 = SWPDONE_CNT_U16;
						}
						else if (SwpFrqIdx_F == (TblSize_m(SwpTranTi_F) - 1U))
						{
							SwpSwtSt_Uls_T_u16 = SWPSTOP_CNT_U16;
							(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&SwpDwellStrtTi_Cnt_T_u32);
						}
						else
						{
							SwpSwtSt_Uls_T_u16 = SWPTRAN_CNT_U16;
							(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&SwpTranStrtTi_Cnt_T_u32);
						}
						/*** SwpFrqIdx_F 		remains unaltered ***/		 
						SwpLstStSinArg_F	= SinArg_Uls_T_f32;
					}
				break;
				
				/*** Case 4 : Ramp ***/
				case SWPRAMP_CNT_U16: 
					(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(SwpTranStrtTi_Cnt_T_u32, &ElapsedTime_Cnt_T_u32);
					ElapsedTime_MilliSec_T_f32 	= (float32)ElapsedTime_Cnt_T_u32 * SWPTIUNITCNVN_MILLISECPERCNT_F32;
					TimeScale_Uls_T_f32 		= ElapsedTime_MilliSec_T_f32 / (float32)((TblSize_m(SwpTranTi_F) - 1U));
					ScaleFactor_Uls_T_f32 		= (1.0F - TimeScale_Uls_T_f32);
								
					if( ElapsedTime_MilliSec_T_f32 >=  (float32)(SwpTranTi_F[SwpFrqIdx_F]))
					{
						SwpSinTq_HwNwtMtr_T_f32		= 0.0F;			
						SwpCosTq_HwNwtMtr_T_f32		= 0.0F;
						SwpSwtSt_Uls_T_u16 			= SWPDONE_CNT_U16;
					}
					
					else
					{
						/*** SwpSwtSt_Uls_T_u16 remains unaltered ***/
						SwpSinTq_HwNwtMtr_T_f32		= ScaleFactor_Uls_T_f32 * SwpSinTq_HwNwtMtr_T_f32;
						SwpCosTq_HwNwtMtr_T_f32		= ScaleFactor_Uls_T_f32 * SwpCosTq_HwNwtMtr_T_f32;
					}	
				break;
				
				/*** Case 5 : Done ***/
				case SWPDONE_CNT_U16: 	
					/*** Case  	: Default ***/
				default:
					SwpSinTq_HwNwtMtr_T_f32		= 0.0F;
					SwpCosTq_HwNwtMtr_T_f32		= 0.0F;
					SwpGenHwTq_F				= GenHwTq_Cnt_T_logl;
				break;
			}
			/*** End of Switch Case Block ***/
			
		}
	
	else 
		{
			SwpSwtSt_Uls_T_u16				= SWPSTRT_CNT_U16; 			/*** START State***/
			SwpSinTq_HwNwtMtr_T_f32			= 0.0F;			
			SwpCosTq_HwNwtMtr_T_f32			= 0.0F;
			SwpFrqIdx_F						= 0U;								/*** 1 index  in MATLAB, is 0 index in C code ***/
			SwpLstStSinArg_F				= 0.0F;
			SwpInstsFrq_Uls_T_f32			= 0.0F;
			(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&SwpTranStrtTi_Cnt_T_u32);			
		}
		/*** End of Check GenHwTrq and VehSpd ***/

		/*** Start of Final Output ***/
		if ( (SwpModEna_M == TRUE) && (SwpCfg_M == SWPHWTQ_CNT_U08) )
		{
			OutputHwTrq_HwNwtMtr_T_f32 = SwpSinTq_M;
		}
		else
		{
			OutputHwTrq_HwNwtMtr_T_f32 = HwTq_HwNwtMtr_T_f32;
		}
		/*** End of Final Output ***/	
		
	/*** Update Module level variable for using as prev value in next cycle ***/
	SwpSinTq_M			= SwpSinTq_HwNwtMtr_T_f32;
	SwpCosTq_F			= SwpCosTq_HwNwtMtr_T_f32;
	SwpInstsFrq_F 		= SwpInstsFrq_Uls_T_f32;
	SwpGenHwTq_F 		= GenHwTq_Cnt_T_logl;
	SwpSwtSt_F			= SwpSwtSt_Uls_T_u16;
	SwpTranStrtTi_F 	= SwpTranStrtTi_Cnt_T_u32;
	SwpDwellStrtTi_F	= SwpDwellStrtTi_Cnt_T_u32;
		
	/*** Range limit and Write output to RTE***/
	(void)Rte_Write_HwTqSwp_Val(Lim_f32(OutputHwTrq_HwNwtMtr_T_f32, SWPHWTQLOLIM_HWNWTMTR_F32, SWPHWTQHILIM_HWNWTMTR_F32));
	
#else /*** if SWPENA == STD_OFF ***/

	VAR(float32, AUTOMATIC) OutputHwTrq_HwNwtMtr_T_f32;
	
	/*** Read Intputs from RTE ***/
	(void)Rte_Read_HwTq_Val(&OutputHwTrq_HwNwtMtr_T_f32);
	
	/*** Range limit and Write output to RTE***/
	(void)Rte_Write_HwTqSwp_Val(Lim_f32(OutputHwTrq_HwNwtMtr_T_f32, SWPHWTQLOLIM_HWNWTMTR_F32, SWPHWTQHILIM_HWNWTMTR_F32));


#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwpPer2
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
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotTqCmdSwp_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, Swp_CODE) SwpPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwpPer2
 *********************************************************************************************************************/
#if(STD_ON == SWPENA)
	
	static volatile VAR(float32, Swp_VAR)	SwpGain_F		= 0.45F;	
	
	VAR(float32, AUTOMATIC)	MotTqCmd_MotNwtMtr_T_f32;
	
	/*** Read Intputs from RTE ***/
	(void)Rte_Read_MotTqCmd_Val(&MotTqCmd_MotNwtMtr_T_f32);
	
	/*** Range limit and Write Ouptputs to RTE ***/
	if((SwpModEna_M == TRUE)&&(SwpCfg_M == SWPMOTTQ_CNT_U08))
	{
		(void)Rte_Write_MotTqCmdSwp_Val(Lim_f32((SwpSinTq_M * SwpGain_F), SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32));
	}
	else
	{
		(void)Rte_Write_MotTqCmdSwp_Val(Lim_f32(MotTqCmd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32));
	}

#else /*** if SWPENA == STD_OFF ***/

	VAR(float32, AUTOMATIC) MotTqCmd_MotNwtMtr_T_f32;
	
	/*** Read Intputs from RTE ***/
	(void)Rte_Read_MotTqCmd_Val(&MotTqCmd_MotNwtMtr_T_f32);
	
	/*** Range limit and Write Ouptputs to RTE ***/
	(void)Rte_Write_MotTqCmdSwp_Val(Lim_f32(MotTqCmd_MotNwtMtr_T_f32, SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32));

#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Swp_STOP_SEC_CODE
#include "Swp_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
