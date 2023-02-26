/**********************************************************************************************************************
* Module File Name  : cfu_regs.h
* Module Description: CFU Peripheral Registers
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 09/15/15  1        NJS       Initial version derived from dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef CFU_REGS_H
#define CFU_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 TME0:1;                                         /* TME0             */
    uint32 :31;                                            /* Reserved Bits    */
} __type983;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 MES0:1;                                   /* MES0             */
    uint32 :31;                                            /* Reserved Bits    */
} __type984;
typedef struct 
{                                                          /* Bit Access       */
    uint32 BMC0:4;                                         /* BMC0[3:0]        */
    uint32 :28;                                            /* Reserved Bits    */
} __type985;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TMA0:32;                                        /* TMA0[31:0]       */
} __type986;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type983 BIT;                                         /* Bit Access       */
} __type2264;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type984 BIT;                                   /* Bit Access       */
} __type2265;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type985 BIT;                                         /* Bit Access       */
} __type2266;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type986 BIT;                                         /* Bit Access       */
} __type2267;

typedef struct 
{                                                          /* Module           */
    __type2264 TM_ME;                                      /* TM_ME            */
    const __type2265 TM_MS;                                /* TM_MS            */
    uint8  dummy832[24];                                   /* Reserved         */
    __type2266 TM_BMC0;                                    /* TM_BMC0          */
    uint8  dummy833[12];                                   /* Reserved         */
    __type2267 TM_MA0;                                     /* TM_MA0           */
} __type2624;

__IOREG(CFU, 0xFFFF7810, __READ_WRITE, __type2624);                   /* CFU */

#define CFUTM_ME CFU.TM_ME.UINT32
#define CFUTME0 CFU.TM_ME.BIT.TME0
#define CFUTM_MS CFU.TM_MS.UINT32
#define CFUMES0 CFU.TM_MS.BIT.MES0
#define CFUTM_BMC0 CFU.TM_BMC0.UINT32
#define CFUBMC0 CFU.TM_BMC0.BIT.BMC0
#define CFUTM_MA0 CFU.TM_MA0.UINT32
#define CFUTMA0 CFU.TM_MA0.BIT.TMA0

#endif
