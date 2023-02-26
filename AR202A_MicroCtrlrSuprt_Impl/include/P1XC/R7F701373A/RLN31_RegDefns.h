#ifndef __DR7F701373_RLN31_HEADER__
#define __DR7F701373_RLN31_HEADER__



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
} RLN31LWBRBits_t;

typedef struct
{
    uint16 _BRP : 16;
} RLN31LBRP01Bits_t;

typedef struct
{
    uint8 _LMD : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _LRDNFS : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN31LMDBits_t;

typedef struct
{
    uint8 _UBLS : 1;
    uint8 _UBOS : 1;
    uint8 _USBLS : 1;
    uint8 _UPS : 2;
    uint8 _URPS : 1;
    uint8 _UTPS : 1;
    uint8 padding7 : 1;
} RLN31LBFCBits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _IBS : 2;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN31LSCBits_t;

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
} RLN31LEDEBits_t;

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
} RLN31LCUCBits_t;

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
} RLN31LTRCBits_t;

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
} RLN31LMSTBits_t;

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
} RLN31LSTBits_t;

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
} RLN31LESTBits_t;

typedef struct
{
    uint8 _MDL : 4;
    uint8 padding4 : 1;
    uint8 _UTSW : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} RLN31LDFCBits_t;

typedef struct
{
    uint8 _ID : 8;
} RLN31LIDBBits_t;

typedef struct
{
    uint8 _UDB : 8;
} RLN31LUDB0Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR1Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR2Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR3Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR4Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR5Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR6Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR7Bits_t;

typedef struct
{
    uint8 _LDB : 8;
} RLN31LDBR8Bits_t;

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
} RLN31LUOERBits_t;

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
} RLN31LUOR1Bits_t;

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
} RLN31LUTDRBits_t;

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
} RLN31LURDRBits_t;

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
} RLN31LUWTDRBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    RLN31LWBRBits_t BIT;
} RLN31LWBR_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    RLN31LBRP01Bits_t BIT;
} RLN31LBRP01_t;

typedef union
{
    uint8 UINT8;
    RLN31LMDBits_t BIT;
} RLN31LMD_t;

typedef union
{
    uint8 UINT8;
    RLN31LBFCBits_t BIT;
} RLN31LBFC_t;

typedef union
{
    uint8 UINT8;
    RLN31LSCBits_t BIT;
} RLN31LSC_t;

typedef union
{
    uint8 UINT8;
    RLN31LEDEBits_t BIT;
} RLN31LEDE_t;

typedef union
{
    uint8 UINT8;
    RLN31LCUCBits_t BIT;
} RLN31LCUC_t;

typedef union
{
    uint8 UINT8;
    RLN31LTRCBits_t BIT;
} RLN31LTRC_t;

typedef union
{
    uint8 UINT8;
    const RLN31LMSTBits_t BIT;
} RLN31LMST_t;

typedef union
{
    uint8 UINT8;
    RLN31LSTBits_t BIT;
} RLN31LST_t;

typedef union
{
    uint8 UINT8;
    RLN31LESTBits_t BIT;
} RLN31LEST_t;

typedef union
{
    uint8 UINT8;
    RLN31LDFCBits_t BIT;
} RLN31LDFC_t;

typedef union
{
    uint8 UINT8;
    RLN31LIDBBits_t BIT;
} RLN31LIDB_t;

typedef union
{
    uint8 UINT8;
    RLN31LUDB0Bits_t BIT;
} RLN31LUDB0_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR1Bits_t BIT;
} RLN31LDBR1_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR2Bits_t BIT;
} RLN31LDBR2_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR3Bits_t BIT;
} RLN31LDBR3_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR4Bits_t BIT;
} RLN31LDBR4_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR5Bits_t BIT;
} RLN31LDBR5_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR6Bits_t BIT;
} RLN31LDBR6_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR7Bits_t BIT;
} RLN31LDBR7_t;

typedef union
{
    uint8 UINT8;
    RLN31LDBR8Bits_t BIT;
} RLN31LDBR8_t;

typedef union
{
    uint8 UINT8;
    RLN31LUOERBits_t BIT;
} RLN31LUOER_t;

typedef union
{
    uint8 UINT8;
    RLN31LUOR1Bits_t BIT;
} RLN31LUOR1_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    RLN31LUTDRBits_t BIT;
} RLN31LUTDR_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    const RLN31LURDRBits_t BIT;
} RLN31LURDR_t;

typedef union
{
    uint16 UINT16;
    uint8 UINT8[2];
    RLN31LUWTDRBits_t BIT;
} RLN31LUWTDR_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RLN31LWBR_BASE, 0xFFCAC001, __READ_WRITE, RLN31LWBR_t);
__IOREG(RLN31LBRP01_BASE, 0xFFCAC002, __READ_WRITE, RLN31LBRP01_t);
__IOREG(RLN31LMD_BASE, 0xFFCAC008, __READ_WRITE, RLN31LMD_t);
__IOREG(RLN31LBFC_BASE, 0xFFCAC009, __READ_WRITE, RLN31LBFC_t);
__IOREG(RLN31LSC_BASE, 0xFFCAC00A, __READ_WRITE, RLN31LSC_t);
__IOREG(RLN31LEDE_BASE, 0xFFCAC00D, __READ_WRITE, RLN31LEDE_t);
__IOREG(RLN31LCUC_BASE, 0xFFCAC00E, __READ_WRITE, RLN31LCUC_t);
__IOREG(RLN31LTRC_BASE, 0xFFCAC010, __READ_WRITE, RLN31LTRC_t);
__IOREG(RLN31LMST_BASE, 0xFFCAC011, __READ, RLN31LMST_t);
__IOREG(RLN31LST_BASE, 0xFFCAC012, __READ_WRITE, RLN31LST_t);
__IOREG(RLN31LEST_BASE, 0xFFCAC013, __READ_WRITE, RLN31LEST_t);
__IOREG(RLN31LDFC_BASE, 0xFFCAC014, __READ_WRITE, RLN31LDFC_t);
__IOREG(RLN31LIDB_BASE, 0xFFCAC015, __READ_WRITE, RLN31LIDB_t);
__IOREG(RLN31LUDB0_BASE, 0xFFCAC017, __READ_WRITE, RLN31LUDB0_t);
__IOREG(RLN31LDBR1_BASE, 0xFFCAC018, __READ_WRITE, RLN31LDBR1_t);
__IOREG(RLN31LDBR2_BASE, 0xFFCAC019, __READ_WRITE, RLN31LDBR2_t);
__IOREG(RLN31LDBR3_BASE, 0xFFCAC01A, __READ_WRITE, RLN31LDBR3_t);
__IOREG(RLN31LDBR4_BASE, 0xFFCAC01B, __READ_WRITE, RLN31LDBR4_t);
__IOREG(RLN31LDBR5_BASE, 0xFFCAC01C, __READ_WRITE, RLN31LDBR5_t);
__IOREG(RLN31LDBR6_BASE, 0xFFCAC01D, __READ_WRITE, RLN31LDBR6_t);
__IOREG(RLN31LDBR7_BASE, 0xFFCAC01E, __READ_WRITE, RLN31LDBR7_t);
__IOREG(RLN31LDBR8_BASE, 0xFFCAC01F, __READ_WRITE, RLN31LDBR8_t);
__IOREG(RLN31LUOER_BASE, 0xFFCAC020, __READ_WRITE, RLN31LUOER_t);
__IOREG(RLN31LUOR1_BASE, 0xFFCAC021, __READ_WRITE, RLN31LUOR1_t);
__IOREG(RLN31LUTDR_BASE, 0xFFCAC024, __READ_WRITE, RLN31LUTDR_t);
__IOREG(RLN31LURDR_BASE, 0xFFCAC026, __READ, RLN31LURDR_t);
__IOREG(RLN31LUWTDR_BASE, 0xFFCAC028, __READ_WRITE, RLN31LUWTDR_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RLN31LWBR RLN31LWBR_BASE.UINT8
#define RLN31LWBR_LPRS RLN31LWBR_BASE.BIT._LPRS
#define RLN31LWBR_NSPB RLN31LWBR_BASE.BIT._NSPB
#define RLN31LBRP01 RLN31LBRP01_BASE.UINT16
#define RLN31LBRP01L RLN31LBRP01_BASE.UINT8[L]
#define RLN31LBRP01H RLN31LBRP01_BASE.UINT8[H]
#define RLN31LBRP01_BRP RLN31LBRP01_BASE.BIT._BRP
#define RLN31LMD RLN31LMD_BASE.UINT8
#define RLN31LMD_LMD RLN31LMD_BASE.BIT._LMD
#define RLN31LMD_LRDNFS RLN31LMD_BASE.BIT._LRDNFS
#define RLN31LBFC RLN31LBFC_BASE.UINT8
#define RLN31LBFC_UBLS RLN31LBFC_BASE.BIT._UBLS
#define RLN31LBFC_UBOS RLN31LBFC_BASE.BIT._UBOS
#define RLN31LBFC_USBLS RLN31LBFC_BASE.BIT._USBLS
#define RLN31LBFC_UPS RLN31LBFC_BASE.BIT._UPS
#define RLN31LBFC_URPS RLN31LBFC_BASE.BIT._URPS
#define RLN31LBFC_UTPS RLN31LBFC_BASE.BIT._UTPS
#define RLN31LSC RLN31LSC_BASE.UINT8
#define RLN31LSC_IBS RLN31LSC_BASE.BIT._IBS
#define RLN31LEDE RLN31LEDE_BASE.UINT8
#define RLN31LEDE_BERE RLN31LEDE_BASE.BIT._BERE
#define RLN31LEDE_OERE RLN31LEDE_BASE.BIT._OERE
#define RLN31LEDE_FERE RLN31LEDE_BASE.BIT._FERE
#define RLN31LCUC RLN31LCUC_BASE.UINT8
#define RLN31LCUC_OM0 RLN31LCUC_BASE.BIT._OM0
#define RLN31LTRC RLN31LTRC_BASE.UINT8
#define RLN31LTRC_RTS RLN31LTRC_BASE.BIT._RTS
#define RLN31LMST RLN31LMST_BASE.UINT8
#define RLN31LMST_OMM0 RLN31LMST_BASE.BIT._OMM0
#define RLN31LST RLN31LST_BASE.UINT8
#define RLN31LST_FTC RLN31LST_BASE.BIT._FTC
#define RLN31LST_ERR RLN31LST_BASE.BIT._ERR
#define RLN31LST_UTS RLN31LST_BASE.BIT._UTS
#define RLN31LST_URS RLN31LST_BASE.BIT._URS
#define RLN31LEST RLN31LEST_BASE.UINT8
#define RLN31LEST_BER RLN31LEST_BASE.BIT._BER
#define RLN31LEST_OER RLN31LEST_BASE.BIT._OER
#define RLN31LEST_FER RLN31LEST_BASE.BIT._FER
#define RLN31LEST_EXBT RLN31LEST_BASE.BIT._EXBT
#define RLN31LEST_IDMT RLN31LEST_BASE.BIT._IDMT
#define RLN31LEST_UPER RLN31LEST_BASE.BIT._UPER
#define RLN31LDFC RLN31LDFC_BASE.UINT8
#define RLN31LDFC_MDL RLN31LDFC_BASE.BIT._MDL
#define RLN31LDFC_UTSW RLN31LDFC_BASE.BIT._UTSW
#define RLN31LIDB RLN31LIDB_BASE.UINT8
#define RLN31LIDB_ID RLN31LIDB_BASE.BIT._ID
#define RLN31LUDB0 RLN31LUDB0_BASE.UINT8
#define RLN31LUDB0_UDB RLN31LUDB0_BASE.BIT._UDB
#define RLN31LDBR1 RLN31LDBR1_BASE.UINT8
#define RLN31LDBR1_LDB RLN31LDBR1_BASE.BIT._LDB
#define RLN31LDBR2 RLN31LDBR2_BASE.UINT8
#define RLN31LDBR2_LDB RLN31LDBR2_BASE.BIT._LDB
#define RLN31LDBR3 RLN31LDBR3_BASE.UINT8
#define RLN31LDBR3_LDB RLN31LDBR3_BASE.BIT._LDB
#define RLN31LDBR4 RLN31LDBR4_BASE.UINT8
#define RLN31LDBR4_LDB RLN31LDBR4_BASE.BIT._LDB
#define RLN31LDBR5 RLN31LDBR5_BASE.UINT8
#define RLN31LDBR5_LDB RLN31LDBR5_BASE.BIT._LDB
#define RLN31LDBR6 RLN31LDBR6_BASE.UINT8
#define RLN31LDBR6_LDB RLN31LDBR6_BASE.BIT._LDB
#define RLN31LDBR7 RLN31LDBR7_BASE.UINT8
#define RLN31LDBR7_LDB RLN31LDBR7_BASE.BIT._LDB
#define RLN31LDBR8 RLN31LDBR8_BASE.UINT8
#define RLN31LDBR8_LDB RLN31LDBR8_BASE.BIT._LDB
#define RLN31LUOER RLN31LUOER_BASE.UINT8
#define RLN31LUOER_UTOE RLN31LUOER_BASE.BIT._UTOE
#define RLN31LUOER_UROE RLN31LUOER_BASE.BIT._UROE
#define RLN31LUOR1 RLN31LUOR1_BASE.UINT8
#define RLN31LUOR1_UEBE RLN31LUOR1_BASE.BIT._UEBE
#define RLN31LUOR1_UEBDL RLN31LUOR1_BASE.BIT._UEBDL
#define RLN31LUOR1_UEBDCE RLN31LUOR1_BASE.BIT._UEBDCE
#define RLN31LUOR1_UTIGTS RLN31LUOR1_BASE.BIT._UTIGTS
#define RLN31LUOR1_UECD RLN31LUOR1_BASE.BIT._UECD
#define RLN31LUTDR RLN31LUTDR_BASE.UINT16
#define RLN31LUTDRL RLN31LUTDR_BASE.UINT8[L]
#define RLN31LUTDRH RLN31LUTDR_BASE.UINT8[H]
#define RLN31LUTDR_UTD RLN31LUTDR_BASE.BIT._UTD
#define RLN31LURDR RLN31LURDR_BASE.UINT16
#define RLN31LURDRL RLN31LURDR_BASE.UINT8[L]
#define RLN31LURDRH RLN31LURDR_BASE.UINT8[H]
#define RLN31LURDR_URD RLN31LURDR_BASE.BIT._URD
#define RLN31LUWTDR RLN31LUWTDR_BASE.UINT16
#define RLN31LUWTDRL RLN31LUWTDR_BASE.UINT8[L]
#define RLN31LUWTDRH RLN31LUWTDR_BASE.UINT8[H]
#define RLN31LUWTDR_UWTD RLN31LUWTDR_BASE.BIT._UWTD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif