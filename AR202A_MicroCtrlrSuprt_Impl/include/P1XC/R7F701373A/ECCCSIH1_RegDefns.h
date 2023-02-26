#ifndef __DR7F701373_ECCCSIH1_HEADER__
#define __DR7F701373_ECCCSIH1_HEADER__



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
} ECCCSIH1CTLBits_t;

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
} ECCCSIH1TMCBits_t;

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
} ECCCSIH1TRCBits_t;

typedef struct
{
    uint32 _ECEDB : 32;
} ECCCSIH1TEDBits_t;

typedef struct
{
    const uint32 _ECEAD : 32;
} ECCCSIH1EAD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECCCSIH1CTLBits_t BIT;
} ECCCSIH1CTL_t;

typedef union
{
    uint32 UINT32;
    ECCCSIH1TMCBits_t BIT;
} ECCCSIH1TMC_t;

typedef union
{
    uint32 UINT32;
    ECCCSIH1TRCBits_t BIT;
} ECCCSIH1TRC_t;

typedef union
{
    uint32 UINT32;
    ECCCSIH1TEDBits_t BIT;
} ECCCSIH1TED_t;

typedef union
{
    uint32 UINT32;
    const ECCCSIH1EAD0Bits_t BIT;
} ECCCSIH1EAD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECCCSIH1CTL_BASE, 0xFFC78000, __READ_WRITE, ECCCSIH1CTL_t);
__IOREG(ECCCSIH1TMC_BASE, 0xFFC78004, __READ_WRITE, ECCCSIH1TMC_t);
__IOREG(ECCCSIH1TRC_BASE, 0xFFC78008, __READ_WRITE, ECCCSIH1TRC_t);
__IOREG(ECCCSIH1TED_BASE, 0xFFC7800C, __READ_WRITE, ECCCSIH1TED_t);
__IOREG(ECCCSIH1EAD0_BASE, 0xFFC78010, __READ, ECCCSIH1EAD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECCCSIH1CTL ECCCSIH1CTL_BASE.UINT32
#define ECCCSIH1CTL_ECEMF ECCCSIH1CTL_BASE.BIT._ECEMF
#define ECCCSIH1CTL_ECER1F ECCCSIH1CTL_BASE.BIT._ECER1F
#define ECCCSIH1CTL_ECER2F ECCCSIH1CTL_BASE.BIT._ECER2F
#define ECCCSIH1CTL_EC1EDIC ECCCSIH1CTL_BASE.BIT._EC1EDIC
#define ECCCSIH1CTL_EC2EDIC ECCCSIH1CTL_BASE.BIT._EC2EDIC
#define ECCCSIH1CTL_EC1ECP ECCCSIH1CTL_BASE.BIT._EC1ECP
#define ECCCSIH1CTL_ECTHM ECCCSIH1CTL_BASE.BIT._ECTHM
#define ECCCSIH1CTL_ECER1C ECCCSIH1CTL_BASE.BIT._ECER1C
#define ECCCSIH1CTL_ECER2C ECCCSIH1CTL_BASE.BIT._ECER2C
#define ECCCSIH1CTL_ECOVFF ECCCSIH1CTL_BASE.BIT._ECOVFF
#define ECCCSIH1CTL_EMCA0 ECCCSIH1CTL_BASE.BIT._EMCA0
#define ECCCSIH1CTL_EMCA1 ECCCSIH1CTL_BASE.BIT._EMCA1
#define ECCCSIH1CTL_ECSEDF0 ECCCSIH1CTL_BASE.BIT._ECSEDF0
#define ECCCSIH1CTL_ECDEDF0 ECCCSIH1CTL_BASE.BIT._ECDEDF0
#define ECCCSIH1TMC ECCCSIH1TMC_BASE.UINT32
#define ECCCSIH1TMC_ECREIS ECCCSIH1TMC_BASE.BIT._ECREIS
#define ECCCSIH1TMC_ECDCS ECCCSIH1TMC_BASE.BIT._ECDCS
#define ECCCSIH1TMC_ECENS ECCCSIH1TMC_BASE.BIT._ECENS
#define ECCCSIH1TMC_ECREOS ECCCSIH1TMC_BASE.BIT._ECREOS
#define ECCCSIH1TMC_ECTRRS ECCCSIH1TMC_BASE.BIT._ECTRRS
#define ECCCSIH1TMC_ECTMCE ECCCSIH1TMC_BASE.BIT._ECTMCE
#define ECCCSIH1TMC_ETMA0 ECCCSIH1TMC_BASE.BIT._ETMA0
#define ECCCSIH1TMC_ETMA1 ECCCSIH1TMC_BASE.BIT._ETMA1
#define ECCCSIH1TRC ECCCSIH1TRC_BASE.UINT32
#define ECCCSIH1TRC_ERDB0 ECCCSIH1TRC_BASE.BIT._ERDB0
#define ECCCSIH1TRC_ERDB1 ECCCSIH1TRC_BASE.BIT._ERDB1
#define ECCCSIH1TRC_ERDB2 ECCCSIH1TRC_BASE.BIT._ERDB2
#define ECCCSIH1TRC_ERDB3 ECCCSIH1TRC_BASE.BIT._ERDB3
#define ECCCSIH1TRC_ERDB4 ECCCSIH1TRC_BASE.BIT._ERDB4
#define ECCCSIH1TRC_ERDB5 ECCCSIH1TRC_BASE.BIT._ERDB5
#define ECCCSIH1TRC_ERDB6 ECCCSIH1TRC_BASE.BIT._ERDB6
#define ECCCSIH1TRC_ECRD0 ECCCSIH1TRC_BASE.BIT._ECRD0
#define ECCCSIH1TRC_ECRD1 ECCCSIH1TRC_BASE.BIT._ECRD1
#define ECCCSIH1TRC_ECRD2 ECCCSIH1TRC_BASE.BIT._ECRD2
#define ECCCSIH1TRC_ECRD3 ECCCSIH1TRC_BASE.BIT._ECRD3
#define ECCCSIH1TRC_ECRD4 ECCCSIH1TRC_BASE.BIT._ECRD4
#define ECCCSIH1TRC_ECRD5 ECCCSIH1TRC_BASE.BIT._ECRD5
#define ECCCSIH1TRC_ECRD6 ECCCSIH1TRC_BASE.BIT._ECRD6
#define ECCCSIH1TRC_HORD0 ECCCSIH1TRC_BASE.BIT._HORD0
#define ECCCSIH1TRC_HORD1 ECCCSIH1TRC_BASE.BIT._HORD1
#define ECCCSIH1TRC_HORD2 ECCCSIH1TRC_BASE.BIT._HORD2
#define ECCCSIH1TRC_HORD3 ECCCSIH1TRC_BASE.BIT._HORD3
#define ECCCSIH1TRC_HORD4 ECCCSIH1TRC_BASE.BIT._HORD4
#define ECCCSIH1TRC_HORD5 ECCCSIH1TRC_BASE.BIT._HORD5
#define ECCCSIH1TRC_HORD6 ECCCSIH1TRC_BASE.BIT._HORD6
#define ECCCSIH1TRC_SYND0 ECCCSIH1TRC_BASE.BIT._SYND0
#define ECCCSIH1TRC_SYND1 ECCCSIH1TRC_BASE.BIT._SYND1
#define ECCCSIH1TRC_SYND2 ECCCSIH1TRC_BASE.BIT._SYND2
#define ECCCSIH1TRC_SYND3 ECCCSIH1TRC_BASE.BIT._SYND3
#define ECCCSIH1TRC_SYND4 ECCCSIH1TRC_BASE.BIT._SYND4
#define ECCCSIH1TRC_SYND5 ECCCSIH1TRC_BASE.BIT._SYND5
#define ECCCSIH1TRC_SYND6 ECCCSIH1TRC_BASE.BIT._SYND6
#define ECCCSIH1TED ECCCSIH1TED_BASE.UINT32
#define ECCCSIH1TED_ECEDB ECCCSIH1TED_BASE.BIT._ECEDB
#define ECCCSIH1EAD0 ECCCSIH1EAD0_BASE.UINT32
#define ECCCSIH1EAD0_ECEAD ECCCSIH1EAD0_BASE.BIT._ECEAD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif