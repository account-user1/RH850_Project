#ifndef __DR7F701373_GRGDPE1_HEADER__
#define __DR7F701373_GRGDPE1_HEADER__



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
    uint32 _CLRE : 1;
    uint32 _CLRO : 1;
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
} MGDGRSCTL_PE1Bits_t;

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
} MGDGRSSTAT_PE1Bits_t;

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
    const uint32 _PEID : 3;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    const uint32 _SPID : 5;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    const uint32 _ERRCAUSE : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRSTYPE_PE1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    MGDGRSCTL_PE1Bits_t BIT;
} MGDGRSCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    const MGDGRSSTAT_PE1Bits_t BIT;
} MGDGRSSTAT_PE1_t;

typedef union
{
    uint32 UINT32;
    const MGDGRSTYPE_PE1Bits_t BIT;
} MGDGRSTYPE_PE1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(MGDGRSCTL_PE1_BASE, 0xFFC49200, __READ_WRITE, MGDGRSCTL_PE1_t);
__IOREG(MGDGRSSTAT_PE1_BASE, 0xFFC49204, __READ, MGDGRSSTAT_PE1_t);
__IOREG(MGDGRSTYPE_PE1_BASE, 0xFFC4920C, __READ, MGDGRSTYPE_PE1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define MGDGRSCTL_PE1 MGDGRSCTL_PE1_BASE.UINT32
#define MGDGRSCTL_PE1_CLRE MGDGRSCTL_PE1_BASE.BIT._CLRE
#define MGDGRSCTL_PE1_CLRO MGDGRSCTL_PE1_BASE.BIT._CLRO
#define MGDGRSSTAT_PE1 MGDGRSSTAT_PE1_BASE.UINT32
#define MGDGRSSTAT_PE1_ERR MGDGRSSTAT_PE1_BASE.BIT._ERR
#define MGDGRSSTAT_PE1_OVF MGDGRSSTAT_PE1_BASE.BIT._OVF
#define MGDGRSTYPE_PE1 MGDGRSTYPE_PE1_BASE.UINT32
#define MGDGRSTYPE_PE1_PEID MGDGRSTYPE_PE1_BASE.BIT._PEID
#define MGDGRSTYPE_PE1_SPID MGDGRSTYPE_PE1_BASE.BIT._SPID
#define MGDGRSTYPE_PE1_ERRCAUSE MGDGRSTYPE_PE1_BASE.BIT._ERRCAUSE

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif