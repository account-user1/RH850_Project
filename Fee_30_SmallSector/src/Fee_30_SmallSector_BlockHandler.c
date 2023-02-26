/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          \file  Fee_30_SmallSector_BlockHandler.c
 *         \brief  Fee Sub-component BlockHandler source file
 *
 *       \details  BlockHandler sub-component is responsible for management and initialization of block relevant data.
 *                 BlockHandler provides public services to other FEE sub-components to access block relevant data.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_IMPLEMENTATION_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Fee_30_SmallSector_BlockHandler.h"

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

#ifndef FEE_30_SMALLSECTOR_LOCAL /* COV_FEE_30_SMALLSECTOR_COMPATIBILITY */
# define FEE_30_SMALLSECTOR_LOCAL static
#endif

#define FEE_30_SMALLSECTOR_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef struct
{
  uint16 BlockIndex;
  Fee_30_SmallSector_AddressType AbsoluteBlockAddress;
}Fee_30_SmallSector_Bh_BlockType;

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

FEE_30_SMALLSECTOR_LOCAL VAR(Fee_30_SmallSector_Bh_BlockType, FEE_30_SMALLSECTOR_APPL_DATA) Fee_30_SmallSector_Bh_BlockInfo;

#define FEE_30_SMALLSECTOR_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_START_SEC_CODE
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
  Fee_30_SmallSector_Bh_Init()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (void, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_Bh_Init(uint16 BlockNumber, Fee_30_SmallSector_AddressType PartitionStartAddress)
{
  /* #10 Initialize local parameter */
  Fee_30_SmallSector_Bh_BlockInfo.BlockIndex = Fee_30_SmallSector_Bh_GetBlockIndex(BlockNumber);
  Fee_30_SmallSector_Bh_BlockInfo.AbsoluteBlockAddress = PartitionStartAddress +
          Fee_30_SmallSector_BlockConfigList[Fee_30_SmallSector_Bh_BlockInfo.BlockIndex].BlockStartAddress;
}

/**********************************************************************************************************************
  Fee_30_SmallSector_Bh_GetBlockStartAddress()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (Fee_30_SmallSector_AddressType, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_Bh_GetBlockStartAddress(void)
{
  return Fee_30_SmallSector_Bh_BlockInfo.AbsoluteBlockAddress;
}

/**********************************************************************************************************************
  Fee_30_SmallSector_Bh_GetDataLength()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (uint16, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_Bh_GetDataLength(uint16 BlockNumber)
{
  return Fee_30_SmallSector_BlockConfigList[Fee_30_SmallSector_Bh_GetBlockIndex(BlockNumber)].DataLength;
}

/**********************************************************************************************************************
  Fee_30_SmallSector_Bh_GetNumberOfInstances()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (uint8, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_Bh_GetNumberOfInstances(void)
{
  return Fee_30_SmallSector_BlockConfigList[Fee_30_SmallSector_Bh_BlockInfo.BlockIndex].NumberOfInstances;
}

#if (FEE_30_SMALLSECTOR_DEV_ERROR_DETECT == STD_ON)
/**********************************************************************************************************************
  Fee_30_SmallSector_Bh_IsImmediateData()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (boolean, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_Bh_IsImmediateData(uint16 BlockNumber)
{
  return Fee_30_SmallSector_BlockConfigList[Fee_30_SmallSector_Bh_GetBlockIndex(BlockNumber)].IsImmediateData;
}
#endif

/**********************************************************************************************************************
  Fee_30_SmallSector_Bh_HasVerificationEnabled()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (boolean, FEE_30_SMALLSECTOR_PUBLIC_CODE) Fee_30_SmallSector_Bh_HasVerificationEnabled(void)
{
  return Fee_30_SmallSector_BlockConfigList[Fee_30_SmallSector_Bh_BlockInfo.BlockIndex].HasVerificationEnabled;
}

/**********************************************************************************************************************
  Fee_30_SmallSector_Bh_GetBlockIndex()
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC (uint16, FEE_30_SMALLSECTOR_PRIVATE_CODE) Fee_30_SmallSector_Bh_GetBlockIndex(uint16 BlockNumber)
{
  return (uint16)((uint16)(BlockNumber >> Fee_30_SmallSector_DatasetSelectionBits) - 1u);
}

#define FEE_30_SMALLSECTOR_STOP_SEC_CODE
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 *  END OF FILE: Fee_30_SmallSector_BlockHandler.c
 *********************************************************************************************************************/
