
/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "NxtrFixdPt.h"
#include "NxtrFixdPt_TestHarness.h"



FUNC(sint16, NxtrFixd_CODE) Test_FloatToFixdWithRound_s16_f32(float32 Inp1, float32 Mpl1)
        {
	         return(FloatToFixdWithRound_s16_f32( Inp1,  Mpl1));
        }
FUNC(sint32, NxtrFixd_CODE) Test_FloatToFixdWithRound_s32_f32(float32 Inp1, float32 Mpl1)
		{
			return(FloatToFixdWithRound_s32_f32( Inp1,  Mpl1));
		}
FUNC(uint16, NxtrFixd_CODE) Test_FloatToFixdWithRound_u16_f32(float32 Inp1, float32 Mpl1)
		{
			return(FloatToFixdWithRound_u16_f32( Inp1,  Mpl1));
		}
FUNC(uint32, NxtrFixd_CODE) Test_FloatToFixdWithRound_u32_f32(float32 Inp1, float32 Mpl1)
		{
			return(FloatToFixdWithRound_u32_f32( Inp1,  Mpl1));
		}

FUNC(sint16, NxtrFixd_CODE) Test_FloatToFixd_s16_f32(float32 Inp1, float32 Mpl1)
		{
	return	  FloatToFixd_s16_f32( Inp1,  Mpl1);
		}
FUNC(sint32, NxtrFixd_CODE) Test_FloatToFixd_s32_f32(float32 Inp1, float32 Mpl1)
		{
	return	FloatToFixd_s32_f32( Inp1,  Mpl1);
		}
FUNC(uint16, NxtrFixd_CODE) Test_FloatToFixd_u16_f32(float32 Inp1, float32 Mpl1)
		{
	return	FloatToFixd_u16_f32( Inp1,  Mpl1);
		}
FUNC(uint32, NxtrFixd_CODE) Test_FloatToFixd_u32_f32(float32 Inp1, float32 Mpl1)
		{
	return	FloatToFixd_u32_f32( Inp1,  Mpl1);
		}

FUNC(float32, NxtrFixd_CODE) Test_FixdToFloat_f32_s16(sint16 Inp1, float32 Mpl1)
		{
	return FixdToFloat_f32_s16( Inp1,  Mpl1);
		}
FUNC(float32, NxtrFixd_CODE) Test_FixdToFloat_f32_s32(sint32 Inp1, float32 Mpl1)
		{
	return  FixdToFloat_f32_s32( Inp1,  Mpl1);
		}
FUNC(float32, NxtrFixd_CODE) Test_FixdToFloat_f32_u16(uint16 Inp1, float32 Mpl1)
		{
	return   FixdToFloat_f32_u16( Inp1,  Mpl1);
		}
FUNC(float32, NxtrFixd_CODE) Test_FixdToFloat_f32_u32(uint32 Inp1, float32 Mpl1)
		{
	return  FixdToFloat_f32_u32( Inp1,  Mpl1);
		}
