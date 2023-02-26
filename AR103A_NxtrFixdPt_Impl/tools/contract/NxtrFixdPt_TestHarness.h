
#ifndef NXTRFIXDPT_TESTHARNESS_H
#define NXTRFIXDPT_TESTHARNESS_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

FUNC(sint16, NxtrFixdpt_Code) Test_FloatToFixdWithRound_s16_f32(float32 Inp1, float32 Mpl1);
FUNC(sint32, NxtrFixdpt_Code) Test_FloatToFixdWithRound_s32_f32(float32 Inp1, float32 Mpl1);
FUNC(uint16, NxtrFixdpt_Code) Test_FloatToFixdWithRound_u16_f32(float32 Inp1, float32 Mpl1);
FUNC(uint32, NxtrFixdpt_Code) Test_FloatToFixdWithRound_u32_f32(float32 Inp1, float32 Mpl1);

FUNC(sint16, NxtrFixdpt_Code) Test_FloatToFixd_s16_f32(float32 Inp1, float32 Mpl1);
FUNC(sint32, NxtrFixdpt_Code) Test_FloatToFixd_s32_f32(float32 Inp1, float32 Mpl1);
FUNC(uint16, NxtrFixdpt_Code) Test_FloatToFixd_u16_f32(float32 Inp1, float32 Mpl1);
FUNC(uint32, NxtrFixdpt_Code) Test_FloatToFixd_u32_f32(float32 Inp1, float32 Mpl1);

FUNC(float32, NxtrFixdpt_Code) Test_FixdToFloat_f32_s16(sint16 Inp1, float32 Mpl1);
FUNC(float32, NxtrFixdpt_Code) Test_FixdToFloat_f32_s32(sint32 Inp1, float32 Mpl1);
FUNC(float32, NxtrFixdpt_Code) Test_FixdToFloat_f32_u16(uint16 Inp1, float32 Mpl1);
FUNC(float32, NxtrFixdpt_Code) Test_FixdToFloat_f32_u32(uint32 Inp1, float32 Mpl1);















#endif
