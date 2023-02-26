#ifndef __DR7F701373_DNFA2_HEADER__
#define __DR7F701373_DNFA2_HEADER__



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
    uint8 _DNFA2PRS : 3;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _DNFA2NFSTS : 2;
    uint8 padding7 : 1;
} DNFA2CTLBits_t;

typedef struct
{
    uint16 _DNFA2NFENL0 : 1;
    uint16 _DNFA2NFENL1 : 1;
    uint16 _DNFA2NFENL2 : 1;
    uint16 _DNFA2NFENL3 : 1;
    uint16 _DNFA2NFENL4 : 1;
    uint16 _DNFA2NFENL5 : 1;
    uint16 _DNFA2NFENL6 : 1;
    uint16 _DNFA2NFENL7 : 1;
    uint16 _DNFA2NFENH0 : 1;
    uint16 _DNFA2NFENH1 : 1;
    uint16 _DNFA2NFENH2 : 1;
    uint16 _DNFA2NFENH3 : 1;
    uint16 _DNFA2NFENH4 : 1;
    uint16 _DNFA2NFENH5 : 1;
    uint16 _DNFA2NFENH6 : 1;
    uint16 _DNFA2NFENH7 : 1;
} DNFA2ENBits_t;

typedef struct
{
    uint8 _DNFA2NFENL0 : 1;
    uint8 _DNFA2NFENL1 : 1;
    uint8 _DNFA2NFENL2 : 1;
    uint8 _DNFA2NFENL3 : 1;
    uint8 _DNFA2NFENL4 : 1;
    uint8 _DNFA2NFENL5 : 1;
    uint8 _DNFA2NFENL6 : 1;
    uint8 _DNFA2NFENL7 : 1;
} DNFA2ENLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    DNFA2CTLBits_t BIT;
} DNFA2CTL_t;

typedef union
{
    uint16 UINT16;
    DNFA2ENBits_t BIT;
} DNFA2EN_t;

typedef union
{
    uint8 UINT8;
    DNFA2ENLBits_t BIT;
} DNFA2ENL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DNFA2CTL_BASE, 0xFFC30200, __READ_WRITE, DNFA2CTL_t);
__IOREG(DNFA2EN_BASE, 0xFFC30204, __READ_WRITE, DNFA2EN_t);
__IOREG(DNFA2ENL_BASE, 0xFFC3020C, __READ_WRITE, DNFA2ENL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DNFA2CTL DNFA2CTL_BASE.UINT8
#define DNFA2CTL_DNFA2PRS DNFA2CTL_BASE.BIT._DNFA2PRS
#define DNFA2CTL_DNFA2NFSTS DNFA2CTL_BASE.BIT._DNFA2NFSTS
#define DNFA2EN DNFA2EN_BASE.UINT16
#define DNFA2EN_DNFA2NFENL0 DNFA2EN_BASE.BIT._DNFA2NFENL0
#define DNFA2EN_DNFA2NFENL1 DNFA2EN_BASE.BIT._DNFA2NFENL1
#define DNFA2EN_DNFA2NFENL2 DNFA2EN_BASE.BIT._DNFA2NFENL2
#define DNFA2EN_DNFA2NFENL3 DNFA2EN_BASE.BIT._DNFA2NFENL3
#define DNFA2EN_DNFA2NFENL4 DNFA2EN_BASE.BIT._DNFA2NFENL4
#define DNFA2EN_DNFA2NFENL5 DNFA2EN_BASE.BIT._DNFA2NFENL5
#define DNFA2EN_DNFA2NFENL6 DNFA2EN_BASE.BIT._DNFA2NFENL6
#define DNFA2EN_DNFA2NFENL7 DNFA2EN_BASE.BIT._DNFA2NFENL7
#define DNFA2EN_DNFA2NFENH0 DNFA2EN_BASE.BIT._DNFA2NFENH0
#define DNFA2EN_DNFA2NFENH1 DNFA2EN_BASE.BIT._DNFA2NFENH1
#define DNFA2EN_DNFA2NFENH2 DNFA2EN_BASE.BIT._DNFA2NFENH2
#define DNFA2EN_DNFA2NFENH3 DNFA2EN_BASE.BIT._DNFA2NFENH3
#define DNFA2EN_DNFA2NFENH4 DNFA2EN_BASE.BIT._DNFA2NFENH4
#define DNFA2EN_DNFA2NFENH5 DNFA2EN_BASE.BIT._DNFA2NFENH5
#define DNFA2EN_DNFA2NFENH6 DNFA2EN_BASE.BIT._DNFA2NFENH6
#define DNFA2EN_DNFA2NFENH7 DNFA2EN_BASE.BIT._DNFA2NFENH7
#define DNFA2ENL DNFA2ENL_BASE.UINT8
#define DNFA2ENL_DNFA2NFENL0 DNFA2ENL_BASE.BIT._DNFA2NFENL0
#define DNFA2ENL_DNFA2NFENL1 DNFA2ENL_BASE.BIT._DNFA2NFENL1
#define DNFA2ENL_DNFA2NFENL2 DNFA2ENL_BASE.BIT._DNFA2NFENL2
#define DNFA2ENL_DNFA2NFENL3 DNFA2ENL_BASE.BIT._DNFA2NFENL3
#define DNFA2ENL_DNFA2NFENL4 DNFA2ENL_BASE.BIT._DNFA2NFENL4
#define DNFA2ENL_DNFA2NFENL5 DNFA2ENL_BASE.BIT._DNFA2NFENL5
#define DNFA2ENL_DNFA2NFENL6 DNFA2ENL_BASE.BIT._DNFA2NFENL6
#define DNFA2ENL_DNFA2NFENL7 DNFA2ENL_BASE.BIT._DNFA2NFENL7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif