/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Crc
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Crc_Cfg.h
 *   Generation Time: 2017-07-07 17:17:19
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/**** Protection against multiple inclusion **************************************************************************/
#if !defined (CRC_CFG_H)
#define CRC_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

# define CRC_CFG_MAJOR_VERSION	(3u) 
# define CRC_CFG_MINOR_VERSION	(0u) 
# define CRC_CFG_PATCH_VERSION	(0u) 

/***** Supported CRC Calculation modes *******************************************************************************/

/* CRC 8 */
#define CRC_8_RUNTIME           (0u)
#define CRC_8_TABLE             (1u)
#define CRC_8_HARDWARE          (2u)

/* CRC 8H2F */
#define CRC_8H2F_RUNTIME        (0u)
#define CRC_8H2F_TABLE          (1u)
#define CRC_8H2F_HARDWARE       (2u)

/* CRC 16 */
#define CRC_16_RUNTIME          (0u)
#define CRC_16_TABLE            (1u)
#define CRC_16_HARDWARE         (2u)

/* CRC 32 */
#define CRC_32_RUNTIME          (0u)
#define CRC_32_TABLE            (1u)
#define CRC_32_HARDWARE         (2u)

/* CRC 32P4 */
#define CRC_32P4_RUNTIME        (0u)
#define CRC_32P4_TABLE          (1u)
#define CRC_32P4_HARDWARE       (2u)
        
/***** CRC Calculation configuration *********************************************************************************/

#define CRC_8_MODE              (CRC_8_RUNTIME)
#define CRC_8H2F_MODE           (CRC_8H2F_RUNTIME)
#define CRC_16_MODE             (CRC_16_RUNTIME)
#define CRC_32_MODE             (CRC_32_RUNTIME)
#define CRC_32P4_MODE           (CRC_32P4_RUNTIME)


/***** Optional API function *****************************************************************************************/

#define CRC_VERSION_INFO_API    (STD_OFF)



#endif  /* CRC_CFG_H */

/**********************************************************************************************************************
  END OF FILE: Crc_Cfg.h
**********************************************************************************************************************/
