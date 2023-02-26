#ifndef __DR7F701373_CMP_HEADER__
#define __DR7F701373_CMP_HEADER__



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
    uint32 _CMPTST0 : 32;
} CMPTST0Bits_t;

typedef struct
{
    uint32 _CMPTST1 : 32;
} CMPTST1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    CMPTST0Bits_t BIT;
} CMPTST0_t;

typedef union
{
    uint32 UINT32;
    CMPTST1Bits_t BIT;
} CMPTST1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CMPTST0_BASE, 0xFFFEED00, __READ_WRITE, CMPTST0_t);
__IOREG(CMPTST1_BASE, 0xFFFEED04, __READ_WRITE, CMPTST1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CMPTST0 CMPTST0_BASE.UINT32
#define CMPTST0_CMPTST0 CMPTST0_BASE.BIT._CMPTST0
#define CMPTST1 CMPTST1_BASE.UINT32
#define CMPTST1_CMPTST1 CMPTST1_BASE.BIT._CMPTST1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif