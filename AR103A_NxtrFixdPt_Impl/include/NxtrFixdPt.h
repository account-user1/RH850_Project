/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrFixdPt.h
* Module Description: Nexteer Fixed Point Library Header
* Project           : CBD
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/13/15  1.0      Selva         Initial EA4 version                                                           EA4#139
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRFIXDPT_H
#define NXTRFIXDPT_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.1]: Inline functions are used for Nexteer library macros to allow for throughput optimization */
/* MISRA-C:2004 Rule 8.5 [NXTRDEV 8.5.1]: Function definitions are required to be in a header for inline function usage */

/*********************************************** Exported Declarations ***********************************************/


INLINE FUNC(sint16, NxtrFixdPt_CODE) FloatToFixdWithRound_s16_f32(float32 Inp, float32 Mplr);
INLINE FUNC(sint32, NxtrFixdPt_CODE) FloatToFixdWithRound_s32_f32(float32 Inp, float32 Mplr);
INLINE FUNC(uint16, NxtrFixdPt_CODE) FloatToFixdWithRound_u16_f32(float32 Inp, float32 Mplr);
INLINE FUNC(uint32, NxtrFixdPt_CODE) FloatToFixdWithRound_u32_f32(float32 Inp, float32 Mplr);

INLINE FUNC(sint16, NxtrFixdPt_CODE) FloatToFixd_s16_f32(float32 Inp, float32 Mplr);
INLINE FUNC(sint32, NxtrFixdPt_CODE) FloatToFixd_s32_f32(float32 Inp, float32 Mplr);
INLINE FUNC(uint16, NxtrFixdPt_CODE) FloatToFixd_u16_f32(float32 Inp, float32 Mplr);
INLINE FUNC(uint32, NxtrFixdPt_CODE) FloatToFixd_u32_f32(float32 Inp, float32 Mplr);

INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_s16(sint16 Inp, float32 Mplr);
INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_s32(sint32 Inp, float32 Mplr);
INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_u16(uint16 Inp, float32 Mplr);
INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_u32(uint32 Inp, float32 Mplr);

/****************************************************** Macros *******************************************************/
#define NXTRFIXDPT_P0TOFLOAT_ULS_F32  1.0F
#define NXTRFIXDPT_FLOATTOP0_ULS_F32  1.0F


#define NXTRFIXDPT_P1TOFLOAT_ULS_F32  0.5F
#define NXTRFIXDPT_FLOATTOP1_ULS_F32  2.0F


#define NXTRFIXDPT_P2TOFLOAT_ULS_F32  0.25F
#define NXTRFIXDPT_FLOATTOP2_ULS_F32  4.0F


#define NXTRFIXDPT_P3TOFLOAT_ULS_F32  0.125F
#define NXTRFIXDPT_FLOATTOP3_ULS_F32  8.0F


#define NXTRFIXDPT_P4TOFLOAT_ULS_F32  0.0625F
#define NXTRFIXDPT_FLOATTOP4_ULS_F32  16.0F


#define NXTRFIXDPT_P5TOFLOAT_ULS_F32  0.03125F
#define NXTRFIXDPT_FLOATTOP5_ULS_F32  32.0F


#define NXTRFIXDPT_P6TOFLOAT_ULS_F32  0.015625F
#define NXTRFIXDPT_FLOATTOP6_ULS_F32  64.0F


#define NXTRFIXDPT_P7TOFLOAT_ULS_F32  0.0078125F
#define NXTRFIXDPT_FLOATTOP7_ULS_F32  128.0F


#define NXTRFIXDPT_P8TOFLOAT_ULS_F32  0.00390625F
#define NXTRFIXDPT_FLOATTOP8_ULS_F32  256.0F


#define NXTRFIXDPT_P9TOFLOAT_ULS_F32  0.001953125F
#define NXTRFIXDPT_FLOATTOP9_ULS_F32  512.0F


#define NXTRFIXDPT_P10TOFLOAT_ULS_F32  0.0009765625F
#define NXTRFIXDPT_FLOATTOP10_ULS_F32  1024.0F


#define NXTRFIXDPT_P11TOFLOAT_ULS_F32  0.00048828125F
#define NXTRFIXDPT_FLOATTOP11_ULS_F32  2048.0F


#define NXTRFIXDPT_P12TOFLOAT_ULS_F32  0.000244140625F
#define NXTRFIXDPT_FLOATTOP12_ULS_F32  4096.0F


#define NXTRFIXDPT_P13TOFLOAT_ULS_F32  0.0001220703125F
#define NXTRFIXDPT_FLOATTOP13_ULS_F32  8192.0F


#define NXTRFIXDPT_P14TOFLOAT_ULS_F32  6.103515625e-05F
#define NXTRFIXDPT_FLOATTOP14_ULS_F32  16384.0F


#define NXTRFIXDPT_P15TOFLOAT_ULS_F32  3.0517578125e-05F
#define NXTRFIXDPT_FLOATTOP15_ULS_F32  32768.0F


#define NXTRFIXDPT_P16TOFLOAT_ULS_F32  1.52587890625e-05F
#define NXTRFIXDPT_FLOATTOP16_ULS_F32  65536.0F


#define NXTRFIXDPT_P17TOFLOAT_ULS_F32  7.62939453125e-06F
#define NXTRFIXDPT_FLOATTOP17_ULS_F32  131072.0F


#define NXTRFIXDPT_P18TOFLOAT_ULS_F32  3.81469726562e-06F
#define NXTRFIXDPT_FLOATTOP18_ULS_F32  262144.0F


#define NXTRFIXDPT_P19TOFLOAT_ULS_F32  1.90734863281e-06F
#define NXTRFIXDPT_FLOATTOP19_ULS_F32  524288.0F


#define NXTRFIXDPT_P20TOFLOAT_ULS_F32  9.53674316406e-07F
#define NXTRFIXDPT_FLOATTOP20_ULS_F32  1048576.0F


#define NXTRFIXDPT_P21TOFLOAT_ULS_F32  4.76837158203e-07F
#define NXTRFIXDPT_FLOATTOP21_ULS_F32  2097152.0F


#define NXTRFIXDPT_P22TOFLOAT_ULS_F32  2.38418579102e-07F
#define NXTRFIXDPT_FLOATTOP22_ULS_F32  4194304.0F


#define NXTRFIXDPT_P23TOFLOAT_ULS_F32  1.19209289551e-07F
#define NXTRFIXDPT_FLOATTOP23_ULS_F32  8388608.0F


#define NXTRFIXDPT_P24TOFLOAT_ULS_F32  5.96046447754e-08F
#define NXTRFIXDPT_FLOATTOP24_ULS_F32  16777216.0F


#define NXTRFIXDPT_P25TOFLOAT_ULS_F32  2.98023223877e-08F
#define NXTRFIXDPT_FLOATTOP25_ULS_F32  33554432.0F


#define NXTRFIXDPT_P26TOFLOAT_ULS_F32  1.49011611938e-08F
#define NXTRFIXDPT_FLOATTOP26_ULS_F32  67108864.0F


#define NXTRFIXDPT_P27TOFLOAT_ULS_F32  7.45058059692e-09F
#define NXTRFIXDPT_FLOATTOP27_ULS_F32  134217728.0F


#define NXTRFIXDPT_P28TOFLOAT_ULS_F32  3.72529029846e-09F
#define NXTRFIXDPT_FLOATTOP28_ULS_F32  268435456.0F


#define NXTRFIXDPT_P29TOFLOAT_ULS_F32  1.86264514923e-09F
#define NXTRFIXDPT_FLOATTOP29_ULS_F32  536870912.0F


#define NXTRFIXDPT_P30TOFLOAT_ULS_F32  9.31322574615e-10F
#define NXTRFIXDPT_FLOATTOP30_ULS_F32  1073741824.0F


#define NXTRFIXDPT_P31TOFLOAT_ULS_F32  4.65661287308e-10F
#define NXTRFIXDPT_FLOATTOP31_ULS_F32  2147483648.0F


#define NXTRFIXDPT_P32TOFLOAT_ULS_F32  2.32830643654e-10F
#define NXTRFIXDPT_FLOATTOP32_ULS_F32  4294967296.0F

/********************** Inline functions******************************/

/*****************************************************************************
*  Name:        FloatToFixdWithRound_s16_f32  
*  Description: Converts the float to fixed point and rounds to the nearest integer
*  Inputs:      Single precision float and the multiplication factor derived from the Corresponding Macro   
*  Outputs:     16 bit signed number.         
*  Usage Notes: Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of signed 16 bit output. 
                 and must satisfy  -327678 <= inp1* Mplr <= 32767
*****************************************************************************/
INLINE FUNC(sint16, NxtrFixdPt_CODE) FloatToFixdWithRound_s16_f32(float32 Inp, float32 Mplr)
{
  return ( ((Inp < 0.0F) ? ((sint16)(sint32)(float32)((Inp * Mplr) - 0.5F)): ((sint16)(sint32)(float32)((Inp * Mplr) + 0.5F))));
}


/*****************************************************************************
*  Name:         FloatToFixdWithRound_s32_f32  
*  Description:  Converts the float to fixed point and rounds to the nearest integer
*  Inputs:       Single precision float and the multiplication factor derived from the Corresponding Macro   
*  Outputs:      32 bit signed number.        
*  Usage Notes:  Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of signed 32 bit output 
                 and  -(2^31)<=inp1* Mplr <=(2^31)-1
*****************************************************************************/
INLINE FUNC(sint32, NxtrFixdPt_CODE) FloatToFixdWithRound_s32_f32(float32 Inp, float32 Mplr)
{
  return ( ((Inp < 0.0F) ? ((sint32)(float32)((Inp * Mplr) - 0.5F)): ((sint32)(float32)((Inp * Mplr) + 0.5F))));
}


/*****************************************************************************
*  Name:         FloatToFixdWithRound_u16_f32  
*  Description:  Converts the float to fixed point and rounds to the nearest integer
*  Inputs:       Single precision float and the multiplication factor derived from the Corresponding Macro    
*  Outputs:      16 bit unsigned number.         
*  Usage Notes:  Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of unsigned 16 bit output.
                0<=inp1* Mplr <= (2^16)-1
*****************************************************************************/
INLINE FUNC(uint16, NxtrFixdPt_CODE) FloatToFixdWithRound_u16_f32(float32 Inp, float32 Mplr)
{
  return ((uint16)(uint32)(float32)((Inp * Mplr) + 0.5F));
}


/*****************************************************************************
*  Name:          FloatToFixdWithRound_u32_f32  
*  Description:   Converts the float to fixed point and rounds to the nearest integer
*  Inputs:        Single precision float and the multiplication factor derived from the Corresponding Macro    
*  Outputs:       32 bit unsigned number.         
*  Usage Notes:   Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of unsigned 32 bit output 
                   and must satisfy   0 =< inp1* Mplr <= (2^32)-1
*****************************************************************************/
INLINE FUNC(uint32, NxtrFixdPt_CODE) FloatToFixdWithRound_u32_f32(float32 Inp, float32 Mplr)
{
  return ((uint32)(float32)((Inp * Mplr) + 0.5F));
}



/*****************************************************************************
*  Name:         FloatToFixd_s16_f32  
*  Description:  Converts the float to corresponding Fixed point.
*  Inputs:       Single precision float and the multiplication factor derived from the Corresponding Macro .                    
*  Outputs:      16 bit signed number.         
*  Usage Notes:  Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of signed 16 bit output.
                 and must satisfy  -(2^15)<= inp1* Mplr <= (2^15)-1
*****************************************************************************/
INLINE FUNC(sint16, NxtrFixdPt_CODE) FloatToFixd_s16_f32(float32 Inp, float32 Mplr)
{
  return ((sint16)(sint32)(float32)(Inp * Mplr));
}


/*****************************************************************************
*  Name:         FloatToFixd_s32_f32  
*  Description:  Converts the float to corresponding Fixed point.
*  Inputs:       Single precision float and the multiplication factor derived from the Corresponding Macro .                    
*  Outputs:      32 bit signed number.         
*  Usage Notes:  Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of signed 32 bit output
                 and must satisfy   -(2^31) <=inp1 <= (2^31)-1
*****************************************************************************/
INLINE FUNC(sint32, NxtrFixdPt_CODE) FloatToFixd_s32_f32(float32 Inp, float32 Mplr)
{
  return ((sint32)(float32)(Inp * Mplr));
}


/*****************************************************************************
*  Name:         FloatToFixd_u16_f32  
*  Description:  Converts the float to corresponding Fixed point.
*  Inputs:       Single precision float and the multiplication factor derived from the Corresponding Macro .                    
*  Outputs:      16 bit unsigned number.         
*  Usage Notes:  Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of unsigned 16 bit output
                 and must satisfy 0<=inp1* Mplr <= (2^16)-1
*****************************************************************************/
INLINE FUNC(uint16, NxtrFixdPt_CODE) FloatToFixd_u16_f32(float32 Inp, float32 Mplr)
{
  return ((uint16)(uint32)(float32)(Inp * Mplr));
}


/*****************************************************************************
*  Name:         FloatToFixd_u32_f32  
*  Description:  Converts the float to corresponding Fixed point.
*  Inputs:       Single precision float and the multiplication factor derived from the Corresponding Macro .                    
*  Outputs:      32 bit unsigned number.         
*  Usage Notes:  Macro NXTRFIXDPT_FLOATTOP'X'_ULS_F32 shall be used where X is the precision of unsigned 32 bit output.
                  and must satisfy  0 <=inp1* Mplr <= (2^32)-1
*****************************************************************************/
INLINE FUNC(uint32, NxtrFixdPt_CODE) FloatToFixd_u32_f32(float32 Inp, float32 Mplr)
{
  return ((uint32)(float32)((Inp * Mplr) ));
}


/*****************************************************************************
*  Name:           FixdToFloat_f32_s16        
*  Description:    Converts the Fixed point signed 16 bit to single precision float.
*  Inputs:         16 bit signed integer and the multiplication factor derived from the Corresponding Macro .  
*  Outputs:        Single Precision Float        
*  Usage Notes:    Macro "NXTRFIXDPT_P'X'TOFLOAT_ULS_F32" shall be used where X is the precision of signed 16 bit input
                   and must satisfy -(2^15) <= Inp <= (2^15) -1
*****************************************************************************/
INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_s16(sint16 Inp, float32 Mplr)
{
  return ((float32)((float32)Inp * Mplr));
}


/*****************************************************************************
*  Name:           FixdToFloat_f32_s32        
*  Description:    Converts the Fixed point signed 32 bit to single precision float.
*  Inputs:         32 bit signed integer and the multiplication factor derived from the Corresponding Macro .  
*  Outputs:        Single Precision Float        
*  Usage Notes:    Macro "NXTRFIXDPT_P'X'TOFLOAT_ULS_F32" shall be used where X is the precision of signed 32 bit input
*                   and must satisfy -(2^31) <= Inp <= (2^31)-1   
*****************************************************************************/
INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_s32(sint32 Inp, float32 Mplr)
{
  return ((float32)((float32)Inp * Mplr));
}


/*****************************************************************************
*  Name:           FixdToFloat_f32_u16        
*  Description:    Converts the Fixed point unsigned 16 bit to single precision float.
*  Inputs:         16 bit unsigned integer and the multiplication factor derived from the Corresponding Macro .  
*  Outputs:        Single Precision Float        
*  Usage Notes:    Macro "NXTRFIXDPT_P'X'TOFLOAT_ULS_F32" shall be used where X is the precision of unsigned 16 bit input
                   and must satisfy 0<=Inp <= (2^16)-1
*****************************************************************************/
INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_u16(uint16 Inp, float32 Mplr)
{
  return ((float32)((float32)Inp * Mplr));
}


/*****************************************************************************
*  Name:           FixdToFloat_f32_u32       
*  Description:    Converts the Fixed point unsigned 32 bit to single precision float.
*  Inputs:         32 bit unsigned integer and the multiplication factor derived from the Corresponding Macro .  
*  Outputs:        Single Precision Float        
*  Usage Notes:    Macro "NXTRFIXDPT_P'X'TOFLOAT_ULS_F32" shall be used where X is the precision of unsigned 32 bit input
     and must satisfy 0<=Inp <= (2^32)-1
*****************************************************************************/
INLINE FUNC(float32, NxtrFixdPt_CODE) FixdToFloat_f32_u32(uint32 Inp, float32 Mplr)
{
  return ((float32)((float32)Inp * Mplr));
}

/******************************************/
#endif
