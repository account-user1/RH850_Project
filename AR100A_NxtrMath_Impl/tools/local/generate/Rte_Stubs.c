/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#include "Rte_NxtrMath.h"
#include "float.h"
#include "Rte_Stubs.h"


/*** Server Port Stubs ***/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NxtrMath_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
{
    NxtrMath_Srv_SetNtcSts_NtcNr = NtcNr_Arg;
    NxtrMath_Srv_SetNtcSts_NtcStInfo = NtcStInfo_Arg;
    NxtrMath_Srv_SetNtcSts_NtcSts = NtcSts_Arg;
    NxtrMath_Srv_SetNtcSts_DebStep = DebStep_Arg;
    return NxtrMath_Srv_SetNtcSts_Return;
}


/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
    NxtrMathInit1();
    NxtrMathPer1();
	Test_Blnd_f32(NxtrMath_Test_Blnd_Inp1, NxtrMath_Test_Blnd_Inp2, NxtrMath_Test_Blnd_Fac);
	Test_Abslt_u08_s08(NxtrMath_Test_Abslt_s08_Inp);
	Test_Abslt_u16_s16(NxtrMath_Test_Abslt_s16_Inp);
	Test_Abslt_u32_s32(NxtrMath_Test_Abslt_s32_Inp);
	Test_Abslt_f32_f32(NxtrMath_Test_Abslt_f32_Inp);
	Test_Sign_s08_s08(NxtrMath_Test_Sign_s08_Inp);
	Test_Sign_s08_s16(NxtrMath_Test_Sign_s16_Inp);
	Test_Sign_s08_s32(NxtrMath_Test_Sign_s32_Inp);
	Test_Sign_s08_f32(NxtrMath_Test_Sign_f32_Inp);
	Test_Min_s08(NxtrMath_Test_Min_s08_Inp1, NxtrMath_Test_Min_s08_Inp2);
	Test_Min_u08(NxtrMath_Test_Min_u08_Inp1, NxtrMath_Test_Min_u08_Inp2);
	Test_Min_s16(NxtrMath_Test_Min_s16_Inp1, NxtrMath_Test_Min_s16_Inp2);
	Test_Min_u16(NxtrMath_Test_Min_u16_Inp1, NxtrMath_Test_Min_u16_Inp2);
	Test_Min_s32(NxtrMath_Test_Min_s32_Inp1, NxtrMath_Test_Min_s32_Inp2);
	Test_Min_u32(NxtrMath_Test_Min_u32_Inp1, NxtrMath_Test_Min_u32_Inp2);
	Test_Min_f32(NxtrMath_Test_Min_f32_Inp1, NxtrMath_Test_Min_f32_Inp2);
	Test_Max_s08(NxtrMath_Test_Max_s08_Inp1, NxtrMath_Test_Max_s08_Inp2);
	Test_Max_u08(NxtrMath_Test_Max_u08_Inp1, NxtrMath_Test_Max_u08_Inp2);
	Test_Max_s16(NxtrMath_Test_Max_s16_Inp1, NxtrMath_Test_Max_s16_Inp2);
	Test_Max_u16(NxtrMath_Test_Max_u16_Inp1, NxtrMath_Test_Max_u16_Inp2);
	Test_Max_s32(NxtrMath_Test_Max_s32_Inp1, NxtrMath_Test_Max_s32_Inp2);
	Test_Max_u32(NxtrMath_Test_Max_u32_Inp1, NxtrMath_Test_Max_u32_Inp2);
	Test_Max_f32(NxtrMath_Test_Max_f32_Inp1, NxtrMath_Test_Max_f32_Inp2);
	Test_Lim_s08(NxtrMath_Test_Lim_s08_Inp, NxtrMath_Test_Lim_s08_RngLo, NxtrMath_Test_Lim_s08_RngHi);
	Test_Lim_u08(NxtrMath_Test_Lim_u08_Inp, NxtrMath_Test_Lim_u08_RngLo, NxtrMath_Test_Lim_u08_RngHi);
	Test_Lim_s16(NxtrMath_Test_Lim_s16_Inp, NxtrMath_Test_Lim_s16_RngLo, NxtrMath_Test_Lim_s16_RngHi);
	Test_Lim_u16(NxtrMath_Test_Lim_u16_Inp, NxtrMath_Test_Lim_u16_RngLo, NxtrMath_Test_Lim_u16_RngHi);
	Test_Lim_s32(NxtrMath_Test_Lim_s32_Inp, NxtrMath_Test_Lim_s32_RngLo, NxtrMath_Test_Lim_s32_RngHi);
	Test_Lim_u32(NxtrMath_Test_Lim_u32_Inp, NxtrMath_Test_Lim_u32_RngLo, NxtrMath_Test_Lim_u32_RngHi);
	Test_Lim_f32(NxtrMath_Test_Lim_f32_Inp, NxtrMath_Test_Lim_f32_RngLo, NxtrMath_Test_Lim_f32_RngHi);
	Test_Arctan2_f32(NxtrMath_Test_Arctan2_Numer, NxtrMath_Test_Arctan2_Denom);
	Test_Sin_f32(NxtrMath_Test_Sin_Inp);
	Test_Cos_f32(NxtrMath_Test_Cos_Inp);
	Test_Exp_f32(NxtrMath_Test_Exp_Inp);
	Test_Sqrt_f32(NxtrMath_Test_Sqrt_Inp);
	Test_Mod_f32(NxtrMath_Test_Mod_Numer, NxtrMath_Test_Mod_Denom);
	__gh_set_errno(NxtrMath_errno_Inp);
}

