#ifndef __DR7F701373_ETNA0_HEADER__
#define __DR7F701373_ETNA0_HEADER__



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
    uint32 _ENR0 : 1;
    uint32 _ENT0 : 1;
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
    uint32 _GPO0 : 1;
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
} ETNA0EDSR0Bits_t;

typedef struct
{
    uint32 _TDLA0 : 32;
} ETNA0TDLAR0Bits_t;

typedef struct
{
    uint32 _TDFA0 : 32;
} ETNA0TDFAR0Bits_t;

typedef struct
{
    uint32 _TDFX0 : 32;
} ETNA0TDFXR0Bits_t;

typedef struct
{
    uint32 _TDLF0 : 1;
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
} ETNA0TDFFR0Bits_t;

typedef struct
{
    uint32 _RDLA0 : 32;
} ETNA0RDLAR0Bits_t;

typedef struct
{
    uint32 _RDFA0 : 32;
} ETNA0RDFAR0Bits_t;

typedef struct
{
    uint32 _RDFX0 : 32;
} ETNA0RDFXR0Bits_t;

typedef struct
{
    uint32 _RDLF0 : 1;
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
} ETNA0RDFFR0Bits_t;

typedef struct
{
    uint32 _SWRR0 : 1;
    uint32 _SWRT0 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _DL0 : 2;
    uint32 _DE0 : 1;
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
} ETNA0EDMR0Bits_t;

typedef struct
{
    uint32 _TR0 : 2;
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
} ETNA0EDTRR0Bits_t;

typedef struct
{
    uint32 _RR0 : 1;
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
} ETNA0EDRRR0Bits_t;

typedef struct
{
    uint32 _CERF0 : 1;
    uint32 _PRE0 : 1;
    uint32 _RTSF0 : 1;
    uint32 _RTLF0 : 1;
    uint32 _RRF0 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _RMAF0 : 1;
    uint32 _TRO0 : 1;
    uint32 _CD0 : 1;
    uint32 _DLC0 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RFOF0 : 1;
    uint32 _RDE0 : 1;
    uint32 _FR0 : 1;
    uint32 padding19 : 1;
    uint32 _TDE0 : 1;
    uint32 _TC0_0 : 1;
    const uint32 _ECI0 : 1;
    uint32 padding23 : 1;
    uint32 _RFCOF0 : 1;
    uint32 _RABT0 : 1;
    uint32 padding26 : 1;
    uint32 _ROC0 : 1;
    uint32 padding28 : 1;
    uint32 _TC0_1 : 1;
    uint32 _TWB0 : 2;
} ETNA0EESR0Bits_t;

typedef struct
{
    uint32 _CERF0IP : 1;
    uint32 _PRE0IP : 1;
    uint32 _RTSF0IP : 1;
    uint32 _RTLF0IP : 1;
    uint32 _RRF0IP : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _RMAF0IP : 1;
    uint32 _TRO0IP : 1;
    uint32 _CD0IP : 1;
    uint32 _DLC0IP : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RFOF0IP : 1;
    uint32 _RDE0IP : 1;
    uint32 _FR0IP : 1;
    uint32 padding19 : 1;
    uint32 _TDE0IP : 1;
    uint32 _TC00IP : 1;
    uint32 _ECI0IP : 1;
    uint32 padding23 : 1;
    uint32 _RFCOF0IP : 1;
    uint32 _RABT0IP : 1;
    uint32 padding26 : 1;
    uint32 _ROC0IP : 1;
    uint32 padding28 : 1;
    uint32 _TC10IP : 1;
    uint32 _TWB00IP : 1;
    uint32 _TWB10IP : 1;
} ETNA0EESIPR0Bits_t;

typedef struct
{
    uint32 _CERF0CE : 1;
    uint32 _PRE0CE : 1;
    uint32 _RTSF0CE : 1;
    uint32 _RTLF0CE : 1;
    uint32 _RRF0CE : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _RMAF0CE : 1;
    uint32 _RABT0CE : 1;
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
} ETNA0TRSCER0Bits_t;

typedef struct
{
    uint32 _MFC0 : 16;
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
} ETNA0RMFCR0Bits_t;

typedef struct
{
    uint32 _RFD0 : 8;
    uint32 _TFD0 : 5;
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
} ETNA0FDR0Bits_t;

typedef struct
{
    uint32 _RNC0 : 1;
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
} ETNA0RMCR0Bits_t;

typedef struct
{
    uint32 _PADR0 : 16;
    uint32 _PADS0 : 5;
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
} ETNA0RPADIR0Bits_t;

typedef struct
{
    uint32 _RFS0 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RFF0 : 5;
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
} ETNA0FCFTR0Bits_t;

typedef struct
{
    const uint32 _TDAM0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _TFAM0 : 3;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    const uint32 _TWBR0 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0TFSR0Bits_t;

typedef struct
{
    const uint32 _RDAM0 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _RFAM0 : 3;
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
} ETNA0RFSR0Bits_t;

typedef struct
{
    uint32 _PRM0 : 1;
    uint32 _DM0 : 1;
    uint32 padding2 : 1;
    uint32 _ILB0 : 1;
    uint32 padding4 : 1;
    uint32 _TE0 : 1;
    uint32 _RE0 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 _MPDE0 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _MCT0 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _TXF0 : 1;
    uint32 _RXF0 : 1;
    uint32 _PFR0 : 1;
    uint32 _TZPF0_DCAC0 : 1;
    uint32 _RZPF0 : 1;
    uint32 _DPAD0 : 1;
    uint32 padding22 : 1;
    uint32 _RCSC0 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 _TRCCM0 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0ECMR0Bits_t;

typedef struct
{
    uint32 _RFL0 : 18;
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
} ETNA0RFLR0Bits_t;

typedef struct
{
    uint32 _ICD0 : 1;
    uint32 _MPD0 : 1;
    uint32 _LINKI0 : 1;
    uint32 padding3 : 1;
    uint32 _PFROI0 : 1;
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
} ETNA0ECSR0Bits_t;

typedef struct
{
    uint32 _ICDIP0 : 1;
    uint32 _MPDIP0 : 1;
    uint32 _LINKIP0 : 1;
    uint32 padding3 : 1;
    uint32 _PFROIP0 : 1;
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
} ETNA0ECSIPR0Bits_t;

typedef struct
{
    uint32 _MDC0 : 1;
    uint32 _MMD0 : 1;
    uint32 _MDO0 : 1;
    uint32 _MDI0 : 1;
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
} ETNA0PIR0Bits_t;

typedef struct
{
    const uint32 _LINK0 : 1;
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
} ETNA0PLSR0Bits_t;

typedef struct
{
    uint32 _PHYIL0 : 1;
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
} ETNA0PIPR0Bits_t;

typedef struct
{
    uint32 _AP0 : 16;
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
} ETNA0APR0Bits_t;

typedef struct
{
    uint32 _MP0 : 16;
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
} ETNA0MPR0Bits_t;

typedef struct
{
    const uint32 _PFTXC0 : 16;
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
} ETNA0PFTCR0Bits_t;

typedef struct
{
    const uint32 _PFRXC0 : 16;
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
} ETNA0PFRCR0Bits_t;

typedef struct
{
    uint32 _TPAUSE0 : 16;
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
} ETNA0TPAUSER0Bits_t;

typedef struct
{
    const uint32 _PFRTC0 : 16;
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
} ETNA0TPFRCR0Bits_t;

typedef struct
{
    uint32 _BCF0 : 16;
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
} ETNA0BCFRR0Bits_t;

typedef struct
{
    uint32 _CNT0 : 16;
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
} ETNA0CRBCFRR0Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _SPEED0 : 1;
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
} ETNA0EMR0Bits_t;

typedef struct
{
    uint32 _MA0 : 32;
} ETNA0MAHR0Bits_t;

typedef struct
{
    uint32 _MA0 : 16;
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
} ETNA0MALR0Bits_t;

typedef struct
{
    uint32 _TROC0 : 16;
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
} ETNA0TROCR0Bits_t;

typedef struct
{
    uint32 _COSDC0 : 16;
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
} ETNA0CDCR0Bits_t;

typedef struct
{
    uint32 _LCC0 : 16;
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
} ETNA0LCCR0Bits_t;

typedef struct
{
    uint32 _CEFC0 : 16;
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
} ETNA0CEFCR0Bits_t;

typedef struct
{
    uint32 _FREC0 : 16;
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
} ETNA0FRECR0Bits_t;

typedef struct
{
    uint32 _TSFC0 : 16;
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
} ETNA0TSFRCR0Bits_t;

typedef struct
{
    uint32 _TLFC0 : 16;
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
} ETNA0TLFRCR0Bits_t;

typedef struct
{
    uint32 _RFC0 : 16;
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
} ETNA0RFCR0Bits_t;

typedef struct
{
    uint32 _MAFC0 : 16;
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
} ETNA0MAFCR0Bits_t;

typedef struct
{
    uint32 _ARST : 1;
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
} ETNA0ARSTRBits_t;

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
    uint32 _CTRST : 1;
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
} ETNA0TSU_CTRSTBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _RMSA0 : 1;
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
} ETNA0TSU_FWSL0Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _RMSA0 : 1;
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
} ETNA0TSU_FWSL1Bits_t;

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
    uint32 _POSTENL : 1;
    uint32 _POSTENU : 1;
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
} ETNA0TSU_FWSLCBits_t;

typedef struct
{
    uint32 _RINT11 : 1;
    uint32 _RINT21 : 1;
    uint32 _RINT31 : 1;
    uint32 _RINT41 : 1;
    uint32 _RINT51 : 1;
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
    uint32 _RINT10 : 1;
    uint32 _RINT20 : 1;
    uint32 _RINT30 : 1;
    uint32 _RINT40 : 1;
    uint32 _RINT50 : 1;
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
} ETNA0TSU_FWSRBits_t;

typedef struct
{
    uint32 _RINTM11 : 1;
    uint32 _RINTM21 : 1;
    uint32 _RINTM31 : 1;
    uint32 _RINTM41 : 1;
    uint32 _RINTM51 : 1;
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
    uint32 _RINTM10 : 1;
    uint32 _RINTM20 : 1;
    uint32 _RINTM30 : 1;
    uint32 _RINTM40 : 1;
    uint32 _RINTM50 : 1;
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
} ETNA0TSU_FWINMKBits_t;

typedef struct
{
    uint32 _VID0 : 12;
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
    uint32 _VTAG0 : 1;
} ETNA0TSU_VTAG0Bits_t;

typedef struct
{
    uint32 _VID1 : 12;
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
    uint32 _VTAG1 : 1;
} ETNA0TSU_VTAG1Bits_t;

typedef struct
{
    const uint32 _ADSBSY : 1;
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
} ETNA0TSU_ADSBSYBits_t;

typedef struct
{
    uint32 _TEN31 : 1;
    uint32 _TEN30 : 1;
    uint32 _TEN29 : 1;
    uint32 _TEN28 : 1;
    uint32 _TEN27 : 1;
    uint32 _TEN26 : 1;
    uint32 _TEN25 : 1;
    uint32 _TEN24 : 1;
    uint32 _TEN23 : 1;
    uint32 _TEN22 : 1;
    uint32 _TEN21 : 1;
    uint32 _TEN20 : 1;
    uint32 _TEN19 : 1;
    uint32 _TEN18 : 1;
    uint32 _TEN17 : 1;
    uint32 _TEN16 : 1;
    uint32 _TEN15 : 1;
    uint32 _TEN14 : 1;
    uint32 _TEN13 : 1;
    uint32 _TEN12 : 1;
    uint32 _TEN11 : 1;
    uint32 _TEN10 : 1;
    uint32 _TEN9 : 1;
    uint32 _TEN8 : 1;
    uint32 _TEN7 : 1;
    uint32 _TEN6 : 1;
    uint32 _TEN5 : 1;
    uint32 _TEN4 : 1;
    uint32 _TEN3 : 1;
    uint32 _TEN2 : 1;
    uint32 _TEN1 : 1;
    uint32 _TEN0 : 1;
} ETNA0TSU_TENBits_t;

typedef struct
{
    uint32 _POST7 : 4;
    uint32 _POST6 : 4;
    uint32 _POST5 : 4;
    uint32 _POST4 : 4;
    uint32 _POST3 : 4;
    uint32 _POST2 : 4;
    uint32 _POST1 : 4;
    uint32 _POST0 : 4;
} ETNA0TSU_POST1Bits_t;

typedef struct
{
    uint32 _POST15 : 4;
    uint32 _POST14 : 4;
    uint32 _POST13 : 4;
    uint32 _POST12 : 4;
    uint32 _POST11 : 4;
    uint32 _POST10 : 4;
    uint32 _POST9 : 4;
    uint32 _POST8 : 4;
} ETNA0TSU_POST2Bits_t;

typedef struct
{
    uint32 _POST23 : 4;
    uint32 _POST22 : 4;
    uint32 _POST21 : 4;
    uint32 _POST20 : 4;
    uint32 _POST19 : 4;
    uint32 _POST18 : 4;
    uint32 _POST17 : 4;
    uint32 _POST16 : 4;
} ETNA0TSU_POST3Bits_t;

typedef struct
{
    uint32 _POST31 : 4;
    uint32 _POST30 : 4;
    uint32 _POST29 : 4;
    uint32 _POST28 : 4;
    uint32 _POST27 : 4;
    uint32 _POST26 : 4;
    uint32 _POST25 : 4;
    uint32 _POST24 : 4;
} ETNA0TSU_POST4Bits_t;

typedef struct
{
    const uint32 _NTC0 : 32;
} ETNA0TXNLCR0Bits_t;

typedef struct
{
    const uint32 _TC0 : 32;
} ETNA0TXALCR0Bits_t;

typedef struct
{
    const uint32 _NRC0 : 32;
} ETNA0RXNLCR0Bits_t;

typedef struct
{
    const uint32 _RC0 : 32;
} ETNA0RXALCR0Bits_t;

typedef struct
{
    const uint32 _NTC1 : 32;
} ETNA0TXNLCR1Bits_t;

typedef struct
{
    const uint32 _TC1 : 32;
} ETNA0TXALCR1Bits_t;

typedef struct
{
    const uint32 _NRC1 : 32;
} ETNA0RXNLCR1Bits_t;

typedef struct
{
    const uint32 _RC1 : 32;
} ETNA0RXALCR1Bits_t;

typedef struct
{
    uint32 _ADRH0 : 32;
} ETNA0TSU_ADRH0Bits_t;

typedef struct
{
    uint32 _ADRL0 : 16;
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
} ETNA0TSU_ADRL0Bits_t;

typedef struct
{
    uint32 _ADRH1 : 32;
} ETNA0TSU_ADRH1Bits_t;

typedef struct
{
    uint32 _ADRL1 : 16;
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
} ETNA0TSU_ADRL1Bits_t;

typedef struct
{
    uint32 _ADRH2 : 32;
} ETNA0TSU_ADRH2Bits_t;

typedef struct
{
    uint32 _ADRL2 : 16;
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
} ETNA0TSU_ADRL2Bits_t;

typedef struct
{
    uint32 _ADRH3 : 32;
} ETNA0TSU_ADRH3Bits_t;

typedef struct
{
    uint32 _ADRL3 : 16;
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
} ETNA0TSU_ADRL3Bits_t;

typedef struct
{
    uint32 _ADRH4 : 32;
} ETNA0TSU_ADRH4Bits_t;

typedef struct
{
    uint32 _ADRL4 : 16;
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
} ETNA0TSU_ADRL4Bits_t;

typedef struct
{
    uint32 _ADRH5 : 32;
} ETNA0TSU_ADRH5Bits_t;

typedef struct
{
    uint32 _ADRL5 : 16;
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
} ETNA0TSU_ADRL5Bits_t;

typedef struct
{
    uint32 _ADRH6 : 32;
} ETNA0TSU_ADRH6Bits_t;

typedef struct
{
    uint32 _ADRL6 : 16;
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
} ETNA0TSU_ADRL6Bits_t;

typedef struct
{
    uint32 _ADRH7 : 32;
} ETNA0TSU_ADRH7Bits_t;

typedef struct
{
    uint32 _ADRL7 : 16;
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
} ETNA0TSU_ADRL7Bits_t;

typedef struct
{
    uint32 _ADRH8 : 32;
} ETNA0TSU_ADRH8Bits_t;

typedef struct
{
    uint32 _ADRL8 : 16;
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
} ETNA0TSU_ADRL8Bits_t;

typedef struct
{
    uint32 _ADRH9 : 32;
} ETNA0TSU_ADRH9Bits_t;

typedef struct
{
    uint32 _ADRL9 : 16;
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
} ETNA0TSU_ADRL9Bits_t;

typedef struct
{
    uint32 _ADRH10 : 32;
} ETNA0TSU_ADRH10Bits_t;

typedef struct
{
    uint32 _ADRL10 : 16;
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
} ETNA0TSU_ADRL10Bits_t;

typedef struct
{
    uint32 _ADRH11 : 32;
} ETNA0TSU_ADRH11Bits_t;

typedef struct
{
    uint32 _ADRL11 : 16;
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
} ETNA0TSU_ADRL11Bits_t;

typedef struct
{
    uint32 _ADRH12 : 32;
} ETNA0TSU_ADRH12Bits_t;

typedef struct
{
    uint32 _ADRL12 : 16;
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
} ETNA0TSU_ADRL12Bits_t;

typedef struct
{
    uint32 _ADRH13 : 32;
} ETNA0TSU_ADRH13Bits_t;

typedef struct
{
    uint32 _ADRL13 : 16;
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
} ETNA0TSU_ADRL13Bits_t;

typedef struct
{
    uint32 _ADRH14 : 32;
} ETNA0TSU_ADRH14Bits_t;

typedef struct
{
    uint32 _ADRL14 : 16;
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
} ETNA0TSU_ADRL14Bits_t;

typedef struct
{
    uint32 _ADRH15 : 32;
} ETNA0TSU_ADRH15Bits_t;

typedef struct
{
    uint32 _ADRL15 : 16;
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
} ETNA0TSU_ADRL15Bits_t;

typedef struct
{
    uint32 _ADRH16 : 32;
} ETNA0TSU_ADRH16Bits_t;

typedef struct
{
    uint32 _ADRL16 : 16;
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
} ETNA0TSU_ADRL16Bits_t;

typedef struct
{
    uint32 _ADRH17 : 32;
} ETNA0TSU_ADRH17Bits_t;

typedef struct
{
    uint32 _ADRL17 : 16;
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
} ETNA0TSU_ADRL17Bits_t;

typedef struct
{
    uint32 _ADRH18 : 32;
} ETNA0TSU_ADRH18Bits_t;

typedef struct
{
    uint32 _ADRL18 : 16;
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
} ETNA0TSU_ADRL18Bits_t;

typedef struct
{
    uint32 _ADRH19 : 32;
} ETNA0TSU_ADRH19Bits_t;

typedef struct
{
    uint32 _ADRL19 : 16;
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
} ETNA0TSU_ADRL19Bits_t;

typedef struct
{
    uint32 _ADRH20 : 32;
} ETNA0TSU_ADRH20Bits_t;

typedef struct
{
    uint32 _ADRL20 : 16;
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
} ETNA0TSU_ADRL20Bits_t;

typedef struct
{
    uint32 _ADRH21 : 32;
} ETNA0TSU_ADRH21Bits_t;

typedef struct
{
    uint32 _ADRL21 : 16;
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
} ETNA0TSU_ADRL21Bits_t;

typedef struct
{
    uint32 _ADRH22 : 32;
} ETNA0TSU_ADRH22Bits_t;

typedef struct
{
    uint32 _ADRL22 : 16;
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
} ETNA0TSU_ADRL22Bits_t;

typedef struct
{
    uint32 _ADRH23 : 32;
} ETNA0TSU_ADRH23Bits_t;

typedef struct
{
    uint32 _ADRL23 : 16;
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
} ETNA0TSU_ADRL23Bits_t;

typedef struct
{
    uint32 _ADRH24 : 32;
} ETNA0TSU_ADRH24Bits_t;

typedef struct
{
    uint32 _ADRL24 : 16;
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
} ETNA0TSU_ADRL24Bits_t;

typedef struct
{
    uint32 _ADRH25 : 32;
} ETNA0TSU_ADRH25Bits_t;

typedef struct
{
    uint32 _ADRL25 : 16;
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
} ETNA0TSU_ADRL25Bits_t;

typedef struct
{
    uint32 _ADRH26 : 32;
} ETNA0TSU_ADRH26Bits_t;

typedef struct
{
    uint32 _ADRL26 : 16;
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
} ETNA0TSU_ADRL26Bits_t;

typedef struct
{
    uint32 _ADRH27 : 32;
} ETNA0TSU_ADRH27Bits_t;

typedef struct
{
    uint32 _ADRL27 : 16;
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
} ETNA0TSU_ADRL27Bits_t;

typedef struct
{
    uint32 _ADRH28 : 32;
} ETNA0TSU_ADRH28Bits_t;

typedef struct
{
    uint32 _ADRL28 : 16;
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
} ETNA0TSU_ADRL28Bits_t;

typedef struct
{
    uint32 _ADRH29 : 32;
} ETNA0TSU_ADRH29Bits_t;

typedef struct
{
    uint32 _ADRL29 : 16;
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
} ETNA0TSU_ADRL29Bits_t;

typedef struct
{
    uint32 _ADRH30 : 32;
} ETNA0TSU_ADRH30Bits_t;

typedef struct
{
    uint32 _ADRL30 : 16;
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
} ETNA0TSU_ADRL30Bits_t;

typedef struct
{
    uint32 _ADRH31 : 32;
} ETNA0TSU_ADRH31Bits_t;

typedef struct
{
    uint32 _ADRL31 : 16;
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
} ETNA0TSU_ADRL31Bits_t;

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
    uint32 _ITO0 : 1;
    uint32 _DTO0 : 1;
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
} ETNA0HDMMDR0Bits_t;

typedef struct
{
    const uint32 _HDIS0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _SLS00 : 1;
    uint32 _SLS10 : 1;
    uint32 _SLS20 : 1;
    uint32 _SLS30 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 _ITOS0 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 _MSS20 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 _DTOS0 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0HDMISR0Bits_t;

typedef struct
{
    uint32 _HDIE0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _SLE00 : 1;
    uint32 _SLE10 : 1;
    uint32 _SLE20 : 1;
    uint32 _SLE30 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 _ITOE0 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 _MSE20 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 _DTOE0 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0HDMIER0Bits_t;

typedef struct
{
    uint32 _ENR1 : 1;
    uint32 _ENT1 : 1;
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
    uint32 _GPO1 : 1;
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
} ETNA0EDSR1Bits_t;

typedef struct
{
    uint32 _TDLA1 : 32;
} ETNA0TDLAR1Bits_t;

typedef struct
{
    uint32 _TDFA1 : 32;
} ETNA0TDFAR1Bits_t;

typedef struct
{
    uint32 _TDFX0 : 32;
} ETNA0TDFXR1Bits_t;

typedef struct
{
    uint32 _TDLF1 : 1;
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
} ETNA0TDFFR1Bits_t;

typedef struct
{
    uint32 _RDLA1 : 32;
} ETNA0RDLAR1Bits_t;

typedef struct
{
    uint32 _RDFA1 : 32;
} ETNA0RDFAR1Bits_t;

typedef struct
{
    uint32 _RDFX1 : 32;
} ETNA0RDFXR1Bits_t;

typedef struct
{
    uint32 _RDLF1 : 1;
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
} ETNA0RDFFR1Bits_t;

typedef struct
{
    uint32 _SWRR1 : 1;
    uint32 _SWRT1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _DL1 : 2;
    uint32 _DE1 : 1;
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
} ETNA0EDMR1Bits_t;

typedef struct
{
    uint32 _TR1 : 2;
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
} ETNA0EDTRR1Bits_t;

typedef struct
{
    uint32 _RR1 : 1;
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
} ETNA0EDRRR1Bits_t;

typedef struct
{
    uint32 _CERF1 : 1;
    uint32 _PRE1 : 1;
    uint32 _RTSF1 : 1;
    uint32 _RTLF1 : 1;
    uint32 _RRF1 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _RMAF1 : 1;
    uint32 _TRO1 : 1;
    uint32 _CD1 : 1;
    uint32 _DLC1 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RFOF1 : 1;
    uint32 _RDE1 : 1;
    uint32 _FR1 : 1;
    uint32 padding19 : 1;
    uint32 _TDE1 : 1;
    uint32 _TC1_0 : 1;
    const uint32 _ECI1 : 1;
    uint32 padding23 : 1;
    uint32 _RFCOF1 : 1;
    uint32 _RABT1 : 1;
    uint32 padding26 : 1;
    uint32 _ROC1 : 1;
    uint32 padding28 : 1;
    uint32 _TC1_1 : 1;
    uint32 _TWB1 : 2;
} ETNA0EESR1Bits_t;

typedef struct
{
    uint32 _CERF1IP : 1;
    uint32 _PRE1IP : 1;
    uint32 _RTSF1IP : 1;
    uint32 _RTLF1IP : 1;
    uint32 _RRF1IP : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _RMAF1IP : 1;
    uint32 _TRO1IP : 1;
    uint32 _CD1IP : 1;
    uint32 _DLC1IP : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RFOF1IP : 1;
    uint32 _RDE1IP : 1;
    uint32 _FR1IP : 1;
    uint32 padding19 : 1;
    uint32 _TDE1IP : 1;
    uint32 _TC01IP : 1;
    uint32 _ECI1IP : 1;
    uint32 padding23 : 1;
    uint32 _RFCOF1IP : 1;
    uint32 _RABT1IP : 1;
    uint32 padding26 : 1;
    uint32 _ROC1IP : 1;
    uint32 padding28 : 1;
    uint32 _TC10IP : 1;
    uint32 _TWB01IP : 1;
    uint32 _TWB10IP : 1;
} ETNA0EESIPR1Bits_t;

typedef struct
{
    uint32 _CERF1CE : 1;
    uint32 _PRE1CE : 1;
    uint32 _RTSF1CE : 1;
    uint32 _RTLF1CE : 1;
    uint32 _RRF1CE : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _RMAF1CE : 1;
    uint32 _RABT1CE : 1;
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
} ETNA0TRSCER1Bits_t;

typedef struct
{
    uint32 _MFC1 : 16;
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
} ETNA0RMFCR1Bits_t;

typedef struct
{
    uint32 _RFD1 : 8;
    uint32 _TFD1 : 5;
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
} ETNA0FDR1Bits_t;

typedef struct
{
    uint32 _RNC1 : 1;
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
} ETNA0RMCR1Bits_t;

typedef struct
{
    uint32 _PADR1 : 16;
    uint32 _PADS1 : 5;
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
} ETNA0RPADIR1Bits_t;

typedef struct
{
    uint32 _RFS1 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _RFF1 : 5;
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
} ETNA0FCFTR1Bits_t;

typedef struct
{
    const uint32 _TDAM1 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _TFAM1 : 3;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    const uint32 _TWBR1 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0TFSR1Bits_t;

typedef struct
{
    const uint32 _RDAM1 : 9;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _RFAM1 : 3;
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
} ETNA0RFSR1Bits_t;

typedef struct
{
    uint32 _PRM1 : 1;
    uint32 _DM1 : 1;
    uint32 padding2 : 1;
    uint32 _ILB1 : 1;
    uint32 padding4 : 1;
    uint32 _TE1 : 1;
    uint32 _RE1 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 _MPDE1 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _MCT1 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _TXF1 : 1;
    uint32 _RXF1 : 1;
    uint32 _PFR1 : 1;
    uint32 _TZPF1_DCAC1 : 1;
    uint32 _RZPF1 : 1;
    uint32 _DPAD1 : 1;
    uint32 padding22 : 1;
    uint32 _RCSC1 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 _TRCCM1 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0ECMR1Bits_t;

typedef struct
{
    uint32 _RFL1 : 18;
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
} ETNA0RFLR1Bits_t;

typedef struct
{
    uint32 _ICD1 : 1;
    uint32 _MPD1 : 1;
    uint32 _LINKI1 : 1;
    uint32 padding3 : 1;
    uint32 _PFROI1 : 1;
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
} ETNA0ECSR1Bits_t;

typedef struct
{
    uint32 _ICDIP1 : 1;
    uint32 _MPDIP1 : 1;
    uint32 _LINKIP1 : 1;
    uint32 padding3 : 1;
    uint32 _PFROIP1 : 1;
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
} ETNA0ECSIPR1Bits_t;

typedef struct
{
    uint32 _MDC1 : 1;
    uint32 _MMD1 : 1;
    uint32 _MDO1 : 1;
    uint32 _MDI1 : 1;
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
} ETNA0PIR1Bits_t;

typedef struct
{
    const uint32 _LINK0 : 1;
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
} ETNA0PLSR1Bits_t;

typedef struct
{
    uint32 _PHYIL1 : 1;
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
} ETNA0PIPR1Bits_t;

typedef struct
{
    uint32 _AP1 : 16;
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
} ETNA0APR1Bits_t;

typedef struct
{
    uint32 _MP1 : 16;
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
} ETNA0MPR1Bits_t;

typedef struct
{
    const uint32 _PFTXC1 : 16;
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
} ETNA0PFTCR1Bits_t;

typedef struct
{
    const uint32 _PFRXC1 : 16;
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
} ETNA0PFRCR1Bits_t;

typedef struct
{
    uint32 _TPAUSE1 : 16;
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
} ETNA0TPAUSER1Bits_t;

typedef struct
{
    const uint32 _PFRTC1 : 16;
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
} ETNA0TPFRCR1Bits_t;

typedef struct
{
    uint32 _BCF1 : 16;
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
} ETNA0BCFRR1Bits_t;

typedef struct
{
    uint32 _CNT1 : 16;
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
} ETNA0CRBCFRR1Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 _SPEED1 : 1;
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
} ETNA0EMR1Bits_t;

typedef struct
{
    uint32 _MA1 : 32;
} ETNA0MAHR1Bits_t;

typedef struct
{
    uint32 _MA1 : 16;
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
} ETNA0MALR1Bits_t;

typedef struct
{
    uint32 _TROC1 : 16;
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
} ETNA0TROCR1Bits_t;

typedef struct
{
    uint32 _COSDC1 : 16;
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
} ETNA0CDCR1Bits_t;

typedef struct
{
    uint32 _LCC1 : 16;
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
} ETNA0LCCR1Bits_t;

typedef struct
{
    uint32 _CEFC1 : 16;
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
} ETNA0CEFCR1Bits_t;

typedef struct
{
    uint32 _FREC1 : 16;
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
} ETNA0FRECR1Bits_t;

typedef struct
{
    uint32 _TSFC1 : 16;
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
} ETNA0TSFRCR1Bits_t;

typedef struct
{
    uint32 _TLFC1 : 16;
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
} ETNA0TLFRCR1Bits_t;

typedef struct
{
    uint32 _RFC1 : 16;
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
} ETNA0RFCR1Bits_t;

typedef struct
{
    uint32 _MAFC1 : 16;
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
} ETNA0MAFCR1Bits_t;

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
    uint32 _ITO1 : 1;
    uint32 _DTO1 : 1;
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
} ETNA0HDMMDR1Bits_t;

typedef struct
{
    const uint32 _HDIS1 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _SLS01 : 1;
    uint32 _SLS11 : 1;
    uint32 _SLS21 : 1;
    uint32 _SLS31 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 _ITOS1 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 _MSS21 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 _DTOS1 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0HDMISR1Bits_t;

typedef struct
{
    uint32 _HDIE0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _SLE00 : 1;
    uint32 _SLE10 : 1;
    uint32 _SLE20 : 1;
    uint32 _SLE30 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 _ITOE0 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 _MSE20 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 _DTOE0 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ETNA0HDMIER1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ETNA0EDSR0Bits_t BIT;
} ETNA0EDSR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDLAR0Bits_t BIT;
} ETNA0TDLAR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDFAR0Bits_t BIT;
} ETNA0TDFAR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDFXR0Bits_t BIT;
} ETNA0TDFXR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDFFR0Bits_t BIT;
} ETNA0TDFFR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDLAR0Bits_t BIT;
} ETNA0RDLAR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDFAR0Bits_t BIT;
} ETNA0RDFAR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDFXR0Bits_t BIT;
} ETNA0RDFXR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDFFR0Bits_t BIT;
} ETNA0RDFFR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0EDMR0Bits_t BIT;
} ETNA0EDMR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0EDTRR0Bits_t BIT;
} ETNA0EDTRR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0EDRRR0Bits_t BIT;
} ETNA0EDRRR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0EESR0Bits_t BIT;
} ETNA0EESR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0EESIPR0Bits_t BIT;
} ETNA0EESIPR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TRSCER0Bits_t BIT;
} ETNA0TRSCER0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RMFCR0Bits_t BIT;
} ETNA0RMFCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0FDR0Bits_t BIT;
} ETNA0FDR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RMCR0Bits_t BIT;
} ETNA0RMCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RPADIR0Bits_t BIT;
} ETNA0RPADIR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0FCFTR0Bits_t BIT;
} ETNA0FCFTR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TFSR0Bits_t BIT;
} ETNA0TFSR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0RFSR0Bits_t BIT;
} ETNA0RFSR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0ECMR0Bits_t BIT;
} ETNA0ECMR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RFLR0Bits_t BIT;
} ETNA0RFLR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0ECSR0Bits_t BIT;
} ETNA0ECSR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0ECSIPR0Bits_t BIT;
} ETNA0ECSIPR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0PIR0Bits_t BIT;
} ETNA0PIR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0PLSR0Bits_t BIT;
} ETNA0PLSR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0PIPR0Bits_t BIT;
} ETNA0PIPR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0APR0Bits_t BIT;
} ETNA0APR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0MPR0Bits_t BIT;
} ETNA0MPR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0PFTCR0Bits_t BIT;
} ETNA0PFTCR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0PFRCR0Bits_t BIT;
} ETNA0PFRCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TPAUSER0Bits_t BIT;
} ETNA0TPAUSER0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TPFRCR0Bits_t BIT;
} ETNA0TPFRCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0BCFRR0Bits_t BIT;
} ETNA0BCFRR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0CRBCFRR0Bits_t BIT;
} ETNA0CRBCFRR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0EMR0Bits_t BIT;
} ETNA0EMR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0MAHR0Bits_t BIT;
} ETNA0MAHR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0MALR0Bits_t BIT;
} ETNA0MALR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TROCR0Bits_t BIT;
} ETNA0TROCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0CDCR0Bits_t BIT;
} ETNA0CDCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0LCCR0Bits_t BIT;
} ETNA0LCCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0CEFCR0Bits_t BIT;
} ETNA0CEFCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0FRECR0Bits_t BIT;
} ETNA0FRECR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSFRCR0Bits_t BIT;
} ETNA0TSFRCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TLFRCR0Bits_t BIT;
} ETNA0TLFRCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0RFCR0Bits_t BIT;
} ETNA0RFCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0MAFCR0Bits_t BIT;
} ETNA0MAFCR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0ARSTRBits_t BIT;
} ETNA0ARSTR_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_CTRSTBits_t BIT;
} ETNA0TSU_CTRST_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_FWSL0Bits_t BIT;
} ETNA0TSU_FWSL0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_FWSL1Bits_t BIT;
} ETNA0TSU_FWSL1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_FWSLCBits_t BIT;
} ETNA0TSU_FWSLC_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_FWSRBits_t BIT;
} ETNA0TSU_FWSR_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_FWINMKBits_t BIT;
} ETNA0TSU_FWINMK_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_VTAG0Bits_t BIT;
} ETNA0TSU_VTAG0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_VTAG1Bits_t BIT;
} ETNA0TSU_VTAG1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TSU_ADSBSYBits_t BIT;
} ETNA0TSU_ADSBSY_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_TENBits_t BIT;
} ETNA0TSU_TEN_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_POST1Bits_t BIT;
} ETNA0TSU_POST1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_POST2Bits_t BIT;
} ETNA0TSU_POST2_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_POST3Bits_t BIT;
} ETNA0TSU_POST3_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_POST4Bits_t BIT;
} ETNA0TSU_POST4_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TXNLCR0Bits_t BIT;
} ETNA0TXNLCR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TXALCR0Bits_t BIT;
} ETNA0TXALCR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0RXNLCR0Bits_t BIT;
} ETNA0RXNLCR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0RXALCR0Bits_t BIT;
} ETNA0RXALCR0_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TXNLCR1Bits_t BIT;
} ETNA0TXNLCR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TXALCR1Bits_t BIT;
} ETNA0TXALCR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0RXNLCR1Bits_t BIT;
} ETNA0RXNLCR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0RXALCR1Bits_t BIT;
} ETNA0RXALCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH0Bits_t BIT;
} ETNA0TSU_ADRH0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL0Bits_t BIT;
} ETNA0TSU_ADRL0_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH1Bits_t BIT;
} ETNA0TSU_ADRH1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL1Bits_t BIT;
} ETNA0TSU_ADRL1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH2Bits_t BIT;
} ETNA0TSU_ADRH2_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL2Bits_t BIT;
} ETNA0TSU_ADRL2_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH3Bits_t BIT;
} ETNA0TSU_ADRH3_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL3Bits_t BIT;
} ETNA0TSU_ADRL3_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH4Bits_t BIT;
} ETNA0TSU_ADRH4_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL4Bits_t BIT;
} ETNA0TSU_ADRL4_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH5Bits_t BIT;
} ETNA0TSU_ADRH5_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL5Bits_t BIT;
} ETNA0TSU_ADRL5_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH6Bits_t BIT;
} ETNA0TSU_ADRH6_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL6Bits_t BIT;
} ETNA0TSU_ADRL6_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH7Bits_t BIT;
} ETNA0TSU_ADRH7_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL7Bits_t BIT;
} ETNA0TSU_ADRL7_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH8Bits_t BIT;
} ETNA0TSU_ADRH8_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL8Bits_t BIT;
} ETNA0TSU_ADRL8_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH9Bits_t BIT;
} ETNA0TSU_ADRH9_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL9Bits_t BIT;
} ETNA0TSU_ADRL9_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH10Bits_t BIT;
} ETNA0TSU_ADRH10_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL10Bits_t BIT;
} ETNA0TSU_ADRL10_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH11Bits_t BIT;
} ETNA0TSU_ADRH11_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL11Bits_t BIT;
} ETNA0TSU_ADRL11_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH12Bits_t BIT;
} ETNA0TSU_ADRH12_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL12Bits_t BIT;
} ETNA0TSU_ADRL12_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH13Bits_t BIT;
} ETNA0TSU_ADRH13_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL13Bits_t BIT;
} ETNA0TSU_ADRL13_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH14Bits_t BIT;
} ETNA0TSU_ADRH14_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL14Bits_t BIT;
} ETNA0TSU_ADRL14_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH15Bits_t BIT;
} ETNA0TSU_ADRH15_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL15Bits_t BIT;
} ETNA0TSU_ADRL15_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH16Bits_t BIT;
} ETNA0TSU_ADRH16_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL16Bits_t BIT;
} ETNA0TSU_ADRL16_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH17Bits_t BIT;
} ETNA0TSU_ADRH17_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL17Bits_t BIT;
} ETNA0TSU_ADRL17_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH18Bits_t BIT;
} ETNA0TSU_ADRH18_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL18Bits_t BIT;
} ETNA0TSU_ADRL18_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH19Bits_t BIT;
} ETNA0TSU_ADRH19_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL19Bits_t BIT;
} ETNA0TSU_ADRL19_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH20Bits_t BIT;
} ETNA0TSU_ADRH20_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL20Bits_t BIT;
} ETNA0TSU_ADRL20_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH21Bits_t BIT;
} ETNA0TSU_ADRH21_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL21Bits_t BIT;
} ETNA0TSU_ADRL21_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH22Bits_t BIT;
} ETNA0TSU_ADRH22_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL22Bits_t BIT;
} ETNA0TSU_ADRL22_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH23Bits_t BIT;
} ETNA0TSU_ADRH23_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL23Bits_t BIT;
} ETNA0TSU_ADRL23_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH24Bits_t BIT;
} ETNA0TSU_ADRH24_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL24Bits_t BIT;
} ETNA0TSU_ADRL24_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH25Bits_t BIT;
} ETNA0TSU_ADRH25_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL25Bits_t BIT;
} ETNA0TSU_ADRL25_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH26Bits_t BIT;
} ETNA0TSU_ADRH26_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL26Bits_t BIT;
} ETNA0TSU_ADRL26_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH27Bits_t BIT;
} ETNA0TSU_ADRH27_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL27Bits_t BIT;
} ETNA0TSU_ADRL27_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH28Bits_t BIT;
} ETNA0TSU_ADRH28_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL28Bits_t BIT;
} ETNA0TSU_ADRL28_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH29Bits_t BIT;
} ETNA0TSU_ADRH29_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL29Bits_t BIT;
} ETNA0TSU_ADRL29_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH30Bits_t BIT;
} ETNA0TSU_ADRH30_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL30Bits_t BIT;
} ETNA0TSU_ADRL30_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRH31Bits_t BIT;
} ETNA0TSU_ADRH31_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSU_ADRL31Bits_t BIT;
} ETNA0TSU_ADRL31_t;

typedef union
{
    uint32 UINT32;
    ETNA0HDMMDR0Bits_t BIT;
} ETNA0HDMMDR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0HDMISR0Bits_t BIT;
} ETNA0HDMISR0_t;

typedef union
{
    uint32 UINT32;
    ETNA0HDMIER0Bits_t BIT;
} ETNA0HDMIER0_t;

typedef union
{
    uint32 UINT32;
    ETNA0EDSR1Bits_t BIT;
} ETNA0EDSR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDLAR1Bits_t BIT;
} ETNA0TDLAR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDFAR1Bits_t BIT;
} ETNA0TDFAR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDFXR1Bits_t BIT;
} ETNA0TDFXR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TDFFR1Bits_t BIT;
} ETNA0TDFFR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDLAR1Bits_t BIT;
} ETNA0RDLAR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDFAR1Bits_t BIT;
} ETNA0RDFAR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDFXR1Bits_t BIT;
} ETNA0RDFXR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RDFFR1Bits_t BIT;
} ETNA0RDFFR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0EDMR1Bits_t BIT;
} ETNA0EDMR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0EDTRR1Bits_t BIT;
} ETNA0EDTRR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0EDRRR1Bits_t BIT;
} ETNA0EDRRR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0EESR1Bits_t BIT;
} ETNA0EESR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0EESIPR1Bits_t BIT;
} ETNA0EESIPR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TRSCER1Bits_t BIT;
} ETNA0TRSCER1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RMFCR1Bits_t BIT;
} ETNA0RMFCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0FDR1Bits_t BIT;
} ETNA0FDR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RMCR1Bits_t BIT;
} ETNA0RMCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RPADIR1Bits_t BIT;
} ETNA0RPADIR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0FCFTR1Bits_t BIT;
} ETNA0FCFTR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TFSR1Bits_t BIT;
} ETNA0TFSR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0RFSR1Bits_t BIT;
} ETNA0RFSR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0ECMR1Bits_t BIT;
} ETNA0ECMR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RFLR1Bits_t BIT;
} ETNA0RFLR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0ECSR1Bits_t BIT;
} ETNA0ECSR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0ECSIPR1Bits_t BIT;
} ETNA0ECSIPR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0PIR1Bits_t BIT;
} ETNA0PIR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0PLSR1Bits_t BIT;
} ETNA0PLSR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0PIPR1Bits_t BIT;
} ETNA0PIPR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0APR1Bits_t BIT;
} ETNA0APR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0MPR1Bits_t BIT;
} ETNA0MPR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0PFTCR1Bits_t BIT;
} ETNA0PFTCR1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0PFRCR1Bits_t BIT;
} ETNA0PFRCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TPAUSER1Bits_t BIT;
} ETNA0TPAUSER1_t;

typedef union
{
    uint32 UINT32;
    const ETNA0TPFRCR1Bits_t BIT;
} ETNA0TPFRCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0BCFRR1Bits_t BIT;
} ETNA0BCFRR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0CRBCFRR1Bits_t BIT;
} ETNA0CRBCFRR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0EMR1Bits_t BIT;
} ETNA0EMR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0MAHR1Bits_t BIT;
} ETNA0MAHR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0MALR1Bits_t BIT;
} ETNA0MALR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TROCR1Bits_t BIT;
} ETNA0TROCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0CDCR1Bits_t BIT;
} ETNA0CDCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0LCCR1Bits_t BIT;
} ETNA0LCCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0CEFCR1Bits_t BIT;
} ETNA0CEFCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0FRECR1Bits_t BIT;
} ETNA0FRECR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TSFRCR1Bits_t BIT;
} ETNA0TSFRCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0TLFRCR1Bits_t BIT;
} ETNA0TLFRCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0RFCR1Bits_t BIT;
} ETNA0RFCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0MAFCR1Bits_t BIT;
} ETNA0MAFCR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0HDMMDR1Bits_t BIT;
} ETNA0HDMMDR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0HDMISR1Bits_t BIT;
} ETNA0HDMISR1_t;

typedef union
{
    uint32 UINT32;
    ETNA0HDMIER1Bits_t BIT;
} ETNA0HDMIER1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ETNA0EDSR0_BASE, 0x10024000, __READ_WRITE, ETNA0EDSR0_t);
__IOREG(ETNA0TDLAR0_BASE, 0x10024010, __READ_WRITE, ETNA0TDLAR0_t);
__IOREG(ETNA0TDFAR0_BASE, 0x10024014, __READ_WRITE, ETNA0TDFAR0_t);
__IOREG(ETNA0TDFXR0_BASE, 0x10024018, __READ_WRITE, ETNA0TDFXR0_t);
__IOREG(ETNA0TDFFR0_BASE, 0x1002401C, __READ_WRITE, ETNA0TDFFR0_t);
__IOREG(ETNA0RDLAR0_BASE, 0x10024030, __READ_WRITE, ETNA0RDLAR0_t);
__IOREG(ETNA0RDFAR0_BASE, 0x10024034, __READ_WRITE, ETNA0RDFAR0_t);
__IOREG(ETNA0RDFXR0_BASE, 0x10024038, __READ_WRITE, ETNA0RDFXR0_t);
__IOREG(ETNA0RDFFR0_BASE, 0x1002403C, __READ_WRITE, ETNA0RDFFR0_t);
__IOREG(ETNA0EDMR0_BASE, 0x10024400, __READ_WRITE, ETNA0EDMR0_t);
__IOREG(ETNA0EDTRR0_BASE, 0x10024408, __READ_WRITE, ETNA0EDTRR0_t);
__IOREG(ETNA0EDRRR0_BASE, 0x10024410, __READ_WRITE, ETNA0EDRRR0_t);
__IOREG(ETNA0EESR0_BASE, 0x10024428, __READ_WRITE, ETNA0EESR0_t);
__IOREG(ETNA0EESIPR0_BASE, 0x10024430, __READ_WRITE, ETNA0EESIPR0_t);
__IOREG(ETNA0TRSCER0_BASE, 0x10024438, __READ_WRITE, ETNA0TRSCER0_t);
__IOREG(ETNA0RMFCR0_BASE, 0x10024440, __READ_WRITE, ETNA0RMFCR0_t);
__IOREG(ETNA0FDR0_BASE, 0x10024450, __READ_WRITE, ETNA0FDR0_t);
__IOREG(ETNA0RMCR0_BASE, 0x10024458, __READ_WRITE, ETNA0RMCR0_t);
__IOREG(ETNA0RPADIR0_BASE, 0x10024460, __READ_WRITE, ETNA0RPADIR0_t);
__IOREG(ETNA0FCFTR0_BASE, 0x10024468, __READ_WRITE, ETNA0FCFTR0_t);
__IOREG(ETNA0TFSR0_BASE, 0x10024480, __READ, ETNA0TFSR0_t);
__IOREG(ETNA0RFSR0_BASE, 0x10024488, __READ, ETNA0RFSR0_t);
__IOREG(ETNA0ECMR0_BASE, 0x10024500, __READ_WRITE, ETNA0ECMR0_t);
__IOREG(ETNA0RFLR0_BASE, 0x10024508, __READ_WRITE, ETNA0RFLR0_t);
__IOREG(ETNA0ECSR0_BASE, 0x10024510, __READ_WRITE, ETNA0ECSR0_t);
__IOREG(ETNA0ECSIPR0_BASE, 0x10024518, __READ_WRITE, ETNA0ECSIPR0_t);
__IOREG(ETNA0PIR0_BASE, 0x10024520, __READ_WRITE, ETNA0PIR0_t);
__IOREG(ETNA0PLSR0_BASE, 0x10024528, __READ, ETNA0PLSR0_t);
__IOREG(ETNA0PIPR0_BASE, 0x1002452C, __READ_WRITE, ETNA0PIPR0_t);
__IOREG(ETNA0APR0_BASE, 0x10024554, __READ_WRITE, ETNA0APR0_t);
__IOREG(ETNA0MPR0_BASE, 0x10024558, __READ_WRITE, ETNA0MPR0_t);
__IOREG(ETNA0PFTCR0_BASE, 0x1002455C, __READ, ETNA0PFTCR0_t);
__IOREG(ETNA0PFRCR0_BASE, 0x10024560, __READ, ETNA0PFRCR0_t);
__IOREG(ETNA0TPAUSER0_BASE, 0x10024564, __READ_WRITE, ETNA0TPAUSER0_t);
__IOREG(ETNA0TPFRCR0_BASE, 0x10024568, __READ, ETNA0TPFRCR0_t);
__IOREG(ETNA0BCFRR0_BASE, 0x1002456C, __READ_WRITE, ETNA0BCFRR0_t);
__IOREG(ETNA0CRBCFRR0_BASE, 0x10024570, __READ_WRITE, ETNA0CRBCFRR0_t);
__IOREG(ETNA0EMR0_BASE, 0x100245B0, __READ_WRITE, ETNA0EMR0_t);
__IOREG(ETNA0MAHR0_BASE, 0x100245C0, __READ_WRITE, ETNA0MAHR0_t);
__IOREG(ETNA0MALR0_BASE, 0x100245C8, __READ_WRITE, ETNA0MALR0_t);
__IOREG(ETNA0TROCR0_BASE, 0x10024700, __READ_WRITE, ETNA0TROCR0_t);
__IOREG(ETNA0CDCR0_BASE, 0x10024708, __READ_WRITE, ETNA0CDCR0_t);
__IOREG(ETNA0LCCR0_BASE, 0x10024710, __READ_WRITE, ETNA0LCCR0_t);
__IOREG(ETNA0CEFCR0_BASE, 0x10024740, __READ_WRITE, ETNA0CEFCR0_t);
__IOREG(ETNA0FRECR0_BASE, 0x10024748, __READ_WRITE, ETNA0FRECR0_t);
__IOREG(ETNA0TSFRCR0_BASE, 0x10024750, __READ_WRITE, ETNA0TSFRCR0_t);
__IOREG(ETNA0TLFRCR0_BASE, 0x10024758, __READ_WRITE, ETNA0TLFRCR0_t);
__IOREG(ETNA0RFCR0_BASE, 0x10024760, __READ_WRITE, ETNA0RFCR0_t);
__IOREG(ETNA0MAFCR0_BASE, 0x10024778, __READ_WRITE, ETNA0MAFCR0_t);
__IOREG(ETNA0ARSTR_BASE, 0x10024800, __READ_WRITE, ETNA0ARSTR_t);
__IOREG(ETNA0TSU_CTRST_BASE, 0x10024804, __READ_WRITE, ETNA0TSU_CTRST_t);
__IOREG(ETNA0TSU_FWSL0_BASE, 0x10024830, __READ_WRITE, ETNA0TSU_FWSL0_t);
__IOREG(ETNA0TSU_FWSL1_BASE, 0x10024834, __READ_WRITE, ETNA0TSU_FWSL1_t);
__IOREG(ETNA0TSU_FWSLC_BASE, 0x10024838, __READ_WRITE, ETNA0TSU_FWSLC_t);
__IOREG(ETNA0TSU_FWSR_BASE, 0x10024850, __READ_WRITE, ETNA0TSU_FWSR_t);
__IOREG(ETNA0TSU_FWINMK_BASE, 0x10024854, __READ_WRITE, ETNA0TSU_FWINMK_t);
__IOREG(ETNA0TSU_VTAG0_BASE, 0x10024858, __READ_WRITE, ETNA0TSU_VTAG0_t);
__IOREG(ETNA0TSU_VTAG1_BASE, 0x1002485C, __READ_WRITE, ETNA0TSU_VTAG1_t);
__IOREG(ETNA0TSU_ADSBSY_BASE, 0x10024860, __READ, ETNA0TSU_ADSBSY_t);
__IOREG(ETNA0TSU_TEN_BASE, 0x10024864, __READ_WRITE, ETNA0TSU_TEN_t);
__IOREG(ETNA0TSU_POST1_BASE, 0x10024870, __READ_WRITE, ETNA0TSU_POST1_t);
__IOREG(ETNA0TSU_POST2_BASE, 0x10024874, __READ_WRITE, ETNA0TSU_POST2_t);
__IOREG(ETNA0TSU_POST3_BASE, 0x10024878, __READ_WRITE, ETNA0TSU_POST3_t);
__IOREG(ETNA0TSU_POST4_BASE, 0x1002487C, __READ_WRITE, ETNA0TSU_POST4_t);
__IOREG(ETNA0TXNLCR0_BASE, 0x10024880, __READ, ETNA0TXNLCR0_t);
__IOREG(ETNA0TXALCR0_BASE, 0x10024884, __READ, ETNA0TXALCR0_t);
__IOREG(ETNA0RXNLCR0_BASE, 0x10024888, __READ, ETNA0RXNLCR0_t);
__IOREG(ETNA0RXALCR0_BASE, 0x1002488C, __READ, ETNA0RXALCR0_t);
__IOREG(ETNA0TXNLCR1_BASE, 0x100248A0, __READ, ETNA0TXNLCR1_t);
__IOREG(ETNA0TXALCR1_BASE, 0x100248A4, __READ, ETNA0TXALCR1_t);
__IOREG(ETNA0RXNLCR1_BASE, 0x100248A8, __READ, ETNA0RXNLCR1_t);
__IOREG(ETNA0RXALCR1_BASE, 0x100248AC, __READ, ETNA0RXALCR1_t);
__IOREG(ETNA0TSU_ADRH0_BASE, 0x10024900, __READ_WRITE, ETNA0TSU_ADRH0_t);
__IOREG(ETNA0TSU_ADRL0_BASE, 0x10024904, __READ_WRITE, ETNA0TSU_ADRL0_t);
__IOREG(ETNA0TSU_ADRH1_BASE, 0x10024908, __READ_WRITE, ETNA0TSU_ADRH1_t);
__IOREG(ETNA0TSU_ADRL1_BASE, 0x1002490C, __READ_WRITE, ETNA0TSU_ADRL1_t);
__IOREG(ETNA0TSU_ADRH2_BASE, 0x10024910, __READ_WRITE, ETNA0TSU_ADRH2_t);
__IOREG(ETNA0TSU_ADRL2_BASE, 0x10024914, __READ_WRITE, ETNA0TSU_ADRL2_t);
__IOREG(ETNA0TSU_ADRH3_BASE, 0x10024918, __READ_WRITE, ETNA0TSU_ADRH3_t);
__IOREG(ETNA0TSU_ADRL3_BASE, 0x1002491C, __READ_WRITE, ETNA0TSU_ADRL3_t);
__IOREG(ETNA0TSU_ADRH4_BASE, 0x10024920, __READ_WRITE, ETNA0TSU_ADRH4_t);
__IOREG(ETNA0TSU_ADRL4_BASE, 0x10024924, __READ_WRITE, ETNA0TSU_ADRL4_t);
__IOREG(ETNA0TSU_ADRH5_BASE, 0x10024928, __READ_WRITE, ETNA0TSU_ADRH5_t);
__IOREG(ETNA0TSU_ADRL5_BASE, 0x1002492C, __READ_WRITE, ETNA0TSU_ADRL5_t);
__IOREG(ETNA0TSU_ADRH6_BASE, 0x10024930, __READ_WRITE, ETNA0TSU_ADRH6_t);
__IOREG(ETNA0TSU_ADRL6_BASE, 0x10024934, __READ_WRITE, ETNA0TSU_ADRL6_t);
__IOREG(ETNA0TSU_ADRH7_BASE, 0x10024938, __READ_WRITE, ETNA0TSU_ADRH7_t);
__IOREG(ETNA0TSU_ADRL7_BASE, 0x1002493C, __READ_WRITE, ETNA0TSU_ADRL7_t);
__IOREG(ETNA0TSU_ADRH8_BASE, 0x10024940, __READ_WRITE, ETNA0TSU_ADRH8_t);
__IOREG(ETNA0TSU_ADRL8_BASE, 0x10024944, __READ_WRITE, ETNA0TSU_ADRL8_t);
__IOREG(ETNA0TSU_ADRH9_BASE, 0x10024948, __READ_WRITE, ETNA0TSU_ADRH9_t);
__IOREG(ETNA0TSU_ADRL9_BASE, 0x1002494C, __READ_WRITE, ETNA0TSU_ADRL9_t);
__IOREG(ETNA0TSU_ADRH10_BASE, 0x10024950, __READ_WRITE, ETNA0TSU_ADRH10_t);
__IOREG(ETNA0TSU_ADRL10_BASE, 0x10024954, __READ_WRITE, ETNA0TSU_ADRL10_t);
__IOREG(ETNA0TSU_ADRH11_BASE, 0x10024958, __READ_WRITE, ETNA0TSU_ADRH11_t);
__IOREG(ETNA0TSU_ADRL11_BASE, 0x1002495C, __READ_WRITE, ETNA0TSU_ADRL11_t);
__IOREG(ETNA0TSU_ADRH12_BASE, 0x10024960, __READ_WRITE, ETNA0TSU_ADRH12_t);
__IOREG(ETNA0TSU_ADRL12_BASE, 0x10024964, __READ_WRITE, ETNA0TSU_ADRL12_t);
__IOREG(ETNA0TSU_ADRH13_BASE, 0x10024968, __READ_WRITE, ETNA0TSU_ADRH13_t);
__IOREG(ETNA0TSU_ADRL13_BASE, 0x1002496C, __READ_WRITE, ETNA0TSU_ADRL13_t);
__IOREG(ETNA0TSU_ADRH14_BASE, 0x10024970, __READ_WRITE, ETNA0TSU_ADRH14_t);
__IOREG(ETNA0TSU_ADRL14_BASE, 0x10024974, __READ_WRITE, ETNA0TSU_ADRL14_t);
__IOREG(ETNA0TSU_ADRH15_BASE, 0x10024978, __READ_WRITE, ETNA0TSU_ADRH15_t);
__IOREG(ETNA0TSU_ADRL15_BASE, 0x1002497C, __READ_WRITE, ETNA0TSU_ADRL15_t);
__IOREG(ETNA0TSU_ADRH16_BASE, 0x10024980, __READ_WRITE, ETNA0TSU_ADRH16_t);
__IOREG(ETNA0TSU_ADRL16_BASE, 0x10024984, __READ_WRITE, ETNA0TSU_ADRL16_t);
__IOREG(ETNA0TSU_ADRH17_BASE, 0x10024988, __READ_WRITE, ETNA0TSU_ADRH17_t);
__IOREG(ETNA0TSU_ADRL17_BASE, 0x1002498C, __READ_WRITE, ETNA0TSU_ADRL17_t);
__IOREG(ETNA0TSU_ADRH18_BASE, 0x10024990, __READ_WRITE, ETNA0TSU_ADRH18_t);
__IOREG(ETNA0TSU_ADRL18_BASE, 0x10024994, __READ_WRITE, ETNA0TSU_ADRL18_t);
__IOREG(ETNA0TSU_ADRH19_BASE, 0x10024998, __READ_WRITE, ETNA0TSU_ADRH19_t);
__IOREG(ETNA0TSU_ADRL19_BASE, 0x1002499C, __READ_WRITE, ETNA0TSU_ADRL19_t);
__IOREG(ETNA0TSU_ADRH20_BASE, 0x100249A0, __READ_WRITE, ETNA0TSU_ADRH20_t);
__IOREG(ETNA0TSU_ADRL20_BASE, 0x100249A4, __READ_WRITE, ETNA0TSU_ADRL20_t);
__IOREG(ETNA0TSU_ADRH21_BASE, 0x100249A8, __READ_WRITE, ETNA0TSU_ADRH21_t);
__IOREG(ETNA0TSU_ADRL21_BASE, 0x100249AC, __READ_WRITE, ETNA0TSU_ADRL21_t);
__IOREG(ETNA0TSU_ADRH22_BASE, 0x100249B0, __READ_WRITE, ETNA0TSU_ADRH22_t);
__IOREG(ETNA0TSU_ADRL22_BASE, 0x100249B4, __READ_WRITE, ETNA0TSU_ADRL22_t);
__IOREG(ETNA0TSU_ADRH23_BASE, 0x100249B8, __READ_WRITE, ETNA0TSU_ADRH23_t);
__IOREG(ETNA0TSU_ADRL23_BASE, 0x100249BC, __READ_WRITE, ETNA0TSU_ADRL23_t);
__IOREG(ETNA0TSU_ADRH24_BASE, 0x100249C0, __READ_WRITE, ETNA0TSU_ADRH24_t);
__IOREG(ETNA0TSU_ADRL24_BASE, 0x100249C4, __READ_WRITE, ETNA0TSU_ADRL24_t);
__IOREG(ETNA0TSU_ADRH25_BASE, 0x100249C8, __READ_WRITE, ETNA0TSU_ADRH25_t);
__IOREG(ETNA0TSU_ADRL25_BASE, 0x100249CC, __READ_WRITE, ETNA0TSU_ADRL25_t);
__IOREG(ETNA0TSU_ADRH26_BASE, 0x100249D0, __READ_WRITE, ETNA0TSU_ADRH26_t);
__IOREG(ETNA0TSU_ADRL26_BASE, 0x100249D4, __READ_WRITE, ETNA0TSU_ADRL26_t);
__IOREG(ETNA0TSU_ADRH27_BASE, 0x100249D8, __READ_WRITE, ETNA0TSU_ADRH27_t);
__IOREG(ETNA0TSU_ADRL27_BASE, 0x100249DC, __READ_WRITE, ETNA0TSU_ADRL27_t);
__IOREG(ETNA0TSU_ADRH28_BASE, 0x100249E0, __READ_WRITE, ETNA0TSU_ADRH28_t);
__IOREG(ETNA0TSU_ADRL28_BASE, 0x100249E4, __READ_WRITE, ETNA0TSU_ADRL28_t);
__IOREG(ETNA0TSU_ADRH29_BASE, 0x100249E8, __READ_WRITE, ETNA0TSU_ADRH29_t);
__IOREG(ETNA0TSU_ADRL29_BASE, 0x100249EC, __READ_WRITE, ETNA0TSU_ADRL29_t);
__IOREG(ETNA0TSU_ADRH30_BASE, 0x100249F0, __READ_WRITE, ETNA0TSU_ADRH30_t);
__IOREG(ETNA0TSU_ADRL30_BASE, 0x100249F4, __READ_WRITE, ETNA0TSU_ADRL30_t);
__IOREG(ETNA0TSU_ADRH31_BASE, 0x100249F8, __READ_WRITE, ETNA0TSU_ADRH31_t);
__IOREG(ETNA0TSU_ADRL31_BASE, 0x100249FC, __READ_WRITE, ETNA0TSU_ADRL31_t);
__IOREG(ETNA0HDMMDR0_BASE, 0x10024C04, __READ_WRITE, ETNA0HDMMDR0_t);
__IOREG(ETNA0HDMISR0_BASE, 0x10024C10, __READ_WRITE, ETNA0HDMISR0_t);
__IOREG(ETNA0HDMIER0_BASE, 0x10024C14, __READ_WRITE, ETNA0HDMIER0_t);
__IOREG(ETNA0EDSR1_BASE, 0x10025000, __READ_WRITE, ETNA0EDSR1_t);
__IOREG(ETNA0TDLAR1_BASE, 0x10025010, __READ_WRITE, ETNA0TDLAR1_t);
__IOREG(ETNA0TDFAR1_BASE, 0x10025014, __READ_WRITE, ETNA0TDFAR1_t);
__IOREG(ETNA0TDFXR1_BASE, 0x10025018, __READ_WRITE, ETNA0TDFXR1_t);
__IOREG(ETNA0TDFFR1_BASE, 0x1002501C, __READ_WRITE, ETNA0TDFFR1_t);
__IOREG(ETNA0RDLAR1_BASE, 0x10025030, __READ_WRITE, ETNA0RDLAR1_t);
__IOREG(ETNA0RDFAR1_BASE, 0x10025034, __READ_WRITE, ETNA0RDFAR1_t);
__IOREG(ETNA0RDFXR1_BASE, 0x10025038, __READ_WRITE, ETNA0RDFXR1_t);
__IOREG(ETNA0RDFFR1_BASE, 0x1002503C, __READ_WRITE, ETNA0RDFFR1_t);
__IOREG(ETNA0EDMR1_BASE, 0x10025400, __READ_WRITE, ETNA0EDMR1_t);
__IOREG(ETNA0EDTRR1_BASE, 0x10025408, __READ_WRITE, ETNA0EDTRR1_t);
__IOREG(ETNA0EDRRR1_BASE, 0x10025410, __READ_WRITE, ETNA0EDRRR1_t);
__IOREG(ETNA0EESR1_BASE, 0x10025428, __READ_WRITE, ETNA0EESR1_t);
__IOREG(ETNA0EESIPR1_BASE, 0x10025430, __READ_WRITE, ETNA0EESIPR1_t);
__IOREG(ETNA0TRSCER1_BASE, 0x10025438, __READ_WRITE, ETNA0TRSCER1_t);
__IOREG(ETNA0RMFCR1_BASE, 0x10025440, __READ_WRITE, ETNA0RMFCR1_t);
__IOREG(ETNA0FDR1_BASE, 0x10025450, __READ_WRITE, ETNA0FDR1_t);
__IOREG(ETNA0RMCR1_BASE, 0x10025458, __READ_WRITE, ETNA0RMCR1_t);
__IOREG(ETNA0RPADIR1_BASE, 0x10025460, __READ_WRITE, ETNA0RPADIR1_t);
__IOREG(ETNA0FCFTR1_BASE, 0x10025468, __READ_WRITE, ETNA0FCFTR1_t);
__IOREG(ETNA0TFSR1_BASE, 0x10025480, __READ, ETNA0TFSR1_t);
__IOREG(ETNA0RFSR1_BASE, 0x10025488, __READ, ETNA0RFSR1_t);
__IOREG(ETNA0ECMR1_BASE, 0x10025500, __READ_WRITE, ETNA0ECMR1_t);
__IOREG(ETNA0RFLR1_BASE, 0x10025508, __READ_WRITE, ETNA0RFLR1_t);
__IOREG(ETNA0ECSR1_BASE, 0x10025510, __READ_WRITE, ETNA0ECSR1_t);
__IOREG(ETNA0ECSIPR1_BASE, 0x10025518, __READ_WRITE, ETNA0ECSIPR1_t);
__IOREG(ETNA0PIR1_BASE, 0x10025520, __READ_WRITE, ETNA0PIR1_t);
__IOREG(ETNA0PLSR1_BASE, 0x10025528, __READ, ETNA0PLSR1_t);
__IOREG(ETNA0PIPR1_BASE, 0x1002552C, __READ_WRITE, ETNA0PIPR1_t);
__IOREG(ETNA0APR1_BASE, 0x10025554, __READ_WRITE, ETNA0APR1_t);
__IOREG(ETNA0MPR1_BASE, 0x10025558, __READ_WRITE, ETNA0MPR1_t);
__IOREG(ETNA0PFTCR1_BASE, 0x1002555C, __READ, ETNA0PFTCR1_t);
__IOREG(ETNA0PFRCR1_BASE, 0x10025560, __READ, ETNA0PFRCR1_t);
__IOREG(ETNA0TPAUSER1_BASE, 0x10025564, __READ_WRITE, ETNA0TPAUSER1_t);
__IOREG(ETNA0TPFRCR1_BASE, 0x10025568, __READ, ETNA0TPFRCR1_t);
__IOREG(ETNA0BCFRR1_BASE, 0x1002556C, __READ_WRITE, ETNA0BCFRR1_t);
__IOREG(ETNA0CRBCFRR1_BASE, 0x10025570, __READ_WRITE, ETNA0CRBCFRR1_t);
__IOREG(ETNA0EMR1_BASE, 0x100255B0, __READ_WRITE, ETNA0EMR1_t);
__IOREG(ETNA0MAHR1_BASE, 0x100255C0, __READ_WRITE, ETNA0MAHR1_t);
__IOREG(ETNA0MALR1_BASE, 0x100255C8, __READ_WRITE, ETNA0MALR1_t);
__IOREG(ETNA0TROCR1_BASE, 0x10025700, __READ_WRITE, ETNA0TROCR1_t);
__IOREG(ETNA0CDCR1_BASE, 0x10025708, __READ_WRITE, ETNA0CDCR1_t);
__IOREG(ETNA0LCCR1_BASE, 0x10025710, __READ_WRITE, ETNA0LCCR1_t);
__IOREG(ETNA0CEFCR1_BASE, 0x10025740, __READ_WRITE, ETNA0CEFCR1_t);
__IOREG(ETNA0FRECR1_BASE, 0x10025748, __READ_WRITE, ETNA0FRECR1_t);
__IOREG(ETNA0TSFRCR1_BASE, 0x10025750, __READ_WRITE, ETNA0TSFRCR1_t);
__IOREG(ETNA0TLFRCR1_BASE, 0x10025758, __READ_WRITE, ETNA0TLFRCR1_t);
__IOREG(ETNA0RFCR1_BASE, 0x10025760, __READ_WRITE, ETNA0RFCR1_t);
__IOREG(ETNA0MAFCR1_BASE, 0x10025778, __READ_WRITE, ETNA0MAFCR1_t);
__IOREG(ETNA0HDMMDR1_BASE, 0x10025C04, __READ_WRITE, ETNA0HDMMDR1_t);
__IOREG(ETNA0HDMISR1_BASE, 0x10025C10, __READ_WRITE, ETNA0HDMISR1_t);
__IOREG(ETNA0HDMIER1_BASE, 0x10025C14, __READ_WRITE, ETNA0HDMIER1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ETNA0EDSR0 ETNA0EDSR0_BASE.UINT32
#define ETNA0EDSR0_ENR0 ETNA0EDSR0_BASE.BIT._ENR0
#define ETNA0EDSR0_ENT0 ETNA0EDSR0_BASE.BIT._ENT0
#define ETNA0EDSR0_GPO0 ETNA0EDSR0_BASE.BIT._GPO0
#define ETNA0TDLAR0 ETNA0TDLAR0_BASE.UINT32
#define ETNA0TDLAR0_TDLA0 ETNA0TDLAR0_BASE.BIT._TDLA0
#define ETNA0TDFAR0 ETNA0TDFAR0_BASE.UINT32
#define ETNA0TDFAR0_TDFA0 ETNA0TDFAR0_BASE.BIT._TDFA0
#define ETNA0TDFXR0 ETNA0TDFXR0_BASE.UINT32
#define ETNA0TDFXR0_TDFX0 ETNA0TDFXR0_BASE.BIT._TDFX0
#define ETNA0TDFFR0 ETNA0TDFFR0_BASE.UINT32
#define ETNA0TDFFR0_TDLF0 ETNA0TDFFR0_BASE.BIT._TDLF0
#define ETNA0RDLAR0 ETNA0RDLAR0_BASE.UINT32
#define ETNA0RDLAR0_RDLA0 ETNA0RDLAR0_BASE.BIT._RDLA0
#define ETNA0RDFAR0 ETNA0RDFAR0_BASE.UINT32
#define ETNA0RDFAR0_RDFA0 ETNA0RDFAR0_BASE.BIT._RDFA0
#define ETNA0RDFXR0 ETNA0RDFXR0_BASE.UINT32
#define ETNA0RDFXR0_RDFX0 ETNA0RDFXR0_BASE.BIT._RDFX0
#define ETNA0RDFFR0 ETNA0RDFFR0_BASE.UINT32
#define ETNA0RDFFR0_RDLF0 ETNA0RDFFR0_BASE.BIT._RDLF0
#define ETNA0EDMR0 ETNA0EDMR0_BASE.UINT32
#define ETNA0EDMR0_SWRR0 ETNA0EDMR0_BASE.BIT._SWRR0
#define ETNA0EDMR0_SWRT0 ETNA0EDMR0_BASE.BIT._SWRT0
#define ETNA0EDMR0_DL0 ETNA0EDMR0_BASE.BIT._DL0
#define ETNA0EDMR0_DE0 ETNA0EDMR0_BASE.BIT._DE0
#define ETNA0EDTRR0 ETNA0EDTRR0_BASE.UINT32
#define ETNA0EDTRR0_TR0 ETNA0EDTRR0_BASE.BIT._TR0
#define ETNA0EDRRR0 ETNA0EDRRR0_BASE.UINT32
#define ETNA0EDRRR0_RR0 ETNA0EDRRR0_BASE.BIT._RR0
#define ETNA0EESR0 ETNA0EESR0_BASE.UINT32
#define ETNA0EESR0_CERF0 ETNA0EESR0_BASE.BIT._CERF0
#define ETNA0EESR0_PRE0 ETNA0EESR0_BASE.BIT._PRE0
#define ETNA0EESR0_RTSF0 ETNA0EESR0_BASE.BIT._RTSF0
#define ETNA0EESR0_RTLF0 ETNA0EESR0_BASE.BIT._RTLF0
#define ETNA0EESR0_RRF0 ETNA0EESR0_BASE.BIT._RRF0
#define ETNA0EESR0_RMAF0 ETNA0EESR0_BASE.BIT._RMAF0
#define ETNA0EESR0_TRO0 ETNA0EESR0_BASE.BIT._TRO0
#define ETNA0EESR0_CD0 ETNA0EESR0_BASE.BIT._CD0
#define ETNA0EESR0_DLC0 ETNA0EESR0_BASE.BIT._DLC0
#define ETNA0EESR0_RFOF0 ETNA0EESR0_BASE.BIT._RFOF0
#define ETNA0EESR0_RDE0 ETNA0EESR0_BASE.BIT._RDE0
#define ETNA0EESR0_FR0 ETNA0EESR0_BASE.BIT._FR0
#define ETNA0EESR0_TDE0 ETNA0EESR0_BASE.BIT._TDE0
#define ETNA0EESR0_TC0_0 ETNA0EESR0_BASE.BIT._TC0_0
#define ETNA0EESR0_ECI0 ETNA0EESR0_BASE.BIT._ECI0
#define ETNA0EESR0_RFCOF0 ETNA0EESR0_BASE.BIT._RFCOF0
#define ETNA0EESR0_RABT0 ETNA0EESR0_BASE.BIT._RABT0
#define ETNA0EESR0_ROC0 ETNA0EESR0_BASE.BIT._ROC0
#define ETNA0EESR0_TC0_1 ETNA0EESR0_BASE.BIT._TC0_1
#define ETNA0EESR0_TWB0 ETNA0EESR0_BASE.BIT._TWB0
#define ETNA0EESIPR0 ETNA0EESIPR0_BASE.UINT32
#define ETNA0EESIPR0_CERF0IP ETNA0EESIPR0_BASE.BIT._CERF0IP
#define ETNA0EESIPR0_PRE0IP ETNA0EESIPR0_BASE.BIT._PRE0IP
#define ETNA0EESIPR0_RTSF0IP ETNA0EESIPR0_BASE.BIT._RTSF0IP
#define ETNA0EESIPR0_RTLF0IP ETNA0EESIPR0_BASE.BIT._RTLF0IP
#define ETNA0EESIPR0_RRF0IP ETNA0EESIPR0_BASE.BIT._RRF0IP
#define ETNA0EESIPR0_RMAF0IP ETNA0EESIPR0_BASE.BIT._RMAF0IP
#define ETNA0EESIPR0_TRO0IP ETNA0EESIPR0_BASE.BIT._TRO0IP
#define ETNA0EESIPR0_CD0IP ETNA0EESIPR0_BASE.BIT._CD0IP
#define ETNA0EESIPR0_DLC0IP ETNA0EESIPR0_BASE.BIT._DLC0IP
#define ETNA0EESIPR0_RFOF0IP ETNA0EESIPR0_BASE.BIT._RFOF0IP
#define ETNA0EESIPR0_RDE0IP ETNA0EESIPR0_BASE.BIT._RDE0IP
#define ETNA0EESIPR0_FR0IP ETNA0EESIPR0_BASE.BIT._FR0IP
#define ETNA0EESIPR0_TDE0IP ETNA0EESIPR0_BASE.BIT._TDE0IP
#define ETNA0EESIPR0_TC00IP ETNA0EESIPR0_BASE.BIT._TC00IP
#define ETNA0EESIPR0_ECI0IP ETNA0EESIPR0_BASE.BIT._ECI0IP
#define ETNA0EESIPR0_RFCOF0IP ETNA0EESIPR0_BASE.BIT._RFCOF0IP
#define ETNA0EESIPR0_RABT0IP ETNA0EESIPR0_BASE.BIT._RABT0IP
#define ETNA0EESIPR0_ROC0IP ETNA0EESIPR0_BASE.BIT._ROC0IP
#define ETNA0EESIPR0_TC10IP ETNA0EESIPR0_BASE.BIT._TC10IP
#define ETNA0EESIPR0_TWB00IP ETNA0EESIPR0_BASE.BIT._TWB00IP
#define ETNA0EESIPR0_TWB10IP ETNA0EESIPR0_BASE.BIT._TWB10IP
#define ETNA0TRSCER0 ETNA0TRSCER0_BASE.UINT32
#define ETNA0TRSCER0_CERF0CE ETNA0TRSCER0_BASE.BIT._CERF0CE
#define ETNA0TRSCER0_PRE0CE ETNA0TRSCER0_BASE.BIT._PRE0CE
#define ETNA0TRSCER0_RTSF0CE ETNA0TRSCER0_BASE.BIT._RTSF0CE
#define ETNA0TRSCER0_RTLF0CE ETNA0TRSCER0_BASE.BIT._RTLF0CE
#define ETNA0TRSCER0_RRF0CE ETNA0TRSCER0_BASE.BIT._RRF0CE
#define ETNA0TRSCER0_RMAF0CE ETNA0TRSCER0_BASE.BIT._RMAF0CE
#define ETNA0TRSCER0_RABT0CE ETNA0TRSCER0_BASE.BIT._RABT0CE
#define ETNA0RMFCR0 ETNA0RMFCR0_BASE.UINT32
#define ETNA0RMFCR0_MFC0 ETNA0RMFCR0_BASE.BIT._MFC0
#define ETNA0FDR0 ETNA0FDR0_BASE.UINT32
#define ETNA0FDR0_RFD0 ETNA0FDR0_BASE.BIT._RFD0
#define ETNA0FDR0_TFD0 ETNA0FDR0_BASE.BIT._TFD0
#define ETNA0RMCR0 ETNA0RMCR0_BASE.UINT32
#define ETNA0RMCR0_RNC0 ETNA0RMCR0_BASE.BIT._RNC0
#define ETNA0RPADIR0 ETNA0RPADIR0_BASE.UINT32
#define ETNA0RPADIR0_PADR0 ETNA0RPADIR0_BASE.BIT._PADR0
#define ETNA0RPADIR0_PADS0 ETNA0RPADIR0_BASE.BIT._PADS0
#define ETNA0FCFTR0 ETNA0FCFTR0_BASE.UINT32
#define ETNA0FCFTR0_RFS0 ETNA0FCFTR0_BASE.BIT._RFS0
#define ETNA0FCFTR0_RFF0 ETNA0FCFTR0_BASE.BIT._RFF0
#define ETNA0TFSR0 ETNA0TFSR0_BASE.UINT32
#define ETNA0TFSR0_TDAM0 ETNA0TFSR0_BASE.BIT._TDAM0
#define ETNA0TFSR0_TFAM0 ETNA0TFSR0_BASE.BIT._TFAM0
#define ETNA0TFSR0_TWBR0 ETNA0TFSR0_BASE.BIT._TWBR0
#define ETNA0RFSR0 ETNA0RFSR0_BASE.UINT32
#define ETNA0RFSR0_RDAM0 ETNA0RFSR0_BASE.BIT._RDAM0
#define ETNA0RFSR0_RFAM0 ETNA0RFSR0_BASE.BIT._RFAM0
#define ETNA0ECMR0 ETNA0ECMR0_BASE.UINT32
#define ETNA0ECMR0_PRM0 ETNA0ECMR0_BASE.BIT._PRM0
#define ETNA0ECMR0_DM0 ETNA0ECMR0_BASE.BIT._DM0
#define ETNA0ECMR0_ILB0 ETNA0ECMR0_BASE.BIT._ILB0
#define ETNA0ECMR0_TE0 ETNA0ECMR0_BASE.BIT._TE0
#define ETNA0ECMR0_RE0 ETNA0ECMR0_BASE.BIT._RE0
#define ETNA0ECMR0_MPDE0 ETNA0ECMR0_BASE.BIT._MPDE0
#define ETNA0ECMR0_MCT0 ETNA0ECMR0_BASE.BIT._MCT0
#define ETNA0ECMR0_TXF0 ETNA0ECMR0_BASE.BIT._TXF0
#define ETNA0ECMR0_RXF0 ETNA0ECMR0_BASE.BIT._RXF0
#define ETNA0ECMR0_PFR0 ETNA0ECMR0_BASE.BIT._PFR0
#define ETNA0ECMR0_TZPF0_DCAC0 ETNA0ECMR0_BASE.BIT._TZPF0_DCAC0
#define ETNA0ECMR0_RZPF0 ETNA0ECMR0_BASE.BIT._RZPF0
#define ETNA0ECMR0_DPAD0 ETNA0ECMR0_BASE.BIT._DPAD0
#define ETNA0ECMR0_RCSC0 ETNA0ECMR0_BASE.BIT._RCSC0
#define ETNA0ECMR0_TRCCM0 ETNA0ECMR0_BASE.BIT._TRCCM0
#define ETNA0RFLR0 ETNA0RFLR0_BASE.UINT32
#define ETNA0RFLR0_RFL0 ETNA0RFLR0_BASE.BIT._RFL0
#define ETNA0ECSR0 ETNA0ECSR0_BASE.UINT32
#define ETNA0ECSR0_ICD0 ETNA0ECSR0_BASE.BIT._ICD0
#define ETNA0ECSR0_MPD0 ETNA0ECSR0_BASE.BIT._MPD0
#define ETNA0ECSR0_LINKI0 ETNA0ECSR0_BASE.BIT._LINKI0
#define ETNA0ECSR0_PFROI0 ETNA0ECSR0_BASE.BIT._PFROI0
#define ETNA0ECSIPR0 ETNA0ECSIPR0_BASE.UINT32
#define ETNA0ECSIPR0_ICDIP0 ETNA0ECSIPR0_BASE.BIT._ICDIP0
#define ETNA0ECSIPR0_MPDIP0 ETNA0ECSIPR0_BASE.BIT._MPDIP0
#define ETNA0ECSIPR0_LINKIP0 ETNA0ECSIPR0_BASE.BIT._LINKIP0
#define ETNA0ECSIPR0_PFROIP0 ETNA0ECSIPR0_BASE.BIT._PFROIP0
#define ETNA0PIR0 ETNA0PIR0_BASE.UINT32
#define ETNA0PIR0_MDC0 ETNA0PIR0_BASE.BIT._MDC0
#define ETNA0PIR0_MMD0 ETNA0PIR0_BASE.BIT._MMD0
#define ETNA0PIR0_MDO0 ETNA0PIR0_BASE.BIT._MDO0
#define ETNA0PIR0_MDI0 ETNA0PIR0_BASE.BIT._MDI0
#define ETNA0PLSR0 ETNA0PLSR0_BASE.UINT32
#define ETNA0PLSR0_LINK0 ETNA0PLSR0_BASE.BIT._LINK0
#define ETNA0PIPR0 ETNA0PIPR0_BASE.UINT32
#define ETNA0PIPR0_PHYIL0 ETNA0PIPR0_BASE.BIT._PHYIL0
#define ETNA0APR0 ETNA0APR0_BASE.UINT32
#define ETNA0APR0_AP0 ETNA0APR0_BASE.BIT._AP0
#define ETNA0MPR0 ETNA0MPR0_BASE.UINT32
#define ETNA0MPR0_MP0 ETNA0MPR0_BASE.BIT._MP0
#define ETNA0PFTCR0 ETNA0PFTCR0_BASE.UINT32
#define ETNA0PFTCR0_PFTXC0 ETNA0PFTCR0_BASE.BIT._PFTXC0
#define ETNA0PFRCR0 ETNA0PFRCR0_BASE.UINT32
#define ETNA0PFRCR0_PFRXC0 ETNA0PFRCR0_BASE.BIT._PFRXC0
#define ETNA0TPAUSER0 ETNA0TPAUSER0_BASE.UINT32
#define ETNA0TPAUSER0_TPAUSE0 ETNA0TPAUSER0_BASE.BIT._TPAUSE0
#define ETNA0TPFRCR0 ETNA0TPFRCR0_BASE.UINT32
#define ETNA0TPFRCR0_PFRTC0 ETNA0TPFRCR0_BASE.BIT._PFRTC0
#define ETNA0BCFRR0 ETNA0BCFRR0_BASE.UINT32
#define ETNA0BCFRR0_BCF0 ETNA0BCFRR0_BASE.BIT._BCF0
#define ETNA0CRBCFRR0 ETNA0CRBCFRR0_BASE.UINT32
#define ETNA0CRBCFRR0_CNT0 ETNA0CRBCFRR0_BASE.BIT._CNT0
#define ETNA0EMR0 ETNA0EMR0_BASE.UINT32
#define ETNA0EMR0_SPEED0 ETNA0EMR0_BASE.BIT._SPEED0
#define ETNA0MAHR0 ETNA0MAHR0_BASE.UINT32
#define ETNA0MAHR0_MA0 ETNA0MAHR0_BASE.BIT._MA0
#define ETNA0MALR0 ETNA0MALR0_BASE.UINT32
#define ETNA0MALR0_MA0 ETNA0MALR0_BASE.BIT._MA0
#define ETNA0TROCR0 ETNA0TROCR0_BASE.UINT32
#define ETNA0TROCR0_TROC0 ETNA0TROCR0_BASE.BIT._TROC0
#define ETNA0CDCR0 ETNA0CDCR0_BASE.UINT32
#define ETNA0CDCR0_COSDC0 ETNA0CDCR0_BASE.BIT._COSDC0
#define ETNA0LCCR0 ETNA0LCCR0_BASE.UINT32
#define ETNA0LCCR0_LCC0 ETNA0LCCR0_BASE.BIT._LCC0
#define ETNA0CEFCR0 ETNA0CEFCR0_BASE.UINT32
#define ETNA0CEFCR0_CEFC0 ETNA0CEFCR0_BASE.BIT._CEFC0
#define ETNA0FRECR0 ETNA0FRECR0_BASE.UINT32
#define ETNA0FRECR0_FREC0 ETNA0FRECR0_BASE.BIT._FREC0
#define ETNA0TSFRCR0 ETNA0TSFRCR0_BASE.UINT32
#define ETNA0TSFRCR0_TSFC0 ETNA0TSFRCR0_BASE.BIT._TSFC0
#define ETNA0TLFRCR0 ETNA0TLFRCR0_BASE.UINT32
#define ETNA0TLFRCR0_TLFC0 ETNA0TLFRCR0_BASE.BIT._TLFC0
#define ETNA0RFCR0 ETNA0RFCR0_BASE.UINT32
#define ETNA0RFCR0_RFC0 ETNA0RFCR0_BASE.BIT._RFC0
#define ETNA0MAFCR0 ETNA0MAFCR0_BASE.UINT32
#define ETNA0MAFCR0_MAFC0 ETNA0MAFCR0_BASE.BIT._MAFC0
#define ETNA0ARSTR ETNA0ARSTR_BASE.UINT32
#define ETNA0ARSTR_ARST ETNA0ARSTR_BASE.BIT._ARST
#define ETNA0TSU_CTRST ETNA0TSU_CTRST_BASE.UINT32
#define ETNA0TSU_CTRST_CTRST ETNA0TSU_CTRST_BASE.BIT._CTRST
#define ETNA0TSU_FWSL0 ETNA0TSU_FWSL0_BASE.UINT32
#define ETNA0TSU_FWSL0_RMSA0 ETNA0TSU_FWSL0_BASE.BIT._RMSA0
#define ETNA0TSU_FWSL1 ETNA0TSU_FWSL1_BASE.UINT32
#define ETNA0TSU_FWSL1_RMSA0 ETNA0TSU_FWSL1_BASE.BIT._RMSA0
#define ETNA0TSU_FWSLC ETNA0TSU_FWSLC_BASE.UINT32
#define ETNA0TSU_FWSLC_POSTENL ETNA0TSU_FWSLC_BASE.BIT._POSTENL
#define ETNA0TSU_FWSLC_POSTENU ETNA0TSU_FWSLC_BASE.BIT._POSTENU
#define ETNA0TSU_FWSR ETNA0TSU_FWSR_BASE.UINT32
#define ETNA0TSU_FWSR_RINT11 ETNA0TSU_FWSR_BASE.BIT._RINT11
#define ETNA0TSU_FWSR_RINT21 ETNA0TSU_FWSR_BASE.BIT._RINT21
#define ETNA0TSU_FWSR_RINT31 ETNA0TSU_FWSR_BASE.BIT._RINT31
#define ETNA0TSU_FWSR_RINT41 ETNA0TSU_FWSR_BASE.BIT._RINT41
#define ETNA0TSU_FWSR_RINT51 ETNA0TSU_FWSR_BASE.BIT._RINT51
#define ETNA0TSU_FWSR_RINT10 ETNA0TSU_FWSR_BASE.BIT._RINT10
#define ETNA0TSU_FWSR_RINT20 ETNA0TSU_FWSR_BASE.BIT._RINT20
#define ETNA0TSU_FWSR_RINT30 ETNA0TSU_FWSR_BASE.BIT._RINT30
#define ETNA0TSU_FWSR_RINT40 ETNA0TSU_FWSR_BASE.BIT._RINT40
#define ETNA0TSU_FWSR_RINT50 ETNA0TSU_FWSR_BASE.BIT._RINT50
#define ETNA0TSU_FWINMK ETNA0TSU_FWINMK_BASE.UINT32
#define ETNA0TSU_FWINMK_RINTM11 ETNA0TSU_FWINMK_BASE.BIT._RINTM11
#define ETNA0TSU_FWINMK_RINTM21 ETNA0TSU_FWINMK_BASE.BIT._RINTM21
#define ETNA0TSU_FWINMK_RINTM31 ETNA0TSU_FWINMK_BASE.BIT._RINTM31
#define ETNA0TSU_FWINMK_RINTM41 ETNA0TSU_FWINMK_BASE.BIT._RINTM41
#define ETNA0TSU_FWINMK_RINTM51 ETNA0TSU_FWINMK_BASE.BIT._RINTM51
#define ETNA0TSU_FWINMK_RINTM10 ETNA0TSU_FWINMK_BASE.BIT._RINTM10
#define ETNA0TSU_FWINMK_RINTM20 ETNA0TSU_FWINMK_BASE.BIT._RINTM20
#define ETNA0TSU_FWINMK_RINTM30 ETNA0TSU_FWINMK_BASE.BIT._RINTM30
#define ETNA0TSU_FWINMK_RINTM40 ETNA0TSU_FWINMK_BASE.BIT._RINTM40
#define ETNA0TSU_FWINMK_RINTM50 ETNA0TSU_FWINMK_BASE.BIT._RINTM50
#define ETNA0TSU_VTAG0 ETNA0TSU_VTAG0_BASE.UINT32
#define ETNA0TSU_VTAG0_VID0 ETNA0TSU_VTAG0_BASE.BIT._VID0
#define ETNA0TSU_VTAG0_VTAG0 ETNA0TSU_VTAG0_BASE.BIT._VTAG0
#define ETNA0TSU_VTAG1 ETNA0TSU_VTAG1_BASE.UINT32
#define ETNA0TSU_VTAG1_VID1 ETNA0TSU_VTAG1_BASE.BIT._VID1
#define ETNA0TSU_VTAG1_VTAG1 ETNA0TSU_VTAG1_BASE.BIT._VTAG1
#define ETNA0TSU_ADSBSY ETNA0TSU_ADSBSY_BASE.UINT32
#define ETNA0TSU_ADSBSY_ADSBSY ETNA0TSU_ADSBSY_BASE.BIT._ADSBSY
#define ETNA0TSU_TEN ETNA0TSU_TEN_BASE.UINT32
#define ETNA0TSU_TEN_TEN31 ETNA0TSU_TEN_BASE.BIT._TEN31
#define ETNA0TSU_TEN_TEN30 ETNA0TSU_TEN_BASE.BIT._TEN30
#define ETNA0TSU_TEN_TEN29 ETNA0TSU_TEN_BASE.BIT._TEN29
#define ETNA0TSU_TEN_TEN28 ETNA0TSU_TEN_BASE.BIT._TEN28
#define ETNA0TSU_TEN_TEN27 ETNA0TSU_TEN_BASE.BIT._TEN27
#define ETNA0TSU_TEN_TEN26 ETNA0TSU_TEN_BASE.BIT._TEN26
#define ETNA0TSU_TEN_TEN25 ETNA0TSU_TEN_BASE.BIT._TEN25
#define ETNA0TSU_TEN_TEN24 ETNA0TSU_TEN_BASE.BIT._TEN24
#define ETNA0TSU_TEN_TEN23 ETNA0TSU_TEN_BASE.BIT._TEN23
#define ETNA0TSU_TEN_TEN22 ETNA0TSU_TEN_BASE.BIT._TEN22
#define ETNA0TSU_TEN_TEN21 ETNA0TSU_TEN_BASE.BIT._TEN21
#define ETNA0TSU_TEN_TEN20 ETNA0TSU_TEN_BASE.BIT._TEN20
#define ETNA0TSU_TEN_TEN19 ETNA0TSU_TEN_BASE.BIT._TEN19
#define ETNA0TSU_TEN_TEN18 ETNA0TSU_TEN_BASE.BIT._TEN18
#define ETNA0TSU_TEN_TEN17 ETNA0TSU_TEN_BASE.BIT._TEN17
#define ETNA0TSU_TEN_TEN16 ETNA0TSU_TEN_BASE.BIT._TEN16
#define ETNA0TSU_TEN_TEN15 ETNA0TSU_TEN_BASE.BIT._TEN15
#define ETNA0TSU_TEN_TEN14 ETNA0TSU_TEN_BASE.BIT._TEN14
#define ETNA0TSU_TEN_TEN13 ETNA0TSU_TEN_BASE.BIT._TEN13
#define ETNA0TSU_TEN_TEN12 ETNA0TSU_TEN_BASE.BIT._TEN12
#define ETNA0TSU_TEN_TEN11 ETNA0TSU_TEN_BASE.BIT._TEN11
#define ETNA0TSU_TEN_TEN10 ETNA0TSU_TEN_BASE.BIT._TEN10
#define ETNA0TSU_TEN_TEN9 ETNA0TSU_TEN_BASE.BIT._TEN9
#define ETNA0TSU_TEN_TEN8 ETNA0TSU_TEN_BASE.BIT._TEN8
#define ETNA0TSU_TEN_TEN7 ETNA0TSU_TEN_BASE.BIT._TEN7
#define ETNA0TSU_TEN_TEN6 ETNA0TSU_TEN_BASE.BIT._TEN6
#define ETNA0TSU_TEN_TEN5 ETNA0TSU_TEN_BASE.BIT._TEN5
#define ETNA0TSU_TEN_TEN4 ETNA0TSU_TEN_BASE.BIT._TEN4
#define ETNA0TSU_TEN_TEN3 ETNA0TSU_TEN_BASE.BIT._TEN3
#define ETNA0TSU_TEN_TEN2 ETNA0TSU_TEN_BASE.BIT._TEN2
#define ETNA0TSU_TEN_TEN1 ETNA0TSU_TEN_BASE.BIT._TEN1
#define ETNA0TSU_TEN_TEN0 ETNA0TSU_TEN_BASE.BIT._TEN0
#define ETNA0TSU_POST1 ETNA0TSU_POST1_BASE.UINT32
#define ETNA0TSU_POST1_POST7 ETNA0TSU_POST1_BASE.BIT._POST7
#define ETNA0TSU_POST1_POST6 ETNA0TSU_POST1_BASE.BIT._POST6
#define ETNA0TSU_POST1_POST5 ETNA0TSU_POST1_BASE.BIT._POST5
#define ETNA0TSU_POST1_POST4 ETNA0TSU_POST1_BASE.BIT._POST4
#define ETNA0TSU_POST1_POST3 ETNA0TSU_POST1_BASE.BIT._POST3
#define ETNA0TSU_POST1_POST2 ETNA0TSU_POST1_BASE.BIT._POST2
#define ETNA0TSU_POST1_POST1 ETNA0TSU_POST1_BASE.BIT._POST1
#define ETNA0TSU_POST1_POST0 ETNA0TSU_POST1_BASE.BIT._POST0
#define ETNA0TSU_POST2 ETNA0TSU_POST2_BASE.UINT32
#define ETNA0TSU_POST2_POST15 ETNA0TSU_POST2_BASE.BIT._POST15
#define ETNA0TSU_POST2_POST14 ETNA0TSU_POST2_BASE.BIT._POST14
#define ETNA0TSU_POST2_POST13 ETNA0TSU_POST2_BASE.BIT._POST13
#define ETNA0TSU_POST2_POST12 ETNA0TSU_POST2_BASE.BIT._POST12
#define ETNA0TSU_POST2_POST11 ETNA0TSU_POST2_BASE.BIT._POST11
#define ETNA0TSU_POST2_POST10 ETNA0TSU_POST2_BASE.BIT._POST10
#define ETNA0TSU_POST2_POST9 ETNA0TSU_POST2_BASE.BIT._POST9
#define ETNA0TSU_POST2_POST8 ETNA0TSU_POST2_BASE.BIT._POST8
#define ETNA0TSU_POST3 ETNA0TSU_POST3_BASE.UINT32
#define ETNA0TSU_POST3_POST23 ETNA0TSU_POST3_BASE.BIT._POST23
#define ETNA0TSU_POST3_POST22 ETNA0TSU_POST3_BASE.BIT._POST22
#define ETNA0TSU_POST3_POST21 ETNA0TSU_POST3_BASE.BIT._POST21
#define ETNA0TSU_POST3_POST20 ETNA0TSU_POST3_BASE.BIT._POST20
#define ETNA0TSU_POST3_POST19 ETNA0TSU_POST3_BASE.BIT._POST19
#define ETNA0TSU_POST3_POST18 ETNA0TSU_POST3_BASE.BIT._POST18
#define ETNA0TSU_POST3_POST17 ETNA0TSU_POST3_BASE.BIT._POST17
#define ETNA0TSU_POST3_POST16 ETNA0TSU_POST3_BASE.BIT._POST16
#define ETNA0TSU_POST4 ETNA0TSU_POST4_BASE.UINT32
#define ETNA0TSU_POST4_POST31 ETNA0TSU_POST4_BASE.BIT._POST31
#define ETNA0TSU_POST4_POST30 ETNA0TSU_POST4_BASE.BIT._POST30
#define ETNA0TSU_POST4_POST29 ETNA0TSU_POST4_BASE.BIT._POST29
#define ETNA0TSU_POST4_POST28 ETNA0TSU_POST4_BASE.BIT._POST28
#define ETNA0TSU_POST4_POST27 ETNA0TSU_POST4_BASE.BIT._POST27
#define ETNA0TSU_POST4_POST26 ETNA0TSU_POST4_BASE.BIT._POST26
#define ETNA0TSU_POST4_POST25 ETNA0TSU_POST4_BASE.BIT._POST25
#define ETNA0TSU_POST4_POST24 ETNA0TSU_POST4_BASE.BIT._POST24
#define ETNA0TXNLCR0 ETNA0TXNLCR0_BASE.UINT32
#define ETNA0TXNLCR0_NTC0 ETNA0TXNLCR0_BASE.BIT._NTC0
#define ETNA0TXALCR0 ETNA0TXALCR0_BASE.UINT32
#define ETNA0TXALCR0_TC0 ETNA0TXALCR0_BASE.BIT._TC0
#define ETNA0RXNLCR0 ETNA0RXNLCR0_BASE.UINT32
#define ETNA0RXNLCR0_NRC0 ETNA0RXNLCR0_BASE.BIT._NRC0
#define ETNA0RXALCR0 ETNA0RXALCR0_BASE.UINT32
#define ETNA0RXALCR0_RC0 ETNA0RXALCR0_BASE.BIT._RC0
#define ETNA0TXNLCR1 ETNA0TXNLCR1_BASE.UINT32
#define ETNA0TXNLCR1_NTC1 ETNA0TXNLCR1_BASE.BIT._NTC1
#define ETNA0TXALCR1 ETNA0TXALCR1_BASE.UINT32
#define ETNA0TXALCR1_TC1 ETNA0TXALCR1_BASE.BIT._TC1
#define ETNA0RXNLCR1 ETNA0RXNLCR1_BASE.UINT32
#define ETNA0RXNLCR1_NRC1 ETNA0RXNLCR1_BASE.BIT._NRC1
#define ETNA0RXALCR1 ETNA0RXALCR1_BASE.UINT32
#define ETNA0RXALCR1_RC1 ETNA0RXALCR1_BASE.BIT._RC1
#define ETNA0TSU_ADRH0 ETNA0TSU_ADRH0_BASE.UINT32
#define ETNA0TSU_ADRH0_ADRH0 ETNA0TSU_ADRH0_BASE.BIT._ADRH0
#define ETNA0TSU_ADRL0 ETNA0TSU_ADRL0_BASE.UINT32
#define ETNA0TSU_ADRL0_ADRL0 ETNA0TSU_ADRL0_BASE.BIT._ADRL0
#define ETNA0TSU_ADRH1 ETNA0TSU_ADRH1_BASE.UINT32
#define ETNA0TSU_ADRH1_ADRH1 ETNA0TSU_ADRH1_BASE.BIT._ADRH1
#define ETNA0TSU_ADRL1 ETNA0TSU_ADRL1_BASE.UINT32
#define ETNA0TSU_ADRL1_ADRL1 ETNA0TSU_ADRL1_BASE.BIT._ADRL1
#define ETNA0TSU_ADRH2 ETNA0TSU_ADRH2_BASE.UINT32
#define ETNA0TSU_ADRH2_ADRH2 ETNA0TSU_ADRH2_BASE.BIT._ADRH2
#define ETNA0TSU_ADRL2 ETNA0TSU_ADRL2_BASE.UINT32
#define ETNA0TSU_ADRL2_ADRL2 ETNA0TSU_ADRL2_BASE.BIT._ADRL2
#define ETNA0TSU_ADRH3 ETNA0TSU_ADRH3_BASE.UINT32
#define ETNA0TSU_ADRH3_ADRH3 ETNA0TSU_ADRH3_BASE.BIT._ADRH3
#define ETNA0TSU_ADRL3 ETNA0TSU_ADRL3_BASE.UINT32
#define ETNA0TSU_ADRL3_ADRL3 ETNA0TSU_ADRL3_BASE.BIT._ADRL3
#define ETNA0TSU_ADRH4 ETNA0TSU_ADRH4_BASE.UINT32
#define ETNA0TSU_ADRH4_ADRH4 ETNA0TSU_ADRH4_BASE.BIT._ADRH4
#define ETNA0TSU_ADRL4 ETNA0TSU_ADRL4_BASE.UINT32
#define ETNA0TSU_ADRL4_ADRL4 ETNA0TSU_ADRL4_BASE.BIT._ADRL4
#define ETNA0TSU_ADRH5 ETNA0TSU_ADRH5_BASE.UINT32
#define ETNA0TSU_ADRH5_ADRH5 ETNA0TSU_ADRH5_BASE.BIT._ADRH5
#define ETNA0TSU_ADRL5 ETNA0TSU_ADRL5_BASE.UINT32
#define ETNA0TSU_ADRL5_ADRL5 ETNA0TSU_ADRL5_BASE.BIT._ADRL5
#define ETNA0TSU_ADRH6 ETNA0TSU_ADRH6_BASE.UINT32
#define ETNA0TSU_ADRH6_ADRH6 ETNA0TSU_ADRH6_BASE.BIT._ADRH6
#define ETNA0TSU_ADRL6 ETNA0TSU_ADRL6_BASE.UINT32
#define ETNA0TSU_ADRL6_ADRL6 ETNA0TSU_ADRL6_BASE.BIT._ADRL6
#define ETNA0TSU_ADRH7 ETNA0TSU_ADRH7_BASE.UINT32
#define ETNA0TSU_ADRH7_ADRH7 ETNA0TSU_ADRH7_BASE.BIT._ADRH7
#define ETNA0TSU_ADRL7 ETNA0TSU_ADRL7_BASE.UINT32
#define ETNA0TSU_ADRL7_ADRL7 ETNA0TSU_ADRL7_BASE.BIT._ADRL7
#define ETNA0TSU_ADRH8 ETNA0TSU_ADRH8_BASE.UINT32
#define ETNA0TSU_ADRH8_ADRH8 ETNA0TSU_ADRH8_BASE.BIT._ADRH8
#define ETNA0TSU_ADRL8 ETNA0TSU_ADRL8_BASE.UINT32
#define ETNA0TSU_ADRL8_ADRL8 ETNA0TSU_ADRL8_BASE.BIT._ADRL8
#define ETNA0TSU_ADRH9 ETNA0TSU_ADRH9_BASE.UINT32
#define ETNA0TSU_ADRH9_ADRH9 ETNA0TSU_ADRH9_BASE.BIT._ADRH9
#define ETNA0TSU_ADRL9 ETNA0TSU_ADRL9_BASE.UINT32
#define ETNA0TSU_ADRL9_ADRL9 ETNA0TSU_ADRL9_BASE.BIT._ADRL9
#define ETNA0TSU_ADRH10 ETNA0TSU_ADRH10_BASE.UINT32
#define ETNA0TSU_ADRH10_ADRH10 ETNA0TSU_ADRH10_BASE.BIT._ADRH10
#define ETNA0TSU_ADRL10 ETNA0TSU_ADRL10_BASE.UINT32
#define ETNA0TSU_ADRL10_ADRL10 ETNA0TSU_ADRL10_BASE.BIT._ADRL10
#define ETNA0TSU_ADRH11 ETNA0TSU_ADRH11_BASE.UINT32
#define ETNA0TSU_ADRH11_ADRH11 ETNA0TSU_ADRH11_BASE.BIT._ADRH11
#define ETNA0TSU_ADRL11 ETNA0TSU_ADRL11_BASE.UINT32
#define ETNA0TSU_ADRL11_ADRL11 ETNA0TSU_ADRL11_BASE.BIT._ADRL11
#define ETNA0TSU_ADRH12 ETNA0TSU_ADRH12_BASE.UINT32
#define ETNA0TSU_ADRH12_ADRH12 ETNA0TSU_ADRH12_BASE.BIT._ADRH12
#define ETNA0TSU_ADRL12 ETNA0TSU_ADRL12_BASE.UINT32
#define ETNA0TSU_ADRL12_ADRL12 ETNA0TSU_ADRL12_BASE.BIT._ADRL12
#define ETNA0TSU_ADRH13 ETNA0TSU_ADRH13_BASE.UINT32
#define ETNA0TSU_ADRH13_ADRH13 ETNA0TSU_ADRH13_BASE.BIT._ADRH13
#define ETNA0TSU_ADRL13 ETNA0TSU_ADRL13_BASE.UINT32
#define ETNA0TSU_ADRL13_ADRL13 ETNA0TSU_ADRL13_BASE.BIT._ADRL13
#define ETNA0TSU_ADRH14 ETNA0TSU_ADRH14_BASE.UINT32
#define ETNA0TSU_ADRH14_ADRH14 ETNA0TSU_ADRH14_BASE.BIT._ADRH14
#define ETNA0TSU_ADRL14 ETNA0TSU_ADRL14_BASE.UINT32
#define ETNA0TSU_ADRL14_ADRL14 ETNA0TSU_ADRL14_BASE.BIT._ADRL14
#define ETNA0TSU_ADRH15 ETNA0TSU_ADRH15_BASE.UINT32
#define ETNA0TSU_ADRH15_ADRH15 ETNA0TSU_ADRH15_BASE.BIT._ADRH15
#define ETNA0TSU_ADRL15 ETNA0TSU_ADRL15_BASE.UINT32
#define ETNA0TSU_ADRL15_ADRL15 ETNA0TSU_ADRL15_BASE.BIT._ADRL15
#define ETNA0TSU_ADRH16 ETNA0TSU_ADRH16_BASE.UINT32
#define ETNA0TSU_ADRH16_ADRH16 ETNA0TSU_ADRH16_BASE.BIT._ADRH16
#define ETNA0TSU_ADRL16 ETNA0TSU_ADRL16_BASE.UINT32
#define ETNA0TSU_ADRL16_ADRL16 ETNA0TSU_ADRL16_BASE.BIT._ADRL16
#define ETNA0TSU_ADRH17 ETNA0TSU_ADRH17_BASE.UINT32
#define ETNA0TSU_ADRH17_ADRH17 ETNA0TSU_ADRH17_BASE.BIT._ADRH17
#define ETNA0TSU_ADRL17 ETNA0TSU_ADRL17_BASE.UINT32
#define ETNA0TSU_ADRL17_ADRL17 ETNA0TSU_ADRL17_BASE.BIT._ADRL17
#define ETNA0TSU_ADRH18 ETNA0TSU_ADRH18_BASE.UINT32
#define ETNA0TSU_ADRH18_ADRH18 ETNA0TSU_ADRH18_BASE.BIT._ADRH18
#define ETNA0TSU_ADRL18 ETNA0TSU_ADRL18_BASE.UINT32
#define ETNA0TSU_ADRL18_ADRL18 ETNA0TSU_ADRL18_BASE.BIT._ADRL18
#define ETNA0TSU_ADRH19 ETNA0TSU_ADRH19_BASE.UINT32
#define ETNA0TSU_ADRH19_ADRH19 ETNA0TSU_ADRH19_BASE.BIT._ADRH19
#define ETNA0TSU_ADRL19 ETNA0TSU_ADRL19_BASE.UINT32
#define ETNA0TSU_ADRL19_ADRL19 ETNA0TSU_ADRL19_BASE.BIT._ADRL19
#define ETNA0TSU_ADRH20 ETNA0TSU_ADRH20_BASE.UINT32
#define ETNA0TSU_ADRH20_ADRH20 ETNA0TSU_ADRH20_BASE.BIT._ADRH20
#define ETNA0TSU_ADRL20 ETNA0TSU_ADRL20_BASE.UINT32
#define ETNA0TSU_ADRL20_ADRL20 ETNA0TSU_ADRL20_BASE.BIT._ADRL20
#define ETNA0TSU_ADRH21 ETNA0TSU_ADRH21_BASE.UINT32
#define ETNA0TSU_ADRH21_ADRH21 ETNA0TSU_ADRH21_BASE.BIT._ADRH21
#define ETNA0TSU_ADRL21 ETNA0TSU_ADRL21_BASE.UINT32
#define ETNA0TSU_ADRL21_ADRL21 ETNA0TSU_ADRL21_BASE.BIT._ADRL21
#define ETNA0TSU_ADRH22 ETNA0TSU_ADRH22_BASE.UINT32
#define ETNA0TSU_ADRH22_ADRH22 ETNA0TSU_ADRH22_BASE.BIT._ADRH22
#define ETNA0TSU_ADRL22 ETNA0TSU_ADRL22_BASE.UINT32
#define ETNA0TSU_ADRL22_ADRL22 ETNA0TSU_ADRL22_BASE.BIT._ADRL22
#define ETNA0TSU_ADRH23 ETNA0TSU_ADRH23_BASE.UINT32
#define ETNA0TSU_ADRH23_ADRH23 ETNA0TSU_ADRH23_BASE.BIT._ADRH23
#define ETNA0TSU_ADRL23 ETNA0TSU_ADRL23_BASE.UINT32
#define ETNA0TSU_ADRL23_ADRL23 ETNA0TSU_ADRL23_BASE.BIT._ADRL23
#define ETNA0TSU_ADRH24 ETNA0TSU_ADRH24_BASE.UINT32
#define ETNA0TSU_ADRH24_ADRH24 ETNA0TSU_ADRH24_BASE.BIT._ADRH24
#define ETNA0TSU_ADRL24 ETNA0TSU_ADRL24_BASE.UINT32
#define ETNA0TSU_ADRL24_ADRL24 ETNA0TSU_ADRL24_BASE.BIT._ADRL24
#define ETNA0TSU_ADRH25 ETNA0TSU_ADRH25_BASE.UINT32
#define ETNA0TSU_ADRH25_ADRH25 ETNA0TSU_ADRH25_BASE.BIT._ADRH25
#define ETNA0TSU_ADRL25 ETNA0TSU_ADRL25_BASE.UINT32
#define ETNA0TSU_ADRL25_ADRL25 ETNA0TSU_ADRL25_BASE.BIT._ADRL25
#define ETNA0TSU_ADRH26 ETNA0TSU_ADRH26_BASE.UINT32
#define ETNA0TSU_ADRH26_ADRH26 ETNA0TSU_ADRH26_BASE.BIT._ADRH26
#define ETNA0TSU_ADRL26 ETNA0TSU_ADRL26_BASE.UINT32
#define ETNA0TSU_ADRL26_ADRL26 ETNA0TSU_ADRL26_BASE.BIT._ADRL26
#define ETNA0TSU_ADRH27 ETNA0TSU_ADRH27_BASE.UINT32
#define ETNA0TSU_ADRH27_ADRH27 ETNA0TSU_ADRH27_BASE.BIT._ADRH27
#define ETNA0TSU_ADRL27 ETNA0TSU_ADRL27_BASE.UINT32
#define ETNA0TSU_ADRL27_ADRL27 ETNA0TSU_ADRL27_BASE.BIT._ADRL27
#define ETNA0TSU_ADRH28 ETNA0TSU_ADRH28_BASE.UINT32
#define ETNA0TSU_ADRH28_ADRH28 ETNA0TSU_ADRH28_BASE.BIT._ADRH28
#define ETNA0TSU_ADRL28 ETNA0TSU_ADRL28_BASE.UINT32
#define ETNA0TSU_ADRL28_ADRL28 ETNA0TSU_ADRL28_BASE.BIT._ADRL28
#define ETNA0TSU_ADRH29 ETNA0TSU_ADRH29_BASE.UINT32
#define ETNA0TSU_ADRH29_ADRH29 ETNA0TSU_ADRH29_BASE.BIT._ADRH29
#define ETNA0TSU_ADRL29 ETNA0TSU_ADRL29_BASE.UINT32
#define ETNA0TSU_ADRL29_ADRL29 ETNA0TSU_ADRL29_BASE.BIT._ADRL29
#define ETNA0TSU_ADRH30 ETNA0TSU_ADRH30_BASE.UINT32
#define ETNA0TSU_ADRH30_ADRH30 ETNA0TSU_ADRH30_BASE.BIT._ADRH30
#define ETNA0TSU_ADRL30 ETNA0TSU_ADRL30_BASE.UINT32
#define ETNA0TSU_ADRL30_ADRL30 ETNA0TSU_ADRL30_BASE.BIT._ADRL30
#define ETNA0TSU_ADRH31 ETNA0TSU_ADRH31_BASE.UINT32
#define ETNA0TSU_ADRH31_ADRH31 ETNA0TSU_ADRH31_BASE.BIT._ADRH31
#define ETNA0TSU_ADRL31 ETNA0TSU_ADRL31_BASE.UINT32
#define ETNA0TSU_ADRL31_ADRL31 ETNA0TSU_ADRL31_BASE.BIT._ADRL31
#define ETNA0HDMMDR0 ETNA0HDMMDR0_BASE.UINT32
#define ETNA0HDMMDR0_ITO0 ETNA0HDMMDR0_BASE.BIT._ITO0
#define ETNA0HDMMDR0_DTO0 ETNA0HDMMDR0_BASE.BIT._DTO0
#define ETNA0HDMISR0 ETNA0HDMISR0_BASE.UINT32
#define ETNA0HDMISR0_HDIS0 ETNA0HDMISR0_BASE.BIT._HDIS0
#define ETNA0HDMISR0_SLS00 ETNA0HDMISR0_BASE.BIT._SLS00
#define ETNA0HDMISR0_SLS10 ETNA0HDMISR0_BASE.BIT._SLS10
#define ETNA0HDMISR0_SLS20 ETNA0HDMISR0_BASE.BIT._SLS20
#define ETNA0HDMISR0_SLS30 ETNA0HDMISR0_BASE.BIT._SLS30
#define ETNA0HDMISR0_ITOS0 ETNA0HDMISR0_BASE.BIT._ITOS0
#define ETNA0HDMISR0_MSS20 ETNA0HDMISR0_BASE.BIT._MSS20
#define ETNA0HDMISR0_DTOS0 ETNA0HDMISR0_BASE.BIT._DTOS0
#define ETNA0HDMIER0 ETNA0HDMIER0_BASE.UINT32
#define ETNA0HDMIER0_HDIE0 ETNA0HDMIER0_BASE.BIT._HDIE0
#define ETNA0HDMIER0_SLE00 ETNA0HDMIER0_BASE.BIT._SLE00
#define ETNA0HDMIER0_SLE10 ETNA0HDMIER0_BASE.BIT._SLE10
#define ETNA0HDMIER0_SLE20 ETNA0HDMIER0_BASE.BIT._SLE20
#define ETNA0HDMIER0_SLE30 ETNA0HDMIER0_BASE.BIT._SLE30
#define ETNA0HDMIER0_ITOE0 ETNA0HDMIER0_BASE.BIT._ITOE0
#define ETNA0HDMIER0_MSE20 ETNA0HDMIER0_BASE.BIT._MSE20
#define ETNA0HDMIER0_DTOE0 ETNA0HDMIER0_BASE.BIT._DTOE0
#define ETNA0EDSR1 ETNA0EDSR1_BASE.UINT32
#define ETNA0EDSR1_ENR1 ETNA0EDSR1_BASE.BIT._ENR1
#define ETNA0EDSR1_ENT1 ETNA0EDSR1_BASE.BIT._ENT1
#define ETNA0EDSR1_GPO1 ETNA0EDSR1_BASE.BIT._GPO1
#define ETNA0TDLAR1 ETNA0TDLAR1_BASE.UINT32
#define ETNA0TDLAR1_TDLA1 ETNA0TDLAR1_BASE.BIT._TDLA1
#define ETNA0TDFAR1 ETNA0TDFAR1_BASE.UINT32
#define ETNA0TDFAR1_TDFA1 ETNA0TDFAR1_BASE.BIT._TDFA1
#define ETNA0TDFXR1 ETNA0TDFXR1_BASE.UINT32
#define ETNA0TDFXR1_TDFX0 ETNA0TDFXR1_BASE.BIT._TDFX0
#define ETNA0TDFFR1 ETNA0TDFFR1_BASE.UINT32
#define ETNA0TDFFR1_TDLF1 ETNA0TDFFR1_BASE.BIT._TDLF1
#define ETNA0RDLAR1 ETNA0RDLAR1_BASE.UINT32
#define ETNA0RDLAR1_RDLA1 ETNA0RDLAR1_BASE.BIT._RDLA1
#define ETNA0RDFAR1 ETNA0RDFAR1_BASE.UINT32
#define ETNA0RDFAR1_RDFA1 ETNA0RDFAR1_BASE.BIT._RDFA1
#define ETNA0RDFXR1 ETNA0RDFXR1_BASE.UINT32
#define ETNA0RDFXR1_RDFX1 ETNA0RDFXR1_BASE.BIT._RDFX1
#define ETNA0RDFFR1 ETNA0RDFFR1_BASE.UINT32
#define ETNA0RDFFR1_RDLF1 ETNA0RDFFR1_BASE.BIT._RDLF1
#define ETNA0EDMR1 ETNA0EDMR1_BASE.UINT32
#define ETNA0EDMR1_SWRR1 ETNA0EDMR1_BASE.BIT._SWRR1
#define ETNA0EDMR1_SWRT1 ETNA0EDMR1_BASE.BIT._SWRT1
#define ETNA0EDMR1_DL1 ETNA0EDMR1_BASE.BIT._DL1
#define ETNA0EDMR1_DE1 ETNA0EDMR1_BASE.BIT._DE1
#define ETNA0EDTRR1 ETNA0EDTRR1_BASE.UINT32
#define ETNA0EDTRR1_TR1 ETNA0EDTRR1_BASE.BIT._TR1
#define ETNA0EDRRR1 ETNA0EDRRR1_BASE.UINT32
#define ETNA0EDRRR1_RR1 ETNA0EDRRR1_BASE.BIT._RR1
#define ETNA0EESR1 ETNA0EESR1_BASE.UINT32
#define ETNA0EESR1_CERF1 ETNA0EESR1_BASE.BIT._CERF1
#define ETNA0EESR1_PRE1 ETNA0EESR1_BASE.BIT._PRE1
#define ETNA0EESR1_RTSF1 ETNA0EESR1_BASE.BIT._RTSF1
#define ETNA0EESR1_RTLF1 ETNA0EESR1_BASE.BIT._RTLF1
#define ETNA0EESR1_RRF1 ETNA0EESR1_BASE.BIT._RRF1
#define ETNA0EESR1_RMAF1 ETNA0EESR1_BASE.BIT._RMAF1
#define ETNA0EESR1_TRO1 ETNA0EESR1_BASE.BIT._TRO1
#define ETNA0EESR1_CD1 ETNA0EESR1_BASE.BIT._CD1
#define ETNA0EESR1_DLC1 ETNA0EESR1_BASE.BIT._DLC1
#define ETNA0EESR1_RFOF1 ETNA0EESR1_BASE.BIT._RFOF1
#define ETNA0EESR1_RDE1 ETNA0EESR1_BASE.BIT._RDE1
#define ETNA0EESR1_FR1 ETNA0EESR1_BASE.BIT._FR1
#define ETNA0EESR1_TDE1 ETNA0EESR1_BASE.BIT._TDE1
#define ETNA0EESR1_TC1_0 ETNA0EESR1_BASE.BIT._TC1_0
#define ETNA0EESR1_ECI1 ETNA0EESR1_BASE.BIT._ECI1
#define ETNA0EESR1_RFCOF1 ETNA0EESR1_BASE.BIT._RFCOF1
#define ETNA0EESR1_RABT1 ETNA0EESR1_BASE.BIT._RABT1
#define ETNA0EESR1_ROC1 ETNA0EESR1_BASE.BIT._ROC1
#define ETNA0EESR1_TC1_1 ETNA0EESR1_BASE.BIT._TC1_1
#define ETNA0EESR1_TWB1 ETNA0EESR1_BASE.BIT._TWB1
#define ETNA0EESIPR1 ETNA0EESIPR1_BASE.UINT32
#define ETNA0EESIPR1_CERF1IP ETNA0EESIPR1_BASE.BIT._CERF1IP
#define ETNA0EESIPR1_PRE1IP ETNA0EESIPR1_BASE.BIT._PRE1IP
#define ETNA0EESIPR1_RTSF1IP ETNA0EESIPR1_BASE.BIT._RTSF1IP
#define ETNA0EESIPR1_RTLF1IP ETNA0EESIPR1_BASE.BIT._RTLF1IP
#define ETNA0EESIPR1_RRF1IP ETNA0EESIPR1_BASE.BIT._RRF1IP
#define ETNA0EESIPR1_RMAF1IP ETNA0EESIPR1_BASE.BIT._RMAF1IP
#define ETNA0EESIPR1_TRO1IP ETNA0EESIPR1_BASE.BIT._TRO1IP
#define ETNA0EESIPR1_CD1IP ETNA0EESIPR1_BASE.BIT._CD1IP
#define ETNA0EESIPR1_DLC1IP ETNA0EESIPR1_BASE.BIT._DLC1IP
#define ETNA0EESIPR1_RFOF1IP ETNA0EESIPR1_BASE.BIT._RFOF1IP
#define ETNA0EESIPR1_RDE1IP ETNA0EESIPR1_BASE.BIT._RDE1IP
#define ETNA0EESIPR1_FR1IP ETNA0EESIPR1_BASE.BIT._FR1IP
#define ETNA0EESIPR1_TDE1IP ETNA0EESIPR1_BASE.BIT._TDE1IP
#define ETNA0EESIPR1_TC01IP ETNA0EESIPR1_BASE.BIT._TC01IP
#define ETNA0EESIPR1_ECI1IP ETNA0EESIPR1_BASE.BIT._ECI1IP
#define ETNA0EESIPR1_RFCOF1IP ETNA0EESIPR1_BASE.BIT._RFCOF1IP
#define ETNA0EESIPR1_RABT1IP ETNA0EESIPR1_BASE.BIT._RABT1IP
#define ETNA0EESIPR1_ROC1IP ETNA0EESIPR1_BASE.BIT._ROC1IP
#define ETNA0EESIPR1_TC10IP ETNA0EESIPR1_BASE.BIT._TC10IP
#define ETNA0EESIPR1_TWB01IP ETNA0EESIPR1_BASE.BIT._TWB01IP
#define ETNA0EESIPR1_TWB10IP ETNA0EESIPR1_BASE.BIT._TWB10IP
#define ETNA0TRSCER1 ETNA0TRSCER1_BASE.UINT32
#define ETNA0TRSCER1_CERF1CE ETNA0TRSCER1_BASE.BIT._CERF1CE
#define ETNA0TRSCER1_PRE1CE ETNA0TRSCER1_BASE.BIT._PRE1CE
#define ETNA0TRSCER1_RTSF1CE ETNA0TRSCER1_BASE.BIT._RTSF1CE
#define ETNA0TRSCER1_RTLF1CE ETNA0TRSCER1_BASE.BIT._RTLF1CE
#define ETNA0TRSCER1_RRF1CE ETNA0TRSCER1_BASE.BIT._RRF1CE
#define ETNA0TRSCER1_RMAF1CE ETNA0TRSCER1_BASE.BIT._RMAF1CE
#define ETNA0TRSCER1_RABT1CE ETNA0TRSCER1_BASE.BIT._RABT1CE
#define ETNA0RMFCR1 ETNA0RMFCR1_BASE.UINT32
#define ETNA0RMFCR1_MFC1 ETNA0RMFCR1_BASE.BIT._MFC1
#define ETNA0FDR1 ETNA0FDR1_BASE.UINT32
#define ETNA0FDR1_RFD1 ETNA0FDR1_BASE.BIT._RFD1
#define ETNA0FDR1_TFD1 ETNA0FDR1_BASE.BIT._TFD1
#define ETNA0RMCR1 ETNA0RMCR1_BASE.UINT32
#define ETNA0RMCR1_RNC1 ETNA0RMCR1_BASE.BIT._RNC1
#define ETNA0RPADIR1 ETNA0RPADIR1_BASE.UINT32
#define ETNA0RPADIR1_PADR1 ETNA0RPADIR1_BASE.BIT._PADR1
#define ETNA0RPADIR1_PADS1 ETNA0RPADIR1_BASE.BIT._PADS1
#define ETNA0FCFTR1 ETNA0FCFTR1_BASE.UINT32
#define ETNA0FCFTR1_RFS1 ETNA0FCFTR1_BASE.BIT._RFS1
#define ETNA0FCFTR1_RFF1 ETNA0FCFTR1_BASE.BIT._RFF1
#define ETNA0TFSR1 ETNA0TFSR1_BASE.UINT32
#define ETNA0TFSR1_TDAM1 ETNA0TFSR1_BASE.BIT._TDAM1
#define ETNA0TFSR1_TFAM1 ETNA0TFSR1_BASE.BIT._TFAM1
#define ETNA0TFSR1_TWBR1 ETNA0TFSR1_BASE.BIT._TWBR1
#define ETNA0RFSR1 ETNA0RFSR1_BASE.UINT32
#define ETNA0RFSR1_RDAM1 ETNA0RFSR1_BASE.BIT._RDAM1
#define ETNA0RFSR1_RFAM1 ETNA0RFSR1_BASE.BIT._RFAM1
#define ETNA0ECMR1 ETNA0ECMR1_BASE.UINT32
#define ETNA0ECMR1_PRM1 ETNA0ECMR1_BASE.BIT._PRM1
#define ETNA0ECMR1_DM1 ETNA0ECMR1_BASE.BIT._DM1
#define ETNA0ECMR1_ILB1 ETNA0ECMR1_BASE.BIT._ILB1
#define ETNA0ECMR1_TE1 ETNA0ECMR1_BASE.BIT._TE1
#define ETNA0ECMR1_RE1 ETNA0ECMR1_BASE.BIT._RE1
#define ETNA0ECMR1_MPDE1 ETNA0ECMR1_BASE.BIT._MPDE1
#define ETNA0ECMR1_MCT1 ETNA0ECMR1_BASE.BIT._MCT1
#define ETNA0ECMR1_TXF1 ETNA0ECMR1_BASE.BIT._TXF1
#define ETNA0ECMR1_RXF1 ETNA0ECMR1_BASE.BIT._RXF1
#define ETNA0ECMR1_PFR1 ETNA0ECMR1_BASE.BIT._PFR1
#define ETNA0ECMR1_TZPF1_DCAC1 ETNA0ECMR1_BASE.BIT._TZPF1_DCAC1
#define ETNA0ECMR1_RZPF1 ETNA0ECMR1_BASE.BIT._RZPF1
#define ETNA0ECMR1_DPAD1 ETNA0ECMR1_BASE.BIT._DPAD1
#define ETNA0ECMR1_RCSC1 ETNA0ECMR1_BASE.BIT._RCSC1
#define ETNA0ECMR1_TRCCM1 ETNA0ECMR1_BASE.BIT._TRCCM1
#define ETNA0RFLR1 ETNA0RFLR1_BASE.UINT32
#define ETNA0RFLR1_RFL1 ETNA0RFLR1_BASE.BIT._RFL1
#define ETNA0ECSR1 ETNA0ECSR1_BASE.UINT32
#define ETNA0ECSR1_ICD1 ETNA0ECSR1_BASE.BIT._ICD1
#define ETNA0ECSR1_MPD1 ETNA0ECSR1_BASE.BIT._MPD1
#define ETNA0ECSR1_LINKI1 ETNA0ECSR1_BASE.BIT._LINKI1
#define ETNA0ECSR1_PFROI1 ETNA0ECSR1_BASE.BIT._PFROI1
#define ETNA0ECSIPR1 ETNA0ECSIPR1_BASE.UINT32
#define ETNA0ECSIPR1_ICDIP1 ETNA0ECSIPR1_BASE.BIT._ICDIP1
#define ETNA0ECSIPR1_MPDIP1 ETNA0ECSIPR1_BASE.BIT._MPDIP1
#define ETNA0ECSIPR1_LINKIP1 ETNA0ECSIPR1_BASE.BIT._LINKIP1
#define ETNA0ECSIPR1_PFROIP1 ETNA0ECSIPR1_BASE.BIT._PFROIP1
#define ETNA0PIR1 ETNA0PIR1_BASE.UINT32
#define ETNA0PIR1_MDC1 ETNA0PIR1_BASE.BIT._MDC1
#define ETNA0PIR1_MMD1 ETNA0PIR1_BASE.BIT._MMD1
#define ETNA0PIR1_MDO1 ETNA0PIR1_BASE.BIT._MDO1
#define ETNA0PIR1_MDI1 ETNA0PIR1_BASE.BIT._MDI1
#define ETNA0PLSR1 ETNA0PLSR1_BASE.UINT32
#define ETNA0PLSR1_LINK0 ETNA0PLSR1_BASE.BIT._LINK0
#define ETNA0PIPR1 ETNA0PIPR1_BASE.UINT32
#define ETNA0PIPR1_PHYIL1 ETNA0PIPR1_BASE.BIT._PHYIL1
#define ETNA0APR1 ETNA0APR1_BASE.UINT32
#define ETNA0APR1_AP1 ETNA0APR1_BASE.BIT._AP1
#define ETNA0MPR1 ETNA0MPR1_BASE.UINT32
#define ETNA0MPR1_MP1 ETNA0MPR1_BASE.BIT._MP1
#define ETNA0PFTCR1 ETNA0PFTCR1_BASE.UINT32
#define ETNA0PFTCR1_PFTXC1 ETNA0PFTCR1_BASE.BIT._PFTXC1
#define ETNA0PFRCR1 ETNA0PFRCR1_BASE.UINT32
#define ETNA0PFRCR1_PFRXC1 ETNA0PFRCR1_BASE.BIT._PFRXC1
#define ETNA0TPAUSER1 ETNA0TPAUSER1_BASE.UINT32
#define ETNA0TPAUSER1_TPAUSE1 ETNA0TPAUSER1_BASE.BIT._TPAUSE1
#define ETNA0TPFRCR1 ETNA0TPFRCR1_BASE.UINT32
#define ETNA0TPFRCR1_PFRTC1 ETNA0TPFRCR1_BASE.BIT._PFRTC1
#define ETNA0BCFRR1 ETNA0BCFRR1_BASE.UINT32
#define ETNA0BCFRR1_BCF1 ETNA0BCFRR1_BASE.BIT._BCF1
#define ETNA0CRBCFRR1 ETNA0CRBCFRR1_BASE.UINT32
#define ETNA0CRBCFRR1_CNT1 ETNA0CRBCFRR1_BASE.BIT._CNT1
#define ETNA0EMR1 ETNA0EMR1_BASE.UINT32
#define ETNA0EMR1_SPEED1 ETNA0EMR1_BASE.BIT._SPEED1
#define ETNA0MAHR1 ETNA0MAHR1_BASE.UINT32
#define ETNA0MAHR1_MA1 ETNA0MAHR1_BASE.BIT._MA1
#define ETNA0MALR1 ETNA0MALR1_BASE.UINT32
#define ETNA0MALR1_MA1 ETNA0MALR1_BASE.BIT._MA1
#define ETNA0TROCR1 ETNA0TROCR1_BASE.UINT32
#define ETNA0TROCR1_TROC1 ETNA0TROCR1_BASE.BIT._TROC1
#define ETNA0CDCR1 ETNA0CDCR1_BASE.UINT32
#define ETNA0CDCR1_COSDC1 ETNA0CDCR1_BASE.BIT._COSDC1
#define ETNA0LCCR1 ETNA0LCCR1_BASE.UINT32
#define ETNA0LCCR1_LCC1 ETNA0LCCR1_BASE.BIT._LCC1
#define ETNA0CEFCR1 ETNA0CEFCR1_BASE.UINT32
#define ETNA0CEFCR1_CEFC1 ETNA0CEFCR1_BASE.BIT._CEFC1
#define ETNA0FRECR1 ETNA0FRECR1_BASE.UINT32
#define ETNA0FRECR1_FREC1 ETNA0FRECR1_BASE.BIT._FREC1
#define ETNA0TSFRCR1 ETNA0TSFRCR1_BASE.UINT32
#define ETNA0TSFRCR1_TSFC1 ETNA0TSFRCR1_BASE.BIT._TSFC1
#define ETNA0TLFRCR1 ETNA0TLFRCR1_BASE.UINT32
#define ETNA0TLFRCR1_TLFC1 ETNA0TLFRCR1_BASE.BIT._TLFC1
#define ETNA0RFCR1 ETNA0RFCR1_BASE.UINT32
#define ETNA0RFCR1_RFC1 ETNA0RFCR1_BASE.BIT._RFC1
#define ETNA0MAFCR1 ETNA0MAFCR1_BASE.UINT32
#define ETNA0MAFCR1_MAFC1 ETNA0MAFCR1_BASE.BIT._MAFC1
#define ETNA0HDMMDR1 ETNA0HDMMDR1_BASE.UINT32
#define ETNA0HDMMDR1_ITO1 ETNA0HDMMDR1_BASE.BIT._ITO1
#define ETNA0HDMMDR1_DTO1 ETNA0HDMMDR1_BASE.BIT._DTO1
#define ETNA0HDMISR1 ETNA0HDMISR1_BASE.UINT32
#define ETNA0HDMISR1_HDIS1 ETNA0HDMISR1_BASE.BIT._HDIS1
#define ETNA0HDMISR1_SLS01 ETNA0HDMISR1_BASE.BIT._SLS01
#define ETNA0HDMISR1_SLS11 ETNA0HDMISR1_BASE.BIT._SLS11
#define ETNA0HDMISR1_SLS21 ETNA0HDMISR1_BASE.BIT._SLS21
#define ETNA0HDMISR1_SLS31 ETNA0HDMISR1_BASE.BIT._SLS31
#define ETNA0HDMISR1_ITOS1 ETNA0HDMISR1_BASE.BIT._ITOS1
#define ETNA0HDMISR1_MSS21 ETNA0HDMISR1_BASE.BIT._MSS21
#define ETNA0HDMISR1_DTOS1 ETNA0HDMISR1_BASE.BIT._DTOS1
#define ETNA0HDMIER1 ETNA0HDMIER1_BASE.UINT32
#define ETNA0HDMIER1_HDIE0 ETNA0HDMIER1_BASE.BIT._HDIE0
#define ETNA0HDMIER1_SLE00 ETNA0HDMIER1_BASE.BIT._SLE00
#define ETNA0HDMIER1_SLE10 ETNA0HDMIER1_BASE.BIT._SLE10
#define ETNA0HDMIER1_SLE20 ETNA0HDMIER1_BASE.BIT._SLE20
#define ETNA0HDMIER1_SLE30 ETNA0HDMIER1_BASE.BIT._SLE30
#define ETNA0HDMIER1_ITOE0 ETNA0HDMIER1_BASE.BIT._ITOE0
#define ETNA0HDMIER1_MSE20 ETNA0HDMIER1_BASE.BIT._MSE20
#define ETNA0HDMIER1_DTOE0 ETNA0HDMIER1_BASE.BIT._DTOE0

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif