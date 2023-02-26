#ifndef __DR7F701373_DCRB3_HEADER__
#define __DR7F701373_DCRB3_HEADER__



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
    uint32 _DCRB3CIN : 32;
} DCRB3CINBits_t;

typedef struct
{
    uint32 _DCRB3COUT : 32;
} DCRB3COUTBits_t;

typedef struct
{
    uint8 _DCRB3POL : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _DCRB3ISZ : 2;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} DCRB3CTLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    DCRB3CINBits_t BIT;
} DCRB3CIN_t;

typedef union
{
    uint32 UINT32;
    DCRB3COUTBits_t BIT;
} DCRB3COUT_t;

typedef union
{
    uint8 UINT8;
    DCRB3CTLBits_t BIT;
} DCRB3CTL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DCRB3CIN_BASE, 0xFFF71000, __READ_WRITE, DCRB3CIN_t);
__IOREG(DCRB3COUT_BASE, 0xFFF71004, __READ_WRITE, DCRB3COUT_t);
__IOREG(DCRB3CTL_BASE, 0xFFF71020, __READ_WRITE, DCRB3CTL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DCRB3CIN DCRB3CIN_BASE.UINT32
#define DCRB3CIN_DCRB3CIN DCRB3CIN_BASE.BIT._DCRB3CIN
#define DCRB3COUT DCRB3COUT_BASE.UINT32
#define DCRB3COUT_DCRB3COUT DCRB3COUT_BASE.BIT._DCRB3COUT
#define DCRB3CTL DCRB3CTL_BASE.UINT8
#define DCRB3CTL_DCRB3POL DCRB3CTL_BASE.BIT._DCRB3POL
#define DCRB3CTL_DCRB3ISZ DCRB3CTL_BASE.BIT._DCRB3ISZ

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif