#ifndef __DR7F701373_DCRB2_HEADER__
#define __DR7F701373_DCRB2_HEADER__



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
    uint32 _DCRB2CIN : 32;
} DCRB2CINBits_t;

typedef struct
{
    uint32 _DCRB2COUT : 32;
} DCRB2COUTBits_t;

typedef struct
{
    uint8 _DCRB2POL : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _DCRB2ISZ : 2;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} DCRB2CTLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    DCRB2CINBits_t BIT;
} DCRB2CIN_t;

typedef union
{
    uint32 UINT32;
    DCRB2COUTBits_t BIT;
} DCRB2COUT_t;

typedef union
{
    uint8 UINT8;
    DCRB2CTLBits_t BIT;
} DCRB2CTL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DCRB2CIN_BASE, 0xFFD51000, __READ_WRITE, DCRB2CIN_t);
__IOREG(DCRB2COUT_BASE, 0xFFD51004, __READ_WRITE, DCRB2COUT_t);
__IOREG(DCRB2CTL_BASE, 0xFFD51020, __READ_WRITE, DCRB2CTL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DCRB2CIN DCRB2CIN_BASE.UINT32
#define DCRB2CIN_DCRB2CIN DCRB2CIN_BASE.BIT._DCRB2CIN
#define DCRB2COUT DCRB2COUT_BASE.UINT32
#define DCRB2COUT_DCRB2COUT DCRB2COUT_BASE.BIT._DCRB2COUT
#define DCRB2CTL DCRB2CTL_BASE.UINT8
#define DCRB2CTL_DCRB2POL DCRB2CTL_BASE.BIT._DCRB2POL
#define DCRB2CTL_DCRB2ISZ DCRB2CTL_BASE.BIT._DCRB2ISZ

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif