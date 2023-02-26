#ifndef __DR7F701373_DNFA6_HEADER__
#define __DR7F701373_DNFA6_HEADER__



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
    uint8 _DNFA6PRS : 3;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _DNFA6NFSTS : 2;
    uint8 padding7 : 1;
} DNFA6CTLBits_t;

typedef struct
{
    uint16 _DNFA6NFENL0 : 1;
    uint16 _DNFA6NFENL1 : 1;
    uint16 _DNFA6NFENL2 : 1;
    uint16 _DNFA6NFENL3 : 1;
    uint16 _DNFA6NFENL4 : 1;
    uint16 _DNFA6NFENL5 : 1;
    uint16 _DNFA6NFENL6 : 1;
    uint16 _DNFA6NFENL7 : 1;
    uint16 _DNFA6NFENH0 : 1;
    uint16 _DNFA6NFENH1 : 1;
    uint16 _DNFA6NFENH2 : 1;
    uint16 _DNFA6NFENH3 : 1;
    uint16 _DNFA6NFENH4 : 1;
    uint16 _DNFA6NFENH5 : 1;
    uint16 _DNFA6NFENH6 : 1;
    uint16 _DNFA6NFENH7 : 1;
} DNFA6ENBits_t;

typedef struct
{
    uint8 _DNFA6NFENL0 : 1;
    uint8 _DNFA6NFENL1 : 1;
    uint8 _DNFA6NFENL2 : 1;
    uint8 _DNFA6NFENL3 : 1;
    uint8 _DNFA6NFENL4 : 1;
    uint8 _DNFA6NFENL5 : 1;
    uint8 _DNFA6NFENL6 : 1;
    uint8 _DNFA6NFENL7 : 1;
} DNFA6ENLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    DNFA6CTLBits_t BIT;
} DNFA6CTL_t;

typedef union
{
    uint16 UINT16;
    DNFA6ENBits_t BIT;
} DNFA6EN_t;

typedef union
{
    uint8 UINT8;
    DNFA6ENLBits_t BIT;
} DNFA6ENL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DNFA6CTL_BASE, 0xFFC30600, __READ_WRITE, DNFA6CTL_t);
__IOREG(DNFA6EN_BASE, 0xFFC30604, __READ_WRITE, DNFA6EN_t);
__IOREG(DNFA6ENL_BASE, 0xFFC3060C, __READ_WRITE, DNFA6ENL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DNFA6CTL DNFA6CTL_BASE.UINT8
#define DNFA6CTL_DNFA6PRS DNFA6CTL_BASE.BIT._DNFA6PRS
#define DNFA6CTL_DNFA6NFSTS DNFA6CTL_BASE.BIT._DNFA6NFSTS
#define DNFA6EN DNFA6EN_BASE.UINT16
#define DNFA6EN_DNFA6NFENL0 DNFA6EN_BASE.BIT._DNFA6NFENL0
#define DNFA6EN_DNFA6NFENL1 DNFA6EN_BASE.BIT._DNFA6NFENL1
#define DNFA6EN_DNFA6NFENL2 DNFA6EN_BASE.BIT._DNFA6NFENL2
#define DNFA6EN_DNFA6NFENL3 DNFA6EN_BASE.BIT._DNFA6NFENL3
#define DNFA6EN_DNFA6NFENL4 DNFA6EN_BASE.BIT._DNFA6NFENL4
#define DNFA6EN_DNFA6NFENL5 DNFA6EN_BASE.BIT._DNFA6NFENL5
#define DNFA6EN_DNFA6NFENL6 DNFA6EN_BASE.BIT._DNFA6NFENL6
#define DNFA6EN_DNFA6NFENL7 DNFA6EN_BASE.BIT._DNFA6NFENL7
#define DNFA6EN_DNFA6NFENH0 DNFA6EN_BASE.BIT._DNFA6NFENH0
#define DNFA6EN_DNFA6NFENH1 DNFA6EN_BASE.BIT._DNFA6NFENH1
#define DNFA6EN_DNFA6NFENH2 DNFA6EN_BASE.BIT._DNFA6NFENH2
#define DNFA6EN_DNFA6NFENH3 DNFA6EN_BASE.BIT._DNFA6NFENH3
#define DNFA6EN_DNFA6NFENH4 DNFA6EN_BASE.BIT._DNFA6NFENH4
#define DNFA6EN_DNFA6NFENH5 DNFA6EN_BASE.BIT._DNFA6NFENH5
#define DNFA6EN_DNFA6NFENH6 DNFA6EN_BASE.BIT._DNFA6NFENH6
#define DNFA6EN_DNFA6NFENH7 DNFA6EN_BASE.BIT._DNFA6NFENH7
#define DNFA6ENL DNFA6ENL_BASE.UINT8
#define DNFA6ENL_DNFA6NFENL0 DNFA6ENL_BASE.BIT._DNFA6NFENL0
#define DNFA6ENL_DNFA6NFENL1 DNFA6ENL_BASE.BIT._DNFA6NFENL1
#define DNFA6ENL_DNFA6NFENL2 DNFA6ENL_BASE.BIT._DNFA6NFENL2
#define DNFA6ENL_DNFA6NFENL3 DNFA6ENL_BASE.BIT._DNFA6NFENL3
#define DNFA6ENL_DNFA6NFENL4 DNFA6ENL_BASE.BIT._DNFA6NFENL4
#define DNFA6ENL_DNFA6NFENL5 DNFA6ENL_BASE.BIT._DNFA6NFENL5
#define DNFA6ENL_DNFA6NFENL6 DNFA6ENL_BASE.BIT._DNFA6NFENL6
#define DNFA6ENL_DNFA6NFENL7 DNFA6ENL_BASE.BIT._DNFA6NFENL7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif