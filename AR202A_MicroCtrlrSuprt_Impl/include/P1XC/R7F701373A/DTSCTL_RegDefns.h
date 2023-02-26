#ifndef __DR7F701373_DTSCTL_HEADER__
#define __DR7F701373_DTSCTL_HEADER__



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
    const uint32 _INTDTS0 : 1;
    const uint32 _INTDTS1 : 1;
    const uint32 _INTDTS2 : 1;
    const uint32 _INTDTS3 : 1;
    const uint32 _INTDTS4 : 1;
    const uint32 _INTDTS5 : 1;
    const uint32 _INTDTS6 : 1;
    const uint32 _INTDTS7 : 1;
    const uint32 _INTDTS8 : 1;
    const uint32 _INTDTS9 : 1;
    const uint32 _INTDTS10 : 1;
    const uint32 _INTDTS11 : 1;
    const uint32 _INTDTS12 : 1;
    const uint32 _INTDTS13 : 1;
    const uint32 _INTDTS14 : 1;
    const uint32 _INTDTS15 : 1;
    const uint32 _INTDTS16 : 1;
    const uint32 _INTDTS17 : 1;
    const uint32 _INTDTS18 : 1;
    const uint32 _INTDTS19 : 1;
    const uint32 _INTDTS20 : 1;
    const uint32 _INTDTS21 : 1;
    const uint32 _INTDTS22 : 1;
    const uint32 _INTDTS23 : 1;
    const uint32 _INTDTS24 : 1;
    const uint32 _INTDTS25 : 1;
    const uint32 _INTDTS26 : 1;
    const uint32 _INTDTS27 : 1;
    const uint32 _INTDTS28 : 1;
    const uint32 _INTDTS29 : 1;
    const uint32 _INTDTS30 : 1;
    const uint32 _INTDTS31 : 1;
} PINT0Bits_t;

typedef struct
{
    const uint32 _INTDTS32 : 1;
    const uint32 _INTDTS33 : 1;
    const uint32 _INTDTS34 : 1;
    const uint32 _INTDTS35 : 1;
    const uint32 _INTDTS36 : 1;
    const uint32 _INTDTS37 : 1;
    const uint32 _INTDTS38 : 1;
    const uint32 _INTDTS39 : 1;
    const uint32 _INTDTS40 : 1;
    const uint32 _INTDTS41 : 1;
    const uint32 _INTDTS42 : 1;
    const uint32 _INTDTS43 : 1;
    const uint32 _INTDTS44 : 1;
    const uint32 _INTDTS45 : 1;
    const uint32 _INTDTS46 : 1;
    const uint32 _INTDTS47 : 1;
    const uint32 _INTDTS48 : 1;
    const uint32 _INTDTS49 : 1;
    const uint32 _INTDTS50 : 1;
    const uint32 _INTDTS51 : 1;
    const uint32 _INTDTS52 : 1;
    const uint32 _INTDTS53 : 1;
    const uint32 _INTDTS54 : 1;
    const uint32 _INTDTS55 : 1;
    const uint32 _INTDTS56 : 1;
    const uint32 _INTDTS57 : 1;
    const uint32 _INTDTS58 : 1;
    const uint32 _INTDTS59 : 1;
    const uint32 _INTDTS60 : 1;
    const uint32 _INTDTS61 : 1;
    const uint32 _INTDTS62 : 1;
    const uint32 _INTDTS63 : 1;
} PINT1Bits_t;

typedef struct
{
    const uint32 _INTDTS64 : 1;
    const uint32 _INTDTS65 : 1;
    const uint32 _INTDTS66 : 1;
    const uint32 _INTDTS67 : 1;
    const uint32 _INTDTS68 : 1;
    const uint32 _INTDTS69 : 1;
    const uint32 _INTDTS70 : 1;
    const uint32 _INTDTS71 : 1;
    const uint32 _INTDTS72 : 1;
    const uint32 _INTDTS73 : 1;
    const uint32 _INTDTS74 : 1;
    const uint32 _INTDTS75 : 1;
    const uint32 _INTDTS76 : 1;
    const uint32 _INTDTS77 : 1;
    const uint32 _INTDTS78 : 1;
    const uint32 _INTDTS79 : 1;
    const uint32 _INTDTS80 : 1;
    const uint32 _INTDTS81 : 1;
    const uint32 _INTDTS82 : 1;
    const uint32 _INTDTS83 : 1;
    const uint32 _INTDTS84 : 1;
    const uint32 _INTDTS85 : 1;
    const uint32 _INTDTS86 : 1;
    const uint32 _INTDTS87 : 1;
    const uint32 _INTDTS88 : 1;
    const uint32 _INTDTS89 : 1;
    const uint32 _INTDTS90 : 1;
    const uint32 _INTDTS91 : 1;
    const uint32 _INTDTS92 : 1;
    const uint32 _INTDTS93 : 1;
    const uint32 _INTDTS94 : 1;
    const uint32 _INTDTS95 : 1;
} PINT2Bits_t;

typedef struct
{
    const uint32 _INTDTS96 : 1;
    const uint32 _INTDTS97 : 1;
    const uint32 _INTDTS98 : 1;
    const uint32 _INTDTS99 : 1;
    const uint32 _INTDTS100 : 1;
    const uint32 _INTDTS101 : 1;
    const uint32 _INTDTS102 : 1;
    const uint32 _INTDTS103 : 1;
    const uint32 _INTDTS104 : 1;
    const uint32 _INTDTS105 : 1;
    const uint32 _INTDTS106 : 1;
    const uint32 _INTDTS107 : 1;
    const uint32 _INTDTS108 : 1;
    const uint32 _INTDTS109 : 1;
    const uint32 _INTDTS110 : 1;
    const uint32 _INTDTS111 : 1;
    const uint32 _INTDTS112 : 1;
    const uint32 _INTDTS113 : 1;
    const uint32 _INTDTS114 : 1;
    const uint32 _INTDTS115 : 1;
    const uint32 _INTDTS116 : 1;
    const uint32 _INTDTS117 : 1;
    const uint32 _INTDTS118 : 1;
    const uint32 _INTDTS119 : 1;
    const uint32 _INTDTS120 : 1;
    const uint32 _INTDTS121 : 1;
    const uint32 _INTDTS122 : 1;
    const uint32 _INTDTS123 : 1;
    const uint32 _INTDTS124 : 1;
    const uint32 _INTDTS125 : 1;
    const uint32 _INTDTS126 : 1;
    const uint32 _INTDTS127 : 1;
} PINT3Bits_t;

typedef struct
{
    const uint32 _INTCTDTS0 : 1;
    const uint32 _INTCTDTS1 : 1;
    const uint32 _INTCTDTS2 : 1;
    const uint32 _INTCTDTS3 : 1;
    const uint32 _INTCTDTS4 : 1;
    const uint32 _INTCTDTS5 : 1;
    const uint32 _INTCTDTS6 : 1;
    const uint32 _INTCTDTS7 : 1;
    const uint32 _INTCTDTS8 : 1;
    const uint32 _INTCTDTS9 : 1;
    const uint32 _INTCTDTS10 : 1;
    const uint32 _INTCTDTS11 : 1;
    const uint32 _INTCTDTS12 : 1;
    const uint32 _INTCTDTS13 : 1;
    const uint32 _INTCTDTS14 : 1;
    const uint32 _INTCTDTS15 : 1;
    const uint32 _INTCTDTS16 : 1;
    const uint32 _INTCTDTS17 : 1;
    const uint32 _INTCTDTS18 : 1;
    const uint32 _INTCTDTS19 : 1;
    const uint32 _INTCTDTS20 : 1;
    const uint32 _INTCTDTS21 : 1;
    const uint32 _INTCTDTS22 : 1;
    const uint32 _INTCTDTS23 : 1;
    const uint32 _INTCTDTS24 : 1;
    const uint32 _INTCTDTS25 : 1;
    const uint32 _INTCTDTS26 : 1;
    const uint32 _INTCTDTS27 : 1;
    const uint32 _INTCTDTS28 : 1;
    const uint32 _INTCTDTS29 : 1;
    const uint32 _INTCTDTS30 : 1;
    const uint32 _INTCTDTS31 : 1;
} PINT4Bits_t;

typedef struct
{
    const uint32 _INTCTDTS32 : 1;
    const uint32 _INTCTDTS33 : 1;
    const uint32 _INTCTDTS34 : 1;
    const uint32 _INTCTDTS35 : 1;
    const uint32 _INTCTDTS36 : 1;
    const uint32 _INTCTDTS37 : 1;
    const uint32 _INTCTDTS38 : 1;
    const uint32 _INTCTDTS39 : 1;
    const uint32 _INTCTDTS40 : 1;
    const uint32 _INTCTDTS41 : 1;
    const uint32 _INTCTDTS42 : 1;
    const uint32 _INTCTDTS43 : 1;
    const uint32 _INTCTDTS44 : 1;
    const uint32 _INTCTDTS45 : 1;
    const uint32 _INTCTDTS46 : 1;
    const uint32 _INTCTDTS47 : 1;
    const uint32 _INTCTDTS48 : 1;
    const uint32 _INTCTDTS49 : 1;
    const uint32 _INTCTDTS50 : 1;
    const uint32 _INTCTDTS51 : 1;
    const uint32 _INTCTDTS52 : 1;
    const uint32 _INTCTDTS53 : 1;
    const uint32 _INTCTDTS54 : 1;
    const uint32 _INTCTDTS55 : 1;
    const uint32 _INTCTDTS56 : 1;
    const uint32 _INTCTDTS57 : 1;
    const uint32 _INTCTDTS58 : 1;
    const uint32 _INTCTDTS59 : 1;
    const uint32 _INTCTDTS60 : 1;
    const uint32 _INTCTDTS61 : 1;
    const uint32 _INTCTDTS62 : 1;
    const uint32 _INTCTDTS63 : 1;
} PINT5Bits_t;

typedef struct
{
    const uint32 _INTCTDTS64 : 1;
    const uint32 _INTCTDTS65 : 1;
    const uint32 _INTCTDTS66 : 1;
    const uint32 _INTCTDTS67 : 1;
    const uint32 _INTCTDTS68 : 1;
    const uint32 _INTCTDTS69 : 1;
    const uint32 _INTCTDTS70 : 1;
    const uint32 _INTCTDTS71 : 1;
    const uint32 _INTCTDTS72 : 1;
    const uint32 _INTCTDTS73 : 1;
    const uint32 _INTCTDTS74 : 1;
    const uint32 _INTCTDTS75 : 1;
    const uint32 _INTCTDTS76 : 1;
    const uint32 _INTCTDTS77 : 1;
    const uint32 _INTCTDTS78 : 1;
    const uint32 _INTCTDTS79 : 1;
    const uint32 _INTCTDTS80 : 1;
    const uint32 _INTCTDTS81 : 1;
    const uint32 _INTCTDTS82 : 1;
    const uint32 _INTCTDTS83 : 1;
    const uint32 _INTCTDTS84 : 1;
    const uint32 _INTCTDTS85 : 1;
    const uint32 _INTCTDTS86 : 1;
    const uint32 _INTCTDTS87 : 1;
    const uint32 _INTCTDTS88 : 1;
    const uint32 _INTCTDTS89 : 1;
    const uint32 _INTCTDTS90 : 1;
    const uint32 _INTCTDTS91 : 1;
    const uint32 _INTCTDTS92 : 1;
    const uint32 _INTCTDTS93 : 1;
    const uint32 _INTCTDTS94 : 1;
    const uint32 _INTCTDTS95 : 1;
} PINT6Bits_t;

typedef struct
{
    const uint32 _INTCTDTS96 : 1;
    const uint32 _INTCTDTS97 : 1;
    const uint32 _INTCTDTS98 : 1;
    const uint32 _INTCTDTS99 : 1;
    const uint32 _INTCTDTS100 : 1;
    const uint32 _INTCTDTS101 : 1;
    const uint32 _INTCTDTS102 : 1;
    const uint32 _INTCTDTS103 : 1;
    const uint32 _INTCTDTS104 : 1;
    const uint32 _INTCTDTS105 : 1;
    const uint32 _INTCTDTS106 : 1;
    const uint32 _INTCTDTS107 : 1;
    const uint32 _INTCTDTS108 : 1;
    const uint32 _INTCTDTS109 : 1;
    const uint32 _INTCTDTS110 : 1;
    const uint32 _INTCTDTS111 : 1;
    const uint32 _INTCTDTS112 : 1;
    const uint32 _INTCTDTS113 : 1;
    const uint32 _INTCTDTS114 : 1;
    const uint32 _INTCTDTS115 : 1;
    const uint32 _INTCTDTS116 : 1;
    const uint32 _INTCTDTS117 : 1;
    const uint32 _INTCTDTS118 : 1;
    const uint32 _INTCTDTS119 : 1;
    const uint32 _INTCTDTS120 : 1;
    const uint32 _INTCTDTS121 : 1;
    const uint32 _INTCTDTS122 : 1;
    const uint32 _INTCTDTS123 : 1;
    const uint32 _INTCTDTS124 : 1;
    const uint32 _INTCTDTS125 : 1;
    const uint32 _INTCTDTS126 : 1;
    const uint32 _INTCTDTS127 : 1;
} PINT7Bits_t;

typedef struct
{
    uint32 _INTCLR0 : 1;
    uint32 _INTCLR1 : 1;
    uint32 _INTCLR2 : 1;
    uint32 _INTCLR3 : 1;
    uint32 _INTCLR4 : 1;
    uint32 _INTCLR5 : 1;
    uint32 _INTCLR6 : 1;
    uint32 _INTCLR7 : 1;
    uint32 _INTCLR8 : 1;
    uint32 _INTCLR9 : 1;
    uint32 _INTCLR10 : 1;
    uint32 _INTCLR11 : 1;
    uint32 _INTCLR12 : 1;
    uint32 _INTCLR13 : 1;
    uint32 _INTCLR14 : 1;
    uint32 _INTCLR15 : 1;
    uint32 _INTCLR16 : 1;
    uint32 _INTCLR17 : 1;
    uint32 _INTCLR18 : 1;
    uint32 _INTCLR19 : 1;
    uint32 _INTCLR20 : 1;
    uint32 _INTCLR21 : 1;
    uint32 _INTCLR22 : 1;
    uint32 _INTCLR23 : 1;
    uint32 _INTCLR24 : 1;
    uint32 _INTCLR25 : 1;
    uint32 _INTCLR26 : 1;
    uint32 _INTCLR27 : 1;
    uint32 _INTCLR28 : 1;
    uint32 _INTCLR29 : 1;
    uint32 _INTCLR30 : 1;
    uint32 _INTCLR31 : 1;
} PINTCLR0Bits_t;

typedef struct
{
    uint32 _INTCLR32 : 1;
    uint32 _INTCLR33 : 1;
    uint32 _INTCLR34 : 1;
    uint32 _INTCLR35 : 1;
    uint32 _INTCLR36 : 1;
    uint32 _INTCLR37 : 1;
    uint32 _INTCLR38 : 1;
    uint32 _INTCLR39 : 1;
    uint32 _INTCLR40 : 1;
    uint32 _INTCLR41 : 1;
    uint32 _INTCLR42 : 1;
    uint32 _INTCLR43 : 1;
    uint32 _INTCLR44 : 1;
    uint32 _INTCLR45 : 1;
    uint32 _INTCLR46 : 1;
    uint32 _INTCLR47 : 1;
    uint32 _INTCLR48 : 1;
    uint32 _INTCLR49 : 1;
    uint32 _INTCLR50 : 1;
    uint32 _INTCLR51 : 1;
    uint32 _INTCLR52 : 1;
    uint32 _INTCLR53 : 1;
    uint32 _INTCLR54 : 1;
    uint32 _INTCLR55 : 1;
    uint32 _INTCLR56 : 1;
    uint32 _INTCLR57 : 1;
    uint32 _INTCLR58 : 1;
    uint32 _INTCLR59 : 1;
    uint32 _INTCLR60 : 1;
    uint32 _INTCLR61 : 1;
    uint32 _INTCLR62 : 1;
    uint32 _INTCLR63 : 1;
} PINTCLR1Bits_t;

typedef struct
{
    uint32 _INTCLR64 : 1;
    uint32 _INTCLR65 : 1;
    uint32 _INTCLR66 : 1;
    uint32 _INTCLR67 : 1;
    uint32 _INTCLR68 : 1;
    uint32 _INTCLR69 : 1;
    uint32 _INTCLR70 : 1;
    uint32 _INTCLR71 : 1;
    uint32 _INTCLR72 : 1;
    uint32 _INTCLR73 : 1;
    uint32 _INTCLR74 : 1;
    uint32 _INTCLR75 : 1;
    uint32 _INTCLR76 : 1;
    uint32 _INTCLR77 : 1;
    uint32 _INTCLR78 : 1;
    uint32 _INTCLR79 : 1;
    uint32 _INTCLR80 : 1;
    uint32 _INTCLR81 : 1;
    uint32 _INTCLR82 : 1;
    uint32 _INTCLR83 : 1;
    uint32 _INTCLR84 : 1;
    uint32 _INTCLR85 : 1;
    uint32 _INTCLR86 : 1;
    uint32 _INTCLR87 : 1;
    uint32 _INTCLR88 : 1;
    uint32 _INTCLR89 : 1;
    uint32 _INTCLR90 : 1;
    uint32 _INTCLR91 : 1;
    uint32 _INTCLR92 : 1;
    uint32 _INTCLR93 : 1;
    uint32 _INTCLR94 : 1;
    uint32 _INTCLR95 : 1;
} PINTCLR2Bits_t;

typedef struct
{
    uint32 _INTCLR96 : 1;
    uint32 _INTCLR97 : 1;
    uint32 _INTCLR98 : 1;
    uint32 _INTCLR99 : 1;
    uint32 _INTCLR100 : 1;
    uint32 _INTCLR101 : 1;
    uint32 _INTCLR102 : 1;
    uint32 _INTCLR103 : 1;
    uint32 _INTCLR104 : 1;
    uint32 _INTCLR105 : 1;
    uint32 _INTCLR106 : 1;
    uint32 _INTCLR107 : 1;
    uint32 _INTCLR108 : 1;
    uint32 _INTCLR109 : 1;
    uint32 _INTCLR110 : 1;
    uint32 _INTCLR111 : 1;
    uint32 _INTCLR112 : 1;
    uint32 _INTCLR113 : 1;
    uint32 _INTCLR114 : 1;
    uint32 _INTCLR115 : 1;
    uint32 _INTCLR116 : 1;
    uint32 _INTCLR117 : 1;
    uint32 _INTCLR118 : 1;
    uint32 _INTCLR119 : 1;
    uint32 _INTCLR120 : 1;
    uint32 _INTCLR121 : 1;
    uint32 _INTCLR122 : 1;
    uint32 _INTCLR123 : 1;
    uint32 _INTCLR124 : 1;
    uint32 _INTCLR125 : 1;
    uint32 _INTCLR126 : 1;
    uint32 _INTCLR127 : 1;
} PINTCLR3Bits_t;

typedef struct
{
    uint32 _INTCLR0 : 1;
    uint32 _INTCLR1 : 1;
    uint32 _INTCLR2 : 1;
    uint32 _INTCLR3 : 1;
    uint32 _INTCLR4 : 1;
    uint32 _INTCLR5 : 1;
    uint32 _INTCLR6 : 1;
    uint32 _INTCLR7 : 1;
    uint32 _INTCLR8 : 1;
    uint32 _INTCLR9 : 1;
    uint32 _INTCLR10 : 1;
    uint32 _INTCLR11 : 1;
    uint32 _INTCLR12 : 1;
    uint32 _INTCLR13 : 1;
    uint32 _INTCLR14 : 1;
    uint32 _INTCLR15 : 1;
    uint32 _INTCLR16 : 1;
    uint32 _INTCLR17 : 1;
    uint32 _INTCLR18 : 1;
    uint32 _INTCLR19 : 1;
    uint32 _INTCLR20 : 1;
    uint32 _INTCLR21 : 1;
    uint32 _INTCLR22 : 1;
    uint32 _INTCLR23 : 1;
    uint32 _INTCLR24 : 1;
    uint32 _INTCLR25 : 1;
    uint32 _INTCLR26 : 1;
    uint32 _INTCLR27 : 1;
    uint32 _INTCLR28 : 1;
    uint32 _INTCLR29 : 1;
    uint32 _INTCLR30 : 1;
    uint32 _INTCLR31 : 1;
} PINTCLR4Bits_t;

typedef struct
{
    uint32 _INTCLR32 : 1;
    uint32 _INTCLR33 : 1;
    uint32 _INTCLR34 : 1;
    uint32 _INTCLR35 : 1;
    uint32 _INTCLR36 : 1;
    uint32 _INTCLR37 : 1;
    uint32 _INTCLR38 : 1;
    uint32 _INTCLR39 : 1;
    uint32 _INTCLR40 : 1;
    uint32 _INTCLR41 : 1;
    uint32 _INTCLR42 : 1;
    uint32 _INTCLR43 : 1;
    uint32 _INTCLR44 : 1;
    uint32 _INTCLR45 : 1;
    uint32 _INTCLR46 : 1;
    uint32 _INTCLR47 : 1;
    uint32 _INTCLR48 : 1;
    uint32 _INTCLR49 : 1;
    uint32 _INTCLR50 : 1;
    uint32 _INTCLR51 : 1;
    uint32 _INTCLR52 : 1;
    uint32 _INTCLR53 : 1;
    uint32 _INTCLR54 : 1;
    uint32 _INTCLR55 : 1;
    uint32 _INTCLR56 : 1;
    uint32 _INTCLR57 : 1;
    uint32 _INTCLR58 : 1;
    uint32 _INTCLR59 : 1;
    uint32 _INTCLR60 : 1;
    uint32 _INTCLR61 : 1;
    uint32 _INTCLR62 : 1;
    uint32 _INTCLR63 : 1;
} PINTCLR5Bits_t;

typedef struct
{
    uint32 _INTCLR64 : 1;
    uint32 _INTCLR65 : 1;
    uint32 _INTCLR66 : 1;
    uint32 _INTCLR67 : 1;
    uint32 _INTCLR68 : 1;
    uint32 _INTCLR69 : 1;
    uint32 _INTCLR70 : 1;
    uint32 _INTCLR71 : 1;
    uint32 _INTCLR72 : 1;
    uint32 _INTCLR73 : 1;
    uint32 _INTCLR74 : 1;
    uint32 _INTCLR75 : 1;
    uint32 _INTCLR76 : 1;
    uint32 _INTCLR77 : 1;
    uint32 _INTCLR78 : 1;
    uint32 _INTCLR79 : 1;
    uint32 _INTCLR80 : 1;
    uint32 _INTCLR81 : 1;
    uint32 _INTCLR82 : 1;
    uint32 _INTCLR83 : 1;
    uint32 _INTCLR84 : 1;
    uint32 _INTCLR85 : 1;
    uint32 _INTCLR86 : 1;
    uint32 _INTCLR87 : 1;
    uint32 _INTCLR88 : 1;
    uint32 _INTCLR89 : 1;
    uint32 _INTCLR90 : 1;
    uint32 _INTCLR91 : 1;
    uint32 _INTCLR92 : 1;
    uint32 _INTCLR93 : 1;
    uint32 _INTCLR94 : 1;
    uint32 _INTCLR95 : 1;
} PINTCLR6Bits_t;

typedef struct
{
    uint32 _INTCLR96 : 1;
    uint32 _INTCLR97 : 1;
    uint32 _INTCLR98 : 1;
    uint32 _INTCLR99 : 1;
    uint32 _INTCLR100 : 1;
    uint32 _INTCLR101 : 1;
    uint32 _INTCLR102 : 1;
    uint32 _INTCLR103 : 1;
    uint32 _INTCLR104 : 1;
    uint32 _INTCLR105 : 1;
    uint32 _INTCLR106 : 1;
    uint32 _INTCLR107 : 1;
    uint32 _INTCLR108 : 1;
    uint32 _INTCLR109 : 1;
    uint32 _INTCLR110 : 1;
    uint32 _INTCLR111 : 1;
    uint32 _INTCLR112 : 1;
    uint32 _INTCLR113 : 1;
    uint32 _INTCLR114 : 1;
    uint32 _INTCLR115 : 1;
    uint32 _INTCLR116 : 1;
    uint32 _INTCLR117 : 1;
    uint32 _INTCLR118 : 1;
    uint32 _INTCLR119 : 1;
    uint32 _INTCLR120 : 1;
    uint32 _INTCLR121 : 1;
    uint32 _INTCLR122 : 1;
    uint32 _INTCLR123 : 1;
    uint32 _INTCLR124 : 1;
    uint32 _INTCLR125 : 1;
    uint32 _INTCLR126 : 1;
    uint32 _INTCLR127 : 1;
} PINTCLR7Bits_t;

typedef struct
{
    uint32 _DTSSEL0 : 1;
    uint32 _DTSSEL1 : 1;
    uint32 _DTSSEL2 : 1;
    uint32 _DTSSEL3 : 1;
    uint32 _DTSSEL4 : 1;
    uint32 _DTSSEL5 : 1;
    uint32 _DTSSEL6 : 1;
    uint32 _DTSSEL7 : 1;
    uint32 _DTSSEL8 : 1;
    uint32 _DTSSEL9 : 1;
    uint32 _DTSSEL10 : 1;
    uint32 _DTSSEL11 : 1;
    uint32 _DTSSEL12 : 1;
    uint32 _DTSSEL13 : 1;
    uint32 _DTSSEL14 : 1;
    uint32 _DTSSEL15 : 1;
    uint32 _DTSSEL16 : 1;
    uint32 _DTSSEL17 : 1;
    uint32 _DTSSEL18 : 1;
    uint32 _DTSSEL19 : 1;
    uint32 _DTSSEL20 : 1;
    uint32 _DTSSEL21 : 1;
    uint32 _DTSSEL22 : 1;
    uint32 _DTSSEL23 : 1;
    uint32 _DTSSEL24 : 1;
    uint32 _DTSSEL25 : 1;
    uint32 _DTSSEL26 : 1;
    uint32 _DTSSEL27 : 1;
    uint32 _DTSSEL28 : 1;
    uint32 _DTSSEL29 : 1;
    uint32 _DTSSEL30 : 1;
    uint32 _DTSSEL31 : 1;
} DTSTRGSEL0Bits_t;

typedef struct
{
    uint32 _DTSSEL32 : 1;
    uint32 _DTSSEL33 : 1;
    uint32 _DTSSEL34 : 1;
    uint32 _DTSSEL35 : 1;
    uint32 _DTSSEL36 : 1;
    uint32 _DTSSEL37 : 1;
    uint32 _DTSSEL38 : 1;
    uint32 _DTSSEL39 : 1;
    uint32 _DTSSEL40 : 1;
    uint32 _DTSSEL41 : 1;
    uint32 _DTSSEL42 : 1;
    uint32 _DTSSEL43 : 1;
    uint32 _DTSSEL44 : 1;
    uint32 _DTSSEL45 : 1;
    uint32 _DTSSEL46 : 1;
    uint32 _DTSSEL47 : 1;
    uint32 _DTSSEL48 : 1;
    uint32 _DTSSEL49 : 1;
    uint32 _DTSSEL50 : 1;
    uint32 _DTSSEL51 : 1;
    uint32 _DTSSEL52 : 1;
    uint32 _DTSSEL53 : 1;
    uint32 _DTSSEL54 : 1;
    uint32 _DTSSEL55 : 1;
    uint32 _DTSSEL56 : 1;
    uint32 _DTSSEL57 : 1;
    uint32 _DTSSEL58 : 1;
    uint32 _DTSSEL59 : 1;
    uint32 _DTSSEL60 : 1;
    uint32 _DTSSEL61 : 1;
    uint32 _DTSSEL62 : 1;
    uint32 _DTSSEL63 : 1;
} DTSTRGSEL1Bits_t;

typedef struct
{
    uint32 _DTSSEL64 : 1;
    uint32 _DTSSEL65 : 1;
    uint32 _DTSSEL66 : 1;
    uint32 _DTSSEL67 : 1;
    uint32 _DTSSEL68 : 1;
    uint32 _DTSSEL69 : 1;
    uint32 _DTSSEL70 : 1;
    uint32 _DTSSEL71 : 1;
    uint32 _DTSSEL72 : 1;
    uint32 _DTSSEL73 : 1;
    uint32 _DTSSEL74 : 1;
    uint32 _DTSSEL75 : 1;
    uint32 _DTSSEL76 : 1;
    uint32 _DTSSEL77 : 1;
    uint32 _DTSSEL78 : 1;
    uint32 _DTSSEL79 : 1;
    uint32 _DTSSEL80 : 1;
    uint32 _DTSSEL81 : 1;
    uint32 _DTSSEL82 : 1;
    uint32 _DTSSEL83 : 1;
    uint32 _DTSSEL84 : 1;
    uint32 _DTSSEL85 : 1;
    uint32 _DTSSEL86 : 1;
    uint32 _DTSSEL87 : 1;
    uint32 _DTSSEL88 : 1;
    uint32 _DTSSEL89 : 1;
    uint32 _DTSSEL90 : 1;
    uint32 _DTSSEL91 : 1;
    uint32 _DTSSEL92 : 1;
    uint32 _DTSSEL93 : 1;
    uint32 _DTSSEL94 : 1;
    uint32 _DTSSEL95 : 1;
} DTSTRGSEL2Bits_t;

typedef struct
{
    uint32 _DTSSEL96 : 1;
    uint32 _DTSSEL97 : 1;
    uint32 _DTSSEL98 : 1;
    uint32 _DTSSEL99 : 1;
    uint32 _DTSSEL100 : 1;
    uint32 _DTSSEL101 : 1;
    uint32 _DTSSEL102 : 1;
    uint32 _DTSSEL103 : 1;
    uint32 _DTSSEL104 : 1;
    uint32 _DTSSEL105 : 1;
    uint32 _DTSSEL106 : 1;
    uint32 _DTSSEL107 : 1;
    uint32 _DTSSEL108 : 1;
    uint32 _DTSSEL109 : 1;
    uint32 _DTSSEL110 : 1;
    uint32 _DTSSEL111 : 1;
    uint32 _DTSSEL112 : 1;
    uint32 _DTSSEL113 : 1;
    uint32 _DTSSEL114 : 1;
    uint32 _DTSSEL115 : 1;
    uint32 _DTSSEL116 : 1;
    uint32 _DTSSEL117 : 1;
    uint32 _DTSSEL118 : 1;
    uint32 _DTSSEL119 : 1;
    uint32 _DTSSEL120 : 1;
    uint32 _DTSSEL121 : 1;
    uint32 _DTSSEL122 : 1;
    uint32 _DTSSEL123 : 1;
    uint32 _DTSSEL124 : 1;
    uint32 _DTSSEL125 : 1;
    uint32 _DTSSEL126 : 1;
    uint32 _DTSSEL127 : 1;
} DTSTRGSEL3Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const PINT0Bits_t BIT;
} PINT0_t;

typedef union
{
    uint32 UINT32;
    const PINT1Bits_t BIT;
} PINT1_t;

typedef union
{
    uint32 UINT32;
    const PINT2Bits_t BIT;
} PINT2_t;

typedef union
{
    uint32 UINT32;
    const PINT3Bits_t BIT;
} PINT3_t;

typedef union
{
    uint32 UINT32;
    const PINT4Bits_t BIT;
} PINT4_t;

typedef union
{
    uint32 UINT32;
    const PINT5Bits_t BIT;
} PINT5_t;

typedef union
{
    uint32 UINT32;
    const PINT6Bits_t BIT;
} PINT6_t;

typedef union
{
    uint32 UINT32;
    const PINT7Bits_t BIT;
} PINT7_t;

typedef union
{
    uint32 UINT32;
    PINTCLR0Bits_t BIT;
} PINTCLR0_t;

typedef union
{
    uint32 UINT32;
    PINTCLR1Bits_t BIT;
} PINTCLR1_t;

typedef union
{
    uint32 UINT32;
    PINTCLR2Bits_t BIT;
} PINTCLR2_t;

typedef union
{
    uint32 UINT32;
    PINTCLR3Bits_t BIT;
} PINTCLR3_t;

typedef union
{
    uint32 UINT32;
    PINTCLR4Bits_t BIT;
} PINTCLR4_t;

typedef union
{
    uint32 UINT32;
    PINTCLR5Bits_t BIT;
} PINTCLR5_t;

typedef union
{
    uint32 UINT32;
    PINTCLR6Bits_t BIT;
} PINTCLR6_t;

typedef union
{
    uint32 UINT32;
    PINTCLR7Bits_t BIT;
} PINTCLR7_t;

typedef union
{
    uint32 UINT32;
    DTSTRGSEL0Bits_t BIT;
} DTSTRGSEL0_t;

typedef union
{
    uint32 UINT32;
    DTSTRGSEL1Bits_t BIT;
} DTSTRGSEL1_t;

typedef union
{
    uint32 UINT32;
    DTSTRGSEL2Bits_t BIT;
} DTSTRGSEL2_t;

typedef union
{
    uint32 UINT32;
    DTSTRGSEL3Bits_t BIT;
} DTSTRGSEL3_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PINT0_BASE, 0xFFD40000, __READ, PINT0_t);
__IOREG(PINT1_BASE, 0xFFD40004, __READ, PINT1_t);
__IOREG(PINT2_BASE, 0xFFD40008, __READ, PINT2_t);
__IOREG(PINT3_BASE, 0xFFD4000C, __READ, PINT3_t);
__IOREG(PINT4_BASE, 0xFFD40010, __READ, PINT4_t);
__IOREG(PINT5_BASE, 0xFFD40014, __READ, PINT5_t);
__IOREG(PINT6_BASE, 0xFFD40018, __READ, PINT6_t);
__IOREG(PINT7_BASE, 0xFFD4001C, __READ, PINT7_t);
__IOREG(PINTCLR0_BASE, 0xFFD40020, __READ_WRITE, PINTCLR0_t);
__IOREG(PINTCLR1_BASE, 0xFFD40024, __READ_WRITE, PINTCLR1_t);
__IOREG(PINTCLR2_BASE, 0xFFD40028, __READ_WRITE, PINTCLR2_t);
__IOREG(PINTCLR3_BASE, 0xFFD4002C, __READ_WRITE, PINTCLR3_t);
__IOREG(PINTCLR4_BASE, 0xFFD40030, __READ_WRITE, PINTCLR4_t);
__IOREG(PINTCLR5_BASE, 0xFFD40034, __READ_WRITE, PINTCLR5_t);
__IOREG(PINTCLR6_BASE, 0xFFD40038, __READ_WRITE, PINTCLR6_t);
__IOREG(PINTCLR7_BASE, 0xFFD4003C, __READ_WRITE, PINTCLR7_t);
__IOREG(DTSTRGSEL0_BASE, 0xFFD41000, __READ_WRITE, DTSTRGSEL0_t);
__IOREG(DTSTRGSEL1_BASE, 0xFFD41004, __READ_WRITE, DTSTRGSEL1_t);
__IOREG(DTSTRGSEL2_BASE, 0xFFD41008, __READ_WRITE, DTSTRGSEL2_t);
__IOREG(DTSTRGSEL3_BASE, 0xFFD4100C, __READ_WRITE, DTSTRGSEL3_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PINT0 PINT0_BASE.UINT32
#define PINT0_INTDTS0 PINT0_BASE.BIT._INTDTS0
#define PINT0_INTDTS1 PINT0_BASE.BIT._INTDTS1
#define PINT0_INTDTS2 PINT0_BASE.BIT._INTDTS2
#define PINT0_INTDTS3 PINT0_BASE.BIT._INTDTS3
#define PINT0_INTDTS4 PINT0_BASE.BIT._INTDTS4
#define PINT0_INTDTS5 PINT0_BASE.BIT._INTDTS5
#define PINT0_INTDTS6 PINT0_BASE.BIT._INTDTS6
#define PINT0_INTDTS7 PINT0_BASE.BIT._INTDTS7
#define PINT0_INTDTS8 PINT0_BASE.BIT._INTDTS8
#define PINT0_INTDTS9 PINT0_BASE.BIT._INTDTS9
#define PINT0_INTDTS10 PINT0_BASE.BIT._INTDTS10
#define PINT0_INTDTS11 PINT0_BASE.BIT._INTDTS11
#define PINT0_INTDTS12 PINT0_BASE.BIT._INTDTS12
#define PINT0_INTDTS13 PINT0_BASE.BIT._INTDTS13
#define PINT0_INTDTS14 PINT0_BASE.BIT._INTDTS14
#define PINT0_INTDTS15 PINT0_BASE.BIT._INTDTS15
#define PINT0_INTDTS16 PINT0_BASE.BIT._INTDTS16
#define PINT0_INTDTS17 PINT0_BASE.BIT._INTDTS17
#define PINT0_INTDTS18 PINT0_BASE.BIT._INTDTS18
#define PINT0_INTDTS19 PINT0_BASE.BIT._INTDTS19
#define PINT0_INTDTS20 PINT0_BASE.BIT._INTDTS20
#define PINT0_INTDTS21 PINT0_BASE.BIT._INTDTS21
#define PINT0_INTDTS22 PINT0_BASE.BIT._INTDTS22
#define PINT0_INTDTS23 PINT0_BASE.BIT._INTDTS23
#define PINT0_INTDTS24 PINT0_BASE.BIT._INTDTS24
#define PINT0_INTDTS25 PINT0_BASE.BIT._INTDTS25
#define PINT0_INTDTS26 PINT0_BASE.BIT._INTDTS26
#define PINT0_INTDTS27 PINT0_BASE.BIT._INTDTS27
#define PINT0_INTDTS28 PINT0_BASE.BIT._INTDTS28
#define PINT0_INTDTS29 PINT0_BASE.BIT._INTDTS29
#define PINT0_INTDTS30 PINT0_BASE.BIT._INTDTS30
#define PINT0_INTDTS31 PINT0_BASE.BIT._INTDTS31
#define PINT1 PINT1_BASE.UINT32
#define PINT1_INTDTS32 PINT1_BASE.BIT._INTDTS32
#define PINT1_INTDTS33 PINT1_BASE.BIT._INTDTS33
#define PINT1_INTDTS34 PINT1_BASE.BIT._INTDTS34
#define PINT1_INTDTS35 PINT1_BASE.BIT._INTDTS35
#define PINT1_INTDTS36 PINT1_BASE.BIT._INTDTS36
#define PINT1_INTDTS37 PINT1_BASE.BIT._INTDTS37
#define PINT1_INTDTS38 PINT1_BASE.BIT._INTDTS38
#define PINT1_INTDTS39 PINT1_BASE.BIT._INTDTS39
#define PINT1_INTDTS40 PINT1_BASE.BIT._INTDTS40
#define PINT1_INTDTS41 PINT1_BASE.BIT._INTDTS41
#define PINT1_INTDTS42 PINT1_BASE.BIT._INTDTS42
#define PINT1_INTDTS43 PINT1_BASE.BIT._INTDTS43
#define PINT1_INTDTS44 PINT1_BASE.BIT._INTDTS44
#define PINT1_INTDTS45 PINT1_BASE.BIT._INTDTS45
#define PINT1_INTDTS46 PINT1_BASE.BIT._INTDTS46
#define PINT1_INTDTS47 PINT1_BASE.BIT._INTDTS47
#define PINT1_INTDTS48 PINT1_BASE.BIT._INTDTS48
#define PINT1_INTDTS49 PINT1_BASE.BIT._INTDTS49
#define PINT1_INTDTS50 PINT1_BASE.BIT._INTDTS50
#define PINT1_INTDTS51 PINT1_BASE.BIT._INTDTS51
#define PINT1_INTDTS52 PINT1_BASE.BIT._INTDTS52
#define PINT1_INTDTS53 PINT1_BASE.BIT._INTDTS53
#define PINT1_INTDTS54 PINT1_BASE.BIT._INTDTS54
#define PINT1_INTDTS55 PINT1_BASE.BIT._INTDTS55
#define PINT1_INTDTS56 PINT1_BASE.BIT._INTDTS56
#define PINT1_INTDTS57 PINT1_BASE.BIT._INTDTS57
#define PINT1_INTDTS58 PINT1_BASE.BIT._INTDTS58
#define PINT1_INTDTS59 PINT1_BASE.BIT._INTDTS59
#define PINT1_INTDTS60 PINT1_BASE.BIT._INTDTS60
#define PINT1_INTDTS61 PINT1_BASE.BIT._INTDTS61
#define PINT1_INTDTS62 PINT1_BASE.BIT._INTDTS62
#define PINT1_INTDTS63 PINT1_BASE.BIT._INTDTS63
#define PINT2 PINT2_BASE.UINT32
#define PINT2_INTDTS64 PINT2_BASE.BIT._INTDTS64
#define PINT2_INTDTS65 PINT2_BASE.BIT._INTDTS65
#define PINT2_INTDTS66 PINT2_BASE.BIT._INTDTS66
#define PINT2_INTDTS67 PINT2_BASE.BIT._INTDTS67
#define PINT2_INTDTS68 PINT2_BASE.BIT._INTDTS68
#define PINT2_INTDTS69 PINT2_BASE.BIT._INTDTS69
#define PINT2_INTDTS70 PINT2_BASE.BIT._INTDTS70
#define PINT2_INTDTS71 PINT2_BASE.BIT._INTDTS71
#define PINT2_INTDTS72 PINT2_BASE.BIT._INTDTS72
#define PINT2_INTDTS73 PINT2_BASE.BIT._INTDTS73
#define PINT2_INTDTS74 PINT2_BASE.BIT._INTDTS74
#define PINT2_INTDTS75 PINT2_BASE.BIT._INTDTS75
#define PINT2_INTDTS76 PINT2_BASE.BIT._INTDTS76
#define PINT2_INTDTS77 PINT2_BASE.BIT._INTDTS77
#define PINT2_INTDTS78 PINT2_BASE.BIT._INTDTS78
#define PINT2_INTDTS79 PINT2_BASE.BIT._INTDTS79
#define PINT2_INTDTS80 PINT2_BASE.BIT._INTDTS80
#define PINT2_INTDTS81 PINT2_BASE.BIT._INTDTS81
#define PINT2_INTDTS82 PINT2_BASE.BIT._INTDTS82
#define PINT2_INTDTS83 PINT2_BASE.BIT._INTDTS83
#define PINT2_INTDTS84 PINT2_BASE.BIT._INTDTS84
#define PINT2_INTDTS85 PINT2_BASE.BIT._INTDTS85
#define PINT2_INTDTS86 PINT2_BASE.BIT._INTDTS86
#define PINT2_INTDTS87 PINT2_BASE.BIT._INTDTS87
#define PINT2_INTDTS88 PINT2_BASE.BIT._INTDTS88
#define PINT2_INTDTS89 PINT2_BASE.BIT._INTDTS89
#define PINT2_INTDTS90 PINT2_BASE.BIT._INTDTS90
#define PINT2_INTDTS91 PINT2_BASE.BIT._INTDTS91
#define PINT2_INTDTS92 PINT2_BASE.BIT._INTDTS92
#define PINT2_INTDTS93 PINT2_BASE.BIT._INTDTS93
#define PINT2_INTDTS94 PINT2_BASE.BIT._INTDTS94
#define PINT2_INTDTS95 PINT2_BASE.BIT._INTDTS95
#define PINT3 PINT3_BASE.UINT32
#define PINT3_INTDTS96 PINT3_BASE.BIT._INTDTS96
#define PINT3_INTDTS97 PINT3_BASE.BIT._INTDTS97
#define PINT3_INTDTS98 PINT3_BASE.BIT._INTDTS98
#define PINT3_INTDTS99 PINT3_BASE.BIT._INTDTS99
#define PINT3_INTDTS100 PINT3_BASE.BIT._INTDTS100
#define PINT3_INTDTS101 PINT3_BASE.BIT._INTDTS101
#define PINT3_INTDTS102 PINT3_BASE.BIT._INTDTS102
#define PINT3_INTDTS103 PINT3_BASE.BIT._INTDTS103
#define PINT3_INTDTS104 PINT3_BASE.BIT._INTDTS104
#define PINT3_INTDTS105 PINT3_BASE.BIT._INTDTS105
#define PINT3_INTDTS106 PINT3_BASE.BIT._INTDTS106
#define PINT3_INTDTS107 PINT3_BASE.BIT._INTDTS107
#define PINT3_INTDTS108 PINT3_BASE.BIT._INTDTS108
#define PINT3_INTDTS109 PINT3_BASE.BIT._INTDTS109
#define PINT3_INTDTS110 PINT3_BASE.BIT._INTDTS110
#define PINT3_INTDTS111 PINT3_BASE.BIT._INTDTS111
#define PINT3_INTDTS112 PINT3_BASE.BIT._INTDTS112
#define PINT3_INTDTS113 PINT3_BASE.BIT._INTDTS113
#define PINT3_INTDTS114 PINT3_BASE.BIT._INTDTS114
#define PINT3_INTDTS115 PINT3_BASE.BIT._INTDTS115
#define PINT3_INTDTS116 PINT3_BASE.BIT._INTDTS116
#define PINT3_INTDTS117 PINT3_BASE.BIT._INTDTS117
#define PINT3_INTDTS118 PINT3_BASE.BIT._INTDTS118
#define PINT3_INTDTS119 PINT3_BASE.BIT._INTDTS119
#define PINT3_INTDTS120 PINT3_BASE.BIT._INTDTS120
#define PINT3_INTDTS121 PINT3_BASE.BIT._INTDTS121
#define PINT3_INTDTS122 PINT3_BASE.BIT._INTDTS122
#define PINT3_INTDTS123 PINT3_BASE.BIT._INTDTS123
#define PINT3_INTDTS124 PINT3_BASE.BIT._INTDTS124
#define PINT3_INTDTS125 PINT3_BASE.BIT._INTDTS125
#define PINT3_INTDTS126 PINT3_BASE.BIT._INTDTS126
#define PINT3_INTDTS127 PINT3_BASE.BIT._INTDTS127
#define PINT4 PINT4_BASE.UINT32
#define PINT4_INTCTDTS0 PINT4_BASE.BIT._INTCTDTS0
#define PINT4_INTCTDTS1 PINT4_BASE.BIT._INTCTDTS1
#define PINT4_INTCTDTS2 PINT4_BASE.BIT._INTCTDTS2
#define PINT4_INTCTDTS3 PINT4_BASE.BIT._INTCTDTS3
#define PINT4_INTCTDTS4 PINT4_BASE.BIT._INTCTDTS4
#define PINT4_INTCTDTS5 PINT4_BASE.BIT._INTCTDTS5
#define PINT4_INTCTDTS6 PINT4_BASE.BIT._INTCTDTS6
#define PINT4_INTCTDTS7 PINT4_BASE.BIT._INTCTDTS7
#define PINT4_INTCTDTS8 PINT4_BASE.BIT._INTCTDTS8
#define PINT4_INTCTDTS9 PINT4_BASE.BIT._INTCTDTS9
#define PINT4_INTCTDTS10 PINT4_BASE.BIT._INTCTDTS10
#define PINT4_INTCTDTS11 PINT4_BASE.BIT._INTCTDTS11
#define PINT4_INTCTDTS12 PINT4_BASE.BIT._INTCTDTS12
#define PINT4_INTCTDTS13 PINT4_BASE.BIT._INTCTDTS13
#define PINT4_INTCTDTS14 PINT4_BASE.BIT._INTCTDTS14
#define PINT4_INTCTDTS15 PINT4_BASE.BIT._INTCTDTS15
#define PINT4_INTCTDTS16 PINT4_BASE.BIT._INTCTDTS16
#define PINT4_INTCTDTS17 PINT4_BASE.BIT._INTCTDTS17
#define PINT4_INTCTDTS18 PINT4_BASE.BIT._INTCTDTS18
#define PINT4_INTCTDTS19 PINT4_BASE.BIT._INTCTDTS19
#define PINT4_INTCTDTS20 PINT4_BASE.BIT._INTCTDTS20
#define PINT4_INTCTDTS21 PINT4_BASE.BIT._INTCTDTS21
#define PINT4_INTCTDTS22 PINT4_BASE.BIT._INTCTDTS22
#define PINT4_INTCTDTS23 PINT4_BASE.BIT._INTCTDTS23
#define PINT4_INTCTDTS24 PINT4_BASE.BIT._INTCTDTS24
#define PINT4_INTCTDTS25 PINT4_BASE.BIT._INTCTDTS25
#define PINT4_INTCTDTS26 PINT4_BASE.BIT._INTCTDTS26
#define PINT4_INTCTDTS27 PINT4_BASE.BIT._INTCTDTS27
#define PINT4_INTCTDTS28 PINT4_BASE.BIT._INTCTDTS28
#define PINT4_INTCTDTS29 PINT4_BASE.BIT._INTCTDTS29
#define PINT4_INTCTDTS30 PINT4_BASE.BIT._INTCTDTS30
#define PINT4_INTCTDTS31 PINT4_BASE.BIT._INTCTDTS31
#define PINT5 PINT5_BASE.UINT32
#define PINT5_INTCTDTS32 PINT5_BASE.BIT._INTCTDTS32
#define PINT5_INTCTDTS33 PINT5_BASE.BIT._INTCTDTS33
#define PINT5_INTCTDTS34 PINT5_BASE.BIT._INTCTDTS34
#define PINT5_INTCTDTS35 PINT5_BASE.BIT._INTCTDTS35
#define PINT5_INTCTDTS36 PINT5_BASE.BIT._INTCTDTS36
#define PINT5_INTCTDTS37 PINT5_BASE.BIT._INTCTDTS37
#define PINT5_INTCTDTS38 PINT5_BASE.BIT._INTCTDTS38
#define PINT5_INTCTDTS39 PINT5_BASE.BIT._INTCTDTS39
#define PINT5_INTCTDTS40 PINT5_BASE.BIT._INTCTDTS40
#define PINT5_INTCTDTS41 PINT5_BASE.BIT._INTCTDTS41
#define PINT5_INTCTDTS42 PINT5_BASE.BIT._INTCTDTS42
#define PINT5_INTCTDTS43 PINT5_BASE.BIT._INTCTDTS43
#define PINT5_INTCTDTS44 PINT5_BASE.BIT._INTCTDTS44
#define PINT5_INTCTDTS45 PINT5_BASE.BIT._INTCTDTS45
#define PINT5_INTCTDTS46 PINT5_BASE.BIT._INTCTDTS46
#define PINT5_INTCTDTS47 PINT5_BASE.BIT._INTCTDTS47
#define PINT5_INTCTDTS48 PINT5_BASE.BIT._INTCTDTS48
#define PINT5_INTCTDTS49 PINT5_BASE.BIT._INTCTDTS49
#define PINT5_INTCTDTS50 PINT5_BASE.BIT._INTCTDTS50
#define PINT5_INTCTDTS51 PINT5_BASE.BIT._INTCTDTS51
#define PINT5_INTCTDTS52 PINT5_BASE.BIT._INTCTDTS52
#define PINT5_INTCTDTS53 PINT5_BASE.BIT._INTCTDTS53
#define PINT5_INTCTDTS54 PINT5_BASE.BIT._INTCTDTS54
#define PINT5_INTCTDTS55 PINT5_BASE.BIT._INTCTDTS55
#define PINT5_INTCTDTS56 PINT5_BASE.BIT._INTCTDTS56
#define PINT5_INTCTDTS57 PINT5_BASE.BIT._INTCTDTS57
#define PINT5_INTCTDTS58 PINT5_BASE.BIT._INTCTDTS58
#define PINT5_INTCTDTS59 PINT5_BASE.BIT._INTCTDTS59
#define PINT5_INTCTDTS60 PINT5_BASE.BIT._INTCTDTS60
#define PINT5_INTCTDTS61 PINT5_BASE.BIT._INTCTDTS61
#define PINT5_INTCTDTS62 PINT5_BASE.BIT._INTCTDTS62
#define PINT5_INTCTDTS63 PINT5_BASE.BIT._INTCTDTS63
#define PINT6 PINT6_BASE.UINT32
#define PINT6_INTCTDTS64 PINT6_BASE.BIT._INTCTDTS64
#define PINT6_INTCTDTS65 PINT6_BASE.BIT._INTCTDTS65
#define PINT6_INTCTDTS66 PINT6_BASE.BIT._INTCTDTS66
#define PINT6_INTCTDTS67 PINT6_BASE.BIT._INTCTDTS67
#define PINT6_INTCTDTS68 PINT6_BASE.BIT._INTCTDTS68
#define PINT6_INTCTDTS69 PINT6_BASE.BIT._INTCTDTS69
#define PINT6_INTCTDTS70 PINT6_BASE.BIT._INTCTDTS70
#define PINT6_INTCTDTS71 PINT6_BASE.BIT._INTCTDTS71
#define PINT6_INTCTDTS72 PINT6_BASE.BIT._INTCTDTS72
#define PINT6_INTCTDTS73 PINT6_BASE.BIT._INTCTDTS73
#define PINT6_INTCTDTS74 PINT6_BASE.BIT._INTCTDTS74
#define PINT6_INTCTDTS75 PINT6_BASE.BIT._INTCTDTS75
#define PINT6_INTCTDTS76 PINT6_BASE.BIT._INTCTDTS76
#define PINT6_INTCTDTS77 PINT6_BASE.BIT._INTCTDTS77
#define PINT6_INTCTDTS78 PINT6_BASE.BIT._INTCTDTS78
#define PINT6_INTCTDTS79 PINT6_BASE.BIT._INTCTDTS79
#define PINT6_INTCTDTS80 PINT6_BASE.BIT._INTCTDTS80
#define PINT6_INTCTDTS81 PINT6_BASE.BIT._INTCTDTS81
#define PINT6_INTCTDTS82 PINT6_BASE.BIT._INTCTDTS82
#define PINT6_INTCTDTS83 PINT6_BASE.BIT._INTCTDTS83
#define PINT6_INTCTDTS84 PINT6_BASE.BIT._INTCTDTS84
#define PINT6_INTCTDTS85 PINT6_BASE.BIT._INTCTDTS85
#define PINT6_INTCTDTS86 PINT6_BASE.BIT._INTCTDTS86
#define PINT6_INTCTDTS87 PINT6_BASE.BIT._INTCTDTS87
#define PINT6_INTCTDTS88 PINT6_BASE.BIT._INTCTDTS88
#define PINT6_INTCTDTS89 PINT6_BASE.BIT._INTCTDTS89
#define PINT6_INTCTDTS90 PINT6_BASE.BIT._INTCTDTS90
#define PINT6_INTCTDTS91 PINT6_BASE.BIT._INTCTDTS91
#define PINT6_INTCTDTS92 PINT6_BASE.BIT._INTCTDTS92
#define PINT6_INTCTDTS93 PINT6_BASE.BIT._INTCTDTS93
#define PINT6_INTCTDTS94 PINT6_BASE.BIT._INTCTDTS94
#define PINT6_INTCTDTS95 PINT6_BASE.BIT._INTCTDTS95
#define PINT7 PINT7_BASE.UINT32
#define PINT7_INTCTDTS96 PINT7_BASE.BIT._INTCTDTS96
#define PINT7_INTCTDTS97 PINT7_BASE.BIT._INTCTDTS97
#define PINT7_INTCTDTS98 PINT7_BASE.BIT._INTCTDTS98
#define PINT7_INTCTDTS99 PINT7_BASE.BIT._INTCTDTS99
#define PINT7_INTCTDTS100 PINT7_BASE.BIT._INTCTDTS100
#define PINT7_INTCTDTS101 PINT7_BASE.BIT._INTCTDTS101
#define PINT7_INTCTDTS102 PINT7_BASE.BIT._INTCTDTS102
#define PINT7_INTCTDTS103 PINT7_BASE.BIT._INTCTDTS103
#define PINT7_INTCTDTS104 PINT7_BASE.BIT._INTCTDTS104
#define PINT7_INTCTDTS105 PINT7_BASE.BIT._INTCTDTS105
#define PINT7_INTCTDTS106 PINT7_BASE.BIT._INTCTDTS106
#define PINT7_INTCTDTS107 PINT7_BASE.BIT._INTCTDTS107
#define PINT7_INTCTDTS108 PINT7_BASE.BIT._INTCTDTS108
#define PINT7_INTCTDTS109 PINT7_BASE.BIT._INTCTDTS109
#define PINT7_INTCTDTS110 PINT7_BASE.BIT._INTCTDTS110
#define PINT7_INTCTDTS111 PINT7_BASE.BIT._INTCTDTS111
#define PINT7_INTCTDTS112 PINT7_BASE.BIT._INTCTDTS112
#define PINT7_INTCTDTS113 PINT7_BASE.BIT._INTCTDTS113
#define PINT7_INTCTDTS114 PINT7_BASE.BIT._INTCTDTS114
#define PINT7_INTCTDTS115 PINT7_BASE.BIT._INTCTDTS115
#define PINT7_INTCTDTS116 PINT7_BASE.BIT._INTCTDTS116
#define PINT7_INTCTDTS117 PINT7_BASE.BIT._INTCTDTS117
#define PINT7_INTCTDTS118 PINT7_BASE.BIT._INTCTDTS118
#define PINT7_INTCTDTS119 PINT7_BASE.BIT._INTCTDTS119
#define PINT7_INTCTDTS120 PINT7_BASE.BIT._INTCTDTS120
#define PINT7_INTCTDTS121 PINT7_BASE.BIT._INTCTDTS121
#define PINT7_INTCTDTS122 PINT7_BASE.BIT._INTCTDTS122
#define PINT7_INTCTDTS123 PINT7_BASE.BIT._INTCTDTS123
#define PINT7_INTCTDTS124 PINT7_BASE.BIT._INTCTDTS124
#define PINT7_INTCTDTS125 PINT7_BASE.BIT._INTCTDTS125
#define PINT7_INTCTDTS126 PINT7_BASE.BIT._INTCTDTS126
#define PINT7_INTCTDTS127 PINT7_BASE.BIT._INTCTDTS127
#define PINTCLR0 PINTCLR0_BASE.UINT32
#define PINTCLR0_INTCLR0 PINTCLR0_BASE.BIT._INTCLR0
#define PINTCLR0_INTCLR1 PINTCLR0_BASE.BIT._INTCLR1
#define PINTCLR0_INTCLR2 PINTCLR0_BASE.BIT._INTCLR2
#define PINTCLR0_INTCLR3 PINTCLR0_BASE.BIT._INTCLR3
#define PINTCLR0_INTCLR4 PINTCLR0_BASE.BIT._INTCLR4
#define PINTCLR0_INTCLR5 PINTCLR0_BASE.BIT._INTCLR5
#define PINTCLR0_INTCLR6 PINTCLR0_BASE.BIT._INTCLR6
#define PINTCLR0_INTCLR7 PINTCLR0_BASE.BIT._INTCLR7
#define PINTCLR0_INTCLR8 PINTCLR0_BASE.BIT._INTCLR8
#define PINTCLR0_INTCLR9 PINTCLR0_BASE.BIT._INTCLR9
#define PINTCLR0_INTCLR10 PINTCLR0_BASE.BIT._INTCLR10
#define PINTCLR0_INTCLR11 PINTCLR0_BASE.BIT._INTCLR11
#define PINTCLR0_INTCLR12 PINTCLR0_BASE.BIT._INTCLR12
#define PINTCLR0_INTCLR13 PINTCLR0_BASE.BIT._INTCLR13
#define PINTCLR0_INTCLR14 PINTCLR0_BASE.BIT._INTCLR14
#define PINTCLR0_INTCLR15 PINTCLR0_BASE.BIT._INTCLR15
#define PINTCLR0_INTCLR16 PINTCLR0_BASE.BIT._INTCLR16
#define PINTCLR0_INTCLR17 PINTCLR0_BASE.BIT._INTCLR17
#define PINTCLR0_INTCLR18 PINTCLR0_BASE.BIT._INTCLR18
#define PINTCLR0_INTCLR19 PINTCLR0_BASE.BIT._INTCLR19
#define PINTCLR0_INTCLR20 PINTCLR0_BASE.BIT._INTCLR20
#define PINTCLR0_INTCLR21 PINTCLR0_BASE.BIT._INTCLR21
#define PINTCLR0_INTCLR22 PINTCLR0_BASE.BIT._INTCLR22
#define PINTCLR0_INTCLR23 PINTCLR0_BASE.BIT._INTCLR23
#define PINTCLR0_INTCLR24 PINTCLR0_BASE.BIT._INTCLR24
#define PINTCLR0_INTCLR25 PINTCLR0_BASE.BIT._INTCLR25
#define PINTCLR0_INTCLR26 PINTCLR0_BASE.BIT._INTCLR26
#define PINTCLR0_INTCLR27 PINTCLR0_BASE.BIT._INTCLR27
#define PINTCLR0_INTCLR28 PINTCLR0_BASE.BIT._INTCLR28
#define PINTCLR0_INTCLR29 PINTCLR0_BASE.BIT._INTCLR29
#define PINTCLR0_INTCLR30 PINTCLR0_BASE.BIT._INTCLR30
#define PINTCLR0_INTCLR31 PINTCLR0_BASE.BIT._INTCLR31
#define PINTCLR1 PINTCLR1_BASE.UINT32
#define PINTCLR1_INTCLR32 PINTCLR1_BASE.BIT._INTCLR32
#define PINTCLR1_INTCLR33 PINTCLR1_BASE.BIT._INTCLR33
#define PINTCLR1_INTCLR34 PINTCLR1_BASE.BIT._INTCLR34
#define PINTCLR1_INTCLR35 PINTCLR1_BASE.BIT._INTCLR35
#define PINTCLR1_INTCLR36 PINTCLR1_BASE.BIT._INTCLR36
#define PINTCLR1_INTCLR37 PINTCLR1_BASE.BIT._INTCLR37
#define PINTCLR1_INTCLR38 PINTCLR1_BASE.BIT._INTCLR38
#define PINTCLR1_INTCLR39 PINTCLR1_BASE.BIT._INTCLR39
#define PINTCLR1_INTCLR40 PINTCLR1_BASE.BIT._INTCLR40
#define PINTCLR1_INTCLR41 PINTCLR1_BASE.BIT._INTCLR41
#define PINTCLR1_INTCLR42 PINTCLR1_BASE.BIT._INTCLR42
#define PINTCLR1_INTCLR43 PINTCLR1_BASE.BIT._INTCLR43
#define PINTCLR1_INTCLR44 PINTCLR1_BASE.BIT._INTCLR44
#define PINTCLR1_INTCLR45 PINTCLR1_BASE.BIT._INTCLR45
#define PINTCLR1_INTCLR46 PINTCLR1_BASE.BIT._INTCLR46
#define PINTCLR1_INTCLR47 PINTCLR1_BASE.BIT._INTCLR47
#define PINTCLR1_INTCLR48 PINTCLR1_BASE.BIT._INTCLR48
#define PINTCLR1_INTCLR49 PINTCLR1_BASE.BIT._INTCLR49
#define PINTCLR1_INTCLR50 PINTCLR1_BASE.BIT._INTCLR50
#define PINTCLR1_INTCLR51 PINTCLR1_BASE.BIT._INTCLR51
#define PINTCLR1_INTCLR52 PINTCLR1_BASE.BIT._INTCLR52
#define PINTCLR1_INTCLR53 PINTCLR1_BASE.BIT._INTCLR53
#define PINTCLR1_INTCLR54 PINTCLR1_BASE.BIT._INTCLR54
#define PINTCLR1_INTCLR55 PINTCLR1_BASE.BIT._INTCLR55
#define PINTCLR1_INTCLR56 PINTCLR1_BASE.BIT._INTCLR56
#define PINTCLR1_INTCLR57 PINTCLR1_BASE.BIT._INTCLR57
#define PINTCLR1_INTCLR58 PINTCLR1_BASE.BIT._INTCLR58
#define PINTCLR1_INTCLR59 PINTCLR1_BASE.BIT._INTCLR59
#define PINTCLR1_INTCLR60 PINTCLR1_BASE.BIT._INTCLR60
#define PINTCLR1_INTCLR61 PINTCLR1_BASE.BIT._INTCLR61
#define PINTCLR1_INTCLR62 PINTCLR1_BASE.BIT._INTCLR62
#define PINTCLR1_INTCLR63 PINTCLR1_BASE.BIT._INTCLR63
#define PINTCLR2 PINTCLR2_BASE.UINT32
#define PINTCLR2_INTCLR64 PINTCLR2_BASE.BIT._INTCLR64
#define PINTCLR2_INTCLR65 PINTCLR2_BASE.BIT._INTCLR65
#define PINTCLR2_INTCLR66 PINTCLR2_BASE.BIT._INTCLR66
#define PINTCLR2_INTCLR67 PINTCLR2_BASE.BIT._INTCLR67
#define PINTCLR2_INTCLR68 PINTCLR2_BASE.BIT._INTCLR68
#define PINTCLR2_INTCLR69 PINTCLR2_BASE.BIT._INTCLR69
#define PINTCLR2_INTCLR70 PINTCLR2_BASE.BIT._INTCLR70
#define PINTCLR2_INTCLR71 PINTCLR2_BASE.BIT._INTCLR71
#define PINTCLR2_INTCLR72 PINTCLR2_BASE.BIT._INTCLR72
#define PINTCLR2_INTCLR73 PINTCLR2_BASE.BIT._INTCLR73
#define PINTCLR2_INTCLR74 PINTCLR2_BASE.BIT._INTCLR74
#define PINTCLR2_INTCLR75 PINTCLR2_BASE.BIT._INTCLR75
#define PINTCLR2_INTCLR76 PINTCLR2_BASE.BIT._INTCLR76
#define PINTCLR2_INTCLR77 PINTCLR2_BASE.BIT._INTCLR77
#define PINTCLR2_INTCLR78 PINTCLR2_BASE.BIT._INTCLR78
#define PINTCLR2_INTCLR79 PINTCLR2_BASE.BIT._INTCLR79
#define PINTCLR2_INTCLR80 PINTCLR2_BASE.BIT._INTCLR80
#define PINTCLR2_INTCLR81 PINTCLR2_BASE.BIT._INTCLR81
#define PINTCLR2_INTCLR82 PINTCLR2_BASE.BIT._INTCLR82
#define PINTCLR2_INTCLR83 PINTCLR2_BASE.BIT._INTCLR83
#define PINTCLR2_INTCLR84 PINTCLR2_BASE.BIT._INTCLR84
#define PINTCLR2_INTCLR85 PINTCLR2_BASE.BIT._INTCLR85
#define PINTCLR2_INTCLR86 PINTCLR2_BASE.BIT._INTCLR86
#define PINTCLR2_INTCLR87 PINTCLR2_BASE.BIT._INTCLR87
#define PINTCLR2_INTCLR88 PINTCLR2_BASE.BIT._INTCLR88
#define PINTCLR2_INTCLR89 PINTCLR2_BASE.BIT._INTCLR89
#define PINTCLR2_INTCLR90 PINTCLR2_BASE.BIT._INTCLR90
#define PINTCLR2_INTCLR91 PINTCLR2_BASE.BIT._INTCLR91
#define PINTCLR2_INTCLR92 PINTCLR2_BASE.BIT._INTCLR92
#define PINTCLR2_INTCLR93 PINTCLR2_BASE.BIT._INTCLR93
#define PINTCLR2_INTCLR94 PINTCLR2_BASE.BIT._INTCLR94
#define PINTCLR2_INTCLR95 PINTCLR2_BASE.BIT._INTCLR95
#define PINTCLR3 PINTCLR3_BASE.UINT32
#define PINTCLR3_INTCLR96 PINTCLR3_BASE.BIT._INTCLR96
#define PINTCLR3_INTCLR97 PINTCLR3_BASE.BIT._INTCLR97
#define PINTCLR3_INTCLR98 PINTCLR3_BASE.BIT._INTCLR98
#define PINTCLR3_INTCLR99 PINTCLR3_BASE.BIT._INTCLR99
#define PINTCLR3_INTCLR100 PINTCLR3_BASE.BIT._INTCLR100
#define PINTCLR3_INTCLR101 PINTCLR3_BASE.BIT._INTCLR101
#define PINTCLR3_INTCLR102 PINTCLR3_BASE.BIT._INTCLR102
#define PINTCLR3_INTCLR103 PINTCLR3_BASE.BIT._INTCLR103
#define PINTCLR3_INTCLR104 PINTCLR3_BASE.BIT._INTCLR104
#define PINTCLR3_INTCLR105 PINTCLR3_BASE.BIT._INTCLR105
#define PINTCLR3_INTCLR106 PINTCLR3_BASE.BIT._INTCLR106
#define PINTCLR3_INTCLR107 PINTCLR3_BASE.BIT._INTCLR107
#define PINTCLR3_INTCLR108 PINTCLR3_BASE.BIT._INTCLR108
#define PINTCLR3_INTCLR109 PINTCLR3_BASE.BIT._INTCLR109
#define PINTCLR3_INTCLR110 PINTCLR3_BASE.BIT._INTCLR110
#define PINTCLR3_INTCLR111 PINTCLR3_BASE.BIT._INTCLR111
#define PINTCLR3_INTCLR112 PINTCLR3_BASE.BIT._INTCLR112
#define PINTCLR3_INTCLR113 PINTCLR3_BASE.BIT._INTCLR113
#define PINTCLR3_INTCLR114 PINTCLR3_BASE.BIT._INTCLR114
#define PINTCLR3_INTCLR115 PINTCLR3_BASE.BIT._INTCLR115
#define PINTCLR3_INTCLR116 PINTCLR3_BASE.BIT._INTCLR116
#define PINTCLR3_INTCLR117 PINTCLR3_BASE.BIT._INTCLR117
#define PINTCLR3_INTCLR118 PINTCLR3_BASE.BIT._INTCLR118
#define PINTCLR3_INTCLR119 PINTCLR3_BASE.BIT._INTCLR119
#define PINTCLR3_INTCLR120 PINTCLR3_BASE.BIT._INTCLR120
#define PINTCLR3_INTCLR121 PINTCLR3_BASE.BIT._INTCLR121
#define PINTCLR3_INTCLR122 PINTCLR3_BASE.BIT._INTCLR122
#define PINTCLR3_INTCLR123 PINTCLR3_BASE.BIT._INTCLR123
#define PINTCLR3_INTCLR124 PINTCLR3_BASE.BIT._INTCLR124
#define PINTCLR3_INTCLR125 PINTCLR3_BASE.BIT._INTCLR125
#define PINTCLR3_INTCLR126 PINTCLR3_BASE.BIT._INTCLR126
#define PINTCLR3_INTCLR127 PINTCLR3_BASE.BIT._INTCLR127
#define PINTCLR4 PINTCLR4_BASE.UINT32
#define PINTCLR4_INTCLR0 PINTCLR4_BASE.BIT._INTCLR0
#define PINTCLR4_INTCLR1 PINTCLR4_BASE.BIT._INTCLR1
#define PINTCLR4_INTCLR2 PINTCLR4_BASE.BIT._INTCLR2
#define PINTCLR4_INTCLR3 PINTCLR4_BASE.BIT._INTCLR3
#define PINTCLR4_INTCLR4 PINTCLR4_BASE.BIT._INTCLR4
#define PINTCLR4_INTCLR5 PINTCLR4_BASE.BIT._INTCLR5
#define PINTCLR4_INTCLR6 PINTCLR4_BASE.BIT._INTCLR6
#define PINTCLR4_INTCLR7 PINTCLR4_BASE.BIT._INTCLR7
#define PINTCLR4_INTCLR8 PINTCLR4_BASE.BIT._INTCLR8
#define PINTCLR4_INTCLR9 PINTCLR4_BASE.BIT._INTCLR9
#define PINTCLR4_INTCLR10 PINTCLR4_BASE.BIT._INTCLR10
#define PINTCLR4_INTCLR11 PINTCLR4_BASE.BIT._INTCLR11
#define PINTCLR4_INTCLR12 PINTCLR4_BASE.BIT._INTCLR12
#define PINTCLR4_INTCLR13 PINTCLR4_BASE.BIT._INTCLR13
#define PINTCLR4_INTCLR14 PINTCLR4_BASE.BIT._INTCLR14
#define PINTCLR4_INTCLR15 PINTCLR4_BASE.BIT._INTCLR15
#define PINTCLR4_INTCLR16 PINTCLR4_BASE.BIT._INTCLR16
#define PINTCLR4_INTCLR17 PINTCLR4_BASE.BIT._INTCLR17
#define PINTCLR4_INTCLR18 PINTCLR4_BASE.BIT._INTCLR18
#define PINTCLR4_INTCLR19 PINTCLR4_BASE.BIT._INTCLR19
#define PINTCLR4_INTCLR20 PINTCLR4_BASE.BIT._INTCLR20
#define PINTCLR4_INTCLR21 PINTCLR4_BASE.BIT._INTCLR21
#define PINTCLR4_INTCLR22 PINTCLR4_BASE.BIT._INTCLR22
#define PINTCLR4_INTCLR23 PINTCLR4_BASE.BIT._INTCLR23
#define PINTCLR4_INTCLR24 PINTCLR4_BASE.BIT._INTCLR24
#define PINTCLR4_INTCLR25 PINTCLR4_BASE.BIT._INTCLR25
#define PINTCLR4_INTCLR26 PINTCLR4_BASE.BIT._INTCLR26
#define PINTCLR4_INTCLR27 PINTCLR4_BASE.BIT._INTCLR27
#define PINTCLR4_INTCLR28 PINTCLR4_BASE.BIT._INTCLR28
#define PINTCLR4_INTCLR29 PINTCLR4_BASE.BIT._INTCLR29
#define PINTCLR4_INTCLR30 PINTCLR4_BASE.BIT._INTCLR30
#define PINTCLR4_INTCLR31 PINTCLR4_BASE.BIT._INTCLR31
#define PINTCLR5 PINTCLR5_BASE.UINT32
#define PINTCLR5_INTCLR32 PINTCLR5_BASE.BIT._INTCLR32
#define PINTCLR5_INTCLR33 PINTCLR5_BASE.BIT._INTCLR33
#define PINTCLR5_INTCLR34 PINTCLR5_BASE.BIT._INTCLR34
#define PINTCLR5_INTCLR35 PINTCLR5_BASE.BIT._INTCLR35
#define PINTCLR5_INTCLR36 PINTCLR5_BASE.BIT._INTCLR36
#define PINTCLR5_INTCLR37 PINTCLR5_BASE.BIT._INTCLR37
#define PINTCLR5_INTCLR38 PINTCLR5_BASE.BIT._INTCLR38
#define PINTCLR5_INTCLR39 PINTCLR5_BASE.BIT._INTCLR39
#define PINTCLR5_INTCLR40 PINTCLR5_BASE.BIT._INTCLR40
#define PINTCLR5_INTCLR41 PINTCLR5_BASE.BIT._INTCLR41
#define PINTCLR5_INTCLR42 PINTCLR5_BASE.BIT._INTCLR42
#define PINTCLR5_INTCLR43 PINTCLR5_BASE.BIT._INTCLR43
#define PINTCLR5_INTCLR44 PINTCLR5_BASE.BIT._INTCLR44
#define PINTCLR5_INTCLR45 PINTCLR5_BASE.BIT._INTCLR45
#define PINTCLR5_INTCLR46 PINTCLR5_BASE.BIT._INTCLR46
#define PINTCLR5_INTCLR47 PINTCLR5_BASE.BIT._INTCLR47
#define PINTCLR5_INTCLR48 PINTCLR5_BASE.BIT._INTCLR48
#define PINTCLR5_INTCLR49 PINTCLR5_BASE.BIT._INTCLR49
#define PINTCLR5_INTCLR50 PINTCLR5_BASE.BIT._INTCLR50
#define PINTCLR5_INTCLR51 PINTCLR5_BASE.BIT._INTCLR51
#define PINTCLR5_INTCLR52 PINTCLR5_BASE.BIT._INTCLR52
#define PINTCLR5_INTCLR53 PINTCLR5_BASE.BIT._INTCLR53
#define PINTCLR5_INTCLR54 PINTCLR5_BASE.BIT._INTCLR54
#define PINTCLR5_INTCLR55 PINTCLR5_BASE.BIT._INTCLR55
#define PINTCLR5_INTCLR56 PINTCLR5_BASE.BIT._INTCLR56
#define PINTCLR5_INTCLR57 PINTCLR5_BASE.BIT._INTCLR57
#define PINTCLR5_INTCLR58 PINTCLR5_BASE.BIT._INTCLR58
#define PINTCLR5_INTCLR59 PINTCLR5_BASE.BIT._INTCLR59
#define PINTCLR5_INTCLR60 PINTCLR5_BASE.BIT._INTCLR60
#define PINTCLR5_INTCLR61 PINTCLR5_BASE.BIT._INTCLR61
#define PINTCLR5_INTCLR62 PINTCLR5_BASE.BIT._INTCLR62
#define PINTCLR5_INTCLR63 PINTCLR5_BASE.BIT._INTCLR63
#define PINTCLR6 PINTCLR6_BASE.UINT32
#define PINTCLR6_INTCLR64 PINTCLR6_BASE.BIT._INTCLR64
#define PINTCLR6_INTCLR65 PINTCLR6_BASE.BIT._INTCLR65
#define PINTCLR6_INTCLR66 PINTCLR6_BASE.BIT._INTCLR66
#define PINTCLR6_INTCLR67 PINTCLR6_BASE.BIT._INTCLR67
#define PINTCLR6_INTCLR68 PINTCLR6_BASE.BIT._INTCLR68
#define PINTCLR6_INTCLR69 PINTCLR6_BASE.BIT._INTCLR69
#define PINTCLR6_INTCLR70 PINTCLR6_BASE.BIT._INTCLR70
#define PINTCLR6_INTCLR71 PINTCLR6_BASE.BIT._INTCLR71
#define PINTCLR6_INTCLR72 PINTCLR6_BASE.BIT._INTCLR72
#define PINTCLR6_INTCLR73 PINTCLR6_BASE.BIT._INTCLR73
#define PINTCLR6_INTCLR74 PINTCLR6_BASE.BIT._INTCLR74
#define PINTCLR6_INTCLR75 PINTCLR6_BASE.BIT._INTCLR75
#define PINTCLR6_INTCLR76 PINTCLR6_BASE.BIT._INTCLR76
#define PINTCLR6_INTCLR77 PINTCLR6_BASE.BIT._INTCLR77
#define PINTCLR6_INTCLR78 PINTCLR6_BASE.BIT._INTCLR78
#define PINTCLR6_INTCLR79 PINTCLR6_BASE.BIT._INTCLR79
#define PINTCLR6_INTCLR80 PINTCLR6_BASE.BIT._INTCLR80
#define PINTCLR6_INTCLR81 PINTCLR6_BASE.BIT._INTCLR81
#define PINTCLR6_INTCLR82 PINTCLR6_BASE.BIT._INTCLR82
#define PINTCLR6_INTCLR83 PINTCLR6_BASE.BIT._INTCLR83
#define PINTCLR6_INTCLR84 PINTCLR6_BASE.BIT._INTCLR84
#define PINTCLR6_INTCLR85 PINTCLR6_BASE.BIT._INTCLR85
#define PINTCLR6_INTCLR86 PINTCLR6_BASE.BIT._INTCLR86
#define PINTCLR6_INTCLR87 PINTCLR6_BASE.BIT._INTCLR87
#define PINTCLR6_INTCLR88 PINTCLR6_BASE.BIT._INTCLR88
#define PINTCLR6_INTCLR89 PINTCLR6_BASE.BIT._INTCLR89
#define PINTCLR6_INTCLR90 PINTCLR6_BASE.BIT._INTCLR90
#define PINTCLR6_INTCLR91 PINTCLR6_BASE.BIT._INTCLR91
#define PINTCLR6_INTCLR92 PINTCLR6_BASE.BIT._INTCLR92
#define PINTCLR6_INTCLR93 PINTCLR6_BASE.BIT._INTCLR93
#define PINTCLR6_INTCLR94 PINTCLR6_BASE.BIT._INTCLR94
#define PINTCLR6_INTCLR95 PINTCLR6_BASE.BIT._INTCLR95
#define PINTCLR7 PINTCLR7_BASE.UINT32
#define PINTCLR7_INTCLR96 PINTCLR7_BASE.BIT._INTCLR96
#define PINTCLR7_INTCLR97 PINTCLR7_BASE.BIT._INTCLR97
#define PINTCLR7_INTCLR98 PINTCLR7_BASE.BIT._INTCLR98
#define PINTCLR7_INTCLR99 PINTCLR7_BASE.BIT._INTCLR99
#define PINTCLR7_INTCLR100 PINTCLR7_BASE.BIT._INTCLR100
#define PINTCLR7_INTCLR101 PINTCLR7_BASE.BIT._INTCLR101
#define PINTCLR7_INTCLR102 PINTCLR7_BASE.BIT._INTCLR102
#define PINTCLR7_INTCLR103 PINTCLR7_BASE.BIT._INTCLR103
#define PINTCLR7_INTCLR104 PINTCLR7_BASE.BIT._INTCLR104
#define PINTCLR7_INTCLR105 PINTCLR7_BASE.BIT._INTCLR105
#define PINTCLR7_INTCLR106 PINTCLR7_BASE.BIT._INTCLR106
#define PINTCLR7_INTCLR107 PINTCLR7_BASE.BIT._INTCLR107
#define PINTCLR7_INTCLR108 PINTCLR7_BASE.BIT._INTCLR108
#define PINTCLR7_INTCLR109 PINTCLR7_BASE.BIT._INTCLR109
#define PINTCLR7_INTCLR110 PINTCLR7_BASE.BIT._INTCLR110
#define PINTCLR7_INTCLR111 PINTCLR7_BASE.BIT._INTCLR111
#define PINTCLR7_INTCLR112 PINTCLR7_BASE.BIT._INTCLR112
#define PINTCLR7_INTCLR113 PINTCLR7_BASE.BIT._INTCLR113
#define PINTCLR7_INTCLR114 PINTCLR7_BASE.BIT._INTCLR114
#define PINTCLR7_INTCLR115 PINTCLR7_BASE.BIT._INTCLR115
#define PINTCLR7_INTCLR116 PINTCLR7_BASE.BIT._INTCLR116
#define PINTCLR7_INTCLR117 PINTCLR7_BASE.BIT._INTCLR117
#define PINTCLR7_INTCLR118 PINTCLR7_BASE.BIT._INTCLR118
#define PINTCLR7_INTCLR119 PINTCLR7_BASE.BIT._INTCLR119
#define PINTCLR7_INTCLR120 PINTCLR7_BASE.BIT._INTCLR120
#define PINTCLR7_INTCLR121 PINTCLR7_BASE.BIT._INTCLR121
#define PINTCLR7_INTCLR122 PINTCLR7_BASE.BIT._INTCLR122
#define PINTCLR7_INTCLR123 PINTCLR7_BASE.BIT._INTCLR123
#define PINTCLR7_INTCLR124 PINTCLR7_BASE.BIT._INTCLR124
#define PINTCLR7_INTCLR125 PINTCLR7_BASE.BIT._INTCLR125
#define PINTCLR7_INTCLR126 PINTCLR7_BASE.BIT._INTCLR126
#define PINTCLR7_INTCLR127 PINTCLR7_BASE.BIT._INTCLR127
#define DTSTRGSEL0 DTSTRGSEL0_BASE.UINT32
#define DTSTRGSEL0_DTSSEL0 DTSTRGSEL0_BASE.BIT._DTSSEL0
#define DTSTRGSEL0_DTSSEL1 DTSTRGSEL0_BASE.BIT._DTSSEL1
#define DTSTRGSEL0_DTSSEL2 DTSTRGSEL0_BASE.BIT._DTSSEL2
#define DTSTRGSEL0_DTSSEL3 DTSTRGSEL0_BASE.BIT._DTSSEL3
#define DTSTRGSEL0_DTSSEL4 DTSTRGSEL0_BASE.BIT._DTSSEL4
#define DTSTRGSEL0_DTSSEL5 DTSTRGSEL0_BASE.BIT._DTSSEL5
#define DTSTRGSEL0_DTSSEL6 DTSTRGSEL0_BASE.BIT._DTSSEL6
#define DTSTRGSEL0_DTSSEL7 DTSTRGSEL0_BASE.BIT._DTSSEL7
#define DTSTRGSEL0_DTSSEL8 DTSTRGSEL0_BASE.BIT._DTSSEL8
#define DTSTRGSEL0_DTSSEL9 DTSTRGSEL0_BASE.BIT._DTSSEL9
#define DTSTRGSEL0_DTSSEL10 DTSTRGSEL0_BASE.BIT._DTSSEL10
#define DTSTRGSEL0_DTSSEL11 DTSTRGSEL0_BASE.BIT._DTSSEL11
#define DTSTRGSEL0_DTSSEL12 DTSTRGSEL0_BASE.BIT._DTSSEL12
#define DTSTRGSEL0_DTSSEL13 DTSTRGSEL0_BASE.BIT._DTSSEL13
#define DTSTRGSEL0_DTSSEL14 DTSTRGSEL0_BASE.BIT._DTSSEL14
#define DTSTRGSEL0_DTSSEL15 DTSTRGSEL0_BASE.BIT._DTSSEL15
#define DTSTRGSEL0_DTSSEL16 DTSTRGSEL0_BASE.BIT._DTSSEL16
#define DTSTRGSEL0_DTSSEL17 DTSTRGSEL0_BASE.BIT._DTSSEL17
#define DTSTRGSEL0_DTSSEL18 DTSTRGSEL0_BASE.BIT._DTSSEL18
#define DTSTRGSEL0_DTSSEL19 DTSTRGSEL0_BASE.BIT._DTSSEL19
#define DTSTRGSEL0_DTSSEL20 DTSTRGSEL0_BASE.BIT._DTSSEL20
#define DTSTRGSEL0_DTSSEL21 DTSTRGSEL0_BASE.BIT._DTSSEL21
#define DTSTRGSEL0_DTSSEL22 DTSTRGSEL0_BASE.BIT._DTSSEL22
#define DTSTRGSEL0_DTSSEL23 DTSTRGSEL0_BASE.BIT._DTSSEL23
#define DTSTRGSEL0_DTSSEL24 DTSTRGSEL0_BASE.BIT._DTSSEL24
#define DTSTRGSEL0_DTSSEL25 DTSTRGSEL0_BASE.BIT._DTSSEL25
#define DTSTRGSEL0_DTSSEL26 DTSTRGSEL0_BASE.BIT._DTSSEL26
#define DTSTRGSEL0_DTSSEL27 DTSTRGSEL0_BASE.BIT._DTSSEL27
#define DTSTRGSEL0_DTSSEL28 DTSTRGSEL0_BASE.BIT._DTSSEL28
#define DTSTRGSEL0_DTSSEL29 DTSTRGSEL0_BASE.BIT._DTSSEL29
#define DTSTRGSEL0_DTSSEL30 DTSTRGSEL0_BASE.BIT._DTSSEL30
#define DTSTRGSEL0_DTSSEL31 DTSTRGSEL0_BASE.BIT._DTSSEL31
#define DTSTRGSEL1 DTSTRGSEL1_BASE.UINT32
#define DTSTRGSEL1_DTSSEL32 DTSTRGSEL1_BASE.BIT._DTSSEL32
#define DTSTRGSEL1_DTSSEL33 DTSTRGSEL1_BASE.BIT._DTSSEL33
#define DTSTRGSEL1_DTSSEL34 DTSTRGSEL1_BASE.BIT._DTSSEL34
#define DTSTRGSEL1_DTSSEL35 DTSTRGSEL1_BASE.BIT._DTSSEL35
#define DTSTRGSEL1_DTSSEL36 DTSTRGSEL1_BASE.BIT._DTSSEL36
#define DTSTRGSEL1_DTSSEL37 DTSTRGSEL1_BASE.BIT._DTSSEL37
#define DTSTRGSEL1_DTSSEL38 DTSTRGSEL1_BASE.BIT._DTSSEL38
#define DTSTRGSEL1_DTSSEL39 DTSTRGSEL1_BASE.BIT._DTSSEL39
#define DTSTRGSEL1_DTSSEL40 DTSTRGSEL1_BASE.BIT._DTSSEL40
#define DTSTRGSEL1_DTSSEL41 DTSTRGSEL1_BASE.BIT._DTSSEL41
#define DTSTRGSEL1_DTSSEL42 DTSTRGSEL1_BASE.BIT._DTSSEL42
#define DTSTRGSEL1_DTSSEL43 DTSTRGSEL1_BASE.BIT._DTSSEL43
#define DTSTRGSEL1_DTSSEL44 DTSTRGSEL1_BASE.BIT._DTSSEL44
#define DTSTRGSEL1_DTSSEL45 DTSTRGSEL1_BASE.BIT._DTSSEL45
#define DTSTRGSEL1_DTSSEL46 DTSTRGSEL1_BASE.BIT._DTSSEL46
#define DTSTRGSEL1_DTSSEL47 DTSTRGSEL1_BASE.BIT._DTSSEL47
#define DTSTRGSEL1_DTSSEL48 DTSTRGSEL1_BASE.BIT._DTSSEL48
#define DTSTRGSEL1_DTSSEL49 DTSTRGSEL1_BASE.BIT._DTSSEL49
#define DTSTRGSEL1_DTSSEL50 DTSTRGSEL1_BASE.BIT._DTSSEL50
#define DTSTRGSEL1_DTSSEL51 DTSTRGSEL1_BASE.BIT._DTSSEL51
#define DTSTRGSEL1_DTSSEL52 DTSTRGSEL1_BASE.BIT._DTSSEL52
#define DTSTRGSEL1_DTSSEL53 DTSTRGSEL1_BASE.BIT._DTSSEL53
#define DTSTRGSEL1_DTSSEL54 DTSTRGSEL1_BASE.BIT._DTSSEL54
#define DTSTRGSEL1_DTSSEL55 DTSTRGSEL1_BASE.BIT._DTSSEL55
#define DTSTRGSEL1_DTSSEL56 DTSTRGSEL1_BASE.BIT._DTSSEL56
#define DTSTRGSEL1_DTSSEL57 DTSTRGSEL1_BASE.BIT._DTSSEL57
#define DTSTRGSEL1_DTSSEL58 DTSTRGSEL1_BASE.BIT._DTSSEL58
#define DTSTRGSEL1_DTSSEL59 DTSTRGSEL1_BASE.BIT._DTSSEL59
#define DTSTRGSEL1_DTSSEL60 DTSTRGSEL1_BASE.BIT._DTSSEL60
#define DTSTRGSEL1_DTSSEL61 DTSTRGSEL1_BASE.BIT._DTSSEL61
#define DTSTRGSEL1_DTSSEL62 DTSTRGSEL1_BASE.BIT._DTSSEL62
#define DTSTRGSEL1_DTSSEL63 DTSTRGSEL1_BASE.BIT._DTSSEL63
#define DTSTRGSEL2 DTSTRGSEL2_BASE.UINT32
#define DTSTRGSEL2_DTSSEL64 DTSTRGSEL2_BASE.BIT._DTSSEL64
#define DTSTRGSEL2_DTSSEL65 DTSTRGSEL2_BASE.BIT._DTSSEL65
#define DTSTRGSEL2_DTSSEL66 DTSTRGSEL2_BASE.BIT._DTSSEL66
#define DTSTRGSEL2_DTSSEL67 DTSTRGSEL2_BASE.BIT._DTSSEL67
#define DTSTRGSEL2_DTSSEL68 DTSTRGSEL2_BASE.BIT._DTSSEL68
#define DTSTRGSEL2_DTSSEL69 DTSTRGSEL2_BASE.BIT._DTSSEL69
#define DTSTRGSEL2_DTSSEL70 DTSTRGSEL2_BASE.BIT._DTSSEL70
#define DTSTRGSEL2_DTSSEL71 DTSTRGSEL2_BASE.BIT._DTSSEL71
#define DTSTRGSEL2_DTSSEL72 DTSTRGSEL2_BASE.BIT._DTSSEL72
#define DTSTRGSEL2_DTSSEL73 DTSTRGSEL2_BASE.BIT._DTSSEL73
#define DTSTRGSEL2_DTSSEL74 DTSTRGSEL2_BASE.BIT._DTSSEL74
#define DTSTRGSEL2_DTSSEL75 DTSTRGSEL2_BASE.BIT._DTSSEL75
#define DTSTRGSEL2_DTSSEL76 DTSTRGSEL2_BASE.BIT._DTSSEL76
#define DTSTRGSEL2_DTSSEL77 DTSTRGSEL2_BASE.BIT._DTSSEL77
#define DTSTRGSEL2_DTSSEL78 DTSTRGSEL2_BASE.BIT._DTSSEL78
#define DTSTRGSEL2_DTSSEL79 DTSTRGSEL2_BASE.BIT._DTSSEL79
#define DTSTRGSEL2_DTSSEL80 DTSTRGSEL2_BASE.BIT._DTSSEL80
#define DTSTRGSEL2_DTSSEL81 DTSTRGSEL2_BASE.BIT._DTSSEL81
#define DTSTRGSEL2_DTSSEL82 DTSTRGSEL2_BASE.BIT._DTSSEL82
#define DTSTRGSEL2_DTSSEL83 DTSTRGSEL2_BASE.BIT._DTSSEL83
#define DTSTRGSEL2_DTSSEL84 DTSTRGSEL2_BASE.BIT._DTSSEL84
#define DTSTRGSEL2_DTSSEL85 DTSTRGSEL2_BASE.BIT._DTSSEL85
#define DTSTRGSEL2_DTSSEL86 DTSTRGSEL2_BASE.BIT._DTSSEL86
#define DTSTRGSEL2_DTSSEL87 DTSTRGSEL2_BASE.BIT._DTSSEL87
#define DTSTRGSEL2_DTSSEL88 DTSTRGSEL2_BASE.BIT._DTSSEL88
#define DTSTRGSEL2_DTSSEL89 DTSTRGSEL2_BASE.BIT._DTSSEL89
#define DTSTRGSEL2_DTSSEL90 DTSTRGSEL2_BASE.BIT._DTSSEL90
#define DTSTRGSEL2_DTSSEL91 DTSTRGSEL2_BASE.BIT._DTSSEL91
#define DTSTRGSEL2_DTSSEL92 DTSTRGSEL2_BASE.BIT._DTSSEL92
#define DTSTRGSEL2_DTSSEL93 DTSTRGSEL2_BASE.BIT._DTSSEL93
#define DTSTRGSEL2_DTSSEL94 DTSTRGSEL2_BASE.BIT._DTSSEL94
#define DTSTRGSEL2_DTSSEL95 DTSTRGSEL2_BASE.BIT._DTSSEL95
#define DTSTRGSEL3 DTSTRGSEL3_BASE.UINT32
#define DTSTRGSEL3_DTSSEL96 DTSTRGSEL3_BASE.BIT._DTSSEL96
#define DTSTRGSEL3_DTSSEL97 DTSTRGSEL3_BASE.BIT._DTSSEL97
#define DTSTRGSEL3_DTSSEL98 DTSTRGSEL3_BASE.BIT._DTSSEL98
#define DTSTRGSEL3_DTSSEL99 DTSTRGSEL3_BASE.BIT._DTSSEL99
#define DTSTRGSEL3_DTSSEL100 DTSTRGSEL3_BASE.BIT._DTSSEL100
#define DTSTRGSEL3_DTSSEL101 DTSTRGSEL3_BASE.BIT._DTSSEL101
#define DTSTRGSEL3_DTSSEL102 DTSTRGSEL3_BASE.BIT._DTSSEL102
#define DTSTRGSEL3_DTSSEL103 DTSTRGSEL3_BASE.BIT._DTSSEL103
#define DTSTRGSEL3_DTSSEL104 DTSTRGSEL3_BASE.BIT._DTSSEL104
#define DTSTRGSEL3_DTSSEL105 DTSTRGSEL3_BASE.BIT._DTSSEL105
#define DTSTRGSEL3_DTSSEL106 DTSTRGSEL3_BASE.BIT._DTSSEL106
#define DTSTRGSEL3_DTSSEL107 DTSTRGSEL3_BASE.BIT._DTSSEL107
#define DTSTRGSEL3_DTSSEL108 DTSTRGSEL3_BASE.BIT._DTSSEL108
#define DTSTRGSEL3_DTSSEL109 DTSTRGSEL3_BASE.BIT._DTSSEL109
#define DTSTRGSEL3_DTSSEL110 DTSTRGSEL3_BASE.BIT._DTSSEL110
#define DTSTRGSEL3_DTSSEL111 DTSTRGSEL3_BASE.BIT._DTSSEL111
#define DTSTRGSEL3_DTSSEL112 DTSTRGSEL3_BASE.BIT._DTSSEL112
#define DTSTRGSEL3_DTSSEL113 DTSTRGSEL3_BASE.BIT._DTSSEL113
#define DTSTRGSEL3_DTSSEL114 DTSTRGSEL3_BASE.BIT._DTSSEL114
#define DTSTRGSEL3_DTSSEL115 DTSTRGSEL3_BASE.BIT._DTSSEL115
#define DTSTRGSEL3_DTSSEL116 DTSTRGSEL3_BASE.BIT._DTSSEL116
#define DTSTRGSEL3_DTSSEL117 DTSTRGSEL3_BASE.BIT._DTSSEL117
#define DTSTRGSEL3_DTSSEL118 DTSTRGSEL3_BASE.BIT._DTSSEL118
#define DTSTRGSEL3_DTSSEL119 DTSTRGSEL3_BASE.BIT._DTSSEL119
#define DTSTRGSEL3_DTSSEL120 DTSTRGSEL3_BASE.BIT._DTSSEL120
#define DTSTRGSEL3_DTSSEL121 DTSTRGSEL3_BASE.BIT._DTSSEL121
#define DTSTRGSEL3_DTSSEL122 DTSTRGSEL3_BASE.BIT._DTSSEL122
#define DTSTRGSEL3_DTSSEL123 DTSTRGSEL3_BASE.BIT._DTSSEL123
#define DTSTRGSEL3_DTSSEL124 DTSTRGSEL3_BASE.BIT._DTSSEL124
#define DTSTRGSEL3_DTSSEL125 DTSTRGSEL3_BASE.BIT._DTSSEL125
#define DTSTRGSEL3_DTSSEL126 DTSTRGSEL3_BASE.BIT._DTSSEL126
#define DTSTRGSEL3_DTSSEL127 DTSTRGSEL3_BASE.BIT._DTSSEL127

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif