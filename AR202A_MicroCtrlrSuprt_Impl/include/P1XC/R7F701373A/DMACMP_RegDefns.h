#ifndef __DR7F701373_DMACMP_HEADER__
#define __DR7F701373_DMACMP_HEADER__



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
    uint32 _DMACMPERR : 30;
    uint32 _PROT0 : 1;
    uint32 _PROT1 : 1;
} PDMA_COMP_CNTRLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    PDMA_COMP_CNTRLBits_t BIT;
} PDMA_COMP_CNTRL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PDMA_COMP_CNTRL_BASE, 0xFFC4CA00, __READ_WRITE, PDMA_COMP_CNTRL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PDMA_COMP_CNTRL PDMA_COMP_CNTRL_BASE.UINT32
#define PDMA_COMP_CNTRL_DMACMPERR PDMA_COMP_CNTRL_BASE.BIT._DMACMPERR
#define PDMA_COMP_CNTRL_PROT0 PDMA_COMP_CNTRL_BASE.BIT._PROT0
#define PDMA_COMP_CNTRL_PROT1 PDMA_COMP_CNTRL_BASE.BIT._PROT1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif