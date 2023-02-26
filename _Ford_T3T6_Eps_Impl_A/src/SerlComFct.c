/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: SerlComFct.c
* Module Description: Serial Communication Utility Functions Header
* Project           : Ford T3T6
* Author            : Xin Liu
************************************************************************************************************************
* Version Control:
* %version:         1 %
* %derived_by:      gz324f %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 02/16/18  1        XL        Initial file creation                                                        EA4#20166
***********************************************************************************************************************/

#include "SerlComFct.h"

/**********************************************************************************************************************
 * Function: 	ScaleSignal_u32
 *
 * Inputs:		Signal to be scaled, Limits, Scale and offset
 *
 * Outputs: 	returns scaled and limited signal
 *
 * Scales and limits the input signal based on the passed input parameters
 *
 *********************************************************************************************************************/
FUNC(uint32, AUTOMATIC) ScaleSignal_u32(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
											VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
											VAR(float32, AUTOMATIC) Offset_Uls_T_f32)
{
	VAR(uint32, AUTOMATIC) Signal_Cnt_T_u32;

	Signal_Uls_T_f32 = Lim_f32(Signal_Uls_T_f32, LoLmt_Uls_T_f32, HiLmt_Uls_T_f32);
	Signal_Uls_T_f32 = (Signal_Uls_T_f32 + Offset_Uls_T_f32) * Scale_Uls_T_f32;
	Signal_Cnt_T_u32 = (uint32)Signal_Uls_T_f32;

	return Signal_Cnt_T_u32;
}

/**********************************************************************************************************************
 * Function: 	ScaleSignal_u16
 *
 * Inputs:		Signal to be scaled, Limits, Scale and offset
 *
 * Outputs: 	returns scaled and limited signal
 *
 * Scales and limits the input signal based on the passed input parameters
 *
 *********************************************************************************************************************/
FUNC(uint16, AUTOMATIC) ScaleSignal_u16(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
											VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
											VAR(float32, AUTOMATIC) Offset_Uls_T_f32)
{
	VAR(uint16, AUTOMATIC) Signal_Cnt_T_u16;

	Signal_Uls_T_f32 = Lim_f32(Signal_Uls_T_f32, LoLmt_Uls_T_f32, HiLmt_Uls_T_f32);
	Signal_Uls_T_f32 = (Signal_Uls_T_f32 + Offset_Uls_T_f32) * Scale_Uls_T_f32;
	Signal_Cnt_T_u16 = (uint16)Signal_Uls_T_f32;

	return Signal_Cnt_T_u16;
}

/**********************************************************************************************************************
 * Function: 	ScaleSignal_u8
 *
 * Inputs:		Signal to be scaled, Limits, Scale and offset
 *
 * Outputs: 	returns scaled and limited signal
 *
 * Scales and limits the input signal based on the passed input parameters
 *
 *********************************************************************************************************************/
FUNC(uint8, AUTOMATIC) ScaleSignal_u8(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
										VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
										VAR(float32, AUTOMATIC) Offset_Uls_T_f32)
{
	VAR(uint8, AUTOMATIC) Signal_Cnt_T_u8;

	Signal_Uls_T_f32 = Lim_f32(Signal_Uls_T_f32, LoLmt_Uls_T_f32, HiLmt_Uls_T_f32);
	Signal_Uls_T_f32 = (Signal_Uls_T_f32 + Offset_Uls_T_f32) * Scale_Uls_T_f32;
	Signal_Cnt_T_u8 = (uint8)Signal_Uls_T_f32;

	return Signal_Cnt_T_u8;
}

/**********************************************************************************************************************
 * Function: 	ScaleSignal_s32
 *
 * Inputs:		Signal to be scaled, Limits, Scale and offset
 *
 * Outputs: 	returns scaled and limited signal
 *
 * Scales and limits the input signal based on the passed input parameters
 *
 *********************************************************************************************************************/
FUNC(uint32, AUTOMATIC) ScaleSignal_s32(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
											VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
											VAR(float32, AUTOMATIC) Offset_Uls_T_f32)
{
	VAR(uint32, AUTOMATIC) Signal_Cnt_T_s32;

	Signal_Uls_T_f32 = Lim_f32(Signal_Uls_T_f32, LoLmt_Uls_T_f32, HiLmt_Uls_T_f32);
	Signal_Uls_T_f32 = (Signal_Uls_T_f32 + Offset_Uls_T_f32) * Scale_Uls_T_f32;
	Signal_Cnt_T_s32 = (sint32)Signal_Uls_T_f32;

	return Signal_Cnt_T_s32;
}

/**********************************************************************************************************************
 * Function: 	ScaleSignal_s16
 *
 * Inputs:		Signal to be scaled, Limits, Scale and offset
 *
 * Outputs: 	returns scaled and limited signal
 *
 * Scales and limits the input signal based on the passed input parameters
 *
 *********************************************************************************************************************/
FUNC(uint16, AUTOMATIC) ScaleSignal_s16(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
											VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
											VAR(float32, AUTOMATIC) Offset_Uls_T_f32)
{
	VAR(uint16, AUTOMATIC) Signal_Cnt_T_s16;

	Signal_Uls_T_f32 = Lim_f32(Signal_Uls_T_f32, LoLmt_Uls_T_f32, HiLmt_Uls_T_f32);
	Signal_Uls_T_f32 = (Signal_Uls_T_f32 + Offset_Uls_T_f32) * Scale_Uls_T_f32;
	Signal_Cnt_T_s16 = (sint16)Signal_Uls_T_f32;

	return Signal_Cnt_T_s16;
}

/**********************************************************************************************************************
 * Function: 	ScaleSignal_s8
 *
 * Inputs:		Signal to be scaled, Limits, Scale and offset
 *
 * Outputs: 	returns scaled and limited signal
 *
 * Scales and limits the input signal based on the passed input parameters
 *
 *********************************************************************************************************************/
FUNC(uint8, AUTOMATIC) ScaleSignal_s8(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
										VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
										VAR(float32, AUTOMATIC) Offset_Uls_T_f32)
{
	VAR(uint8, AUTOMATIC) Signal_Cnt_T_s8;

	Signal_Uls_T_f32 = Lim_f32(Signal_Uls_T_f32, LoLmt_Uls_T_f32, HiLmt_Uls_T_f32);
	Signal_Uls_T_f32 = (Signal_Uls_T_f32 + Offset_Uls_T_f32) * Scale_Uls_T_f32;
	Signal_Cnt_T_s8 = (sint8)Signal_Uls_T_f32;

	return Signal_Cnt_T_s8;
}
