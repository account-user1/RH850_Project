/***********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name: SerlComFct.h
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
#ifndef SERLCOMFCT_H
#define SERLCOMFCT_H

#include "CmnMfgSrvFct.h"


/* ================================================================================================================== */
/* Global Function Prototypes */
/* ------------------------------------------------------------------------------------------------------------------ */
FUNC(uint32, AUTOMATIC) ScaleSignal_u32(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
												VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
												VAR(float32, AUTOMATIC) Offset_Uls_T_f32);
FUNC(uint16, AUTOMATIC) ScaleSignal_u16(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
												VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
												VAR(float32, AUTOMATIC) Offset_Uls_T_f32);
FUNC(uint8, AUTOMATIC) ScaleSignal_u8(		VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
												VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
												VAR(float32, AUTOMATIC) Offset_Uls_T_f32);
FUNC(uint32, AUTOMATIC) ScaleSignal_s32(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
												VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
												VAR(float32, AUTOMATIC) Offset_Uls_T_f32);
FUNC(uint16, AUTOMATIC) ScaleSignal_s16(	VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
												VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
												VAR(float32, AUTOMATIC) Offset_Uls_T_f32);
FUNC(uint8, AUTOMATIC) ScaleSignal_s8(		VAR(float32, AUTOMATIC) Signal_Uls_T_f32, VAR(float32, AUTOMATIC) LoLmt_Uls_T_f32,
												VAR(float32, AUTOMATIC) HiLmt_Uls_T_f32, VAR(float32, AUTOMATIC) Scale_Uls_T_f32,
												VAR(float32, AUTOMATIC) Offset_Uls_T_f32);															
#endif
/* End of File: SerlComFct.h */
