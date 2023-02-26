#ifndef __DR7F701373_DNFA5_HEADER__
#define __DR7F701373_DNFA5_HEADER__



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
    uint8 _DNFA5PRS : 3;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _DNFA5NFSTS : 2;
    uint8 padding7 : 1;
} DNFA5CTLBits_t;

typedef struct
{
    uint16 _DNFA5NFENL0 : 1;
    uint16 _DNFA5NFENL1 : 1;
    uint16 _DNFA5NFENL2 : 1;
    uint16 _DNFA5NFENL3 : 1;
    uint16 _DNFA5NFENL4 : 1;
    uint16 _DNFA5NFENL5 : 1;
    uint16 _DNFA5NFENL6 : 1;
    uint16 _DNFA5NFENL7 : 1;
    uint16 _DNFA5NFENH0 : 1;
    uint16 _DNFA5NFENH1 : 1;
    uint16 _DNFA5NFENH2 : 1;
    uint16 _DNFA5NFENH3 : 1;
    uint16 _DNFA5NFENH4 : 1;
    uint16 _DNFA5NFENH5 : 1;
    uint16 _DNFA5NFENH6 : 1;
    uint16 _DNFA5NFENH7 : 1;
} DNFA5ENBits_t;

typedef struct
{
    uint8 _DNFA5NFENL0 : 1;
    uint8 _DNFA5NFENL1 : 1;
    uint8 _DNFA5NFENL2 : 1;
    uint8 _DNFA5NFENL3 : 1;
    uint8 _DNFA5NFENL4 : 1;
    uint8 _DNFA5NFENL5 : 1;
    uint8 _DNFA5NFENL6 : 1;
    uint8 _DNFA5NFENL7 : 1;
} DNFA5ENLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    DNFA5CTLBits_t BIT;
} DNFA5CTL_t;

typedef union
{
    uint16 UINT16;
    DNFA5ENBits_t BIT;
} DNFA5EN_t;

typedef union
{
    uint8 UINT8;
    DNFA5ENLBits_t BIT;
} DNFA5ENL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DNFA5CTL_BASE, 0xFFC30500, __READ_WRITE, DNFA5CTL_t);
__IOREG(DNFA5EN_BASE, 0xFFC30504, __READ_WRITE, DNFA5EN_t);
__IOREG(DNFA5ENL_BASE, 0xFFC3050C, __READ_WRITE, DNFA5ENL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DNFA5CTL DNFA5CTL_BASE.UINT8
#define DNFA5CTL_DNFA5PRS DNFA5CTL_BASE.BIT._DNFA5PRS
#define DNFA5CTL_DNFA5NFSTS DNFA5CTL_BASE.BIT._DNFA5NFSTS
#define DNFA5EN DNFA5EN_BASE.UINT16
#define DNFA5EN_DNFA5NFENL0 DNFA5EN_BASE.BIT._DNFA5NFENL0
#define DNFA5EN_DNFA5NFENL1 DNFA5EN_BASE.BIT._DNFA5NFENL1
#define DNFA5EN_DNFA5NFENL2 DNFA5EN_BASE.BIT._DNFA5NFENL2
#define DNFA5EN_DNFA5NFENL3 DNFA5EN_BASE.BIT._DNFA5NFENL3
#define DNFA5EN_DNFA5NFENL4 DNFA5EN_BASE.BIT._DNFA5NFENL4
#define DNFA5EN_DNFA5NFENL5 DNFA5EN_BASE.BIT._DNFA5NFENL5
#define DNFA5EN_DNFA5NFENL6 DNFA5EN_BASE.BIT._DNFA5NFENL6
#define DNFA5EN_DNFA5NFENL7 DNFA5EN_BASE.BIT._DNFA5NFENL7
#define DNFA5EN_DNFA5NFENH0 DNFA5EN_BASE.BIT._DNFA5NFENH0
#define DNFA5EN_DNFA5NFENH1 DNFA5EN_BASE.BIT._DNFA5NFENH1
#define DNFA5EN_DNFA5NFENH2 DNFA5EN_BASE.BIT._DNFA5NFENH2
#define DNFA5EN_DNFA5NFENH3 DNFA5EN_BASE.BIT._DNFA5NFENH3
#define DNFA5EN_DNFA5NFENH4 DNFA5EN_BASE.BIT._DNFA5NFENH4
#define DNFA5EN_DNFA5NFENH5 DNFA5EN_BASE.BIT._DNFA5NFENH5
#define DNFA5EN_DNFA5NFENH6 DNFA5EN_BASE.BIT._DNFA5NFENH6
#define DNFA5EN_DNFA5NFENH7 DNFA5EN_BASE.BIT._DNFA5NFENH7
#define DNFA5ENL DNFA5ENL_BASE.UINT8
#define DNFA5ENL_DNFA5NFENL0 DNFA5ENL_BASE.BIT._DNFA5NFENL0
#define DNFA5ENL_DNFA5NFENL1 DNFA5ENL_BASE.BIT._DNFA5NFENL1
#define DNFA5ENL_DNFA5NFENL2 DNFA5ENL_BASE.BIT._DNFA5NFENL2
#define DNFA5ENL_DNFA5NFENL3 DNFA5ENL_BASE.BIT._DNFA5NFENL3
#define DNFA5ENL_DNFA5NFENL4 DNFA5ENL_BASE.BIT._DNFA5NFENL4
#define DNFA5ENL_DNFA5NFENL5 DNFA5ENL_BASE.BIT._DNFA5NFENL5
#define DNFA5ENL_DNFA5NFENL6 DNFA5ENL_BASE.BIT._DNFA5NFENL6
#define DNFA5ENL_DNFA5NFENL7 DNFA5ENL_BASE.BIT._DNFA5NFENL7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif