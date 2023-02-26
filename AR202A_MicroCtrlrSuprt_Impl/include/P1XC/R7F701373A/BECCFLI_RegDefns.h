#ifndef __DR7F701373_BECCFLI_HEADER__
#define __DR7F701373_BECCFLI_HEADER__



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
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _AECCDIS : 1;
    uint32 _ASECDIS : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 _PROT0 : 1;
    uint32 _PROT1 : 1;
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
} CFECCCTL_VCI2CFBBBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _ASEDIE : 1;
    uint32 _ADEDIE : 1;
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
} CFERRINT_VCI2CFBBBits_t;

typedef struct
{
    uint32 _SSTCL : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
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
} CFERSTCLR_VCI2CFBBBits_t;

typedef struct
{
    const uint32 _ERROVF : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
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
} CFOVFSTR_VCI2CFBBBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    const uint32 _ASEDF : 1;
    const uint32 _ADEDF : 1;
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
} CFERSTR_VCI2CFBBBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} CFEADR0_VCI2CFBBBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    CFECCCTL_VCI2CFBBBits_t BIT;
} CFECCCTL_VCI2CFBB_t;

typedef union
{
    uint32 UINT32;
    CFERRINT_VCI2CFBBBits_t BIT;
} CFERRINT_VCI2CFBB_t;

typedef union
{
    uint32 UINT32;
    CFERSTCLR_VCI2CFBBBits_t BIT;
} CFERSTCLR_VCI2CFBB_t;

typedef union
{
    uint32 UINT32;
    const CFOVFSTR_VCI2CFBBBits_t BIT;
} CFOVFSTR_VCI2CFBB_t;

typedef union
{
    uint32 UINT32;
    const CFERSTR_VCI2CFBBBits_t BIT;
} CFERSTR_VCI2CFBB_t;

typedef union
{
    uint32 UINT32;
    const CFEADR0_VCI2CFBBBits_t BIT;
} CFEADR0_VCI2CFBB_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CFECCCTL_VCI2CFBB_BASE, 0xFFC62C00, __READ_WRITE, CFECCCTL_VCI2CFBB_t);
__IOREG(CFERRINT_VCI2CFBB_BASE, 0xFFC62C04, __READ_WRITE, CFERRINT_VCI2CFBB_t);
__IOREG(CFERSTCLR_VCI2CFBB_BASE, 0xFFC62C08, __READ_WRITE, CFERSTCLR_VCI2CFBB_t);
__IOREG(CFOVFSTR_VCI2CFBB_BASE, 0xFFC62C0C, __READ, CFOVFSTR_VCI2CFBB_t);
__IOREG(CFERSTR_VCI2CFBB_BASE, 0xFFC62C10, __READ, CFERSTR_VCI2CFBB_t);
__IOREG(CFEADR0_VCI2CFBB_BASE, 0xFFC62C50, __READ, CFEADR0_VCI2CFBB_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CFECCCTL_VCI2CFBB CFECCCTL_VCI2CFBB_BASE.UINT32
#define CFECCCTL_VCI2CFBB_AECCDIS CFECCCTL_VCI2CFBB_BASE.BIT._AECCDIS
#define CFECCCTL_VCI2CFBB_ASECDIS CFECCCTL_VCI2CFBB_BASE.BIT._ASECDIS
#define CFECCCTL_VCI2CFBB_PROT0 CFECCCTL_VCI2CFBB_BASE.BIT._PROT0
#define CFECCCTL_VCI2CFBB_PROT1 CFECCCTL_VCI2CFBB_BASE.BIT._PROT1
#define CFERRINT_VCI2CFBB CFERRINT_VCI2CFBB_BASE.UINT32
#define CFERRINT_VCI2CFBB_ASEDIE CFERRINT_VCI2CFBB_BASE.BIT._ASEDIE
#define CFERRINT_VCI2CFBB_ADEDIE CFERRINT_VCI2CFBB_BASE.BIT._ADEDIE
#define CFERSTCLR_VCI2CFBB CFERSTCLR_VCI2CFBB_BASE.UINT32
#define CFERSTCLR_VCI2CFBB_SSTCL CFERSTCLR_VCI2CFBB_BASE.BIT._SSTCL
#define CFOVFSTR_VCI2CFBB CFOVFSTR_VCI2CFBB_BASE.UINT32
#define CFOVFSTR_VCI2CFBB_ERROVF CFOVFSTR_VCI2CFBB_BASE.BIT._ERROVF
#define CFERSTR_VCI2CFBB CFERSTR_VCI2CFBB_BASE.UINT32
#define CFERSTR_VCI2CFBB_ASEDF CFERSTR_VCI2CFBB_BASE.BIT._ASEDF
#define CFERSTR_VCI2CFBB_ADEDF CFERSTR_VCI2CFBB_BASE.BIT._ADEDF
#define CFEADR0_VCI2CFBB CFEADR0_VCI2CFBB_BASE.UINT32
#define CFEADR0_VCI2CFBB_EADR CFEADR0_VCI2CFBB_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif