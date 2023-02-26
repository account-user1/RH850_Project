#ifndef __DR7F701373_FCLA6_HEADER__
#define __DR7F701373_FCLA6_HEADER__



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
    uint8 _FCLA6INTR0 : 1;
    uint8 _FCLA6INTF0 : 1;
    uint8 _FCLA6INTL0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA6BYPS0 : 1;
} FCLA6CTL0Bits_t;

typedef struct
{
    uint8 _FCLA6INTR1 : 1;
    uint8 _FCLA6INTF1 : 1;
    uint8 _FCLA6INTL1 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA6BYPS1 : 1;
} FCLA6CTL1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    FCLA6CTL0Bits_t BIT;
} FCLA6CTL0_t;

typedef union
{
    uint8 UINT8;
    FCLA6CTL1Bits_t BIT;
} FCLA6CTL1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FCLA6CTL0_BASE, 0xFFC34600, __READ_WRITE, FCLA6CTL0_t);
__IOREG(FCLA6CTL1_BASE, 0xFFC34604, __READ_WRITE, FCLA6CTL1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FCLA6CTL0 FCLA6CTL0_BASE.UINT8
#define FCLA6CTL0_FCLA6INTR0 FCLA6CTL0_BASE.BIT._FCLA6INTR0
#define FCLA6CTL0_FCLA6INTF0 FCLA6CTL0_BASE.BIT._FCLA6INTF0
#define FCLA6CTL0_FCLA6INTL0 FCLA6CTL0_BASE.BIT._FCLA6INTL0
#define FCLA6CTL0_FCLA6BYPS0 FCLA6CTL0_BASE.BIT._FCLA6BYPS0
#define FCLA6CTL1 FCLA6CTL1_BASE.UINT8
#define FCLA6CTL1_FCLA6INTR1 FCLA6CTL1_BASE.BIT._FCLA6INTR1
#define FCLA6CTL1_FCLA6INTF1 FCLA6CTL1_BASE.BIT._FCLA6INTF1
#define FCLA6CTL1_FCLA6INTL1 FCLA6CTL1_BASE.BIT._FCLA6INTL1
#define FCLA6CTL1_FCLA6BYPS1 FCLA6CTL1_BASE.BIT._FCLA6BYPS1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif