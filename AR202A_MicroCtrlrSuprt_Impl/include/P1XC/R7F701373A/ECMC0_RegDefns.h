#ifndef __DR7F701373_ECMC0_HEADER__
#define __DR7F701373_ECMC0_HEADER__



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
    uint32 _ECMCEST : 1;
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
} ECMC0ESETBits_t;

typedef struct
{
    uint32 _ECMCECT : 1;
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
} ECMC0ECLRBits_t;

typedef struct
{
    const uint32 _ECMCSSE000 : 1;
    const uint32 _ECMCSSE001 : 1;
    const uint32 _ECMCSSE002 : 1;
    const uint32 _ECMCSSE003 : 1;
    const uint32 _ECMCSSE004 : 1;
    const uint32 _ECMCSSE005 : 1;
    const uint32 _ECMCSSE006 : 1;
    const uint32 _ECMCSSE007 : 1;
    const uint32 _ECMCSSE008 : 1;
    const uint32 _ECMCSSE009 : 1;
    const uint32 _ECMCSSE010 : 1;
    const uint32 _ECMCSSE011 : 1;
    const uint32 _ECMCSSE012 : 1;
    const uint32 _ECMCSSE013 : 1;
    const uint32 _ECMCSSE014 : 1;
    const uint32 _ECMCSSE015 : 1;
    const uint32 _ECMCSSE016 : 1;
    const uint32 _ECMCSSE017 : 1;
    const uint32 _ECMCSSE018 : 1;
    const uint32 _ECMCSSE019 : 1;
    const uint32 _ECMCSSE020 : 1;
    const uint32 _ECMCSSE021 : 1;
    const uint32 _ECMCSSE022 : 1;
    const uint32 _ECMCSSE023 : 1;
    const uint32 _ECMCSSE024 : 1;
    const uint32 _ECMCSSE025 : 1;
    const uint32 _ECMCSSE026 : 1;
    const uint32 _ECMCSSE027 : 1;
    const uint32 _ECMCSSE028 : 1;
    const uint32 _ECMCSSE029 : 1;
    const uint32 _ECMCSSE030 : 1;
    const uint32 _ECMCSSE031 : 1;
} ECMC0ESSTR0Bits_t;

typedef struct
{
    const uint32 _ECMCSSE100 : 1;
    const uint32 _ECMCSSE101 : 1;
    const uint32 _ECMCSSE102 : 1;
    const uint32 _ECMCSSE103 : 1;
    const uint32 _ECMCSSE104 : 1;
    const uint32 _ECMCSSE105 : 1;
    const uint32 _ECMCSSE106 : 1;
    const uint32 _ECMCSSE107 : 1;
    const uint32 _ECMCSSE108 : 1;
    const uint32 _ECMCSSE109 : 1;
    const uint32 _ECMCSSE110 : 1;
    const uint32 _ECMCSSE111 : 1;
    const uint32 _ECMCSSE112 : 1;
    const uint32 _ECMCSSE113 : 1;
    const uint32 _ECMCSSE114 : 1;
    const uint32 _ECMCSSE115 : 1;
    const uint32 _ECMCSSE116 : 1;
    const uint32 _ECMCSSE117 : 1;
    const uint32 _ECMCSSE118 : 1;
    const uint32 _ECMCSSE119 : 1;
    const uint32 _ECMCSSE120 : 1;
    const uint32 _ECMCSSE121 : 1;
    const uint32 _ECMCSSE122 : 1;
    const uint32 _ECMCSSE123 : 1;
    const uint32 _ECMCSSE124 : 1;
    const uint32 _ECMCSSE125 : 1;
    const uint32 _ECMCSSE126 : 1;
    const uint32 _ECMCSSE127 : 1;
    const uint32 _ECMCSSE128 : 1;
    const uint32 _ECMCSSE129 : 1;
    const uint32 _ECMCSSE130 : 1;
    const uint32 _ECMCSSE131 : 1;
} ECMC0ESSTR1Bits_t;

typedef struct
{
    const uint32 _ECMCSSE200 : 1;
    const uint32 _ECMCSSE201 : 1;
    const uint32 _ECMCSSE202 : 1;
    const uint32 _ECMCSSE203 : 1;
    const uint32 _ECMCSSE204 : 1;
    const uint32 _ECMCSSE205 : 1;
    const uint32 _ECMCSSE206 : 1;
    const uint32 _ECMCSSE207 : 1;
    const uint32 _ECMCSSE208 : 1;
    const uint32 _ECMCSSE209 : 1;
    const uint32 _ECMCSSE210 : 1;
    const uint32 _ECMCSSE211 : 1;
    const uint32 _ECMCSSE212 : 1;
    const uint32 _ECMCSSE213 : 1;
    const uint32 _ECMCSSE214 : 1;
    const uint32 _ECMCSSE215 : 1;
    const uint32 _ECMCSSE216 : 1;
    const uint32 _ECMCSSE217 : 1;
    const uint32 _ECMCSSE218 : 1;
    const uint32 _ECMCSSE219 : 1;
    const uint32 _ECMCSSE220 : 1;
    const uint32 _ECMCSSE221 : 1;
    const uint32 _ECMCSSE222 : 1;
    const uint32 _ECMCSSE223 : 1;
    const uint32 _ECMCSSE224 : 1;
    const uint32 _ECMCSSE225 : 1;
    const uint32 _ECMCSSE226 : 1;
    const uint32 _ECMCSSE227 : 1;
    const uint32 _ECMCSSE228 : 1;
    const uint32 _ECMCSSE229 : 1;
    const uint32 _ECMCSSE230 : 1;
    const uint32 _ECMCSSE231 : 1;
} ECMC0ESSTR2Bits_t;

typedef struct
{
    uint32 _ECMC0REG : 8;
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
} ECMC0PCMD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECMC0ESETBits_t BIT;
} ECMC0ESET_t;

typedef union
{
    uint32 UINT32;
    ECMC0ECLRBits_t BIT;
} ECMC0ECLR_t;

typedef union
{
    uint32 UINT32;
    const ECMC0ESSTR0Bits_t BIT;
} ECMC0ESSTR0_t;

typedef union
{
    uint32 UINT32;
    const ECMC0ESSTR1Bits_t BIT;
} ECMC0ESSTR1_t;

typedef union
{
    uint32 UINT32;
    const ECMC0ESSTR2Bits_t BIT;
} ECMC0ESSTR2_t;

typedef union
{
    uint32 UINT32;
    ECMC0PCMD0Bits_t BIT;
} ECMC0PCMD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECMC0ESET_BASE, 0xFFD61000, __READ_WRITE, ECMC0ESET_t);
__IOREG(ECMC0ECLR_BASE, 0xFFD61004, __READ_WRITE, ECMC0ECLR_t);
__IOREG(ECMC0ESSTR0_BASE, 0xFFD61008, __READ, ECMC0ESSTR0_t);
__IOREG(ECMC0ESSTR1_BASE, 0xFFD6100C, __READ, ECMC0ESSTR1_t);
__IOREG(ECMC0ESSTR2_BASE, 0xFFD61010, __READ, ECMC0ESSTR2_t);
__IOREG(ECMC0PCMD0_BASE, 0xFFD61014, __READ_WRITE, ECMC0PCMD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECMC0ESET ECMC0ESET_BASE.UINT32
#define ECMC0ESET_ECMCEST ECMC0ESET_BASE.BIT._ECMCEST
#define ECMC0ECLR ECMC0ECLR_BASE.UINT32
#define ECMC0ECLR_ECMCECT ECMC0ECLR_BASE.BIT._ECMCECT
#define ECMC0ESSTR0 ECMC0ESSTR0_BASE.UINT32
#define ECMC0ESSTR0_ECMCSSE000 ECMC0ESSTR0_BASE.BIT._ECMCSSE000
#define ECMC0ESSTR0_ECMCSSE001 ECMC0ESSTR0_BASE.BIT._ECMCSSE001
#define ECMC0ESSTR0_ECMCSSE002 ECMC0ESSTR0_BASE.BIT._ECMCSSE002
#define ECMC0ESSTR0_ECMCSSE003 ECMC0ESSTR0_BASE.BIT._ECMCSSE003
#define ECMC0ESSTR0_ECMCSSE004 ECMC0ESSTR0_BASE.BIT._ECMCSSE004
#define ECMC0ESSTR0_ECMCSSE005 ECMC0ESSTR0_BASE.BIT._ECMCSSE005
#define ECMC0ESSTR0_ECMCSSE006 ECMC0ESSTR0_BASE.BIT._ECMCSSE006
#define ECMC0ESSTR0_ECMCSSE007 ECMC0ESSTR0_BASE.BIT._ECMCSSE007
#define ECMC0ESSTR0_ECMCSSE008 ECMC0ESSTR0_BASE.BIT._ECMCSSE008
#define ECMC0ESSTR0_ECMCSSE009 ECMC0ESSTR0_BASE.BIT._ECMCSSE009
#define ECMC0ESSTR0_ECMCSSE010 ECMC0ESSTR0_BASE.BIT._ECMCSSE010
#define ECMC0ESSTR0_ECMCSSE011 ECMC0ESSTR0_BASE.BIT._ECMCSSE011
#define ECMC0ESSTR0_ECMCSSE012 ECMC0ESSTR0_BASE.BIT._ECMCSSE012
#define ECMC0ESSTR0_ECMCSSE013 ECMC0ESSTR0_BASE.BIT._ECMCSSE013
#define ECMC0ESSTR0_ECMCSSE014 ECMC0ESSTR0_BASE.BIT._ECMCSSE014
#define ECMC0ESSTR0_ECMCSSE015 ECMC0ESSTR0_BASE.BIT._ECMCSSE015
#define ECMC0ESSTR0_ECMCSSE016 ECMC0ESSTR0_BASE.BIT._ECMCSSE016
#define ECMC0ESSTR0_ECMCSSE017 ECMC0ESSTR0_BASE.BIT._ECMCSSE017
#define ECMC0ESSTR0_ECMCSSE018 ECMC0ESSTR0_BASE.BIT._ECMCSSE018
#define ECMC0ESSTR0_ECMCSSE019 ECMC0ESSTR0_BASE.BIT._ECMCSSE019
#define ECMC0ESSTR0_ECMCSSE020 ECMC0ESSTR0_BASE.BIT._ECMCSSE020
#define ECMC0ESSTR0_ECMCSSE021 ECMC0ESSTR0_BASE.BIT._ECMCSSE021
#define ECMC0ESSTR0_ECMCSSE022 ECMC0ESSTR0_BASE.BIT._ECMCSSE022
#define ECMC0ESSTR0_ECMCSSE023 ECMC0ESSTR0_BASE.BIT._ECMCSSE023
#define ECMC0ESSTR0_ECMCSSE024 ECMC0ESSTR0_BASE.BIT._ECMCSSE024
#define ECMC0ESSTR0_ECMCSSE025 ECMC0ESSTR0_BASE.BIT._ECMCSSE025
#define ECMC0ESSTR0_ECMCSSE026 ECMC0ESSTR0_BASE.BIT._ECMCSSE026
#define ECMC0ESSTR0_ECMCSSE027 ECMC0ESSTR0_BASE.BIT._ECMCSSE027
#define ECMC0ESSTR0_ECMCSSE028 ECMC0ESSTR0_BASE.BIT._ECMCSSE028
#define ECMC0ESSTR0_ECMCSSE029 ECMC0ESSTR0_BASE.BIT._ECMCSSE029
#define ECMC0ESSTR0_ECMCSSE030 ECMC0ESSTR0_BASE.BIT._ECMCSSE030
#define ECMC0ESSTR0_ECMCSSE031 ECMC0ESSTR0_BASE.BIT._ECMCSSE031
#define ECMC0ESSTR1 ECMC0ESSTR1_BASE.UINT32
#define ECMC0ESSTR1_ECMCSSE100 ECMC0ESSTR1_BASE.BIT._ECMCSSE100
#define ECMC0ESSTR1_ECMCSSE101 ECMC0ESSTR1_BASE.BIT._ECMCSSE101
#define ECMC0ESSTR1_ECMCSSE102 ECMC0ESSTR1_BASE.BIT._ECMCSSE102
#define ECMC0ESSTR1_ECMCSSE103 ECMC0ESSTR1_BASE.BIT._ECMCSSE103
#define ECMC0ESSTR1_ECMCSSE104 ECMC0ESSTR1_BASE.BIT._ECMCSSE104
#define ECMC0ESSTR1_ECMCSSE105 ECMC0ESSTR1_BASE.BIT._ECMCSSE105
#define ECMC0ESSTR1_ECMCSSE106 ECMC0ESSTR1_BASE.BIT._ECMCSSE106
#define ECMC0ESSTR1_ECMCSSE107 ECMC0ESSTR1_BASE.BIT._ECMCSSE107
#define ECMC0ESSTR1_ECMCSSE108 ECMC0ESSTR1_BASE.BIT._ECMCSSE108
#define ECMC0ESSTR1_ECMCSSE109 ECMC0ESSTR1_BASE.BIT._ECMCSSE109
#define ECMC0ESSTR1_ECMCSSE110 ECMC0ESSTR1_BASE.BIT._ECMCSSE110
#define ECMC0ESSTR1_ECMCSSE111 ECMC0ESSTR1_BASE.BIT._ECMCSSE111
#define ECMC0ESSTR1_ECMCSSE112 ECMC0ESSTR1_BASE.BIT._ECMCSSE112
#define ECMC0ESSTR1_ECMCSSE113 ECMC0ESSTR1_BASE.BIT._ECMCSSE113
#define ECMC0ESSTR1_ECMCSSE114 ECMC0ESSTR1_BASE.BIT._ECMCSSE114
#define ECMC0ESSTR1_ECMCSSE115 ECMC0ESSTR1_BASE.BIT._ECMCSSE115
#define ECMC0ESSTR1_ECMCSSE116 ECMC0ESSTR1_BASE.BIT._ECMCSSE116
#define ECMC0ESSTR1_ECMCSSE117 ECMC0ESSTR1_BASE.BIT._ECMCSSE117
#define ECMC0ESSTR1_ECMCSSE118 ECMC0ESSTR1_BASE.BIT._ECMCSSE118
#define ECMC0ESSTR1_ECMCSSE119 ECMC0ESSTR1_BASE.BIT._ECMCSSE119
#define ECMC0ESSTR1_ECMCSSE120 ECMC0ESSTR1_BASE.BIT._ECMCSSE120
#define ECMC0ESSTR1_ECMCSSE121 ECMC0ESSTR1_BASE.BIT._ECMCSSE121
#define ECMC0ESSTR1_ECMCSSE122 ECMC0ESSTR1_BASE.BIT._ECMCSSE122
#define ECMC0ESSTR1_ECMCSSE123 ECMC0ESSTR1_BASE.BIT._ECMCSSE123
#define ECMC0ESSTR1_ECMCSSE124 ECMC0ESSTR1_BASE.BIT._ECMCSSE124
#define ECMC0ESSTR1_ECMCSSE125 ECMC0ESSTR1_BASE.BIT._ECMCSSE125
#define ECMC0ESSTR1_ECMCSSE126 ECMC0ESSTR1_BASE.BIT._ECMCSSE126
#define ECMC0ESSTR1_ECMCSSE127 ECMC0ESSTR1_BASE.BIT._ECMCSSE127
#define ECMC0ESSTR1_ECMCSSE128 ECMC0ESSTR1_BASE.BIT._ECMCSSE128
#define ECMC0ESSTR1_ECMCSSE129 ECMC0ESSTR1_BASE.BIT._ECMCSSE129
#define ECMC0ESSTR1_ECMCSSE130 ECMC0ESSTR1_BASE.BIT._ECMCSSE130
#define ECMC0ESSTR1_ECMCSSE131 ECMC0ESSTR1_BASE.BIT._ECMCSSE131
#define ECMC0ESSTR2 ECMC0ESSTR2_BASE.UINT32
#define ECMC0ESSTR2_ECMCSSE200 ECMC0ESSTR2_BASE.BIT._ECMCSSE200
#define ECMC0ESSTR2_ECMCSSE201 ECMC0ESSTR2_BASE.BIT._ECMCSSE201
#define ECMC0ESSTR2_ECMCSSE202 ECMC0ESSTR2_BASE.BIT._ECMCSSE202
#define ECMC0ESSTR2_ECMCSSE203 ECMC0ESSTR2_BASE.BIT._ECMCSSE203
#define ECMC0ESSTR2_ECMCSSE204 ECMC0ESSTR2_BASE.BIT._ECMCSSE204
#define ECMC0ESSTR2_ECMCSSE205 ECMC0ESSTR2_BASE.BIT._ECMCSSE205
#define ECMC0ESSTR2_ECMCSSE206 ECMC0ESSTR2_BASE.BIT._ECMCSSE206
#define ECMC0ESSTR2_ECMCSSE207 ECMC0ESSTR2_BASE.BIT._ECMCSSE207
#define ECMC0ESSTR2_ECMCSSE208 ECMC0ESSTR2_BASE.BIT._ECMCSSE208
#define ECMC0ESSTR2_ECMCSSE209 ECMC0ESSTR2_BASE.BIT._ECMCSSE209
#define ECMC0ESSTR2_ECMCSSE210 ECMC0ESSTR2_BASE.BIT._ECMCSSE210
#define ECMC0ESSTR2_ECMCSSE211 ECMC0ESSTR2_BASE.BIT._ECMCSSE211
#define ECMC0ESSTR2_ECMCSSE212 ECMC0ESSTR2_BASE.BIT._ECMCSSE212
#define ECMC0ESSTR2_ECMCSSE213 ECMC0ESSTR2_BASE.BIT._ECMCSSE213
#define ECMC0ESSTR2_ECMCSSE214 ECMC0ESSTR2_BASE.BIT._ECMCSSE214
#define ECMC0ESSTR2_ECMCSSE215 ECMC0ESSTR2_BASE.BIT._ECMCSSE215
#define ECMC0ESSTR2_ECMCSSE216 ECMC0ESSTR2_BASE.BIT._ECMCSSE216
#define ECMC0ESSTR2_ECMCSSE217 ECMC0ESSTR2_BASE.BIT._ECMCSSE217
#define ECMC0ESSTR2_ECMCSSE218 ECMC0ESSTR2_BASE.BIT._ECMCSSE218
#define ECMC0ESSTR2_ECMCSSE219 ECMC0ESSTR2_BASE.BIT._ECMCSSE219
#define ECMC0ESSTR2_ECMCSSE220 ECMC0ESSTR2_BASE.BIT._ECMCSSE220
#define ECMC0ESSTR2_ECMCSSE221 ECMC0ESSTR2_BASE.BIT._ECMCSSE221
#define ECMC0ESSTR2_ECMCSSE222 ECMC0ESSTR2_BASE.BIT._ECMCSSE222
#define ECMC0ESSTR2_ECMCSSE223 ECMC0ESSTR2_BASE.BIT._ECMCSSE223
#define ECMC0ESSTR2_ECMCSSE224 ECMC0ESSTR2_BASE.BIT._ECMCSSE224
#define ECMC0ESSTR2_ECMCSSE225 ECMC0ESSTR2_BASE.BIT._ECMCSSE225
#define ECMC0ESSTR2_ECMCSSE226 ECMC0ESSTR2_BASE.BIT._ECMCSSE226
#define ECMC0ESSTR2_ECMCSSE227 ECMC0ESSTR2_BASE.BIT._ECMCSSE227
#define ECMC0ESSTR2_ECMCSSE228 ECMC0ESSTR2_BASE.BIT._ECMCSSE228
#define ECMC0ESSTR2_ECMCSSE229 ECMC0ESSTR2_BASE.BIT._ECMCSSE229
#define ECMC0ESSTR2_ECMCSSE230 ECMC0ESSTR2_BASE.BIT._ECMCSSE230
#define ECMC0ESSTR2_ECMCSSE231 ECMC0ESSTR2_BASE.BIT._ECMCSSE231
#define ECMC0PCMD0 ECMC0PCMD0_BASE.UINT32
#define ECMC0PCMD0_ECMC0REG ECMC0PCMD0_BASE.BIT._ECMC0REG

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif