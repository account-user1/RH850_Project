#ifndef __DR7F701373_FCLA1_HEADER__
#define __DR7F701373_FCLA1_HEADER__



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
    uint8 _FCLA1INTR0 : 1;
    uint8 _FCLA1INTF0 : 1;
    uint8 _FCLA1INTL0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA1BYPS0 : 1;
} FCLA1CTL0Bits_t;

typedef struct
{
    uint8 _FCLA1INTR1 : 1;
    uint8 _FCLA1INTF1 : 1;
    uint8 _FCLA1INTL1 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA1BYPS1 : 1;
} FCLA1CTL1Bits_t;

typedef struct
{
    uint8 _FCLA1INTR2 : 1;
    uint8 _FCLA1INTF2 : 1;
    uint8 _FCLA1INTL2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA1BYPS2 : 1;
} FCLA1CTL2Bits_t;

typedef struct
{
    uint8 _FCLA1INTR3 : 1;
    uint8 _FCLA1INTF3 : 1;
    uint8 _FCLA1INTL3 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA1BYPS3 : 1;
} FCLA1CTL3Bits_t;

typedef struct
{
    uint8 _FCLA1INTR4 : 1;
    uint8 _FCLA1INTF4 : 1;
    uint8 _FCLA1INTL4 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA1BYPS4 : 1;
} FCLA1CTL4Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    FCLA1CTL0Bits_t BIT;
} FCLA1CTL0_t;

typedef union
{
    uint8 UINT8;
    FCLA1CTL1Bits_t BIT;
} FCLA1CTL1_t;

typedef union
{
    uint8 UINT8;
    FCLA1CTL2Bits_t BIT;
} FCLA1CTL2_t;

typedef union
{
    uint8 UINT8;
    FCLA1CTL3Bits_t BIT;
} FCLA1CTL3_t;

typedef union
{
    uint8 UINT8;
    FCLA1CTL4Bits_t BIT;
} FCLA1CTL4_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FCLA1CTL0_BASE, 0xFFC34100, __READ_WRITE, FCLA1CTL0_t);
__IOREG(FCLA1CTL1_BASE, 0xFFC34104, __READ_WRITE, FCLA1CTL1_t);
__IOREG(FCLA1CTL2_BASE, 0xFFC34108, __READ_WRITE, FCLA1CTL2_t);
__IOREG(FCLA1CTL3_BASE, 0xFFC3410C, __READ_WRITE, FCLA1CTL3_t);
__IOREG(FCLA1CTL4_BASE, 0xFFC34110, __READ_WRITE, FCLA1CTL4_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FCLA1CTL0 FCLA1CTL0_BASE.UINT8
#define FCLA1CTL0_FCLA1INTR0 FCLA1CTL0_BASE.BIT._FCLA1INTR0
#define FCLA1CTL0_FCLA1INTF0 FCLA1CTL0_BASE.BIT._FCLA1INTF0
#define FCLA1CTL0_FCLA1INTL0 FCLA1CTL0_BASE.BIT._FCLA1INTL0
#define FCLA1CTL0_FCLA1BYPS0 FCLA1CTL0_BASE.BIT._FCLA1BYPS0
#define FCLA1CTL1 FCLA1CTL1_BASE.UINT8
#define FCLA1CTL1_FCLA1INTR1 FCLA1CTL1_BASE.BIT._FCLA1INTR1
#define FCLA1CTL1_FCLA1INTF1 FCLA1CTL1_BASE.BIT._FCLA1INTF1
#define FCLA1CTL1_FCLA1INTL1 FCLA1CTL1_BASE.BIT._FCLA1INTL1
#define FCLA1CTL1_FCLA1BYPS1 FCLA1CTL1_BASE.BIT._FCLA1BYPS1
#define FCLA1CTL2 FCLA1CTL2_BASE.UINT8
#define FCLA1CTL2_FCLA1INTR2 FCLA1CTL2_BASE.BIT._FCLA1INTR2
#define FCLA1CTL2_FCLA1INTF2 FCLA1CTL2_BASE.BIT._FCLA1INTF2
#define FCLA1CTL2_FCLA1INTL2 FCLA1CTL2_BASE.BIT._FCLA1INTL2
#define FCLA1CTL2_FCLA1BYPS2 FCLA1CTL2_BASE.BIT._FCLA1BYPS2
#define FCLA1CTL3 FCLA1CTL3_BASE.UINT8
#define FCLA1CTL3_FCLA1INTR3 FCLA1CTL3_BASE.BIT._FCLA1INTR3
#define FCLA1CTL3_FCLA1INTF3 FCLA1CTL3_BASE.BIT._FCLA1INTF3
#define FCLA1CTL3_FCLA1INTL3 FCLA1CTL3_BASE.BIT._FCLA1INTL3
#define FCLA1CTL3_FCLA1BYPS3 FCLA1CTL3_BASE.BIT._FCLA1BYPS3
#define FCLA1CTL4 FCLA1CTL4_BASE.UINT8
#define FCLA1CTL4_FCLA1INTR4 FCLA1CTL4_BASE.BIT._FCLA1INTR4
#define FCLA1CTL4_FCLA1INTF4 FCLA1CTL4_BASE.BIT._FCLA1INTF4
#define FCLA1CTL4_FCLA1INTL4 FCLA1CTL4_BASE.BIT._FCLA1INTL4
#define FCLA1CTL4_FCLA1BYPS4 FCLA1CTL4_BASE.BIT._FCLA1BYPS4

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif