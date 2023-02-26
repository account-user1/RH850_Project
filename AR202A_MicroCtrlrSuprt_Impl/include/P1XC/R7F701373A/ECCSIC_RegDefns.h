#ifndef __DR7F701373_ECCSIC_HEADER__
#define __DR7F701373_ECCSIC_HEADER__



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
    uint32 _ECCDIS : 1;
    uint32 _SECDIS : 1;
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
    uint32 _PROT : 2;
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
} CFECCCTL_VCI2CFBABits_t;

typedef struct
{
    uint32 _ECCTST : 1;
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
    uint32 _PROT : 2;
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
} CFSTSTCTL_VCI2CFBABits_t;

typedef struct
{
    uint32 _ECCDIS : 1;
    uint32 _SECDIS : 1;
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
    uint32 _PROT : 2;
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
} GRECCCTL_VCI2GRAMBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    CFECCCTL_VCI2CFBABits_t BIT;
} CFECCCTL_VCI2CFBA_t;

typedef union
{
    uint32 UINT32;
    CFSTSTCTL_VCI2CFBABits_t BIT;
} CFSTSTCTL_VCI2CFBA_t;

typedef union
{
    uint32 UINT32;
    GRECCCTL_VCI2GRAMBits_t BIT;
} GRECCCTL_VCI2GRAM_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CFECCCTL_VCI2CFBA_BASE, 0xFFC62200, __READ_WRITE, CFECCCTL_VCI2CFBA_t);
__IOREG(CFSTSTCTL_VCI2CFBA_BASE, 0xFFC622F0, __READ_WRITE, CFSTSTCTL_VCI2CFBA_t);
__IOREG(GRECCCTL_VCI2GRAM_BASE, 0xFFC64200, __READ_WRITE, GRECCCTL_VCI2GRAM_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CFECCCTL_VCI2CFBA CFECCCTL_VCI2CFBA_BASE.UINT32
#define CFECCCTL_VCI2CFBA_ECCDIS CFECCCTL_VCI2CFBA_BASE.BIT._ECCDIS
#define CFECCCTL_VCI2CFBA_SECDIS CFECCCTL_VCI2CFBA_BASE.BIT._SECDIS
#define CFECCCTL_VCI2CFBA_PROT CFECCCTL_VCI2CFBA_BASE.BIT._PROT
#define CFSTSTCTL_VCI2CFBA CFSTSTCTL_VCI2CFBA_BASE.UINT32
#define CFSTSTCTL_VCI2CFBA_ECCTST CFSTSTCTL_VCI2CFBA_BASE.BIT._ECCTST
#define CFSTSTCTL_VCI2CFBA_PROT CFSTSTCTL_VCI2CFBA_BASE.BIT._PROT
#define GRECCCTL_VCI2GRAM GRECCCTL_VCI2GRAM_BASE.UINT32
#define GRECCCTL_VCI2GRAM_ECCDIS GRECCCTL_VCI2GRAM_BASE.BIT._ECCDIS
#define GRECCCTL_VCI2GRAM_SECDIS GRECCCTL_VCI2GRAM_BASE.BIT._SECDIS
#define GRECCCTL_VCI2GRAM_PROT GRECCCTL_VCI2GRAM_BASE.BIT._PROT

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif