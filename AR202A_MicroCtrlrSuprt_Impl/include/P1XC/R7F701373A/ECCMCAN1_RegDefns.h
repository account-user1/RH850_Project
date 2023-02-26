#ifndef __DR7F701373_ECCMCAN1_HEADER__
#define __DR7F701373_ECCMCAN1_HEADER__



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
} ECCMCAN1CTLBits_t;

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
} ECCMCAN1TMCBits_t;

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
} ECCMCAN1TRCBits_t;

typedef struct
{
    uint32 _ECEDB : 32;
} ECCMCAN1TEDBits_t;

typedef struct
{
    const uint32 _ECEAD : 32;
} ECCMCAN1EAD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECCMCAN1CTLBits_t BIT;
} ECCMCAN1CTL_t;

typedef union
{
    uint32 UINT32;
    ECCMCAN1TMCBits_t BIT;
} ECCMCAN1TMC_t;

typedef union
{
    uint32 UINT32;
    ECCMCAN1TRCBits_t BIT;
} ECCMCAN1TRC_t;

typedef union
{
    uint32 UINT32;
    ECCMCAN1TEDBits_t BIT;
} ECCMCAN1TED_t;

typedef union
{
    uint32 UINT32;
    const ECCMCAN1EAD0Bits_t BIT;
} ECCMCAN1EAD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECCMCAN1CTL_BASE, 0xFFC71100, __READ_WRITE, ECCMCAN1CTL_t);
__IOREG(ECCMCAN1TMC_BASE, 0xFFC71104, __READ_WRITE, ECCMCAN1TMC_t);
__IOREG(ECCMCAN1TRC_BASE, 0xFFC71108, __READ_WRITE, ECCMCAN1TRC_t);
__IOREG(ECCMCAN1TED_BASE, 0xFFC7110C, __READ_WRITE, ECCMCAN1TED_t);
__IOREG(ECCMCAN1EAD0_BASE, 0xFFC71110, __READ, ECCMCAN1EAD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECCMCAN1CTL ECCMCAN1CTL_BASE.UINT32
#define ECCMCAN1CTL_ECEMF ECCMCAN1CTL_BASE.BIT._ECEMF
#define ECCMCAN1CTL_ECER1F ECCMCAN1CTL_BASE.BIT._ECER1F
#define ECCMCAN1CTL_ECER2F ECCMCAN1CTL_BASE.BIT._ECER2F
#define ECCMCAN1CTL_EC1EDIC ECCMCAN1CTL_BASE.BIT._EC1EDIC
#define ECCMCAN1CTL_EC2EDIC ECCMCAN1CTL_BASE.BIT._EC2EDIC
#define ECCMCAN1CTL_EC1ECP ECCMCAN1CTL_BASE.BIT._EC1ECP
#define ECCMCAN1CTL_ECTHM ECCMCAN1CTL_BASE.BIT._ECTHM
#define ECCMCAN1CTL_ECER1C ECCMCAN1CTL_BASE.BIT._ECER1C
#define ECCMCAN1CTL_ECER2C ECCMCAN1CTL_BASE.BIT._ECER2C
#define ECCMCAN1CTL_ECOVFF ECCMCAN1CTL_BASE.BIT._ECOVFF
#define ECCMCAN1CTL_EMCA0 ECCMCAN1CTL_BASE.BIT._EMCA0
#define ECCMCAN1CTL_EMCA1 ECCMCAN1CTL_BASE.BIT._EMCA1
#define ECCMCAN1CTL_ECSEDF0 ECCMCAN1CTL_BASE.BIT._ECSEDF0
#define ECCMCAN1CTL_ECDEDF0 ECCMCAN1CTL_BASE.BIT._ECDEDF0
#define ECCMCAN1TMC ECCMCAN1TMC_BASE.UINT32
#define ECCMCAN1TMC_ECREIS ECCMCAN1TMC_BASE.BIT._ECREIS
#define ECCMCAN1TMC_ECDCS ECCMCAN1TMC_BASE.BIT._ECDCS
#define ECCMCAN1TMC_ECENS ECCMCAN1TMC_BASE.BIT._ECENS
#define ECCMCAN1TMC_ECREOS ECCMCAN1TMC_BASE.BIT._ECREOS
#define ECCMCAN1TMC_ECTRRS ECCMCAN1TMC_BASE.BIT._ECTRRS
#define ECCMCAN1TMC_ECTMCE ECCMCAN1TMC_BASE.BIT._ECTMCE
#define ECCMCAN1TMC_ETMA0 ECCMCAN1TMC_BASE.BIT._ETMA0
#define ECCMCAN1TMC_ETMA1 ECCMCAN1TMC_BASE.BIT._ETMA1
#define ECCMCAN1TRC ECCMCAN1TRC_BASE.UINT32
#define ECCMCAN1TRC_ERDB0 ECCMCAN1TRC_BASE.BIT._ERDB0
#define ECCMCAN1TRC_ERDB1 ECCMCAN1TRC_BASE.BIT._ERDB1
#define ECCMCAN1TRC_ERDB2 ECCMCAN1TRC_BASE.BIT._ERDB2
#define ECCMCAN1TRC_ERDB3 ECCMCAN1TRC_BASE.BIT._ERDB3
#define ECCMCAN1TRC_ERDB4 ECCMCAN1TRC_BASE.BIT._ERDB4
#define ECCMCAN1TRC_ERDB5 ECCMCAN1TRC_BASE.BIT._ERDB5
#define ECCMCAN1TRC_ERDB6 ECCMCAN1TRC_BASE.BIT._ERDB6
#define ECCMCAN1TRC_ECRD0 ECCMCAN1TRC_BASE.BIT._ECRD0
#define ECCMCAN1TRC_ECRD1 ECCMCAN1TRC_BASE.BIT._ECRD1
#define ECCMCAN1TRC_ECRD2 ECCMCAN1TRC_BASE.BIT._ECRD2
#define ECCMCAN1TRC_ECRD3 ECCMCAN1TRC_BASE.BIT._ECRD3
#define ECCMCAN1TRC_ECRD4 ECCMCAN1TRC_BASE.BIT._ECRD4
#define ECCMCAN1TRC_ECRD5 ECCMCAN1TRC_BASE.BIT._ECRD5
#define ECCMCAN1TRC_ECRD6 ECCMCAN1TRC_BASE.BIT._ECRD6
#define ECCMCAN1TRC_HORD0 ECCMCAN1TRC_BASE.BIT._HORD0
#define ECCMCAN1TRC_HORD1 ECCMCAN1TRC_BASE.BIT._HORD1
#define ECCMCAN1TRC_HORD2 ECCMCAN1TRC_BASE.BIT._HORD2
#define ECCMCAN1TRC_HORD3 ECCMCAN1TRC_BASE.BIT._HORD3
#define ECCMCAN1TRC_HORD4 ECCMCAN1TRC_BASE.BIT._HORD4
#define ECCMCAN1TRC_HORD5 ECCMCAN1TRC_BASE.BIT._HORD5
#define ECCMCAN1TRC_HORD6 ECCMCAN1TRC_BASE.BIT._HORD6
#define ECCMCAN1TRC_SYND0 ECCMCAN1TRC_BASE.BIT._SYND0
#define ECCMCAN1TRC_SYND1 ECCMCAN1TRC_BASE.BIT._SYND1
#define ECCMCAN1TRC_SYND2 ECCMCAN1TRC_BASE.BIT._SYND2
#define ECCMCAN1TRC_SYND3 ECCMCAN1TRC_BASE.BIT._SYND3
#define ECCMCAN1TRC_SYND4 ECCMCAN1TRC_BASE.BIT._SYND4
#define ECCMCAN1TRC_SYND5 ECCMCAN1TRC_BASE.BIT._SYND5
#define ECCMCAN1TRC_SYND6 ECCMCAN1TRC_BASE.BIT._SYND6
#define ECCMCAN1TED ECCMCAN1TED_BASE.UINT32
#define ECCMCAN1TED_ECEDB ECCMCAN1TED_BASE.BIT._ECEDB
#define ECCMCAN1EAD0 ECCMCAN1EAD0_BASE.UINT32
#define ECCMCAN1EAD0_ECEAD ECCMCAN1EAD0_BASE.BIT._ECEAD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif