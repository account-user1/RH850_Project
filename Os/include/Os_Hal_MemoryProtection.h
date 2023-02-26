/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 *  \addtogroup Os_Hal_MemoryProtection
 *  \{
 *
 *  \file       Os_Hal_MemoryProtection.h
 *  \brief
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_MEMORYPROTECTION_H)                                                                                /* PRQA S 0883 */ /* MD_Os_Hal_0883 */
# define OS_HAL_MEMORYPROTECTION_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Hal_MemoryProtectionInt.h"

/* Os kernel module dependencies */
# include "Os_Common.h"
# include "Os_Stack.h"

/* Os HAL dependencies */
# include "Os_Hal_Compiler.h"
# include "Os_Hal_Derivative.h"
# include "Os_Hal_MemoryProtection_Lcfg.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_MpAppSwitch()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
Os_Hal_MpAppSwitch,
(
  P2CONST(Os_Hal_MpAppConfigType, TYPEDEF, OS_CONST) AppConfig
))
{
  Os_Hal_MpuConfigSwitch(AppConfig);                                                                                    /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_MpThreadSwitch()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
Os_Hal_MpThreadSwitch,
(
  P2CONST(Os_Hal_MpThreadConfigType, TYPEDEF, OS_CONST) ThreadConfig
))
{
  Os_Hal_MpuConfigSwitch(ThreadConfig);                                                                                 /* SBSW_OS_HAL_FC_CALLER */
}

/***********************************************************************************************************************
 *  Os_Hal_MpuConfigSwitch()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3112 */ /* MD_Os_Hal_3112 */
Os_Hal_MpuConfigSwitch,
(
  P2CONST(Os_Hal_MpCoreConfigType, TYPEDEF, OS_CONST) MpuConfig
))
{
  /* #10 Reconfigure the MPU regions depending on the number of configured regions. */
  switch(MpuConfig->MpuRegionCount)
  {
     case 15: Os_Hal_SetMPU15(MpuConfig);

     case 14: Os_Hal_SetMPU14(MpuConfig);                                                                               /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case 13: Os_Hal_SetMPU13(MpuConfig);                                                                               /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case 12: Os_Hal_SetMPU12(MpuConfig);                                                                               /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case 11: Os_Hal_SetMPU11(MpuConfig);                                                                               /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case 10: Os_Hal_SetMPU10(MpuConfig);                                                                               /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  9: Os_Hal_SetMPU9(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  8: Os_Hal_SetMPU8(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  7: Os_Hal_SetMPU7(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  6: Os_Hal_SetMPU6(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  5: Os_Hal_SetMPU5(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  4: Os_Hal_SetMPU4(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  3: Os_Hal_SetMPU3(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  2: Os_Hal_SetMPU2(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     case  1: Os_Hal_SetMPU1(MpuConfig);                                                                                /* PRQA S 2003 */ /* MD_Os_Hal_2003 */

     default: break;                                                                                                    /* PRQA S 2003 */ /* MD_Os_Hal_2003 */
   }
}                                                                                                                       /* PRQA S 6030 */ /* MD_Os_Hal_STCYC_SwitchCase */

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* OS_MEMORYPROTECTION_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_MemoryProtection.h
 **********************************************************************************************************************/

