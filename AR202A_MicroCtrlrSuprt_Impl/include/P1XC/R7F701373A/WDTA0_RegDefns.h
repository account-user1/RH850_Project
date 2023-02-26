#ifndef __DR7F701373_WDTA0_HEADER__
#define __DR7F701373_WDTA0_HEADER__



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
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 _WDTA0RUN : 1;
} WDTA0WDTEBits_t;

typedef struct
{
    uint8 padding0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 _WDTA0EVAC7 : 1;
} WDTA0EVACBits_t;

typedef struct
{
    const uint8 _WDTA0REF : 8;
} WDTA0REFBits_t;

typedef struct
{
    uint8 _WDTA0WS : 2;
    uint8 padding2 : 1;
    uint8 _WDTA0WIE : 1;
    uint8 _WDTA0OVF : 3;
    uint8 padding7 : 1;
} WDTA0MDBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    WDTA0WDTEBits_t BIT;
} WDTA0WDTE_t;

typedef union
{
    uint8 UINT8;
    WDTA0EVACBits_t BIT;
} WDTA0EVAC_t;

typedef union
{
    uint8 UINT8;
    const WDTA0REFBits_t BIT;
} WDTA0REF_t;

typedef union
{
    uint8 UINT8;
    WDTA0MDBits_t BIT;
} WDTA0MD_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(WDTA0WDTE_BASE, 0xFFED0000, __READ_WRITE, WDTA0WDTE_t);
__IOREG(WDTA0EVAC_BASE, 0xFFED0004, __READ_WRITE, WDTA0EVAC_t);
__IOREG(WDTA0REF_BASE, 0xFFED0008, __READ, WDTA0REF_t);
__IOREG(WDTA0MD_BASE, 0xFFED000C, __READ_WRITE, WDTA0MD_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define WDTA0WDTE WDTA0WDTE_BASE.UINT8
#define WDTA0WDTE_WDTA0RUN WDTA0WDTE_BASE.BIT._WDTA0RUN
#define WDTA0EVAC WDTA0EVAC_BASE.UINT8
#define WDTA0EVAC_WDTA0EVAC7 WDTA0EVAC_BASE.BIT._WDTA0EVAC7
#define WDTA0REF WDTA0REF_BASE.UINT8
#define WDTA0REF_WDTA0REF WDTA0REF_BASE.BIT._WDTA0REF
#define WDTA0MD WDTA0MD_BASE.UINT8
#define WDTA0MD_WDTA0WS WDTA0MD_BASE.BIT._WDTA0WS
#define WDTA0MD_WDTA0WIE WDTA0MD_BASE.BIT._WDTA0WIE
#define WDTA0MD_WDTA0OVF WDTA0MD_BASE.BIT._WDTA0OVF

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif