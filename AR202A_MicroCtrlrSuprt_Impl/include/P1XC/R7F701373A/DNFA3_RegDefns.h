#ifndef __DR7F701373_DNFA3_HEADER__
#define __DR7F701373_DNFA3_HEADER__



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
    uint8 _DNFA3PRS : 3;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _DNFA3NFSTS : 2;
    uint8 padding7 : 1;
} DNFA3CTLBits_t;

typedef struct
{
    uint16 _DNFA3NFENL0 : 1;
    uint16 _DNFA3NFENL1 : 1;
    uint16 _DNFA3NFENL2 : 1;
    uint16 _DNFA3NFENL3 : 1;
    uint16 _DNFA3NFENL4 : 1;
    uint16 _DNFA3NFENL5 : 1;
    uint16 _DNFA3NFENL6 : 1;
    uint16 _DNFA3NFENL7 : 1;
    uint16 _DNFA3NFENH0 : 1;
    uint16 _DNFA3NFENH1 : 1;
    uint16 _DNFA3NFENH2 : 1;
    uint16 _DNFA3NFENH3 : 1;
    uint16 _DNFA3NFENH4 : 1;
    uint16 _DNFA3NFENH5 : 1;
    uint16 _DNFA3NFENH6 : 1;
    uint16 _DNFA3NFENH7 : 1;
} DNFA3ENBits_t;

typedef struct
{
    uint8 _DNFA3NFENL0 : 1;
    uint8 _DNFA3NFENL1 : 1;
    uint8 _DNFA3NFENL2 : 1;
    uint8 _DNFA3NFENL3 : 1;
    uint8 _DNFA3NFENL4 : 1;
    uint8 _DNFA3NFENL5 : 1;
    uint8 _DNFA3NFENL6 : 1;
    uint8 _DNFA3NFENL7 : 1;
} DNFA3ENLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    DNFA3CTLBits_t BIT;
} DNFA3CTL_t;

typedef union
{
    uint16 UINT16;
    DNFA3ENBits_t BIT;
} DNFA3EN_t;

typedef union
{
    uint8 UINT8;
    DNFA3ENLBits_t BIT;
} DNFA3ENL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DNFA3CTL_BASE, 0xFFC30300, __READ_WRITE, DNFA3CTL_t);
__IOREG(DNFA3EN_BASE, 0xFFC30304, __READ_WRITE, DNFA3EN_t);
__IOREG(DNFA3ENL_BASE, 0xFFC3030C, __READ_WRITE, DNFA3ENL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DNFA3CTL DNFA3CTL_BASE.UINT8
#define DNFA3CTL_DNFA3PRS DNFA3CTL_BASE.BIT._DNFA3PRS
#define DNFA3CTL_DNFA3NFSTS DNFA3CTL_BASE.BIT._DNFA3NFSTS
#define DNFA3EN DNFA3EN_BASE.UINT16
#define DNFA3EN_DNFA3NFENL0 DNFA3EN_BASE.BIT._DNFA3NFENL0
#define DNFA3EN_DNFA3NFENL1 DNFA3EN_BASE.BIT._DNFA3NFENL1
#define DNFA3EN_DNFA3NFENL2 DNFA3EN_BASE.BIT._DNFA3NFENL2
#define DNFA3EN_DNFA3NFENL3 DNFA3EN_BASE.BIT._DNFA3NFENL3
#define DNFA3EN_DNFA3NFENL4 DNFA3EN_BASE.BIT._DNFA3NFENL4
#define DNFA3EN_DNFA3NFENL5 DNFA3EN_BASE.BIT._DNFA3NFENL5
#define DNFA3EN_DNFA3NFENL6 DNFA3EN_BASE.BIT._DNFA3NFENL6
#define DNFA3EN_DNFA3NFENL7 DNFA3EN_BASE.BIT._DNFA3NFENL7
#define DNFA3EN_DNFA3NFENH0 DNFA3EN_BASE.BIT._DNFA3NFENH0
#define DNFA3EN_DNFA3NFENH1 DNFA3EN_BASE.BIT._DNFA3NFENH1
#define DNFA3EN_DNFA3NFENH2 DNFA3EN_BASE.BIT._DNFA3NFENH2
#define DNFA3EN_DNFA3NFENH3 DNFA3EN_BASE.BIT._DNFA3NFENH3
#define DNFA3EN_DNFA3NFENH4 DNFA3EN_BASE.BIT._DNFA3NFENH4
#define DNFA3EN_DNFA3NFENH5 DNFA3EN_BASE.BIT._DNFA3NFENH5
#define DNFA3EN_DNFA3NFENH6 DNFA3EN_BASE.BIT._DNFA3NFENH6
#define DNFA3EN_DNFA3NFENH7 DNFA3EN_BASE.BIT._DNFA3NFENH7
#define DNFA3ENL DNFA3ENL_BASE.UINT8
#define DNFA3ENL_DNFA3NFENL0 DNFA3ENL_BASE.BIT._DNFA3NFENL0
#define DNFA3ENL_DNFA3NFENL1 DNFA3ENL_BASE.BIT._DNFA3NFENL1
#define DNFA3ENL_DNFA3NFENL2 DNFA3ENL_BASE.BIT._DNFA3NFENL2
#define DNFA3ENL_DNFA3NFENL3 DNFA3ENL_BASE.BIT._DNFA3NFENL3
#define DNFA3ENL_DNFA3NFENL4 DNFA3ENL_BASE.BIT._DNFA3NFENL4
#define DNFA3ENL_DNFA3NFENL5 DNFA3ENL_BASE.BIT._DNFA3NFENL5
#define DNFA3ENL_DNFA3NFENL6 DNFA3ENL_BASE.BIT._DNFA3NFENL6
#define DNFA3ENL_DNFA3NFENL7 DNFA3ENL_BASE.BIT._DNFA3NFENL7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif