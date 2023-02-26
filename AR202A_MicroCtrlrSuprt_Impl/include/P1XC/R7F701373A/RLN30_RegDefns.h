#ifndef __DR7F701373_RLN30_HEADER__
#define __DR7F701373_RLN30_HEADER__



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
    uint8 padding0 : 1;
    uint8 _LPRS : 3;
    uint8 _NSPB : 4;
} RLN30LWBRBits_t;

typedef struct
{
    uint16 _BRP : 16;
} RLN30LBRP01Bits_t;

typedef struct
{
    uint8 _LMD : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _LRDNFS : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LMDBits_t;

typedef struct
{
    uint8 _UBLS : 1;
    uint8 _UBOS : 1;
    uint8 _USBLS : 1;
    uint8 _UPS : 2;
    uint8 _URPS : 1;
    uint8 _UTPS : 1;
    uint8 padding7 : 1;
} RLN30LBFCBits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _IBS : 2;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LSCBits_t;

typedef struct
{
    uint8 _BERE : 1;
    uint8 padding1 : 1;
    uint8 _OERE : 1;
    uint8 _FERE : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LEDEBits_t;

typedef struct
{
    uint8 _OM0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LCUCBits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 _RTS : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LTRCBits_t;

typedef struct
{
    const uint8 _OMM0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LMSTBits_t;

typedef struct
{
    uint8 _FTC : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    const uint8 _ERR : 1;
    uint8 _UTS : 1;
    uint8 _URS : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LSTBits_t;

typedef struct
{
    uint8 _BER : 1;
    uint8 padding1 : 1;
    uint8 _OER : 1;
    uint8 _FER : 1;
    uint8 _EXBT : 1;
    uint8 _IDMT : 1;
    uint8 _UPER : 1;
    uint8 padding7 : 1;
} RLN30LESTBits_t;

typedef struct
{
    uint8 _MDL : 4;
    uint8 padding4 : 1;
    uint8 _UTSW : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LDFCBits_t;

typedef struct
{
    uint8 _ID : 8;
} RLN30LIDBBits_t;

typedef struct
{
    uint8 _UDB : 8;
} RLN30LUDB0Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR1Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR2Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR3Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR4Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR5Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR6Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR7Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN30LDBR8Bits_t;

typedef struct
{
    uint8 _UTOE : 1;
    uint8 _UROE : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LUOERBits_t;

typedef struct
{
    uint8 _UEBE : 1;
    uint8 _UEBDL : 1;
    uint8 _UEBDCE : 1;
    uint8 _UTIGTS : 1;
    uint8 _UECD : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN30LUOR1Bits_t;

typedef struct
{
    uint16 _UTD : 9;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} RLN30LUTDRBits_t;

typedef struct
{
    const uint16 _URD : 9;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} RLN30LURDRBits_t;

typedef struct
{
    uint16 _UWTD : 9;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} RLN30LUWTDRBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    RLN30LWBRBits_t BIT;
} RLN30LWBR_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    RLN30LBRP01Bits_t BIT;
} RLN30LBRP01_t;

typedef union
{
    uint8 UINT8;
    RLN30LMDBits_t BIT;
} RLN30LMD_t;

typedef union
{
    uint8 UINT8;
    RLN30LBFCBits_t BIT;
} RLN30LBFC_t;

typedef union
{
    uint8 UINT8;
    RLN30LSCBits_t BIT;
} RLN30LSC_t;

typedef union
{
    uint8 UINT8;
    RLN30LEDEBits_t BIT;
} RLN30LEDE_t;

typedef union
{
    uint8 UINT8;
    RLN30LCUCBits_t BIT;
} RLN30LCUC_t;

typedef union
{
    uint8 UINT8;
    RLN30LTRCBits_t BIT;
} RLN30LTRC_t;

typedef union
{
    uint8 UINT8;
    const RLN30LMSTBits_t BIT;
} RLN30LMST_t;

typedef union
{
    uint8 UINT8;
    RLN30LSTBits_t BIT;
} RLN30LST_t;

typedef union
{
    uint8 UINT8;
    RLN30LESTBits_t BIT;
} RLN30LEST_t;

typedef union
{
    uint8 UINT8;
    RLN30LDFCBits_t BIT;
} RLN30LDFC_t;

typedef union
{
    uint8 UINT8;
    RLN30LIDBBits_t BIT;
} RLN30LIDB_t;

typedef union
{
    uint8 UINT8;
    RLN30LUDB0Bits_t BIT;
} RLN30LUDB0_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR1Bits_t BIT;
} RLN30LDBR1_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR2Bits_t BIT;
} RLN30LDBR2_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR3Bits_t BIT;
} RLN30LDBR3_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR4Bits_t BIT;
} RLN30LDBR4_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR5Bits_t BIT;
} RLN30LDBR5_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR6Bits_t BIT;
} RLN30LDBR6_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR7Bits_t BIT;
} RLN30LDBR7_t;

typedef union
{
    uint8 UINT8;
    RLN30LDBR8Bits_t BIT;
} RLN30LDBR8_t;

typedef union
{
    uint8 UINT8;
    RLN30LUOERBits_t BIT;
} RLN30LUOER_t;

typedef union
{
    uint8 UINT8;
    RLN30LUOR1Bits_t BIT;
} RLN30LUOR1_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    RLN30LUTDRBits_t BIT;
} RLN30LUTDR_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    const RLN30LURDRBits_t BIT;
} RLN30LURDR_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    RLN30LUWTDRBits_t BIT;
} RLN30LUWTDR_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RLN30LWBR_BASE, 0xFFD8C001, __READ_WRITE, RLN30LWBR_t);
__IOREG(RLN30LBRP01_BASE, 0xFFD8C002, __READ_WRITE, RLN30LBRP01_t);
__IOREG(RLN30LMD_BASE, 0xFFD8C008, __READ_WRITE, RLN30LMD_t);
__IOREG(RLN30LBFC_BASE, 0xFFD8C009, __READ_WRITE, RLN30LBFC_t);
__IOREG(RLN30LSC_BASE, 0xFFD8C00A, __READ_WRITE, RLN30LSC_t);
__IOREG(RLN30LEDE_BASE, 0xFFD8C00D, __READ_WRITE, RLN30LEDE_t);
__IOREG(RLN30LCUC_BASE, 0xFFD8C00E, __READ_WRITE, RLN30LCUC_t);
__IOREG(RLN30LTRC_BASE, 0xFFD8C010, __READ_WRITE, RLN30LTRC_t);
__IOREG(RLN30LMST_BASE, 0xFFD8C011, __READ, RLN30LMST_t);
__IOREG(RLN30LST_BASE, 0xFFD8C012, __READ_WRITE, RLN30LST_t);
__IOREG(RLN30LEST_BASE, 0xFFD8C013, __READ_WRITE, RLN30LEST_t);
__IOREG(RLN30LDFC_BASE, 0xFFD8C014, __READ_WRITE, RLN30LDFC_t);
__IOREG(RLN30LIDB_BASE, 0xFFD8C015, __READ_WRITE, RLN30LIDB_t);
__IOREG(RLN30LUDB0_BASE, 0xFFD8C017, __READ_WRITE, RLN30LUDB0_t);
__IOREG(RLN30LDBR1_BASE, 0xFFD8C018, __READ_WRITE, RLN30LDBR1_t);
__IOREG(RLN30LDBR2_BASE, 0xFFD8C019, __READ_WRITE, RLN30LDBR2_t);
__IOREG(RLN30LDBR3_BASE, 0xFFD8C01A, __READ_WRITE, RLN30LDBR3_t);
__IOREG(RLN30LDBR4_BASE, 0xFFD8C01B, __READ_WRITE, RLN30LDBR4_t);
__IOREG(RLN30LDBR5_BASE, 0xFFD8C01C, __READ_WRITE, RLN30LDBR5_t);
__IOREG(RLN30LDBR6_BASE, 0xFFD8C01D, __READ_WRITE, RLN30LDBR6_t);
__IOREG(RLN30LDBR7_BASE, 0xFFD8C01E, __READ_WRITE, RLN30LDBR7_t);
__IOREG(RLN30LDBR8_BASE, 0xFFD8C01F, __READ_WRITE, RLN30LDBR8_t);
__IOREG(RLN30LUOER_BASE, 0xFFD8C020, __READ_WRITE, RLN30LUOER_t);
__IOREG(RLN30LUOR1_BASE, 0xFFD8C021, __READ_WRITE, RLN30LUOR1_t);
__IOREG(RLN30LUTDR_BASE, 0xFFD8C024, __READ_WRITE, RLN30LUTDR_t);
__IOREG(RLN30LURDR_BASE, 0xFFD8C026, __READ, RLN30LURDR_t);
__IOREG(RLN30LUWTDR_BASE, 0xFFD8C028, __READ_WRITE, RLN30LUWTDR_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RLN30LWBR RLN30LWBR_BASE.UINT8
#define RLN30LWBR_LPRS RLN30LWBR_BASE.BIT._LPRS
#define RLN30LWBR_NSPB RLN30LWBR_BASE.BIT._NSPB
#define RLN30LBRP01 RLN30LBRP01_BASE.UINT16
#define RLN30LBRP01L RLN30LBRP01_BASE.UINT8[L]
#define RLN30LBRP01H RLN30LBRP01_BASE.UINT8[H]
#define RLN30LBRP01_BRP RLN30LBRP01_BASE.BIT._BRP
#define RLN30LMD RLN30LMD_BASE.UINT8
#define RLN30LMD_LMD RLN30LMD_BASE.BIT._LMD
#define RLN30LMD_LRDNFS RLN30LMD_BASE.BIT._LRDNFS
#define RLN30LBFC RLN30LBFC_BASE.UINT8
#define RLN30LBFC_UBLS RLN30LBFC_BASE.BIT._UBLS
#define RLN30LBFC_UBOS RLN30LBFC_BASE.BIT._UBOS
#define RLN30LBFC_USBLS RLN30LBFC_BASE.BIT._USBLS
#define RLN30LBFC_UPS RLN30LBFC_BASE.BIT._UPS
#define RLN30LBFC_URPS RLN30LBFC_BASE.BIT._URPS
#define RLN30LBFC_UTPS RLN30LBFC_BASE.BIT._UTPS
#define RLN30LSC RLN30LSC_BASE.UINT8
#define RLN30LSC_IBS RLN30LSC_BASE.BIT._IBS
#define RLN30LEDE RLN30LEDE_BASE.UINT8
#define RLN30LEDE_BERE RLN30LEDE_BASE.BIT._BERE
#define RLN30LEDE_OERE RLN30LEDE_BASE.BIT._OERE
#define RLN30LEDE_FERE RLN30LEDE_BASE.BIT._FERE
#define RLN30LCUC RLN30LCUC_BASE.UINT8
#define RLN30LCUC_OM0 RLN30LCUC_BASE.BIT._OM0
#define RLN30LTRC RLN30LTRC_BASE.UINT8
#define RLN30LTRC_RTS RLN30LTRC_BASE.BIT._RTS
#define RLN30LMST RLN30LMST_BASE.UINT8
#define RLN30LMST_OMM0 RLN30LMST_BASE.BIT._OMM0
#define RLN30LST RLN30LST_BASE.UINT8
#define RLN30LST_FTC RLN30LST_BASE.BIT._FTC
#define RLN30LST_ERR RLN30LST_BASE.BIT._ERR
#define RLN30LST_UTS RLN30LST_BASE.BIT._UTS
#define RLN30LST_URS RLN30LST_BASE.BIT._URS
#define RLN30LEST RLN30LEST_BASE.UINT8
#define RLN30LEST_BER RLN30LEST_BASE.BIT._BER
#define RLN30LEST_OER RLN30LEST_BASE.BIT._OER
#define RLN30LEST_FER RLN30LEST_BASE.BIT._FER
#define RLN30LEST_EXBT RLN30LEST_BASE.BIT._EXBT
#define RLN30LEST_IDMT RLN30LEST_BASE.BIT._IDMT
#define RLN30LEST_UPER RLN30LEST_BASE.BIT._UPER
#define RLN30LDFC RLN30LDFC_BASE.UINT8
#define RLN30LDFC_MDL RLN30LDFC_BASE.BIT._MDL
#define RLN30LDFC_UTSW RLN30LDFC_BASE.BIT._UTSW
#define RLN30LIDB RLN30LIDB_BASE.UINT8
#define RLN30LIDB_ID RLN30LIDB_BASE.BIT._ID
#define RLN30LUDB0 RLN30LUDB0_BASE.UINT8
#define RLN30LUDB0_UDB RLN30LUDB0_BASE.BIT._UDB
#define RLN30LDBR1 RLN30LDBR1_BASE.UINT8
#define RLN30LDBR1_LDB RLN30LDBR1_BASE.BIT._LDB
#define RLN30LDBR2 RLN30LDBR2_BASE.UINT8
#define RLN30LDBR2_LDB RLN30LDBR2_BASE.BIT._LDB
#define RLN30LDBR3 RLN30LDBR3_BASE.UINT8
#define RLN30LDBR3_LDB RLN30LDBR3_BASE.BIT._LDB
#define RLN30LDBR4 RLN30LDBR4_BASE.UINT8
#define RLN30LDBR4_LDB RLN30LDBR4_BASE.BIT._LDB
#define RLN30LDBR5 RLN30LDBR5_BASE.UINT8
#define RLN30LDBR5_LDB RLN30LDBR5_BASE.BIT._LDB
#define RLN30LDBR6 RLN30LDBR6_BASE.UINT8
#define RLN30LDBR6_LDB RLN30LDBR6_BASE.BIT._LDB
#define RLN30LDBR7 RLN30LDBR7_BASE.UINT8
#define RLN30LDBR7_LDB RLN30LDBR7_BASE.BIT._LDB
#define RLN30LDBR8 RLN30LDBR8_BASE.UINT8
#define RLN30LDBR8_LDB RLN30LDBR8_BASE.BIT._LDB
#define RLN30LUOER RLN30LUOER_BASE.UINT8
#define RLN30LUOER_UTOE RLN30LUOER_BASE.BIT._UTOE
#define RLN30LUOER_UROE RLN30LUOER_BASE.BIT._UROE
#define RLN30LUOR1 RLN30LUOR1_BASE.UINT8
#define RLN30LUOR1_UEBE RLN30LUOR1_BASE.BIT._UEBE
#define RLN30LUOR1_UEBDL RLN30LUOR1_BASE.BIT._UEBDL
#define RLN30LUOR1_UEBDCE RLN30LUOR1_BASE.BIT._UEBDCE
#define RLN30LUOR1_UTIGTS RLN30LUOR1_BASE.BIT._UTIGTS
#define RLN30LUOR1_UECD RLN30LUOR1_BASE.BIT._UECD
#define RLN30LUTDR RLN30LUTDR_BASE.UINT16
#define RLN30LUTDRL RLN30LUTDR_BASE.UINT8[L]
#define RLN30LUTDRH RLN30LUTDR_BASE.UINT8[H]
#define RLN30LUTDR_UTD RLN30LUTDR_BASE.BIT._UTD
#define RLN30LURDR RLN30LURDR_BASE.UINT16
#define RLN30LURDRL RLN30LURDR_BASE.UINT8[L]
#define RLN30LURDRH RLN30LURDR_BASE.UINT8[H]
#define RLN30LURDR_URD RLN30LURDR_BASE.BIT._URD
#define RLN30LUWTDR RLN30LUWTDR_BASE.UINT16
#define RLN30LUWTDRL RLN30LUWTDR_BASE.UINT8[L]
#define RLN30LUWTDRH RLN30LUWTDR_BASE.UINT8[H]
#define RLN30LUWTDR_UWTD RLN30LUWTDR_BASE.BIT._UWTD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif