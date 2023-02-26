#ifndef __DR7F701373_FLXA0_HEADER__
#define __DR7F701373_FLXA0_HEADER__



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
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _JID : 8;
    const uint32 _INV : 8;
    const uint32 _AID : 8;
} FLXA0FRPVBits_t;

typedef struct
{
    uint32 _OE : 1;
    uint32 _BEC : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _OEP : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _T0IE : 1;
    uint32 _T1IE : 1;
    uint32 _T2IE : 1;
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
} FLXA0FROCBits_t;

typedef struct
{
    const uint32 _OS : 1;
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
    uint32 _T0IS : 1;
    uint32 _T1IS : 1;
    uint32 _T2IS : 1;
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
} FLXA0FROSBits_t;

typedef struct
{
    uint32 _CLK : 8;
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
} FLXA0FRLCKBits_t;

typedef struct
{
    uint32 _PEMC : 1;
    uint32 _CNA : 1;
    uint32 _SFBM : 1;
    uint32 _SFO : 1;
    uint32 _CCF : 1;
    uint32 _CCL : 1;
    uint32 _AERR : 1;
    uint32 _RFO : 1;
    uint32 _EFA : 1;
    uint32 _IIBA : 1;
    uint32 _IOBA : 1;
    uint32 _MHF : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _EDA : 1;
    uint32 _LTVA : 1;
    uint32 _TABA : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _EDB : 1;
    uint32 _LTVB : 1;
    uint32 _TABB : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FREIRBits_t;

typedef struct
{
    uint32 _WST : 1;
    uint32 _CAS : 1;
    uint32 _CYCS : 1;
    uint32 _TXI : 1;
    uint32 _RXI : 1;
    uint32 _RFNE : 1;
    uint32 _RFCL : 1;
    uint32 _NMVC : 1;
    uint32 _TI0 : 1;
    uint32 _TI1 : 1;
    uint32 _TIBC : 1;
    uint32 _TOBC : 1;
    uint32 _SWE : 1;
    uint32 _SUCS : 1;
    uint32 _MBSI : 1;
    uint32 _SDS : 1;
    uint32 _WUPA : 1;
    uint32 _MTSA : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _WUPB : 1;
    uint32 _MTSB : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSIRBits_t;

typedef struct
{
    uint32 _PEMCL : 1;
    uint32 _CNAL : 1;
    uint32 _SFBML : 1;
    uint32 _SFOL : 1;
    uint32 _CCFL : 1;
    uint32 _CCLL : 1;
    uint32 _AERRL : 1;
    uint32 _RFOL : 1;
    uint32 _EFAL : 1;
    uint32 _IIBAL : 1;
    uint32 _IOBAL : 1;
    uint32 _MHFL : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _EDAL : 1;
    uint32 _LTVAL : 1;
    uint32 _TABAL : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _EDBL : 1;
    uint32 _LTVBL : 1;
    uint32 _TABBL : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FREILSBits_t;

typedef struct
{
    uint32 _WSTL : 1;
    uint32 _CASL : 1;
    uint32 _CYCSL : 1;
    uint32 _TXIL : 1;
    uint32 _RXIL : 1;
    uint32 _RFNEL : 1;
    uint32 _RFCLL : 1;
    uint32 _NMVCL : 1;
    uint32 _TI0L : 1;
    uint32 _TI1L : 1;
    uint32 _TIBCL : 1;
    uint32 _TOBCL : 1;
    uint32 _SWEL : 1;
    uint32 _SUCSL : 1;
    uint32 _MBSIL : 1;
    uint32 _SDSL : 1;
    uint32 _WUPAL : 1;
    uint32 _MTSAL : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _WUPBL : 1;
    uint32 _MTSBL : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSILSBits_t;

typedef struct
{
    uint32 _PEMCE : 1;
    uint32 _CNAE : 1;
    uint32 _SFBME : 1;
    uint32 _SFOE : 1;
    uint32 _CCFE : 1;
    uint32 _CCLE : 1;
    uint32 _AERRE : 1;
    uint32 _RFOE : 1;
    uint32 _EFAE : 1;
    uint32 _IIBAE : 1;
    uint32 _IOBAE : 1;
    uint32 _MHFE : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _EDAE : 1;
    uint32 _LTVAE : 1;
    uint32 _TABAE : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _EDBE : 1;
    uint32 _LTVBE : 1;
    uint32 _TABBE : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FREIESBits_t;

typedef struct
{
    uint32 _PEMCD : 1;
    uint32 _CNAD : 1;
    uint32 _SFBMD : 1;
    uint32 _SFOD : 1;
    uint32 _CCFD : 1;
    uint32 _CCLD : 1;
    uint32 _AERRD : 1;
    uint32 _RFOD : 1;
    uint32 _EFAD : 1;
    uint32 _IIBAD : 1;
    uint32 _IOBAD : 1;
    uint32 _MHFD : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _EDAD : 1;
    uint32 _LTVAD : 1;
    uint32 _TABAD : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _EDBD : 1;
    uint32 _LTVBD : 1;
    uint32 _TABBD : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FREIERBits_t;

typedef struct
{
    uint32 _WSTE : 1;
    uint32 _CASE : 1;
    uint32 _CYCSE : 1;
    uint32 _TXIE : 1;
    uint32 _RXIE : 1;
    uint32 _RFNEE : 1;
    uint32 _RFCLE : 1;
    uint32 _NMVCE : 1;
    uint32 _TI0E : 1;
    uint32 _TI1E : 1;
    uint32 _TIBCE : 1;
    uint32 _TOBCE : 1;
    uint32 _SWEE : 1;
    uint32 _SUCSE : 1;
    uint32 _MBSIE : 1;
    uint32 _SDSE : 1;
    uint32 _WUPAE : 1;
    uint32 _MTSAE : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _WUPBE : 1;
    uint32 _MTSBE : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSIESBits_t;

typedef struct
{
    uint32 _WSTD : 1;
    uint32 _CASD : 1;
    uint32 _CYCSD : 1;
    uint32 _TXID : 1;
    uint32 _RXID : 1;
    uint32 _RFNED : 1;
    uint32 _RFCLD : 1;
    uint32 _NMVCD : 1;
    uint32 _TI0D : 1;
    uint32 _TI1D : 1;
    uint32 _TIBCD : 1;
    uint32 _TOBCD : 1;
    uint32 _SWED : 1;
    uint32 _SUCSD : 1;
    uint32 _MBSID : 1;
    uint32 _SDSD : 1;
    uint32 _WUPAD : 1;
    uint32 _MTSAD : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _WUPBD : 1;
    uint32 _MTSBD : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSIERBits_t;

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
} FLXA0FRILEBits_t;

typedef struct
{
    uint32 _T0RC : 1;
    uint32 _T0MS : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _T0CC : 7;
    uint32 padding15 : 1;
    uint32 _T0MO : 14;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRT0CBits_t;

typedef struct
{
    uint32 _T1RC : 1;
    uint32 _T1MS : 1;
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
    uint32 _T1MC : 14;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRT1CBits_t;

typedef struct
{
    uint32 _ESWT : 1;
    uint32 _SWMS : 1;
    uint32 _EDGE : 1;
    uint32 _SSWT : 1;
    uint32 padding4 : 1;
    uint32 _EINT0 : 1;
    uint32 _EINT1 : 1;
    uint32 padding7 : 1;
    const uint32 _SCCV : 6;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SMTV : 14;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSTPW1Bits_t;

typedef struct
{
    const uint32 _SSCVA : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SSCVB : 11;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSTPW2Bits_t;

typedef struct
{
    uint32 _CMD : 4;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    const uint32 _PBSY : 1;
    uint32 _TXST : 1;
    uint32 _TXSY : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _CSA : 4;
    uint32 _PTA : 5;
    uint32 _WUCS : 1;
    uint32 _TSM : 1;
    uint32 _HCSE : 1;
    uint32 _MTSA : 1;
    uint32 _MTSB : 1;
    uint32 _CCHA : 1;
    uint32 _CCHB : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSUCC1Bits_t;

typedef struct
{
    uint32 _LT : 21;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _LTN : 4;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSUCC2Bits_t;

typedef struct
{
    uint32 _WCP : 4;
    uint32 _WCF : 4;
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
} FLXA0FRSUCC3Bits_t;

typedef struct
{
    uint32 _NML : 4;
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
} FLXA0FRNEMCBits_t;

typedef struct
{
    uint32 _TSST : 4;
    uint32 _CASM : 7;
    uint32 padding11 : 1;
    uint32 _SPP : 2;
    uint32 _BRP : 2;
    uint32 _RXW : 9;
    uint32 padding25 : 1;
    uint32 _RWP : 6;
} FLXA0FRPRTC1Bits_t;

typedef struct
{
    uint32 _RXI : 6;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _RXL : 6;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _TXI : 8;
    uint32 _TXL : 6;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRPRTC2Bits_t;

typedef struct
{
    uint32 _SFDL : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _SLT : 13;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRMHDCBits_t;

typedef struct
{
    uint32 _UT : 20;
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
} FLXA0FRGTUC1Bits_t;

typedef struct
{
    uint32 _MPC : 14;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _SNM : 4;
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
} FLXA0FRGTUC2Bits_t;

typedef struct
{
    uint32 _UIOA : 8;
    uint32 _UIOB : 8;
    uint32 _MIOA : 7;
    uint32 padding23 : 1;
    uint32 _MIOB : 7;
    uint32 padding31 : 1;
} FLXA0FRGTUC3Bits_t;

typedef struct
{
    uint32 _NIT : 14;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _OCS : 14;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRGTUC4Bits_t;

typedef struct
{
    uint32 _DCA : 8;
    uint32 _DCB : 8;
    uint32 _CDD : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _DEC : 8;
} FLXA0FRGTUC5Bits_t;

typedef struct
{
    uint32 _ASR : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _MOD : 11;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRGTUC6Bits_t;

typedef struct
{
    uint32 _SSL : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _NSS : 10;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRGTUC7Bits_t;

typedef struct
{
    uint32 _MSL : 6;
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
    uint32 _NMS : 13;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRGTUC8Bits_t;

typedef struct
{
    uint32 _APO : 6;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _MAPO : 5;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _DSI : 2;
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
} FLXA0FRGTUC9Bits_t;

typedef struct
{
    uint32 _MOC : 14;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _MRC : 11;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRGTUC10Bits_t;

typedef struct
{
    uint32 _EOCC : 2;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _ERCC : 2;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _EOC : 3;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _ERC : 3;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRGTUC11Bits_t;

typedef struct
{
    const uint32 _POCS : 6;
    const uint32 _FSI : 1;
    const uint32 _HRQ : 1;
    const uint32 _SLM : 2;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    const uint32 _CSNI : 1;
    const uint32 _CSAI : 1;
    const uint32 _CSI : 1;
    uint32 padding15 : 1;
    const uint32 _WSV : 3;
    const uint32 _RCA : 5;
    const uint32 _PSL : 6;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRCCSVBits_t;

typedef struct
{
    const uint32 _CCFC : 4;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    const uint32 _ERRM : 2;
    const uint32 _PTAC : 5;
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
} FLXA0FRCCEVBits_t;

typedef struct
{
    const uint32 _SCCA : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _SCCB : 11;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRSCVBits_t;

typedef struct
{
    const uint32 _MTV : 14;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _CCV : 6;
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
} FLXA0FRMTCCVBits_t;

typedef struct
{
    const uint32 _RCV : 12;
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
} FLXA0FRRCVBits_t;

typedef struct
{
    const uint32 _OCV : 19;
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
} FLXA0FROCVBits_t;

typedef struct
{
    const uint32 _VSAE : 4;
    const uint32 _VSAO : 4;
    const uint32 _VSBE : 4;
    const uint32 _VSBO : 4;
    const uint32 _MOCS : 1;
    const uint32 _OCLR : 1;
    const uint32 _MRCS : 1;
    const uint32 _RCLR : 1;
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
} FLXA0FRSFSBits_t;

typedef struct
{
    const uint32 _SESA : 1;
    const uint32 _SBSA : 1;
    const uint32 _TCSA : 1;
    const uint32 _SESB : 1;
    const uint32 _SBSB : 1;
    const uint32 _TCSB : 1;
    const uint32 _MTSA : 1;
    const uint32 _MTSB : 1;
    const uint32 _SENA : 1;
    const uint32 _SBNA : 1;
    const uint32 _SENB : 1;
    const uint32 _SBNB : 1;
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
} FLXA0FRSWNITBits_t;

typedef struct
{
    uint32 _VFRA : 1;
    uint32 _SEDA : 1;
    uint32 _CEDA : 1;
    uint32 _CIA : 1;
    uint32 _SBVA : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _VFRB : 1;
    uint32 _SEDB : 1;
    uint32 _CEDB : 1;
    uint32 _CIB : 1;
    uint32 _SBVB : 1;
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
} FLXA0FRACSBits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID1Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID2Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID3Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID4Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID5Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID6Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID7Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID8Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID9Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID10Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID11Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID12Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID13Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID14Bits_t;

typedef struct
{
    const uint32 _EID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXEA : 1;
    const uint32 _RXEB : 1;
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
} FLXA0FRESID15Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID1Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID2Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID3Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID4Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID5Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID6Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID7Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID8Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID9Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID10Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID11Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID12Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID13Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID14Bits_t;

typedef struct
{
    const uint32 _OID : 10;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _RXOA : 1;
    const uint32 _RXOB : 1;
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
} FLXA0FROSID15Bits_t;

typedef struct
{
    const uint32 _NM : 32;
} FLXA0FRNMV1Bits_t;

typedef struct
{
    const uint32 _NM : 32;
} FLXA0FRNMV2Bits_t;

typedef struct
{
    const uint32 _NM : 32;
} FLXA0FRNMV3Bits_t;

typedef struct
{
    uint32 _FDB : 8;
    uint32 _FFB : 8;
    uint32 _LCB : 8;
    uint32 _SEC : 2;
    uint32 _SPLM : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRMRCBits_t;

typedef struct
{
    uint32 _CH : 2;
    uint32 _FID : 11;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CYF : 7;
    uint32 _RSS : 1;
    uint32 _RNF : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRFRFBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _MFID : 11;
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
} FLXA0FRFRFMBits_t;

typedef struct
{
    uint32 _CL : 8;
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
} FLXA0FRFCLBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _AMR : 1;
    uint32 _ATBF1 : 1;
    uint32 _ATBF2 : 1;
    uint32 _FMBD : 1;
    uint32 _MFMB : 1;
    const uint32 _CRAM : 1;
    const uint32 _FMB : 7;
    uint32 padding15 : 1;
    const uint32 _MBT : 7;
    uint32 padding23 : 1;
    const uint32 _MBU : 7;
    uint32 padding31 : 1;
} FLXA0FRMHDSBits_t;

typedef struct
{
    const uint32 _LDTA : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _LDTB : 11;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRLDTSBits_t;

typedef struct
{
    const uint32 _RFNE : 1;
    const uint32 _RFCL : 1;
    const uint32 _RFO : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _RFFL : 8;
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
} FLXA0FRFSRBits_t;

typedef struct
{
    uint32 _SNUA : 1;
    uint32 _SNUB : 1;
    uint32 _FNFA : 1;
    uint32 _FNFB : 1;
    uint32 _TBFA : 1;
    uint32 _TBFB : 1;
    uint32 _TNSA : 1;
    uint32 _TNSB : 1;
    uint32 _WAHP : 1;
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
} FLXA0FRMHDFBits_t;

typedef struct
{
    const uint32 _TXR0 : 1;
    const uint32 _TXR1 : 1;
    const uint32 _TXR2 : 1;
    const uint32 _TXR3 : 1;
    const uint32 _TXR4 : 1;
    const uint32 _TXR5 : 1;
    const uint32 _TXR6 : 1;
    const uint32 _TXR7 : 1;
    const uint32 _TXR8 : 1;
    const uint32 _TXR9 : 1;
    const uint32 _TXR10 : 1;
    const uint32 _TXR11 : 1;
    const uint32 _TXR12 : 1;
    const uint32 _TXR13 : 1;
    const uint32 _TXR14 : 1;
    const uint32 _TXR15 : 1;
    const uint32 _TXR16 : 1;
    const uint32 _TXR17 : 1;
    const uint32 _TXR18 : 1;
    const uint32 _TXR19 : 1;
    const uint32 _TXR20 : 1;
    const uint32 _TXR21 : 1;
    const uint32 _TXR22 : 1;
    const uint32 _TXR23 : 1;
    const uint32 _TXR24 : 1;
    const uint32 _TXR25 : 1;
    const uint32 _TXR26 : 1;
    const uint32 _TXR27 : 1;
    const uint32 _TXR28 : 1;
    const uint32 _TXR29 : 1;
    const uint32 _TXR30 : 1;
    const uint32 _TXR31 : 1;
} FLXA0FRTXRQ1Bits_t;

typedef struct
{
    const uint32 _TXR32 : 1;
    const uint32 _TXR33 : 1;
    const uint32 _TXR34 : 1;
    const uint32 _TXR35 : 1;
    const uint32 _TXR36 : 1;
    const uint32 _TXR37 : 1;
    const uint32 _TXR38 : 1;
    const uint32 _TXR39 : 1;
    const uint32 _TXR40 : 1;
    const uint32 _TXR41 : 1;
    const uint32 _TXR42 : 1;
    const uint32 _TXR43 : 1;
    const uint32 _TXR44 : 1;
    const uint32 _TXR45 : 1;
    const uint32 _TXR46 : 1;
    const uint32 _TXR47 : 1;
    const uint32 _TXR48 : 1;
    const uint32 _TXR49 : 1;
    const uint32 _TXR50 : 1;
    const uint32 _TXR51 : 1;
    const uint32 _TXR52 : 1;
    const uint32 _TXR53 : 1;
    const uint32 _TXR54 : 1;
    const uint32 _TXR55 : 1;
    const uint32 _TXR56 : 1;
    const uint32 _TXR57 : 1;
    const uint32 _TXR58 : 1;
    const uint32 _TXR59 : 1;
    const uint32 _TXR60 : 1;
    const uint32 _TXR61 : 1;
    const uint32 _TXR62 : 1;
    const uint32 _TXR63 : 1;
} FLXA0FRTXRQ2Bits_t;

typedef struct
{
    const uint32 _TXR64 : 1;
    const uint32 _TXR65 : 1;
    const uint32 _TXR66 : 1;
    const uint32 _TXR67 : 1;
    const uint32 _TXR68 : 1;
    const uint32 _TXR69 : 1;
    const uint32 _TXR70 : 1;
    const uint32 _TXR71 : 1;
    const uint32 _TXR72 : 1;
    const uint32 _TXR73 : 1;
    const uint32 _TXR74 : 1;
    const uint32 _TXR75 : 1;
    const uint32 _TXR76 : 1;
    const uint32 _TXR77 : 1;
    const uint32 _TXR78 : 1;
    const uint32 _TXR79 : 1;
    const uint32 _TXR80 : 1;
    const uint32 _TXR81 : 1;
    const uint32 _TXR82 : 1;
    const uint32 _TXR83 : 1;
    const uint32 _TXR84 : 1;
    const uint32 _TXR85 : 1;
    const uint32 _TXR86 : 1;
    const uint32 _TXR87 : 1;
    const uint32 _TXR88 : 1;
    const uint32 _TXR89 : 1;
    const uint32 _TXR90 : 1;
    const uint32 _TXR91 : 1;
    const uint32 _TXR92 : 1;
    const uint32 _TXR93 : 1;
    const uint32 _TXR94 : 1;
    const uint32 _TXR95 : 1;
} FLXA0FRTXRQ3Bits_t;

typedef struct
{
    const uint32 _TXR96 : 1;
    const uint32 _TXR97 : 1;
    const uint32 _TXR98 : 1;
    const uint32 _TXR99 : 1;
    const uint32 _TXR100 : 1;
    const uint32 _TXR101 : 1;
    const uint32 _TXR102 : 1;
    const uint32 _TXR103 : 1;
    const uint32 _TXR104 : 1;
    const uint32 _TXR105 : 1;
    const uint32 _TXR106 : 1;
    const uint32 _TXR107 : 1;
    const uint32 _TXR108 : 1;
    const uint32 _TXR109 : 1;
    const uint32 _TXR110 : 1;
    const uint32 _TXR111 : 1;
    const uint32 _TXR112 : 1;
    const uint32 _TXR113 : 1;
    const uint32 _TXR114 : 1;
    const uint32 _TXR115 : 1;
    const uint32 _TXR116 : 1;
    const uint32 _TXR117 : 1;
    const uint32 _TXR118 : 1;
    const uint32 _TXR119 : 1;
    const uint32 _TXR120 : 1;
    const uint32 _TXR121 : 1;
    const uint32 _TXR122 : 1;
    const uint32 _TXR123 : 1;
    const uint32 _TXR124 : 1;
    const uint32 _TXR125 : 1;
    const uint32 _TXR126 : 1;
    const uint32 _TXR127 : 1;
} FLXA0FRTXRQ4Bits_t;

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
} FLXA0FRNDAT1Bits_t;

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
} FLXA0FRNDAT2Bits_t;

typedef struct
{
    uint32 _ND64 : 1;
    uint32 _ND65 : 1;
    uint32 _ND66 : 1;
    uint32 _ND67 : 1;
    uint32 _ND68 : 1;
    uint32 _ND69 : 1;
    uint32 _ND70 : 1;
    uint32 _ND71 : 1;
    uint32 _ND72 : 1;
    uint32 _ND73 : 1;
    uint32 _ND74 : 1;
    uint32 _ND75 : 1;
    uint32 _ND76 : 1;
    uint32 _ND77 : 1;
    uint32 _ND78 : 1;
    uint32 _ND79 : 1;
    uint32 _ND80 : 1;
    uint32 _ND81 : 1;
    uint32 _ND82 : 1;
    uint32 _ND83 : 1;
    uint32 _ND84 : 1;
    uint32 _ND85 : 1;
    uint32 _ND86 : 1;
    uint32 _ND87 : 1;
    uint32 _ND88 : 1;
    uint32 _ND89 : 1;
    uint32 _ND90 : 1;
    uint32 _ND91 : 1;
    uint32 _ND92 : 1;
    uint32 _ND93 : 1;
    uint32 _ND94 : 1;
    uint32 _ND95 : 1;
} FLXA0FRNDAT3Bits_t;

typedef struct
{
    uint32 _ND96 : 1;
    uint32 _ND97 : 1;
    uint32 _ND98 : 1;
    uint32 _ND99 : 1;
    uint32 _ND100 : 1;
    uint32 _ND101 : 1;
    uint32 _ND102 : 1;
    uint32 _ND103 : 1;
    uint32 _ND104 : 1;
    uint32 _ND105 : 1;
    uint32 _ND106 : 1;
    uint32 _ND107 : 1;
    uint32 _ND108 : 1;
    uint32 _ND109 : 1;
    uint32 _ND110 : 1;
    uint32 _ND111 : 1;
    uint32 _ND112 : 1;
    uint32 _ND113 : 1;
    uint32 _ND114 : 1;
    uint32 _ND115 : 1;
    uint32 _ND116 : 1;
    uint32 _ND117 : 1;
    uint32 _ND118 : 1;
    uint32 _ND119 : 1;
    uint32 _ND120 : 1;
    uint32 _ND121 : 1;
    uint32 _ND122 : 1;
    uint32 _ND123 : 1;
    uint32 _ND124 : 1;
    uint32 _ND125 : 1;
    uint32 _ND126 : 1;
    uint32 _ND127 : 1;
} FLXA0FRNDAT4Bits_t;

typedef struct
{
    uint32 _MBC0 : 1;
    uint32 _MBC1 : 1;
    uint32 _MBC2 : 1;
    uint32 _MBC3 : 1;
    uint32 _MBC4 : 1;
    uint32 _MBC5 : 1;
    uint32 _MBC6 : 1;
    uint32 _MBC7 : 1;
    uint32 _MBC8 : 1;
    uint32 _MBC9 : 1;
    uint32 _MBC10 : 1;
    uint32 _MBC11 : 1;
    uint32 _MBC12 : 1;
    uint32 _MBC13 : 1;
    uint32 _MBC14 : 1;
    uint32 _MBC15 : 1;
    uint32 _MBC16 : 1;
    uint32 _MBC17 : 1;
    uint32 _MBC18 : 1;
    uint32 _MBC19 : 1;
    uint32 _MBC20 : 1;
    uint32 _MBC21 : 1;
    uint32 _MBC22 : 1;
    uint32 _MBC23 : 1;
    uint32 _MBC24 : 1;
    uint32 _MBC25 : 1;
    uint32 _MBC26 : 1;
    uint32 _MBC27 : 1;
    uint32 _MBC28 : 1;
    uint32 _MBC29 : 1;
    uint32 _MBC30 : 1;
    uint32 _MBC31 : 1;
} FLXA0FRMBSC1Bits_t;

typedef struct
{
    uint32 _MBC32 : 1;
    uint32 _MBC33 : 1;
    uint32 _MBC34 : 1;
    uint32 _MBC35 : 1;
    uint32 _MBC36 : 1;
    uint32 _MBC37 : 1;
    uint32 _MBC38 : 1;
    uint32 _MBC39 : 1;
    uint32 _MBC40 : 1;
    uint32 _MBC41 : 1;
    uint32 _MBC42 : 1;
    uint32 _MBC43 : 1;
    uint32 _MBC44 : 1;
    uint32 _MBC45 : 1;
    uint32 _MBC46 : 1;
    uint32 _MBC47 : 1;
    uint32 _MBC48 : 1;
    uint32 _MBC49 : 1;
    uint32 _MBC50 : 1;
    uint32 _MBC51 : 1;
    uint32 _MBC52 : 1;
    uint32 _MBC53 : 1;
    uint32 _MBC54 : 1;
    uint32 _MBC55 : 1;
    uint32 _MBC56 : 1;
    uint32 _MBC57 : 1;
    uint32 _MBC58 : 1;
    uint32 _MBC59 : 1;
    uint32 _MBC60 : 1;
    uint32 _MBC61 : 1;
    uint32 _MBC62 : 1;
    uint32 _MBC63 : 1;
} FLXA0FRMBSC2Bits_t;

typedef struct
{
    uint32 _MBC64 : 1;
    uint32 _MBC65 : 1;
    uint32 _MBC66 : 1;
    uint32 _MBC67 : 1;
    uint32 _MBC68 : 1;
    uint32 _MBC69 : 1;
    uint32 _MBC70 : 1;
    uint32 _MBC71 : 1;
    uint32 _MBC72 : 1;
    uint32 _MBC73 : 1;
    uint32 _MBC74 : 1;
    uint32 _MBC75 : 1;
    uint32 _MBC76 : 1;
    uint32 _MBC77 : 1;
    uint32 _MBC78 : 1;
    uint32 _MBC79 : 1;
    uint32 _MBC80 : 1;
    uint32 _MBC81 : 1;
    uint32 _MBC82 : 1;
    uint32 _MBC83 : 1;
    uint32 _MBC84 : 1;
    uint32 _MBC85 : 1;
    uint32 _MBC86 : 1;
    uint32 _MBC87 : 1;
    uint32 _MBC88 : 1;
    uint32 _MBC89 : 1;
    uint32 _MBC90 : 1;
    uint32 _MBC91 : 1;
    uint32 _MBC92 : 1;
    uint32 _MBC93 : 1;
    uint32 _MBC94 : 1;
    uint32 _MBC95 : 1;
} FLXA0FRMBSC3Bits_t;

typedef struct
{
    uint32 _MBC96 : 1;
    uint32 _MBC97 : 1;
    uint32 _MBC98 : 1;
    uint32 _MBC99 : 1;
    uint32 _MBC100 : 1;
    uint32 _MBC101 : 1;
    uint32 _MBC102 : 1;
    uint32 _MBC103 : 1;
    uint32 _MBC104 : 1;
    uint32 _MBC105 : 1;
    uint32 _MBC106 : 1;
    uint32 _MBC107 : 1;
    uint32 _MBC108 : 1;
    uint32 _MBC109 : 1;
    uint32 _MBC110 : 1;
    uint32 _MBC111 : 1;
    uint32 _MBC112 : 1;
    uint32 _MBC113 : 1;
    uint32 _MBC114 : 1;
    uint32 _MBC115 : 1;
    uint32 _MBC116 : 1;
    uint32 _MBC117 : 1;
    uint32 _MBC118 : 1;
    uint32 _MBC119 : 1;
    uint32 _MBC120 : 1;
    uint32 _MBC121 : 1;
    uint32 _MBC122 : 1;
    uint32 _MBC123 : 1;
    uint32 _MBC124 : 1;
    uint32 _MBC125 : 1;
    uint32 _MBC126 : 1;
    uint32 _MBC127 : 1;
} FLXA0FRMBSC4Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS1Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS2Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS3Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS4Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS5Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS6Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS7Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS8Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS9Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS10Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS11Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS12Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS13Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS14Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS15Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS16Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS17Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS18Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS19Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS20Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS21Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS22Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS23Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS24Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS25Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS26Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS27Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS28Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS29Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS30Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS31Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS32Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS33Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS34Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS35Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS36Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS37Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS38Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS39Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS40Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS41Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS42Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS43Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS44Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS45Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS46Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS47Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS48Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS49Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS50Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS51Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS52Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS53Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS54Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS55Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS56Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS57Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS58Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS59Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS60Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS61Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS62Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS63Bits_t;

typedef struct
{
    uint32 _MD : 32;
} FLXA0FRWRDS64Bits_t;

typedef struct
{
    uint32 _FID : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CYC : 7;
    uint32 padding23 : 1;
    uint32 _CH : 2;
    uint32 _CFG : 1;
    uint32 _PPIT : 1;
    uint32 _TXM : 1;
    uint32 _MBI : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRWRHS1Bits_t;

typedef struct
{
    uint32 _CRC : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PLC : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRWRHS2Bits_t;

typedef struct
{
    uint32 _DP : 11;
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
} FLXA0FRWRHS3Bits_t;

typedef struct
{
    uint32 _LHSH : 1;
    uint32 _LDSH : 1;
    uint32 _STXRH : 1;
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
    const uint32 _LHSS : 1;
    const uint32 _LDSS : 1;
    const uint32 _STXRS : 1;
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
} FLXA0FRIBCMBits_t;

typedef struct
{
    uint32 _IBRH : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    const uint32 _IBSYH : 1;
    const uint32 _IBRS : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    const uint32 _IBSYS : 1;
} FLXA0FRIBCRBits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS1Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS2Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS3Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS4Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS5Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS6Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS7Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS8Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS9Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS10Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS11Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS12Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS13Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS14Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS15Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS16Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS17Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS18Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS19Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS20Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS21Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS22Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS23Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS24Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS25Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS26Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS27Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS28Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS29Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS30Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS31Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS32Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS33Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS34Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS35Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS36Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS37Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS38Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS39Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS40Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS41Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS42Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS43Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS44Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS45Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS46Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS47Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS48Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS49Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS50Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS51Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS52Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS53Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS54Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS55Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS56Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS57Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS58Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS59Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS60Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS61Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS62Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS63Bits_t;

typedef struct
{
    const uint32 _MD : 32;
} FLXA0FRRDDS64Bits_t;

typedef struct
{
    const uint32 _FID : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _CYC : 7;
    uint32 padding23 : 1;
    const uint32 _CH : 2;
    const uint32 _CFG : 1;
    const uint32 _PPIT : 1;
    const uint32 _TXM : 1;
    const uint32 _MBI : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRRDHS1Bits_t;

typedef struct
{
    const uint32 _CRC : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _PLC : 7;
    uint32 padding23 : 1;
    const uint32 _PLR : 7;
    uint32 padding31 : 1;
} FLXA0FRRDHS2Bits_t;

typedef struct
{
    const uint32 _DP : 11;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _RCC : 6;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _RCI : 1;
    const uint32 _SFI : 1;
    const uint32 _SYN : 1;
    const uint32 _NFI : 1;
    const uint32 _PPI : 1;
    const uint32 _RES : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRRDHS3Bits_t;

typedef struct
{
    const uint32 _VFRA : 1;
    const uint32 _VFRB : 1;
    const uint32 _SEOA : 1;
    const uint32 _SEOB : 1;
    const uint32 _CEOA : 1;
    const uint32 _CEOB : 1;
    const uint32 _SVOA : 1;
    const uint32 _SVOB : 1;
    const uint32 _TCIA : 1;
    const uint32 _TCIB : 1;
    const uint32 _ESA : 1;
    const uint32 _ESB : 1;
    const uint32 _MLST : 1;
    uint32 padding13 : 1;
    const uint32 _FTA : 1;
    const uint32 _FTB : 1;
    const uint32 _CCS : 6;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _RCIS : 1;
    const uint32 _SFIS : 1;
    const uint32 _SYNS : 1;
    const uint32 _NFIS : 1;
    const uint32 _PPIS : 1;
    const uint32 _RESS : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRMBSBits_t;

typedef struct
{
    uint32 _RHSS : 1;
    uint32 _RDSS : 1;
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
    const uint32 _RHSH : 1;
    const uint32 _RDSH : 1;
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
} FLXA0FROBCMBits_t;

typedef struct
{
    uint32 _OBRS : 7;
    uint32 padding7 : 1;
    uint32 _VIEW : 1;
    uint32 _REQ : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    const uint32 _OBSYS : 1;
    const uint32 _OBRH : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FROBCRBits_t;

typedef struct
{
    uint32 _ITE : 1;
    uint32 _IQHR : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _IQFIE : 1;
    uint32 _IQEIE : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _ITM : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRITCBits_t;

typedef struct
{
    uint32 _OTE : 1;
    uint32 _OTCS : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _OIE : 1;
    uint32 _FIE : 1;
    uint32 _OWIE : 1;
    uint32 _FWIE : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _FTM : 5;
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
} FLXA0FROTCBits_t;

typedef struct
{
    uint32 _ITA : 32;
} FLXA0FRIBABits_t;

typedef struct
{
    uint32 _FTA : 32;
} FLXA0FRFBABits_t;

typedef struct
{
    uint32 _OTA : 32;
} FLXA0FROBABits_t;

typedef struct
{
    uint32 _IMBNR : 7;
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
} FLXA0FRIQCBits_t;

typedef struct
{
    uint32 _UIDX : 8;
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
} FLXA0FRUIRBits_t;

typedef struct
{
    uint32 _UMBNR : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 _URDS : 1;
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
} FLXA0FRUORBits_t;

typedef struct
{
    const uint32 _ITS : 1;
    const uint32 _IQH : 1;
    const uint32 _UIRP : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _IQFIS : 1;
    uint32 _IQEIS : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    const uint32 _IQFP : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _IPIDX : 7;
    uint32 padding23 : 1;
    const uint32 _IGIDX : 7;
    uint32 padding31 : 1;
} FLXA0FRITSBits_t;

typedef struct
{
    const uint32 _OTS : 1;
    uint32 padding1 : 1;
    const uint32 _UORP : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _OTIS : 1;
    uint32 _FIS : 1;
    uint32 _OWS : 1;
    uint32 _FWS : 1;
    uint32 padding12 : 1;
    uint32 _FDA : 1;
    const uint32 _OWP : 1;
    const uint32 _FWP : 1;
    const uint32 _FGIDX : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _FFL : 6;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FROTSBits_t;

typedef struct
{
    const uint32 _EIDX : 8;
    uint32 _IAE : 1;
    uint32 _OAE : 1;
    uint32 _FAE : 1;
    uint32 _MAE : 1;
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
} FLXA0FRAESBits_t;

typedef struct
{
    uint32 _AEA : 32;
} FLXA0FRAEABits_t;

typedef struct
{
    uint32 _DA0 : 1;
    uint32 _DA1 : 1;
    uint32 _DA2 : 1;
    uint32 _DA3 : 1;
    uint32 _DA4 : 1;
    uint32 _DA5 : 1;
    uint32 _DA6 : 1;
    uint32 _DA7 : 1;
    uint32 _DA8 : 1;
    uint32 _DA9 : 1;
    uint32 _DA10 : 1;
    uint32 _DA11 : 1;
    uint32 _DA12 : 1;
    uint32 _DA13 : 1;
    uint32 _DA14 : 1;
    uint32 _DA15 : 1;
    uint32 _DA16 : 1;
    uint32 _DA17 : 1;
    uint32 _DA18 : 1;
    uint32 _DA19 : 1;
    uint32 _DA20 : 1;
    uint32 _DA21 : 1;
    uint32 _DA22 : 1;
    uint32 _DA23 : 1;
    uint32 _DA24 : 1;
    uint32 _DA25 : 1;
    uint32 _DA26 : 1;
    uint32 _DA27 : 1;
    uint32 _DA28 : 1;
    uint32 _DA29 : 1;
    uint32 _DA30 : 1;
    uint32 _DA31 : 1;
} FLXA0FRDA0Bits_t;

typedef struct
{
    uint32 _DA32 : 1;
    uint32 _DA33 : 1;
    uint32 _DA34 : 1;
    uint32 _DA35 : 1;
    uint32 _DA36 : 1;
    uint32 _DA37 : 1;
    uint32 _DA38 : 1;
    uint32 _DA39 : 1;
    uint32 _DA40 : 1;
    uint32 _DA41 : 1;
    uint32 _DA42 : 1;
    uint32 _DA43 : 1;
    uint32 _DA44 : 1;
    uint32 _DA45 : 1;
    uint32 _DA46 : 1;
    uint32 _DA47 : 1;
    uint32 _DA48 : 1;
    uint32 _DA49 : 1;
    uint32 _DA50 : 1;
    uint32 _DA51 : 1;
    uint32 _DA52 : 1;
    uint32 _DA53 : 1;
    uint32 _DA54 : 1;
    uint32 _DA55 : 1;
    uint32 _DA56 : 1;
    uint32 _DA57 : 1;
    uint32 _DA58 : 1;
    uint32 _DA59 : 1;
    uint32 _DA60 : 1;
    uint32 _DA61 : 1;
    uint32 _DA62 : 1;
    uint32 _DA63 : 1;
} FLXA0FRDA1Bits_t;

typedef struct
{
    uint32 _DA64 : 1;
    uint32 _DA65 : 1;
    uint32 _DA66 : 1;
    uint32 _DA67 : 1;
    uint32 _DA68 : 1;
    uint32 _DA69 : 1;
    uint32 _DA70 : 1;
    uint32 _DA71 : 1;
    uint32 _DA72 : 1;
    uint32 _DA73 : 1;
    uint32 _DA74 : 1;
    uint32 _DA75 : 1;
    uint32 _DA76 : 1;
    uint32 _DA77 : 1;
    uint32 _DA78 : 1;
    uint32 _DA79 : 1;
    uint32 _DA80 : 1;
    uint32 _DA81 : 1;
    uint32 _DA82 : 1;
    uint32 _DA83 : 1;
    uint32 _DA84 : 1;
    uint32 _DA85 : 1;
    uint32 _DA86 : 1;
    uint32 _DA87 : 1;
    uint32 _DA88 : 1;
    uint32 _DA89 : 1;
    uint32 _DA90 : 1;
    uint32 _DA91 : 1;
    uint32 _DA92 : 1;
    uint32 _DA93 : 1;
    uint32 _DA94 : 1;
    uint32 _DA95 : 1;
} FLXA0FRDA2Bits_t;

typedef struct
{
    uint32 _DA96 : 1;
    uint32 _DA97 : 1;
    uint32 _DA98 : 1;
    uint32 _DA99 : 1;
    uint32 _DA100 : 1;
    uint32 _DA101 : 1;
    uint32 _DA102 : 1;
    uint32 _DA103 : 1;
    uint32 _DA104 : 1;
    uint32 _DA105 : 1;
    uint32 _DA106 : 1;
    uint32 _DA107 : 1;
    uint32 _DA108 : 1;
    uint32 _DA109 : 1;
    uint32 _DA110 : 1;
    uint32 _DA111 : 1;
    uint32 _DA112 : 1;
    uint32 _DA113 : 1;
    uint32 _DA114 : 1;
    uint32 _DA115 : 1;
    uint32 _DA116 : 1;
    uint32 _DA117 : 1;
    uint32 _DA118 : 1;
    uint32 _DA119 : 1;
    uint32 _DA120 : 1;
    uint32 _DA121 : 1;
    uint32 _DA122 : 1;
    uint32 _DA123 : 1;
    uint32 _DA124 : 1;
    uint32 _DA125 : 1;
    uint32 _DA126 : 1;
    uint32 _DA127 : 1;
} FLXA0FRDA3Bits_t;

typedef struct
{
    uint32 _T2RC : 1;
    uint32 _T2MS : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _T2CC : 7;
    uint32 padding15 : 1;
    uint32 _T2MO : 14;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FLXA0FRT2CBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const FLXA0FRPVBits_t BIT;
} FLXA0FRPV_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FROCBits_t BIT;
} FLXA0FROC_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FROSBits_t BIT;
} FLXA0FROS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRLCKBits_t BIT;
} FLXA0FRLCK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FREIRBits_t BIT;
} FLXA0FREIR_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSIRBits_t BIT;
} FLXA0FRSIR_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FREILSBits_t BIT;
} FLXA0FREILS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSILSBits_t BIT;
} FLXA0FRSILS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FREIESBits_t BIT;
} FLXA0FREIES_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FREIERBits_t BIT;
} FLXA0FREIER_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSIESBits_t BIT;
} FLXA0FRSIES_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSIERBits_t BIT;
} FLXA0FRSIER_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRILEBits_t BIT;
} FLXA0FRILE_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRT0CBits_t BIT;
} FLXA0FRT0C_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRT1CBits_t BIT;
} FLXA0FRT1C_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSTPW1Bits_t BIT;
} FLXA0FRSTPW1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRSTPW2Bits_t BIT;
} FLXA0FRSTPW2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSUCC1Bits_t BIT;
} FLXA0FRSUCC1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSUCC2Bits_t BIT;
} FLXA0FRSUCC2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRSUCC3Bits_t BIT;
} FLXA0FRSUCC3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRNEMCBits_t BIT;
} FLXA0FRNEMC_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRPRTC1Bits_t BIT;
} FLXA0FRPRTC1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRPRTC2Bits_t BIT;
} FLXA0FRPRTC2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMHDCBits_t BIT;
} FLXA0FRMHDC_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC1Bits_t BIT;
} FLXA0FRGTUC1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC2Bits_t BIT;
} FLXA0FRGTUC2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC3Bits_t BIT;
} FLXA0FRGTUC3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC4Bits_t BIT;
} FLXA0FRGTUC4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC5Bits_t BIT;
} FLXA0FRGTUC5_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC6Bits_t BIT;
} FLXA0FRGTUC6_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC7Bits_t BIT;
} FLXA0FRGTUC7_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC8Bits_t BIT;
} FLXA0FRGTUC8_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC9Bits_t BIT;
} FLXA0FRGTUC9_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC10Bits_t BIT;
} FLXA0FRGTUC10_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRGTUC11Bits_t BIT;
} FLXA0FRGTUC11_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRCCSVBits_t BIT;
} FLXA0FRCCSV_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRCCEVBits_t BIT;
} FLXA0FRCCEV_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRSCVBits_t BIT;
} FLXA0FRSCV_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRMTCCVBits_t BIT;
} FLXA0FRMTCCV_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRCVBits_t BIT;
} FLXA0FRRCV_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROCVBits_t BIT;
} FLXA0FROCV_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRSFSBits_t BIT;
} FLXA0FRSFS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRSWNITBits_t BIT;
} FLXA0FRSWNIT_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRACSBits_t BIT;
} FLXA0FRACS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID1Bits_t BIT;
} FLXA0FRESID1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID2Bits_t BIT;
} FLXA0FRESID2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID3Bits_t BIT;
} FLXA0FRESID3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID4Bits_t BIT;
} FLXA0FRESID4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID5Bits_t BIT;
} FLXA0FRESID5_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID6Bits_t BIT;
} FLXA0FRESID6_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID7Bits_t BIT;
} FLXA0FRESID7_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID8Bits_t BIT;
} FLXA0FRESID8_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID9Bits_t BIT;
} FLXA0FRESID9_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID10Bits_t BIT;
} FLXA0FRESID10_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID11Bits_t BIT;
} FLXA0FRESID11_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID12Bits_t BIT;
} FLXA0FRESID12_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID13Bits_t BIT;
} FLXA0FRESID13_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID14Bits_t BIT;
} FLXA0FRESID14_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRESID15Bits_t BIT;
} FLXA0FRESID15_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID1Bits_t BIT;
} FLXA0FROSID1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID2Bits_t BIT;
} FLXA0FROSID2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID3Bits_t BIT;
} FLXA0FROSID3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID4Bits_t BIT;
} FLXA0FROSID4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID5Bits_t BIT;
} FLXA0FROSID5_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID6Bits_t BIT;
} FLXA0FROSID6_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID7Bits_t BIT;
} FLXA0FROSID7_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID8Bits_t BIT;
} FLXA0FROSID8_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID9Bits_t BIT;
} FLXA0FROSID9_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID10Bits_t BIT;
} FLXA0FROSID10_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID11Bits_t BIT;
} FLXA0FROSID11_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID12Bits_t BIT;
} FLXA0FROSID12_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID13Bits_t BIT;
} FLXA0FROSID13_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID14Bits_t BIT;
} FLXA0FROSID14_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FROSID15Bits_t BIT;
} FLXA0FROSID15_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRNMV1Bits_t BIT;
} FLXA0FRNMV1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRNMV2Bits_t BIT;
} FLXA0FRNMV2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRNMV3Bits_t BIT;
} FLXA0FRNMV3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMRCBits_t BIT;
} FLXA0FRMRC_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRFRFBits_t BIT;
} FLXA0FRFRF_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRFRFMBits_t BIT;
} FLXA0FRFRFM_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRFCLBits_t BIT;
} FLXA0FRFCL_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMHDSBits_t BIT;
} FLXA0FRMHDS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRLDTSBits_t BIT;
} FLXA0FRLDTS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRFSRBits_t BIT;
} FLXA0FRFSR_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMHDFBits_t BIT;
} FLXA0FRMHDF_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRTXRQ1Bits_t BIT;
} FLXA0FRTXRQ1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRTXRQ2Bits_t BIT;
} FLXA0FRTXRQ2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRTXRQ3Bits_t BIT;
} FLXA0FRTXRQ3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRTXRQ4Bits_t BIT;
} FLXA0FRTXRQ4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRNDAT1Bits_t BIT;
} FLXA0FRNDAT1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRNDAT2Bits_t BIT;
} FLXA0FRNDAT2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRNDAT3Bits_t BIT;
} FLXA0FRNDAT3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRNDAT4Bits_t BIT;
} FLXA0FRNDAT4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMBSC1Bits_t BIT;
} FLXA0FRMBSC1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMBSC2Bits_t BIT;
} FLXA0FRMBSC2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMBSC3Bits_t BIT;
} FLXA0FRMBSC3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRMBSC4Bits_t BIT;
} FLXA0FRMBSC4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS1Bits_t BIT;
} FLXA0FRWRDS1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS2Bits_t BIT;
} FLXA0FRWRDS2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS3Bits_t BIT;
} FLXA0FRWRDS3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS4Bits_t BIT;
} FLXA0FRWRDS4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS5Bits_t BIT;
} FLXA0FRWRDS5_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS6Bits_t BIT;
} FLXA0FRWRDS6_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS7Bits_t BIT;
} FLXA0FRWRDS7_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS8Bits_t BIT;
} FLXA0FRWRDS8_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS9Bits_t BIT;
} FLXA0FRWRDS9_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS10Bits_t BIT;
} FLXA0FRWRDS10_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS11Bits_t BIT;
} FLXA0FRWRDS11_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS12Bits_t BIT;
} FLXA0FRWRDS12_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS13Bits_t BIT;
} FLXA0FRWRDS13_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS14Bits_t BIT;
} FLXA0FRWRDS14_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS15Bits_t BIT;
} FLXA0FRWRDS15_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS16Bits_t BIT;
} FLXA0FRWRDS16_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS17Bits_t BIT;
} FLXA0FRWRDS17_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS18Bits_t BIT;
} FLXA0FRWRDS18_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS19Bits_t BIT;
} FLXA0FRWRDS19_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS20Bits_t BIT;
} FLXA0FRWRDS20_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS21Bits_t BIT;
} FLXA0FRWRDS21_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS22Bits_t BIT;
} FLXA0FRWRDS22_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS23Bits_t BIT;
} FLXA0FRWRDS23_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS24Bits_t BIT;
} FLXA0FRWRDS24_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS25Bits_t BIT;
} FLXA0FRWRDS25_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS26Bits_t BIT;
} FLXA0FRWRDS26_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS27Bits_t BIT;
} FLXA0FRWRDS27_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS28Bits_t BIT;
} FLXA0FRWRDS28_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS29Bits_t BIT;
} FLXA0FRWRDS29_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS30Bits_t BIT;
} FLXA0FRWRDS30_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS31Bits_t BIT;
} FLXA0FRWRDS31_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS32Bits_t BIT;
} FLXA0FRWRDS32_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS33Bits_t BIT;
} FLXA0FRWRDS33_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS34Bits_t BIT;
} FLXA0FRWRDS34_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS35Bits_t BIT;
} FLXA0FRWRDS35_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS36Bits_t BIT;
} FLXA0FRWRDS36_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS37Bits_t BIT;
} FLXA0FRWRDS37_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS38Bits_t BIT;
} FLXA0FRWRDS38_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS39Bits_t BIT;
} FLXA0FRWRDS39_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS40Bits_t BIT;
} FLXA0FRWRDS40_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS41Bits_t BIT;
} FLXA0FRWRDS41_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS42Bits_t BIT;
} FLXA0FRWRDS42_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS43Bits_t BIT;
} FLXA0FRWRDS43_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS44Bits_t BIT;
} FLXA0FRWRDS44_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS45Bits_t BIT;
} FLXA0FRWRDS45_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS46Bits_t BIT;
} FLXA0FRWRDS46_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS47Bits_t BIT;
} FLXA0FRWRDS47_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS48Bits_t BIT;
} FLXA0FRWRDS48_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS49Bits_t BIT;
} FLXA0FRWRDS49_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS50Bits_t BIT;
} FLXA0FRWRDS50_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS51Bits_t BIT;
} FLXA0FRWRDS51_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS52Bits_t BIT;
} FLXA0FRWRDS52_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS53Bits_t BIT;
} FLXA0FRWRDS53_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS54Bits_t BIT;
} FLXA0FRWRDS54_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS55Bits_t BIT;
} FLXA0FRWRDS55_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS56Bits_t BIT;
} FLXA0FRWRDS56_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS57Bits_t BIT;
} FLXA0FRWRDS57_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS58Bits_t BIT;
} FLXA0FRWRDS58_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS59Bits_t BIT;
} FLXA0FRWRDS59_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS60Bits_t BIT;
} FLXA0FRWRDS60_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS61Bits_t BIT;
} FLXA0FRWRDS61_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS62Bits_t BIT;
} FLXA0FRWRDS62_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS63Bits_t BIT;
} FLXA0FRWRDS63_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRDS64Bits_t BIT;
} FLXA0FRWRDS64_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRHS1Bits_t BIT;
} FLXA0FRWRHS1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRHS2Bits_t BIT;
} FLXA0FRWRHS2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRWRHS3Bits_t BIT;
} FLXA0FRWRHS3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRIBCMBits_t BIT;
} FLXA0FRIBCM_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRIBCRBits_t BIT;
} FLXA0FRIBCR_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS1Bits_t BIT;
} FLXA0FRRDDS1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS2Bits_t BIT;
} FLXA0FRRDDS2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS3Bits_t BIT;
} FLXA0FRRDDS3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS4Bits_t BIT;
} FLXA0FRRDDS4_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS5Bits_t BIT;
} FLXA0FRRDDS5_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS6Bits_t BIT;
} FLXA0FRRDDS6_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS7Bits_t BIT;
} FLXA0FRRDDS7_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS8Bits_t BIT;
} FLXA0FRRDDS8_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS9Bits_t BIT;
} FLXA0FRRDDS9_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS10Bits_t BIT;
} FLXA0FRRDDS10_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS11Bits_t BIT;
} FLXA0FRRDDS11_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS12Bits_t BIT;
} FLXA0FRRDDS12_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS13Bits_t BIT;
} FLXA0FRRDDS13_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS14Bits_t BIT;
} FLXA0FRRDDS14_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS15Bits_t BIT;
} FLXA0FRRDDS15_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS16Bits_t BIT;
} FLXA0FRRDDS16_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS17Bits_t BIT;
} FLXA0FRRDDS17_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS18Bits_t BIT;
} FLXA0FRRDDS18_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS19Bits_t BIT;
} FLXA0FRRDDS19_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS20Bits_t BIT;
} FLXA0FRRDDS20_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS21Bits_t BIT;
} FLXA0FRRDDS21_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS22Bits_t BIT;
} FLXA0FRRDDS22_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS23Bits_t BIT;
} FLXA0FRRDDS23_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS24Bits_t BIT;
} FLXA0FRRDDS24_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS25Bits_t BIT;
} FLXA0FRRDDS25_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS26Bits_t BIT;
} FLXA0FRRDDS26_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS27Bits_t BIT;
} FLXA0FRRDDS27_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS28Bits_t BIT;
} FLXA0FRRDDS28_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS29Bits_t BIT;
} FLXA0FRRDDS29_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS30Bits_t BIT;
} FLXA0FRRDDS30_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS31Bits_t BIT;
} FLXA0FRRDDS31_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS32Bits_t BIT;
} FLXA0FRRDDS32_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS33Bits_t BIT;
} FLXA0FRRDDS33_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS34Bits_t BIT;
} FLXA0FRRDDS34_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS35Bits_t BIT;
} FLXA0FRRDDS35_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS36Bits_t BIT;
} FLXA0FRRDDS36_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS37Bits_t BIT;
} FLXA0FRRDDS37_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS38Bits_t BIT;
} FLXA0FRRDDS38_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS39Bits_t BIT;
} FLXA0FRRDDS39_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS40Bits_t BIT;
} FLXA0FRRDDS40_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS41Bits_t BIT;
} FLXA0FRRDDS41_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS42Bits_t BIT;
} FLXA0FRRDDS42_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS43Bits_t BIT;
} FLXA0FRRDDS43_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS44Bits_t BIT;
} FLXA0FRRDDS44_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS45Bits_t BIT;
} FLXA0FRRDDS45_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS46Bits_t BIT;
} FLXA0FRRDDS46_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS47Bits_t BIT;
} FLXA0FRRDDS47_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS48Bits_t BIT;
} FLXA0FRRDDS48_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS49Bits_t BIT;
} FLXA0FRRDDS49_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS50Bits_t BIT;
} FLXA0FRRDDS50_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS51Bits_t BIT;
} FLXA0FRRDDS51_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS52Bits_t BIT;
} FLXA0FRRDDS52_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS53Bits_t BIT;
} FLXA0FRRDDS53_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS54Bits_t BIT;
} FLXA0FRRDDS54_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS55Bits_t BIT;
} FLXA0FRRDDS55_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS56Bits_t BIT;
} FLXA0FRRDDS56_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS57Bits_t BIT;
} FLXA0FRRDDS57_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS58Bits_t BIT;
} FLXA0FRRDDS58_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS59Bits_t BIT;
} FLXA0FRRDDS59_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS60Bits_t BIT;
} FLXA0FRRDDS60_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS61Bits_t BIT;
} FLXA0FRRDDS61_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS62Bits_t BIT;
} FLXA0FRRDDS62_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS63Bits_t BIT;
} FLXA0FRRDDS63_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDDS64Bits_t BIT;
} FLXA0FRRDDS64_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDHS1Bits_t BIT;
} FLXA0FRRDHS1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDHS2Bits_t BIT;
} FLXA0FRRDHS2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRRDHS3Bits_t BIT;
} FLXA0FRRDHS3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    const FLXA0FRMBSBits_t BIT;
} FLXA0FRMBS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FROBCMBits_t BIT;
} FLXA0FROBCM_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FROBCRBits_t BIT;
} FLXA0FROBCR_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRITCBits_t BIT;
} FLXA0FRITC_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FROTCBits_t BIT;
} FLXA0FROTC_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRIBABits_t BIT;
} FLXA0FRIBA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRFBABits_t BIT;
} FLXA0FRFBA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FROBABits_t BIT;
} FLXA0FROBA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRIQCBits_t BIT;
} FLXA0FRIQC_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRUIRBits_t BIT;
} FLXA0FRUIR_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRUORBits_t BIT;
} FLXA0FRUOR_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRITSBits_t BIT;
} FLXA0FRITS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FROTSBits_t BIT;
} FLXA0FROTS_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRAESBits_t BIT;
} FLXA0FRAES_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRAEABits_t BIT;
} FLXA0FRAEA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRDA0Bits_t BIT;
} FLXA0FRDA0_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRDA1Bits_t BIT;
} FLXA0FRDA1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRDA2Bits_t BIT;
} FLXA0FRDA2_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRDA3Bits_t BIT;
} FLXA0FRDA3_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FLXA0FRT2CBits_t BIT;
} FLXA0FRT2C_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FLXA0FRPV_BASE, 0x10020000, __READ, FLXA0FRPV_t);
__IOREG(FLXA0FROC_BASE, 0x10020004, __READ_WRITE, FLXA0FROC_t);
__IOREG(FLXA0FROS_BASE, 0x1002000C, __READ_WRITE, FLXA0FROS_t);
__IOREG(FLXA0FRLCK_BASE, 0x1002001C, __READ_WRITE, FLXA0FRLCK_t);
__IOREG(FLXA0FREIR_BASE, 0x10020020, __READ_WRITE, FLXA0FREIR_t);
__IOREG(FLXA0FRSIR_BASE, 0x10020024, __READ_WRITE, FLXA0FRSIR_t);
__IOREG(FLXA0FREILS_BASE, 0x10020028, __READ_WRITE, FLXA0FREILS_t);
__IOREG(FLXA0FRSILS_BASE, 0x1002002C, __READ_WRITE, FLXA0FRSILS_t);
__IOREG(FLXA0FREIES_BASE, 0x10020030, __READ_WRITE, FLXA0FREIES_t);
__IOREG(FLXA0FREIER_BASE, 0x10020034, __READ_WRITE, FLXA0FREIER_t);
__IOREG(FLXA0FRSIES_BASE, 0x10020038, __READ_WRITE, FLXA0FRSIES_t);
__IOREG(FLXA0FRSIER_BASE, 0x1002003C, __READ_WRITE, FLXA0FRSIER_t);
__IOREG(FLXA0FRILE_BASE, 0x10020040, __READ_WRITE, FLXA0FRILE_t);
__IOREG(FLXA0FRT0C_BASE, 0x10020044, __READ_WRITE, FLXA0FRT0C_t);
__IOREG(FLXA0FRT1C_BASE, 0x10020048, __READ_WRITE, FLXA0FRT1C_t);
__IOREG(FLXA0FRSTPW1_BASE, 0x1002004C, __READ_WRITE, FLXA0FRSTPW1_t);
__IOREG(FLXA0FRSTPW2_BASE, 0x10020050, __READ, FLXA0FRSTPW2_t);
__IOREG(FLXA0FRSUCC1_BASE, 0x10020080, __READ_WRITE, FLXA0FRSUCC1_t);
__IOREG(FLXA0FRSUCC2_BASE, 0x10020084, __READ_WRITE, FLXA0FRSUCC2_t);
__IOREG(FLXA0FRSUCC3_BASE, 0x10020088, __READ_WRITE, FLXA0FRSUCC3_t);
__IOREG(FLXA0FRNEMC_BASE, 0x1002008C, __READ_WRITE, FLXA0FRNEMC_t);
__IOREG(FLXA0FRPRTC1_BASE, 0x10020090, __READ_WRITE, FLXA0FRPRTC1_t);
__IOREG(FLXA0FRPRTC2_BASE, 0x10020094, __READ_WRITE, FLXA0FRPRTC2_t);
__IOREG(FLXA0FRMHDC_BASE, 0x10020098, __READ_WRITE, FLXA0FRMHDC_t);
__IOREG(FLXA0FRGTUC1_BASE, 0x100200A0, __READ_WRITE, FLXA0FRGTUC1_t);
__IOREG(FLXA0FRGTUC2_BASE, 0x100200A4, __READ_WRITE, FLXA0FRGTUC2_t);
__IOREG(FLXA0FRGTUC3_BASE, 0x100200A8, __READ_WRITE, FLXA0FRGTUC3_t);
__IOREG(FLXA0FRGTUC4_BASE, 0x100200AC, __READ_WRITE, FLXA0FRGTUC4_t);
__IOREG(FLXA0FRGTUC5_BASE, 0x100200B0, __READ_WRITE, FLXA0FRGTUC5_t);
__IOREG(FLXA0FRGTUC6_BASE, 0x100200B4, __READ_WRITE, FLXA0FRGTUC6_t);
__IOREG(FLXA0FRGTUC7_BASE, 0x100200B8, __READ_WRITE, FLXA0FRGTUC7_t);
__IOREG(FLXA0FRGTUC8_BASE, 0x100200BC, __READ_WRITE, FLXA0FRGTUC8_t);
__IOREG(FLXA0FRGTUC9_BASE, 0x100200C0, __READ_WRITE, FLXA0FRGTUC9_t);
__IOREG(FLXA0FRGTUC10_BASE, 0x100200C4, __READ_WRITE, FLXA0FRGTUC10_t);
__IOREG(FLXA0FRGTUC11_BASE, 0x100200C8, __READ_WRITE, FLXA0FRGTUC11_t);
__IOREG(FLXA0FRCCSV_BASE, 0x10020100, __READ, FLXA0FRCCSV_t);
__IOREG(FLXA0FRCCEV_BASE, 0x10020104, __READ, FLXA0FRCCEV_t);
__IOREG(FLXA0FRSCV_BASE, 0x10020110, __READ, FLXA0FRSCV_t);
__IOREG(FLXA0FRMTCCV_BASE, 0x10020114, __READ, FLXA0FRMTCCV_t);
__IOREG(FLXA0FRRCV_BASE, 0x10020118, __READ, FLXA0FRRCV_t);
__IOREG(FLXA0FROCV_BASE, 0x1002011C, __READ, FLXA0FROCV_t);
__IOREG(FLXA0FRSFS_BASE, 0x10020120, __READ, FLXA0FRSFS_t);
__IOREG(FLXA0FRSWNIT_BASE, 0x10020124, __READ, FLXA0FRSWNIT_t);
__IOREG(FLXA0FRACS_BASE, 0x10020128, __READ_WRITE, FLXA0FRACS_t);
__IOREG(FLXA0FRESID1_BASE, 0x10020130, __READ, FLXA0FRESID1_t);
__IOREG(FLXA0FRESID2_BASE, 0x10020134, __READ, FLXA0FRESID2_t);
__IOREG(FLXA0FRESID3_BASE, 0x10020138, __READ, FLXA0FRESID3_t);
__IOREG(FLXA0FRESID4_BASE, 0x1002013C, __READ, FLXA0FRESID4_t);
__IOREG(FLXA0FRESID5_BASE, 0x10020140, __READ, FLXA0FRESID5_t);
__IOREG(FLXA0FRESID6_BASE, 0x10020144, __READ, FLXA0FRESID6_t);
__IOREG(FLXA0FRESID7_BASE, 0x10020148, __READ, FLXA0FRESID7_t);
__IOREG(FLXA0FRESID8_BASE, 0x1002014C, __READ, FLXA0FRESID8_t);
__IOREG(FLXA0FRESID9_BASE, 0x10020150, __READ, FLXA0FRESID9_t);
__IOREG(FLXA0FRESID10_BASE, 0x10020154, __READ, FLXA0FRESID10_t);
__IOREG(FLXA0FRESID11_BASE, 0x10020158, __READ, FLXA0FRESID11_t);
__IOREG(FLXA0FRESID12_BASE, 0x1002015C, __READ, FLXA0FRESID12_t);
__IOREG(FLXA0FRESID13_BASE, 0x10020160, __READ, FLXA0FRESID13_t);
__IOREG(FLXA0FRESID14_BASE, 0x10020164, __READ, FLXA0FRESID14_t);
__IOREG(FLXA0FRESID15_BASE, 0x10020168, __READ, FLXA0FRESID15_t);
__IOREG(FLXA0FROSID1_BASE, 0x10020170, __READ, FLXA0FROSID1_t);
__IOREG(FLXA0FROSID2_BASE, 0x10020174, __READ, FLXA0FROSID2_t);
__IOREG(FLXA0FROSID3_BASE, 0x10020178, __READ, FLXA0FROSID3_t);
__IOREG(FLXA0FROSID4_BASE, 0x1002017C, __READ, FLXA0FROSID4_t);
__IOREG(FLXA0FROSID5_BASE, 0x10020180, __READ, FLXA0FROSID5_t);
__IOREG(FLXA0FROSID6_BASE, 0x10020184, __READ, FLXA0FROSID6_t);
__IOREG(FLXA0FROSID7_BASE, 0x10020188, __READ, FLXA0FROSID7_t);
__IOREG(FLXA0FROSID8_BASE, 0x1002018C, __READ, FLXA0FROSID8_t);
__IOREG(FLXA0FROSID9_BASE, 0x10020190, __READ, FLXA0FROSID9_t);
__IOREG(FLXA0FROSID10_BASE, 0x10020194, __READ, FLXA0FROSID10_t);
__IOREG(FLXA0FROSID11_BASE, 0x10020198, __READ, FLXA0FROSID11_t);
__IOREG(FLXA0FROSID12_BASE, 0x1002019C, __READ, FLXA0FROSID12_t);
__IOREG(FLXA0FROSID13_BASE, 0x100201A0, __READ, FLXA0FROSID13_t);
__IOREG(FLXA0FROSID14_BASE, 0x100201A4, __READ, FLXA0FROSID14_t);
__IOREG(FLXA0FROSID15_BASE, 0x100201A8, __READ, FLXA0FROSID15_t);
__IOREG(FLXA0FRNMV1_BASE, 0x100201B0, __READ, FLXA0FRNMV1_t);
__IOREG(FLXA0FRNMV2_BASE, 0x100201B4, __READ, FLXA0FRNMV2_t);
__IOREG(FLXA0FRNMV3_BASE, 0x100201B8, __READ, FLXA0FRNMV3_t);
__IOREG(FLXA0FRMRC_BASE, 0x10020300, __READ_WRITE, FLXA0FRMRC_t);
__IOREG(FLXA0FRFRF_BASE, 0x10020304, __READ_WRITE, FLXA0FRFRF_t);
__IOREG(FLXA0FRFRFM_BASE, 0x10020308, __READ_WRITE, FLXA0FRFRFM_t);
__IOREG(FLXA0FRFCL_BASE, 0x1002030C, __READ_WRITE, FLXA0FRFCL_t);
__IOREG(FLXA0FRMHDS_BASE, 0x10020310, __READ_WRITE, FLXA0FRMHDS_t);
__IOREG(FLXA0FRLDTS_BASE, 0x10020314, __READ_WRITE, FLXA0FRLDTS_t);
__IOREG(FLXA0FRFSR_BASE, 0x10020318, __READ, FLXA0FRFSR_t);
__IOREG(FLXA0FRMHDF_BASE, 0x1002031C, __READ_WRITE, FLXA0FRMHDF_t);
__IOREG(FLXA0FRTXRQ1_BASE, 0x10020320, __READ, FLXA0FRTXRQ1_t);
__IOREG(FLXA0FRTXRQ2_BASE, 0x10020324, __READ, FLXA0FRTXRQ2_t);
__IOREG(FLXA0FRTXRQ3_BASE, 0x10020328, __READ, FLXA0FRTXRQ3_t);
__IOREG(FLXA0FRTXRQ4_BASE, 0x1002032C, __READ, FLXA0FRTXRQ4_t);
__IOREG(FLXA0FRNDAT1_BASE, 0x10020330, __READ_WRITE, FLXA0FRNDAT1_t);
__IOREG(FLXA0FRNDAT2_BASE, 0x10020334, __READ_WRITE, FLXA0FRNDAT2_t);
__IOREG(FLXA0FRNDAT3_BASE, 0x10020338, __READ_WRITE, FLXA0FRNDAT3_t);
__IOREG(FLXA0FRNDAT4_BASE, 0x1002033C, __READ_WRITE, FLXA0FRNDAT4_t);
__IOREG(FLXA0FRMBSC1_BASE, 0x10020340, __READ_WRITE, FLXA0FRMBSC1_t);
__IOREG(FLXA0FRMBSC2_BASE, 0x10020344, __READ_WRITE, FLXA0FRMBSC2_t);
__IOREG(FLXA0FRMBSC3_BASE, 0x10020348, __READ_WRITE, FLXA0FRMBSC3_t);
__IOREG(FLXA0FRMBSC4_BASE, 0x1002034C, __READ_WRITE, FLXA0FRMBSC4_t);
__IOREG(FLXA0FRWRDS1_BASE, 0x10020400, __READ_WRITE, FLXA0FRWRDS1_t);
__IOREG(FLXA0FRWRDS2_BASE, 0x10020404, __READ_WRITE, FLXA0FRWRDS2_t);
__IOREG(FLXA0FRWRDS3_BASE, 0x10020408, __READ_WRITE, FLXA0FRWRDS3_t);
__IOREG(FLXA0FRWRDS4_BASE, 0x1002040C, __READ_WRITE, FLXA0FRWRDS4_t);
__IOREG(FLXA0FRWRDS5_BASE, 0x10020410, __READ_WRITE, FLXA0FRWRDS5_t);
__IOREG(FLXA0FRWRDS6_BASE, 0x10020414, __READ_WRITE, FLXA0FRWRDS6_t);
__IOREG(FLXA0FRWRDS7_BASE, 0x10020418, __READ_WRITE, FLXA0FRWRDS7_t);
__IOREG(FLXA0FRWRDS8_BASE, 0x1002041C, __READ_WRITE, FLXA0FRWRDS8_t);
__IOREG(FLXA0FRWRDS9_BASE, 0x10020420, __READ_WRITE, FLXA0FRWRDS9_t);
__IOREG(FLXA0FRWRDS10_BASE, 0x10020424, __READ_WRITE, FLXA0FRWRDS10_t);
__IOREG(FLXA0FRWRDS11_BASE, 0x10020428, __READ_WRITE, FLXA0FRWRDS11_t);
__IOREG(FLXA0FRWRDS12_BASE, 0x1002042C, __READ_WRITE, FLXA0FRWRDS12_t);
__IOREG(FLXA0FRWRDS13_BASE, 0x10020430, __READ_WRITE, FLXA0FRWRDS13_t);
__IOREG(FLXA0FRWRDS14_BASE, 0x10020434, __READ_WRITE, FLXA0FRWRDS14_t);
__IOREG(FLXA0FRWRDS15_BASE, 0x10020438, __READ_WRITE, FLXA0FRWRDS15_t);
__IOREG(FLXA0FRWRDS16_BASE, 0x1002043C, __READ_WRITE, FLXA0FRWRDS16_t);
__IOREG(FLXA0FRWRDS17_BASE, 0x10020440, __READ_WRITE, FLXA0FRWRDS17_t);
__IOREG(FLXA0FRWRDS18_BASE, 0x10020444, __READ_WRITE, FLXA0FRWRDS18_t);
__IOREG(FLXA0FRWRDS19_BASE, 0x10020448, __READ_WRITE, FLXA0FRWRDS19_t);
__IOREG(FLXA0FRWRDS20_BASE, 0x1002044C, __READ_WRITE, FLXA0FRWRDS20_t);
__IOREG(FLXA0FRWRDS21_BASE, 0x10020450, __READ_WRITE, FLXA0FRWRDS21_t);
__IOREG(FLXA0FRWRDS22_BASE, 0x10020454, __READ_WRITE, FLXA0FRWRDS22_t);
__IOREG(FLXA0FRWRDS23_BASE, 0x10020458, __READ_WRITE, FLXA0FRWRDS23_t);
__IOREG(FLXA0FRWRDS24_BASE, 0x1002045C, __READ_WRITE, FLXA0FRWRDS24_t);
__IOREG(FLXA0FRWRDS25_BASE, 0x10020460, __READ_WRITE, FLXA0FRWRDS25_t);
__IOREG(FLXA0FRWRDS26_BASE, 0x10020464, __READ_WRITE, FLXA0FRWRDS26_t);
__IOREG(FLXA0FRWRDS27_BASE, 0x10020468, __READ_WRITE, FLXA0FRWRDS27_t);
__IOREG(FLXA0FRWRDS28_BASE, 0x1002046C, __READ_WRITE, FLXA0FRWRDS28_t);
__IOREG(FLXA0FRWRDS29_BASE, 0x10020470, __READ_WRITE, FLXA0FRWRDS29_t);
__IOREG(FLXA0FRWRDS30_BASE, 0x10020474, __READ_WRITE, FLXA0FRWRDS30_t);
__IOREG(FLXA0FRWRDS31_BASE, 0x10020478, __READ_WRITE, FLXA0FRWRDS31_t);
__IOREG(FLXA0FRWRDS32_BASE, 0x1002047C, __READ_WRITE, FLXA0FRWRDS32_t);
__IOREG(FLXA0FRWRDS33_BASE, 0x10020480, __READ_WRITE, FLXA0FRWRDS33_t);
__IOREG(FLXA0FRWRDS34_BASE, 0x10020484, __READ_WRITE, FLXA0FRWRDS34_t);
__IOREG(FLXA0FRWRDS35_BASE, 0x10020488, __READ_WRITE, FLXA0FRWRDS35_t);
__IOREG(FLXA0FRWRDS36_BASE, 0x1002048C, __READ_WRITE, FLXA0FRWRDS36_t);
__IOREG(FLXA0FRWRDS37_BASE, 0x10020490, __READ_WRITE, FLXA0FRWRDS37_t);
__IOREG(FLXA0FRWRDS38_BASE, 0x10020494, __READ_WRITE, FLXA0FRWRDS38_t);
__IOREG(FLXA0FRWRDS39_BASE, 0x10020498, __READ_WRITE, FLXA0FRWRDS39_t);
__IOREG(FLXA0FRWRDS40_BASE, 0x1002049C, __READ_WRITE, FLXA0FRWRDS40_t);
__IOREG(FLXA0FRWRDS41_BASE, 0x100204A0, __READ_WRITE, FLXA0FRWRDS41_t);
__IOREG(FLXA0FRWRDS42_BASE, 0x100204A4, __READ_WRITE, FLXA0FRWRDS42_t);
__IOREG(FLXA0FRWRDS43_BASE, 0x100204A8, __READ_WRITE, FLXA0FRWRDS43_t);
__IOREG(FLXA0FRWRDS44_BASE, 0x100204AC, __READ_WRITE, FLXA0FRWRDS44_t);
__IOREG(FLXA0FRWRDS45_BASE, 0x100204B0, __READ_WRITE, FLXA0FRWRDS45_t);
__IOREG(FLXA0FRWRDS46_BASE, 0x100204B4, __READ_WRITE, FLXA0FRWRDS46_t);
__IOREG(FLXA0FRWRDS47_BASE, 0x100204B8, __READ_WRITE, FLXA0FRWRDS47_t);
__IOREG(FLXA0FRWRDS48_BASE, 0x100204BC, __READ_WRITE, FLXA0FRWRDS48_t);
__IOREG(FLXA0FRWRDS49_BASE, 0x100204C0, __READ_WRITE, FLXA0FRWRDS49_t);
__IOREG(FLXA0FRWRDS50_BASE, 0x100204C4, __READ_WRITE, FLXA0FRWRDS50_t);
__IOREG(FLXA0FRWRDS51_BASE, 0x100204C8, __READ_WRITE, FLXA0FRWRDS51_t);
__IOREG(FLXA0FRWRDS52_BASE, 0x100204CC, __READ_WRITE, FLXA0FRWRDS52_t);
__IOREG(FLXA0FRWRDS53_BASE, 0x100204D0, __READ_WRITE, FLXA0FRWRDS53_t);
__IOREG(FLXA0FRWRDS54_BASE, 0x100204D4, __READ_WRITE, FLXA0FRWRDS54_t);
__IOREG(FLXA0FRWRDS55_BASE, 0x100204D8, __READ_WRITE, FLXA0FRWRDS55_t);
__IOREG(FLXA0FRWRDS56_BASE, 0x100204DC, __READ_WRITE, FLXA0FRWRDS56_t);
__IOREG(FLXA0FRWRDS57_BASE, 0x100204E0, __READ_WRITE, FLXA0FRWRDS57_t);
__IOREG(FLXA0FRWRDS58_BASE, 0x100204E4, __READ_WRITE, FLXA0FRWRDS58_t);
__IOREG(FLXA0FRWRDS59_BASE, 0x100204E8, __READ_WRITE, FLXA0FRWRDS59_t);
__IOREG(FLXA0FRWRDS60_BASE, 0x100204EC, __READ_WRITE, FLXA0FRWRDS60_t);
__IOREG(FLXA0FRWRDS61_BASE, 0x100204F0, __READ_WRITE, FLXA0FRWRDS61_t);
__IOREG(FLXA0FRWRDS62_BASE, 0x100204F4, __READ_WRITE, FLXA0FRWRDS62_t);
__IOREG(FLXA0FRWRDS63_BASE, 0x100204F8, __READ_WRITE, FLXA0FRWRDS63_t);
__IOREG(FLXA0FRWRDS64_BASE, 0x100204FC, __READ_WRITE, FLXA0FRWRDS64_t);
__IOREG(FLXA0FRWRHS1_BASE, 0x10020500, __READ_WRITE, FLXA0FRWRHS1_t);
__IOREG(FLXA0FRWRHS2_BASE, 0x10020504, __READ_WRITE, FLXA0FRWRHS2_t);
__IOREG(FLXA0FRWRHS3_BASE, 0x10020508, __READ_WRITE, FLXA0FRWRHS3_t);
__IOREG(FLXA0FRIBCM_BASE, 0x10020510, __READ_WRITE, FLXA0FRIBCM_t);
__IOREG(FLXA0FRIBCR_BASE, 0x10020514, __READ_WRITE, FLXA0FRIBCR_t);
__IOREG(FLXA0FRRDDS1_BASE, 0x10020600, __READ, FLXA0FRRDDS1_t);
__IOREG(FLXA0FRRDDS2_BASE, 0x10020604, __READ, FLXA0FRRDDS2_t);
__IOREG(FLXA0FRRDDS3_BASE, 0x10020608, __READ, FLXA0FRRDDS3_t);
__IOREG(FLXA0FRRDDS4_BASE, 0x1002060C, __READ, FLXA0FRRDDS4_t);
__IOREG(FLXA0FRRDDS5_BASE, 0x10020610, __READ, FLXA0FRRDDS5_t);
__IOREG(FLXA0FRRDDS6_BASE, 0x10020614, __READ, FLXA0FRRDDS6_t);
__IOREG(FLXA0FRRDDS7_BASE, 0x10020618, __READ, FLXA0FRRDDS7_t);
__IOREG(FLXA0FRRDDS8_BASE, 0x1002061C, __READ, FLXA0FRRDDS8_t);
__IOREG(FLXA0FRRDDS9_BASE, 0x10020620, __READ, FLXA0FRRDDS9_t);
__IOREG(FLXA0FRRDDS10_BASE, 0x10020624, __READ, FLXA0FRRDDS10_t);
__IOREG(FLXA0FRRDDS11_BASE, 0x10020628, __READ, FLXA0FRRDDS11_t);
__IOREG(FLXA0FRRDDS12_BASE, 0x1002062C, __READ, FLXA0FRRDDS12_t);
__IOREG(FLXA0FRRDDS13_BASE, 0x10020630, __READ, FLXA0FRRDDS13_t);
__IOREG(FLXA0FRRDDS14_BASE, 0x10020634, __READ, FLXA0FRRDDS14_t);
__IOREG(FLXA0FRRDDS15_BASE, 0x10020638, __READ, FLXA0FRRDDS15_t);
__IOREG(FLXA0FRRDDS16_BASE, 0x1002063C, __READ, FLXA0FRRDDS16_t);
__IOREG(FLXA0FRRDDS17_BASE, 0x10020640, __READ, FLXA0FRRDDS17_t);
__IOREG(FLXA0FRRDDS18_BASE, 0x10020644, __READ, FLXA0FRRDDS18_t);
__IOREG(FLXA0FRRDDS19_BASE, 0x10020648, __READ, FLXA0FRRDDS19_t);
__IOREG(FLXA0FRRDDS20_BASE, 0x1002064C, __READ, FLXA0FRRDDS20_t);
__IOREG(FLXA0FRRDDS21_BASE, 0x10020650, __READ, FLXA0FRRDDS21_t);
__IOREG(FLXA0FRRDDS22_BASE, 0x10020654, __READ, FLXA0FRRDDS22_t);
__IOREG(FLXA0FRRDDS23_BASE, 0x10020658, __READ, FLXA0FRRDDS23_t);
__IOREG(FLXA0FRRDDS24_BASE, 0x1002065C, __READ, FLXA0FRRDDS24_t);
__IOREG(FLXA0FRRDDS25_BASE, 0x10020660, __READ, FLXA0FRRDDS25_t);
__IOREG(FLXA0FRRDDS26_BASE, 0x10020664, __READ, FLXA0FRRDDS26_t);
__IOREG(FLXA0FRRDDS27_BASE, 0x10020668, __READ, FLXA0FRRDDS27_t);
__IOREG(FLXA0FRRDDS28_BASE, 0x1002066C, __READ, FLXA0FRRDDS28_t);
__IOREG(FLXA0FRRDDS29_BASE, 0x10020670, __READ, FLXA0FRRDDS29_t);
__IOREG(FLXA0FRRDDS30_BASE, 0x10020674, __READ, FLXA0FRRDDS30_t);
__IOREG(FLXA0FRRDDS31_BASE, 0x10020678, __READ, FLXA0FRRDDS31_t);
__IOREG(FLXA0FRRDDS32_BASE, 0x1002067C, __READ, FLXA0FRRDDS32_t);
__IOREG(FLXA0FRRDDS33_BASE, 0x10020680, __READ, FLXA0FRRDDS33_t);
__IOREG(FLXA0FRRDDS34_BASE, 0x10020684, __READ, FLXA0FRRDDS34_t);
__IOREG(FLXA0FRRDDS35_BASE, 0x10020688, __READ, FLXA0FRRDDS35_t);
__IOREG(FLXA0FRRDDS36_BASE, 0x1002068C, __READ, FLXA0FRRDDS36_t);
__IOREG(FLXA0FRRDDS37_BASE, 0x10020690, __READ, FLXA0FRRDDS37_t);
__IOREG(FLXA0FRRDDS38_BASE, 0x10020694, __READ, FLXA0FRRDDS38_t);
__IOREG(FLXA0FRRDDS39_BASE, 0x10020698, __READ, FLXA0FRRDDS39_t);
__IOREG(FLXA0FRRDDS40_BASE, 0x1002069C, __READ, FLXA0FRRDDS40_t);
__IOREG(FLXA0FRRDDS41_BASE, 0x100206A0, __READ, FLXA0FRRDDS41_t);
__IOREG(FLXA0FRRDDS42_BASE, 0x100206A4, __READ, FLXA0FRRDDS42_t);
__IOREG(FLXA0FRRDDS43_BASE, 0x100206A8, __READ, FLXA0FRRDDS43_t);
__IOREG(FLXA0FRRDDS44_BASE, 0x100206AC, __READ, FLXA0FRRDDS44_t);
__IOREG(FLXA0FRRDDS45_BASE, 0x100206B0, __READ, FLXA0FRRDDS45_t);
__IOREG(FLXA0FRRDDS46_BASE, 0x100206B4, __READ, FLXA0FRRDDS46_t);
__IOREG(FLXA0FRRDDS47_BASE, 0x100206B8, __READ, FLXA0FRRDDS47_t);
__IOREG(FLXA0FRRDDS48_BASE, 0x100206BC, __READ, FLXA0FRRDDS48_t);
__IOREG(FLXA0FRRDDS49_BASE, 0x100206C0, __READ, FLXA0FRRDDS49_t);
__IOREG(FLXA0FRRDDS50_BASE, 0x100206C4, __READ, FLXA0FRRDDS50_t);
__IOREG(FLXA0FRRDDS51_BASE, 0x100206C8, __READ, FLXA0FRRDDS51_t);
__IOREG(FLXA0FRRDDS52_BASE, 0x100206CC, __READ, FLXA0FRRDDS52_t);
__IOREG(FLXA0FRRDDS53_BASE, 0x100206D0, __READ, FLXA0FRRDDS53_t);
__IOREG(FLXA0FRRDDS54_BASE, 0x100206D4, __READ, FLXA0FRRDDS54_t);
__IOREG(FLXA0FRRDDS55_BASE, 0x100206D8, __READ, FLXA0FRRDDS55_t);
__IOREG(FLXA0FRRDDS56_BASE, 0x100206DC, __READ, FLXA0FRRDDS56_t);
__IOREG(FLXA0FRRDDS57_BASE, 0x100206E0, __READ, FLXA0FRRDDS57_t);
__IOREG(FLXA0FRRDDS58_BASE, 0x100206E4, __READ, FLXA0FRRDDS58_t);
__IOREG(FLXA0FRRDDS59_BASE, 0x100206E8, __READ, FLXA0FRRDDS59_t);
__IOREG(FLXA0FRRDDS60_BASE, 0x100206EC, __READ, FLXA0FRRDDS60_t);
__IOREG(FLXA0FRRDDS61_BASE, 0x100206F0, __READ, FLXA0FRRDDS61_t);
__IOREG(FLXA0FRRDDS62_BASE, 0x100206F4, __READ, FLXA0FRRDDS62_t);
__IOREG(FLXA0FRRDDS63_BASE, 0x100206F8, __READ, FLXA0FRRDDS63_t);
__IOREG(FLXA0FRRDDS64_BASE, 0x100206FC, __READ, FLXA0FRRDDS64_t);
__IOREG(FLXA0FRRDHS1_BASE, 0x10020700, __READ, FLXA0FRRDHS1_t);
__IOREG(FLXA0FRRDHS2_BASE, 0x10020704, __READ, FLXA0FRRDHS2_t);
__IOREG(FLXA0FRRDHS3_BASE, 0x10020708, __READ, FLXA0FRRDHS3_t);
__IOREG(FLXA0FRMBS_BASE, 0x1002070C, __READ, FLXA0FRMBS_t);
__IOREG(FLXA0FROBCM_BASE, 0x10020710, __READ_WRITE, FLXA0FROBCM_t);
__IOREG(FLXA0FROBCR_BASE, 0x10020714, __READ_WRITE, FLXA0FROBCR_t);
__IOREG(FLXA0FRITC_BASE, 0x10020800, __READ_WRITE, FLXA0FRITC_t);
__IOREG(FLXA0FROTC_BASE, 0x10020804, __READ_WRITE, FLXA0FROTC_t);
__IOREG(FLXA0FRIBA_BASE, 0x10020808, __READ_WRITE, FLXA0FRIBA_t);
__IOREG(FLXA0FRFBA_BASE, 0x1002080C, __READ_WRITE, FLXA0FRFBA_t);
__IOREG(FLXA0FROBA_BASE, 0x10020810, __READ_WRITE, FLXA0FROBA_t);
__IOREG(FLXA0FRIQC_BASE, 0x10020814, __READ_WRITE, FLXA0FRIQC_t);
__IOREG(FLXA0FRUIR_BASE, 0x10020818, __READ_WRITE, FLXA0FRUIR_t);
__IOREG(FLXA0FRUOR_BASE, 0x1002081C, __READ_WRITE, FLXA0FRUOR_t);
__IOREG(FLXA0FRITS_BASE, 0x10020820, __READ_WRITE, FLXA0FRITS_t);
__IOREG(FLXA0FROTS_BASE, 0x10020824, __READ_WRITE, FLXA0FROTS_t);
__IOREG(FLXA0FRAES_BASE, 0x10020828, __READ_WRITE, FLXA0FRAES_t);
__IOREG(FLXA0FRAEA_BASE, 0x1002082C, __READ_WRITE, FLXA0FRAEA_t);
__IOREG(FLXA0FRDA0_BASE, 0x10020830, __READ_WRITE, FLXA0FRDA0_t);
__IOREG(FLXA0FRDA1_BASE, 0x10020834, __READ_WRITE, FLXA0FRDA1_t);
__IOREG(FLXA0FRDA2_BASE, 0x10020838, __READ_WRITE, FLXA0FRDA2_t);
__IOREG(FLXA0FRDA3_BASE, 0x1002083C, __READ_WRITE, FLXA0FRDA3_t);
__IOREG(FLXA0FRT2C_BASE, 0x10020844, __READ_WRITE, FLXA0FRT2C_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FLXA0FRPV FLXA0FRPV_BASE.UINT32
#define FLXA0FRPV_JID FLXA0FRPV_BASE.BIT._JID
#define FLXA0FRPV_INV FLXA0FRPV_BASE.BIT._INV
#define FLXA0FRPV_AID FLXA0FRPV_BASE.BIT._AID
#define FLXA0FROC FLXA0FROC_BASE.UINT32
#define FLXA0FROCL FLXA0FROC_BASE.UINT16[L]
#define FLXA0FROCH FLXA0FROC_BASE.UINT16[H]
#define FLXA0FROCLL FLXA0FROC_BASE.UINT8[LL]
#define FLXA0FROCLH FLXA0FROC_BASE.UINT8[LH]
#define FLXA0FROCHL FLXA0FROC_BASE.UINT8[HL]
#define FLXA0FROCHH FLXA0FROC_BASE.UINT8[HH]
#define FLXA0FROC_OE FLXA0FROC_BASE.BIT._OE
#define FLXA0FROC_BEC FLXA0FROC_BASE.BIT._BEC
#define FLXA0FROC_OEP FLXA0FROC_BASE.BIT._OEP
#define FLXA0FROC_T0IE FLXA0FROC_BASE.BIT._T0IE
#define FLXA0FROC_T1IE FLXA0FROC_BASE.BIT._T1IE
#define FLXA0FROC_T2IE FLXA0FROC_BASE.BIT._T2IE
#define FLXA0FROS FLXA0FROS_BASE.UINT32
#define FLXA0FROSL FLXA0FROS_BASE.UINT16[L]
#define FLXA0FROSH FLXA0FROS_BASE.UINT16[H]
#define FLXA0FROSLL FLXA0FROS_BASE.UINT8[LL]
#define FLXA0FROSLH FLXA0FROS_BASE.UINT8[LH]
#define FLXA0FROSHL FLXA0FROS_BASE.UINT8[HL]
#define FLXA0FROSHH FLXA0FROS_BASE.UINT8[HH]
#define FLXA0FROS_OS FLXA0FROS_BASE.BIT._OS
#define FLXA0FROS_T0IS FLXA0FROS_BASE.BIT._T0IS
#define FLXA0FROS_T1IS FLXA0FROS_BASE.BIT._T1IS
#define FLXA0FROS_T2IS FLXA0FROS_BASE.BIT._T2IS
#define FLXA0FRLCK FLXA0FRLCK_BASE.UINT32
#define FLXA0FRLCKL FLXA0FRLCK_BASE.UINT16[L]
#define FLXA0FRLCKH FLXA0FRLCK_BASE.UINT16[H]
#define FLXA0FRLCKLL FLXA0FRLCK_BASE.UINT8[LL]
#define FLXA0FRLCKLH FLXA0FRLCK_BASE.UINT8[LH]
#define FLXA0FRLCKHL FLXA0FRLCK_BASE.UINT8[HL]
#define FLXA0FRLCKHH FLXA0FRLCK_BASE.UINT8[HH]
#define FLXA0FRLCK_CLK FLXA0FRLCK_BASE.BIT._CLK
#define FLXA0FREIR FLXA0FREIR_BASE.UINT32
#define FLXA0FREIRL FLXA0FREIR_BASE.UINT16[L]
#define FLXA0FREIRH FLXA0FREIR_BASE.UINT16[H]
#define FLXA0FREIRLL FLXA0FREIR_BASE.UINT8[LL]
#define FLXA0FREIRLH FLXA0FREIR_BASE.UINT8[LH]
#define FLXA0FREIRHL FLXA0FREIR_BASE.UINT8[HL]
#define FLXA0FREIRHH FLXA0FREIR_BASE.UINT8[HH]
#define FLXA0FREIR_PEMC FLXA0FREIR_BASE.BIT._PEMC
#define FLXA0FREIR_CNA FLXA0FREIR_BASE.BIT._CNA
#define FLXA0FREIR_SFBM FLXA0FREIR_BASE.BIT._SFBM
#define FLXA0FREIR_SFO FLXA0FREIR_BASE.BIT._SFO
#define FLXA0FREIR_CCF FLXA0FREIR_BASE.BIT._CCF
#define FLXA0FREIR_CCL FLXA0FREIR_BASE.BIT._CCL
#define FLXA0FREIR_AERR FLXA0FREIR_BASE.BIT._AERR
#define FLXA0FREIR_RFO FLXA0FREIR_BASE.BIT._RFO
#define FLXA0FREIR_EFA FLXA0FREIR_BASE.BIT._EFA
#define FLXA0FREIR_IIBA FLXA0FREIR_BASE.BIT._IIBA
#define FLXA0FREIR_IOBA FLXA0FREIR_BASE.BIT._IOBA
#define FLXA0FREIR_MHF FLXA0FREIR_BASE.BIT._MHF
#define FLXA0FREIR_EDA FLXA0FREIR_BASE.BIT._EDA
#define FLXA0FREIR_LTVA FLXA0FREIR_BASE.BIT._LTVA
#define FLXA0FREIR_TABA FLXA0FREIR_BASE.BIT._TABA
#define FLXA0FREIR_EDB FLXA0FREIR_BASE.BIT._EDB
#define FLXA0FREIR_LTVB FLXA0FREIR_BASE.BIT._LTVB
#define FLXA0FREIR_TABB FLXA0FREIR_BASE.BIT._TABB
#define FLXA0FRSIR FLXA0FRSIR_BASE.UINT32
#define FLXA0FRSIRL FLXA0FRSIR_BASE.UINT16[L]
#define FLXA0FRSIRH FLXA0FRSIR_BASE.UINT16[H]
#define FLXA0FRSIRLL FLXA0FRSIR_BASE.UINT8[LL]
#define FLXA0FRSIRLH FLXA0FRSIR_BASE.UINT8[LH]
#define FLXA0FRSIRHL FLXA0FRSIR_BASE.UINT8[HL]
#define FLXA0FRSIRHH FLXA0FRSIR_BASE.UINT8[HH]
#define FLXA0FRSIR_WST FLXA0FRSIR_BASE.BIT._WST
#define FLXA0FRSIR_CAS FLXA0FRSIR_BASE.BIT._CAS
#define FLXA0FRSIR_CYCS FLXA0FRSIR_BASE.BIT._CYCS
#define FLXA0FRSIR_TXI FLXA0FRSIR_BASE.BIT._TXI
#define FLXA0FRSIR_RXI FLXA0FRSIR_BASE.BIT._RXI
#define FLXA0FRSIR_RFNE FLXA0FRSIR_BASE.BIT._RFNE
#define FLXA0FRSIR_RFCL FLXA0FRSIR_BASE.BIT._RFCL
#define FLXA0FRSIR_NMVC FLXA0FRSIR_BASE.BIT._NMVC
#define FLXA0FRSIR_TI0 FLXA0FRSIR_BASE.BIT._TI0
#define FLXA0FRSIR_TI1 FLXA0FRSIR_BASE.BIT._TI1
#define FLXA0FRSIR_TIBC FLXA0FRSIR_BASE.BIT._TIBC
#define FLXA0FRSIR_TOBC FLXA0FRSIR_BASE.BIT._TOBC
#define FLXA0FRSIR_SWE FLXA0FRSIR_BASE.BIT._SWE
#define FLXA0FRSIR_SUCS FLXA0FRSIR_BASE.BIT._SUCS
#define FLXA0FRSIR_MBSI FLXA0FRSIR_BASE.BIT._MBSI
#define FLXA0FRSIR_SDS FLXA0FRSIR_BASE.BIT._SDS
#define FLXA0FRSIR_WUPA FLXA0FRSIR_BASE.BIT._WUPA
#define FLXA0FRSIR_MTSA FLXA0FRSIR_BASE.BIT._MTSA
#define FLXA0FRSIR_WUPB FLXA0FRSIR_BASE.BIT._WUPB
#define FLXA0FRSIR_MTSB FLXA0FRSIR_BASE.BIT._MTSB
#define FLXA0FREILS FLXA0FREILS_BASE.UINT32
#define FLXA0FREILSL FLXA0FREILS_BASE.UINT16[L]
#define FLXA0FREILSH FLXA0FREILS_BASE.UINT16[H]
#define FLXA0FREILSLL FLXA0FREILS_BASE.UINT8[LL]
#define FLXA0FREILSLH FLXA0FREILS_BASE.UINT8[LH]
#define FLXA0FREILSHL FLXA0FREILS_BASE.UINT8[HL]
#define FLXA0FREILSHH FLXA0FREILS_BASE.UINT8[HH]
#define FLXA0FREILS_PEMCL FLXA0FREILS_BASE.BIT._PEMCL
#define FLXA0FREILS_CNAL FLXA0FREILS_BASE.BIT._CNAL
#define FLXA0FREILS_SFBML FLXA0FREILS_BASE.BIT._SFBML
#define FLXA0FREILS_SFOL FLXA0FREILS_BASE.BIT._SFOL
#define FLXA0FREILS_CCFL FLXA0FREILS_BASE.BIT._CCFL
#define FLXA0FREILS_CCLL FLXA0FREILS_BASE.BIT._CCLL
#define FLXA0FREILS_AERRL FLXA0FREILS_BASE.BIT._AERRL
#define FLXA0FREILS_RFOL FLXA0FREILS_BASE.BIT._RFOL
#define FLXA0FREILS_EFAL FLXA0FREILS_BASE.BIT._EFAL
#define FLXA0FREILS_IIBAL FLXA0FREILS_BASE.BIT._IIBAL
#define FLXA0FREILS_IOBAL FLXA0FREILS_BASE.BIT._IOBAL
#define FLXA0FREILS_MHFL FLXA0FREILS_BASE.BIT._MHFL
#define FLXA0FREILS_EDAL FLXA0FREILS_BASE.BIT._EDAL
#define FLXA0FREILS_LTVAL FLXA0FREILS_BASE.BIT._LTVAL
#define FLXA0FREILS_TABAL FLXA0FREILS_BASE.BIT._TABAL
#define FLXA0FREILS_EDBL FLXA0FREILS_BASE.BIT._EDBL
#define FLXA0FREILS_LTVBL FLXA0FREILS_BASE.BIT._LTVBL
#define FLXA0FREILS_TABBL FLXA0FREILS_BASE.BIT._TABBL
#define FLXA0FRSILS FLXA0FRSILS_BASE.UINT32
#define FLXA0FRSILSL FLXA0FRSILS_BASE.UINT16[L]
#define FLXA0FRSILSH FLXA0FRSILS_BASE.UINT16[H]
#define FLXA0FRSILSLL FLXA0FRSILS_BASE.UINT8[LL]
#define FLXA0FRSILSLH FLXA0FRSILS_BASE.UINT8[LH]
#define FLXA0FRSILSHL FLXA0FRSILS_BASE.UINT8[HL]
#define FLXA0FRSILSHH FLXA0FRSILS_BASE.UINT8[HH]
#define FLXA0FRSILS_WSTL FLXA0FRSILS_BASE.BIT._WSTL
#define FLXA0FRSILS_CASL FLXA0FRSILS_BASE.BIT._CASL
#define FLXA0FRSILS_CYCSL FLXA0FRSILS_BASE.BIT._CYCSL
#define FLXA0FRSILS_TXIL FLXA0FRSILS_BASE.BIT._TXIL
#define FLXA0FRSILS_RXIL FLXA0FRSILS_BASE.BIT._RXIL
#define FLXA0FRSILS_RFNEL FLXA0FRSILS_BASE.BIT._RFNEL
#define FLXA0FRSILS_RFCLL FLXA0FRSILS_BASE.BIT._RFCLL
#define FLXA0FRSILS_NMVCL FLXA0FRSILS_BASE.BIT._NMVCL
#define FLXA0FRSILS_TI0L FLXA0FRSILS_BASE.BIT._TI0L
#define FLXA0FRSILS_TI1L FLXA0FRSILS_BASE.BIT._TI1L
#define FLXA0FRSILS_TIBCL FLXA0FRSILS_BASE.BIT._TIBCL
#define FLXA0FRSILS_TOBCL FLXA0FRSILS_BASE.BIT._TOBCL
#define FLXA0FRSILS_SWEL FLXA0FRSILS_BASE.BIT._SWEL
#define FLXA0FRSILS_SUCSL FLXA0FRSILS_BASE.BIT._SUCSL
#define FLXA0FRSILS_MBSIL FLXA0FRSILS_BASE.BIT._MBSIL
#define FLXA0FRSILS_SDSL FLXA0FRSILS_BASE.BIT._SDSL
#define FLXA0FRSILS_WUPAL FLXA0FRSILS_BASE.BIT._WUPAL
#define FLXA0FRSILS_MTSAL FLXA0FRSILS_BASE.BIT._MTSAL
#define FLXA0FRSILS_WUPBL FLXA0FRSILS_BASE.BIT._WUPBL
#define FLXA0FRSILS_MTSBL FLXA0FRSILS_BASE.BIT._MTSBL
#define FLXA0FREIES FLXA0FREIES_BASE.UINT32
#define FLXA0FREIESL FLXA0FREIES_BASE.UINT16[L]
#define FLXA0FREIESH FLXA0FREIES_BASE.UINT16[H]
#define FLXA0FREIESLL FLXA0FREIES_BASE.UINT8[LL]
#define FLXA0FREIESLH FLXA0FREIES_BASE.UINT8[LH]
#define FLXA0FREIESHL FLXA0FREIES_BASE.UINT8[HL]
#define FLXA0FREIESHH FLXA0FREIES_BASE.UINT8[HH]
#define FLXA0FREIES_PEMCE FLXA0FREIES_BASE.BIT._PEMCE
#define FLXA0FREIES_CNAE FLXA0FREIES_BASE.BIT._CNAE
#define FLXA0FREIES_SFBME FLXA0FREIES_BASE.BIT._SFBME
#define FLXA0FREIES_SFOE FLXA0FREIES_BASE.BIT._SFOE
#define FLXA0FREIES_CCFE FLXA0FREIES_BASE.BIT._CCFE
#define FLXA0FREIES_CCLE FLXA0FREIES_BASE.BIT._CCLE
#define FLXA0FREIES_AERRE FLXA0FREIES_BASE.BIT._AERRE
#define FLXA0FREIES_RFOE FLXA0FREIES_BASE.BIT._RFOE
#define FLXA0FREIES_EFAE FLXA0FREIES_BASE.BIT._EFAE
#define FLXA0FREIES_IIBAE FLXA0FREIES_BASE.BIT._IIBAE
#define FLXA0FREIES_IOBAE FLXA0FREIES_BASE.BIT._IOBAE
#define FLXA0FREIES_MHFE FLXA0FREIES_BASE.BIT._MHFE
#define FLXA0FREIES_EDAE FLXA0FREIES_BASE.BIT._EDAE
#define FLXA0FREIES_LTVAE FLXA0FREIES_BASE.BIT._LTVAE
#define FLXA0FREIES_TABAE FLXA0FREIES_BASE.BIT._TABAE
#define FLXA0FREIES_EDBE FLXA0FREIES_BASE.BIT._EDBE
#define FLXA0FREIES_LTVBE FLXA0FREIES_BASE.BIT._LTVBE
#define FLXA0FREIES_TABBE FLXA0FREIES_BASE.BIT._TABBE
#define FLXA0FREIER FLXA0FREIER_BASE.UINT32
#define FLXA0FREIERL FLXA0FREIER_BASE.UINT16[L]
#define FLXA0FREIERH FLXA0FREIER_BASE.UINT16[H]
#define FLXA0FREIERLL FLXA0FREIER_BASE.UINT8[LL]
#define FLXA0FREIERLH FLXA0FREIER_BASE.UINT8[LH]
#define FLXA0FREIERHL FLXA0FREIER_BASE.UINT8[HL]
#define FLXA0FREIERHH FLXA0FREIER_BASE.UINT8[HH]
#define FLXA0FREIER_PEMCD FLXA0FREIER_BASE.BIT._PEMCD
#define FLXA0FREIER_CNAD FLXA0FREIER_BASE.BIT._CNAD
#define FLXA0FREIER_SFBMD FLXA0FREIER_BASE.BIT._SFBMD
#define FLXA0FREIER_SFOD FLXA0FREIER_BASE.BIT._SFOD
#define FLXA0FREIER_CCFD FLXA0FREIER_BASE.BIT._CCFD
#define FLXA0FREIER_CCLD FLXA0FREIER_BASE.BIT._CCLD
#define FLXA0FREIER_AERRD FLXA0FREIER_BASE.BIT._AERRD
#define FLXA0FREIER_RFOD FLXA0FREIER_BASE.BIT._RFOD
#define FLXA0FREIER_EFAD FLXA0FREIER_BASE.BIT._EFAD
#define FLXA0FREIER_IIBAD FLXA0FREIER_BASE.BIT._IIBAD
#define FLXA0FREIER_IOBAD FLXA0FREIER_BASE.BIT._IOBAD
#define FLXA0FREIER_MHFD FLXA0FREIER_BASE.BIT._MHFD
#define FLXA0FREIER_EDAD FLXA0FREIER_BASE.BIT._EDAD
#define FLXA0FREIER_LTVAD FLXA0FREIER_BASE.BIT._LTVAD
#define FLXA0FREIER_TABAD FLXA0FREIER_BASE.BIT._TABAD
#define FLXA0FREIER_EDBD FLXA0FREIER_BASE.BIT._EDBD
#define FLXA0FREIER_LTVBD FLXA0FREIER_BASE.BIT._LTVBD
#define FLXA0FREIER_TABBD FLXA0FREIER_BASE.BIT._TABBD
#define FLXA0FRSIES FLXA0FRSIES_BASE.UINT32
#define FLXA0FRSIESL FLXA0FRSIES_BASE.UINT16[L]
#define FLXA0FRSIESH FLXA0FRSIES_BASE.UINT16[H]
#define FLXA0FRSIESLL FLXA0FRSIES_BASE.UINT8[LL]
#define FLXA0FRSIESLH FLXA0FRSIES_BASE.UINT8[LH]
#define FLXA0FRSIESHL FLXA0FRSIES_BASE.UINT8[HL]
#define FLXA0FRSIESHH FLXA0FRSIES_BASE.UINT8[HH]
#define FLXA0FRSIES_WSTE FLXA0FRSIES_BASE.BIT._WSTE
#define FLXA0FRSIES_CASE FLXA0FRSIES_BASE.BIT._CASE
#define FLXA0FRSIES_CYCSE FLXA0FRSIES_BASE.BIT._CYCSE
#define FLXA0FRSIES_TXIE FLXA0FRSIES_BASE.BIT._TXIE
#define FLXA0FRSIES_RXIE FLXA0FRSIES_BASE.BIT._RXIE
#define FLXA0FRSIES_RFNEE FLXA0FRSIES_BASE.BIT._RFNEE
#define FLXA0FRSIES_RFCLE FLXA0FRSIES_BASE.BIT._RFCLE
#define FLXA0FRSIES_NMVCE FLXA0FRSIES_BASE.BIT._NMVCE
#define FLXA0FRSIES_TI0E FLXA0FRSIES_BASE.BIT._TI0E
#define FLXA0FRSIES_TI1E FLXA0FRSIES_BASE.BIT._TI1E
#define FLXA0FRSIES_TIBCE FLXA0FRSIES_BASE.BIT._TIBCE
#define FLXA0FRSIES_TOBCE FLXA0FRSIES_BASE.BIT._TOBCE
#define FLXA0FRSIES_SWEE FLXA0FRSIES_BASE.BIT._SWEE
#define FLXA0FRSIES_SUCSE FLXA0FRSIES_BASE.BIT._SUCSE
#define FLXA0FRSIES_MBSIE FLXA0FRSIES_BASE.BIT._MBSIE
#define FLXA0FRSIES_SDSE FLXA0FRSIES_BASE.BIT._SDSE
#define FLXA0FRSIES_WUPAE FLXA0FRSIES_BASE.BIT._WUPAE
#define FLXA0FRSIES_MTSAE FLXA0FRSIES_BASE.BIT._MTSAE
#define FLXA0FRSIES_WUPBE FLXA0FRSIES_BASE.BIT._WUPBE
#define FLXA0FRSIES_MTSBE FLXA0FRSIES_BASE.BIT._MTSBE
#define FLXA0FRSIER FLXA0FRSIER_BASE.UINT32
#define FLXA0FRSIERL FLXA0FRSIER_BASE.UINT16[L]
#define FLXA0FRSIERH FLXA0FRSIER_BASE.UINT16[H]
#define FLXA0FRSIERLL FLXA0FRSIER_BASE.UINT8[LL]
#define FLXA0FRSIERLH FLXA0FRSIER_BASE.UINT8[LH]
#define FLXA0FRSIERHL FLXA0FRSIER_BASE.UINT8[HL]
#define FLXA0FRSIERHH FLXA0FRSIER_BASE.UINT8[HH]
#define FLXA0FRSIER_WSTD FLXA0FRSIER_BASE.BIT._WSTD
#define FLXA0FRSIER_CASD FLXA0FRSIER_BASE.BIT._CASD
#define FLXA0FRSIER_CYCSD FLXA0FRSIER_BASE.BIT._CYCSD
#define FLXA0FRSIER_TXID FLXA0FRSIER_BASE.BIT._TXID
#define FLXA0FRSIER_RXID FLXA0FRSIER_BASE.BIT._RXID
#define FLXA0FRSIER_RFNED FLXA0FRSIER_BASE.BIT._RFNED
#define FLXA0FRSIER_RFCLD FLXA0FRSIER_BASE.BIT._RFCLD
#define FLXA0FRSIER_NMVCD FLXA0FRSIER_BASE.BIT._NMVCD
#define FLXA0FRSIER_TI0D FLXA0FRSIER_BASE.BIT._TI0D
#define FLXA0FRSIER_TI1D FLXA0FRSIER_BASE.BIT._TI1D
#define FLXA0FRSIER_TIBCD FLXA0FRSIER_BASE.BIT._TIBCD
#define FLXA0FRSIER_TOBCD FLXA0FRSIER_BASE.BIT._TOBCD
#define FLXA0FRSIER_SWED FLXA0FRSIER_BASE.BIT._SWED
#define FLXA0FRSIER_SUCSD FLXA0FRSIER_BASE.BIT._SUCSD
#define FLXA0FRSIER_MBSID FLXA0FRSIER_BASE.BIT._MBSID
#define FLXA0FRSIER_SDSD FLXA0FRSIER_BASE.BIT._SDSD
#define FLXA0FRSIER_WUPAD FLXA0FRSIER_BASE.BIT._WUPAD
#define FLXA0FRSIER_MTSAD FLXA0FRSIER_BASE.BIT._MTSAD
#define FLXA0FRSIER_WUPBD FLXA0FRSIER_BASE.BIT._WUPBD
#define FLXA0FRSIER_MTSBD FLXA0FRSIER_BASE.BIT._MTSBD
#define FLXA0FRILE FLXA0FRILE_BASE.UINT32
#define FLXA0FRILEL FLXA0FRILE_BASE.UINT16[L]
#define FLXA0FRILEH FLXA0FRILE_BASE.UINT16[H]
#define FLXA0FRILELL FLXA0FRILE_BASE.UINT8[LL]
#define FLXA0FRILELH FLXA0FRILE_BASE.UINT8[LH]
#define FLXA0FRILEHL FLXA0FRILE_BASE.UINT8[HL]
#define FLXA0FRILEHH FLXA0FRILE_BASE.UINT8[HH]
#define FLXA0FRILE_EINT0 FLXA0FRILE_BASE.BIT._EINT0
#define FLXA0FRILE_EINT1 FLXA0FRILE_BASE.BIT._EINT1
#define FLXA0FRT0C FLXA0FRT0C_BASE.UINT32
#define FLXA0FRT0CL FLXA0FRT0C_BASE.UINT16[L]
#define FLXA0FRT0CH FLXA0FRT0C_BASE.UINT16[H]
#define FLXA0FRT0CLL FLXA0FRT0C_BASE.UINT8[LL]
#define FLXA0FRT0CLH FLXA0FRT0C_BASE.UINT8[LH]
#define FLXA0FRT0CHL FLXA0FRT0C_BASE.UINT8[HL]
#define FLXA0FRT0CHH FLXA0FRT0C_BASE.UINT8[HH]
#define FLXA0FRT0C_T0RC FLXA0FRT0C_BASE.BIT._T0RC
#define FLXA0FRT0C_T0MS FLXA0FRT0C_BASE.BIT._T0MS
#define FLXA0FRT0C_T0CC FLXA0FRT0C_BASE.BIT._T0CC
#define FLXA0FRT0C_T0MO FLXA0FRT0C_BASE.BIT._T0MO
#define FLXA0FRT1C FLXA0FRT1C_BASE.UINT32
#define FLXA0FRT1CL FLXA0FRT1C_BASE.UINT16[L]
#define FLXA0FRT1CH FLXA0FRT1C_BASE.UINT16[H]
#define FLXA0FRT1CLL FLXA0FRT1C_BASE.UINT8[LL]
#define FLXA0FRT1CLH FLXA0FRT1C_BASE.UINT8[LH]
#define FLXA0FRT1CHL FLXA0FRT1C_BASE.UINT8[HL]
#define FLXA0FRT1CHH FLXA0FRT1C_BASE.UINT8[HH]
#define FLXA0FRT1C_T1RC FLXA0FRT1C_BASE.BIT._T1RC
#define FLXA0FRT1C_T1MS FLXA0FRT1C_BASE.BIT._T1MS
#define FLXA0FRT1C_T1MC FLXA0FRT1C_BASE.BIT._T1MC
#define FLXA0FRSTPW1 FLXA0FRSTPW1_BASE.UINT32
#define FLXA0FRSTPW1L FLXA0FRSTPW1_BASE.UINT16[L]
#define FLXA0FRSTPW1H FLXA0FRSTPW1_BASE.UINT16[H]
#define FLXA0FRSTPW1LL FLXA0FRSTPW1_BASE.UINT8[LL]
#define FLXA0FRSTPW1LH FLXA0FRSTPW1_BASE.UINT8[LH]
#define FLXA0FRSTPW1HL FLXA0FRSTPW1_BASE.UINT8[HL]
#define FLXA0FRSTPW1HH FLXA0FRSTPW1_BASE.UINT8[HH]
#define FLXA0FRSTPW1_ESWT FLXA0FRSTPW1_BASE.BIT._ESWT
#define FLXA0FRSTPW1_SWMS FLXA0FRSTPW1_BASE.BIT._SWMS
#define FLXA0FRSTPW1_EDGE FLXA0FRSTPW1_BASE.BIT._EDGE
#define FLXA0FRSTPW1_SSWT FLXA0FRSTPW1_BASE.BIT._SSWT
#define FLXA0FRSTPW1_EINT0 FLXA0FRSTPW1_BASE.BIT._EINT0
#define FLXA0FRSTPW1_EINT1 FLXA0FRSTPW1_BASE.BIT._EINT1
#define FLXA0FRSTPW1_SCCV FLXA0FRSTPW1_BASE.BIT._SCCV
#define FLXA0FRSTPW1_SMTV FLXA0FRSTPW1_BASE.BIT._SMTV
#define FLXA0FRSTPW2 FLXA0FRSTPW2_BASE.UINT32
#define FLXA0FRSTPW2L FLXA0FRSTPW2_BASE.UINT16[L]
#define FLXA0FRSTPW2H FLXA0FRSTPW2_BASE.UINT16[H]
#define FLXA0FRSTPW2LL FLXA0FRSTPW2_BASE.UINT8[LL]
#define FLXA0FRSTPW2LH FLXA0FRSTPW2_BASE.UINT8[LH]
#define FLXA0FRSTPW2HL FLXA0FRSTPW2_BASE.UINT8[HL]
#define FLXA0FRSTPW2HH FLXA0FRSTPW2_BASE.UINT8[HH]
#define FLXA0FRSTPW2_SSCVA FLXA0FRSTPW2_BASE.BIT._SSCVA
#define FLXA0FRSTPW2_SSCVB FLXA0FRSTPW2_BASE.BIT._SSCVB
#define FLXA0FRSUCC1 FLXA0FRSUCC1_BASE.UINT32
#define FLXA0FRSUCC1L FLXA0FRSUCC1_BASE.UINT16[L]
#define FLXA0FRSUCC1H FLXA0FRSUCC1_BASE.UINT16[H]
#define FLXA0FRSUCC1LL FLXA0FRSUCC1_BASE.UINT8[LL]
#define FLXA0FRSUCC1LH FLXA0FRSUCC1_BASE.UINT8[LH]
#define FLXA0FRSUCC1HL FLXA0FRSUCC1_BASE.UINT8[HL]
#define FLXA0FRSUCC1HH FLXA0FRSUCC1_BASE.UINT8[HH]
#define FLXA0FRSUCC1_CMD FLXA0FRSUCC1_BASE.BIT._CMD
#define FLXA0FRSUCC1_PBSY FLXA0FRSUCC1_BASE.BIT._PBSY
#define FLXA0FRSUCC1_TXST FLXA0FRSUCC1_BASE.BIT._TXST
#define FLXA0FRSUCC1_TXSY FLXA0FRSUCC1_BASE.BIT._TXSY
#define FLXA0FRSUCC1_CSA FLXA0FRSUCC1_BASE.BIT._CSA
#define FLXA0FRSUCC1_PTA FLXA0FRSUCC1_BASE.BIT._PTA
#define FLXA0FRSUCC1_WUCS FLXA0FRSUCC1_BASE.BIT._WUCS
#define FLXA0FRSUCC1_TSM FLXA0FRSUCC1_BASE.BIT._TSM
#define FLXA0FRSUCC1_HCSE FLXA0FRSUCC1_BASE.BIT._HCSE
#define FLXA0FRSUCC1_MTSA FLXA0FRSUCC1_BASE.BIT._MTSA
#define FLXA0FRSUCC1_MTSB FLXA0FRSUCC1_BASE.BIT._MTSB
#define FLXA0FRSUCC1_CCHA FLXA0FRSUCC1_BASE.BIT._CCHA
#define FLXA0FRSUCC1_CCHB FLXA0FRSUCC1_BASE.BIT._CCHB
#define FLXA0FRSUCC2 FLXA0FRSUCC2_BASE.UINT32
#define FLXA0FRSUCC2L FLXA0FRSUCC2_BASE.UINT16[L]
#define FLXA0FRSUCC2H FLXA0FRSUCC2_BASE.UINT16[H]
#define FLXA0FRSUCC2LL FLXA0FRSUCC2_BASE.UINT8[LL]
#define FLXA0FRSUCC2LH FLXA0FRSUCC2_BASE.UINT8[LH]
#define FLXA0FRSUCC2HL FLXA0FRSUCC2_BASE.UINT8[HL]
#define FLXA0FRSUCC2HH FLXA0FRSUCC2_BASE.UINT8[HH]
#define FLXA0FRSUCC2_LT FLXA0FRSUCC2_BASE.BIT._LT
#define FLXA0FRSUCC2_LTN FLXA0FRSUCC2_BASE.BIT._LTN
#define FLXA0FRSUCC3 FLXA0FRSUCC3_BASE.UINT32
#define FLXA0FRSUCC3L FLXA0FRSUCC3_BASE.UINT16[L]
#define FLXA0FRSUCC3H FLXA0FRSUCC3_BASE.UINT16[H]
#define FLXA0FRSUCC3LL FLXA0FRSUCC3_BASE.UINT8[LL]
#define FLXA0FRSUCC3LH FLXA0FRSUCC3_BASE.UINT8[LH]
#define FLXA0FRSUCC3HL FLXA0FRSUCC3_BASE.UINT8[HL]
#define FLXA0FRSUCC3HH FLXA0FRSUCC3_BASE.UINT8[HH]
#define FLXA0FRSUCC3_WCP FLXA0FRSUCC3_BASE.BIT._WCP
#define FLXA0FRSUCC3_WCF FLXA0FRSUCC3_BASE.BIT._WCF
#define FLXA0FRNEMC FLXA0FRNEMC_BASE.UINT32
#define FLXA0FRNEMCL FLXA0FRNEMC_BASE.UINT16[L]
#define FLXA0FRNEMCH FLXA0FRNEMC_BASE.UINT16[H]
#define FLXA0FRNEMCLL FLXA0FRNEMC_BASE.UINT8[LL]
#define FLXA0FRNEMCLH FLXA0FRNEMC_BASE.UINT8[LH]
#define FLXA0FRNEMCHL FLXA0FRNEMC_BASE.UINT8[HL]
#define FLXA0FRNEMCHH FLXA0FRNEMC_BASE.UINT8[HH]
#define FLXA0FRNEMC_NML FLXA0FRNEMC_BASE.BIT._NML
#define FLXA0FRPRTC1 FLXA0FRPRTC1_BASE.UINT32
#define FLXA0FRPRTC1L FLXA0FRPRTC1_BASE.UINT16[L]
#define FLXA0FRPRTC1H FLXA0FRPRTC1_BASE.UINT16[H]
#define FLXA0FRPRTC1LL FLXA0FRPRTC1_BASE.UINT8[LL]
#define FLXA0FRPRTC1LH FLXA0FRPRTC1_BASE.UINT8[LH]
#define FLXA0FRPRTC1HL FLXA0FRPRTC1_BASE.UINT8[HL]
#define FLXA0FRPRTC1HH FLXA0FRPRTC1_BASE.UINT8[HH]
#define FLXA0FRPRTC1_TSST FLXA0FRPRTC1_BASE.BIT._TSST
#define FLXA0FRPRTC1_CASM FLXA0FRPRTC1_BASE.BIT._CASM
#define FLXA0FRPRTC1_SPP FLXA0FRPRTC1_BASE.BIT._SPP
#define FLXA0FRPRTC1_BRP FLXA0FRPRTC1_BASE.BIT._BRP
#define FLXA0FRPRTC1_RXW FLXA0FRPRTC1_BASE.BIT._RXW
#define FLXA0FRPRTC1_RWP FLXA0FRPRTC1_BASE.BIT._RWP
#define FLXA0FRPRTC2 FLXA0FRPRTC2_BASE.UINT32
#define FLXA0FRPRTC2L FLXA0FRPRTC2_BASE.UINT16[L]
#define FLXA0FRPRTC2H FLXA0FRPRTC2_BASE.UINT16[H]
#define FLXA0FRPRTC2LL FLXA0FRPRTC2_BASE.UINT8[LL]
#define FLXA0FRPRTC2LH FLXA0FRPRTC2_BASE.UINT8[LH]
#define FLXA0FRPRTC2HL FLXA0FRPRTC2_BASE.UINT8[HL]
#define FLXA0FRPRTC2HH FLXA0FRPRTC2_BASE.UINT8[HH]
#define FLXA0FRPRTC2_RXI FLXA0FRPRTC2_BASE.BIT._RXI
#define FLXA0FRPRTC2_RXL FLXA0FRPRTC2_BASE.BIT._RXL
#define FLXA0FRPRTC2_TXI FLXA0FRPRTC2_BASE.BIT._TXI
#define FLXA0FRPRTC2_TXL FLXA0FRPRTC2_BASE.BIT._TXL
#define FLXA0FRMHDC FLXA0FRMHDC_BASE.UINT32
#define FLXA0FRMHDCL FLXA0FRMHDC_BASE.UINT16[L]
#define FLXA0FRMHDCH FLXA0FRMHDC_BASE.UINT16[H]
#define FLXA0FRMHDCLL FLXA0FRMHDC_BASE.UINT8[LL]
#define FLXA0FRMHDCLH FLXA0FRMHDC_BASE.UINT8[LH]
#define FLXA0FRMHDCHL FLXA0FRMHDC_BASE.UINT8[HL]
#define FLXA0FRMHDCHH FLXA0FRMHDC_BASE.UINT8[HH]
#define FLXA0FRMHDC_SFDL FLXA0FRMHDC_BASE.BIT._SFDL
#define FLXA0FRMHDC_SLT FLXA0FRMHDC_BASE.BIT._SLT
#define FLXA0FRGTUC1 FLXA0FRGTUC1_BASE.UINT32
#define FLXA0FRGTUC1L FLXA0FRGTUC1_BASE.UINT16[L]
#define FLXA0FRGTUC1H FLXA0FRGTUC1_BASE.UINT16[H]
#define FLXA0FRGTUC1LL FLXA0FRGTUC1_BASE.UINT8[LL]
#define FLXA0FRGTUC1LH FLXA0FRGTUC1_BASE.UINT8[LH]
#define FLXA0FRGTUC1HL FLXA0FRGTUC1_BASE.UINT8[HL]
#define FLXA0FRGTUC1HH FLXA0FRGTUC1_BASE.UINT8[HH]
#define FLXA0FRGTUC1_UT FLXA0FRGTUC1_BASE.BIT._UT
#define FLXA0FRGTUC2 FLXA0FRGTUC2_BASE.UINT32
#define FLXA0FRGTUC2L FLXA0FRGTUC2_BASE.UINT16[L]
#define FLXA0FRGTUC2H FLXA0FRGTUC2_BASE.UINT16[H]
#define FLXA0FRGTUC2LL FLXA0FRGTUC2_BASE.UINT8[LL]
#define FLXA0FRGTUC2LH FLXA0FRGTUC2_BASE.UINT8[LH]
#define FLXA0FRGTUC2HL FLXA0FRGTUC2_BASE.UINT8[HL]
#define FLXA0FRGTUC2HH FLXA0FRGTUC2_BASE.UINT8[HH]
#define FLXA0FRGTUC2_MPC FLXA0FRGTUC2_BASE.BIT._MPC
#define FLXA0FRGTUC2_SNM FLXA0FRGTUC2_BASE.BIT._SNM
#define FLXA0FRGTUC3 FLXA0FRGTUC3_BASE.UINT32
#define FLXA0FRGTUC3L FLXA0FRGTUC3_BASE.UINT16[L]
#define FLXA0FRGTUC3H FLXA0FRGTUC3_BASE.UINT16[H]
#define FLXA0FRGTUC3LL FLXA0FRGTUC3_BASE.UINT8[LL]
#define FLXA0FRGTUC3LH FLXA0FRGTUC3_BASE.UINT8[LH]
#define FLXA0FRGTUC3HL FLXA0FRGTUC3_BASE.UINT8[HL]
#define FLXA0FRGTUC3HH FLXA0FRGTUC3_BASE.UINT8[HH]
#define FLXA0FRGTUC3_UIOA FLXA0FRGTUC3_BASE.BIT._UIOA
#define FLXA0FRGTUC3_UIOB FLXA0FRGTUC3_BASE.BIT._UIOB
#define FLXA0FRGTUC3_MIOA FLXA0FRGTUC3_BASE.BIT._MIOA
#define FLXA0FRGTUC3_MIOB FLXA0FRGTUC3_BASE.BIT._MIOB
#define FLXA0FRGTUC4 FLXA0FRGTUC4_BASE.UINT32
#define FLXA0FRGTUC4L FLXA0FRGTUC4_BASE.UINT16[L]
#define FLXA0FRGTUC4H FLXA0FRGTUC4_BASE.UINT16[H]
#define FLXA0FRGTUC4LL FLXA0FRGTUC4_BASE.UINT8[LL]
#define FLXA0FRGTUC4LH FLXA0FRGTUC4_BASE.UINT8[LH]
#define FLXA0FRGTUC4HL FLXA0FRGTUC4_BASE.UINT8[HL]
#define FLXA0FRGTUC4HH FLXA0FRGTUC4_BASE.UINT8[HH]
#define FLXA0FRGTUC4_NIT FLXA0FRGTUC4_BASE.BIT._NIT
#define FLXA0FRGTUC4_OCS FLXA0FRGTUC4_BASE.BIT._OCS
#define FLXA0FRGTUC5 FLXA0FRGTUC5_BASE.UINT32
#define FLXA0FRGTUC5L FLXA0FRGTUC5_BASE.UINT16[L]
#define FLXA0FRGTUC5H FLXA0FRGTUC5_BASE.UINT16[H]
#define FLXA0FRGTUC5LL FLXA0FRGTUC5_BASE.UINT8[LL]
#define FLXA0FRGTUC5LH FLXA0FRGTUC5_BASE.UINT8[LH]
#define FLXA0FRGTUC5HL FLXA0FRGTUC5_BASE.UINT8[HL]
#define FLXA0FRGTUC5HH FLXA0FRGTUC5_BASE.UINT8[HH]
#define FLXA0FRGTUC5_DCA FLXA0FRGTUC5_BASE.BIT._DCA
#define FLXA0FRGTUC5_DCB FLXA0FRGTUC5_BASE.BIT._DCB
#define FLXA0FRGTUC5_CDD FLXA0FRGTUC5_BASE.BIT._CDD
#define FLXA0FRGTUC5_DEC FLXA0FRGTUC5_BASE.BIT._DEC
#define FLXA0FRGTUC6 FLXA0FRGTUC6_BASE.UINT32
#define FLXA0FRGTUC6L FLXA0FRGTUC6_BASE.UINT16[L]
#define FLXA0FRGTUC6H FLXA0FRGTUC6_BASE.UINT16[H]
#define FLXA0FRGTUC6LL FLXA0FRGTUC6_BASE.UINT8[LL]
#define FLXA0FRGTUC6LH FLXA0FRGTUC6_BASE.UINT8[LH]
#define FLXA0FRGTUC6HL FLXA0FRGTUC6_BASE.UINT8[HL]
#define FLXA0FRGTUC6HH FLXA0FRGTUC6_BASE.UINT8[HH]
#define FLXA0FRGTUC6_ASR FLXA0FRGTUC6_BASE.BIT._ASR
#define FLXA0FRGTUC6_MOD FLXA0FRGTUC6_BASE.BIT._MOD
#define FLXA0FRGTUC7 FLXA0FRGTUC7_BASE.UINT32
#define FLXA0FRGTUC7L FLXA0FRGTUC7_BASE.UINT16[L]
#define FLXA0FRGTUC7H FLXA0FRGTUC7_BASE.UINT16[H]
#define FLXA0FRGTUC7LL FLXA0FRGTUC7_BASE.UINT8[LL]
#define FLXA0FRGTUC7LH FLXA0FRGTUC7_BASE.UINT8[LH]
#define FLXA0FRGTUC7HL FLXA0FRGTUC7_BASE.UINT8[HL]
#define FLXA0FRGTUC7HH FLXA0FRGTUC7_BASE.UINT8[HH]
#define FLXA0FRGTUC7_SSL FLXA0FRGTUC7_BASE.BIT._SSL
#define FLXA0FRGTUC7_NSS FLXA0FRGTUC7_BASE.BIT._NSS
#define FLXA0FRGTUC8 FLXA0FRGTUC8_BASE.UINT32
#define FLXA0FRGTUC8L FLXA0FRGTUC8_BASE.UINT16[L]
#define FLXA0FRGTUC8H FLXA0FRGTUC8_BASE.UINT16[H]
#define FLXA0FRGTUC8LL FLXA0FRGTUC8_BASE.UINT8[LL]
#define FLXA0FRGTUC8LH FLXA0FRGTUC8_BASE.UINT8[LH]
#define FLXA0FRGTUC8HL FLXA0FRGTUC8_BASE.UINT8[HL]
#define FLXA0FRGTUC8HH FLXA0FRGTUC8_BASE.UINT8[HH]
#define FLXA0FRGTUC8_MSL FLXA0FRGTUC8_BASE.BIT._MSL
#define FLXA0FRGTUC8_NMS FLXA0FRGTUC8_BASE.BIT._NMS
#define FLXA0FRGTUC9 FLXA0FRGTUC9_BASE.UINT32
#define FLXA0FRGTUC9L FLXA0FRGTUC9_BASE.UINT16[L]
#define FLXA0FRGTUC9H FLXA0FRGTUC9_BASE.UINT16[H]
#define FLXA0FRGTUC9LL FLXA0FRGTUC9_BASE.UINT8[LL]
#define FLXA0FRGTUC9LH FLXA0FRGTUC9_BASE.UINT8[LH]
#define FLXA0FRGTUC9HL FLXA0FRGTUC9_BASE.UINT8[HL]
#define FLXA0FRGTUC9HH FLXA0FRGTUC9_BASE.UINT8[HH]
#define FLXA0FRGTUC9_APO FLXA0FRGTUC9_BASE.BIT._APO
#define FLXA0FRGTUC9_MAPO FLXA0FRGTUC9_BASE.BIT._MAPO
#define FLXA0FRGTUC9_DSI FLXA0FRGTUC9_BASE.BIT._DSI
#define FLXA0FRGTUC10 FLXA0FRGTUC10_BASE.UINT32
#define FLXA0FRGTUC10L FLXA0FRGTUC10_BASE.UINT16[L]
#define FLXA0FRGTUC10H FLXA0FRGTUC10_BASE.UINT16[H]
#define FLXA0FRGTUC10LL FLXA0FRGTUC10_BASE.UINT8[LL]
#define FLXA0FRGTUC10LH FLXA0FRGTUC10_BASE.UINT8[LH]
#define FLXA0FRGTUC10HL FLXA0FRGTUC10_BASE.UINT8[HL]
#define FLXA0FRGTUC10HH FLXA0FRGTUC10_BASE.UINT8[HH]
#define FLXA0FRGTUC10_MOC FLXA0FRGTUC10_BASE.BIT._MOC
#define FLXA0FRGTUC10_MRC FLXA0FRGTUC10_BASE.BIT._MRC
#define FLXA0FRGTUC11 FLXA0FRGTUC11_BASE.UINT32
#define FLXA0FRGTUC11L FLXA0FRGTUC11_BASE.UINT16[L]
#define FLXA0FRGTUC11H FLXA0FRGTUC11_BASE.UINT16[H]
#define FLXA0FRGTUC11LL FLXA0FRGTUC11_BASE.UINT8[LL]
#define FLXA0FRGTUC11LH FLXA0FRGTUC11_BASE.UINT8[LH]
#define FLXA0FRGTUC11HL FLXA0FRGTUC11_BASE.UINT8[HL]
#define FLXA0FRGTUC11HH FLXA0FRGTUC11_BASE.UINT8[HH]
#define FLXA0FRGTUC11_EOCC FLXA0FRGTUC11_BASE.BIT._EOCC
#define FLXA0FRGTUC11_ERCC FLXA0FRGTUC11_BASE.BIT._ERCC
#define FLXA0FRGTUC11_EOC FLXA0FRGTUC11_BASE.BIT._EOC
#define FLXA0FRGTUC11_ERC FLXA0FRGTUC11_BASE.BIT._ERC
#define FLXA0FRCCSV FLXA0FRCCSV_BASE.UINT32
#define FLXA0FRCCSVL FLXA0FRCCSV_BASE.UINT16[L]
#define FLXA0FRCCSVH FLXA0FRCCSV_BASE.UINT16[H]
#define FLXA0FRCCSVLL FLXA0FRCCSV_BASE.UINT8[LL]
#define FLXA0FRCCSVLH FLXA0FRCCSV_BASE.UINT8[LH]
#define FLXA0FRCCSVHL FLXA0FRCCSV_BASE.UINT8[HL]
#define FLXA0FRCCSVHH FLXA0FRCCSV_BASE.UINT8[HH]
#define FLXA0FRCCSV_POCS FLXA0FRCCSV_BASE.BIT._POCS
#define FLXA0FRCCSV_FSI FLXA0FRCCSV_BASE.BIT._FSI
#define FLXA0FRCCSV_HRQ FLXA0FRCCSV_BASE.BIT._HRQ
#define FLXA0FRCCSV_SLM FLXA0FRCCSV_BASE.BIT._SLM
#define FLXA0FRCCSV_CSNI FLXA0FRCCSV_BASE.BIT._CSNI
#define FLXA0FRCCSV_CSAI FLXA0FRCCSV_BASE.BIT._CSAI
#define FLXA0FRCCSV_CSI FLXA0FRCCSV_BASE.BIT._CSI
#define FLXA0FRCCSV_WSV FLXA0FRCCSV_BASE.BIT._WSV
#define FLXA0FRCCSV_RCA FLXA0FRCCSV_BASE.BIT._RCA
#define FLXA0FRCCSV_PSL FLXA0FRCCSV_BASE.BIT._PSL
#define FLXA0FRCCEV FLXA0FRCCEV_BASE.UINT32
#define FLXA0FRCCEVL FLXA0FRCCEV_BASE.UINT16[L]
#define FLXA0FRCCEVH FLXA0FRCCEV_BASE.UINT16[H]
#define FLXA0FRCCEVLL FLXA0FRCCEV_BASE.UINT8[LL]
#define FLXA0FRCCEVLH FLXA0FRCCEV_BASE.UINT8[LH]
#define FLXA0FRCCEVHL FLXA0FRCCEV_BASE.UINT8[HL]
#define FLXA0FRCCEVHH FLXA0FRCCEV_BASE.UINT8[HH]
#define FLXA0FRCCEV_CCFC FLXA0FRCCEV_BASE.BIT._CCFC
#define FLXA0FRCCEV_ERRM FLXA0FRCCEV_BASE.BIT._ERRM
#define FLXA0FRCCEV_PTAC FLXA0FRCCEV_BASE.BIT._PTAC
#define FLXA0FRSCV FLXA0FRSCV_BASE.UINT32
#define FLXA0FRSCVL FLXA0FRSCV_BASE.UINT16[L]
#define FLXA0FRSCVH FLXA0FRSCV_BASE.UINT16[H]
#define FLXA0FRSCVLL FLXA0FRSCV_BASE.UINT8[LL]
#define FLXA0FRSCVLH FLXA0FRSCV_BASE.UINT8[LH]
#define FLXA0FRSCVHL FLXA0FRSCV_BASE.UINT8[HL]
#define FLXA0FRSCVHH FLXA0FRSCV_BASE.UINT8[HH]
#define FLXA0FRSCV_SCCA FLXA0FRSCV_BASE.BIT._SCCA
#define FLXA0FRSCV_SCCB FLXA0FRSCV_BASE.BIT._SCCB
#define FLXA0FRMTCCV FLXA0FRMTCCV_BASE.UINT32
#define FLXA0FRMTCCVL FLXA0FRMTCCV_BASE.UINT16[L]
#define FLXA0FRMTCCVH FLXA0FRMTCCV_BASE.UINT16[H]
#define FLXA0FRMTCCVLL FLXA0FRMTCCV_BASE.UINT8[LL]
#define FLXA0FRMTCCVLH FLXA0FRMTCCV_BASE.UINT8[LH]
#define FLXA0FRMTCCVHL FLXA0FRMTCCV_BASE.UINT8[HL]
#define FLXA0FRMTCCVHH FLXA0FRMTCCV_BASE.UINT8[HH]
#define FLXA0FRMTCCV_MTV FLXA0FRMTCCV_BASE.BIT._MTV
#define FLXA0FRMTCCV_CCV FLXA0FRMTCCV_BASE.BIT._CCV
#define FLXA0FRRCV FLXA0FRRCV_BASE.UINT32
#define FLXA0FRRCVL FLXA0FRRCV_BASE.UINT16[L]
#define FLXA0FRRCVH FLXA0FRRCV_BASE.UINT16[H]
#define FLXA0FRRCVLL FLXA0FRRCV_BASE.UINT8[LL]
#define FLXA0FRRCVLH FLXA0FRRCV_BASE.UINT8[LH]
#define FLXA0FRRCVHL FLXA0FRRCV_BASE.UINT8[HL]
#define FLXA0FRRCVHH FLXA0FRRCV_BASE.UINT8[HH]
#define FLXA0FRRCV_RCV FLXA0FRRCV_BASE.BIT._RCV
#define FLXA0FROCV FLXA0FROCV_BASE.UINT32
#define FLXA0FROCVL FLXA0FROCV_BASE.UINT16[L]
#define FLXA0FROCVH FLXA0FROCV_BASE.UINT16[H]
#define FLXA0FROCVLL FLXA0FROCV_BASE.UINT8[LL]
#define FLXA0FROCVLH FLXA0FROCV_BASE.UINT8[LH]
#define FLXA0FROCVHL FLXA0FROCV_BASE.UINT8[HL]
#define FLXA0FROCVHH FLXA0FROCV_BASE.UINT8[HH]
#define FLXA0FROCV_OCV FLXA0FROCV_BASE.BIT._OCV
#define FLXA0FRSFS FLXA0FRSFS_BASE.UINT32
#define FLXA0FRSFSL FLXA0FRSFS_BASE.UINT16[L]
#define FLXA0FRSFSH FLXA0FRSFS_BASE.UINT16[H]
#define FLXA0FRSFSLL FLXA0FRSFS_BASE.UINT8[LL]
#define FLXA0FRSFSLH FLXA0FRSFS_BASE.UINT8[LH]
#define FLXA0FRSFSHL FLXA0FRSFS_BASE.UINT8[HL]
#define FLXA0FRSFSHH FLXA0FRSFS_BASE.UINT8[HH]
#define FLXA0FRSFS_VSAE FLXA0FRSFS_BASE.BIT._VSAE
#define FLXA0FRSFS_VSAO FLXA0FRSFS_BASE.BIT._VSAO
#define FLXA0FRSFS_VSBE FLXA0FRSFS_BASE.BIT._VSBE
#define FLXA0FRSFS_VSBO FLXA0FRSFS_BASE.BIT._VSBO
#define FLXA0FRSFS_MOCS FLXA0FRSFS_BASE.BIT._MOCS
#define FLXA0FRSFS_OCLR FLXA0FRSFS_BASE.BIT._OCLR
#define FLXA0FRSFS_MRCS FLXA0FRSFS_BASE.BIT._MRCS
#define FLXA0FRSFS_RCLR FLXA0FRSFS_BASE.BIT._RCLR
#define FLXA0FRSWNIT FLXA0FRSWNIT_BASE.UINT32
#define FLXA0FRSWNITL FLXA0FRSWNIT_BASE.UINT16[L]
#define FLXA0FRSWNITH FLXA0FRSWNIT_BASE.UINT16[H]
#define FLXA0FRSWNITLL FLXA0FRSWNIT_BASE.UINT8[LL]
#define FLXA0FRSWNITLH FLXA0FRSWNIT_BASE.UINT8[LH]
#define FLXA0FRSWNITHL FLXA0FRSWNIT_BASE.UINT8[HL]
#define FLXA0FRSWNITHH FLXA0FRSWNIT_BASE.UINT8[HH]
#define FLXA0FRSWNIT_SESA FLXA0FRSWNIT_BASE.BIT._SESA
#define FLXA0FRSWNIT_SBSA FLXA0FRSWNIT_BASE.BIT._SBSA
#define FLXA0FRSWNIT_TCSA FLXA0FRSWNIT_BASE.BIT._TCSA
#define FLXA0FRSWNIT_SESB FLXA0FRSWNIT_BASE.BIT._SESB
#define FLXA0FRSWNIT_SBSB FLXA0FRSWNIT_BASE.BIT._SBSB
#define FLXA0FRSWNIT_TCSB FLXA0FRSWNIT_BASE.BIT._TCSB
#define FLXA0FRSWNIT_MTSA FLXA0FRSWNIT_BASE.BIT._MTSA
#define FLXA0FRSWNIT_MTSB FLXA0FRSWNIT_BASE.BIT._MTSB
#define FLXA0FRSWNIT_SENA FLXA0FRSWNIT_BASE.BIT._SENA
#define FLXA0FRSWNIT_SBNA FLXA0FRSWNIT_BASE.BIT._SBNA
#define FLXA0FRSWNIT_SENB FLXA0FRSWNIT_BASE.BIT._SENB
#define FLXA0FRSWNIT_SBNB FLXA0FRSWNIT_BASE.BIT._SBNB
#define FLXA0FRACS FLXA0FRACS_BASE.UINT32
#define FLXA0FRACSL FLXA0FRACS_BASE.UINT16[L]
#define FLXA0FRACSH FLXA0FRACS_BASE.UINT16[H]
#define FLXA0FRACSLL FLXA0FRACS_BASE.UINT8[LL]
#define FLXA0FRACSLH FLXA0FRACS_BASE.UINT8[LH]
#define FLXA0FRACSHL FLXA0FRACS_BASE.UINT8[HL]
#define FLXA0FRACSHH FLXA0FRACS_BASE.UINT8[HH]
#define FLXA0FRACS_VFRA FLXA0FRACS_BASE.BIT._VFRA
#define FLXA0FRACS_SEDA FLXA0FRACS_BASE.BIT._SEDA
#define FLXA0FRACS_CEDA FLXA0FRACS_BASE.BIT._CEDA
#define FLXA0FRACS_CIA FLXA0FRACS_BASE.BIT._CIA
#define FLXA0FRACS_SBVA FLXA0FRACS_BASE.BIT._SBVA
#define FLXA0FRACS_VFRB FLXA0FRACS_BASE.BIT._VFRB
#define FLXA0FRACS_SEDB FLXA0FRACS_BASE.BIT._SEDB
#define FLXA0FRACS_CEDB FLXA0FRACS_BASE.BIT._CEDB
#define FLXA0FRACS_CIB FLXA0FRACS_BASE.BIT._CIB
#define FLXA0FRACS_SBVB FLXA0FRACS_BASE.BIT._SBVB
#define FLXA0FRESID1 FLXA0FRESID1_BASE.UINT32
#define FLXA0FRESID1L FLXA0FRESID1_BASE.UINT16[L]
#define FLXA0FRESID1H FLXA0FRESID1_BASE.UINT16[H]
#define FLXA0FRESID1LL FLXA0FRESID1_BASE.UINT8[LL]
#define FLXA0FRESID1LH FLXA0FRESID1_BASE.UINT8[LH]
#define FLXA0FRESID1HL FLXA0FRESID1_BASE.UINT8[HL]
#define FLXA0FRESID1HH FLXA0FRESID1_BASE.UINT8[HH]
#define FLXA0FRESID1_EID FLXA0FRESID1_BASE.BIT._EID
#define FLXA0FRESID1_RXEA FLXA0FRESID1_BASE.BIT._RXEA
#define FLXA0FRESID1_RXEB FLXA0FRESID1_BASE.BIT._RXEB
#define FLXA0FRESID2 FLXA0FRESID2_BASE.UINT32
#define FLXA0FRESID2L FLXA0FRESID2_BASE.UINT16[L]
#define FLXA0FRESID2H FLXA0FRESID2_BASE.UINT16[H]
#define FLXA0FRESID2LL FLXA0FRESID2_BASE.UINT8[LL]
#define FLXA0FRESID2LH FLXA0FRESID2_BASE.UINT8[LH]
#define FLXA0FRESID2HL FLXA0FRESID2_BASE.UINT8[HL]
#define FLXA0FRESID2HH FLXA0FRESID2_BASE.UINT8[HH]
#define FLXA0FRESID2_EID FLXA0FRESID2_BASE.BIT._EID
#define FLXA0FRESID2_RXEA FLXA0FRESID2_BASE.BIT._RXEA
#define FLXA0FRESID2_RXEB FLXA0FRESID2_BASE.BIT._RXEB
#define FLXA0FRESID3 FLXA0FRESID3_BASE.UINT32
#define FLXA0FRESID3L FLXA0FRESID3_BASE.UINT16[L]
#define FLXA0FRESID3H FLXA0FRESID3_BASE.UINT16[H]
#define FLXA0FRESID3LL FLXA0FRESID3_BASE.UINT8[LL]
#define FLXA0FRESID3LH FLXA0FRESID3_BASE.UINT8[LH]
#define FLXA0FRESID3HL FLXA0FRESID3_BASE.UINT8[HL]
#define FLXA0FRESID3HH FLXA0FRESID3_BASE.UINT8[HH]
#define FLXA0FRESID3_EID FLXA0FRESID3_BASE.BIT._EID
#define FLXA0FRESID3_RXEA FLXA0FRESID3_BASE.BIT._RXEA
#define FLXA0FRESID3_RXEB FLXA0FRESID3_BASE.BIT._RXEB
#define FLXA0FRESID4 FLXA0FRESID4_BASE.UINT32
#define FLXA0FRESID4L FLXA0FRESID4_BASE.UINT16[L]
#define FLXA0FRESID4H FLXA0FRESID4_BASE.UINT16[H]
#define FLXA0FRESID4LL FLXA0FRESID4_BASE.UINT8[LL]
#define FLXA0FRESID4LH FLXA0FRESID4_BASE.UINT8[LH]
#define FLXA0FRESID4HL FLXA0FRESID4_BASE.UINT8[HL]
#define FLXA0FRESID4HH FLXA0FRESID4_BASE.UINT8[HH]
#define FLXA0FRESID4_EID FLXA0FRESID4_BASE.BIT._EID
#define FLXA0FRESID4_RXEA FLXA0FRESID4_BASE.BIT._RXEA
#define FLXA0FRESID4_RXEB FLXA0FRESID4_BASE.BIT._RXEB
#define FLXA0FRESID5 FLXA0FRESID5_BASE.UINT32
#define FLXA0FRESID5L FLXA0FRESID5_BASE.UINT16[L]
#define FLXA0FRESID5H FLXA0FRESID5_BASE.UINT16[H]
#define FLXA0FRESID5LL FLXA0FRESID5_BASE.UINT8[LL]
#define FLXA0FRESID5LH FLXA0FRESID5_BASE.UINT8[LH]
#define FLXA0FRESID5HL FLXA0FRESID5_BASE.UINT8[HL]
#define FLXA0FRESID5HH FLXA0FRESID5_BASE.UINT8[HH]
#define FLXA0FRESID5_EID FLXA0FRESID5_BASE.BIT._EID
#define FLXA0FRESID5_RXEA FLXA0FRESID5_BASE.BIT._RXEA
#define FLXA0FRESID5_RXEB FLXA0FRESID5_BASE.BIT._RXEB
#define FLXA0FRESID6 FLXA0FRESID6_BASE.UINT32
#define FLXA0FRESID6L FLXA0FRESID6_BASE.UINT16[L]
#define FLXA0FRESID6H FLXA0FRESID6_BASE.UINT16[H]
#define FLXA0FRESID6LL FLXA0FRESID6_BASE.UINT8[LL]
#define FLXA0FRESID6LH FLXA0FRESID6_BASE.UINT8[LH]
#define FLXA0FRESID6HL FLXA0FRESID6_BASE.UINT8[HL]
#define FLXA0FRESID6HH FLXA0FRESID6_BASE.UINT8[HH]
#define FLXA0FRESID6_EID FLXA0FRESID6_BASE.BIT._EID
#define FLXA0FRESID6_RXEA FLXA0FRESID6_BASE.BIT._RXEA
#define FLXA0FRESID6_RXEB FLXA0FRESID6_BASE.BIT._RXEB
#define FLXA0FRESID7 FLXA0FRESID7_BASE.UINT32
#define FLXA0FRESID7L FLXA0FRESID7_BASE.UINT16[L]
#define FLXA0FRESID7H FLXA0FRESID7_BASE.UINT16[H]
#define FLXA0FRESID7LL FLXA0FRESID7_BASE.UINT8[LL]
#define FLXA0FRESID7LH FLXA0FRESID7_BASE.UINT8[LH]
#define FLXA0FRESID7HL FLXA0FRESID7_BASE.UINT8[HL]
#define FLXA0FRESID7HH FLXA0FRESID7_BASE.UINT8[HH]
#define FLXA0FRESID7_EID FLXA0FRESID7_BASE.BIT._EID
#define FLXA0FRESID7_RXEA FLXA0FRESID7_BASE.BIT._RXEA
#define FLXA0FRESID7_RXEB FLXA0FRESID7_BASE.BIT._RXEB
#define FLXA0FRESID8 FLXA0FRESID8_BASE.UINT32
#define FLXA0FRESID8L FLXA0FRESID8_BASE.UINT16[L]
#define FLXA0FRESID8H FLXA0FRESID8_BASE.UINT16[H]
#define FLXA0FRESID8LL FLXA0FRESID8_BASE.UINT8[LL]
#define FLXA0FRESID8LH FLXA0FRESID8_BASE.UINT8[LH]
#define FLXA0FRESID8HL FLXA0FRESID8_BASE.UINT8[HL]
#define FLXA0FRESID8HH FLXA0FRESID8_BASE.UINT8[HH]
#define FLXA0FRESID8_EID FLXA0FRESID8_BASE.BIT._EID
#define FLXA0FRESID8_RXEA FLXA0FRESID8_BASE.BIT._RXEA
#define FLXA0FRESID8_RXEB FLXA0FRESID8_BASE.BIT._RXEB
#define FLXA0FRESID9 FLXA0FRESID9_BASE.UINT32
#define FLXA0FRESID9L FLXA0FRESID9_BASE.UINT16[L]
#define FLXA0FRESID9H FLXA0FRESID9_BASE.UINT16[H]
#define FLXA0FRESID9LL FLXA0FRESID9_BASE.UINT8[LL]
#define FLXA0FRESID9LH FLXA0FRESID9_BASE.UINT8[LH]
#define FLXA0FRESID9HL FLXA0FRESID9_BASE.UINT8[HL]
#define FLXA0FRESID9HH FLXA0FRESID9_BASE.UINT8[HH]
#define FLXA0FRESID9_EID FLXA0FRESID9_BASE.BIT._EID
#define FLXA0FRESID9_RXEA FLXA0FRESID9_BASE.BIT._RXEA
#define FLXA0FRESID9_RXEB FLXA0FRESID9_BASE.BIT._RXEB
#define FLXA0FRESID10 FLXA0FRESID10_BASE.UINT32
#define FLXA0FRESID10L FLXA0FRESID10_BASE.UINT16[L]
#define FLXA0FRESID10H FLXA0FRESID10_BASE.UINT16[H]
#define FLXA0FRESID10LL FLXA0FRESID10_BASE.UINT8[LL]
#define FLXA0FRESID10LH FLXA0FRESID10_BASE.UINT8[LH]
#define FLXA0FRESID10HL FLXA0FRESID10_BASE.UINT8[HL]
#define FLXA0FRESID10HH FLXA0FRESID10_BASE.UINT8[HH]
#define FLXA0FRESID10_EID FLXA0FRESID10_BASE.BIT._EID
#define FLXA0FRESID10_RXEA FLXA0FRESID10_BASE.BIT._RXEA
#define FLXA0FRESID10_RXEB FLXA0FRESID10_BASE.BIT._RXEB
#define FLXA0FRESID11 FLXA0FRESID11_BASE.UINT32
#define FLXA0FRESID11L FLXA0FRESID11_BASE.UINT16[L]
#define FLXA0FRESID11H FLXA0FRESID11_BASE.UINT16[H]
#define FLXA0FRESID11LL FLXA0FRESID11_BASE.UINT8[LL]
#define FLXA0FRESID11LH FLXA0FRESID11_BASE.UINT8[LH]
#define FLXA0FRESID11HL FLXA0FRESID11_BASE.UINT8[HL]
#define FLXA0FRESID11HH FLXA0FRESID11_BASE.UINT8[HH]
#define FLXA0FRESID11_EID FLXA0FRESID11_BASE.BIT._EID
#define FLXA0FRESID11_RXEA FLXA0FRESID11_BASE.BIT._RXEA
#define FLXA0FRESID11_RXEB FLXA0FRESID11_BASE.BIT._RXEB
#define FLXA0FRESID12 FLXA0FRESID12_BASE.UINT32
#define FLXA0FRESID12L FLXA0FRESID12_BASE.UINT16[L]
#define FLXA0FRESID12H FLXA0FRESID12_BASE.UINT16[H]
#define FLXA0FRESID12LL FLXA0FRESID12_BASE.UINT8[LL]
#define FLXA0FRESID12LH FLXA0FRESID12_BASE.UINT8[LH]
#define FLXA0FRESID12HL FLXA0FRESID12_BASE.UINT8[HL]
#define FLXA0FRESID12HH FLXA0FRESID12_BASE.UINT8[HH]
#define FLXA0FRESID12_EID FLXA0FRESID12_BASE.BIT._EID
#define FLXA0FRESID12_RXEA FLXA0FRESID12_BASE.BIT._RXEA
#define FLXA0FRESID12_RXEB FLXA0FRESID12_BASE.BIT._RXEB
#define FLXA0FRESID13 FLXA0FRESID13_BASE.UINT32
#define FLXA0FRESID13L FLXA0FRESID13_BASE.UINT16[L]
#define FLXA0FRESID13H FLXA0FRESID13_BASE.UINT16[H]
#define FLXA0FRESID13LL FLXA0FRESID13_BASE.UINT8[LL]
#define FLXA0FRESID13LH FLXA0FRESID13_BASE.UINT8[LH]
#define FLXA0FRESID13HL FLXA0FRESID13_BASE.UINT8[HL]
#define FLXA0FRESID13HH FLXA0FRESID13_BASE.UINT8[HH]
#define FLXA0FRESID13_EID FLXA0FRESID13_BASE.BIT._EID
#define FLXA0FRESID13_RXEA FLXA0FRESID13_BASE.BIT._RXEA
#define FLXA0FRESID13_RXEB FLXA0FRESID13_BASE.BIT._RXEB
#define FLXA0FRESID14 FLXA0FRESID14_BASE.UINT32
#define FLXA0FRESID14L FLXA0FRESID14_BASE.UINT16[L]
#define FLXA0FRESID14H FLXA0FRESID14_BASE.UINT16[H]
#define FLXA0FRESID14LL FLXA0FRESID14_BASE.UINT8[LL]
#define FLXA0FRESID14LH FLXA0FRESID14_BASE.UINT8[LH]
#define FLXA0FRESID14HL FLXA0FRESID14_BASE.UINT8[HL]
#define FLXA0FRESID14HH FLXA0FRESID14_BASE.UINT8[HH]
#define FLXA0FRESID14_EID FLXA0FRESID14_BASE.BIT._EID
#define FLXA0FRESID14_RXEA FLXA0FRESID14_BASE.BIT._RXEA
#define FLXA0FRESID14_RXEB FLXA0FRESID14_BASE.BIT._RXEB
#define FLXA0FRESID15 FLXA0FRESID15_BASE.UINT32
#define FLXA0FRESID15L FLXA0FRESID15_BASE.UINT16[L]
#define FLXA0FRESID15H FLXA0FRESID15_BASE.UINT16[H]
#define FLXA0FRESID15LL FLXA0FRESID15_BASE.UINT8[LL]
#define FLXA0FRESID15LH FLXA0FRESID15_BASE.UINT8[LH]
#define FLXA0FRESID15HL FLXA0FRESID15_BASE.UINT8[HL]
#define FLXA0FRESID15HH FLXA0FRESID15_BASE.UINT8[HH]
#define FLXA0FRESID15_EID FLXA0FRESID15_BASE.BIT._EID
#define FLXA0FRESID15_RXEA FLXA0FRESID15_BASE.BIT._RXEA
#define FLXA0FRESID15_RXEB FLXA0FRESID15_BASE.BIT._RXEB
#define FLXA0FROSID1 FLXA0FROSID1_BASE.UINT32
#define FLXA0FROSID1L FLXA0FROSID1_BASE.UINT16[L]
#define FLXA0FROSID1H FLXA0FROSID1_BASE.UINT16[H]
#define FLXA0FROSID1LL FLXA0FROSID1_BASE.UINT8[LL]
#define FLXA0FROSID1LH FLXA0FROSID1_BASE.UINT8[LH]
#define FLXA0FROSID1HL FLXA0FROSID1_BASE.UINT8[HL]
#define FLXA0FROSID1HH FLXA0FROSID1_BASE.UINT8[HH]
#define FLXA0FROSID1_OID FLXA0FROSID1_BASE.BIT._OID
#define FLXA0FROSID1_RXOA FLXA0FROSID1_BASE.BIT._RXOA
#define FLXA0FROSID1_RXOB FLXA0FROSID1_BASE.BIT._RXOB
#define FLXA0FROSID2 FLXA0FROSID2_BASE.UINT32
#define FLXA0FROSID2L FLXA0FROSID2_BASE.UINT16[L]
#define FLXA0FROSID2H FLXA0FROSID2_BASE.UINT16[H]
#define FLXA0FROSID2LL FLXA0FROSID2_BASE.UINT8[LL]
#define FLXA0FROSID2LH FLXA0FROSID2_BASE.UINT8[LH]
#define FLXA0FROSID2HL FLXA0FROSID2_BASE.UINT8[HL]
#define FLXA0FROSID2HH FLXA0FROSID2_BASE.UINT8[HH]
#define FLXA0FROSID2_OID FLXA0FROSID2_BASE.BIT._OID
#define FLXA0FROSID2_RXOA FLXA0FROSID2_BASE.BIT._RXOA
#define FLXA0FROSID2_RXOB FLXA0FROSID2_BASE.BIT._RXOB
#define FLXA0FROSID3 FLXA0FROSID3_BASE.UINT32
#define FLXA0FROSID3L FLXA0FROSID3_BASE.UINT16[L]
#define FLXA0FROSID3H FLXA0FROSID3_BASE.UINT16[H]
#define FLXA0FROSID3LL FLXA0FROSID3_BASE.UINT8[LL]
#define FLXA0FROSID3LH FLXA0FROSID3_BASE.UINT8[LH]
#define FLXA0FROSID3HL FLXA0FROSID3_BASE.UINT8[HL]
#define FLXA0FROSID3HH FLXA0FROSID3_BASE.UINT8[HH]
#define FLXA0FROSID3_OID FLXA0FROSID3_BASE.BIT._OID
#define FLXA0FROSID3_RXOA FLXA0FROSID3_BASE.BIT._RXOA
#define FLXA0FROSID3_RXOB FLXA0FROSID3_BASE.BIT._RXOB
#define FLXA0FROSID4 FLXA0FROSID4_BASE.UINT32
#define FLXA0FROSID4L FLXA0FROSID4_BASE.UINT16[L]
#define FLXA0FROSID4H FLXA0FROSID4_BASE.UINT16[H]
#define FLXA0FROSID4LL FLXA0FROSID4_BASE.UINT8[LL]
#define FLXA0FROSID4LH FLXA0FROSID4_BASE.UINT8[LH]
#define FLXA0FROSID4HL FLXA0FROSID4_BASE.UINT8[HL]
#define FLXA0FROSID4HH FLXA0FROSID4_BASE.UINT8[HH]
#define FLXA0FROSID4_OID FLXA0FROSID4_BASE.BIT._OID
#define FLXA0FROSID4_RXOA FLXA0FROSID4_BASE.BIT._RXOA
#define FLXA0FROSID4_RXOB FLXA0FROSID4_BASE.BIT._RXOB
#define FLXA0FROSID5 FLXA0FROSID5_BASE.UINT32
#define FLXA0FROSID5L FLXA0FROSID5_BASE.UINT16[L]
#define FLXA0FROSID5H FLXA0FROSID5_BASE.UINT16[H]
#define FLXA0FROSID5LL FLXA0FROSID5_BASE.UINT8[LL]
#define FLXA0FROSID5LH FLXA0FROSID5_BASE.UINT8[LH]
#define FLXA0FROSID5HL FLXA0FROSID5_BASE.UINT8[HL]
#define FLXA0FROSID5HH FLXA0FROSID5_BASE.UINT8[HH]
#define FLXA0FROSID5_OID FLXA0FROSID5_BASE.BIT._OID
#define FLXA0FROSID5_RXOA FLXA0FROSID5_BASE.BIT._RXOA
#define FLXA0FROSID5_RXOB FLXA0FROSID5_BASE.BIT._RXOB
#define FLXA0FROSID6 FLXA0FROSID6_BASE.UINT32
#define FLXA0FROSID6L FLXA0FROSID6_BASE.UINT16[L]
#define FLXA0FROSID6H FLXA0FROSID6_BASE.UINT16[H]
#define FLXA0FROSID6LL FLXA0FROSID6_BASE.UINT8[LL]
#define FLXA0FROSID6LH FLXA0FROSID6_BASE.UINT8[LH]
#define FLXA0FROSID6HL FLXA0FROSID6_BASE.UINT8[HL]
#define FLXA0FROSID6HH FLXA0FROSID6_BASE.UINT8[HH]
#define FLXA0FROSID6_OID FLXA0FROSID6_BASE.BIT._OID
#define FLXA0FROSID6_RXOA FLXA0FROSID6_BASE.BIT._RXOA
#define FLXA0FROSID6_RXOB FLXA0FROSID6_BASE.BIT._RXOB
#define FLXA0FROSID7 FLXA0FROSID7_BASE.UINT32
#define FLXA0FROSID7L FLXA0FROSID7_BASE.UINT16[L]
#define FLXA0FROSID7H FLXA0FROSID7_BASE.UINT16[H]
#define FLXA0FROSID7LL FLXA0FROSID7_BASE.UINT8[LL]
#define FLXA0FROSID7LH FLXA0FROSID7_BASE.UINT8[LH]
#define FLXA0FROSID7HL FLXA0FROSID7_BASE.UINT8[HL]
#define FLXA0FROSID7HH FLXA0FROSID7_BASE.UINT8[HH]
#define FLXA0FROSID7_OID FLXA0FROSID7_BASE.BIT._OID
#define FLXA0FROSID7_RXOA FLXA0FROSID7_BASE.BIT._RXOA
#define FLXA0FROSID7_RXOB FLXA0FROSID7_BASE.BIT._RXOB
#define FLXA0FROSID8 FLXA0FROSID8_BASE.UINT32
#define FLXA0FROSID8L FLXA0FROSID8_BASE.UINT16[L]
#define FLXA0FROSID8H FLXA0FROSID8_BASE.UINT16[H]
#define FLXA0FROSID8LL FLXA0FROSID8_BASE.UINT8[LL]
#define FLXA0FROSID8LH FLXA0FROSID8_BASE.UINT8[LH]
#define FLXA0FROSID8HL FLXA0FROSID8_BASE.UINT8[HL]
#define FLXA0FROSID8HH FLXA0FROSID8_BASE.UINT8[HH]
#define FLXA0FROSID8_OID FLXA0FROSID8_BASE.BIT._OID
#define FLXA0FROSID8_RXOA FLXA0FROSID8_BASE.BIT._RXOA
#define FLXA0FROSID8_RXOB FLXA0FROSID8_BASE.BIT._RXOB
#define FLXA0FROSID9 FLXA0FROSID9_BASE.UINT32
#define FLXA0FROSID9L FLXA0FROSID9_BASE.UINT16[L]
#define FLXA0FROSID9H FLXA0FROSID9_BASE.UINT16[H]
#define FLXA0FROSID9LL FLXA0FROSID9_BASE.UINT8[LL]
#define FLXA0FROSID9LH FLXA0FROSID9_BASE.UINT8[LH]
#define FLXA0FROSID9HL FLXA0FROSID9_BASE.UINT8[HL]
#define FLXA0FROSID9HH FLXA0FROSID9_BASE.UINT8[HH]
#define FLXA0FROSID9_OID FLXA0FROSID9_BASE.BIT._OID
#define FLXA0FROSID9_RXOA FLXA0FROSID9_BASE.BIT._RXOA
#define FLXA0FROSID9_RXOB FLXA0FROSID9_BASE.BIT._RXOB
#define FLXA0FROSID10 FLXA0FROSID10_BASE.UINT32
#define FLXA0FROSID10L FLXA0FROSID10_BASE.UINT16[L]
#define FLXA0FROSID10H FLXA0FROSID10_BASE.UINT16[H]
#define FLXA0FROSID10LL FLXA0FROSID10_BASE.UINT8[LL]
#define FLXA0FROSID10LH FLXA0FROSID10_BASE.UINT8[LH]
#define FLXA0FROSID10HL FLXA0FROSID10_BASE.UINT8[HL]
#define FLXA0FROSID10HH FLXA0FROSID10_BASE.UINT8[HH]
#define FLXA0FROSID10_OID FLXA0FROSID10_BASE.BIT._OID
#define FLXA0FROSID10_RXOA FLXA0FROSID10_BASE.BIT._RXOA
#define FLXA0FROSID10_RXOB FLXA0FROSID10_BASE.BIT._RXOB
#define FLXA0FROSID11 FLXA0FROSID11_BASE.UINT32
#define FLXA0FROSID11L FLXA0FROSID11_BASE.UINT16[L]
#define FLXA0FROSID11H FLXA0FROSID11_BASE.UINT16[H]
#define FLXA0FROSID11LL FLXA0FROSID11_BASE.UINT8[LL]
#define FLXA0FROSID11LH FLXA0FROSID11_BASE.UINT8[LH]
#define FLXA0FROSID11HL FLXA0FROSID11_BASE.UINT8[HL]
#define FLXA0FROSID11HH FLXA0FROSID11_BASE.UINT8[HH]
#define FLXA0FROSID11_OID FLXA0FROSID11_BASE.BIT._OID
#define FLXA0FROSID11_RXOA FLXA0FROSID11_BASE.BIT._RXOA
#define FLXA0FROSID11_RXOB FLXA0FROSID11_BASE.BIT._RXOB
#define FLXA0FROSID12 FLXA0FROSID12_BASE.UINT32
#define FLXA0FROSID12L FLXA0FROSID12_BASE.UINT16[L]
#define FLXA0FROSID12H FLXA0FROSID12_BASE.UINT16[H]
#define FLXA0FROSID12LL FLXA0FROSID12_BASE.UINT8[LL]
#define FLXA0FROSID12LH FLXA0FROSID12_BASE.UINT8[LH]
#define FLXA0FROSID12HL FLXA0FROSID12_BASE.UINT8[HL]
#define FLXA0FROSID12HH FLXA0FROSID12_BASE.UINT8[HH]
#define FLXA0FROSID12_OID FLXA0FROSID12_BASE.BIT._OID
#define FLXA0FROSID12_RXOA FLXA0FROSID12_BASE.BIT._RXOA
#define FLXA0FROSID12_RXOB FLXA0FROSID12_BASE.BIT._RXOB
#define FLXA0FROSID13 FLXA0FROSID13_BASE.UINT32
#define FLXA0FROSID13L FLXA0FROSID13_BASE.UINT16[L]
#define FLXA0FROSID13H FLXA0FROSID13_BASE.UINT16[H]
#define FLXA0FROSID13LL FLXA0FROSID13_BASE.UINT8[LL]
#define FLXA0FROSID13LH FLXA0FROSID13_BASE.UINT8[LH]
#define FLXA0FROSID13HL FLXA0FROSID13_BASE.UINT8[HL]
#define FLXA0FROSID13HH FLXA0FROSID13_BASE.UINT8[HH]
#define FLXA0FROSID13_OID FLXA0FROSID13_BASE.BIT._OID
#define FLXA0FROSID13_RXOA FLXA0FROSID13_BASE.BIT._RXOA
#define FLXA0FROSID13_RXOB FLXA0FROSID13_BASE.BIT._RXOB
#define FLXA0FROSID14 FLXA0FROSID14_BASE.UINT32
#define FLXA0FROSID14L FLXA0FROSID14_BASE.UINT16[L]
#define FLXA0FROSID14H FLXA0FROSID14_BASE.UINT16[H]
#define FLXA0FROSID14LL FLXA0FROSID14_BASE.UINT8[LL]
#define FLXA0FROSID14LH FLXA0FROSID14_BASE.UINT8[LH]
#define FLXA0FROSID14HL FLXA0FROSID14_BASE.UINT8[HL]
#define FLXA0FROSID14HH FLXA0FROSID14_BASE.UINT8[HH]
#define FLXA0FROSID14_OID FLXA0FROSID14_BASE.BIT._OID
#define FLXA0FROSID14_RXOA FLXA0FROSID14_BASE.BIT._RXOA
#define FLXA0FROSID14_RXOB FLXA0FROSID14_BASE.BIT._RXOB
#define FLXA0FROSID15 FLXA0FROSID15_BASE.UINT32
#define FLXA0FROSID15L FLXA0FROSID15_BASE.UINT16[L]
#define FLXA0FROSID15H FLXA0FROSID15_BASE.UINT16[H]
#define FLXA0FROSID15LL FLXA0FROSID15_BASE.UINT8[LL]
#define FLXA0FROSID15LH FLXA0FROSID15_BASE.UINT8[LH]
#define FLXA0FROSID15HL FLXA0FROSID15_BASE.UINT8[HL]
#define FLXA0FROSID15HH FLXA0FROSID15_BASE.UINT8[HH]
#define FLXA0FROSID15_OID FLXA0FROSID15_BASE.BIT._OID
#define FLXA0FROSID15_RXOA FLXA0FROSID15_BASE.BIT._RXOA
#define FLXA0FROSID15_RXOB FLXA0FROSID15_BASE.BIT._RXOB
#define FLXA0FRNMV1 FLXA0FRNMV1_BASE.UINT32
#define FLXA0FRNMV1L FLXA0FRNMV1_BASE.UINT16[L]
#define FLXA0FRNMV1H FLXA0FRNMV1_BASE.UINT16[H]
#define FLXA0FRNMV1LL FLXA0FRNMV1_BASE.UINT8[LL]
#define FLXA0FRNMV1LH FLXA0FRNMV1_BASE.UINT8[LH]
#define FLXA0FRNMV1HL FLXA0FRNMV1_BASE.UINT8[HL]
#define FLXA0FRNMV1HH FLXA0FRNMV1_BASE.UINT8[HH]
#define FLXA0FRNMV1_NM FLXA0FRNMV1_BASE.BIT._NM
#define FLXA0FRNMV2 FLXA0FRNMV2_BASE.UINT32
#define FLXA0FRNMV2L FLXA0FRNMV2_BASE.UINT16[L]
#define FLXA0FRNMV2H FLXA0FRNMV2_BASE.UINT16[H]
#define FLXA0FRNMV2LL FLXA0FRNMV2_BASE.UINT8[LL]
#define FLXA0FRNMV2LH FLXA0FRNMV2_BASE.UINT8[LH]
#define FLXA0FRNMV2HL FLXA0FRNMV2_BASE.UINT8[HL]
#define FLXA0FRNMV2HH FLXA0FRNMV2_BASE.UINT8[HH]
#define FLXA0FRNMV2_NM FLXA0FRNMV2_BASE.BIT._NM
#define FLXA0FRNMV3 FLXA0FRNMV3_BASE.UINT32
#define FLXA0FRNMV3L FLXA0FRNMV3_BASE.UINT16[L]
#define FLXA0FRNMV3H FLXA0FRNMV3_BASE.UINT16[H]
#define FLXA0FRNMV3LL FLXA0FRNMV3_BASE.UINT8[LL]
#define FLXA0FRNMV3LH FLXA0FRNMV3_BASE.UINT8[LH]
#define FLXA0FRNMV3HL FLXA0FRNMV3_BASE.UINT8[HL]
#define FLXA0FRNMV3HH FLXA0FRNMV3_BASE.UINT8[HH]
#define FLXA0FRNMV3_NM FLXA0FRNMV3_BASE.BIT._NM
#define FLXA0FRMRC FLXA0FRMRC_BASE.UINT32
#define FLXA0FRMRCL FLXA0FRMRC_BASE.UINT16[L]
#define FLXA0FRMRCH FLXA0FRMRC_BASE.UINT16[H]
#define FLXA0FRMRCLL FLXA0FRMRC_BASE.UINT8[LL]
#define FLXA0FRMRCLH FLXA0FRMRC_BASE.UINT8[LH]
#define FLXA0FRMRCHL FLXA0FRMRC_BASE.UINT8[HL]
#define FLXA0FRMRCHH FLXA0FRMRC_BASE.UINT8[HH]
#define FLXA0FRMRC_FDB FLXA0FRMRC_BASE.BIT._FDB
#define FLXA0FRMRC_FFB FLXA0FRMRC_BASE.BIT._FFB
#define FLXA0FRMRC_LCB FLXA0FRMRC_BASE.BIT._LCB
#define FLXA0FRMRC_SEC FLXA0FRMRC_BASE.BIT._SEC
#define FLXA0FRMRC_SPLM FLXA0FRMRC_BASE.BIT._SPLM
#define FLXA0FRFRF FLXA0FRFRF_BASE.UINT32
#define FLXA0FRFRFL FLXA0FRFRF_BASE.UINT16[L]
#define FLXA0FRFRFH FLXA0FRFRF_BASE.UINT16[H]
#define FLXA0FRFRFLL FLXA0FRFRF_BASE.UINT8[LL]
#define FLXA0FRFRFLH FLXA0FRFRF_BASE.UINT8[LH]
#define FLXA0FRFRFHL FLXA0FRFRF_BASE.UINT8[HL]
#define FLXA0FRFRFHH FLXA0FRFRF_BASE.UINT8[HH]
#define FLXA0FRFRF_CH FLXA0FRFRF_BASE.BIT._CH
#define FLXA0FRFRF_FID FLXA0FRFRF_BASE.BIT._FID
#define FLXA0FRFRF_CYF FLXA0FRFRF_BASE.BIT._CYF
#define FLXA0FRFRF_RSS FLXA0FRFRF_BASE.BIT._RSS
#define FLXA0FRFRF_RNF FLXA0FRFRF_BASE.BIT._RNF
#define FLXA0FRFRFM FLXA0FRFRFM_BASE.UINT32
#define FLXA0FRFRFML FLXA0FRFRFM_BASE.UINT16[L]
#define FLXA0FRFRFMH FLXA0FRFRFM_BASE.UINT16[H]
#define FLXA0FRFRFMLL FLXA0FRFRFM_BASE.UINT8[LL]
#define FLXA0FRFRFMLH FLXA0FRFRFM_BASE.UINT8[LH]
#define FLXA0FRFRFMHL FLXA0FRFRFM_BASE.UINT8[HL]
#define FLXA0FRFRFMHH FLXA0FRFRFM_BASE.UINT8[HH]
#define FLXA0FRFRFM_MFID FLXA0FRFRFM_BASE.BIT._MFID
#define FLXA0FRFCL FLXA0FRFCL_BASE.UINT32
#define FLXA0FRFCLL FLXA0FRFCL_BASE.UINT16[L]
#define FLXA0FRFCLH FLXA0FRFCL_BASE.UINT16[H]
#define FLXA0FRFCLLL FLXA0FRFCL_BASE.UINT8[LL]
#define FLXA0FRFCLLH FLXA0FRFCL_BASE.UINT8[LH]
#define FLXA0FRFCLHL FLXA0FRFCL_BASE.UINT8[HL]
#define FLXA0FRFCLHH FLXA0FRFCL_BASE.UINT8[HH]
#define FLXA0FRFCL_CL FLXA0FRFCL_BASE.BIT._CL
#define FLXA0FRMHDS FLXA0FRMHDS_BASE.UINT32
#define FLXA0FRMHDSL FLXA0FRMHDS_BASE.UINT16[L]
#define FLXA0FRMHDSH FLXA0FRMHDS_BASE.UINT16[H]
#define FLXA0FRMHDSLL FLXA0FRMHDS_BASE.UINT8[LL]
#define FLXA0FRMHDSLH FLXA0FRMHDS_BASE.UINT8[LH]
#define FLXA0FRMHDSHL FLXA0FRMHDS_BASE.UINT8[HL]
#define FLXA0FRMHDSHH FLXA0FRMHDS_BASE.UINT8[HH]
#define FLXA0FRMHDS_AMR FLXA0FRMHDS_BASE.BIT._AMR
#define FLXA0FRMHDS_ATBF1 FLXA0FRMHDS_BASE.BIT._ATBF1
#define FLXA0FRMHDS_ATBF2 FLXA0FRMHDS_BASE.BIT._ATBF2
#define FLXA0FRMHDS_FMBD FLXA0FRMHDS_BASE.BIT._FMBD
#define FLXA0FRMHDS_MFMB FLXA0FRMHDS_BASE.BIT._MFMB
#define FLXA0FRMHDS_CRAM FLXA0FRMHDS_BASE.BIT._CRAM
#define FLXA0FRMHDS_FMB FLXA0FRMHDS_BASE.BIT._FMB
#define FLXA0FRMHDS_MBT FLXA0FRMHDS_BASE.BIT._MBT
#define FLXA0FRMHDS_MBU FLXA0FRMHDS_BASE.BIT._MBU
#define FLXA0FRLDTS FLXA0FRLDTS_BASE.UINT32
#define FLXA0FRLDTSL FLXA0FRLDTS_BASE.UINT16[L]
#define FLXA0FRLDTSH FLXA0FRLDTS_BASE.UINT16[H]
#define FLXA0FRLDTSLL FLXA0FRLDTS_BASE.UINT8[LL]
#define FLXA0FRLDTSLH FLXA0FRLDTS_BASE.UINT8[LH]
#define FLXA0FRLDTSHL FLXA0FRLDTS_BASE.UINT8[HL]
#define FLXA0FRLDTSHH FLXA0FRLDTS_BASE.UINT8[HH]
#define FLXA0FRLDTS_LDTA FLXA0FRLDTS_BASE.BIT._LDTA
#define FLXA0FRLDTS_LDTB FLXA0FRLDTS_BASE.BIT._LDTB
#define FLXA0FRFSR FLXA0FRFSR_BASE.UINT32
#define FLXA0FRFSRL FLXA0FRFSR_BASE.UINT16[L]
#define FLXA0FRFSRH FLXA0FRFSR_BASE.UINT16[H]
#define FLXA0FRFSRLL FLXA0FRFSR_BASE.UINT8[LL]
#define FLXA0FRFSRLH FLXA0FRFSR_BASE.UINT8[LH]
#define FLXA0FRFSRHL FLXA0FRFSR_BASE.UINT8[HL]
#define FLXA0FRFSRHH FLXA0FRFSR_BASE.UINT8[HH]
#define FLXA0FRFSR_RFNE FLXA0FRFSR_BASE.BIT._RFNE
#define FLXA0FRFSR_RFCL FLXA0FRFSR_BASE.BIT._RFCL
#define FLXA0FRFSR_RFO FLXA0FRFSR_BASE.BIT._RFO
#define FLXA0FRFSR_RFFL FLXA0FRFSR_BASE.BIT._RFFL
#define FLXA0FRMHDF FLXA0FRMHDF_BASE.UINT32
#define FLXA0FRMHDFL FLXA0FRMHDF_BASE.UINT16[L]
#define FLXA0FRMHDFH FLXA0FRMHDF_BASE.UINT16[H]
#define FLXA0FRMHDFLL FLXA0FRMHDF_BASE.UINT8[LL]
#define FLXA0FRMHDFLH FLXA0FRMHDF_BASE.UINT8[LH]
#define FLXA0FRMHDFHL FLXA0FRMHDF_BASE.UINT8[HL]
#define FLXA0FRMHDFHH FLXA0FRMHDF_BASE.UINT8[HH]
#define FLXA0FRMHDF_SNUA FLXA0FRMHDF_BASE.BIT._SNUA
#define FLXA0FRMHDF_SNUB FLXA0FRMHDF_BASE.BIT._SNUB
#define FLXA0FRMHDF_FNFA FLXA0FRMHDF_BASE.BIT._FNFA
#define FLXA0FRMHDF_FNFB FLXA0FRMHDF_BASE.BIT._FNFB
#define FLXA0FRMHDF_TBFA FLXA0FRMHDF_BASE.BIT._TBFA
#define FLXA0FRMHDF_TBFB FLXA0FRMHDF_BASE.BIT._TBFB
#define FLXA0FRMHDF_TNSA FLXA0FRMHDF_BASE.BIT._TNSA
#define FLXA0FRMHDF_TNSB FLXA0FRMHDF_BASE.BIT._TNSB
#define FLXA0FRMHDF_WAHP FLXA0FRMHDF_BASE.BIT._WAHP
#define FLXA0FRTXRQ1 FLXA0FRTXRQ1_BASE.UINT32
#define FLXA0FRTXRQ1L FLXA0FRTXRQ1_BASE.UINT16[L]
#define FLXA0FRTXRQ1H FLXA0FRTXRQ1_BASE.UINT16[H]
#define FLXA0FRTXRQ1LL FLXA0FRTXRQ1_BASE.UINT8[LL]
#define FLXA0FRTXRQ1LH FLXA0FRTXRQ1_BASE.UINT8[LH]
#define FLXA0FRTXRQ1HL FLXA0FRTXRQ1_BASE.UINT8[HL]
#define FLXA0FRTXRQ1HH FLXA0FRTXRQ1_BASE.UINT8[HH]
#define FLXA0FRTXRQ1_TXR0 FLXA0FRTXRQ1_BASE.BIT._TXR0
#define FLXA0FRTXRQ1_TXR1 FLXA0FRTXRQ1_BASE.BIT._TXR1
#define FLXA0FRTXRQ1_TXR2 FLXA0FRTXRQ1_BASE.BIT._TXR2
#define FLXA0FRTXRQ1_TXR3 FLXA0FRTXRQ1_BASE.BIT._TXR3
#define FLXA0FRTXRQ1_TXR4 FLXA0FRTXRQ1_BASE.BIT._TXR4
#define FLXA0FRTXRQ1_TXR5 FLXA0FRTXRQ1_BASE.BIT._TXR5
#define FLXA0FRTXRQ1_TXR6 FLXA0FRTXRQ1_BASE.BIT._TXR6
#define FLXA0FRTXRQ1_TXR7 FLXA0FRTXRQ1_BASE.BIT._TXR7
#define FLXA0FRTXRQ1_TXR8 FLXA0FRTXRQ1_BASE.BIT._TXR8
#define FLXA0FRTXRQ1_TXR9 FLXA0FRTXRQ1_BASE.BIT._TXR9
#define FLXA0FRTXRQ1_TXR10 FLXA0FRTXRQ1_BASE.BIT._TXR10
#define FLXA0FRTXRQ1_TXR11 FLXA0FRTXRQ1_BASE.BIT._TXR11
#define FLXA0FRTXRQ1_TXR12 FLXA0FRTXRQ1_BASE.BIT._TXR12
#define FLXA0FRTXRQ1_TXR13 FLXA0FRTXRQ1_BASE.BIT._TXR13
#define FLXA0FRTXRQ1_TXR14 FLXA0FRTXRQ1_BASE.BIT._TXR14
#define FLXA0FRTXRQ1_TXR15 FLXA0FRTXRQ1_BASE.BIT._TXR15
#define FLXA0FRTXRQ1_TXR16 FLXA0FRTXRQ1_BASE.BIT._TXR16
#define FLXA0FRTXRQ1_TXR17 FLXA0FRTXRQ1_BASE.BIT._TXR17
#define FLXA0FRTXRQ1_TXR18 FLXA0FRTXRQ1_BASE.BIT._TXR18
#define FLXA0FRTXRQ1_TXR19 FLXA0FRTXRQ1_BASE.BIT._TXR19
#define FLXA0FRTXRQ1_TXR20 FLXA0FRTXRQ1_BASE.BIT._TXR20
#define FLXA0FRTXRQ1_TXR21 FLXA0FRTXRQ1_BASE.BIT._TXR21
#define FLXA0FRTXRQ1_TXR22 FLXA0FRTXRQ1_BASE.BIT._TXR22
#define FLXA0FRTXRQ1_TXR23 FLXA0FRTXRQ1_BASE.BIT._TXR23
#define FLXA0FRTXRQ1_TXR24 FLXA0FRTXRQ1_BASE.BIT._TXR24
#define FLXA0FRTXRQ1_TXR25 FLXA0FRTXRQ1_BASE.BIT._TXR25
#define FLXA0FRTXRQ1_TXR26 FLXA0FRTXRQ1_BASE.BIT._TXR26
#define FLXA0FRTXRQ1_TXR27 FLXA0FRTXRQ1_BASE.BIT._TXR27
#define FLXA0FRTXRQ1_TXR28 FLXA0FRTXRQ1_BASE.BIT._TXR28
#define FLXA0FRTXRQ1_TXR29 FLXA0FRTXRQ1_BASE.BIT._TXR29
#define FLXA0FRTXRQ1_TXR30 FLXA0FRTXRQ1_BASE.BIT._TXR30
#define FLXA0FRTXRQ1_TXR31 FLXA0FRTXRQ1_BASE.BIT._TXR31
#define FLXA0FRTXRQ2 FLXA0FRTXRQ2_BASE.UINT32
#define FLXA0FRTXRQ2L FLXA0FRTXRQ2_BASE.UINT16[L]
#define FLXA0FRTXRQ2H FLXA0FRTXRQ2_BASE.UINT16[H]
#define FLXA0FRTXRQ2LL FLXA0FRTXRQ2_BASE.UINT8[LL]
#define FLXA0FRTXRQ2LH FLXA0FRTXRQ2_BASE.UINT8[LH]
#define FLXA0FRTXRQ2HL FLXA0FRTXRQ2_BASE.UINT8[HL]
#define FLXA0FRTXRQ2HH FLXA0FRTXRQ2_BASE.UINT8[HH]
#define FLXA0FRTXRQ2_TXR32 FLXA0FRTXRQ2_BASE.BIT._TXR32
#define FLXA0FRTXRQ2_TXR33 FLXA0FRTXRQ2_BASE.BIT._TXR33
#define FLXA0FRTXRQ2_TXR34 FLXA0FRTXRQ2_BASE.BIT._TXR34
#define FLXA0FRTXRQ2_TXR35 FLXA0FRTXRQ2_BASE.BIT._TXR35
#define FLXA0FRTXRQ2_TXR36 FLXA0FRTXRQ2_BASE.BIT._TXR36
#define FLXA0FRTXRQ2_TXR37 FLXA0FRTXRQ2_BASE.BIT._TXR37
#define FLXA0FRTXRQ2_TXR38 FLXA0FRTXRQ2_BASE.BIT._TXR38
#define FLXA0FRTXRQ2_TXR39 FLXA0FRTXRQ2_BASE.BIT._TXR39
#define FLXA0FRTXRQ2_TXR40 FLXA0FRTXRQ2_BASE.BIT._TXR40
#define FLXA0FRTXRQ2_TXR41 FLXA0FRTXRQ2_BASE.BIT._TXR41
#define FLXA0FRTXRQ2_TXR42 FLXA0FRTXRQ2_BASE.BIT._TXR42
#define FLXA0FRTXRQ2_TXR43 FLXA0FRTXRQ2_BASE.BIT._TXR43
#define FLXA0FRTXRQ2_TXR44 FLXA0FRTXRQ2_BASE.BIT._TXR44
#define FLXA0FRTXRQ2_TXR45 FLXA0FRTXRQ2_BASE.BIT._TXR45
#define FLXA0FRTXRQ2_TXR46 FLXA0FRTXRQ2_BASE.BIT._TXR46
#define FLXA0FRTXRQ2_TXR47 FLXA0FRTXRQ2_BASE.BIT._TXR47
#define FLXA0FRTXRQ2_TXR48 FLXA0FRTXRQ2_BASE.BIT._TXR48
#define FLXA0FRTXRQ2_TXR49 FLXA0FRTXRQ2_BASE.BIT._TXR49
#define FLXA0FRTXRQ2_TXR50 FLXA0FRTXRQ2_BASE.BIT._TXR50
#define FLXA0FRTXRQ2_TXR51 FLXA0FRTXRQ2_BASE.BIT._TXR51
#define FLXA0FRTXRQ2_TXR52 FLXA0FRTXRQ2_BASE.BIT._TXR52
#define FLXA0FRTXRQ2_TXR53 FLXA0FRTXRQ2_BASE.BIT._TXR53
#define FLXA0FRTXRQ2_TXR54 FLXA0FRTXRQ2_BASE.BIT._TXR54
#define FLXA0FRTXRQ2_TXR55 FLXA0FRTXRQ2_BASE.BIT._TXR55
#define FLXA0FRTXRQ2_TXR56 FLXA0FRTXRQ2_BASE.BIT._TXR56
#define FLXA0FRTXRQ2_TXR57 FLXA0FRTXRQ2_BASE.BIT._TXR57
#define FLXA0FRTXRQ2_TXR58 FLXA0FRTXRQ2_BASE.BIT._TXR58
#define FLXA0FRTXRQ2_TXR59 FLXA0FRTXRQ2_BASE.BIT._TXR59
#define FLXA0FRTXRQ2_TXR60 FLXA0FRTXRQ2_BASE.BIT._TXR60
#define FLXA0FRTXRQ2_TXR61 FLXA0FRTXRQ2_BASE.BIT._TXR61
#define FLXA0FRTXRQ2_TXR62 FLXA0FRTXRQ2_BASE.BIT._TXR62
#define FLXA0FRTXRQ2_TXR63 FLXA0FRTXRQ2_BASE.BIT._TXR63
#define FLXA0FRTXRQ3 FLXA0FRTXRQ3_BASE.UINT32
#define FLXA0FRTXRQ3L FLXA0FRTXRQ3_BASE.UINT16[L]
#define FLXA0FRTXRQ3H FLXA0FRTXRQ3_BASE.UINT16[H]
#define FLXA0FRTXRQ3LL FLXA0FRTXRQ3_BASE.UINT8[LL]
#define FLXA0FRTXRQ3LH FLXA0FRTXRQ3_BASE.UINT8[LH]
#define FLXA0FRTXRQ3HL FLXA0FRTXRQ3_BASE.UINT8[HL]
#define FLXA0FRTXRQ3HH FLXA0FRTXRQ3_BASE.UINT8[HH]
#define FLXA0FRTXRQ3_TXR64 FLXA0FRTXRQ3_BASE.BIT._TXR64
#define FLXA0FRTXRQ3_TXR65 FLXA0FRTXRQ3_BASE.BIT._TXR65
#define FLXA0FRTXRQ3_TXR66 FLXA0FRTXRQ3_BASE.BIT._TXR66
#define FLXA0FRTXRQ3_TXR67 FLXA0FRTXRQ3_BASE.BIT._TXR67
#define FLXA0FRTXRQ3_TXR68 FLXA0FRTXRQ3_BASE.BIT._TXR68
#define FLXA0FRTXRQ3_TXR69 FLXA0FRTXRQ3_BASE.BIT._TXR69
#define FLXA0FRTXRQ3_TXR70 FLXA0FRTXRQ3_BASE.BIT._TXR70
#define FLXA0FRTXRQ3_TXR71 FLXA0FRTXRQ3_BASE.BIT._TXR71
#define FLXA0FRTXRQ3_TXR72 FLXA0FRTXRQ3_BASE.BIT._TXR72
#define FLXA0FRTXRQ3_TXR73 FLXA0FRTXRQ3_BASE.BIT._TXR73
#define FLXA0FRTXRQ3_TXR74 FLXA0FRTXRQ3_BASE.BIT._TXR74
#define FLXA0FRTXRQ3_TXR75 FLXA0FRTXRQ3_BASE.BIT._TXR75
#define FLXA0FRTXRQ3_TXR76 FLXA0FRTXRQ3_BASE.BIT._TXR76
#define FLXA0FRTXRQ3_TXR77 FLXA0FRTXRQ3_BASE.BIT._TXR77
#define FLXA0FRTXRQ3_TXR78 FLXA0FRTXRQ3_BASE.BIT._TXR78
#define FLXA0FRTXRQ3_TXR79 FLXA0FRTXRQ3_BASE.BIT._TXR79
#define FLXA0FRTXRQ3_TXR80 FLXA0FRTXRQ3_BASE.BIT._TXR80
#define FLXA0FRTXRQ3_TXR81 FLXA0FRTXRQ3_BASE.BIT._TXR81
#define FLXA0FRTXRQ3_TXR82 FLXA0FRTXRQ3_BASE.BIT._TXR82
#define FLXA0FRTXRQ3_TXR83 FLXA0FRTXRQ3_BASE.BIT._TXR83
#define FLXA0FRTXRQ3_TXR84 FLXA0FRTXRQ3_BASE.BIT._TXR84
#define FLXA0FRTXRQ3_TXR85 FLXA0FRTXRQ3_BASE.BIT._TXR85
#define FLXA0FRTXRQ3_TXR86 FLXA0FRTXRQ3_BASE.BIT._TXR86
#define FLXA0FRTXRQ3_TXR87 FLXA0FRTXRQ3_BASE.BIT._TXR87
#define FLXA0FRTXRQ3_TXR88 FLXA0FRTXRQ3_BASE.BIT._TXR88
#define FLXA0FRTXRQ3_TXR89 FLXA0FRTXRQ3_BASE.BIT._TXR89
#define FLXA0FRTXRQ3_TXR90 FLXA0FRTXRQ3_BASE.BIT._TXR90
#define FLXA0FRTXRQ3_TXR91 FLXA0FRTXRQ3_BASE.BIT._TXR91
#define FLXA0FRTXRQ3_TXR92 FLXA0FRTXRQ3_BASE.BIT._TXR92
#define FLXA0FRTXRQ3_TXR93 FLXA0FRTXRQ3_BASE.BIT._TXR93
#define FLXA0FRTXRQ3_TXR94 FLXA0FRTXRQ3_BASE.BIT._TXR94
#define FLXA0FRTXRQ3_TXR95 FLXA0FRTXRQ3_BASE.BIT._TXR95
#define FLXA0FRTXRQ4 FLXA0FRTXRQ4_BASE.UINT32
#define FLXA0FRTXRQ4L FLXA0FRTXRQ4_BASE.UINT16[L]
#define FLXA0FRTXRQ4H FLXA0FRTXRQ4_BASE.UINT16[H]
#define FLXA0FRTXRQ4LL FLXA0FRTXRQ4_BASE.UINT8[LL]
#define FLXA0FRTXRQ4LH FLXA0FRTXRQ4_BASE.UINT8[LH]
#define FLXA0FRTXRQ4HL FLXA0FRTXRQ4_BASE.UINT8[HL]
#define FLXA0FRTXRQ4HH FLXA0FRTXRQ4_BASE.UINT8[HH]
#define FLXA0FRTXRQ4_TXR96 FLXA0FRTXRQ4_BASE.BIT._TXR96
#define FLXA0FRTXRQ4_TXR97 FLXA0FRTXRQ4_BASE.BIT._TXR97
#define FLXA0FRTXRQ4_TXR98 FLXA0FRTXRQ4_BASE.BIT._TXR98
#define FLXA0FRTXRQ4_TXR99 FLXA0FRTXRQ4_BASE.BIT._TXR99
#define FLXA0FRTXRQ4_TXR100 FLXA0FRTXRQ4_BASE.BIT._TXR100
#define FLXA0FRTXRQ4_TXR101 FLXA0FRTXRQ4_BASE.BIT._TXR101
#define FLXA0FRTXRQ4_TXR102 FLXA0FRTXRQ4_BASE.BIT._TXR102
#define FLXA0FRTXRQ4_TXR103 FLXA0FRTXRQ4_BASE.BIT._TXR103
#define FLXA0FRTXRQ4_TXR104 FLXA0FRTXRQ4_BASE.BIT._TXR104
#define FLXA0FRTXRQ4_TXR105 FLXA0FRTXRQ4_BASE.BIT._TXR105
#define FLXA0FRTXRQ4_TXR106 FLXA0FRTXRQ4_BASE.BIT._TXR106
#define FLXA0FRTXRQ4_TXR107 FLXA0FRTXRQ4_BASE.BIT._TXR107
#define FLXA0FRTXRQ4_TXR108 FLXA0FRTXRQ4_BASE.BIT._TXR108
#define FLXA0FRTXRQ4_TXR109 FLXA0FRTXRQ4_BASE.BIT._TXR109
#define FLXA0FRTXRQ4_TXR110 FLXA0FRTXRQ4_BASE.BIT._TXR110
#define FLXA0FRTXRQ4_TXR111 FLXA0FRTXRQ4_BASE.BIT._TXR111
#define FLXA0FRTXRQ4_TXR112 FLXA0FRTXRQ4_BASE.BIT._TXR112
#define FLXA0FRTXRQ4_TXR113 FLXA0FRTXRQ4_BASE.BIT._TXR113
#define FLXA0FRTXRQ4_TXR114 FLXA0FRTXRQ4_BASE.BIT._TXR114
#define FLXA0FRTXRQ4_TXR115 FLXA0FRTXRQ4_BASE.BIT._TXR115
#define FLXA0FRTXRQ4_TXR116 FLXA0FRTXRQ4_BASE.BIT._TXR116
#define FLXA0FRTXRQ4_TXR117 FLXA0FRTXRQ4_BASE.BIT._TXR117
#define FLXA0FRTXRQ4_TXR118 FLXA0FRTXRQ4_BASE.BIT._TXR118
#define FLXA0FRTXRQ4_TXR119 FLXA0FRTXRQ4_BASE.BIT._TXR119
#define FLXA0FRTXRQ4_TXR120 FLXA0FRTXRQ4_BASE.BIT._TXR120
#define FLXA0FRTXRQ4_TXR121 FLXA0FRTXRQ4_BASE.BIT._TXR121
#define FLXA0FRTXRQ4_TXR122 FLXA0FRTXRQ4_BASE.BIT._TXR122
#define FLXA0FRTXRQ4_TXR123 FLXA0FRTXRQ4_BASE.BIT._TXR123
#define FLXA0FRTXRQ4_TXR124 FLXA0FRTXRQ4_BASE.BIT._TXR124
#define FLXA0FRTXRQ4_TXR125 FLXA0FRTXRQ4_BASE.BIT._TXR125
#define FLXA0FRTXRQ4_TXR126 FLXA0FRTXRQ4_BASE.BIT._TXR126
#define FLXA0FRTXRQ4_TXR127 FLXA0FRTXRQ4_BASE.BIT._TXR127
#define FLXA0FRNDAT1 FLXA0FRNDAT1_BASE.UINT32
#define FLXA0FRNDAT1L FLXA0FRNDAT1_BASE.UINT16[L]
#define FLXA0FRNDAT1H FLXA0FRNDAT1_BASE.UINT16[H]
#define FLXA0FRNDAT1LL FLXA0FRNDAT1_BASE.UINT8[LL]
#define FLXA0FRNDAT1LH FLXA0FRNDAT1_BASE.UINT8[LH]
#define FLXA0FRNDAT1HL FLXA0FRNDAT1_BASE.UINT8[HL]
#define FLXA0FRNDAT1HH FLXA0FRNDAT1_BASE.UINT8[HH]
#define FLXA0FRNDAT1_ND0 FLXA0FRNDAT1_BASE.BIT._ND0
#define FLXA0FRNDAT1_ND1 FLXA0FRNDAT1_BASE.BIT._ND1
#define FLXA0FRNDAT1_ND2 FLXA0FRNDAT1_BASE.BIT._ND2
#define FLXA0FRNDAT1_ND3 FLXA0FRNDAT1_BASE.BIT._ND3
#define FLXA0FRNDAT1_ND4 FLXA0FRNDAT1_BASE.BIT._ND4
#define FLXA0FRNDAT1_ND5 FLXA0FRNDAT1_BASE.BIT._ND5
#define FLXA0FRNDAT1_ND6 FLXA0FRNDAT1_BASE.BIT._ND6
#define FLXA0FRNDAT1_ND7 FLXA0FRNDAT1_BASE.BIT._ND7
#define FLXA0FRNDAT1_ND8 FLXA0FRNDAT1_BASE.BIT._ND8
#define FLXA0FRNDAT1_ND9 FLXA0FRNDAT1_BASE.BIT._ND9
#define FLXA0FRNDAT1_ND10 FLXA0FRNDAT1_BASE.BIT._ND10
#define FLXA0FRNDAT1_ND11 FLXA0FRNDAT1_BASE.BIT._ND11
#define FLXA0FRNDAT1_ND12 FLXA0FRNDAT1_BASE.BIT._ND12
#define FLXA0FRNDAT1_ND13 FLXA0FRNDAT1_BASE.BIT._ND13
#define FLXA0FRNDAT1_ND14 FLXA0FRNDAT1_BASE.BIT._ND14
#define FLXA0FRNDAT1_ND15 FLXA0FRNDAT1_BASE.BIT._ND15
#define FLXA0FRNDAT1_ND16 FLXA0FRNDAT1_BASE.BIT._ND16
#define FLXA0FRNDAT1_ND17 FLXA0FRNDAT1_BASE.BIT._ND17
#define FLXA0FRNDAT1_ND18 FLXA0FRNDAT1_BASE.BIT._ND18
#define FLXA0FRNDAT1_ND19 FLXA0FRNDAT1_BASE.BIT._ND19
#define FLXA0FRNDAT1_ND20 FLXA0FRNDAT1_BASE.BIT._ND20
#define FLXA0FRNDAT1_ND21 FLXA0FRNDAT1_BASE.BIT._ND21
#define FLXA0FRNDAT1_ND22 FLXA0FRNDAT1_BASE.BIT._ND22
#define FLXA0FRNDAT1_ND23 FLXA0FRNDAT1_BASE.BIT._ND23
#define FLXA0FRNDAT1_ND24 FLXA0FRNDAT1_BASE.BIT._ND24
#define FLXA0FRNDAT1_ND25 FLXA0FRNDAT1_BASE.BIT._ND25
#define FLXA0FRNDAT1_ND26 FLXA0FRNDAT1_BASE.BIT._ND26
#define FLXA0FRNDAT1_ND27 FLXA0FRNDAT1_BASE.BIT._ND27
#define FLXA0FRNDAT1_ND28 FLXA0FRNDAT1_BASE.BIT._ND28
#define FLXA0FRNDAT1_ND29 FLXA0FRNDAT1_BASE.BIT._ND29
#define FLXA0FRNDAT1_ND30 FLXA0FRNDAT1_BASE.BIT._ND30
#define FLXA0FRNDAT1_ND31 FLXA0FRNDAT1_BASE.BIT._ND31
#define FLXA0FRNDAT2 FLXA0FRNDAT2_BASE.UINT32
#define FLXA0FRNDAT2L FLXA0FRNDAT2_BASE.UINT16[L]
#define FLXA0FRNDAT2H FLXA0FRNDAT2_BASE.UINT16[H]
#define FLXA0FRNDAT2LL FLXA0FRNDAT2_BASE.UINT8[LL]
#define FLXA0FRNDAT2LH FLXA0FRNDAT2_BASE.UINT8[LH]
#define FLXA0FRNDAT2HL FLXA0FRNDAT2_BASE.UINT8[HL]
#define FLXA0FRNDAT2HH FLXA0FRNDAT2_BASE.UINT8[HH]
#define FLXA0FRNDAT2_ND32 FLXA0FRNDAT2_BASE.BIT._ND32
#define FLXA0FRNDAT2_ND33 FLXA0FRNDAT2_BASE.BIT._ND33
#define FLXA0FRNDAT2_ND34 FLXA0FRNDAT2_BASE.BIT._ND34
#define FLXA0FRNDAT2_ND35 FLXA0FRNDAT2_BASE.BIT._ND35
#define FLXA0FRNDAT2_ND36 FLXA0FRNDAT2_BASE.BIT._ND36
#define FLXA0FRNDAT2_ND37 FLXA0FRNDAT2_BASE.BIT._ND37
#define FLXA0FRNDAT2_ND38 FLXA0FRNDAT2_BASE.BIT._ND38
#define FLXA0FRNDAT2_ND39 FLXA0FRNDAT2_BASE.BIT._ND39
#define FLXA0FRNDAT2_ND40 FLXA0FRNDAT2_BASE.BIT._ND40
#define FLXA0FRNDAT2_ND41 FLXA0FRNDAT2_BASE.BIT._ND41
#define FLXA0FRNDAT2_ND42 FLXA0FRNDAT2_BASE.BIT._ND42
#define FLXA0FRNDAT2_ND43 FLXA0FRNDAT2_BASE.BIT._ND43
#define FLXA0FRNDAT2_ND44 FLXA0FRNDAT2_BASE.BIT._ND44
#define FLXA0FRNDAT2_ND45 FLXA0FRNDAT2_BASE.BIT._ND45
#define FLXA0FRNDAT2_ND46 FLXA0FRNDAT2_BASE.BIT._ND46
#define FLXA0FRNDAT2_ND47 FLXA0FRNDAT2_BASE.BIT._ND47
#define FLXA0FRNDAT2_ND48 FLXA0FRNDAT2_BASE.BIT._ND48
#define FLXA0FRNDAT2_ND49 FLXA0FRNDAT2_BASE.BIT._ND49
#define FLXA0FRNDAT2_ND50 FLXA0FRNDAT2_BASE.BIT._ND50
#define FLXA0FRNDAT2_ND51 FLXA0FRNDAT2_BASE.BIT._ND51
#define FLXA0FRNDAT2_ND52 FLXA0FRNDAT2_BASE.BIT._ND52
#define FLXA0FRNDAT2_ND53 FLXA0FRNDAT2_BASE.BIT._ND53
#define FLXA0FRNDAT2_ND54 FLXA0FRNDAT2_BASE.BIT._ND54
#define FLXA0FRNDAT2_ND55 FLXA0FRNDAT2_BASE.BIT._ND55
#define FLXA0FRNDAT2_ND56 FLXA0FRNDAT2_BASE.BIT._ND56
#define FLXA0FRNDAT2_ND57 FLXA0FRNDAT2_BASE.BIT._ND57
#define FLXA0FRNDAT2_ND58 FLXA0FRNDAT2_BASE.BIT._ND58
#define FLXA0FRNDAT2_ND59 FLXA0FRNDAT2_BASE.BIT._ND59
#define FLXA0FRNDAT2_ND60 FLXA0FRNDAT2_BASE.BIT._ND60
#define FLXA0FRNDAT2_ND61 FLXA0FRNDAT2_BASE.BIT._ND61
#define FLXA0FRNDAT2_ND62 FLXA0FRNDAT2_BASE.BIT._ND62
#define FLXA0FRNDAT2_ND63 FLXA0FRNDAT2_BASE.BIT._ND63
#define FLXA0FRNDAT3 FLXA0FRNDAT3_BASE.UINT32
#define FLXA0FRNDAT3L FLXA0FRNDAT3_BASE.UINT16[L]
#define FLXA0FRNDAT3H FLXA0FRNDAT3_BASE.UINT16[H]
#define FLXA0FRNDAT3LL FLXA0FRNDAT3_BASE.UINT8[LL]
#define FLXA0FRNDAT3LH FLXA0FRNDAT3_BASE.UINT8[LH]
#define FLXA0FRNDAT3HL FLXA0FRNDAT3_BASE.UINT8[HL]
#define FLXA0FRNDAT3HH FLXA0FRNDAT3_BASE.UINT8[HH]
#define FLXA0FRNDAT3_ND64 FLXA0FRNDAT3_BASE.BIT._ND64
#define FLXA0FRNDAT3_ND65 FLXA0FRNDAT3_BASE.BIT._ND65
#define FLXA0FRNDAT3_ND66 FLXA0FRNDAT3_BASE.BIT._ND66
#define FLXA0FRNDAT3_ND67 FLXA0FRNDAT3_BASE.BIT._ND67
#define FLXA0FRNDAT3_ND68 FLXA0FRNDAT3_BASE.BIT._ND68
#define FLXA0FRNDAT3_ND69 FLXA0FRNDAT3_BASE.BIT._ND69
#define FLXA0FRNDAT3_ND70 FLXA0FRNDAT3_BASE.BIT._ND70
#define FLXA0FRNDAT3_ND71 FLXA0FRNDAT3_BASE.BIT._ND71
#define FLXA0FRNDAT3_ND72 FLXA0FRNDAT3_BASE.BIT._ND72
#define FLXA0FRNDAT3_ND73 FLXA0FRNDAT3_BASE.BIT._ND73
#define FLXA0FRNDAT3_ND74 FLXA0FRNDAT3_BASE.BIT._ND74
#define FLXA0FRNDAT3_ND75 FLXA0FRNDAT3_BASE.BIT._ND75
#define FLXA0FRNDAT3_ND76 FLXA0FRNDAT3_BASE.BIT._ND76
#define FLXA0FRNDAT3_ND77 FLXA0FRNDAT3_BASE.BIT._ND77
#define FLXA0FRNDAT3_ND78 FLXA0FRNDAT3_BASE.BIT._ND78
#define FLXA0FRNDAT3_ND79 FLXA0FRNDAT3_BASE.BIT._ND79
#define FLXA0FRNDAT3_ND80 FLXA0FRNDAT3_BASE.BIT._ND80
#define FLXA0FRNDAT3_ND81 FLXA0FRNDAT3_BASE.BIT._ND81
#define FLXA0FRNDAT3_ND82 FLXA0FRNDAT3_BASE.BIT._ND82
#define FLXA0FRNDAT3_ND83 FLXA0FRNDAT3_BASE.BIT._ND83
#define FLXA0FRNDAT3_ND84 FLXA0FRNDAT3_BASE.BIT._ND84
#define FLXA0FRNDAT3_ND85 FLXA0FRNDAT3_BASE.BIT._ND85
#define FLXA0FRNDAT3_ND86 FLXA0FRNDAT3_BASE.BIT._ND86
#define FLXA0FRNDAT3_ND87 FLXA0FRNDAT3_BASE.BIT._ND87
#define FLXA0FRNDAT3_ND88 FLXA0FRNDAT3_BASE.BIT._ND88
#define FLXA0FRNDAT3_ND89 FLXA0FRNDAT3_BASE.BIT._ND89
#define FLXA0FRNDAT3_ND90 FLXA0FRNDAT3_BASE.BIT._ND90
#define FLXA0FRNDAT3_ND91 FLXA0FRNDAT3_BASE.BIT._ND91
#define FLXA0FRNDAT3_ND92 FLXA0FRNDAT3_BASE.BIT._ND92
#define FLXA0FRNDAT3_ND93 FLXA0FRNDAT3_BASE.BIT._ND93
#define FLXA0FRNDAT3_ND94 FLXA0FRNDAT3_BASE.BIT._ND94
#define FLXA0FRNDAT3_ND95 FLXA0FRNDAT3_BASE.BIT._ND95
#define FLXA0FRNDAT4 FLXA0FRNDAT4_BASE.UINT32
#define FLXA0FRNDAT4L FLXA0FRNDAT4_BASE.UINT16[L]
#define FLXA0FRNDAT4H FLXA0FRNDAT4_BASE.UINT16[H]
#define FLXA0FRNDAT4LL FLXA0FRNDAT4_BASE.UINT8[LL]
#define FLXA0FRNDAT4LH FLXA0FRNDAT4_BASE.UINT8[LH]
#define FLXA0FRNDAT4HL FLXA0FRNDAT4_BASE.UINT8[HL]
#define FLXA0FRNDAT4HH FLXA0FRNDAT4_BASE.UINT8[HH]
#define FLXA0FRNDAT4_ND96 FLXA0FRNDAT4_BASE.BIT._ND96
#define FLXA0FRNDAT4_ND97 FLXA0FRNDAT4_BASE.BIT._ND97
#define FLXA0FRNDAT4_ND98 FLXA0FRNDAT4_BASE.BIT._ND98
#define FLXA0FRNDAT4_ND99 FLXA0FRNDAT4_BASE.BIT._ND99
#define FLXA0FRNDAT4_ND100 FLXA0FRNDAT4_BASE.BIT._ND100
#define FLXA0FRNDAT4_ND101 FLXA0FRNDAT4_BASE.BIT._ND101
#define FLXA0FRNDAT4_ND102 FLXA0FRNDAT4_BASE.BIT._ND102
#define FLXA0FRNDAT4_ND103 FLXA0FRNDAT4_BASE.BIT._ND103
#define FLXA0FRNDAT4_ND104 FLXA0FRNDAT4_BASE.BIT._ND104
#define FLXA0FRNDAT4_ND105 FLXA0FRNDAT4_BASE.BIT._ND105
#define FLXA0FRNDAT4_ND106 FLXA0FRNDAT4_BASE.BIT._ND106
#define FLXA0FRNDAT4_ND107 FLXA0FRNDAT4_BASE.BIT._ND107
#define FLXA0FRNDAT4_ND108 FLXA0FRNDAT4_BASE.BIT._ND108
#define FLXA0FRNDAT4_ND109 FLXA0FRNDAT4_BASE.BIT._ND109
#define FLXA0FRNDAT4_ND110 FLXA0FRNDAT4_BASE.BIT._ND110
#define FLXA0FRNDAT4_ND111 FLXA0FRNDAT4_BASE.BIT._ND111
#define FLXA0FRNDAT4_ND112 FLXA0FRNDAT4_BASE.BIT._ND112
#define FLXA0FRNDAT4_ND113 FLXA0FRNDAT4_BASE.BIT._ND113
#define FLXA0FRNDAT4_ND114 FLXA0FRNDAT4_BASE.BIT._ND114
#define FLXA0FRNDAT4_ND115 FLXA0FRNDAT4_BASE.BIT._ND115
#define FLXA0FRNDAT4_ND116 FLXA0FRNDAT4_BASE.BIT._ND116
#define FLXA0FRNDAT4_ND117 FLXA0FRNDAT4_BASE.BIT._ND117
#define FLXA0FRNDAT4_ND118 FLXA0FRNDAT4_BASE.BIT._ND118
#define FLXA0FRNDAT4_ND119 FLXA0FRNDAT4_BASE.BIT._ND119
#define FLXA0FRNDAT4_ND120 FLXA0FRNDAT4_BASE.BIT._ND120
#define FLXA0FRNDAT4_ND121 FLXA0FRNDAT4_BASE.BIT._ND121
#define FLXA0FRNDAT4_ND122 FLXA0FRNDAT4_BASE.BIT._ND122
#define FLXA0FRNDAT4_ND123 FLXA0FRNDAT4_BASE.BIT._ND123
#define FLXA0FRNDAT4_ND124 FLXA0FRNDAT4_BASE.BIT._ND124
#define FLXA0FRNDAT4_ND125 FLXA0FRNDAT4_BASE.BIT._ND125
#define FLXA0FRNDAT4_ND126 FLXA0FRNDAT4_BASE.BIT._ND126
#define FLXA0FRNDAT4_ND127 FLXA0FRNDAT4_BASE.BIT._ND127
#define FLXA0FRMBSC1 FLXA0FRMBSC1_BASE.UINT32
#define FLXA0FRMBSC1L FLXA0FRMBSC1_BASE.UINT16[L]
#define FLXA0FRMBSC1H FLXA0FRMBSC1_BASE.UINT16[H]
#define FLXA0FRMBSC1LL FLXA0FRMBSC1_BASE.UINT8[LL]
#define FLXA0FRMBSC1LH FLXA0FRMBSC1_BASE.UINT8[LH]
#define FLXA0FRMBSC1HL FLXA0FRMBSC1_BASE.UINT8[HL]
#define FLXA0FRMBSC1HH FLXA0FRMBSC1_BASE.UINT8[HH]
#define FLXA0FRMBSC1_MBC0 FLXA0FRMBSC1_BASE.BIT._MBC0
#define FLXA0FRMBSC1_MBC1 FLXA0FRMBSC1_BASE.BIT._MBC1
#define FLXA0FRMBSC1_MBC2 FLXA0FRMBSC1_BASE.BIT._MBC2
#define FLXA0FRMBSC1_MBC3 FLXA0FRMBSC1_BASE.BIT._MBC3
#define FLXA0FRMBSC1_MBC4 FLXA0FRMBSC1_BASE.BIT._MBC4
#define FLXA0FRMBSC1_MBC5 FLXA0FRMBSC1_BASE.BIT._MBC5
#define FLXA0FRMBSC1_MBC6 FLXA0FRMBSC1_BASE.BIT._MBC6
#define FLXA0FRMBSC1_MBC7 FLXA0FRMBSC1_BASE.BIT._MBC7
#define FLXA0FRMBSC1_MBC8 FLXA0FRMBSC1_BASE.BIT._MBC8
#define FLXA0FRMBSC1_MBC9 FLXA0FRMBSC1_BASE.BIT._MBC9
#define FLXA0FRMBSC1_MBC10 FLXA0FRMBSC1_BASE.BIT._MBC10
#define FLXA0FRMBSC1_MBC11 FLXA0FRMBSC1_BASE.BIT._MBC11
#define FLXA0FRMBSC1_MBC12 FLXA0FRMBSC1_BASE.BIT._MBC12
#define FLXA0FRMBSC1_MBC13 FLXA0FRMBSC1_BASE.BIT._MBC13
#define FLXA0FRMBSC1_MBC14 FLXA0FRMBSC1_BASE.BIT._MBC14
#define FLXA0FRMBSC1_MBC15 FLXA0FRMBSC1_BASE.BIT._MBC15
#define FLXA0FRMBSC1_MBC16 FLXA0FRMBSC1_BASE.BIT._MBC16
#define FLXA0FRMBSC1_MBC17 FLXA0FRMBSC1_BASE.BIT._MBC17
#define FLXA0FRMBSC1_MBC18 FLXA0FRMBSC1_BASE.BIT._MBC18
#define FLXA0FRMBSC1_MBC19 FLXA0FRMBSC1_BASE.BIT._MBC19
#define FLXA0FRMBSC1_MBC20 FLXA0FRMBSC1_BASE.BIT._MBC20
#define FLXA0FRMBSC1_MBC21 FLXA0FRMBSC1_BASE.BIT._MBC21
#define FLXA0FRMBSC1_MBC22 FLXA0FRMBSC1_BASE.BIT._MBC22
#define FLXA0FRMBSC1_MBC23 FLXA0FRMBSC1_BASE.BIT._MBC23
#define FLXA0FRMBSC1_MBC24 FLXA0FRMBSC1_BASE.BIT._MBC24
#define FLXA0FRMBSC1_MBC25 FLXA0FRMBSC1_BASE.BIT._MBC25
#define FLXA0FRMBSC1_MBC26 FLXA0FRMBSC1_BASE.BIT._MBC26
#define FLXA0FRMBSC1_MBC27 FLXA0FRMBSC1_BASE.BIT._MBC27
#define FLXA0FRMBSC1_MBC28 FLXA0FRMBSC1_BASE.BIT._MBC28
#define FLXA0FRMBSC1_MBC29 FLXA0FRMBSC1_BASE.BIT._MBC29
#define FLXA0FRMBSC1_MBC30 FLXA0FRMBSC1_BASE.BIT._MBC30
#define FLXA0FRMBSC1_MBC31 FLXA0FRMBSC1_BASE.BIT._MBC31
#define FLXA0FRMBSC2 FLXA0FRMBSC2_BASE.UINT32
#define FLXA0FRMBSC2L FLXA0FRMBSC2_BASE.UINT16[L]
#define FLXA0FRMBSC2H FLXA0FRMBSC2_BASE.UINT16[H]
#define FLXA0FRMBSC2LL FLXA0FRMBSC2_BASE.UINT8[LL]
#define FLXA0FRMBSC2LH FLXA0FRMBSC2_BASE.UINT8[LH]
#define FLXA0FRMBSC2HL FLXA0FRMBSC2_BASE.UINT8[HL]
#define FLXA0FRMBSC2HH FLXA0FRMBSC2_BASE.UINT8[HH]
#define FLXA0FRMBSC2_MBC32 FLXA0FRMBSC2_BASE.BIT._MBC32
#define FLXA0FRMBSC2_MBC33 FLXA0FRMBSC2_BASE.BIT._MBC33
#define FLXA0FRMBSC2_MBC34 FLXA0FRMBSC2_BASE.BIT._MBC34
#define FLXA0FRMBSC2_MBC35 FLXA0FRMBSC2_BASE.BIT._MBC35
#define FLXA0FRMBSC2_MBC36 FLXA0FRMBSC2_BASE.BIT._MBC36
#define FLXA0FRMBSC2_MBC37 FLXA0FRMBSC2_BASE.BIT._MBC37
#define FLXA0FRMBSC2_MBC38 FLXA0FRMBSC2_BASE.BIT._MBC38
#define FLXA0FRMBSC2_MBC39 FLXA0FRMBSC2_BASE.BIT._MBC39
#define FLXA0FRMBSC2_MBC40 FLXA0FRMBSC2_BASE.BIT._MBC40
#define FLXA0FRMBSC2_MBC41 FLXA0FRMBSC2_BASE.BIT._MBC41
#define FLXA0FRMBSC2_MBC42 FLXA0FRMBSC2_BASE.BIT._MBC42
#define FLXA0FRMBSC2_MBC43 FLXA0FRMBSC2_BASE.BIT._MBC43
#define FLXA0FRMBSC2_MBC44 FLXA0FRMBSC2_BASE.BIT._MBC44
#define FLXA0FRMBSC2_MBC45 FLXA0FRMBSC2_BASE.BIT._MBC45
#define FLXA0FRMBSC2_MBC46 FLXA0FRMBSC2_BASE.BIT._MBC46
#define FLXA0FRMBSC2_MBC47 FLXA0FRMBSC2_BASE.BIT._MBC47
#define FLXA0FRMBSC2_MBC48 FLXA0FRMBSC2_BASE.BIT._MBC48
#define FLXA0FRMBSC2_MBC49 FLXA0FRMBSC2_BASE.BIT._MBC49
#define FLXA0FRMBSC2_MBC50 FLXA0FRMBSC2_BASE.BIT._MBC50
#define FLXA0FRMBSC2_MBC51 FLXA0FRMBSC2_BASE.BIT._MBC51
#define FLXA0FRMBSC2_MBC52 FLXA0FRMBSC2_BASE.BIT._MBC52
#define FLXA0FRMBSC2_MBC53 FLXA0FRMBSC2_BASE.BIT._MBC53
#define FLXA0FRMBSC2_MBC54 FLXA0FRMBSC2_BASE.BIT._MBC54
#define FLXA0FRMBSC2_MBC55 FLXA0FRMBSC2_BASE.BIT._MBC55
#define FLXA0FRMBSC2_MBC56 FLXA0FRMBSC2_BASE.BIT._MBC56
#define FLXA0FRMBSC2_MBC57 FLXA0FRMBSC2_BASE.BIT._MBC57
#define FLXA0FRMBSC2_MBC58 FLXA0FRMBSC2_BASE.BIT._MBC58
#define FLXA0FRMBSC2_MBC59 FLXA0FRMBSC2_BASE.BIT._MBC59
#define FLXA0FRMBSC2_MBC60 FLXA0FRMBSC2_BASE.BIT._MBC60
#define FLXA0FRMBSC2_MBC61 FLXA0FRMBSC2_BASE.BIT._MBC61
#define FLXA0FRMBSC2_MBC62 FLXA0FRMBSC2_BASE.BIT._MBC62
#define FLXA0FRMBSC2_MBC63 FLXA0FRMBSC2_BASE.BIT._MBC63
#define FLXA0FRMBSC3 FLXA0FRMBSC3_BASE.UINT32
#define FLXA0FRMBSC3L FLXA0FRMBSC3_BASE.UINT16[L]
#define FLXA0FRMBSC3H FLXA0FRMBSC3_BASE.UINT16[H]
#define FLXA0FRMBSC3LL FLXA0FRMBSC3_BASE.UINT8[LL]
#define FLXA0FRMBSC3LH FLXA0FRMBSC3_BASE.UINT8[LH]
#define FLXA0FRMBSC3HL FLXA0FRMBSC3_BASE.UINT8[HL]
#define FLXA0FRMBSC3HH FLXA0FRMBSC3_BASE.UINT8[HH]
#define FLXA0FRMBSC3_MBC64 FLXA0FRMBSC3_BASE.BIT._MBC64
#define FLXA0FRMBSC3_MBC65 FLXA0FRMBSC3_BASE.BIT._MBC65
#define FLXA0FRMBSC3_MBC66 FLXA0FRMBSC3_BASE.BIT._MBC66
#define FLXA0FRMBSC3_MBC67 FLXA0FRMBSC3_BASE.BIT._MBC67
#define FLXA0FRMBSC3_MBC68 FLXA0FRMBSC3_BASE.BIT._MBC68
#define FLXA0FRMBSC3_MBC69 FLXA0FRMBSC3_BASE.BIT._MBC69
#define FLXA0FRMBSC3_MBC70 FLXA0FRMBSC3_BASE.BIT._MBC70
#define FLXA0FRMBSC3_MBC71 FLXA0FRMBSC3_BASE.BIT._MBC71
#define FLXA0FRMBSC3_MBC72 FLXA0FRMBSC3_BASE.BIT._MBC72
#define FLXA0FRMBSC3_MBC73 FLXA0FRMBSC3_BASE.BIT._MBC73
#define FLXA0FRMBSC3_MBC74 FLXA0FRMBSC3_BASE.BIT._MBC74
#define FLXA0FRMBSC3_MBC75 FLXA0FRMBSC3_BASE.BIT._MBC75
#define FLXA0FRMBSC3_MBC76 FLXA0FRMBSC3_BASE.BIT._MBC76
#define FLXA0FRMBSC3_MBC77 FLXA0FRMBSC3_BASE.BIT._MBC77
#define FLXA0FRMBSC3_MBC78 FLXA0FRMBSC3_BASE.BIT._MBC78
#define FLXA0FRMBSC3_MBC79 FLXA0FRMBSC3_BASE.BIT._MBC79
#define FLXA0FRMBSC3_MBC80 FLXA0FRMBSC3_BASE.BIT._MBC80
#define FLXA0FRMBSC3_MBC81 FLXA0FRMBSC3_BASE.BIT._MBC81
#define FLXA0FRMBSC3_MBC82 FLXA0FRMBSC3_BASE.BIT._MBC82
#define FLXA0FRMBSC3_MBC83 FLXA0FRMBSC3_BASE.BIT._MBC83
#define FLXA0FRMBSC3_MBC84 FLXA0FRMBSC3_BASE.BIT._MBC84
#define FLXA0FRMBSC3_MBC85 FLXA0FRMBSC3_BASE.BIT._MBC85
#define FLXA0FRMBSC3_MBC86 FLXA0FRMBSC3_BASE.BIT._MBC86
#define FLXA0FRMBSC3_MBC87 FLXA0FRMBSC3_BASE.BIT._MBC87
#define FLXA0FRMBSC3_MBC88 FLXA0FRMBSC3_BASE.BIT._MBC88
#define FLXA0FRMBSC3_MBC89 FLXA0FRMBSC3_BASE.BIT._MBC89
#define FLXA0FRMBSC3_MBC90 FLXA0FRMBSC3_BASE.BIT._MBC90
#define FLXA0FRMBSC3_MBC91 FLXA0FRMBSC3_BASE.BIT._MBC91
#define FLXA0FRMBSC3_MBC92 FLXA0FRMBSC3_BASE.BIT._MBC92
#define FLXA0FRMBSC3_MBC93 FLXA0FRMBSC3_BASE.BIT._MBC93
#define FLXA0FRMBSC3_MBC94 FLXA0FRMBSC3_BASE.BIT._MBC94
#define FLXA0FRMBSC3_MBC95 FLXA0FRMBSC3_BASE.BIT._MBC95
#define FLXA0FRMBSC4 FLXA0FRMBSC4_BASE.UINT32
#define FLXA0FRMBSC4L FLXA0FRMBSC4_BASE.UINT16[L]
#define FLXA0FRMBSC4H FLXA0FRMBSC4_BASE.UINT16[H]
#define FLXA0FRMBSC4LL FLXA0FRMBSC4_BASE.UINT8[LL]
#define FLXA0FRMBSC4LH FLXA0FRMBSC4_BASE.UINT8[LH]
#define FLXA0FRMBSC4HL FLXA0FRMBSC4_BASE.UINT8[HL]
#define FLXA0FRMBSC4HH FLXA0FRMBSC4_BASE.UINT8[HH]
#define FLXA0FRMBSC4_MBC96 FLXA0FRMBSC4_BASE.BIT._MBC96
#define FLXA0FRMBSC4_MBC97 FLXA0FRMBSC4_BASE.BIT._MBC97
#define FLXA0FRMBSC4_MBC98 FLXA0FRMBSC4_BASE.BIT._MBC98
#define FLXA0FRMBSC4_MBC99 FLXA0FRMBSC4_BASE.BIT._MBC99
#define FLXA0FRMBSC4_MBC100 FLXA0FRMBSC4_BASE.BIT._MBC100
#define FLXA0FRMBSC4_MBC101 FLXA0FRMBSC4_BASE.BIT._MBC101
#define FLXA0FRMBSC4_MBC102 FLXA0FRMBSC4_BASE.BIT._MBC102
#define FLXA0FRMBSC4_MBC103 FLXA0FRMBSC4_BASE.BIT._MBC103
#define FLXA0FRMBSC4_MBC104 FLXA0FRMBSC4_BASE.BIT._MBC104
#define FLXA0FRMBSC4_MBC105 FLXA0FRMBSC4_BASE.BIT._MBC105
#define FLXA0FRMBSC4_MBC106 FLXA0FRMBSC4_BASE.BIT._MBC106
#define FLXA0FRMBSC4_MBC107 FLXA0FRMBSC4_BASE.BIT._MBC107
#define FLXA0FRMBSC4_MBC108 FLXA0FRMBSC4_BASE.BIT._MBC108
#define FLXA0FRMBSC4_MBC109 FLXA0FRMBSC4_BASE.BIT._MBC109
#define FLXA0FRMBSC4_MBC110 FLXA0FRMBSC4_BASE.BIT._MBC110
#define FLXA0FRMBSC4_MBC111 FLXA0FRMBSC4_BASE.BIT._MBC111
#define FLXA0FRMBSC4_MBC112 FLXA0FRMBSC4_BASE.BIT._MBC112
#define FLXA0FRMBSC4_MBC113 FLXA0FRMBSC4_BASE.BIT._MBC113
#define FLXA0FRMBSC4_MBC114 FLXA0FRMBSC4_BASE.BIT._MBC114
#define FLXA0FRMBSC4_MBC115 FLXA0FRMBSC4_BASE.BIT._MBC115
#define FLXA0FRMBSC4_MBC116 FLXA0FRMBSC4_BASE.BIT._MBC116
#define FLXA0FRMBSC4_MBC117 FLXA0FRMBSC4_BASE.BIT._MBC117
#define FLXA0FRMBSC4_MBC118 FLXA0FRMBSC4_BASE.BIT._MBC118
#define FLXA0FRMBSC4_MBC119 FLXA0FRMBSC4_BASE.BIT._MBC119
#define FLXA0FRMBSC4_MBC120 FLXA0FRMBSC4_BASE.BIT._MBC120
#define FLXA0FRMBSC4_MBC121 FLXA0FRMBSC4_BASE.BIT._MBC121
#define FLXA0FRMBSC4_MBC122 FLXA0FRMBSC4_BASE.BIT._MBC122
#define FLXA0FRMBSC4_MBC123 FLXA0FRMBSC4_BASE.BIT._MBC123
#define FLXA0FRMBSC4_MBC124 FLXA0FRMBSC4_BASE.BIT._MBC124
#define FLXA0FRMBSC4_MBC125 FLXA0FRMBSC4_BASE.BIT._MBC125
#define FLXA0FRMBSC4_MBC126 FLXA0FRMBSC4_BASE.BIT._MBC126
#define FLXA0FRMBSC4_MBC127 FLXA0FRMBSC4_BASE.BIT._MBC127
#define FLXA0FRWRDS1 FLXA0FRWRDS1_BASE.UINT32
#define FLXA0FRWRDS1L FLXA0FRWRDS1_BASE.UINT16[L]
#define FLXA0FRWRDS1H FLXA0FRWRDS1_BASE.UINT16[H]
#define FLXA0FRWRDS1LL FLXA0FRWRDS1_BASE.UINT8[LL]
#define FLXA0FRWRDS1LH FLXA0FRWRDS1_BASE.UINT8[LH]
#define FLXA0FRWRDS1HL FLXA0FRWRDS1_BASE.UINT8[HL]
#define FLXA0FRWRDS1HH FLXA0FRWRDS1_BASE.UINT8[HH]
#define FLXA0FRWRDS1_MD FLXA0FRWRDS1_BASE.BIT._MD
#define FLXA0FRWRDS2 FLXA0FRWRDS2_BASE.UINT32
#define FLXA0FRWRDS2L FLXA0FRWRDS2_BASE.UINT16[L]
#define FLXA0FRWRDS2H FLXA0FRWRDS2_BASE.UINT16[H]
#define FLXA0FRWRDS2LL FLXA0FRWRDS2_BASE.UINT8[LL]
#define FLXA0FRWRDS2LH FLXA0FRWRDS2_BASE.UINT8[LH]
#define FLXA0FRWRDS2HL FLXA0FRWRDS2_BASE.UINT8[HL]
#define FLXA0FRWRDS2HH FLXA0FRWRDS2_BASE.UINT8[HH]
#define FLXA0FRWRDS2_MD FLXA0FRWRDS2_BASE.BIT._MD
#define FLXA0FRWRDS3 FLXA0FRWRDS3_BASE.UINT32
#define FLXA0FRWRDS3L FLXA0FRWRDS3_BASE.UINT16[L]
#define FLXA0FRWRDS3H FLXA0FRWRDS3_BASE.UINT16[H]
#define FLXA0FRWRDS3LL FLXA0FRWRDS3_BASE.UINT8[LL]
#define FLXA0FRWRDS3LH FLXA0FRWRDS3_BASE.UINT8[LH]
#define FLXA0FRWRDS3HL FLXA0FRWRDS3_BASE.UINT8[HL]
#define FLXA0FRWRDS3HH FLXA0FRWRDS3_BASE.UINT8[HH]
#define FLXA0FRWRDS3_MD FLXA0FRWRDS3_BASE.BIT._MD
#define FLXA0FRWRDS4 FLXA0FRWRDS4_BASE.UINT32
#define FLXA0FRWRDS4L FLXA0FRWRDS4_BASE.UINT16[L]
#define FLXA0FRWRDS4H FLXA0FRWRDS4_BASE.UINT16[H]
#define FLXA0FRWRDS4LL FLXA0FRWRDS4_BASE.UINT8[LL]
#define FLXA0FRWRDS4LH FLXA0FRWRDS4_BASE.UINT8[LH]
#define FLXA0FRWRDS4HL FLXA0FRWRDS4_BASE.UINT8[HL]
#define FLXA0FRWRDS4HH FLXA0FRWRDS4_BASE.UINT8[HH]
#define FLXA0FRWRDS4_MD FLXA0FRWRDS4_BASE.BIT._MD
#define FLXA0FRWRDS5 FLXA0FRWRDS5_BASE.UINT32
#define FLXA0FRWRDS5L FLXA0FRWRDS5_BASE.UINT16[L]
#define FLXA0FRWRDS5H FLXA0FRWRDS5_BASE.UINT16[H]
#define FLXA0FRWRDS5LL FLXA0FRWRDS5_BASE.UINT8[LL]
#define FLXA0FRWRDS5LH FLXA0FRWRDS5_BASE.UINT8[LH]
#define FLXA0FRWRDS5HL FLXA0FRWRDS5_BASE.UINT8[HL]
#define FLXA0FRWRDS5HH FLXA0FRWRDS5_BASE.UINT8[HH]
#define FLXA0FRWRDS5_MD FLXA0FRWRDS5_BASE.BIT._MD
#define FLXA0FRWRDS6 FLXA0FRWRDS6_BASE.UINT32
#define FLXA0FRWRDS6L FLXA0FRWRDS6_BASE.UINT16[L]
#define FLXA0FRWRDS6H FLXA0FRWRDS6_BASE.UINT16[H]
#define FLXA0FRWRDS6LL FLXA0FRWRDS6_BASE.UINT8[LL]
#define FLXA0FRWRDS6LH FLXA0FRWRDS6_BASE.UINT8[LH]
#define FLXA0FRWRDS6HL FLXA0FRWRDS6_BASE.UINT8[HL]
#define FLXA0FRWRDS6HH FLXA0FRWRDS6_BASE.UINT8[HH]
#define FLXA0FRWRDS6_MD FLXA0FRWRDS6_BASE.BIT._MD
#define FLXA0FRWRDS7 FLXA0FRWRDS7_BASE.UINT32
#define FLXA0FRWRDS7L FLXA0FRWRDS7_BASE.UINT16[L]
#define FLXA0FRWRDS7H FLXA0FRWRDS7_BASE.UINT16[H]
#define FLXA0FRWRDS7LL FLXA0FRWRDS7_BASE.UINT8[LL]
#define FLXA0FRWRDS7LH FLXA0FRWRDS7_BASE.UINT8[LH]
#define FLXA0FRWRDS7HL FLXA0FRWRDS7_BASE.UINT8[HL]
#define FLXA0FRWRDS7HH FLXA0FRWRDS7_BASE.UINT8[HH]
#define FLXA0FRWRDS7_MD FLXA0FRWRDS7_BASE.BIT._MD
#define FLXA0FRWRDS8 FLXA0FRWRDS8_BASE.UINT32
#define FLXA0FRWRDS8L FLXA0FRWRDS8_BASE.UINT16[L]
#define FLXA0FRWRDS8H FLXA0FRWRDS8_BASE.UINT16[H]
#define FLXA0FRWRDS8LL FLXA0FRWRDS8_BASE.UINT8[LL]
#define FLXA0FRWRDS8LH FLXA0FRWRDS8_BASE.UINT8[LH]
#define FLXA0FRWRDS8HL FLXA0FRWRDS8_BASE.UINT8[HL]
#define FLXA0FRWRDS8HH FLXA0FRWRDS8_BASE.UINT8[HH]
#define FLXA0FRWRDS8_MD FLXA0FRWRDS8_BASE.BIT._MD
#define FLXA0FRWRDS9 FLXA0FRWRDS9_BASE.UINT32
#define FLXA0FRWRDS9L FLXA0FRWRDS9_BASE.UINT16[L]
#define FLXA0FRWRDS9H FLXA0FRWRDS9_BASE.UINT16[H]
#define FLXA0FRWRDS9LL FLXA0FRWRDS9_BASE.UINT8[LL]
#define FLXA0FRWRDS9LH FLXA0FRWRDS9_BASE.UINT8[LH]
#define FLXA0FRWRDS9HL FLXA0FRWRDS9_BASE.UINT8[HL]
#define FLXA0FRWRDS9HH FLXA0FRWRDS9_BASE.UINT8[HH]
#define FLXA0FRWRDS9_MD FLXA0FRWRDS9_BASE.BIT._MD
#define FLXA0FRWRDS10 FLXA0FRWRDS10_BASE.UINT32
#define FLXA0FRWRDS10L FLXA0FRWRDS10_BASE.UINT16[L]
#define FLXA0FRWRDS10H FLXA0FRWRDS10_BASE.UINT16[H]
#define FLXA0FRWRDS10LL FLXA0FRWRDS10_BASE.UINT8[LL]
#define FLXA0FRWRDS10LH FLXA0FRWRDS10_BASE.UINT8[LH]
#define FLXA0FRWRDS10HL FLXA0FRWRDS10_BASE.UINT8[HL]
#define FLXA0FRWRDS10HH FLXA0FRWRDS10_BASE.UINT8[HH]
#define FLXA0FRWRDS10_MD FLXA0FRWRDS10_BASE.BIT._MD
#define FLXA0FRWRDS11 FLXA0FRWRDS11_BASE.UINT32
#define FLXA0FRWRDS11L FLXA0FRWRDS11_BASE.UINT16[L]
#define FLXA0FRWRDS11H FLXA0FRWRDS11_BASE.UINT16[H]
#define FLXA0FRWRDS11LL FLXA0FRWRDS11_BASE.UINT8[LL]
#define FLXA0FRWRDS11LH FLXA0FRWRDS11_BASE.UINT8[LH]
#define FLXA0FRWRDS11HL FLXA0FRWRDS11_BASE.UINT8[HL]
#define FLXA0FRWRDS11HH FLXA0FRWRDS11_BASE.UINT8[HH]
#define FLXA0FRWRDS11_MD FLXA0FRWRDS11_BASE.BIT._MD
#define FLXA0FRWRDS12 FLXA0FRWRDS12_BASE.UINT32
#define FLXA0FRWRDS12L FLXA0FRWRDS12_BASE.UINT16[L]
#define FLXA0FRWRDS12H FLXA0FRWRDS12_BASE.UINT16[H]
#define FLXA0FRWRDS12LL FLXA0FRWRDS12_BASE.UINT8[LL]
#define FLXA0FRWRDS12LH FLXA0FRWRDS12_BASE.UINT8[LH]
#define FLXA0FRWRDS12HL FLXA0FRWRDS12_BASE.UINT8[HL]
#define FLXA0FRWRDS12HH FLXA0FRWRDS12_BASE.UINT8[HH]
#define FLXA0FRWRDS12_MD FLXA0FRWRDS12_BASE.BIT._MD
#define FLXA0FRWRDS13 FLXA0FRWRDS13_BASE.UINT32
#define FLXA0FRWRDS13L FLXA0FRWRDS13_BASE.UINT16[L]
#define FLXA0FRWRDS13H FLXA0FRWRDS13_BASE.UINT16[H]
#define FLXA0FRWRDS13LL FLXA0FRWRDS13_BASE.UINT8[LL]
#define FLXA0FRWRDS13LH FLXA0FRWRDS13_BASE.UINT8[LH]
#define FLXA0FRWRDS13HL FLXA0FRWRDS13_BASE.UINT8[HL]
#define FLXA0FRWRDS13HH FLXA0FRWRDS13_BASE.UINT8[HH]
#define FLXA0FRWRDS13_MD FLXA0FRWRDS13_BASE.BIT._MD
#define FLXA0FRWRDS14 FLXA0FRWRDS14_BASE.UINT32
#define FLXA0FRWRDS14L FLXA0FRWRDS14_BASE.UINT16[L]
#define FLXA0FRWRDS14H FLXA0FRWRDS14_BASE.UINT16[H]
#define FLXA0FRWRDS14LL FLXA0FRWRDS14_BASE.UINT8[LL]
#define FLXA0FRWRDS14LH FLXA0FRWRDS14_BASE.UINT8[LH]
#define FLXA0FRWRDS14HL FLXA0FRWRDS14_BASE.UINT8[HL]
#define FLXA0FRWRDS14HH FLXA0FRWRDS14_BASE.UINT8[HH]
#define FLXA0FRWRDS14_MD FLXA0FRWRDS14_BASE.BIT._MD
#define FLXA0FRWRDS15 FLXA0FRWRDS15_BASE.UINT32
#define FLXA0FRWRDS15L FLXA0FRWRDS15_BASE.UINT16[L]
#define FLXA0FRWRDS15H FLXA0FRWRDS15_BASE.UINT16[H]
#define FLXA0FRWRDS15LL FLXA0FRWRDS15_BASE.UINT8[LL]
#define FLXA0FRWRDS15LH FLXA0FRWRDS15_BASE.UINT8[LH]
#define FLXA0FRWRDS15HL FLXA0FRWRDS15_BASE.UINT8[HL]
#define FLXA0FRWRDS15HH FLXA0FRWRDS15_BASE.UINT8[HH]
#define FLXA0FRWRDS15_MD FLXA0FRWRDS15_BASE.BIT._MD
#define FLXA0FRWRDS16 FLXA0FRWRDS16_BASE.UINT32
#define FLXA0FRWRDS16L FLXA0FRWRDS16_BASE.UINT16[L]
#define FLXA0FRWRDS16H FLXA0FRWRDS16_BASE.UINT16[H]
#define FLXA0FRWRDS16LL FLXA0FRWRDS16_BASE.UINT8[LL]
#define FLXA0FRWRDS16LH FLXA0FRWRDS16_BASE.UINT8[LH]
#define FLXA0FRWRDS16HL FLXA0FRWRDS16_BASE.UINT8[HL]
#define FLXA0FRWRDS16HH FLXA0FRWRDS16_BASE.UINT8[HH]
#define FLXA0FRWRDS16_MD FLXA0FRWRDS16_BASE.BIT._MD
#define FLXA0FRWRDS17 FLXA0FRWRDS17_BASE.UINT32
#define FLXA0FRWRDS17L FLXA0FRWRDS17_BASE.UINT16[L]
#define FLXA0FRWRDS17H FLXA0FRWRDS17_BASE.UINT16[H]
#define FLXA0FRWRDS17LL FLXA0FRWRDS17_BASE.UINT8[LL]
#define FLXA0FRWRDS17LH FLXA0FRWRDS17_BASE.UINT8[LH]
#define FLXA0FRWRDS17HL FLXA0FRWRDS17_BASE.UINT8[HL]
#define FLXA0FRWRDS17HH FLXA0FRWRDS17_BASE.UINT8[HH]
#define FLXA0FRWRDS17_MD FLXA0FRWRDS17_BASE.BIT._MD
#define FLXA0FRWRDS18 FLXA0FRWRDS18_BASE.UINT32
#define FLXA0FRWRDS18L FLXA0FRWRDS18_BASE.UINT16[L]
#define FLXA0FRWRDS18H FLXA0FRWRDS18_BASE.UINT16[H]
#define FLXA0FRWRDS18LL FLXA0FRWRDS18_BASE.UINT8[LL]
#define FLXA0FRWRDS18LH FLXA0FRWRDS18_BASE.UINT8[LH]
#define FLXA0FRWRDS18HL FLXA0FRWRDS18_BASE.UINT8[HL]
#define FLXA0FRWRDS18HH FLXA0FRWRDS18_BASE.UINT8[HH]
#define FLXA0FRWRDS18_MD FLXA0FRWRDS18_BASE.BIT._MD
#define FLXA0FRWRDS19 FLXA0FRWRDS19_BASE.UINT32
#define FLXA0FRWRDS19L FLXA0FRWRDS19_BASE.UINT16[L]
#define FLXA0FRWRDS19H FLXA0FRWRDS19_BASE.UINT16[H]
#define FLXA0FRWRDS19LL FLXA0FRWRDS19_BASE.UINT8[LL]
#define FLXA0FRWRDS19LH FLXA0FRWRDS19_BASE.UINT8[LH]
#define FLXA0FRWRDS19HL FLXA0FRWRDS19_BASE.UINT8[HL]
#define FLXA0FRWRDS19HH FLXA0FRWRDS19_BASE.UINT8[HH]
#define FLXA0FRWRDS19_MD FLXA0FRWRDS19_BASE.BIT._MD
#define FLXA0FRWRDS20 FLXA0FRWRDS20_BASE.UINT32
#define FLXA0FRWRDS20L FLXA0FRWRDS20_BASE.UINT16[L]
#define FLXA0FRWRDS20H FLXA0FRWRDS20_BASE.UINT16[H]
#define FLXA0FRWRDS20LL FLXA0FRWRDS20_BASE.UINT8[LL]
#define FLXA0FRWRDS20LH FLXA0FRWRDS20_BASE.UINT8[LH]
#define FLXA0FRWRDS20HL FLXA0FRWRDS20_BASE.UINT8[HL]
#define FLXA0FRWRDS20HH FLXA0FRWRDS20_BASE.UINT8[HH]
#define FLXA0FRWRDS20_MD FLXA0FRWRDS20_BASE.BIT._MD
#define FLXA0FRWRDS21 FLXA0FRWRDS21_BASE.UINT32
#define FLXA0FRWRDS21L FLXA0FRWRDS21_BASE.UINT16[L]
#define FLXA0FRWRDS21H FLXA0FRWRDS21_BASE.UINT16[H]
#define FLXA0FRWRDS21LL FLXA0FRWRDS21_BASE.UINT8[LL]
#define FLXA0FRWRDS21LH FLXA0FRWRDS21_BASE.UINT8[LH]
#define FLXA0FRWRDS21HL FLXA0FRWRDS21_BASE.UINT8[HL]
#define FLXA0FRWRDS21HH FLXA0FRWRDS21_BASE.UINT8[HH]
#define FLXA0FRWRDS21_MD FLXA0FRWRDS21_BASE.BIT._MD
#define FLXA0FRWRDS22 FLXA0FRWRDS22_BASE.UINT32
#define FLXA0FRWRDS22L FLXA0FRWRDS22_BASE.UINT16[L]
#define FLXA0FRWRDS22H FLXA0FRWRDS22_BASE.UINT16[H]
#define FLXA0FRWRDS22LL FLXA0FRWRDS22_BASE.UINT8[LL]
#define FLXA0FRWRDS22LH FLXA0FRWRDS22_BASE.UINT8[LH]
#define FLXA0FRWRDS22HL FLXA0FRWRDS22_BASE.UINT8[HL]
#define FLXA0FRWRDS22HH FLXA0FRWRDS22_BASE.UINT8[HH]
#define FLXA0FRWRDS22_MD FLXA0FRWRDS22_BASE.BIT._MD
#define FLXA0FRWRDS23 FLXA0FRWRDS23_BASE.UINT32
#define FLXA0FRWRDS23L FLXA0FRWRDS23_BASE.UINT16[L]
#define FLXA0FRWRDS23H FLXA0FRWRDS23_BASE.UINT16[H]
#define FLXA0FRWRDS23LL FLXA0FRWRDS23_BASE.UINT8[LL]
#define FLXA0FRWRDS23LH FLXA0FRWRDS23_BASE.UINT8[LH]
#define FLXA0FRWRDS23HL FLXA0FRWRDS23_BASE.UINT8[HL]
#define FLXA0FRWRDS23HH FLXA0FRWRDS23_BASE.UINT8[HH]
#define FLXA0FRWRDS23_MD FLXA0FRWRDS23_BASE.BIT._MD
#define FLXA0FRWRDS24 FLXA0FRWRDS24_BASE.UINT32
#define FLXA0FRWRDS24L FLXA0FRWRDS24_BASE.UINT16[L]
#define FLXA0FRWRDS24H FLXA0FRWRDS24_BASE.UINT16[H]
#define FLXA0FRWRDS24LL FLXA0FRWRDS24_BASE.UINT8[LL]
#define FLXA0FRWRDS24LH FLXA0FRWRDS24_BASE.UINT8[LH]
#define FLXA0FRWRDS24HL FLXA0FRWRDS24_BASE.UINT8[HL]
#define FLXA0FRWRDS24HH FLXA0FRWRDS24_BASE.UINT8[HH]
#define FLXA0FRWRDS24_MD FLXA0FRWRDS24_BASE.BIT._MD
#define FLXA0FRWRDS25 FLXA0FRWRDS25_BASE.UINT32
#define FLXA0FRWRDS25L FLXA0FRWRDS25_BASE.UINT16[L]
#define FLXA0FRWRDS25H FLXA0FRWRDS25_BASE.UINT16[H]
#define FLXA0FRWRDS25LL FLXA0FRWRDS25_BASE.UINT8[LL]
#define FLXA0FRWRDS25LH FLXA0FRWRDS25_BASE.UINT8[LH]
#define FLXA0FRWRDS25HL FLXA0FRWRDS25_BASE.UINT8[HL]
#define FLXA0FRWRDS25HH FLXA0FRWRDS25_BASE.UINT8[HH]
#define FLXA0FRWRDS25_MD FLXA0FRWRDS25_BASE.BIT._MD
#define FLXA0FRWRDS26 FLXA0FRWRDS26_BASE.UINT32
#define FLXA0FRWRDS26L FLXA0FRWRDS26_BASE.UINT16[L]
#define FLXA0FRWRDS26H FLXA0FRWRDS26_BASE.UINT16[H]
#define FLXA0FRWRDS26LL FLXA0FRWRDS26_BASE.UINT8[LL]
#define FLXA0FRWRDS26LH FLXA0FRWRDS26_BASE.UINT8[LH]
#define FLXA0FRWRDS26HL FLXA0FRWRDS26_BASE.UINT8[HL]
#define FLXA0FRWRDS26HH FLXA0FRWRDS26_BASE.UINT8[HH]
#define FLXA0FRWRDS26_MD FLXA0FRWRDS26_BASE.BIT._MD
#define FLXA0FRWRDS27 FLXA0FRWRDS27_BASE.UINT32
#define FLXA0FRWRDS27L FLXA0FRWRDS27_BASE.UINT16[L]
#define FLXA0FRWRDS27H FLXA0FRWRDS27_BASE.UINT16[H]
#define FLXA0FRWRDS27LL FLXA0FRWRDS27_BASE.UINT8[LL]
#define FLXA0FRWRDS27LH FLXA0FRWRDS27_BASE.UINT8[LH]
#define FLXA0FRWRDS27HL FLXA0FRWRDS27_BASE.UINT8[HL]
#define FLXA0FRWRDS27HH FLXA0FRWRDS27_BASE.UINT8[HH]
#define FLXA0FRWRDS27_MD FLXA0FRWRDS27_BASE.BIT._MD
#define FLXA0FRWRDS28 FLXA0FRWRDS28_BASE.UINT32
#define FLXA0FRWRDS28L FLXA0FRWRDS28_BASE.UINT16[L]
#define FLXA0FRWRDS28H FLXA0FRWRDS28_BASE.UINT16[H]
#define FLXA0FRWRDS28LL FLXA0FRWRDS28_BASE.UINT8[LL]
#define FLXA0FRWRDS28LH FLXA0FRWRDS28_BASE.UINT8[LH]
#define FLXA0FRWRDS28HL FLXA0FRWRDS28_BASE.UINT8[HL]
#define FLXA0FRWRDS28HH FLXA0FRWRDS28_BASE.UINT8[HH]
#define FLXA0FRWRDS28_MD FLXA0FRWRDS28_BASE.BIT._MD
#define FLXA0FRWRDS29 FLXA0FRWRDS29_BASE.UINT32
#define FLXA0FRWRDS29L FLXA0FRWRDS29_BASE.UINT16[L]
#define FLXA0FRWRDS29H FLXA0FRWRDS29_BASE.UINT16[H]
#define FLXA0FRWRDS29LL FLXA0FRWRDS29_BASE.UINT8[LL]
#define FLXA0FRWRDS29LH FLXA0FRWRDS29_BASE.UINT8[LH]
#define FLXA0FRWRDS29HL FLXA0FRWRDS29_BASE.UINT8[HL]
#define FLXA0FRWRDS29HH FLXA0FRWRDS29_BASE.UINT8[HH]
#define FLXA0FRWRDS29_MD FLXA0FRWRDS29_BASE.BIT._MD
#define FLXA0FRWRDS30 FLXA0FRWRDS30_BASE.UINT32
#define FLXA0FRWRDS30L FLXA0FRWRDS30_BASE.UINT16[L]
#define FLXA0FRWRDS30H FLXA0FRWRDS30_BASE.UINT16[H]
#define FLXA0FRWRDS30LL FLXA0FRWRDS30_BASE.UINT8[LL]
#define FLXA0FRWRDS30LH FLXA0FRWRDS30_BASE.UINT8[LH]
#define FLXA0FRWRDS30HL FLXA0FRWRDS30_BASE.UINT8[HL]
#define FLXA0FRWRDS30HH FLXA0FRWRDS30_BASE.UINT8[HH]
#define FLXA0FRWRDS30_MD FLXA0FRWRDS30_BASE.BIT._MD
#define FLXA0FRWRDS31 FLXA0FRWRDS31_BASE.UINT32
#define FLXA0FRWRDS31L FLXA0FRWRDS31_BASE.UINT16[L]
#define FLXA0FRWRDS31H FLXA0FRWRDS31_BASE.UINT16[H]
#define FLXA0FRWRDS31LL FLXA0FRWRDS31_BASE.UINT8[LL]
#define FLXA0FRWRDS31LH FLXA0FRWRDS31_BASE.UINT8[LH]
#define FLXA0FRWRDS31HL FLXA0FRWRDS31_BASE.UINT8[HL]
#define FLXA0FRWRDS31HH FLXA0FRWRDS31_BASE.UINT8[HH]
#define FLXA0FRWRDS31_MD FLXA0FRWRDS31_BASE.BIT._MD
#define FLXA0FRWRDS32 FLXA0FRWRDS32_BASE.UINT32
#define FLXA0FRWRDS32L FLXA0FRWRDS32_BASE.UINT16[L]
#define FLXA0FRWRDS32H FLXA0FRWRDS32_BASE.UINT16[H]
#define FLXA0FRWRDS32LL FLXA0FRWRDS32_BASE.UINT8[LL]
#define FLXA0FRWRDS32LH FLXA0FRWRDS32_BASE.UINT8[LH]
#define FLXA0FRWRDS32HL FLXA0FRWRDS32_BASE.UINT8[HL]
#define FLXA0FRWRDS32HH FLXA0FRWRDS32_BASE.UINT8[HH]
#define FLXA0FRWRDS32_MD FLXA0FRWRDS32_BASE.BIT._MD
#define FLXA0FRWRDS33 FLXA0FRWRDS33_BASE.UINT32
#define FLXA0FRWRDS33L FLXA0FRWRDS33_BASE.UINT16[L]
#define FLXA0FRWRDS33H FLXA0FRWRDS33_BASE.UINT16[H]
#define FLXA0FRWRDS33LL FLXA0FRWRDS33_BASE.UINT8[LL]
#define FLXA0FRWRDS33LH FLXA0FRWRDS33_BASE.UINT8[LH]
#define FLXA0FRWRDS33HL FLXA0FRWRDS33_BASE.UINT8[HL]
#define FLXA0FRWRDS33HH FLXA0FRWRDS33_BASE.UINT8[HH]
#define FLXA0FRWRDS33_MD FLXA0FRWRDS33_BASE.BIT._MD
#define FLXA0FRWRDS34 FLXA0FRWRDS34_BASE.UINT32
#define FLXA0FRWRDS34L FLXA0FRWRDS34_BASE.UINT16[L]
#define FLXA0FRWRDS34H FLXA0FRWRDS34_BASE.UINT16[H]
#define FLXA0FRWRDS34LL FLXA0FRWRDS34_BASE.UINT8[LL]
#define FLXA0FRWRDS34LH FLXA0FRWRDS34_BASE.UINT8[LH]
#define FLXA0FRWRDS34HL FLXA0FRWRDS34_BASE.UINT8[HL]
#define FLXA0FRWRDS34HH FLXA0FRWRDS34_BASE.UINT8[HH]
#define FLXA0FRWRDS34_MD FLXA0FRWRDS34_BASE.BIT._MD
#define FLXA0FRWRDS35 FLXA0FRWRDS35_BASE.UINT32
#define FLXA0FRWRDS35L FLXA0FRWRDS35_BASE.UINT16[L]
#define FLXA0FRWRDS35H FLXA0FRWRDS35_BASE.UINT16[H]
#define FLXA0FRWRDS35LL FLXA0FRWRDS35_BASE.UINT8[LL]
#define FLXA0FRWRDS35LH FLXA0FRWRDS35_BASE.UINT8[LH]
#define FLXA0FRWRDS35HL FLXA0FRWRDS35_BASE.UINT8[HL]
#define FLXA0FRWRDS35HH FLXA0FRWRDS35_BASE.UINT8[HH]
#define FLXA0FRWRDS35_MD FLXA0FRWRDS35_BASE.BIT._MD
#define FLXA0FRWRDS36 FLXA0FRWRDS36_BASE.UINT32
#define FLXA0FRWRDS36L FLXA0FRWRDS36_BASE.UINT16[L]
#define FLXA0FRWRDS36H FLXA0FRWRDS36_BASE.UINT16[H]
#define FLXA0FRWRDS36LL FLXA0FRWRDS36_BASE.UINT8[LL]
#define FLXA0FRWRDS36LH FLXA0FRWRDS36_BASE.UINT8[LH]
#define FLXA0FRWRDS36HL FLXA0FRWRDS36_BASE.UINT8[HL]
#define FLXA0FRWRDS36HH FLXA0FRWRDS36_BASE.UINT8[HH]
#define FLXA0FRWRDS36_MD FLXA0FRWRDS36_BASE.BIT._MD
#define FLXA0FRWRDS37 FLXA0FRWRDS37_BASE.UINT32
#define FLXA0FRWRDS37L FLXA0FRWRDS37_BASE.UINT16[L]
#define FLXA0FRWRDS37H FLXA0FRWRDS37_BASE.UINT16[H]
#define FLXA0FRWRDS37LL FLXA0FRWRDS37_BASE.UINT8[LL]
#define FLXA0FRWRDS37LH FLXA0FRWRDS37_BASE.UINT8[LH]
#define FLXA0FRWRDS37HL FLXA0FRWRDS37_BASE.UINT8[HL]
#define FLXA0FRWRDS37HH FLXA0FRWRDS37_BASE.UINT8[HH]
#define FLXA0FRWRDS37_MD FLXA0FRWRDS37_BASE.BIT._MD
#define FLXA0FRWRDS38 FLXA0FRWRDS38_BASE.UINT32
#define FLXA0FRWRDS38L FLXA0FRWRDS38_BASE.UINT16[L]
#define FLXA0FRWRDS38H FLXA0FRWRDS38_BASE.UINT16[H]
#define FLXA0FRWRDS38LL FLXA0FRWRDS38_BASE.UINT8[LL]
#define FLXA0FRWRDS38LH FLXA0FRWRDS38_BASE.UINT8[LH]
#define FLXA0FRWRDS38HL FLXA0FRWRDS38_BASE.UINT8[HL]
#define FLXA0FRWRDS38HH FLXA0FRWRDS38_BASE.UINT8[HH]
#define FLXA0FRWRDS38_MD FLXA0FRWRDS38_BASE.BIT._MD
#define FLXA0FRWRDS39 FLXA0FRWRDS39_BASE.UINT32
#define FLXA0FRWRDS39L FLXA0FRWRDS39_BASE.UINT16[L]
#define FLXA0FRWRDS39H FLXA0FRWRDS39_BASE.UINT16[H]
#define FLXA0FRWRDS39LL FLXA0FRWRDS39_BASE.UINT8[LL]
#define FLXA0FRWRDS39LH FLXA0FRWRDS39_BASE.UINT8[LH]
#define FLXA0FRWRDS39HL FLXA0FRWRDS39_BASE.UINT8[HL]
#define FLXA0FRWRDS39HH FLXA0FRWRDS39_BASE.UINT8[HH]
#define FLXA0FRWRDS39_MD FLXA0FRWRDS39_BASE.BIT._MD
#define FLXA0FRWRDS40 FLXA0FRWRDS40_BASE.UINT32
#define FLXA0FRWRDS40L FLXA0FRWRDS40_BASE.UINT16[L]
#define FLXA0FRWRDS40H FLXA0FRWRDS40_BASE.UINT16[H]
#define FLXA0FRWRDS40LL FLXA0FRWRDS40_BASE.UINT8[LL]
#define FLXA0FRWRDS40LH FLXA0FRWRDS40_BASE.UINT8[LH]
#define FLXA0FRWRDS40HL FLXA0FRWRDS40_BASE.UINT8[HL]
#define FLXA0FRWRDS40HH FLXA0FRWRDS40_BASE.UINT8[HH]
#define FLXA0FRWRDS40_MD FLXA0FRWRDS40_BASE.BIT._MD
#define FLXA0FRWRDS41 FLXA0FRWRDS41_BASE.UINT32
#define FLXA0FRWRDS41L FLXA0FRWRDS41_BASE.UINT16[L]
#define FLXA0FRWRDS41H FLXA0FRWRDS41_BASE.UINT16[H]
#define FLXA0FRWRDS41LL FLXA0FRWRDS41_BASE.UINT8[LL]
#define FLXA0FRWRDS41LH FLXA0FRWRDS41_BASE.UINT8[LH]
#define FLXA0FRWRDS41HL FLXA0FRWRDS41_BASE.UINT8[HL]
#define FLXA0FRWRDS41HH FLXA0FRWRDS41_BASE.UINT8[HH]
#define FLXA0FRWRDS41_MD FLXA0FRWRDS41_BASE.BIT._MD
#define FLXA0FRWRDS42 FLXA0FRWRDS42_BASE.UINT32
#define FLXA0FRWRDS42L FLXA0FRWRDS42_BASE.UINT16[L]
#define FLXA0FRWRDS42H FLXA0FRWRDS42_BASE.UINT16[H]
#define FLXA0FRWRDS42LL FLXA0FRWRDS42_BASE.UINT8[LL]
#define FLXA0FRWRDS42LH FLXA0FRWRDS42_BASE.UINT8[LH]
#define FLXA0FRWRDS42HL FLXA0FRWRDS42_BASE.UINT8[HL]
#define FLXA0FRWRDS42HH FLXA0FRWRDS42_BASE.UINT8[HH]
#define FLXA0FRWRDS42_MD FLXA0FRWRDS42_BASE.BIT._MD
#define FLXA0FRWRDS43 FLXA0FRWRDS43_BASE.UINT32
#define FLXA0FRWRDS43L FLXA0FRWRDS43_BASE.UINT16[L]
#define FLXA0FRWRDS43H FLXA0FRWRDS43_BASE.UINT16[H]
#define FLXA0FRWRDS43LL FLXA0FRWRDS43_BASE.UINT8[LL]
#define FLXA0FRWRDS43LH FLXA0FRWRDS43_BASE.UINT8[LH]
#define FLXA0FRWRDS43HL FLXA0FRWRDS43_BASE.UINT8[HL]
#define FLXA0FRWRDS43HH FLXA0FRWRDS43_BASE.UINT8[HH]
#define FLXA0FRWRDS43_MD FLXA0FRWRDS43_BASE.BIT._MD
#define FLXA0FRWRDS44 FLXA0FRWRDS44_BASE.UINT32
#define FLXA0FRWRDS44L FLXA0FRWRDS44_BASE.UINT16[L]
#define FLXA0FRWRDS44H FLXA0FRWRDS44_BASE.UINT16[H]
#define FLXA0FRWRDS44LL FLXA0FRWRDS44_BASE.UINT8[LL]
#define FLXA0FRWRDS44LH FLXA0FRWRDS44_BASE.UINT8[LH]
#define FLXA0FRWRDS44HL FLXA0FRWRDS44_BASE.UINT8[HL]
#define FLXA0FRWRDS44HH FLXA0FRWRDS44_BASE.UINT8[HH]
#define FLXA0FRWRDS44_MD FLXA0FRWRDS44_BASE.BIT._MD
#define FLXA0FRWRDS45 FLXA0FRWRDS45_BASE.UINT32
#define FLXA0FRWRDS45L FLXA0FRWRDS45_BASE.UINT16[L]
#define FLXA0FRWRDS45H FLXA0FRWRDS45_BASE.UINT16[H]
#define FLXA0FRWRDS45LL FLXA0FRWRDS45_BASE.UINT8[LL]
#define FLXA0FRWRDS45LH FLXA0FRWRDS45_BASE.UINT8[LH]
#define FLXA0FRWRDS45HL FLXA0FRWRDS45_BASE.UINT8[HL]
#define FLXA0FRWRDS45HH FLXA0FRWRDS45_BASE.UINT8[HH]
#define FLXA0FRWRDS45_MD FLXA0FRWRDS45_BASE.BIT._MD
#define FLXA0FRWRDS46 FLXA0FRWRDS46_BASE.UINT32
#define FLXA0FRWRDS46L FLXA0FRWRDS46_BASE.UINT16[L]
#define FLXA0FRWRDS46H FLXA0FRWRDS46_BASE.UINT16[H]
#define FLXA0FRWRDS46LL FLXA0FRWRDS46_BASE.UINT8[LL]
#define FLXA0FRWRDS46LH FLXA0FRWRDS46_BASE.UINT8[LH]
#define FLXA0FRWRDS46HL FLXA0FRWRDS46_BASE.UINT8[HL]
#define FLXA0FRWRDS46HH FLXA0FRWRDS46_BASE.UINT8[HH]
#define FLXA0FRWRDS46_MD FLXA0FRWRDS46_BASE.BIT._MD
#define FLXA0FRWRDS47 FLXA0FRWRDS47_BASE.UINT32
#define FLXA0FRWRDS47L FLXA0FRWRDS47_BASE.UINT16[L]
#define FLXA0FRWRDS47H FLXA0FRWRDS47_BASE.UINT16[H]
#define FLXA0FRWRDS47LL FLXA0FRWRDS47_BASE.UINT8[LL]
#define FLXA0FRWRDS47LH FLXA0FRWRDS47_BASE.UINT8[LH]
#define FLXA0FRWRDS47HL FLXA0FRWRDS47_BASE.UINT8[HL]
#define FLXA0FRWRDS47HH FLXA0FRWRDS47_BASE.UINT8[HH]
#define FLXA0FRWRDS47_MD FLXA0FRWRDS47_BASE.BIT._MD
#define FLXA0FRWRDS48 FLXA0FRWRDS48_BASE.UINT32
#define FLXA0FRWRDS48L FLXA0FRWRDS48_BASE.UINT16[L]
#define FLXA0FRWRDS48H FLXA0FRWRDS48_BASE.UINT16[H]
#define FLXA0FRWRDS48LL FLXA0FRWRDS48_BASE.UINT8[LL]
#define FLXA0FRWRDS48LH FLXA0FRWRDS48_BASE.UINT8[LH]
#define FLXA0FRWRDS48HL FLXA0FRWRDS48_BASE.UINT8[HL]
#define FLXA0FRWRDS48HH FLXA0FRWRDS48_BASE.UINT8[HH]
#define FLXA0FRWRDS48_MD FLXA0FRWRDS48_BASE.BIT._MD
#define FLXA0FRWRDS49 FLXA0FRWRDS49_BASE.UINT32
#define FLXA0FRWRDS49L FLXA0FRWRDS49_BASE.UINT16[L]
#define FLXA0FRWRDS49H FLXA0FRWRDS49_BASE.UINT16[H]
#define FLXA0FRWRDS49LL FLXA0FRWRDS49_BASE.UINT8[LL]
#define FLXA0FRWRDS49LH FLXA0FRWRDS49_BASE.UINT8[LH]
#define FLXA0FRWRDS49HL FLXA0FRWRDS49_BASE.UINT8[HL]
#define FLXA0FRWRDS49HH FLXA0FRWRDS49_BASE.UINT8[HH]
#define FLXA0FRWRDS49_MD FLXA0FRWRDS49_BASE.BIT._MD
#define FLXA0FRWRDS50 FLXA0FRWRDS50_BASE.UINT32
#define FLXA0FRWRDS50L FLXA0FRWRDS50_BASE.UINT16[L]
#define FLXA0FRWRDS50H FLXA0FRWRDS50_BASE.UINT16[H]
#define FLXA0FRWRDS50LL FLXA0FRWRDS50_BASE.UINT8[LL]
#define FLXA0FRWRDS50LH FLXA0FRWRDS50_BASE.UINT8[LH]
#define FLXA0FRWRDS50HL FLXA0FRWRDS50_BASE.UINT8[HL]
#define FLXA0FRWRDS50HH FLXA0FRWRDS50_BASE.UINT8[HH]
#define FLXA0FRWRDS50_MD FLXA0FRWRDS50_BASE.BIT._MD
#define FLXA0FRWRDS51 FLXA0FRWRDS51_BASE.UINT32
#define FLXA0FRWRDS51L FLXA0FRWRDS51_BASE.UINT16[L]
#define FLXA0FRWRDS51H FLXA0FRWRDS51_BASE.UINT16[H]
#define FLXA0FRWRDS51LL FLXA0FRWRDS51_BASE.UINT8[LL]
#define FLXA0FRWRDS51LH FLXA0FRWRDS51_BASE.UINT8[LH]
#define FLXA0FRWRDS51HL FLXA0FRWRDS51_BASE.UINT8[HL]
#define FLXA0FRWRDS51HH FLXA0FRWRDS51_BASE.UINT8[HH]
#define FLXA0FRWRDS51_MD FLXA0FRWRDS51_BASE.BIT._MD
#define FLXA0FRWRDS52 FLXA0FRWRDS52_BASE.UINT32
#define FLXA0FRWRDS52L FLXA0FRWRDS52_BASE.UINT16[L]
#define FLXA0FRWRDS52H FLXA0FRWRDS52_BASE.UINT16[H]
#define FLXA0FRWRDS52LL FLXA0FRWRDS52_BASE.UINT8[LL]
#define FLXA0FRWRDS52LH FLXA0FRWRDS52_BASE.UINT8[LH]
#define FLXA0FRWRDS52HL FLXA0FRWRDS52_BASE.UINT8[HL]
#define FLXA0FRWRDS52HH FLXA0FRWRDS52_BASE.UINT8[HH]
#define FLXA0FRWRDS52_MD FLXA0FRWRDS52_BASE.BIT._MD
#define FLXA0FRWRDS53 FLXA0FRWRDS53_BASE.UINT32
#define FLXA0FRWRDS53L FLXA0FRWRDS53_BASE.UINT16[L]
#define FLXA0FRWRDS53H FLXA0FRWRDS53_BASE.UINT16[H]
#define FLXA0FRWRDS53LL FLXA0FRWRDS53_BASE.UINT8[LL]
#define FLXA0FRWRDS53LH FLXA0FRWRDS53_BASE.UINT8[LH]
#define FLXA0FRWRDS53HL FLXA0FRWRDS53_BASE.UINT8[HL]
#define FLXA0FRWRDS53HH FLXA0FRWRDS53_BASE.UINT8[HH]
#define FLXA0FRWRDS53_MD FLXA0FRWRDS53_BASE.BIT._MD
#define FLXA0FRWRDS54 FLXA0FRWRDS54_BASE.UINT32
#define FLXA0FRWRDS54L FLXA0FRWRDS54_BASE.UINT16[L]
#define FLXA0FRWRDS54H FLXA0FRWRDS54_BASE.UINT16[H]
#define FLXA0FRWRDS54LL FLXA0FRWRDS54_BASE.UINT8[LL]
#define FLXA0FRWRDS54LH FLXA0FRWRDS54_BASE.UINT8[LH]
#define FLXA0FRWRDS54HL FLXA0FRWRDS54_BASE.UINT8[HL]
#define FLXA0FRWRDS54HH FLXA0FRWRDS54_BASE.UINT8[HH]
#define FLXA0FRWRDS54_MD FLXA0FRWRDS54_BASE.BIT._MD
#define FLXA0FRWRDS55 FLXA0FRWRDS55_BASE.UINT32
#define FLXA0FRWRDS55L FLXA0FRWRDS55_BASE.UINT16[L]
#define FLXA0FRWRDS55H FLXA0FRWRDS55_BASE.UINT16[H]
#define FLXA0FRWRDS55LL FLXA0FRWRDS55_BASE.UINT8[LL]
#define FLXA0FRWRDS55LH FLXA0FRWRDS55_BASE.UINT8[LH]
#define FLXA0FRWRDS55HL FLXA0FRWRDS55_BASE.UINT8[HL]
#define FLXA0FRWRDS55HH FLXA0FRWRDS55_BASE.UINT8[HH]
#define FLXA0FRWRDS55_MD FLXA0FRWRDS55_BASE.BIT._MD
#define FLXA0FRWRDS56 FLXA0FRWRDS56_BASE.UINT32
#define FLXA0FRWRDS56L FLXA0FRWRDS56_BASE.UINT16[L]
#define FLXA0FRWRDS56H FLXA0FRWRDS56_BASE.UINT16[H]
#define FLXA0FRWRDS56LL FLXA0FRWRDS56_BASE.UINT8[LL]
#define FLXA0FRWRDS56LH FLXA0FRWRDS56_BASE.UINT8[LH]
#define FLXA0FRWRDS56HL FLXA0FRWRDS56_BASE.UINT8[HL]
#define FLXA0FRWRDS56HH FLXA0FRWRDS56_BASE.UINT8[HH]
#define FLXA0FRWRDS56_MD FLXA0FRWRDS56_BASE.BIT._MD
#define FLXA0FRWRDS57 FLXA0FRWRDS57_BASE.UINT32
#define FLXA0FRWRDS57L FLXA0FRWRDS57_BASE.UINT16[L]
#define FLXA0FRWRDS57H FLXA0FRWRDS57_BASE.UINT16[H]
#define FLXA0FRWRDS57LL FLXA0FRWRDS57_BASE.UINT8[LL]
#define FLXA0FRWRDS57LH FLXA0FRWRDS57_BASE.UINT8[LH]
#define FLXA0FRWRDS57HL FLXA0FRWRDS57_BASE.UINT8[HL]
#define FLXA0FRWRDS57HH FLXA0FRWRDS57_BASE.UINT8[HH]
#define FLXA0FRWRDS57_MD FLXA0FRWRDS57_BASE.BIT._MD
#define FLXA0FRWRDS58 FLXA0FRWRDS58_BASE.UINT32
#define FLXA0FRWRDS58L FLXA0FRWRDS58_BASE.UINT16[L]
#define FLXA0FRWRDS58H FLXA0FRWRDS58_BASE.UINT16[H]
#define FLXA0FRWRDS58LL FLXA0FRWRDS58_BASE.UINT8[LL]
#define FLXA0FRWRDS58LH FLXA0FRWRDS58_BASE.UINT8[LH]
#define FLXA0FRWRDS58HL FLXA0FRWRDS58_BASE.UINT8[HL]
#define FLXA0FRWRDS58HH FLXA0FRWRDS58_BASE.UINT8[HH]
#define FLXA0FRWRDS58_MD FLXA0FRWRDS58_BASE.BIT._MD
#define FLXA0FRWRDS59 FLXA0FRWRDS59_BASE.UINT32
#define FLXA0FRWRDS59L FLXA0FRWRDS59_BASE.UINT16[L]
#define FLXA0FRWRDS59H FLXA0FRWRDS59_BASE.UINT16[H]
#define FLXA0FRWRDS59LL FLXA0FRWRDS59_BASE.UINT8[LL]
#define FLXA0FRWRDS59LH FLXA0FRWRDS59_BASE.UINT8[LH]
#define FLXA0FRWRDS59HL FLXA0FRWRDS59_BASE.UINT8[HL]
#define FLXA0FRWRDS59HH FLXA0FRWRDS59_BASE.UINT8[HH]
#define FLXA0FRWRDS59_MD FLXA0FRWRDS59_BASE.BIT._MD
#define FLXA0FRWRDS60 FLXA0FRWRDS60_BASE.UINT32
#define FLXA0FRWRDS60L FLXA0FRWRDS60_BASE.UINT16[L]
#define FLXA0FRWRDS60H FLXA0FRWRDS60_BASE.UINT16[H]
#define FLXA0FRWRDS60LL FLXA0FRWRDS60_BASE.UINT8[LL]
#define FLXA0FRWRDS60LH FLXA0FRWRDS60_BASE.UINT8[LH]
#define FLXA0FRWRDS60HL FLXA0FRWRDS60_BASE.UINT8[HL]
#define FLXA0FRWRDS60HH FLXA0FRWRDS60_BASE.UINT8[HH]
#define FLXA0FRWRDS60_MD FLXA0FRWRDS60_BASE.BIT._MD
#define FLXA0FRWRDS61 FLXA0FRWRDS61_BASE.UINT32
#define FLXA0FRWRDS61L FLXA0FRWRDS61_BASE.UINT16[L]
#define FLXA0FRWRDS61H FLXA0FRWRDS61_BASE.UINT16[H]
#define FLXA0FRWRDS61LL FLXA0FRWRDS61_BASE.UINT8[LL]
#define FLXA0FRWRDS61LH FLXA0FRWRDS61_BASE.UINT8[LH]
#define FLXA0FRWRDS61HL FLXA0FRWRDS61_BASE.UINT8[HL]
#define FLXA0FRWRDS61HH FLXA0FRWRDS61_BASE.UINT8[HH]
#define FLXA0FRWRDS61_MD FLXA0FRWRDS61_BASE.BIT._MD
#define FLXA0FRWRDS62 FLXA0FRWRDS62_BASE.UINT32
#define FLXA0FRWRDS62L FLXA0FRWRDS62_BASE.UINT16[L]
#define FLXA0FRWRDS62H FLXA0FRWRDS62_BASE.UINT16[H]
#define FLXA0FRWRDS62LL FLXA0FRWRDS62_BASE.UINT8[LL]
#define FLXA0FRWRDS62LH FLXA0FRWRDS62_BASE.UINT8[LH]
#define FLXA0FRWRDS62HL FLXA0FRWRDS62_BASE.UINT8[HL]
#define FLXA0FRWRDS62HH FLXA0FRWRDS62_BASE.UINT8[HH]
#define FLXA0FRWRDS62_MD FLXA0FRWRDS62_BASE.BIT._MD
#define FLXA0FRWRDS63 FLXA0FRWRDS63_BASE.UINT32
#define FLXA0FRWRDS63L FLXA0FRWRDS63_BASE.UINT16[L]
#define FLXA0FRWRDS63H FLXA0FRWRDS63_BASE.UINT16[H]
#define FLXA0FRWRDS63LL FLXA0FRWRDS63_BASE.UINT8[LL]
#define FLXA0FRWRDS63LH FLXA0FRWRDS63_BASE.UINT8[LH]
#define FLXA0FRWRDS63HL FLXA0FRWRDS63_BASE.UINT8[HL]
#define FLXA0FRWRDS63HH FLXA0FRWRDS63_BASE.UINT8[HH]
#define FLXA0FRWRDS63_MD FLXA0FRWRDS63_BASE.BIT._MD
#define FLXA0FRWRDS64 FLXA0FRWRDS64_BASE.UINT32
#define FLXA0FRWRDS64L FLXA0FRWRDS64_BASE.UINT16[L]
#define FLXA0FRWRDS64H FLXA0FRWRDS64_BASE.UINT16[H]
#define FLXA0FRWRDS64LL FLXA0FRWRDS64_BASE.UINT8[LL]
#define FLXA0FRWRDS64LH FLXA0FRWRDS64_BASE.UINT8[LH]
#define FLXA0FRWRDS64HL FLXA0FRWRDS64_BASE.UINT8[HL]
#define FLXA0FRWRDS64HH FLXA0FRWRDS64_BASE.UINT8[HH]
#define FLXA0FRWRDS64_MD FLXA0FRWRDS64_BASE.BIT._MD
#define FLXA0FRWRHS1 FLXA0FRWRHS1_BASE.UINT32
#define FLXA0FRWRHS1L FLXA0FRWRHS1_BASE.UINT16[L]
#define FLXA0FRWRHS1H FLXA0FRWRHS1_BASE.UINT16[H]
#define FLXA0FRWRHS1LL FLXA0FRWRHS1_BASE.UINT8[LL]
#define FLXA0FRWRHS1LH FLXA0FRWRHS1_BASE.UINT8[LH]
#define FLXA0FRWRHS1HL FLXA0FRWRHS1_BASE.UINT8[HL]
#define FLXA0FRWRHS1HH FLXA0FRWRHS1_BASE.UINT8[HH]
#define FLXA0FRWRHS1_FID FLXA0FRWRHS1_BASE.BIT._FID
#define FLXA0FRWRHS1_CYC FLXA0FRWRHS1_BASE.BIT._CYC
#define FLXA0FRWRHS1_CH FLXA0FRWRHS1_BASE.BIT._CH
#define FLXA0FRWRHS1_CFG FLXA0FRWRHS1_BASE.BIT._CFG
#define FLXA0FRWRHS1_PPIT FLXA0FRWRHS1_BASE.BIT._PPIT
#define FLXA0FRWRHS1_TXM FLXA0FRWRHS1_BASE.BIT._TXM
#define FLXA0FRWRHS1_MBI FLXA0FRWRHS1_BASE.BIT._MBI
#define FLXA0FRWRHS2 FLXA0FRWRHS2_BASE.UINT32
#define FLXA0FRWRHS2L FLXA0FRWRHS2_BASE.UINT16[L]
#define FLXA0FRWRHS2H FLXA0FRWRHS2_BASE.UINT16[H]
#define FLXA0FRWRHS2LL FLXA0FRWRHS2_BASE.UINT8[LL]
#define FLXA0FRWRHS2LH FLXA0FRWRHS2_BASE.UINT8[LH]
#define FLXA0FRWRHS2HL FLXA0FRWRHS2_BASE.UINT8[HL]
#define FLXA0FRWRHS2HH FLXA0FRWRHS2_BASE.UINT8[HH]
#define FLXA0FRWRHS2_CRC FLXA0FRWRHS2_BASE.BIT._CRC
#define FLXA0FRWRHS2_PLC FLXA0FRWRHS2_BASE.BIT._PLC
#define FLXA0FRWRHS3 FLXA0FRWRHS3_BASE.UINT32
#define FLXA0FRWRHS3L FLXA0FRWRHS3_BASE.UINT16[L]
#define FLXA0FRWRHS3H FLXA0FRWRHS3_BASE.UINT16[H]
#define FLXA0FRWRHS3LL FLXA0FRWRHS3_BASE.UINT8[LL]
#define FLXA0FRWRHS3LH FLXA0FRWRHS3_BASE.UINT8[LH]
#define FLXA0FRWRHS3HL FLXA0FRWRHS3_BASE.UINT8[HL]
#define FLXA0FRWRHS3HH FLXA0FRWRHS3_BASE.UINT8[HH]
#define FLXA0FRWRHS3_DP FLXA0FRWRHS3_BASE.BIT._DP
#define FLXA0FRIBCM FLXA0FRIBCM_BASE.UINT32
#define FLXA0FRIBCML FLXA0FRIBCM_BASE.UINT16[L]
#define FLXA0FRIBCMH FLXA0FRIBCM_BASE.UINT16[H]
#define FLXA0FRIBCMLL FLXA0FRIBCM_BASE.UINT8[LL]
#define FLXA0FRIBCMLH FLXA0FRIBCM_BASE.UINT8[LH]
#define FLXA0FRIBCMHL FLXA0FRIBCM_BASE.UINT8[HL]
#define FLXA0FRIBCMHH FLXA0FRIBCM_BASE.UINT8[HH]
#define FLXA0FRIBCM_LHSH FLXA0FRIBCM_BASE.BIT._LHSH
#define FLXA0FRIBCM_LDSH FLXA0FRIBCM_BASE.BIT._LDSH
#define FLXA0FRIBCM_STXRH FLXA0FRIBCM_BASE.BIT._STXRH
#define FLXA0FRIBCM_LHSS FLXA0FRIBCM_BASE.BIT._LHSS
#define FLXA0FRIBCM_LDSS FLXA0FRIBCM_BASE.BIT._LDSS
#define FLXA0FRIBCM_STXRS FLXA0FRIBCM_BASE.BIT._STXRS
#define FLXA0FRIBCR FLXA0FRIBCR_BASE.UINT32
#define FLXA0FRIBCRL FLXA0FRIBCR_BASE.UINT16[L]
#define FLXA0FRIBCRH FLXA0FRIBCR_BASE.UINT16[H]
#define FLXA0FRIBCRLL FLXA0FRIBCR_BASE.UINT8[LL]
#define FLXA0FRIBCRLH FLXA0FRIBCR_BASE.UINT8[LH]
#define FLXA0FRIBCRHL FLXA0FRIBCR_BASE.UINT8[HL]
#define FLXA0FRIBCRHH FLXA0FRIBCR_BASE.UINT8[HH]
#define FLXA0FRIBCR_IBRH FLXA0FRIBCR_BASE.BIT._IBRH
#define FLXA0FRIBCR_IBSYH FLXA0FRIBCR_BASE.BIT._IBSYH
#define FLXA0FRIBCR_IBRS FLXA0FRIBCR_BASE.BIT._IBRS
#define FLXA0FRIBCR_IBSYS FLXA0FRIBCR_BASE.BIT._IBSYS
#define FLXA0FRRDDS1 FLXA0FRRDDS1_BASE.UINT32
#define FLXA0FRRDDS1L FLXA0FRRDDS1_BASE.UINT16[L]
#define FLXA0FRRDDS1H FLXA0FRRDDS1_BASE.UINT16[H]
#define FLXA0FRRDDS1LL FLXA0FRRDDS1_BASE.UINT8[LL]
#define FLXA0FRRDDS1LH FLXA0FRRDDS1_BASE.UINT8[LH]
#define FLXA0FRRDDS1HL FLXA0FRRDDS1_BASE.UINT8[HL]
#define FLXA0FRRDDS1HH FLXA0FRRDDS1_BASE.UINT8[HH]
#define FLXA0FRRDDS1_MD FLXA0FRRDDS1_BASE.BIT._MD
#define FLXA0FRRDDS2 FLXA0FRRDDS2_BASE.UINT32
#define FLXA0FRRDDS2L FLXA0FRRDDS2_BASE.UINT16[L]
#define FLXA0FRRDDS2H FLXA0FRRDDS2_BASE.UINT16[H]
#define FLXA0FRRDDS2LL FLXA0FRRDDS2_BASE.UINT8[LL]
#define FLXA0FRRDDS2LH FLXA0FRRDDS2_BASE.UINT8[LH]
#define FLXA0FRRDDS2HL FLXA0FRRDDS2_BASE.UINT8[HL]
#define FLXA0FRRDDS2HH FLXA0FRRDDS2_BASE.UINT8[HH]
#define FLXA0FRRDDS2_MD FLXA0FRRDDS2_BASE.BIT._MD
#define FLXA0FRRDDS3 FLXA0FRRDDS3_BASE.UINT32
#define FLXA0FRRDDS3L FLXA0FRRDDS3_BASE.UINT16[L]
#define FLXA0FRRDDS3H FLXA0FRRDDS3_BASE.UINT16[H]
#define FLXA0FRRDDS3LL FLXA0FRRDDS3_BASE.UINT8[LL]
#define FLXA0FRRDDS3LH FLXA0FRRDDS3_BASE.UINT8[LH]
#define FLXA0FRRDDS3HL FLXA0FRRDDS3_BASE.UINT8[HL]
#define FLXA0FRRDDS3HH FLXA0FRRDDS3_BASE.UINT8[HH]
#define FLXA0FRRDDS3_MD FLXA0FRRDDS3_BASE.BIT._MD
#define FLXA0FRRDDS4 FLXA0FRRDDS4_BASE.UINT32
#define FLXA0FRRDDS4L FLXA0FRRDDS4_BASE.UINT16[L]
#define FLXA0FRRDDS4H FLXA0FRRDDS4_BASE.UINT16[H]
#define FLXA0FRRDDS4LL FLXA0FRRDDS4_BASE.UINT8[LL]
#define FLXA0FRRDDS4LH FLXA0FRRDDS4_BASE.UINT8[LH]
#define FLXA0FRRDDS4HL FLXA0FRRDDS4_BASE.UINT8[HL]
#define FLXA0FRRDDS4HH FLXA0FRRDDS4_BASE.UINT8[HH]
#define FLXA0FRRDDS4_MD FLXA0FRRDDS4_BASE.BIT._MD
#define FLXA0FRRDDS5 FLXA0FRRDDS5_BASE.UINT32
#define FLXA0FRRDDS5L FLXA0FRRDDS5_BASE.UINT16[L]
#define FLXA0FRRDDS5H FLXA0FRRDDS5_BASE.UINT16[H]
#define FLXA0FRRDDS5LL FLXA0FRRDDS5_BASE.UINT8[LL]
#define FLXA0FRRDDS5LH FLXA0FRRDDS5_BASE.UINT8[LH]
#define FLXA0FRRDDS5HL FLXA0FRRDDS5_BASE.UINT8[HL]
#define FLXA0FRRDDS5HH FLXA0FRRDDS5_BASE.UINT8[HH]
#define FLXA0FRRDDS5_MD FLXA0FRRDDS5_BASE.BIT._MD
#define FLXA0FRRDDS6 FLXA0FRRDDS6_BASE.UINT32
#define FLXA0FRRDDS6L FLXA0FRRDDS6_BASE.UINT16[L]
#define FLXA0FRRDDS6H FLXA0FRRDDS6_BASE.UINT16[H]
#define FLXA0FRRDDS6LL FLXA0FRRDDS6_BASE.UINT8[LL]
#define FLXA0FRRDDS6LH FLXA0FRRDDS6_BASE.UINT8[LH]
#define FLXA0FRRDDS6HL FLXA0FRRDDS6_BASE.UINT8[HL]
#define FLXA0FRRDDS6HH FLXA0FRRDDS6_BASE.UINT8[HH]
#define FLXA0FRRDDS6_MD FLXA0FRRDDS6_BASE.BIT._MD
#define FLXA0FRRDDS7 FLXA0FRRDDS7_BASE.UINT32
#define FLXA0FRRDDS7L FLXA0FRRDDS7_BASE.UINT16[L]
#define FLXA0FRRDDS7H FLXA0FRRDDS7_BASE.UINT16[H]
#define FLXA0FRRDDS7LL FLXA0FRRDDS7_BASE.UINT8[LL]
#define FLXA0FRRDDS7LH FLXA0FRRDDS7_BASE.UINT8[LH]
#define FLXA0FRRDDS7HL FLXA0FRRDDS7_BASE.UINT8[HL]
#define FLXA0FRRDDS7HH FLXA0FRRDDS7_BASE.UINT8[HH]
#define FLXA0FRRDDS7_MD FLXA0FRRDDS7_BASE.BIT._MD
#define FLXA0FRRDDS8 FLXA0FRRDDS8_BASE.UINT32
#define FLXA0FRRDDS8L FLXA0FRRDDS8_BASE.UINT16[L]
#define FLXA0FRRDDS8H FLXA0FRRDDS8_BASE.UINT16[H]
#define FLXA0FRRDDS8LL FLXA0FRRDDS8_BASE.UINT8[LL]
#define FLXA0FRRDDS8LH FLXA0FRRDDS8_BASE.UINT8[LH]
#define FLXA0FRRDDS8HL FLXA0FRRDDS8_BASE.UINT8[HL]
#define FLXA0FRRDDS8HH FLXA0FRRDDS8_BASE.UINT8[HH]
#define FLXA0FRRDDS8_MD FLXA0FRRDDS8_BASE.BIT._MD
#define FLXA0FRRDDS9 FLXA0FRRDDS9_BASE.UINT32
#define FLXA0FRRDDS9L FLXA0FRRDDS9_BASE.UINT16[L]
#define FLXA0FRRDDS9H FLXA0FRRDDS9_BASE.UINT16[H]
#define FLXA0FRRDDS9LL FLXA0FRRDDS9_BASE.UINT8[LL]
#define FLXA0FRRDDS9LH FLXA0FRRDDS9_BASE.UINT8[LH]
#define FLXA0FRRDDS9HL FLXA0FRRDDS9_BASE.UINT8[HL]
#define FLXA0FRRDDS9HH FLXA0FRRDDS9_BASE.UINT8[HH]
#define FLXA0FRRDDS9_MD FLXA0FRRDDS9_BASE.BIT._MD
#define FLXA0FRRDDS10 FLXA0FRRDDS10_BASE.UINT32
#define FLXA0FRRDDS10L FLXA0FRRDDS10_BASE.UINT16[L]
#define FLXA0FRRDDS10H FLXA0FRRDDS10_BASE.UINT16[H]
#define FLXA0FRRDDS10LL FLXA0FRRDDS10_BASE.UINT8[LL]
#define FLXA0FRRDDS10LH FLXA0FRRDDS10_BASE.UINT8[LH]
#define FLXA0FRRDDS10HL FLXA0FRRDDS10_BASE.UINT8[HL]
#define FLXA0FRRDDS10HH FLXA0FRRDDS10_BASE.UINT8[HH]
#define FLXA0FRRDDS10_MD FLXA0FRRDDS10_BASE.BIT._MD
#define FLXA0FRRDDS11 FLXA0FRRDDS11_BASE.UINT32
#define FLXA0FRRDDS11L FLXA0FRRDDS11_BASE.UINT16[L]
#define FLXA0FRRDDS11H FLXA0FRRDDS11_BASE.UINT16[H]
#define FLXA0FRRDDS11LL FLXA0FRRDDS11_BASE.UINT8[LL]
#define FLXA0FRRDDS11LH FLXA0FRRDDS11_BASE.UINT8[LH]
#define FLXA0FRRDDS11HL FLXA0FRRDDS11_BASE.UINT8[HL]
#define FLXA0FRRDDS11HH FLXA0FRRDDS11_BASE.UINT8[HH]
#define FLXA0FRRDDS11_MD FLXA0FRRDDS11_BASE.BIT._MD
#define FLXA0FRRDDS12 FLXA0FRRDDS12_BASE.UINT32
#define FLXA0FRRDDS12L FLXA0FRRDDS12_BASE.UINT16[L]
#define FLXA0FRRDDS12H FLXA0FRRDDS12_BASE.UINT16[H]
#define FLXA0FRRDDS12LL FLXA0FRRDDS12_BASE.UINT8[LL]
#define FLXA0FRRDDS12LH FLXA0FRRDDS12_BASE.UINT8[LH]
#define FLXA0FRRDDS12HL FLXA0FRRDDS12_BASE.UINT8[HL]
#define FLXA0FRRDDS12HH FLXA0FRRDDS12_BASE.UINT8[HH]
#define FLXA0FRRDDS12_MD FLXA0FRRDDS12_BASE.BIT._MD
#define FLXA0FRRDDS13 FLXA0FRRDDS13_BASE.UINT32
#define FLXA0FRRDDS13L FLXA0FRRDDS13_BASE.UINT16[L]
#define FLXA0FRRDDS13H FLXA0FRRDDS13_BASE.UINT16[H]
#define FLXA0FRRDDS13LL FLXA0FRRDDS13_BASE.UINT8[LL]
#define FLXA0FRRDDS13LH FLXA0FRRDDS13_BASE.UINT8[LH]
#define FLXA0FRRDDS13HL FLXA0FRRDDS13_BASE.UINT8[HL]
#define FLXA0FRRDDS13HH FLXA0FRRDDS13_BASE.UINT8[HH]
#define FLXA0FRRDDS13_MD FLXA0FRRDDS13_BASE.BIT._MD
#define FLXA0FRRDDS14 FLXA0FRRDDS14_BASE.UINT32
#define FLXA0FRRDDS14L FLXA0FRRDDS14_BASE.UINT16[L]
#define FLXA0FRRDDS14H FLXA0FRRDDS14_BASE.UINT16[H]
#define FLXA0FRRDDS14LL FLXA0FRRDDS14_BASE.UINT8[LL]
#define FLXA0FRRDDS14LH FLXA0FRRDDS14_BASE.UINT8[LH]
#define FLXA0FRRDDS14HL FLXA0FRRDDS14_BASE.UINT8[HL]
#define FLXA0FRRDDS14HH FLXA0FRRDDS14_BASE.UINT8[HH]
#define FLXA0FRRDDS14_MD FLXA0FRRDDS14_BASE.BIT._MD
#define FLXA0FRRDDS15 FLXA0FRRDDS15_BASE.UINT32
#define FLXA0FRRDDS15L FLXA0FRRDDS15_BASE.UINT16[L]
#define FLXA0FRRDDS15H FLXA0FRRDDS15_BASE.UINT16[H]
#define FLXA0FRRDDS15LL FLXA0FRRDDS15_BASE.UINT8[LL]
#define FLXA0FRRDDS15LH FLXA0FRRDDS15_BASE.UINT8[LH]
#define FLXA0FRRDDS15HL FLXA0FRRDDS15_BASE.UINT8[HL]
#define FLXA0FRRDDS15HH FLXA0FRRDDS15_BASE.UINT8[HH]
#define FLXA0FRRDDS15_MD FLXA0FRRDDS15_BASE.BIT._MD
#define FLXA0FRRDDS16 FLXA0FRRDDS16_BASE.UINT32
#define FLXA0FRRDDS16L FLXA0FRRDDS16_BASE.UINT16[L]
#define FLXA0FRRDDS16H FLXA0FRRDDS16_BASE.UINT16[H]
#define FLXA0FRRDDS16LL FLXA0FRRDDS16_BASE.UINT8[LL]
#define FLXA0FRRDDS16LH FLXA0FRRDDS16_BASE.UINT8[LH]
#define FLXA0FRRDDS16HL FLXA0FRRDDS16_BASE.UINT8[HL]
#define FLXA0FRRDDS16HH FLXA0FRRDDS16_BASE.UINT8[HH]
#define FLXA0FRRDDS16_MD FLXA0FRRDDS16_BASE.BIT._MD
#define FLXA0FRRDDS17 FLXA0FRRDDS17_BASE.UINT32
#define FLXA0FRRDDS17L FLXA0FRRDDS17_BASE.UINT16[L]
#define FLXA0FRRDDS17H FLXA0FRRDDS17_BASE.UINT16[H]
#define FLXA0FRRDDS17LL FLXA0FRRDDS17_BASE.UINT8[LL]
#define FLXA0FRRDDS17LH FLXA0FRRDDS17_BASE.UINT8[LH]
#define FLXA0FRRDDS17HL FLXA0FRRDDS17_BASE.UINT8[HL]
#define FLXA0FRRDDS17HH FLXA0FRRDDS17_BASE.UINT8[HH]
#define FLXA0FRRDDS17_MD FLXA0FRRDDS17_BASE.BIT._MD
#define FLXA0FRRDDS18 FLXA0FRRDDS18_BASE.UINT32
#define FLXA0FRRDDS18L FLXA0FRRDDS18_BASE.UINT16[L]
#define FLXA0FRRDDS18H FLXA0FRRDDS18_BASE.UINT16[H]
#define FLXA0FRRDDS18LL FLXA0FRRDDS18_BASE.UINT8[LL]
#define FLXA0FRRDDS18LH FLXA0FRRDDS18_BASE.UINT8[LH]
#define FLXA0FRRDDS18HL FLXA0FRRDDS18_BASE.UINT8[HL]
#define FLXA0FRRDDS18HH FLXA0FRRDDS18_BASE.UINT8[HH]
#define FLXA0FRRDDS18_MD FLXA0FRRDDS18_BASE.BIT._MD
#define FLXA0FRRDDS19 FLXA0FRRDDS19_BASE.UINT32
#define FLXA0FRRDDS19L FLXA0FRRDDS19_BASE.UINT16[L]
#define FLXA0FRRDDS19H FLXA0FRRDDS19_BASE.UINT16[H]
#define FLXA0FRRDDS19LL FLXA0FRRDDS19_BASE.UINT8[LL]
#define FLXA0FRRDDS19LH FLXA0FRRDDS19_BASE.UINT8[LH]
#define FLXA0FRRDDS19HL FLXA0FRRDDS19_BASE.UINT8[HL]
#define FLXA0FRRDDS19HH FLXA0FRRDDS19_BASE.UINT8[HH]
#define FLXA0FRRDDS19_MD FLXA0FRRDDS19_BASE.BIT._MD
#define FLXA0FRRDDS20 FLXA0FRRDDS20_BASE.UINT32
#define FLXA0FRRDDS20L FLXA0FRRDDS20_BASE.UINT16[L]
#define FLXA0FRRDDS20H FLXA0FRRDDS20_BASE.UINT16[H]
#define FLXA0FRRDDS20LL FLXA0FRRDDS20_BASE.UINT8[LL]
#define FLXA0FRRDDS20LH FLXA0FRRDDS20_BASE.UINT8[LH]
#define FLXA0FRRDDS20HL FLXA0FRRDDS20_BASE.UINT8[HL]
#define FLXA0FRRDDS20HH FLXA0FRRDDS20_BASE.UINT8[HH]
#define FLXA0FRRDDS20_MD FLXA0FRRDDS20_BASE.BIT._MD
#define FLXA0FRRDDS21 FLXA0FRRDDS21_BASE.UINT32
#define FLXA0FRRDDS21L FLXA0FRRDDS21_BASE.UINT16[L]
#define FLXA0FRRDDS21H FLXA0FRRDDS21_BASE.UINT16[H]
#define FLXA0FRRDDS21LL FLXA0FRRDDS21_BASE.UINT8[LL]
#define FLXA0FRRDDS21LH FLXA0FRRDDS21_BASE.UINT8[LH]
#define FLXA0FRRDDS21HL FLXA0FRRDDS21_BASE.UINT8[HL]
#define FLXA0FRRDDS21HH FLXA0FRRDDS21_BASE.UINT8[HH]
#define FLXA0FRRDDS21_MD FLXA0FRRDDS21_BASE.BIT._MD
#define FLXA0FRRDDS22 FLXA0FRRDDS22_BASE.UINT32
#define FLXA0FRRDDS22L FLXA0FRRDDS22_BASE.UINT16[L]
#define FLXA0FRRDDS22H FLXA0FRRDDS22_BASE.UINT16[H]
#define FLXA0FRRDDS22LL FLXA0FRRDDS22_BASE.UINT8[LL]
#define FLXA0FRRDDS22LH FLXA0FRRDDS22_BASE.UINT8[LH]
#define FLXA0FRRDDS22HL FLXA0FRRDDS22_BASE.UINT8[HL]
#define FLXA0FRRDDS22HH FLXA0FRRDDS22_BASE.UINT8[HH]
#define FLXA0FRRDDS22_MD FLXA0FRRDDS22_BASE.BIT._MD
#define FLXA0FRRDDS23 FLXA0FRRDDS23_BASE.UINT32
#define FLXA0FRRDDS23L FLXA0FRRDDS23_BASE.UINT16[L]
#define FLXA0FRRDDS23H FLXA0FRRDDS23_BASE.UINT16[H]
#define FLXA0FRRDDS23LL FLXA0FRRDDS23_BASE.UINT8[LL]
#define FLXA0FRRDDS23LH FLXA0FRRDDS23_BASE.UINT8[LH]
#define FLXA0FRRDDS23HL FLXA0FRRDDS23_BASE.UINT8[HL]
#define FLXA0FRRDDS23HH FLXA0FRRDDS23_BASE.UINT8[HH]
#define FLXA0FRRDDS23_MD FLXA0FRRDDS23_BASE.BIT._MD
#define FLXA0FRRDDS24 FLXA0FRRDDS24_BASE.UINT32
#define FLXA0FRRDDS24L FLXA0FRRDDS24_BASE.UINT16[L]
#define FLXA0FRRDDS24H FLXA0FRRDDS24_BASE.UINT16[H]
#define FLXA0FRRDDS24LL FLXA0FRRDDS24_BASE.UINT8[LL]
#define FLXA0FRRDDS24LH FLXA0FRRDDS24_BASE.UINT8[LH]
#define FLXA0FRRDDS24HL FLXA0FRRDDS24_BASE.UINT8[HL]
#define FLXA0FRRDDS24HH FLXA0FRRDDS24_BASE.UINT8[HH]
#define FLXA0FRRDDS24_MD FLXA0FRRDDS24_BASE.BIT._MD
#define FLXA0FRRDDS25 FLXA0FRRDDS25_BASE.UINT32
#define FLXA0FRRDDS25L FLXA0FRRDDS25_BASE.UINT16[L]
#define FLXA0FRRDDS25H FLXA0FRRDDS25_BASE.UINT16[H]
#define FLXA0FRRDDS25LL FLXA0FRRDDS25_BASE.UINT8[LL]
#define FLXA0FRRDDS25LH FLXA0FRRDDS25_BASE.UINT8[LH]
#define FLXA0FRRDDS25HL FLXA0FRRDDS25_BASE.UINT8[HL]
#define FLXA0FRRDDS25HH FLXA0FRRDDS25_BASE.UINT8[HH]
#define FLXA0FRRDDS25_MD FLXA0FRRDDS25_BASE.BIT._MD
#define FLXA0FRRDDS26 FLXA0FRRDDS26_BASE.UINT32
#define FLXA0FRRDDS26L FLXA0FRRDDS26_BASE.UINT16[L]
#define FLXA0FRRDDS26H FLXA0FRRDDS26_BASE.UINT16[H]
#define FLXA0FRRDDS26LL FLXA0FRRDDS26_BASE.UINT8[LL]
#define FLXA0FRRDDS26LH FLXA0FRRDDS26_BASE.UINT8[LH]
#define FLXA0FRRDDS26HL FLXA0FRRDDS26_BASE.UINT8[HL]
#define FLXA0FRRDDS26HH FLXA0FRRDDS26_BASE.UINT8[HH]
#define FLXA0FRRDDS26_MD FLXA0FRRDDS26_BASE.BIT._MD
#define FLXA0FRRDDS27 FLXA0FRRDDS27_BASE.UINT32
#define FLXA0FRRDDS27L FLXA0FRRDDS27_BASE.UINT16[L]
#define FLXA0FRRDDS27H FLXA0FRRDDS27_BASE.UINT16[H]
#define FLXA0FRRDDS27LL FLXA0FRRDDS27_BASE.UINT8[LL]
#define FLXA0FRRDDS27LH FLXA0FRRDDS27_BASE.UINT8[LH]
#define FLXA0FRRDDS27HL FLXA0FRRDDS27_BASE.UINT8[HL]
#define FLXA0FRRDDS27HH FLXA0FRRDDS27_BASE.UINT8[HH]
#define FLXA0FRRDDS27_MD FLXA0FRRDDS27_BASE.BIT._MD
#define FLXA0FRRDDS28 FLXA0FRRDDS28_BASE.UINT32
#define FLXA0FRRDDS28L FLXA0FRRDDS28_BASE.UINT16[L]
#define FLXA0FRRDDS28H FLXA0FRRDDS28_BASE.UINT16[H]
#define FLXA0FRRDDS28LL FLXA0FRRDDS28_BASE.UINT8[LL]
#define FLXA0FRRDDS28LH FLXA0FRRDDS28_BASE.UINT8[LH]
#define FLXA0FRRDDS28HL FLXA0FRRDDS28_BASE.UINT8[HL]
#define FLXA0FRRDDS28HH FLXA0FRRDDS28_BASE.UINT8[HH]
#define FLXA0FRRDDS28_MD FLXA0FRRDDS28_BASE.BIT._MD
#define FLXA0FRRDDS29 FLXA0FRRDDS29_BASE.UINT32
#define FLXA0FRRDDS29L FLXA0FRRDDS29_BASE.UINT16[L]
#define FLXA0FRRDDS29H FLXA0FRRDDS29_BASE.UINT16[H]
#define FLXA0FRRDDS29LL FLXA0FRRDDS29_BASE.UINT8[LL]
#define FLXA0FRRDDS29LH FLXA0FRRDDS29_BASE.UINT8[LH]
#define FLXA0FRRDDS29HL FLXA0FRRDDS29_BASE.UINT8[HL]
#define FLXA0FRRDDS29HH FLXA0FRRDDS29_BASE.UINT8[HH]
#define FLXA0FRRDDS29_MD FLXA0FRRDDS29_BASE.BIT._MD
#define FLXA0FRRDDS30 FLXA0FRRDDS30_BASE.UINT32
#define FLXA0FRRDDS30L FLXA0FRRDDS30_BASE.UINT16[L]
#define FLXA0FRRDDS30H FLXA0FRRDDS30_BASE.UINT16[H]
#define FLXA0FRRDDS30LL FLXA0FRRDDS30_BASE.UINT8[LL]
#define FLXA0FRRDDS30LH FLXA0FRRDDS30_BASE.UINT8[LH]
#define FLXA0FRRDDS30HL FLXA0FRRDDS30_BASE.UINT8[HL]
#define FLXA0FRRDDS30HH FLXA0FRRDDS30_BASE.UINT8[HH]
#define FLXA0FRRDDS30_MD FLXA0FRRDDS30_BASE.BIT._MD
#define FLXA0FRRDDS31 FLXA0FRRDDS31_BASE.UINT32
#define FLXA0FRRDDS31L FLXA0FRRDDS31_BASE.UINT16[L]
#define FLXA0FRRDDS31H FLXA0FRRDDS31_BASE.UINT16[H]
#define FLXA0FRRDDS31LL FLXA0FRRDDS31_BASE.UINT8[LL]
#define FLXA0FRRDDS31LH FLXA0FRRDDS31_BASE.UINT8[LH]
#define FLXA0FRRDDS31HL FLXA0FRRDDS31_BASE.UINT8[HL]
#define FLXA0FRRDDS31HH FLXA0FRRDDS31_BASE.UINT8[HH]
#define FLXA0FRRDDS31_MD FLXA0FRRDDS31_BASE.BIT._MD
#define FLXA0FRRDDS32 FLXA0FRRDDS32_BASE.UINT32
#define FLXA0FRRDDS32L FLXA0FRRDDS32_BASE.UINT16[L]
#define FLXA0FRRDDS32H FLXA0FRRDDS32_BASE.UINT16[H]
#define FLXA0FRRDDS32LL FLXA0FRRDDS32_BASE.UINT8[LL]
#define FLXA0FRRDDS32LH FLXA0FRRDDS32_BASE.UINT8[LH]
#define FLXA0FRRDDS32HL FLXA0FRRDDS32_BASE.UINT8[HL]
#define FLXA0FRRDDS32HH FLXA0FRRDDS32_BASE.UINT8[HH]
#define FLXA0FRRDDS32_MD FLXA0FRRDDS32_BASE.BIT._MD
#define FLXA0FRRDDS33 FLXA0FRRDDS33_BASE.UINT32
#define FLXA0FRRDDS33L FLXA0FRRDDS33_BASE.UINT16[L]
#define FLXA0FRRDDS33H FLXA0FRRDDS33_BASE.UINT16[H]
#define FLXA0FRRDDS33LL FLXA0FRRDDS33_BASE.UINT8[LL]
#define FLXA0FRRDDS33LH FLXA0FRRDDS33_BASE.UINT8[LH]
#define FLXA0FRRDDS33HL FLXA0FRRDDS33_BASE.UINT8[HL]
#define FLXA0FRRDDS33HH FLXA0FRRDDS33_BASE.UINT8[HH]
#define FLXA0FRRDDS33_MD FLXA0FRRDDS33_BASE.BIT._MD
#define FLXA0FRRDDS34 FLXA0FRRDDS34_BASE.UINT32
#define FLXA0FRRDDS34L FLXA0FRRDDS34_BASE.UINT16[L]
#define FLXA0FRRDDS34H FLXA0FRRDDS34_BASE.UINT16[H]
#define FLXA0FRRDDS34LL FLXA0FRRDDS34_BASE.UINT8[LL]
#define FLXA0FRRDDS34LH FLXA0FRRDDS34_BASE.UINT8[LH]
#define FLXA0FRRDDS34HL FLXA0FRRDDS34_BASE.UINT8[HL]
#define FLXA0FRRDDS34HH FLXA0FRRDDS34_BASE.UINT8[HH]
#define FLXA0FRRDDS34_MD FLXA0FRRDDS34_BASE.BIT._MD
#define FLXA0FRRDDS35 FLXA0FRRDDS35_BASE.UINT32
#define FLXA0FRRDDS35L FLXA0FRRDDS35_BASE.UINT16[L]
#define FLXA0FRRDDS35H FLXA0FRRDDS35_BASE.UINT16[H]
#define FLXA0FRRDDS35LL FLXA0FRRDDS35_BASE.UINT8[LL]
#define FLXA0FRRDDS35LH FLXA0FRRDDS35_BASE.UINT8[LH]
#define FLXA0FRRDDS35HL FLXA0FRRDDS35_BASE.UINT8[HL]
#define FLXA0FRRDDS35HH FLXA0FRRDDS35_BASE.UINT8[HH]
#define FLXA0FRRDDS35_MD FLXA0FRRDDS35_BASE.BIT._MD
#define FLXA0FRRDDS36 FLXA0FRRDDS36_BASE.UINT32
#define FLXA0FRRDDS36L FLXA0FRRDDS36_BASE.UINT16[L]
#define FLXA0FRRDDS36H FLXA0FRRDDS36_BASE.UINT16[H]
#define FLXA0FRRDDS36LL FLXA0FRRDDS36_BASE.UINT8[LL]
#define FLXA0FRRDDS36LH FLXA0FRRDDS36_BASE.UINT8[LH]
#define FLXA0FRRDDS36HL FLXA0FRRDDS36_BASE.UINT8[HL]
#define FLXA0FRRDDS36HH FLXA0FRRDDS36_BASE.UINT8[HH]
#define FLXA0FRRDDS36_MD FLXA0FRRDDS36_BASE.BIT._MD
#define FLXA0FRRDDS37 FLXA0FRRDDS37_BASE.UINT32
#define FLXA0FRRDDS37L FLXA0FRRDDS37_BASE.UINT16[L]
#define FLXA0FRRDDS37H FLXA0FRRDDS37_BASE.UINT16[H]
#define FLXA0FRRDDS37LL FLXA0FRRDDS37_BASE.UINT8[LL]
#define FLXA0FRRDDS37LH FLXA0FRRDDS37_BASE.UINT8[LH]
#define FLXA0FRRDDS37HL FLXA0FRRDDS37_BASE.UINT8[HL]
#define FLXA0FRRDDS37HH FLXA0FRRDDS37_BASE.UINT8[HH]
#define FLXA0FRRDDS37_MD FLXA0FRRDDS37_BASE.BIT._MD
#define FLXA0FRRDDS38 FLXA0FRRDDS38_BASE.UINT32
#define FLXA0FRRDDS38L FLXA0FRRDDS38_BASE.UINT16[L]
#define FLXA0FRRDDS38H FLXA0FRRDDS38_BASE.UINT16[H]
#define FLXA0FRRDDS38LL FLXA0FRRDDS38_BASE.UINT8[LL]
#define FLXA0FRRDDS38LH FLXA0FRRDDS38_BASE.UINT8[LH]
#define FLXA0FRRDDS38HL FLXA0FRRDDS38_BASE.UINT8[HL]
#define FLXA0FRRDDS38HH FLXA0FRRDDS38_BASE.UINT8[HH]
#define FLXA0FRRDDS38_MD FLXA0FRRDDS38_BASE.BIT._MD
#define FLXA0FRRDDS39 FLXA0FRRDDS39_BASE.UINT32
#define FLXA0FRRDDS39L FLXA0FRRDDS39_BASE.UINT16[L]
#define FLXA0FRRDDS39H FLXA0FRRDDS39_BASE.UINT16[H]
#define FLXA0FRRDDS39LL FLXA0FRRDDS39_BASE.UINT8[LL]
#define FLXA0FRRDDS39LH FLXA0FRRDDS39_BASE.UINT8[LH]
#define FLXA0FRRDDS39HL FLXA0FRRDDS39_BASE.UINT8[HL]
#define FLXA0FRRDDS39HH FLXA0FRRDDS39_BASE.UINT8[HH]
#define FLXA0FRRDDS39_MD FLXA0FRRDDS39_BASE.BIT._MD
#define FLXA0FRRDDS40 FLXA0FRRDDS40_BASE.UINT32
#define FLXA0FRRDDS40L FLXA0FRRDDS40_BASE.UINT16[L]
#define FLXA0FRRDDS40H FLXA0FRRDDS40_BASE.UINT16[H]
#define FLXA0FRRDDS40LL FLXA0FRRDDS40_BASE.UINT8[LL]
#define FLXA0FRRDDS40LH FLXA0FRRDDS40_BASE.UINT8[LH]
#define FLXA0FRRDDS40HL FLXA0FRRDDS40_BASE.UINT8[HL]
#define FLXA0FRRDDS40HH FLXA0FRRDDS40_BASE.UINT8[HH]
#define FLXA0FRRDDS40_MD FLXA0FRRDDS40_BASE.BIT._MD
#define FLXA0FRRDDS41 FLXA0FRRDDS41_BASE.UINT32
#define FLXA0FRRDDS41L FLXA0FRRDDS41_BASE.UINT16[L]
#define FLXA0FRRDDS41H FLXA0FRRDDS41_BASE.UINT16[H]
#define FLXA0FRRDDS41LL FLXA0FRRDDS41_BASE.UINT8[LL]
#define FLXA0FRRDDS41LH FLXA0FRRDDS41_BASE.UINT8[LH]
#define FLXA0FRRDDS41HL FLXA0FRRDDS41_BASE.UINT8[HL]
#define FLXA0FRRDDS41HH FLXA0FRRDDS41_BASE.UINT8[HH]
#define FLXA0FRRDDS41_MD FLXA0FRRDDS41_BASE.BIT._MD
#define FLXA0FRRDDS42 FLXA0FRRDDS42_BASE.UINT32
#define FLXA0FRRDDS42L FLXA0FRRDDS42_BASE.UINT16[L]
#define FLXA0FRRDDS42H FLXA0FRRDDS42_BASE.UINT16[H]
#define FLXA0FRRDDS42LL FLXA0FRRDDS42_BASE.UINT8[LL]
#define FLXA0FRRDDS42LH FLXA0FRRDDS42_BASE.UINT8[LH]
#define FLXA0FRRDDS42HL FLXA0FRRDDS42_BASE.UINT8[HL]
#define FLXA0FRRDDS42HH FLXA0FRRDDS42_BASE.UINT8[HH]
#define FLXA0FRRDDS42_MD FLXA0FRRDDS42_BASE.BIT._MD
#define FLXA0FRRDDS43 FLXA0FRRDDS43_BASE.UINT32
#define FLXA0FRRDDS43L FLXA0FRRDDS43_BASE.UINT16[L]
#define FLXA0FRRDDS43H FLXA0FRRDDS43_BASE.UINT16[H]
#define FLXA0FRRDDS43LL FLXA0FRRDDS43_BASE.UINT8[LL]
#define FLXA0FRRDDS43LH FLXA0FRRDDS43_BASE.UINT8[LH]
#define FLXA0FRRDDS43HL FLXA0FRRDDS43_BASE.UINT8[HL]
#define FLXA0FRRDDS43HH FLXA0FRRDDS43_BASE.UINT8[HH]
#define FLXA0FRRDDS43_MD FLXA0FRRDDS43_BASE.BIT._MD
#define FLXA0FRRDDS44 FLXA0FRRDDS44_BASE.UINT32
#define FLXA0FRRDDS44L FLXA0FRRDDS44_BASE.UINT16[L]
#define FLXA0FRRDDS44H FLXA0FRRDDS44_BASE.UINT16[H]
#define FLXA0FRRDDS44LL FLXA0FRRDDS44_BASE.UINT8[LL]
#define FLXA0FRRDDS44LH FLXA0FRRDDS44_BASE.UINT8[LH]
#define FLXA0FRRDDS44HL FLXA0FRRDDS44_BASE.UINT8[HL]
#define FLXA0FRRDDS44HH FLXA0FRRDDS44_BASE.UINT8[HH]
#define FLXA0FRRDDS44_MD FLXA0FRRDDS44_BASE.BIT._MD
#define FLXA0FRRDDS45 FLXA0FRRDDS45_BASE.UINT32
#define FLXA0FRRDDS45L FLXA0FRRDDS45_BASE.UINT16[L]
#define FLXA0FRRDDS45H FLXA0FRRDDS45_BASE.UINT16[H]
#define FLXA0FRRDDS45LL FLXA0FRRDDS45_BASE.UINT8[LL]
#define FLXA0FRRDDS45LH FLXA0FRRDDS45_BASE.UINT8[LH]
#define FLXA0FRRDDS45HL FLXA0FRRDDS45_BASE.UINT8[HL]
#define FLXA0FRRDDS45HH FLXA0FRRDDS45_BASE.UINT8[HH]
#define FLXA0FRRDDS45_MD FLXA0FRRDDS45_BASE.BIT._MD
#define FLXA0FRRDDS46 FLXA0FRRDDS46_BASE.UINT32
#define FLXA0FRRDDS46L FLXA0FRRDDS46_BASE.UINT16[L]
#define FLXA0FRRDDS46H FLXA0FRRDDS46_BASE.UINT16[H]
#define FLXA0FRRDDS46LL FLXA0FRRDDS46_BASE.UINT8[LL]
#define FLXA0FRRDDS46LH FLXA0FRRDDS46_BASE.UINT8[LH]
#define FLXA0FRRDDS46HL FLXA0FRRDDS46_BASE.UINT8[HL]
#define FLXA0FRRDDS46HH FLXA0FRRDDS46_BASE.UINT8[HH]
#define FLXA0FRRDDS46_MD FLXA0FRRDDS46_BASE.BIT._MD
#define FLXA0FRRDDS47 FLXA0FRRDDS47_BASE.UINT32
#define FLXA0FRRDDS47L FLXA0FRRDDS47_BASE.UINT16[L]
#define FLXA0FRRDDS47H FLXA0FRRDDS47_BASE.UINT16[H]
#define FLXA0FRRDDS47LL FLXA0FRRDDS47_BASE.UINT8[LL]
#define FLXA0FRRDDS47LH FLXA0FRRDDS47_BASE.UINT8[LH]
#define FLXA0FRRDDS47HL FLXA0FRRDDS47_BASE.UINT8[HL]
#define FLXA0FRRDDS47HH FLXA0FRRDDS47_BASE.UINT8[HH]
#define FLXA0FRRDDS47_MD FLXA0FRRDDS47_BASE.BIT._MD
#define FLXA0FRRDDS48 FLXA0FRRDDS48_BASE.UINT32
#define FLXA0FRRDDS48L FLXA0FRRDDS48_BASE.UINT16[L]
#define FLXA0FRRDDS48H FLXA0FRRDDS48_BASE.UINT16[H]
#define FLXA0FRRDDS48LL FLXA0FRRDDS48_BASE.UINT8[LL]
#define FLXA0FRRDDS48LH FLXA0FRRDDS48_BASE.UINT8[LH]
#define FLXA0FRRDDS48HL FLXA0FRRDDS48_BASE.UINT8[HL]
#define FLXA0FRRDDS48HH FLXA0FRRDDS48_BASE.UINT8[HH]
#define FLXA0FRRDDS48_MD FLXA0FRRDDS48_BASE.BIT._MD
#define FLXA0FRRDDS49 FLXA0FRRDDS49_BASE.UINT32
#define FLXA0FRRDDS49L FLXA0FRRDDS49_BASE.UINT16[L]
#define FLXA0FRRDDS49H FLXA0FRRDDS49_BASE.UINT16[H]
#define FLXA0FRRDDS49LL FLXA0FRRDDS49_BASE.UINT8[LL]
#define FLXA0FRRDDS49LH FLXA0FRRDDS49_BASE.UINT8[LH]
#define FLXA0FRRDDS49HL FLXA0FRRDDS49_BASE.UINT8[HL]
#define FLXA0FRRDDS49HH FLXA0FRRDDS49_BASE.UINT8[HH]
#define FLXA0FRRDDS49_MD FLXA0FRRDDS49_BASE.BIT._MD
#define FLXA0FRRDDS50 FLXA0FRRDDS50_BASE.UINT32
#define FLXA0FRRDDS50L FLXA0FRRDDS50_BASE.UINT16[L]
#define FLXA0FRRDDS50H FLXA0FRRDDS50_BASE.UINT16[H]
#define FLXA0FRRDDS50LL FLXA0FRRDDS50_BASE.UINT8[LL]
#define FLXA0FRRDDS50LH FLXA0FRRDDS50_BASE.UINT8[LH]
#define FLXA0FRRDDS50HL FLXA0FRRDDS50_BASE.UINT8[HL]
#define FLXA0FRRDDS50HH FLXA0FRRDDS50_BASE.UINT8[HH]
#define FLXA0FRRDDS50_MD FLXA0FRRDDS50_BASE.BIT._MD
#define FLXA0FRRDDS51 FLXA0FRRDDS51_BASE.UINT32
#define FLXA0FRRDDS51L FLXA0FRRDDS51_BASE.UINT16[L]
#define FLXA0FRRDDS51H FLXA0FRRDDS51_BASE.UINT16[H]
#define FLXA0FRRDDS51LL FLXA0FRRDDS51_BASE.UINT8[LL]
#define FLXA0FRRDDS51LH FLXA0FRRDDS51_BASE.UINT8[LH]
#define FLXA0FRRDDS51HL FLXA0FRRDDS51_BASE.UINT8[HL]
#define FLXA0FRRDDS51HH FLXA0FRRDDS51_BASE.UINT8[HH]
#define FLXA0FRRDDS51_MD FLXA0FRRDDS51_BASE.BIT._MD
#define FLXA0FRRDDS52 FLXA0FRRDDS52_BASE.UINT32
#define FLXA0FRRDDS52L FLXA0FRRDDS52_BASE.UINT16[L]
#define FLXA0FRRDDS52H FLXA0FRRDDS52_BASE.UINT16[H]
#define FLXA0FRRDDS52LL FLXA0FRRDDS52_BASE.UINT8[LL]
#define FLXA0FRRDDS52LH FLXA0FRRDDS52_BASE.UINT8[LH]
#define FLXA0FRRDDS52HL FLXA0FRRDDS52_BASE.UINT8[HL]
#define FLXA0FRRDDS52HH FLXA0FRRDDS52_BASE.UINT8[HH]
#define FLXA0FRRDDS52_MD FLXA0FRRDDS52_BASE.BIT._MD
#define FLXA0FRRDDS53 FLXA0FRRDDS53_BASE.UINT32
#define FLXA0FRRDDS53L FLXA0FRRDDS53_BASE.UINT16[L]
#define FLXA0FRRDDS53H FLXA0FRRDDS53_BASE.UINT16[H]
#define FLXA0FRRDDS53LL FLXA0FRRDDS53_BASE.UINT8[LL]
#define FLXA0FRRDDS53LH FLXA0FRRDDS53_BASE.UINT8[LH]
#define FLXA0FRRDDS53HL FLXA0FRRDDS53_BASE.UINT8[HL]
#define FLXA0FRRDDS53HH FLXA0FRRDDS53_BASE.UINT8[HH]
#define FLXA0FRRDDS53_MD FLXA0FRRDDS53_BASE.BIT._MD
#define FLXA0FRRDDS54 FLXA0FRRDDS54_BASE.UINT32
#define FLXA0FRRDDS54L FLXA0FRRDDS54_BASE.UINT16[L]
#define FLXA0FRRDDS54H FLXA0FRRDDS54_BASE.UINT16[H]
#define FLXA0FRRDDS54LL FLXA0FRRDDS54_BASE.UINT8[LL]
#define FLXA0FRRDDS54LH FLXA0FRRDDS54_BASE.UINT8[LH]
#define FLXA0FRRDDS54HL FLXA0FRRDDS54_BASE.UINT8[HL]
#define FLXA0FRRDDS54HH FLXA0FRRDDS54_BASE.UINT8[HH]
#define FLXA0FRRDDS54_MD FLXA0FRRDDS54_BASE.BIT._MD
#define FLXA0FRRDDS55 FLXA0FRRDDS55_BASE.UINT32
#define FLXA0FRRDDS55L FLXA0FRRDDS55_BASE.UINT16[L]
#define FLXA0FRRDDS55H FLXA0FRRDDS55_BASE.UINT16[H]
#define FLXA0FRRDDS55LL FLXA0FRRDDS55_BASE.UINT8[LL]
#define FLXA0FRRDDS55LH FLXA0FRRDDS55_BASE.UINT8[LH]
#define FLXA0FRRDDS55HL FLXA0FRRDDS55_BASE.UINT8[HL]
#define FLXA0FRRDDS55HH FLXA0FRRDDS55_BASE.UINT8[HH]
#define FLXA0FRRDDS55_MD FLXA0FRRDDS55_BASE.BIT._MD
#define FLXA0FRRDDS56 FLXA0FRRDDS56_BASE.UINT32
#define FLXA0FRRDDS56L FLXA0FRRDDS56_BASE.UINT16[L]
#define FLXA0FRRDDS56H FLXA0FRRDDS56_BASE.UINT16[H]
#define FLXA0FRRDDS56LL FLXA0FRRDDS56_BASE.UINT8[LL]
#define FLXA0FRRDDS56LH FLXA0FRRDDS56_BASE.UINT8[LH]
#define FLXA0FRRDDS56HL FLXA0FRRDDS56_BASE.UINT8[HL]
#define FLXA0FRRDDS56HH FLXA0FRRDDS56_BASE.UINT8[HH]
#define FLXA0FRRDDS56_MD FLXA0FRRDDS56_BASE.BIT._MD
#define FLXA0FRRDDS57 FLXA0FRRDDS57_BASE.UINT32
#define FLXA0FRRDDS57L FLXA0FRRDDS57_BASE.UINT16[L]
#define FLXA0FRRDDS57H FLXA0FRRDDS57_BASE.UINT16[H]
#define FLXA0FRRDDS57LL FLXA0FRRDDS57_BASE.UINT8[LL]
#define FLXA0FRRDDS57LH FLXA0FRRDDS57_BASE.UINT8[LH]
#define FLXA0FRRDDS57HL FLXA0FRRDDS57_BASE.UINT8[HL]
#define FLXA0FRRDDS57HH FLXA0FRRDDS57_BASE.UINT8[HH]
#define FLXA0FRRDDS57_MD FLXA0FRRDDS57_BASE.BIT._MD
#define FLXA0FRRDDS58 FLXA0FRRDDS58_BASE.UINT32
#define FLXA0FRRDDS58L FLXA0FRRDDS58_BASE.UINT16[L]
#define FLXA0FRRDDS58H FLXA0FRRDDS58_BASE.UINT16[H]
#define FLXA0FRRDDS58LL FLXA0FRRDDS58_BASE.UINT8[LL]
#define FLXA0FRRDDS58LH FLXA0FRRDDS58_BASE.UINT8[LH]
#define FLXA0FRRDDS58HL FLXA0FRRDDS58_BASE.UINT8[HL]
#define FLXA0FRRDDS58HH FLXA0FRRDDS58_BASE.UINT8[HH]
#define FLXA0FRRDDS58_MD FLXA0FRRDDS58_BASE.BIT._MD
#define FLXA0FRRDDS59 FLXA0FRRDDS59_BASE.UINT32
#define FLXA0FRRDDS59L FLXA0FRRDDS59_BASE.UINT16[L]
#define FLXA0FRRDDS59H FLXA0FRRDDS59_BASE.UINT16[H]
#define FLXA0FRRDDS59LL FLXA0FRRDDS59_BASE.UINT8[LL]
#define FLXA0FRRDDS59LH FLXA0FRRDDS59_BASE.UINT8[LH]
#define FLXA0FRRDDS59HL FLXA0FRRDDS59_BASE.UINT8[HL]
#define FLXA0FRRDDS59HH FLXA0FRRDDS59_BASE.UINT8[HH]
#define FLXA0FRRDDS59_MD FLXA0FRRDDS59_BASE.BIT._MD
#define FLXA0FRRDDS60 FLXA0FRRDDS60_BASE.UINT32
#define FLXA0FRRDDS60L FLXA0FRRDDS60_BASE.UINT16[L]
#define FLXA0FRRDDS60H FLXA0FRRDDS60_BASE.UINT16[H]
#define FLXA0FRRDDS60LL FLXA0FRRDDS60_BASE.UINT8[LL]
#define FLXA0FRRDDS60LH FLXA0FRRDDS60_BASE.UINT8[LH]
#define FLXA0FRRDDS60HL FLXA0FRRDDS60_BASE.UINT8[HL]
#define FLXA0FRRDDS60HH FLXA0FRRDDS60_BASE.UINT8[HH]
#define FLXA0FRRDDS60_MD FLXA0FRRDDS60_BASE.BIT._MD
#define FLXA0FRRDDS61 FLXA0FRRDDS61_BASE.UINT32
#define FLXA0FRRDDS61L FLXA0FRRDDS61_BASE.UINT16[L]
#define FLXA0FRRDDS61H FLXA0FRRDDS61_BASE.UINT16[H]
#define FLXA0FRRDDS61LL FLXA0FRRDDS61_BASE.UINT8[LL]
#define FLXA0FRRDDS61LH FLXA0FRRDDS61_BASE.UINT8[LH]
#define FLXA0FRRDDS61HL FLXA0FRRDDS61_BASE.UINT8[HL]
#define FLXA0FRRDDS61HH FLXA0FRRDDS61_BASE.UINT8[HH]
#define FLXA0FRRDDS61_MD FLXA0FRRDDS61_BASE.BIT._MD
#define FLXA0FRRDDS62 FLXA0FRRDDS62_BASE.UINT32
#define FLXA0FRRDDS62L FLXA0FRRDDS62_BASE.UINT16[L]
#define FLXA0FRRDDS62H FLXA0FRRDDS62_BASE.UINT16[H]
#define FLXA0FRRDDS62LL FLXA0FRRDDS62_BASE.UINT8[LL]
#define FLXA0FRRDDS62LH FLXA0FRRDDS62_BASE.UINT8[LH]
#define FLXA0FRRDDS62HL FLXA0FRRDDS62_BASE.UINT8[HL]
#define FLXA0FRRDDS62HH FLXA0FRRDDS62_BASE.UINT8[HH]
#define FLXA0FRRDDS62_MD FLXA0FRRDDS62_BASE.BIT._MD
#define FLXA0FRRDDS63 FLXA0FRRDDS63_BASE.UINT32
#define FLXA0FRRDDS63L FLXA0FRRDDS63_BASE.UINT16[L]
#define FLXA0FRRDDS63H FLXA0FRRDDS63_BASE.UINT16[H]
#define FLXA0FRRDDS63LL FLXA0FRRDDS63_BASE.UINT8[LL]
#define FLXA0FRRDDS63LH FLXA0FRRDDS63_BASE.UINT8[LH]
#define FLXA0FRRDDS63HL FLXA0FRRDDS63_BASE.UINT8[HL]
#define FLXA0FRRDDS63HH FLXA0FRRDDS63_BASE.UINT8[HH]
#define FLXA0FRRDDS63_MD FLXA0FRRDDS63_BASE.BIT._MD
#define FLXA0FRRDDS64 FLXA0FRRDDS64_BASE.UINT32
#define FLXA0FRRDDS64L FLXA0FRRDDS64_BASE.UINT16[L]
#define FLXA0FRRDDS64H FLXA0FRRDDS64_BASE.UINT16[H]
#define FLXA0FRRDDS64LL FLXA0FRRDDS64_BASE.UINT8[LL]
#define FLXA0FRRDDS64LH FLXA0FRRDDS64_BASE.UINT8[LH]
#define FLXA0FRRDDS64HL FLXA0FRRDDS64_BASE.UINT8[HL]
#define FLXA0FRRDDS64HH FLXA0FRRDDS64_BASE.UINT8[HH]
#define FLXA0FRRDDS64_MD FLXA0FRRDDS64_BASE.BIT._MD
#define FLXA0FRRDHS1 FLXA0FRRDHS1_BASE.UINT32
#define FLXA0FRRDHS1L FLXA0FRRDHS1_BASE.UINT16[L]
#define FLXA0FRRDHS1H FLXA0FRRDHS1_BASE.UINT16[H]
#define FLXA0FRRDHS1LL FLXA0FRRDHS1_BASE.UINT8[LL]
#define FLXA0FRRDHS1LH FLXA0FRRDHS1_BASE.UINT8[LH]
#define FLXA0FRRDHS1HL FLXA0FRRDHS1_BASE.UINT8[HL]
#define FLXA0FRRDHS1HH FLXA0FRRDHS1_BASE.UINT8[HH]
#define FLXA0FRRDHS1_FID FLXA0FRRDHS1_BASE.BIT._FID
#define FLXA0FRRDHS1_CYC FLXA0FRRDHS1_BASE.BIT._CYC
#define FLXA0FRRDHS1_CH FLXA0FRRDHS1_BASE.BIT._CH
#define FLXA0FRRDHS1_CFG FLXA0FRRDHS1_BASE.BIT._CFG
#define FLXA0FRRDHS1_PPIT FLXA0FRRDHS1_BASE.BIT._PPIT
#define FLXA0FRRDHS1_TXM FLXA0FRRDHS1_BASE.BIT._TXM
#define FLXA0FRRDHS1_MBI FLXA0FRRDHS1_BASE.BIT._MBI
#define FLXA0FRRDHS2 FLXA0FRRDHS2_BASE.UINT32
#define FLXA0FRRDHS2L FLXA0FRRDHS2_BASE.UINT16[L]
#define FLXA0FRRDHS2H FLXA0FRRDHS2_BASE.UINT16[H]
#define FLXA0FRRDHS2LL FLXA0FRRDHS2_BASE.UINT8[LL]
#define FLXA0FRRDHS2LH FLXA0FRRDHS2_BASE.UINT8[LH]
#define FLXA0FRRDHS2HL FLXA0FRRDHS2_BASE.UINT8[HL]
#define FLXA0FRRDHS2HH FLXA0FRRDHS2_BASE.UINT8[HH]
#define FLXA0FRRDHS2_CRC FLXA0FRRDHS2_BASE.BIT._CRC
#define FLXA0FRRDHS2_PLC FLXA0FRRDHS2_BASE.BIT._PLC
#define FLXA0FRRDHS2_PLR FLXA0FRRDHS2_BASE.BIT._PLR
#define FLXA0FRRDHS3 FLXA0FRRDHS3_BASE.UINT32
#define FLXA0FRRDHS3L FLXA0FRRDHS3_BASE.UINT16[L]
#define FLXA0FRRDHS3H FLXA0FRRDHS3_BASE.UINT16[H]
#define FLXA0FRRDHS3LL FLXA0FRRDHS3_BASE.UINT8[LL]
#define FLXA0FRRDHS3LH FLXA0FRRDHS3_BASE.UINT8[LH]
#define FLXA0FRRDHS3HL FLXA0FRRDHS3_BASE.UINT8[HL]
#define FLXA0FRRDHS3HH FLXA0FRRDHS3_BASE.UINT8[HH]
#define FLXA0FRRDHS3_DP FLXA0FRRDHS3_BASE.BIT._DP
#define FLXA0FRRDHS3_RCC FLXA0FRRDHS3_BASE.BIT._RCC
#define FLXA0FRRDHS3_RCI FLXA0FRRDHS3_BASE.BIT._RCI
#define FLXA0FRRDHS3_SFI FLXA0FRRDHS3_BASE.BIT._SFI
#define FLXA0FRRDHS3_SYN FLXA0FRRDHS3_BASE.BIT._SYN
#define FLXA0FRRDHS3_NFI FLXA0FRRDHS3_BASE.BIT._NFI
#define FLXA0FRRDHS3_PPI FLXA0FRRDHS3_BASE.BIT._PPI
#define FLXA0FRRDHS3_RES FLXA0FRRDHS3_BASE.BIT._RES
#define FLXA0FRMBS FLXA0FRMBS_BASE.UINT32
#define FLXA0FRMBSL FLXA0FRMBS_BASE.UINT16[L]
#define FLXA0FRMBSH FLXA0FRMBS_BASE.UINT16[H]
#define FLXA0FRMBSLL FLXA0FRMBS_BASE.UINT8[LL]
#define FLXA0FRMBSLH FLXA0FRMBS_BASE.UINT8[LH]
#define FLXA0FRMBSHL FLXA0FRMBS_BASE.UINT8[HL]
#define FLXA0FRMBSHH FLXA0FRMBS_BASE.UINT8[HH]
#define FLXA0FRMBS_VFRA FLXA0FRMBS_BASE.BIT._VFRA
#define FLXA0FRMBS_VFRB FLXA0FRMBS_BASE.BIT._VFRB
#define FLXA0FRMBS_SEOA FLXA0FRMBS_BASE.BIT._SEOA
#define FLXA0FRMBS_SEOB FLXA0FRMBS_BASE.BIT._SEOB
#define FLXA0FRMBS_CEOA FLXA0FRMBS_BASE.BIT._CEOA
#define FLXA0FRMBS_CEOB FLXA0FRMBS_BASE.BIT._CEOB
#define FLXA0FRMBS_SVOA FLXA0FRMBS_BASE.BIT._SVOA
#define FLXA0FRMBS_SVOB FLXA0FRMBS_BASE.BIT._SVOB
#define FLXA0FRMBS_TCIA FLXA0FRMBS_BASE.BIT._TCIA
#define FLXA0FRMBS_TCIB FLXA0FRMBS_BASE.BIT._TCIB
#define FLXA0FRMBS_ESA FLXA0FRMBS_BASE.BIT._ESA
#define FLXA0FRMBS_ESB FLXA0FRMBS_BASE.BIT._ESB
#define FLXA0FRMBS_MLST FLXA0FRMBS_BASE.BIT._MLST
#define FLXA0FRMBS_FTA FLXA0FRMBS_BASE.BIT._FTA
#define FLXA0FRMBS_FTB FLXA0FRMBS_BASE.BIT._FTB
#define FLXA0FRMBS_CCS FLXA0FRMBS_BASE.BIT._CCS
#define FLXA0FRMBS_RCIS FLXA0FRMBS_BASE.BIT._RCIS
#define FLXA0FRMBS_SFIS FLXA0FRMBS_BASE.BIT._SFIS
#define FLXA0FRMBS_SYNS FLXA0FRMBS_BASE.BIT._SYNS
#define FLXA0FRMBS_NFIS FLXA0FRMBS_BASE.BIT._NFIS
#define FLXA0FRMBS_PPIS FLXA0FRMBS_BASE.BIT._PPIS
#define FLXA0FRMBS_RESS FLXA0FRMBS_BASE.BIT._RESS
#define FLXA0FROBCM FLXA0FROBCM_BASE.UINT32
#define FLXA0FROBCML FLXA0FROBCM_BASE.UINT16[L]
#define FLXA0FROBCMH FLXA0FROBCM_BASE.UINT16[H]
#define FLXA0FROBCMLL FLXA0FROBCM_BASE.UINT8[LL]
#define FLXA0FROBCMLH FLXA0FROBCM_BASE.UINT8[LH]
#define FLXA0FROBCMHL FLXA0FROBCM_BASE.UINT8[HL]
#define FLXA0FROBCMHH FLXA0FROBCM_BASE.UINT8[HH]
#define FLXA0FROBCM_RHSS FLXA0FROBCM_BASE.BIT._RHSS
#define FLXA0FROBCM_RDSS FLXA0FROBCM_BASE.BIT._RDSS
#define FLXA0FROBCM_RHSH FLXA0FROBCM_BASE.BIT._RHSH
#define FLXA0FROBCM_RDSH FLXA0FROBCM_BASE.BIT._RDSH
#define FLXA0FROBCR FLXA0FROBCR_BASE.UINT32
#define FLXA0FROBCRL FLXA0FROBCR_BASE.UINT16[L]
#define FLXA0FROBCRH FLXA0FROBCR_BASE.UINT16[H]
#define FLXA0FROBCRLL FLXA0FROBCR_BASE.UINT8[LL]
#define FLXA0FROBCRLH FLXA0FROBCR_BASE.UINT8[LH]
#define FLXA0FROBCRHL FLXA0FROBCR_BASE.UINT8[HL]
#define FLXA0FROBCRHH FLXA0FROBCR_BASE.UINT8[HH]
#define FLXA0FROBCR_OBRS FLXA0FROBCR_BASE.BIT._OBRS
#define FLXA0FROBCR_VIEW FLXA0FROBCR_BASE.BIT._VIEW
#define FLXA0FROBCR_REQ FLXA0FROBCR_BASE.BIT._REQ
#define FLXA0FROBCR_OBSYS FLXA0FROBCR_BASE.BIT._OBSYS
#define FLXA0FROBCR_OBRH FLXA0FROBCR_BASE.BIT._OBRH
#define FLXA0FRITC FLXA0FRITC_BASE.UINT32
#define FLXA0FRITCL FLXA0FRITC_BASE.UINT16[L]
#define FLXA0FRITCH FLXA0FRITC_BASE.UINT16[H]
#define FLXA0FRITCLL FLXA0FRITC_BASE.UINT8[LL]
#define FLXA0FRITCLH FLXA0FRITC_BASE.UINT8[LH]
#define FLXA0FRITCHL FLXA0FRITC_BASE.UINT8[HL]
#define FLXA0FRITCHH FLXA0FRITC_BASE.UINT8[HH]
#define FLXA0FRITC_ITE FLXA0FRITC_BASE.BIT._ITE
#define FLXA0FRITC_IQHR FLXA0FRITC_BASE.BIT._IQHR
#define FLXA0FRITC_IQFIE FLXA0FRITC_BASE.BIT._IQFIE
#define FLXA0FRITC_IQEIE FLXA0FRITC_BASE.BIT._IQEIE
#define FLXA0FRITC_ITM FLXA0FRITC_BASE.BIT._ITM
#define FLXA0FROTC FLXA0FROTC_BASE.UINT32
#define FLXA0FROTCL FLXA0FROTC_BASE.UINT16[L]
#define FLXA0FROTCH FLXA0FROTC_BASE.UINT16[H]
#define FLXA0FROTCLL FLXA0FROTC_BASE.UINT8[LL]
#define FLXA0FROTCLH FLXA0FROTC_BASE.UINT8[LH]
#define FLXA0FROTCHL FLXA0FROTC_BASE.UINT8[HL]
#define FLXA0FROTCHH FLXA0FROTC_BASE.UINT8[HH]
#define FLXA0FROTC_OTE FLXA0FROTC_BASE.BIT._OTE
#define FLXA0FROTC_OTCS FLXA0FROTC_BASE.BIT._OTCS
#define FLXA0FROTC_OIE FLXA0FROTC_BASE.BIT._OIE
#define FLXA0FROTC_FIE FLXA0FROTC_BASE.BIT._FIE
#define FLXA0FROTC_OWIE FLXA0FROTC_BASE.BIT._OWIE
#define FLXA0FROTC_FWIE FLXA0FROTC_BASE.BIT._FWIE
#define FLXA0FROTC_FTM FLXA0FROTC_BASE.BIT._FTM
#define FLXA0FRIBA FLXA0FRIBA_BASE.UINT32
#define FLXA0FRIBAL FLXA0FRIBA_BASE.UINT16[L]
#define FLXA0FRIBAH FLXA0FRIBA_BASE.UINT16[H]
#define FLXA0FRIBALL FLXA0FRIBA_BASE.UINT8[LL]
#define FLXA0FRIBALH FLXA0FRIBA_BASE.UINT8[LH]
#define FLXA0FRIBAHL FLXA0FRIBA_BASE.UINT8[HL]
#define FLXA0FRIBAHH FLXA0FRIBA_BASE.UINT8[HH]
#define FLXA0FRIBA_ITA FLXA0FRIBA_BASE.BIT._ITA
#define FLXA0FRFBA FLXA0FRFBA_BASE.UINT32
#define FLXA0FRFBAL FLXA0FRFBA_BASE.UINT16[L]
#define FLXA0FRFBAH FLXA0FRFBA_BASE.UINT16[H]
#define FLXA0FRFBALL FLXA0FRFBA_BASE.UINT8[LL]
#define FLXA0FRFBALH FLXA0FRFBA_BASE.UINT8[LH]
#define FLXA0FRFBAHL FLXA0FRFBA_BASE.UINT8[HL]
#define FLXA0FRFBAHH FLXA0FRFBA_BASE.UINT8[HH]
#define FLXA0FRFBA_FTA FLXA0FRFBA_BASE.BIT._FTA
#define FLXA0FROBA FLXA0FROBA_BASE.UINT32
#define FLXA0FROBAL FLXA0FROBA_BASE.UINT16[L]
#define FLXA0FROBAH FLXA0FROBA_BASE.UINT16[H]
#define FLXA0FROBALL FLXA0FROBA_BASE.UINT8[LL]
#define FLXA0FROBALH FLXA0FROBA_BASE.UINT8[LH]
#define FLXA0FROBAHL FLXA0FROBA_BASE.UINT8[HL]
#define FLXA0FROBAHH FLXA0FROBA_BASE.UINT8[HH]
#define FLXA0FROBA_OTA FLXA0FROBA_BASE.BIT._OTA
#define FLXA0FRIQC FLXA0FRIQC_BASE.UINT32
#define FLXA0FRIQCL FLXA0FRIQC_BASE.UINT16[L]
#define FLXA0FRIQCH FLXA0FRIQC_BASE.UINT16[H]
#define FLXA0FRIQCLL FLXA0FRIQC_BASE.UINT8[LL]
#define FLXA0FRIQCLH FLXA0FRIQC_BASE.UINT8[LH]
#define FLXA0FRIQCHL FLXA0FRIQC_BASE.UINT8[HL]
#define FLXA0FRIQCHH FLXA0FRIQC_BASE.UINT8[HH]
#define FLXA0FRIQC_IMBNR FLXA0FRIQC_BASE.BIT._IMBNR
#define FLXA0FRUIR FLXA0FRUIR_BASE.UINT32
#define FLXA0FRUIRL FLXA0FRUIR_BASE.UINT16[L]
#define FLXA0FRUIRH FLXA0FRUIR_BASE.UINT16[H]
#define FLXA0FRUIRLL FLXA0FRUIR_BASE.UINT8[LL]
#define FLXA0FRUIRLH FLXA0FRUIR_BASE.UINT8[LH]
#define FLXA0FRUIRHL FLXA0FRUIR_BASE.UINT8[HL]
#define FLXA0FRUIRHH FLXA0FRUIR_BASE.UINT8[HH]
#define FLXA0FRUIR_UIDX FLXA0FRUIR_BASE.BIT._UIDX
#define FLXA0FRUOR FLXA0FRUOR_BASE.UINT32
#define FLXA0FRUORL FLXA0FRUOR_BASE.UINT16[L]
#define FLXA0FRUORH FLXA0FRUOR_BASE.UINT16[H]
#define FLXA0FRUORLL FLXA0FRUOR_BASE.UINT8[LL]
#define FLXA0FRUORLH FLXA0FRUOR_BASE.UINT8[LH]
#define FLXA0FRUORHL FLXA0FRUOR_BASE.UINT8[HL]
#define FLXA0FRUORHH FLXA0FRUOR_BASE.UINT8[HH]
#define FLXA0FRUOR_UMBNR FLXA0FRUOR_BASE.BIT._UMBNR
#define FLXA0FRUOR_URDS FLXA0FRUOR_BASE.BIT._URDS
#define FLXA0FRITS FLXA0FRITS_BASE.UINT32
#define FLXA0FRITSL FLXA0FRITS_BASE.UINT16[L]
#define FLXA0FRITSH FLXA0FRITS_BASE.UINT16[H]
#define FLXA0FRITSLL FLXA0FRITS_BASE.UINT8[LL]
#define FLXA0FRITSLH FLXA0FRITS_BASE.UINT8[LH]
#define FLXA0FRITSHL FLXA0FRITS_BASE.UINT8[HL]
#define FLXA0FRITSHH FLXA0FRITS_BASE.UINT8[HH]
#define FLXA0FRITS_ITS FLXA0FRITS_BASE.BIT._ITS
#define FLXA0FRITS_IQH FLXA0FRITS_BASE.BIT._IQH
#define FLXA0FRITS_UIRP FLXA0FRITS_BASE.BIT._UIRP
#define FLXA0FRITS_IQFIS FLXA0FRITS_BASE.BIT._IQFIS
#define FLXA0FRITS_IQEIS FLXA0FRITS_BASE.BIT._IQEIS
#define FLXA0FRITS_IQFP FLXA0FRITS_BASE.BIT._IQFP
#define FLXA0FRITS_IPIDX FLXA0FRITS_BASE.BIT._IPIDX
#define FLXA0FRITS_IGIDX FLXA0FRITS_BASE.BIT._IGIDX
#define FLXA0FROTS FLXA0FROTS_BASE.UINT32
#define FLXA0FROTSL FLXA0FROTS_BASE.UINT16[L]
#define FLXA0FROTSH FLXA0FROTS_BASE.UINT16[H]
#define FLXA0FROTSLL FLXA0FROTS_BASE.UINT8[LL]
#define FLXA0FROTSLH FLXA0FROTS_BASE.UINT8[LH]
#define FLXA0FROTSHL FLXA0FROTS_BASE.UINT8[HL]
#define FLXA0FROTSHH FLXA0FROTS_BASE.UINT8[HH]
#define FLXA0FROTS_OTS FLXA0FROTS_BASE.BIT._OTS
#define FLXA0FROTS_UORP FLXA0FROTS_BASE.BIT._UORP
#define FLXA0FROTS_OTIS FLXA0FROTS_BASE.BIT._OTIS
#define FLXA0FROTS_FIS FLXA0FROTS_BASE.BIT._FIS
#define FLXA0FROTS_OWS FLXA0FROTS_BASE.BIT._OWS
#define FLXA0FROTS_FWS FLXA0FROTS_BASE.BIT._FWS
#define FLXA0FROTS_FDA FLXA0FROTS_BASE.BIT._FDA
#define FLXA0FROTS_OWP FLXA0FROTS_BASE.BIT._OWP
#define FLXA0FROTS_FWP FLXA0FROTS_BASE.BIT._FWP
#define FLXA0FROTS_FGIDX FLXA0FROTS_BASE.BIT._FGIDX
#define FLXA0FROTS_FFL FLXA0FROTS_BASE.BIT._FFL
#define FLXA0FRAES FLXA0FRAES_BASE.UINT32
#define FLXA0FRAESL FLXA0FRAES_BASE.UINT16[L]
#define FLXA0FRAESH FLXA0FRAES_BASE.UINT16[H]
#define FLXA0FRAESLL FLXA0FRAES_BASE.UINT8[LL]
#define FLXA0FRAESLH FLXA0FRAES_BASE.UINT8[LH]
#define FLXA0FRAESHL FLXA0FRAES_BASE.UINT8[HL]
#define FLXA0FRAESHH FLXA0FRAES_BASE.UINT8[HH]
#define FLXA0FRAES_EIDX FLXA0FRAES_BASE.BIT._EIDX
#define FLXA0FRAES_IAE FLXA0FRAES_BASE.BIT._IAE
#define FLXA0FRAES_OAE FLXA0FRAES_BASE.BIT._OAE
#define FLXA0FRAES_FAE FLXA0FRAES_BASE.BIT._FAE
#define FLXA0FRAES_MAE FLXA0FRAES_BASE.BIT._MAE
#define FLXA0FRAEA FLXA0FRAEA_BASE.UINT32
#define FLXA0FRAEAL FLXA0FRAEA_BASE.UINT16[L]
#define FLXA0FRAEAH FLXA0FRAEA_BASE.UINT16[H]
#define FLXA0FRAEALL FLXA0FRAEA_BASE.UINT8[LL]
#define FLXA0FRAEALH FLXA0FRAEA_BASE.UINT8[LH]
#define FLXA0FRAEAHL FLXA0FRAEA_BASE.UINT8[HL]
#define FLXA0FRAEAHH FLXA0FRAEA_BASE.UINT8[HH]
#define FLXA0FRAEA_AEA FLXA0FRAEA_BASE.BIT._AEA
#define FLXA0FRDA0 FLXA0FRDA0_BASE.UINT32
#define FLXA0FRDA0L FLXA0FRDA0_BASE.UINT16[L]
#define FLXA0FRDA0H FLXA0FRDA0_BASE.UINT16[H]
#define FLXA0FRDA0LL FLXA0FRDA0_BASE.UINT8[LL]
#define FLXA0FRDA0LH FLXA0FRDA0_BASE.UINT8[LH]
#define FLXA0FRDA0HL FLXA0FRDA0_BASE.UINT8[HL]
#define FLXA0FRDA0HH FLXA0FRDA0_BASE.UINT8[HH]
#define FLXA0FRDA0_DA0 FLXA0FRDA0_BASE.BIT._DA0
#define FLXA0FRDA0_DA1 FLXA0FRDA0_BASE.BIT._DA1
#define FLXA0FRDA0_DA2 FLXA0FRDA0_BASE.BIT._DA2
#define FLXA0FRDA0_DA3 FLXA0FRDA0_BASE.BIT._DA3
#define FLXA0FRDA0_DA4 FLXA0FRDA0_BASE.BIT._DA4
#define FLXA0FRDA0_DA5 FLXA0FRDA0_BASE.BIT._DA5
#define FLXA0FRDA0_DA6 FLXA0FRDA0_BASE.BIT._DA6
#define FLXA0FRDA0_DA7 FLXA0FRDA0_BASE.BIT._DA7
#define FLXA0FRDA0_DA8 FLXA0FRDA0_BASE.BIT._DA8
#define FLXA0FRDA0_DA9 FLXA0FRDA0_BASE.BIT._DA9
#define FLXA0FRDA0_DA10 FLXA0FRDA0_BASE.BIT._DA10
#define FLXA0FRDA0_DA11 FLXA0FRDA0_BASE.BIT._DA11
#define FLXA0FRDA0_DA12 FLXA0FRDA0_BASE.BIT._DA12
#define FLXA0FRDA0_DA13 FLXA0FRDA0_BASE.BIT._DA13
#define FLXA0FRDA0_DA14 FLXA0FRDA0_BASE.BIT._DA14
#define FLXA0FRDA0_DA15 FLXA0FRDA0_BASE.BIT._DA15
#define FLXA0FRDA0_DA16 FLXA0FRDA0_BASE.BIT._DA16
#define FLXA0FRDA0_DA17 FLXA0FRDA0_BASE.BIT._DA17
#define FLXA0FRDA0_DA18 FLXA0FRDA0_BASE.BIT._DA18
#define FLXA0FRDA0_DA19 FLXA0FRDA0_BASE.BIT._DA19
#define FLXA0FRDA0_DA20 FLXA0FRDA0_BASE.BIT._DA20
#define FLXA0FRDA0_DA21 FLXA0FRDA0_BASE.BIT._DA21
#define FLXA0FRDA0_DA22 FLXA0FRDA0_BASE.BIT._DA22
#define FLXA0FRDA0_DA23 FLXA0FRDA0_BASE.BIT._DA23
#define FLXA0FRDA0_DA24 FLXA0FRDA0_BASE.BIT._DA24
#define FLXA0FRDA0_DA25 FLXA0FRDA0_BASE.BIT._DA25
#define FLXA0FRDA0_DA26 FLXA0FRDA0_BASE.BIT._DA26
#define FLXA0FRDA0_DA27 FLXA0FRDA0_BASE.BIT._DA27
#define FLXA0FRDA0_DA28 FLXA0FRDA0_BASE.BIT._DA28
#define FLXA0FRDA0_DA29 FLXA0FRDA0_BASE.BIT._DA29
#define FLXA0FRDA0_DA30 FLXA0FRDA0_BASE.BIT._DA30
#define FLXA0FRDA0_DA31 FLXA0FRDA0_BASE.BIT._DA31
#define FLXA0FRDA1 FLXA0FRDA1_BASE.UINT32
#define FLXA0FRDA1L FLXA0FRDA1_BASE.UINT16[L]
#define FLXA0FRDA1H FLXA0FRDA1_BASE.UINT16[H]
#define FLXA0FRDA1LL FLXA0FRDA1_BASE.UINT8[LL]
#define FLXA0FRDA1LH FLXA0FRDA1_BASE.UINT8[LH]
#define FLXA0FRDA1HL FLXA0FRDA1_BASE.UINT8[HL]
#define FLXA0FRDA1HH FLXA0FRDA1_BASE.UINT8[HH]
#define FLXA0FRDA1_DA32 FLXA0FRDA1_BASE.BIT._DA32
#define FLXA0FRDA1_DA33 FLXA0FRDA1_BASE.BIT._DA33
#define FLXA0FRDA1_DA34 FLXA0FRDA1_BASE.BIT._DA34
#define FLXA0FRDA1_DA35 FLXA0FRDA1_BASE.BIT._DA35
#define FLXA0FRDA1_DA36 FLXA0FRDA1_BASE.BIT._DA36
#define FLXA0FRDA1_DA37 FLXA0FRDA1_BASE.BIT._DA37
#define FLXA0FRDA1_DA38 FLXA0FRDA1_BASE.BIT._DA38
#define FLXA0FRDA1_DA39 FLXA0FRDA1_BASE.BIT._DA39
#define FLXA0FRDA1_DA40 FLXA0FRDA1_BASE.BIT._DA40
#define FLXA0FRDA1_DA41 FLXA0FRDA1_BASE.BIT._DA41
#define FLXA0FRDA1_DA42 FLXA0FRDA1_BASE.BIT._DA42
#define FLXA0FRDA1_DA43 FLXA0FRDA1_BASE.BIT._DA43
#define FLXA0FRDA1_DA44 FLXA0FRDA1_BASE.BIT._DA44
#define FLXA0FRDA1_DA45 FLXA0FRDA1_BASE.BIT._DA45
#define FLXA0FRDA1_DA46 FLXA0FRDA1_BASE.BIT._DA46
#define FLXA0FRDA1_DA47 FLXA0FRDA1_BASE.BIT._DA47
#define FLXA0FRDA1_DA48 FLXA0FRDA1_BASE.BIT._DA48
#define FLXA0FRDA1_DA49 FLXA0FRDA1_BASE.BIT._DA49
#define FLXA0FRDA1_DA50 FLXA0FRDA1_BASE.BIT._DA50
#define FLXA0FRDA1_DA51 FLXA0FRDA1_BASE.BIT._DA51
#define FLXA0FRDA1_DA52 FLXA0FRDA1_BASE.BIT._DA52
#define FLXA0FRDA1_DA53 FLXA0FRDA1_BASE.BIT._DA53
#define FLXA0FRDA1_DA54 FLXA0FRDA1_BASE.BIT._DA54
#define FLXA0FRDA1_DA55 FLXA0FRDA1_BASE.BIT._DA55
#define FLXA0FRDA1_DA56 FLXA0FRDA1_BASE.BIT._DA56
#define FLXA0FRDA1_DA57 FLXA0FRDA1_BASE.BIT._DA57
#define FLXA0FRDA1_DA58 FLXA0FRDA1_BASE.BIT._DA58
#define FLXA0FRDA1_DA59 FLXA0FRDA1_BASE.BIT._DA59
#define FLXA0FRDA1_DA60 FLXA0FRDA1_BASE.BIT._DA60
#define FLXA0FRDA1_DA61 FLXA0FRDA1_BASE.BIT._DA61
#define FLXA0FRDA1_DA62 FLXA0FRDA1_BASE.BIT._DA62
#define FLXA0FRDA1_DA63 FLXA0FRDA1_BASE.BIT._DA63
#define FLXA0FRDA2 FLXA0FRDA2_BASE.UINT32
#define FLXA0FRDA2L FLXA0FRDA2_BASE.UINT16[L]
#define FLXA0FRDA2H FLXA0FRDA2_BASE.UINT16[H]
#define FLXA0FRDA2LL FLXA0FRDA2_BASE.UINT8[LL]
#define FLXA0FRDA2LH FLXA0FRDA2_BASE.UINT8[LH]
#define FLXA0FRDA2HL FLXA0FRDA2_BASE.UINT8[HL]
#define FLXA0FRDA2HH FLXA0FRDA2_BASE.UINT8[HH]
#define FLXA0FRDA2_DA64 FLXA0FRDA2_BASE.BIT._DA64
#define FLXA0FRDA2_DA65 FLXA0FRDA2_BASE.BIT._DA65
#define FLXA0FRDA2_DA66 FLXA0FRDA2_BASE.BIT._DA66
#define FLXA0FRDA2_DA67 FLXA0FRDA2_BASE.BIT._DA67
#define FLXA0FRDA2_DA68 FLXA0FRDA2_BASE.BIT._DA68
#define FLXA0FRDA2_DA69 FLXA0FRDA2_BASE.BIT._DA69
#define FLXA0FRDA2_DA70 FLXA0FRDA2_BASE.BIT._DA70
#define FLXA0FRDA2_DA71 FLXA0FRDA2_BASE.BIT._DA71
#define FLXA0FRDA2_DA72 FLXA0FRDA2_BASE.BIT._DA72
#define FLXA0FRDA2_DA73 FLXA0FRDA2_BASE.BIT._DA73
#define FLXA0FRDA2_DA74 FLXA0FRDA2_BASE.BIT._DA74
#define FLXA0FRDA2_DA75 FLXA0FRDA2_BASE.BIT._DA75
#define FLXA0FRDA2_DA76 FLXA0FRDA2_BASE.BIT._DA76
#define FLXA0FRDA2_DA77 FLXA0FRDA2_BASE.BIT._DA77
#define FLXA0FRDA2_DA78 FLXA0FRDA2_BASE.BIT._DA78
#define FLXA0FRDA2_DA79 FLXA0FRDA2_BASE.BIT._DA79
#define FLXA0FRDA2_DA80 FLXA0FRDA2_BASE.BIT._DA80
#define FLXA0FRDA2_DA81 FLXA0FRDA2_BASE.BIT._DA81
#define FLXA0FRDA2_DA82 FLXA0FRDA2_BASE.BIT._DA82
#define FLXA0FRDA2_DA83 FLXA0FRDA2_BASE.BIT._DA83
#define FLXA0FRDA2_DA84 FLXA0FRDA2_BASE.BIT._DA84
#define FLXA0FRDA2_DA85 FLXA0FRDA2_BASE.BIT._DA85
#define FLXA0FRDA2_DA86 FLXA0FRDA2_BASE.BIT._DA86
#define FLXA0FRDA2_DA87 FLXA0FRDA2_BASE.BIT._DA87
#define FLXA0FRDA2_DA88 FLXA0FRDA2_BASE.BIT._DA88
#define FLXA0FRDA2_DA89 FLXA0FRDA2_BASE.BIT._DA89
#define FLXA0FRDA2_DA90 FLXA0FRDA2_BASE.BIT._DA90
#define FLXA0FRDA2_DA91 FLXA0FRDA2_BASE.BIT._DA91
#define FLXA0FRDA2_DA92 FLXA0FRDA2_BASE.BIT._DA92
#define FLXA0FRDA2_DA93 FLXA0FRDA2_BASE.BIT._DA93
#define FLXA0FRDA2_DA94 FLXA0FRDA2_BASE.BIT._DA94
#define FLXA0FRDA2_DA95 FLXA0FRDA2_BASE.BIT._DA95
#define FLXA0FRDA3 FLXA0FRDA3_BASE.UINT32
#define FLXA0FRDA3L FLXA0FRDA3_BASE.UINT16[L]
#define FLXA0FRDA3H FLXA0FRDA3_BASE.UINT16[H]
#define FLXA0FRDA3LL FLXA0FRDA3_BASE.UINT8[LL]
#define FLXA0FRDA3LH FLXA0FRDA3_BASE.UINT8[LH]
#define FLXA0FRDA3HL FLXA0FRDA3_BASE.UINT8[HL]
#define FLXA0FRDA3HH FLXA0FRDA3_BASE.UINT8[HH]
#define FLXA0FRDA3_DA96 FLXA0FRDA3_BASE.BIT._DA96
#define FLXA0FRDA3_DA97 FLXA0FRDA3_BASE.BIT._DA97
#define FLXA0FRDA3_DA98 FLXA0FRDA3_BASE.BIT._DA98
#define FLXA0FRDA3_DA99 FLXA0FRDA3_BASE.BIT._DA99
#define FLXA0FRDA3_DA100 FLXA0FRDA3_BASE.BIT._DA100
#define FLXA0FRDA3_DA101 FLXA0FRDA3_BASE.BIT._DA101
#define FLXA0FRDA3_DA102 FLXA0FRDA3_BASE.BIT._DA102
#define FLXA0FRDA3_DA103 FLXA0FRDA3_BASE.BIT._DA103
#define FLXA0FRDA3_DA104 FLXA0FRDA3_BASE.BIT._DA104
#define FLXA0FRDA3_DA105 FLXA0FRDA3_BASE.BIT._DA105
#define FLXA0FRDA3_DA106 FLXA0FRDA3_BASE.BIT._DA106
#define FLXA0FRDA3_DA107 FLXA0FRDA3_BASE.BIT._DA107
#define FLXA0FRDA3_DA108 FLXA0FRDA3_BASE.BIT._DA108
#define FLXA0FRDA3_DA109 FLXA0FRDA3_BASE.BIT._DA109
#define FLXA0FRDA3_DA110 FLXA0FRDA3_BASE.BIT._DA110
#define FLXA0FRDA3_DA111 FLXA0FRDA3_BASE.BIT._DA111
#define FLXA0FRDA3_DA112 FLXA0FRDA3_BASE.BIT._DA112
#define FLXA0FRDA3_DA113 FLXA0FRDA3_BASE.BIT._DA113
#define FLXA0FRDA3_DA114 FLXA0FRDA3_BASE.BIT._DA114
#define FLXA0FRDA3_DA115 FLXA0FRDA3_BASE.BIT._DA115
#define FLXA0FRDA3_DA116 FLXA0FRDA3_BASE.BIT._DA116
#define FLXA0FRDA3_DA117 FLXA0FRDA3_BASE.BIT._DA117
#define FLXA0FRDA3_DA118 FLXA0FRDA3_BASE.BIT._DA118
#define FLXA0FRDA3_DA119 FLXA0FRDA3_BASE.BIT._DA119
#define FLXA0FRDA3_DA120 FLXA0FRDA3_BASE.BIT._DA120
#define FLXA0FRDA3_DA121 FLXA0FRDA3_BASE.BIT._DA121
#define FLXA0FRDA3_DA122 FLXA0FRDA3_BASE.BIT._DA122
#define FLXA0FRDA3_DA123 FLXA0FRDA3_BASE.BIT._DA123
#define FLXA0FRDA3_DA124 FLXA0FRDA3_BASE.BIT._DA124
#define FLXA0FRDA3_DA125 FLXA0FRDA3_BASE.BIT._DA125
#define FLXA0FRDA3_DA126 FLXA0FRDA3_BASE.BIT._DA126
#define FLXA0FRDA3_DA127 FLXA0FRDA3_BASE.BIT._DA127
#define FLXA0FRT2C FLXA0FRT2C_BASE.UINT32
#define FLXA0FRT2CL FLXA0FRT2C_BASE.UINT16[L]
#define FLXA0FRT2CH FLXA0FRT2C_BASE.UINT16[H]
#define FLXA0FRT2CLL FLXA0FRT2C_BASE.UINT8[LL]
#define FLXA0FRT2CLH FLXA0FRT2C_BASE.UINT8[LH]
#define FLXA0FRT2CHL FLXA0FRT2C_BASE.UINT8[HL]
#define FLXA0FRT2CHH FLXA0FRT2C_BASE.UINT8[HH]
#define FLXA0FRT2C_T2RC FLXA0FRT2C_BASE.BIT._T2RC
#define FLXA0FRT2C_T2MS FLXA0FRT2C_BASE.BIT._T2MS
#define FLXA0FRT2C_T2CC FLXA0FRT2C_BASE.BIT._T2CC
#define FLXA0FRT2C_T2MO FLXA0FRT2C_BASE.BIT._T2MO

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif