#ifndef __DR7F701373_ECMM0_HEADER__
#define __DR7F701373_ECMM0_HEADER__



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
    uint32 _ECMMEST : 1;
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
} ECMM0ESETBits_t;

typedef struct
{
    uint32 _ECMMECT : 1;
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
} ECMM0ECLRBits_t;

typedef struct
{
    const uint32 _ECMMSSE000 : 1;
    const uint32 _ECMMSSE001 : 1;
    const uint32 _ECMMSSE002 : 1;
    const uint32 _ECMMSSE003 : 1;
    const uint32 _ECMMSSE004 : 1;
    const uint32 _ECMMSSE005 : 1;
    const uint32 _ECMMSSE006 : 1;
    const uint32 _ECMMSSE007 : 1;
    const uint32 _ECMMSSE008 : 1;
    const uint32 _ECMMSSE009 : 1;
    const uint32 _ECMMSSE010 : 1;
    const uint32 _ECMMSSE011 : 1;
    const uint32 _ECMMSSE012 : 1;
    const uint32 _ECMMSSE013 : 1;
    const uint32 _ECMMSSE014 : 1;
    const uint32 _ECMMSSE015 : 1;
    const uint32 _ECMMSSE016 : 1;
    const uint32 _ECMMSSE017 : 1;
    const uint32 _ECMMSSE018 : 1;
    const uint32 _ECMMSSE019 : 1;
    const uint32 _ECMMSSE020 : 1;
    const uint32 _ECMMSSE021 : 1;
    const uint32 _ECMMSSE022 : 1;
    const uint32 _ECMMSSE023 : 1;
    const uint32 _ECMMSSE024 : 1;
    const uint32 _ECMMSSE025 : 1;
    const uint32 _ECMMSSE026 : 1;
    const uint32 _ECMMSSE027 : 1;
    const uint32 _ECMMSSE028 : 1;
    const uint32 _ECMMSSE029 : 1;
    const uint32 _ECMMSSE030 : 1;
    const uint32 _ECMMSSE031 : 1;
} ECMM0ESSTR0Bits_t;

typedef struct
{
    const uint32 _ECMMSSE100 : 1;
    const uint32 _ECMMSSE101 : 1;
    const uint32 _ECMMSSE102 : 1;
    const uint32 _ECMMSSE103 : 1;
    const uint32 _ECMMSSE104 : 1;
    const uint32 _ECMMSSE105 : 1;
    const uint32 _ECMMSSE106 : 1;
    const uint32 _ECMMSSE107 : 1;
    const uint32 _ECMMSSE108 : 1;
    const uint32 _ECMMSSE109 : 1;
    const uint32 _ECMMSSE110 : 1;
    const uint32 _ECMMSSE111 : 1;
    const uint32 _ECMMSSE112 : 1;
    const uint32 _ECMMSSE113 : 1;
    const uint32 _ECMMSSE114 : 1;
    const uint32 _ECMMSSE115 : 1;
    const uint32 _ECMMSSE116 : 1;
    const uint32 _ECMMSSE117 : 1;
    const uint32 _ECMMSSE118 : 1;
    const uint32 _ECMMSSE119 : 1;
    const uint32 _ECMMSSE120 : 1;
    const uint32 _ECMMSSE121 : 1;
    const uint32 _ECMMSSE122 : 1;
    const uint32 _ECMMSSE123 : 1;
    const uint32 _ECMMSSE124 : 1;
    const uint32 _ECMMSSE125 : 1;
    const uint32 _ECMMSSE126 : 1;
    const uint32 _ECMMSSE127 : 1;
    const uint32 _ECMMSSE128 : 1;
    const uint32 _ECMMSSE129 : 1;
    const uint32 _ECMMSSE130 : 1;
    const uint32 _ECMMSSE131 : 1;
} ECMM0ESSTR1Bits_t;

typedef struct
{
    const uint32 _ECMMSSE200 : 1;
    const uint32 _ECMMSSE201 : 1;
    const uint32 _ECMMSSE202 : 1;
    const uint32 _ECMMSSE203 : 1;
    const uint32 _ECMMSSE204 : 1;
    const uint32 _ECMMSSE205 : 1;
    const uint32 _ECMMSSE206 : 1;
    const uint32 _ECMMSSE207 : 1;
    const uint32 _ECMMSSE208 : 1;
    const uint32 _ECMMSSE209 : 1;
    const uint32 _ECMMSSE210 : 1;
    const uint32 _ECMMSSE211 : 1;
    const uint32 _ECMMSSE212 : 1;
    const uint32 _ECMMSSE213 : 1;
    const uint32 _ECMMSSE214 : 1;
    const uint32 _ECMMSSE215 : 1;
    const uint32 _ECMMSSE216 : 1;
    const uint32 _ECMMSSE217 : 1;
    const uint32 _ECMMSSE218 : 1;
    const uint32 _ECMMSSE219 : 1;
    const uint32 _ECMMSSE220 : 1;
    const uint32 _ECMMSSE221 : 1;
    const uint32 _ECMMSSE222 : 1;
    const uint32 _ECMMSSE223 : 1;
    const uint32 _ECMMSSE224 : 1;
    const uint32 _ECMMSSE225 : 1;
    const uint32 _ECMMSSE226 : 1;
    const uint32 _ECMMSSE227 : 1;
    const uint32 _ECMMSSE228 : 1;
    const uint32 _ECMMSSE229 : 1;
    const uint32 _ECMMSSE230 : 1;
    const uint32 _ECMMSSE231 : 1;
} ECMM0ESSTR2Bits_t;

typedef struct
{
    uint32 _ECMM0REG : 8;
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
} ECMM0PCMD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECMM0ESETBits_t BIT;
} ECMM0ESET_t;

typedef union
{
    uint32 UINT32;
    ECMM0ECLRBits_t BIT;
} ECMM0ECLR_t;

typedef union
{
    uint32 UINT32;
    const ECMM0ESSTR0Bits_t BIT;
} ECMM0ESSTR0_t;

typedef union
{
    uint32 UINT32;
    const ECMM0ESSTR1Bits_t BIT;
} ECMM0ESSTR1_t;

typedef union
{
    uint32 UINT32;
    const ECMM0ESSTR2Bits_t BIT;
} ECMM0ESSTR2_t;

typedef union
{
    uint32 UINT32;
    ECMM0PCMD0Bits_t BIT;
} ECMM0PCMD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECMM0ESET_BASE, 0xFFD60000, __READ_WRITE, ECMM0ESET_t);
__IOREG(ECMM0ECLR_BASE, 0xFFD60004, __READ_WRITE, ECMM0ECLR_t);
__IOREG(ECMM0ESSTR0_BASE, 0xFFD60008, __READ, ECMM0ESSTR0_t);
__IOREG(ECMM0ESSTR1_BASE, 0xFFD6000C, __READ, ECMM0ESSTR1_t);
__IOREG(ECMM0ESSTR2_BASE, 0xFFD60010, __READ, ECMM0ESSTR2_t);
__IOREG(ECMM0PCMD0_BASE, 0xFFD60014, __READ_WRITE, ECMM0PCMD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECMM0ESET ECMM0ESET_BASE.UINT32
#define ECMM0ESET_ECMMEST ECMM0ESET_BASE.BIT._ECMMEST
#define ECMM0ECLR ECMM0ECLR_BASE.UINT32
#define ECMM0ECLR_ECMMECT ECMM0ECLR_BASE.BIT._ECMMECT
#define ECMM0ESSTR0 ECMM0ESSTR0_BASE.UINT32
#define ECMM0ESSTR0_ECMMSSE000 ECMM0ESSTR0_BASE.BIT._ECMMSSE000
#define ECMM0ESSTR0_ECMMSSE001 ECMM0ESSTR0_BASE.BIT._ECMMSSE001
#define ECMM0ESSTR0_ECMMSSE002 ECMM0ESSTR0_BASE.BIT._ECMMSSE002
#define ECMM0ESSTR0_ECMMSSE003 ECMM0ESSTR0_BASE.BIT._ECMMSSE003
#define ECMM0ESSTR0_ECMMSSE004 ECMM0ESSTR0_BASE.BIT._ECMMSSE004
#define ECMM0ESSTR0_ECMMSSE005 ECMM0ESSTR0_BASE.BIT._ECMMSSE005
#define ECMM0ESSTR0_ECMMSSE006 ECMM0ESSTR0_BASE.BIT._ECMMSSE006
#define ECMM0ESSTR0_ECMMSSE007 ECMM0ESSTR0_BASE.BIT._ECMMSSE007
#define ECMM0ESSTR0_ECMMSSE008 ECMM0ESSTR0_BASE.BIT._ECMMSSE008
#define ECMM0ESSTR0_ECMMSSE009 ECMM0ESSTR0_BASE.BIT._ECMMSSE009
#define ECMM0ESSTR0_ECMMSSE010 ECMM0ESSTR0_BASE.BIT._ECMMSSE010
#define ECMM0ESSTR0_ECMMSSE011 ECMM0ESSTR0_BASE.BIT._ECMMSSE011
#define ECMM0ESSTR0_ECMMSSE012 ECMM0ESSTR0_BASE.BIT._ECMMSSE012
#define ECMM0ESSTR0_ECMMSSE013 ECMM0ESSTR0_BASE.BIT._ECMMSSE013
#define ECMM0ESSTR0_ECMMSSE014 ECMM0ESSTR0_BASE.BIT._ECMMSSE014
#define ECMM0ESSTR0_ECMMSSE015 ECMM0ESSTR0_BASE.BIT._ECMMSSE015
#define ECMM0ESSTR0_ECMMSSE016 ECMM0ESSTR0_BASE.BIT._ECMMSSE016
#define ECMM0ESSTR0_ECMMSSE017 ECMM0ESSTR0_BASE.BIT._ECMMSSE017
#define ECMM0ESSTR0_ECMMSSE018 ECMM0ESSTR0_BASE.BIT._ECMMSSE018
#define ECMM0ESSTR0_ECMMSSE019 ECMM0ESSTR0_BASE.BIT._ECMMSSE019
#define ECMM0ESSTR0_ECMMSSE020 ECMM0ESSTR0_BASE.BIT._ECMMSSE020
#define ECMM0ESSTR0_ECMMSSE021 ECMM0ESSTR0_BASE.BIT._ECMMSSE021
#define ECMM0ESSTR0_ECMMSSE022 ECMM0ESSTR0_BASE.BIT._ECMMSSE022
#define ECMM0ESSTR0_ECMMSSE023 ECMM0ESSTR0_BASE.BIT._ECMMSSE023
#define ECMM0ESSTR0_ECMMSSE024 ECMM0ESSTR0_BASE.BIT._ECMMSSE024
#define ECMM0ESSTR0_ECMMSSE025 ECMM0ESSTR0_BASE.BIT._ECMMSSE025
#define ECMM0ESSTR0_ECMMSSE026 ECMM0ESSTR0_BASE.BIT._ECMMSSE026
#define ECMM0ESSTR0_ECMMSSE027 ECMM0ESSTR0_BASE.BIT._ECMMSSE027
#define ECMM0ESSTR0_ECMMSSE028 ECMM0ESSTR0_BASE.BIT._ECMMSSE028
#define ECMM0ESSTR0_ECMMSSE029 ECMM0ESSTR0_BASE.BIT._ECMMSSE029
#define ECMM0ESSTR0_ECMMSSE030 ECMM0ESSTR0_BASE.BIT._ECMMSSE030
#define ECMM0ESSTR0_ECMMSSE031 ECMM0ESSTR0_BASE.BIT._ECMMSSE031
#define ECMM0ESSTR1 ECMM0ESSTR1_BASE.UINT32
#define ECMM0ESSTR1_ECMMSSE100 ECMM0ESSTR1_BASE.BIT._ECMMSSE100
#define ECMM0ESSTR1_ECMMSSE101 ECMM0ESSTR1_BASE.BIT._ECMMSSE101
#define ECMM0ESSTR1_ECMMSSE102 ECMM0ESSTR1_BASE.BIT._ECMMSSE102
#define ECMM0ESSTR1_ECMMSSE103 ECMM0ESSTR1_BASE.BIT._ECMMSSE103
#define ECMM0ESSTR1_ECMMSSE104 ECMM0ESSTR1_BASE.BIT._ECMMSSE104
#define ECMM0ESSTR1_ECMMSSE105 ECMM0ESSTR1_BASE.BIT._ECMMSSE105
#define ECMM0ESSTR1_ECMMSSE106 ECMM0ESSTR1_BASE.BIT._ECMMSSE106
#define ECMM0ESSTR1_ECMMSSE107 ECMM0ESSTR1_BASE.BIT._ECMMSSE107
#define ECMM0ESSTR1_ECMMSSE108 ECMM0ESSTR1_BASE.BIT._ECMMSSE108
#define ECMM0ESSTR1_ECMMSSE109 ECMM0ESSTR1_BASE.BIT._ECMMSSE109
#define ECMM0ESSTR1_ECMMSSE110 ECMM0ESSTR1_BASE.BIT._ECMMSSE110
#define ECMM0ESSTR1_ECMMSSE111 ECMM0ESSTR1_BASE.BIT._ECMMSSE111
#define ECMM0ESSTR1_ECMMSSE112 ECMM0ESSTR1_BASE.BIT._ECMMSSE112
#define ECMM0ESSTR1_ECMMSSE113 ECMM0ESSTR1_BASE.BIT._ECMMSSE113
#define ECMM0ESSTR1_ECMMSSE114 ECMM0ESSTR1_BASE.BIT._ECMMSSE114
#define ECMM0ESSTR1_ECMMSSE115 ECMM0ESSTR1_BASE.BIT._ECMMSSE115
#define ECMM0ESSTR1_ECMMSSE116 ECMM0ESSTR1_BASE.BIT._ECMMSSE116
#define ECMM0ESSTR1_ECMMSSE117 ECMM0ESSTR1_BASE.BIT._ECMMSSE117
#define ECMM0ESSTR1_ECMMSSE118 ECMM0ESSTR1_BASE.BIT._ECMMSSE118
#define ECMM0ESSTR1_ECMMSSE119 ECMM0ESSTR1_BASE.BIT._ECMMSSE119
#define ECMM0ESSTR1_ECMMSSE120 ECMM0ESSTR1_BASE.BIT._ECMMSSE120
#define ECMM0ESSTR1_ECMMSSE121 ECMM0ESSTR1_BASE.BIT._ECMMSSE121
#define ECMM0ESSTR1_ECMMSSE122 ECMM0ESSTR1_BASE.BIT._ECMMSSE122
#define ECMM0ESSTR1_ECMMSSE123 ECMM0ESSTR1_BASE.BIT._ECMMSSE123
#define ECMM0ESSTR1_ECMMSSE124 ECMM0ESSTR1_BASE.BIT._ECMMSSE124
#define ECMM0ESSTR1_ECMMSSE125 ECMM0ESSTR1_BASE.BIT._ECMMSSE125
#define ECMM0ESSTR1_ECMMSSE126 ECMM0ESSTR1_BASE.BIT._ECMMSSE126
#define ECMM0ESSTR1_ECMMSSE127 ECMM0ESSTR1_BASE.BIT._ECMMSSE127
#define ECMM0ESSTR1_ECMMSSE128 ECMM0ESSTR1_BASE.BIT._ECMMSSE128
#define ECMM0ESSTR1_ECMMSSE129 ECMM0ESSTR1_BASE.BIT._ECMMSSE129
#define ECMM0ESSTR1_ECMMSSE130 ECMM0ESSTR1_BASE.BIT._ECMMSSE130
#define ECMM0ESSTR1_ECMMSSE131 ECMM0ESSTR1_BASE.BIT._ECMMSSE131
#define ECMM0ESSTR2 ECMM0ESSTR2_BASE.UINT32
#define ECMM0ESSTR2_ECMMSSE200 ECMM0ESSTR2_BASE.BIT._ECMMSSE200
#define ECMM0ESSTR2_ECMMSSE201 ECMM0ESSTR2_BASE.BIT._ECMMSSE201
#define ECMM0ESSTR2_ECMMSSE202 ECMM0ESSTR2_BASE.BIT._ECMMSSE202
#define ECMM0ESSTR2_ECMMSSE203 ECMM0ESSTR2_BASE.BIT._ECMMSSE203
#define ECMM0ESSTR2_ECMMSSE204 ECMM0ESSTR2_BASE.BIT._ECMMSSE204
#define ECMM0ESSTR2_ECMMSSE205 ECMM0ESSTR2_BASE.BIT._ECMMSSE205
#define ECMM0ESSTR2_ECMMSSE206 ECMM0ESSTR2_BASE.BIT._ECMMSSE206
#define ECMM0ESSTR2_ECMMSSE207 ECMM0ESSTR2_BASE.BIT._ECMMSSE207
#define ECMM0ESSTR2_ECMMSSE208 ECMM0ESSTR2_BASE.BIT._ECMMSSE208
#define ECMM0ESSTR2_ECMMSSE209 ECMM0ESSTR2_BASE.BIT._ECMMSSE209
#define ECMM0ESSTR2_ECMMSSE210 ECMM0ESSTR2_BASE.BIT._ECMMSSE210
#define ECMM0ESSTR2_ECMMSSE211 ECMM0ESSTR2_BASE.BIT._ECMMSSE211
#define ECMM0ESSTR2_ECMMSSE212 ECMM0ESSTR2_BASE.BIT._ECMMSSE212
#define ECMM0ESSTR2_ECMMSSE213 ECMM0ESSTR2_BASE.BIT._ECMMSSE213
#define ECMM0ESSTR2_ECMMSSE214 ECMM0ESSTR2_BASE.BIT._ECMMSSE214
#define ECMM0ESSTR2_ECMMSSE215 ECMM0ESSTR2_BASE.BIT._ECMMSSE215
#define ECMM0ESSTR2_ECMMSSE216 ECMM0ESSTR2_BASE.BIT._ECMMSSE216
#define ECMM0ESSTR2_ECMMSSE217 ECMM0ESSTR2_BASE.BIT._ECMMSSE217
#define ECMM0ESSTR2_ECMMSSE218 ECMM0ESSTR2_BASE.BIT._ECMMSSE218
#define ECMM0ESSTR2_ECMMSSE219 ECMM0ESSTR2_BASE.BIT._ECMMSSE219
#define ECMM0ESSTR2_ECMMSSE220 ECMM0ESSTR2_BASE.BIT._ECMMSSE220
#define ECMM0ESSTR2_ECMMSSE221 ECMM0ESSTR2_BASE.BIT._ECMMSSE221
#define ECMM0ESSTR2_ECMMSSE222 ECMM0ESSTR2_BASE.BIT._ECMMSSE222
#define ECMM0ESSTR2_ECMMSSE223 ECMM0ESSTR2_BASE.BIT._ECMMSSE223
#define ECMM0ESSTR2_ECMMSSE224 ECMM0ESSTR2_BASE.BIT._ECMMSSE224
#define ECMM0ESSTR2_ECMMSSE225 ECMM0ESSTR2_BASE.BIT._ECMMSSE225
#define ECMM0ESSTR2_ECMMSSE226 ECMM0ESSTR2_BASE.BIT._ECMMSSE226
#define ECMM0ESSTR2_ECMMSSE227 ECMM0ESSTR2_BASE.BIT._ECMMSSE227
#define ECMM0ESSTR2_ECMMSSE228 ECMM0ESSTR2_BASE.BIT._ECMMSSE228
#define ECMM0ESSTR2_ECMMSSE229 ECMM0ESSTR2_BASE.BIT._ECMMSSE229
#define ECMM0ESSTR2_ECMMSSE230 ECMM0ESSTR2_BASE.BIT._ECMMSSE230
#define ECMM0ESSTR2_ECMMSSE231 ECMM0ESSTR2_BASE.BIT._ECMMSSE231
#define ECMM0PCMD0 ECMM0PCMD0_BASE.UINT32
#define ECMM0PCMD0_ECMM0REG ECMM0PCMD0_BASE.BIT._ECMM0REG

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif