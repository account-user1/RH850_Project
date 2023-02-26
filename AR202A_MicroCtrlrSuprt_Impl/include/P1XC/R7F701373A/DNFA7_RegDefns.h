#ifndef __DR7F701373_DNFA7_HEADER__
#define __DR7F701373_DNFA7_HEADER__



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
    uint8 _DNFA7PRS : 3;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _DNFA7NFSTS : 2;
    uint8 padding7 : 1;
} DNFA7CTLBits_t;

typedef struct
{
    uint16 _DNFA7NFENL0 : 1;
    uint16 _DNFA7NFENL1 : 1;
    uint16 _DNFA7NFENL2 : 1;
    uint16 _DNFA7NFENL3 : 1;
    uint16 _DNFA7NFENL4 : 1;
    uint16 _DNFA7NFENL5 : 1;
    uint16 _DNFA7NFENL6 : 1;
    uint16 _DNFA7NFENL7 : 1;
    uint16 _DNFA7NFENH0 : 1;
    uint16 _DNFA7NFENH1 : 1;
    uint16 _DNFA7NFENH2 : 1;
    uint16 _DNFA7NFENH3 : 1;
    uint16 _DNFA7NFENH4 : 1;
    uint16 _DNFA7NFENH5 : 1;
    uint16 _DNFA7NFENH6 : 1;
    uint16 _DNFA7NFENH7 : 1;
} DNFA7ENBits_t;

typedef struct
{
    uint8 _DNFA7NFENL0 : 1;
    uint8 _DNFA7NFENL1 : 1;
    uint8 _DNFA7NFENL2 : 1;
    uint8 _DNFA7NFENL3 : 1;
    uint8 _DNFA7NFENL4 : 1;
    uint8 _DNFA7NFENL5 : 1;
    uint8 _DNFA7NFENL6 : 1;
    uint8 _DNFA7NFENL7 : 1;
} DNFA7ENLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    DNFA7CTLBits_t BIT;
} DNFA7CTL_t;

typedef union
{
    uint16 UINT16;
    DNFA7ENBits_t BIT;
} DNFA7EN_t;

typedef union
{
    uint8 UINT8;
    DNFA7ENLBits_t BIT;
} DNFA7ENL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DNFA7CTL_BASE, 0xFFC30700, __READ_WRITE, DNFA7CTL_t);
__IOREG(DNFA7EN_BASE, 0xFFC30704, __READ_WRITE, DNFA7EN_t);
__IOREG(DNFA7ENL_BASE, 0xFFC3070C, __READ_WRITE, DNFA7ENL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DNFA7CTL DNFA7CTL_BASE.UINT8
#define DNFA7CTL_DNFA7PRS DNFA7CTL_BASE.BIT._DNFA7PRS
#define DNFA7CTL_DNFA7NFSTS DNFA7CTL_BASE.BIT._DNFA7NFSTS
#define DNFA7EN DNFA7EN_BASE.UINT16
#define DNFA7EN_DNFA7NFENL0 DNFA7EN_BASE.BIT._DNFA7NFENL0
#define DNFA7EN_DNFA7NFENL1 DNFA7EN_BASE.BIT._DNFA7NFENL1
#define DNFA7EN_DNFA7NFENL2 DNFA7EN_BASE.BIT._DNFA7NFENL2
#define DNFA7EN_DNFA7NFENL3 DNFA7EN_BASE.BIT._DNFA7NFENL3
#define DNFA7EN_DNFA7NFENL4 DNFA7EN_BASE.BIT._DNFA7NFENL4
#define DNFA7EN_DNFA7NFENL5 DNFA7EN_BASE.BIT._DNFA7NFENL5
#define DNFA7EN_DNFA7NFENL6 DNFA7EN_BASE.BIT._DNFA7NFENL6
#define DNFA7EN_DNFA7NFENL7 DNFA7EN_BASE.BIT._DNFA7NFENL7
#define DNFA7EN_DNFA7NFENH0 DNFA7EN_BASE.BIT._DNFA7NFENH0
#define DNFA7EN_DNFA7NFENH1 DNFA7EN_BASE.BIT._DNFA7NFENH1
#define DNFA7EN_DNFA7NFENH2 DNFA7EN_BASE.BIT._DNFA7NFENH2
#define DNFA7EN_DNFA7NFENH3 DNFA7EN_BASE.BIT._DNFA7NFENH3
#define DNFA7EN_DNFA7NFENH4 DNFA7EN_BASE.BIT._DNFA7NFENH4
#define DNFA7EN_DNFA7NFENH5 DNFA7EN_BASE.BIT._DNFA7NFENH5
#define DNFA7EN_DNFA7NFENH6 DNFA7EN_BASE.BIT._DNFA7NFENH6
#define DNFA7EN_DNFA7NFENH7 DNFA7EN_BASE.BIT._DNFA7NFENH7
#define DNFA7ENL DNFA7ENL_BASE.UINT8
#define DNFA7ENL_DNFA7NFENL0 DNFA7ENL_BASE.BIT._DNFA7NFENL0
#define DNFA7ENL_DNFA7NFENL1 DNFA7ENL_BASE.BIT._DNFA7NFENL1
#define DNFA7ENL_DNFA7NFENL2 DNFA7ENL_BASE.BIT._DNFA7NFENL2
#define DNFA7ENL_DNFA7NFENL3 DNFA7ENL_BASE.BIT._DNFA7NFENL3
#define DNFA7ENL_DNFA7NFENL4 DNFA7ENL_BASE.BIT._DNFA7NFENL4
#define DNFA7ENL_DNFA7NFENL5 DNFA7ENL_BASE.BIT._DNFA7NFENL5
#define DNFA7ENL_DNFA7NFENL6 DNFA7ENL_BASE.BIT._DNFA7NFENL6
#define DNFA7ENL_DNFA7NFENL7 DNFA7ENL_BASE.BIT._DNFA7NFENL7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif