#ifndef __DR7F701373_FCLA0_HEADER__
#define __DR7F701373_FCLA0_HEADER__



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
    uint8 _FCLA0INTR0 : 1;
    uint8 _FCLA0INTF0 : 1;
    uint8 _FCLA0INTL0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS0 : 1;
} FCLA0CTL0Bits_t;

typedef struct
{
    uint8 _FCLA0INTR1 : 1;
    uint8 _FCLA0INTF1 : 1;
    uint8 _FCLA0INTL1 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS1 : 1;
} FCLA0CTL1Bits_t;

typedef struct
{
    uint8 _FCLA0INTR2 : 1;
    uint8 _FCLA0INTF2 : 1;
    uint8 _FCLA0INTL2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS2 : 1;
} FCLA0CTL2Bits_t;

typedef struct
{
    uint8 _FCLA0INTR3 : 1;
    uint8 _FCLA0INTF3 : 1;
    uint8 _FCLA0INTL3 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS3 : 1;
} FCLA0CTL3Bits_t;

typedef struct
{
    uint8 _FCLA0INTR4 : 1;
    uint8 _FCLA0INTF4 : 1;
    uint8 _FCLA0INTL4 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS4 : 1;
} FCLA0CTL4Bits_t;

typedef struct
{
    uint8 _FCLA0INTR5 : 1;
    uint8 _FCLA0INTF5 : 1;
    uint8 _FCLA0INTL5 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS5 : 1;
} FCLA0CTL5Bits_t;

typedef struct
{
    uint8 _FCLA0INTR6 : 1;
    uint8 _FCLA0INTF6 : 1;
    uint8 _FCLA0INTL6 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS6 : 1;
} FCLA0CTL6Bits_t;

typedef struct
{
    uint8 _FCLA0INTR7 : 1;
    uint8 _FCLA0INTF7 : 1;
    uint8 _FCLA0INTL7 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA0BYPS7 : 1;
} FCLA0CTL7Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    FCLA0CTL0Bits_t BIT;
} FCLA0CTL0_t;

typedef union
{
    uint8 UINT8;
    FCLA0CTL1Bits_t BIT;
} FCLA0CTL1_t;

typedef union
{
    uint8 UINT8;
    FCLA0CTL2Bits_t BIT;
} FCLA0CTL2_t;

typedef union
{
    uint8 UINT8;
    FCLA0CTL3Bits_t BIT;
} FCLA0CTL3_t;

typedef union
{
    uint8 UINT8;
    FCLA0CTL4Bits_t BIT;
} FCLA0CTL4_t;

typedef union
{
    uint8 UINT8;
    FCLA0CTL5Bits_t BIT;
} FCLA0CTL5_t;

typedef union
{
    uint8 UINT8;
    FCLA0CTL6Bits_t BIT;
} FCLA0CTL6_t;

typedef union
{
    uint8 UINT8;
    FCLA0CTL7Bits_t BIT;
} FCLA0CTL7_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FCLA0CTL0_BASE, 0xFFC34000, __READ_WRITE, FCLA0CTL0_t);
__IOREG(FCLA0CTL1_BASE, 0xFFC34004, __READ_WRITE, FCLA0CTL1_t);
__IOREG(FCLA0CTL2_BASE, 0xFFC34008, __READ_WRITE, FCLA0CTL2_t);
__IOREG(FCLA0CTL3_BASE, 0xFFC3400C, __READ_WRITE, FCLA0CTL3_t);
__IOREG(FCLA0CTL4_BASE, 0xFFC34010, __READ_WRITE, FCLA0CTL4_t);
__IOREG(FCLA0CTL5_BASE, 0xFFC34014, __READ_WRITE, FCLA0CTL5_t);
__IOREG(FCLA0CTL6_BASE, 0xFFC34018, __READ_WRITE, FCLA0CTL6_t);
__IOREG(FCLA0CTL7_BASE, 0xFFC3401C, __READ_WRITE, FCLA0CTL7_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FCLA0CTL0 FCLA0CTL0_BASE.UINT8
#define FCLA0CTL0_FCLA0INTR0 FCLA0CTL0_BASE.BIT._FCLA0INTR0
#define FCLA0CTL0_FCLA0INTF0 FCLA0CTL0_BASE.BIT._FCLA0INTF0
#define FCLA0CTL0_FCLA0INTL0 FCLA0CTL0_BASE.BIT._FCLA0INTL0
#define FCLA0CTL0_FCLA0BYPS0 FCLA0CTL0_BASE.BIT._FCLA0BYPS0
#define FCLA0CTL1 FCLA0CTL1_BASE.UINT8
#define FCLA0CTL1_FCLA0INTR1 FCLA0CTL1_BASE.BIT._FCLA0INTR1
#define FCLA0CTL1_FCLA0INTF1 FCLA0CTL1_BASE.BIT._FCLA0INTF1
#define FCLA0CTL1_FCLA0INTL1 FCLA0CTL1_BASE.BIT._FCLA0INTL1
#define FCLA0CTL1_FCLA0BYPS1 FCLA0CTL1_BASE.BIT._FCLA0BYPS1
#define FCLA0CTL2 FCLA0CTL2_BASE.UINT8
#define FCLA0CTL2_FCLA0INTR2 FCLA0CTL2_BASE.BIT._FCLA0INTR2
#define FCLA0CTL2_FCLA0INTF2 FCLA0CTL2_BASE.BIT._FCLA0INTF2
#define FCLA0CTL2_FCLA0INTL2 FCLA0CTL2_BASE.BIT._FCLA0INTL2
#define FCLA0CTL2_FCLA0BYPS2 FCLA0CTL2_BASE.BIT._FCLA0BYPS2
#define FCLA0CTL3 FCLA0CTL3_BASE.UINT8
#define FCLA0CTL3_FCLA0INTR3 FCLA0CTL3_BASE.BIT._FCLA0INTR3
#define FCLA0CTL3_FCLA0INTF3 FCLA0CTL3_BASE.BIT._FCLA0INTF3
#define FCLA0CTL3_FCLA0INTL3 FCLA0CTL3_BASE.BIT._FCLA0INTL3
#define FCLA0CTL3_FCLA0BYPS3 FCLA0CTL3_BASE.BIT._FCLA0BYPS3
#define FCLA0CTL4 FCLA0CTL4_BASE.UINT8
#define FCLA0CTL4_FCLA0INTR4 FCLA0CTL4_BASE.BIT._FCLA0INTR4
#define FCLA0CTL4_FCLA0INTF4 FCLA0CTL4_BASE.BIT._FCLA0INTF4
#define FCLA0CTL4_FCLA0INTL4 FCLA0CTL4_BASE.BIT._FCLA0INTL4
#define FCLA0CTL4_FCLA0BYPS4 FCLA0CTL4_BASE.BIT._FCLA0BYPS4
#define FCLA0CTL5 FCLA0CTL5_BASE.UINT8
#define FCLA0CTL5_FCLA0INTR5 FCLA0CTL5_BASE.BIT._FCLA0INTR5
#define FCLA0CTL5_FCLA0INTF5 FCLA0CTL5_BASE.BIT._FCLA0INTF5
#define FCLA0CTL5_FCLA0INTL5 FCLA0CTL5_BASE.BIT._FCLA0INTL5
#define FCLA0CTL5_FCLA0BYPS5 FCLA0CTL5_BASE.BIT._FCLA0BYPS5
#define FCLA0CTL6 FCLA0CTL6_BASE.UINT8
#define FCLA0CTL6_FCLA0INTR6 FCLA0CTL6_BASE.BIT._FCLA0INTR6
#define FCLA0CTL6_FCLA0INTF6 FCLA0CTL6_BASE.BIT._FCLA0INTF6
#define FCLA0CTL6_FCLA0INTL6 FCLA0CTL6_BASE.BIT._FCLA0INTL6
#define FCLA0CTL6_FCLA0BYPS6 FCLA0CTL6_BASE.BIT._FCLA0BYPS6
#define FCLA0CTL7 FCLA0CTL7_BASE.UINT8
#define FCLA0CTL7_FCLA0INTR7 FCLA0CTL7_BASE.BIT._FCLA0INTR7
#define FCLA0CTL7_FCLA0INTF7 FCLA0CTL7_BASE.BIT._FCLA0INTF7
#define FCLA0CTL7_FCLA0INTL7 FCLA0CTL7_BASE.BIT._FCLA0INTL7
#define FCLA0CTL7_FCLA0BYPS7 FCLA0CTL7_BASE.BIT._FCLA0BYPS7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif