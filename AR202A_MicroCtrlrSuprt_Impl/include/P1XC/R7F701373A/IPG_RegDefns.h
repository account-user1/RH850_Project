#ifndef __DR7F701373_IPG_HEADER__
#define __DR7F701373_IPG_HEADER__



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
    uint16 _VD : 1;
    uint16 _RD : 1;
    uint16 _WR : 1;
    uint16 _EX : 1;
    uint16 _DS : 4;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} IPGECRUMBits_t;

typedef struct
{
    uint32 _EADR : 32;
} IPGADRUMBits_t;

typedef struct
{
    uint8 _E : 1;
    uint8 _IRE : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} IPGENUMBits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _R1 : 1;
    uint8 _W1 : 1;
    uint8 _X1 : 1;
    uint8 padding7 : 1;
} IPGPMTUM0Bits_t;
typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 _X0 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 _X1 : 1;
    uint8 padding7 : 1;
} IPGPMTUM1Bits_t;

typedef struct
{
    uint8 _R0 : 1;
    uint8 _W0 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _R1 : 1;
    uint8 _W1 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} IPGPMTUM2Bits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _R1 : 1;
    uint8 _W1 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} IPGPMTUM3Bits_t;

typedef struct
{
    uint8 _R0 : 1;
    uint8 _W0 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _R1 : 1;
    uint8 _W1 : 1;
    uint8 _X1 : 1;
    uint8 padding7 : 1;
} IPGPMTUM4Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint16 UINT16;
    IPGECRUMBits_t BIT;
} IPGECRUM_t;

typedef union
{
    uint32 UINT32;
    IPGADRUMBits_t BIT;
} IPGADRUM_t;

typedef union
{
    uint8 UINT8;
    IPGENUMBits_t BIT;
} IPGENUM_t;

typedef union
{
    uint8 UINT8;
    IPGPMTUM0Bits_t BIT;
} IPGPMTUM0_t;

typedef union
{
    uint8 UINT8;
    IPGPMTUM1Bits_t BIT;
} IPGPMTUM1_t;

typedef union
{
    uint8 UINT8;
    IPGPMTUM2Bits_t BIT;
} IPGPMTUM2_t;

typedef union
{
    uint8 UINT8;
    IPGPMTUM3Bits_t BIT;
} IPGPMTUM3_t;

typedef union
{
    uint8 UINT8;
    IPGPMTUM4Bits_t BIT;
} IPGPMTUM4_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(IPGECRUM_BASE, 0xFFFEE002, __READ_WRITE, IPGECRUM_t);
__IOREG(IPGADRUM_BASE, 0xFFFEE008, __READ_WRITE, IPGADRUM_t);
__IOREG(IPGENUM_BASE, 0xFFFEE00D, __READ_WRITE, IPGENUM_t);
__IOREG(IPGPMTUM0_BASE, 0xFFFEE020, __READ_WRITE, IPGPMTUM0_t);
__IOREG(IPGPMTUM1_BASE, 0xFFFEE021, __READ_WRITE, IPGPMTUM1_t);
__IOREG(IPGPMTUM2_BASE, 0xFFFEE022, __READ_WRITE, IPGPMTUM2_t);
__IOREG(IPGPMTUM3_BASE, 0xFFFEE023, __READ_WRITE, IPGPMTUM3_t);
__IOREG(IPGPMTUM4_BASE, 0xFFFEE024, __READ_WRITE, IPGPMTUM4_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define IPGECRUM IPGECRUM_BASE.UINT16
#define IPGECRUM_VD IPGECRUM_BASE.BIT._VD
#define IPGECRUM_RD IPGECRUM_BASE.BIT._RD
#define IPGECRUM_WR IPGECRUM_BASE.BIT._WR
#define IPGECRUM_EX IPGECRUM_BASE.BIT._EX
#define IPGECRUM_DS IPGECRUM_BASE.BIT._DS
#define IPGADRUM IPGADRUM_BASE.UINT32
#define IPGADRUM_EADR IPGADRUM_BASE.BIT._EADR
#define IPGENUM IPGENUM_BASE.UINT8
#define IPGENUM_E IPGENUM_BASE.BIT._E
#define IPGENUM_IRE IPGENUM_BASE.BIT._IRE
#define IPGPMTUM0 IPGPMTUM0_BASE.UINT8
#define IPGPMTUM0_R1 IPGPMTUM0_BASE.BIT._R1
#define IPGPMTUM0_W1 IPGPMTUM0_BASE.BIT._W1
#define IPGPMTUM0_X1 IPGPMTUM0_BASE.BIT._X1
#define IPGPMTUM1 IPGPMTUM1_BASE.UINT8
#define IPGPMTUM1_X0 IPGPMTUM1_BASE.BIT._X0
#define IPGPMTUM1_X1 IPGPMTUM1_BASE.BIT._X1
#define IPGPMTUM2 IPGPMTUM2_BASE.UINT8
#define IPGPMTUM2_R0 IPGPMTUM2_BASE.BIT._R0
#define IPGPMTUM2_W0 IPGPMTUM2_BASE.BIT._W0
#define IPGPMTUM2_R1 IPGPMTUM2_BASE.BIT._R1
#define IPGPMTUM2_W1 IPGPMTUM2_BASE.BIT._W1
#define IPGPMTUM3 IPGPMTUM3_BASE.UINT8
#define IPGPMTUM3_R1 IPGPMTUM3_BASE.BIT._R1
#define IPGPMTUM3_W1 IPGPMTUM3_BASE.BIT._W1
#define IPGPMTUM4 IPGPMTUM4_BASE.UINT8
#define IPGPMTUM4_R0 IPGPMTUM4_BASE.BIT._R0
#define IPGPMTUM4_W0 IPGPMTUM4_BASE.BIT._W0
#define IPGPMTUM4_R1 IPGPMTUM4_BASE.BIT._R1
#define IPGPMTUM4_W1 IPGPMTUM4_BASE.BIT._W1
#define IPGPMTUM4_X1 IPGPMTUM4_BASE.BIT._X1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif