#ifndef __DR7F701373_SCDS_HEADER__
#define __DR7F701373_SCDS_HEADER__



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
    const uint32 _RSTVECTOR : 32;
} GREG8Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _OPAUDR : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    const uint32 _ETHDISABLE : 1;
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
    const uint32 _OPWDRUN1 : 1;
    const uint32 _OPWDVAC : 1;
    const uint32 _OPWD0MD : 1;
    const uint32 _OPWDOVF0 : 1;
    const uint32 _OPWDOVF1 : 1;
    const uint32 _OPWDOVF2 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    const uint32 _OPWDRUN0 : 1;
} OPBT0Bits_t;

typedef struct
{
    const uint32 _PLL0PDIV : 3;
    uint32 padding3 : 1;
    const uint32 _PLL0NDIV : 7;
    const uint32 _PLL0MDIV : 3;
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
    const uint32 _EXCLKIN : 1;
    uint32 padding29 : 1;
    const uint32 _PLL0FREQ : 2;
} OPBT1Bits_t;

typedef struct
{
    uint32 padding0 : 1;
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
    const uint32 _OPJTAG : 2;
    uint32 padding31 : 1;
} OPBT2Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    const uint32 _CVMLDETEN : 1;
    const uint32 _CVMHDETEN : 1;
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
} OPBT13Bits_t;

typedef struct
{
    const uint32 _STARTUPPE : 1;
    uint32 padding1 : 1;
    const uint32 _PE2DIS : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _RD_SEL : 3;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _PE2PB : 1;
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
    const uint32 _EMF : 3;
} OPBT14Bits_t;

typedef struct
{
    const uint32 _AMP_SEL : 2;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _CAP_SEL : 3;
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
} OPBT15Bits_t;

typedef struct
{
    const uint32 _PRDNAME1 : 32;
} PRDNAME1Bits_t;

typedef struct
{
    const uint32 _PRDNAME2 : 32;
} PRDNAME2Bits_t;

typedef struct
{
    const uint32 _PRDNAME3 : 32;
} PRDNAME3Bits_t;

typedef struct
{
    const uint32 _PRDNAME4 : 32;
} PRDNAME4Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const GREG8Bits_t BIT;
} GREG8_t;

typedef union
{
    uint32 UINT32;
    const OPBT0Bits_t BIT;
} OPBT0_t;

typedef union
{
    uint32 UINT32;
    const OPBT1Bits_t BIT;
} OPBT1_t;

typedef union
{
    uint32 UINT32;
    const OPBT2Bits_t BIT;
} OPBT2_t;

typedef union
{
    uint32 UINT32;
    const OPBT13Bits_t BIT;
} OPBT13_t;

typedef union
{
    uint32 UINT32;
    const OPBT14Bits_t BIT;
} OPBT14_t;

typedef union
{
    uint32 UINT32;
    const OPBT15Bits_t BIT;
} OPBT15_t;

typedef union
{
    uint32 UINT32;
    const PRDNAME1Bits_t BIT;
} PRDNAME1_t;

typedef union
{
    uint32 UINT32;
    const PRDNAME2Bits_t BIT;
} PRDNAME2_t;

typedef union
{
    uint32 UINT32;
    const PRDNAME3Bits_t BIT;
} PRDNAME3_t;

typedef union
{
    uint32 UINT32;
    const PRDNAME4Bits_t BIT;
} PRDNAME4_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(GREG8_BASE, 0xFFCD0020, __READ, GREG8_t);
__IOREG(OPBT0_BASE, 0xFFCD0030, __READ, OPBT0_t);
__IOREG(OPBT1_BASE, 0xFFCD0034, __READ, OPBT1_t);
__IOREG(OPBT2_BASE, 0xFFCD0038, __READ, OPBT2_t);
__IOREG(OPBT13_BASE, 0xFFCD0064, __READ, OPBT13_t);
__IOREG(OPBT14_BASE, 0xFFCD0068, __READ, OPBT14_t);
__IOREG(OPBT15_BASE, 0xFFCD006C, __READ, OPBT15_t);
__IOREG(PRDNAME1_BASE, 0xFFCD00D0, __READ, PRDNAME1_t);
__IOREG(PRDNAME2_BASE, 0xFFCD00D4, __READ, PRDNAME2_t);
__IOREG(PRDNAME3_BASE, 0xFFCD00D8, __READ, PRDNAME3_t);
__IOREG(PRDNAME4_BASE, 0xFFCD00DC, __READ, PRDNAME4_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define GREG8 GREG8_BASE.UINT32
#define GREG8_RSTVECTOR GREG8_BASE.BIT._RSTVECTOR
#define OPBT0 OPBT0_BASE.UINT32
#define OPBT0_OPAUDR OPBT0_BASE.BIT._OPAUDR
#define OPBT0_ETHDISABLE OPBT0_BASE.BIT._ETHDISABLE
#define OPBT0_OPWDRUN1 OPBT0_BASE.BIT._OPWDRUN1
#define OPBT0_OPWDVAC OPBT0_BASE.BIT._OPWDVAC
#define OPBT0_OPWD0MD OPBT0_BASE.BIT._OPWD0MD
#define OPBT0_OPWDOVF0 OPBT0_BASE.BIT._OPWDOVF0
#define OPBT0_OPWDOVF1 OPBT0_BASE.BIT._OPWDOVF1
#define OPBT0_OPWDOVF2 OPBT0_BASE.BIT._OPWDOVF2
#define OPBT0_OPWDRUN0 OPBT0_BASE.BIT._OPWDRUN0
#define OPBT1 OPBT1_BASE.UINT32
#define OPBT1_PLL0PDIV OPBT1_BASE.BIT._PLL0PDIV
#define OPBT1_PLL0NDIV OPBT1_BASE.BIT._PLL0NDIV
#define OPBT1_PLL0MDIV OPBT1_BASE.BIT._PLL0MDIV
#define OPBT1_EXCLKIN OPBT1_BASE.BIT._EXCLKIN
#define OPBT1_PLL0FREQ OPBT1_BASE.BIT._PLL0FREQ
#define OPBT2 OPBT2_BASE.UINT32
#define OPBT2_OPJTAG OPBT2_BASE.BIT._OPJTAG
#define OPBT13 OPBT13_BASE.UINT32
#define OPBT13_CVMLDETEN OPBT13_BASE.BIT._CVMLDETEN
#define OPBT13_CVMHDETEN OPBT13_BASE.BIT._CVMHDETEN
#define OPBT14 OPBT14_BASE.UINT32
#define OPBT14_STARTUPPE OPBT14_BASE.BIT._STARTUPPE
#define OPBT14_PE2DIS OPBT14_BASE.BIT._PE2DIS
#define OPBT14_RD_SEL OPBT14_BASE.BIT._RD_SEL
#define OPBT14_PE2PB OPBT14_BASE.BIT._PE2PB
#define OPBT14_EMF OPBT14_BASE.BIT._EMF
#define OPBT15 OPBT15_BASE.UINT32
#define OPBT15_AMP_SEL OPBT15_BASE.BIT._AMP_SEL
#define OPBT15_CAP_SEL OPBT15_BASE.BIT._CAP_SEL
#define PRDNAME1 PRDNAME1_BASE.UINT32
#define PRDNAME1_PRDNAME1 PRDNAME1_BASE.BIT._PRDNAME1
#define PRDNAME2 PRDNAME2_BASE.UINT32
#define PRDNAME2_PRDNAME2 PRDNAME2_BASE.BIT._PRDNAME2
#define PRDNAME3 PRDNAME3_BASE.UINT32
#define PRDNAME3_PRDNAME3 PRDNAME3_BASE.BIT._PRDNAME3
#define PRDNAME4 PRDNAME4_BASE.UINT32
#define PRDNAME4_PRDNAME4 PRDNAME4_BASE.BIT._PRDNAME4

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif