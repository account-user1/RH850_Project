#ifndef __DR7F701373_DCRB1_HEADER__
#define __DR7F701373_DCRB1_HEADER__



/**********************************************************************************************************************
 Module File Name  : <Module>_RegDefns.h
 Module Description: Generated Register Definitions of Renesas Peripherals
 Project           : CBD
 Author            : Lucas Wendling
**********************************************************************************************************************
 Version Control:
 %version:          1 %
 %derived_by:       czgng4 %
----------------------------------------------------------------------------------------------------------------------
 Date      Rev      Author         Change Description
 -------   -------  --------  ----------------------------------------------------------------------------------------
 07/12/17  1        LWW       Header file generated from Renesas tool based on input files contained in tools directory
*********************************************************************************************************************/


#include "Std_Types.h"

#ifndef _GHS_PRAGMA_IO_TYPEDEF_
#define _GHS_PRAGMA_IO_TYPEDEF_
#define PRAGMA(x) _Pragma(#x)
#define __READ volatile const
#define __WRITE volatile
#define __READ_WRITE volatile
#define __IOREG(reg, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg;
#endif

#define  L 0
#define  H 1
#define LL 0
#define LH 1
#define HL 2
#define HH 3


/* ------------------------------------------------------------------ */
/* BIT ACCESS STRUCTURES                                              */
/* ------------------------------------------------------------------ */
typedef struct
{
    uint32 _DCRB1CIN : 32;
} DCRB1CINBits_t;

typedef struct
{
    uint32 _DCRB1COUT : 32;
} DCRB1COUTBits_t;

typedef struct
{
    uint8 _DCRB1POL : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _DCRB1ISZ : 2;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} DCRB1CTLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    DCRB1CINBits_t BIT;
} DCRB1CIN_t;

typedef union
{
    uint32 UINT32;
    DCRB1COUTBits_t BIT;
} DCRB1COUT_t;

typedef union
{
    uint8 UINT8;
    DCRB1CTLBits_t BIT;
} DCRB1CTL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DCRB1CIN_BASE, 0xFFF70000, __READ_WRITE, DCRB1CIN_t);
__IOREG(DCRB1COUT_BASE, 0xFFF70004, __READ_WRITE, DCRB1COUT_t);
__IOREG(DCRB1CTL_BASE, 0xFFF70020, __READ_WRITE, DCRB1CTL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DCRB1CIN DCRB1CIN_BASE.UINT32
#define DCRB1CIN_DCRB1CIN DCRB1CIN_BASE.BIT._DCRB1CIN
#define DCRB1COUT DCRB1COUT_BASE.UINT32
#define DCRB1COUT_DCRB1COUT DCRB1COUT_BASE.BIT._DCRB1COUT
#define DCRB1CTL DCRB1CTL_BASE.UINT8
#define DCRB1CTL_DCRB1POL DCRB1CTL_BASE.BIT._DCRB1POL
#define DCRB1CTL_DCRB1ISZ DCRB1CTL_BASE.BIT._DCRB1ISZ

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif