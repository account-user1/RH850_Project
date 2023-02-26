#ifndef __DR7F701373_MCAN0_HEADER__
#define __DR7F701373_MCAN0_HEADER__



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
} MCAN0CRELBits_t;

typedef struct
{
    const uint32 _ETV : 32;
} MCAN0ENDNBits_t;

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
} MCAN0DBTPBits_t;

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
} MCAN0TESTBits_t;

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
} MCAN0RWDBits_t;

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
} MCAN0CCCRBits_t;

typedef struct
{
    uint32 _NTSEG2 : 7;
    uint32 padding7 : 1;
    uint32 _NTSEG1 : 8;
    uint32 _NBRP : 9;
    uint32 _NSJW : 7;
} MCAN0NBTPBits_t;

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
} MCAN0TSCCBits_t;

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
} MCAN0TSCVBits_t;

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
} MCAN0TOCCBits_t;

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
} MCAN0TOCVBits_t;

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
} MCAN0ECRBits_t;

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
} MCAN0PSRBits_t;

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
} MCAN0TDCRBits_t;

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
} MCAN0IRBits_t;

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
} MCAN0IEBits_t;

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
} MCAN0ILSBits_t;

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
} MCAN0ILEBits_t;

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
} MCAN0GFCBits_t;

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
} MCAN0SIDFCBits_t;

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
} MCAN0XIDFCBits_t;

typedef struct
{
    uint32 _EIDM : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MCAN0XIDAMBits_t;

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
} MCAN0HPMSBits_t;

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
} MCAN0NDAT1Bits_t;

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
} MCAN0NDAT2Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    const uint32 _F0SA : 14;
    const uint32 _F0S : 7;
    uint32 padding23 : 1;
    const uint32 _F0WM : 7;
    const uint32 _F0OM : 1;
} MCAN0RXF0CBits_t;

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
} MCAN0RXF0SBits_t;

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
} MCAN0RXF0ABits_t;

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
} MCAN0RXBCBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _F1SA : 14;
    uint32 _F1S : 7;
    uint32 padding23 : 1;
    uint32 _F1WM : 7;
    uint32 _F1OM : 1;
} MCAN0RXF1CBits_t;

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
} MCAN0RXF1SBits_t;

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
} MCAN0RXF1ABits_t;

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
} MCAN0RXESCBits_t;

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
} MCAN0TXBCBits_t;

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
} MCAN0TXFQSBits_t;

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
} MCAN0TXESCBits_t;

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
} MCAN0TXBRPBits_t;

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
} MCAN0TXBARBits_t;

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
} MCAN0TXBCRBits_t;

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
} MCAN0TXBTOBits_t;

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
} MCAN0TXBCFBits_t;

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
} MCAN0TXBTIEBits_t;

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
} MCAN0TXBCIEBits_t;

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
} MCAN0TXEFCBits_t;

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
} MCAN0TXEFSBits_t;

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
} MCAN0TXEFABits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const MCAN0CRELBits_t BIT;
} MCAN0CREL_t;

typedef union
{
    uint32 UINT32;
    const MCAN0ENDNBits_t BIT;
} MCAN0ENDN_t;

typedef union
{
    uint32 UINT32;
    const MCAN0DBTPBits_t BIT;
} MCAN0DBTP_t;

typedef union
{
    uint32 UINT32;
    const MCAN0TESTBits_t BIT;
} MCAN0TEST_t;

typedef union
{
    uint32 UINT32;
    MCAN0RWDBits_t BIT;
} MCAN0RWD_t;

typedef union
{
    uint32 UINT32;
    MCAN0CCCRBits_t BIT;
} MCAN0CCCR_t;

typedef union
{
    uint32 UINT32;
    MCAN0NBTPBits_t BIT;
} MCAN0NBTP_t;

typedef union
{
    uint32 UINT32;
    MCAN0TSCCBits_t BIT;
} MCAN0TSCC_t;

typedef union
{
    uint32 UINT32;
    MCAN0TSCVBits_t BIT;
} MCAN0TSCV_t;

typedef union
{
    uint32 UINT32;
    MCAN0TOCCBits_t BIT;
} MCAN0TOCC_t;

typedef union
{
    uint32 UINT32;
    MCAN0TOCVBits_t BIT;
} MCAN0TOCV_t;

typedef union
{
    uint32 UINT32;
    const MCAN0ECRBits_t BIT;
} MCAN0ECR_t;

typedef union
{
    uint32 UINT32;
    const MCAN0PSRBits_t BIT;
} MCAN0PSR_t;

typedef union
{
    uint32 UINT32;
    const MCAN0TDCRBits_t BIT;
} MCAN0TDCR_t;

typedef union
{
    uint32 UINT32;
    MCAN0IRBits_t BIT;
} MCAN0IR_t;

typedef union
{
    uint32 UINT32;
    MCAN0IEBits_t BIT;
} MCAN0IE_t;

typedef union
{
    uint32 UINT32;
    MCAN0ILSBits_t BIT;
} MCAN0ILS_t;

typedef union
{
    uint32 UINT32;
    MCAN0ILEBits_t BIT;
} MCAN0ILE_t;

typedef union
{
    uint32 UINT32;
    MCAN0GFCBits_t BIT;
} MCAN0GFC_t;

typedef union
{
    uint32 UINT32;
    MCAN0SIDFCBits_t BIT;
} MCAN0SIDFC_t;

typedef union
{
    uint32 UINT32;
    MCAN0XIDFCBits_t BIT;
} MCAN0XIDFC_t;

typedef union
{
    uint32 UINT32;
    MCAN0XIDAMBits_t BIT;
} MCAN0XIDAM_t;

typedef union
{
    uint32 UINT32;
    const MCAN0HPMSBits_t BIT;
} MCAN0HPMS_t;

typedef union
{
    uint32 UINT32;
    MCAN0NDAT1Bits_t BIT;
} MCAN0NDAT1_t;

typedef union
{
    uint32 UINT32;
    MCAN0NDAT2Bits_t BIT;
} MCAN0NDAT2_t;

typedef union
{
    uint32 UINT32;
    const MCAN0RXF0CBits_t BIT;
} MCAN0RXF0C_t;

typedef union
{
    uint32 UINT32;
    const MCAN0RXF0SBits_t BIT;
} MCAN0RXF0S_t;

typedef union
{
    uint32 UINT32;
    MCAN0RXF0ABits_t BIT;
} MCAN0RXF0A_t;

typedef union
{
    uint32 UINT32;
    MCAN0RXBCBits_t BIT;
} MCAN0RXBC_t;

typedef union
{
    uint32 UINT32;
    MCAN0RXF1CBits_t BIT;
} MCAN0RXF1C_t;

typedef union
{
    uint32 UINT32;
    const MCAN0RXF1SBits_t BIT;
} MCAN0RXF1S_t;

typedef union
{
    uint32 UINT32;
    MCAN0RXF1ABits_t BIT;
} MCAN0RXF1A_t;

typedef union
{
    uint32 UINT32;
    const MCAN0RXESCBits_t BIT;
} MCAN0RXESC_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXBCBits_t BIT;
} MCAN0TXBC_t;

typedef union
{
    uint32 UINT32;
    const MCAN0TXFQSBits_t BIT;
} MCAN0TXFQS_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXESCBits_t BIT;
} MCAN0TXESC_t;

typedef union
{
    uint32 UINT32;
    const MCAN0TXBRPBits_t BIT;
} MCAN0TXBRP_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXBARBits_t BIT;
} MCAN0TXBAR_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXBCRBits_t BIT;
} MCAN0TXBCR_t;

typedef union
{
    uint32 UINT32;
    const MCAN0TXBTOBits_t BIT;
} MCAN0TXBTO_t;

typedef union
{
    uint32 UINT32;
    const MCAN0TXBCFBits_t BIT;
} MCAN0TXBCF_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXBTIEBits_t BIT;
} MCAN0TXBTIE_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXBCIEBits_t BIT;
} MCAN0TXBCIE_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXEFCBits_t BIT;
} MCAN0TXEFC_t;

typedef union
{
    uint32 UINT32;
    const MCAN0TXEFSBits_t BIT;
} MCAN0TXEFS_t;

typedef union
{
    uint32 UINT32;
    MCAN0TXEFABits_t BIT;
} MCAN0TXEFA_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(MCAN0CREL_BASE, 0xFFEF0000, __READ, MCAN0CREL_t);
__IOREG(MCAN0ENDN_BASE, 0xFFEF0004, __READ, MCAN0ENDN_t);
__IOREG(MCAN0DBTP_BASE, 0xFFEF000C, __READ, MCAN0DBTP_t);
__IOREG(MCAN0TEST_BASE, 0xFFEF0010, __READ, MCAN0TEST_t);
__IOREG(MCAN0RWD_BASE, 0xFFEF0014, __READ_WRITE, MCAN0RWD_t);
__IOREG(MCAN0CCCR_BASE, 0xFFEF0018, __READ_WRITE, MCAN0CCCR_t);
__IOREG(MCAN0NBTP_BASE, 0xFFEF001C, __READ_WRITE, MCAN0NBTP_t);
__IOREG(MCAN0TSCC_BASE, 0xFFEF0020, __READ_WRITE, MCAN0TSCC_t);
__IOREG(MCAN0TSCV_BASE, 0xFFEF0024, __READ_WRITE, MCAN0TSCV_t);
__IOREG(MCAN0TOCC_BASE, 0xFFEF0028, __READ_WRITE, MCAN0TOCC_t);
__IOREG(MCAN0TOCV_BASE, 0xFFEF002C, __READ_WRITE, MCAN0TOCV_t);
__IOREG(MCAN0ECR_BASE, 0xFFEF0040, __READ, MCAN0ECR_t);
__IOREG(MCAN0PSR_BASE, 0xFFEF0044, __READ, MCAN0PSR_t);
__IOREG(MCAN0TDCR_BASE, 0xFFEF0048, __READ, MCAN0TDCR_t);
__IOREG(MCAN0IR_BASE, 0xFFEF0050, __READ_WRITE, MCAN0IR_t);
__IOREG(MCAN0IE_BASE, 0xFFEF0054, __READ_WRITE, MCAN0IE_t);
__IOREG(MCAN0ILS_BASE, 0xFFEF0058, __READ_WRITE, MCAN0ILS_t);
__IOREG(MCAN0ILE_BASE, 0xFFEF005C, __READ_WRITE, MCAN0ILE_t);
__IOREG(MCAN0GFC_BASE, 0xFFEF0080, __READ_WRITE, MCAN0GFC_t);
__IOREG(MCAN0SIDFC_BASE, 0xFFEF0084, __READ_WRITE, MCAN0SIDFC_t);
__IOREG(MCAN0XIDFC_BASE, 0xFFEF0088, __READ_WRITE, MCAN0XIDFC_t);
__IOREG(MCAN0XIDAM_BASE, 0xFFEF0090, __READ_WRITE, MCAN0XIDAM_t);
__IOREG(MCAN0HPMS_BASE, 0xFFEF0094, __READ, MCAN0HPMS_t);
__IOREG(MCAN0NDAT1_BASE, 0xFFEF0098, __READ_WRITE, MCAN0NDAT1_t);
__IOREG(MCAN0NDAT2_BASE, 0xFFEF009C, __READ_WRITE, MCAN0NDAT2_t);
__IOREG(MCAN0RXF0C_BASE, 0xFFEF00A0, __READ, MCAN0RXF0C_t);
__IOREG(MCAN0RXF0S_BASE, 0xFFEF00A4, __READ, MCAN0RXF0S_t);
__IOREG(MCAN0RXF0A_BASE, 0xFFEF00A8, __READ_WRITE, MCAN0RXF0A_t);
__IOREG(MCAN0RXBC_BASE, 0xFFEF00AC, __READ_WRITE, MCAN0RXBC_t);
__IOREG(MCAN0RXF1C_BASE, 0xFFEF00B0, __READ_WRITE, MCAN0RXF1C_t);
__IOREG(MCAN0RXF1S_BASE, 0xFFEF00B4, __READ, MCAN0RXF1S_t);
__IOREG(MCAN0RXF1A_BASE, 0xFFEF00B8, __READ_WRITE, MCAN0RXF1A_t);
__IOREG(MCAN0RXESC_BASE, 0xFFEF00BC, __READ, MCAN0RXESC_t);
__IOREG(MCAN0TXBC_BASE, 0xFFEF00C0, __READ_WRITE, MCAN0TXBC_t);
__IOREG(MCAN0TXFQS_BASE, 0xFFEF00C4, __READ, MCAN0TXFQS_t);
__IOREG(MCAN0TXESC_BASE, 0xFFEF00C8, __READ_WRITE, MCAN0TXESC_t);
__IOREG(MCAN0TXBRP_BASE, 0xFFEF00CC, __READ, MCAN0TXBRP_t);
__IOREG(MCAN0TXBAR_BASE, 0xFFEF00D0, __READ_WRITE, MCAN0TXBAR_t);
__IOREG(MCAN0TXBCR_BASE, 0xFFEF00D4, __READ_WRITE, MCAN0TXBCR_t);
__IOREG(MCAN0TXBTO_BASE, 0xFFEF00D8, __READ, MCAN0TXBTO_t);
__IOREG(MCAN0TXBCF_BASE, 0xFFEF00DC, __READ, MCAN0TXBCF_t);
__IOREG(MCAN0TXBTIE_BASE, 0xFFEF00E0, __READ_WRITE, MCAN0TXBTIE_t);
__IOREG(MCAN0TXBCIE_BASE, 0xFFEF00E4, __READ_WRITE, MCAN0TXBCIE_t);
__IOREG(MCAN0TXEFC_BASE, 0xFFEF00F0, __READ_WRITE, MCAN0TXEFC_t);
__IOREG(MCAN0TXEFS_BASE, 0xFFEF00F4, __READ, MCAN0TXEFS_t);
__IOREG(MCAN0TXEFA_BASE, 0xFFEF00F8, __READ_WRITE, MCAN0TXEFA_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define MCAN0CREL MCAN0CREL_BASE.UINT32
#define MCAN0CREL_DAY MCAN0CREL_BASE.BIT._DAY
#define MCAN0CREL_MON MCAN0CREL_BASE.BIT._MON
#define MCAN0CREL_YEAR MCAN0CREL_BASE.BIT._YEAR
#define MCAN0CREL_SUBSTEP MCAN0CREL_BASE.BIT._SUBSTEP
#define MCAN0CREL_STEP MCAN0CREL_BASE.BIT._STEP
#define MCAN0CREL_REL MCAN0CREL_BASE.BIT._REL
#define MCAN0ENDN MCAN0ENDN_BASE.UINT32
#define MCAN0ENDN_ETV MCAN0ENDN_BASE.BIT._ETV
#define MCAN0DBTP MCAN0DBTP_BASE.UINT32
#define MCAN0DBTP_DSJW MCAN0DBTP_BASE.BIT._DSJW
#define MCAN0DBTP_DTSEG2 MCAN0DBTP_BASE.BIT._DTSEG2
#define MCAN0DBTP_DTSEG1 MCAN0DBTP_BASE.BIT._DTSEG1
#define MCAN0DBTP_DBRP MCAN0DBTP_BASE.BIT._DBRP
#define MCAN0DBTP_TDC MCAN0DBTP_BASE.BIT._TDC
#define MCAN0TEST MCAN0TEST_BASE.UINT32
#define MCAN0TEST_LBCK MCAN0TEST_BASE.BIT._LBCK
#define MCAN0TEST_TX MCAN0TEST_BASE.BIT._TX
#define MCAN0TEST_RX MCAN0TEST_BASE.BIT._RX
#define MCAN0RWD MCAN0RWD_BASE.UINT32
#define MCAN0RWD_WDC MCAN0RWD_BASE.BIT._WDC
#define MCAN0RWD_WDV MCAN0RWD_BASE.BIT._WDV
#define MCAN0CCCR MCAN0CCCR_BASE.UINT32
#define MCAN0CCCR_INIT MCAN0CCCR_BASE.BIT._INIT
#define MCAN0CCCR_CCE MCAN0CCCR_BASE.BIT._CCE
#define MCAN0CCCR_ASM MCAN0CCCR_BASE.BIT._ASM
#define MCAN0CCCR_CSA MCAN0CCCR_BASE.BIT._CSA
#define MCAN0CCCR_CSR MCAN0CCCR_BASE.BIT._CSR
#define MCAN0CCCR_MON MCAN0CCCR_BASE.BIT._MON
#define MCAN0CCCR_DAR MCAN0CCCR_BASE.BIT._DAR
#define MCAN0CCCR_TEST MCAN0CCCR_BASE.BIT._TEST
#define MCAN0CCCR_FDOE MCAN0CCCR_BASE.BIT._FDOE
#define MCAN0CCCR_BRSE MCAN0CCCR_BASE.BIT._BRSE
#define MCAN0CCCR_PXHD MCAN0CCCR_BASE.BIT._PXHD
#define MCAN0CCCR_EFBI MCAN0CCCR_BASE.BIT._EFBI
#define MCAN0CCCR_TXP MCAN0CCCR_BASE.BIT._TXP
#define MCAN0CCCR_NISO MCAN0CCCR_BASE.BIT._NISO
#define MCAN0NBTP MCAN0NBTP_BASE.UINT32
#define MCAN0NBTP_NTSEG2 MCAN0NBTP_BASE.BIT._NTSEG2
#define MCAN0NBTP_NTSEG1 MCAN0NBTP_BASE.BIT._NTSEG1
#define MCAN0NBTP_NBRP MCAN0NBTP_BASE.BIT._NBRP
#define MCAN0NBTP_NSJW MCAN0NBTP_BASE.BIT._NSJW
#define MCAN0TSCC MCAN0TSCC_BASE.UINT32
#define MCAN0TSCC_TSS MCAN0TSCC_BASE.BIT._TSS
#define MCAN0TSCC_TCP MCAN0TSCC_BASE.BIT._TCP
#define MCAN0TSCV MCAN0TSCV_BASE.UINT32
#define MCAN0TSCV_TSC MCAN0TSCV_BASE.BIT._TSC
#define MCAN0TOCC MCAN0TOCC_BASE.UINT32
#define MCAN0TOCC_ETOC MCAN0TOCC_BASE.BIT._ETOC
#define MCAN0TOCC_TOS MCAN0TOCC_BASE.BIT._TOS
#define MCAN0TOCC_TOP MCAN0TOCC_BASE.BIT._TOP
#define MCAN0TOCV MCAN0TOCV_BASE.UINT32
#define MCAN0TOCV_TOC MCAN0TOCV_BASE.BIT._TOC
#define MCAN0ECR MCAN0ECR_BASE.UINT32
#define MCAN0ECR_TEC MCAN0ECR_BASE.BIT._TEC
#define MCAN0ECR_REC MCAN0ECR_BASE.BIT._REC
#define MCAN0ECR_RP MCAN0ECR_BASE.BIT._RP
#define MCAN0ECR_CEL MCAN0ECR_BASE.BIT._CEL
#define MCAN0PSR MCAN0PSR_BASE.UINT32
#define MCAN0PSR_LEC MCAN0PSR_BASE.BIT._LEC
#define MCAN0PSR_ACT MCAN0PSR_BASE.BIT._ACT
#define MCAN0PSR_EP MCAN0PSR_BASE.BIT._EP
#define MCAN0PSR_EW MCAN0PSR_BASE.BIT._EW
#define MCAN0PSR_BO MCAN0PSR_BASE.BIT._BO
#define MCAN0PSR_DLEC MCAN0PSR_BASE.BIT._DLEC
#define MCAN0PSR_RESI MCAN0PSR_BASE.BIT._RESI
#define MCAN0PSR_RBRS MCAN0PSR_BASE.BIT._RBRS
#define MCAN0PSR_RFDF MCAN0PSR_BASE.BIT._RFDF
#define MCAN0PSR_PXE MCAN0PSR_BASE.BIT._PXE
#define MCAN0PSR_TDCV MCAN0PSR_BASE.BIT._TDCV
#define MCAN0TDCR MCAN0TDCR_BASE.UINT32
#define MCAN0TDCR_TDCF MCAN0TDCR_BASE.BIT._TDCF
#define MCAN0TDCR_TDCO MCAN0TDCR_BASE.BIT._TDCO
#define MCAN0IR MCAN0IR_BASE.UINT32
#define MCAN0IR_RF0N MCAN0IR_BASE.BIT._RF0N
#define MCAN0IR_RF0W MCAN0IR_BASE.BIT._RF0W
#define MCAN0IR_RF0F MCAN0IR_BASE.BIT._RF0F
#define MCAN0IR_RF0L MCAN0IR_BASE.BIT._RF0L
#define MCAN0IR_RF1N MCAN0IR_BASE.BIT._RF1N
#define MCAN0IR_RF1W MCAN0IR_BASE.BIT._RF1W
#define MCAN0IR_RF1F MCAN0IR_BASE.BIT._RF1F
#define MCAN0IR_RF1L MCAN0IR_BASE.BIT._RF1L
#define MCAN0IR_HPM MCAN0IR_BASE.BIT._HPM
#define MCAN0IR_TC MCAN0IR_BASE.BIT._TC
#define MCAN0IR_TCF MCAN0IR_BASE.BIT._TCF
#define MCAN0IR_TFE MCAN0IR_BASE.BIT._TFE
#define MCAN0IR_TEFN MCAN0IR_BASE.BIT._TEFN
#define MCAN0IR_TEFW MCAN0IR_BASE.BIT._TEFW
#define MCAN0IR_TEFF MCAN0IR_BASE.BIT._TEFF
#define MCAN0IR_TEFL MCAN0IR_BASE.BIT._TEFL
#define MCAN0IR_TSW MCAN0IR_BASE.BIT._TSW
#define MCAN0IR_MRAF MCAN0IR_BASE.BIT._MRAF
#define MCAN0IR_TOO MCAN0IR_BASE.BIT._TOO
#define MCAN0IR_DRX MCAN0IR_BASE.BIT._DRX
#define MCAN0IR_BEC MCAN0IR_BASE.BIT._BEC
#define MCAN0IR_BEU MCAN0IR_BASE.BIT._BEU
#define MCAN0IR_ELO MCAN0IR_BASE.BIT._ELO
#define MCAN0IR_EP MCAN0IR_BASE.BIT._EP
#define MCAN0IR_EW MCAN0IR_BASE.BIT._EW
#define MCAN0IR_BO MCAN0IR_BASE.BIT._BO
#define MCAN0IR_WDI MCAN0IR_BASE.BIT._WDI
#define MCAN0IR_PEA MCAN0IR_BASE.BIT._PEA
#define MCAN0IR_PED MCAN0IR_BASE.BIT._PED
#define MCAN0IR_ARA MCAN0IR_BASE.BIT._ARA
#define MCAN0IE MCAN0IE_BASE.UINT32
#define MCAN0IE_RF0NE MCAN0IE_BASE.BIT._RF0NE
#define MCAN0IE_RF0WE MCAN0IE_BASE.BIT._RF0WE
#define MCAN0IE_RF0FE MCAN0IE_BASE.BIT._RF0FE
#define MCAN0IE_RF0LE MCAN0IE_BASE.BIT._RF0LE
#define MCAN0IE_RF1NE MCAN0IE_BASE.BIT._RF1NE
#define MCAN0IE_RF1WE MCAN0IE_BASE.BIT._RF1WE
#define MCAN0IE_RF1FE MCAN0IE_BASE.BIT._RF1FE
#define MCAN0IE_RF1LE MCAN0IE_BASE.BIT._RF1LE
#define MCAN0IE_HPME MCAN0IE_BASE.BIT._HPME
#define MCAN0IE_TCE MCAN0IE_BASE.BIT._TCE
#define MCAN0IE_TCFE MCAN0IE_BASE.BIT._TCFE
#define MCAN0IE_TFEE MCAN0IE_BASE.BIT._TFEE
#define MCAN0IE_TEFNE MCAN0IE_BASE.BIT._TEFNE
#define MCAN0IE_TEFWE MCAN0IE_BASE.BIT._TEFWE
#define MCAN0IE_TEFFE MCAN0IE_BASE.BIT._TEFFE
#define MCAN0IE_TEFLE MCAN0IE_BASE.BIT._TEFLE
#define MCAN0IE_TSWE MCAN0IE_BASE.BIT._TSWE
#define MCAN0IE_MRAFE MCAN0IE_BASE.BIT._MRAFE
#define MCAN0IE_TOOE MCAN0IE_BASE.BIT._TOOE
#define MCAN0IE_DRXE MCAN0IE_BASE.BIT._DRXE
#define MCAN0IE_BECE MCAN0IE_BASE.BIT._BECE
#define MCAN0IE_BEUE MCAN0IE_BASE.BIT._BEUE
#define MCAN0IE_ELOE MCAN0IE_BASE.BIT._ELOE
#define MCAN0IE_EPE MCAN0IE_BASE.BIT._EPE
#define MCAN0IE_EWE MCAN0IE_BASE.BIT._EWE
#define MCAN0IE_BOE MCAN0IE_BASE.BIT._BOE
#define MCAN0IE_WDIE MCAN0IE_BASE.BIT._WDIE
#define MCAN0IE_PEAE MCAN0IE_BASE.BIT._PEAE
#define MCAN0IE_PEDE MCAN0IE_BASE.BIT._PEDE
#define MCAN0IE_ARAE MCAN0IE_BASE.BIT._ARAE
#define MCAN0ILS MCAN0ILS_BASE.UINT32
#define MCAN0ILS_RF0NL MCAN0ILS_BASE.BIT._RF0NL
#define MCAN0ILS_RF0WL MCAN0ILS_BASE.BIT._RF0WL
#define MCAN0ILS_RF0FL MCAN0ILS_BASE.BIT._RF0FL
#define MCAN0ILS_RF0LL MCAN0ILS_BASE.BIT._RF0LL
#define MCAN0ILS_RF1NL MCAN0ILS_BASE.BIT._RF1NL
#define MCAN0ILS_RF1WL MCAN0ILS_BASE.BIT._RF1WL
#define MCAN0ILS_RF1FL MCAN0ILS_BASE.BIT._RF1FL
#define MCAN0ILS_RF1LL MCAN0ILS_BASE.BIT._RF1LL
#define MCAN0ILS_HPML MCAN0ILS_BASE.BIT._HPML
#define MCAN0ILS_TCL MCAN0ILS_BASE.BIT._TCL
#define MCAN0ILS_TCFL MCAN0ILS_BASE.BIT._TCFL
#define MCAN0ILS_TFEL MCAN0ILS_BASE.BIT._TFEL
#define MCAN0ILS_TEFNL MCAN0ILS_BASE.BIT._TEFNL
#define MCAN0ILS_TEFWL MCAN0ILS_BASE.BIT._TEFWL
#define MCAN0ILS_TEFFL MCAN0ILS_BASE.BIT._TEFFL
#define MCAN0ILS_TEFLL MCAN0ILS_BASE.BIT._TEFLL
#define MCAN0ILS_TSWL MCAN0ILS_BASE.BIT._TSWL
#define MCAN0ILS_MRAFL MCAN0ILS_BASE.BIT._MRAFL
#define MCAN0ILS_TOOL MCAN0ILS_BASE.BIT._TOOL
#define MCAN0ILS_DRXL MCAN0ILS_BASE.BIT._DRXL
#define MCAN0ILS_BECL MCAN0ILS_BASE.BIT._BECL
#define MCAN0ILS_BEUL MCAN0ILS_BASE.BIT._BEUL
#define MCAN0ILS_ELOL MCAN0ILS_BASE.BIT._ELOL
#define MCAN0ILS_EPL MCAN0ILS_BASE.BIT._EPL
#define MCAN0ILS_EWL MCAN0ILS_BASE.BIT._EWL
#define MCAN0ILS_BOL MCAN0ILS_BASE.BIT._BOL
#define MCAN0ILS_WDIL MCAN0ILS_BASE.BIT._WDIL
#define MCAN0ILS_PEAL MCAN0ILS_BASE.BIT._PEAL
#define MCAN0ILS_PEDL MCAN0ILS_BASE.BIT._PEDL
#define MCAN0ILS_ARAL MCAN0ILS_BASE.BIT._ARAL
#define MCAN0ILE MCAN0ILE_BASE.UINT32
#define MCAN0ILE_EINT0 MCAN0ILE_BASE.BIT._EINT0
#define MCAN0ILE_EINT1 MCAN0ILE_BASE.BIT._EINT1
#define MCAN0GFC MCAN0GFC_BASE.UINT32
#define MCAN0GFC_RRFE MCAN0GFC_BASE.BIT._RRFE
#define MCAN0GFC_RRFS MCAN0GFC_BASE.BIT._RRFS
#define MCAN0GFC_ANFE MCAN0GFC_BASE.BIT._ANFE
#define MCAN0GFC_ANFS MCAN0GFC_BASE.BIT._ANFS
#define MCAN0SIDFC MCAN0SIDFC_BASE.UINT32
#define MCAN0SIDFC_FLSSA MCAN0SIDFC_BASE.BIT._FLSSA
#define MCAN0SIDFC_LSS MCAN0SIDFC_BASE.BIT._LSS
#define MCAN0XIDFC MCAN0XIDFC_BASE.UINT32
#define MCAN0XIDFC_FLESA MCAN0XIDFC_BASE.BIT._FLESA
#define MCAN0XIDFC_LSE MCAN0XIDFC_BASE.BIT._LSE
#define MCAN0XIDAM MCAN0XIDAM_BASE.UINT32
#define MCAN0XIDAM_EIDM MCAN0XIDAM_BASE.BIT._EIDM
#define MCAN0HPMS MCAN0HPMS_BASE.UINT32
#define MCAN0HPMS_BIDX MCAN0HPMS_BASE.BIT._BIDX
#define MCAN0HPMS_MSI MCAN0HPMS_BASE.BIT._MSI
#define MCAN0HPMS_FIDX MCAN0HPMS_BASE.BIT._FIDX
#define MCAN0HPMS_FLST MCAN0HPMS_BASE.BIT._FLST
#define MCAN0NDAT1 MCAN0NDAT1_BASE.UINT32
#define MCAN0NDAT1_ND0 MCAN0NDAT1_BASE.BIT._ND0
#define MCAN0NDAT1_ND1 MCAN0NDAT1_BASE.BIT._ND1
#define MCAN0NDAT1_ND2 MCAN0NDAT1_BASE.BIT._ND2
#define MCAN0NDAT1_ND3 MCAN0NDAT1_BASE.BIT._ND3
#define MCAN0NDAT1_ND4 MCAN0NDAT1_BASE.BIT._ND4
#define MCAN0NDAT1_ND5 MCAN0NDAT1_BASE.BIT._ND5
#define MCAN0NDAT1_ND6 MCAN0NDAT1_BASE.BIT._ND6
#define MCAN0NDAT1_ND7 MCAN0NDAT1_BASE.BIT._ND7
#define MCAN0NDAT1_ND8 MCAN0NDAT1_BASE.BIT._ND8
#define MCAN0NDAT1_ND9 MCAN0NDAT1_BASE.BIT._ND9
#define MCAN0NDAT1_ND10 MCAN0NDAT1_BASE.BIT._ND10
#define MCAN0NDAT1_ND11 MCAN0NDAT1_BASE.BIT._ND11
#define MCAN0NDAT1_ND12 MCAN0NDAT1_BASE.BIT._ND12
#define MCAN0NDAT1_ND13 MCAN0NDAT1_BASE.BIT._ND13
#define MCAN0NDAT1_ND14 MCAN0NDAT1_BASE.BIT._ND14
#define MCAN0NDAT1_ND15 MCAN0NDAT1_BASE.BIT._ND15
#define MCAN0NDAT1_ND16 MCAN0NDAT1_BASE.BIT._ND16
#define MCAN0NDAT1_ND17 MCAN0NDAT1_BASE.BIT._ND17
#define MCAN0NDAT1_ND18 MCAN0NDAT1_BASE.BIT._ND18
#define MCAN0NDAT1_ND19 MCAN0NDAT1_BASE.BIT._ND19
#define MCAN0NDAT1_ND20 MCAN0NDAT1_BASE.BIT._ND20
#define MCAN0NDAT1_ND21 MCAN0NDAT1_BASE.BIT._ND21
#define MCAN0NDAT1_ND22 MCAN0NDAT1_BASE.BIT._ND22
#define MCAN0NDAT1_ND23 MCAN0NDAT1_BASE.BIT._ND23
#define MCAN0NDAT1_ND24 MCAN0NDAT1_BASE.BIT._ND24
#define MCAN0NDAT1_ND25 MCAN0NDAT1_BASE.BIT._ND25
#define MCAN0NDAT1_ND26 MCAN0NDAT1_BASE.BIT._ND26
#define MCAN0NDAT1_ND27 MCAN0NDAT1_BASE.BIT._ND27
#define MCAN0NDAT1_ND28 MCAN0NDAT1_BASE.BIT._ND28
#define MCAN0NDAT1_ND29 MCAN0NDAT1_BASE.BIT._ND29
#define MCAN0NDAT1_ND30 MCAN0NDAT1_BASE.BIT._ND30
#define MCAN0NDAT1_ND31 MCAN0NDAT1_BASE.BIT._ND31
#define MCAN0NDAT2 MCAN0NDAT2_BASE.UINT32
#define MCAN0NDAT2_ND32 MCAN0NDAT2_BASE.BIT._ND32
#define MCAN0NDAT2_ND33 MCAN0NDAT2_BASE.BIT._ND33
#define MCAN0NDAT2_ND34 MCAN0NDAT2_BASE.BIT._ND34
#define MCAN0NDAT2_ND35 MCAN0NDAT2_BASE.BIT._ND35
#define MCAN0NDAT2_ND36 MCAN0NDAT2_BASE.BIT._ND36
#define MCAN0NDAT2_ND37 MCAN0NDAT2_BASE.BIT._ND37
#define MCAN0NDAT2_ND38 MCAN0NDAT2_BASE.BIT._ND38
#define MCAN0NDAT2_ND39 MCAN0NDAT2_BASE.BIT._ND39
#define MCAN0NDAT2_ND40 MCAN0NDAT2_BASE.BIT._ND40
#define MCAN0NDAT2_ND41 MCAN0NDAT2_BASE.BIT._ND41
#define MCAN0NDAT2_ND42 MCAN0NDAT2_BASE.BIT._ND42
#define MCAN0NDAT2_ND43 MCAN0NDAT2_BASE.BIT._ND43
#define MCAN0NDAT2_ND44 MCAN0NDAT2_BASE.BIT._ND44
#define MCAN0NDAT2_ND45 MCAN0NDAT2_BASE.BIT._ND45
#define MCAN0NDAT2_ND46 MCAN0NDAT2_BASE.BIT._ND46
#define MCAN0NDAT2_ND47 MCAN0NDAT2_BASE.BIT._ND47
#define MCAN0NDAT2_ND48 MCAN0NDAT2_BASE.BIT._ND48
#define MCAN0NDAT2_ND49 MCAN0NDAT2_BASE.BIT._ND49
#define MCAN0NDAT2_ND50 MCAN0NDAT2_BASE.BIT._ND50
#define MCAN0NDAT2_ND51 MCAN0NDAT2_BASE.BIT._ND51
#define MCAN0NDAT2_ND52 MCAN0NDAT2_BASE.BIT._ND52
#define MCAN0NDAT2_ND53 MCAN0NDAT2_BASE.BIT._ND53
#define MCAN0NDAT2_ND54 MCAN0NDAT2_BASE.BIT._ND54
#define MCAN0NDAT2_ND55 MCAN0NDAT2_BASE.BIT._ND55
#define MCAN0NDAT2_ND56 MCAN0NDAT2_BASE.BIT._ND56
#define MCAN0NDAT2_ND57 MCAN0NDAT2_BASE.BIT._ND57
#define MCAN0NDAT2_ND58 MCAN0NDAT2_BASE.BIT._ND58
#define MCAN0NDAT2_ND59 MCAN0NDAT2_BASE.BIT._ND59
#define MCAN0NDAT2_ND60 MCAN0NDAT2_BASE.BIT._ND60
#define MCAN0NDAT2_ND61 MCAN0NDAT2_BASE.BIT._ND61
#define MCAN0NDAT2_ND62 MCAN0NDAT2_BASE.BIT._ND62
#define MCAN0NDAT2_ND63 MCAN0NDAT2_BASE.BIT._ND63
#define MCAN0RXF0C MCAN0RXF0C_BASE.UINT32
#define MCAN0RXF0C_F0SA MCAN0RXF0C_BASE.BIT._F0SA
#define MCAN0RXF0C_F0S MCAN0RXF0C_BASE.BIT._F0S
#define MCAN0RXF0C_F0WM MCAN0RXF0C_BASE.BIT._F0WM
#define MCAN0RXF0C_F0OM MCAN0RXF0C_BASE.BIT._F0OM
#define MCAN0RXF0S MCAN0RXF0S_BASE.UINT32
#define MCAN0RXF0S_F0FL MCAN0RXF0S_BASE.BIT._F0FL
#define MCAN0RXF0S_F0GI MCAN0RXF0S_BASE.BIT._F0GI
#define MCAN0RXF0S_F0PI MCAN0RXF0S_BASE.BIT._F0PI
#define MCAN0RXF0S_F0F MCAN0RXF0S_BASE.BIT._F0F
#define MCAN0RXF0S_RF0L MCAN0RXF0S_BASE.BIT._RF0L
#define MCAN0RXF0A MCAN0RXF0A_BASE.UINT32
#define MCAN0RXF0A_F0AI MCAN0RXF0A_BASE.BIT._F0AI
#define MCAN0RXBC MCAN0RXBC_BASE.UINT32
#define MCAN0RXBC_RBSA MCAN0RXBC_BASE.BIT._RBSA
#define MCAN0RXF1C MCAN0RXF1C_BASE.UINT32
#define MCAN0RXF1C_F1SA MCAN0RXF1C_BASE.BIT._F1SA
#define MCAN0RXF1C_F1S MCAN0RXF1C_BASE.BIT._F1S
#define MCAN0RXF1C_F1WM MCAN0RXF1C_BASE.BIT._F1WM
#define MCAN0RXF1C_F1OM MCAN0RXF1C_BASE.BIT._F1OM
#define MCAN0RXF1S MCAN0RXF1S_BASE.UINT32
#define MCAN0RXF1S_F1FL MCAN0RXF1S_BASE.BIT._F1FL
#define MCAN0RXF1S_F1GI MCAN0RXF1S_BASE.BIT._F1GI
#define MCAN0RXF1S_F1PI MCAN0RXF1S_BASE.BIT._F1PI
#define MCAN0RXF1S_F1F MCAN0RXF1S_BASE.BIT._F1F
#define MCAN0RXF1S_RF1L MCAN0RXF1S_BASE.BIT._RF1L
#define MCAN0RXF1S_DMS MCAN0RXF1S_BASE.BIT._DMS
#define MCAN0RXF1A MCAN0RXF1A_BASE.UINT32
#define MCAN0RXF1A_F1AI MCAN0RXF1A_BASE.BIT._F1AI
#define MCAN0RXESC MCAN0RXESC_BASE.UINT32
#define MCAN0RXESC_F0DS MCAN0RXESC_BASE.BIT._F0DS
#define MCAN0RXESC_F1DS MCAN0RXESC_BASE.BIT._F1DS
#define MCAN0RXESC_RBDS MCAN0RXESC_BASE.BIT._RBDS
#define MCAN0TXBC MCAN0TXBC_BASE.UINT32
#define MCAN0TXBC_TBSA MCAN0TXBC_BASE.BIT._TBSA
#define MCAN0TXBC_NDTB MCAN0TXBC_BASE.BIT._NDTB
#define MCAN0TXBC_TFQS MCAN0TXBC_BASE.BIT._TFQS
#define MCAN0TXBC_TFQM MCAN0TXBC_BASE.BIT._TFQM
#define MCAN0TXFQS MCAN0TXFQS_BASE.UINT32
#define MCAN0TXFQS_TFFL MCAN0TXFQS_BASE.BIT._TFFL
#define MCAN0TXFQS_TFGI MCAN0TXFQS_BASE.BIT._TFGI
#define MCAN0TXFQS_TFQPI MCAN0TXFQS_BASE.BIT._TFQPI
#define MCAN0TXFQS_TFQF MCAN0TXFQS_BASE.BIT._TFQF
#define MCAN0TXESC MCAN0TXESC_BASE.UINT32
#define MCAN0TXESC_TBDS MCAN0TXESC_BASE.BIT._TBDS
#define MCAN0TXBRP MCAN0TXBRP_BASE.UINT32
#define MCAN0TXBRP_TRP0 MCAN0TXBRP_BASE.BIT._TRP0
#define MCAN0TXBRP_TRP1 MCAN0TXBRP_BASE.BIT._TRP1
#define MCAN0TXBRP_TRP2 MCAN0TXBRP_BASE.BIT._TRP2
#define MCAN0TXBRP_TRP3 MCAN0TXBRP_BASE.BIT._TRP3
#define MCAN0TXBRP_TRP4 MCAN0TXBRP_BASE.BIT._TRP4
#define MCAN0TXBRP_TRP5 MCAN0TXBRP_BASE.BIT._TRP5
#define MCAN0TXBRP_TRP6 MCAN0TXBRP_BASE.BIT._TRP6
#define MCAN0TXBRP_TRP7 MCAN0TXBRP_BASE.BIT._TRP7
#define MCAN0TXBRP_TRP8 MCAN0TXBRP_BASE.BIT._TRP8
#define MCAN0TXBRP_TRP9 MCAN0TXBRP_BASE.BIT._TRP9
#define MCAN0TXBRP_TRP10 MCAN0TXBRP_BASE.BIT._TRP10
#define MCAN0TXBRP_TRP11 MCAN0TXBRP_BASE.BIT._TRP11
#define MCAN0TXBRP_TRP12 MCAN0TXBRP_BASE.BIT._TRP12
#define MCAN0TXBRP_TRP13 MCAN0TXBRP_BASE.BIT._TRP13
#define MCAN0TXBRP_TRP14 MCAN0TXBRP_BASE.BIT._TRP14
#define MCAN0TXBRP_TRP15 MCAN0TXBRP_BASE.BIT._TRP15
#define MCAN0TXBRP_TRP16 MCAN0TXBRP_BASE.BIT._TRP16
#define MCAN0TXBRP_TRP17 MCAN0TXBRP_BASE.BIT._TRP17
#define MCAN0TXBRP_TRP18 MCAN0TXBRP_BASE.BIT._TRP18
#define MCAN0TXBRP_TRP19 MCAN0TXBRP_BASE.BIT._TRP19
#define MCAN0TXBRP_TRP20 MCAN0TXBRP_BASE.BIT._TRP20
#define MCAN0TXBRP_TRP21 MCAN0TXBRP_BASE.BIT._TRP21
#define MCAN0TXBRP_TRP22 MCAN0TXBRP_BASE.BIT._TRP22
#define MCAN0TXBRP_TRP23 MCAN0TXBRP_BASE.BIT._TRP23
#define MCAN0TXBRP_TRP24 MCAN0TXBRP_BASE.BIT._TRP24
#define MCAN0TXBRP_TRP25 MCAN0TXBRP_BASE.BIT._TRP25
#define MCAN0TXBRP_TRP26 MCAN0TXBRP_BASE.BIT._TRP26
#define MCAN0TXBRP_TRP27 MCAN0TXBRP_BASE.BIT._TRP27
#define MCAN0TXBRP_TRP28 MCAN0TXBRP_BASE.BIT._TRP28
#define MCAN0TXBRP_TRP29 MCAN0TXBRP_BASE.BIT._TRP29
#define MCAN0TXBRP_TRP30 MCAN0TXBRP_BASE.BIT._TRP30
#define MCAN0TXBRP_TRP31 MCAN0TXBRP_BASE.BIT._TRP31
#define MCAN0TXBAR MCAN0TXBAR_BASE.UINT32
#define MCAN0TXBAR_AR0 MCAN0TXBAR_BASE.BIT._AR0
#define MCAN0TXBAR_AR1 MCAN0TXBAR_BASE.BIT._AR1
#define MCAN0TXBAR_AR2 MCAN0TXBAR_BASE.BIT._AR2
#define MCAN0TXBAR_AR3 MCAN0TXBAR_BASE.BIT._AR3
#define MCAN0TXBAR_AR4 MCAN0TXBAR_BASE.BIT._AR4
#define MCAN0TXBAR_AR5 MCAN0TXBAR_BASE.BIT._AR5
#define MCAN0TXBAR_AR6 MCAN0TXBAR_BASE.BIT._AR6
#define MCAN0TXBAR_AR7 MCAN0TXBAR_BASE.BIT._AR7
#define MCAN0TXBAR_AR8 MCAN0TXBAR_BASE.BIT._AR8
#define MCAN0TXBAR_AR9 MCAN0TXBAR_BASE.BIT._AR9
#define MCAN0TXBAR_AR10 MCAN0TXBAR_BASE.BIT._AR10
#define MCAN0TXBAR_AR11 MCAN0TXBAR_BASE.BIT._AR11
#define MCAN0TXBAR_AR12 MCAN0TXBAR_BASE.BIT._AR12
#define MCAN0TXBAR_AR13 MCAN0TXBAR_BASE.BIT._AR13
#define MCAN0TXBAR_AR14 MCAN0TXBAR_BASE.BIT._AR14
#define MCAN0TXBAR_AR15 MCAN0TXBAR_BASE.BIT._AR15
#define MCAN0TXBAR_AR16 MCAN0TXBAR_BASE.BIT._AR16
#define MCAN0TXBAR_AR17 MCAN0TXBAR_BASE.BIT._AR17
#define MCAN0TXBAR_AR18 MCAN0TXBAR_BASE.BIT._AR18
#define MCAN0TXBAR_AR19 MCAN0TXBAR_BASE.BIT._AR19
#define MCAN0TXBAR_AR20 MCAN0TXBAR_BASE.BIT._AR20
#define MCAN0TXBAR_AR21 MCAN0TXBAR_BASE.BIT._AR21
#define MCAN0TXBAR_AR22 MCAN0TXBAR_BASE.BIT._AR22
#define MCAN0TXBAR_AR23 MCAN0TXBAR_BASE.BIT._AR23
#define MCAN0TXBAR_AR24 MCAN0TXBAR_BASE.BIT._AR24
#define MCAN0TXBAR_AR25 MCAN0TXBAR_BASE.BIT._AR25
#define MCAN0TXBAR_AR26 MCAN0TXBAR_BASE.BIT._AR26
#define MCAN0TXBAR_AR27 MCAN0TXBAR_BASE.BIT._AR27
#define MCAN0TXBAR_AR28 MCAN0TXBAR_BASE.BIT._AR28
#define MCAN0TXBAR_AR29 MCAN0TXBAR_BASE.BIT._AR29
#define MCAN0TXBAR_AR30 MCAN0TXBAR_BASE.BIT._AR30
#define MCAN0TXBAR_AR31 MCAN0TXBAR_BASE.BIT._AR31
#define MCAN0TXBCR MCAN0TXBCR_BASE.UINT32
#define MCAN0TXBCR_CR0 MCAN0TXBCR_BASE.BIT._CR0
#define MCAN0TXBCR_CR1 MCAN0TXBCR_BASE.BIT._CR1
#define MCAN0TXBCR_CR2 MCAN0TXBCR_BASE.BIT._CR2
#define MCAN0TXBCR_CR3 MCAN0TXBCR_BASE.BIT._CR3
#define MCAN0TXBCR_CR4 MCAN0TXBCR_BASE.BIT._CR4
#define MCAN0TXBCR_CR5 MCAN0TXBCR_BASE.BIT._CR5
#define MCAN0TXBCR_CR6 MCAN0TXBCR_BASE.BIT._CR6
#define MCAN0TXBCR_CR7 MCAN0TXBCR_BASE.BIT._CR7
#define MCAN0TXBCR_CR8 MCAN0TXBCR_BASE.BIT._CR8
#define MCAN0TXBCR_CR9 MCAN0TXBCR_BASE.BIT._CR9
#define MCAN0TXBCR_CR10 MCAN0TXBCR_BASE.BIT._CR10
#define MCAN0TXBCR_CR11 MCAN0TXBCR_BASE.BIT._CR11
#define MCAN0TXBCR_CR12 MCAN0TXBCR_BASE.BIT._CR12
#define MCAN0TXBCR_CR13 MCAN0TXBCR_BASE.BIT._CR13
#define MCAN0TXBCR_CR14 MCAN0TXBCR_BASE.BIT._CR14
#define MCAN0TXBCR_CR15 MCAN0TXBCR_BASE.BIT._CR15
#define MCAN0TXBCR_CR16 MCAN0TXBCR_BASE.BIT._CR16
#define MCAN0TXBCR_CR17 MCAN0TXBCR_BASE.BIT._CR17
#define MCAN0TXBCR_CR18 MCAN0TXBCR_BASE.BIT._CR18
#define MCAN0TXBCR_CR19 MCAN0TXBCR_BASE.BIT._CR19
#define MCAN0TXBCR_CR20 MCAN0TXBCR_BASE.BIT._CR20
#define MCAN0TXBCR_CR21 MCAN0TXBCR_BASE.BIT._CR21
#define MCAN0TXBCR_CR22 MCAN0TXBCR_BASE.BIT._CR22
#define MCAN0TXBCR_CR23 MCAN0TXBCR_BASE.BIT._CR23
#define MCAN0TXBCR_CR24 MCAN0TXBCR_BASE.BIT._CR24
#define MCAN0TXBCR_CR25 MCAN0TXBCR_BASE.BIT._CR25
#define MCAN0TXBCR_CR26 MCAN0TXBCR_BASE.BIT._CR26
#define MCAN0TXBCR_CR27 MCAN0TXBCR_BASE.BIT._CR27
#define MCAN0TXBCR_CR28 MCAN0TXBCR_BASE.BIT._CR28
#define MCAN0TXBCR_CR29 MCAN0TXBCR_BASE.BIT._CR29
#define MCAN0TXBCR_CR30 MCAN0TXBCR_BASE.BIT._CR30
#define MCAN0TXBCR_CR31 MCAN0TXBCR_BASE.BIT._CR31
#define MCAN0TXBTO MCAN0TXBTO_BASE.UINT32
#define MCAN0TXBTO_TO0 MCAN0TXBTO_BASE.BIT._TO0
#define MCAN0TXBTO_TO1 MCAN0TXBTO_BASE.BIT._TO1
#define MCAN0TXBTO_TO2 MCAN0TXBTO_BASE.BIT._TO2
#define MCAN0TXBTO_TO3 MCAN0TXBTO_BASE.BIT._TO3
#define MCAN0TXBTO_TO4 MCAN0TXBTO_BASE.BIT._TO4
#define MCAN0TXBTO_TO5 MCAN0TXBTO_BASE.BIT._TO5
#define MCAN0TXBTO_TO6 MCAN0TXBTO_BASE.BIT._TO6
#define MCAN0TXBTO_TO7 MCAN0TXBTO_BASE.BIT._TO7
#define MCAN0TXBTO_TO8 MCAN0TXBTO_BASE.BIT._TO8
#define MCAN0TXBTO_TO9 MCAN0TXBTO_BASE.BIT._TO9
#define MCAN0TXBTO_TO10 MCAN0TXBTO_BASE.BIT._TO10
#define MCAN0TXBTO_TO11 MCAN0TXBTO_BASE.BIT._TO11
#define MCAN0TXBTO_TO12 MCAN0TXBTO_BASE.BIT._TO12
#define MCAN0TXBTO_TO13 MCAN0TXBTO_BASE.BIT._TO13
#define MCAN0TXBTO_TO14 MCAN0TXBTO_BASE.BIT._TO14
#define MCAN0TXBTO_TO15 MCAN0TXBTO_BASE.BIT._TO15
#define MCAN0TXBTO_TO16 MCAN0TXBTO_BASE.BIT._TO16
#define MCAN0TXBTO_TO17 MCAN0TXBTO_BASE.BIT._TO17
#define MCAN0TXBTO_TO18 MCAN0TXBTO_BASE.BIT._TO18
#define MCAN0TXBTO_TO19 MCAN0TXBTO_BASE.BIT._TO19
#define MCAN0TXBTO_TO20 MCAN0TXBTO_BASE.BIT._TO20
#define MCAN0TXBTO_TO21 MCAN0TXBTO_BASE.BIT._TO21
#define MCAN0TXBTO_TO22 MCAN0TXBTO_BASE.BIT._TO22
#define MCAN0TXBTO_TO23 MCAN0TXBTO_BASE.BIT._TO23
#define MCAN0TXBTO_TO24 MCAN0TXBTO_BASE.BIT._TO24
#define MCAN0TXBTO_TO25 MCAN0TXBTO_BASE.BIT._TO25
#define MCAN0TXBTO_TO26 MCAN0TXBTO_BASE.BIT._TO26
#define MCAN0TXBTO_TO27 MCAN0TXBTO_BASE.BIT._TO27
#define MCAN0TXBTO_TO28 MCAN0TXBTO_BASE.BIT._TO28
#define MCAN0TXBTO_TO29 MCAN0TXBTO_BASE.BIT._TO29
#define MCAN0TXBTO_TO30 MCAN0TXBTO_BASE.BIT._TO30
#define MCAN0TXBTO_TO31 MCAN0TXBTO_BASE.BIT._TO31
#define MCAN0TXBCF MCAN0TXBCF_BASE.UINT32
#define MCAN0TXBCF_CF0 MCAN0TXBCF_BASE.BIT._CF0
#define MCAN0TXBCF_CF1 MCAN0TXBCF_BASE.BIT._CF1
#define MCAN0TXBCF_CF2 MCAN0TXBCF_BASE.BIT._CF2
#define MCAN0TXBCF_CF3 MCAN0TXBCF_BASE.BIT._CF3
#define MCAN0TXBCF_CF4 MCAN0TXBCF_BASE.BIT._CF4
#define MCAN0TXBCF_CF5 MCAN0TXBCF_BASE.BIT._CF5
#define MCAN0TXBCF_CF6 MCAN0TXBCF_BASE.BIT._CF6
#define MCAN0TXBCF_CF7 MCAN0TXBCF_BASE.BIT._CF7
#define MCAN0TXBCF_CF8 MCAN0TXBCF_BASE.BIT._CF8
#define MCAN0TXBCF_CF9 MCAN0TXBCF_BASE.BIT._CF9
#define MCAN0TXBCF_CF10 MCAN0TXBCF_BASE.BIT._CF10
#define MCAN0TXBCF_CF11 MCAN0TXBCF_BASE.BIT._CF11
#define MCAN0TXBCF_CF12 MCAN0TXBCF_BASE.BIT._CF12
#define MCAN0TXBCF_CF13 MCAN0TXBCF_BASE.BIT._CF13
#define MCAN0TXBCF_CF14 MCAN0TXBCF_BASE.BIT._CF14
#define MCAN0TXBCF_CF15 MCAN0TXBCF_BASE.BIT._CF15
#define MCAN0TXBCF_CF16 MCAN0TXBCF_BASE.BIT._CF16
#define MCAN0TXBCF_CF17 MCAN0TXBCF_BASE.BIT._CF17
#define MCAN0TXBCF_CF18 MCAN0TXBCF_BASE.BIT._CF18
#define MCAN0TXBCF_CF19 MCAN0TXBCF_BASE.BIT._CF19
#define MCAN0TXBCF_CF20 MCAN0TXBCF_BASE.BIT._CF20
#define MCAN0TXBCF_CF21 MCAN0TXBCF_BASE.BIT._CF21
#define MCAN0TXBCF_CF22 MCAN0TXBCF_BASE.BIT._CF22
#define MCAN0TXBCF_CF23 MCAN0TXBCF_BASE.BIT._CF23
#define MCAN0TXBCF_CF24 MCAN0TXBCF_BASE.BIT._CF24
#define MCAN0TXBCF_CF25 MCAN0TXBCF_BASE.BIT._CF25
#define MCAN0TXBCF_CF26 MCAN0TXBCF_BASE.BIT._CF26
#define MCAN0TXBCF_CF27 MCAN0TXBCF_BASE.BIT._CF27
#define MCAN0TXBCF_CF28 MCAN0TXBCF_BASE.BIT._CF28
#define MCAN0TXBCF_CF29 MCAN0TXBCF_BASE.BIT._CF29
#define MCAN0TXBCF_CF30 MCAN0TXBCF_BASE.BIT._CF30
#define MCAN0TXBCF_CF31 MCAN0TXBCF_BASE.BIT._CF31
#define MCAN0TXBTIE MCAN0TXBTIE_BASE.UINT32
#define MCAN0TXBTIE_TIE0 MCAN0TXBTIE_BASE.BIT._TIE0
#define MCAN0TXBTIE_TIE1 MCAN0TXBTIE_BASE.BIT._TIE1
#define MCAN0TXBTIE_TIE2 MCAN0TXBTIE_BASE.BIT._TIE2
#define MCAN0TXBTIE_TIE3 MCAN0TXBTIE_BASE.BIT._TIE3
#define MCAN0TXBTIE_TIE4 MCAN0TXBTIE_BASE.BIT._TIE4
#define MCAN0TXBTIE_TIE5 MCAN0TXBTIE_BASE.BIT._TIE5
#define MCAN0TXBTIE_TIE6 MCAN0TXBTIE_BASE.BIT._TIE6
#define MCAN0TXBTIE_TIE7 MCAN0TXBTIE_BASE.BIT._TIE7
#define MCAN0TXBTIE_TIE8 MCAN0TXBTIE_BASE.BIT._TIE8
#define MCAN0TXBTIE_TIE9 MCAN0TXBTIE_BASE.BIT._TIE9
#define MCAN0TXBTIE_TIE10 MCAN0TXBTIE_BASE.BIT._TIE10
#define MCAN0TXBTIE_TIE11 MCAN0TXBTIE_BASE.BIT._TIE11
#define MCAN0TXBTIE_TIE12 MCAN0TXBTIE_BASE.BIT._TIE12
#define MCAN0TXBTIE_TIE13 MCAN0TXBTIE_BASE.BIT._TIE13
#define MCAN0TXBTIE_TIE14 MCAN0TXBTIE_BASE.BIT._TIE14
#define MCAN0TXBTIE_TIE15 MCAN0TXBTIE_BASE.BIT._TIE15
#define MCAN0TXBTIE_TIE16 MCAN0TXBTIE_BASE.BIT._TIE16
#define MCAN0TXBTIE_TIE17 MCAN0TXBTIE_BASE.BIT._TIE17
#define MCAN0TXBTIE_TIE18 MCAN0TXBTIE_BASE.BIT._TIE18
#define MCAN0TXBTIE_TIE19 MCAN0TXBTIE_BASE.BIT._TIE19
#define MCAN0TXBTIE_TIE20 MCAN0TXBTIE_BASE.BIT._TIE20
#define MCAN0TXBTIE_TIE21 MCAN0TXBTIE_BASE.BIT._TIE21
#define MCAN0TXBTIE_TIE22 MCAN0TXBTIE_BASE.BIT._TIE22
#define MCAN0TXBTIE_TIE23 MCAN0TXBTIE_BASE.BIT._TIE23
#define MCAN0TXBTIE_TIE24 MCAN0TXBTIE_BASE.BIT._TIE24
#define MCAN0TXBTIE_TIE25 MCAN0TXBTIE_BASE.BIT._TIE25
#define MCAN0TXBTIE_TIE26 MCAN0TXBTIE_BASE.BIT._TIE26
#define MCAN0TXBTIE_TIE27 MCAN0TXBTIE_BASE.BIT._TIE27
#define MCAN0TXBTIE_TIE28 MCAN0TXBTIE_BASE.BIT._TIE28
#define MCAN0TXBTIE_TIE29 MCAN0TXBTIE_BASE.BIT._TIE29
#define MCAN0TXBTIE_TIE30 MCAN0TXBTIE_BASE.BIT._TIE30
#define MCAN0TXBTIE_TIE31 MCAN0TXBTIE_BASE.BIT._TIE31
#define MCAN0TXBCIE MCAN0TXBCIE_BASE.UINT32
#define MCAN0TXBCIE_CFIE0 MCAN0TXBCIE_BASE.BIT._CFIE0
#define MCAN0TXBCIE_CFIE1 MCAN0TXBCIE_BASE.BIT._CFIE1
#define MCAN0TXBCIE_CFIE2 MCAN0TXBCIE_BASE.BIT._CFIE2
#define MCAN0TXBCIE_CFIE3 MCAN0TXBCIE_BASE.BIT._CFIE3
#define MCAN0TXBCIE_CFIE4 MCAN0TXBCIE_BASE.BIT._CFIE4
#define MCAN0TXBCIE_CFIE5 MCAN0TXBCIE_BASE.BIT._CFIE5
#define MCAN0TXBCIE_CFIE6 MCAN0TXBCIE_BASE.BIT._CFIE6
#define MCAN0TXBCIE_CFIE7 MCAN0TXBCIE_BASE.BIT._CFIE7
#define MCAN0TXBCIE_CFIE8 MCAN0TXBCIE_BASE.BIT._CFIE8
#define MCAN0TXBCIE_CFIE9 MCAN0TXBCIE_BASE.BIT._CFIE9
#define MCAN0TXBCIE_CFIE10 MCAN0TXBCIE_BASE.BIT._CFIE10
#define MCAN0TXBCIE_CFIE11 MCAN0TXBCIE_BASE.BIT._CFIE11
#define MCAN0TXBCIE_CFIE12 MCAN0TXBCIE_BASE.BIT._CFIE12
#define MCAN0TXBCIE_CFIE13 MCAN0TXBCIE_BASE.BIT._CFIE13
#define MCAN0TXBCIE_CFIE14 MCAN0TXBCIE_BASE.BIT._CFIE14
#define MCAN0TXBCIE_CFIE15 MCAN0TXBCIE_BASE.BIT._CFIE15
#define MCAN0TXBCIE_CFIE16 MCAN0TXBCIE_BASE.BIT._CFIE16
#define MCAN0TXBCIE_CFIE17 MCAN0TXBCIE_BASE.BIT._CFIE17
#define MCAN0TXBCIE_CFIE18 MCAN0TXBCIE_BASE.BIT._CFIE18
#define MCAN0TXBCIE_CFIE19 MCAN0TXBCIE_BASE.BIT._CFIE19
#define MCAN0TXBCIE_CFIE20 MCAN0TXBCIE_BASE.BIT._CFIE20
#define MCAN0TXBCIE_CFIE21 MCAN0TXBCIE_BASE.BIT._CFIE21
#define MCAN0TXBCIE_CFIE22 MCAN0TXBCIE_BASE.BIT._CFIE22
#define MCAN0TXBCIE_CFIE23 MCAN0TXBCIE_BASE.BIT._CFIE23
#define MCAN0TXBCIE_CFIE24 MCAN0TXBCIE_BASE.BIT._CFIE24
#define MCAN0TXBCIE_CFIE25 MCAN0TXBCIE_BASE.BIT._CFIE25
#define MCAN0TXBCIE_CFIE26 MCAN0TXBCIE_BASE.BIT._CFIE26
#define MCAN0TXBCIE_CFIE27 MCAN0TXBCIE_BASE.BIT._CFIE27
#define MCAN0TXBCIE_CFIE28 MCAN0TXBCIE_BASE.BIT._CFIE28
#define MCAN0TXBCIE_CFIE29 MCAN0TXBCIE_BASE.BIT._CFIE29
#define MCAN0TXBCIE_CFIE30 MCAN0TXBCIE_BASE.BIT._CFIE30
#define MCAN0TXBCIE_CFIE31 MCAN0TXBCIE_BASE.BIT._CFIE31
#define MCAN0TXEFC MCAN0TXEFC_BASE.UINT32
#define MCAN0TXEFC_EFSA MCAN0TXEFC_BASE.BIT._EFSA
#define MCAN0TXEFC_EFS MCAN0TXEFC_BASE.BIT._EFS
#define MCAN0TXEFC_EFWM MCAN0TXEFC_BASE.BIT._EFWM
#define MCAN0TXEFS MCAN0TXEFS_BASE.UINT32
#define MCAN0TXEFS_EFFL MCAN0TXEFS_BASE.BIT._EFFL
#define MCAN0TXEFS_EFGI MCAN0TXEFS_BASE.BIT._EFGI
#define MCAN0TXEFS_EFPI MCAN0TXEFS_BASE.BIT._EFPI
#define MCAN0TXEFS_EFF MCAN0TXEFS_BASE.BIT._EFF
#define MCAN0TXEFS_TEFL MCAN0TXEFS_BASE.BIT._TEFL
#define MCAN0TXEFA MCAN0TXEFA_BASE.UINT32
#define MCAN0TXEFA_EFAI MCAN0TXEFA_BASE.BIT._EFAI

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif