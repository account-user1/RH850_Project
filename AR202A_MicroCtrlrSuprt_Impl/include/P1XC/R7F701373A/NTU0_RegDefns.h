#ifndef __DR7F701373_NTU0_HEADER__
#define __DR7F701373_NTU0_HEADER__



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
    uint8 _NPRSCCS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _NPRSCE : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} NTU0PRSCTLBits_t;

typedef struct
{
    uint8 _NPRSCMP : 8;
} NTU0PRSCMPBits_t;

typedef struct
{
    uint8 _NBPRSCCS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _NBPRSCE : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} NTU0BPRSCTLBits_t;

typedef struct
{
    uint8 _NBPRSCMP : 8;
} NTU0BPRSCMPBits_t;

typedef struct
{
    uint8 _NCPRSCCS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _NCPRSCE : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} NTU0CPRSCTLBits_t;

typedef struct
{
    uint8 _NCPRSCMP : 8;
} NTU0CPRSCMPBits_t;

typedef struct
{
    uint8 _NTUCCMPE : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} NTU0CCTL0Bits_t;

typedef struct
{
    uint16 _NTUCCMPL : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} NTU0CCMPLBits_t;

typedef struct
{
    uint16 _NTUCCMPH : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} NTU0CCMPHBits_t;

typedef struct
{
    uint8 _NTUCREG : 8;
} NTU0CPCMDBits_t;

typedef struct
{
    const uint8 _NTUCPRERR : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} NTU0CPSBits_t;

typedef struct
{
    uint32 _NTUCRST : 1;
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
} NTU0RSTBits_t;

typedef struct
{
    uint32 _NTUSEL : 2;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _CLKSEL : 1;
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
} NTU0CFGBits_t;

typedef struct
{
    uint32 _NTUCEN : 1;
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
} NTU0CLMENBits_t;

typedef struct
{
    const uint32 _NTUCMON : 1;
    const uint32 _NTUMON : 1;
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
} NTU0MONBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    NTU0PRSCTLBits_t BIT;
} NTU0PRSCTL_t;

typedef union
{
    uint8 UINT8;
    NTU0PRSCMPBits_t BIT;
} NTU0PRSCMP_t;

typedef union
{
    uint8 UINT8;
    NTU0BPRSCTLBits_t BIT;
} NTU0BPRSCTL_t;

typedef union
{
    uint8 UINT8;
    NTU0BPRSCMPBits_t BIT;
} NTU0BPRSCMP_t;

typedef union
{
    uint8 UINT8;
    NTU0CPRSCTLBits_t BIT;
} NTU0CPRSCTL_t;

typedef union
{
    uint8 UINT8;
    NTU0CPRSCMPBits_t BIT;
} NTU0CPRSCMP_t;

typedef union
{
    uint8 UINT8;
    NTU0CCTL0Bits_t BIT;
} NTU0CCTL0_t;

typedef union
{
    uint16 UINT16;
    NTU0CCMPLBits_t BIT;
} NTU0CCMPL_t;

typedef union
{
    uint16 UINT16;
    NTU0CCMPHBits_t BIT;
} NTU0CCMPH_t;

typedef union
{
    uint8 UINT8;
    NTU0CPCMDBits_t BIT;
} NTU0CPCMD_t;

typedef union
{
    uint8 UINT8;
    const NTU0CPSBits_t BIT;
} NTU0CPS_t;

typedef union
{
    uint32 UINT32;
    NTU0RSTBits_t BIT;
} NTU0RST_t;

typedef union
{
    uint32 UINT32;
    NTU0CFGBits_t BIT;
} NTU0CFG_t;

typedef union
{
    uint32 UINT32;
    NTU0CLMENBits_t BIT;
} NTU0CLMEN_t;

typedef union
{
    uint32 UINT32;
    const NTU0MONBits_t BIT;
} NTU0MON_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(NTU0PRSCTL_BASE, 0xFFF9C008, __READ_WRITE, NTU0PRSCTL_t);
__IOREG(NTU0PRSCMP_BASE, 0xFFF9C00C, __READ_WRITE, NTU0PRSCMP_t);
__IOREG(NTU0BPRSCTL_BASE, 0xFFF9C108, __READ_WRITE, NTU0BPRSCTL_t);
__IOREG(NTU0BPRSCMP_BASE, 0xFFF9C10C, __READ_WRITE, NTU0BPRSCMP_t);
__IOREG(NTU0CPRSCTL_BASE, 0xFFF9C208, __READ_WRITE, NTU0CPRSCTL_t);
__IOREG(NTU0CPRSCMP_BASE, 0xFFF9C20C, __READ_WRITE, NTU0CPRSCMP_t);
__IOREG(NTU0CCTL0_BASE, 0xFFF9C800, __READ_WRITE, NTU0CCTL0_t);
__IOREG(NTU0CCMPL_BASE, 0xFFF9C808, __READ_WRITE, NTU0CCMPL_t);
__IOREG(NTU0CCMPH_BASE, 0xFFF9C80C, __READ_WRITE, NTU0CCMPH_t);
__IOREG(NTU0CPCMD_BASE, 0xFFF9C810, __READ_WRITE, NTU0CPCMD_t);
__IOREG(NTU0CPS_BASE, 0xFFF9C814, __READ, NTU0CPS_t);
__IOREG(NTU0RST_BASE, 0xFFF9CC00, __READ_WRITE, NTU0RST_t);
__IOREG(NTU0CFG_BASE, 0xFFF9CC04, __READ_WRITE, NTU0CFG_t);
__IOREG(NTU0CLMEN_BASE, 0xFFF9CC08, __READ_WRITE, NTU0CLMEN_t);
__IOREG(NTU0MON_BASE, 0xFFF9CC0C, __READ, NTU0MON_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define NTU0PRSCTL NTU0PRSCTL_BASE.UINT8
#define NTU0PRSCTL_NPRSCCS NTU0PRSCTL_BASE.BIT._NPRSCCS
#define NTU0PRSCTL_NPRSCE NTU0PRSCTL_BASE.BIT._NPRSCE
#define NTU0PRSCMP NTU0PRSCMP_BASE.UINT8
#define NTU0PRSCMP_NPRSCMP NTU0PRSCMP_BASE.BIT._NPRSCMP
#define NTU0BPRSCTL NTU0BPRSCTL_BASE.UINT8
#define NTU0BPRSCTL_NBPRSCCS NTU0BPRSCTL_BASE.BIT._NBPRSCCS
#define NTU0BPRSCTL_NBPRSCE NTU0BPRSCTL_BASE.BIT._NBPRSCE
#define NTU0BPRSCMP NTU0BPRSCMP_BASE.UINT8
#define NTU0BPRSCMP_NBPRSCMP NTU0BPRSCMP_BASE.BIT._NBPRSCMP
#define NTU0CPRSCTL NTU0CPRSCTL_BASE.UINT8
#define NTU0CPRSCTL_NCPRSCCS NTU0CPRSCTL_BASE.BIT._NCPRSCCS
#define NTU0CPRSCTL_NCPRSCE NTU0CPRSCTL_BASE.BIT._NCPRSCE
#define NTU0CPRSCMP NTU0CPRSCMP_BASE.UINT8
#define NTU0CPRSCMP_NCPRSCMP NTU0CPRSCMP_BASE.BIT._NCPRSCMP
#define NTU0CCTL0 NTU0CCTL0_BASE.UINT8
#define NTU0CCTL0_NTUCCMPE NTU0CCTL0_BASE.BIT._NTUCCMPE
#define NTU0CCMPL NTU0CCMPL_BASE.UINT16
#define NTU0CCMPL_NTUCCMPL NTU0CCMPL_BASE.BIT._NTUCCMPL
#define NTU0CCMPH NTU0CCMPH_BASE.UINT16
#define NTU0CCMPH_NTUCCMPH NTU0CCMPH_BASE.BIT._NTUCCMPH
#define NTU0CPCMD NTU0CPCMD_BASE.UINT8
#define NTU0CPCMD_NTUCREG NTU0CPCMD_BASE.BIT._NTUCREG
#define NTU0CPS NTU0CPS_BASE.UINT8
#define NTU0CPS_NTUCPRERR NTU0CPS_BASE.BIT._NTUCPRERR
#define NTU0RST NTU0RST_BASE.UINT32
#define NTU0RST_NTUCRST NTU0RST_BASE.BIT._NTUCRST
#define NTU0CFG NTU0CFG_BASE.UINT32
#define NTU0CFG_NTUSEL NTU0CFG_BASE.BIT._NTUSEL
#define NTU0CFG_CLKSEL NTU0CFG_BASE.BIT._CLKSEL
#define NTU0CLMEN NTU0CLMEN_BASE.UINT32
#define NTU0CLMEN_NTUCEN NTU0CLMEN_BASE.BIT._NTUCEN
#define NTU0MON NTU0MON_BASE.UINT32
#define NTU0MON_NTUCMON NTU0MON_BASE.BIT._NTUCMON
#define NTU0MON_NTUMON NTU0MON_BASE.BIT._NTUMON

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif