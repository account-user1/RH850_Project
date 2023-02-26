/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: CmnMfgSrvFct.c
* Module Description: Common Manufacturing Services Utility Functions
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         5 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 06/10/15  1        JWJ       Initial file creation                                                        EA4#881
* 07/16/15  2        JWJ       Corrected float conversion function for little endian format                 EA4#881
* 07/23/15  3        JWJ       MISRA corrections for union type on float/uint conversions                   EA4#1187
* 01/26/16  4        JWJ       Updates for newly generated function names                                   EA4#2518
***********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "CmnMfgSrvFct.h"
#include "CmnMfgSrv.h"


/* ================================================================================================================== */
/* Type Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */
typedef union
{
	float32 flt;
	uint8   chr[sizeof(float32)];
} FloatChar;



/* ================================================================================================================== */
/* Utility Function Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */
/**********************************************************************************************************************
 *        Name:  CmnMfgSrv_SynthesizeFloat
 * Description:  Turn an array of chars into a single floating point values.  Useful when parsing incoming CAN data
 *               containing floating point values.
 *      Inputs:  Ary_Cnt_T_u08 : Pointer to char buffer containing values to parse.  First four bytes will be used.
 *     Outputs:  Floating point value parsed from first four bytes of input array.
 * Usage Notes:  The function assumes that the data in the input array is a properly formated single precision
 *               floating point value and does no range or error checking on the value.  It is up to the calling
 *               function to handle any verification.
 ******************************************************************************************************************** */
FUNC(float32, CmnMfgSrv_CODE) CmnMfgSrvFct_SynthesizeFloat(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(FloatChar, AUTOMATIC) FloatChar_Cnt_T_str;

	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 4U; Idx_Cnt_T_u08 += 1U)
	{
		FloatChar_Cnt_T_str.chr[3U - Idx_Cnt_T_u08] = Ary_Cnt_T_u08[Idx_Cnt_T_u08];
	}

	return FloatChar_Cnt_T_str.flt;
}

/**********************************************************************************************************************
 *        Name:  CmnMfgSrv_DecomposeFloat
 * Description:  Turn a floating point value into an array of chars.  Useful when parsing outgoing CAN data containing
 *               floating point values.
 *      Inputs:  Floating point value to be converted into chars.
 *     Outputs:  Ary_Cnt_T_u08 : Pointer to char buffer to which the parsed chars will be written to the first four
 *               bytes.
 * Usage Notes:  This function assumes that there is 4 bytes of space in the input array to which the chars can be
 *               written.
 ******************************************************************************************************************** */
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_DecomposeFloat(VAR(float32, AUTOMATIC) Input_Cnt_T_f32, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(FloatChar, AUTOMATIC) FloatChar_Cnt_T_str;

	FloatChar_Cnt_T_str.flt = Input_Cnt_T_f32;

	for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < 4U; Idx_Cnt_T_u08 += 1U)
	{
		Ary_Cnt_T_u08[Idx_Cnt_T_u08] = FloatChar_Cnt_T_str.chr[3U - Idx_Cnt_T_u08];
	}
}

/**********************************************************************************************************************
 *        Name:  CmnMfgSrvFct_Synthesize32
 * Description:  Turn an array of chars into a single unsigned 32-bit value.  Useful when parsing incoming CAN data
 *               containing uint32 values.
 *      Inputs:  Ary_Cnt_T_u08 : Pointer to char buffer containing values to parse.  First four bytes will be used.
 *     Outputs:  Unsigned 32-bit value parsed from first four bytes of input array.
 * Usage Notes:  None
 ******************************************************************************************************************** */
FUNC(uint32, CmnMfgSrv_CODE) CmnMfgSrvFct_Synthesize32(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{
	VAR(uint32, AUTOMATIC) Result_Cnt_T_u32;

	Result_Cnt_T_u32 =  ((uint32)Ary_Cnt_T_u08[0U] << 24U);
	Result_Cnt_T_u32 |= ((uint32)Ary_Cnt_T_u08[1U] << 16U);
	Result_Cnt_T_u32 |= ((uint32)Ary_Cnt_T_u08[2U] << 8U);
	Result_Cnt_T_u32 |= ((uint32)Ary_Cnt_T_u08[3U]);

	return Result_Cnt_T_u32;
}

/**********************************************************************************************************************
 *        Name:  CmnMfgSrvFct_Decompose32
 * Description:  Turn an unsigned 32-bit value into an array of chars.  Useful when parsing outgoing CAN data containing
 *               uint32 values.
 *      Inputs:  Unsigned 32-bit value to be converted into chars.
 *     Outputs:  Ary_Cnt_T_u08 : Pointer to char buffer to which the parsed chars will be written to the first four
 *               bytes.
 * Usage Notes:  None
 ******************************************************************************************************************** */
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_Decompose32(VAR(uint32, AUTOMATIC) Input_Cnt_T_u32, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{
	Ary_Cnt_T_u08[0U] = (uint8)(Input_Cnt_T_u32 >> 24U);
	Ary_Cnt_T_u08[1U] = (uint8)(Input_Cnt_T_u32 >> 16U);
	Ary_Cnt_T_u08[2U] = (uint8)(Input_Cnt_T_u32 >> 8U);
	Ary_Cnt_T_u08[3U] = (uint8)(Input_Cnt_T_u32);
}

/**********************************************************************************************************************
 *        Name:  CmnMfgSrvFct_Synthesize16
 * Description:  Turn an array of chars into a single unsigned 16-bit value.  Useful when parsing incoming CAN data
 *               containing uint32 values.
 *      Inputs:  Ary_Cnt_T_u08 : Pointer to char buffer containing values to parse.  First two bytes will be used.
 *     Outputs:  Unsigned 16-bit value parsed from first two bytes of input array.
 * Usage Notes:  None
 ******************************************************************************************************************** */
FUNC(uint16, CmnMfgSrv_CODE) CmnMfgSrvFct_Synthesize16(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{
	VAR(uint16, AUTOMATIC) Result_Cnt_T_u16;

	Result_Cnt_T_u16 =  ((uint16)Ary_Cnt_T_u08[0U] << 8U);
	Result_Cnt_T_u16 |= ((uint16)Ary_Cnt_T_u08[1U]);

	return Result_Cnt_T_u16;
}

/**********************************************************************************************************************
 *        Name:  CmnMfgSrvFct_Decompose16
 * Description:  Turn an unsigned 16-bit value into an array of chars.  Useful when parsing outgoing CAN data containing
 *               uint16 values.
 *      Inputs:  Unsigned 16-bit value to be converted into chars.
 *     Outputs:  Ary_Cnt_T_u08 : Pointer to char buffer to which the parsed chars will be written to the first two
 *               bytes.
 * Usage Notes:  None
 ******************************************************************************************************************** */
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvFct_Decompose16(VAR(uint16, AUTOMATIC) Input_Cnt_T_u16, VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{

	Ary_Cnt_T_u08[0U] = (uint8)(Input_Cnt_T_u16 >> 8U);
	Ary_Cnt_T_u08[1U] = (uint8)(Input_Cnt_T_u16);
}

/**********************************************************************************************************************
 *        Name:  CmnMfgSrv_SynthesizeDiBits
 * Description:  Write the provided defeat bits to the corresponding outputs
 *      Inputs:  None
 *     Outputs:  None
 * Usage Notes:  None
 ******************************************************************************************************************** */
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrv_SynthesizeDiBits(CONST(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{
	VAR(uint8, AUTOMATIC) Byte_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Bit_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;

	for (Byte_Cnt_T_u08 = 0U; Byte_Cnt_T_u08 < 8U; Byte_Cnt_T_u08 += 1U)
	{
		for (Bit_Cnt_T_u08 = 0U; Bit_Cnt_T_u08 < 8U; Bit_Cnt_T_u08 += 1U)
		{
			Index_Cnt_T_u08 = (Byte_Cnt_T_u08 * 8U) + Bit_Cnt_T_u08;

			if (CmnMfgSrv_DiTbl[Index_Cnt_T_u08] != NULL_PTR)
			{
				if ((Ary_Cnt_T_u08[Byte_Cnt_T_u08] & Bit_Cnt_T_u08) != 0x00u)
				{
					*CmnMfgSrv_DiTbl[Index_Cnt_T_u08] = TRUE;
				}
				else
				{
					*CmnMfgSrv_DiTbl[Index_Cnt_T_u08] = FALSE;
				}
			}
		}
	}
}

/**********************************************************************************************************************
 *        Name:  CmnMfgSrv_DecomposeDiBits
 * Description:  Assemble the currently set defeats into the storage array in NvM.
 *      Inputs:  None
 *     Outputs:  None
 * Usage Notes:  None
 ******************************************************************************************************************** */
FUNC(void, CmnMfgSrv_CODE) CmnMfgSrv_DecomposeDiBits(VAR(uint8, AUTOMATIC) Ary_Cnt_T_u08[])
{
	VAR(uint8, AUTOMATIC) Byte_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Bit_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Index_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) Di_Cnt_T_Logl;

	for (Byte_Cnt_T_u08 = 0U; Byte_Cnt_T_u08 < 8U; Byte_Cnt_T_u08 += 1U)
	{
		Ary_Cnt_T_u08[Byte_Cnt_T_u08] = 0U;

		for (Bit_Cnt_T_u08 = 0U; Bit_Cnt_T_u08 < 8U; Bit_Cnt_T_u08 += 1U)
		{
			Index_Cnt_T_u08 = (Byte_Cnt_T_u08 * 8U) + Bit_Cnt_T_u08;

			if (CmnMfgSrv_DiTbl[Index_Cnt_T_u08] != NULL_PTR)
			{
				Di_Cnt_T_Logl = *CmnMfgSrv_DiTbl[Index_Cnt_T_u08];

				if (Di_Cnt_T_Logl == TRUE)
				{
					Ary_Cnt_T_u08[Byte_Cnt_T_u08] |= Bit_Cnt_T_u08;
				}
			}
		}
	}
}


/* End of File: CmnMfgSrvFct.c */
