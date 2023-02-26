#ifndef __DR7F701373_ERRSLV2AI_HEADER__
#define __DR7F701373_ERRSLV2AI_HEADER__



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
    uint8 _CLRE : 1;
    uint8 _CLRO : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ERRSLV2AICTLBits_t;

typedef struct
{
    const uint32 _ERR : 1;
    const uint32 _OVF : 1;
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
} ERRSLV2AISTATBits_t;

typedef struct
{
    const uint32 _WRITE : 1;
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
    const uint32 _PEID : 3;
    const uint32 _SPID : 5;
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
} ERRSLV2AITYPEBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    ERRSLV2AICTLBits_t BIT;
} ERRSLV2AICTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV2AISTATBits_t BIT;
} ERRSLV2AISTAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV2AITYPEBits_t BIT;
} ERRSLV2AITYPE_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ERRSLV2AICTL_BASE, 0xFFDDD800, __READ_WRITE, ERRSLV2AICTL_t);
__IOREG(ERRSLV2AISTAT_BASE, 0xFFDDD804, __READ, ERRSLV2AISTAT_t);
__IOREG(ERRSLV2AITYPE_BASE, 0xFFDDD80C, __READ, ERRSLV2AITYPE_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ERRSLV2AICTL ERRSLV2AICTL_BASE.UINT8
#define ERRSLV2AICTL_CLRE ERRSLV2AICTL_BASE.BIT._CLRE
#define ERRSLV2AICTL_CLRO ERRSLV2AICTL_BASE.BIT._CLRO
#define ERRSLV2AISTAT ERRSLV2AISTAT_BASE.UINT32
#define ERRSLV2AISTAT_ERR ERRSLV2AISTAT_BASE.BIT._ERR
#define ERRSLV2AISTAT_OVF ERRSLV2AISTAT_BASE.BIT._OVF
#define ERRSLV2AITYPE ERRSLV2AITYPE_BASE.UINT32
#define ERRSLV2AITYPE_WRITE ERRSLV2AITYPE_BASE.BIT._WRITE
#define ERRSLV2AITYPE_PEID ERRSLV2AITYPE_BASE.BIT._PEID
#define ERRSLV2AITYPE_SPID ERRSLV2AITYPE_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif