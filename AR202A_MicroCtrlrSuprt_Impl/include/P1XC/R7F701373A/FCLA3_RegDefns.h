#ifndef __DR7F701373_FCLA3_HEADER__
#define __DR7F701373_FCLA3_HEADER__



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
    uint8 _FCLA3INTR0 : 1;
    uint8 _FCLA3INTF0 : 1;
    uint8 _FCLA3INTL0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA3BYPS0 : 1;
} FCLA3CTL0Bits_t;

typedef struct
{
    uint8 _FCLA3INTR1 : 1;
    uint8 _FCLA3INTF1 : 1;
    uint8 _FCLA3INTL1 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _FCLA3BYPS1 : 1;
} FCLA3CTL1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    FCLA3CTL0Bits_t BIT;
} FCLA3CTL0_t;

typedef union
{
    uint8 UINT8;
    FCLA3CTL1Bits_t BIT;
} FCLA3CTL1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FCLA3CTL0_BASE, 0xFFC34300, __READ_WRITE, FCLA3CTL0_t);
__IOREG(FCLA3CTL1_BASE, 0xFFC34304, __READ_WRITE, FCLA3CTL1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FCLA3CTL0 FCLA3CTL0_BASE.UINT8
#define FCLA3CTL0_FCLA3INTR0 FCLA3CTL0_BASE.BIT._FCLA3INTR0
#define FCLA3CTL0_FCLA3INTF0 FCLA3CTL0_BASE.BIT._FCLA3INTF0
#define FCLA3CTL0_FCLA3INTL0 FCLA3CTL0_BASE.BIT._FCLA3INTL0
#define FCLA3CTL0_FCLA3BYPS0 FCLA3CTL0_BASE.BIT._FCLA3BYPS0
#define FCLA3CTL1 FCLA3CTL1_BASE.UINT8
#define FCLA3CTL1_FCLA3INTR1 FCLA3CTL1_BASE.BIT._FCLA3INTR1
#define FCLA3CTL1_FCLA3INTF1 FCLA3CTL1_BASE.BIT._FCLA3INTF1
#define FCLA3CTL1_FCLA3INTL1 FCLA3CTL1_BASE.BIT._FCLA3INTL1
#define FCLA3CTL1_FCLA3BYPS1 FCLA3CTL1_BASE.BIT._FCLA3BYPS1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif