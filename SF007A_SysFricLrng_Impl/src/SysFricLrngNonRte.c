/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : SysFricLrngNonRte.c
* Module Description: Implementation of System Friction Learning FDD SF007A - Non RTE functions
* Project           : CBD 
* Author            : Matthew Leser
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                        SCR #
* -------   -------  --------  -----------------------------------------------------------------------   --------------
* 10/03/17  1        ML        Initial Version                                                           EA4#15390
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 /*********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_SysFricLrng.h"
#include "SysFricLrng.h"
#include "NxtrMath.h"

#define VEHSPDPTNUM1_ULS_U08			((uint8)4U)
#define VEHLRNDFRICHILIM_ULS_F32		127.0F
#define VEHLRNDFRICLOLIM_ULS_F32		0.0F

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
#define SysFricLrng_START_SEC_CODE
#include "SysFricLrng_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/ 

 /**********************************************************************************************************************
* Name:        FricLrngShtDwn
* Description: Limits the values for the NVM FricLrngData before the WriteAll and Shutdown
* Inputs:      NONE     
* Outputs:     NONE 
* Usage Notes: NONE 
*********************************************************************************************************************/

FUNC(void, SysFricLrng_CODE) FricLrngShtDwn(void)
{
/**********************************************************************************************************************
* DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
* Symbol: FricLrngShtDwn
*********************************************************************************************************************/    
	VAR(float32, AUTOMATIC) VehLrndFric_HwNwtMtr_T_f32;
    VAR(uint8,   AUTOMATIC) Index_Cnt_T_u08;
    
	for(Index_Cnt_T_u08 = 0U; Index_Cnt_T_u08 < VEHSPDPTNUM1_ULS_U08; Index_Cnt_T_u08++)
	{

		VehLrndFric_HwNwtMtr_T_f32 = Lim_f32( (Rte_Pim_SatnAvrgFric()[Index_Cnt_T_u08]), 
											  Rte_Pim_FricLrngData()->VehLrndFric[Index_Cnt_T_u08] - (Rte_Prm_SysFricLrngIgnCycFricChgLim_Val()), 
											  Rte_Pim_FricLrngData()->VehLrndFric[Index_Cnt_T_u08] + (Rte_Prm_SysFricLrngIgnCycFricChgLim_Val()));
		
		Rte_Pim_FricLrngData()->VehLrndFric[Index_Cnt_T_u08] = Lim_f32(VehLrndFric_HwNwtMtr_T_f32, VEHLRNDFRICLOLIM_ULS_F32, VEHLRNDFRICHILIM_ULS_F32);
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#define SysFricLrng_STOP_SEC_CODE
#include "SysFricLrng_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 