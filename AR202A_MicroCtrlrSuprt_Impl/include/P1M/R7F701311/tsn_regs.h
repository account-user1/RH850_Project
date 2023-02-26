/**********************************************************************************************************************
* Module File Name  : tsn_regs.h
* Module Description: Temperature Sensor Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/14/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef TSN_REGS_H
#define TSN_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 TSNEN:1;                                        /* TSNEN            */
    uint32 :31;                                            /* Reserved Bits    */
} __type919;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 TSNST:1;                                  /* TSNST            */
    uint32 :31;                                            /* Reserved Bits    */
} __type920;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TSNSELFDIAG:1;                                  /* TSNSELFDIAG      */
    uint32 :31;                                            /* Reserved Bits    */
} __type921;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type919 BIT;                                         /* Bit Access       */
} __type2198;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type920 BIT;                                   /* Bit Access       */
} __type2199;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type921 BIT;                                         /* Bit Access       */
} __type2200;

typedef struct 
{                                                          /* Module           */
    __type2198 CR;                                         /* CR               */
    const __type2199 STAT;                                 /* STAT             */
    __type2200 DIAG;                                       /* DIAG             */
} __type2615;

__IOREG(TSN0, 0xFFF28000, __READ_WRITE, __type2615);                  /* TSN0 */

#define TSN0CR TSN0.CR.UINT32
#define TSN0TSNEN TSN0.CR.BIT.TSNEN
#define TSN0STAT TSN0.STAT.UINT32
#define TSN0TSNST TSN0.STAT.BIT.TSNST
#define TSN0DIAG TSN0.DIAG.UINT32
#define TSN0TSNSELFDIAG TSN0.DIAG.BIT.TSNSELFDIAG

#endif
