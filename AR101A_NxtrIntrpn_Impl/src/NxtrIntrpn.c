/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   NxtrIntrpn.c
* Module Description: Source file for the interpolation library
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       cz7lt6 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 02/02/15  1       KJS     Converted EA1.x/EA3.x interpolation library functions to EA4.x standards        EA4#109
*                           Added linear interpolation rounding functions
* 07/24/15  2       KJS     Correction for anomaly EA4#1143 for bilinear common x-axis functions            EA4#
**********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#include <float.h>      /* Provides definition for FLT_EPSILON */
#include "NxtrIntrpn.h"
#include "NxtrFixdPt.h"

#define NxtrIntrpn_START_SEC_CODE
#include "NxtrIntrpn_MemMap.h"

/**********************************************************************************************************************
* Linear Interpolation - Truncating Functions - Fixed X Axis
**********************************************************************************************************************/

/**********************************************************************************************************************
* Name:         LnrIntrpn_u16_u16FixdXu16VariY
*
* Description:  Linear interpolation with unsigned input and unsigned output (fixed X axis)
*
* Inputs:       DeltaX - X delta value
*               YTbl[] - Y table
*               Size   - Size of Y table
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_u16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  X table starts at 0 and increments by DeltaX.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpn_u16_u16FixdXu16VariY( uint16 DeltaX,
                                                              const uint16 YTbl[],
                                                              uint16 Size,
                                                              uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    
    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test input for end cases */
    if (DeltaX == 0U)
    {
        Outp_Cnt_T_u16 = YTbl[0U];
    }
    else if ((uint32)Inp >= ((uint32)DeltaX * ((uint32)Size - 1U)))
    {
        Outp_Cnt_T_u16 = YTbl[Size - 1U];
    }
    else
    {
        /* Perform Interpolation */
        Idx_Cnt_T_u16 = Inp / DeltaX;

        XDif_Cnt_T_s32 = (sint32)Inp - ((sint32)Idx_Cnt_T_u16 * (sint32)DeltaX);
        YDif_Cnt_T_s32 = (sint32)YTbl[Idx_Cnt_T_u16 + 1U] - (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_s32 = ((YDif_Cnt_T_s32 * XDif_Cnt_T_s32) / (sint32)DeltaX) + (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_u16 = (uint16)Outp_Cnt_T_s32;
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpn_s16_u16FixdXs16VariY
*
* Description:  Linear interpolation with unsigned input and signed output (fixed X axis)
*
* Inputs:       DeltaX - X delta value
*               YTbl[] - Y table
*               Size   - Size of Y table
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_s16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  X table starts at 0 and increments by DeltaX.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpn_s16_u16FixdXs16VariY( uint16 DeltaX,
                                                              const sint16 YTbl[],
                                                              uint16 Size,
                                                              uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test input for end cases */
    if (DeltaX == 0U)
    {
        Outp_Cnt_T_s16 = YTbl[0U];
    }
    else if ((uint32)Inp >= ((uint32)DeltaX * ((uint32)Size - 1U)))
    {
        Outp_Cnt_T_s16 = YTbl[Size - 1U];
    }
    else
    {
        /* Perform Interpolation */
        Idx_Cnt_T_u16 = Inp / DeltaX;

        XDif_Cnt_T_s32 = (sint32)Inp - ((sint32)Idx_Cnt_T_u16 * (sint32)DeltaX);
        YDif_Cnt_T_s32 = (sint32)YTbl[Idx_Cnt_T_u16 + 1U] - (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_s32 = ((YDif_Cnt_T_s32 * XDif_Cnt_T_s32) / (sint32)DeltaX) + (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_s16 = (sint16)Outp_Cnt_T_s32;
    }

    return Outp_Cnt_T_s16;
}

/*********************************************************************************************************************
 * Linear Interpolation - Truncating Functions - Variable X Axis
 ********************************************************************************************************************/

/**********************************************************************************************************************
* Name:         LnrIntrpn_u16_u16VariXu16VariY
*
* Description:  Linear interpolation with unsigned input and unsigned output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - Size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_u16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpn_u16_u16VariXu16VariY( const uint16 XTbl[],
                                                              const uint16 YTbl[],
                                                              uint16 Size,
                                                              uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_u16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_u16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);

        Outp_Cnt_T_s32 = ((YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32) / XDif_Cnt_T_s32) + (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_u16 = (uint16)Outp_Cnt_T_s32;
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpn_u16_s16VariXu16VariY
*
* Description:  Linear interpolation with signed input and unsigned output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - Size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_u16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpn_u16_s16VariXu16VariY( const sint16 XTbl[],
                                                              const uint16 YTbl[],
                                                              uint16 Size,
                                                              sint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_u16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_u16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);

        Outp_Cnt_T_s32 = ((YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32) / XDif_Cnt_T_s32) + (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_u16 = (uint16)Outp_Cnt_T_s32;
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpn_s16_s16VariXs16VariY
*
* Description:  Linear interpolation with signed input and signed output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_s16 - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpn_s16_s16VariXs16VariY( const sint16 XTbl[],
                                                              const sint16 YTbl[],
                                                              uint16 Size,
                                                              sint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_s16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_s16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);

        Outp_Cnt_T_s32 = ((YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32) / XDif_Cnt_T_s32) + (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_s16 = (sint16)Outp_Cnt_T_s32;
    }

    return Outp_Cnt_T_s16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpn_s16_u16VariXs16VariY
*
* Description:  Linear interpolation with unsigned input and signed output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_s16 - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpn_s16_u16VariXs16VariY( const uint16 XTbl[],
                                                              const sint16 YTbl[],
                                                              uint16 Size,
                                                              uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_s16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_s16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);

        Outp_Cnt_T_s32 = ((YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32) / XDif_Cnt_T_s32) + (sint32)YTbl[Idx_Cnt_T_u16];
        Outp_Cnt_T_s16 = (sint16)Outp_Cnt_T_s32;
    }

    return Outp_Cnt_T_s16;
}


/**********************************************************************************************************************
* Linear Interpolation - Rounding Functions - Fixed X Axis
**********************************************************************************************************************/

/**********************************************************************************************************************
* Name:         LnrIntrpnWithRound_u16_u16FixdXu16VariY
*
* Description:  Linear interpolation with unsigned input and unsigned output (fixed X axis)
*
* Inputs:       DeltaX - X delta value
*               YTbl[] - Y table
*               Size   - Size of Y table
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_u16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  X table starts at 0 and increments by DeltaX.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_u16_u16FixdXu16VariY( uint16 DeltaX,
                                                                       const uint16 YTbl[],
                                                                       uint16 Size,
                                                                       uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Numer_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test input for end cases */
    if (DeltaX == 0U)
    {
        Outp_Cnt_T_u16 = YTbl[0U];
    }
    else if ((uint32)Inp >= ((uint32)DeltaX * ((uint32)Size - 1U)))
    {
        Outp_Cnt_T_u16 = YTbl[Size - 1U];
    }
    else
    {
        /* Perform Interpolation */
        Idx_Cnt_T_u16 = Inp / DeltaX;

        XDif_Cnt_T_s32 = (sint32)Inp - ((sint32)Idx_Cnt_T_u16 * (sint32)DeltaX);
        YDif_Cnt_T_s32 = (sint32)YTbl[Idx_Cnt_T_u16 + 1U] - (sint32)YTbl[Idx_Cnt_T_u16];
        Numer_Cnt_T_s32 = YDif_Cnt_T_s32 * XDif_Cnt_T_s32;

        /* Apply Rounding before Divison */
        if (Numer_Cnt_T_s32 >= 0)
        {
            Numer_Cnt_T_s32 += (sint32)(uint32)((uint32)DeltaX / 2U);
        }
        else
        {
            Numer_Cnt_T_s32 -= (sint32)(uint32)((uint32)DeltaX / 2U);
        }

        Outp_Cnt_T_s32 = (Numer_Cnt_T_s32 / (sint32)DeltaX);
        Outp_Cnt_T_u16 = (uint16)(sint32)(Outp_Cnt_T_s32 + (sint32)YTbl[Idx_Cnt_T_u16]);
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpnWithRound_s16_u16FixdXs16VariY
*
* Description:  Linear interpolation with unsigned input and signed output (fixed X axis)
*
* Inputs:       DeltaX - X delta value
*               YTbl[] - Y table
*               Size   - Size of Y table
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_s16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  X table starts at 0 and increments by DeltaX.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_s16_u16FixdXs16VariY( uint16 DeltaX,
                                                                       const sint16 YTbl[],
                                                                       uint16 Size,
                                                                       uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Numer_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test input for end cases */
    if (DeltaX == 0U)
    {
        Outp_Cnt_T_s16 = YTbl[0U];
    }
    else if ((uint32)Inp >= ((uint32)DeltaX * ((uint32)Size - 1U)))
    {
        Outp_Cnt_T_s16 = YTbl[Size - 1U];
    }
    else
    {
        /* Perform Interpolation */
        Idx_Cnt_T_u16 = Inp / DeltaX;

        XDif_Cnt_T_s32 = (sint32)Inp - ((sint32)Idx_Cnt_T_u16 * (sint32)DeltaX);
        YDif_Cnt_T_s32 = (sint32)YTbl[Idx_Cnt_T_u16 + 1U] - (sint32)YTbl[Idx_Cnt_T_u16];
        Numer_Cnt_T_s32 = YDif_Cnt_T_s32 * XDif_Cnt_T_s32;

        /* Apply Rounding before Divison */
        if (Numer_Cnt_T_s32 >= 0)
        {
            Numer_Cnt_T_s32 += (sint32)(uint32)((uint32)DeltaX / 2U);
        }
        else
        {
            Numer_Cnt_T_s32 -= (sint32)(uint32)((uint32)DeltaX / 2U);
        }
        
        Outp_Cnt_T_s32 = (Numer_Cnt_T_s32 / (sint32)DeltaX);
        Outp_Cnt_T_s16 = (sint16)(Outp_Cnt_T_s32 + (sint32)YTbl[Idx_Cnt_T_u16]);
    }

    return Outp_Cnt_T_s16;
}

/**********************************************************************************************************************
 * Linear Interpolation - Rounding Functions - Variable X Axis
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Name:         LnrIntrpnWithRound_u16_u16VariXu16VariY
*
* Description:  Linear interpolation with unsigned input and unsigned output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - Size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_u16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_u16_u16VariXu16VariY( const uint16 XTbl[],
                                                                       const uint16 YTbl[],
                                                                       uint16 Size,
                                                                       uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Numer_Cnt_T_s32; 

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_u16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_u16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);
        Numer_Cnt_T_s32 = YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32;
        
        if (Numer_Cnt_T_s32 >= 0)
        {
            Numer_Cnt_T_s32 += (sint32)(XDif_Cnt_T_s32 / 2);
        }
        else
        {
            Numer_Cnt_T_s32 -= (sint32)(XDif_Cnt_T_s32 / 2);
        }

        Outp_Cnt_T_s32 = (Numer_Cnt_T_s32 / XDif_Cnt_T_s32);
        Outp_Cnt_T_u16 = (uint16)(sint32)(Outp_Cnt_T_s32 + (sint32)YTbl[Idx_Cnt_T_u16]);
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpnWithRound_u16_s16VariXu16VariY
*
* Description:  Linear interpolation with signed input and unsigned output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - Size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_u16 - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_u16_s16VariXu16VariY( const sint16 XTbl[],
                                                                       const uint16 YTbl[],
                                                                       uint16 Size,
                                                                       sint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Numer_Cnt_T_s32; 


    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_u16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_u16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);
        Numer_Cnt_T_s32 = YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32;
        
        if (Numer_Cnt_T_s32 >= 0)
        {
            Numer_Cnt_T_s32 += (sint32)(XDif_Cnt_T_s32 / 2);
        }
        else
        {
            Numer_Cnt_T_s32 -= (sint32)(XDif_Cnt_T_s32 / 2);
        }

        Outp_Cnt_T_s32 = (Numer_Cnt_T_s32 / XDif_Cnt_T_s32);
        Outp_Cnt_T_u16 = (uint16)(sint32)(Outp_Cnt_T_s32 + (sint32)YTbl[Idx_Cnt_T_u16]);
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpnWithRound_s16_s16VariXs16VariY
*
* Description:  Linear interpolation with signed input and signed output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_s16 - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_s16_s16VariXs16VariY( const sint16 XTbl[],
                                                                       const sint16 YTbl[],
                                                                       uint16 Size,
                                                                       sint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Numer_Cnt_T_s32; 

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_s16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_s16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);
        Numer_Cnt_T_s32 = YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32;
        
        if (Numer_Cnt_T_s32 >= 0)
        {
            Numer_Cnt_T_s32 += (sint32)(XDif_Cnt_T_s32 / 2);
        }
        else
        {
            Numer_Cnt_T_s32 -= (sint32)(XDif_Cnt_T_s32 / 2);
        }

        Outp_Cnt_T_s32 = (Numer_Cnt_T_s32 / XDif_Cnt_T_s32);
        Outp_Cnt_T_s16 = (sint16)(Outp_Cnt_T_s32 + (sint32)YTbl[Idx_Cnt_T_u16]);
    }

    return Outp_Cnt_T_s16;
}


/**********************************************************************************************************************
* Name:         LnrIntrpnWithRound_s16_u16VariXs16VariY
*
* Description:  Linear interpolation with unsigned input and signed output (variable X axis)
*
* Inputs:       XTbl[] - X table
*               YTbl[] - Y table
*               Size   - size of X and Y tables
*               Inp    - Input value for interpolation
*
* Outputs:      Outp_Cnt_T_s16 - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table is positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_s16_u16VariXs16VariY( const uint16 XTbl[],
                                                                       const sint16 YTbl[],
                                                                       uint16 Size,
                                                                       uint16 Inp)
{
    /* Local Variables */
    VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Numer_Cnt_T_s32;

    /* Output Variables */
    VAR(sint32, AUTOMATIC) Outp_Cnt_T_s32;
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        Outp_Cnt_T_s16 = YTbl[0U];
    }
    else if (Inp >= XTbl[Size - 1U])
    {
        Outp_Cnt_T_s16 = YTbl[Size - 1U];
    }
    else
    {
        Idx_Cnt_T_u16 = 0U;

        while (XTbl[Idx_Cnt_T_u16 + 1U] < Inp)
        {
            Idx_Cnt_T_u16++;
        }

        /* Perform Interpolation */
        XDif_Cnt_T_s32 = (sint32)(XTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(XTbl[Idx_Cnt_T_u16]);
        YDif_Cnt_T_s32 = (sint32)(YTbl[Idx_Cnt_T_u16 + 1U]) - (sint32)(YTbl[Idx_Cnt_T_u16]);
        XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)(XTbl[Idx_Cnt_T_u16]);
        Numer_Cnt_T_s32 = YDif_Cnt_T_s32 * XInpDif_Cnt_T_s32;
        
        if (Numer_Cnt_T_s32 >= 0)
        {
            Numer_Cnt_T_s32 += (sint32)(XDif_Cnt_T_s32 / 2);
        }
        else
        {
            Numer_Cnt_T_s32 -= (sint32)(XDif_Cnt_T_s32 / 2);
        }

        Outp_Cnt_T_s32 = (Numer_Cnt_T_s32 / XDif_Cnt_T_s32);
        Outp_Cnt_T_s16 = (sint16)(Outp_Cnt_T_s32 + (sint32)YTbl[Idx_Cnt_T_u16]);
    }

    return Outp_Cnt_T_s16;
}


/**********************************************************************************************************************
* Bilinear Interpolation - Common X Axis
**********************************************************************************************************************/

/**********************************************************************************************************************
* Name:         BilinearXYM_u16_u16Xu16YM_Cnt
*
* Description:  Bilinear interpolation with unsigned input and unsigned output (common X table, multiple Y tables)
*
* Inputs:       BilnrSeln        - Bilinear Selection (BS-axis)
*               Inp              - Input (X-axis)
*               BilnrSelnTbl[]   - Bilinear Selection table (size = BilnrSelnSize)
*               BilnrSelnSize    - Size of Bilinear Selection table
*               XTbl[]           - X table (size = XSize)
*               MplYTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize            - Size of X table
*
* Outputs:      Output_Cnt_T_u16  - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table and BS table are positively ordered.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_u16CmnXu16MplY( uint16 BilnrSeln,
                                                                       uint16 Inp,
                                                                       const uint16 BilnrSelnTbl[],
                                                                       uint16 BilnrSelnSize,
                                                                       const uint16 XTbl[],
                                                                       const uint16 MplYTbl[],
                                                                       uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) XIdx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnSInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1a_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Term1b_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) Term1c_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1d_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;

    /* Output Variable */
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test base selector for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) && (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        XIdx_Cnt_T_u16 = 0U;
        Inp = XTbl[0U];
    }
    else if (Inp >= XTbl[XSize - 1U])
    {
        XIdx_Cnt_T_u16 = XSize - 2U;
        Inp = XTbl[XSize - 1U];
    }
    else
    {
        XIdx_Cnt_T_u16 = 0U;

        while (XTbl[XIdx_Cnt_T_u16 + 1U] < Inp)
        {
            XIdx_Cnt_T_u16++;
        }
    }

    /* Determine indices into Y table */
    TblIdx1_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = TblIdx1_Cnt_T_u32 + 1U;
    TblIdx3_Cnt_T_u32 = ((BilnrSelnIdx_Cnt_T_u32 + 1U) * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = TblIdx3_Cnt_T_u32 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XDif_Cnt_T_s32 = (sint32)XTbl[(XIdx_Cnt_T_u16 + 1U)] - (sint32)XTbl[XIdx_Cnt_T_u16];

    BilnrSelnSInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)XTbl[XIdx_Cnt_T_u16];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_f32 = (float32)Y1Dif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32 * (float32)XInpDif_Cnt_T_s32;
    Term1b_Cnt_T_f32 = (float32)YCrossDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)XDif_Cnt_T_s32;
    Term1c_Cnt_T_s32 = Y2Dif_Cnt_T_s32 - Y1Dif_Cnt_T_s32;
    Term1d_Cnt_T_f32 = (float32)XInpDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)Term1c_Cnt_T_s32;

    Numer_Cnt_T_f32 = Term1a_Cnt_T_f32 + Term1b_Cnt_T_f32 + Term1d_Cnt_T_f32;

    Denom_Cnt_T_f32 = (float32)XDif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;

    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_u16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_u16 = FloatToFixdWithRound_u16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         BilnrIntrpnWithRound_s16_u16CmnXs16MplY
*
* Description:  Bilinear interpolation with unsigned input and signed output (common X table, multiple Y tables)
*
* Inputs:       BilnrSeln        - Bilinear Selection (BS-axis)
*               Inp              - Input (X-axis)
*               BilnrSelnTbl[]   - Bilinear Selection table (size = BilnrSelnSize)
*               BilnrSelnSize    - Size of Bilinear Selection table
*               XTbl[]           - X table (size = XSize)
*               MplYTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize            - Size of X table
*
* Outputs:      Output_Cnt_T_u16  - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table and BS table are positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_u16CmnXs16MplY( uint16 BilnrSeln,
                                                                       uint16 Inp,
                                                                       const uint16 BilnrSelnTbl[],
                                                                       uint16 BilnrSelnSize,
                                                                       const uint16 XTbl[],
                                                                       const sint16 MplYTbl[],
                                                                       uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) XIdx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnSInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1a_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Term1b_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) Term1c_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1d_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;

    /* Output Variable */
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test base selector for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) && (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        XIdx_Cnt_T_u16 = 0U;
        Inp = XTbl[0U];
    }
    else if (Inp >= XTbl[XSize - 1U])
    {
        XIdx_Cnt_T_u16 = XSize - 2U;
        Inp = XTbl[XSize - 1U];
    }
    else
    {
        XIdx_Cnt_T_u16 = 0U;

        while (XTbl[XIdx_Cnt_T_u16 + 1U] < Inp)
        {
            XIdx_Cnt_T_u16++;
        }
    }

    /* Determine indices into Y table */
    TblIdx1_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = TblIdx1_Cnt_T_u32 + 1U;
    TblIdx3_Cnt_T_u32 = ((BilnrSelnIdx_Cnt_T_u32 + 1U) * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = TblIdx3_Cnt_T_u32 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XDif_Cnt_T_s32 = (sint32)XTbl[(XIdx_Cnt_T_u16 + 1U)] - (sint32)XTbl[XIdx_Cnt_T_u16];

    BilnrSelnSInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)XTbl[XIdx_Cnt_T_u16];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_f32 = (float32)Y1Dif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32 * (float32)XInpDif_Cnt_T_s32;
    Term1b_Cnt_T_f32 = (float32)YCrossDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)XDif_Cnt_T_s32;
    Term1c_Cnt_T_s32 = Y2Dif_Cnt_T_s32 - Y1Dif_Cnt_T_s32;
    Term1d_Cnt_T_f32 = (float32)XInpDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)Term1c_Cnt_T_s32;

    Numer_Cnt_T_f32 = Term1a_Cnt_T_f32 + Term1b_Cnt_T_f32 + Term1d_Cnt_T_f32;

    Denom_Cnt_T_f32 = (float32)XDif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;


    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_s16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_s16 = FloatToFixdWithRound_s16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_s16;
}


/**********************************************************************************************************************
* Name:         BilnrIntrpnWithRound_s16_s16CmnXs16MplY
*
* Description:  Bilinear interpolation with signed input and signed output (common X table, multiple Y tables)
*
* Inputs:       BilnrSeln        - Bilinear Selection (BS-axis)
*               Inp              - Input (X-axis)
*               BilnrSelnTbl[]   - Bilinear Selection table (size = BilnrSelnSize)
*               BilnrSelnSize    - Size of Bilinear Selection table
*               XTbl[]           - X table (size = XSize)
*               MplYTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize            - Size of X table
*
* Outputs:      Outp_Cnt_T_s16  - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table and BS table are positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_s16CmnXs16MplY( uint16 BilnrSeln,
                                                                       sint16 Inp,
                                                                       const uint16 BilnrSelnTbl[],
                                                                       uint16 BilnrSelnSize,
                                                                       const sint16 XTbl[],
                                                                       const sint16 MplYTbl[],
                                                                       uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) XIdx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnSInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1a_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Term1b_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) Term1c_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1d_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;

    /* Output Variable */
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test base selector for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) && (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        XIdx_Cnt_T_u16 = 0U;
        Inp = XTbl[0U];
    }
    else if (Inp >= XTbl[XSize - 1U])
    {
        XIdx_Cnt_T_u16 = XSize - 2U;
        Inp = XTbl[XSize - 1U];
    }
    else
    {
        XIdx_Cnt_T_u16 = 0U;

        while (XTbl[XIdx_Cnt_T_u16 + 1U] < Inp)
        {
            XIdx_Cnt_T_u16++;
        }
    }

    /* Determine indices into Y table */
    TblIdx1_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = TblIdx1_Cnt_T_u32 + 1U;
    TblIdx3_Cnt_T_u32 = ((BilnrSelnIdx_Cnt_T_u32 + 1U) * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = TblIdx3_Cnt_T_u32 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XDif_Cnt_T_s32 = (sint32)XTbl[(XIdx_Cnt_T_u16 + 1U)] - (sint32)XTbl[XIdx_Cnt_T_u16];

    BilnrSelnSInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)XTbl[XIdx_Cnt_T_u16];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_f32 = (float32)Y1Dif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32 * (float32)XInpDif_Cnt_T_s32;
    Term1b_Cnt_T_f32 = (float32)YCrossDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)XDif_Cnt_T_s32;
    Term1c_Cnt_T_s32 = Y2Dif_Cnt_T_s32 - Y1Dif_Cnt_T_s32;
    Term1d_Cnt_T_f32 = (float32)XInpDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)Term1c_Cnt_T_s32;

    Numer_Cnt_T_f32 = Term1a_Cnt_T_f32 + Term1b_Cnt_T_f32 + Term1d_Cnt_T_f32;

    Denom_Cnt_T_f32 = (float32)XDif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;

    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_s16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_s16 = FloatToFixdWithRound_s16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_s16;
}


/**********************************************************************************************************************
* Name:         BilnrIntrpnWithRound_u16_s16CmnXu16MplY
*
* Description:  Bilinear interpolation with signed input and unsigned output (common X table, multiple Y tables)
*
* Inputs:       BilnrSeln        - Bilinear Selection (BS-axis)
*               Inp              - Input (X-axis)
*               BilnrSelnTbl[]   - Bilinear Selection table (size = BilnrSelnSize)
*               BilnrSelnSize    - Size of Bilinear Selection table
*               XTbl[]           - X table (size = XSize)
*               MplYTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize            - Size of X table
*
* Outputs:      Output_Cnt_T_u16  - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  Assumes that X table and BS table are positively ordered.
**********************************************************************************************************************/
extern FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_s16CmnXu16MplY( uint16 BilnrSeln,
                                                                              sint16 Inp,
                                                                              const uint16 BilnrSelnTbl[],
                                                                              uint16 BilnrSelnSize,
                                                                              const sint16 XTbl[],
                                                                              const uint16 MplYTbl[],
                                                                              uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) XIdx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnSInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) XInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1a_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Term1b_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) Term1c_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Term1d_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;

    /* Output Variable */
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test base selector for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) && (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases */
    if (Inp <= XTbl[0U])
    {
        XIdx_Cnt_T_u16 = 0U;
        Inp = XTbl[0U];
    }
    else if (Inp >= XTbl[XSize - 1U])
    {
        XIdx_Cnt_T_u16 = XSize - 2U;
        Inp = XTbl[XSize - 1U];
    }
    else
    {
        XIdx_Cnt_T_u16 = 0U;

        while (XTbl[XIdx_Cnt_T_u16 + 1U] < Inp)
        {
            XIdx_Cnt_T_u16++;
        }
    }

    /* Determine indices into Y table */
    TblIdx1_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = TblIdx1_Cnt_T_u32 + 1U;
    TblIdx3_Cnt_T_u32 = ((BilnrSelnIdx_Cnt_T_u32 + 1U) * (uint32)XSize) + (uint32)XIdx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = TblIdx3_Cnt_T_u32 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XDif_Cnt_T_s32 = (sint32)XTbl[(XIdx_Cnt_T_u16 + 1U)] - (sint32)XTbl[XIdx_Cnt_T_u16];

    BilnrSelnSInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    XInpDif_Cnt_T_s32 = (sint32)Inp - (sint32)XTbl[XIdx_Cnt_T_u16];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_f32 = (float32)Y1Dif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32 * (float32)XInpDif_Cnt_T_s32;
    Term1b_Cnt_T_f32 = (float32)YCrossDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)XDif_Cnt_T_s32;
    Term1c_Cnt_T_s32 = Y2Dif_Cnt_T_s32 - Y1Dif_Cnt_T_s32;
    Term1d_Cnt_T_f32 = (float32)XInpDif_Cnt_T_s32 * (float32)BilnrSelnSInpDif_Cnt_T_s32 * (float32)Term1c_Cnt_T_s32;

    Numer_Cnt_T_f32 = Term1a_Cnt_T_f32 + Term1b_Cnt_T_f32 + Term1d_Cnt_T_f32;

    Denom_Cnt_T_f32 = (float32)XDif_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;

    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_u16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_u16 = FloatToFixdWithRound_u16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_u16;
}

/*********************************************************************************************************************
 * Bilinear Interpolation - Multiple X Axis
 ********************************************************************************************************************/
 
/**********************************************************************************************************************
* Name:         BilnrIntrpnWithRound_u16_u16MplXu16MplY
*
* Description:  Bilinear interpolation with signed input and unsigned output (multiple X tables, multiple Y tables)
*
* Inputs:       BilnrSeln      - Base Selector (BS-axis)
*               Inp            - Input (X-axis)
*               BilnrSelnTbl[] - Base Selector table (size = BilnrSelnSize)
*               BilnrSelnSize  - size of Base Selector table
*               XMTbl[]        - X table (size = BilnrSelnSize * XSize)
*               YMTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize          - Size of X table (first dimension)
*
* Outputs:      Output_Cnt_T_u16  - Unsigned output value
*
* Usage Notes: Function is re-entrant.  Assumes that BS table and each X table are positively ordered.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_u16MplXu16MplY( uint16 BilnrSeln,
                                                                       uint16 Inp,
                                                                       const uint16 BilnrSelnTbl[],
                                                                       uint16 BilnrSelnSize,
                                                                       const uint16 MplXTbl[],
                                                                       const uint16 MplYTbl[],
                                                                       uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) XIdx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX1Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X1Idx_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) InputX2_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX2Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X2Idx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2a3a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term3b_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) BilnrSeln2InpDif_Cnt_T_s32;

    /* Output Variable */
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test base selector for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) &&
            (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases on first table */
    XIdx_Cnt_T_u16 = Inp;
    BilnrSelnIdxX1Tbl_Cnt_T_u32 = BilnrSelnIdx_Cnt_T_u32 * XSize;

    if (XIdx_Cnt_T_u16 <= MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32])
    {
        X1Idx_Cnt_T_u16 = 0U;
        XIdx_Cnt_T_u16 = MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32];
    }
    else if (XIdx_Cnt_T_u16 >= MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X1Idx_Cnt_T_u16 = XSize - 2U;
        XIdx_Cnt_T_u16 = MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U]) &&
            (X1Idx_Cnt_T_u16 > 0U))
        {
            X1Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X1Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U] < XIdx_Cnt_T_u16)
        {
            X1Idx_Cnt_T_u16++;
        }
    }

    /* Test input for end cases on second table */
    InputX2_Cnt_T_u16 = Inp;
    BilnrSelnIdxX2Tbl_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 + 1U) * XSize;

    if (InputX2_Cnt_T_u16 <= MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32])
    {
        X2Idx_Cnt_T_u16 = 0U;
        InputX2_Cnt_T_u16 = MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32];
    }
    else if (InputX2_Cnt_T_u16 >= MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X2Idx_Cnt_T_u16 = XSize - 2U;
        InputX2_Cnt_T_u16 = MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U]) &&
            (X2Idx_Cnt_T_u16 > 0U))
        {
            X2Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X2Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U] < InputX2_Cnt_T_u16)
        {
            X2Idx_Cnt_T_u16++;
        }
    }

    /* Reduce previous results to raw indices for simplicity */
    TblIdx1_Cnt_T_u32 = (uint32)BilnrSelnIdxX1Tbl_Cnt_T_u32 + (uint32)X1Idx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = TblIdx1_Cnt_T_u32 + 1U;
    TblIdx3_Cnt_T_u32 = (uint32)BilnrSelnIdxX2Tbl_Cnt_T_u32 + (uint32)X2Idx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = TblIdx3_Cnt_T_u32 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    X1Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx2_Cnt_T_u32] - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx4_Cnt_T_u32] - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    BilnrSelnInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    BilnrSeln2InpDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSeln;
    X1InpDif_Cnt_T_s32 = (sint32)XIdx_Cnt_T_u16 - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2InpDif_Cnt_T_s32 = (sint32)InputX2_Cnt_T_u16 - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_s32 = X2Diff_Cnt_T_s32 * Y1Dif_Cnt_T_s32;
    Term1b_Cnt_T_s32 = X1InpDif_Cnt_T_s32 * BilnrSeln2InpDif_Cnt_T_s32;
    Term2a3a_Cnt_T_s32 = BilnrSelnInpDif_Cnt_T_s32 * X1Diff_Cnt_T_s32;
    Term2b_Cnt_T_s32 = X2Diff_Cnt_T_s32 * YCrossDif_Cnt_T_s32;
    Term3b_Cnt_T_s32 = X2InpDif_Cnt_T_s32 * Y2Dif_Cnt_T_s32;

    Numer_Cnt_T_f32 = ((float32)Term1a_Cnt_T_s32 * (float32)Term1b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term2b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term3b_Cnt_T_s32);

    Denom_Cnt_T_f32 = (float32)X1Diff_Cnt_T_s32 * (float32)X2Diff_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;

    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_u16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_u16 = FloatToFixdWithRound_u16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         BilnrIntrpnWithRound_u16_s16MplXu16MplY
*
* Description:  Bilinear interpolation with signed input and unsigned output (multiple X tables, multiple Y tables)
*
* Inputs:       BilnrSeln      - Base Selector (BS-axis)
*               Inp            - Input (X-axis)
*               BilnrSelnTbl[] - Base Selector table (size = BilnrSelnSize)
*               BilnrSelnSize  - size of Base Selector table
*               XMTbl[]        - X table (size = BilnrSelnSize * XSize)
*               YMTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize          - Size of X table (first dimension)
*
* Outputs:      Output_Cnt_T_u16  - Unsigned output value
*
* Usage Notes:  Function is re-entrant.  Assumes that BS table and each X table are positively ordered.
**********************************************************************************************************************/
FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_s16MplXu16MplY( uint16 BilnrSeln,
                                                                       sint16 Inp,
                                                                       const uint16 BilnrSelnTbl[],
                                                                       uint16 BilnrSelnSize,
                                                                       const sint16 MplXTbl[],
                                                                       const uint16 MplYTbl[],
                                                                       uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(sint16, AUTOMATIC) XIdx_Cnt_T_s16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX1Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X1Idx_Cnt_T_u16;
    VAR(sint16, AUTOMATIC) InpX2_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX2Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X2Idx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2a3a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term3b_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) BilnrSeln2InpDif_Cnt_T_s32;

    /* Output Variable */
    VAR(uint16, AUTOMATIC) Outp_Cnt_T_u16;

    /* Test base selector for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) &&
            (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases on first table */
    XIdx_Cnt_T_s16 = Inp;
    BilnrSelnIdxX1Tbl_Cnt_T_u32 = BilnrSelnIdx_Cnt_T_u32 * XSize;

    if (XIdx_Cnt_T_s16 <= MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32])
    {
        X1Idx_Cnt_T_u16 = 0U;
        XIdx_Cnt_T_s16 = MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32];
    }
    else if (XIdx_Cnt_T_s16 >= MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X1Idx_Cnt_T_u16 = XSize - 2U;
        XIdx_Cnt_T_s16 = MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U]) &&
            (X1Idx_Cnt_T_u16 > 0U))
        {
            X1Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X1Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U] < XIdx_Cnt_T_s16)
        {
            X1Idx_Cnt_T_u16++;
        }
    }

    /* Test input for end cases on second table */
    InpX2_Cnt_T_u16 = Inp;
    BilnrSelnIdxX2Tbl_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 + 1U) * XSize;

    if (InpX2_Cnt_T_u16 <= MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32])
    {
        X2Idx_Cnt_T_u16 = 0U;
        InpX2_Cnt_T_u16 = MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32];
    }
    else if (InpX2_Cnt_T_u16 >= MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X2Idx_Cnt_T_u16 = XSize - 2U;
        InpX2_Cnt_T_u16 = MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U]) &&
            (X2Idx_Cnt_T_u16 > 0U))
        {
            X2Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X2Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U] < InpX2_Cnt_T_u16)
        {
            X2Idx_Cnt_T_u16++;
        }
    }

    /* Reduce previous results to raw indices for simplicity */
    TblIdx1_Cnt_T_u32 = (uint32)BilnrSelnIdxX1Tbl_Cnt_T_u32 + (uint32)X1Idx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = (uint32)BilnrSelnIdxX1Tbl_Cnt_T_u32 + (uint32)X1Idx_Cnt_T_u16 + 1U;
    TblIdx3_Cnt_T_u32 = (uint32)BilnrSelnIdxX2Tbl_Cnt_T_u32 + (uint32)X2Idx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = (uint32)BilnrSelnIdxX2Tbl_Cnt_T_u32 + (uint32)X2Idx_Cnt_T_u16 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    X1Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx2_Cnt_T_u32] - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx4_Cnt_T_u32] - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    BilnrSelnInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    BilnrSeln2InpDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSeln;
    X1InpDif_Cnt_T_s32 = (sint32)XIdx_Cnt_T_s16 - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2InpDif_Cnt_T_s32 = (sint32)InpX2_Cnt_T_u16 - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_s32 = X2Diff_Cnt_T_s32 * Y1Dif_Cnt_T_s32;
    Term1b_Cnt_T_s32 = X1InpDif_Cnt_T_s32 * BilnrSeln2InpDif_Cnt_T_s32;
    Term2a3a_Cnt_T_s32 = BilnrSelnInpDif_Cnt_T_s32 * X1Diff_Cnt_T_s32;
    Term2b_Cnt_T_s32 = X2Diff_Cnt_T_s32 * YCrossDif_Cnt_T_s32;
    Term3b_Cnt_T_s32 = X2InpDif_Cnt_T_s32 * Y2Dif_Cnt_T_s32;

    Numer_Cnt_T_f32 = ((float32)Term1a_Cnt_T_s32 * (float32)Term1b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term2b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term3b_Cnt_T_s32);

    Denom_Cnt_T_f32 = (float32)X1Diff_Cnt_T_s32 * (float32)X2Diff_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;

    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_u16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_u16 = FloatToFixdWithRound_u16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_u16;
}


/**********************************************************************************************************************
* Name:         BilnrIntrpnWithRound_s16_s16MplXs16MplY
*
* Description:  Bilinear interpolation with signed input and signed output (multiple X tables, multiple Y tables)
*
* Inputs:       BilnrSeln      - Base Selector (BS-axis)
*               Inp            - Input (X-axis)
*               BilnrSelnTbl[] - Base Selector table (size = BilnrSelnSize)
*               BilnrSelnSize  - size of Base Selector table
*               XMTbl[]        - X table (size = BilnrSelnSize * XSize)
*               YMTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize          - Size of X table (first dimension)
*
* Outputs:      Outp_Cnt_T_s16  - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that BS table and each X table are positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_s16MplXs16MplY( uint16 BilnrSeln,
                                                                       sint16 Inp,
                                                                       const uint16 BilnrSelnTbl[],
                                                                       uint16 BilnrSelnSize,
                                                                       const sint16 MplXTbl[],
                                                                       const sint16 MplYTbl[],
                                                                       uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(sint16, AUTOMATIC) XIdx_Cnt_T_s16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX1Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X1Idx_Cnt_T_u16;
    VAR(sint16, AUTOMATIC) InpX2_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX2Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X2Idx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2a3a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term3b_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) BilnrSeln2InpDif_Cnt_T_s32;

    /* Output Variable */
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test base selector for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) &&
            (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases on first table */
    XIdx_Cnt_T_s16 = Inp;
    BilnrSelnIdxX1Tbl_Cnt_T_u32 = BilnrSelnIdx_Cnt_T_u32 * XSize;

    if (XIdx_Cnt_T_s16 <= MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32])
    {
        X1Idx_Cnt_T_u16 = 0U;
        XIdx_Cnt_T_s16 = MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32];
    }
    else if (XIdx_Cnt_T_s16 >= MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X1Idx_Cnt_T_u16 = XSize - 2U;
        XIdx_Cnt_T_s16 = MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U]) &&
            (X1Idx_Cnt_T_u16 > 0U))
        {
            X1Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X1Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U] < XIdx_Cnt_T_s16)
        {
            X1Idx_Cnt_T_u16++;
        }
    }

    /* Test input for end cases on second table */
    InpX2_Cnt_T_u16 = Inp;
    BilnrSelnIdxX2Tbl_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 + 1U) * XSize;

    if (InpX2_Cnt_T_u16 <= MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32])
    {
        X2Idx_Cnt_T_u16 = 0U;
        InpX2_Cnt_T_u16 = MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32];
    }
    else if (InpX2_Cnt_T_u16 >= MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X2Idx_Cnt_T_u16 = XSize - 2U;
        InpX2_Cnt_T_u16 = MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U]) &&
            (X2Idx_Cnt_T_u16 > 0U))
        {
            X2Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X2Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U] < InpX2_Cnt_T_u16)
        {
            X2Idx_Cnt_T_u16++;
        }
    }

    /* Reduce previous results to raw indices for simplicity */
    TblIdx1_Cnt_T_u32 = (uint32)BilnrSelnIdxX1Tbl_Cnt_T_u32 + (uint32)X1Idx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = (uint32)BilnrSelnIdxX1Tbl_Cnt_T_u32 + (uint32)X1Idx_Cnt_T_u16 + 1U;
    TblIdx3_Cnt_T_u32 = (uint32)BilnrSelnIdxX2Tbl_Cnt_T_u32 + (uint32)X2Idx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = (uint32)BilnrSelnIdxX2Tbl_Cnt_T_u32 + (uint32)X2Idx_Cnt_T_u16 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    X1Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx2_Cnt_T_u32] - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx4_Cnt_T_u32] - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    BilnrSelnInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    BilnrSeln2InpDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSeln;
    X1InpDif_Cnt_T_s32 = (sint32)XIdx_Cnt_T_s16 - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2InpDif_Cnt_T_s32 = (sint32)InpX2_Cnt_T_u16 - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_s32 = X2Diff_Cnt_T_s32 * Y1Dif_Cnt_T_s32;
    Term1b_Cnt_T_s32 = X1InpDif_Cnt_T_s32 * BilnrSeln2InpDif_Cnt_T_s32;
    Term2a3a_Cnt_T_s32 = BilnrSelnInpDif_Cnt_T_s32 * X1Diff_Cnt_T_s32;
    Term2b_Cnt_T_s32 = X2Diff_Cnt_T_s32 * YCrossDif_Cnt_T_s32;
    Term3b_Cnt_T_s32 = X2InpDif_Cnt_T_s32 * Y2Dif_Cnt_T_s32;

    Numer_Cnt_T_f32 = ((float32)Term1a_Cnt_T_s32 * (float32)Term1b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term2b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term3b_Cnt_T_s32);

    Denom_Cnt_T_f32 = (float32)X1Diff_Cnt_T_s32 * (float32)X2Diff_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;

    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_s16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_s16 = FloatToFixdWithRound_s16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_s16;
}


/**********************************************************************************************************************
* Name:         BilnrIntrpnWithRound_s16_u16MplXs16MplY
*
* Description:  Bilinear interpolation with unsigned input and signed output (multiple X tables, multiple Y tables)
*
* Inputs:       BilnrSeln      - Base Selector (BS-axis)
*               Inp            - Input (X-axis)
*               BilnrSelnTbl[] - Base Selector table (size = BilnrSelnSize)
*               BilnrSelnSize  - size of Base Selector table
*               XMTbl[]        - X table (size = BilnrSelnSize * XSize)
*               YMTbl[]        - Y table (size = BilnrSelnSize * XSize)
*               XSize          - Size of X table (first dimension)
*
* Outputs:      Outp_Cnt_T_s16  - Signed output value
*
* Usage Notes:  Function is re-entrant.  Assumes that BS table and each X table are positively ordered.
**********************************************************************************************************************/
FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_u16MplXs16MplY( uint16 BilnrSeln,
                                                                       uint16 Inp,
                                                                       const uint16 BilnrSelnTbl[],
                                                                       uint16 BilnrSelnSize,
                                                                       const uint16 MplXTbl[],
                                                                       const sint16 MplYTbl[],
                                                                       uint16 XSize)
{
    /* Local Variables */
    VAR(uint32, AUTOMATIC) BilnrSelnIdx_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) XIdx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX1Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X1Idx_Cnt_T_u16;
    VAR(uint16, AUTOMATIC) InputX2_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) BilnrSelnIdxX2Tbl_Cnt_T_u32;
    VAR(uint16, AUTOMATIC) X2Idx_Cnt_T_u16;
    VAR(uint32, AUTOMATIC) TblIdx1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx2_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) TblIdx4_Cnt_T_u32;
    VAR(sint32, AUTOMATIC) BilnrSelnDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2Diff_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) BilnrSelnInpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X1InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) X2InpDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y1Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Y2Dif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) YCrossDif_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term1b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2a3a_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term2b_Cnt_T_s32;
    VAR(sint32, AUTOMATIC) Term3b_Cnt_T_s32;
    VAR(float32, AUTOMATIC) Numer_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Denom_Cnt_T_f32;
    VAR(float32, AUTOMATIC) Outp_Cnt_T_f32;
    VAR(sint32, AUTOMATIC) BilnrSeln2InpDif_Cnt_T_s32;

    /* Output Variable */
    VAR(sint16, AUTOMATIC) Outp_Cnt_T_s16;

    /* Test bilinear selection for end cases */
    if (BilnrSeln <= BilnrSelnTbl[0U])
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;
        BilnrSeln = BilnrSelnTbl[0U];
    }
    else if (BilnrSeln >= BilnrSelnTbl[BilnrSelnSize - 1U])
    {
        BilnrSelnIdx_Cnt_T_u32 = (uint32)BilnrSelnSize - 2U;
        BilnrSeln = BilnrSelnTbl[BilnrSelnSize - 1U];

        while ((BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32] == BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U]) && (BilnrSelnIdx_Cnt_T_u32 > 0U))
        {
            BilnrSelnIdx_Cnt_T_u32--;
        }
    }
    else
    {
        BilnrSelnIdx_Cnt_T_u32 = 0U;

        while (BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] < BilnrSeln)
        {
            BilnrSelnIdx_Cnt_T_u32++;
        }
    }

    /* Test input for end cases on first table */
    XIdx_Cnt_T_u16 = Inp;
    BilnrSelnIdxX1Tbl_Cnt_T_u32 = BilnrSelnIdx_Cnt_T_u32 * XSize;

    if (XIdx_Cnt_T_u16 <= MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32])
    {
        X1Idx_Cnt_T_u16 = 0U;
        XIdx_Cnt_T_u16 = MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32];
    }
    else if (XIdx_Cnt_T_u16 >= MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X1Idx_Cnt_T_u16 = XSize - 2U;
        XIdx_Cnt_T_u16 = MplXTbl[(BilnrSelnIdxX1Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U]) &&
            (X1Idx_Cnt_T_u16 > 0U))
        {
            X1Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X1Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX1Tbl_Cnt_T_u32 + X1Idx_Cnt_T_u16 + 1U] < XIdx_Cnt_T_u16)
        {
            X1Idx_Cnt_T_u16++;
        }
    }

    /* Test input for end cases on second table */
    InputX2_Cnt_T_u16 = Inp;
    BilnrSelnIdxX2Tbl_Cnt_T_u32 = (BilnrSelnIdx_Cnt_T_u32 + 1U) * XSize;

    if (InputX2_Cnt_T_u16 <= MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32])
    {
        X2Idx_Cnt_T_u16 = 0U;
        InputX2_Cnt_T_u16 = MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32];
    }
    else if (InputX2_Cnt_T_u16 >= MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U])
    {
        X2Idx_Cnt_T_u16 = XSize - 2U;
        InputX2_Cnt_T_u16 = MplXTbl[(BilnrSelnIdxX2Tbl_Cnt_T_u32 + XSize) - 1U];

        while ((MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16] == MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U]) &&
            (X2Idx_Cnt_T_u16 > 0U))
        {
            X2Idx_Cnt_T_u16--;
        }
    }
    else
    {
        X2Idx_Cnt_T_u16 = 0U;

        while (MplXTbl[BilnrSelnIdxX2Tbl_Cnt_T_u32 + X2Idx_Cnt_T_u16 + 1U] < InputX2_Cnt_T_u16)
        {
            X2Idx_Cnt_T_u16++;
        }
    }

    /* Reduce previous results to raw indices for simplicity */
    TblIdx1_Cnt_T_u32 = (uint32)BilnrSelnIdxX1Tbl_Cnt_T_u32 + (uint32)X1Idx_Cnt_T_u16;
    TblIdx2_Cnt_T_u32 = (uint32)BilnrSelnIdxX1Tbl_Cnt_T_u32 + (uint32)X1Idx_Cnt_T_u16 + 1U;
    TblIdx3_Cnt_T_u32 = (uint32)BilnrSelnIdxX2Tbl_Cnt_T_u32 + (uint32)X2Idx_Cnt_T_u16;
    TblIdx4_Cnt_T_u32 = (uint32)BilnrSelnIdxX2Tbl_Cnt_T_u32 + (uint32)X2Idx_Cnt_T_u16 + 1U;

    /* Perform interpolations */
    BilnrSelnDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    X1Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx2_Cnt_T_u32] - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2Diff_Cnt_T_s32 = (sint32)MplXTbl[TblIdx4_Cnt_T_u32] - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    BilnrSelnInpDif_Cnt_T_s32 = (sint32)BilnrSeln - (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32];
    BilnrSeln2InpDif_Cnt_T_s32 = (sint32)BilnrSelnTbl[BilnrSelnIdx_Cnt_T_u32 + 1U] - (sint32)BilnrSeln;
    X1InpDif_Cnt_T_s32 = (sint32)XIdx_Cnt_T_u16 - (sint32)MplXTbl[TblIdx1_Cnt_T_u32];
    X2InpDif_Cnt_T_s32 = (sint32)InputX2_Cnt_T_u16 - (sint32)MplXTbl[TblIdx3_Cnt_T_u32];

    Y1Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx2_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];
    Y2Dif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx4_Cnt_T_u32] - (sint32)MplYTbl[TblIdx3_Cnt_T_u32];
    YCrossDif_Cnt_T_s32 = (sint32)MplYTbl[TblIdx3_Cnt_T_u32] - (sint32)MplYTbl[TblIdx1_Cnt_T_u32];

    Term1a_Cnt_T_s32 = X2Diff_Cnt_T_s32 * Y1Dif_Cnt_T_s32;
    Term1b_Cnt_T_s32 = X1InpDif_Cnt_T_s32 * BilnrSeln2InpDif_Cnt_T_s32;
    Term2a3a_Cnt_T_s32 = BilnrSelnInpDif_Cnt_T_s32 * X1Diff_Cnt_T_s32;
    Term2b_Cnt_T_s32 = X2Diff_Cnt_T_s32 * YCrossDif_Cnt_T_s32;
    Term3b_Cnt_T_s32 = X2InpDif_Cnt_T_s32 * Y2Dif_Cnt_T_s32;

    Numer_Cnt_T_f32 = ((float32)Term1a_Cnt_T_s32 * (float32)Term1b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term2b_Cnt_T_s32) +
        ((float32)Term2a3a_Cnt_T_s32 * (float32)Term3b_Cnt_T_s32);

    Denom_Cnt_T_f32 = (float32)X1Diff_Cnt_T_s32 * (float32)X2Diff_Cnt_T_s32 * (float32)BilnrSelnDif_Cnt_T_s32;


    if (Denom_Cnt_T_f32 <= FLT_EPSILON)
    {
        Outp_Cnt_T_s16 = MplYTbl[TblIdx1_Cnt_T_u32];
    }
    else
    {
        Outp_Cnt_T_f32 = (float32)MplYTbl[TblIdx1_Cnt_T_u32] + (Numer_Cnt_T_f32 / Denom_Cnt_T_f32);
        Outp_Cnt_T_s16 = FloatToFixdWithRound_s16_f32(Outp_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32);
    }

    return Outp_Cnt_T_s16;
}

#define NxtrIntrpn_STOP_SEC_CODE
#include "NxtrIntrpn_MemMap.h"
