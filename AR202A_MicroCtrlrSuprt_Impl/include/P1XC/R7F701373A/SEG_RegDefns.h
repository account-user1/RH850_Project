#ifndef __DR7F701373_SEG_HEADER__
#define __DR7F701373_SEG_HEADER__



/**********************************************************************************************************************
 Module File Name  : <Module>_RegDefns.h
 Module Description: Generated Register Definitions of Renesas Peripherals
 Project           : CBD
 Author            : Lucas Wendling
**********************************************************************************************************************
 Version Control:
 %version:          3 %
 %derived_by:       rzk04c %
----------------------------------------------------------------------------------------------------------------------
 Date      Rev      Author         Change Description
 -------   -------  --------  ----------------------------------------------------------------------------------------
 07/12/17  1        LWW       Header file generated from Renesas tool based on input files contained in tools directory
 11/02/17  2        SR        Updated the Module name from ECCMAN0 to ECCMCAN0
 11/17/17  3        AJM       Corrected IGP,FLMD register definitions and added SEG Regsiters
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
    uint16 _NEE : 1;
    uint16 padding1 : 1;
    uint16 _ICCE : 1;
    uint16 padding3 : 1;
    uint16 _VCIE : 1;
    uint16 padding5 : 1;
    uint16 _TCME : 1;
    uint16 padding7 : 1;
    uint16 _VCRE : 1;
    uint16 _VPGE : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} SEGCONTBits_t;

typedef struct
{
    uint16 padding0 : 1;
    uint16 padding1 : 1;
    uint16 _ICCF : 1;
    uint16 padding3 : 1;
    uint16 _VCIF : 1;
    uint16 padding5 : 1;
    uint16 _TCMF : 1;
    uint16 padding7 : 1;
    uint16 _VCRF : 1;
    uint16 _VPGF : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} SEGFLAGBits_t;

typedef struct
{
    uint16 _CODE : 4;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 padding8 : 1;
    uint16 _ETYPE : 7;
} SEGTYPEBits_t;

typedef struct
{
    uint16 padding0 : 1;
    uint16 _UM : 1;
    uint16 _SPID : 5;
    uint16 padding7 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 _PEID : 3;
} SEGSIDEBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint16 UINT16;
    SEGCONTBits_t BIT;
} SEGCONT_t;

typedef union
{
    uint16 UINT16;
    SEGFLAGBits_t BIT;
} SEGFLAG_t;

typedef union
{
    uint16 UINT16;
    SEGTYPEBits_t BIT;
} SEGTYPE_t;

typedef union
{
    uint16 UINT16;
    SEGSIDEBits_t BIT;
} SEGSIDE_t;

typedef union
{
    uint32 UINT32;
} SEGADDR_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(SEGCONT_BASE, 0xFFFEE980, __READ_WRITE, SEGCONT_t);
__IOREG(SEGFLAG_BASE, 0xFFFEE982, __READ_WRITE, SEGFLAG_t);
__IOREG(SEGTYPE_BASE, 0xFFFEE984, __READ_WRITE, SEGTYPE_t);
__IOREG(SEGSIDE_BASE, 0xFFFEE986, __READ_WRITE, SEGSIDE_t);
__IOREG(SEGADDR_BASE, 0xFFFEE988, __READ_WRITE, SEGADDR_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define SEGCONT SEGCONT_BASE.UINT16
#define SEGCONT_NEE SEGCONT_BASE.BIT._NEE
#define SEGCONT_ICCE SEGCONT_BASE.BIT._ICCE
#define SEGCONT_VCIE SEGCONT_BASE.BIT._VCIE
#define SEGCONT_TCME SEGCONT_BASE.BIT._TCME
#define SEGCONT_VCRE SEGCONT_BASE.BIT._VCRE
#define SEGCONT_VPGE SEGCONT_BASE.BIT._VPGE
#define SEGFLAG SEGFLAG_BASE.UINT16
#define SEGFLAG_ICCF SEGFLAG_BASE.BIT._ICCF
#define SEGFLAG_VCIF SEGFLAG_BASE.BIT._VCIF
#define SEGFLAG_TCMF SEGFLAG_BASE.BIT._TCMF
#define SEGFLAG_VCRF SEGFLAG_BASE.BIT._VCRF
#define SEGFLAG_VPGF SEGFLAG_BASE.BIT._VPGF
#define SEGTYPE SEGTYPE_BASE.UINT16
#define SEGTYPE_CODE SEGTYPE_BASE.BIT._CODE
#define SEGTYPE_ETYPE SEGTYPE_BASE.BIT._ETYPE
#define SEGSIDE SEGSIDE_BASE.UINT16
#define SEGSIDE_UM SEGSIDE_BASE.BIT._UM
#define SEGSIDE_SPID SEGSIDE_BASE.BIT._SPID
#define SEGSIDE_PEID SEGSIDE_BASE.BIT._PEID
#define SEGADDR SEGADDR_BASE.UINT32

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif