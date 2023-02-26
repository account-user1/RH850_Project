#ifndef __DR7F701373_ECCMCAN0_HEADER__
#define __DR7F701373_ECCMCAN0_HEADER__



/**********************************************************************************************************************
 Module File Name  : <Module>_RegDefns.h
 Module Description: Generated Register Definitions of Renesas Peripherals
 Project           : CBD
 Author            : Lucas Wendling
**********************************************************************************************************************
 Version Control:
 %version:          2 %
 %derived_by:       nz2554 %
----------------------------------------------------------------------------------------------------------------------
 Date      Rev      Author         Change Description
 -------   -------  --------  ----------------------------------------------------------------------------------------
 07/12/17  1        LWW       Header file generated from Renesas tool based on input files contained in tools directory
 11/02/17  2        SR        Updated the Module name from ECCMAN0 to ECCMCAN0
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
} ECCMCAN0CTLBits_t;

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
} ECCMCAN0TMCBits_t;

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
} ECCMCAN0TRCBits_t;

typedef struct
{
    uint32 _ECEDB : 32;
} ECCMCAN0TEDBits_t;

typedef struct
{
    const uint32 _ECEAD : 32;
} ECCMCAN0EAD0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ECCMCAN0CTLBits_t BIT;
} ECCMCAN0CTL_t;

typedef union
{
    uint32 UINT32;
    ECCMCAN0TMCBits_t BIT;
} ECCMCAN0TMC_t;

typedef union
{
    uint32 UINT32;
    ECCMCAN0TRCBits_t BIT;
} ECCMCAN0TRC_t;

typedef union
{
    uint32 UINT32;
    ECCMCAN0TEDBits_t BIT;
} ECCMCAN0TED_t;

typedef union
{
    uint32 UINT32;
    const ECCMCAN0EAD0Bits_t BIT;
} ECCMCAN0EAD0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ECCMCAN0CTL_BASE, 0xFFC79000, __READ_WRITE, ECCMCAN0CTL_t);
__IOREG(ECCMCAN0TMC_BASE, 0xFFC79004, __READ_WRITE, ECCMCAN0TMC_t);
__IOREG(ECCMCAN0TRC_BASE, 0xFFC79008, __READ_WRITE, ECCMCAN0TRC_t);
__IOREG(ECCMCAN0TED_BASE, 0xFFC7900C, __READ_WRITE, ECCMCAN0TED_t);
__IOREG(ECCMCAN0EAD0_BASE, 0xFFC79010, __READ, ECCMCAN0EAD0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ECCMCAN0CTL ECCMCAN0CTL_BASE.UINT32
#define ECCMCAN0CTL_ECEMF ECCMCAN0CTL_BASE.BIT._ECEMF
#define ECCMCAN0CTL_ECER1F ECCMCAN0CTL_BASE.BIT._ECER1F
#define ECCMCAN0CTL_ECER2F ECCMCAN0CTL_BASE.BIT._ECER2F
#define ECCMCAN0CTL_EC1EDIC ECCMCAN0CTL_BASE.BIT._EC1EDIC
#define ECCMCAN0CTL_EC2EDIC ECCMCAN0CTL_BASE.BIT._EC2EDIC
#define ECCMCAN0CTL_EC1ECP ECCMCAN0CTL_BASE.BIT._EC1ECP
#define ECCMCAN0CTL_ECTHM ECCMCAN0CTL_BASE.BIT._ECTHM
#define ECCMCAN0CTL_ECER1C ECCMCAN0CTL_BASE.BIT._ECER1C
#define ECCMCAN0CTL_ECER2C ECCMCAN0CTL_BASE.BIT._ECER2C
#define ECCMCAN0CTL_ECOVFF ECCMCAN0CTL_BASE.BIT._ECOVFF
#define ECCMCAN0CTL_EMCA0 ECCMCAN0CTL_BASE.BIT._EMCA0
#define ECCMCAN0CTL_EMCA1 ECCMCAN0CTL_BASE.BIT._EMCA1
#define ECCMCAN0CTL_ECSEDF0 ECCMCAN0CTL_BASE.BIT._ECSEDF0
#define ECCMCAN0CTL_ECDEDF0 ECCMCAN0CTL_BASE.BIT._ECDEDF0
#define ECCMCAN0TMC ECCMCAN0TMC_BASE.UINT32
#define ECCMCAN0TMC_ECREIS ECCMCAN0TMC_BASE.BIT._ECREIS
#define ECCMCAN0TMC_ECDCS ECCMCAN0TMC_BASE.BIT._ECDCS
#define ECCMCAN0TMC_ECENS ECCMCAN0TMC_BASE.BIT._ECENS
#define ECCMCAN0TMC_ECREOS ECCMCAN0TMC_BASE.BIT._ECREOS
#define ECCMCAN0TMC_ECTRRS ECCMCAN0TMC_BASE.BIT._ECTRRS
#define ECCMCAN0TMC_ECTMCE ECCMCAN0TMC_BASE.BIT._ECTMCE
#define ECCMCAN0TMC_ETMA0 ECCMCAN0TMC_BASE.BIT._ETMA0
#define ECCMCAN0TMC_ETMA1 ECCMCAN0TMC_BASE.BIT._ETMA1
#define ECCMCAN0TRC ECCMCAN0TRC_BASE.UINT32
#define ECCMCAN0TRC_ERDB0 ECCMCAN0TRC_BASE.BIT._ERDB0
#define ECCMCAN0TRC_ERDB1 ECCMCAN0TRC_BASE.BIT._ERDB1
#define ECCMCAN0TRC_ERDB2 ECCMCAN0TRC_BASE.BIT._ERDB2
#define ECCMCAN0TRC_ERDB3 ECCMCAN0TRC_BASE.BIT._ERDB3
#define ECCMCAN0TRC_ERDB4 ECCMCAN0TRC_BASE.BIT._ERDB4
#define ECCMCAN0TRC_ERDB5 ECCMCAN0TRC_BASE.BIT._ERDB5
#define ECCMCAN0TRC_ERDB6 ECCMCAN0TRC_BASE.BIT._ERDB6
#define ECCMCAN0TRC_ECRD0 ECCMCAN0TRC_BASE.BIT._ECRD0
#define ECCMCAN0TRC_ECRD1 ECCMCAN0TRC_BASE.BIT._ECRD1
#define ECCMCAN0TRC_ECRD2 ECCMCAN0TRC_BASE.BIT._ECRD2
#define ECCMCAN0TRC_ECRD3 ECCMCAN0TRC_BASE.BIT._ECRD3
#define ECCMCAN0TRC_ECRD4 ECCMCAN0TRC_BASE.BIT._ECRD4
#define ECCMCAN0TRC_ECRD5 ECCMCAN0TRC_BASE.BIT._ECRD5
#define ECCMCAN0TRC_ECRD6 ECCMCAN0TRC_BASE.BIT._ECRD6
#define ECCMCAN0TRC_HORD0 ECCMCAN0TRC_BASE.BIT._HORD0
#define ECCMCAN0TRC_HORD1 ECCMCAN0TRC_BASE.BIT._HORD1
#define ECCMCAN0TRC_HORD2 ECCMCAN0TRC_BASE.BIT._HORD2
#define ECCMCAN0TRC_HORD3 ECCMCAN0TRC_BASE.BIT._HORD3
#define ECCMCAN0TRC_HORD4 ECCMCAN0TRC_BASE.BIT._HORD4
#define ECCMCAN0TRC_HORD5 ECCMCAN0TRC_BASE.BIT._HORD5
#define ECCMCAN0TRC_HORD6 ECCMCAN0TRC_BASE.BIT._HORD6
#define ECCMCAN0TRC_SYND0 ECCMCAN0TRC_BASE.BIT._SYND0
#define ECCMCAN0TRC_SYND1 ECCMCAN0TRC_BASE.BIT._SYND1
#define ECCMCAN0TRC_SYND2 ECCMCAN0TRC_BASE.BIT._SYND2
#define ECCMCAN0TRC_SYND3 ECCMCAN0TRC_BASE.BIT._SYND3
#define ECCMCAN0TRC_SYND4 ECCMCAN0TRC_BASE.BIT._SYND4
#define ECCMCAN0TRC_SYND5 ECCMCAN0TRC_BASE.BIT._SYND5
#define ECCMCAN0TRC_SYND6 ECCMCAN0TRC_BASE.BIT._SYND6
#define ECCMCAN0TED ECCMCAN0TED_BASE.UINT32
#define ECCMCAN0TED_ECEDB ECCMCAN0TED_BASE.BIT._ECEDB
#define ECCMCAN0EAD0 ECCMCAN0EAD0_BASE.UINT32
#define ECCMCAN0EAD0_ECEAD ECCMCAN0EAD0_BASE.BIT._ECEAD

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif