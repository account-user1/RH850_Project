/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrc_Cfg_private.h
* Module Description: Private configuration header file for CM800A Synchronous CRC component.
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 10/07/15  1       KJS     Initial version of the private header template                                  EA4#1844
* 01/12/16  2       KJS     Updates for FDD Rev1 and support for CRC reservation                            EA4#5405
* 05/07/17  3       KJS     Updates to support all RH850 hardware variants                                  EA4#11817
* 01/24/18  5       KJS     Update to indexing logic for anomaly EA4#17928                                  EA4#19751
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_SYNCCRC_CFG_PRIVATE_H
#define CDD_SYNCCRC_CFG_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.3]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */
/* MISRA-C:2004 Rule 3.4 [NXTRDEV 3.4.1]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */
/* MISRA-C:2004 Rule 6.4 [NXTRDEV 6.4.1]: Deviation is allowed for creating access to device register memory. */
/* MISRA-C:2004 Rule 8.9 [NXTRDEV 8.9.2]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */
/* MISRA-C:2004 Rule 18.4 [NXTRDEV 18.4.2]: Union statement required to provide access to the entire register or its sub sections with the same variable reference. */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements. */
/* MISRA-C:2004 Rule 19.3 [NXTRDEV 19.3.1]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */
/* MISRA-C:2004 Rule 19.4 [NXTRDEV 19.4.1]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */
/* MISRA-C:2004 Rule 19.4 [NXTRDEV 19.4.2]: Data type abstraction to support the generated code between difference OS versions. */
/* MISRA-C:2004 Rule 19.7 [NXTRDEV 19.7.2]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */
/* MISRA-C:2004 Rule 19.10 [NXTRDEV 19.10.1]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */
/* MISRA-C:2004 Rule 19.13 [NXTRDEV 19.13.1]: Register access to support differences between RH850 family hardware uses code following pattern of Renesas header files. */


/**************************************************** Type defs ******************************************************/
/* The control register structure is the same for DCRA and DCRB units */
typedef struct
{
    /* Bit Access */
    uint8 POL:2;    /* CRC Polynomial type selection */
    uint8 :2;       /* Reserved Bits */
    uint8 ISZ:2;    /* ISZ - Input bit width */
    uint8 :2;       /* Reserved Bits */
} DataCrcCtrlRegBitAcsRec1;

typedef union
{
    /* Byte Access */
    uint8                       Byte_u08;
    DataCrcCtrlRegBitAcsRec1    Bit_b08;
} DataCrcCtrlRegRec1;

/*
 Register offset from the base address for both DCRA and DCRB types is as follows: 
    Input Register:     Size 32bits | Offset = 00h
    Output Register:    Size 32bits | Offset = 04h
    Control Register:   Size  8bits | Offset = 20h
*/
typedef struct
{
    uint32              Inp_u32;        /* Input register -- Writes to this register automatically change output */
    uint32              Outp_u32;       /* Output register -- Result of the CRC calculation */
    uint32              Dummy_u32[6];   /* Reserved */
    DataCrcCtrlRegRec1  Ctrl_rec;       /* Control register */
} DataCrcRegRec1;

typedef struct 
{
    volatile DataCrcRegRec1* Reg_rec;
} DataCrcRec1;

/************************************************ Embedded Constants *************************************************/

/* Macros for placing symbols at the register addresses */
#ifndef NXTR_PRAGMA_IO_TYPEDEF
#define NXTR_PRAGMA_IO_TYPEDEF
#define NXTRREGPRAGMA(x)        _Pragma(#x)
#define NXTR_PRAGMA_READREG     volatile const
#define NXTR_PRAGMA_WRREG       volatile
#define NXTR_PRAGMA_READWRREG   volatile
#define NXTR_PRAGMA_IOREG(reg, addr, attrib, type) NXTRREGPRAGMA(ghs io reg addr) \
extern attrib type reg
#endif

#define NROFCRCHWUNIT_CNT_U08       4U
#define NROFACTVCRCHWUNIT_CNT_U08   4U
#define ARWRPRENAD_CNT_U08          STD_OFF
#define MAXNROFCRCHWUNIT_CNT_U08    8U
#define CRCOSREF_CNT_U08            (Appl10)

/****************************************************** Macros *******************************************************/
/* Pragma statements for the CRC registers. These macros assign a pragma and extern statement for the variable to 
   the address in the arguments. Argument are Variable Name, Address, Read/Write Access, Data Type. */
NXTR_PRAGMA_IOREG(DATACRCREGCH0, 0xFFD50000, NXTR_PRAGMA_READWRREG, DataCrcRegRec1);
NXTR_PRAGMA_IOREG(DATACRCREGCH1, 0xFFF70000, NXTR_PRAGMA_READWRREG, DataCrcRegRec1);
NXTR_PRAGMA_IOREG(DATACRCREGCH2, 0xFFD51000, NXTR_PRAGMA_READWRREG, DataCrcRegRec1);
NXTR_PRAGMA_IOREG(DATACRCREGCH3, 0xFFF71000, NXTR_PRAGMA_READWRREG, DataCrcRegRec1);

/* Default values for static constants */
#define CRCRESVIDDFTVAL_CNT_U32     {0xFFFFFFFFUL, 0xFFFFFFFEUL, 0xFFFFFFFDUL, 0xFFFFFFFCUL}
#define CRCREGDFTVAL_REC            {{&DATACRCREGCH0}, {&DATACRCREGCH1}, {&DATACRCREGCH2}, {&DATACRCREGCH3}}



/*********************************************** Exported Declarations ***********************************************/

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_SYNCCRC_CFG_PRIVATE_H */
