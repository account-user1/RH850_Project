#ifndef __DR7F701373_MTTCAN0_HEADER__
#define __DR7F701373_MTTCAN0_HEADER__



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
} MTTCAN0CRELBits_t;

typedef struct
{
    const uint32 _ETV : 32;
} MTTCAN0ENDNBits_t;

typedef struct
{
    uint32 _DSJW : 4;
    uint32 _DTSEG2 : 4;
    uint32 _DTSEG1 : 5;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _DBRP : 5;
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
} MTTCAN0DBTPBits_t;

typedef struct
{
    uint32 _TAM : 1;
    uint32 _TAT : 1;
    const uint32 _CAM : 1;
    const uint32 _CAT : 1;
    uint32 _LBCK : 1;
    uint32 _TX : 2;
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
} MTTCAN0TESTBits_t;

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
} MTTCAN0RWDBits_t;

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
} MTTCAN0CCCRBits_t;

typedef struct
{
    uint32 _NTSEG2 : 7;
    uint32 padding7 : 1;
    uint32 _NTSEG1 : 8;
    uint32 _NBRP : 9;
    uint32 _NSJW : 7;
} MTTCAN0NBTPBits_t;

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
} MTTCAN0TSCCBits_t;

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
} MTTCAN0TSCVBits_t;

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
} MTTCAN0TOCCBits_t;

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
} MTTCAN0TOCVBits_t;

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
} MTTCAN0ECRBits_t;

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
} MTTCAN0PSRBits_t;

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
} MTTCAN0TDCRBits_t;

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
} MTTCAN0IRBits_t;

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
} MTTCAN0IEBits_t;

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
} MTTCAN0ILSBits_t;

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
} MTTCAN0ILEBits_t;

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
} MTTCAN0GFCBits_t;

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
} MTTCAN0SIDFCBits_t;

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
} MTTCAN0XIDFCBits_t;

typedef struct
{
    uint32 _EIDM : 29;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MTTCAN0XIDAMBits_t;

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
} MTTCAN0HPMSBits_t;

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
} MTTCAN0NDAT1Bits_t;

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
} MTTCAN0NDAT2Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    const uint32 _F0SA : 14;
    const uint32 _F0S : 7;
    uint32 padding23 : 1;
    const uint32 _F0WM : 7;
    const uint32 _F0OM : 1;
} MTTCAN0RXF0CBits_t;

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
} MTTCAN0RXF0SBits_t;

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
} MTTCAN0RXF0ABits_t;

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
} MTTCAN0RXBCBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _F1SA : 14;
    uint32 _F1S : 7;
    uint32 padding23 : 1;
    uint32 _F1WM : 7;
    uint32 _F1OM : 1;
} MTTCAN0RXF1CBits_t;

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
} MTTCAN0RXF1SBits_t;

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
} MTTCAN0RXF1ABits_t;

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
} MTTCAN0RXESCBits_t;

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
} MTTCAN0TXBCBits_t;

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
} MTTCAN0TXFQSBits_t;

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
} MTTCAN0TXESCBits_t;

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
} MTTCAN0TXBRPBits_t;

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
} MTTCAN0TXBARBits_t;

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
} MTTCAN0TXBCRBits_t;

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
} MTTCAN0TXBTOBits_t;

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
} MTTCAN0TXBCFBits_t;

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
} MTTCAN0TXBTIEBits_t;

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
} MTTCAN0TXBCIEBits_t;

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
} MTTCAN0TXEFCBits_t;

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
} MTTCAN0TXEFSBits_t;

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
} MTTCAN0TXEFABits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _TMSA : 14;
    uint32 _TME : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MTTCAN0TTTMCBits_t;

typedef struct
{
    uint32 _RID : 29;
    uint32 padding29 : 1;
    uint32 _XTD : 1;
    uint32 _RMPS : 1;
} MTTCAN0TTRMCBits_t;

typedef struct
{
    uint32 _OM : 2;
    uint32 padding2 : 1;
    uint32 _GEN : 1;
    uint32 _TM : 1;
    uint32 _LDSDL : 3;
    uint32 _IRTO : 7;
    uint32 _EECS : 1;
    uint32 _AWL : 7;
    uint32 padding23 : 1;
    uint32 _EGTF : 1;
    uint32 _ECC : 1;
    uint32 _EVTP : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MTTCAN0TTOCFBits_t;

typedef struct
{
    uint32 _CCM : 6;
    uint32 _CSS : 2;
    uint32 _TXEW : 4;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _ENTT : 12;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MTTCAN0TTMLMBits_t;

typedef struct
{
    uint32 _NCL : 16;
    uint32 _DC : 14;
    uint32 padding30 : 1;
    uint32 _ELT : 1;
} MTTCAN0TURCFBits_t;

typedef struct
{
    uint32 _SGT : 1;
    uint32 _ECS : 1;
    uint32 _SWP : 1;
    uint32 _SWS : 2;
    uint32 _RTIE : 1;
    uint32 _TMC : 2;
    uint32 _TTIE : 1;
    uint32 _GCS : 1;
    uint32 _FGP : 1;
    uint32 _TMG : 1;
    uint32 _NIG : 1;
    uint32 _ESCN : 1;
    uint32 padding14 : 1;
    const uint32 _LCKC : 1;
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
} MTTCAN0TTOCNBits_t;

typedef struct
{
    uint32 _TP : 16;
    uint32 _CTP : 16;
} MTTCAN0TTGTPBits_t;

typedef struct
{
    uint32 _TM : 16;
    uint32 _TICC : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    const uint32 _CLKM : 1;
} MTTCAN0TTTMKBits_t;

typedef struct
{
    uint32 _SBC : 1;
    uint32 _SMC : 1;
    uint32 _CSM : 1;
    uint32 _SOG : 1;
    uint32 _RTMI : 1;
    uint32 _TTMI : 1;
    uint32 _SWE : 1;
    uint32 _GTW : 1;
    uint32 _GTD : 1;
    uint32 _GTE : 1;
    uint32 _TXU : 1;
    uint32 _TXO : 1;
    uint32 _SE1 : 1;
    uint32 _SE2 : 1;
    uint32 _ELC : 1;
    uint32 _IWT : 1;
    uint32 _WT : 1;
    uint32 _AW : 1;
    uint32 _CER : 1;
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
} MTTCAN0TTIRBits_t;

typedef struct
{
    uint32 _SBCE : 1;
    uint32 _SMCE : 1;
    uint32 _CSME : 1;
    uint32 _SOGE : 1;
    uint32 _RTMIE : 1;
    uint32 _TTMIE : 1;
    uint32 _SWEE : 1;
    uint32 _GTWE : 1;
    uint32 _GTDE : 1;
    uint32 _GTEE : 1;
    uint32 _TXUE : 1;
    uint32 _TXOE : 1;
    uint32 _SE1E : 1;
    uint32 _SE2E : 1;
    uint32 _ELCE : 1;
    uint32 _IWTE : 1;
    uint32 _WTE : 1;
    uint32 _AWE : 1;
    uint32 _CERE : 1;
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
} MTTCAN0TTIEBits_t;

typedef struct
{
    uint32 _SBCL : 1;
    uint32 _SMCL : 1;
    uint32 _CSML : 1;
    uint32 _SOGL : 1;
    uint32 _RTMIL : 1;
    uint32 _TTMIL : 1;
    uint32 _SWEL : 1;
    uint32 _GTWL : 1;
    uint32 _GTDL : 1;
    uint32 _GTEL : 1;
    uint32 _TXUL : 1;
    uint32 _TXOL : 1;
    uint32 _SE1L : 1;
    uint32 _SE2L : 1;
    uint32 _ELCL : 1;
    uint32 _IWTL : 1;
    uint32 _WTL : 1;
    uint32 _AWL : 1;
    uint32 _CERL : 1;
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
} MTTCAN0TTILSBits_t;

typedef struct
{
    const uint32 _EL : 2;
    const uint32 _MS : 2;
    const uint32 _SYS : 2;
    const uint32 _QGTP : 1;
    const uint32 _QCS : 1;
    const uint32 _RTO : 8;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    const uint32 _WGTD : 1;
    const uint32 _GFI : 1;
    const uint32 _TMP : 3;
    const uint32 _GSI : 1;
    const uint32 _WFE : 1;
    const uint32 _AWE : 1;
    const uint32 _WECS : 1;
    const uint32 _SPL : 1;
} MTTCAN0TTOSTBits_t;

typedef struct
{
    const uint32 _NAV : 18;
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
} MTTCAN0TURNABits_t;

typedef struct
{
    const uint32 _LT : 16;
    const uint32 _GT : 16;
} MTTCAN0TTLGTBits_t;

typedef struct
{
    const uint32 _CT : 16;
    const uint32 _CC : 6;
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
} MTTCAN0TTCTCBits_t;

typedef struct
{
    const uint32 _CCV : 6;
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
    const uint32 _SWV : 16;
} MTTCAN0TTCPTBits_t;

typedef struct
{
    const uint32 _CSM : 16;
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
} MTTCAN0TTCSMBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const MTTCAN0CRELBits_t BIT;
} MTTCAN0CREL_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0ENDNBits_t BIT;
} MTTCAN0ENDN_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0DBTPBits_t BIT;
} MTTCAN0DBTP_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TESTBits_t BIT;
} MTTCAN0TEST_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0RWDBits_t BIT;
} MTTCAN0RWD_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0CCCRBits_t BIT;
} MTTCAN0CCCR_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0NBTPBits_t BIT;
} MTTCAN0NBTP_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TSCCBits_t BIT;
} MTTCAN0TSCC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TSCVBits_t BIT;
} MTTCAN0TSCV_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TOCCBits_t BIT;
} MTTCAN0TOCC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TOCVBits_t BIT;
} MTTCAN0TOCV_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0ECRBits_t BIT;
} MTTCAN0ECR_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0PSRBits_t BIT;
} MTTCAN0PSR_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TDCRBits_t BIT;
} MTTCAN0TDCR_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0IRBits_t BIT;
} MTTCAN0IR_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0IEBits_t BIT;
} MTTCAN0IE_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0ILSBits_t BIT;
} MTTCAN0ILS_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0ILEBits_t BIT;
} MTTCAN0ILE_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0GFCBits_t BIT;
} MTTCAN0GFC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0SIDFCBits_t BIT;
} MTTCAN0SIDFC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0XIDFCBits_t BIT;
} MTTCAN0XIDFC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0XIDAMBits_t BIT;
} MTTCAN0XIDAM_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0HPMSBits_t BIT;
} MTTCAN0HPMS_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0NDAT1Bits_t BIT;
} MTTCAN0NDAT1_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0NDAT2Bits_t BIT;
} MTTCAN0NDAT2_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0RXF0CBits_t BIT;
} MTTCAN0RXF0C_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0RXF0SBits_t BIT;
} MTTCAN0RXF0S_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0RXF0ABits_t BIT;
} MTTCAN0RXF0A_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0RXBCBits_t BIT;
} MTTCAN0RXBC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0RXF1CBits_t BIT;
} MTTCAN0RXF1C_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0RXF1SBits_t BIT;
} MTTCAN0RXF1S_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0RXF1ABits_t BIT;
} MTTCAN0RXF1A_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0RXESCBits_t BIT;
} MTTCAN0RXESC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXBCBits_t BIT;
} MTTCAN0TXBC_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TXFQSBits_t BIT;
} MTTCAN0TXFQS_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXESCBits_t BIT;
} MTTCAN0TXESC_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TXBRPBits_t BIT;
} MTTCAN0TXBRP_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXBARBits_t BIT;
} MTTCAN0TXBAR_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXBCRBits_t BIT;
} MTTCAN0TXBCR_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TXBTOBits_t BIT;
} MTTCAN0TXBTO_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TXBCFBits_t BIT;
} MTTCAN0TXBCF_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXBTIEBits_t BIT;
} MTTCAN0TXBTIE_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXBCIEBits_t BIT;
} MTTCAN0TXBCIE_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXEFCBits_t BIT;
} MTTCAN0TXEFC_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TXEFSBits_t BIT;
} MTTCAN0TXEFS_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TXEFABits_t BIT;
} MTTCAN0TXEFA_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTTMCBits_t BIT;
} MTTCAN0TTTMC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTRMCBits_t BIT;
} MTTCAN0TTRMC_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTOCFBits_t BIT;
} MTTCAN0TTOCF_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTMLMBits_t BIT;
} MTTCAN0TTMLM_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TURCFBits_t BIT;
} MTTCAN0TURCF_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTOCNBits_t BIT;
} MTTCAN0TTOCN_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTGTPBits_t BIT;
} MTTCAN0TTGTP_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTTMKBits_t BIT;
} MTTCAN0TTTMK_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTIRBits_t BIT;
} MTTCAN0TTIR_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTIEBits_t BIT;
} MTTCAN0TTIE_t;

typedef union
{
    uint32 UINT32;
    MTTCAN0TTILSBits_t BIT;
} MTTCAN0TTILS_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TTOSTBits_t BIT;
} MTTCAN0TTOST_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TURNABits_t BIT;
} MTTCAN0TURNA_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TTLGTBits_t BIT;
} MTTCAN0TTLGT_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TTCTCBits_t BIT;
} MTTCAN0TTCTC_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TTCPTBits_t BIT;
} MTTCAN0TTCPT_t;

typedef union
{
    uint32 UINT32;
    const MTTCAN0TTCSMBits_t BIT;
} MTTCAN0TTCSM_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(MTTCAN0CREL_BASE, 0xFFD30000, __READ, MTTCAN0CREL_t);
__IOREG(MTTCAN0ENDN_BASE, 0xFFD30004, __READ, MTTCAN0ENDN_t);
__IOREG(MTTCAN0DBTP_BASE, 0xFFD3000C, __READ_WRITE, MTTCAN0DBTP_t);
__IOREG(MTTCAN0TEST_BASE, 0xFFD30010, __READ_WRITE, MTTCAN0TEST_t);
__IOREG(MTTCAN0RWD_BASE, 0xFFD30014, __READ_WRITE, MTTCAN0RWD_t);
__IOREG(MTTCAN0CCCR_BASE, 0xFFD30018, __READ_WRITE, MTTCAN0CCCR_t);
__IOREG(MTTCAN0NBTP_BASE, 0xFFD3001C, __READ_WRITE, MTTCAN0NBTP_t);
__IOREG(MTTCAN0TSCC_BASE, 0xFFD30020, __READ_WRITE, MTTCAN0TSCC_t);
__IOREG(MTTCAN0TSCV_BASE, 0xFFD30024, __READ_WRITE, MTTCAN0TSCV_t);
__IOREG(MTTCAN0TOCC_BASE, 0xFFD30028, __READ_WRITE, MTTCAN0TOCC_t);
__IOREG(MTTCAN0TOCV_BASE, 0xFFD3002C, __READ_WRITE, MTTCAN0TOCV_t);
__IOREG(MTTCAN0ECR_BASE, 0xFFD30040, __READ, MTTCAN0ECR_t);
__IOREG(MTTCAN0PSR_BASE, 0xFFD30044, __READ, MTTCAN0PSR_t);
__IOREG(MTTCAN0TDCR_BASE, 0xFFD30048, __READ, MTTCAN0TDCR_t);
__IOREG(MTTCAN0IR_BASE, 0xFFD30050, __READ_WRITE, MTTCAN0IR_t);
__IOREG(MTTCAN0IE_BASE, 0xFFD30054, __READ_WRITE, MTTCAN0IE_t);
__IOREG(MTTCAN0ILS_BASE, 0xFFD30058, __READ_WRITE, MTTCAN0ILS_t);
__IOREG(MTTCAN0ILE_BASE, 0xFFD3005C, __READ_WRITE, MTTCAN0ILE_t);
__IOREG(MTTCAN0GFC_BASE, 0xFFD30080, __READ_WRITE, MTTCAN0GFC_t);
__IOREG(MTTCAN0SIDFC_BASE, 0xFFD30084, __READ_WRITE, MTTCAN0SIDFC_t);
__IOREG(MTTCAN0XIDFC_BASE, 0xFFD30088, __READ_WRITE, MTTCAN0XIDFC_t);
__IOREG(MTTCAN0XIDAM_BASE, 0xFFD30090, __READ_WRITE, MTTCAN0XIDAM_t);
__IOREG(MTTCAN0HPMS_BASE, 0xFFD30094, __READ, MTTCAN0HPMS_t);
__IOREG(MTTCAN0NDAT1_BASE, 0xFFD30098, __READ_WRITE, MTTCAN0NDAT1_t);
__IOREG(MTTCAN0NDAT2_BASE, 0xFFD3009C, __READ_WRITE, MTTCAN0NDAT2_t);
__IOREG(MTTCAN0RXF0C_BASE, 0xFFD300A0, __READ, MTTCAN0RXF0C_t);
__IOREG(MTTCAN0RXF0S_BASE, 0xFFD300A4, __READ, MTTCAN0RXF0S_t);
__IOREG(MTTCAN0RXF0A_BASE, 0xFFD300A8, __READ_WRITE, MTTCAN0RXF0A_t);
__IOREG(MTTCAN0RXBC_BASE, 0xFFD300AC, __READ_WRITE, MTTCAN0RXBC_t);
__IOREG(MTTCAN0RXF1C_BASE, 0xFFD300B0, __READ_WRITE, MTTCAN0RXF1C_t);
__IOREG(MTTCAN0RXF1S_BASE, 0xFFD300B4, __READ, MTTCAN0RXF1S_t);
__IOREG(MTTCAN0RXF1A_BASE, 0xFFD300B8, __READ_WRITE, MTTCAN0RXF1A_t);
__IOREG(MTTCAN0RXESC_BASE, 0xFFD300BC, __READ, MTTCAN0RXESC_t);
__IOREG(MTTCAN0TXBC_BASE, 0xFFD300C0, __READ_WRITE, MTTCAN0TXBC_t);
__IOREG(MTTCAN0TXFQS_BASE, 0xFFD300C4, __READ, MTTCAN0TXFQS_t);
__IOREG(MTTCAN0TXESC_BASE, 0xFFD300C8, __READ_WRITE, MTTCAN0TXESC_t);
__IOREG(MTTCAN0TXBRP_BASE, 0xFFD300CC, __READ, MTTCAN0TXBRP_t);
__IOREG(MTTCAN0TXBAR_BASE, 0xFFD300D0, __READ_WRITE, MTTCAN0TXBAR_t);
__IOREG(MTTCAN0TXBCR_BASE, 0xFFD300D4, __READ_WRITE, MTTCAN0TXBCR_t);
__IOREG(MTTCAN0TXBTO_BASE, 0xFFD300D8, __READ, MTTCAN0TXBTO_t);
__IOREG(MTTCAN0TXBCF_BASE, 0xFFD300DC, __READ, MTTCAN0TXBCF_t);
__IOREG(MTTCAN0TXBTIE_BASE, 0xFFD300E0, __READ_WRITE, MTTCAN0TXBTIE_t);
__IOREG(MTTCAN0TXBCIE_BASE, 0xFFD300E4, __READ_WRITE, MTTCAN0TXBCIE_t);
__IOREG(MTTCAN0TXEFC_BASE, 0xFFD300F0, __READ_WRITE, MTTCAN0TXEFC_t);
__IOREG(MTTCAN0TXEFS_BASE, 0xFFD300F4, __READ, MTTCAN0TXEFS_t);
__IOREG(MTTCAN0TXEFA_BASE, 0xFFD300F8, __READ_WRITE, MTTCAN0TXEFA_t);
__IOREG(MTTCAN0TTTMC_BASE, 0xFFD30100, __READ_WRITE, MTTCAN0TTTMC_t);
__IOREG(MTTCAN0TTRMC_BASE, 0xFFD30104, __READ_WRITE, MTTCAN0TTRMC_t);
__IOREG(MTTCAN0TTOCF_BASE, 0xFFD30108, __READ_WRITE, MTTCAN0TTOCF_t);
__IOREG(MTTCAN0TTMLM_BASE, 0xFFD3010C, __READ_WRITE, MTTCAN0TTMLM_t);
__IOREG(MTTCAN0TURCF_BASE, 0xFFD30110, __READ_WRITE, MTTCAN0TURCF_t);
__IOREG(MTTCAN0TTOCN_BASE, 0xFFD30114, __READ_WRITE, MTTCAN0TTOCN_t);
__IOREG(MTTCAN0TTGTP_BASE, 0xFFD30118, __READ_WRITE, MTTCAN0TTGTP_t);
__IOREG(MTTCAN0TTTMK_BASE, 0xFFD3011C, __READ_WRITE, MTTCAN0TTTMK_t);
__IOREG(MTTCAN0TTIR_BASE, 0xFFD30120, __READ_WRITE, MTTCAN0TTIR_t);
__IOREG(MTTCAN0TTIE_BASE, 0xFFD30124, __READ_WRITE, MTTCAN0TTIE_t);
__IOREG(MTTCAN0TTILS_BASE, 0xFFD30128, __READ_WRITE, MTTCAN0TTILS_t);
__IOREG(MTTCAN0TTOST_BASE, 0xFFD3012C, __READ, MTTCAN0TTOST_t);
__IOREG(MTTCAN0TURNA_BASE, 0xFFD30130, __READ, MTTCAN0TURNA_t);
__IOREG(MTTCAN0TTLGT_BASE, 0xFFD30134, __READ, MTTCAN0TTLGT_t);
__IOREG(MTTCAN0TTCTC_BASE, 0xFFD30138, __READ, MTTCAN0TTCTC_t);
__IOREG(MTTCAN0TTCPT_BASE, 0xFFD3013C, __READ, MTTCAN0TTCPT_t);
__IOREG(MTTCAN0TTCSM_BASE, 0xFFD30140, __READ, MTTCAN0TTCSM_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define MTTCAN0CREL MTTCAN0CREL_BASE.UINT32
#define MTTCAN0CREL_DAY MTTCAN0CREL_BASE.BIT._DAY
#define MTTCAN0CREL_MON MTTCAN0CREL_BASE.BIT._MON
#define MTTCAN0CREL_YEAR MTTCAN0CREL_BASE.BIT._YEAR
#define MTTCAN0CREL_SUBSTEP MTTCAN0CREL_BASE.BIT._SUBSTEP
#define MTTCAN0CREL_STEP MTTCAN0CREL_BASE.BIT._STEP
#define MTTCAN0CREL_REL MTTCAN0CREL_BASE.BIT._REL
#define MTTCAN0ENDN MTTCAN0ENDN_BASE.UINT32
#define MTTCAN0ENDN_ETV MTTCAN0ENDN_BASE.BIT._ETV
#define MTTCAN0DBTP MTTCAN0DBTP_BASE.UINT32
#define MTTCAN0DBTP_DSJW MTTCAN0DBTP_BASE.BIT._DSJW
#define MTTCAN0DBTP_DTSEG2 MTTCAN0DBTP_BASE.BIT._DTSEG2
#define MTTCAN0DBTP_DTSEG1 MTTCAN0DBTP_BASE.BIT._DTSEG1
#define MTTCAN0DBTP_DBRP MTTCAN0DBTP_BASE.BIT._DBRP
#define MTTCAN0DBTP_TDC MTTCAN0DBTP_BASE.BIT._TDC
#define MTTCAN0TEST MTTCAN0TEST_BASE.UINT32
#define MTTCAN0TEST_TAM MTTCAN0TEST_BASE.BIT._TAM
#define MTTCAN0TEST_TAT MTTCAN0TEST_BASE.BIT._TAT
#define MTTCAN0TEST_CAM MTTCAN0TEST_BASE.BIT._CAM
#define MTTCAN0TEST_CAT MTTCAN0TEST_BASE.BIT._CAT
#define MTTCAN0TEST_LBCK MTTCAN0TEST_BASE.BIT._LBCK
#define MTTCAN0TEST_TX MTTCAN0TEST_BASE.BIT._TX
#define MTTCAN0TEST_RX MTTCAN0TEST_BASE.BIT._RX
#define MTTCAN0RWD MTTCAN0RWD_BASE.UINT32
#define MTTCAN0RWD_WDC MTTCAN0RWD_BASE.BIT._WDC
#define MTTCAN0RWD_WDV MTTCAN0RWD_BASE.BIT._WDV
#define MTTCAN0CCCR MTTCAN0CCCR_BASE.UINT32
#define MTTCAN0CCCR_INIT MTTCAN0CCCR_BASE.BIT._INIT
#define MTTCAN0CCCR_CCE MTTCAN0CCCR_BASE.BIT._CCE
#define MTTCAN0CCCR_ASM MTTCAN0CCCR_BASE.BIT._ASM
#define MTTCAN0CCCR_CSA MTTCAN0CCCR_BASE.BIT._CSA
#define MTTCAN0CCCR_CSR MTTCAN0CCCR_BASE.BIT._CSR
#define MTTCAN0CCCR_MON MTTCAN0CCCR_BASE.BIT._MON
#define MTTCAN0CCCR_DAR MTTCAN0CCCR_BASE.BIT._DAR
#define MTTCAN0CCCR_TEST MTTCAN0CCCR_BASE.BIT._TEST
#define MTTCAN0CCCR_FDOE MTTCAN0CCCR_BASE.BIT._FDOE
#define MTTCAN0CCCR_BRSE MTTCAN0CCCR_BASE.BIT._BRSE
#define MTTCAN0CCCR_PXHD MTTCAN0CCCR_BASE.BIT._PXHD
#define MTTCAN0CCCR_EFBI MTTCAN0CCCR_BASE.BIT._EFBI
#define MTTCAN0CCCR_TXP MTTCAN0CCCR_BASE.BIT._TXP
#define MTTCAN0CCCR_NISO MTTCAN0CCCR_BASE.BIT._NISO
#define MTTCAN0NBTP MTTCAN0NBTP_BASE.UINT32
#define MTTCAN0NBTP_NTSEG2 MTTCAN0NBTP_BASE.BIT._NTSEG2
#define MTTCAN0NBTP_NTSEG1 MTTCAN0NBTP_BASE.BIT._NTSEG1
#define MTTCAN0NBTP_NBRP MTTCAN0NBTP_BASE.BIT._NBRP
#define MTTCAN0NBTP_NSJW MTTCAN0NBTP_BASE.BIT._NSJW
#define MTTCAN0TSCC MTTCAN0TSCC_BASE.UINT32
#define MTTCAN0TSCC_TSS MTTCAN0TSCC_BASE.BIT._TSS
#define MTTCAN0TSCC_TCP MTTCAN0TSCC_BASE.BIT._TCP
#define MTTCAN0TSCV MTTCAN0TSCV_BASE.UINT32
#define MTTCAN0TSCV_TSC MTTCAN0TSCV_BASE.BIT._TSC
#define MTTCAN0TOCC MTTCAN0TOCC_BASE.UINT32
#define MTTCAN0TOCC_ETOC MTTCAN0TOCC_BASE.BIT._ETOC
#define MTTCAN0TOCC_TOS MTTCAN0TOCC_BASE.BIT._TOS
#define MTTCAN0TOCC_TOP MTTCAN0TOCC_BASE.BIT._TOP
#define MTTCAN0TOCV MTTCAN0TOCV_BASE.UINT32
#define MTTCAN0TOCV_TOC MTTCAN0TOCV_BASE.BIT._TOC
#define MTTCAN0ECR MTTCAN0ECR_BASE.UINT32
#define MTTCAN0ECR_TEC MTTCAN0ECR_BASE.BIT._TEC
#define MTTCAN0ECR_REC MTTCAN0ECR_BASE.BIT._REC
#define MTTCAN0ECR_RP MTTCAN0ECR_BASE.BIT._RP
#define MTTCAN0ECR_CEL MTTCAN0ECR_BASE.BIT._CEL
#define MTTCAN0PSR MTTCAN0PSR_BASE.UINT32
#define MTTCAN0PSR_LEC MTTCAN0PSR_BASE.BIT._LEC
#define MTTCAN0PSR_ACT MTTCAN0PSR_BASE.BIT._ACT
#define MTTCAN0PSR_EP MTTCAN0PSR_BASE.BIT._EP
#define MTTCAN0PSR_EW MTTCAN0PSR_BASE.BIT._EW
#define MTTCAN0PSR_BO MTTCAN0PSR_BASE.BIT._BO
#define MTTCAN0PSR_DLEC MTTCAN0PSR_BASE.BIT._DLEC
#define MTTCAN0PSR_RESI MTTCAN0PSR_BASE.BIT._RESI
#define MTTCAN0PSR_RBRS MTTCAN0PSR_BASE.BIT._RBRS
#define MTTCAN0PSR_RFDF MTTCAN0PSR_BASE.BIT._RFDF
#define MTTCAN0PSR_PXE MTTCAN0PSR_BASE.BIT._PXE
#define MTTCAN0PSR_TDCV MTTCAN0PSR_BASE.BIT._TDCV
#define MTTCAN0TDCR MTTCAN0TDCR_BASE.UINT32
#define MTTCAN0TDCR_TDCF MTTCAN0TDCR_BASE.BIT._TDCF
#define MTTCAN0TDCR_TDCO MTTCAN0TDCR_BASE.BIT._TDCO
#define MTTCAN0IR MTTCAN0IR_BASE.UINT32
#define MTTCAN0IR_RF0N MTTCAN0IR_BASE.BIT._RF0N
#define MTTCAN0IR_RF0W MTTCAN0IR_BASE.BIT._RF0W
#define MTTCAN0IR_RF0F MTTCAN0IR_BASE.BIT._RF0F
#define MTTCAN0IR_RF0L MTTCAN0IR_BASE.BIT._RF0L
#define MTTCAN0IR_RF1N MTTCAN0IR_BASE.BIT._RF1N
#define MTTCAN0IR_RF1W MTTCAN0IR_BASE.BIT._RF1W
#define MTTCAN0IR_RF1F MTTCAN0IR_BASE.BIT._RF1F
#define MTTCAN0IR_RF1L MTTCAN0IR_BASE.BIT._RF1L
#define MTTCAN0IR_HPM MTTCAN0IR_BASE.BIT._HPM
#define MTTCAN0IR_TC MTTCAN0IR_BASE.BIT._TC
#define MTTCAN0IR_TCF MTTCAN0IR_BASE.BIT._TCF
#define MTTCAN0IR_TFE MTTCAN0IR_BASE.BIT._TFE
#define MTTCAN0IR_TEFN MTTCAN0IR_BASE.BIT._TEFN
#define MTTCAN0IR_TEFW MTTCAN0IR_BASE.BIT._TEFW
#define MTTCAN0IR_TEFF MTTCAN0IR_BASE.BIT._TEFF
#define MTTCAN0IR_TEFL MTTCAN0IR_BASE.BIT._TEFL
#define MTTCAN0IR_TSW MTTCAN0IR_BASE.BIT._TSW
#define MTTCAN0IR_MRAF MTTCAN0IR_BASE.BIT._MRAF
#define MTTCAN0IR_TOO MTTCAN0IR_BASE.BIT._TOO
#define MTTCAN0IR_DRX MTTCAN0IR_BASE.BIT._DRX
#define MTTCAN0IR_BEC MTTCAN0IR_BASE.BIT._BEC
#define MTTCAN0IR_BEU MTTCAN0IR_BASE.BIT._BEU
#define MTTCAN0IR_ELO MTTCAN0IR_BASE.BIT._ELO
#define MTTCAN0IR_EP MTTCAN0IR_BASE.BIT._EP
#define MTTCAN0IR_EW MTTCAN0IR_BASE.BIT._EW
#define MTTCAN0IR_BO MTTCAN0IR_BASE.BIT._BO
#define MTTCAN0IR_WDI MTTCAN0IR_BASE.BIT._WDI
#define MTTCAN0IR_PEA MTTCAN0IR_BASE.BIT._PEA
#define MTTCAN0IR_PED MTTCAN0IR_BASE.BIT._PED
#define MTTCAN0IR_ARA MTTCAN0IR_BASE.BIT._ARA
#define MTTCAN0IE MTTCAN0IE_BASE.UINT32
#define MTTCAN0IE_RF0NE MTTCAN0IE_BASE.BIT._RF0NE
#define MTTCAN0IE_RF0WE MTTCAN0IE_BASE.BIT._RF0WE
#define MTTCAN0IE_RF0FE MTTCAN0IE_BASE.BIT._RF0FE
#define MTTCAN0IE_RF0LE MTTCAN0IE_BASE.BIT._RF0LE
#define MTTCAN0IE_RF1NE MTTCAN0IE_BASE.BIT._RF1NE
#define MTTCAN0IE_RF1WE MTTCAN0IE_BASE.BIT._RF1WE
#define MTTCAN0IE_RF1FE MTTCAN0IE_BASE.BIT._RF1FE
#define MTTCAN0IE_RF1LE MTTCAN0IE_BASE.BIT._RF1LE
#define MTTCAN0IE_HPME MTTCAN0IE_BASE.BIT._HPME
#define MTTCAN0IE_TCE MTTCAN0IE_BASE.BIT._TCE
#define MTTCAN0IE_TCFE MTTCAN0IE_BASE.BIT._TCFE
#define MTTCAN0IE_TFEE MTTCAN0IE_BASE.BIT._TFEE
#define MTTCAN0IE_TEFNE MTTCAN0IE_BASE.BIT._TEFNE
#define MTTCAN0IE_TEFWE MTTCAN0IE_BASE.BIT._TEFWE
#define MTTCAN0IE_TEFFE MTTCAN0IE_BASE.BIT._TEFFE
#define MTTCAN0IE_TEFLE MTTCAN0IE_BASE.BIT._TEFLE
#define MTTCAN0IE_TSWE MTTCAN0IE_BASE.BIT._TSWE
#define MTTCAN0IE_MRAFE MTTCAN0IE_BASE.BIT._MRAFE
#define MTTCAN0IE_TOOE MTTCAN0IE_BASE.BIT._TOOE
#define MTTCAN0IE_DRXE MTTCAN0IE_BASE.BIT._DRXE
#define MTTCAN0IE_BECE MTTCAN0IE_BASE.BIT._BECE
#define MTTCAN0IE_BEUE MTTCAN0IE_BASE.BIT._BEUE
#define MTTCAN0IE_ELOE MTTCAN0IE_BASE.BIT._ELOE
#define MTTCAN0IE_EPE MTTCAN0IE_BASE.BIT._EPE
#define MTTCAN0IE_EWE MTTCAN0IE_BASE.BIT._EWE
#define MTTCAN0IE_BOE MTTCAN0IE_BASE.BIT._BOE
#define MTTCAN0IE_WDIE MTTCAN0IE_BASE.BIT._WDIE
#define MTTCAN0IE_PEAE MTTCAN0IE_BASE.BIT._PEAE
#define MTTCAN0IE_PEDE MTTCAN0IE_BASE.BIT._PEDE
#define MTTCAN0IE_ARAE MTTCAN0IE_BASE.BIT._ARAE
#define MTTCAN0ILS MTTCAN0ILS_BASE.UINT32
#define MTTCAN0ILS_RF0NL MTTCAN0ILS_BASE.BIT._RF0NL
#define MTTCAN0ILS_RF0WL MTTCAN0ILS_BASE.BIT._RF0WL
#define MTTCAN0ILS_RF0FL MTTCAN0ILS_BASE.BIT._RF0FL
#define MTTCAN0ILS_RF0LL MTTCAN0ILS_BASE.BIT._RF0LL
#define MTTCAN0ILS_RF1NL MTTCAN0ILS_BASE.BIT._RF1NL
#define MTTCAN0ILS_RF1WL MTTCAN0ILS_BASE.BIT._RF1WL
#define MTTCAN0ILS_RF1FL MTTCAN0ILS_BASE.BIT._RF1FL
#define MTTCAN0ILS_RF1LL MTTCAN0ILS_BASE.BIT._RF1LL
#define MTTCAN0ILS_HPML MTTCAN0ILS_BASE.BIT._HPML
#define MTTCAN0ILS_TCL MTTCAN0ILS_BASE.BIT._TCL
#define MTTCAN0ILS_TCFL MTTCAN0ILS_BASE.BIT._TCFL
#define MTTCAN0ILS_TFEL MTTCAN0ILS_BASE.BIT._TFEL
#define MTTCAN0ILS_TEFNL MTTCAN0ILS_BASE.BIT._TEFNL
#define MTTCAN0ILS_TEFWL MTTCAN0ILS_BASE.BIT._TEFWL
#define MTTCAN0ILS_TEFFL MTTCAN0ILS_BASE.BIT._TEFFL
#define MTTCAN0ILS_TEFLL MTTCAN0ILS_BASE.BIT._TEFLL
#define MTTCAN0ILS_TSWL MTTCAN0ILS_BASE.BIT._TSWL
#define MTTCAN0ILS_MRAFL MTTCAN0ILS_BASE.BIT._MRAFL
#define MTTCAN0ILS_TOOL MTTCAN0ILS_BASE.BIT._TOOL
#define MTTCAN0ILS_DRXL MTTCAN0ILS_BASE.BIT._DRXL
#define MTTCAN0ILS_BECL MTTCAN0ILS_BASE.BIT._BECL
#define MTTCAN0ILS_BEUL MTTCAN0ILS_BASE.BIT._BEUL
#define MTTCAN0ILS_ELOL MTTCAN0ILS_BASE.BIT._ELOL
#define MTTCAN0ILS_EPL MTTCAN0ILS_BASE.BIT._EPL
#define MTTCAN0ILS_EWL MTTCAN0ILS_BASE.BIT._EWL
#define MTTCAN0ILS_BOL MTTCAN0ILS_BASE.BIT._BOL
#define MTTCAN0ILS_WDIL MTTCAN0ILS_BASE.BIT._WDIL
#define MTTCAN0ILS_PEAL MTTCAN0ILS_BASE.BIT._PEAL
#define MTTCAN0ILS_PEDL MTTCAN0ILS_BASE.BIT._PEDL
#define MTTCAN0ILS_ARAL MTTCAN0ILS_BASE.BIT._ARAL
#define MTTCAN0ILE MTTCAN0ILE_BASE.UINT32
#define MTTCAN0ILE_EINT0 MTTCAN0ILE_BASE.BIT._EINT0
#define MTTCAN0ILE_EINT1 MTTCAN0ILE_BASE.BIT._EINT1
#define MTTCAN0GFC MTTCAN0GFC_BASE.UINT32
#define MTTCAN0GFC_RRFE MTTCAN0GFC_BASE.BIT._RRFE
#define MTTCAN0GFC_RRFS MTTCAN0GFC_BASE.BIT._RRFS
#define MTTCAN0GFC_ANFE MTTCAN0GFC_BASE.BIT._ANFE
#define MTTCAN0GFC_ANFS MTTCAN0GFC_BASE.BIT._ANFS
#define MTTCAN0SIDFC MTTCAN0SIDFC_BASE.UINT32
#define MTTCAN0SIDFC_FLSSA MTTCAN0SIDFC_BASE.BIT._FLSSA
#define MTTCAN0SIDFC_LSS MTTCAN0SIDFC_BASE.BIT._LSS
#define MTTCAN0XIDFC MTTCAN0XIDFC_BASE.UINT32
#define MTTCAN0XIDFC_FLESA MTTCAN0XIDFC_BASE.BIT._FLESA
#define MTTCAN0XIDFC_LSE MTTCAN0XIDFC_BASE.BIT._LSE
#define MTTCAN0XIDAM MTTCAN0XIDAM_BASE.UINT32
#define MTTCAN0XIDAM_EIDM MTTCAN0XIDAM_BASE.BIT._EIDM
#define MTTCAN0HPMS MTTCAN0HPMS_BASE.UINT32
#define MTTCAN0HPMS_BIDX MTTCAN0HPMS_BASE.BIT._BIDX
#define MTTCAN0HPMS_MSI MTTCAN0HPMS_BASE.BIT._MSI
#define MTTCAN0HPMS_FIDX MTTCAN0HPMS_BASE.BIT._FIDX
#define MTTCAN0HPMS_FLST MTTCAN0HPMS_BASE.BIT._FLST
#define MTTCAN0NDAT1 MTTCAN0NDAT1_BASE.UINT32
#define MTTCAN0NDAT1_ND0 MTTCAN0NDAT1_BASE.BIT._ND0
#define MTTCAN0NDAT1_ND1 MTTCAN0NDAT1_BASE.BIT._ND1
#define MTTCAN0NDAT1_ND2 MTTCAN0NDAT1_BASE.BIT._ND2
#define MTTCAN0NDAT1_ND3 MTTCAN0NDAT1_BASE.BIT._ND3
#define MTTCAN0NDAT1_ND4 MTTCAN0NDAT1_BASE.BIT._ND4
#define MTTCAN0NDAT1_ND5 MTTCAN0NDAT1_BASE.BIT._ND5
#define MTTCAN0NDAT1_ND6 MTTCAN0NDAT1_BASE.BIT._ND6
#define MTTCAN0NDAT1_ND7 MTTCAN0NDAT1_BASE.BIT._ND7
#define MTTCAN0NDAT1_ND8 MTTCAN0NDAT1_BASE.BIT._ND8
#define MTTCAN0NDAT1_ND9 MTTCAN0NDAT1_BASE.BIT._ND9
#define MTTCAN0NDAT1_ND10 MTTCAN0NDAT1_BASE.BIT._ND10
#define MTTCAN0NDAT1_ND11 MTTCAN0NDAT1_BASE.BIT._ND11
#define MTTCAN0NDAT1_ND12 MTTCAN0NDAT1_BASE.BIT._ND12
#define MTTCAN0NDAT1_ND13 MTTCAN0NDAT1_BASE.BIT._ND13
#define MTTCAN0NDAT1_ND14 MTTCAN0NDAT1_BASE.BIT._ND14
#define MTTCAN0NDAT1_ND15 MTTCAN0NDAT1_BASE.BIT._ND15
#define MTTCAN0NDAT1_ND16 MTTCAN0NDAT1_BASE.BIT._ND16
#define MTTCAN0NDAT1_ND17 MTTCAN0NDAT1_BASE.BIT._ND17
#define MTTCAN0NDAT1_ND18 MTTCAN0NDAT1_BASE.BIT._ND18
#define MTTCAN0NDAT1_ND19 MTTCAN0NDAT1_BASE.BIT._ND19
#define MTTCAN0NDAT1_ND20 MTTCAN0NDAT1_BASE.BIT._ND20
#define MTTCAN0NDAT1_ND21 MTTCAN0NDAT1_BASE.BIT._ND21
#define MTTCAN0NDAT1_ND22 MTTCAN0NDAT1_BASE.BIT._ND22
#define MTTCAN0NDAT1_ND23 MTTCAN0NDAT1_BASE.BIT._ND23
#define MTTCAN0NDAT1_ND24 MTTCAN0NDAT1_BASE.BIT._ND24
#define MTTCAN0NDAT1_ND25 MTTCAN0NDAT1_BASE.BIT._ND25
#define MTTCAN0NDAT1_ND26 MTTCAN0NDAT1_BASE.BIT._ND26
#define MTTCAN0NDAT1_ND27 MTTCAN0NDAT1_BASE.BIT._ND27
#define MTTCAN0NDAT1_ND28 MTTCAN0NDAT1_BASE.BIT._ND28
#define MTTCAN0NDAT1_ND29 MTTCAN0NDAT1_BASE.BIT._ND29
#define MTTCAN0NDAT1_ND30 MTTCAN0NDAT1_BASE.BIT._ND30
#define MTTCAN0NDAT1_ND31 MTTCAN0NDAT1_BASE.BIT._ND31
#define MTTCAN0NDAT2 MTTCAN0NDAT2_BASE.UINT32
#define MTTCAN0NDAT2_ND32 MTTCAN0NDAT2_BASE.BIT._ND32
#define MTTCAN0NDAT2_ND33 MTTCAN0NDAT2_BASE.BIT._ND33
#define MTTCAN0NDAT2_ND34 MTTCAN0NDAT2_BASE.BIT._ND34
#define MTTCAN0NDAT2_ND35 MTTCAN0NDAT2_BASE.BIT._ND35
#define MTTCAN0NDAT2_ND36 MTTCAN0NDAT2_BASE.BIT._ND36
#define MTTCAN0NDAT2_ND37 MTTCAN0NDAT2_BASE.BIT._ND37
#define MTTCAN0NDAT2_ND38 MTTCAN0NDAT2_BASE.BIT._ND38
#define MTTCAN0NDAT2_ND39 MTTCAN0NDAT2_BASE.BIT._ND39
#define MTTCAN0NDAT2_ND40 MTTCAN0NDAT2_BASE.BIT._ND40
#define MTTCAN0NDAT2_ND41 MTTCAN0NDAT2_BASE.BIT._ND41
#define MTTCAN0NDAT2_ND42 MTTCAN0NDAT2_BASE.BIT._ND42
#define MTTCAN0NDAT2_ND43 MTTCAN0NDAT2_BASE.BIT._ND43
#define MTTCAN0NDAT2_ND44 MTTCAN0NDAT2_BASE.BIT._ND44
#define MTTCAN0NDAT2_ND45 MTTCAN0NDAT2_BASE.BIT._ND45
#define MTTCAN0NDAT2_ND46 MTTCAN0NDAT2_BASE.BIT._ND46
#define MTTCAN0NDAT2_ND47 MTTCAN0NDAT2_BASE.BIT._ND47
#define MTTCAN0NDAT2_ND48 MTTCAN0NDAT2_BASE.BIT._ND48
#define MTTCAN0NDAT2_ND49 MTTCAN0NDAT2_BASE.BIT._ND49
#define MTTCAN0NDAT2_ND50 MTTCAN0NDAT2_BASE.BIT._ND50
#define MTTCAN0NDAT2_ND51 MTTCAN0NDAT2_BASE.BIT._ND51
#define MTTCAN0NDAT2_ND52 MTTCAN0NDAT2_BASE.BIT._ND52
#define MTTCAN0NDAT2_ND53 MTTCAN0NDAT2_BASE.BIT._ND53
#define MTTCAN0NDAT2_ND54 MTTCAN0NDAT2_BASE.BIT._ND54
#define MTTCAN0NDAT2_ND55 MTTCAN0NDAT2_BASE.BIT._ND55
#define MTTCAN0NDAT2_ND56 MTTCAN0NDAT2_BASE.BIT._ND56
#define MTTCAN0NDAT2_ND57 MTTCAN0NDAT2_BASE.BIT._ND57
#define MTTCAN0NDAT2_ND58 MTTCAN0NDAT2_BASE.BIT._ND58
#define MTTCAN0NDAT2_ND59 MTTCAN0NDAT2_BASE.BIT._ND59
#define MTTCAN0NDAT2_ND60 MTTCAN0NDAT2_BASE.BIT._ND60
#define MTTCAN0NDAT2_ND61 MTTCAN0NDAT2_BASE.BIT._ND61
#define MTTCAN0NDAT2_ND62 MTTCAN0NDAT2_BASE.BIT._ND62
#define MTTCAN0NDAT2_ND63 MTTCAN0NDAT2_BASE.BIT._ND63
#define MTTCAN0RXF0C MTTCAN0RXF0C_BASE.UINT32
#define MTTCAN0RXF0C_F0SA MTTCAN0RXF0C_BASE.BIT._F0SA
#define MTTCAN0RXF0C_F0S MTTCAN0RXF0C_BASE.BIT._F0S
#define MTTCAN0RXF0C_F0WM MTTCAN0RXF0C_BASE.BIT._F0WM
#define MTTCAN0RXF0C_F0OM MTTCAN0RXF0C_BASE.BIT._F0OM
#define MTTCAN0RXF0S MTTCAN0RXF0S_BASE.UINT32
#define MTTCAN0RXF0S_F0FL MTTCAN0RXF0S_BASE.BIT._F0FL
#define MTTCAN0RXF0S_F0GI MTTCAN0RXF0S_BASE.BIT._F0GI
#define MTTCAN0RXF0S_F0PI MTTCAN0RXF0S_BASE.BIT._F0PI
#define MTTCAN0RXF0S_F0F MTTCAN0RXF0S_BASE.BIT._F0F
#define MTTCAN0RXF0S_RF0L MTTCAN0RXF0S_BASE.BIT._RF0L
#define MTTCAN0RXF0A MTTCAN0RXF0A_BASE.UINT32
#define MTTCAN0RXF0A_F0AI MTTCAN0RXF0A_BASE.BIT._F0AI
#define MTTCAN0RXBC MTTCAN0RXBC_BASE.UINT32
#define MTTCAN0RXBC_RBSA MTTCAN0RXBC_BASE.BIT._RBSA
#define MTTCAN0RXF1C MTTCAN0RXF1C_BASE.UINT32
#define MTTCAN0RXF1C_F1SA MTTCAN0RXF1C_BASE.BIT._F1SA
#define MTTCAN0RXF1C_F1S MTTCAN0RXF1C_BASE.BIT._F1S
#define MTTCAN0RXF1C_F1WM MTTCAN0RXF1C_BASE.BIT._F1WM
#define MTTCAN0RXF1C_F1OM MTTCAN0RXF1C_BASE.BIT._F1OM
#define MTTCAN0RXF1S MTTCAN0RXF1S_BASE.UINT32
#define MTTCAN0RXF1S_F1FL MTTCAN0RXF1S_BASE.BIT._F1FL
#define MTTCAN0RXF1S_F1GI MTTCAN0RXF1S_BASE.BIT._F1GI
#define MTTCAN0RXF1S_F1PI MTTCAN0RXF1S_BASE.BIT._F1PI
#define MTTCAN0RXF1S_F1F MTTCAN0RXF1S_BASE.BIT._F1F
#define MTTCAN0RXF1S_RF1L MTTCAN0RXF1S_BASE.BIT._RF1L
#define MTTCAN0RXF1S_DMS MTTCAN0RXF1S_BASE.BIT._DMS
#define MTTCAN0RXF1A MTTCAN0RXF1A_BASE.UINT32
#define MTTCAN0RXF1A_F1AI MTTCAN0RXF1A_BASE.BIT._F1AI
#define MTTCAN0RXESC MTTCAN0RXESC_BASE.UINT32
#define MTTCAN0RXESC_F0DS MTTCAN0RXESC_BASE.BIT._F0DS
#define MTTCAN0RXESC_F1DS MTTCAN0RXESC_BASE.BIT._F1DS
#define MTTCAN0RXESC_RBDS MTTCAN0RXESC_BASE.BIT._RBDS
#define MTTCAN0TXBC MTTCAN0TXBC_BASE.UINT32
#define MTTCAN0TXBC_TBSA MTTCAN0TXBC_BASE.BIT._TBSA
#define MTTCAN0TXBC_NDTB MTTCAN0TXBC_BASE.BIT._NDTB
#define MTTCAN0TXBC_TFQS MTTCAN0TXBC_BASE.BIT._TFQS
#define MTTCAN0TXBC_TFQM MTTCAN0TXBC_BASE.BIT._TFQM
#define MTTCAN0TXFQS MTTCAN0TXFQS_BASE.UINT32
#define MTTCAN0TXFQS_TFFL MTTCAN0TXFQS_BASE.BIT._TFFL
#define MTTCAN0TXFQS_TFGI MTTCAN0TXFQS_BASE.BIT._TFGI
#define MTTCAN0TXFQS_TFQPI MTTCAN0TXFQS_BASE.BIT._TFQPI
#define MTTCAN0TXFQS_TFQF MTTCAN0TXFQS_BASE.BIT._TFQF
#define MTTCAN0TXESC MTTCAN0TXESC_BASE.UINT32
#define MTTCAN0TXESC_TBDS MTTCAN0TXESC_BASE.BIT._TBDS
#define MTTCAN0TXBRP MTTCAN0TXBRP_BASE.UINT32
#define MTTCAN0TXBRP_TRP0 MTTCAN0TXBRP_BASE.BIT._TRP0
#define MTTCAN0TXBRP_TRP1 MTTCAN0TXBRP_BASE.BIT._TRP1
#define MTTCAN0TXBRP_TRP2 MTTCAN0TXBRP_BASE.BIT._TRP2
#define MTTCAN0TXBRP_TRP3 MTTCAN0TXBRP_BASE.BIT._TRP3
#define MTTCAN0TXBRP_TRP4 MTTCAN0TXBRP_BASE.BIT._TRP4
#define MTTCAN0TXBRP_TRP5 MTTCAN0TXBRP_BASE.BIT._TRP5
#define MTTCAN0TXBRP_TRP6 MTTCAN0TXBRP_BASE.BIT._TRP6
#define MTTCAN0TXBRP_TRP7 MTTCAN0TXBRP_BASE.BIT._TRP7
#define MTTCAN0TXBRP_TRP8 MTTCAN0TXBRP_BASE.BIT._TRP8
#define MTTCAN0TXBRP_TRP9 MTTCAN0TXBRP_BASE.BIT._TRP9
#define MTTCAN0TXBRP_TRP10 MTTCAN0TXBRP_BASE.BIT._TRP10
#define MTTCAN0TXBRP_TRP11 MTTCAN0TXBRP_BASE.BIT._TRP11
#define MTTCAN0TXBRP_TRP12 MTTCAN0TXBRP_BASE.BIT._TRP12
#define MTTCAN0TXBRP_TRP13 MTTCAN0TXBRP_BASE.BIT._TRP13
#define MTTCAN0TXBRP_TRP14 MTTCAN0TXBRP_BASE.BIT._TRP14
#define MTTCAN0TXBRP_TRP15 MTTCAN0TXBRP_BASE.BIT._TRP15
#define MTTCAN0TXBRP_TRP16 MTTCAN0TXBRP_BASE.BIT._TRP16
#define MTTCAN0TXBRP_TRP17 MTTCAN0TXBRP_BASE.BIT._TRP17
#define MTTCAN0TXBRP_TRP18 MTTCAN0TXBRP_BASE.BIT._TRP18
#define MTTCAN0TXBRP_TRP19 MTTCAN0TXBRP_BASE.BIT._TRP19
#define MTTCAN0TXBRP_TRP20 MTTCAN0TXBRP_BASE.BIT._TRP20
#define MTTCAN0TXBRP_TRP21 MTTCAN0TXBRP_BASE.BIT._TRP21
#define MTTCAN0TXBRP_TRP22 MTTCAN0TXBRP_BASE.BIT._TRP22
#define MTTCAN0TXBRP_TRP23 MTTCAN0TXBRP_BASE.BIT._TRP23
#define MTTCAN0TXBRP_TRP24 MTTCAN0TXBRP_BASE.BIT._TRP24
#define MTTCAN0TXBRP_TRP25 MTTCAN0TXBRP_BASE.BIT._TRP25
#define MTTCAN0TXBRP_TRP26 MTTCAN0TXBRP_BASE.BIT._TRP26
#define MTTCAN0TXBRP_TRP27 MTTCAN0TXBRP_BASE.BIT._TRP27
#define MTTCAN0TXBRP_TRP28 MTTCAN0TXBRP_BASE.BIT._TRP28
#define MTTCAN0TXBRP_TRP29 MTTCAN0TXBRP_BASE.BIT._TRP29
#define MTTCAN0TXBRP_TRP30 MTTCAN0TXBRP_BASE.BIT._TRP30
#define MTTCAN0TXBRP_TRP31 MTTCAN0TXBRP_BASE.BIT._TRP31
#define MTTCAN0TXBAR MTTCAN0TXBAR_BASE.UINT32
#define MTTCAN0TXBAR_AR0 MTTCAN0TXBAR_BASE.BIT._AR0
#define MTTCAN0TXBAR_AR1 MTTCAN0TXBAR_BASE.BIT._AR1
#define MTTCAN0TXBAR_AR2 MTTCAN0TXBAR_BASE.BIT._AR2
#define MTTCAN0TXBAR_AR3 MTTCAN0TXBAR_BASE.BIT._AR3
#define MTTCAN0TXBAR_AR4 MTTCAN0TXBAR_BASE.BIT._AR4
#define MTTCAN0TXBAR_AR5 MTTCAN0TXBAR_BASE.BIT._AR5
#define MTTCAN0TXBAR_AR6 MTTCAN0TXBAR_BASE.BIT._AR6
#define MTTCAN0TXBAR_AR7 MTTCAN0TXBAR_BASE.BIT._AR7
#define MTTCAN0TXBAR_AR8 MTTCAN0TXBAR_BASE.BIT._AR8
#define MTTCAN0TXBAR_AR9 MTTCAN0TXBAR_BASE.BIT._AR9
#define MTTCAN0TXBAR_AR10 MTTCAN0TXBAR_BASE.BIT._AR10
#define MTTCAN0TXBAR_AR11 MTTCAN0TXBAR_BASE.BIT._AR11
#define MTTCAN0TXBAR_AR12 MTTCAN0TXBAR_BASE.BIT._AR12
#define MTTCAN0TXBAR_AR13 MTTCAN0TXBAR_BASE.BIT._AR13
#define MTTCAN0TXBAR_AR14 MTTCAN0TXBAR_BASE.BIT._AR14
#define MTTCAN0TXBAR_AR15 MTTCAN0TXBAR_BASE.BIT._AR15
#define MTTCAN0TXBAR_AR16 MTTCAN0TXBAR_BASE.BIT._AR16
#define MTTCAN0TXBAR_AR17 MTTCAN0TXBAR_BASE.BIT._AR17
#define MTTCAN0TXBAR_AR18 MTTCAN0TXBAR_BASE.BIT._AR18
#define MTTCAN0TXBAR_AR19 MTTCAN0TXBAR_BASE.BIT._AR19
#define MTTCAN0TXBAR_AR20 MTTCAN0TXBAR_BASE.BIT._AR20
#define MTTCAN0TXBAR_AR21 MTTCAN0TXBAR_BASE.BIT._AR21
#define MTTCAN0TXBAR_AR22 MTTCAN0TXBAR_BASE.BIT._AR22
#define MTTCAN0TXBAR_AR23 MTTCAN0TXBAR_BASE.BIT._AR23
#define MTTCAN0TXBAR_AR24 MTTCAN0TXBAR_BASE.BIT._AR24
#define MTTCAN0TXBAR_AR25 MTTCAN0TXBAR_BASE.BIT._AR25
#define MTTCAN0TXBAR_AR26 MTTCAN0TXBAR_BASE.BIT._AR26
#define MTTCAN0TXBAR_AR27 MTTCAN0TXBAR_BASE.BIT._AR27
#define MTTCAN0TXBAR_AR28 MTTCAN0TXBAR_BASE.BIT._AR28
#define MTTCAN0TXBAR_AR29 MTTCAN0TXBAR_BASE.BIT._AR29
#define MTTCAN0TXBAR_AR30 MTTCAN0TXBAR_BASE.BIT._AR30
#define MTTCAN0TXBAR_AR31 MTTCAN0TXBAR_BASE.BIT._AR31
#define MTTCAN0TXBCR MTTCAN0TXBCR_BASE.UINT32
#define MTTCAN0TXBCR_CR0 MTTCAN0TXBCR_BASE.BIT._CR0
#define MTTCAN0TXBCR_CR1 MTTCAN0TXBCR_BASE.BIT._CR1
#define MTTCAN0TXBCR_CR2 MTTCAN0TXBCR_BASE.BIT._CR2
#define MTTCAN0TXBCR_CR3 MTTCAN0TXBCR_BASE.BIT._CR3
#define MTTCAN0TXBCR_CR4 MTTCAN0TXBCR_BASE.BIT._CR4
#define MTTCAN0TXBCR_CR5 MTTCAN0TXBCR_BASE.BIT._CR5
#define MTTCAN0TXBCR_CR6 MTTCAN0TXBCR_BASE.BIT._CR6
#define MTTCAN0TXBCR_CR7 MTTCAN0TXBCR_BASE.BIT._CR7
#define MTTCAN0TXBCR_CR8 MTTCAN0TXBCR_BASE.BIT._CR8
#define MTTCAN0TXBCR_CR9 MTTCAN0TXBCR_BASE.BIT._CR9
#define MTTCAN0TXBCR_CR10 MTTCAN0TXBCR_BASE.BIT._CR10
#define MTTCAN0TXBCR_CR11 MTTCAN0TXBCR_BASE.BIT._CR11
#define MTTCAN0TXBCR_CR12 MTTCAN0TXBCR_BASE.BIT._CR12
#define MTTCAN0TXBCR_CR13 MTTCAN0TXBCR_BASE.BIT._CR13
#define MTTCAN0TXBCR_CR14 MTTCAN0TXBCR_BASE.BIT._CR14
#define MTTCAN0TXBCR_CR15 MTTCAN0TXBCR_BASE.BIT._CR15
#define MTTCAN0TXBCR_CR16 MTTCAN0TXBCR_BASE.BIT._CR16
#define MTTCAN0TXBCR_CR17 MTTCAN0TXBCR_BASE.BIT._CR17
#define MTTCAN0TXBCR_CR18 MTTCAN0TXBCR_BASE.BIT._CR18
#define MTTCAN0TXBCR_CR19 MTTCAN0TXBCR_BASE.BIT._CR19
#define MTTCAN0TXBCR_CR20 MTTCAN0TXBCR_BASE.BIT._CR20
#define MTTCAN0TXBCR_CR21 MTTCAN0TXBCR_BASE.BIT._CR21
#define MTTCAN0TXBCR_CR22 MTTCAN0TXBCR_BASE.BIT._CR22
#define MTTCAN0TXBCR_CR23 MTTCAN0TXBCR_BASE.BIT._CR23
#define MTTCAN0TXBCR_CR24 MTTCAN0TXBCR_BASE.BIT._CR24
#define MTTCAN0TXBCR_CR25 MTTCAN0TXBCR_BASE.BIT._CR25
#define MTTCAN0TXBCR_CR26 MTTCAN0TXBCR_BASE.BIT._CR26
#define MTTCAN0TXBCR_CR27 MTTCAN0TXBCR_BASE.BIT._CR27
#define MTTCAN0TXBCR_CR28 MTTCAN0TXBCR_BASE.BIT._CR28
#define MTTCAN0TXBCR_CR29 MTTCAN0TXBCR_BASE.BIT._CR29
#define MTTCAN0TXBCR_CR30 MTTCAN0TXBCR_BASE.BIT._CR30
#define MTTCAN0TXBCR_CR31 MTTCAN0TXBCR_BASE.BIT._CR31
#define MTTCAN0TXBTO MTTCAN0TXBTO_BASE.UINT32
#define MTTCAN0TXBTO_TO0 MTTCAN0TXBTO_BASE.BIT._TO0
#define MTTCAN0TXBTO_TO1 MTTCAN0TXBTO_BASE.BIT._TO1
#define MTTCAN0TXBTO_TO2 MTTCAN0TXBTO_BASE.BIT._TO2
#define MTTCAN0TXBTO_TO3 MTTCAN0TXBTO_BASE.BIT._TO3
#define MTTCAN0TXBTO_TO4 MTTCAN0TXBTO_BASE.BIT._TO4
#define MTTCAN0TXBTO_TO5 MTTCAN0TXBTO_BASE.BIT._TO5
#define MTTCAN0TXBTO_TO6 MTTCAN0TXBTO_BASE.BIT._TO6
#define MTTCAN0TXBTO_TO7 MTTCAN0TXBTO_BASE.BIT._TO7
#define MTTCAN0TXBTO_TO8 MTTCAN0TXBTO_BASE.BIT._TO8
#define MTTCAN0TXBTO_TO9 MTTCAN0TXBTO_BASE.BIT._TO9
#define MTTCAN0TXBTO_TO10 MTTCAN0TXBTO_BASE.BIT._TO10
#define MTTCAN0TXBTO_TO11 MTTCAN0TXBTO_BASE.BIT._TO11
#define MTTCAN0TXBTO_TO12 MTTCAN0TXBTO_BASE.BIT._TO12
#define MTTCAN0TXBTO_TO13 MTTCAN0TXBTO_BASE.BIT._TO13
#define MTTCAN0TXBTO_TO14 MTTCAN0TXBTO_BASE.BIT._TO14
#define MTTCAN0TXBTO_TO15 MTTCAN0TXBTO_BASE.BIT._TO15
#define MTTCAN0TXBTO_TO16 MTTCAN0TXBTO_BASE.BIT._TO16
#define MTTCAN0TXBTO_TO17 MTTCAN0TXBTO_BASE.BIT._TO17
#define MTTCAN0TXBTO_TO18 MTTCAN0TXBTO_BASE.BIT._TO18
#define MTTCAN0TXBTO_TO19 MTTCAN0TXBTO_BASE.BIT._TO19
#define MTTCAN0TXBTO_TO20 MTTCAN0TXBTO_BASE.BIT._TO20
#define MTTCAN0TXBTO_TO21 MTTCAN0TXBTO_BASE.BIT._TO21
#define MTTCAN0TXBTO_TO22 MTTCAN0TXBTO_BASE.BIT._TO22
#define MTTCAN0TXBTO_TO23 MTTCAN0TXBTO_BASE.BIT._TO23
#define MTTCAN0TXBTO_TO24 MTTCAN0TXBTO_BASE.BIT._TO24
#define MTTCAN0TXBTO_TO25 MTTCAN0TXBTO_BASE.BIT._TO25
#define MTTCAN0TXBTO_TO26 MTTCAN0TXBTO_BASE.BIT._TO26
#define MTTCAN0TXBTO_TO27 MTTCAN0TXBTO_BASE.BIT._TO27
#define MTTCAN0TXBTO_TO28 MTTCAN0TXBTO_BASE.BIT._TO28
#define MTTCAN0TXBTO_TO29 MTTCAN0TXBTO_BASE.BIT._TO29
#define MTTCAN0TXBTO_TO30 MTTCAN0TXBTO_BASE.BIT._TO30
#define MTTCAN0TXBTO_TO31 MTTCAN0TXBTO_BASE.BIT._TO31
#define MTTCAN0TXBCF MTTCAN0TXBCF_BASE.UINT32
#define MTTCAN0TXBCF_CF0 MTTCAN0TXBCF_BASE.BIT._CF0
#define MTTCAN0TXBCF_CF1 MTTCAN0TXBCF_BASE.BIT._CF1
#define MTTCAN0TXBCF_CF2 MTTCAN0TXBCF_BASE.BIT._CF2
#define MTTCAN0TXBCF_CF3 MTTCAN0TXBCF_BASE.BIT._CF3
#define MTTCAN0TXBCF_CF4 MTTCAN0TXBCF_BASE.BIT._CF4
#define MTTCAN0TXBCF_CF5 MTTCAN0TXBCF_BASE.BIT._CF5
#define MTTCAN0TXBCF_CF6 MTTCAN0TXBCF_BASE.BIT._CF6
#define MTTCAN0TXBCF_CF7 MTTCAN0TXBCF_BASE.BIT._CF7
#define MTTCAN0TXBCF_CF8 MTTCAN0TXBCF_BASE.BIT._CF8
#define MTTCAN0TXBCF_CF9 MTTCAN0TXBCF_BASE.BIT._CF9
#define MTTCAN0TXBCF_CF10 MTTCAN0TXBCF_BASE.BIT._CF10
#define MTTCAN0TXBCF_CF11 MTTCAN0TXBCF_BASE.BIT._CF11
#define MTTCAN0TXBCF_CF12 MTTCAN0TXBCF_BASE.BIT._CF12
#define MTTCAN0TXBCF_CF13 MTTCAN0TXBCF_BASE.BIT._CF13
#define MTTCAN0TXBCF_CF14 MTTCAN0TXBCF_BASE.BIT._CF14
#define MTTCAN0TXBCF_CF15 MTTCAN0TXBCF_BASE.BIT._CF15
#define MTTCAN0TXBCF_CF16 MTTCAN0TXBCF_BASE.BIT._CF16
#define MTTCAN0TXBCF_CF17 MTTCAN0TXBCF_BASE.BIT._CF17
#define MTTCAN0TXBCF_CF18 MTTCAN0TXBCF_BASE.BIT._CF18
#define MTTCAN0TXBCF_CF19 MTTCAN0TXBCF_BASE.BIT._CF19
#define MTTCAN0TXBCF_CF20 MTTCAN0TXBCF_BASE.BIT._CF20
#define MTTCAN0TXBCF_CF21 MTTCAN0TXBCF_BASE.BIT._CF21
#define MTTCAN0TXBCF_CF22 MTTCAN0TXBCF_BASE.BIT._CF22
#define MTTCAN0TXBCF_CF23 MTTCAN0TXBCF_BASE.BIT._CF23
#define MTTCAN0TXBCF_CF24 MTTCAN0TXBCF_BASE.BIT._CF24
#define MTTCAN0TXBCF_CF25 MTTCAN0TXBCF_BASE.BIT._CF25
#define MTTCAN0TXBCF_CF26 MTTCAN0TXBCF_BASE.BIT._CF26
#define MTTCAN0TXBCF_CF27 MTTCAN0TXBCF_BASE.BIT._CF27
#define MTTCAN0TXBCF_CF28 MTTCAN0TXBCF_BASE.BIT._CF28
#define MTTCAN0TXBCF_CF29 MTTCAN0TXBCF_BASE.BIT._CF29
#define MTTCAN0TXBCF_CF30 MTTCAN0TXBCF_BASE.BIT._CF30
#define MTTCAN0TXBCF_CF31 MTTCAN0TXBCF_BASE.BIT._CF31
#define MTTCAN0TXBTIE MTTCAN0TXBTIE_BASE.UINT32
#define MTTCAN0TXBTIE_TIE0 MTTCAN0TXBTIE_BASE.BIT._TIE0
#define MTTCAN0TXBTIE_TIE1 MTTCAN0TXBTIE_BASE.BIT._TIE1
#define MTTCAN0TXBTIE_TIE2 MTTCAN0TXBTIE_BASE.BIT._TIE2
#define MTTCAN0TXBTIE_TIE3 MTTCAN0TXBTIE_BASE.BIT._TIE3
#define MTTCAN0TXBTIE_TIE4 MTTCAN0TXBTIE_BASE.BIT._TIE4
#define MTTCAN0TXBTIE_TIE5 MTTCAN0TXBTIE_BASE.BIT._TIE5
#define MTTCAN0TXBTIE_TIE6 MTTCAN0TXBTIE_BASE.BIT._TIE6
#define MTTCAN0TXBTIE_TIE7 MTTCAN0TXBTIE_BASE.BIT._TIE7
#define MTTCAN0TXBTIE_TIE8 MTTCAN0TXBTIE_BASE.BIT._TIE8
#define MTTCAN0TXBTIE_TIE9 MTTCAN0TXBTIE_BASE.BIT._TIE9
#define MTTCAN0TXBTIE_TIE10 MTTCAN0TXBTIE_BASE.BIT._TIE10
#define MTTCAN0TXBTIE_TIE11 MTTCAN0TXBTIE_BASE.BIT._TIE11
#define MTTCAN0TXBTIE_TIE12 MTTCAN0TXBTIE_BASE.BIT._TIE12
#define MTTCAN0TXBTIE_TIE13 MTTCAN0TXBTIE_BASE.BIT._TIE13
#define MTTCAN0TXBTIE_TIE14 MTTCAN0TXBTIE_BASE.BIT._TIE14
#define MTTCAN0TXBTIE_TIE15 MTTCAN0TXBTIE_BASE.BIT._TIE15
#define MTTCAN0TXBTIE_TIE16 MTTCAN0TXBTIE_BASE.BIT._TIE16
#define MTTCAN0TXBTIE_TIE17 MTTCAN0TXBTIE_BASE.BIT._TIE17
#define MTTCAN0TXBTIE_TIE18 MTTCAN0TXBTIE_BASE.BIT._TIE18
#define MTTCAN0TXBTIE_TIE19 MTTCAN0TXBTIE_BASE.BIT._TIE19
#define MTTCAN0TXBTIE_TIE20 MTTCAN0TXBTIE_BASE.BIT._TIE20
#define MTTCAN0TXBTIE_TIE21 MTTCAN0TXBTIE_BASE.BIT._TIE21
#define MTTCAN0TXBTIE_TIE22 MTTCAN0TXBTIE_BASE.BIT._TIE22
#define MTTCAN0TXBTIE_TIE23 MTTCAN0TXBTIE_BASE.BIT._TIE23
#define MTTCAN0TXBTIE_TIE24 MTTCAN0TXBTIE_BASE.BIT._TIE24
#define MTTCAN0TXBTIE_TIE25 MTTCAN0TXBTIE_BASE.BIT._TIE25
#define MTTCAN0TXBTIE_TIE26 MTTCAN0TXBTIE_BASE.BIT._TIE26
#define MTTCAN0TXBTIE_TIE27 MTTCAN0TXBTIE_BASE.BIT._TIE27
#define MTTCAN0TXBTIE_TIE28 MTTCAN0TXBTIE_BASE.BIT._TIE28
#define MTTCAN0TXBTIE_TIE29 MTTCAN0TXBTIE_BASE.BIT._TIE29
#define MTTCAN0TXBTIE_TIE30 MTTCAN0TXBTIE_BASE.BIT._TIE30
#define MTTCAN0TXBTIE_TIE31 MTTCAN0TXBTIE_BASE.BIT._TIE31
#define MTTCAN0TXBCIE MTTCAN0TXBCIE_BASE.UINT32
#define MTTCAN0TXBCIE_CFIE0 MTTCAN0TXBCIE_BASE.BIT._CFIE0
#define MTTCAN0TXBCIE_CFIE1 MTTCAN0TXBCIE_BASE.BIT._CFIE1
#define MTTCAN0TXBCIE_CFIE2 MTTCAN0TXBCIE_BASE.BIT._CFIE2
#define MTTCAN0TXBCIE_CFIE3 MTTCAN0TXBCIE_BASE.BIT._CFIE3
#define MTTCAN0TXBCIE_CFIE4 MTTCAN0TXBCIE_BASE.BIT._CFIE4
#define MTTCAN0TXBCIE_CFIE5 MTTCAN0TXBCIE_BASE.BIT._CFIE5
#define MTTCAN0TXBCIE_CFIE6 MTTCAN0TXBCIE_BASE.BIT._CFIE6
#define MTTCAN0TXBCIE_CFIE7 MTTCAN0TXBCIE_BASE.BIT._CFIE7
#define MTTCAN0TXBCIE_CFIE8 MTTCAN0TXBCIE_BASE.BIT._CFIE8
#define MTTCAN0TXBCIE_CFIE9 MTTCAN0TXBCIE_BASE.BIT._CFIE9
#define MTTCAN0TXBCIE_CFIE10 MTTCAN0TXBCIE_BASE.BIT._CFIE10
#define MTTCAN0TXBCIE_CFIE11 MTTCAN0TXBCIE_BASE.BIT._CFIE11
#define MTTCAN0TXBCIE_CFIE12 MTTCAN0TXBCIE_BASE.BIT._CFIE12
#define MTTCAN0TXBCIE_CFIE13 MTTCAN0TXBCIE_BASE.BIT._CFIE13
#define MTTCAN0TXBCIE_CFIE14 MTTCAN0TXBCIE_BASE.BIT._CFIE14
#define MTTCAN0TXBCIE_CFIE15 MTTCAN0TXBCIE_BASE.BIT._CFIE15
#define MTTCAN0TXBCIE_CFIE16 MTTCAN0TXBCIE_BASE.BIT._CFIE16
#define MTTCAN0TXBCIE_CFIE17 MTTCAN0TXBCIE_BASE.BIT._CFIE17
#define MTTCAN0TXBCIE_CFIE18 MTTCAN0TXBCIE_BASE.BIT._CFIE18
#define MTTCAN0TXBCIE_CFIE19 MTTCAN0TXBCIE_BASE.BIT._CFIE19
#define MTTCAN0TXBCIE_CFIE20 MTTCAN0TXBCIE_BASE.BIT._CFIE20
#define MTTCAN0TXBCIE_CFIE21 MTTCAN0TXBCIE_BASE.BIT._CFIE21
#define MTTCAN0TXBCIE_CFIE22 MTTCAN0TXBCIE_BASE.BIT._CFIE22
#define MTTCAN0TXBCIE_CFIE23 MTTCAN0TXBCIE_BASE.BIT._CFIE23
#define MTTCAN0TXBCIE_CFIE24 MTTCAN0TXBCIE_BASE.BIT._CFIE24
#define MTTCAN0TXBCIE_CFIE25 MTTCAN0TXBCIE_BASE.BIT._CFIE25
#define MTTCAN0TXBCIE_CFIE26 MTTCAN0TXBCIE_BASE.BIT._CFIE26
#define MTTCAN0TXBCIE_CFIE27 MTTCAN0TXBCIE_BASE.BIT._CFIE27
#define MTTCAN0TXBCIE_CFIE28 MTTCAN0TXBCIE_BASE.BIT._CFIE28
#define MTTCAN0TXBCIE_CFIE29 MTTCAN0TXBCIE_BASE.BIT._CFIE29
#define MTTCAN0TXBCIE_CFIE30 MTTCAN0TXBCIE_BASE.BIT._CFIE30
#define MTTCAN0TXBCIE_CFIE31 MTTCAN0TXBCIE_BASE.BIT._CFIE31
#define MTTCAN0TXEFC MTTCAN0TXEFC_BASE.UINT32
#define MTTCAN0TXEFC_EFSA MTTCAN0TXEFC_BASE.BIT._EFSA
#define MTTCAN0TXEFC_EFS MTTCAN0TXEFC_BASE.BIT._EFS
#define MTTCAN0TXEFC_EFWM MTTCAN0TXEFC_BASE.BIT._EFWM
#define MTTCAN0TXEFS MTTCAN0TXEFS_BASE.UINT32
#define MTTCAN0TXEFS_EFFL MTTCAN0TXEFS_BASE.BIT._EFFL
#define MTTCAN0TXEFS_EFGI MTTCAN0TXEFS_BASE.BIT._EFGI
#define MTTCAN0TXEFS_EFPI MTTCAN0TXEFS_BASE.BIT._EFPI
#define MTTCAN0TXEFS_EFF MTTCAN0TXEFS_BASE.BIT._EFF
#define MTTCAN0TXEFS_TEFL MTTCAN0TXEFS_BASE.BIT._TEFL
#define MTTCAN0TXEFA MTTCAN0TXEFA_BASE.UINT32
#define MTTCAN0TXEFA_EFAI MTTCAN0TXEFA_BASE.BIT._EFAI
#define MTTCAN0TTTMC MTTCAN0TTTMC_BASE.UINT32
#define MTTCAN0TTTMC_TMSA MTTCAN0TTTMC_BASE.BIT._TMSA
#define MTTCAN0TTTMC_TME MTTCAN0TTTMC_BASE.BIT._TME
#define MTTCAN0TTRMC MTTCAN0TTRMC_BASE.UINT32
#define MTTCAN0TTRMC_RID MTTCAN0TTRMC_BASE.BIT._RID
#define MTTCAN0TTRMC_XTD MTTCAN0TTRMC_BASE.BIT._XTD
#define MTTCAN0TTRMC_RMPS MTTCAN0TTRMC_BASE.BIT._RMPS
#define MTTCAN0TTOCF MTTCAN0TTOCF_BASE.UINT32
#define MTTCAN0TTOCF_OM MTTCAN0TTOCF_BASE.BIT._OM
#define MTTCAN0TTOCF_GEN MTTCAN0TTOCF_BASE.BIT._GEN
#define MTTCAN0TTOCF_TM MTTCAN0TTOCF_BASE.BIT._TM
#define MTTCAN0TTOCF_LDSDL MTTCAN0TTOCF_BASE.BIT._LDSDL
#define MTTCAN0TTOCF_IRTO MTTCAN0TTOCF_BASE.BIT._IRTO
#define MTTCAN0TTOCF_EECS MTTCAN0TTOCF_BASE.BIT._EECS
#define MTTCAN0TTOCF_AWL MTTCAN0TTOCF_BASE.BIT._AWL
#define MTTCAN0TTOCF_EGTF MTTCAN0TTOCF_BASE.BIT._EGTF
#define MTTCAN0TTOCF_ECC MTTCAN0TTOCF_BASE.BIT._ECC
#define MTTCAN0TTOCF_EVTP MTTCAN0TTOCF_BASE.BIT._EVTP
#define MTTCAN0TTMLM MTTCAN0TTMLM_BASE.UINT32
#define MTTCAN0TTMLM_CCM MTTCAN0TTMLM_BASE.BIT._CCM
#define MTTCAN0TTMLM_CSS MTTCAN0TTMLM_BASE.BIT._CSS
#define MTTCAN0TTMLM_TXEW MTTCAN0TTMLM_BASE.BIT._TXEW
#define MTTCAN0TTMLM_ENTT MTTCAN0TTMLM_BASE.BIT._ENTT
#define MTTCAN0TURCF MTTCAN0TURCF_BASE.UINT32
#define MTTCAN0TURCF_NCL MTTCAN0TURCF_BASE.BIT._NCL
#define MTTCAN0TURCF_DC MTTCAN0TURCF_BASE.BIT._DC
#define MTTCAN0TURCF_ELT MTTCAN0TURCF_BASE.BIT._ELT
#define MTTCAN0TTOCN MTTCAN0TTOCN_BASE.UINT32
#define MTTCAN0TTOCN_SGT MTTCAN0TTOCN_BASE.BIT._SGT
#define MTTCAN0TTOCN_ECS MTTCAN0TTOCN_BASE.BIT._ECS
#define MTTCAN0TTOCN_SWP MTTCAN0TTOCN_BASE.BIT._SWP
#define MTTCAN0TTOCN_SWS MTTCAN0TTOCN_BASE.BIT._SWS
#define MTTCAN0TTOCN_RTIE MTTCAN0TTOCN_BASE.BIT._RTIE
#define MTTCAN0TTOCN_TMC MTTCAN0TTOCN_BASE.BIT._TMC
#define MTTCAN0TTOCN_TTIE MTTCAN0TTOCN_BASE.BIT._TTIE
#define MTTCAN0TTOCN_GCS MTTCAN0TTOCN_BASE.BIT._GCS
#define MTTCAN0TTOCN_FGP MTTCAN0TTOCN_BASE.BIT._FGP
#define MTTCAN0TTOCN_TMG MTTCAN0TTOCN_BASE.BIT._TMG
#define MTTCAN0TTOCN_NIG MTTCAN0TTOCN_BASE.BIT._NIG
#define MTTCAN0TTOCN_ESCN MTTCAN0TTOCN_BASE.BIT._ESCN
#define MTTCAN0TTOCN_LCKC MTTCAN0TTOCN_BASE.BIT._LCKC
#define MTTCAN0TTGTP MTTCAN0TTGTP_BASE.UINT32
#define MTTCAN0TTGTP_TP MTTCAN0TTGTP_BASE.BIT._TP
#define MTTCAN0TTGTP_CTP MTTCAN0TTGTP_BASE.BIT._CTP
#define MTTCAN0TTTMK MTTCAN0TTTMK_BASE.UINT32
#define MTTCAN0TTTMK_TM MTTCAN0TTTMK_BASE.BIT._TM
#define MTTCAN0TTTMK_TICC MTTCAN0TTTMK_BASE.BIT._TICC
#define MTTCAN0TTTMK_CLKM MTTCAN0TTTMK_BASE.BIT._CLKM
#define MTTCAN0TTIR MTTCAN0TTIR_BASE.UINT32
#define MTTCAN0TTIR_SBC MTTCAN0TTIR_BASE.BIT._SBC
#define MTTCAN0TTIR_SMC MTTCAN0TTIR_BASE.BIT._SMC
#define MTTCAN0TTIR_CSM MTTCAN0TTIR_BASE.BIT._CSM
#define MTTCAN0TTIR_SOG MTTCAN0TTIR_BASE.BIT._SOG
#define MTTCAN0TTIR_RTMI MTTCAN0TTIR_BASE.BIT._RTMI
#define MTTCAN0TTIR_TTMI MTTCAN0TTIR_BASE.BIT._TTMI
#define MTTCAN0TTIR_SWE MTTCAN0TTIR_BASE.BIT._SWE
#define MTTCAN0TTIR_GTW MTTCAN0TTIR_BASE.BIT._GTW
#define MTTCAN0TTIR_GTD MTTCAN0TTIR_BASE.BIT._GTD
#define MTTCAN0TTIR_GTE MTTCAN0TTIR_BASE.BIT._GTE
#define MTTCAN0TTIR_TXU MTTCAN0TTIR_BASE.BIT._TXU
#define MTTCAN0TTIR_TXO MTTCAN0TTIR_BASE.BIT._TXO
#define MTTCAN0TTIR_SE1 MTTCAN0TTIR_BASE.BIT._SE1
#define MTTCAN0TTIR_SE2 MTTCAN0TTIR_BASE.BIT._SE2
#define MTTCAN0TTIR_ELC MTTCAN0TTIR_BASE.BIT._ELC
#define MTTCAN0TTIR_IWT MTTCAN0TTIR_BASE.BIT._IWT
#define MTTCAN0TTIR_WT MTTCAN0TTIR_BASE.BIT._WT
#define MTTCAN0TTIR_AW MTTCAN0TTIR_BASE.BIT._AW
#define MTTCAN0TTIR_CER MTTCAN0TTIR_BASE.BIT._CER
#define MTTCAN0TTIE MTTCAN0TTIE_BASE.UINT32
#define MTTCAN0TTIE_SBCE MTTCAN0TTIE_BASE.BIT._SBCE
#define MTTCAN0TTIE_SMCE MTTCAN0TTIE_BASE.BIT._SMCE
#define MTTCAN0TTIE_CSME MTTCAN0TTIE_BASE.BIT._CSME
#define MTTCAN0TTIE_SOGE MTTCAN0TTIE_BASE.BIT._SOGE
#define MTTCAN0TTIE_RTMIE MTTCAN0TTIE_BASE.BIT._RTMIE
#define MTTCAN0TTIE_TTMIE MTTCAN0TTIE_BASE.BIT._TTMIE
#define MTTCAN0TTIE_SWEE MTTCAN0TTIE_BASE.BIT._SWEE
#define MTTCAN0TTIE_GTWE MTTCAN0TTIE_BASE.BIT._GTWE
#define MTTCAN0TTIE_GTDE MTTCAN0TTIE_BASE.BIT._GTDE
#define MTTCAN0TTIE_GTEE MTTCAN0TTIE_BASE.BIT._GTEE
#define MTTCAN0TTIE_TXUE MTTCAN0TTIE_BASE.BIT._TXUE
#define MTTCAN0TTIE_TXOE MTTCAN0TTIE_BASE.BIT._TXOE
#define MTTCAN0TTIE_SE1E MTTCAN0TTIE_BASE.BIT._SE1E
#define MTTCAN0TTIE_SE2E MTTCAN0TTIE_BASE.BIT._SE2E
#define MTTCAN0TTIE_ELCE MTTCAN0TTIE_BASE.BIT._ELCE
#define MTTCAN0TTIE_IWTE MTTCAN0TTIE_BASE.BIT._IWTE
#define MTTCAN0TTIE_WTE MTTCAN0TTIE_BASE.BIT._WTE
#define MTTCAN0TTIE_AWE MTTCAN0TTIE_BASE.BIT._AWE
#define MTTCAN0TTIE_CERE MTTCAN0TTIE_BASE.BIT._CERE
#define MTTCAN0TTILS MTTCAN0TTILS_BASE.UINT32
#define MTTCAN0TTILS_SBCL MTTCAN0TTILS_BASE.BIT._SBCL
#define MTTCAN0TTILS_SMCL MTTCAN0TTILS_BASE.BIT._SMCL
#define MTTCAN0TTILS_CSML MTTCAN0TTILS_BASE.BIT._CSML
#define MTTCAN0TTILS_SOGL MTTCAN0TTILS_BASE.BIT._SOGL
#define MTTCAN0TTILS_RTMIL MTTCAN0TTILS_BASE.BIT._RTMIL
#define MTTCAN0TTILS_TTMIL MTTCAN0TTILS_BASE.BIT._TTMIL
#define MTTCAN0TTILS_SWEL MTTCAN0TTILS_BASE.BIT._SWEL
#define MTTCAN0TTILS_GTWL MTTCAN0TTILS_BASE.BIT._GTWL
#define MTTCAN0TTILS_GTDL MTTCAN0TTILS_BASE.BIT._GTDL
#define MTTCAN0TTILS_GTEL MTTCAN0TTILS_BASE.BIT._GTEL
#define MTTCAN0TTILS_TXUL MTTCAN0TTILS_BASE.BIT._TXUL
#define MTTCAN0TTILS_TXOL MTTCAN0TTILS_BASE.BIT._TXOL
#define MTTCAN0TTILS_SE1L MTTCAN0TTILS_BASE.BIT._SE1L
#define MTTCAN0TTILS_SE2L MTTCAN0TTILS_BASE.BIT._SE2L
#define MTTCAN0TTILS_ELCL MTTCAN0TTILS_BASE.BIT._ELCL
#define MTTCAN0TTILS_IWTL MTTCAN0TTILS_BASE.BIT._IWTL
#define MTTCAN0TTILS_WTL MTTCAN0TTILS_BASE.BIT._WTL
#define MTTCAN0TTILS_AWL MTTCAN0TTILS_BASE.BIT._AWL
#define MTTCAN0TTILS_CERL MTTCAN0TTILS_BASE.BIT._CERL
#define MTTCAN0TTOST MTTCAN0TTOST_BASE.UINT32
#define MTTCAN0TTOST_EL MTTCAN0TTOST_BASE.BIT._EL
#define MTTCAN0TTOST_MS MTTCAN0TTOST_BASE.BIT._MS
#define MTTCAN0TTOST_SYS MTTCAN0TTOST_BASE.BIT._SYS
#define MTTCAN0TTOST_QGTP MTTCAN0TTOST_BASE.BIT._QGTP
#define MTTCAN0TTOST_QCS MTTCAN0TTOST_BASE.BIT._QCS
#define MTTCAN0TTOST_RTO MTTCAN0TTOST_BASE.BIT._RTO
#define MTTCAN0TTOST_WGTD MTTCAN0TTOST_BASE.BIT._WGTD
#define MTTCAN0TTOST_GFI MTTCAN0TTOST_BASE.BIT._GFI
#define MTTCAN0TTOST_TMP MTTCAN0TTOST_BASE.BIT._TMP
#define MTTCAN0TTOST_GSI MTTCAN0TTOST_BASE.BIT._GSI
#define MTTCAN0TTOST_WFE MTTCAN0TTOST_BASE.BIT._WFE
#define MTTCAN0TTOST_AWE MTTCAN0TTOST_BASE.BIT._AWE
#define MTTCAN0TTOST_WECS MTTCAN0TTOST_BASE.BIT._WECS
#define MTTCAN0TTOST_SPL MTTCAN0TTOST_BASE.BIT._SPL
#define MTTCAN0TURNA MTTCAN0TURNA_BASE.UINT32
#define MTTCAN0TURNA_NAV MTTCAN0TURNA_BASE.BIT._NAV
#define MTTCAN0TTLGT MTTCAN0TTLGT_BASE.UINT32
#define MTTCAN0TTLGT_LT MTTCAN0TTLGT_BASE.BIT._LT
#define MTTCAN0TTLGT_GT MTTCAN0TTLGT_BASE.BIT._GT
#define MTTCAN0TTCTC MTTCAN0TTCTC_BASE.UINT32
#define MTTCAN0TTCTC_CT MTTCAN0TTCTC_BASE.BIT._CT
#define MTTCAN0TTCTC_CC MTTCAN0TTCTC_BASE.BIT._CC
#define MTTCAN0TTCPT MTTCAN0TTCPT_BASE.UINT32
#define MTTCAN0TTCPT_CCV MTTCAN0TTCPT_BASE.BIT._CCV
#define MTTCAN0TTCPT_SWV MTTCAN0TTCPT_BASE.BIT._SWV
#define MTTCAN0TTCSM MTTCAN0TTCSM_BASE.UINT32
#define MTTCAN0TTCSM_CSM MTTCAN0TTCSM_BASE.BIT._CSM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif