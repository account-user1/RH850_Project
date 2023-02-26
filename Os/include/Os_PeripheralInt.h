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
 * \ingroup     Os_Kernel
 * \defgroup    Os_Peripheral Peripheral Region
 * \brief       Provides access to dedicated memory regions for callers with restricted rights.
 * \details
 * On some platforms, there are memory mapped hardware registers, which are only accessible in
 * privileged mode. To access this kind of registers in non-trusted applications
 * (i.e. in non-privileged mode), MICROSAR OS provides *peripheral regions*.
 * To access such registers a peripheral region has to be configured. When accessing a region, the OS
 * checks whether the caller has access to this region and performs the requested access operation in
 * privileged mode.
 *
 * The OS provides access functions for the following access types: 8, 16, and 32 bit.
 *
 * Miss aligned user addresses are expected to be handled by hardware. No special check is added.
 *
 * \trace       CREQ-131
 *
 * \{
 *
 * \file
 * \brief       Provides the OS internal peripheral API.
 * \details     --no details--
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os.h.
 **********************************************************************************************************************/

#if !defined(OS_PERIPHERALINT_H)                                                                                        /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_PERIPHERALINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Peripheral_Types.h"

/* Os kernel module dependencies */
# include "Os_Application_Types.h"

/* Os hal dependencies */

# if !defined(OS_VCAST_INSTRUMENTATION_OS_PERIPHERAL)
/*VCAST_DONT_INSTRUMENT_START*/
# endif

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/


/*! The static configuration type of a peripheral region. */
struct Os_PeripheralConfigType_Tag
{
  /*! The first accessible address of the region. */
  uint32 AddressStart;

  /*! The last accessible address of the region. */
  uint32 AddressEnd;

  /*! Reference to applications which are allowed to access this object. */
  Os_AppAccessMaskType AccessingApplications;
};


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
 *  Os_Api_ReadPeripheral8()
 **********************************************************************************************************************/
/*! \brief        OS service osReadPeripheral8().
 *  \details      Read a uint8 value from the given region.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]    PeripheralID      The peripheral region to read from.
 *  \param[in]    Address           The address of interest.
 *
 *  \return       The value which was read from address.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-79, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(uint8, OS_CODE) Os_Api_ReadPeripheral8
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address
);


/***********************************************************************************************************************
 *  Os_Api_ReadPeripheral16()
 **********************************************************************************************************************/
/*! \brief        OS service osReadPeripheral16().
 *  \details      Read a uint16 value from the given region.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]    PeripheralID      The peripheral region to read from.
 *  \param[in]    Address           The address of interest.
 *
 *  \return       The value which was read from address.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-79, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(uint16, OS_CODE) Os_Api_ReadPeripheral16
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address
);


/***********************************************************************************************************************
 *  Os_Api_ReadPeripheral32()
 **********************************************************************************************************************/
/*! \brief        OS service osReadPeripheral32().
 *  \details      Read a uint32 value from the given region.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]    PeripheralID      The peripheral region to read from.
 *  \param[in]    Address           The address of interest.
 *
 *  \return       The value which was read from address.
 *
 *  \context      TASK|ISR2|ERRHOOK|PRETHOOK|POSTTHOOK|STARTHOOK|SHUTHOOK|ALARMHOOK|PROTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-79, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(uint32, OS_CODE) Os_Api_ReadPeripheral32
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address
);


/***********************************************************************************************************************
 *  Os_Api_WritePeripheral8()
 **********************************************************************************************************************/
/*! \brief        OS service osWritePeripheral8().
 *  \details      Write a uint8 value to the given region.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]     PeripheralID      The peripheral region to write to.
 *  \param[in,out] Address           The address of interest.
 *  \param[in]     Value             The value to write to the given address.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-145, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_WritePeripheral8
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint8 Value
);


/***********************************************************************************************************************
 *  Os_Api_WritePeripheral16()
 **********************************************************************************************************************/
/*! \brief        OS service osWritePeripheral16().
 *  \details      Write a uint16 value to the given region.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]     PeripheralID      The peripheral region to write to.
 *  \param[in,out] Address           The address of interest.
 *  \param[in]     Value             The value to write to the given address.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-145, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_WritePeripheral16
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint16 Value
);


/***********************************************************************************************************************
 *  Os_Api_WritePeripheral32()
 **********************************************************************************************************************/
/*! \brief        OS service osWritePeripheral32().
 *  \details      Write a uint32 value to the given region.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]     PeripheralID      The peripheral region to write to.
 *  \param[in,out] Address           The address of interest.
 *  \param[in]     Value             The value to write to the given address.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-145, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_WritePeripheral32
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint32 Value
);


/***********************************************************************************************************************
 *  Os_Api_ModifyPeripheral8()
 **********************************************************************************************************************/
/*! \brief        OS service osModifyPeripheral8().
 *  \details      Set and clear bits at the given address.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]     PeripheralID     The peripheral region to write to.
 *  \param[in,out] Address          The address of interest.
 *  \param[in]     ClearMask        Bits which are 0, are cleared in the target value.
 *  \param[in]     SetMask          Bits which are 1, are set in the target value.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-35, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_ModifyPeripheral8
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint8 ClearMask,
  uint8 SetMask
);


/***********************************************************************************************************************
 *  Os_Api_ModifyPeripheral16()
 **********************************************************************************************************************/
/*! \brief        OS service osModifyPeripheral16().
 *  \details      Set and clear bits at the given address.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]     PeripheralID     The peripheral region to write to.
 *  \param[in,out] Address          The address of interest.
 *  \param[in]     ClearMask        Bits which are 0, are cleared in the target value.
 *  \param[in]     SetMask          Bits which are 1, are set in the target value.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-35, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_ModifyPeripheral16
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint16 ClearMask,
  uint16 SetMask
);


/***********************************************************************************************************************
 *  Os_Api_ModifyPeripheral32()
 **********************************************************************************************************************/
/*! \brief        OS service osModifyPeripheral32().
 *  \details      Set and clear bits at the given address.
 *  In case that one of the following errors occurs, the protection hook is called:
 *   - E_OS_ID           (EXTENDED status:) Invalid PeripheralID.
 *   - E_OS_CALLEVEL     (EXTENDED status:) Called from invalid context.
 *   - E_OS_ACCESS       (Service Protection:) Caller's access rights are not sufficient.
 *
 *  \param[in]     PeripheralID     The peripheral region to write to.
 *  \param[in,out] Address          The address of interest.
 *  \param[in]     ClearMask        Bits which are 0, are cleared in the target value.
 *  \param[in]     SetMask          Bits which are 1, are set in the target value.
 *
 *  \context      TASK|ISR2|ERRHOOK|STARTHOOK|SHUTHOOK
 *
 *  \reentrant    TRUE for different addresses.
 *  \synchronous  TRUE
 *
 *  \pre          Given ID is valid or extended status checks are enabled.
 *  \pre          Given address is valid or extended status checks are enabled.
 *
 *  \trace        CREQ-35, CREQ-40, CREQ-264
 **********************************************************************************************************************/
FUNC(void, OS_CODE) Os_Api_ModifyPeripheral32
(
  Os_PeripheralIdType PeripheralID,
  uint32 Address,
  uint32 ClearMask,
  uint32 SetMask
);

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_19.1 */


# if !defined(OS_VCAST_INSTRUMENTATION_OS_PERIPHERAL)
/*VCAST_DONT_INSTRUMENT_END*/
# endif


#endif /* OS_PERIPHERALINT_H */

/* module specific MISRA deviations:
 */

/*!
 * \}
 */
/***********************************************************************************************************************
 *  END OF FILE: Os_PeripheralInt.h
 **********************************************************************************************************************/
