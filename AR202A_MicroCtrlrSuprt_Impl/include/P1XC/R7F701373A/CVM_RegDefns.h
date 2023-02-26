#ifndef __DR7F701373_CVM_HEADER__
#define __DR7F701373_CVM_HEADER__



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
    const uint8 _CVMLVF : 1;
    const uint8 _CVMHVF : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    const uint8 _CVMOFLG : 1;
} CVMFBits_t;

typedef struct
{
    const uint8 _CVMLDE : 1;
    const uint8 _CVMHDE : 1;
    const uint8 _CVMDIAGME : 1;
    const uint8 _CVMFLTEN : 1;
    const uint8 _CVMFBISTME : 1;
    const uint8 _CVMCIRREN0 : 1;
    uint8 padding6 : 1;
    const uint8 _CVMCIRREN1 : 1;
} CVMDEBits_t;

typedef struct
{
    uint8 _CVMCRMD : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CVMDMASKBits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 _CVMDIAGL : 1;
    uint8 _CVMDIAGH : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CVMDIAGBits_t;

typedef struct
{
    const uint8 _CVMOUT : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CVMMONBits_t;

typedef struct
{
    uint8 _CVMLVFC : 1;
    uint8 _CVMHVFC : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 _CVMOFLGC : 1;
} CVMFCBits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 _CVMDIAGMEW : 1;
    uint8 _CVMFLTENW : 1;
    uint8 _CVMFBISTMEW : 1;
    uint8 _CVMCIRREN0W : 1;
    uint8 padding6 : 1;
    uint8 _CVMCIRREN1W : 1;
} CVMDEWBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    const CVMFBits_t BIT;
} CVMF_t;

typedef union
{
    uint8 UINT8;
    const CVMDEBits_t BIT;
} CVMDE_t;

typedef union
{
    uint8 UINT8;
    CVMDMASKBits_t BIT;
} CVMDMASK_t;

typedef union
{
    uint8 UINT8;
    CVMDIAGBits_t BIT;
} CVMDIAG_t;

typedef union
{
    uint8 UINT8;
    const CVMMONBits_t BIT;
} CVMMON_t;

typedef union
{
    uint8 UINT8;
    CVMFCBits_t BIT;
} CVMFC_t;

typedef union
{
    uint8 UINT8;
    CVMDEWBits_t BIT;
} CVMDEW_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CVMF_BASE, 0xFFF82C00, __READ, CVMF_t);
__IOREG(CVMDE_BASE, 0xFFF82C04, __READ, CVMDE_t);
__IOREG(CVMDMASK_BASE, 0xFFF82C0C, __READ_WRITE, CVMDMASK_t);
__IOREG(CVMDIAG_BASE, 0xFFF82C10, __READ_WRITE, CVMDIAG_t);
__IOREG(CVMMON_BASE, 0xFFF82C14, __READ, CVMMON_t);
__IOREG(CVMFC_BASE, 0xFFF82C18, __READ_WRITE, CVMFC_t);
__IOREG(CVMDEW_BASE, 0xFFF82C1C, __READ_WRITE, CVMDEW_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CVMF CVMF_BASE.UINT8
#define CVMF_CVMLVF CVMF_BASE.BIT._CVMLVF
#define CVMF_CVMHVF CVMF_BASE.BIT._CVMHVF
#define CVMF_CVMOFLG CVMF_BASE.BIT._CVMOFLG
#define CVMDE CVMDE_BASE.UINT8
#define CVMDE_CVMLDE CVMDE_BASE.BIT._CVMLDE
#define CVMDE_CVMHDE CVMDE_BASE.BIT._CVMHDE
#define CVMDE_CVMDIAGME CVMDE_BASE.BIT._CVMDIAGME
#define CVMDE_CVMFLTEN CVMDE_BASE.BIT._CVMFLTEN
#define CVMDE_CVMFBISTME CVMDE_BASE.BIT._CVMFBISTME
#define CVMDE_CVMCIRREN0 CVMDE_BASE.BIT._CVMCIRREN0
#define CVMDE_CVMCIRREN1 CVMDE_BASE.BIT._CVMCIRREN1
#define CVMDMASK CVMDMASK_BASE.UINT8
#define CVMDMASK_CVMCRMD CVMDMASK_BASE.BIT._CVMCRMD
#define CVMDIAG CVMDIAG_BASE.UINT8
#define CVMDIAG_CVMDIAGL CVMDIAG_BASE.BIT._CVMDIAGL
#define CVMDIAG_CVMDIAGH CVMDIAG_BASE.BIT._CVMDIAGH
#define CVMMON CVMMON_BASE.UINT8
#define CVMMON_CVMOUT CVMMON_BASE.BIT._CVMOUT
#define CVMFC CVMFC_BASE.UINT8
#define CVMFC_CVMLVFC CVMFC_BASE.BIT._CVMLVFC
#define CVMFC_CVMHVFC CVMFC_BASE.BIT._CVMHVFC
#define CVMFC_CVMOFLGC CVMFC_BASE.BIT._CVMOFLGC
#define CVMDEW CVMDEW_BASE.UINT8
#define CVMDEW_CVMDIAGMEW CVMDEW_BASE.BIT._CVMDIAGMEW
#define CVMDEW_CVMFLTENW CVMDEW_BASE.BIT._CVMFLTENW
#define CVMDEW_CVMFBISTMEW CVMDEW_BASE.BIT._CVMFBISTMEW
#define CVMDEW_CVMCIRREN0W CVMDEW_BASE.BIT._CVMCIRREN0W
#define CVMDEW_CVMCIRREN1W CVMDEW_BASE.BIT._CVMCIRREN1W

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif