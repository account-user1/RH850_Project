#ifndef __DR7F701373_ECCGTM0_HEADER__
#define __DR7F701373_ECCGTM0_HEADER__



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
    const uint32 _ECEMF : 1;
    const uint32 _ECER1F : 1;
    const uint32 _ECER2F : 1;
    uint32 _EC1EDIC : 1;
    uint32 _EC2EDIC : 1;
    uint32 _EC1ECP : 1;
    uint32 padding6 : 1;
    uint32 _ECTHM : 1;
    uint32 padding8 : 1;
    uint32 _ECER1C : 1;
    uint32 _ECER2C : 1;
    const uint32 _ECOVFF : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 _EMCA0 : 1;
    uint32 _EMCA1 : 1;
    const uint32 _ECSEDF0 : 1;
    const uint32 _ECDEDF0 : 1;
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
} ECCGTM0CTLBits_t;

typedef struct
{
    uint32 _ECREIS : 1;
    uint32 _ECDCS : 1;
    uint32 _ECENS : 1;
    uint32 _ECREOS : 1;
    uint32 _ECTRRS : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ECTMCE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 _ETMA0 : 1;
    uint32 _ETMA1 : 1;
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
} ECCGTM0TMCBits_t;

typedef struct
{
    uint32 _ERDB0 : 1;
    uint32 _ERDB1 : 1;
    uint32 _ERDB2 : 1;
    uint32 _ERDB3 : 1;
    uint32 _ERDB4 : 1;
    uint32 _ERDB5 : 1;
    uint32 _ERDB6 : 1;
    uint32 padding7 : 1;
    const uint32 _ECRD0 : 1;
    const uint32 _ECRD1 : 1;
    const uint32 _ECRD2 : 1;
    const uint32 _ECRD3 : 1;
    const uint32 _ECRD4 : 1;
    const uint32 _ECRD5 : 1;
    const uint32 _ECRD6 : 1;
    uint32 padding15 : 1;
    const uint32 _HORD0 : 1;
    const uint32 _HORD1 : 1;
    const uint32 _HORD2 : 1;
    const uint32 _HORD3 : 1;
    const uint32 _HORD4 : 1;
    const uint32 _HORD5 : 1;
    const uint32 _HORD6 : 1;
    uint32 padding23 : 1;
    const uint32 _SYND0 : 1;
    const uint32 _SYND1 : 1;
    const uint32 _SYND2 : 1;
    const uint32 _SYND3 : 1;
    const uint32 _SYND4 : 1;
    const uint32 _SYND5 : 1;
    const uint32 _SYND6 : 1;
    uint32 padding31 : 1;
} ECCGTM0TRCBits_t;

typedef struct
{
    uint32 _ECEDB : 32;
} ECCGTM0TEDBits_t;

typedef struct
{
    const uint32 _ECEAD : 32;
} ECCGTM0EAD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECCGTM0CTLBits_t BIT;
} ECCGTM0CTL_t;

typedef union
{
    uint32 UINT32;
    ECCGTM0TMCBits_t BIT;
} ECCGTM0TMC_t;

typedef union
{
    uint32 UINT32;
    ECCGTM0TRCBits_t BIT;
} ECCGTM0TRC_t;

typedef union
{
    uint32 UINT32;
    ECCGTM0TEDBits_t BIT;
} ECCGTM0TED_t;

typedef union
{
    uint32 UINT32;
    const ECCGTM0EAD0Bits_t BIT;
} ECCGTM0EAD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECCGTM0CTL_BASE, 0xFFE80000, __READ_WRITE, ECCGTM0CTL_t);
__IOREG(ECCGTM0TMC_BASE, 0xFFE80004, __READ_WRITE, ECCGTM0TMC_t);
__IOREG(ECCGTM0TRC_BASE, 0xFFE80008, __READ_WRITE, ECCGTM0TRC_t);
__IOREG(ECCGTM0TED_BASE, 0xFFE8000C, __READ_WRITE, ECCGTM0TED_t);
__IOREG(ECCGTM0EAD0_BASE, 0xFFE80010, __READ, ECCGTM0EAD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECCGTM0CTL ECCGTM0CTL_BASE.UINT32
#define ECCGTM0CTL_ECEMF ECCGTM0CTL_BASE.BIT._ECEMF
#define ECCGTM0CTL_ECER1F ECCGTM0CTL_BASE.BIT._ECER1F
#define ECCGTM0CTL_ECER2F ECCGTM0CTL_BASE.BIT._ECER2F
#define ECCGTM0CTL_EC1EDIC ECCGTM0CTL_BASE.BIT._EC1EDIC
#define ECCGTM0CTL_EC2EDIC ECCGTM0CTL_BASE.BIT._EC2EDIC
#define ECCGTM0CTL_EC1ECP ECCGTM0CTL_BASE.BIT._EC1ECP
#define ECCGTM0CTL_ECTHM ECCGTM0CTL_BASE.BIT._ECTHM
#define ECCGTM0CTL_ECER1C ECCGTM0CTL_BASE.BIT._ECER1C
#define ECCGTM0CTL_ECER2C ECCGTM0CTL_BASE.BIT._ECER2C
#define ECCGTM0CTL_ECOVFF ECCGTM0CTL_BASE.BIT._ECOVFF
#define ECCGTM0CTL_EMCA0 ECCGTM0CTL_BASE.BIT._EMCA0
#define ECCGTM0CTL_EMCA1 ECCGTM0CTL_BASE.BIT._EMCA1
#define ECCGTM0CTL_ECSEDF0 ECCGTM0CTL_BASE.BIT._ECSEDF0
#define ECCGTM0CTL_ECDEDF0 ECCGTM0CTL_BASE.BIT._ECDEDF0
#define ECCGTM0TMC ECCGTM0TMC_BASE.UINT32
#define ECCGTM0TMC_ECREIS ECCGTM0TMC_BASE.BIT._ECREIS
#define ECCGTM0TMC_ECDCS ECCGTM0TMC_BASE.BIT._ECDCS
#define ECCGTM0TMC_ECENS ECCGTM0TMC_BASE.BIT._ECENS
#define ECCGTM0TMC_ECREOS ECCGTM0TMC_BASE.BIT._ECREOS
#define ECCGTM0TMC_ECTRRS ECCGTM0TMC_BASE.BIT._ECTRRS
#define ECCGTM0TMC_ECTMCE ECCGTM0TMC_BASE.BIT._ECTMCE
#define ECCGTM0TMC_ETMA0 ECCGTM0TMC_BASE.BIT._ETMA0
#define ECCGTM0TMC_ETMA1 ECCGTM0TMC_BASE.BIT._ETMA1
#define ECCGTM0TRC ECCGTM0TRC_BASE.UINT32
#define ECCGTM0TRC_ERDB0 ECCGTM0TRC_BASE.BIT._ERDB0
#define ECCGTM0TRC_ERDB1 ECCGTM0TRC_BASE.BIT._ERDB1
#define ECCGTM0TRC_ERDB2 ECCGTM0TRC_BASE.BIT._ERDB2
#define ECCGTM0TRC_ERDB3 ECCGTM0TRC_BASE.BIT._ERDB3
#define ECCGTM0TRC_ERDB4 ECCGTM0TRC_BASE.BIT._ERDB4
#define ECCGTM0TRC_ERDB5 ECCGTM0TRC_BASE.BIT._ERDB5
#define ECCGTM0TRC_ERDB6 ECCGTM0TRC_BASE.BIT._ERDB6
#define ECCGTM0TRC_ECRD0 ECCGTM0TRC_BASE.BIT._ECRD0
#define ECCGTM0TRC_ECRD1 ECCGTM0TRC_BASE.BIT._ECRD1
#define ECCGTM0TRC_ECRD2 ECCGTM0TRC_BASE.BIT._ECRD2
#define ECCGTM0TRC_ECRD3 ECCGTM0TRC_BASE.BIT._ECRD3
#define ECCGTM0TRC_ECRD4 ECCGTM0TRC_BASE.BIT._ECRD4
#define ECCGTM0TRC_ECRD5 ECCGTM0TRC_BASE.BIT._ECRD5
#define ECCGTM0TRC_ECRD6 ECCGTM0TRC_BASE.BIT._ECRD6
#define ECCGTM0TRC_HORD0 ECCGTM0TRC_BASE.BIT._HORD0
#define ECCGTM0TRC_HORD1 ECCGTM0TRC_BASE.BIT._HORD1
#define ECCGTM0TRC_HORD2 ECCGTM0TRC_BASE.BIT._HORD2
#define ECCGTM0TRC_HORD3 ECCGTM0TRC_BASE.BIT._HORD3
#define ECCGTM0TRC_HORD4 ECCGTM0TRC_BASE.BIT._HORD4
#define ECCGTM0TRC_HORD5 ECCGTM0TRC_BASE.BIT._HORD5
#define ECCGTM0TRC_HORD6 ECCGTM0TRC_BASE.BIT._HORD6
#define ECCGTM0TRC_SYND0 ECCGTM0TRC_BASE.BIT._SYND0
#define ECCGTM0TRC_SYND1 ECCGTM0TRC_BASE.BIT._SYND1
#define ECCGTM0TRC_SYND2 ECCGTM0TRC_BASE.BIT._SYND2
#define ECCGTM0TRC_SYND3 ECCGTM0TRC_BASE.BIT._SYND3
#define ECCGTM0TRC_SYND4 ECCGTM0TRC_BASE.BIT._SYND4
#define ECCGTM0TRC_SYND5 ECCGTM0TRC_BASE.BIT._SYND5
#define ECCGTM0TRC_SYND6 ECCGTM0TRC_BASE.BIT._SYND6
#define ECCGTM0TED ECCGTM0TED_BASE.UINT32
#define ECCGTM0TED_ECEDB ECCGTM0TED_BASE.BIT._ECEDB
#define ECCGTM0EAD0 ECCGTM0EAD0_BASE.UINT32
#define ECCGTM0EAD0_ECEAD ECCGTM0EAD0_BASE.BIT._ECEAD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif