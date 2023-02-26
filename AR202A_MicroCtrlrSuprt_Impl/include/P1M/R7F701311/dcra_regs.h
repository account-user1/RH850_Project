/**********************************************************************************************************************
* Module File Name  : dcra_regs.h
* Module Description: Data CRC Peripheral Registers
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
* 09/11/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef DCRA_REGS_H
#define DCRA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  POL:2;                                          /* POL[1:0]         */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  ISZ:2;                                          /* ISZ[5:4]         */
    uint8  :2;                                             /* Reserved Bits    */
} __type450;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type450 BIT;                                         /* Bit Access       */
} __type1729;

typedef struct 
{                                                          /* Module           */
    uint32 CIN;                                            /* CIN              */
    uint32 COUT;                                           /* COUT             */
    uint8  dummy261[24];                                   /* Reserved         */
    __type1729 CTL;                                        /* CTL              */
    uint8  dummy262[4063];                                 /* Reserved         */
} __type2588;

__IOREG(DCRA0, 0xFFD50000, __READ_WRITE, __type2588);                 /* DCRA0 */
__IOREG(DCRA1, 0xFFD51000, __READ_WRITE, __type2588);                 /* DCRA1 */
__IOREG(DCRA2, 0xFFD52000, __READ_WRITE, __type2588);                 /* DCRA2 */
__IOREG(DCRA3, 0xFFD53000, __READ_WRITE, __type2588);                 /* DCRA3 */

__IOREGARRAY(DCRA, 4, 0xFFD50000, __READ_WRITE, __type2588);          /* DCRA[4] */

#define DCRA0CIN DCRA0.CIN
#define DCRA0COUT DCRA0.COUT
#define DCRA0CTL DCRA0.CTL.UINT8
#define DCRA0POL DCRA0.CTL.BIT.POL
#define DCRA0ISZ DCRA0.CTL.BIT.ISZ
#define DCRA1CIN DCRA1.CIN
#define DCRA1COUT DCRA1.COUT
#define DCRA1CTL DCRA1.CTL.UINT8
#define DCRA1POL DCRA1.CTL.BIT.POL
#define DCRA1ISZ DCRA1.CTL.BIT.ISZ
#define DCRA2CIN DCRA2.CIN
#define DCRA2COUT DCRA2.COUT
#define DCRA2CTL DCRA2.CTL.UINT8
#define DCRA2POL DCRA2.CTL.BIT.POL
#define DCRA2ISZ DCRA2.CTL.BIT.ISZ
#define DCRA3CIN DCRA3.CIN
#define DCRA3COUT DCRA3.COUT
#define DCRA3CTL DCRA3.CTL.UINT8
#define DCRA3POL DCRA3.CTL.BIT.POL
#define DCRA3ISZ DCRA3.CTL.BIT.ISZ

#endif
