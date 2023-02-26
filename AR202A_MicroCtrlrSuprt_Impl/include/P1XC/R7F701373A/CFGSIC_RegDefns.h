#ifndef __DR7F701373_CFGSIC_HEADER__
#define __DR7F701373_CFGSIC_HEADER__



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
} MGDCFCTL_VCI2CFBBits_t;

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
} MGDCFSTAT_VCI2CFBBits_t;

typedef struct
{
    const uint32 _CFIFTID : 3;
    uint32 padding3 : 1;
    const uint32 _CFIFMID : 4;
    const uint32 _EXA : 1;
    const uint32 _BFA : 1;
    const uint32 _TESTODE : 1;
    uint32 padding11 : 1;
    const uint32 _CFPROTAUTHMODE : 2;
    const uint32 _CFPROTTEST : 1;
    uint32 padding15 : 1;
    const uint32 _CFIFADRP : 1;
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
    const uint32 _ERRCAUSE : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDCFTYPE_VCI2CFBBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    MGDCFCTL_VCI2CFBBits_t BIT;
} MGDCFCTL_VCI2CFB_t;

typedef union
{
    uint32 UINT32;
    const MGDCFSTAT_VCI2CFBBits_t BIT;
} MGDCFSTAT_VCI2CFB_t;

typedef union
{
    uint32 UINT32;
    const MGDCFTYPE_VCI2CFBBits_t BIT;
} MGDCFTYPE_VCI2CFB_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(MGDCFCTL_VCI2CFB_BASE, 0xFFC48100, __READ_WRITE, MGDCFCTL_VCI2CFB_t);
__IOREG(MGDCFSTAT_VCI2CFB_BASE, 0xFFC48104, __READ, MGDCFSTAT_VCI2CFB_t);
__IOREG(MGDCFTYPE_VCI2CFB_BASE, 0xFFC4810C, __READ, MGDCFTYPE_VCI2CFB_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define MGDCFCTL_VCI2CFB MGDCFCTL_VCI2CFB_BASE.UINT32
#define MGDCFCTL_VCI2CFB_CLRE MGDCFCTL_VCI2CFB_BASE.BIT._CLRE
#define MGDCFCTL_VCI2CFB_CLRO MGDCFCTL_VCI2CFB_BASE.BIT._CLRO
#define MGDCFSTAT_VCI2CFB MGDCFSTAT_VCI2CFB_BASE.UINT32
#define MGDCFSTAT_VCI2CFB_ERR MGDCFSTAT_VCI2CFB_BASE.BIT._ERR
#define MGDCFSTAT_VCI2CFB_OVF MGDCFSTAT_VCI2CFB_BASE.BIT._OVF
#define MGDCFTYPE_VCI2CFB MGDCFTYPE_VCI2CFB_BASE.UINT32
#define MGDCFTYPE_VCI2CFB_CFIFTID MGDCFTYPE_VCI2CFB_BASE.BIT._CFIFTID
#define MGDCFTYPE_VCI2CFB_CFIFMID MGDCFTYPE_VCI2CFB_BASE.BIT._CFIFMID
#define MGDCFTYPE_VCI2CFB_EXA MGDCFTYPE_VCI2CFB_BASE.BIT._EXA
#define MGDCFTYPE_VCI2CFB_BFA MGDCFTYPE_VCI2CFB_BASE.BIT._BFA
#define MGDCFTYPE_VCI2CFB_TESTODE MGDCFTYPE_VCI2CFB_BASE.BIT._TESTODE
#define MGDCFTYPE_VCI2CFB_CFPROTAUTHMODE MGDCFTYPE_VCI2CFB_BASE.BIT._CFPROTAUTHMODE
#define MGDCFTYPE_VCI2CFB_CFPROTTEST MGDCFTYPE_VCI2CFB_BASE.BIT._CFPROTTEST
#define MGDCFTYPE_VCI2CFB_CFIFADRP MGDCFTYPE_VCI2CFB_BASE.BIT._CFIFADRP
#define MGDCFTYPE_VCI2CFB_ERRCAUSE MGDCFTYPE_VCI2CFB_BASE.BIT._ERRCAUSE

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif