#ifndef __DR7F701373_ECCFLX0_HEADER__
#define __DR7F701373_ECCFLX0_HEADER__



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
} ECCFLX0CTLBits_t;

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
} ECCFLX0TMCBits_t;

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
} ECCFLX0TRCBits_t;

typedef struct
{
    uint32 _ECEDB : 32;
} ECCFLX0TEDBits_t;

typedef struct
{
    const uint32 _ECEAD : 32;
} ECCFLX0EAD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECCFLX0CTLBits_t BIT;
} ECCFLX0CTL_t;

typedef union
{
    uint32 UINT32;
    ECCFLX0TMCBits_t BIT;
} ECCFLX0TMC_t;

typedef union
{
    uint32 UINT32;
    ECCFLX0TRCBits_t BIT;
} ECCFLX0TRC_t;

typedef union
{
    uint32 UINT32;
    ECCFLX0TEDBits_t BIT;
} ECCFLX0TED_t;

typedef union
{
    uint32 UINT32;
    const ECCFLX0EAD0Bits_t BIT;
} ECCFLX0EAD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECCFLX0CTL_BASE, 0xFFC72000, __READ_WRITE, ECCFLX0CTL_t);
__IOREG(ECCFLX0TMC_BASE, 0xFFC72004, __READ_WRITE, ECCFLX0TMC_t);
__IOREG(ECCFLX0TRC_BASE, 0xFFC72008, __READ_WRITE, ECCFLX0TRC_t);
__IOREG(ECCFLX0TED_BASE, 0xFFC7200C, __READ_WRITE, ECCFLX0TED_t);
__IOREG(ECCFLX0EAD0_BASE, 0xFFC72010, __READ, ECCFLX0EAD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECCFLX0CTL ECCFLX0CTL_BASE.UINT32
#define ECCFLX0CTL_ECEMF ECCFLX0CTL_BASE.BIT._ECEMF
#define ECCFLX0CTL_ECER1F ECCFLX0CTL_BASE.BIT._ECER1F
#define ECCFLX0CTL_ECER2F ECCFLX0CTL_BASE.BIT._ECER2F
#define ECCFLX0CTL_EC1EDIC ECCFLX0CTL_BASE.BIT._EC1EDIC
#define ECCFLX0CTL_EC2EDIC ECCFLX0CTL_BASE.BIT._EC2EDIC
#define ECCFLX0CTL_EC1ECP ECCFLX0CTL_BASE.BIT._EC1ECP
#define ECCFLX0CTL_ECTHM ECCFLX0CTL_BASE.BIT._ECTHM
#define ECCFLX0CTL_ECER1C ECCFLX0CTL_BASE.BIT._ECER1C
#define ECCFLX0CTL_ECER2C ECCFLX0CTL_BASE.BIT._ECER2C
#define ECCFLX0CTL_ECOVFF ECCFLX0CTL_BASE.BIT._ECOVFF
#define ECCFLX0CTL_EMCA0 ECCFLX0CTL_BASE.BIT._EMCA0
#define ECCFLX0CTL_EMCA1 ECCFLX0CTL_BASE.BIT._EMCA1
#define ECCFLX0CTL_ECSEDF0 ECCFLX0CTL_BASE.BIT._ECSEDF0
#define ECCFLX0CTL_ECDEDF0 ECCFLX0CTL_BASE.BIT._ECDEDF0
#define ECCFLX0TMC ECCFLX0TMC_BASE.UINT32
#define ECCFLX0TMC_ECREIS ECCFLX0TMC_BASE.BIT._ECREIS
#define ECCFLX0TMC_ECDCS ECCFLX0TMC_BASE.BIT._ECDCS
#define ECCFLX0TMC_ECENS ECCFLX0TMC_BASE.BIT._ECENS
#define ECCFLX0TMC_ECREOS ECCFLX0TMC_BASE.BIT._ECREOS
#define ECCFLX0TMC_ECTRRS ECCFLX0TMC_BASE.BIT._ECTRRS
#define ECCFLX0TMC_ECTMCE ECCFLX0TMC_BASE.BIT._ECTMCE
#define ECCFLX0TMC_ETMA0 ECCFLX0TMC_BASE.BIT._ETMA0
#define ECCFLX0TMC_ETMA1 ECCFLX0TMC_BASE.BIT._ETMA1
#define ECCFLX0TRC ECCFLX0TRC_BASE.UINT32
#define ECCFLX0TRC_ERDB0 ECCFLX0TRC_BASE.BIT._ERDB0
#define ECCFLX0TRC_ERDB1 ECCFLX0TRC_BASE.BIT._ERDB1
#define ECCFLX0TRC_ERDB2 ECCFLX0TRC_BASE.BIT._ERDB2
#define ECCFLX0TRC_ERDB3 ECCFLX0TRC_BASE.BIT._ERDB3
#define ECCFLX0TRC_ERDB4 ECCFLX0TRC_BASE.BIT._ERDB4
#define ECCFLX0TRC_ERDB5 ECCFLX0TRC_BASE.BIT._ERDB5
#define ECCFLX0TRC_ERDB6 ECCFLX0TRC_BASE.BIT._ERDB6
#define ECCFLX0TRC_ECRD0 ECCFLX0TRC_BASE.BIT._ECRD0
#define ECCFLX0TRC_ECRD1 ECCFLX0TRC_BASE.BIT._ECRD1
#define ECCFLX0TRC_ECRD2 ECCFLX0TRC_BASE.BIT._ECRD2
#define ECCFLX0TRC_ECRD3 ECCFLX0TRC_BASE.BIT._ECRD3
#define ECCFLX0TRC_ECRD4 ECCFLX0TRC_BASE.BIT._ECRD4
#define ECCFLX0TRC_ECRD5 ECCFLX0TRC_BASE.BIT._ECRD5
#define ECCFLX0TRC_ECRD6 ECCFLX0TRC_BASE.BIT._ECRD6
#define ECCFLX0TRC_HORD0 ECCFLX0TRC_BASE.BIT._HORD0
#define ECCFLX0TRC_HORD1 ECCFLX0TRC_BASE.BIT._HORD1
#define ECCFLX0TRC_HORD2 ECCFLX0TRC_BASE.BIT._HORD2
#define ECCFLX0TRC_HORD3 ECCFLX0TRC_BASE.BIT._HORD3
#define ECCFLX0TRC_HORD4 ECCFLX0TRC_BASE.BIT._HORD4
#define ECCFLX0TRC_HORD5 ECCFLX0TRC_BASE.BIT._HORD5
#define ECCFLX0TRC_HORD6 ECCFLX0TRC_BASE.BIT._HORD6
#define ECCFLX0TRC_SYND0 ECCFLX0TRC_BASE.BIT._SYND0
#define ECCFLX0TRC_SYND1 ECCFLX0TRC_BASE.BIT._SYND1
#define ECCFLX0TRC_SYND2 ECCFLX0TRC_BASE.BIT._SYND2
#define ECCFLX0TRC_SYND3 ECCFLX0TRC_BASE.BIT._SYND3
#define ECCFLX0TRC_SYND4 ECCFLX0TRC_BASE.BIT._SYND4
#define ECCFLX0TRC_SYND5 ECCFLX0TRC_BASE.BIT._SYND5
#define ECCFLX0TRC_SYND6 ECCFLX0TRC_BASE.BIT._SYND6
#define ECCFLX0TED ECCFLX0TED_BASE.UINT32
#define ECCFLX0TED_ECEDB ECCFLX0TED_BASE.BIT._ECEDB
#define ECCFLX0EAD0 ECCFLX0EAD0_BASE.UINT32
#define ECCFLX0EAD0_ECEAD ECCFLX0EAD0_BASE.BIT._ECEAD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif