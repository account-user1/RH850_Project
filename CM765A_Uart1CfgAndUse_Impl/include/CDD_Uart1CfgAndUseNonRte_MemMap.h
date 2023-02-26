/**********************************************************************************************************************
 * Copyright 2017, 2018 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Uart1CfgAndUseNonRte_MemMap.h
 * Module Description: Uart1CfgAndUse component DMA MemMap
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          2 %
 * %derived_by:       rzk04c %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/13/17  1        KByrski   Initial Version                                                               EA4#12174
 * 01/16/18  2        AJM       Corrected the memmap for the dma section                                      EA4#19461
 *********************************************************************************************************************/

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.6  [NXTRDEV 19.6.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 19.15 [NXTRDEV 19.15.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#ifdef CDD_Uart1CfgAndUse_START_SEC_VAR_INIT_128
# undef CDD_Uart1CfgAndUse_START_SEC_VAR_INIT_128
/* Use GreenHills pragma for ensuring proper memory alignment (128bit) on DMA structures  */
# pragma alignvar (16)
# define CDD_Uart1CfgAndUse_START_SEC_VAR_INIT_UNSPECIFIED
# include "CDD_Uart1CfgAndUse_MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

#ifdef CDD_Uart1CfgAndUse_STOP_SEC_VAR_INIT_128
# undef CDD_Uart1CfgAndUse_STOP_SEC_VAR_INIT_128
# define CDD_Uart1CfgAndUse_STOP_SEC_VAR_INIT_UNSPECIFIED
# include "CDD_Uart1CfgAndUse_MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */
#endif

#ifdef CDD_Uart1CfgAndUse_DmaWrite_START_SEC_VAR_INIT_128
# undef CDD_Uart1CfgAndUse_DmaWrite_START_SEC_VAR_INIT_128
/* Use GreenHills pragma for ensuring proper memory alignment (128bit) on DMA structures  */
# pragma alignvar (16)
/* Use GreenHills pragma for ensuring proper memory section allocation for DMA structures that need DMA write access  */
# pragma ghs section data=".data_dma_128"
# pragma ghs section sdata=".sdata_dma_128"
# undef MEMMAP_ERROR
#endif

#ifdef CDD_Uart1CfgAndUse_DmaWrite_STOP_SEC_VAR_INIT_128
# undef CDD_Uart1CfgAndUse_DmaWrite_STOP_SEC_VAR_INIT_128
/* Use GreenHills pragma to restore default memory section allocation  */
# pragma ghs section sdata=default
# pragma ghs section data=default
# undef MEMMAP_ERROR
#endif


