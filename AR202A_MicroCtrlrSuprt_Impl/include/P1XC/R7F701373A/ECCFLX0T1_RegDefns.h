#ifndef __DR7F701373_ECCFLX0T1_HEADER__
#define __DR7F701373_ECCFLX0T1_HEADER__



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
} ECCFLX0T1CTLBits_t;

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
} ECCFLX0T1TMCBits_t;

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
} ECCFLX0T1TRCBits_t;

typedef struct
{
    uint32 _ECEDB : 32;
} ECCFLX0T1TEDBits_t;

typedef struct
{
    const uint32 _ECEAD : 32;
} ECCFLX0T1EAD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECCFLX0T1CTLBits_t BIT;
} ECCFLX0T1CTL_t;

typedef union
{
    uint32 UINT32;
    ECCFLX0T1TMCBits_t BIT;
} ECCFLX0T1TMC_t;

typedef union
{
    uint32 UINT32;
    ECCFLX0T1TRCBits_t BIT;
} ECCFLX0T1TRC_t;

typedef union
{
    uint32 UINT32;
    ECCFLX0T1TEDBits_t BIT;
} ECCFLX0T1TED_t;

typedef union
{
    uint32 UINT32;
    const ECCFLX0T1EAD0Bits_t BIT;
} ECCFLX0T1EAD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECCFLX0T1CTL_BASE, 0xFFC72200, __READ_WRITE, ECCFLX0T1CTL_t);
__IOREG(ECCFLX0T1TMC_BASE, 0xFFC72204, __READ_WRITE, ECCFLX0T1TMC_t);
__IOREG(ECCFLX0T1TRC_BASE, 0xFFC72208, __READ_WRITE, ECCFLX0T1TRC_t);
__IOREG(ECCFLX0T1TED_BASE, 0xFFC7220C, __READ_WRITE, ECCFLX0T1TED_t);
__IOREG(ECCFLX0T1EAD0_BASE, 0xFFC72210, __READ, ECCFLX0T1EAD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECCFLX0T1CTL ECCFLX0T1CTL_BASE.UINT32
#define ECCFLX0T1CTL_ECEMF ECCFLX0T1CTL_BASE.BIT._ECEMF
#define ECCFLX0T1CTL_ECER1F ECCFLX0T1CTL_BASE.BIT._ECER1F
#define ECCFLX0T1CTL_ECER2F ECCFLX0T1CTL_BASE.BIT._ECER2F
#define ECCFLX0T1CTL_EC1EDIC ECCFLX0T1CTL_BASE.BIT._EC1EDIC
#define ECCFLX0T1CTL_EC2EDIC ECCFLX0T1CTL_BASE.BIT._EC2EDIC
#define ECCFLX0T1CTL_EC1ECP ECCFLX0T1CTL_BASE.BIT._EC1ECP
#define ECCFLX0T1CTL_ECTHM ECCFLX0T1CTL_BASE.BIT._ECTHM
#define ECCFLX0T1CTL_ECER1C ECCFLX0T1CTL_BASE.BIT._ECER1C
#define ECCFLX0T1CTL_ECER2C ECCFLX0T1CTL_BASE.BIT._ECER2C
#define ECCFLX0T1CTL_ECOVFF ECCFLX0T1CTL_BASE.BIT._ECOVFF
#define ECCFLX0T1CTL_EMCA0 ECCFLX0T1CTL_BASE.BIT._EMCA0
#define ECCFLX0T1CTL_EMCA1 ECCFLX0T1CTL_BASE.BIT._EMCA1
#define ECCFLX0T1CTL_ECSEDF0 ECCFLX0T1CTL_BASE.BIT._ECSEDF0
#define ECCFLX0T1CTL_ECDEDF0 ECCFLX0T1CTL_BASE.BIT._ECDEDF0
#define ECCFLX0T1TMC ECCFLX0T1TMC_BASE.UINT32
#define ECCFLX0T1TMC_ECREIS ECCFLX0T1TMC_BASE.BIT._ECREIS
#define ECCFLX0T1TMC_ECDCS ECCFLX0T1TMC_BASE.BIT._ECDCS
#define ECCFLX0T1TMC_ECENS ECCFLX0T1TMC_BASE.BIT._ECENS
#define ECCFLX0T1TMC_ECREOS ECCFLX0T1TMC_BASE.BIT._ECREOS
#define ECCFLX0T1TMC_ECTRRS ECCFLX0T1TMC_BASE.BIT._ECTRRS
#define ECCFLX0T1TMC_ECTMCE ECCFLX0T1TMC_BASE.BIT._ECTMCE
#define ECCFLX0T1TMC_ETMA0 ECCFLX0T1TMC_BASE.BIT._ETMA0
#define ECCFLX0T1TMC_ETMA1 ECCFLX0T1TMC_BASE.BIT._ETMA1
#define ECCFLX0T1TRC ECCFLX0T1TRC_BASE.UINT32
#define ECCFLX0T1TRC_ERDB0 ECCFLX0T1TRC_BASE.BIT._ERDB0
#define ECCFLX0T1TRC_ERDB1 ECCFLX0T1TRC_BASE.BIT._ERDB1
#define ECCFLX0T1TRC_ERDB2 ECCFLX0T1TRC_BASE.BIT._ERDB2
#define ECCFLX0T1TRC_ERDB3 ECCFLX0T1TRC_BASE.BIT._ERDB3
#define ECCFLX0T1TRC_ERDB4 ECCFLX0T1TRC_BASE.BIT._ERDB4
#define ECCFLX0T1TRC_ERDB5 ECCFLX0T1TRC_BASE.BIT._ERDB5
#define ECCFLX0T1TRC_ERDB6 ECCFLX0T1TRC_BASE.BIT._ERDB6
#define ECCFLX0T1TRC_ECRD0 ECCFLX0T1TRC_BASE.BIT._ECRD0
#define ECCFLX0T1TRC_ECRD1 ECCFLX0T1TRC_BASE.BIT._ECRD1
#define ECCFLX0T1TRC_ECRD2 ECCFLX0T1TRC_BASE.BIT._ECRD2
#define ECCFLX0T1TRC_ECRD3 ECCFLX0T1TRC_BASE.BIT._ECRD3
#define ECCFLX0T1TRC_ECRD4 ECCFLX0T1TRC_BASE.BIT._ECRD4
#define ECCFLX0T1TRC_ECRD5 ECCFLX0T1TRC_BASE.BIT._ECRD5
#define ECCFLX0T1TRC_ECRD6 ECCFLX0T1TRC_BASE.BIT._ECRD6
#define ECCFLX0T1TRC_HORD0 ECCFLX0T1TRC_BASE.BIT._HORD0
#define ECCFLX0T1TRC_HORD1 ECCFLX0T1TRC_BASE.BIT._HORD1
#define ECCFLX0T1TRC_HORD2 ECCFLX0T1TRC_BASE.BIT._HORD2
#define ECCFLX0T1TRC_HORD3 ECCFLX0T1TRC_BASE.BIT._HORD3
#define ECCFLX0T1TRC_HORD4 ECCFLX0T1TRC_BASE.BIT._HORD4
#define ECCFLX0T1TRC_HORD5 ECCFLX0T1TRC_BASE.BIT._HORD5
#define ECCFLX0T1TRC_HORD6 ECCFLX0T1TRC_BASE.BIT._HORD6
#define ECCFLX0T1TRC_SYND0 ECCFLX0T1TRC_BASE.BIT._SYND0
#define ECCFLX0T1TRC_SYND1 ECCFLX0T1TRC_BASE.BIT._SYND1
#define ECCFLX0T1TRC_SYND2 ECCFLX0T1TRC_BASE.BIT._SYND2
#define ECCFLX0T1TRC_SYND3 ECCFLX0T1TRC_BASE.BIT._SYND3
#define ECCFLX0T1TRC_SYND4 ECCFLX0T1TRC_BASE.BIT._SYND4
#define ECCFLX0T1TRC_SYND5 ECCFLX0T1TRC_BASE.BIT._SYND5
#define ECCFLX0T1TRC_SYND6 ECCFLX0T1TRC_BASE.BIT._SYND6
#define ECCFLX0T1TED ECCFLX0T1TED_BASE.UINT32
#define ECCFLX0T1TED_ECEDB ECCFLX0T1TED_BASE.BIT._ECEDB
#define ECCFLX0T1EAD0 ECCFLX0T1EAD0_BASE.UINT32
#define ECCFLX0T1EAD0_ECEAD ECCFLX0T1EAD0_BASE.BIT._ECEAD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif