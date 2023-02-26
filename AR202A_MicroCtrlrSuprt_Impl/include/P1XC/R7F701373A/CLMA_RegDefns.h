#ifndef __DR7F701373_CLMA_HEADER__
#define __DR7F701373_CLMA_HEADER__



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
    uint32 _RESCLM : 1;
    uint32 _MONCLKMSK : 1;
    uint32 _ERRMSK : 1;
    uint32 _CLMA0TESEN : 1;
    uint32 _CLMA1TESEN : 1;
    uint32 _CLMA2TESEN : 1;
    uint32 _CLMA3TESEN : 1;
    uint32 _CLMA4TESEN : 1;
    uint32 _CLMA5TESEN : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLMATESTBits_t;

typedef struct
{
    const uint32 _CLMA0ERRS : 1;
    const uint32 _CLMA1ERRS : 1;
    const uint32 _CLMA2ERRS : 1;
    const uint32 _CLMA3ERRS : 1;
    const uint32 _CLMA4ERRS : 1;
    const uint32 _CLMA5ERRS : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLMATESTSBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    CLMATESTBits_t BIT;
} CLMATEST_t;

typedef union
{
    uint32 UINT32;
    const CLMATESTSBits_t BIT;
} CLMATESTS_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CLMATEST_BASE, 0xFFF83000, __READ_WRITE, CLMATEST_t);
__IOREG(CLMATESTS_BASE, 0xFFF83004, __READ, CLMATESTS_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CLMATEST CLMATEST_BASE.UINT32
#define CLMATEST_RESCLM CLMATEST_BASE.BIT._RESCLM
#define CLMATEST_MONCLKMSK CLMATEST_BASE.BIT._MONCLKMSK
#define CLMATEST_ERRMSK CLMATEST_BASE.BIT._ERRMSK
#define CLMATEST_CLMA0TESEN CLMATEST_BASE.BIT._CLMA0TESEN
#define CLMATEST_CLMA1TESEN CLMATEST_BASE.BIT._CLMA1TESEN
#define CLMATEST_CLMA2TESEN CLMATEST_BASE.BIT._CLMA2TESEN
#define CLMATEST_CLMA3TESEN CLMATEST_BASE.BIT._CLMA3TESEN
#define CLMATEST_CLMA4TESEN CLMATEST_BASE.BIT._CLMA4TESEN
#define CLMATEST_CLMA5TESEN CLMATEST_BASE.BIT._CLMA5TESEN
#define CLMATESTS CLMATESTS_BASE.UINT32
#define CLMATESTS_CLMA0ERRS CLMATESTS_BASE.BIT._CLMA0ERRS
#define CLMATESTS_CLMA1ERRS CLMATESTS_BASE.BIT._CLMA1ERRS
#define CLMATESTS_CLMA2ERRS CLMATESTS_BASE.BIT._CLMA2ERRS
#define CLMATESTS_CLMA3ERRS CLMATESTS_BASE.BIT._CLMA3ERRS
#define CLMATESTS_CLMA4ERRS CLMATESTS_BASE.BIT._CLMA4ERRS
#define CLMATESTS_CLMA5ERRS CLMATESTS_BASE.BIT._CLMA5ERRS

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif