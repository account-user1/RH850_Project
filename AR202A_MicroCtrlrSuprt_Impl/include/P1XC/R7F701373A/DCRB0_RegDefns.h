#ifndef __DR7F701373_DCRB0_HEADER__
#define __DR7F701373_DCRB0_HEADER__



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
    uint32 _DCRB0CIN : 32;
} DCRB0CINBits_t;

typedef struct
{
    uint32 _DCRB0COUT : 32;
} DCRB0COUTBits_t;

typedef struct
{
    uint8 _DCRB0POL : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _DCRB0ISZ : 2;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} DCRB0CTLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    DCRB0CINBits_t BIT;
} DCRB0CIN_t;

typedef union
{
    uint32 UINT32;
    DCRB0COUTBits_t BIT;
} DCRB0COUT_t;

typedef union
{
    uint8 UINT8;
    DCRB0CTLBits_t BIT;
} DCRB0CTL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DCRB0CIN_BASE, 0xFFD50000, __READ_WRITE, DCRB0CIN_t);
__IOREG(DCRB0COUT_BASE, 0xFFD50004, __READ_WRITE, DCRB0COUT_t);
__IOREG(DCRB0CTL_BASE, 0xFFD50020, __READ_WRITE, DCRB0CTL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DCRB0CIN DCRB0CIN_BASE.UINT32
#define DCRB0CIN_DCRB0CIN DCRB0CIN_BASE.BIT._DCRB0CIN
#define DCRB0COUT DCRB0COUT_BASE.UINT32
#define DCRB0COUT_DCRB0COUT DCRB0COUT_BASE.BIT._DCRB0COUT
#define DCRB0CTL DCRB0CTL_BASE.UINT8
#define DCRB0CTL_DCRB0POL DCRB0CTL_BASE.BIT._DCRB0POL
#define DCRB0CTL_DCRB0ISZ DCRB0CTL_BASE.BIT._DCRB0ISZ

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif