/**********************************************************************************************************************
* Copyright 2015,2016,2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrMath.h
* Module Description: Nexteer Math Library Header
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 02/04/15  1        LWW       Initial Version                                                                 EA4#73
* 09/29/15  2        Rijvi     Add new sine & cosine algorithm                                                 EA4#1758
* 07/01/16  3        KK        Moving sine lookup function to the Nexteer math library from SF107A.            EA4#6438
* 03/15/17  4        AJM       Moved few constants to architecture global paramters and corrected few values   EA4#10365
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRMATH_H
#define NXTRMATH_H

/************************************************ Include Statements *************************************************/
#include <math.h>
#include "Std_Types.h"
#include "ArchGlbPrm.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.1]: Inline functions are used for Nexteer Math library macros to allow for throughput optimization */
/* MISRA-C:2004 Rule 8.5 [NXTRDEV 8.5.1]: Function definitions are required to be in a header for inline function usage */

/****************************************************** Macros *******************************************************/

/* MISRA-C:2004 Rule 19.7 [NXTRDEV 19.7.1]: This rule is only intended to apply in situations where a function call is permitted.  This macro is targeted 
											for the pre-processor to resolve to a constant and therefore a function call is not permitted */ 
#define TblSize_m(Tbl)   (sizeof(Tbl)/sizeof((Tbl)[0]))


/********************************************* Embedded Local Constants **********************************************/
#define SIN22PT5DEG_ULS_F32     0.38268344F          /* SIn(22.5deg) */ 
#define SIN45PT0DEG_ULS_F32     0.7071066F           /* Sin(45.0deg) */
#define SIN67PT5DEG_ULS_F32     0.9238794F           /* Sin(67.5deg) */
#define ONEOVERSIX_ULS_F32      0.16666667F          /* (1.0F/6.0F)  One over 3 factorial*/
#define ONEOVERTWO_ULS_F32      0.5F                 /* (1.0F/2.0F) One over 2 factorial*/
#define PI_REV_F32              0.5F                 /* Pi Revs */
#define PIOVER2_REV_F32         0.25F                /* Pi by 2 Revs */
/* Not used the NxtrFixdPt constants to avoid dependency on NxtrFixdPt component */
#define FLOATTOP11_ULS_F32      2048.0F              /* Float to P11 */ 
#define P16TOFLOAT_ULS_F32      1.52587890625e-05F   /* Fixed P16 to float 32 */


/*********************************************** Exported Declarations ***********************************************/
INLINE FUNC(float32, NxtrMath_CODE) Blnd_f32(float32 Inp1,
											 float32 Inp2,
											 float32 Fac);

INLINE FUNC(uint8, NxtrMath_CODE) Abslt_u08_s08(sint8 Inp);

INLINE FUNC(uint16, NxtrMath_CODE) Abslt_u16_s16(sint16 Inp);

INLINE FUNC(uint32, NxtrMath_CODE) Abslt_u32_s32(sint32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Abslt_f32_f32(float32 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s08(sint8 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s16(sint16 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s32(sint32 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_f32(float32 Inp);

INLINE FUNC(sint8, NxtrMath_CODE) Min_s08(sint8 Inp1,
										sint8 Inp2);

INLINE FUNC(uint8, NxtrMath_CODE) Min_u08(uint8 Inp1,
										uint8 Inp2);

INLINE FUNC(sint16, NxtrMath_CODE) Min_s16(sint16 Inp1,
											sint16 Inp2);

INLINE FUNC(uint16, NxtrMath_CODE) Min_u16(uint16 Inp1,
											uint16 Inp2);

INLINE FUNC(sint32, NxtrMath_CODE) Min_s32(sint32 Inp1,
											sint32 Inp2);

INLINE FUNC(uint32, NxtrMath_CODE) Min_u32(uint32 Inp1,
											uint32 Inp2);

INLINE FUNC(float32, NxtrMath_CODE) Min_f32(float32 Inp1,
											float32 Inp2);

INLINE FUNC(sint8, NxtrMath_CODE) Max_s08(sint8 Inp1,
										sint8 Inp2);

INLINE FUNC(uint8, NxtrMath_CODE) Max_u08(uint8 Inp1,
										uint8 Inp2);

INLINE FUNC(sint16, NxtrMath_CODE) Max_s16(sint16 Inp1,
											sint16 Inp2);

INLINE FUNC(uint16, NxtrMath_CODE) Max_u16(uint16 Inp1,
											uint16 Inp2);

INLINE FUNC(sint32, NxtrMath_CODE) Max_s32(sint32 Inp1,
											sint32 Inp2);

INLINE FUNC(uint32, NxtrMath_CODE) Max_u32(uint32 Inp1,
											uint32 Inp2);

INLINE FUNC(float32, NxtrMath_CODE) Max_f32(float32 Inp1,
											float32 Inp2);

INLINE FUNC(sint8, NxtrMath_CODE) Lim_s08(sint8 Inp,
											sint8 RngLo,
											sint8 RngHi);

INLINE FUNC(uint8, NxtrMath_CODE) Lim_u08(uint8 Inp,
											uint8 RngLo,
											uint8 RngHi);

INLINE FUNC(sint16, NxtrMath_CODE) Lim_s16(sint16 Inp,
											sint16 RngLo,
											sint16 RngHi);

INLINE FUNC(uint16, NxtrMath_CODE) Lim_u16(uint16 Inp,
											uint16 RngLo,
											uint16 RngHi);

INLINE FUNC(sint32, NxtrMath_CODE) Lim_s32(sint32 Inp,
											sint32 RngLo,
											sint32 RngHi);

INLINE FUNC(uint32, NxtrMath_CODE) Lim_u32(uint32 Inp,
											uint32 RngLo,
											uint32 RngHi);

INLINE FUNC(float32, NxtrMath_CODE) Lim_f32(float32 Inp,
												float32 RngLo,
												float32 RngHi);

INLINE FUNC(float32, NxtrMath_CODE) Arctan2_f32(float32 Numer,
												float32 Denom);

INLINE FUNC(float32, NxtrMath_CODE) Sin_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Cos_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Exp_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Sqrt_f32(float32 Inp);

INLINE FUNC(float32, NxtrMath_CODE) Mod_f32(float32 Numer,
												float32 Denom);
												
INLINE FUNC(void, NxtrMath_CODE) SinCos_f32(float32 Inp,
												float32* SinVal,
												float32* CosVal);

INLINE FUNC(float32, NxtrMath_CODE) SinLookup(float32 Ag);
								
extern CONST(uint16, AUTOMATIC) NXTRMATH_SINCNVNCONTBL_ULS_U16[513];
/*****************************************************************************
*  Name:           Blnd_f32()
*  Description:    Unity gain blend of two input signals
*  Inputs:         Inp1 - first signal to be blended 
*				   Inp2 - second signal to be blended
*				   Fac - contribution of the second signal
*  Outputs:        Blended signal result
*  Usage Notes:    Fac input is constrained to min of 0.0 and max of 1.0 for
*                  proper functionality
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Blnd_f32(float32 Inp1,
											 float32 Inp2,
											 float32 Fac)
{
    return (((Inp1 * (1.0F - Fac)) + (Inp2 * Fac)));
}

/*****************************************************************************
*  Name:           Abslt_u08_s08()
*  Description:    8bit Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Abslt_u08_s08(sint8 Inp)
{
	/* Rollover in the following line of code will occur if Inp is -128, however, type castings will provide proper overall result */
    return (((Inp)>=0)?((uint8)(Inp)):((uint8)(sint8)(-(Inp))));
}

/*****************************************************************************
*  Name:           Abslt_u16_s16()
*  Description:    16bit Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Abslt_u16_s16(sint16 Inp)
{
	/* Rollover in the following line of code will occur if Inp is -32768, however, type castings will provide proper overall result */
    return (((Inp)>=0)?((uint16)(Inp)):((uint16)(sint16)(-(Inp))));
}

/*****************************************************************************
*  Name:           Abslt_u32_s32()
*  Description:    32bit Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Abslt_u32_s32(sint32 Inp)
{
	/* Rollover in the following line of code will occur if Inp is -2147483648, however, type castings will provide proper overall result */
    return (((Inp)>=0)?((uint32)(Inp)):((uint32)(sint32)(-(Inp))));
}

/*****************************************************************************
*  Name:           Abslt_f32_f32()
*  Description:    Single Precision Float Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Abslt_f32_f32(float32 Inp)
{
    return (fabsf(Inp));
}

/*****************************************************************************
*  Name:           Sign_s08_s08()
*  Description:    8bit Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s08(sint8 Inp)
{
    return (((Inp)>=0)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Sign_s08_s16()
*  Description:    16bit Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s16(sint16 Inp)
{
    return (((Inp)>=0)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Sign_s08_s32()
*  Description:    32bit Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_s32(sint32 Inp)
{
    return (((Inp)>=0)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Sign_s08_f32()
*  Description:    Single Precision Float Sign
*  Inputs:         Inp
*  Outputs:        Sign of input (inputs of zero treated as positive)
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Sign_s08_f32(float32 Inp)
{
    return (((Inp)>=0.0F)?((sint8)(1)):((sint8)-1));
}

/*****************************************************************************
*  Name:           Min_s08()
*  Description:    8bit signed minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Min_s08(sint8 Inp1,
										sint8 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_u08()
*  Description:    8bit unsigned minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Min_u08(uint8 Inp1,
										uint8 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_s16()
*  Description:    16bit signed minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint16, NxtrMath_CODE) Min_s16(sint16 Inp1,
											sint16 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_u16()
*  Description:    16bit unsigned minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Min_u16(uint16 Inp1,
											uint16 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_s32()
*  Description:    32bit signed minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint32, NxtrMath_CODE) Min_s32(sint32 Inp1,
											sint32 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_u32()
*  Description:    32bit unsigned minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Min_u32(uint32 Inp1,
											uint32 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Min_f32()
*  Description:    Single Precision Float minimum
*  Inputs:         Inp1, Inp2
*  Outputs:        Minimum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Min_f32(float32 Inp1,
											float32 Inp2)
{
    return (((Inp1)<=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_s08()
*  Description:    8bit signed maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Max_s08(sint8 Inp1,
										sint8 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_u08()
*  Description:    8bit unsigned maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Max_u08(uint8 Inp1,
										uint8 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_s16()
*  Description:    16bit signed maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint16, NxtrMath_CODE) Max_s16(sint16 Inp1,
											sint16 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_u16()
*  Description:    16bit unsigned maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Max_u16(uint16 Inp1,
											uint16 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_s32()
*  Description:    32bit signed maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint32, NxtrMath_CODE) Max_s32(sint32 Inp1,
											sint32 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_u32()
*  Description:    32bit unsigned maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Max_u32(uint32 Inp1,
											uint32 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}

/*****************************************************************************
*  Name:           Max_f32()
*  Description:    Single Precision Float maximum
*  Inputs:         Inp1, Inp2
*  Outputs:        Maximum of Inp1 and Inp2
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Max_f32(float32 Inp1,
											float32 Inp2)
{
    return (((Inp1)>=(Inp2))?(Inp1):(Inp2));
}


/*****************************************************************************
*  Name:           Lim_s08()
*  Description:    8bit signed limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint8, NxtrMath_CODE) Lim_s08(sint8 Inp,
											sint8 RngLo,
											sint8 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_u08()
*  Description:    8bit unsigned limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint8, NxtrMath_CODE) Lim_u08(uint8 Inp,
											uint8 RngLo,
											uint8 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_s16()
*  Description:    16bit signed limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint16, NxtrMath_CODE) Lim_s16(sint16 Inp,
											sint16 RngLo,
											sint16 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_u16()
*  Description:    16bit unsigned limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint16, NxtrMath_CODE) Lim_u16(uint16 Inp,
											uint16 RngLo,
											uint16 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_s32()
*  Description:    32bit signed limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(sint32, NxtrMath_CODE) Lim_s32(sint32 Inp,
											sint32 RngLo,
											sint32 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_u32()
*  Description:    32bit unsigned limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(uint32, NxtrMath_CODE) Lim_u32(uint32 Inp,
											uint32 RngLo,
											uint32 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Lim_f32()
*  Description:    Single Precision Float limit
*  Inputs:         Inp, RngLo, RngHi
*  Outputs:        Bounded value of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Lim_f32(float32 Inp,
												float32 RngLo,
												float32 RngHi)
{
    return (((Inp)>=(RngHi))?(RngHi):(((Inp)<=(RngLo))?(RngLo):(Inp)));
}

/*****************************************************************************
*  Name:           Arctan2_f32()
*  Description:    Single Precision Float Arctangent 2
*  Inputs:         Numer, Denom
*  Outputs:        Arctangent of Num/Den
*  Usage Notes:    Numer and Denom must not be both zero
*                  The output is in the range of -pi to pi radians
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Arctan2_f32(float32 Numer,
												float32 Denom)
{
    return (atan2f(Numer, Denom));
}

/*****************************************************************************
*  Name:           Sin_f32()
*  Description:    Single Precision Float Sine
*  Inputs:         Inp
*  Outputs:        Sine of input
*  Usage Notes:    Inp must be in radians
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Sin_f32(float32 Inp)
{
    return (sinf(Inp));
}

/*****************************************************************************
*  Name:           Cos_f32()
*  Description:    Single Precision Float Cosine
*  Inputs:         Inp
*  Outputs:        Cosine of input
*  Usage Notes:    Inp must be in radians
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Cos_f32(float32 Inp)
{
    return (cosf(Inp));
}

/*****************************************************************************
*  Name:           Exp_f32()
*  Description:    Single Precision Float Exponential
*  Inputs:         Inp
*  Outputs:        Exponential of input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Exp_f32(float32 Inp)
{
    return (expf(Inp));
}

/*****************************************************************************
*  Name:           Sqrt_f32()
*  Description:    Single Precision Float Square Root
*  Inputs:         Inp
*  Outputs:        Square Root of input
*  Usage Notes:    Input must not be negative
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Sqrt_f32(float32 Inp)
{
    return (sqrtf(Inp));
}

/*****************************************************************************
*  Name:           Mod_f32()
*  Description:    Single Precision Float Modulus
*  Inputs:         Numer, Denom
*  Outputs:        Remainder of Numer over Denom
*  Usage Notes:    The output sign is the same sign as Numer
*****************************************************************************/
INLINE FUNC(float32, NxtrMath_CODE) Mod_f32(float32 Numer,
												float32 Denom)
{
    return (fmodf(Numer, Denom));
}




/*****************************************************************************
*  Name:           SinCos_f32()
*  Description:    Optimized SinCos Algorithm
*  Inputs:         Inp, *SinVal, *CosVal
*  Outputs:        *SinVal = Sin(Inp) and *CosVal = Cosine(Inp)
*  Usage Notes:    Inp must be in radians.
*                  Input Range [-10000 to 10000]
*****************************************************************************/
INLINE FUNC(void, NxtrMath_CODE) SinCos_f32(float32 Inp,
												float32* SinVal,
												float32* CosVal)
{

	VAR(sint32,    AUTOMATIC)  n;
	VAR(uint8,     AUTOMATIC)  Normdn;
	VAR(float32,   AUTOMATIC)  InpSqd;
	VAR(float32,   AUTOMATIC)  SinA;
	VAR(float32,   AUTOMATIC)  CosA;
	VAR(float32,   AUTOMATIC)  Tmp; 
	
	
	Tmp = (Inp < 0.0F) ? ( (Inp * ARCHGLBPRM_EIGHTOVERPI_ULS_F32) - 0.5F  ) : ( (Inp * ARCHGLBPRM_EIGHTOVERPI_ULS_F32) + 0.5F ); 
	n = (sint32)Tmp;
	Inp = Inp - ((float32)n * ARCHGLBPRM_PIOVEREIGHT_ULS_F32); 	/* Determine 'A' part of 'Inp' angle. 'Inp' = 'A' + 'n' * 'B' */
	Normdn = (uint8)( (uint32)n & 0x0000000FU ); 		/* Determine normalized 'n' */
	    
	InpSqd = Inp * Inp;

	SinA = Inp * ( 1.0F - (InpSqd * ONEOVERSIX_ULS_F32) );
	CosA = 1.0F - (InpSqd  * ONEOVERTWO_ULS_F32);
	
	
	switch ( Normdn )
	{
		case 0U:
			*SinVal = SinA;
			*CosVal = CosA;
			break;
			
		case 1U:
			*SinVal = (SIN67PT5DEG_ULS_F32 * SinA) + (SIN22PT5DEG_ULS_F32 * CosA);
			*CosVal = (-SIN22PT5DEG_ULS_F32 * SinA) + (SIN67PT5DEG_ULS_F32 * CosA);
			break;
			
		case 2U:
			*SinVal = (SIN45PT0DEG_ULS_F32 * SinA) + (SIN45PT0DEG_ULS_F32 * CosA);
			*CosVal = (-SIN45PT0DEG_ULS_F32 * SinA) + (SIN45PT0DEG_ULS_F32 * CosA);
			break;
			
		case 3U:
			*SinVal = (SIN22PT5DEG_ULS_F32 * SinA) + (SIN67PT5DEG_ULS_F32 * CosA);
			*CosVal = (-SIN67PT5DEG_ULS_F32 * SinA) + (SIN22PT5DEG_ULS_F32 * CosA);
			break;
			
		case 4U:
			*SinVal = CosA;
			*CosVal = -SinA;
			break;
			
		case 5U:
			*SinVal = (-SIN22PT5DEG_ULS_F32 * SinA) + (SIN67PT5DEG_ULS_F32 * CosA);
			*CosVal = (-SIN67PT5DEG_ULS_F32 * SinA) + (-SIN22PT5DEG_ULS_F32 * CosA);
			break;
			
		case 6U:
			*SinVal = (-SIN45PT0DEG_ULS_F32 * SinA) +  (SIN45PT0DEG_ULS_F32 * CosA);
			*CosVal = (-SIN45PT0DEG_ULS_F32 * SinA) + (-SIN45PT0DEG_ULS_F32 * CosA);
			break;
			
		case 7U:
			*SinVal = (-SIN67PT5DEG_ULS_F32 * SinA) + (SIN22PT5DEG_ULS_F32 * CosA);
			*CosVal = (-SIN22PT5DEG_ULS_F32 * SinA) + (-SIN67PT5DEG_ULS_F32 * CosA);
			break;
			
		case 8U:
			*SinVal = -SinA;
			*CosVal = -CosA;
			break;
			
		case 9U:
			*SinVal = (-SIN67PT5DEG_ULS_F32 * SinA) + (-SIN22PT5DEG_ULS_F32 * CosA);
			*CosVal =  (SIN22PT5DEG_ULS_F32 * SinA) + (-SIN67PT5DEG_ULS_F32 * CosA);
			break;
			
		case 10U:
			*SinVal = (-SIN45PT0DEG_ULS_F32 * SinA) + (-SIN45PT0DEG_ULS_F32 * CosA);
			*CosVal =  (SIN45PT0DEG_ULS_F32 * SinA) + (-SIN45PT0DEG_ULS_F32 * CosA);
			break;
			
		case 11U:
			*SinVal = (-SIN22PT5DEG_ULS_F32 * SinA) + (-SIN67PT5DEG_ULS_F32 * CosA);
			*CosVal =  (SIN67PT5DEG_ULS_F32 * SinA) + (-SIN22PT5DEG_ULS_F32 * CosA);
			break;
			
		case 12U:
			*SinVal = -CosA;
			*CosVal =  SinA;
			break;
			
		case 13U:
			*SinVal =  (SIN22PT5DEG_ULS_F32 * SinA) + (-SIN67PT5DEG_ULS_F32 * CosA);
			*CosVal =  (SIN67PT5DEG_ULS_F32 * SinA) +  (SIN22PT5DEG_ULS_F32 * CosA);
			break;
			
		case 14U:
			*SinVal =  (SIN45PT0DEG_ULS_F32 * SinA) + (-SIN45PT0DEG_ULS_F32 * CosA);
			*CosVal =  (SIN45PT0DEG_ULS_F32 * SinA) +  (SIN45PT0DEG_ULS_F32 * CosA);
			break;
			
		/* case 15U:   */
		default :
			*SinVal =  (SIN67PT5DEG_ULS_F32 * SinA) + (-SIN22PT5DEG_ULS_F32 * CosA);
			*CosVal =  (SIN22PT5DEG_ULS_F32 * SinA) +  (SIN67PT5DEG_ULS_F32 * CosA);
			break;
			
	}

}


 /*****************************************************************************
 *
 *  Function Name:     SinLookup
 *	
 *  Description:       Sine lookup to improve throughput
 *
 *  Inputs:            Ag  (angle in radians)
 *
 *  Outputs:           SinVal_Uls_T_f32 (Output sine value- Precision of p8)
 *
 *****************************************************************************/

 INLINE FUNC(float32, NxtrMath_CODE) SinLookup(float32 Ag)
{
	VAR(float32, AUTOMATIC) Theta_Rev_T_f32;
	VAR(uint16,  AUTOMATIC) Theta_Cnt_T_u16;
	VAR(sint8, AUTOMATIC) SignFlip_Cnt_T_s08;
	VAR(float32, AUTOMATIC) SinVal_Uls_T_f32;

	Theta_Rev_T_f32 = Ag * ARCHGLBPRM_ONEOVER2PI_ULS_F32;
	
	Theta_Rev_T_f32 = Theta_Rev_T_f32 - ((float32)((sint32)Theta_Rev_T_f32)); /* casting used for 'mod 1' functionality */
	
	if( Theta_Rev_T_f32 < 0.0f )
	{
		Theta_Rev_T_f32 += 1.0f;
	}
	
	/* Conditioned: 0 <= Theta <= 1 */
	
	if( Theta_Rev_T_f32 > PI_REV_F32 )
	{
		SignFlip_Cnt_T_s08 = -1;
		Theta_Rev_T_f32 -= PI_REV_F32;
	}
	else
	{
		SignFlip_Cnt_T_s08 = 1;
	}
	
	if( Theta_Rev_T_f32 > PIOVER2_REV_F32 )
	{
		Theta_Rev_T_f32 = PI_REV_F32 - Theta_Rev_T_f32;
	}
	
	/* Conditioned: 0 <= Theta <= 0.25 */
	
	Theta_Cnt_T_u16 = (uint16)(uint32)(float32)(Theta_Rev_T_f32 * FLOATTOP11_ULS_F32);
	
	SinVal_Uls_T_f32 = ((float32)NXTRMATH_SINCNVNCONTBL_ULS_U16[Theta_Cnt_T_u16])*P16TOFLOAT_ULS_F32;
	
	
	SinVal_Uls_T_f32 = SinVal_Uls_T_f32 * (float32)SignFlip_Cnt_T_s08;
	
	
	return SinVal_Uls_T_f32;
}

#endif

