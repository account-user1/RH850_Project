/**********************************************************************************************************************
* Module File Name  : wdta_regs.h
* Module Description: Window Watchdog Timer Peripheral Registers
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

#ifndef WDTA_REGS_H
#define WDTA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  RUN:8;                                          /* RUN[7:0]         */
} __type542;
typedef struct 
{                                                          /* Bit Access       */
    uint8  WS:2;                                           /* WS[1:0]          */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  WIE:1;                                          /* WIE              */
    uint8  OVF:3;                                          /* OVF[6:4]         */
    uint8  :1;                                             /* Reserved Bits    */
} __type543;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type542 BIT;                                         /* Bit Access       */
} __type1821;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type543 BIT;                                         /* Bit Access       */
} __type1822;

typedef struct 
{                                                          /* Module           */
    __type1821 WDTE;                                       /* WDTE             */
    uint8  dummy298[3];                                    /* Reserved         */
    uint8  EVAC;                                           /* EVAC             */
    uint8  dummy299[3];                                    /* Reserved         */
    const uint8  REF;                                      /* REF              */
    uint8  dummy300[3];                                    /* Reserved         */
    __type1822 MD;                                         /* MD               */
} __type2593;

__IOREG(WDTA0, 0xFFD74000, __READ_WRITE, __type2593);                 /* WDTA0 */

#define WDTA0WDTE WDTA0.WDTE.UINT8
#define WDTA0RUN WDTA0.WDTE.BIT.RUN
#define WDTA0EVAC WDTA0.EVAC
#define WDTA0REF WDTA0.REF
#define WDTA0MD WDTA0.MD.UINT8
#define WDTA0WS WDTA0.MD.BIT.WS
#define WDTA0WIE WDTA0.MD.BIT.WIE
#define WDTA0OVF WDTA0.MD.BIT.OVF

#endif
