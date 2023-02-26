#ifndef __DR7F701373_OTS0_HEADER__
#define __DR7F701373_OTS0_HEADER__



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
    uint8 _OTST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} OTS0OTSTCRBits_t;

typedef struct
{
    uint8 _OTEND : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} OTS0OTENDCRBits_t;

typedef struct
{
    uint8 _OTMD : 1;
    uint8 _SDE : 1;
    uint8 _OTABEE : 1;
    uint8 _OTULIE : 1;
    uint8 _OTEE : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} OTS0OTCRBits_t;

typedef struct
{
    uint8 _OTFC : 1;
    uint8 padding1 : 1;
    uint8 _SDERC : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} OTS0OTFCRBits_t;

typedef struct
{
    const uint8 _OTF : 1;
    const uint8 _OTACT : 1;
    const uint8 _SDER : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} OTS0OTFRBits_t;

typedef struct
{
    const uint8 _TSTAT : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} OTS0OTSTRBits_t;

typedef struct
{
    const uint16 _OTDR_VALUE : 16;
} OTS0OTDRBits_t;

typedef struct
{
    uint16 _HTBAU : 16;
} OTS0HTBRAUBits_t;

typedef struct
{
    uint16 _HTBAL : 16;
} OTS0HTBRALBits_t;

typedef struct
{
    uint16 _HTBBU : 16;
} OTS0HTBRBUBits_t;

typedef struct
{
    uint16 _HTBBL : 16;
} OTS0HTBRBLBits_t;

typedef struct
{
    uint16 _LTBAU : 16;
} OTS0LTBRAUBits_t;

typedef struct
{
    uint16 _LTBAL : 16;
} OTS0LTBRALBits_t;

typedef struct
{
    uint16 _TDL : 16;
} OTS0TDLRBits_t;

typedef struct
{
    const uint16 _COEFFR : 16;
} OTS0COEFFRABits_t;

typedef struct
{
    const uint16 _COEFFR : 16;
} OTS0COEFFRBBits_t;

typedef struct
{
    const uint16 _COEFFR : 16;
} OTS0COEFFRCBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    OTS0OTSTCRBits_t BIT;
} OTS0OTSTCR_t;

typedef union
{
    uint8 UINT8;
    OTS0OTENDCRBits_t BIT;
} OTS0OTENDCR_t;

typedef union
{
    uint8 UINT8;
    OTS0OTCRBits_t BIT;
} OTS0OTCR_t;

typedef union
{
    uint8 UINT8;
    OTS0OTFCRBits_t BIT;
} OTS0OTFCR_t;

typedef union
{
    uint8 UINT8;
    const OTS0OTFRBits_t BIT;
} OTS0OTFR_t;

typedef union
{
    uint8 UINT8;
    const OTS0OTSTRBits_t BIT;
} OTS0OTSTR_t;

typedef union
{
    uint16 UINT16;
    const OTS0OTDRBits_t BIT;
} OTS0OTDR_t;

typedef union
{
    uint16 UINT16;
    OTS0HTBRAUBits_t BIT;
} OTS0HTBRAU_t;

typedef union
{
    uint16 UINT16;
    OTS0HTBRALBits_t BIT;
} OTS0HTBRAL_t;

typedef union
{
    uint16 UINT16;
    OTS0HTBRBUBits_t BIT;
} OTS0HTBRBU_t;

typedef union
{
    uint16 UINT16;
    OTS0HTBRBLBits_t BIT;
} OTS0HTBRBL_t;

typedef union
{
    uint16 UINT16;
    OTS0LTBRAUBits_t BIT;
} OTS0LTBRAU_t;

typedef union
{
    uint16 UINT16;
    OTS0LTBRALBits_t BIT;
} OTS0LTBRAL_t;

typedef union
{
    uint16 UINT16;
    OTS0TDLRBits_t BIT;
} OTS0TDLR_t;

typedef union
{
    uint16 UINT16;
    const OTS0COEFFRABits_t BIT;
} OTS0COEFFRA_t;

typedef union
{
    uint16 UINT16;
    const OTS0COEFFRBBits_t BIT;
} OTS0COEFFRB_t;

typedef union
{
    uint16 UINT16;
    const OTS0COEFFRCBits_t BIT;
} OTS0COEFFRC_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(OTS0OTSTCR_BASE, 0xFFF93000, __READ_WRITE, OTS0OTSTCR_t);
__IOREG(OTS0OTENDCR_BASE, 0xFFF93004, __READ_WRITE, OTS0OTENDCR_t);
__IOREG(OTS0OTCR_BASE, 0xFFF93008, __READ_WRITE, OTS0OTCR_t);
__IOREG(OTS0OTFCR_BASE, 0xFFF9300C, __READ_WRITE, OTS0OTFCR_t);
__IOREG(OTS0OTFR_BASE, 0xFFF93010, __READ, OTS0OTFR_t);
__IOREG(OTS0OTSTR_BASE, 0xFFF93014, __READ, OTS0OTSTR_t);
__IOREG(OTS0OTDR_BASE, 0xFFF93018, __READ, OTS0OTDR_t);
__IOREG(OTS0HTBRAU_BASE, 0xFFF9301C, __READ_WRITE, OTS0HTBRAU_t);
__IOREG(OTS0HTBRAL_BASE, 0xFFF93020, __READ_WRITE, OTS0HTBRAL_t);
__IOREG(OTS0HTBRBU_BASE, 0xFFF93024, __READ_WRITE, OTS0HTBRBU_t);
__IOREG(OTS0HTBRBL_BASE, 0xFFF93028, __READ_WRITE, OTS0HTBRBL_t);
__IOREG(OTS0LTBRAU_BASE, 0xFFF9302C, __READ_WRITE, OTS0LTBRAU_t);
__IOREG(OTS0LTBRAL_BASE, 0xFFF93030, __READ_WRITE, OTS0LTBRAL_t);
__IOREG(OTS0TDLR_BASE, 0xFFF93034, __READ_WRITE, OTS0TDLR_t);
__IOREG(OTS0COEFFRA_BASE, 0xFFF93038, __READ, OTS0COEFFRA_t);
__IOREG(OTS0COEFFRB_BASE, 0xFFF9303C, __READ, OTS0COEFFRB_t);
__IOREG(OTS0COEFFRC_BASE, 0xFFF93040, __READ, OTS0COEFFRC_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define OTS0OTSTCR OTS0OTSTCR_BASE.UINT8
#define OTS0OTSTCR_OTST OTS0OTSTCR_BASE.BIT._OTST
#define OTS0OTENDCR OTS0OTENDCR_BASE.UINT8
#define OTS0OTENDCR_OTEND OTS0OTENDCR_BASE.BIT._OTEND
#define OTS0OTCR OTS0OTCR_BASE.UINT8
#define OTS0OTCR_OTMD OTS0OTCR_BASE.BIT._OTMD
#define OTS0OTCR_SDE OTS0OTCR_BASE.BIT._SDE
#define OTS0OTCR_OTABEE OTS0OTCR_BASE.BIT._OTABEE
#define OTS0OTCR_OTULIE OTS0OTCR_BASE.BIT._OTULIE
#define OTS0OTCR_OTEE OTS0OTCR_BASE.BIT._OTEE
#define OTS0OTFCR OTS0OTFCR_BASE.UINT8
#define OTS0OTFCR_OTFC OTS0OTFCR_BASE.BIT._OTFC
#define OTS0OTFCR_SDERC OTS0OTFCR_BASE.BIT._SDERC
#define OTS0OTFR OTS0OTFR_BASE.UINT8
#define OTS0OTFR_OTF OTS0OTFR_BASE.BIT._OTF
#define OTS0OTFR_OTACT OTS0OTFR_BASE.BIT._OTACT
#define OTS0OTFR_SDER OTS0OTFR_BASE.BIT._SDER
#define OTS0OTSTR OTS0OTSTR_BASE.UINT8
#define OTS0OTSTR_TSTAT OTS0OTSTR_BASE.BIT._TSTAT
#define OTS0OTDR OTS0OTDR_BASE.UINT16
#define OTS0OTDR_OTDR_VALUE OTS0OTDR_BASE.BIT._OTDR_VALUE
#define OTS0HTBRAU OTS0HTBRAU_BASE.UINT16
#define OTS0HTBRAU_HTBAU OTS0HTBRAU_BASE.BIT._HTBAU
#define OTS0HTBRAL OTS0HTBRAL_BASE.UINT16
#define OTS0HTBRAL_HTBAL OTS0HTBRAL_BASE.BIT._HTBAL
#define OTS0HTBRBU OTS0HTBRBU_BASE.UINT16
#define OTS0HTBRBU_HTBBU OTS0HTBRBU_BASE.BIT._HTBBU
#define OTS0HTBRBL OTS0HTBRBL_BASE.UINT16
#define OTS0HTBRBL_HTBBL OTS0HTBRBL_BASE.BIT._HTBBL
#define OTS0LTBRAU OTS0LTBRAU_BASE.UINT16
#define OTS0LTBRAU_LTBAU OTS0LTBRAU_BASE.BIT._LTBAU
#define OTS0LTBRAL OTS0LTBRAL_BASE.UINT16
#define OTS0LTBRAL_LTBAL OTS0LTBRAL_BASE.BIT._LTBAL
#define OTS0TDLR OTS0TDLR_BASE.UINT16
#define OTS0TDLR_TDL OTS0TDLR_BASE.BIT._TDL
#define OTS0COEFFRA OTS0COEFFRA_BASE.UINT16
#define OTS0COEFFRA_COEFFR OTS0COEFFRA_BASE.BIT._COEFFR
#define OTS0COEFFRB OTS0COEFFRB_BASE.UINT16
#define OTS0COEFFRB_COEFFR OTS0COEFFRB_BASE.BIT._COEFFR
#define OTS0COEFFRC OTS0COEFFRC_BASE.UINT16
#define OTS0COEFFRC_COEFFR OTS0COEFFRC_BASE.BIT._COEFFR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif