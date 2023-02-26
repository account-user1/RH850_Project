#ifndef __DR7F701373_DNFA4_HEADER__
#define __DR7F701373_DNFA4_HEADER__



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
    uint8 _DNFA4PRS : 3;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _DNFA4NFSTS : 2;
    uint8 padding7 : 1;
} DNFA4CTLBits_t;

typedef struct
{
    uint16 _DNFA4NFENL0 : 1;
    uint16 _DNFA4NFENL1 : 1;
    uint16 _DNFA4NFENL2 : 1;
    uint16 _DNFA4NFENL3 : 1;
    uint16 _DNFA4NFENL4 : 1;
    uint16 _DNFA4NFENL5 : 1;
    uint16 _DNFA4NFENL6 : 1;
    uint16 _DNFA4NFENL7 : 1;
    uint16 _DNFA4NFENH0 : 1;
    uint16 _DNFA4NFENH1 : 1;
    uint16 _DNFA4NFENH2 : 1;
    uint16 _DNFA4NFENH3 : 1;
    uint16 _DNFA4NFENH4 : 1;
    uint16 _DNFA4NFENH5 : 1;
    uint16 _DNFA4NFENH6 : 1;
    uint16 _DNFA4NFENH7 : 1;
} DNFA4ENBits_t;

typedef struct
{
    uint8 _DNFA4NFENL0 : 1;
    uint8 _DNFA4NFENL1 : 1;
    uint8 _DNFA4NFENL2 : 1;
    uint8 _DNFA4NFENL3 : 1;
    uint8 _DNFA4NFENL4 : 1;
    uint8 _DNFA4NFENL5 : 1;
    uint8 _DNFA4NFENL6 : 1;
    uint8 _DNFA4NFENL7 : 1;
} DNFA4ENLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    DNFA4CTLBits_t BIT;
} DNFA4CTL_t;

typedef union
{
    uint16 UINT16;
    DNFA4ENBits_t BIT;
} DNFA4EN_t;

typedef union
{
    uint8 UINT8;
    DNFA4ENLBits_t BIT;
} DNFA4ENL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DNFA4CTL_BASE, 0xFFC30400, __READ_WRITE, DNFA4CTL_t);
__IOREG(DNFA4EN_BASE, 0xFFC30404, __READ_WRITE, DNFA4EN_t);
__IOREG(DNFA4ENL_BASE, 0xFFC3040C, __READ_WRITE, DNFA4ENL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DNFA4CTL DNFA4CTL_BASE.UINT8
#define DNFA4CTL_DNFA4PRS DNFA4CTL_BASE.BIT._DNFA4PRS
#define DNFA4CTL_DNFA4NFSTS DNFA4CTL_BASE.BIT._DNFA4NFSTS
#define DNFA4EN DNFA4EN_BASE.UINT16
#define DNFA4EN_DNFA4NFENL0 DNFA4EN_BASE.BIT._DNFA4NFENL0
#define DNFA4EN_DNFA4NFENL1 DNFA4EN_BASE.BIT._DNFA4NFENL1
#define DNFA4EN_DNFA4NFENL2 DNFA4EN_BASE.BIT._DNFA4NFENL2
#define DNFA4EN_DNFA4NFENL3 DNFA4EN_BASE.BIT._DNFA4NFENL3
#define DNFA4EN_DNFA4NFENL4 DNFA4EN_BASE.BIT._DNFA4NFENL4
#define DNFA4EN_DNFA4NFENL5 DNFA4EN_BASE.BIT._DNFA4NFENL5
#define DNFA4EN_DNFA4NFENL6 DNFA4EN_BASE.BIT._DNFA4NFENL6
#define DNFA4EN_DNFA4NFENL7 DNFA4EN_BASE.BIT._DNFA4NFENL7
#define DNFA4EN_DNFA4NFENH0 DNFA4EN_BASE.BIT._DNFA4NFENH0
#define DNFA4EN_DNFA4NFENH1 DNFA4EN_BASE.BIT._DNFA4NFENH1
#define DNFA4EN_DNFA4NFENH2 DNFA4EN_BASE.BIT._DNFA4NFENH2
#define DNFA4EN_DNFA4NFENH3 DNFA4EN_BASE.BIT._DNFA4NFENH3
#define DNFA4EN_DNFA4NFENH4 DNFA4EN_BASE.BIT._DNFA4NFENH4
#define DNFA4EN_DNFA4NFENH5 DNFA4EN_BASE.BIT._DNFA4NFENH5
#define DNFA4EN_DNFA4NFENH6 DNFA4EN_BASE.BIT._DNFA4NFENH6
#define DNFA4EN_DNFA4NFENH7 DNFA4EN_BASE.BIT._DNFA4NFENH7
#define DNFA4ENL DNFA4ENL_BASE.UINT8
#define DNFA4ENL_DNFA4NFENL0 DNFA4ENL_BASE.BIT._DNFA4NFENL0
#define DNFA4ENL_DNFA4NFENL1 DNFA4ENL_BASE.BIT._DNFA4NFENL1
#define DNFA4ENL_DNFA4NFENL2 DNFA4ENL_BASE.BIT._DNFA4NFENL2
#define DNFA4ENL_DNFA4NFENL3 DNFA4ENL_BASE.BIT._DNFA4NFENL3
#define DNFA4ENL_DNFA4NFENL4 DNFA4ENL_BASE.BIT._DNFA4NFENL4
#define DNFA4ENL_DNFA4NFENL5 DNFA4ENL_BASE.BIT._DNFA4NFENL5
#define DNFA4ENL_DNFA4NFENL6 DNFA4ENL_BASE.BIT._DNFA4NFENL6
#define DNFA4ENL_DNFA4NFENL7 DNFA4ENL_BASE.BIT._DNFA4NFENL7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif