#ifndef __DR7F701373_FCLA2_HEADER__
#define __DR7F701373_FCLA2_HEADER__



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
    uint8 _FCLA2INTR0 : 1;
    uint8 _FCLA2INTF0 : 1;
    uint8 _FCLA2INTL0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA2BYPS0 : 1;
} FCLA2CTL0Bits_t;

typedef struct
{
    uint8 _FCLA2INTR1 : 1;
    uint8 _FCLA2INTF1 : 1;
    uint8 _FCLA2INTL1 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA2BYPS1 : 1;
} FCLA2CTL1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    FCLA2CTL0Bits_t BIT;
} FCLA2CTL0_t;

typedef union
{
    uint8 UINT8;
    FCLA2CTL1Bits_t BIT;
} FCLA2CTL1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FCLA2CTL0_BASE, 0xFFC34200, __READ_WRITE, FCLA2CTL0_t);
__IOREG(FCLA2CTL1_BASE, 0xFFC34204, __READ_WRITE, FCLA2CTL1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FCLA2CTL0 FCLA2CTL0_BASE.UINT8
#define FCLA2CTL0_FCLA2INTR0 FCLA2CTL0_BASE.BIT._FCLA2INTR0
#define FCLA2CTL0_FCLA2INTF0 FCLA2CTL0_BASE.BIT._FCLA2INTF0
#define FCLA2CTL0_FCLA2INTL0 FCLA2CTL0_BASE.BIT._FCLA2INTL0
#define FCLA2CTL0_FCLA2BYPS0 FCLA2CTL0_BASE.BIT._FCLA2BYPS0
#define FCLA2CTL1 FCLA2CTL1_BASE.UINT8
#define FCLA2CTL1_FCLA2INTR1 FCLA2CTL1_BASE.BIT._FCLA2INTR1
#define FCLA2CTL1_FCLA2INTF1 FCLA2CTL1_BASE.BIT._FCLA2INTF1
#define FCLA2CTL1_FCLA2INTL1 FCLA2CTL1_BASE.BIT._FCLA2INTL1
#define FCLA2CTL1_FCLA2BYPS1 FCLA2CTL1_BASE.BIT._FCLA2BYPS1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif