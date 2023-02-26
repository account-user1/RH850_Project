#ifndef __DR7F701373_MCAN1_HEADER__
#define __DR7F701373_MCAN1_HEADER__



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
    const uint32 _DAY : 8;
    const uint32 _MON : 8;
    const uint32 _YEAR : 4;
    const uint32 _SUBSTEP : 4;
    const uint32 _STEP : 4;
    const uint32 _REL : 4;
} MCAN1CRELBits_t;

typedef struct
{
    const uint32 _ETV : 32;
} MCAN1ENDNBits_t;

typedef struct
{
    const uint32 _DSJW : 4;
    const uint32 _DTSEG2 : 4;
    const uint32 _DTSEG1 : 5;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _DBRP : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    const uint32 _TDC : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1DBTPBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _LBCK : 1;
    const uint32 _TX : 2;
    const uint32 _RX : 1;
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
} MCAN1TESTBits_t;

typedef struct
{
    uint32 _WDC : 8;
    const uint32 _WDV : 8;
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
} MCAN1RWDBits_t;

typedef struct
{
    uint32 _INIT : 1;
    uint32 _CCE : 1;
    const uint32 _ASM : 1;
    const uint32 _CSA : 1;
    uint32 _CSR : 1;
    const uint32 _MON : 1;
    uint32 _DAR : 1;
    const uint32 _TEST : 1;
    uint32 _FDOE : 1;
    uint32 _BRSE : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _PXHD : 1;
    uint32 _EFBI : 1;
    uint32 _TXP : 1;
    uint32 _NISO : 1;
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
} MCAN1CCCRBits_t;

typedef struct
{
    uint32 _NTSEG2 : 7;
    uint32 padding7 : 1;
    uint32 _NTSEG1 : 8;
    uint32 _NBRP : 9;
    uint32 _NSJW : 7;
} MCAN1NBTPBits_t;

typedef struct
{
    uint32 _TSS : 2;
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
    uint32 _TCP : 4;
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
} MCAN1TSCCBits_t;

typedef struct
{
    uint32 _TSC : 16;
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
} MCAN1TSCVBits_t;

typedef struct
{
    uint32 _ETOC : 1;
    uint32 _TOS : 2;
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
    uint32 _TOP : 16;
} MCAN1TOCCBits_t;

typedef struct
{
    uint32 _TOC : 16;
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
} MCAN1TOCVBits_t;

typedef struct
{
    const uint32 _TEC : 8;
    const uint32 _REC : 7;
    const uint32 _RP : 1;
    const uint32 _CEL : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1ECRBits_t;

typedef struct
{
    const uint32 _LEC : 3;
    const uint32 _ACT : 2;
    const uint32 _EP : 1;
    const uint32 _EW : 1;
    const uint32 _BO : 1;
    const uint32 _DLEC : 3;
    const uint32 _RESI : 1;
    const uint32 _RBRS : 1;
    const uint32 _RFDF : 1;
    const uint32 _PXE : 1;
    uint32 padding15 : 1;
    const uint32 _TDCV : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1PSRBits_t;

typedef struct
{
    const uint32 _TDCF : 7;
    uint32 padding7 : 1;
    const uint32 _TDCO : 7;
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
} MCAN1TDCRBits_t;

typedef struct
{
    uint32 _RF0N : 1;
    uint32 _RF0W : 1;
    uint32 _RF0F : 1;
    uint32 _RF0L : 1;
    uint32 _RF1N : 1;
    uint32 _RF1W : 1;
    uint32 _RF1F : 1;
    uint32 _RF1L : 1;
    uint32 _HPM : 1;
    uint32 _TC : 1;
    uint32 _TCF : 1;
    uint32 _TFE : 1;
    uint32 _TEFN : 1;
    uint32 _TEFW : 1;
    uint32 _TEFF : 1;
    uint32 _TEFL : 1;
    uint32 _TSW : 1;
    uint32 _MRAF : 1;
    uint32 _TOO : 1;
    uint32 _DRX : 1;
    uint32 _BEC : 1;
    uint32 _BEU : 1;
    uint32 _ELO : 1;
    uint32 _EP : 1;
    uint32 _EW : 1;
    uint32 _BO : 1;
    uint32 _WDI : 1;
    uint32 _PEA : 1;
    uint32 _PED : 1;
    uint32 _ARA : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1IRBits_t;

typedef struct
{
    uint32 _RF0NE : 1;
    uint32 _RF0WE : 1;
    uint32 _RF0FE : 1;
    uint32 _RF0LE : 1;
    uint32 _RF1NE : 1;
    uint32 _RF1WE : 1;
    uint32 _RF1FE : 1;
    uint32 _RF1LE : 1;
    uint32 _HPME : 1;
    uint32 _TCE : 1;
    uint32 _TCFE : 1;
    uint32 _TFEE : 1;
    uint32 _TEFNE : 1;
    uint32 _TEFWE : 1;
    uint32 _TEFFE : 1;
    uint32 _TEFLE : 1;
    uint32 _TSWE : 1;
    uint32 _MRAFE : 1;
    uint32 _TOOE : 1;
    uint32 _DRXE : 1;
    uint32 _BECE : 1;
    uint32 _BEUE : 1;
    uint32 _ELOE : 1;
    uint32 _EPE : 1;
    uint32 _EWE : 1;
    uint32 _BOE : 1;
    uint32 _WDIE : 1;
    uint32 _PEAE : 1;
    uint32 _PEDE : 1;
    uint32 _ARAE : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1IEBits_t;

typedef struct
{
    uint32 _RF0NL : 1;
    uint32 _RF0WL : 1;
    uint32 _RF0FL : 1;
    uint32 _RF0LL : 1;
    uint32 _RF1NL : 1;
    uint32 _RF1WL : 1;
    uint32 _RF1FL : 1;
    uint32 _RF1LL : 1;
    uint32 _HPML : 1;
    uint32 _TCL : 1;
    uint32 _TCFL : 1;
    uint32 _TFEL : 1;
    uint32 _TEFNL : 1;
    uint32 _TEFWL : 1;
    uint32 _TEFFL : 1;
    uint32 _TEFLL : 1;
    uint32 _TSWL : 1;
    uint32 _MRAFL : 1;
    uint32 _TOOL : 1;
    uint32 _DRXL : 1;
    uint32 _BECL : 1;
    uint32 _BEUL : 1;
    uint32 _ELOL : 1;
    uint32 _EPL : 1;
    uint32 _EWL : 1;
    uint32 _BOL : 1;
    uint32 _WDIL : 1;
    uint32 _PEAL : 1;
    uint32 _PEDL : 1;
    uint32 _ARAL : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1ILSBits_t;

typedef struct
{
    uint32 _EINT0 : 1;
    uint32 _EINT1 : 1;
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
} MCAN1ILEBits_t;

typedef struct
{
    uint32 _RRFE : 1;
    uint32 _RRFS : 1;
    uint32 _ANFE : 2;
    uint32 _ANFS : 2;
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
} MCAN1GFCBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _FLSSA : 14;
    uint32 _LSS : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1SIDFCBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _FLESA : 14;
    uint32 _LSE : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1XIDFCBits_t;

typedef struct
{
    uint32 _EIDM : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1XIDAMBits_t;

typedef struct
{
    const uint32 _BIDX : 6;
    const uint32 _MSI : 2;
    const uint32 _FIDX : 7;
    const uint32 _FLST : 1;
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
} MCAN1HPMSBits_t;

typedef struct
{
    uint32 _ND0 : 1;
    uint32 _ND1 : 1;
    uint32 _ND2 : 1;
    uint32 _ND3 : 1;
    uint32 _ND4 : 1;
    uint32 _ND5 : 1;
    uint32 _ND6 : 1;
    uint32 _ND7 : 1;
    uint32 _ND8 : 1;
    uint32 _ND9 : 1;
    uint32 _ND10 : 1;
    uint32 _ND11 : 1;
    uint32 _ND12 : 1;
    uint32 _ND13 : 1;
    uint32 _ND14 : 1;
    uint32 _ND15 : 1;
    uint32 _ND16 : 1;
    uint32 _ND17 : 1;
    uint32 _ND18 : 1;
    uint32 _ND19 : 1;
    uint32 _ND20 : 1;
    uint32 _ND21 : 1;
    uint32 _ND22 : 1;
    uint32 _ND23 : 1;
    uint32 _ND24 : 1;
    uint32 _ND25 : 1;
    uint32 _ND26 : 1;
    uint32 _ND27 : 1;
    uint32 _ND28 : 1;
    uint32 _ND29 : 1;
    uint32 _ND30 : 1;
    uint32 _ND31 : 1;
} MCAN1NDAT1Bits_t;

typedef struct
{
    uint32 _ND32 : 1;
    uint32 _ND33 : 1;
    uint32 _ND34 : 1;
    uint32 _ND35 : 1;
    uint32 _ND36 : 1;
    uint32 _ND37 : 1;
    uint32 _ND38 : 1;
    uint32 _ND39 : 1;
    uint32 _ND40 : 1;
    uint32 _ND41 : 1;
    uint32 _ND42 : 1;
    uint32 _ND43 : 1;
    uint32 _ND44 : 1;
    uint32 _ND45 : 1;
    uint32 _ND46 : 1;
    uint32 _ND47 : 1;
    uint32 _ND48 : 1;
    uint32 _ND49 : 1;
    uint32 _ND50 : 1;
    uint32 _ND51 : 1;
    uint32 _ND52 : 1;
    uint32 _ND53 : 1;
    uint32 _ND54 : 1;
    uint32 _ND55 : 1;
    uint32 _ND56 : 1;
    uint32 _ND57 : 1;
    uint32 _ND58 : 1;
    uint32 _ND59 : 1;
    uint32 _ND60 : 1;
    uint32 _ND61 : 1;
    uint32 _ND62 : 1;
    uint32 _ND63 : 1;
} MCAN1NDAT2Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    const uint32 _F0SA : 14;
    const uint32 _F0S : 7;
    uint32 padding23 : 1;
    const uint32 _F0WM : 7;
    const uint32 _F0OM : 1;
} MCAN1RXF0CBits_t;

typedef struct
{
    const uint32 _F0FL : 7;
    uint32 padding7 : 1;
    const uint32 _F0GI : 6;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _F0PI : 6;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _F0F : 1;
    const uint32 _RF0L : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1RXF0SBits_t;

typedef struct
{
    uint32 _F0AI : 6;
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
} MCAN1RXF0ABits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _RBSA : 14;
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
} MCAN1RXBCBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _F1SA : 14;
    uint32 _F1S : 7;
    uint32 padding23 : 1;
    uint32 _F1WM : 7;
    uint32 _F1OM : 1;
} MCAN1RXF1CBits_t;

typedef struct
{
    const uint32 _F1FL : 7;
    uint32 padding7 : 1;
    const uint32 _F1GI : 6;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _F1PI : 6;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _F1F : 1;
    const uint32 _RF1L : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    const uint32 _DMS : 2;
} MCAN1RXF1SBits_t;

typedef struct
{
    uint32 _F1AI : 6;
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
} MCAN1RXF1ABits_t;

typedef struct
{
    const uint32 _F0DS : 3;
    uint32 padding3 : 1;
    const uint32 _F1DS : 3;
    uint32 padding7 : 1;
    const uint32 _RBDS : 3;
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
} MCAN1RXESCBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _TBSA : 14;
    uint32 _NDTB : 6;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _TFQS : 6;
    uint32 _TFQM : 1;
    uint32 padding31 : 1;
} MCAN1TXBCBits_t;

typedef struct
{
    const uint32 _TFFL : 6;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _TFGI : 5;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _TFQPI : 5;
    const uint32 _TFQF : 1;
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
} MCAN1TXFQSBits_t;

typedef struct
{
    uint32 _TBDS : 3;
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
} MCAN1TXESCBits_t;

typedef struct
{
    const uint32 _TRP0 : 1;
    const uint32 _TRP1 : 1;
    const uint32 _TRP2 : 1;
    const uint32 _TRP3 : 1;
    const uint32 _TRP4 : 1;
    const uint32 _TRP5 : 1;
    const uint32 _TRP6 : 1;
    const uint32 _TRP7 : 1;
    const uint32 _TRP8 : 1;
    const uint32 _TRP9 : 1;
    const uint32 _TRP10 : 1;
    const uint32 _TRP11 : 1;
    const uint32 _TRP12 : 1;
    const uint32 _TRP13 : 1;
    const uint32 _TRP14 : 1;
    const uint32 _TRP15 : 1;
    const uint32 _TRP16 : 1;
    const uint32 _TRP17 : 1;
    const uint32 _TRP18 : 1;
    const uint32 _TRP19 : 1;
    const uint32 _TRP20 : 1;
    const uint32 _TRP21 : 1;
    const uint32 _TRP22 : 1;
    const uint32 _TRP23 : 1;
    const uint32 _TRP24 : 1;
    const uint32 _TRP25 : 1;
    const uint32 _TRP26 : 1;
    const uint32 _TRP27 : 1;
    const uint32 _TRP28 : 1;
    const uint32 _TRP29 : 1;
    const uint32 _TRP30 : 1;
    const uint32 _TRP31 : 1;
} MCAN1TXBRPBits_t;

typedef struct
{
    uint32 _AR0 : 1;
    uint32 _AR1 : 1;
    uint32 _AR2 : 1;
    uint32 _AR3 : 1;
    uint32 _AR4 : 1;
    uint32 _AR5 : 1;
    uint32 _AR6 : 1;
    uint32 _AR7 : 1;
    uint32 _AR8 : 1;
    uint32 _AR9 : 1;
    uint32 _AR10 : 1;
    uint32 _AR11 : 1;
    uint32 _AR12 : 1;
    uint32 _AR13 : 1;
    uint32 _AR14 : 1;
    uint32 _AR15 : 1;
    uint32 _AR16 : 1;
    uint32 _AR17 : 1;
    uint32 _AR18 : 1;
    uint32 _AR19 : 1;
    uint32 _AR20 : 1;
    uint32 _AR21 : 1;
    uint32 _AR22 : 1;
    uint32 _AR23 : 1;
    uint32 _AR24 : 1;
    uint32 _AR25 : 1;
    uint32 _AR26 : 1;
    uint32 _AR27 : 1;
    uint32 _AR28 : 1;
    uint32 _AR29 : 1;
    uint32 _AR30 : 1;
    uint32 _AR31 : 1;
} MCAN1TXBARBits_t;

typedef struct
{
    uint32 _CR0 : 1;
    uint32 _CR1 : 1;
    uint32 _CR2 : 1;
    uint32 _CR3 : 1;
    uint32 _CR4 : 1;
    uint32 _CR5 : 1;
    uint32 _CR6 : 1;
    uint32 _CR7 : 1;
    uint32 _CR8 : 1;
    uint32 _CR9 : 1;
    uint32 _CR10 : 1;
    uint32 _CR11 : 1;
    uint32 _CR12 : 1;
    uint32 _CR13 : 1;
    uint32 _CR14 : 1;
    uint32 _CR15 : 1;
    uint32 _CR16 : 1;
    uint32 _CR17 : 1;
    uint32 _CR18 : 1;
    uint32 _CR19 : 1;
    uint32 _CR20 : 1;
    uint32 _CR21 : 1;
    uint32 _CR22 : 1;
    uint32 _CR23 : 1;
    uint32 _CR24 : 1;
    uint32 _CR25 : 1;
    uint32 _CR26 : 1;
    uint32 _CR27 : 1;
    uint32 _CR28 : 1;
    uint32 _CR29 : 1;
    uint32 _CR30 : 1;
    uint32 _CR31 : 1;
} MCAN1TXBCRBits_t;

typedef struct
{
    const uint32 _TO0 : 1;
    const uint32 _TO1 : 1;
    const uint32 _TO2 : 1;
    const uint32 _TO3 : 1;
    const uint32 _TO4 : 1;
    const uint32 _TO5 : 1;
    const uint32 _TO6 : 1;
    const uint32 _TO7 : 1;
    const uint32 _TO8 : 1;
    const uint32 _TO9 : 1;
    const uint32 _TO10 : 1;
    const uint32 _TO11 : 1;
    const uint32 _TO12 : 1;
    const uint32 _TO13 : 1;
    const uint32 _TO14 : 1;
    const uint32 _TO15 : 1;
    const uint32 _TO16 : 1;
    const uint32 _TO17 : 1;
    const uint32 _TO18 : 1;
    const uint32 _TO19 : 1;
    const uint32 _TO20 : 1;
    const uint32 _TO21 : 1;
    const uint32 _TO22 : 1;
    const uint32 _TO23 : 1;
    const uint32 _TO24 : 1;
    const uint32 _TO25 : 1;
    const uint32 _TO26 : 1;
    const uint32 _TO27 : 1;
    const uint32 _TO28 : 1;
    const uint32 _TO29 : 1;
    const uint32 _TO30 : 1;
    const uint32 _TO31 : 1;
} MCAN1TXBTOBits_t;

typedef struct
{
    const uint32 _CF0 : 1;
    const uint32 _CF1 : 1;
    const uint32 _CF2 : 1;
    const uint32 _CF3 : 1;
    const uint32 _CF4 : 1;
    const uint32 _CF5 : 1;
    const uint32 _CF6 : 1;
    const uint32 _CF7 : 1;
    const uint32 _CF8 : 1;
    const uint32 _CF9 : 1;
    const uint32 _CF10 : 1;
    const uint32 _CF11 : 1;
    const uint32 _CF12 : 1;
    const uint32 _CF13 : 1;
    const uint32 _CF14 : 1;
    const uint32 _CF15 : 1;
    const uint32 _CF16 : 1;
    const uint32 _CF17 : 1;
    const uint32 _CF18 : 1;
    const uint32 _CF19 : 1;
    const uint32 _CF20 : 1;
    const uint32 _CF21 : 1;
    const uint32 _CF22 : 1;
    const uint32 _CF23 : 1;
    const uint32 _CF24 : 1;
    const uint32 _CF25 : 1;
    const uint32 _CF26 : 1;
    const uint32 _CF27 : 1;
    const uint32 _CF28 : 1;
    const uint32 _CF29 : 1;
    const uint32 _CF30 : 1;
    const uint32 _CF31 : 1;
} MCAN1TXBCFBits_t;

typedef struct
{
    uint32 _TIE0 : 1;
    uint32 _TIE1 : 1;
    uint32 _TIE2 : 1;
    uint32 _TIE3 : 1;
    uint32 _TIE4 : 1;
    uint32 _TIE5 : 1;
    uint32 _TIE6 : 1;
    uint32 _TIE7 : 1;
    uint32 _TIE8 : 1;
    uint32 _TIE9 : 1;
    uint32 _TIE10 : 1;
    uint32 _TIE11 : 1;
    uint32 _TIE12 : 1;
    uint32 _TIE13 : 1;
    uint32 _TIE14 : 1;
    uint32 _TIE15 : 1;
    uint32 _TIE16 : 1;
    uint32 _TIE17 : 1;
    uint32 _TIE18 : 1;
    uint32 _TIE19 : 1;
    uint32 _TIE20 : 1;
    uint32 _TIE21 : 1;
    uint32 _TIE22 : 1;
    uint32 _TIE23 : 1;
    uint32 _TIE24 : 1;
    uint32 _TIE25 : 1;
    uint32 _TIE26 : 1;
    uint32 _TIE27 : 1;
    uint32 _TIE28 : 1;
    uint32 _TIE29 : 1;
    uint32 _TIE30 : 1;
    uint32 _TIE31 : 1;
} MCAN1TXBTIEBits_t;

typedef struct
{
    uint32 _CFIE0 : 1;
    uint32 _CFIE1 : 1;
    uint32 _CFIE2 : 1;
    uint32 _CFIE3 : 1;
    uint32 _CFIE4 : 1;
    uint32 _CFIE5 : 1;
    uint32 _CFIE6 : 1;
    uint32 _CFIE7 : 1;
    uint32 _CFIE8 : 1;
    uint32 _CFIE9 : 1;
    uint32 _CFIE10 : 1;
    uint32 _CFIE11 : 1;
    uint32 _CFIE12 : 1;
    uint32 _CFIE13 : 1;
    uint32 _CFIE14 : 1;
    uint32 _CFIE15 : 1;
    uint32 _CFIE16 : 1;
    uint32 _CFIE17 : 1;
    uint32 _CFIE18 : 1;
    uint32 _CFIE19 : 1;
    uint32 _CFIE20 : 1;
    uint32 _CFIE21 : 1;
    uint32 _CFIE22 : 1;
    uint32 _CFIE23 : 1;
    uint32 _CFIE24 : 1;
    uint32 _CFIE25 : 1;
    uint32 _CFIE26 : 1;
    uint32 _CFIE27 : 1;
    uint32 _CFIE28 : 1;
    uint32 _CFIE29 : 1;
    uint32 _CFIE30 : 1;
    uint32 _CFIE31 : 1;
} MCAN1TXBCIEBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _EFSA : 14;
    uint32 _EFS : 6;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _EFWM : 6;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1TXEFCBits_t;

typedef struct
{
    const uint32 _EFFL : 6;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _EFGI : 5;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _EFPI : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _EFF : 1;
    const uint32 _TEFL : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN1TXEFSBits_t;

typedef struct
{
    uint32 _EFAI : 5;
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
} MCAN1TXEFABits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const MCAN1CRELBits_t BIT;
} MCAN1CREL_t;

typedef union
{
    uint32 UINT32;
    const MCAN1ENDNBits_t BIT;
} MCAN1ENDN_t;

typedef union
{
    uint32 UINT32;
    const MCAN1DBTPBits_t BIT;
} MCAN1DBTP_t;

typedef union
{
    uint32 UINT32;
    const MCAN1TESTBits_t BIT;
} MCAN1TEST_t;

typedef union
{
    uint32 UINT32;
    MCAN1RWDBits_t BIT;
} MCAN1RWD_t;

typedef union
{
    uint32 UINT32;
    MCAN1CCCRBits_t BIT;
} MCAN1CCCR_t;

typedef union
{
    uint32 UINT32;
    MCAN1NBTPBits_t BIT;
} MCAN1NBTP_t;

typedef union
{
    uint32 UINT32;
    MCAN1TSCCBits_t BIT;
} MCAN1TSCC_t;

typedef union
{
    uint32 UINT32;
    MCAN1TSCVBits_t BIT;
} MCAN1TSCV_t;

typedef union
{
    uint32 UINT32;
    MCAN1TOCCBits_t BIT;
} MCAN1TOCC_t;

typedef union
{
    uint32 UINT32;
    MCAN1TOCVBits_t BIT;
} MCAN1TOCV_t;

typedef union
{
    uint32 UINT32;
    const MCAN1ECRBits_t BIT;
} MCAN1ECR_t;

typedef union
{
    uint32 UINT32;
    const MCAN1PSRBits_t BIT;
} MCAN1PSR_t;

typedef union
{
    uint32 UINT32;
    const MCAN1TDCRBits_t BIT;
} MCAN1TDCR_t;

typedef union
{
    uint32 UINT32;
    MCAN1IRBits_t BIT;
} MCAN1IR_t;

typedef union
{
    uint32 UINT32;
    MCAN1IEBits_t BIT;
} MCAN1IE_t;

typedef union
{
    uint32 UINT32;
    MCAN1ILSBits_t BIT;
} MCAN1ILS_t;

typedef union
{
    uint32 UINT32;
    MCAN1ILEBits_t BIT;
} MCAN1ILE_t;

typedef union
{
    uint32 UINT32;
    MCAN1GFCBits_t BIT;
} MCAN1GFC_t;

typedef union
{
    uint32 UINT32;
    MCAN1SIDFCBits_t BIT;
} MCAN1SIDFC_t;

typedef union
{
    uint32 UINT32;
    MCAN1XIDFCBits_t BIT;
} MCAN1XIDFC_t;

typedef union
{
    uint32 UINT32;
    MCAN1XIDAMBits_t BIT;
} MCAN1XIDAM_t;

typedef union
{
    uint32 UINT32;
    const MCAN1HPMSBits_t BIT;
} MCAN1HPMS_t;

typedef union
{
    uint32 UINT32;
    MCAN1NDAT1Bits_t BIT;
} MCAN1NDAT1_t;

typedef union
{
    uint32 UINT32;
    MCAN1NDAT2Bits_t BIT;
} MCAN1NDAT2_t;

typedef union
{
    uint32 UINT32;
    const MCAN1RXF0CBits_t BIT;
} MCAN1RXF0C_t;

typedef union
{
    uint32 UINT32;
    const MCAN1RXF0SBits_t BIT;
} MCAN1RXF0S_t;

typedef union
{
    uint32 UINT32;
    MCAN1RXF0ABits_t BIT;
} MCAN1RXF0A_t;

typedef union
{
    uint32 UINT32;
    MCAN1RXBCBits_t BIT;
} MCAN1RXBC_t;

typedef union
{
    uint32 UINT32;
    MCAN1RXF1CBits_t BIT;
} MCAN1RXF1C_t;

typedef union
{
    uint32 UINT32;
    const MCAN1RXF1SBits_t BIT;
} MCAN1RXF1S_t;

typedef union
{
    uint32 UINT32;
    MCAN1RXF1ABits_t BIT;
} MCAN1RXF1A_t;

typedef union
{
    uint32 UINT32;
    const MCAN1RXESCBits_t BIT;
} MCAN1RXESC_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXBCBits_t BIT;
} MCAN1TXBC_t;

typedef union
{
    uint32 UINT32;
    const MCAN1TXFQSBits_t BIT;
} MCAN1TXFQS_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXESCBits_t BIT;
} MCAN1TXESC_t;

typedef union
{
    uint32 UINT32;
    const MCAN1TXBRPBits_t BIT;
} MCAN1TXBRP_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXBARBits_t BIT;
} MCAN1TXBAR_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXBCRBits_t BIT;
} MCAN1TXBCR_t;

typedef union
{
    uint32 UINT32;
    const MCAN1TXBTOBits_t BIT;
} MCAN1TXBTO_t;

typedef union
{
    uint32 UINT32;
    const MCAN1TXBCFBits_t BIT;
} MCAN1TXBCF_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXBTIEBits_t BIT;
} MCAN1TXBTIE_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXBCIEBits_t BIT;
} MCAN1TXBCIE_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXEFCBits_t BIT;
} MCAN1TXEFC_t;

typedef union
{
    uint32 UINT32;
    const MCAN1TXEFSBits_t BIT;
} MCAN1TXEFS_t;

typedef union
{
    uint32 UINT32;
    MCAN1TXEFABits_t BIT;
} MCAN1TXEFA_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(MCAN1CREL_BASE, 0xFFD31000, __READ, MCAN1CREL_t);
__IOREG(MCAN1ENDN_BASE, 0xFFD31004, __READ, MCAN1ENDN_t);
__IOREG(MCAN1DBTP_BASE, 0xFFD3100C, __READ, MCAN1DBTP_t);
__IOREG(MCAN1TEST_BASE, 0xFFD31010, __READ, MCAN1TEST_t);
__IOREG(MCAN1RWD_BASE, 0xFFD31014, __READ_WRITE, MCAN1RWD_t);
__IOREG(MCAN1CCCR_BASE, 0xFFD31018, __READ_WRITE, MCAN1CCCR_t);
__IOREG(MCAN1NBTP_BASE, 0xFFD3101C, __READ_WRITE, MCAN1NBTP_t);
__IOREG(MCAN1TSCC_BASE, 0xFFD31020, __READ_WRITE, MCAN1TSCC_t);
__IOREG(MCAN1TSCV_BASE, 0xFFD31024, __READ_WRITE, MCAN1TSCV_t);
__IOREG(MCAN1TOCC_BASE, 0xFFD31028, __READ_WRITE, MCAN1TOCC_t);
__IOREG(MCAN1TOCV_BASE, 0xFFD3102C, __READ_WRITE, MCAN1TOCV_t);
__IOREG(MCAN1ECR_BASE, 0xFFD31040, __READ, MCAN1ECR_t);
__IOREG(MCAN1PSR_BASE, 0xFFD31044, __READ, MCAN1PSR_t);
__IOREG(MCAN1TDCR_BASE, 0xFFD31048, __READ, MCAN1TDCR_t);
__IOREG(MCAN1IR_BASE, 0xFFD31050, __READ_WRITE, MCAN1IR_t);
__IOREG(MCAN1IE_BASE, 0xFFD31054, __READ_WRITE, MCAN1IE_t);
__IOREG(MCAN1ILS_BASE, 0xFFD31058, __READ_WRITE, MCAN1ILS_t);
__IOREG(MCAN1ILE_BASE, 0xFFD3105C, __READ_WRITE, MCAN1ILE_t);
__IOREG(MCAN1GFC_BASE, 0xFFD31080, __READ_WRITE, MCAN1GFC_t);
__IOREG(MCAN1SIDFC_BASE, 0xFFD31084, __READ_WRITE, MCAN1SIDFC_t);
__IOREG(MCAN1XIDFC_BASE, 0xFFD31088, __READ_WRITE, MCAN1XIDFC_t);
__IOREG(MCAN1XIDAM_BASE, 0xFFD31090, __READ_WRITE, MCAN1XIDAM_t);
__IOREG(MCAN1HPMS_BASE, 0xFFD31094, __READ, MCAN1HPMS_t);
__IOREG(MCAN1NDAT1_BASE, 0xFFD31098, __READ_WRITE, MCAN1NDAT1_t);
__IOREG(MCAN1NDAT2_BASE, 0xFFD3109C, __READ_WRITE, MCAN1NDAT2_t);
__IOREG(MCAN1RXF0C_BASE, 0xFFD310A0, __READ, MCAN1RXF0C_t);
__IOREG(MCAN1RXF0S_BASE, 0xFFD310A4, __READ, MCAN1RXF0S_t);
__IOREG(MCAN1RXF0A_BASE, 0xFFD310A8, __READ_WRITE, MCAN1RXF0A_t);
__IOREG(MCAN1RXBC_BASE, 0xFFD310AC, __READ_WRITE, MCAN1RXBC_t);
__IOREG(MCAN1RXF1C_BASE, 0xFFD310B0, __READ_WRITE, MCAN1RXF1C_t);
__IOREG(MCAN1RXF1S_BASE, 0xFFD310B4, __READ, MCAN1RXF1S_t);
__IOREG(MCAN1RXF1A_BASE, 0xFFD310B8, __READ_WRITE, MCAN1RXF1A_t);
__IOREG(MCAN1RXESC_BASE, 0xFFD310BC, __READ, MCAN1RXESC_t);
__IOREG(MCAN1TXBC_BASE, 0xFFD310C0, __READ_WRITE, MCAN1TXBC_t);
__IOREG(MCAN1TXFQS_BASE, 0xFFD310C4, __READ, MCAN1TXFQS_t);
__IOREG(MCAN1TXESC_BASE, 0xFFD310C8, __READ_WRITE, MCAN1TXESC_t);
__IOREG(MCAN1TXBRP_BASE, 0xFFD310CC, __READ, MCAN1TXBRP_t);
__IOREG(MCAN1TXBAR_BASE, 0xFFD310D0, __READ_WRITE, MCAN1TXBAR_t);
__IOREG(MCAN1TXBCR_BASE, 0xFFD310D4, __READ_WRITE, MCAN1TXBCR_t);
__IOREG(MCAN1TXBTO_BASE, 0xFFD310D8, __READ, MCAN1TXBTO_t);
__IOREG(MCAN1TXBCF_BASE, 0xFFD310DC, __READ, MCAN1TXBCF_t);
__IOREG(MCAN1TXBTIE_BASE, 0xFFD310E0, __READ_WRITE, MCAN1TXBTIE_t);
__IOREG(MCAN1TXBCIE_BASE, 0xFFD310E4, __READ_WRITE, MCAN1TXBCIE_t);
__IOREG(MCAN1TXEFC_BASE, 0xFFD310F0, __READ_WRITE, MCAN1TXEFC_t);
__IOREG(MCAN1TXEFS_BASE, 0xFFD310F4, __READ, MCAN1TXEFS_t);
__IOREG(MCAN1TXEFA_BASE, 0xFFD310F8, __READ_WRITE, MCAN1TXEFA_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define MCAN1CREL MCAN1CREL_BASE.UINT32
#define MCAN1CREL_DAY MCAN1CREL_BASE.BIT._DAY
#define MCAN1CREL_MON MCAN1CREL_BASE.BIT._MON
#define MCAN1CREL_YEAR MCAN1CREL_BASE.BIT._YEAR
#define MCAN1CREL_SUBSTEP MCAN1CREL_BASE.BIT._SUBSTEP
#define MCAN1CREL_STEP MCAN1CREL_BASE.BIT._STEP
#define MCAN1CREL_REL MCAN1CREL_BASE.BIT._REL
#define MCAN1ENDN MCAN1ENDN_BASE.UINT32
#define MCAN1ENDN_ETV MCAN1ENDN_BASE.BIT._ETV
#define MCAN1DBTP MCAN1DBTP_BASE.UINT32
#define MCAN1DBTP_DSJW MCAN1DBTP_BASE.BIT._DSJW
#define MCAN1DBTP_DTSEG2 MCAN1DBTP_BASE.BIT._DTSEG2
#define MCAN1DBTP_DTSEG1 MCAN1DBTP_BASE.BIT._DTSEG1
#define MCAN1DBTP_DBRP MCAN1DBTP_BASE.BIT._DBRP
#define MCAN1DBTP_TDC MCAN1DBTP_BASE.BIT._TDC
#define MCAN1TEST MCAN1TEST_BASE.UINT32
#define MCAN1TEST_LBCK MCAN1TEST_BASE.BIT._LBCK
#define MCAN1TEST_TX MCAN1TEST_BASE.BIT._TX
#define MCAN1TEST_RX MCAN1TEST_BASE.BIT._RX
#define MCAN1RWD MCAN1RWD_BASE.UINT32
#define MCAN1RWD_WDC MCAN1RWD_BASE.BIT._WDC
#define MCAN1RWD_WDV MCAN1RWD_BASE.BIT._WDV
#define MCAN1CCCR MCAN1CCCR_BASE.UINT32
#define MCAN1CCCR_INIT MCAN1CCCR_BASE.BIT._INIT
#define MCAN1CCCR_CCE MCAN1CCCR_BASE.BIT._CCE
#define MCAN1CCCR_ASM MCAN1CCCR_BASE.BIT._ASM
#define MCAN1CCCR_CSA MCAN1CCCR_BASE.BIT._CSA
#define MCAN1CCCR_CSR MCAN1CCCR_BASE.BIT._CSR
#define MCAN1CCCR_MON MCAN1CCCR_BASE.BIT._MON
#define MCAN1CCCR_DAR MCAN1CCCR_BASE.BIT._DAR
#define MCAN1CCCR_TEST MCAN1CCCR_BASE.BIT._TEST
#define MCAN1CCCR_FDOE MCAN1CCCR_BASE.BIT._FDOE
#define MCAN1CCCR_BRSE MCAN1CCCR_BASE.BIT._BRSE
#define MCAN1CCCR_PXHD MCAN1CCCR_BASE.BIT._PXHD
#define MCAN1CCCR_EFBI MCAN1CCCR_BASE.BIT._EFBI
#define MCAN1CCCR_TXP MCAN1CCCR_BASE.BIT._TXP
#define MCAN1CCCR_NISO MCAN1CCCR_BASE.BIT._NISO
#define MCAN1NBTP MCAN1NBTP_BASE.UINT32
#define MCAN1NBTP_NTSEG2 MCAN1NBTP_BASE.BIT._NTSEG2
#define MCAN1NBTP_NTSEG1 MCAN1NBTP_BASE.BIT._NTSEG1
#define MCAN1NBTP_NBRP MCAN1NBTP_BASE.BIT._NBRP
#define MCAN1NBTP_NSJW MCAN1NBTP_BASE.BIT._NSJW
#define MCAN1TSCC MCAN1TSCC_BASE.UINT32
#define MCAN1TSCC_TSS MCAN1TSCC_BASE.BIT._TSS
#define MCAN1TSCC_TCP MCAN1TSCC_BASE.BIT._TCP
#define MCAN1TSCV MCAN1TSCV_BASE.UINT32
#define MCAN1TSCV_TSC MCAN1TSCV_BASE.BIT._TSC
#define MCAN1TOCC MCAN1TOCC_BASE.UINT32
#define MCAN1TOCC_ETOC MCAN1TOCC_BASE.BIT._ETOC
#define MCAN1TOCC_TOS MCAN1TOCC_BASE.BIT._TOS
#define MCAN1TOCC_TOP MCAN1TOCC_BASE.BIT._TOP
#define MCAN1TOCV MCAN1TOCV_BASE.UINT32
#define MCAN1TOCV_TOC MCAN1TOCV_BASE.BIT._TOC
#define MCAN1ECR MCAN1ECR_BASE.UINT32
#define MCAN1ECR_TEC MCAN1ECR_BASE.BIT._TEC
#define MCAN1ECR_REC MCAN1ECR_BASE.BIT._REC
#define MCAN1ECR_RP MCAN1ECR_BASE.BIT._RP
#define MCAN1ECR_CEL MCAN1ECR_BASE.BIT._CEL
#define MCAN1PSR MCAN1PSR_BASE.UINT32
#define MCAN1PSR_LEC MCAN1PSR_BASE.BIT._LEC
#define MCAN1PSR_ACT MCAN1PSR_BASE.BIT._ACT
#define MCAN1PSR_EP MCAN1PSR_BASE.BIT._EP
#define MCAN1PSR_EW MCAN1PSR_BASE.BIT._EW
#define MCAN1PSR_BO MCAN1PSR_BASE.BIT._BO
#define MCAN1PSR_DLEC MCAN1PSR_BASE.BIT._DLEC
#define MCAN1PSR_RESI MCAN1PSR_BASE.BIT._RESI
#define MCAN1PSR_RBRS MCAN1PSR_BASE.BIT._RBRS
#define MCAN1PSR_RFDF MCAN1PSR_BASE.BIT._RFDF
#define MCAN1PSR_PXE MCAN1PSR_BASE.BIT._PXE
#define MCAN1PSR_TDCV MCAN1PSR_BASE.BIT._TDCV
#define MCAN1TDCR MCAN1TDCR_BASE.UINT32
#define MCAN1TDCR_TDCF MCAN1TDCR_BASE.BIT._TDCF
#define MCAN1TDCR_TDCO MCAN1TDCR_BASE.BIT._TDCO
#define MCAN1IR MCAN1IR_BASE.UINT32
#define MCAN1IR_RF0N MCAN1IR_BASE.BIT._RF0N
#define MCAN1IR_RF0W MCAN1IR_BASE.BIT._RF0W
#define MCAN1IR_RF0F MCAN1IR_BASE.BIT._RF0F
#define MCAN1IR_RF0L MCAN1IR_BASE.BIT._RF0L
#define MCAN1IR_RF1N MCAN1IR_BASE.BIT._RF1N
#define MCAN1IR_RF1W MCAN1IR_BASE.BIT._RF1W
#define MCAN1IR_RF1F MCAN1IR_BASE.BIT._RF1F
#define MCAN1IR_RF1L MCAN1IR_BASE.BIT._RF1L
#define MCAN1IR_HPM MCAN1IR_BASE.BIT._HPM
#define MCAN1IR_TC MCAN1IR_BASE.BIT._TC
#define MCAN1IR_TCF MCAN1IR_BASE.BIT._TCF
#define MCAN1IR_TFE MCAN1IR_BASE.BIT._TFE
#define MCAN1IR_TEFN MCAN1IR_BASE.BIT._TEFN
#define MCAN1IR_TEFW MCAN1IR_BASE.BIT._TEFW
#define MCAN1IR_TEFF MCAN1IR_BASE.BIT._TEFF
#define MCAN1IR_TEFL MCAN1IR_BASE.BIT._TEFL
#define MCAN1IR_TSW MCAN1IR_BASE.BIT._TSW
#define MCAN1IR_MRAF MCAN1IR_BASE.BIT._MRAF
#define MCAN1IR_TOO MCAN1IR_BASE.BIT._TOO
#define MCAN1IR_DRX MCAN1IR_BASE.BIT._DRX
#define MCAN1IR_BEC MCAN1IR_BASE.BIT._BEC
#define MCAN1IR_BEU MCAN1IR_BASE.BIT._BEU
#define MCAN1IR_ELO MCAN1IR_BASE.BIT._ELO
#define MCAN1IR_EP MCAN1IR_BASE.BIT._EP
#define MCAN1IR_EW MCAN1IR_BASE.BIT._EW
#define MCAN1IR_BO MCAN1IR_BASE.BIT._BO
#define MCAN1IR_WDI MCAN1IR_BASE.BIT._WDI
#define MCAN1IR_PEA MCAN1IR_BASE.BIT._PEA
#define MCAN1IR_PED MCAN1IR_BASE.BIT._PED
#define MCAN1IR_ARA MCAN1IR_BASE.BIT._ARA
#define MCAN1IE MCAN1IE_BASE.UINT32
#define MCAN1IE_RF0NE MCAN1IE_BASE.BIT._RF0NE
#define MCAN1IE_RF0WE MCAN1IE_BASE.BIT._RF0WE
#define MCAN1IE_RF0FE MCAN1IE_BASE.BIT._RF0FE
#define MCAN1IE_RF0LE MCAN1IE_BASE.BIT._RF0LE
#define MCAN1IE_RF1NE MCAN1IE_BASE.BIT._RF1NE
#define MCAN1IE_RF1WE MCAN1IE_BASE.BIT._RF1WE
#define MCAN1IE_RF1FE MCAN1IE_BASE.BIT._RF1FE
#define MCAN1IE_RF1LE MCAN1IE_BASE.BIT._RF1LE
#define MCAN1IE_HPME MCAN1IE_BASE.BIT._HPME
#define MCAN1IE_TCE MCAN1IE_BASE.BIT._TCE
#define MCAN1IE_TCFE MCAN1IE_BASE.BIT._TCFE
#define MCAN1IE_TFEE MCAN1IE_BASE.BIT._TFEE
#define MCAN1IE_TEFNE MCAN1IE_BASE.BIT._TEFNE
#define MCAN1IE_TEFWE MCAN1IE_BASE.BIT._TEFWE
#define MCAN1IE_TEFFE MCAN1IE_BASE.BIT._TEFFE
#define MCAN1IE_TEFLE MCAN1IE_BASE.BIT._TEFLE
#define MCAN1IE_TSWE MCAN1IE_BASE.BIT._TSWE
#define MCAN1IE_MRAFE MCAN1IE_BASE.BIT._MRAFE
#define MCAN1IE_TOOE MCAN1IE_BASE.BIT._TOOE
#define MCAN1IE_DRXE MCAN1IE_BASE.BIT._DRXE
#define MCAN1IE_BECE MCAN1IE_BASE.BIT._BECE
#define MCAN1IE_BEUE MCAN1IE_BASE.BIT._BEUE
#define MCAN1IE_ELOE MCAN1IE_BASE.BIT._ELOE
#define MCAN1IE_EPE MCAN1IE_BASE.BIT._EPE
#define MCAN1IE_EWE MCAN1IE_BASE.BIT._EWE
#define MCAN1IE_BOE MCAN1IE_BASE.BIT._BOE
#define MCAN1IE_WDIE MCAN1IE_BASE.BIT._WDIE
#define MCAN1IE_PEAE MCAN1IE_BASE.BIT._PEAE
#define MCAN1IE_PEDE MCAN1IE_BASE.BIT._PEDE
#define MCAN1IE_ARAE MCAN1IE_BASE.BIT._ARAE
#define MCAN1ILS MCAN1ILS_BASE.UINT32
#define MCAN1ILS_RF0NL MCAN1ILS_BASE.BIT._RF0NL
#define MCAN1ILS_RF0WL MCAN1ILS_BASE.BIT._RF0WL
#define MCAN1ILS_RF0FL MCAN1ILS_BASE.BIT._RF0FL
#define MCAN1ILS_RF0LL MCAN1ILS_BASE.BIT._RF0LL
#define MCAN1ILS_RF1NL MCAN1ILS_BASE.BIT._RF1NL
#define MCAN1ILS_RF1WL MCAN1ILS_BASE.BIT._RF1WL
#define MCAN1ILS_RF1FL MCAN1ILS_BASE.BIT._RF1FL
#define MCAN1ILS_RF1LL MCAN1ILS_BASE.BIT._RF1LL
#define MCAN1ILS_HPML MCAN1ILS_BASE.BIT._HPML
#define MCAN1ILS_TCL MCAN1ILS_BASE.BIT._TCL
#define MCAN1ILS_TCFL MCAN1ILS_BASE.BIT._TCFL
#define MCAN1ILS_TFEL MCAN1ILS_BASE.BIT._TFEL
#define MCAN1ILS_TEFNL MCAN1ILS_BASE.BIT._TEFNL
#define MCAN1ILS_TEFWL MCAN1ILS_BASE.BIT._TEFWL
#define MCAN1ILS_TEFFL MCAN1ILS_BASE.BIT._TEFFL
#define MCAN1ILS_TEFLL MCAN1ILS_BASE.BIT._TEFLL
#define MCAN1ILS_TSWL MCAN1ILS_BASE.BIT._TSWL
#define MCAN1ILS_MRAFL MCAN1ILS_BASE.BIT._MRAFL
#define MCAN1ILS_TOOL MCAN1ILS_BASE.BIT._TOOL
#define MCAN1ILS_DRXL MCAN1ILS_BASE.BIT._DRXL
#define MCAN1ILS_BECL MCAN1ILS_BASE.BIT._BECL
#define MCAN1ILS_BEUL MCAN1ILS_BASE.BIT._BEUL
#define MCAN1ILS_ELOL MCAN1ILS_BASE.BIT._ELOL
#define MCAN1ILS_EPL MCAN1ILS_BASE.BIT._EPL
#define MCAN1ILS_EWL MCAN1ILS_BASE.BIT._EWL
#define MCAN1ILS_BOL MCAN1ILS_BASE.BIT._BOL
#define MCAN1ILS_WDIL MCAN1ILS_BASE.BIT._WDIL
#define MCAN1ILS_PEAL MCAN1ILS_BASE.BIT._PEAL
#define MCAN1ILS_PEDL MCAN1ILS_BASE.BIT._PEDL
#define MCAN1ILS_ARAL MCAN1ILS_BASE.BIT._ARAL
#define MCAN1ILE MCAN1ILE_BASE.UINT32
#define MCAN1ILE_EINT0 MCAN1ILE_BASE.BIT._EINT0
#define MCAN1ILE_EINT1 MCAN1ILE_BASE.BIT._EINT1
#define MCAN1GFC MCAN1GFC_BASE.UINT32
#define MCAN1GFC_RRFE MCAN1GFC_BASE.BIT._RRFE
#define MCAN1GFC_RRFS MCAN1GFC_BASE.BIT._RRFS
#define MCAN1GFC_ANFE MCAN1GFC_BASE.BIT._ANFE
#define MCAN1GFC_ANFS MCAN1GFC_BASE.BIT._ANFS
#define MCAN1SIDFC MCAN1SIDFC_BASE.UINT32
#define MCAN1SIDFC_FLSSA MCAN1SIDFC_BASE.BIT._FLSSA
#define MCAN1SIDFC_LSS MCAN1SIDFC_BASE.BIT._LSS
#define MCAN1XIDFC MCAN1XIDFC_BASE.UINT32
#define MCAN1XIDFC_FLESA MCAN1XIDFC_BASE.BIT._FLESA
#define MCAN1XIDFC_LSE MCAN1XIDFC_BASE.BIT._LSE
#define MCAN1XIDAM MCAN1XIDAM_BASE.UINT32
#define MCAN1XIDAM_EIDM MCAN1XIDAM_BASE.BIT._EIDM
#define MCAN1HPMS MCAN1HPMS_BASE.UINT32
#define MCAN1HPMS_BIDX MCAN1HPMS_BASE.BIT._BIDX
#define MCAN1HPMS_MSI MCAN1HPMS_BASE.BIT._MSI
#define MCAN1HPMS_FIDX MCAN1HPMS_BASE.BIT._FIDX
#define MCAN1HPMS_FLST MCAN1HPMS_BASE.BIT._FLST
#define MCAN1NDAT1 MCAN1NDAT1_BASE.UINT32
#define MCAN1NDAT1_ND0 MCAN1NDAT1_BASE.BIT._ND0
#define MCAN1NDAT1_ND1 MCAN1NDAT1_BASE.BIT._ND1
#define MCAN1NDAT1_ND2 MCAN1NDAT1_BASE.BIT._ND2
#define MCAN1NDAT1_ND3 MCAN1NDAT1_BASE.BIT._ND3
#define MCAN1NDAT1_ND4 MCAN1NDAT1_BASE.BIT._ND4
#define MCAN1NDAT1_ND5 MCAN1NDAT1_BASE.BIT._ND5
#define MCAN1NDAT1_ND6 MCAN1NDAT1_BASE.BIT._ND6
#define MCAN1NDAT1_ND7 MCAN1NDAT1_BASE.BIT._ND7
#define MCAN1NDAT1_ND8 MCAN1NDAT1_BASE.BIT._ND8
#define MCAN1NDAT1_ND9 MCAN1NDAT1_BASE.BIT._ND9
#define MCAN1NDAT1_ND10 MCAN1NDAT1_BASE.BIT._ND10
#define MCAN1NDAT1_ND11 MCAN1NDAT1_BASE.BIT._ND11
#define MCAN1NDAT1_ND12 MCAN1NDAT1_BASE.BIT._ND12
#define MCAN1NDAT1_ND13 MCAN1NDAT1_BASE.BIT._ND13
#define MCAN1NDAT1_ND14 MCAN1NDAT1_BASE.BIT._ND14
#define MCAN1NDAT1_ND15 MCAN1NDAT1_BASE.BIT._ND15
#define MCAN1NDAT1_ND16 MCAN1NDAT1_BASE.BIT._ND16
#define MCAN1NDAT1_ND17 MCAN1NDAT1_BASE.BIT._ND17
#define MCAN1NDAT1_ND18 MCAN1NDAT1_BASE.BIT._ND18
#define MCAN1NDAT1_ND19 MCAN1NDAT1_BASE.BIT._ND19
#define MCAN1NDAT1_ND20 MCAN1NDAT1_BASE.BIT._ND20
#define MCAN1NDAT1_ND21 MCAN1NDAT1_BASE.BIT._ND21
#define MCAN1NDAT1_ND22 MCAN1NDAT1_BASE.BIT._ND22
#define MCAN1NDAT1_ND23 MCAN1NDAT1_BASE.BIT._ND23
#define MCAN1NDAT1_ND24 MCAN1NDAT1_BASE.BIT._ND24
#define MCAN1NDAT1_ND25 MCAN1NDAT1_BASE.BIT._ND25
#define MCAN1NDAT1_ND26 MCAN1NDAT1_BASE.BIT._ND26
#define MCAN1NDAT1_ND27 MCAN1NDAT1_BASE.BIT._ND27
#define MCAN1NDAT1_ND28 MCAN1NDAT1_BASE.BIT._ND28
#define MCAN1NDAT1_ND29 MCAN1NDAT1_BASE.BIT._ND29
#define MCAN1NDAT1_ND30 MCAN1NDAT1_BASE.BIT._ND30
#define MCAN1NDAT1_ND31 MCAN1NDAT1_BASE.BIT._ND31
#define MCAN1NDAT2 MCAN1NDAT2_BASE.UINT32
#define MCAN1NDAT2_ND32 MCAN1NDAT2_BASE.BIT._ND32
#define MCAN1NDAT2_ND33 MCAN1NDAT2_BASE.BIT._ND33
#define MCAN1NDAT2_ND34 MCAN1NDAT2_BASE.BIT._ND34
#define MCAN1NDAT2_ND35 MCAN1NDAT2_BASE.BIT._ND35
#define MCAN1NDAT2_ND36 MCAN1NDAT2_BASE.BIT._ND36
#define MCAN1NDAT2_ND37 MCAN1NDAT2_BASE.BIT._ND37
#define MCAN1NDAT2_ND38 MCAN1NDAT2_BASE.BIT._ND38
#define MCAN1NDAT2_ND39 MCAN1NDAT2_BASE.BIT._ND39
#define MCAN1NDAT2_ND40 MCAN1NDAT2_BASE.BIT._ND40
#define MCAN1NDAT2_ND41 MCAN1NDAT2_BASE.BIT._ND41
#define MCAN1NDAT2_ND42 MCAN1NDAT2_BASE.BIT._ND42
#define MCAN1NDAT2_ND43 MCAN1NDAT2_BASE.BIT._ND43
#define MCAN1NDAT2_ND44 MCAN1NDAT2_BASE.BIT._ND44
#define MCAN1NDAT2_ND45 MCAN1NDAT2_BASE.BIT._ND45
#define MCAN1NDAT2_ND46 MCAN1NDAT2_BASE.BIT._ND46
#define MCAN1NDAT2_ND47 MCAN1NDAT2_BASE.BIT._ND47
#define MCAN1NDAT2_ND48 MCAN1NDAT2_BASE.BIT._ND48
#define MCAN1NDAT2_ND49 MCAN1NDAT2_BASE.BIT._ND49
#define MCAN1NDAT2_ND50 MCAN1NDAT2_BASE.BIT._ND50
#define MCAN1NDAT2_ND51 MCAN1NDAT2_BASE.BIT._ND51
#define MCAN1NDAT2_ND52 MCAN1NDAT2_BASE.BIT._ND52
#define MCAN1NDAT2_ND53 MCAN1NDAT2_BASE.BIT._ND53
#define MCAN1NDAT2_ND54 MCAN1NDAT2_BASE.BIT._ND54
#define MCAN1NDAT2_ND55 MCAN1NDAT2_BASE.BIT._ND55
#define MCAN1NDAT2_ND56 MCAN1NDAT2_BASE.BIT._ND56
#define MCAN1NDAT2_ND57 MCAN1NDAT2_BASE.BIT._ND57
#define MCAN1NDAT2_ND58 MCAN1NDAT2_BASE.BIT._ND58
#define MCAN1NDAT2_ND59 MCAN1NDAT2_BASE.BIT._ND59
#define MCAN1NDAT2_ND60 MCAN1NDAT2_BASE.BIT._ND60
#define MCAN1NDAT2_ND61 MCAN1NDAT2_BASE.BIT._ND61
#define MCAN1NDAT2_ND62 MCAN1NDAT2_BASE.BIT._ND62
#define MCAN1NDAT2_ND63 MCAN1NDAT2_BASE.BIT._ND63
#define MCAN1RXF0C MCAN1RXF0C_BASE.UINT32
#define MCAN1RXF0C_F0SA MCAN1RXF0C_BASE.BIT._F0SA
#define MCAN1RXF0C_F0S MCAN1RXF0C_BASE.BIT._F0S
#define MCAN1RXF0C_F0WM MCAN1RXF0C_BASE.BIT._F0WM
#define MCAN1RXF0C_F0OM MCAN1RXF0C_BASE.BIT._F0OM
#define MCAN1RXF0S MCAN1RXF0S_BASE.UINT32
#define MCAN1RXF0S_F0FL MCAN1RXF0S_BASE.BIT._F0FL
#define MCAN1RXF0S_F0GI MCAN1RXF0S_BASE.BIT._F0GI
#define MCAN1RXF0S_F0PI MCAN1RXF0S_BASE.BIT._F0PI
#define MCAN1RXF0S_F0F MCAN1RXF0S_BASE.BIT._F0F
#define MCAN1RXF0S_RF0L MCAN1RXF0S_BASE.BIT._RF0L
#define MCAN1RXF0A MCAN1RXF0A_BASE.UINT32
#define MCAN1RXF0A_F0AI MCAN1RXF0A_BASE.BIT._F0AI
#define MCAN1RXBC MCAN1RXBC_BASE.UINT32
#define MCAN1RXBC_RBSA MCAN1RXBC_BASE.BIT._RBSA
#define MCAN1RXF1C MCAN1RXF1C_BASE.UINT32
#define MCAN1RXF1C_F1SA MCAN1RXF1C_BASE.BIT._F1SA
#define MCAN1RXF1C_F1S MCAN1RXF1C_BASE.BIT._F1S
#define MCAN1RXF1C_F1WM MCAN1RXF1C_BASE.BIT._F1WM
#define MCAN1RXF1C_F1OM MCAN1RXF1C_BASE.BIT._F1OM
#define MCAN1RXF1S MCAN1RXF1S_BASE.UINT32
#define MCAN1RXF1S_F1FL MCAN1RXF1S_BASE.BIT._F1FL
#define MCAN1RXF1S_F1GI MCAN1RXF1S_BASE.BIT._F1GI
#define MCAN1RXF1S_F1PI MCAN1RXF1S_BASE.BIT._F1PI
#define MCAN1RXF1S_F1F MCAN1RXF1S_BASE.BIT._F1F
#define MCAN1RXF1S_RF1L MCAN1RXF1S_BASE.BIT._RF1L
#define MCAN1RXF1S_DMS MCAN1RXF1S_BASE.BIT._DMS
#define MCAN1RXF1A MCAN1RXF1A_BASE.UINT32
#define MCAN1RXF1A_F1AI MCAN1RXF1A_BASE.BIT._F1AI
#define MCAN1RXESC MCAN1RXESC_BASE.UINT32
#define MCAN1RXESC_F0DS MCAN1RXESC_BASE.BIT._F0DS
#define MCAN1RXESC_F1DS MCAN1RXESC_BASE.BIT._F1DS
#define MCAN1RXESC_RBDS MCAN1RXESC_BASE.BIT._RBDS
#define MCAN1TXBC MCAN1TXBC_BASE.UINT32
#define MCAN1TXBC_TBSA MCAN1TXBC_BASE.BIT._TBSA
#define MCAN1TXBC_NDTB MCAN1TXBC_BASE.BIT._NDTB
#define MCAN1TXBC_TFQS MCAN1TXBC_BASE.BIT._TFQS
#define MCAN1TXBC_TFQM MCAN1TXBC_BASE.BIT._TFQM
#define MCAN1TXFQS MCAN1TXFQS_BASE.UINT32
#define MCAN1TXFQS_TFFL MCAN1TXFQS_BASE.BIT._TFFL
#define MCAN1TXFQS_TFGI MCAN1TXFQS_BASE.BIT._TFGI
#define MCAN1TXFQS_TFQPI MCAN1TXFQS_BASE.BIT._TFQPI
#define MCAN1TXFQS_TFQF MCAN1TXFQS_BASE.BIT._TFQF
#define MCAN1TXESC MCAN1TXESC_BASE.UINT32
#define MCAN1TXESC_TBDS MCAN1TXESC_BASE.BIT._TBDS
#define MCAN1TXBRP MCAN1TXBRP_BASE.UINT32
#define MCAN1TXBRP_TRP0 MCAN1TXBRP_BASE.BIT._TRP0
#define MCAN1TXBRP_TRP1 MCAN1TXBRP_BASE.BIT._TRP1
#define MCAN1TXBRP_TRP2 MCAN1TXBRP_BASE.BIT._TRP2
#define MCAN1TXBRP_TRP3 MCAN1TXBRP_BASE.BIT._TRP3
#define MCAN1TXBRP_TRP4 MCAN1TXBRP_BASE.BIT._TRP4
#define MCAN1TXBRP_TRP5 MCAN1TXBRP_BASE.BIT._TRP5
#define MCAN1TXBRP_TRP6 MCAN1TXBRP_BASE.BIT._TRP6
#define MCAN1TXBRP_TRP7 MCAN1TXBRP_BASE.BIT._TRP7
#define MCAN1TXBRP_TRP8 MCAN1TXBRP_BASE.BIT._TRP8
#define MCAN1TXBRP_TRP9 MCAN1TXBRP_BASE.BIT._TRP9
#define MCAN1TXBRP_TRP10 MCAN1TXBRP_BASE.BIT._TRP10
#define MCAN1TXBRP_TRP11 MCAN1TXBRP_BASE.BIT._TRP11
#define MCAN1TXBRP_TRP12 MCAN1TXBRP_BASE.BIT._TRP12
#define MCAN1TXBRP_TRP13 MCAN1TXBRP_BASE.BIT._TRP13
#define MCAN1TXBRP_TRP14 MCAN1TXBRP_BASE.BIT._TRP14
#define MCAN1TXBRP_TRP15 MCAN1TXBRP_BASE.BIT._TRP15
#define MCAN1TXBRP_TRP16 MCAN1TXBRP_BASE.BIT._TRP16
#define MCAN1TXBRP_TRP17 MCAN1TXBRP_BASE.BIT._TRP17
#define MCAN1TXBRP_TRP18 MCAN1TXBRP_BASE.BIT._TRP18
#define MCAN1TXBRP_TRP19 MCAN1TXBRP_BASE.BIT._TRP19
#define MCAN1TXBRP_TRP20 MCAN1TXBRP_BASE.BIT._TRP20
#define MCAN1TXBRP_TRP21 MCAN1TXBRP_BASE.BIT._TRP21
#define MCAN1TXBRP_TRP22 MCAN1TXBRP_BASE.BIT._TRP22
#define MCAN1TXBRP_TRP23 MCAN1TXBRP_BASE.BIT._TRP23
#define MCAN1TXBRP_TRP24 MCAN1TXBRP_BASE.BIT._TRP24
#define MCAN1TXBRP_TRP25 MCAN1TXBRP_BASE.BIT._TRP25
#define MCAN1TXBRP_TRP26 MCAN1TXBRP_BASE.BIT._TRP26
#define MCAN1TXBRP_TRP27 MCAN1TXBRP_BASE.BIT._TRP27
#define MCAN1TXBRP_TRP28 MCAN1TXBRP_BASE.BIT._TRP28
#define MCAN1TXBRP_TRP29 MCAN1TXBRP_BASE.BIT._TRP29
#define MCAN1TXBRP_TRP30 MCAN1TXBRP_BASE.BIT._TRP30
#define MCAN1TXBRP_TRP31 MCAN1TXBRP_BASE.BIT._TRP31
#define MCAN1TXBAR MCAN1TXBAR_BASE.UINT32
#define MCAN1TXBAR_AR0 MCAN1TXBAR_BASE.BIT._AR0
#define MCAN1TXBAR_AR1 MCAN1TXBAR_BASE.BIT._AR1
#define MCAN1TXBAR_AR2 MCAN1TXBAR_BASE.BIT._AR2
#define MCAN1TXBAR_AR3 MCAN1TXBAR_BASE.BIT._AR3
#define MCAN1TXBAR_AR4 MCAN1TXBAR_BASE.BIT._AR4
#define MCAN1TXBAR_AR5 MCAN1TXBAR_BASE.BIT._AR5
#define MCAN1TXBAR_AR6 MCAN1TXBAR_BASE.BIT._AR6
#define MCAN1TXBAR_AR7 MCAN1TXBAR_BASE.BIT._AR7
#define MCAN1TXBAR_AR8 MCAN1TXBAR_BASE.BIT._AR8
#define MCAN1TXBAR_AR9 MCAN1TXBAR_BASE.BIT._AR9
#define MCAN1TXBAR_AR10 MCAN1TXBAR_BASE.BIT._AR10
#define MCAN1TXBAR_AR11 MCAN1TXBAR_BASE.BIT._AR11
#define MCAN1TXBAR_AR12 MCAN1TXBAR_BASE.BIT._AR12
#define MCAN1TXBAR_AR13 MCAN1TXBAR_BASE.BIT._AR13
#define MCAN1TXBAR_AR14 MCAN1TXBAR_BASE.BIT._AR14
#define MCAN1TXBAR_AR15 MCAN1TXBAR_BASE.BIT._AR15
#define MCAN1TXBAR_AR16 MCAN1TXBAR_BASE.BIT._AR16
#define MCAN1TXBAR_AR17 MCAN1TXBAR_BASE.BIT._AR17
#define MCAN1TXBAR_AR18 MCAN1TXBAR_BASE.BIT._AR18
#define MCAN1TXBAR_AR19 MCAN1TXBAR_BASE.BIT._AR19
#define MCAN1TXBAR_AR20 MCAN1TXBAR_BASE.BIT._AR20
#define MCAN1TXBAR_AR21 MCAN1TXBAR_BASE.BIT._AR21
#define MCAN1TXBAR_AR22 MCAN1TXBAR_BASE.BIT._AR22
#define MCAN1TXBAR_AR23 MCAN1TXBAR_BASE.BIT._AR23
#define MCAN1TXBAR_AR24 MCAN1TXBAR_BASE.BIT._AR24
#define MCAN1TXBAR_AR25 MCAN1TXBAR_BASE.BIT._AR25
#define MCAN1TXBAR_AR26 MCAN1TXBAR_BASE.BIT._AR26
#define MCAN1TXBAR_AR27 MCAN1TXBAR_BASE.BIT._AR27
#define MCAN1TXBAR_AR28 MCAN1TXBAR_BASE.BIT._AR28
#define MCAN1TXBAR_AR29 MCAN1TXBAR_BASE.BIT._AR29
#define MCAN1TXBAR_AR30 MCAN1TXBAR_BASE.BIT._AR30
#define MCAN1TXBAR_AR31 MCAN1TXBAR_BASE.BIT._AR31
#define MCAN1TXBCR MCAN1TXBCR_BASE.UINT32
#define MCAN1TXBCR_CR0 MCAN1TXBCR_BASE.BIT._CR0
#define MCAN1TXBCR_CR1 MCAN1TXBCR_BASE.BIT._CR1
#define MCAN1TXBCR_CR2 MCAN1TXBCR_BASE.BIT._CR2
#define MCAN1TXBCR_CR3 MCAN1TXBCR_BASE.BIT._CR3
#define MCAN1TXBCR_CR4 MCAN1TXBCR_BASE.BIT._CR4
#define MCAN1TXBCR_CR5 MCAN1TXBCR_BASE.BIT._CR5
#define MCAN1TXBCR_CR6 MCAN1TXBCR_BASE.BIT._CR6
#define MCAN1TXBCR_CR7 MCAN1TXBCR_BASE.BIT._CR7
#define MCAN1TXBCR_CR8 MCAN1TXBCR_BASE.BIT._CR8
#define MCAN1TXBCR_CR9 MCAN1TXBCR_BASE.BIT._CR9
#define MCAN1TXBCR_CR10 MCAN1TXBCR_BASE.BIT._CR10
#define MCAN1TXBCR_CR11 MCAN1TXBCR_BASE.BIT._CR11
#define MCAN1TXBCR_CR12 MCAN1TXBCR_BASE.BIT._CR12
#define MCAN1TXBCR_CR13 MCAN1TXBCR_BASE.BIT._CR13
#define MCAN1TXBCR_CR14 MCAN1TXBCR_BASE.BIT._CR14
#define MCAN1TXBCR_CR15 MCAN1TXBCR_BASE.BIT._CR15
#define MCAN1TXBCR_CR16 MCAN1TXBCR_BASE.BIT._CR16
#define MCAN1TXBCR_CR17 MCAN1TXBCR_BASE.BIT._CR17
#define MCAN1TXBCR_CR18 MCAN1TXBCR_BASE.BIT._CR18
#define MCAN1TXBCR_CR19 MCAN1TXBCR_BASE.BIT._CR19
#define MCAN1TXBCR_CR20 MCAN1TXBCR_BASE.BIT._CR20
#define MCAN1TXBCR_CR21 MCAN1TXBCR_BASE.BIT._CR21
#define MCAN1TXBCR_CR22 MCAN1TXBCR_BASE.BIT._CR22
#define MCAN1TXBCR_CR23 MCAN1TXBCR_BASE.BIT._CR23
#define MCAN1TXBCR_CR24 MCAN1TXBCR_BASE.BIT._CR24
#define MCAN1TXBCR_CR25 MCAN1TXBCR_BASE.BIT._CR25
#define MCAN1TXBCR_CR26 MCAN1TXBCR_BASE.BIT._CR26
#define MCAN1TXBCR_CR27 MCAN1TXBCR_BASE.BIT._CR27
#define MCAN1TXBCR_CR28 MCAN1TXBCR_BASE.BIT._CR28
#define MCAN1TXBCR_CR29 MCAN1TXBCR_BASE.BIT._CR29
#define MCAN1TXBCR_CR30 MCAN1TXBCR_BASE.BIT._CR30
#define MCAN1TXBCR_CR31 MCAN1TXBCR_BASE.BIT._CR31
#define MCAN1TXBTO MCAN1TXBTO_BASE.UINT32
#define MCAN1TXBTO_TO0 MCAN1TXBTO_BASE.BIT._TO0
#define MCAN1TXBTO_TO1 MCAN1TXBTO_BASE.BIT._TO1
#define MCAN1TXBTO_TO2 MCAN1TXBTO_BASE.BIT._TO2
#define MCAN1TXBTO_TO3 MCAN1TXBTO_BASE.BIT._TO3
#define MCAN1TXBTO_TO4 MCAN1TXBTO_BASE.BIT._TO4
#define MCAN1TXBTO_TO5 MCAN1TXBTO_BASE.BIT._TO5
#define MCAN1TXBTO_TO6 MCAN1TXBTO_BASE.BIT._TO6
#define MCAN1TXBTO_TO7 MCAN1TXBTO_BASE.BIT._TO7
#define MCAN1TXBTO_TO8 MCAN1TXBTO_BASE.BIT._TO8
#define MCAN1TXBTO_TO9 MCAN1TXBTO_BASE.BIT._TO9
#define MCAN1TXBTO_TO10 MCAN1TXBTO_BASE.BIT._TO10
#define MCAN1TXBTO_TO11 MCAN1TXBTO_BASE.BIT._TO11
#define MCAN1TXBTO_TO12 MCAN1TXBTO_BASE.BIT._TO12
#define MCAN1TXBTO_TO13 MCAN1TXBTO_BASE.BIT._TO13
#define MCAN1TXBTO_TO14 MCAN1TXBTO_BASE.BIT._TO14
#define MCAN1TXBTO_TO15 MCAN1TXBTO_BASE.BIT._TO15
#define MCAN1TXBTO_TO16 MCAN1TXBTO_BASE.BIT._TO16
#define MCAN1TXBTO_TO17 MCAN1TXBTO_BASE.BIT._TO17
#define MCAN1TXBTO_TO18 MCAN1TXBTO_BASE.BIT._TO18
#define MCAN1TXBTO_TO19 MCAN1TXBTO_BASE.BIT._TO19
#define MCAN1TXBTO_TO20 MCAN1TXBTO_BASE.BIT._TO20
#define MCAN1TXBTO_TO21 MCAN1TXBTO_BASE.BIT._TO21
#define MCAN1TXBTO_TO22 MCAN1TXBTO_BASE.BIT._TO22
#define MCAN1TXBTO_TO23 MCAN1TXBTO_BASE.BIT._TO23
#define MCAN1TXBTO_TO24 MCAN1TXBTO_BASE.BIT._TO24
#define MCAN1TXBTO_TO25 MCAN1TXBTO_BASE.BIT._TO25
#define MCAN1TXBTO_TO26 MCAN1TXBTO_BASE.BIT._TO26
#define MCAN1TXBTO_TO27 MCAN1TXBTO_BASE.BIT._TO27
#define MCAN1TXBTO_TO28 MCAN1TXBTO_BASE.BIT._TO28
#define MCAN1TXBTO_TO29 MCAN1TXBTO_BASE.BIT._TO29
#define MCAN1TXBTO_TO30 MCAN1TXBTO_BASE.BIT._TO30
#define MCAN1TXBTO_TO31 MCAN1TXBTO_BASE.BIT._TO31
#define MCAN1TXBCF MCAN1TXBCF_BASE.UINT32
#define MCAN1TXBCF_CF0 MCAN1TXBCF_BASE.BIT._CF0
#define MCAN1TXBCF_CF1 MCAN1TXBCF_BASE.BIT._CF1
#define MCAN1TXBCF_CF2 MCAN1TXBCF_BASE.BIT._CF2
#define MCAN1TXBCF_CF3 MCAN1TXBCF_BASE.BIT._CF3
#define MCAN1TXBCF_CF4 MCAN1TXBCF_BASE.BIT._CF4
#define MCAN1TXBCF_CF5 MCAN1TXBCF_BASE.BIT._CF5
#define MCAN1TXBCF_CF6 MCAN1TXBCF_BASE.BIT._CF6
#define MCAN1TXBCF_CF7 MCAN1TXBCF_BASE.BIT._CF7
#define MCAN1TXBCF_CF8 MCAN1TXBCF_BASE.BIT._CF8
#define MCAN1TXBCF_CF9 MCAN1TXBCF_BASE.BIT._CF9
#define MCAN1TXBCF_CF10 MCAN1TXBCF_BASE.BIT._CF10
#define MCAN1TXBCF_CF11 MCAN1TXBCF_BASE.BIT._CF11
#define MCAN1TXBCF_CF12 MCAN1TXBCF_BASE.BIT._CF12
#define MCAN1TXBCF_CF13 MCAN1TXBCF_BASE.BIT._CF13
#define MCAN1TXBCF_CF14 MCAN1TXBCF_BASE.BIT._CF14
#define MCAN1TXBCF_CF15 MCAN1TXBCF_BASE.BIT._CF15
#define MCAN1TXBCF_CF16 MCAN1TXBCF_BASE.BIT._CF16
#define MCAN1TXBCF_CF17 MCAN1TXBCF_BASE.BIT._CF17
#define MCAN1TXBCF_CF18 MCAN1TXBCF_BASE.BIT._CF18
#define MCAN1TXBCF_CF19 MCAN1TXBCF_BASE.BIT._CF19
#define MCAN1TXBCF_CF20 MCAN1TXBCF_BASE.BIT._CF20
#define MCAN1TXBCF_CF21 MCAN1TXBCF_BASE.BIT._CF21
#define MCAN1TXBCF_CF22 MCAN1TXBCF_BASE.BIT._CF22
#define MCAN1TXBCF_CF23 MCAN1TXBCF_BASE.BIT._CF23
#define MCAN1TXBCF_CF24 MCAN1TXBCF_BASE.BIT._CF24
#define MCAN1TXBCF_CF25 MCAN1TXBCF_BASE.BIT._CF25
#define MCAN1TXBCF_CF26 MCAN1TXBCF_BASE.BIT._CF26
#define MCAN1TXBCF_CF27 MCAN1TXBCF_BASE.BIT._CF27
#define MCAN1TXBCF_CF28 MCAN1TXBCF_BASE.BIT._CF28
#define MCAN1TXBCF_CF29 MCAN1TXBCF_BASE.BIT._CF29
#define MCAN1TXBCF_CF30 MCAN1TXBCF_BASE.BIT._CF30
#define MCAN1TXBCF_CF31 MCAN1TXBCF_BASE.BIT._CF31
#define MCAN1TXBTIE MCAN1TXBTIE_BASE.UINT32
#define MCAN1TXBTIE_TIE0 MCAN1TXBTIE_BASE.BIT._TIE0
#define MCAN1TXBTIE_TIE1 MCAN1TXBTIE_BASE.BIT._TIE1
#define MCAN1TXBTIE_TIE2 MCAN1TXBTIE_BASE.BIT._TIE2
#define MCAN1TXBTIE_TIE3 MCAN1TXBTIE_BASE.BIT._TIE3
#define MCAN1TXBTIE_TIE4 MCAN1TXBTIE_BASE.BIT._TIE4
#define MCAN1TXBTIE_TIE5 MCAN1TXBTIE_BASE.BIT._TIE5
#define MCAN1TXBTIE_TIE6 MCAN1TXBTIE_BASE.BIT._TIE6
#define MCAN1TXBTIE_TIE7 MCAN1TXBTIE_BASE.BIT._TIE7
#define MCAN1TXBTIE_TIE8 MCAN1TXBTIE_BASE.BIT._TIE8
#define MCAN1TXBTIE_TIE9 MCAN1TXBTIE_BASE.BIT._TIE9
#define MCAN1TXBTIE_TIE10 MCAN1TXBTIE_BASE.BIT._TIE10
#define MCAN1TXBTIE_TIE11 MCAN1TXBTIE_BASE.BIT._TIE11
#define MCAN1TXBTIE_TIE12 MCAN1TXBTIE_BASE.BIT._TIE12
#define MCAN1TXBTIE_TIE13 MCAN1TXBTIE_BASE.BIT._TIE13
#define MCAN1TXBTIE_TIE14 MCAN1TXBTIE_BASE.BIT._TIE14
#define MCAN1TXBTIE_TIE15 MCAN1TXBTIE_BASE.BIT._TIE15
#define MCAN1TXBTIE_TIE16 MCAN1TXBTIE_BASE.BIT._TIE16
#define MCAN1TXBTIE_TIE17 MCAN1TXBTIE_BASE.BIT._TIE17
#define MCAN1TXBTIE_TIE18 MCAN1TXBTIE_BASE.BIT._TIE18
#define MCAN1TXBTIE_TIE19 MCAN1TXBTIE_BASE.BIT._TIE19
#define MCAN1TXBTIE_TIE20 MCAN1TXBTIE_BASE.BIT._TIE20
#define MCAN1TXBTIE_TIE21 MCAN1TXBTIE_BASE.BIT._TIE21
#define MCAN1TXBTIE_TIE22 MCAN1TXBTIE_BASE.BIT._TIE22
#define MCAN1TXBTIE_TIE23 MCAN1TXBTIE_BASE.BIT._TIE23
#define MCAN1TXBTIE_TIE24 MCAN1TXBTIE_BASE.BIT._TIE24
#define MCAN1TXBTIE_TIE25 MCAN1TXBTIE_BASE.BIT._TIE25
#define MCAN1TXBTIE_TIE26 MCAN1TXBTIE_BASE.BIT._TIE26
#define MCAN1TXBTIE_TIE27 MCAN1TXBTIE_BASE.BIT._TIE27
#define MCAN1TXBTIE_TIE28 MCAN1TXBTIE_BASE.BIT._TIE28
#define MCAN1TXBTIE_TIE29 MCAN1TXBTIE_BASE.BIT._TIE29
#define MCAN1TXBTIE_TIE30 MCAN1TXBTIE_BASE.BIT._TIE30
#define MCAN1TXBTIE_TIE31 MCAN1TXBTIE_BASE.BIT._TIE31
#define MCAN1TXBCIE MCAN1TXBCIE_BASE.UINT32
#define MCAN1TXBCIE_CFIE0 MCAN1TXBCIE_BASE.BIT._CFIE0
#define MCAN1TXBCIE_CFIE1 MCAN1TXBCIE_BASE.BIT._CFIE1
#define MCAN1TXBCIE_CFIE2 MCAN1TXBCIE_BASE.BIT._CFIE2
#define MCAN1TXBCIE_CFIE3 MCAN1TXBCIE_BASE.BIT._CFIE3
#define MCAN1TXBCIE_CFIE4 MCAN1TXBCIE_BASE.BIT._CFIE4
#define MCAN1TXBCIE_CFIE5 MCAN1TXBCIE_BASE.BIT._CFIE5
#define MCAN1TXBCIE_CFIE6 MCAN1TXBCIE_BASE.BIT._CFIE6
#define MCAN1TXBCIE_CFIE7 MCAN1TXBCIE_BASE.BIT._CFIE7
#define MCAN1TXBCIE_CFIE8 MCAN1TXBCIE_BASE.BIT._CFIE8
#define MCAN1TXBCIE_CFIE9 MCAN1TXBCIE_BASE.BIT._CFIE9
#define MCAN1TXBCIE_CFIE10 MCAN1TXBCIE_BASE.BIT._CFIE10
#define MCAN1TXBCIE_CFIE11 MCAN1TXBCIE_BASE.BIT._CFIE11
#define MCAN1TXBCIE_CFIE12 MCAN1TXBCIE_BASE.BIT._CFIE12
#define MCAN1TXBCIE_CFIE13 MCAN1TXBCIE_BASE.BIT._CFIE13
#define MCAN1TXBCIE_CFIE14 MCAN1TXBCIE_BASE.BIT._CFIE14
#define MCAN1TXBCIE_CFIE15 MCAN1TXBCIE_BASE.BIT._CFIE15
#define MCAN1TXBCIE_CFIE16 MCAN1TXBCIE_BASE.BIT._CFIE16
#define MCAN1TXBCIE_CFIE17 MCAN1TXBCIE_BASE.BIT._CFIE17
#define MCAN1TXBCIE_CFIE18 MCAN1TXBCIE_BASE.BIT._CFIE18
#define MCAN1TXBCIE_CFIE19 MCAN1TXBCIE_BASE.BIT._CFIE19
#define MCAN1TXBCIE_CFIE20 MCAN1TXBCIE_BASE.BIT._CFIE20
#define MCAN1TXBCIE_CFIE21 MCAN1TXBCIE_BASE.BIT._CFIE21
#define MCAN1TXBCIE_CFIE22 MCAN1TXBCIE_BASE.BIT._CFIE22
#define MCAN1TXBCIE_CFIE23 MCAN1TXBCIE_BASE.BIT._CFIE23
#define MCAN1TXBCIE_CFIE24 MCAN1TXBCIE_BASE.BIT._CFIE24
#define MCAN1TXBCIE_CFIE25 MCAN1TXBCIE_BASE.BIT._CFIE25
#define MCAN1TXBCIE_CFIE26 MCAN1TXBCIE_BASE.BIT._CFIE26
#define MCAN1TXBCIE_CFIE27 MCAN1TXBCIE_BASE.BIT._CFIE27
#define MCAN1TXBCIE_CFIE28 MCAN1TXBCIE_BASE.BIT._CFIE28
#define MCAN1TXBCIE_CFIE29 MCAN1TXBCIE_BASE.BIT._CFIE29
#define MCAN1TXBCIE_CFIE30 MCAN1TXBCIE_BASE.BIT._CFIE30
#define MCAN1TXBCIE_CFIE31 MCAN1TXBCIE_BASE.BIT._CFIE31
#define MCAN1TXEFC MCAN1TXEFC_BASE.UINT32
#define MCAN1TXEFC_EFSA MCAN1TXEFC_BASE.BIT._EFSA
#define MCAN1TXEFC_EFS MCAN1TXEFC_BASE.BIT._EFS
#define MCAN1TXEFC_EFWM MCAN1TXEFC_BASE.BIT._EFWM
#define MCAN1TXEFS MCAN1TXEFS_BASE.UINT32
#define MCAN1TXEFS_EFFL MCAN1TXEFS_BASE.BIT._EFFL
#define MCAN1TXEFS_EFGI MCAN1TXEFS_BASE.BIT._EFGI
#define MCAN1TXEFS_EFPI MCAN1TXEFS_BASE.BIT._EFPI
#define MCAN1TXEFS_EFF MCAN1TXEFS_BASE.BIT._EFF
#define MCAN1TXEFS_TEFL MCAN1TXEFS_BASE.BIT._TEFL
#define MCAN1TXEFA MCAN1TXEFA_BASE.UINT32
#define MCAN1TXEFA_EFAI MCAN1TXEFA_BASE.BIT._EFAI

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif