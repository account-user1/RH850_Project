#ifndef __DR7F701373_SINT_HEADER__
#define __DR7F701373_SINT_HEADER__



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
    uint8 _SINTC0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} SINTR0Bits_t;

typedef struct
{
    uint8 _SINTC1 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} SINTR1Bits_t;

typedef struct
{
    uint8 _SINTC2 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} SINTR2Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    SINTR0Bits_t BIT;
} SINTR0_t;

typedef union
{
    uint8 UINT8;
    SINTR1Bits_t BIT;
} SINTR1_t;

typedef union
{
    uint8 UINT8;
    SINTR2Bits_t BIT;
} SINTR2_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(SINTR0_BASE, 0xFFCDE000, __READ_WRITE, SINTR0_t);
__IOREG(SINTR1_BASE, 0xFFCDE004, __READ_WRITE, SINTR1_t);
__IOREG(SINTR2_BASE, 0xFFCDE008, __READ_WRITE, SINTR2_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define SINTR0 SINTR0_BASE.UINT8
#define SINTR0_SINTC0 SINTR0_BASE.BIT._SINTC0
#define SINTR1 SINTR1_BASE.UINT8
#define SINTR1_SINTC1 SINTR1_BASE.BIT._SINTC1
#define SINTR2 SINTR2_BASE.UINT8
#define SINTR2_SINTC2 SINTR2_BASE.BIT._SINTC2

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif