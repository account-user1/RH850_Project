/******************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name:   math_stubs.c
* Module Description: Stubs for Polyspace analysis.
* Project:            CBD
* Author:             Matthew Leser
******************************************************************************************************************/

#include "Std_Types.h"

INLINE FUNC(float32, AUTOMATIC) fabsf(float32 Inp);

/*****************************************************************************
*  Name:           Abslt_f32_f32()
*  Description:    Single Precision Float Absolute Value
*  Inputs:         Inp
*  Outputs:        Absolute Value of Input
*  Usage Notes:    None
*****************************************************************************/
INLINE FUNC(float32, AUTOMATIC) fabsf(float32 Inp)
{
    if(Inp < 0.0f)
    {
        Inp = -Inp;
    }
    
    return (Inp);
}