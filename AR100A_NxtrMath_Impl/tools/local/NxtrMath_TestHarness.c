
/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "NxtrMath.h"
#include "NxtrMath_TestHarness.h"

FUNC(float32, NxtrMath_CODE) Test_Blnd_f32(float32 Inp1,
											 float32 Inp2,
											 float32 Fac)
{
	return(Blnd_f32(Inp1, Inp2, Fac));
}

FUNC(uint8, NxtrMath_CODE) Test_Abslt_u08_s08(sint8 Inp)
{
	return(Abslt_u08_s08(Inp));
}

FUNC(uint16, NxtrMath_CODE) Test_Abslt_u16_s16(sint16 Inp)
{
	return(Abslt_u16_s16(Inp));
}

FUNC(uint32, NxtrMath_CODE) Test_Abslt_u32_s32(sint32 Inp)
{
	return(Abslt_u32_s32(Inp));
}

FUNC(float32, NxtrMath_CODE) Test_Abslt_f32_f32(float32 Inp)
{
	return(Abslt_f32_f32(Inp));
}

FUNC(sint8, NxtrMath_CODE) Test_Sign_s08_s08(sint8 Inp)
{
	return(Sign_s08_s08(Inp));
}

FUNC(sint8, NxtrMath_CODE) Test_Sign_s08_s16(sint16 Inp)
{
	return(Sign_s08_s16(Inp));
}

FUNC(sint8, NxtrMath_CODE) Test_Sign_s08_s32(sint32 Inp)
{
	return(Sign_s08_s32(Inp));
}

FUNC(sint8, NxtrMath_CODE) Test_Sign_s08_f32(float32 Inp)
{
	return(Sign_s08_f32(Inp));
}

FUNC(sint8, NxtrMath_CODE) Test_Min_s08(sint8 Inp1,
										sint8 Inp2)
{
	return(Min_s08(Inp1, Inp2));
}

FUNC(uint8, NxtrMath_CODE) Test_Min_u08(uint8 Inp1,
										uint8 Inp2)
{
	return(Min_u08(Inp1, Inp2));
}

FUNC(sint16, NxtrMath_CODE) Test_Min_s16(sint16 Inp1,
											sint16 Inp2)
{
	return(Min_s16(Inp1, Inp2));
}

FUNC(uint16, NxtrMath_CODE) Test_Min_u16(uint16 Inp1,
											uint16 Inp2)
{
	return(Min_u16(Inp1, Inp2));
}

FUNC(sint32, NxtrMath_CODE) Test_Min_s32(sint32 Inp1,
											sint32 Inp2)
{
	return(Min_s32(Inp1, Inp2));
}

FUNC(uint32, NxtrMath_CODE) Test_Min_u32(uint32 Inp1,
											uint32 Inp2)
{
	return(Min_u32(Inp1, Inp2));
}

FUNC(float32, NxtrMath_CODE) Test_Min_f32(float32 Inp1,
											float32 Inp2)
{
	return(Min_f32(Inp1, Inp2));
}

FUNC(sint8, NxtrMath_CODE) Test_Max_s08(sint8 Inp1,
										sint8 Inp2)
{
	return(Max_s08(Inp1, Inp2));
}

FUNC(uint8, NxtrMath_CODE) Test_Max_u08(uint8 Inp1,
										uint8 Inp2)
{
	return(Max_u08(Inp1, Inp2));
}

FUNC(sint16, NxtrMath_CODE) Test_Max_s16(sint16 Inp1,
											sint16 Inp2)
{
	return(Max_s16(Inp1, Inp2));
}

FUNC(uint16, NxtrMath_CODE) Test_Max_u16(uint16 Inp1,
											uint16 Inp2)
{
	return(Max_u16(Inp1, Inp2));
}

FUNC(sint32, NxtrMath_CODE) Test_Max_s32(sint32 Inp1,
											sint32 Inp2)
{
	return(Max_s32(Inp1, Inp2));
}

FUNC(uint32, NxtrMath_CODE) Test_Max_u32(uint32 Inp1,
											uint32 Inp2)
{
	return(Max_u32(Inp1, Inp2));
}

FUNC(float32, NxtrMath_CODE) Test_Max_f32(float32 Inp1,
											float32 Inp2)
{
	return(Max_f32(Inp1, Inp2));
}	

FUNC(sint8, NxtrMath_CODE) Test_Lim_s08(sint8 Inp,
											sint8 RngLo,
											sint8 RngHi)
{
	return(Lim_s08(Inp, RngLo, RngHi));
}

FUNC(uint8, NxtrMath_CODE) Test_Lim_u08(uint8 Inp,
											uint8 RngLo,
											uint8 RngHi)
{
	return(Lim_u08(Inp, RngLo, RngHi));
}

FUNC(sint16, NxtrMath_CODE) Test_Lim_s16(sint16 Inp,
											sint16 RngLo,
											sint16 RngHi)
{
	return(Lim_s16(Inp, RngLo, RngHi));
}

FUNC(uint16, NxtrMath_CODE) Test_Lim_u16(uint16 Inp,
											uint16 RngLo,
											uint16 RngHi)
{
	return(Lim_u16(Inp, RngLo, RngHi));
}

FUNC(sint32, NxtrMath_CODE) Test_Lim_s32(sint32 Inp,
											sint32 RngLo,
											sint32 RngHi)
{
	return(Lim_s32(Inp, RngLo, RngHi));
}

FUNC(uint32, NxtrMath_CODE) Test_Lim_u32(uint32 Inp,
											uint32 RngLo,
											uint32 RngHi)
{
	return(Lim_u32(Inp, RngLo, RngHi));
}

FUNC(float32, NxtrMath_CODE) Test_Lim_f32(float32 Inp,
												float32 RngLo,
												float32 RngHi)
{
	return(Lim_f32(Inp, RngLo, RngHi));
}

FUNC(float32, NxtrMath_CODE) Test_Arctan2_f32(float32 Numer,
												float32 Denom)
{
	return(Arctan2_f32(Numer, Denom));
}

FUNC(float32, NxtrMath_CODE) Test_Sin_f32(float32 Inp)
{
	return(Sin_f32(Inp));
}

FUNC(float32, NxtrMath_CODE) Test_Cos_f32(float32 Inp)
{
	return(Cos_f32(Inp));
}

FUNC(float32, NxtrMath_CODE) Test_Exp_f32(float32 Inp)
{
	return(Exp_f32(Inp));
}

FUNC(float32, NxtrMath_CODE) Test_Sqrt_f32(float32 Inp)
{
	return(Sqrt_f32(Inp));
}

FUNC(float32, NxtrMath_CODE) Test_Mod_f32(float32 Numer,
												float32 Denom)
{
	return(Mod_f32(Numer, Denom));
}	


