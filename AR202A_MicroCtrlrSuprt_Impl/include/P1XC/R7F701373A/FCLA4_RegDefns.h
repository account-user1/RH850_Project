#ifndef __DR7F701373_FCLA4_HEADER__
#define __DR7F701373_FCLA4_HEADER__



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
    uint8 _FCLA4INTR0 : 1;
    uint8 _FCLA4INTF0 : 1;
    uint8 _FCLA4INTL0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA4BYPS0 : 1;
} FCLA4CTL0Bits_t;

typedef struct
{
    uint8 _FCLA4INTR1 : 1;
    uint8 _FCLA4INTF1 : 1;
    uint8 _FCLA4INTL1 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA4BYPS1 : 1;
} FCLA4CTL1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    FCLA4CTL0Bits_t BIT;
} FCLA4CTL0_t;

typedef union
{
    uint8 UINT8;
    FCLA4CTL1Bits_t BIT;
} FCLA4CTL1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FCLA4CTL0_BASE, 0xFFC34400, __READ_WRITE, FCLA4CTL0_t);
__IOREG(FCLA4CTL1_BASE, 0xFFC34404, __READ_WRITE, FCLA4CTL1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FCLA4CTL0 FCLA4CTL0_BASE.UINT8
#define FCLA4CTL0_FCLA4INTR0 FCLA4CTL0_BASE.BIT._FCLA4INTR0
#define FCLA4CTL0_FCLA4INTF0 FCLA4CTL0_BASE.BIT._FCLA4INTF0
#define FCLA4CTL0_FCLA4INTL0 FCLA4CTL0_BASE.BIT._FCLA4INTL0
#define FCLA4CTL0_FCLA4BYPS0 FCLA4CTL0_BASE.BIT._FCLA4BYPS0
#define FCLA4CTL1 FCLA4CTL1_BASE.UINT8
#define FCLA4CTL1_FCLA4INTR1 FCLA4CTL1_BASE.BIT._FCLA4INTR1
#define FCLA4CTL1_FCLA4INTF1 FCLA4CTL1_BASE.BIT._FCLA4INTF1
#define FCLA4CTL1_FCLA4INTL1 FCLA4CTL1_BASE.BIT._FCLA4INTL1
#define FCLA4CTL1_FCLA4BYPS1 FCLA4CTL1_BASE.BIT._FCLA4BYPS1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif