#ifndef __DR7F701373_FCLA5_HEADER__
#define __DR7F701373_FCLA5_HEADER__



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
    uint8 _FCLA5INTR0 : 1;
    uint8 _FCLA5INTF0 : 1;
    uint8 _FCLA5INTL0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS0 : 1;
} FCLA5CTL0Bits_t;

typedef struct
{
    uint8 _FCLA5INTR1 : 1;
    uint8 _FCLA5INTF1 : 1;
    uint8 _FCLA5INTL1 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS1 : 1;
} FCLA5CTL1Bits_t;

typedef struct
{
    uint8 _FCLA5INTR2 : 1;
    uint8 _FCLA5INTF2 : 1;
    uint8 _FCLA5INTL2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS2 : 1;
} FCLA5CTL2Bits_t;

typedef struct
{
    uint8 _FCLA5INTR3 : 1;
    uint8 _FCLA5INTF3 : 1;
    uint8 _FCLA5INTL3 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS3 : 1;
} FCLA5CTL3Bits_t;

typedef struct
{
    uint8 _FCLA5INTR4 : 1;
    uint8 _FCLA5INTF4 : 1;
    uint8 _FCLA5INTL4 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS4 : 1;
} FCLA5CTL4Bits_t;

typedef struct
{
    uint8 _FCLA5INTR5 : 1;
    uint8 _FCLA5INTF5 : 1;
    uint8 _FCLA5INTL5 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS5 : 1;
} FCLA5CTL5Bits_t;

typedef struct
{
    uint8 _FCLA5INTR6 : 1;
    uint8 _FCLA5INTF6 : 1;
    uint8 _FCLA5INTL6 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS6 : 1;
} FCLA5CTL6Bits_t;

typedef struct
{
    uint8 _FCLA5INTR7 : 1;
    uint8 _FCLA5INTF7 : 1;
    uint8 _FCLA5INTL7 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA5BYPS7 : 1;
} FCLA5CTL7Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    FCLA5CTL0Bits_t BIT;
} FCLA5CTL0_t;

typedef union
{
    uint8 UINT8;
    FCLA5CTL1Bits_t BIT;
} FCLA5CTL1_t;

typedef union
{
    uint8 UINT8;
    FCLA5CTL2Bits_t BIT;
} FCLA5CTL2_t;

typedef union
{
    uint8 UINT8;
    FCLA5CTL3Bits_t BIT;
} FCLA5CTL3_t;

typedef union
{
    uint8 UINT8;
    FCLA5CTL4Bits_t BIT;
} FCLA5CTL4_t;

typedef union
{
    uint8 UINT8;
    FCLA5CTL5Bits_t BIT;
} FCLA5CTL5_t;

typedef union
{
    uint8 UINT8;
    FCLA5CTL6Bits_t BIT;
} FCLA5CTL6_t;

typedef union
{
    uint8 UINT8;
    FCLA5CTL7Bits_t BIT;
} FCLA5CTL7_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FCLA5CTL0_BASE, 0xFFC34500, __READ_WRITE, FCLA5CTL0_t);
__IOREG(FCLA5CTL1_BASE, 0xFFC34504, __READ_WRITE, FCLA5CTL1_t);
__IOREG(FCLA5CTL2_BASE, 0xFFC34508, __READ_WRITE, FCLA5CTL2_t);
__IOREG(FCLA5CTL3_BASE, 0xFFC3450C, __READ_WRITE, FCLA5CTL3_t);
__IOREG(FCLA5CTL4_BASE, 0xFFC34510, __READ_WRITE, FCLA5CTL4_t);
__IOREG(FCLA5CTL5_BASE, 0xFFC34514, __READ_WRITE, FCLA5CTL5_t);
__IOREG(FCLA5CTL6_BASE, 0xFFC34518, __READ_WRITE, FCLA5CTL6_t);
__IOREG(FCLA5CTL7_BASE, 0xFFC3451C, __READ_WRITE, FCLA5CTL7_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FCLA5CTL0 FCLA5CTL0_BASE.UINT8
#define FCLA5CTL0_FCLA5INTR0 FCLA5CTL0_BASE.BIT._FCLA5INTR0
#define FCLA5CTL0_FCLA5INTF0 FCLA5CTL0_BASE.BIT._FCLA5INTF0
#define FCLA5CTL0_FCLA5INTL0 FCLA5CTL0_BASE.BIT._FCLA5INTL0
#define FCLA5CTL0_FCLA5BYPS0 FCLA5CTL0_BASE.BIT._FCLA5BYPS0
#define FCLA5CTL1 FCLA5CTL1_BASE.UINT8
#define FCLA5CTL1_FCLA5INTR1 FCLA5CTL1_BASE.BIT._FCLA5INTR1
#define FCLA5CTL1_FCLA5INTF1 FCLA5CTL1_BASE.BIT._FCLA5INTF1
#define FCLA5CTL1_FCLA5INTL1 FCLA5CTL1_BASE.BIT._FCLA5INTL1
#define FCLA5CTL1_FCLA5BYPS1 FCLA5CTL1_BASE.BIT._FCLA5BYPS1
#define FCLA5CTL2 FCLA5CTL2_BASE.UINT8
#define FCLA5CTL2_FCLA5INTR2 FCLA5CTL2_BASE.BIT._FCLA5INTR2
#define FCLA5CTL2_FCLA5INTF2 FCLA5CTL2_BASE.BIT._FCLA5INTF2
#define FCLA5CTL2_FCLA5INTL2 FCLA5CTL2_BASE.BIT._FCLA5INTL2
#define FCLA5CTL2_FCLA5BYPS2 FCLA5CTL2_BASE.BIT._FCLA5BYPS2
#define FCLA5CTL3 FCLA5CTL3_BASE.UINT8
#define FCLA5CTL3_FCLA5INTR3 FCLA5CTL3_BASE.BIT._FCLA5INTR3
#define FCLA5CTL3_FCLA5INTF3 FCLA5CTL3_BASE.BIT._FCLA5INTF3
#define FCLA5CTL3_FCLA5INTL3 FCLA5CTL3_BASE.BIT._FCLA5INTL3
#define FCLA5CTL3_FCLA5BYPS3 FCLA5CTL3_BASE.BIT._FCLA5BYPS3
#define FCLA5CTL4 FCLA5CTL4_BASE.UINT8
#define FCLA5CTL4_FCLA5INTR4 FCLA5CTL4_BASE.BIT._FCLA5INTR4
#define FCLA5CTL4_FCLA5INTF4 FCLA5CTL4_BASE.BIT._FCLA5INTF4
#define FCLA5CTL4_FCLA5INTL4 FCLA5CTL4_BASE.BIT._FCLA5INTL4
#define FCLA5CTL4_FCLA5BYPS4 FCLA5CTL4_BASE.BIT._FCLA5BYPS4
#define FCLA5CTL5 FCLA5CTL5_BASE.UINT8
#define FCLA5CTL5_FCLA5INTR5 FCLA5CTL5_BASE.BIT._FCLA5INTR5
#define FCLA5CTL5_FCLA5INTF5 FCLA5CTL5_BASE.BIT._FCLA5INTF5
#define FCLA5CTL5_FCLA5INTL5 FCLA5CTL5_BASE.BIT._FCLA5INTL5
#define FCLA5CTL5_FCLA5BYPS5 FCLA5CTL5_BASE.BIT._FCLA5BYPS5
#define FCLA5CTL6 FCLA5CTL6_BASE.UINT8
#define FCLA5CTL6_FCLA5INTR6 FCLA5CTL6_BASE.BIT._FCLA5INTR6
#define FCLA5CTL6_FCLA5INTF6 FCLA5CTL6_BASE.BIT._FCLA5INTF6
#define FCLA5CTL6_FCLA5INTL6 FCLA5CTL6_BASE.BIT._FCLA5INTL6
#define FCLA5CTL6_FCLA5BYPS6 FCLA5CTL6_BASE.BIT._FCLA5BYPS6
#define FCLA5CTL7 FCLA5CTL7_BASE.UINT8
#define FCLA5CTL7_FCLA5INTR7 FCLA5CTL7_BASE.BIT._FCLA5INTR7
#define FCLA5CTL7_FCLA5INTF7 FCLA5CTL7_BASE.BIT._FCLA5INTF7
#define FCLA5CTL7_FCLA5INTL7 FCLA5CTL7_BASE.BIT._FCLA5INTL7
#define FCLA5CTL7_FCLA5BYPS7 FCLA5CTL7_BASE.BIT._FCLA5BYPS7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif