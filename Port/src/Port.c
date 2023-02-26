/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                       */
/* Module       = Port.c                                                      */
/* $Revision: 426746 $                                                        */
/* $Date: 2017-06-23 18:50:14 +0900 (金, 23 6 2017) $                      */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2017 Renesas Electronics Corporation                   */
/*============================================================================*/
/* Purpose:                                                                   */
/* API function implementations of PORT Driver                                */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Device :        P1x-C                                         */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
  * V1.0.0:  11-Aug-2015   : Initial Version
  * V1.0.1:  17-Feb-2016   : As part of P1x-C V4.01.00 release following
  *                          changes were made:
  *                          1.As per ARDAAAF-349, The API's
  *                          Port_SetToDioOrAltMode and Port_SetPinDefaultMode
  *                          are updated for PIPC availability checking and
  *                          accessing the PIPC register.
  *                          2.Updated the Copyright information
  *                          3.As per ARDAAAF-17, The API
  *                          Port_SetPinMode is modified for  PIPC register
  *                          availability checking and accessing the PIPC
  *                          register.
  *                          4.As per ARDAAAF-352 Port_GetVersionInfo()
  *                          implemented as function.
  *                          5. As per ARDAAAF-329, the critical section,
  *                          SchM_Enter_Port_SET_PIN_MODE_PROTECTION() is
  *                          defined as macro PORT_ENTER_CRITICAL_SECTION
  *                          (PORT_SET_PIN_MODE_PROTECTION).
  *                          6.As per ARDAAAF-493, Null pointer check added for
  *                          LpRegAddr, in Port_SetToDioOrAltMode API.
  *                          7.As per ARDAAAF-481, QAC warnings are fixed.
  *                          8.As per EAAR_PN0084_NR_0111 requirement, constants
  *                          are moved to LHS for equality check.
  *                          9.In Port_SetToDioOrAltMode API, PORT_PUBLIC_CODE
  *                          is updated to PORT_PRIVATE_CODE.
  *                          10. As per ARDAAAF-525, Port_SetPinDefaultMode, and
  *                          Port_SetPinDefaultDirection API's are updated.
  * V1.0.2:  11-Jan-2017   : Following changes were made:
  *                          1.As per ARDAAAF-1364, following changes are made:
  *                          a)The Port_SetPinDirection, Port_SetPinMode,
  *                          Port_SetToDioOrAltMode, Port_InitConfig,
  *                          Port_SetPinDefaultMode, Port_Init, and
  *                          Port_SetPinDefaultDirection APIs are modified for
  *                          software metrics improvement.
  *                          b)Internal functions Port_FuncCtrlRegInit,
  *                          Port_RegSetInit,Port_PinModeDetCheck,
  *                          Port_PinDefModeDetCheck,Port_PinDirectionDetCheck,
  *                          Port_PinModeHWRegSet, Port_PinModeCtrlRegSet,
  *                          Port_PinModeFuncRegSet, Port_PinDefDirDetCheck, and
  *                          Port_PinDefModeFuncRegSet are added for software
  *                          metrics improvement.
  *                          c)The Port_PinsDirChangeable structure's
  *                          member name 'usDirOrMaskVal' is changed to
  *                          'usOrMaskVal'.
  *                          d)The Port_PinModeChangeableDetails, and
  *                          Port_PinDioAltChangeableDetails Structures member
  *                          name 'usModeOrMaskVal' is changed to 'usOrMask'.
  *                          e)DELAY has been added in Port_FilterConfig
  *                          function for DNFAEN register settings.
  *                          f)The macro switch PORT_NUM_PORT_GROUPS_AVAILABLE,
  *                          and PORT_JTAG_PORT_GROUPS_AVAILABLE are added in
  *                          appropriate places.
  *                          g)Null Pointer check added for LpStartPtr in the
  *                          Port_SearchDioAltModePin,
  *                          Port_SearchModeChangeablePin, and
  *                          Port_SearchDirChangeablePin APIs.
  *                          h)File version information changed to numeric value
  *                          from macro.
  *                          2.As per ARDAAAF-1019, following changes are done,
  *                          a)Register write and Register write verification
  *                          method are added as a macro implementation.
  *                          b)Dem.h file included to report the Dem error when
  *                          write verification failed.
  *                          3.As per ARDAAAF-1447, Critical Section Protections
  *                          are added at appropriate places.
  *                          4.As per ARDAAAF-1459,unit design ID, proper
  *                          comments and requirement tags are added at
  *                          applicable places.
  *                          5.As per the ARDAAAF-771, justification added for
  *                          QAC Warnings(2:0862, 2:2824, 2:2814, 2:3892,
  *                          2:3227, 3:3305) and MISRA violations(4:0759,
  *                          4:0303, 4:0306, 4:2962, 4:0488, 4:0489, 4:0310) at
  *                          applicable places.
  *                          6.As per ARDAAAF-962, Function header of
  *                          Port_Init, Port_SetPinMode, Port_SetToDioMode,
  *                          Port_SetToAlternateMode, and Port_SetPinDefaultMode
  *                          API's are updated.
  *                          As per ARDAAAF-1571, The requirement
  *                          EAAR_PN0084_NR_0034 is followed for Local Variables
  *                          naming.
  *                          7.Copyright information is updated.
  * V1.0.3:  24-Apr-2017   : Following changes were made:
  *                          1.As per ARDAAAF-2057,
  *                          PREFIX and INITPOLICY of memory sections are
  *                          changed.
  *                          2.As per ARDAAAF-2251,
  *                          Critical section protection is removed from
  *                          functions:"Port_InitConfig", "Port_FilterConfig",
  *                          "Port_RegSetInit" and "Port_FuncCtrlRegInit".
  *                          3.As per ARDAAAF-2196,
  *                          Description of Port_GetVersionInfo banner is
  *                          updated.
  *                          4.As per ARDAAAF-1939,
  *                          a) The DET OFF switch is added for the Null
  *                          pointer check  of 'LpChangeablePinDet' in the API's
  *                          Port_SetPinDirection,Port_SetPinDefaultDirection
  *                          and  'LpModeChangeablePin' in the API's
  *                          Port_SetPinMode, Port_SetPinDefaultMode,
  *                          Port_PinModeHWRegSet, Port_PinModeCtrlRegSet,
  *                          Port_PinModeFuncRegSet, Port_PinDefModeFuncRegSet.
  *                          b) QAC warnings (2:2814) are justified.
  *                          5.MISRA messages Msg(4:0306)and Msg(4:0303) are
  *                          removed as thses messages are not generated as per
  *                          the personality files.
  * V1.0.4:  16-Jun-2017   : As part of ARDAAAF-2484,following changes are
  *                          made:
  *                          1.Alignment and Spacing updated as per coding
  *                          guidelines.
  *                          2.LucReturnValue is initialized in
  *                          Port_SetPinDirection,Port_SetPinMode,
  *                          Port_SetPinDefaultMode,Port_SetPinDefaultDirection.
  *                          3.LulPortDirectionLucMid, LucDnfaIndex,
  *                          LucNoOfRegs, LucFclaIndex, LucFclaCTLindex
  *                          initialized with PORT_ZERO.
  *                          4.MISRA warning (4:2962) removed.
  *                          5.Lucsize variable name changed to LucSize.
  */
/******************************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* Included for Port.h inclusion and macro definitions */
/*Implements PORT131, EAAR_PN0034_FR_0052, EAAR_PN0034_FR_0065, PORT129*/
/*Implements EAAR_PN0034_NR_0001, EAAR_PN0034_NR_0012, EAAR_PN0034_NR_0018*/
/*Implements EAAR_PN0034_NR_0056, EAAR_PN0034_NR_0069, EAAR_PN0034_NR_0020*/
/*Implements AR_PN0062_FR_0005, AR_PN0062_NR_0004, AR_PN0062_NR_0003*/
/*Implements AR_PN0062_NR_0002, AR_PN0062_NR_0001, EAAR_PN0034_FR_0018*/
/*Implements EAAR_PN0034_FR_0021, EAAR_PN0034_FR_0064, EAAR_PN0034_NR_0007*/
/*Implements PORT207, EAAR_PN0034_NR_0045*/
#include "Port.h"
#include "Port_PBTypes.h"
#include "Port_RegWrite.h"
/*Implements PORT100, PORT107, PORT211, PORT123_Conf, PORT101*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)
/* Included for the declaration of Det_ReportError() */
/*Implements PORT130, PORT131*/
#include "Det.h"
#endif

/*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
/*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
/*Implements PORT_ESDD_UD_005*/
#if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
/* Included for the declaration of the critical section protection functions */

/*Implements PORT130, PORT131, PORT075*/
#include "SchM_Port.h"
#endif
/*Implements PORT204, PORT115*/
/* Included for declaration of the function Dem_ReportErrorStatus() */
/*Implements PORT115, PORT116*/
#include "Dem.h"
/* Included for RAM variable declarations */
#include "Port_Ram.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
/*Implements PORT114, PORT_ESDD_UD_016*/
/* AUTOSAR Release version information */
#define PORT_C_AR_RELEASE_MAJOR_VERSION    PORT_AR_RELEASE_MAJOR_VERSION_VALUE
#define PORT_C_AR_RELEASE_MINOR_VERSION    PORT_AR_RELEASE_MINOR_VERSION_VALUE
#define PORT_C_AR_RELEASE_REVISION_VERSION \
                                       PORT_AR_RELEASE_REVISION_VERSION_VALUE
/* File version information */
#define PORT_C_SW_MAJOR_VERSION    1
#define PORT_C_SW_MINOR_VERSION    0

/*******************************************************************************
**                      Version Check                                         **
*******************************************************************************/
/*Implements PORT114, EAAR_PN0034_FR_0055 */
/*Implements PORT_ESDD_UD_021, PORT_ESDD_UD_022 */
#if (PORT_AR_RELEASE_MAJOR_VERSION != PORT_C_AR_RELEASE_MAJOR_VERSION)
  #error "Port.c : Mismatch in Release Major Version"
#endif

#if (PORT_AR_RELEASE_MINOR_VERSION != PORT_C_AR_RELEASE_MINOR_VERSION)
  #error "Port.c : Mismatch in Release Minor Version"
#endif

#if (PORT_AR_RELEASE_REVISION_VERSION != PORT_C_AR_RELEASE_REVISION_VERSION)
  #error "Port.c : Mismatch in Release Revision Version"
#endif

#if (PORT_SW_MAJOR_VERSION != PORT_C_SW_MAJOR_VERSION)
  #error "Port.c : Mismatch in Software Major Version"
#endif

#if (PORT_SW_MINOR_VERSION != PORT_C_SW_MINOR_VERSION)
  #error "Port.c : Mismatch in Software Minor Version"
#endif
/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

/*Implements EAAR_PN0034_NR_0002, EAAR_PN0034_NR_0026*/
/*******************************************************************************
**                      MISRA C Rule Violations                               **
*******************************************************************************/
/* 1. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0759) An object of union type has been defined.         */
/* Rule          : MISRA-C:2004 Rule 18.4                                     */
/* Justification : Data access of larger data types is used to achieve        */
/*                 better throughput.                                         */
/* Verification  : However, part of the code is verified manually and         */
/*                 it is not having any impact.                               */
/* Reference     : Look for MISRA Violation: START Msg(4:0759)-1 and          */
/*                 MISRA Violation: END Msg(4:0759)-1 tags in the code.       */
/******************************************************************************/
/* 2. MISRA C RULE VIOLATION:                                                 */
/*Message        : (4:0488) Performing Pointer arithmetic.                    */
/*Rule           : MISRA-C:2004 Rule 17.4                                     */
/*Justification  : This is to get the ID in the data structure in the code.   */
/*Verification   : However, part of the code is verified manually             */
/*                 and it is not having any impact.                           */
/*Reference      : Look for MISRA Violation: START Msg(4:0488)-2 and          */
/*                 MISRA Violation: END Msg(4:0488)-2  tags in the code.      */
/******************************************************************************/
/* 3. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0489) The integer value 1 is being added or             */
/*                  subtracted from a pointer.                                */
/* Rule          : MISRA-C:2004 Rule 11.3                                     */
/* Justification : Increment operator is used to achieve better throughput.   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for MISRA Violation: START Msg(4:0489)-3 and          */
/*                 MISRA Violation: END Msg(4:0489)-3 tags in the code.       */
/******************************************************************************/
/* 4. MISRA C RULE VIOLATION:                                                 */
/* Message       : (4:0310) Casting to different object pointer type.         */
/* Rule          : MISRA-C:2004 Rule 11.4                                     */
/* Justification : This is to access the hardware registers in the code.      */
/* Verification  : However, part of the code is verified manually             */
/*                 and it is not having any impact.                           */
/* Reference     : Look for START Msg(4:0310)-4 and                           */
/*                 END Msg(4:0310)-4 tags in the code.                        */
/******************************************************************************/

/*Implements EAAR_PN0034_NR_0060*/
/*******************************************************************************
**                         QAC Warning                                        **
*******************************************************************************/
/* 1. QAC Warning:                                                            */
/* Message       :(2:0862) #include "MemMap.h" directive is redundant.        */
/* Rule          : NA                                                         */
/* Justification : As per requirement [MEMMAP003],the inclusion of the memory */
/*                 mapping header files within the code is a MISRA violation. */
/*                 As neither executable code nor symbols are included        */
/*                 (only pragmas) this violation is an approved exception     */
/*                 without side effects.                                      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/******************************************************************************/
/* 2. QAC Warning:                                                            */
/* Message       : (2:2824) Arithmetic operation on NULL pointer.             */
/* Rule          : NA                                                         */
/* Justification : The Pointers are initialized with values from generated    */
/*                 Post Build files which depends on configurations and       */
/*                 therefore are not NULL pointers.                           */
/* Verification  : The part of the code is verified manually and it is        */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning: START Msg(2:2824)-2 and              */
/*                 QAC Warning: END Msg(2:2824)-2  tags in the code.          */
/******************************************************************************/
/* 3. QAC Warning:                                                            */
/* Message       : (2:2814) Dereference of NULL pointer.                      */
/* Rule          : NA                                                         */
/* Justification : The Pointers are assigned to values generated using        */
/*                 configurations in Post Build files and hence dereferencing */
/*                 of NULL pointer shall never occur.                         */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning: START Msg(2:2814)-3 and              */
/*                 QAC Warning: END Msg(2:2814)-3 tags in the code.           */

/******************************************************************************/
/* 4. QAC Warning:                                                            */
/* Message       : (2:3892) The result of this cast is implicitly converted to*/
/*                 another type.                                              */
/* Rule          : NA                                                         */
/* Justification : This is done to change the behaviour of  the expression    */
/*                 so as to get the correct value(of similar size) assigned   */
/*                 to the RHS.                                                */
/* Verification  : However, this part of the code is verified  manually and   */
/*                 it is not having any impact.                               */
/* Reference     : Look for QAC Warning: START Msg(2:3892)-4 and              */
/*                 QAC Warning: END Msg(2:3892)-4 tags in the code.           */

/******************************************************************************/
/* 5. QAC Warning:                                                            */
/* Message       : (2:3227) The parameter of the function is never            */
/*                 modified and so it could be declared with the 'const'      */
/*                 qualifier.                                                 */
/* Rule          : NA                                                         */
/* Justification : The function parameters of AUTOSAR APIs and Vendor specific*/
/*                 APIs cannot be modified to be made as constant as it would */
/*                 against the requirements                                   */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning: START Msg(2:3227)-5 and              */
/*                 QAC Warning: END Msg(2:3227)-5 tags in the code.           */
/******************************************************************************/
/* 6. QAC Warning:                                                            */
/* Message       : (3:3305) Pointer cast to stricter alignment.               */
/* Rule          : NA                                                         */
/* Justification : This is to access the hardware registers in the code.      */
/* Verification  : However, part of the code is verified manually and it is   */
/*                 not having any impact.                                     */
/* Reference     : Look for QAC Warning: START Msg(3:3305)-6 and              */
/*                 QAC Warning: END Msg(3:3305)-6 tags in the code.           */
/******************************************************************************/

/*******************************************************************************
**                  Function Prototypes                                       **
*******************************************************************************/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

#if ((PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) || \
     (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON))
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_InitConfig
  (CONST(Port_GroupType,AUTOMATIC) LenGroupType);
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_FuncCtrlRegInit
  (CONST(Port_GroupType,AUTOMATIC) LenGroupType);
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_RegSetInit
  (CONST(Port_GroupType,AUTOMATIC) LenGroupType);
#endif

/*Implements PORT_ESDD_UD_023*/
#if ((PORT_DNFA_REG_CONFIG == STD_ON) || (PORT_FCLA_REG_CONFIG == STD_ON))
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_FilterConfig(void);
#endif

/*Implements PORT100, PORT107, PORT211, AR_PN0062_FR_0043, PORT_ESDD_UD_029*/
/*Implements PORT_ESDD_UD_078*/
#if (PORT_SET_PIN_DIRECTION_API == STD_ON) || \
                         (PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON)
STATIC
  FUNC(P2CONST(Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_CONST),
    PORT_PRIVATE_CODE) Port_SearchDirChangeablePin(CONST(Port_PinType,
      AUTOMATIC) LusPinNumber , CONSTP2CONST(Port_PinsDirChangeable, AUTOMATIC,
        PORT_CONFIG_CONST)LpStartPtr, CONST(uint8, AUTOMATIC) LucSize);
#endif

STATIC FUNC (void, PORT_PRIVATE_CODE) Port_RefreshPortInternal
  (CONST(Port_GroupType, AUTOMATIC) LenGroupType);
/*Implements PORT_ESDD_UD_031, PORT_ESDD_UD_109*/
#if ((PORT_SET_PIN_MODE_API == STD_ON) || \
                              (PORT_SET_PIN_DEFAULT_MODE_API == STD_ON))
STATIC
  FUNC(P2CONST(Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST),
    PORT_PRIVATE_CODE) Port_SearchModeChangeablePin(CONST(Port_PinType,
      AUTOMATIC) LusPinNumber, CONSTP2CONST(Port_PinModeChangeableDetails,
        AUTOMATIC, PORT_CONFIG_CONST)LpStartPtr, CONST(uint8, AUTOMATIC)
          LucSize);
#endif

#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)
/*Implements PORT_ESDD_UD_071, PORT_ESDD_UD_109*/
STATIC
  FUNC(P2CONST(Port_PinDioAltChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST),
    PORT_PRIVATE_CODE) Port_SearchDioAltModePin(CONST(Port_PinType, AUTOMATIC)
      LusPinNumber, CONSTP2CONST(Port_PinDioAltChangeableDetails, AUTOMATIC,
        PORT_CONFIG_CONST) LpStartPtr, CONST(uint8, AUTOMATIC) LucSize);

STATIC FUNC (void, PORT_PRIVATE_CODE) Port_SetToDioOrAltMode
  (CONST(Port_PinType, AUTOMATIC) Pin, CONST(boolean,AUTOMATIC) LblDioMode);
#endif

/*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)
#if (PORT_SET_PIN_MODE_API == STD_ON)
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinModeDetCheck
  (CONST(Port_PinType, AUTOMATIC) Pin,
    CONST(Port_PinModeType, AUTOMATIC ) Mode);

#endif /*#if (PORT_SET_PIN_MODE_API == STD_ON)*/
/*Implements AR_PN0062_FR_0043*/
#if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
                     (PORT_SET_PIN_MODE_API == STD_ON))
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinDefModeDetCheck
  (CONST(Port_PinType, AUTOMATIC) Pin);
#endif /*#if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
                     (PORT_SET_PIN_MODE_API == STD_ON))*/
/*Implements PORT_ESDD_UD_029*/
#if ((PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON) && \
                     (PORT_SET_PIN_DIRECTION_API == STD_ON))
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinDefDirDetCheck
  (CONST(Port_PinType, AUTOMATIC) Pin);
#endif  /*#if ((PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON) && \
                     (PORT_SET_PIN_DIRECTION_API == STD_ON))*/
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinDirectionDetCheck
  (CONST(Port_PinType,AUTOMATIC) Pin );
#endif /*#if (PORT_SET_PIN_DIRECTION_API == STD_ON)*/
#endif /*#if (PORT_DEV_ERROR_DETECT == STD_ON)*/


#if (PORT_SET_PIN_MODE_API == STD_ON)
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinModeHWRegSet
  (CONST(Port_PinType, AUTOMATIC) Pin, CONST(Port_PinModeType, AUTOMATIC) Mode);
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinModeCtrlRegSet
  (CONST(Port_PinType, AUTOMATIC) Pin,
    CONST(Port_PinModeType, AUTOMATIC) LucMode);
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinModeFuncRegSet
   (CONST(Port_PinType, AUTOMATIC) Pin,
     CONST(Port_PinModeType, AUTOMATIC) LucMode);
#endif /*#if (PORT_SET_PIN_MODE_API == STD_ON)*/
/*Implements PORT_ESDD_UD_031*/
#if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
                     (PORT_SET_PIN_MODE_API == STD_ON))
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinDefModeFuncRegSet
   (CONST(Port_PinType, AUTOMATIC) Pin);
#endif /* #if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
        * (PORT_SET_PIN_MODE_API == STD_ON))
        */

#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*******************************************************************************
**                  Function Definitions                                      **
*******************************************************************************/
/*Implements PORT005, PORT140, PORT071, AR_PN0062_FR_0044, PORT128_Conf*/
/*Implements PORT129_Conf, PORT130_Conf, EAAR_PN0034_FR_0037*/
/*Implements EAAR_PN0034_FR_0025, EAAR_PN0034_FR_0049, EAAR_PN0034_FR_0063*/
/*******************************************************************************
** Function Name         : Port_Init
**
** Service ID            : 0x00
**
** Description           : This service performs initialization of the PORT
**                         Driver components.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : ConfigPtr
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Port_GblDriverStatus, Port_GpConfigPtr
**
** Functions Invoked     : Det_ReportError, Port_InitConfig, Port_FilterConfig
**
** Registers Used        : PSRn, JPSR0, PMSRn, PMCSRn, PISn, JPIS0, PIBCn,
**                         JPIBC0, PIPCn, PUn, JPU0, PDn, JPD0, PBDCn, JPBDC0,
**                         DNFAnCTL, FCLAnCTLm, DNFAnEN, JPFCE0, JPMCSR0,
**                         JPMSR0, PFCEn, PFCn, PODCn, JPODC0, PODCEn, JPODCE0,
**                         PDSCn, JPDSC0, PUCCn, JPUCC0, PINVn, JPINV0
*******************************************************************************/
/*Implements PORT131 */
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Initialize the Port Driver module */

/*Implements PORT_ESDD_UD_009, PORT_ESDD_UD_002, PORT004, PORT079, PORT081*/
/*Implements PORT001, PORT041, PORT078, PORT042, PORT213, PORT003 */
/*Implements PORT055, PORT073*/
/* QAC Warning: START Msg(2:3227)-5 */
FUNC(void, PORT_PUBLIC_CODE) Port_Init
  (P2CONST (Port_ConfigType, AUTOMATIC, PORT_APPL_CONST) ConfigPtr)
{
  /* QAC Warning: END Msg(2:3227)-5 */
  /* If DET is enabled, the API parameter checking shall be performed according
   * to the respective functions
   */
  /*Implements PORT_ESDD_UD_106*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /*Implements PORT077, PORT105, PORT121*/
  /* Report to DET, if the config pointer value is NULL */
  if (NULL_PTR == ConfigPtr)
  {
    /*Implements  PORT087,PORT146 */
    /* Report to DET */
    (void) Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
      PORT_E_PARAM_CONFIG);
  } /* End of ConfigPtr == NULL_PTR */
  else
  #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
  {
    /* QAC Warning: START Msg(2:2814)-3 */
    if (PORT_DBTOC_VALUE == ConfigPtr->ulStartOfDbToc)
    /* QAC Warning: END Msg(2:2814)-3 */
    {
      /* Assign the config pointer value to global pointer */
      /* Implements PORT_ESDD_UD_073 */
      Port_GpConfigPtr = ConfigPtr;
      /*Implements PORT_ESDD_UD_023*/
      #if ((PORT_DNFA_REG_CONFIG == STD_ON) || (PORT_FCLA_REG_CONFIG == STD_ON))
      /* Invoking Port_FilterConfig() for configuration of filter registers */
      /* Implements PORT043 */
      Port_FilterConfig ();
      #endif /* End of (PORT_DNFA_REG_CONFIG == STD_ON) ||
              * (PORT_FCLA_REG_CONFIG == STD_ON)
              */
      /* Check for available Port Group Type(Numeric Port) */
      /* Implements PORT_ESDD_UD_102 */
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      /* Invoking Port_InitConfig() API with Numeric Port Group data */
      Port_InitConfig (PORT_GROUP_NUMERIC);
      #endif /* End of PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON */
      /* Check for available Port Group Type(JTag Port) */
      /* Implements PORT_ESDD_UD_088 */
      /* Implements AR_PN0062_FR_0023 */
      #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)

      /* Invoking Port_InitConfig() API with JTag Port Group data */
      Port_InitConfig (PORT_GROUP_JTAG);
      #endif /* End of PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON */
      /* If DET is enabled, the API parameter checking shall be performed
       * according to the respective functions
       */
      /* Implements PORT_ESDD_UD_106 */
      #if (PORT_DEV_ERROR_DETECT == STD_ON)
      /* Set the Port status to initialized */
      Port_GblDriverStatus = PORT_INITIALIZED;
      #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
    }/* End of if loop (PORT_DBTOC_VALUE == ConfigPtr->ulStartOfDbToc) */
     /* If there is no valid database is present */
    else
    {
      /* If DET is enabled, the API parameter checking shall be performed
       * according to the respective functions
       */
      /* Implements PORT_ESDD_UD_106 */
      /* Implements PORT100, PORT107, PORT211, PORT123_Conf */
      #if (PORT_DEV_ERROR_DETECT == STD_ON)
      /* Implements PORT038, PORT077, PORT146, AR_PN0062_FR_0008 */
      /* Report to DET */
      (void) Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
        PORT_E_INVALID_DATABASE);
      #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
    }
  }
} /* End of API Port_Init */
/*Implements PORT131, PORT137, PORT138*/
#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*Implements PORT141, PORT054, PORT063, PORT131_Conf, AR_PN0062_FR_0041*/
/*Implements PORT125_Conf, PORT126_Conf, PORT134_Conf, AR_PN0062_FR_0048*/
/*Implements EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049, AR_PN0062_FR_0004*/
/*Implements AR_PN0062_FR_0006, AR_PN0062_FR_0021*/
/*******************************************************************************
** Function Name         : Port_SetPinDirection
**
** Service ID            : 0x01
**
** Description           : This service sets the port pin direction during
**                         runtime.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number,
**                         Direction - Port Pin Direction
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be  initialized by calling Port_Init().
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : SchM_Enter_Port_PORT_SET_PIN_DIR_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_PIN_DIR_PROTECTION,
**                         Port_SearchDirChangeablePin,
**                         Port_PinDirectionDetCheck,
**                         Dem_ReportErrorStatus
**
** Registers Used        : PSRn,JPSR0,PMSRn,PINVn,JPMSR0
*******************************************************************************/
/* The function Port_SetPinDirection shall be available if the pre-compile
 * parameter PortSetPinDirectionApi is set to TRUE
 */
/*Implements PORT086*/
/*Implements PORT_ESDD_UD_082*/
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)

/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_087, PORT_ESDD_UD_078, PORT_ESDD_UD_110*/

/* QAC Warning: START Msg(2:3227)-5 */
FUNC (void, PORT_PUBLIC_CODE) Port_SetPinDirection
  (Port_PinType Pin, Port_PinDirectionType Direction)
{
  /* QAC Warning: END Msg(2:3227)-5 */
  P2CONST(volatile Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_CONST)
                                                           LpChangeablePinDet;
  /*Implements PORT_ESDD_UD_014*/
  #if (PORT_PINV_REG_AVAILABLE == STD_ON)
  P2VAR(volatile uint16, AUTOMATIC, PORT_CONFIG_DATA) Lp16BitRegAddress;
  #endif /* End of PORT_PINV_REG_AVAILABLE == STD_ON */
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_DATA) LpPMSRRegAddress;
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_DATA) LpPSRRegAddress;
  /* MISRA Violation: START Msg(4:0759)-1 */
  Port_Pin_Direction LunSRRegContent;
  /* MISRA Violation: END Msg(4:0759)-1 */
  uint16 LusCurrentDirection;
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  Std_ReturnType LucReturnValue;
  #endif
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucPortIdx;
  LucPortIdx = PORT_ZERO;
  #endif

  /* If DET is enabled, the API parameter checking shall be performed
   * according to the respective functions */
  /*Implements PORT_ESDD_UD_106*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /* Initialize the return value */
  LucReturnValue = E_OK;
  LucReturnValue = Port_PinDirectionDetCheck(Pin);
  if (E_OK == LucReturnValue)
  #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
  {
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Check whether the Pin direction is changeable at run time */
    LpChangeablePinDet = Port_SearchDirChangeablePin (Pin,
      Port_GpConfigPtr->pPinDirChangeable,
        Port_GpConfigPtr->ucNoOfPinsDirChangeable);
    /* QAC Warning: END Msg(2:2814)-3 */
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    if (NULL_PTR != LpChangeablePinDet)
    #endif
    {
      /* Get the base address of the corresponding Port Type */
      /*Implements PORT_ESDD_UD_088*/
      /*Implements PORT_ESDD_UD_102*/
      /*Implements AR_PN0062_FR_0023*/
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      /* QAC Warning: START Msg(2:2814)-3 */
      if (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType)
      /* QAC Warning: END Msg(2:2814)-3 */
      {
        /* Get the index of Numeric Port */
        LucPortIdx = LpChangeablePinDet->ucPortIndex;
        /*Get the current direction*/
        LusCurrentDirection = (uint16) (*((volatile uint32*)
          (&(Port_HardwareReg[LucPortIdx]->ulPMSR))));
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* QAC Warning: START Msg(2:2814)-3 */
        /*Get the current direction*/
        LusCurrentDirection = (uint16) (*((volatile uint32*)
          (&(JPort_HardwareReg->ulPMSR))));
        /* QAC Warning: END Msg(2:2814)-3 */
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }
      /* Set the bit position in the upper 16 bits (31-16) of the PSR or PMSR
       * variable to 1 of the configured pin whose Direction has to be changed
       */
      LunSRRegContent.Tst_Port_Word.usMSWord = LpChangeablePinDet->usOrMaskVal;
      /*Check if requested direction is OUTPUT and current direction is INPUT*/
      if ((PORT_PIN_OUT == Direction) &&
        ((LusCurrentDirection & LpChangeablePinDet->usOrMaskVal) ==
          LpChangeablePinDet->usOrMaskVal))
      {
        /*Implements PORT082, AR_PN0062_FR_0048*/
        /* AUTOSAR IMPL R4.0.3, PORT082 RULE VIOLATION: As per
         * requirement AR_PN0062_FR_0048 Level inversion is implemented to
         * invert the output level of a pin when the pin is in output mode
         */
        /*Implements PORT_ESDD_UD_014*/
        #if (PORT_PINV_REG_AVAILABLE == STD_ON)
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
        if (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType)
        {
          /* Get the register Base address */
          /*Implements PORT_ESDD_UD_019*/
          Lp16BitRegAddress = (volatile uint16*)
            (&(Port_HardwareReg[LucPortIdx]->usPINV));
        }
        else
        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
        {
          #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
          /* Get the register Base address */
          /* Implements PORT_ESDD_UD_019*/
          /* QAC Warning: START Msg(3:3305)-6 */
          /* MISRA Violation: START Msg(4:0310)-4 */
          Lp16BitRegAddress = (volatile uint16*)(&(JPort_HardwareReg->usPINV));
          /* MISRA Violation: END Msg(4:0310)-4 */
          /* QAC Warning: END Msg(3:3305)-6 */
          #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
        }
        /* Check if pin level inversion is supported for port group */
        /* QAC Warning: START Msg(2:2814)-3 */
        if ((PORT_INV_NOT_CFG != *Lp16BitRegAddress) &&
          ((LpChangeablePinDet->usPortinversionVal) != PORT_INV_NOT_CFG))
        {
          /* QAC Warning: END Msg(2:2814)-3 */
          /* An atomic access to Microcontroller registers by the use of an
           * exclusive area
           */
          /*Implements PORT075*/
          /* Enter critical section */
          /*Implements PORT_ESDD_UD_005*/
          /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
          /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
          #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
          PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DIR_PROTECTION);
          #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
          /* Write the register value to the corresponding register */
          PORT_WRITE_REG_ONLY(Lp16BitRegAddress, (*Lp16BitRegAddress |
            LpChangeablePinDet->usPortinversionVal))
          /*Write verify check on PINV register*/
          PORT_CHECK_WRITE_VERIFY_RUNTIME((Lp16BitRegAddress),
            (LpChangeablePinDet->usPortinversionVal),
            (LpChangeablePinDet->usOrMaskVal), PORT_SET_PIN_DIR_SID)
          /* Exit critical section */
          /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
          /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
          #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
          PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DIR_PROTECTION);
          #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        }
        else
        {
          /* No action required */

        }/* End of ((PORT_INV_NOT_CFG != *Lp16BitRegAddress ) &&
           ((LpChangeablePinDet->usPortinversionVal) != PORT_INV_NOT_CFG)) */

        #endif /* End of PORT_PINV_REG_AVAILABLE == STD_ON */
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
        if (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType)
        {
          /* Write the PSR Address into the register */
          /*Implements AR_PN0062_FR_0026*/
          /*Implements PORT_ESDD_UD_017*/
          LpPSRRegAddress = (volatile uint32*)
            (&(Port_HardwareReg[LucPortIdx]->ulPSR));

          /* Write the PMSR Address into the register */
          /*Implements AR_PN0062_FR_0026*/
          /*Implements PORT_ESDD_UD_017*/
          LpPMSRRegAddress = (volatile uint32*)
            (&(Port_HardwareReg[LucPortIdx]->ulPMSR));
        }
        else
        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
        {
          #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
          /* Write the JPSR Address into the register */
          /*Implements PORT_ESDD_UD_019*/
          LpPSRRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPSR));

          /* Write the JPMSR Address into the register */
          /*Implements PORT_ESDD_UD_019*/
          LpPMSRRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPMSR));
          #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */

        }
        /*Implements PORT138*/
        /* Write the Lower word contents with configured Pin Level Value */
        LunSRRegContent.Tst_Port_Word.usLSWord =
          LpChangeablePinDet->usChangeableConfigVal;

        /* An atomic access to Microcontroller registers by the use of an
         * exclusive area
         */
        /* Enter critical section */
        /*Implements PORT_ESDD_UD_005*/
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DIR_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        /* Bit value of Upper 16 bits (31-16) of PSR register is set to 1
         * Bit value of Lower 16 bits (15-0) of PSR register = Configured
         * value for the corresponding pin position */
        /* QAC Warning: START Msg(2:2814)-3 */
        PORT_WRITE_REG_ONLY(LpPSRRegAddress, LunSRRegContent.ulRegContent)
        /* QAC Warning: END Msg(2:2814)-3 */
        /* Write verify check on PSR register */
        /* QAC Warning: START Msg(2:3892)-4 */
        PORT_CHECK_WRITE_VERIFY_RUNTIME(LpPSRRegAddress,
          (LunSRRegContent.ulRegContent &
            (uint32)LpChangeablePinDet->usChangeableConfigVal),
              (LunSRRegContent.ulRegContent >> PORT_SIXTEEN),
                PORT_SET_PIN_DIR_SID)
        /* QAC Warning: END Msg(2:3892)-4 */
        /*Write the Lower word contents with Set the requested direction */
        LunSRRegContent.Tst_Port_Word.usLSWord =
          (uint16)(~((uint32)(LpChangeablePinDet->usOrMaskVal)));
        /* Bit value of Upper 16 bits (31-16) of PMSR register is set to 1
         * Bit value of Lower 16 bits (15-0) of PMSR register = Configured
         * value for the corresponding pin position */
        /* QAC Warning: START Msg(2:2814)-3 */
        PORT_WRITE_REG_ONLY(LpPMSRRegAddress, LunSRRegContent.ulRegContent)
        /* QAC Warning: END Msg(2:2814)-3 */
        /*Write verify check on PMSR register*/
        /* QAC Warning: START Msg(2:3892)-4 */
        PORT_CHECK_WRITE_VERIFY_RUNTIME(LpPMSRRegAddress,
          (LunSRRegContent.ulRegContent &
            (uint32)LpChangeablePinDet->usOrMaskVal),
              (LunSRRegContent.ulRegContent >> PORT_SIXTEEN),
                PORT_SET_PIN_DIR_SID)
        /* QAC Warning: END Msg(2:3892)-4 */
        /* Exit critical section */
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DIR_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
      } /* End of direction is OUTPUT and current direction is INPUT*/
      /* Requested direction is INPUT  */
      else if (PORT_PIN_IN == Direction)
      {
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
        if (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType)
        {
          /*Implements AR_PN0062_FR_0026*/
          /*Implements PORT_ESDD_UD_017*/
          LpPMSRRegAddress = (volatile uint32*)
            (&(Port_HardwareReg[LucPortIdx]->ulPMSR));
        }
        else
        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
        {
          #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
          /*Implements PORT_ESDD_UD_019*/
          LpPMSRRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPMSR));
          #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
        }
        /* Requested direction is INPUT */
        LunSRRegContent.Tst_Port_Word.usLSWord =
          LpChangeablePinDet->usOrMaskVal;
        /* An atomic access to Microcontroller registers by the use of an
         * exclusive area
         */
        /* Enter critical section */
        /*Implements PORT_ESDD_UD_005*/
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DIR_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        /* Bit value of Upper 16 bits (31-16) of PMSR register is set to 1
         * Bit value of Lower 16 bits (15-0) of PMSR register = Configured
         * value for the corresponding pin position */
        PORT_WRITE_REG_ONLY(LpPMSRRegAddress, LunSRRegContent.ulRegContent)
        /*Write verify check on PMSR register*/
        /* QAC Warning: START Msg(2:3892)-4 */
        PORT_CHECK_WRITE_VERIFY_RUNTIME(LpPMSRRegAddress,
          (LunSRRegContent.ulRegContent
            & (uint32)(LpChangeablePinDet->usOrMaskVal)),
              (LunSRRegContent.ulRegContent >> PORT_SIXTEEN),
                PORT_SET_PIN_DIR_SID)
        /* QAC Warning: END Msg(2:3892)-4 */
        /* Exit critical section */
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DIR_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
      } /*End of if loop (PORT_PIN_IN == Direction)*/
      else
      {
        /* No action required */
      }
    } /* End of NULL_PTR != LpChangeablePinDet */
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    else
    {
      /* No action required */
    }
    #endif
  } /* End of E_OK == LucReturnValue */

  /*Implements PORT_ESDD_UD_106*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif /* End of (PORT_DEV_ERROR_DETECT == STD_ON) */
} /* End of API Port_SetPinDirection */

#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* End of PORT_SET_PIN_DIRECTION_API == STD_ON */
/*Implements PORT066, PORT142, EAAR_PN0034_FR_0049*/
/*******************************************************************************
** Function Name         : Port_RefreshPortDirection
**
** Service ID            : 0x02
**
** Description           : This service shall refresh the direction of all
**                         configured ports to the configured direction.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**
** Global Variables Used : Port_GblDriverStatus
**
** Functions Invoked     : Det_ReportError, Port_RefreshPortInternal.
**
** Registers Used        : PMSRn, JPMSR0
*******************************************************************************/
/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*Implements PORT060, PORT_ESDD_UD_010*/
/*Implements PORT061*/
FUNC (void, PORT_PUBLIC_CODE) Port_RefreshPortDirection (void)
{
  /* If DET is enabled, the API parameter checking shall be performed
   * according to the respective functions */

  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  /*Implements PORT_ESDD_UD_106*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /*Implements PORT077*/
  /* Check whether the PORT module is initialized */
  /*Implements PORT087*/
  if (PORT_UNINITIALIZED == Port_GblDriverStatus)
  {
    /*Implements PORT146*/
    /* Report to DET  */
    (void) Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_REFRESH_PORT_DIR_SID, PORT_E_UNINIT);
  } /* Port_GblDriverStatus == PORT_UNINITIALIZED */
  else
  #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
  {
    /*Implements PORT_ESDD_UD_102*/
    #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
    {
      /* Invoking Port_RefreshPortInternal API with Numeric Group data */
      Port_RefreshPortInternal (PORT_GROUP_NUMERIC);
    }
    #endif/* End of PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON */
    /*Implements AR_PN0062_FR_0023*/
    /*Implements PORT_ESDD_UD_088*/
    #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
    {
      /* Invoking Port_RefreshPortInternal API with Jtag Group data */
      Port_RefreshPortInternal (PORT_GROUP_JTAG);
    }
    #endif/* End of PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON */
  }
} /* End of API Port_RefreshPortDirection */

#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

/*Implements PORT145, AR_PN0062_FR_0041, PORT132_Conf, EAAR_PN0034_FR_0049*/
/*Implements AR_PN0062_FR_0002, AR_PN0062_FR_0013, AR_PN0062_FR_0036, PORT128*/
/*******************************************************************************
** Function Name         : Port_SetPinMode
**
** Service ID            : 0x04
**
** Description           : This function used to set the mode of a port pin
**                         during runtime.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number,
**                         Mode - New mode to be set on port pin
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Port_PinModeHWRegSet,
**                         SchM_Enter_Port_PORT_SET_PIN_MODE_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_PIN_MODE_PROTECTION,
**                         Port_PinModeDetCheck,
**                         Dem_ReportErrorStatus,
**                         Port_SearchModeChangeablePin
**
** Registers Used        : PIPCn, PMSRn, PMCSRn, PSRn, JPMSR0, JPMCSR0, JPSR0,
**                         PFCEn, PFCn, JPFCE0
*******************************************************************************/
/* Implements PORT_ESDD_UD_008 */
#if (PORT_SET_PIN_MODE_API == STD_ON)

/* Implements PORT131, PORT125 */
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/* Implements PORT_ESDD_UD_012, PORT_ESDD_UD_109, PORT_ESDD_UD_111 */
/* Implements PORT125*/
/* QAC Warning: START Msg(2:3227)-5 */
/* The type Port_PinModeType used with the function call Port_SetPinMode */
FUNC (void, PORT_PUBLIC_CODE) Port_SetPinMode
  (Port_PinType Pin, Port_PinModeType Mode)
/* QAC Warning: END Msg(2:3227)-5 */
{
  /* Implements PORT_ESDD_UD_079 */
  /* Pointer to mode changeable pin data structure */
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpModeChangeablePin;
  /* Pointer to Alternate mode data structure */
  P2CONST (Port_PinModeChangeableGroups, AUTOMATIC, PORT_CONFIG_CONST)
    LpSetPinModeGroupStruct;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  /* Pointer to hold the register address 16 bit value */
  P2VAR (volatile uint16, AUTOMATIC, PORT_CONFIG_CONST)Lp16BitRegAddr;
  uint8 LucSetPinModeGroupStructIdx;
  uint16 LusRegMaskVal;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  /* Implements PORT_ESDD_UD_106 */
  /* Implements PORT100, PORT107, PORT211, PORT123_Conf */
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  /*If DET is enabled, the API parameter checking shall be performed
   * according to the respective functions
  */
  /* Initialize the return value */
  LucReturnValue = E_OK;
  LucReturnValue = Port_PinModeDetCheck(Pin, Mode);
  if (E_OK == LucReturnValue)
  #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
  {
    /* Check whether the Pin is mode changeable at run time */
    /* QAC Warning: START Msg(2:2814)-3*/
    LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
      Port_GpConfigPtr->pPinModeChangeableDetails,
        Port_GpConfigPtr->ucNoOfPinsModeChangeable);
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    /* QAC Warning: END Msg(2:2814)-3*/
    /* Check if the LpModeChangeablePin points to NULL POINTER */
    if (NULL_PTR != LpModeChangeablePin)
    #endif
    {
      /* MISRA Violation: START Msg(4:0488)-2 */
      /* QAC Warning: START Msg(2:2814)-3 */
      /* Get the pointer to the Set Mode group list */
      LpSetPinModeGroupStruct = ((Port_GpConfigPtr->pPinModeChangeableGroups) +
        (LpModeChangeablePin->ucSetModeIndex));
      /* QAC Warning: END Msg(2:2814)-3 */
      /* MISRA Violation: END Msg(4:0488)-2 */
      /* Write PIPC register.Check for PIPC register availability */
      /* QAC Warning: START Msg(2:2814)-3*/
      if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPIPCRegIndex)
      {
        /* QAC Warning: END Msg(2:2814)-3*/
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)

        LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPIPCRegIndex;
        /* Get the PIPC register Address */
        /*Implements PORT_ESDD_UD_067*/
        Lp16BitRegAddr = (volatile uint16*)
          (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->usPIPC));
        /* An atomic access to Microcontroller registers by the use of an
         * exclusive area
        */
        /* Enter critical section */
        /* Implements PORT_ESDD_UD_005*/
        /* Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030 */
        /* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066 */
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        if (SET_PIPC_MIN_MODE <= Mode)
        {
          /* QAC Warning: START Msg(2:2814)-3*/
          LusRegMaskVal = ((*Lp16BitRegAddr) |
            ((uint16)LpModeChangeablePin->usOrMask));
          /* QAC Warning: END Msg(2:2814)-3*/
          /* If bit needs to be set, OR the register contents
           * with usOrMask
          */
          PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)
          /*Write verify check on PIPC register*/
          PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
            PORT_SET_WORD, PORT_SET_PIN_MODE_SID)
          Mode = Mode & PORT_MODE_MASK;
        }
        else
        {
          LusRegMaskVal = ((*Lp16BitRegAddr) &
            ((uint16)(~LpModeChangeablePin->usOrMask)));
          /* If bit needs to be reset, AND  with inverted usOrMask */
          PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)

          /*Write verify check on PIPC register*/
          PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
            PORT_SET_WORD, PORT_SET_PIN_MODE_SID)
        }
        /* Exit critical section */
        /* Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030 */
        /* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066 */
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      } /* End of if loop (PORT_REG_NOTAVAILABLE !=
         * LpSetPinModeGroupStruct->ucPIPCRegIndex)
        */
      else
      {
        /* No action required */
      }
      /* To change the PMSR,PMCSR,PSR and Function control register setting */
      Port_PinModeHWRegSet(Pin, Mode);
    } /* End of (NULL_PTR != LpModeChangeablePin) */
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    else
    {
      /* No action required */
    }
    #endif
  } /* End of E_OK == LucReturnValue */
  /* Implements PORT_ESDD_UD_106 */
  /* Implements PORT100, PORT107, PORT211, PORT123_Conf */
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif
} /* End of API Port_SetPinMode */

#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* PORT_SET_PIN_MODE_API == STD_ON */

/*Implements AR_PN0062_FR_0043, EAAR_PN0034_FR_0049, AR_PN0062_FR_0038*/
/*Implements AR_PN0062_FR_0068*/
/*******************************************************************************
** Function Name         : Port_SetToDioMode
**
** Service ID            : 0x05
**
** Description           : This function used to set the mode of a port pin
**                         to DIO mode during runtime.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**
** Global Variables Used : Port_GblDriverStatus
**
** Functions Invoked     : Det_ReportError, Port_SetToDioOrAltMode
**
** Registers Used        : PMCSRn, PIPCn, JPMCSR0
*******************************************************************************/

/*Implements PORT_ESDD_UD_047*/
#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)

/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/* QAC Warning: START Msg(2:3227)-5 */
FUNC (void, PORT_PUBLIC_CODE) Port_SetToDioMode (Port_PinType Pin)
/* QAC Warning: END Msg(2:3227)-5 */
{
  /*Implements PORT_ESDD_UD_106, PORT_ESDD_UD_007*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  /* Initialize the return value */
  LucReturnValue = E_OK;
  /* Check whether the PORT module is initialized */
  if (PORT_UNINITIALIZED == Port_GblDriverStatus)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_TO_DIO_MODE_SID, PORT_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* Port_GblDriverStatus == PORT_UNINITIALIZED */
  else
  {
    /* No action required */
  }
  /* Check whether the requested PIN number is invalid */
  /*Implements PORT_ESDD_UD_081*/
  if (PORT_TOTAL_NUMBER_OF_PINS <= Pin)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_TO_DIO_MODE_SID, PORT_E_PARAM_PIN);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* End of PORT_TOTAL_NUMBER_OF_PINS <= Pin */
  else
  {
    /* No action required */
  }
  if (E_OK == LucReturnValue)
  #endif /* #if (PORT_DEV_ERROR_DETECT == STD_ON ) */
  {
    /* Invoke the internal function to set the requested pin to DIO mode */
    Port_SetToDioOrAltMode(Pin, PORT_TRUE);
  }

  /*Implements PORT_ESDD_UD_106*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif /* #if (PORT_DEV_ERROR_DETECT == STD_ON ) */
} /* End of API Port_SetToDioMode */

#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* PORT_SET_TO_DIO_ALT_MODE_API == STD_ON  */

/*Implements EAAR_PN0034_FR_0049, AR_PN0062_FR_0039, AR_PN0062_FR_0067*/
/*******************************************************************************
** Function Name         : Port_SetToAlternateMode
**
** Service ID            : 0x06
**
** Description           : This function used to set the mode of a port pin
**                         to alternate mode during runtime.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**
** Global Variables Used : Port_GblDriverStatus
**
** Functions Invoked     : Det_ReportError, Port_SetToDioOrAltMode
**
** Registers Used        : PMCSRn, PIPCn, JPMCSR0
*******************************************************************************/
/*Implements PORT_ESDD_UD_047*/
#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)

/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_006*/
/* QAC Warning: START Msg(2:3227)-5 */
FUNC (void, PORT_PUBLIC_CODE) Port_SetToAlternateMode (Port_PinType Pin)
/* QAC Warning: END Msg(2:3227)-5 */
{
  /* If DET is enabled, the API parameter checking shall be performed according
   * to the respective functions
  */
  /*Implements PORT_ESDD_UD_106*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON )
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  /* Initialize the return value */
  LucReturnValue = E_OK;
  /*Implements PORT077*/
  /* Check whether the PORT module is initialized */
  if (PORT_UNINITIALIZED == Port_GblDriverStatus)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_TO_ALT_MODE_SID, PORT_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* Port_GblDriverStatus == PORT_UNINITIALIZED */
  else
  {
    /* No action required */
  }
  /* Check whether the requested PIN number is invalid */
  /*Implements PORT_ESDD_UD_081*/
  if (PORT_TOTAL_NUMBER_OF_PINS <= Pin)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_TO_ALT_MODE_SID, PORT_E_PARAM_PIN);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* End of PORT_TOTAL_NUMBER_OF_PINS <= Pin */
  else
  {
    /* No action required */
  }
  if (E_OK == LucReturnValue)
  #endif /* #if (PORT_DEV_ERROR_DETECT == STD_ON ) */
  {
    /*
     * Invoke the internal function to set the requested pin to alternate
     * mode.
     */
    Port_SetToDioOrAltMode(Pin, PORT_FALSE);
  }
  /*Implements PORT_ESDD_UD_106*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON )
  else
  {
    /* No action required */
  }
  #endif /* #if (PORT_DEV_ERROR_DETECT == STD_ON ) */
} /* End of API Port_SetToAlternateMode */

#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* PORT_SET_TO_DIO_ALT_MODE_API == STD_ON  */

/*Implements EAAR_PN0034_FR_0049, AR_PN0062_FR_0004, AR_PN0062_FR_0013*/
/*Implements AR_PN0062_FR_0069*/
/*******************************************************************************
** Function Name         : Port_SetToDioOrAltMode
**
** Service ID            : NA
**
** Description           : This function used to set the mode of a port pin
**                         during runtime to either DIO or Alternate mode.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number, boolean - Mode
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Det_ReportError,Dem_ReportErrorStatus,
**                         SchM_Enter_Port_PORT_SET_TO_DIO_ALT_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_TO_DIO_ALT_PROTECTION,
**                         Port_SearchDioAltModePin
**
** Registers Used        : PMCSRn, PIPCn, JPMCSR0
*******************************************************************************/
/*Implements PORT_ESDD_UD_047, EAAR_PN0034_FR_0049*/
#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)

/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_083, PORT_ESDD_UD_072*/
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_SetToDioOrAltMode
  (CONST(Port_PinType, AUTOMATIC) Pin, CONST(boolean,AUTOMATIC) LblDioMode)
{
  P2CONST (Port_PinDioAltChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpSetPinDioAltMode;
  /* Pointer to hold the register address of 32 bit value */
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_CONST)LpRegAddr;
  /* Pointer to Port Registers Data structure */
  /*Implements PORT_ESDD_UD_075*/
  P2CONST (volatile Port_Regs, AUTOMATIC, PORT_CONFIG_CONST) LpPortReg;
  /* Implements PORT_ESDD_UD_089 */
  /* MISRA Violation: START Msg(4:0759)-1 */
  Port_Pin_DioOrAltMode LunSRRegContent = {PORT_LONG_WORD_ZERO};
  /* MISRA Violation: END Msg(4:0759)-1 */
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON )
  /* Pointer to hold the register address 16 bit value */
  P2VAR (volatile uint16, AUTOMATIC, PORT_CONFIG_CONST)Lp16BitRegAddr;
  uint8 LucPortGroupIndex;
  uint16 LusRegMaskVal;
  LucPortGroupIndex = PORT_ZERO;
  #endif
  /* Check whether the Pin Dio or Alternate mode changeable at run time */
  /* QAC Warning: START Msg(2:2814)-3 */
  LpSetPinDioAltMode = Port_SearchDioAltModePin (Pin,
    Port_GpConfigPtr->pPinDioAltModeDetails,
      Port_GpConfigPtr->ucNoOfPinsDioAltModeChangeable);
  /* QAC Warning: END Msg(2:2814)-3 */
  if (NULL_PTR != LpSetPinDioAltMode)
  {
    /*Implements PORT_ESDD_UD_088*/
    /*Implements PORT_ESDD_UD_102*/
    /*Implements AR_PN0062_FR_0023*/
    #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
    if (PORT_GROUP_NUMERIC == LpSetPinDioAltMode->enPortType)
    {
      /* Get the pointer to the Numeric Port registers */
       LpPortReg = Port_GpConfigPtr->pPortNumRegs;
      /*
       * Search for the Pin and get the index in the array
       * Port_GstSetDioAltPinDetails[]
       */
      LucPortGroupIndex = LpSetPinDioAltMode->ucPortGroupIndex;
      /* Get the PMCSR register address */
      /*Implements AR_PN0062_FR_0026*/
      /*Implements PORT_ESDD_UD_017*/
      LpRegAddr = (volatile uint32*)
        (&(Port_HardwareReg[LucPortGroupIndex]->ulPMCSR));
    } /* End of PORT_GROUP_NUMERIC == LpSetPinDioAltMode->enPortType */
    else
    #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
    {
      #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
      /* Get the pointer to the JTag Port registers */
      LpPortReg = Port_GpConfigPtr->pPortJRegs;
      /* Get the PMCSR register address */
      /*Implements PORT_ESDD_UD_019*/
      /* QAC Warning: START Msg(2:2814)-3 */
      LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPMCSR));
      /* QAC Warning: END Msg(2:2814)-3 */
      #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
    }
    /* Set the bit position in the upper 16 bits (31-16) of the PMCSR
     * variable to 1 of the configured pin whose Mode has to be changed */
    LunSRRegContent.Tst_Port_Word.usMSWord = LpSetPinDioAltMode->usOrMask;
    /* Write the requested direction into Lower word of PMCSR variable
    *  by using OR mask   */
    if (PORT_TRUE == LblDioMode)
    {
      LunSRRegContent.Tst_Port_Word.usLSWord =
        (uint16)~((uint32)LpSetPinDioAltMode->usOrMask);
    }
    else
    {
      LunSRRegContent.Tst_Port_Word.usLSWord = LpSetPinDioAltMode->usOrMask;
    }
    /* Enter critical section */
    /*Implements PORT_ESDD_UD_005*/
    /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
    /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
    #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
    PORT_ENTER_CRITICAL_SECTION(PORT_SET_TO_DIO_ALT_PROTECTION);
    #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
    /* Write the corresponding 32 bit value to the PMCSR register */
    /* QAC Warning: START Msg(2:2814)-3 */
    PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)
    /* QAC Warning: END Msg(2:2814)-3 */
    /*Write verify check on PMCSR register*/
    if (PORT_TRUE == LblDioMode)
    {
      /* QAC Warning: START Msg(2:3892)-4 */
      /*Write verify check on PMCSR register*/
      PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr,
        (LunSRRegContent.ulRegContent &
          LpSetPinDioAltMode->usOrMask), (LunSRRegContent.ulRegContent >>
            PORT_SIXTEEN), PORT_SET_TO_DIO_MODE_SID)
      /* QAC Warning: END Msg(2:3892)-4 */
    }
    else
    {
      /* QAC Warning: START Msg(2:3892)-4 */
      /*Write verify check on PMCSR register*/
      PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr,
        (LunSRRegContent.ulRegContent &
          LpSetPinDioAltMode->usOrMask), (LunSRRegContent.ulRegContent >>
            PORT_SIXTEEN), PORT_SET_TO_ALT_MODE_SID)
      /* QAC Warning: END Msg(2:3892)-4 */
    }
    /* Write PIPC register.Check for PIPC register availability */
    if (PORT_REG_NOTAVAILABLE != LpSetPinDioAltMode->ucPortPIPCIndex )
    {
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      /* Get the PIPC register address */
      /*Implements AR_PN0062_FR_0026*/
      /*Implements PORT_ESDD_UD_017*/
      /*Implements PORT_ESDD_UD_067*/
      Lp16BitRegAddr = (volatile uint16*)
        (&(Port_HardwareReg[LucPortGroupIndex]->usPIPC));
      if (PORT_TRUE == LblDioMode)
      {
        /* QAC Warning: START Msg(2:2814)-3 */
        LusRegMaskVal = ((*Lp16BitRegAddr) &
          ((uint16)(~LpSetPinDioAltMode->usOrMask)));
        /* QAC Warning: END Msg(2:2814)-3 */
        /* Write the corresponding value to the PIPC register */
         PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)
        /*Write verify check on PIPC register*/
        PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
          PORT_SET_WORD, PORT_SET_TO_DIO_MODE_SID)
      }
      else
      {
        /* QAC Warning: START Msg(2:2824)-2 */
        /* MISRA Violation: START Msg(4:0488)-2 */
        LusRegMaskVal = (((*Lp16BitRegAddr) &
          (uint16)(~LpSetPinDioAltMode->usOrMask)) | (((uint16)(LpPortReg +
            LpSetPinDioAltMode->ucPortPIPCIndex)->usInitModeRegValPIPC) &
              LpSetPinDioAltMode->usOrMask));
        /* MISRA Violation: END Msg(4:0488)-2 */
        /* QAC Warning: END Msg(2:2824)-2 */
        /* Write the corresponding value to the PIPC register */
        PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)
        /*Write verify check on PIPC register*/
        PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
          PORT_SET_WORD, PORT_SET_TO_ALT_MODE_SID)
      }
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
    }
    else
    {
      /* do nothing*/
    }
    /* Exit critical section */
    /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
    /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
    #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
    PORT_EXIT_CRITICAL_SECTION(PORT_SET_TO_DIO_ALT_PROTECTION);
    #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
  }
  else
  {
    /* If DET is enabled, the API parameter checking shall be performed
     * according to the respective functions
     */
    /*Implements PORT_ESDD_UD_106*/
    /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
    #if (PORT_DEV_ERROR_DETECT == STD_ON )
    /*Implements PORT077*/
    if (PORT_TRUE == LblDioMode)
    {
      /*Implements PORT146*/
      /* Report to DET */
      (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
        PORT_SET_TO_DIO_MODE_SID, PORT_E_MODE_UNCHANGEABLE);
    }
    else
    {
      /*Implements PORT146*/
      /* Report to DET */
      (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
        PORT_SET_TO_ALT_MODE_SID, PORT_E_MODE_UNCHANGEABLE);
    }
    #endif /* PORT_DEV_ERROR_DETECT == STD_ON */
  }
} /* End of API Port_SetToDioOrAltMode */

#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* PORT_SET_TO_DIO_ALT_MODE_API == STD_ON */

/*Implements AR_PN0062_FR_0062*/
/*******************************************************************************
** Function Name         : Port_SearchDioAltModePin
**
** Service ID            : Not Applicable
**
** Description           : This function used to verify whether the given pin
**                         is Mode changeable as DIO or ALTERNATE mode.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : LusPinNumber - Port Pin number,
**                         LpStartPtr - Start pointer to the Changeable pin
**                         structures,
**                         LucSize - Size of the Changeable pin structures.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Pointer to Mode Changeable Pin structure - if given
**                         pin number matches.
**                         NULL - If Pin number does not match.
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Functions Invoked     : None
**
** Registers Used        : None
*******************************************************************************/
/*Implements PORT_ESDD_UD_047*/
#if (PORT_SET_TO_DIO_ALT_MODE_API == STD_ON)

/*Implements PORT131, EAAR_PN0034_FR_0049*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_003, PORT_ESDD_UD_072, PORT_ESDD_UD_109*/

STATIC
FUNC(P2CONST(Port_PinDioAltChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST),
  PORT_PRIVATE_CODE) Port_SearchDioAltModePin(CONST(Port_PinType, AUTOMATIC)
    LusPinNumber, CONSTP2CONST(Port_PinDioAltChangeableDetails, AUTOMATIC,
      PORT_CONFIG_CONST) LpStartPtr, CONST(uint8, AUTOMATIC) LucSize)
{
  P2CONST (Port_PinDioAltChangeableDetails, AUTOMATIC, PORT_CONFIG_DATA)
    LpRetPtr;
  uint8 LucLow;
  uint8 LucHigh;
  uint8 LucMid;
  uint16  LusListSearchId;
  LpRetPtr = NULL_PTR;
  LucHigh = LucSize - PORT_ONE;
  LucLow = PORT_ONE;
  LucMid = PORT_ZERO;
  if (NULL_PTR != LpStartPtr)
  {
    /* Get the lower limit of Search ID */
     LusListSearchId = LpStartPtr->usPinId ;
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Check whether search Search-ID is in range */
    if ((LusPinNumber >=  LusListSearchId) &&
      (LusPinNumber <= ((LpStartPtr + LucHigh)->usPinId )))
    /* MISRA Violation: END Msg(4:0488)-2 */
    {
      /* Check whether requested Search-ID is same as first Search-ID
       * of the list */
      if (LusPinNumber !=  LusListSearchId)
      {
        do
        {
          /* QAC Warning: START Msg(2:3892)-4 */
          /* Get the middle index number */
          LucMid = (LucHigh + LucLow) >> PORT_ONE;
          /* QAC Warning: END Msg(2:3892)-4 */
          /* MISRA Violation: START Msg(4:0488)-2 */
          /* Get the Search-ID of the mid IDs */
           LusListSearchId = ((LpStartPtr + LucMid)->usPinId );
          /* MISRA Violation: END Msg(4:0488)-2 */
          /* Compare Search-ID with the requested one */
          if (LusPinNumber == LusListSearchId)
          {
            /* MISRA Violation: START Msg(4:0488)-2 */
            /* Update the return pointer with the pin number structure */
            LpRetPtr = (LpStartPtr + LucMid);
            /* MISRA Violation: END Msg(4:0488)-2 */
            /* Set LucHigh to zero to break the loop */
            LucHigh = PORT_ZERO;
          } /* End of LusPinNumber == LusListSearchId */
          else
          {
            /* Compare the Search-ID with the requested one */
            if (LusPinNumber <  LusListSearchId)
            {
              /* If the priority is lower, update LucHigh */
              LucHigh = LucMid - PORT_ONE;
            }
            else
            {
              /* If the priority is higher, update LucLow */
              LucLow = LucMid + PORT_ONE;
            }
          }
        } while (LucLow <= LucHigh);
      } /* End of LusPinNumber !=  LusListSearchId */
      else
      {
        /* Update the return pointer with start pointer(Matches with first Id)*/
        LpRetPtr = LpStartPtr;
      }
    } /* End of (LusPinNumber >=  LusListSearchId) &&
       * (LusPinNumber <= ((LpStartPtr + LucHigh)->usPinId ))  */
    else
    {
      /* No action required */
    }
  }
  else
  {
     /* No action required */
  }
  return (LpRetPtr);
} /* End of Port_SearchDioAltModePin */

#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* PORT_SET_TO_DIO_ALT_MODE_API == STD_ON */

/*Implements AR_PN0062_FR_0051, EAAR_PN0034_FR_0049, AR_PN0062_FR_0010*/
/*Implements AR_PN0062_FR_0064*/
/*******************************************************************************
** Function Name         : Port_SearchModeChangeablePin
**
** Service ID            : Not Applicable
**
** Description           : This function used to verify whether the given pin
**                         is Mode changeable.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : LusPinNumber - Port Pin number,
**                         LpStartPtr - Start pointer to the Changeable pin
**                         structures,
**                         LucSize - Size of the Changeable pin structures.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Pointer to Mode Changeable Pin structure - if given
**                         pin number matches,
**                         NULL - If Pin number does not match.
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Functions Invoked     : None
**
** Registers Used        : None
*******************************************************************************/
/*Implements PORT_ESDD_UD_008*/
#if ((PORT_SET_PIN_MODE_API == STD_ON) || \
                              (PORT_SET_PIN_DEFAULT_MODE_API == STD_ON))
/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_015*/
/*Implements AR_PN0062_FR_0010*/

STATIC
FUNC(P2CONST(Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST),
  PORT_PRIVATE_CODE) Port_SearchModeChangeablePin(CONST(Port_PinType,
    AUTOMATIC) LusPinNumber, CONSTP2CONST(Port_PinModeChangeableDetails,
      AUTOMATIC, PORT_CONFIG_CONST)LpStartPtr, CONST(uint8, AUTOMATIC) LucSize)
{
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_DATA)
    LpRetPtr;
  uint8 LucLow;
  uint8 LucHigh;
  uint8 LucMid;
  uint16  LusListSearchId;
  LpRetPtr = NULL_PTR;
  LucHigh = LucSize - PORT_ONE;
  LucLow = PORT_ONE;
  LucMid = PORT_ZERO;
  if (NULL_PTR != LpStartPtr)
  {
    /* Get the lower limit of Search ID */
     LusListSearchId = LpStartPtr->usPinId ;
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Check whether search Search-ID is in range */
    if ((LusPinNumber >=  LusListSearchId) &&
      (LusPinNumber <= ((LpStartPtr + LucHigh)->usPinId )))
    /* MISRA Violation: END Msg(4:0488)-2 */
    {
      /*
       * Check whether requested Search-ID is same as first Search-ID
       * of the list
       */
      if (LusPinNumber !=  LusListSearchId)
      {
        do
        {
          /* QAC Warning: START Msg(2:3892)-4 */
          /* Get the middle index number */
          LucMid = (LucHigh + LucLow) >> PORT_ONE;
          /*  QAC Warning: END Msg(2:3892)-4 */
          /* MISRA Violation: START Msg(4:0488)-2 */
          /* Get the Search-ID of the mid IDs */
           LusListSearchId = ((LpStartPtr + LucMid)->usPinId );
          /* MISRA Violation: END Msg(4:0488)-2 */
          /* Compare Search-ID with the requested one */
          if (LusPinNumber == LusListSearchId)
          {
            /* MISRA Violation: START Msg(4:0488)-2 */
            /* Update the return pointer with the pin number structure */
            LpRetPtr = (LpStartPtr + LucMid);
            /* MISRA Violation: END Msg(4:0488)-2 */
            /* Set LucHigh to zero to break the loop */
            LucHigh = PORT_ZERO;
          } /* End of LusPinNumber == LusListSearchId */
          else
          {
            /* Compare the Search-ID with the requested one */
            if (LusPinNumber <  LusListSearchId)
            {
              /* If the priority is lower, update LucHigh */
              LucHigh = LucMid - PORT_ONE;
            }
            else
            {
              /* If the priority is higher, update LucLow */
              LucLow = LucMid + PORT_ONE;
            }
          }
        } while (LucLow <= LucHigh);
      } /* End of LusPinNumber !=  LusListSearchId */
      else
      {
        /* Update the return pointer with start pointer(Matches with first Id)*/
        LpRetPtr = LpStartPtr;
      }
    } /*
       * End of (LusPinNumber >=  LusListSearchId) &&
       * (LusPinNumber <= ((LpStartPtr + LucHigh)->usPinId ))
       */
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  return (LpRetPtr);
} /* End of Port_SearchModeChangeablePin */

#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* (PORT_SET_PIN_MODE_API == STD_ON) */

/*Implements EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049, AR_PN0062_FR_0004*/
/*Implements AR_PN0062_FR_0004, AR_PN0062_FR_0060*/
/*******************************************************************************
** Function Name         : Port_InitConfig
**
** Service ID            : Not Applicable
**
** Description           : This function used to initialize all the registers of
**                         numeric and JTag ports.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : LenGroupType - Port group type.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Port_FuncCtrlRegInit
**
** Registers Used        : PDSCn, PUCCn, PODCEn, PODCn, PBDCn,
**                         JPDSC0, JPUCC0, JPODCE0, JPODC0, JPBDC0
*******************************************************************************/
/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_088*/
/*Implements PORT_ESDD_UD_102*/
#if ((PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) || \
     (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON))
/* The function Port_Init shall initialize all controller registers */
/*Implements PORT113, PORT002*/
/*Implements PORT_ESDD_UD_001*/
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_InitConfig
  (CONST(Port_GroupType, AUTOMATIC) LenGroupType)
{
  P2CONST(Port_Regs, AUTOMATIC, PORT_CONFIG_CONST)LpPortReg;
  P2VAR(volatile uint32, AUTOMATIC, PORT_CONFIG_DATA) Lp32BitRegAddress;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  P2VAR(volatile uint16, AUTOMATIC, PORT_CONFIG_DATA) Lp16BitRegAddress;
  uint8 LucPortIdx;
  #endif
  #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
  P2VAR(volatile uint8, AUTOMATIC, PORT_CONFIG_DATA) Lp8BitRegAddress;
  #endif
  /*Implements PORT_ESDD_UD_088*/
  /*Implements PORT_ESDD_UD_102*/
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  if (PORT_GROUP_NUMERIC == LenGroupType)
  {
    /* Get the pointer to the Numeric Port registers */
    /* QAC Warning: START Msg(2:2814)-3 */
    LpPortReg = Port_GpConfigPtr->pPortNumRegs;
    /* QAC Warning: END Msg(2:2814)-3 */
    for ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT; LucPortIdx++ )
    {
      /*Implements AR_PN0062_FR_0026*/
      /*Implements PORT_ESDD_UD_017*/
      /* Get the register address */
      Lp32BitRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPDSC));
      /* Write the register value to the corresponding register */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPDSC)
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
        LpPortReg->usInitModeRegValPDSC, PORT_SET_LONG_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp32BitRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPUCC));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPUCC)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
        LpPortReg->usInitModeRegValPUCC, PORT_SET_LONG_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp32BitRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPODCE));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPODCE)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
        LpPortReg->usInitModeRegValPODCE, PORT_SET_LONG_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp32BitRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPODC));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPODC)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
        LpPortReg->usInitModeRegValPODC, PORT_SET_LONG_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPBDC));
      /* Write the register value to the corresponding register */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpPortReg->usInitModeRegValPBDC)
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpPortReg->usInitModeRegValPBDC, PORT_SET_WORD, PORT_INIT_SID)
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpPortReg++;
      /* MISRA Violation: END Msg(4:0489)-3 */
    } /* End of for loop ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT;
       * LucPortIdx++ )
      */
  } /* End of LenGroupType == PORT_GROUP_NUMERIC */
  else
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  {
    #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
    /* Get the pointer to the JTag Port registers */
    LpPortReg = Port_GpConfigPtr->pPortJRegs;
    /*Implements PORT_ESDD_UD_019*/
    /* Get the register address */
    /* QAC Warning: START Msg(2:2814)-3 */
    Lp32BitRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPDSC));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPDSC)
    /* Write Verify Check for corresponding Register */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
      LpPortReg->usInitModeRegValPDSC, PORT_SET_LONG_WORD, PORT_INIT_SID)
    /* Get the register address */
    Lp32BitRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPUCC));
    /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPUCC)
    /* Write Verify Check for corresponding Register */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
      LpPortReg->usInitModeRegValPUCC, PORT_SET_LONG_WORD, PORT_INIT_SID)
    /* Get the register address */
    Lp32BitRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPODCE));
    /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPODCE)
    /* Write Verify Check for corresponding Register */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
      LpPortReg->usInitModeRegValPODCE, PORT_SET_LONG_WORD, PORT_INIT_SID)
    /* Get the register address */
    Lp8BitRegAddress = (volatile uint8*)(&(JPort_HardwareReg->usPBDC));
    /* Write the register value to the corresponding register */
    /* QAC Warning: START Msg(2:2814)-3 */
    PORT_WRITE_REG_ONLY(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPBDC)
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write Verify Check for corresponding Register */
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPBDC, PORT_SET_BYTE, PORT_INIT_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    /* Get the register address */
    Lp32BitRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPODC));
    /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp32BitRegAddress, LpPortReg->usInitModeRegValPODC)
    /* Write Verify Check for corresponding Register */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
    LpPortReg->usInitModeRegValPODC, PORT_SET_LONG_WORD, PORT_INIT_SID)

    #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
  }
  /* Invoke the internal function to initialize PUn, PDn, PISn, PFCn, PFCEn,
   * and PIPCn registers of Numeric and JTag ports
  */
  Port_FuncCtrlRegInit(LenGroupType);
} /* End of API Port_InitConfig */
#endif
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*Implements EAAR_PN0034_FR_0049, AR_PN0062_FR_0063*/
/*******************************************************************************
** Function Name         : Port_SearchDirChangeablePin
**
** Service ID            : Not Applicable
**
** Description           : This function used to verify whether the given pin is
**                         Direction changeable.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : LusPinNumber - Port Pin number,
**                         LpStartPtr - Start pointer to the Changeable pin
**                         structures,
**                         LucSize - Size of the Changeable pin structures.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Pointer to Direction Changeable Pin structure - if
**                         given pin number matches,
**                         NULL - If Pin number does not match.
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Functions Invoked     : None
**
** Registers Used        : None
*******************************************************************************/
/*Implements PORT_ESDD_UD_082*/
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)

/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_084, PORT_ESDD_UD_078, PORT_ESDD_UD_109*/
STATIC
FUNC(P2CONST(Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_CONST),
  PORT_PRIVATE_CODE) Port_SearchDirChangeablePin(CONST(Port_PinType,
    AUTOMATIC) LusPinNumber, CONSTP2CONST(Port_PinsDirChangeable, AUTOMATIC,
      PORT_CONFIG_CONST)LpStartPtr, CONST(uint8, AUTOMATIC) LucSize)
{
  /* Initializing Direction Control Registers Pointer to Null pointer */
  P2CONST (Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_DATA) LpRetPtr;
  uint8 LucLow;
  uint8 LucHigh;
  uint8 LucMid;
  uint16  LusListSearchId;
  LpRetPtr = NULL_PTR;
  LucHigh = LucSize - PORT_ONE;
  LucLow = PORT_ONE;
  LucMid = PORT_ZERO;
  if (NULL_PTR != LpStartPtr)
  {
    /* Get the lower limit of Search ID */
     LusListSearchId = LpStartPtr->usPinId ;
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Check whether search Search-ID is in range */
    if ((LusPinNumber >=  LusListSearchId) &&
       (LusPinNumber <= ((LpStartPtr + LucHigh)->usPinId )))
    /* MISRA Violation: END Msg(4:0488)-2 */
    {
      /*
       *Check whether requested Search-ID is same as first Search-ID of the list
       */
      if (LusPinNumber !=  LusListSearchId)
      {
        do
        {
          /* QAC Warning: START Msg(2:3892)-4 */
          /* Get the middle index number */
          LucMid = (LucHigh + LucLow) >> PORT_ONE;
          /* QAC Warning: END Msg(2:3892)-4 */

          /* MISRA Violation: START Msg(4:0488)-2 */
          /* Get the Search-ID of the mid IDs */
           LusListSearchId = ((LpStartPtr + LucMid)->usPinId );
          /* MISRA Violation: END Msg(4:0488)-2 */
          /* Compare Search-ID with the requested one */
          if (LusPinNumber == LusListSearchId)
          {
            /* MISRA Violation: START Msg(4:0488)-2 */
            /* Update the return pointer with the pin number structure */
            LpRetPtr = (LpStartPtr + LucMid);
            /* MISRA Violation: END Msg(4:0488)-2 */
            /* Set LucHigh to zero to break the loop */
            LucHigh = PORT_ZERO;
          } /* End of LusPinNumber == LusListSearchId */
          else
          {
            /* Compare the Search-ID with the requested one */
            if (LusPinNumber <  LusListSearchId)
            {
              /* If the priority is lower, update LucHigh */
              LucHigh = LucMid - PORT_ONE;
            } /* End of LusPinNumber <  LusListSearchId */
            else
            {
              /* If the priority is higher, update LucLow */
              LucLow = LucMid + PORT_ONE;
            }
          }
        }while (LucLow <= LucHigh);

      } /* End of LusPinNumber !=  LusListSearchId */
      else
      {
        /* Update the return pointer with start pointer(Matches with first Id)*/
        LpRetPtr = LpStartPtr;
      }
    } /*
       * End of (LusPinNumber >=  LusListSearchId) &&
       * (LusPinNumber <= ((LpStartPtr + LucHigh)->usPinId ))
       */
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  return (LpRetPtr);
} /* End of API Port_SearchDirChangeablePin */

#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* (PORT_SET_PIN_DIRECTION_API == STD_ON) */

/*Implements EAAR_PN0034_FR_0049, AR_PN0062_FR_0004, AR_PN0062_FR_0061*/
/*******************************************************************************
** Function Name         : Port_RefreshPortInternal
**
** Service ID            : Not Applicable
**
** Description           : This service shall refresh the direction of all
**                         configured ports to the configured direction.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : LenGroupType - Port Group Type.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : SchM_Enter_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION,
**                         SchM_Exit_Port_PORT_REFRESHPORT_INTERNAL_PROTECTION
**
** Registers Used        : PMSRn, JPMSR0
*******************************************************************************/
/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_104, PORT_ESDD_UD_077*/
/*Implements PORT061*/
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_RefreshPortInternal
  (CONST(Port_GroupType, AUTOMATIC) LenGroupType)
{
  P2CONST (volatile Port_PMSRRegs, AUTOMATIC, PORT_CONFIG_CONST)LpPMSRReg;
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_DATA) LpPMSRRegAddress;
  /*Implements AR_PN0062_FR_0023, PORT075*/
  /*Implements PORT_ESDD_UD_088*/
  /*Implements PORT_ESDD_UD_102*/
 #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucPortIdx;
  if (PORT_GROUP_NUMERIC == LenGroupType)
  {
    /* Get the pointer to 32Bit Numeric PMSR register structure */
    /* QAC Warning: START Msg(2:2814)-3 */
    LpPMSRReg = Port_GpConfigPtr->pPortNumPMSRRegs;
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Enter critical section */
    /*Implements PORT_ESDD_UD_005*/
    /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
    /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
    #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
    PORT_ENTER_CRITICAL_SECTION(PORT_REFRESHPORT_INTERNAL_PROTECTION);
    #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
    for ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT; LucPortIdx++ )
    {
      /* Get the address of the register */
      LpPMSRRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPMSR));
      /* Write the initial value to the pins which are Directional unchangeable
       * and retain the values of those pins which are Directional changeable
      */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(LpPMSRRegAddress, LpPMSRReg->ulMaskAndConfigValue)
      /* QAC Warning: END Msg(2:2814)-3 */
      /*Write verify check on PMSR register*/
      /* QAC Warning: START Msg(2:3892)-4 */
      PORT_CHECK_WRITE_VERIFY_RUNTIME(LpPMSRRegAddress,
        (LpPMSRReg->ulMaskAndConfigValue &
          (LpPMSRReg->ulMaskAndConfigValue >> PORT_SIXTEEN)),
            (LpPMSRReg->ulMaskAndConfigValue >> PORT_SIXTEEN),
              PORT_REFRESH_PORT_DIR_SID)
      /* QAC Warning: END Msg(2:3892)-4 */
      /* MISRA Violation: START Msg(4:0489)-3 */
      /* Increment the pointer pointing to pPortNumPMSRRegs */
      LpPMSRReg++;
      /* MISRA Violation: END Msg(4:0489)-3 */
    } /* End of for loop ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT;
       * LucPortIdx++ )
      */
    /* Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030 */
    /* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066 */
    /* Exit critical section */
    #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
    PORT_EXIT_CRITICAL_SECTION(PORT_REFRESHPORT_INTERNAL_PROTECTION);
    #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON */
  } /* End of LenGroupType == PORT_GROUP_NUMERIC */
  else
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  {
    #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
    /* Get the pointer to 32Bit JTAG PMSR register structure */
    LpPMSRReg = Port_GpConfigPtr->pPortJPMSRRegs;

    #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
    PORT_ENTER_CRITICAL_SECTION(PORT_REFRESHPORT_INTERNAL_PROTECTION);
    #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

    /* Get the contents of the register */
    /* QAC Warning: START Msg(2:2814)-3 */
    LpPMSRRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPMSR));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write the initial value to the pins which are Directional unchangeable
       and retain the values of those pins which are Directional changeable */
    PORT_WRITE_REG_ONLY(LpPMSRRegAddress, LpPMSRReg->ulMaskAndConfigValue)
    /*Write verify check on PMSR register*/
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_RUNTIME(LpPMSRRegAddress,
     (LpPMSRReg->ulMaskAndConfigValue &
       (LpPMSRReg->ulMaskAndConfigValue >> PORT_SIXTEEN)),
         (LpPMSRReg->ulMaskAndConfigValue >> PORT_SIXTEEN),
           PORT_REFRESH_PORT_DIR_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    /* Exit critical section */
    /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
    /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
    #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
    PORT_EXIT_CRITICAL_SECTION(PORT_REFRESHPORT_INTERNAL_PROTECTION);
    #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

    #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
  }
} /* End of API Port_RefreshPortInternal */
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049, AR_PN0062_FR_0031*/
/*Implements AR_PN0062_FR_0032 AR_PN0062_FR_0033, AR_PN0062_FR_0034*/
/*Implements AR_PN0062_FR_0035*/
/*******************************************************************************
** Function Name         : Port_FilterConfig
**
** Service ID            : Not Applicable
**
** Description           : This function used to initialize all the registers of
**                         filter configuration.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : None
**
** Registers Used        : DNFA, FCLA, DNFAnCTL, DNFAnEN, FCLAnCTL
*******************************************************************************/
/*Implements PORT_ESDD_UD_020, PORT_ESDD_UD_023*/
#if ((PORT_DNFA_REG_CONFIG == STD_ON ) || (PORT_FCLA_REG_CONFIG == STD_ON ))

/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_013*/
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_FilterConfig(void)
{
  /* Pointer to analog filter FCLA register data structure */
  /*Implements PORT_ESDD_UD_023, PORT_ESDD_UD_071*/
  #if (PORT_FCLA_REG_CONFIG == STD_ON )
  P2CONST(volatile Port_FCLARegs, AUTOMATIC, PORT_CONFIG_DATA) LpFCLAReg;
  #endif /* End of PORT_FCLA_REG_CONFIG == STD_ON  */
  /* Pointer to digital filter DNFA register data structure */
  /*Implements PORT_ESDD_UD_020, PORT_ESDD_UD_070*/
  #if (PORT_DNFA_REG_CONFIG == STD_ON )
  P2CONST(volatile Port_DNFARegs, AUTOMATIC, PORT_CONFIG_DATA) LpDNFAReg;
  uint16 LusCount;
  uint8 LucDnfaIndex;
  #endif /* End of PORT_DNFA_REG_CONFIG == STD_ON  */
  uint8 LucNoOfRegs;
  uint8 LucFclaIndex;
  uint8 LucFclaCTLindex;
  P2VAR(volatile uint8, AUTOMATIC, PORT_CONFIG_DATA) LpCTLBaseAddress;
  LucNoOfRegs = PORT_ZERO;
  LucFclaIndex = PORT_ZERO;
  LucFclaCTLindex = PORT_ZERO;
  #if (PORT_DNFA_REG_CONFIG == STD_ON)
  LusCount = PORT_WORD_ZERO;
  /* Get the pointer to the details of DNFA Noise Elimination Registers */
  /* QAC Warning: START Msg(2:2814)-3 */
  LpDNFAReg = Port_GpConfigPtr->pPortDNFARegs;
  /* QAC Warning: END Msg(2:2814)-3 */
  LucDnfaIndex = PORT_ZERO;
  /* Get the count for total number of DNFA Noise Elimination Registers */
  LucNoOfRegs = Port_GpConfigPtr->ucNoOfDNFARegs;
  while (LucNoOfRegs > PORT_ZERO)
  {
    /* Get the Index for corresponding DNFA register */
    /* QAC Warning: START Msg(2:2814)-3 */
    LucDnfaIndex = (LpDNFAReg->ucDnfaIndex - PORT_DNFA_OFFSET);
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write the DNFAnCTL register value to the corresponding register */
    PORT_WRITE_REG_ONLY((volatile uint8*)
      &(Dnfa_BaseAddress[LucDnfaIndex]->CTL.UINT8), LpDNFAReg->ucDNFACTL)
    /*Write verify check on DNFAnCTL register*/
    PORT_CHECK_WRITE_VERIFY_INIT((volatile uint8*)
      &(Dnfa_BaseAddress[LucDnfaIndex]->CTL.UINT8), LpDNFAReg->ucDNFACTL,
        PORT_SET_BYTE, PORT_INIT_SID)
    /* Write the DNFAnEN register value to the corresponding register */
    PORT_WRITE_REG_ONLY((volatile uint16*)
      &(Dnfa_BaseAddress[LucDnfaIndex]->EN.UINT16), LpDNFAReg->usDNFAEN)
    /*Write verify check on DNFAnEN register*/
    PORT_CHECK_WRITE_VERIFY_INIT((volatile uint16*)
      &(Dnfa_BaseAddress[LucDnfaIndex]->EN.UINT16), LpDNFAReg->usDNFAEN,
        PORT_SET_WORD, PORT_INIT_SID)
    while (LusCount < (LpDNFAReg->usDELAY))
    {
      ASM_NOP();
      LusCount++;
    }
    LusCount = PORT_WORD_ZERO;
    /* Increment the pointer to get the value of next structure */
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpDNFAReg++;
    /* MISRA Violation: END Msg(4:0489)-3 */
    /* Decrement the count for total number of DNFA Registers */
    LucNoOfRegs--;
  } /* End of LucNoOfRegs > PORT_ZERO */
  #endif /* End of PORT_DNFA_REG_CONFIG == STD_ON  */
  /*Implements PORT_ESDD_UD_023*/
  #if (PORT_FCLA_REG_CONFIG == STD_ON )
  /* Get the pointer to the details of FCLA Noise Elimination Registers */
  LpFCLAReg = Port_GpConfigPtr->pPortFCLARegs;
  /* Get the count for total number of FCLA Noise Elimination Registers */
  LucNoOfRegs = Port_GpConfigPtr->ucNoOfFCLARegs;
  while (LucNoOfRegs > PORT_ZERO)
  {
    /* Get the Index for corresponding FCLA register */
    /* QAC Warning: START Msg(2:2814)-3 */
    LucFclaIndex = LpFCLAReg->ucFCLABaseIndex;
    /* QAC Warning: END Msg(2:2814)-3 */
    /* MISRA Violation: START Msg(4:0310)-4 */
    /* Get the base address for FCLA-CTL0 Noise Elimination Registers */
     LpCTLBaseAddress = (volatile uint8*)
       &(Fcla_BaseAddress[LucFclaIndex]->CTL0);
    /* MISRA Violation: END Msg(4:0310)-4 */

    /* Get the index for CTL to access corresponding FCLA Register */
    LucFclaCTLindex = LpFCLAReg->ucFclaCTLIndex;
    /* QAC Warning: START Msg(2:2824)-2 */
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* Write the FCLAnCTL register value to the corresponding register */
    PORT_WRITE_REG_ONLY((LpCTLBaseAddress + (LucFclaCTLindex * PORT_FOUR)),
      LpFCLAReg->ucFCLACTL)
    /* MISRA Violation: END Msg(4:0488)-2 */
    /* QAC Warning: END Msg(2:2824)-2 */
    /*Write verify check on FCLAnCTL register*/
    /* MISRA Violation: START Msg(4:0488)-2 */
    PORT_CHECK_WRITE_VERIFY_INIT((LpCTLBaseAddress + (LucFclaCTLindex *
      PORT_FOUR)), LpFCLAReg->ucFCLACTL, PORT_SET_BYTE, PORT_INIT_SID)
    /* MISRA Violation: END Msg(4:0488)-2 */

    /* Increment the pointer to get the value of next structure */
    /* MISRA Violation: START Msg(4:0489)-3 */
    LpFCLAReg++;
    /* MISRA Violation: END Msg(4:0489)-3 */

    /* Decrement the count for total number of FCLA Registers */
    LucNoOfRegs--;
  } /* End of LucNoOfRegs > PORT_ZERO */

  #endif /* End of PORT_FCLA_REG_CONFIG == STD_ON  */

} /* End of API Port_FilterConfig */
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*
        * End of (PORT_DNFA_REG_CONFIG == STD_ON ) ||
        *               (PORT_FCLA_REG_CONFIG == STD_ON )
        */
/*Implements AR_PN0062_FR_0043, EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049*/
/*Implements AR_PN0062_FR_0004, AR_PN0062_FR_0066*/
/*******************************************************************************
** Function Name         : Port_SetPinDefaultMode
**
** Service ID            : 0x07
**
** Description           : This function used to set the mode of a port pin
**                         during runtime. The PORT Driver module allows
**                         changing the mode of the pin to default mode set by
**                         the configuration at the time of Port_Init().
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : SchM_Enter_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION,
**                         Port_SearchModeChangeablePin,Dem_ReportErrorStatus
**                         Port_PinDefModeFuncRegSet,Port_PinDefModeDetCheck
**
** Registers Used        : PMCSRn, PMSRn PSRn, PIPCn, JPMCSR0, JPMSR0, JPSR0,
**                         PFCEn, PFCn, JPFCE0
*******************************************************************************/
/*Implements PORT_ESDD_UD_031*/
#if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
                     (PORT_SET_PIN_MODE_API == STD_ON))

/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_086, PORT_ESDD_UD_076, PORT_ESDD_UD_077*/

/* QAC Warning: START Msg(2:3227)-5 */
FUNC (void, PORT_PUBLIC_CODE) Port_SetPinDefaultMode (Port_PinType Pin)
/* QAC Warning: END Msg(2:3227)-5 */
{
  /*Implements PORT_ESDD_UD_079, PORT_ESDD_UD_080*/
  /* Pointer to mode changeable pin data structure */
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpModeChangeablePin;
  /* Pointer to Alternate mode data structure */
  P2CONST (Port_PinModeChangeableGroups, AUTOMATIC, PORT_CONFIG_CONST)
    LpSetPinModeGroupStruct;
  /* Pointer to Port Registers Data structure */
  P2CONST (volatile Port_Regs, AUTOMATIC, PORT_CONFIG_CONST) LpPortReg;
  /* Pointer to Alternate Function Control Registers Data structure */
  P2CONST (volatile Port_FuncCtrlRegs, AUTOMATIC, PORT_CONFIG_CONST)
    LpFuncCtrlReg;
  /* Pointer to Direction Control Registers Data structure */
  P2CONST (volatile Port_PMSRRegs, AUTOMATIC, PORT_CONFIG_CONST) LpPMSRReg;
  /* Pointer to hold the register address of 32 bit value */
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_CONST)LpRegAddr;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  /* Pointer to hold the register address 16 bit value */
  P2VAR (volatile uint16, AUTOMATIC, PORT_CONFIG_CONST)Lp16BitRegAddr;
  uint8 LucSetPinModeGroupStructIdx;
  uint16 LusRegMaskVal;
  #endif
  /* MISRA Violation: START Msg(4:0759)-1 */
  Port_Pin_Direction LunSRRegContent;
  /* MISRA Violation: END Msg(4:0759)-1 */
  uint32 LulPortDirection;
  uint16 LusOrMask;
  uint16 LusPIPCInitMode;
  uint16 LusInitMode;
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  #endif
  LulPortDirection = (uint32)PORT_ZERO;
  LusPIPCInitMode = (uint16)PORT_MODE_DIO;
  LusInitMode = (uint16)PORT_MODE_DIO;
   /*Implements PORT_ESDD_UD_106*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /* If DET is enabled, the API parameter checking shall be performed according
   * to the respective functions  */
  /* Initialize the return value */
  LucReturnValue = E_OK;
  LucReturnValue = Port_PinDefModeDetCheck(Pin);
  if (E_OK == LucReturnValue)
  #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
  {
    /* Check whether the Pin is mode changeable at run time */
    /* QAC Warning: START Msg(2:2814)-3 */
    LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
      Port_GpConfigPtr->pPinModeChangeableDetails,
        Port_GpConfigPtr->ucNoOfPinsModeChangeable);
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Check if the LpModeChangeablePin points to NULL POINTER */
    if (NULL_PTR != LpModeChangeablePin)
    #endif
    {
      /* MISRA Violation: START Msg(4:0488)-2 */
      /* QAC Warning: START Msg(2:2814)-3 */
      /* Get the pointer to the Set Mode group list */
      LpSetPinModeGroupStruct = ((Port_GpConfigPtr->pPinModeChangeableGroups) +
       (LpModeChangeablePin->ucSetModeIndex));
      /* QAC Warning: END Msg(2:2814)-3 */
      /* MISRA Violation: END Msg(4:0488)-2 */
      /* If the Pin group is of Numeric type */
      /*Implements PORT_ESDD_UD_088*/
      /*Implements PORT_ESDD_UD_102*/
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /* Get the pointer to the Numeric Port registers */
        LpPortReg = Port_GpConfigPtr->pPortNumRegs;
        /* Get the pointer to the Numeric Function Control registers */
        LpFuncCtrlReg = Port_GpConfigPtr->pPortNumFuncCtrlRegs;
        /* Get the pointer to the Numeric PMSR registers */
        LpPMSRReg = Port_GpConfigPtr->pPortNumPMSRRegs;
      } /* End of LpModeChangeablePin->enPortType == PORT_GROUP_NUMERIC */
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the pointer to the JTag Port registers */
        LpPortReg = Port_GpConfigPtr->pPortJRegs;
        /* Get the pointer to the JTag Function Control registers */
        LpFuncCtrlReg = Port_GpConfigPtr->pPortJFuncCtrlRegs;
        /* Get the pointer to the JTag PMSR registers */
        LpPMSRReg = Port_GpConfigPtr->pPortJPMSRRegs;
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      } /* End of LpModeChangeablePin->enPortType == PORT_GROUP_JTAG */

      /* Assign OrMask value to local variable */
      LusOrMask = LpModeChangeablePin->usOrMask;
      /* Set the bit position in the upper 16 bits (31-16) of the PSR or PMSR
       * variable to 1 of the configured pin whose Mode has to be changed
       */
      LunSRRegContent.Tst_Port_Word.usMSWord = LusOrMask;
      /* Write PMCSR register. Check for register availability */
      /* QAC Warning: START Msg(2:2814)-3 */
      if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPMCSRRegIndex)
      /* QAC Warning: END Msg(2:2814)-3 */
      {
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
        LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPMCSRRegIndex;
        if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
        {
          /* Get the address of PMCSR register */
          /*Implements AR_PN0062_FR_0026*/
          /*Implements PORT_ESDD_UD_017*/
          LpRegAddr = (volatile uint32*)
            (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPMCSR));
        }
        else
        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
        {
          #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
          /* Get the address of PMCSR register */
          /*Implements PORT_ESDD_UD_019*/
          /* QAC Warning: START Msg(2:2814)-3 */
          LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPMCSR));
          /* QAC Warning: END Msg(2:2814)-3 */
          #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
        }
        /* QAC Warning: START Msg(2:2824)-2 */
        /* MISRA Violation: START Msg(4:0488)-2 */
        LusInitMode = ((LpFuncCtrlReg +
          LpSetPinModeGroupStruct->ucPMCSRRegIndex)->usInitModeRegValPMCSR) &
            LusOrMask;
        /* Write the requested direction into Lower word of PMCSR variable
         * by using OR mask */
        /* MISRA Violation: END Msg(4:0488)-2 */
        /* QAC Warning: END Msg(2:2824)-2 */
        LunSRRegContent.Tst_Port_Word.usLSWord = LusInitMode;
        /* An atomic access to Microcontroller registers by the use of an
         * exclusive area
        */
        /*Implements PORT075*/
        /* Enter critical section */
        /*Implements PORT_ESDD_UD_005*/
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        /* QAC Warning: START Msg(2:2814)-3 */
        /* Write the corresponding 32 bit value to the PMCSR register */
        PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)
        /* QAC Warning: END Msg(2:2814)-3 */
        /*Write verify check on PMCSR register*/
        /* QAC Warning: START Msg(2:3892)-4 */
        PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr,
          (LunSRRegContent.ulRegContent & LusOrMask),
            (LunSRRegContent.ulRegContent >> PORT_SIXTEEN),
              PORT_SET_PIN_DEFAULT_MODE_SID)
        /* QAC Warning: END Msg(2:3892)-4 */
        /* Exit critical section */
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
      } /* End of Write PMCSR register */
      else
      {
        /* No action required */
      }
      /* Write PIPC register.Check for register availability */
      if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPIPCRegIndex)
      {
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
        /* QAC Warning: START Msg(2:2824)-2 */
        /* MISRA Violation: START Msg(4:0488)-2 */
        /* Initial Mode of PIPC  */
        LusPIPCInitMode = ((LpPortReg +
          LpSetPinModeGroupStruct->ucPIPCRegIndex)->usInitModeRegValPIPC) &
            LusOrMask;
        /* MISRA Violation: END Msg(4:0488)-2 */
        /* QAC Warning: END Msg(2:2824)-2 */
        /*Implements PORT_ESDD_UD_067*/
        /*Implements AR_PN0062_FR_0026*/
        /*Implements PORT_ESDD_UD_017*/
        Lp16BitRegAddr = (volatile uint16*)
         (&(Port_HardwareReg[LpSetPinModeGroupStruct->ucPIPCRegIndex]->usPIPC));
        /* Enter critical section */
        /*Implements PORT_ESDD_UD_005*/
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        /* If bit needs to be set, OR the register contents with OrMask */
        /*Write the corresponding value to PIPC register*/
        /* QAC Warning: START Msg(2:3892)-4 */
        /* QAC Warning: START Msg(2:2814)-3 */
        LusRegMaskVal = (((*Lp16BitRegAddr)&
          (uint16)(~LusOrMask)) | ((uint16)(LusPIPCInitMode)));
        /* QAC Warning: END Msg(2:2814)-3 */
        /* QAC Warning: END Msg(2:3892)-4 */
        PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)
        /*Write verify check on PIPC register*/
        PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
          PORT_SET_WORD, PORT_SET_PIN_DEFAULT_MODE_SID)
        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */

        /* Exit critical section */
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
      } /* End of Write PIPC register */
      else
      {
        /* No action required */
      }
      /* Check initial Mode of requested PortPin is DIO mode or alternative
       *  mode in PMCSR Reg  and proceed only if Alternate mode
       */
      if ((uint16)PORT_MODE_DIO != LusInitMode)
      {
        Port_PinDefModeFuncRegSet(Pin);
        /* Check if pin direction is controlled by Port module or
           alternate function and update PMSR reg if controlled by Port */
        /* QAC Warning: START Msg(2:3892)-4 */
        if (PORT_MODE_DIO == LusPIPCInitMode)
        /* QAC Warning: END Msg(2:3892)-4 */
        {
          /* Write PMSR register.Check for PMSR register availability */
          if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPMSRRegIndex)
          {
            #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
            LucSetPinModeGroupStructIdx =
              LpSetPinModeGroupStruct->ucPMSRRegIndex;
            if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
            {
              /* Get the PMSR register Address */
              /*Implements AR_PN0062_FR_0026*/
              /*Implements PORT_ESDD_UD_017*/
              LpRegAddr = (volatile uint32*)
                (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPMSR));
            }
            else
            #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
            {
              #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
              /* Get the PMSR register Address */
              /*Implements PORT_ESDD_UD_019*/
              LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPMSR));
              #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
            }
            /* QAC Warning: START Msg(2:2824)-2 */
            /* MISRA Violation: START Msg(4:0488)-2 */
            LulPortDirection = (uint32)((LpPMSRReg +
              LpSetPinModeGroupStruct->ucPMSRRegIndex)->usInitModeRegVal) &
                LpModeChangeablePin->usOrMask;
            /* MISRA Violation: END Msg(4:0488)-2 */
            /* QAC Warning: END Msg(2:2824)-2 */
            LunSRRegContent.Tst_Port_Word.usLSWord = (uint16)LulPortDirection;
            /* Enter critical section */
            /*Implements PORT_ESDD_UD_005*/
            /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
            #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
            PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
            #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
            /* Write the contents of Lower word and Upper word of PMSR variable
             * into the PMSR register address */
            PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)
            /* QAC Warning: END Msg(2:3892)-4 */
            /*Write verify check on PMSR register*/
            /* QAC Warning: START Msg(2:3892)-4 */
            PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr,
              (LunSRRegContent.ulRegContent & LusOrMask),
                (LunSRRegContent.ulRegContent >> PORT_SIXTEEN),
                  PORT_SET_PIN_DEFAULT_MODE_SID)
            /* QAC Warning: END Msg(2:3892)-4 */
            /* Exit critical section */
            /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
            /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
            #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
            PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
            #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
          } /* End of Write PMSR register */
          else
          {
            /* No action required */
          }
          /* QAC Warning: START Msg(2:3892)-4 */
          if (PORT_DIO_OUT == LulPortDirection)
          /* QAC Warning: END Msg(2:3892)-4 */
          {
            /* Write PSR register.Check for PSR register availability */
            if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPSRRegIndex)
            {
              #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
              LucSetPinModeGroupStructIdx =
                LpSetPinModeGroupStruct->ucPSRRegIndex;
              if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
              {
                /* Get the PSR register Address */
                /*Implements AR_PN0062_FR_0026*/
                /*Implements PORT_ESDD_UD_017*/
                LpRegAddr = (volatile uint32*)
                  (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPSR));
              }
              else
              #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
              {
                #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
                /* Get the PSR register Address */
                /*Implements PORT_ESDD_UD_019*/
                LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPSR));

                #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
              }
              /* Write Initial mode register value into Lower
               * word of PSR variable */
              /* MISRA Violation: START Msg(4:0488)-2 */
              LunSRRegContent.Tst_Port_Word.usLSWord = ((LpPortReg +
                LpSetPinModeGroupStruct->ucPSRRegIndex)->usInitModeRegValPSR);
              /* MISRA Violation: END Msg(4:0488)-2 */
              /* Enter critical section */
              /*Implements PORT_ESDD_UD_005*/
              /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
              #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
              PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
              #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

              /*Write the corresponding value to PSR register*/
              PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)
              /*Write verify check on PSR register*/
              /* QAC Warning: START Msg(2:3892)-4 */
              PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr,
                (LunSRRegContent.ulRegContent & LusOrMask),
                  (LunSRRegContent.ulRegContent >> PORT_SIXTEEN),
                    PORT_SET_PIN_DEFAULT_MODE_SID)
              /* QAC Warning: END Msg(2:3892)-4 */
              /* Exit critical section */
              /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
              /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
              #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
              PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
              #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
            }   /* End of Write PSR register */
            else
            {
              /* No action required */
            }
          }
          else
          {
            /* do nothing */
          } /* End of (PORT_MODE_DIO  == LusPIPCInitMode) */
        }
        else
        {
          /* do nothing */
        } /* End of ((uint16)PORT_MODE_DIO != LusInitMode) */
      } /* End of  (NULL_PTR != LpModeChangeablePin)*/
      else
      {
        /* do nothing */
      }
    } /*End of (E_OK == LucReturnValue)*/
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    else
    {
      /* do nothing */
    }
    #endif
  }
  /*Implements PORT_ESDD_UD_106*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif
} /* End of API Port_SetPinDefaultMode */

#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"
#endif /* (PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) */

/*Implements AR_PN0062_FR_0004, AR_PN0062_FR_0065*/
/*******************************************************************************
** Function Name         : Port_SetPinDefaultDirection
**
** Service ID            : 0x08
**
** Description           : This service sets the port pin direction during
**                         runtime. The PORT Driver module allows changing the
**                         mode of the pin to default mode set by the
**                         configuration at the time of Port_Init().
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_Init().
**
** Global Variables Used : Port_GblDriverStatus, Port_GpConfigPtr
**
** Functions Invoked     : Det_ReportError,Dem_ReportErrorStatus
**                         SchM_Enter_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_PIN_DEFAULT_DIR_PROTECTION,
**                         Port_SearchDirChangeablePin, Port_PinDefDirDetCheck
**
** Registers Used        : PMSRn, PSRn, JPMSR0, JPSR0
*******************************************************************************/
/*Implements PORT_ESDD_UD_082, PORT_ESDD_UD_029*/
#if ((PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON)&& \
                     (PORT_SET_PIN_DIRECTION_API == STD_ON))

/*Implements PORT131, EAAR_PN0034_FR_0049*/
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_004, PORT_ESDD_UD_109*/

/* QAC Warning: START Msg(2:3227)-5 */
FUNC (void, PORT_PUBLIC_CODE) Port_SetPinDefaultDirection (Port_PinType Pin)
/* QAC Warning: END Msg(2:3227)-5 */
{
  P2CONST(volatile Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_CONST)
    LpChangeablePinDet;
  /* Pointer to Direction Control Registers Data structure */
  P2CONST (volatile Port_PMSRRegs, AUTOMATIC, PORT_CONFIG_CONST) LpPortPMSRReg;

  /* Pointer to hold the register address of 32 bit value */
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_CONST) LpRegAddr;

  /* MISRA Violation: START Msg(4:0759)-1 */
  Port_Pin_Direction LunSRRegContent = {PORT_LONG_WORD_ZERO};
  /* MISRA Violation: END Msg(4:0759)-1 */

  uint32 LulPortDirection;
  uint16 LusOrMask;

  /*Implements PORT_ESDD_UD_106*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;

  #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucPortIdx;
  LucPortIdx = PORT_ZERO;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  LulPortDirection = PORT_LONG_WORD_ZERO;
  /* If DET is enabled, the API parameter checking shall be performed according
   * to the respective functions */

  /*Implements PORT_ESDD_UD_106*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /* Initialize the return value */
  LucReturnValue = E_OK;
  LucReturnValue = Port_PinDefDirDetCheck(Pin);
  if (E_OK == LucReturnValue)
  #endif /* End of PORT_DEV_ERROR_DETECT == STD_ON */
  {
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Check whether the Pin direction is changeable at run time */
    LpChangeablePinDet = Port_SearchDirChangeablePin (Pin,
      Port_GpConfigPtr->pPinDirChangeable,
        Port_GpConfigPtr->ucNoOfPinsDirChangeable);
    /* QAC Warning: END Msg(2:2814)-3 */
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    /* Return value LpChangeablePinDet - Changeable, NULL - Unchangeable */
    if (NULL_PTR != LpChangeablePinDet)
    #endif
    {
      /* Get the base index of the corresponding Port Type */
      /*Implements PORT_ESDD_UD_088*/
      /*Implements PORT_ESDD_UD_102*/
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      /* QAC Warning: START Msg(2:2814)-3 */
      if (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType)
      /* QAC Warning: END Msg(2:2814)-3 */
      {
        /* Get the index of Numeric Port */
        LucPortIdx = LpChangeablePinDet->ucPortIndex;
        LpPortPMSRReg = Port_GpConfigPtr->pPortNumPMSRRegs;
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the index of JTAG Port */
        LpPortPMSRReg = Port_GpConfigPtr->pPortJPMSRRegs;
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      } /*End of (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType) */

      /*Assign the mask value to local variable*/
      LusOrMask = LpChangeablePinDet->usOrMaskVal;

      /* Set the bit position in the upper 16 bits (31-16) of the PSR or PMSR
         variable to 1 of the configured pin whose Direction has to be changed*/
      LunSRRegContent.Tst_Port_Word.usMSWord = LusOrMask;

      /*Check for PMSR register availability */
      if (PORT_REG_NOTAVAILABLE != LpChangeablePinDet->ucPMSRRegIndex)
      {
        /*Implements PORT_ESDD_UD_088*/
        /*Implements PORT_ESDD_UD_102*/
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
        /* If the Pin group is of Numeric type */
        if (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType)
        {
          /* Get the PMSR register Address */
          /*Implements AR_PN0062_FR_0026*/
          /*Implements PORT_ESDD_UD_017*/
          LpRegAddr = ((volatile uint32*)
            (&(Port_HardwareReg[LucPortIdx]->ulPMSR)));
        }
        else
        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
        {
          #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
          /* Get the PMSR register Address */
          /*Implements PORT_ESDD_UD_019*/
          /* QAC Warning: START Msg(2:2814)-3 */
          LpRegAddr = ((volatile uint32*)(&(JPort_HardwareReg->ulPMSR)));
          /* QAC Warning: END Msg(2:2814)-3 */
          #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
        }
        /* MISRA Violation: START Msg(4:0488)-2 */
        LulPortDirection = (uint32)((LpPortPMSRReg +
          LpChangeablePinDet->ucPMSRRegIndex)->usInitModeRegVal) & LusOrMask;
        /* MISRA Violation: END Msg(4:0488)-2 */

        LunSRRegContent.Tst_Port_Word.usLSWord = (uint16)LulPortDirection;

        /* An atomic access to Microcontroller registers by the use of an.
           exclusive area  */
        /*Implements PORT075*/
        /* Enter critical section */
        /*Implements PORT_ESDD_UD_005*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_DIR_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

        /* Write the contents of Lower word and upper word of PMSR variable
         * into the PMSR register address   */
        /* QAC Warning: START Msg(2:2814)-3 */
        PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)
        /* QAC Warning: END Msg(2:2814)-3 */

        /*Write verify check on PMSR register*/
        /* QAC Warning: START Msg(2:3892)-4 */
        PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr,
          (LunSRRegContent.ulRegContent &
            LpChangeablePinDet->usOrMaskVal), (LunSRRegContent.ulRegContent >>
              PORT_SIXTEEN), PORT_SET_PIN_DEFAULT_DIR_SID)
        /* QAC Warning: END Msg(2:3892)-4 */

        /* Exit critical section */
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_DIR_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

      }
      else
      {

      }
      /* QAC Warning: START Msg(2:3892)-4 */
      if (PORT_DIO_OUT == LulPortDirection)
      /* QAC Warning: END Msg(2:3892)-4 */
      {
        /* Write PSR register.Check for PSR register availability */
        if (PORT_REG_NOTAVAILABLE != LpChangeablePinDet->ucPSRRegIndex)
        {

          #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
          /* Write the configured value into the register */
          if (PORT_GROUP_NUMERIC == LpChangeablePinDet->enPortType)
          {
            /* Write the configured level into the register */
            LpRegAddr = ((volatile uint32*)
              (&(Port_HardwareReg[LucPortIdx]->ulPSR)));
          }
          else
          #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
          {
            #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
            /* Write the configured value into the register */
            LpRegAddr = ((volatile uint32*)(&(JPort_HardwareReg->ulPSR)));
            #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
          }

          /* Write the Lower word contents with configured Pin Level Value */
          LunSRRegContent.Tst_Port_Word.usLSWord =
            (uint16)(LpChangeablePinDet->usChangeableConfigVal) &
              (LpChangeablePinDet->usOrMaskVal);

          /* An atomic access to Microcontroller registers by the use of an.
             exclusive area  */
          /*Implements PORT075*/
          /* Enter critical section */
          /*Implements PORT_ESDD_UD_005*/
          #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
          PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_DIR_PROTECTION);
          #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

          /*Write the corresponding value to PSR register*/
          PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)

          /*Write verify check on PSR register*/
          /* QAC Warning: START Msg(2:3892)-4 */
          PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr,
            (LunSRRegContent.ulRegContent &
              LpChangeablePinDet->usOrMaskVal), (LunSRRegContent.ulRegContent >>
                PORT_SIXTEEN), PORT_SET_PIN_DEFAULT_DIR_SID)
          /* QAC Warning: END Msg(2:3892)-4 */

          /* Exit critical section */
          /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
          /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
          #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
          PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_DIR_PROTECTION);
          #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        }
        else
        {

        }
      }
      else
      {
        /* No action required */
      }
    }
    #if (PORT_DEV_ERROR_DETECT == STD_OFF)
    else
    {
      /* No action required */
    }
    #endif
  } /* End of E_OK == LucReturnValue */
  /*Implements PORT_ESDD_UD_106*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  else
  {
    /* No action required */
  }
  #endif
}/* End of API Port_SetPinDefaultDirection */

#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif /* (PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON) */
/*******************************************************************************
** Function Name         : Port_PinModeDetCheck
**
** Service ID            : NA
**
** Description           : This function used to check the DET error conditions
**                         of Port_SetPinMode() Api.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number,
**                         Mode - New mode to be set on port pin.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Std_ReturnType
**
** Preconditions         : Port_SetPinMode() Api should be called.
**
** Global Variables Used : Port_GblDriverStatus, Port_GpConfigPtr
**
** Functions Invoked     : Det_ReportError,
**                         Port_SearchModeChangeablePin
**
** Registers Used        : None
*******************************************************************************/
/*Implements PORT131*/
/*Implements PORT_ESDD_UD_008*/
/*Implements PORT_ESDD_UD_106*/
/*Implements PORT100, PORT107, PORT211, PORT123_Conf, EAAR_PN0034_FR_0049*/
#if ((PORT_DEV_ERROR_DETECT == STD_ON) && \
    (PORT_SET_PIN_MODE_API == STD_ON))

#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_096, PORT_ESDD_UD_080, PORT_ESDD_UD_109*/
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinModeDetCheck
  (CONST(Port_PinType, AUTOMATIC) Pin, CONST(Port_PinModeType, AUTOMATIC ) Mode)
{
  /* Pointer to mode changeable pin data structure */
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
                                         LpModeChangeablePin;
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  /* Initialize the return value */
  LucReturnValue = E_OK;
  /*Implements PORT087*/
  /*Check if the driver is initialized or not*/
  if (PORT_UNINITIALIZED == Port_GblDriverStatus)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_MODE_SID, PORT_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* Port_GblDriverStatus == PORT_UNINITIALIZED */
  else
  {
    /* No action required */
  }
  /*Implements PORT087*/
  /* Check whether the requested PIN number is invalid */
  /*Implements PORT_ESDD_UD_081*/
  if (PORT_TOTAL_NUMBER_OF_PINS <= Pin)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_MODE_SID, PORT_E_PARAM_PIN);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* End of PORT_TOTAL_NUMBER_OF_PINS <= Pin */
  else
  {
    /* No action required */
  }
  /*Implements PORT087*/
  /* Check whether the requested mode is invalid
   * In case of PortIpControl ON user will pass mode value ORed with 0x80,
   * so this is to be masked while checking against the max mode
   */
  /*Implements PORT_ESDD_UD_048*/
  if (((SET_PIPC_MAX_MODE) < Mode) || (((PORT_MAX_MODE) < Mode) &&
    (Mode < (SET_PIPC_MIN_MODE))))
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_MODE_SID, PORT_E_PARAM_INVALID_MODE);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* End of (Mode > PORT_MAX_MODE) */
  else
  {
    /* No action required */
  }
  if (E_OK == LucReturnValue)
  {
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Check whether the Pin mode is changeable at run time */
    LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
      Port_GpConfigPtr->pPinModeChangeableDetails,
        Port_GpConfigPtr->ucNoOfPinsModeChangeable);
    /* QAC Warning: END Msg(2:2814)-3 */

    /*Implements PORT087*/
    /*Implements PORT223*/
    /* Return value LpModeChangeablePin - Changeable,
                    NULL                - Unchangeable */
    if (NULL_PTR == LpModeChangeablePin)
    {
      /*Implements PORT146*/
      /* Report to DET */
      (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
        PORT_SET_PIN_MODE_SID, PORT_E_MODE_UNCHANGEABLE);
      /* Set Return Value as E_NOT_OK */
      LucReturnValue = E_NOT_OK;
    } /* End of LpModeChangeablePin == NULL_PTR */
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  } /* End of LucReturnValue == E_NOT_OK */
  /*Return LucReturnValue*/
  return(LucReturnValue);
}
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /*#if ((PORT_DEV_ERROR_DETECT == STD_ON) && \
    (PORT_SET_PIN_MODE_API == STD_ON))*/

/*Implements EAAR_PN0034_FR_0049, AR_PN0062_FR_0004*/
/*******************************************************************************
** Function Name         : Port_PinModeHWRegSet
**
** Service ID            : NA
**
** Description           : This is the internal function called from
**                         Port_SetPinMode to access the mode set/reset,
**                         mode control set/reset, port set/reset registers
**                         for changing the mode of a pin during runtime.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number,
**                         Mode - New mode to be set on port pin.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**                         Port_SetPinMode should be called.
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Port_SearchModeChangeablePin,
**                         Port_PinModeCtrlRegSet,Dem_ReportErrorStatus
**                         SchM_Enter_Port_PORT_SET_PIN_MODE_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_PIN_MODE_PROTECTION
**
** Registers Used        : PMSRn,PMCSRn,PSRn,JPMSR0,JPMCSR0,JPSR0
*******************************************************************************/
/*Implements PORT_ESDD_UD_008*/
#if (PORT_SET_PIN_MODE_API == STD_ON)
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_097, PORT_ESDD_UD_111*/
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinModeHWRegSet
  (CONST(Port_PinType, AUTOMATIC) Pin, CONST(Port_PinModeType, AUTOMATIC) Mode)
{
  /* Pointer to mode changeable pin data structure */
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpModeChangeablePin;
  /* Pointer to Alternate mode data structure */
  P2CONST (Port_PinModeChangeableGroups, AUTOMATIC, PORT_CONFIG_CONST)
    LpSetPinModeGroupStruct;
  /* Pointer to Port Registers Data structure */
  P2CONST (volatile Port_Regs, AUTOMATIC, PORT_CONFIG_CONST) LpPortReg;
  /* Pointer to hold the register address of 32 bit value */
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_CONST)LpRegAddr;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucSetPinModeGroupStructIdx;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  /* MISRA Violation: START Msg(4:0759)-1 */
  /*Local variable to refer the 32-bit word of PMCSR register*/
  Port_Pin_Direction LunSRRegContent;
  /* MISRA Violation: END Msg(4:0759)-1 */
  /* Variable for revised mode */
  /*Implements PORT212, PORT_ESDD_UD_111*/
  Port_PinModeType LucMode;
  /*Initialize direction and mode value */
  uint16 LusCurrentDirection;
  uint16 LusCurrentMode;
  LusCurrentDirection = PORT_SET_WORD;
  LusCurrentMode = PORT_SET_WORD;
  /* QAC Warning: START Msg(2:2814)-3 */
  /* Check whether the Pin is mode changeable at run time */
  LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
    Port_GpConfigPtr->pPinModeChangeableDetails,
      Port_GpConfigPtr->ucNoOfPinsModeChangeable);
  /* QAC Warning: END Msg(2:2814)-3 */
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  /* Check if the LpModeChangeablePin points to NULL POINTER */
  if (NULL_PTR != LpModeChangeablePin)
  #endif
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Get the pointer to the Set Mode group list */
    LpSetPinModeGroupStruct = ((Port_GpConfigPtr->pPinModeChangeableGroups)
      + (LpModeChangeablePin->ucSetModeIndex));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* MISRA Violation: END Msg(4:0488)-2 */
    /* If the Pin group is of Numeric type */
    /*Implements PORT_ESDD_UD_088*/
    /*Implements PORT_ESDD_UD_102*/
    #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
    if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
    {
      LpPortReg = Port_GpConfigPtr->pPortNumRegs;
    } /* End of LpModeChangeablePin->enPortType == PORT_GROUP_NUMERIC */
    else
    #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
    {
      #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
      LpPortReg = Port_GpConfigPtr->pPortJRegs;
      #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
    } /*End of (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)*/
    /* Check if the value of Mode passed is greater than 1 */
    if (PORT_DIO_IN < Mode)
    {
      /* Value of Mode passed is greater than 1. Hence add 14 to the value */
      LucMode = Mode + PORT_MODE_ADJUST;
    }
    else
    {
      /* Keep the same value of Mode */
      LucMode = Mode;
    }
    /* Set the bit position in the upper 16 bits (31-16) of the PSR
     * variable to 1 of the configured pin whose Mode has to be changed */
    LunSRRegContent.Tst_Port_Word.usMSWord = LpModeChangeablePin->usOrMask;
    /*Check for PMSR register availability */
    /* QAC Warning: START Msg(2:2814)-3 */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPMSRRegIndex)
    /* QAC Warning: END Msg(2:2814)-3 */
    {
      /*Implements PORT_ESDD_UD_088*/
      /*Implements PORT_ESDD_UD_102*/
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPMSRRegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /* Get the PMSR register Address */
        /*Implements PORT_ESDD_UD_017*/
        /*Implements AR_PN0062_FR_0026*/
        LpRegAddr = (volatile uint32*)
          (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPMSR));
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the PMSR register Address */
        /*Implements PORT_ESDD_UD_018*/
        /*Implements AR_PN0062_FR_0026*/
        /* QAC Warning: START Msg(2:2814)-3 */
        LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPMSR));
        /* QAC Warning: END Msg(2:2814)-3 */
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }
      /* Get the current direction on the requested pin, Input or Output */
      /* QAC Warning: START Msg(2:2814)-3 */
      LusCurrentDirection = (((uint16)(*LpRegAddr)) &
        LpModeChangeablePin->usOrMask);
      /* QAC Warning: END Msg(2:2814)-3 */
    }
    else
    {
       /*no action required */
    }
    /* Check for PMCSR register availability */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPMCSRRegIndex)
    {
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPMCSRRegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /* Get the PMCSR register Address */
        LpRegAddr = (volatile uint32*)(&(
          Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPMCSR));
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the PMCSR register Address */
        LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPMCSR));
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */

      }
      /* Get the current mode on the pin, Alternate or Dio */
      LusCurrentMode = (((uint16)(*LpRegAddr)) &
        LpModeChangeablePin->usOrMask);
    }
    else
    {
      /* No action required */
    }
    /* Update the PSR register to initial values only if requested mode is
       DIO_OUT and current mode on the pin is not DIO_OUT */
    if ((PORT_DIO_OUT == Mode) && ((LusCurrentMode | LusCurrentDirection) ==
      LpModeChangeablePin->usOrMask))
    {
      /* Check for PSR register availability */
      if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPSRRegIndex)
      {
        /* QAC Warning: START Msg(2:2824)-2 */
        /* MISRA Violation: START Msg(4:0488)-2 */
        /* Write Initial mode register value into Lower word of PSR variable */
        LunSRRegContent.Tst_Port_Word.usLSWord = ((LpPortReg +
          LpSetPinModeGroupStruct->ucPSRRegIndex)->usInitModeRegValPSR);
        /* QAC Warning: END Msg(2:2824)-2 */
        /* MISRA Violation: END Msg(4:0488)-2 */
        #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
        LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPSRRegIndex;
        if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
        {
          /* Get the PSR register Address */
          LpRegAddr = (volatile uint32*)
            (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPSR));
        }
        else
        #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
        {
          #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
          /* Get the PSR register Address */
          LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPSR));
          #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
        }
        /* An atomic access to Microcontroller registers by the use of an
         * exclusive area
        */
        /*Implements PORT075*/
        /* Enter critical section */
        /*Implements PORT_ESDD_UD_005*/
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
        /*Implements PORT138*/
        /* Bit value of Upper 16 bits (31-16) of PSR register is to set 1
         * Bit value of Lower 16 bits (15-0) of PSR register = Initial value
         * for the corresponding pin position
        */
        PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)
        /*Write verify on PSR register*/
        /* QAC Warning: START Msg(2:3892)-4 */
        PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr, (LunSRRegContent.ulRegContent
          & LpModeChangeablePin->usOrMask), (LunSRRegContent.ulRegContent >>
            PORT_SIXTEEN), PORT_SET_PIN_MODE_SID)
        /* QAC Warning: END Msg(2:3892)-4 */
        /* Exit critical section */
        /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
        /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
        #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
        PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
        #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
      }
      else
      {
        /* No action required */
      }
    }
    else
    {
      /* No action required */
    }
    Port_PinModeCtrlRegSet(Pin, LucMode);
  }/* End of (NULL_PTR != LpModeChangeablePin)*/
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  else
  {
    /*no action required */
  }
  #endif
}

#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"

#endif /* #if (PORT_SET_PIN_MODE_API == STD_ON)*/

/*Implements EAAR_PN0034_FR_0049, AR_PN0062_FR_0004*/
/*******************************************************************************
** Function Name         : Port_PinModeCtrlRegSet
**
** Service ID            : NA
**
** Description           : This is the internal function called from
**                         Port_PinModeHWRegSet to access the mode set/reset,
**                         mode control set/reset registers for changing the
**                         mode of a pin during runtime.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number,
**                         LucMode - New mode to be set on port pin.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**                         Port_SetPinMode should be called.
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Port_SearchModeChangeablePin,Dem_ReportErrorStatus
**                         SchM_Enter_Port_PORT_SET_PIN_MODE_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_PIN_MODE_PROTECTION,
**                         Port_PinModeFuncRegSet
**
** Registers Used        : PMSRn,PMCSRn,JPMSR0,JPMCSR0
*******************************************************************************/
/*Implements PORT_ESDD_UD_008*/
#if (PORT_SET_PIN_MODE_API == STD_ON)
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_098, PORT_ESDD_UD_080, PORT_ESDD_UD_111*/
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinModeCtrlRegSet
  (CONST(Port_PinType, AUTOMATIC) Pin,
    CONST(Port_PinModeType, AUTOMATIC) LucMode)

{
  /* Pointer to mode changeable pin data structure */
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpModeChangeablePin;
  /*Implements PORT_ESDD_UD_079*/
  /* Pointer to Alternate mode data structure */
  P2CONST (Port_PinModeChangeableGroups, AUTOMATIC, PORT_CONFIG_CONST)
    LpSetPinModeGroupStruct;

  /* Pointer to hold the register address of 32 bit value */
  P2VAR (volatile uint32, AUTOMATIC, PORT_CONFIG_CONST)LpRegAddr;

  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucSetPinModeGroupStructIdx;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  /*Local variable to refer the 32-bit word of PMCSR register*/
  /* MISRA Violation: START Msg(4:0759)-1 */
  Port_Pin_Direction LunSRRegContent;
  /* MISRA Violation: END Msg(4:0759)-1 */
  /* QAC Warning: START Msg(2:2814)-3 */
  /* Check whether the Pin is mode changeable at run time */
  LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
    Port_GpConfigPtr->pPinModeChangeableDetails,
      Port_GpConfigPtr->ucNoOfPinsModeChangeable);
  /* QAC Warning: END Msg(2:2814)-3 */
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  /*Check if the LpModeChangeablePin points to NULL POINTER*/
  if (NULL_PTR != LpModeChangeablePin)
  #endif
  {
    /* Get the pointer to the Set Mode group list */
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning: START Msg(2:2814)-3 */
    LpSetPinModeGroupStruct = ((Port_GpConfigPtr->pPinModeChangeableGroups)
      + (LpModeChangeablePin->ucSetModeIndex));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* MISRA Violation: END Msg(4:0488)-2 */

    /* If the Pin group is of Numeric type */
    /*Implements PORT_ESDD_UD_088*/
    /*Implements PORT_ESDD_UD_102*/

    /* Set the bit position in the upper 16 bits (31-16) of the PMCSR or PMSR
       variable to 1 of the configured pin whose Mode has to be changed */
    LunSRRegContent.Tst_Port_Word.usMSWord = LpModeChangeablePin->usOrMask;

    /* Check for PMSR register availability */
    /* QAC Warning: START Msg(2:2814)-3 */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPMSRRegIndex)
    /* QAC Warning: END Msg(2:2814)-3 */
    {
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPMSRRegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /* Get the PMSR register Address */
        /*Implements AR_PN0062_FR_0026*/
        /*Implements PORT_ESDD_UD_017*/
        LpRegAddr = (volatile uint32*)
          (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPMSR));
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the PMSR register Address */
        /*Implements PORT_ESDD_UD_019*/
        /* QAC Warning: START Msg(2:2814)-3 */
        LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPMSR));
        /* QAC Warning: END Msg(2:2814)-3 */
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }


      /* QAC Warning: START Msg(2:3892)-4 */
      /* Check whether the corresponding bit is to set or reset. */
      if (PORT_ZERO == (LucMode & PORT_BIT0_MASK))
      /* QAC Warning: END Msg(2:3892)-4 */
      {
        /* Write the requested direction into Lower word of PMSR variable
         * by using inverse of OR mask  */
        LunSRRegContent.Tst_Port_Word.usLSWord = ~LpModeChangeablePin->usOrMask;
      } /* End of PORT_ZERO == (LucMode & PORT_BIT0_MASK) */
      else
      {
        /* Write the requested direction into Lower word of PMSR variable
         * by using OR mask */
        LunSRRegContent.Tst_Port_Word.usLSWord =
          LpModeChangeablePin->usOrMask;
      }
      /*An atomic access to Microcontroller registers by the use of an
        exclusive area */
      /*Implements PORT075*/
      /* Enter critical section */
      /*Implements PORT_ESDD_UD_005*/
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

      /* Write the contents of Lower word and Upper word of PMSR variable
       * into the PMSR register address  */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(LpRegAddr,LunSRRegContent.ulRegContent)
      /* QAC Warning: END Msg(2:2814)-3 */

      /*Write verify check on PMSR register*/
      /* QAC Warning: START Msg(2:3892)-4 */
      PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr, (LunSRRegContent.ulRegContent &
        LpModeChangeablePin->usOrMask), (LunSRRegContent.ulRegContent >>
          PORT_SIXTEEN), PORT_SET_PIN_MODE_SID)
      /* QAC Warning: END Msg(2:3892)-4 */

      /* Exit critical section */
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
    }
    else
    {
      /* No action required */
    }
    Port_PinModeFuncRegSet(Pin, LucMode);
    /* Write PMCSR register. Check for register availability */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPMCSRRegIndex)
    {
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPMCSRRegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {

        /* Get the address of PMCSR register */
        LpRegAddr = (volatile uint32*)
          (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->ulPMCSR));

      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the address of PMCSR register */
        LpRegAddr = (volatile uint32*)(&(JPort_HardwareReg->ulPMCSR));
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }

      /* QAC Warning: START Msg(2:3892)-4 */
      if (PORT_ZERO == (LucMode & PORT_BIT3_MASK))
      /* QAC Warning: END Msg(2:3892)-4 */
      {
        /* Write the requested direction into Lower word of PMCSR variable
         * by using inverse of OR mask */
        LunSRRegContent.Tst_Port_Word.usLSWord = ~LpModeChangeablePin->usOrMask;
      } /* End of PORT_ZERO == (LucMode & PORT_BIT3_MASK)*/
      else
      {
        /* Write the requested direction into Lower word of PMCSR variable
         * by using OR mask */
        LunSRRegContent.Tst_Port_Word.usLSWord = LpModeChangeablePin->usOrMask;
      }

      /*An atomic access to Microcontroller registers by the use of an
        exclusive area */
      /*Implements PORT075*/
      /* Enter critical section */

      /*Implements PORT_ESDD_UD_005*/
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

      /* Write the corresponding 32 bit value to the PMCSR register */
      PORT_WRITE_REG_ONLY(LpRegAddr, LunSRRegContent.ulRegContent)

      /*Write verify check on PMCSR register*/
      /* QAC Warning: START Msg(2:3892)-4 */
      PORT_CHECK_WRITE_VERIFY_RUNTIME(LpRegAddr, (LunSRRegContent.ulRegContent &
        LpModeChangeablePin->usOrMask), (LunSRRegContent.ulRegContent >>
          PORT_SIXTEEN), PORT_SET_PIN_MODE_SID)
      /* QAC Warning: END Msg(2:3892)-4 */

      /* Exit critical section */
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

    } /* End of Write PMCSR register */
    else
    {
      /* No action required */
    }

  }
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  else
  {
    /* No action required */
  }
  #endif
}
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* #if (PORT_SET_PIN_MODE_API == STD_ON)*/

/*Implements EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049*/
/*******************************************************************************
** Function Name         : Port_PinModeFuncRegSet
**
** Service ID            : NA
**
** Description           : This is the internal function called from
**                         Port_PinModeCtrlRegSet to access the port function
**                         control register for changing the mode of a
**                         pin during runtime.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number,
**                         LucMode - New mode to be set on port pin.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**                         Port_SetPinMode should be called.
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Port_SearchModeChangeablePin,Dem_ReportErrorStatus
**                         SchM_Enter_Port_SET_PIN_MODE_PROTECTION,
**                         SchM_Exit_Port_SET_PIN_MODE_PROTECTION
**
** Registers Used        : PFCEn,PFCn,JPFCE0
*******************************************************************************/
/*Implements PORT_ESDD_UD_008*/
#if (PORT_SET_PIN_MODE_API == STD_ON)
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/* Implements PORT_ESDD_UD_099, PORT_ESDD_UD_080, PORT_ESDD_UD_109 */
/* Implements PORT_ESDD_UD_111 */
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinModeFuncRegSet
  (CONST(Port_PinType, AUTOMATIC) Pin,
    CONST(Port_PinModeType, AUTOMATIC) LucMode)
{
  /* Pointer to mode changeable pin data structure */
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpModeChangeablePin;
  /* Implements PORT_ESDD_UD_079 */
  /* Pointer to Alternate mode data structure */
  P2CONST (Port_PinModeChangeableGroups, AUTOMATIC, PORT_CONFIG_CONST)
    LpSetPinModeGroupStruct;
  /* Pointer to hold the register address 16 bit value */
  P2VAR (volatile uint16, AUTOMATIC, PORT_CONFIG_CONST) Lp16BitRegAddr;

  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucSetPinModeGroupStructIdx;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  uint16 LusRegMaskVal;
  /* Check whether the Pin is mode changeable at run time */
  /* QAC Warning: START Msg(2:2814)-3 */
  LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
    Port_GpConfigPtr->pPinModeChangeableDetails,
      Port_GpConfigPtr->ucNoOfPinsModeChangeable);
  /* QAC Warning: END Msg(2:2814)-3 */
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  /*Check if the LpModeChangeablePin points to NULL POINTER*/
  if (NULL_PTR != LpModeChangeablePin)
  #endif
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Get the pointer to the Set Mode group list */
    LpSetPinModeGroupStruct = ((Port_GpConfigPtr->pPinModeChangeableGroups)
      + (LpModeChangeablePin->ucSetModeIndex));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* MISRA Violation: END Msg(4:0488)-2 */
    /* Write PFCE register.Check for register availability */
    /* QAC Warning: START Msg(2:2814)-3 */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPFCERegIndex)
    /* QAC Warning: END Msg(2:2814)-3 */
    {
      /* If the Pin group is of Numeric type */
      /* Implements PORT_ESDD_UD_088 */
      /* Implements PORT_ESDD_UD_102 */
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPFCERegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /* Get the PFCE register Address */
        /* Implements AR_PN0062_FR_0026 */
        /* Implements PORT_ESDD_UD_017 */
        Lp16BitRegAddr = (volatile uint16*)
          (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->usPFCE));
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the PFCE register Address */
        /* Implements PORT_ESDD_UD_019 */
        /* QAC Warning: START Msg(2:2814)-3 */
        /* QAC Warning: START Msg(3:3305)-6 */
        /* MISRA Violation: START Msg(4:0310)-4 */
        Lp16BitRegAddr = (volatile uint16*)(&(JPort_HardwareReg->usPFCE));
        /* MISRA Violation: END Msg(4:0310)-4 */
        /* QAC Warning: END Msg(3:3305)-6 */
        /* QAC Warning: END Msg(2:2814)-3 */
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }
      /* An atomic access to Microcontroller registers by the use of an
       * exclusive area
      */
      /* Implements PORT075 */
      /* Enter critical section */

      /* Implements PORT_ESDD_UD_005 */
      /* Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030 */
      /* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066 */
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
      /* QAC Warning: START Msg(2:3892)-4 */
      /* Check whether the corresponding bit is to set or reset. */
      if (PORT_ZERO == (LucMode & PORT_BIT2_MASK))
      /* QAC Warning: END Msg(2:3892)-4 */
      {
        /* QAC Warning: START Msg(2:2814)-3 */
        /* If bit needs to reset, AND the register contents with
         * Inverse of OrMask
        */
        LusRegMaskVal = ((*Lp16BitRegAddr)&
          ((uint16)(~LpModeChangeablePin->usOrMask)));
        /* QAC Warning: END Msg(2:2814)-3 */
        PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)
        /* Write Verify Check for PFCE register*/
        PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
          PORT_SET_WORD, PORT_SET_PIN_MODE_SID)
      }
      else
      {
        LusRegMaskVal = ((*Lp16BitRegAddr) |
          ((uint16)LpModeChangeablePin->usOrMask));
        /* If bit needs to be set, OR the register contents with OrMask */
        PORT_WRITE_REG_ONLY(Lp16BitRegAddr, ((*Lp16BitRegAddr) |
          ((uint16)LpModeChangeablePin->usOrMask)))

        /* Write Verify Check for PFCE register*/
        PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
          PORT_SET_WORD, PORT_SET_PIN_MODE_SID)
      }
      /* Exit critical section */
      /* Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030 */
      /* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066 */
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON */

    } /* End of Write PFCE register */
    else
    {
      /* No action required */
    }
    /* Write PFC register.Check for register availability */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPFCRegIndex)
    {
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPFCRegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /* Get the PFC register Address */
        /* Implements AR_PN0062_FR_0026 */
        /* Implements PORT_ESDD_UD_017 */
        Lp16BitRegAddr = (volatile uint16*)
            (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->usPFC));
      }
      else
      #endif
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* Get the PFC register Address */
        /* Implements PORT_ESDD_UD_019 */
        /* QAC Warning: START Msg(3:3305)-6 */
        /* MISRA Violation: START Msg(4:0310)-4 */
        Lp16BitRegAddr = (volatile uint16*)(&(JPort_HardwareReg->usPFC));
        /* MISRA Violation: END Msg(4:0310)-4 */
        /* QAC Warning: END Msg(3:3305)-6 */
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }
      /* An atomic access to Microcontroller registers by the use of an
       * exclusive area
      */
      /* Implements PORT075 */
      /* Enter critical section */
      /* Implements PORT_ESDD_UD_005*/
      /* Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030 */
      /* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066 */
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

      /* QAC Warning: START Msg(2:3892)-4 */
      /* Check whether the corresponding bit is to set or reset. */
      if (PORT_ZERO == (LucMode & PORT_BIT1_MASK))
      /* QAC Warning: END Msg(2:3892)-4 */
      {
        /* If bit needs to be reset, AND the register contents with OrMask */
        LusRegMaskVal = ((*Lp16BitRegAddr) &
          ((uint16)(~LpModeChangeablePin->usOrMask)));

        PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)

        /* Write Verify Check for PFC register*/
        PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
          PORT_SET_WORD, PORT_SET_PIN_MODE_SID)

      } /* End of PORT_ZERO == (LucMode & PORT_BIT1_MASK) */
      else
      {
        /* If bit needs to be set, OR the register contents with OrMask */
        LusRegMaskVal = ((*Lp16BitRegAddr) |
          ((uint16)LpModeChangeablePin->usOrMask));

        PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)

        /* Write Verify Check for PFC register*/
        PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
          PORT_SET_WORD, PORT_SET_PIN_MODE_SID)
      }
      /* Exit critical section */
      /* Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030 */
      /* Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066 */
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
    }
    else
    {
      /* No action required */
    }
  }/* End of (NULL_PTR != LpModeChangeablePin)*/
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  else
  {
    /* No action required */
  }
  #endif
}
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif  /* #if (PORT_SET_PIN_MODE_API == STD_ON)) */

/*******************************************************************************
** Function Name         : Port_PinDefModeDetCheck
**
** Service ID            : NA
**
** Description           : This function used to check the DET error conditions
**                         of Port_SetPinDefaultMode() Api.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Std_ReturnType
**
** Preconditions         : Port_SetPinDefaultMode() Api should be called.
**
** Global Variables Used : Port_GblDriverStatus, Port_GpConfigPtr
**
** Functions Invoked     : Det_ReportError,
**                         Port_SearchModeChangeablePin
**
** Registers Used        : None
*******************************************************************************/
/* Implements PORT_ESDD_UD_106 */
/* Implements PORT100, PORT107, PORT211, PORT123_Conf, EAAR_PN0034_FR_0049 */
#if (PORT_DEV_ERROR_DETECT == STD_ON)
/* Implements PORT_ESDD_UD_008, PORT_ESDD_UD_031 */
#if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
                     (PORT_SET_PIN_MODE_API == STD_ON))
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/* Implements PORT_ESDD_UD_100, PORT_ESDD_UD_080, PORT_ESDD_UD_109 */
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinDefModeDetCheck
  (CONST(Port_PinType, AUTOMATIC) Pin)
{
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpModeChangeablePin;
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  /* Initialize the return value */
  LucReturnValue = E_OK;
  /*Implements PORT077*/
  /* Check whether the PORT module is initialized */
  if (PORT_UNINITIALIZED == Port_GblDriverStatus)
  {
    /* Implements PORT146 */
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_DEFAULT_MODE_SID, PORT_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* Port_GblDriverStatus == PORT_UNINITIALIZED */
  else
  {
    /* No action required */
  }
  /* Check whether the requested PIN number is invalid */
  /* Implements PORT_ESDD_UD_081 */
  if (PORT_TOTAL_NUMBER_OF_PINS <= Pin)
  {
    /* Implements PORT146 */
    /* Report to DET */
    (void)Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_DEFAULT_MODE_SID, PORT_E_PARAM_PIN);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* End of PORT_TOTAL_NUMBER_OF_PINS <= Pin */
  else
  {
    /* No action required */
  }
  if (E_OK == LucReturnValue)
  {
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Check whether the Pin mode is changeable at run time */
    LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
      Port_GpConfigPtr->pPinModeChangeableDetails,
        Port_GpConfigPtr->ucNoOfPinsModeChangeable);
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Return value LpModeChangeablePin - Changeable, NULL - Unchangeable */
    if (NULL_PTR == LpModeChangeablePin)
    {
      /* Implements PORT146 */
      /* Report to DET */
      (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
        PORT_SET_PIN_DEFAULT_MODE_SID, PORT_E_MODE_UNCHANGEABLE);
      /* Set Return Value as E_NOT_OK */
      LucReturnValue = E_NOT_OK;
    } /* End of LpModeChangeablePin == NULL_PTR */
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  } /* End of LucReturnValue == E_NOT_OK */
  return(LucReturnValue);
}
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif  /* #if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
         * (PORT_SET_PIN_MODE_API == STD_ON))
        */
#endif /*#if (PORT_DEV_ERROR_DETECT == STD_ON) */
/* Implements EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049 */
/*******************************************************************************
** Function Name         : Port_PinDefModeFuncRegSet
**
** Service ID            : NA
**
** Description           : This function will set the function control registers
**                         to change the mode of a port pin during runtime. It
**                         will change the mode of the pin to default mode set
**                         by the configuration at the time of Port_Init().
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : Ports should be initialized by calling Port_init().
**                         Port_SetPinDefaultMode() should be invoked during
**                         runtime.
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Port_SearchModeChangeablePin,Dem_ReportErrorStatus
**                         SchM_Enter_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION,
**                         SchM_Exit_Port_PORT_SET_PIN_DEFAULT_MODE_PROTECTION
**
** Registers Used        : PFCEn,PFCn,JPFCE0
*******************************************************************************/
/*Implements PORT_ESDD_UD_008*/
#if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
                     (PORT_SET_PIN_MODE_API == STD_ON))
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/*Implements PORT_ESDD_UD_101, PORT_ESDD_UD_076*/
STATIC FUNC (void, PORT_PRIVATE_CODE) Port_PinDefModeFuncRegSet
  (CONST(Port_PinType, AUTOMATIC) Pin)
{
  /*Implements PORT_ESDD_UD_079, PORT_ESDD_UD_080*/
  /* Pointer to mode changeable pin data structure */
  P2CONST (Port_PinModeChangeableDetails, AUTOMATIC, PORT_CONFIG_CONST)
    LpModeChangeablePin;
  /* Pointer to Alternate mode data structure */
  P2CONST (Port_PinModeChangeableGroups, AUTOMATIC, PORT_CONFIG_CONST)
    LpSetPinModeGroupStruct;
  /* Pointer to Alternate Function Control Registers Data structure */
  P2CONST (volatile Port_FuncCtrlRegs, AUTOMATIC, PORT_CONFIG_CONST)
    LpFuncCtrlReg;
  /* Pointer to hold the register address 16 bit value */
  P2VAR (volatile uint16, AUTOMATIC, PORT_CONFIG_CONST) Lp16BitRegAddr;
  uint16 LusOrMask;
  uint16 LusRegMaskVal;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucSetPinModeGroupStructIdx;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  /* QAC Warning: START Msg(2:2814)-3 */
  /* Check whether the Pin is mode changeable at run time */
  LpModeChangeablePin = Port_SearchModeChangeablePin (Pin,
    Port_GpConfigPtr->pPinModeChangeableDetails,
      Port_GpConfigPtr->ucNoOfPinsModeChangeable);
  /* QAC Warning: END Msg(2:2814)-3 */
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  /*Check if the LpModeChangeablePin points to NULL POINTER*/
  if (NULL_PTR != LpModeChangeablePin)
  #endif
  {
    /* MISRA Violation: START Msg(4:0488)-2 */
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Get the pointer to the Set Mode group list */
    LpSetPinModeGroupStruct = ((Port_GpConfigPtr->pPinModeChangeableGroups)
      + (LpModeChangeablePin->ucSetModeIndex));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* MISRA Violation: END Msg(4:0488)-2 */
    /* If the Pin group is of Numeric type */
    /*Implements PORT_ESDD_UD_088*/
    /*Implements PORT_ESDD_UD_102*/
    /*Implements AR_PN0062_FR_0023*/
    #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
    if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
    {
      LpFuncCtrlReg = Port_GpConfigPtr->pPortNumFuncCtrlRegs;

    } /* End of LpModeChangeablePin->enPortType == PORT_GROUP_NUMERIC */
    else
    #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
    {
      #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
      LpFuncCtrlReg = Port_GpConfigPtr->pPortJFuncCtrlRegs;
      #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */

    } /* End of LpModeChangeablePin->enPortType == PORT_GROUP_JTAG */
    /*Get the OrMaskValue*/
    LusOrMask = LpModeChangeablePin->usOrMask;
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Write PFCE register.Check for register availability */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPFCERegIndex)
    /* QAC Warning: END Msg(2:2814)-3 */
    {
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPFCERegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /*Implements PORT_ESDD_UD_017*/
        /*Implements AR_PN0062_FR_0026*/
        /* Get the PFCE register Address */
        Lp16BitRegAddr = (volatile uint16*)
          (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->usPFCE));
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /*Implements PORT_ESDD_UD_018*/
        /*Implements AR_PN0062_FR_0026*/
        /* Get the PFCE register Address */
        /* QAC Warning: START Msg(2:2814)-3 */
        /* QAC Warning: START Msg(3:3305)-6 */
        /* MISRA Violation: START Msg(4:0310)-4 */
        Lp16BitRegAddr = (volatile uint16*)(&(JPort_HardwareReg->usPFCE));
        /* MISRA Violation: END Msg(4:0310)-4 */
        /* QAC Warning: END Msg(3:3305)-6 */
        /* QAC Warning: END Msg(2:2814)-3 */
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }
      /* Enter critical section */
      /*Implements PORT_ESDD_UD_005*/
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
      /* QAC Warning: START Msg(2:2824)-2 */
      /* QAC Warning: START Msg(2:2814)-3 */
      /* MISRA Violation: START Msg(4:0488)-2 */
      /* If bit needs to be set, OR the register contents with OrMask */
      LusRegMaskVal = (((*Lp16BitRegAddr)&
        (uint16)(~LusOrMask)) | (((uint16)(LpFuncCtrlReg +
           LpSetPinModeGroupStruct->ucPFCERegIndex)->usInitModeRegValPFCE) &
             LusOrMask));
      /* QAC Warning: END Msg(2:2824)-2 */
      /* QAC Warning: END Msg(2:2814)-3 */
      /* MISRA Violation: END Msg(4:0488)-2 */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)
      /*Write verify check on PFCE register*/
      PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
        PORT_SET_WORD, PORT_SET_PIN_DEFAULT_MODE_SID)
      /* Exit critical section */
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/
    } /* End of Write PFCE register */
    else
    {
      /* No action required */
    }
    /* Write PFC register.Check for register availability */
    if (PORT_REG_NOTAVAILABLE != LpSetPinModeGroupStruct->ucPFCRegIndex)
    {
      #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
      LucSetPinModeGroupStructIdx = LpSetPinModeGroupStruct->ucPFCRegIndex;
      if (PORT_GROUP_NUMERIC == LpModeChangeablePin->enPortType)
      {
        /* Get the PFC register Address */
        Lp16BitRegAddr = (volatile uint16*)
          (&(Port_HardwareReg[LucSetPinModeGroupStructIdx]->usPFC));
      }
      else
      #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
      {
        #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
        /* QAC Warning: START Msg(3:3305)-6 */
        /* MISRA Violation: START Msg(4:0310)-4 */
        /* Get the PFC register Address */
        Lp16BitRegAddr = (volatile uint16*)(&(JPort_HardwareReg->usPFC));
        /* MISRA Violation: END Msg(4:0310)-4 */
        /* QAC Warning: END Msg(3:3305)-6 */
        #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
      }
      /* Enter critical section */
      /*Implements PORT_ESDD_UD_005*/
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_ENTER_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

      /* MISRA Violation: START Msg(4:0488)-2 */
      /* If bit needs to be set, OR the register contents with OrMask */
      LusRegMaskVal = (((*Lp16BitRegAddr)&(uint16)(~LusOrMask)) |
       (((uint16)(LpFuncCtrlReg +
         LpSetPinModeGroupStruct->ucPFCRegIndex)->usInitModeRegValPFC) &
           LusOrMask));

      PORT_WRITE_REG_ONLY(Lp16BitRegAddr, LusRegMaskVal)
      /* MISRA Violation: END Msg(4:0488)-2 */
      /*Write verify check on PFC register*/
      PORT_CHECK_WRITE_VERIFY_RUNTIME(Lp16BitRegAddr, LusRegMaskVal,
        PORT_SET_WORD, PORT_SET_PIN_DEFAULT_MODE_SID)

      /* Exit critical section */
      /*Implements EAAR_PN0034_FR_0013, EAAR_PN0034_FR_0030*/
      /*Implements EAAR_PN0034_FR_0061, EAAR_PN0034_FR_0066*/
      #if (PORT_CRITICAL_SECTION_PROTECTION == STD_ON)
      PORT_EXIT_CRITICAL_SECTION(PORT_SET_PIN_DEFAULT_MODE_PROTECTION);
      #endif /* End of CRITICAL_SECTION_PROTECTION == STD_ON*/

    } /* End of Write PFC register */
    else
    {
      /* No action required */
    }

  }/*End of (NULL_PTR != LpModeChangeablePin)*/
  #if (PORT_DEV_ERROR_DETECT == STD_OFF)
  else
  {
      /* No action required */
  }
  #endif
}
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif  /*#if ((PORT_SET_PIN_DEFAULT_MODE_API == STD_ON) && \
                     (PORT_SET_PIN_MODE_API == STD_ON))*/

/*Implements PORT100, PORT107, PORT211, PORT123_Conf, EAAR_PN0034_FR_0049*/
/*******************************************************************************
** Function Name         : Port_PinDirectionDetCheck
**
** Service ID            : NA
**
** Description           : This service check the DET error condition of
**                         Port_SetPinDirection API.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number,
**                         Direction - Port Pin Direction.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Std_ReturnType
**
** Preconditions         : Ports should be initialized by calling Port_Init().
**                         Port_SetPinDirection should be called
**
** Global Variables Used : Port_GblDriverStatus, Port_GpConfigPtr
**
** Functions Invoked     : Det_ReportError,
**                         Port_SearchDirChangeablePin
**
** Registers Used        : None
*******************************************************************************/
/*Implements PORT086*/
/*Implements PORT_ESDD_UD_082*/
/*Implements PORT_ESDD_UD_106*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)
#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/*Implements PORT_ESDD_UD_095, PORT_ESDD_UD_109*/
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinDirectionDetCheck
  (CONST(Port_PinType, AUTOMATIC) Pin )
{
  P2CONST(volatile Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_CONST)
    LpChangeablePinDet;
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  /* Initialize the return value */
  LucReturnValue = E_OK;
  /* Check whether the PORT module is initialized */
  /*Implements PORT087*/
  if (PORT_UNINITIALIZED == Port_GblDriverStatus)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
       PORT_SET_PIN_DIR_SID, PORT_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  }
  else
  {
    /* No action required */
  }
  /*Implements PORT087*/
  /* Check whether the requested PIN number is invalid */
  /*Implements PORT_ESDD_UD_081*/
  if (PORT_TOTAL_NUMBER_OF_PINS <= Pin)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_DIR_SID, PORT_E_PARAM_PIN);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  }/* End of PORT_TOTAL_NUMBER_OF_PINS <= Pin */
  else
  {
    /* No action required */
  }
  if (E_OK == LucReturnValue)
  {
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Check whether the Pin direction is changeable at run time */
    LpChangeablePinDet = Port_SearchDirChangeablePin (Pin,
      Port_GpConfigPtr->pPinDirChangeable,
        Port_GpConfigPtr->ucNoOfPinsDirChangeable);
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Return value LpChangeablePinDet - Changeable, NULL - Unchangeable */
    if (NULL_PTR == LpChangeablePinDet)
    {
      /*Implements PORT087*/
      /*Implements PORT146*/
      /* Report to DET */
      (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
         PORT_SET_PIN_DIR_SID, PORT_E_DIRECTION_UNCHANGEABLE);
      /* Set Return Value as E_NOT_OK */
      LucReturnValue = E_NOT_OK;
    }
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  }
  return(LucReturnValue);
}
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif /* #if (PORT_SET_PIN_DIRECTION_API == STD_ON)*/
#endif /*#if (PORT_DEV_ERROR_DETECT == STD_ON)*/
/*******************************************************************************
** Function Name         : Port_PinDefDirDetCheck
**
** Service ID            : NA
**
** Description           : This function used to check the DET error conditions
**                         of Port_SetPinDefaultDirection() Api.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Reentrant
**
** Input Parameters      : Pin - Port Pin ID number.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : Std_ReturnType
**
** Preconditions         : Port_SetPinDefaultDirection() Api should be called.
**
** Global Variables Used : Port_GblDriverStatus, Port_GpConfigPtr
**
** Functions Invoked     : Det_ReportError,
**                         Port_SearchModeChangeablePin
**
** Registers Used        : None
*******************************************************************************/
/*Implements PORT_ESDD_UD_106*/
/*Implements PORT100, PORT107, PORT211, PORT123_Conf, EAAR_PN0034_FR_0049*/
#if (PORT_DEV_ERROR_DETECT == STD_ON)
/*Implements PORT_ESDD_UD_008, PORT_ESDD_UD_029*/
#if ((PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON) && \
                     (PORT_SET_PIN_DIRECTION_API == STD_ON))

#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/*Implements PORT_ESDD_UD_094, PORT_ESDD_UD_109*/
STATIC FUNC (Std_ReturnType, PORT_PRIVATE_CODE) Port_PinDefDirDetCheck
  (CONST(Port_PinType, AUTOMATIC) Pin)
{
  P2CONST(volatile Port_PinsDirChangeable, AUTOMATIC, PORT_CONFIG_CONST)
    LpChangeablePinDet;
  /* Variable to store the return value and Initialize the return value */
  Std_ReturnType LucReturnValue;
  /* Initialize the return value */
  LucReturnValue = E_OK;
  /*Implements PORT077*/
  /* Check whether the PORT module is initialized */
  if (PORT_UNINITIALIZED == Port_GblDriverStatus)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_DEFAULT_DIR_SID, PORT_E_UNINIT);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* Port_GblDriverStatus == PORT_UNINITIALIZED */
  else
  {
    /* No action required */
  }
  /* Check whether the requested PIN number is invalid */
  /*Implements PORT_ESDD_UD_081*/
  if (PORT_TOTAL_NUMBER_OF_PINS <= Pin)
  {
    /*Implements PORT146*/
    /* Report to DET */
    (void)Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_SET_PIN_DEFAULT_DIR_SID, PORT_E_PARAM_PIN);
    /* Set Return Value as E_NOT_OK */
    LucReturnValue = E_NOT_OK;
  } /* End of PORT_TOTAL_NUMBER_OF_PINS <= Pin */
  else
  {
    /* No action required */
  }
  if (E_OK == LucReturnValue)
  {
    /* QAC Warning: START Msg(2:2814)-3 */
    /* Check whether the Pin direction is changeable at run time */
    LpChangeablePinDet = Port_SearchDirChangeablePin (Pin,
      Port_GpConfigPtr->pPinDirChangeable,
        Port_GpConfigPtr->ucNoOfPinsDirChangeable);
    /* QAC Warning: END Msg(2:2814)-3 */

    /* Return value LpChangeablePinDet - Changeable, NULL - Unchangeable */
    if (NULL_PTR == LpChangeablePinDet)
    {
      /*Implements PORT146*/
      /* Report to DET */
      (void)Det_ReportError (PORT_MODULE_ID, PORT_INSTANCE_ID,
        PORT_SET_PIN_DEFAULT_DIR_SID, PORT_E_DIRECTION_UNCHANGEABLE);
      /* Set Return Value as E_NOT_OK */
      LucReturnValue = E_NOT_OK;
    } /* End of NULL_PTR ==  LpChangeablePinDet*/
    else
    {
      /* No action required */
    }
  }
  else
  {
    /* No action required */
  } /* End of LucReturnValue == E_NOT_OK */
  return(LucReturnValue);
}
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
#endif  /*#if ((PORT_SET_PIN_DEFAULT_DIRECTION_API == STD_ON) && \
                     (PORT_SET_PIN_DIRECTION_API == STD_ON))*/
#endif /*#if (PORT_DEV_ERROR_DETECT == STD_ON)*/

/*Implements EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049, AR_PN0062_FR_0004*/
/*Implements AR_PN0062_FR_0004, AR_PN0062_FR_0060*/
/*******************************************************************************
** Function Name         : Port_FuncCtrlRegInit
**
** Service ID            : Not Applicable
**
** Description           : This function used to initialize all the registers of
**                         numeric, alphabetic and JTag ports.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : LenGroupType - Port group type.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : Port_RegSetInit
**
** Registers Used        : PUn, PDn, PISn, PFCn, PFCEn, PIPCn,
**                         JPU0, JPD0, JPIS0, JPFCE0
*******************************************************************************/
/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"

/*Implements PORT_ESDD_UD_088*/
/*Implements PORT_ESDD_UD_102*/
#if ((PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) || \
     (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON))
/* The function Port_Init shall initialize all controller registers */
/*Implements PORT113, PORT002*/

/*Implements PORT_ESDD_UD_001, PORT_ESDD_UD_092*/
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_FuncCtrlRegInit
  (CONST(Port_GroupType,AUTOMATIC) LenGroupType)
{
  P2CONST(Port_Regs, AUTOMATIC, PORT_CONFIG_CONST)LpPortReg;
  P2CONST(volatile Port_FuncCtrlRegs, AUTOMATIC, PORT_CONFIG_CONST)
    LpFuncCtrlReg;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  uint8 LucPortIdx;
  P2VAR(volatile uint16, AUTOMATIC, PORT_CONFIG_DATA) Lp16BitRegAddress;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
  P2VAR(volatile uint8, AUTOMATIC, PORT_CONFIG_DATA) Lp8BitRegAddress;
  #endif  /* #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) */
  /*Implements PORT_ESDD_UD_088*/
  /*Implements PORT_ESDD_UD_102*/
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)

  if (PORT_GROUP_NUMERIC == LenGroupType)
  {
    /* Get the pointer to the Numeric Port registers */
    /* QAC Warning: START Msg(2:2814)-3 */
    LpPortReg = Port_GpConfigPtr->pPortNumRegs;
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Get the pointer to the Numeric Function Control registers */
    LpFuncCtrlReg = Port_GpConfigPtr->pPortNumFuncCtrlRegs;
    for ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT; LucPortIdx++ )
    {
      /* Get the register address */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPU));
      /* Write the register value to the corresponding register */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpPortReg->usInitModeRegValPU)
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpPortReg->usInitModeRegValPU, PORT_SET_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPD));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpPortReg->usInitModeRegValPD)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpPortReg->usInitModeRegValPD, PORT_SET_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPIS));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpPortReg->usInitModeRegValPIS)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpPortReg->usInitModeRegValPIS, PORT_SET_WORD, PORT_INIT_SID)
      /* Get the pointer to the function control registers */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPFC));
      /* Write the register value to the corresponding register */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpFuncCtrlReg->usInitModeRegValPFC)
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpFuncCtrlReg->usInitModeRegValPFC, PORT_SET_WORD, PORT_INIT_SID)
      /* Get the pointer to the function control registers */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPFCE));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress,
        LpFuncCtrlReg->usInitModeRegValPFCE)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpFuncCtrlReg->usInitModeRegValPFCE, PORT_SET_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPIPC));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpPortReg->usInitModeRegValPIPC)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpPortReg->usInitModeRegValPIPC, PORT_SET_WORD,PORT_INIT_SID)
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpPortReg++;
      /* MISRA Violation: END Msg(4:0489)-3 */
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpFuncCtrlReg++;
     /* MISRA Violation: END Msg(4:0489)-3 */
    }/* End of for loop ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT;
      * LucPortIdx++ )
     */
  } /* End of LenGroupType == PORT_GROUP_NUMERIC */
  else
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  {
    #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
    /* Get the pointer to the JTag Port registers */
    LpPortReg = Port_GpConfigPtr->pPortJRegs;
    /* Get the pointer to the JTag Function Control registers */
    LpFuncCtrlReg = Port_GpConfigPtr->pPortJFuncCtrlRegs;
    /* Get the register address */
    /* QAC Warning: START Msg(2:2814)-3 */
    Lp8BitRegAddress = (volatile uint8*)(&(JPort_HardwareReg->usPU));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write the register value to the corresponding register */
    /* QAC Warning: START Msg(2:2814)-3 */
    PORT_WRITE_REG_ONLY(Lp8BitRegAddress, (uint8)LpPortReg->usInitModeRegValPU)
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write Verify Check for corresponding Register */
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPU, PORT_SET_BYTE,PORT_INIT_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    /* Get the register address */
    Lp8BitRegAddress = (volatile uint8*)(&(JPort_HardwareReg->usPD));
     /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp8BitRegAddress, (uint8)LpPortReg->usInitModeRegValPD)
    /* Write Verify Check for corresponding Register */
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp8BitRegAddress,
    (uint8)LpPortReg->usInitModeRegValPD, PORT_SET_BYTE,PORT_INIT_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    /* Get the register address */
    Lp8BitRegAddress = (volatile uint8*)(&(JPort_HardwareReg->usPIS));
    /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp8BitRegAddress, (uint8)LpPortReg->usInitModeRegValPIS)
    /* Write Verify Check for corresponding Register */
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPIS, PORT_SET_BYTE,PORT_INIT_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    /* Get the pointer to the function control registers */
    Lp8BitRegAddress = (volatile uint8*)(&(JPort_HardwareReg->usPFCE));
    /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp8BitRegAddress,
      (uint8)LpFuncCtrlReg->usInitModeRegValPFCE)
    /* Write Verify Check for corresponding Register */
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp8BitRegAddress,
      (uint8)LpFuncCtrlReg->usInitModeRegValPFCE, PORT_SET_BYTE, PORT_INIT_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
  }
  /* Invoke the internal function to initialize PSRn, PMSRn, PMCSRn, PIBCn,
   * and PINVn registers of Numeric and JTag ports
  */
  Port_RegSetInit(LenGroupType);
} /* End of API Port_FuncCtrlRegInit */
#endif
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*Implements EAAR_PN0034_FR_0081, EAAR_PN0034_FR_0049, AR_PN0062_FR_0004*/
/*Implements AR_PN0062_FR_0004, AR_PN0062_FR_0060*/
/*******************************************************************************
** Function Name         : Port_RegSetInit
**
** Service ID            : Not Applicable
**
** Description           : This function used to initialize all the registers of
**                         numeric, alphabetic and JTag ports.
**
** Sync/Async            : Synchronous
**
** Reentrancy            : Non-Reentrant
**
** Input Parameters      : LenGroupType - Port group type.
**
** InOut Parameters      : None
**
** Output Parameters     : None
**
** Return Parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : Port_GpConfigPtr
**
** Functions Invoked     : None
**
** Registers Used        : PSRn, PMSRn, PMCSRn, PIBCn, PINVn,
**                         JPSR0, JPMSR0, JPMCSR0, JPIBC0, JPINV0
*******************************************************************************/
/*Implements PORT131*/
#define PORT_59_RENESAS_START_SEC_PRIVATE_CODE
#include "MemMap.h"
/*Implements PORT_ESDD_UD_088*/
/*Implements PORT_ESDD_UD_102*/
#if ((PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) || \
  (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON))
/* The function Port_Init shall initialize all controller registers */
/*Implements PORT113, PORT002*/
/*Implements PORT_ESDD_UD_001, PORT_ESDD_UD_076, PORT_ESDD_UD_077*/
/*Implements PORT_ESDD_UD_091*/
STATIC FUNC(void, PORT_PRIVATE_CODE) Port_RegSetInit
  (CONST(Port_GroupType, AUTOMATIC) LenGroupType)
{
  P2CONST(Port_Regs, AUTOMATIC, PORT_CONFIG_CONST)LpPortReg;
  P2CONST(volatile Port_FuncCtrlRegs, AUTOMATIC, PORT_CONFIG_CONST)
                                                             LpFuncCtrlReg;
  P2CONST(volatile Port_PMSRRegs, AUTOMATIC, PORT_CONFIG_CONST)LpPMSRReg;
  P2VAR(volatile uint32, AUTOMATIC, PORT_CONFIG_DATA) Lp32BitRegAddress;
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  P2VAR(volatile uint16, AUTOMATIC, PORT_CONFIG_DATA) Lp16BitRegAddress;
  uint8 LucPortIdx;
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
  P2VAR(volatile uint8, AUTOMATIC, PORT_CONFIG_DATA) Lp8BitRegAddress;
  #endif  /* #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) */
  /*Implements PORT_ESDD_UD_088*/
  /*Implements PORT_ESDD_UD_102*/
  #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON)
  if (PORT_GROUP_NUMERIC == LenGroupType)
  {
    /* Get the pointer to the Numeric Port registers */
    /* QAC Warning: START Msg(2:2814)-3 */
    LpPortReg = Port_GpConfigPtr->pPortNumRegs;
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Get the pointer to the Numeric Function Control registers */
    LpFuncCtrlReg = Port_GpConfigPtr->pPortNumFuncCtrlRegs;
    /* Get the pointer to the Numeric PMSR registers */
    LpPMSRReg = Port_GpConfigPtr->pPortNumPMSRRegs;
    for ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT; LucPortIdx++ )
    {
      /*Implements AR_PN0062_FR_0026*/
      /*Implements PORT_ESDD_UD_017*/
      /* Get the register address */
      Lp32BitRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPSR));
      /* Write the register value to the corresponding register with upper 16
       * bit set to one
       */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp32BitRegAddress,
        ((uint32)LpPortReg->usInitModeRegValPSR | PORT_MSB_MASK))
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
        ((uint32)LpPortReg->usInitModeRegValPSR),
          PORT_SET_LONG_WORD, PORT_INIT_SID)
      /* Get the pointer to the function control registers */
      Lp32BitRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPMCSR));
      /* Write the register value to the corresponding register with upper 16
       * bit set to one
       */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp32BitRegAddress,
        ((uint32)(LpFuncCtrlReg->usInitModeRegValPMCSR) | PORT_MSB_MASK))
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
        ((uint32)LpFuncCtrlReg->usInitModeRegValPMCSR),
          PORT_SET_LONG_WORD, PORT_INIT_SID)
      /* Get the pointer to the PMSR registers */
      Lp32BitRegAddress = (volatile uint32*)
        (&(Port_HardwareReg[LucPortIdx]->ulPMSR));
      /* Write the register value to the corresponding register with upper 16
       * bit set to one
       */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp32BitRegAddress,
        ((uint32)(LpPMSRReg->usInitModeRegVal) | PORT_MSB_MASK))
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
        ((uint32)LpPMSRReg->usInitModeRegVal),
          PORT_SET_LONG_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPIBC));
      /* Write the register value to the corresponding register */
      /* QAC Warning: START Msg(2:2814)-3 */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpPortReg->usInitModeRegValPIBC)
      /* QAC Warning: END Msg(2:2814)-3 */
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpPortReg->usInitModeRegValPIBC, PORT_SET_WORD, PORT_INIT_SID)
      /* Get the register address */
      Lp16BitRegAddress = (volatile uint16*)
        (&(Port_HardwareReg[LucPortIdx]->usPINV));
      /* Write the register value to the corresponding register */
      PORT_WRITE_REG_ONLY(Lp16BitRegAddress, LpPortReg->usInitModeRegValPINV)
      /* Write Verify Check for corresponding Register */
      PORT_CHECK_WRITE_VERIFY_INIT(Lp16BitRegAddress,
        LpPortReg->usInitModeRegValPINV, PORT_SET_WORD, PORT_INIT_SID)
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpPortReg++;
      /* MISRA Violation: END Msg(4:0489)-3 */
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpPMSRReg++;
      /* MISRA Violation: END Msg(4:0489)-3 */
      /* MISRA Violation: START Msg(4:0489)-3 */
      LpFuncCtrlReg++;
      /* MISRA Violation: END Msg(4:0489)-3 */
    }/* End of for ( LucPortIdx = PORT_ZERO; LucPortIdx < NUMBEROF_PORT;
      * LucPortIdx++ )
     */
  } /* End of LenGroupType == PORT_GROUP_NUMERIC */
  else
  #endif  /* #if (PORT_NUM_PORT_GROUPS_AVAILABLE == STD_ON) */
  {
    #if (PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON)
    /* Get the pointer to the JTag Port registers */
    LpPortReg = Port_GpConfigPtr->pPortJRegs;
    /* Get the pointer to the JTag Function Control registers */
    LpFuncCtrlReg = Port_GpConfigPtr->pPortJFuncCtrlRegs;
    /* Get the pointer to the JTag PMSR registers */
    LpPMSRReg = Port_GpConfigPtr->pPortJPMSRRegs;
    /*Implements PORT_ESDD_UD_019*/
    /* Get the register address */
    /* QAC Warning: START Msg(2:2814)-3 */
    Lp32BitRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPSR));
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write the register value to the corresponding register with upper 16
     * bit set to one
     */
    PORT_WRITE_REG_ONLY(Lp32BitRegAddress,
      ((uint32)(LpPortReg->usInitModeRegValPSR) | PORT_MSB_MASK))
    /* Write Verify Check for corresponding Register */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
      ((uint32)(LpPortReg->usInitModeRegValPSR)),
        PORT_SET_LONG_WORD, PORT_INIT_SID)
    /* Get the pointer to the function control registers */
    Lp32BitRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPMCSR));
    /* Write the register value to the corresponding register with upper 16
     * bit set to one
     */
    PORT_WRITE_REG_ONLY(Lp32BitRegAddress,
               ((uint32)(LpFuncCtrlReg->usInitModeRegValPMCSR) | PORT_MSB_MASK))
    /* Write Verify Check for corresponding Register */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
      ((uint32)(LpFuncCtrlReg->usInitModeRegValPMCSR)),
        PORT_SET_LONG_WORD, PORT_INIT_SID)
    /* Get the pointer to the PMSR registers */
    Lp32BitRegAddress = (volatile uint32*)(&(JPort_HardwareReg->ulPMSR));
    /* Write the register value to the corresponding register with upper 16
     * bit set to one
     */
    PORT_WRITE_REG_ONLY(Lp32BitRegAddress,
      ((uint32)(LpPMSRReg->usInitModeRegVal) | PORT_MSB_MASK))
    /* Write Verify Check for corresponding Register */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp32BitRegAddress,
      ((uint32)(LpPMSRReg->usInitModeRegVal)),
        PORT_SET_LONG_WORD,PORT_INIT_SID)
    /* Get the register address */
    Lp8BitRegAddress = (volatile uint8*)(&(JPort_HardwareReg->usPIBC));
    /* Write the register value to the corresponding register */
    /* QAC Warning: START Msg(2:2814)-3 */
    PORT_WRITE_REG_ONLY(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPIBC)
    /* QAC Warning: END Msg(2:2814)-3 */
    /* Write Verify Check for corresponding Register */
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPIBC, PORT_SET_BYTE, PORT_INIT_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    /* Get the register address */
    Lp8BitRegAddress = (volatile uint8*)(&(JPort_HardwareReg->usPINV));
    /* Write the register value to the corresponding register */
    PORT_WRITE_REG_ONLY(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPINV)
    /* Write Verify Check for corresponding Register */
    /* QAC Warning: START Msg(2:3892)-4 */
    PORT_CHECK_WRITE_VERIFY_INIT(Lp8BitRegAddress,
      (uint8)LpPortReg->usInitModeRegValPINV, PORT_SET_BYTE, PORT_INIT_SID)
    /* QAC Warning: END Msg(2:3892)-4 */
    #endif  /* PORT_JTAG_PORT_GROUPS_AVAILABLE == STD_ON) ) */
  }
} /* End of API Port_RegSetInit */
#endif
#define PORT_59_RENESAS_STOP_SEC_PRIVATE_CODE
#include "MemMap.h"
/*Implements PORT103, PORT143, PORT133_Conf, EAAR_PN0034_FR_0051*/
/*Implements EAAR_PN0034_FR_0017, EAAR_PN0034_FR_0049*/
/*Implements PORT_ESDD_UD_085*/
#if (PORT_VERSION_INFO_API == STD_ON)
/*******************************************************************************
** Function Name         : Port_GetVersionInfo
**
** Service ID            : 0x03
**
** Description           : This API will return the version information of
**                         this Port Driver.
**
** Sync/Async            : Synchronous
**
** Re-entrancy           : Non Re-entrant
**
** Input Parameters      : None
**
** InOut Parameters      : None
**
** Output Parameters     : versioninfo - Pointer to where to store the
**                         version information of this module.
**
** Return parameter      : None
**
** Preconditions         : None
**
** Global Variables Used : None
**
** Function(s) invoked   : Det_ReportError
**
** Registers Used        : None
*******************************************************************************/
#define PORT_59_RENESAS_START_SEC_PUBLIC_CODE
#include "MemMap.h"
/*Implements PORT_ESDD_UD_090*/
/*Implements PORT144*/
/* QAC Warning : START Msg(2:3227)-5 */
FUNC(void, PORT_PUBLIC_CODE) Port_GetVersionInfo
  (P2VAR(Std_VersionInfoType, AUTOMATIC, PORT_APPL_DATA)versioninfo)
/* QAC Warning : END Msg(2:3227)-5 */
{
  /*Implements PORT_ESDD_UD_106, PORT_ESDD_UD_021*/
  /*Implements PORT100, PORT107, PORT211, PORT123_Conf*/
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
  /*Implements PORT225*/
  /* Check if parameter passed is equal to Null pointer */
  if (NULL_PTR == versioninfo)
  {
    /* Report to DET  */
    (void)Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
      PORT_GET_VERSION_INFO_SID, PORT_E_PARAM_POINTER);
  }
  else
  #endif /*#if (PORT_DEV_ERROR_DETECT == STD_ON) */
  {
    /*Implements PORT102*/
    /* Copy the vendor Id */
    /* QAC Warning: START Msg(2:2814)-3 */
    versioninfo->vendorID = (uint16)PORT_VENDOR_ID;
    /* Copy the module Id */
    versioninfo->moduleID = (uint16)PORT_MODULE_ID;
    /* Copy Software Major Version */
    versioninfo->sw_major_version = PORT_SW_MAJOR_VERSION;
    /* Copy Software Minor Version */
    versioninfo->sw_minor_version = PORT_SW_MINOR_VERSION;
    /* Copy Software Patch Version */
    versioninfo->sw_patch_version = PORT_SW_PATCH_VERSION;
    /* QAC Warning: END Msg(2:2814)-3 */
  }
}/* End of API Port_GetVersionInfo */
#define PORT_59_RENESAS_STOP_SEC_PUBLIC_CODE
#include "MemMap.h"

#endif  /* End of #if (PORT_VERSION_INFO_API == STD_ON) */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
