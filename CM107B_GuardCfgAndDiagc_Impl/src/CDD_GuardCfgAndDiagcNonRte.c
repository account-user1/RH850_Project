/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_GuardCfgAndDiagcNonRte.c 
* Module Description: Non-Rte functions of CM107B Guard Configuration and Diagnostics RH850
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 10/13/17   1       AJM       Initial Version                                                                EA4#12708
* 12/12/17   2       AJM       Updated with corrected guard settings identified during integration            EA4#18561
**********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "CDD_GuardCfgAndDiagc.h"
#include "FSGD1A_RegDefns.h"
#include "FSGD1B_RegDefns.h"
#include "FSGD2A_RegDefns.h"
#include "FSGD3A_RegDefns.h"
#include "FSGD3B_RegDefns.h"
#include "FSGD4A_RegDefns.h"
#include "FSGD4B_RegDefns.h"
#include "PEG_RegDefns.h"
#include "FSGD0B_RegDefns.h"
#include "FSGD0A_RegDefns.h"
#include "IPG_RegDefns.h"
#include "HBG_RegDefns.h"
#include "GRGDCFG_RegDefns.h"
#include "Os.h"

/******************************************** File Level Rule Deviations *********************************************/
 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 /* MISRA-C:2004 Rule 8.12 [NXTRDEV 8.12.1] The ghs compiler requires the [] notation in extern declarations of linker symbols and the size of the
                           sections is unknown when generating the extern declarations.  Code using the symbols is not performing array access
                           so the unknown size is not a functional issue. */
 /* MISRA-C:2004 Rule 8.9  [NXTRDEV 8.9.1] Deviation allowed for use of linker symbols, because the linker symbols are not defined 
                           in any source code file. */
 /* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.2]	Cast of a variable address to an integer type required for writing a variable address to a register. */
 
/**************************************************** Type defs ******************************************************/

/*    bit 31 PROTLOCK enables/disables register lock */
#define PROTNLOCKENA_CNT_U32            0x80000000UL /* register is not rewritable */

#define GLBRAMGUARDENA_CNT_U32          0x40000000UL
#define GLBRAMGUARDRSTVAL_CNT_U32       0x07FFFE10UL
#define GLBRAMGUARD0BASADRREG_CNT_U32   0x00027E00UL
#define GLBRAMGUARD0VALADRREG_CNT_U32   0x00000000UL

#define SPID0_CNT_U32                   0x00000001UL
#define SPID1_CNT_U32                   0x00000002UL
#define SPID2_CNT_U32                   0x00000004UL
#define SPID3_CNT_U32                   0x00000008UL
#define SPID4_CNT_U32                   0x00000010UL
#define SPID5_CNT_U32                   0x00000020UL
#define SPID6_CNT_U32                   0x00000040UL
#define SPID7_CNT_U32                   0x00000080UL
#define ALLSPIDDI_CNT_U32               0x00000000UL

#define HISPDBUSGUARDREADENAPE1_CNT_U32       0x0605FE1BUL
#define HISPDBUSGUARDWRENAPE1_CNT_U32         0x0605FE17UL

#define PBGREADENAPE1_CNT_U32           0x0605FE1BUL
#define PBGWRENAPE1_CNT_U32             0x0605FE17UL
#define PBGREADENAPE1ANDPE4_CNT_U32     0x0625FE1BUL
#define PBGWRENAPE1ANDPE4_CNT_U32       0x0625FE17UL

#define PBGREADALLPEDI_CNT_U32          0x0601FE1BUL
#define PBGWRALLPEDI_CNT_U32            0x0601FE17UL

static FUNC(void, CDD_GuardCfgAndDiagc_CODE) PegInin(void);
static FUNC(void, CDD_GuardCfgAndDiagc_CODE) PbgInin(void);
static FUNC(void, CDD_GuardCfgAndDiagc_CODE) HiSpdBusGuardInin(void);
static FUNC(void, CDD_GuardCfgAndDiagc_CODE) GlbRamGuardInin(void);

extern uint8 DmaWrRamBasAddr[];

#define CDD_GuardCfgAndDiagc_START_SEC_CODE
#include "CDD_GuardCfgAndDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/******************************************************************************
 * Name         : GuardCfgAndDiagcInit1
 * Description  : Guard configuration initialization of PEG, IPG, and PBG
 * Inputs       : None     
 * Outputs      : Configuration registers for PEG, IPG, and PBG  
 * Usage Notes  : Non-RTE function so that guard protection can be initialized and enabled before the RTE is started
 ****************************************************************************/
FUNC(void, CDD_GuardCfgAndDiagc_CODE) GuardCfgAndDiagcInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
    PegInin();
    Call_IpgInin();
    HiSpdBusGuardInin();
    GlbRamGuardInin();
    PbgInin();
}

/******************************************************************************
 * Name         : PegInin
 * Description  : Processor Element Guard (PEG) Initialization
 * Inputs       : None         
 * Outputs      : PEG configuration registers      
 * Usage Notes  : None
 ****************************************************************************/
static FUNC(void, CDD_GuardCfgAndDiagc_CODE) PegInin(void) 
{

    PEGG0MK = 0x00000000UL;                     /* Mask value (bits 31:12 of register) = 0 creates a 4Kbyte region */
    PEGG0SP = 0x00000028UL;                     /* SPID 5 and 3 Allowed */
    PEGG0BA =   
            ((uint32)DmaWrRamBasAddr)           /* Base address defined in linker file aligned on 4K boundary*/
            |   ((uint32)0x01U << 4)            /* Lock Further register writes */ 
            |   ((uint32)0x01U << 2)            /* Write Access is enabled */
            |   ((uint32)0x01U << 1)            /* Read Access is enabled*/
            |   ((uint32)0x01U << 0);           /* PE Guard protection area is enabled */

    PEGG1MK = 0x0001F000UL;                     /* Mask value (bits 31:12 of register) = 1F creates a 128Kbyte region */
    PEGG1SP = 0x00000004UL;                     /* SPID 2 Allowed */
    PEGG1BA =   ((uint32)0xFEBE0U << 12)        /* Base value (bits 31:12 of register) = 0xFEBE0; region starts at address 0xFEBE0000  */
            |   ((uint32)0x01U << 4)            /* Lock Further register writes */ 
            |   ((uint32)0x01U << 2)            /* Write Access is enabled */
            |   ((uint32)0x01U << 1)            /* Read Access is enabled*/
            |   ((uint32)0x01U << 0);           /* PE Guard protection area is enabled */
            
    PEGG2MK = 0x0001F000UL;                     /* Mask value (bits 31:12 of register) = 1F creates a 128Kbyte region */
    PEGG2SP = 0x00000038UL;                     /* SPID 3,4,5 Allowed */
    PEGG2BA =   ((uint32)0xFEBE0U << 12)        /* Base value (bits 31:12 of register) = 0xFEBE0; region starts at address 0xFEBE0000  */
            |   ((uint32)0x01U << 4)            /* Lock Further register writes */ 
            |   ((uint32)0x00U << 2)            /* Write Access is disabled */
            |   ((uint32)0x01U << 1)            /* Read Access is enabled*/
            |   ((uint32)0x01U << 0);           /* PE Guard protection area is enabled */

    /* Write to registers that have lock bits to prevent their values being modified in the future */
    PEGG3BA =   ((uint32)0xFEBE0U << 12)        /* Base value (bits 31:12 of register) = 0xFEBE0; region starts at address 0xFEBE0000  */
        |       ((uint32)0x01U << 4)            /* Lock Further register writes */ 
        |       ((uint32)0x00U << 2)            /* Write Access is disabled */
        |       ((uint32)0x00U << 1)            /* Read Access is disabled*/
        |       ((uint32)0x00U << 0);           /* PE Guard protection area is disabled */

    PEGG4BA =   ((uint32)0xFEBE0U << 12)        /* Base value (bits 31:12 of register) = 0xFEBE0; region starts at address 0xFEBE0000  */
        |       ((uint32)0x01U << 4)            /* Lock Further register writes */ 
        |       ((uint32)0x00U << 2)            /* Write Access is disabled */
        |       ((uint32)0x00U << 1)            /* Read Access is disabled*/
        |       ((uint32)0x00U << 0);           /* PE Guard protection area is disabled */

    PEGG5BA =   ((uint32)0xFEBE0U << 12)        /* Base value (bits 31:12 of register) = 0xFEBE0; region starts at address 0xFEBE0000  */
        |       ((uint32)0x01U << 4)            /* Lock Further register writes */ 
        |       ((uint32)0x00U << 2)            /* Write Access is disabled */
        |       ((uint32)0x00U << 1)            /* Read Access is disabled*/
        |       ((uint32)0x00U << 0);           /* PE Guard protection area is disabled */

    PEGG6BA =   ((uint32)0xFEBE0U << 12)        /* Base value (bits 31:12 of register) = 0xFEBE0; region starts at address 0xFEBE0000  */
        |       ((uint32)0x01U << 4)            /* Lock Further register writes */ 
        |       ((uint32)0x00U << 2)            /* Write Access is disabled */
        |       ((uint32)0x00U << 1)            /* Read Access is disabled*/
        |       ((uint32)0x00U << 0);           /* PE Guard protection area is disabled */        


    PEGG7BA =   ((uint32)0xFEBE0U << 12)        /* Base value (bits 31:12 of register) = 0xFEBE0; region starts at address 0xFEBE0000  */
        |       ((uint32)0x01U << 4)            /* Lock Further register writes */ 
        |       ((uint32)0x00U << 2)            /* Write Access is disabled */
        |       ((uint32)0x00U << 1)            /* Read Access is disabled*/
        |       ((uint32)0x00U << 0);           /* PE Guard protection area is disabled */  

}

/******************************************************************************
 * Name         : PbgInin
 * Description  : Peripheral Bus Guard (PBG) Initialization
 * Inputs       : None         
 * Outputs      : PBG configuration registers      
 * Usage Notes  : None
 ****************************************************************************/
static FUNC(void, CDD_GuardCfgAndDiagc_CODE) PbgInin(void) 
{
    /* APBGRD_PFSS1 */
    
    APBFSGDSPID_SP1_A = SPID2_CNT_U32;
    APBFSGDSPID_SP1_B = SPID2_CNT_U32;
    APBFSGDSPID_SP4_A = SPID2_CNT_U32;
    APBFSGDSPID_SP4_B = SPID2_CNT_U32;

    APBFSGDPROT_SP1_A = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    APBFSGDPROT_SP1_B = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    APBFSGDPROT_SP4_A = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    APBFSGDPROT_SP4_B = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);

    /* APBGRD_PFSS0 */
    APBFSGDSPID_PDMACM_A = SPID2_CNT_U32;
    APBFSGDSPID_PDMACM_B = SPID2_CNT_U32;
    APBFSGDSPID_PDMACH_A = SPID2_CNT_U32;
    APBFSGDSPID_PDMACH_B = SPID2_CNT_U32;
    APBFSGDSPID_INTC2_A  = SPID2_CNT_U32;
    APBFSGDSPID_INTC2_B  = SPID2_CNT_U32;


    APBFSGDPROT_PDMACM_A = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    APBFSGDPROT_PDMACM_B = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    APBFSGDPROT_PDMACH_A = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    APBFSGDPROT_PDMACH_B = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    APBFSGDPROT_INTC2_A  = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    APBFSGDPROT_INTC2_B  = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);

    APBFSGDSPID_PBG_A = SPID2_CNT_U32;
    APBFSGDPROT_PBG_A = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    APBFSGDSPID_PBG_B = SPID2_CNT_U32;
    APBFSGDPROT_PBG_B = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);

    /* PBG1 #0 */
    FSGD1ASPID02 = SPID2_CNT_U32;
    FSGD1ASPID03 = SPID2_CNT_U32;
    FSGD1ASPID04 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD1ASPID05 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);

    FSGD1APROT02 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD1APROT03 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD1APROT04 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD1APROT05 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);

    /* PBG1 #1 */
    FSGD1BSPID00 = SPID2_CNT_U32;
    FSGD1BSPID01 = SPID2_CNT_U32;
    FSGD1BSPID06 = ALLSPIDDI_CNT_U32;
    FSGD1BSPID07 = ALLSPIDDI_CNT_U32;
    FSGD1BSPID10 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD1BSPID11 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD1BSPID12 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD1BSPID13 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);

    FSGD1BPROT00 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD1BPROT01 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD1BPROT06 = (PROTNLOCKENA_CNT_U32 | PBGREADALLPEDI_CNT_U32);
    FSGD1BPROT07 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);
    FSGD1BPROT10 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD1BPROT11 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);
    FSGD1BPROT12 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD1BPROT13 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);

    FSGD1ASPID00 = SPID2_CNT_U32;
    FSGD1APROT00 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD1ASPID01 = SPID2_CNT_U32;
    FSGD1APROT01 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);

    /* PBG2 #0 */
    FSGD2ASPID02 =  SPID2_CNT_U32;
    FSGD2ASPID03 =  SPID2_CNT_U32;
    FSGD2ASPID04 =  SPID2_CNT_U32;
    FSGD2ASPID05 =  SPID2_CNT_U32;
    FSGD2ASPID06 =  SPID2_CNT_U32;
    FSGD2ASPID07 =  SPID2_CNT_U32;
    FSGD2ASPID10 =  SPID2_CNT_U32;
    FSGD2ASPID11 =  SPID2_CNT_U32;

    FSGD2APROT02 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD2APROT03 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD2APROT04 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD2APROT05 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD2APROT06 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD2APROT07 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD2APROT10 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD2APROT11 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    
    FSGD2ASPID00 = SPID2_CNT_U32;
    FSGD2APROT00 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD2ASPID01 = SPID2_CNT_U32;
    FSGD2APROT01 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);


    /* PBG3 #0 */
    FSGD3ASPID02 = SPID2_CNT_U32;
    FSGD3ASPID03 = SPID2_CNT_U32;
    FSGD3ASPID04 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD3ASPID05 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD3ASPID06 = SPID2_CNT_U32;
    FSGD3ASPID07 = SPID2_CNT_U32;
    FSGD3ASPID08 = SPID2_CNT_U32;
    FSGD3ASPID09 = SPID2_CNT_U32;
    FSGD3ASPID10 = SPID2_CNT_U32;
    FSGD3ASPID11 = SPID2_CNT_U32;
    FSGD3ASPID12 = SPID2_CNT_U32;
    FSGD3ASPID13 = SPID2_CNT_U32;
    FSGD3ASPID14 = ALLSPIDDI_CNT_U32;
    FSGD3ASPID15 = ALLSPIDDI_CNT_U32;

    FSGD3APROT02 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD3APROT03 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD3APROT04 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD3APROT05 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);
    FSGD3APROT06 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD3APROT07 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD3APROT08 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD3APROT09 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD3APROT10 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD3APROT11 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD3APROT12 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD3APROT13 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD3APROT14 = (PROTNLOCKENA_CNT_U32 | PBGREADALLPEDI_CNT_U32);
    FSGD3APROT15 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);

    /* PBG3 #1 */
    FSGD3BSPID00 = ALLSPIDDI_CNT_U32;
    FSGD3BSPID01 = ALLSPIDDI_CNT_U32;
    FSGD3BSPID02 = SPID2_CNT_U32;
    FSGD3BSPID03 = SPID2_CNT_U32;
    FSGD3BSPID06 = ALLSPIDDI_CNT_U32;
    FSGD3BSPID07 = ALLSPIDDI_CNT_U32;
    FSGD3BSPID10 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD3BSPID11 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD3BSPID12 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD3BSPID13 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    
    FSGD3BPROT00 = (PROTNLOCKENA_CNT_U32 | PBGREADALLPEDI_CNT_U32);
    FSGD3BPROT01 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);
    FSGD3BPROT02 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD3BPROT03 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD3BPROT06 = (PROTNLOCKENA_CNT_U32 | PBGREADALLPEDI_CNT_U32);
    FSGD3BPROT07 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);
    FSGD3BPROT10 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD3BPROT11 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);
    FSGD3BPROT12 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD3BPROT13 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);

    FSGD3ASPID00 = SPID2_CNT_U32;
    FSGD3APROT00 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD3ASPID01 = SPID2_CNT_U32;
    FSGD3APROT01 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);

    /* PBG4 #0 */
    FSGD4ASPID02 = SPID2_CNT_U32;
    FSGD4ASPID03 = SPID2_CNT_U32;
    FSGD4ASPID04 = ALLSPIDDI_CNT_U32;
    FSGD4ASPID05 = ALLSPIDDI_CNT_U32;
    FSGD4ASPID06 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD4ASPID07 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD4ASPID08 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD4ASPID09 = (SPID2_CNT_U32 | SPID3_CNT_U32 | SPID4_CNT_U32);
    FSGD4ASPID10 = SPID2_CNT_U32;
    FSGD4ASPID11 = SPID2_CNT_U32;
    FSGD4ASPID12 = SPID2_CNT_U32;
    FSGD4ASPID13 = SPID2_CNT_U32;
    FSGD4ASPID14 = SPID2_CNT_U32;
    FSGD4ASPID15 = SPID2_CNT_U32;
    
    FSGD4APROT02 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4APROT03 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD4APROT04 = (PROTNLOCKENA_CNT_U32 | PBGREADALLPEDI_CNT_U32);
    FSGD4APROT05 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);
    FSGD4APROT06 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD4APROT07 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);
    FSGD4APROT08 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1ANDPE4_CNT_U32);
    FSGD4APROT09 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1ANDPE4_CNT_U32);
    FSGD4APROT10 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4APROT11 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD4APROT12 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4APROT13 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD4APROT14 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4APROT15 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);

    /* PBG4 #1 */
    
    FSGD4BSPID00 = SPID2_CNT_U32;
    FSGD4BSPID01 = ALLSPIDDI_CNT_U32;
    FSGD4BSPID02 = SPID2_CNT_U32;
    FSGD4BSPID03 = SPID2_CNT_U32;
    FSGD4BSPID04 = ALLSPIDDI_CNT_U32;
    FSGD4BSPID05 = ALLSPIDDI_CNT_U32;
    FSGD4BSPID06 = SPID2_CNT_U32;
    FSGD4BSPID07 = SPID2_CNT_U32;
    FSGD4BSPID08 = SPID2_CNT_U32;
    FSGD4BSPID09 = SPID2_CNT_U32;
    FSGD4BSPID10 = SPID2_CNT_U32;
    FSGD4BSPID11 = SPID2_CNT_U32;
    FSGD4BSPID12 = ALLSPIDDI_CNT_U32;
    FSGD4BSPID13 = ALLSPIDDI_CNT_U32;
    
    FSGD4BPROT00 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4BPROT01 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);
    FSGD4BPROT02 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4BPROT03 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD4BPROT04 = (PROTNLOCKENA_CNT_U32 | PBGREADALLPEDI_CNT_U32);
    FSGD4BPROT05 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);
    FSGD4BPROT06 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4BPROT07 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD4BPROT08 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4BPROT09 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD4BPROT10 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4BPROT11 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
    FSGD4BPROT12 = (PROTNLOCKENA_CNT_U32 | PBGREADALLPEDI_CNT_U32);
    FSGD4BPROT13 = (PROTNLOCKENA_CNT_U32 | PBGWRALLPEDI_CNT_U32);

    FSGD4ASPID00 = SPID2_CNT_U32;
    FSGD4APROT00 = (PROTNLOCKENA_CNT_U32 | PBGREADENAPE1_CNT_U32);
    FSGD4ASPID01 = SPID2_CNT_U32;
    FSGD4APROT01 = (PROTNLOCKENA_CNT_U32 | PBGWRENAPE1_CNT_U32);
}

/******************************************************************************
 * Name         : IpgInin
 * Description  : Internal Peripheral Guard (IPG) Initialization
 * Inputs       : None         
 * Outputs      : IPG configuration registers      
 * Usage Notes  : To be configured as a trusted function because it needs to run in supervisor mode
 ****************************************************************************/
FUNC(void, CDD_GuardCfgAndDiagc_CODE) IpgInin(void) 
{

    IPGPMTUM0 =     (uint8)((uint8)0x00U << 6)              /* Restrict user mode execute access to Peripheral bus groups */
                |   (uint8)((uint8)0x01U << 5)              /* Allow user mode Write access to Peripheral bus groups */
                |   (uint8)((uint8)0x01U << 4);             /* Allow user mode Read access to Peripheral bus groups */

    /* Same as the reset value - Hence not configured  */
    IPGPMTUM1 =    (uint8)((uint8)0x00U << 6)               /* Restrict user mode instruction fetch read access to GRAM Bank1 */
               |   (uint8)((uint8)0x00U << 2);              /* Restrict user mode instruction fetch read access to GRAM Bank0 */

    /* PE1 has Interrupt controller,IPIR, MECNT & COMPTEST read/write access in supervisor mode */
    IPGPMTUM2 =     (uint8)((uint8)0x00U << 5)              /* Restrict user mode PE1 write access to IPIR, MECNT and COMPTEST */
                |   (uint8)((uint8)0x01U << 4)              /* Allow user mode PE1 read access to IPIR, MECNT and COMPTEST */
                |   (uint8)((uint8)0x00U << 1)              /* Restrict user mode PE1 write access to INTC1 */
                |   (uint8)((uint8)0x01U << 0);             /* Allow user mode PE1 read access to INTC1 */
                
        
    /* PE1 has SysErrGen read/write access in supervisor mode */
    IPGPMTUM3 =     (uint8)((uint8)0x00U << 5)              /* Restrict user mode PE1 write access to SysErrGen */
                |   (uint8)((uint8)0x01U << 4);             /* Allow user mode PE1 read access to SysErrGen */
                
    /* PE1 has IPG and PEG read/write access in supervisor mode */
    IPGPMTUM4 =     (uint8)((uint8)0x00U << 6)              /* Restrict user mode instruction fetch read access to peripherals to be connected to the H-Bus */
                |   (uint8)((uint8)0x01U << 5)              /* Allow user mode PE1 write access to peripherals to be connected to the H-Bus */    
                |   (uint8)((uint8)0x01U << 4)              /* Allow user mode PE1 read access to peripherals to be connected to the H-Bus */
                |   (uint8)((uint8)0x00U << 1)              /* Disable user mode PE1 write access to peripherals to the PEG */    
                |   (uint8)((uint8)0x01U << 0);             /* Allow user mode PE1 read access to peripherals to the PEG */                
    
    /* Enable IPG after above configuration */
    IPGENUM   =     (uint8)((uint8)0x01U << 1)              /* Enable storing of instruction fetch access violation information */
                |   (uint8)((uint8)0x01U << 0);             /* Enable peripheral device protection */

    
}

/******************************************************************************
 * Name         : HiSpdBusGuardInin
 * Description  : Flex Ray Guard (Grg) Initialization
 * Inputs       : None         
 * Outputs      : Flex Ray Guard configuration registers      
 * Usage Notes  : 
 ****************************************************************************/
static FUNC(void, CDD_GuardCfgAndDiagc_CODE) HiSpdBusGuardInin(void)
{
    /* Flex Ray Read Access Registers */
    FSGDF0SPID00 = SPID2_CNT_U32;
    FSGDF0PROT00 = (PROTNLOCKENA_CNT_U32 | HISPDBUSGUARDREADENAPE1_CNT_U32);

    /* Flex Ray Write Access Registers */
    FSGDF0SPID01 = SPID2_CNT_U32;
    FSGDF0PROT01 = (PROTNLOCKENA_CNT_U32 | HISPDBUSGUARDWRENAPE1_CNT_U32);
    
    /* Ethernet 0 Read Access Registers */
    FSGDE0SPID00 = SPID2_CNT_U32;
    FSGDE0PROT00 = (PROTNLOCKENA_CNT_U32 | HISPDBUSGUARDREADENAPE1_CNT_U32);

    /* Ethernet 1 Read Access Registers */
    FSGDE0SPID00 = SPID2_CNT_U32;
    FSGDE0PROT00 = (PROTNLOCKENA_CNT_U32 | HISPDBUSGUARDWRENAPE1_CNT_U32);
}

/******************************************************************************
 * Name         : GlbRamGuardInin
 * Description  : Global Ram Guard (Grg) Initialization
 * Inputs       : None         
 * Outputs      : Grg configuration registers      
 * Usage Notes  : 
 ****************************************************************************/
static FUNC(void, CDD_GuardCfgAndDiagc_CODE) GlbRamGuardInin(void)
{
    /* Allow full access of Global RAM to PE and ICUMC */
    MGDGRSPID0 = (SPID1_CNT_U32 | SPID2_CNT_U32);   /* Allow SPID 1 and 2 for PE and ICUM */
    MGDGRBAD0  = GLBRAMGUARD0BASADRREG_CNT_U32;     /* Base address Register*/
    MGDGRADV0  = GLBRAMGUARD0VALADRREG_CNT_U32;     /* Guard Address Valid Register*/
    MGDGRPROT0 = (PROTNLOCKENA_CNT_U32 |            /* Lock and Guard Enabled */
                 GLBRAMGUARDENA_CNT_U32 |
                 GLBRAMGUARDRSTVAL_CNT_U32);
                 
    /* Write to these registers that have lock bits to prevent their values being modified in the future */
    MGDGRPROT1 = (PROTNLOCKENA_CNT_U32 | GLBRAMGUARDRSTVAL_CNT_U32);  /* Lock and Guard Disabled */
    MGDGRPROT2 = (PROTNLOCKENA_CNT_U32 | GLBRAMGUARDRSTVAL_CNT_U32);  /* Lock and Guard Disabled */
    MGDGRPROT3 = (PROTNLOCKENA_CNT_U32 | GLBRAMGUARDRSTVAL_CNT_U32);  /* Lock and Guard Disabled */
    MGDGRPROT4 = (PROTNLOCKENA_CNT_U32 | GLBRAMGUARDRSTVAL_CNT_U32);  /* Lock and Guard Disabled */
    MGDGRPROT5 = (PROTNLOCKENA_CNT_U32 | GLBRAMGUARDRSTVAL_CNT_U32);  /* Lock and Guard Disabled */
    MGDGRPROT6 = (PROTNLOCKENA_CNT_U32 | GLBRAMGUARDRSTVAL_CNT_U32);  /* Lock and Guard Disabled */
    MGDGRPROT7 = (PROTNLOCKENA_CNT_U32 | GLBRAMGUARDRSTVAL_CNT_U32);  /* Lock and Guard Disabled */
}


#define CDD_GuardCfgAndDiagc_STOP_SEC_CODE
#include "CDD_GuardCfgAndDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
