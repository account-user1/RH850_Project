/**********************************************************************************************************************
* Module File Name  : rsent_regs.h
* Module Description: This file is intended to provide conversion macros from the the P1M header files to the new
*                     header files used on P1XC devices.  This is to allow using the new header files on a project
*                     that is including source code that is assuming the older P1M style header files.  Note that the
*                     macros defined in this file only include the redefinition of any registers that were currently
*                     used by components at the time of development of this converter file.
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description
* -------   -------  --------  ----------------------------------------------------------------------------------------
* 07/18/17  1        LWW       Initial conversion file
* 11/17/17  2        AJM       Corrected include files and added additional register definitions
**********************************************************************************************************************/
#ifndef RSENT_REGS_H
#define RSENT_REGS_H

#include "RSENT_MDSEL_RegDefns.h"
#include "RSENT0_RegDefns.h"
#include "RSENT1_RegDefns.h"
#include "RSENT2_RegDefns.h"
#include "RSENT3_RegDefns.h"
#include "RSENT4_RegDefns.h"
#include "RSENT5_RegDefns.h"


#define RSENT2OMC RSENT2MDC_OMC
#define RSENT4OMC RSENT4MDC_OMC

#define RSENT2OMS RSENT2MST_OMS
#define RSENT2NRS RSENT2CS_NRS
#define RSENT2NRC RSENT2CSC_NRC
#define RSENT2FRS RSENT2CS_FRS
#define RSENT2FND RSENT2FRXD_FND


#define RSENT1OMS RSENT1MST_OMS
#define RSENT1NRS RSENT1CS_NRS
#define RSENT1NRC RSENT1CSC_NRC
#define RSENT1FRS RSENT1CS_FRS
#define RSENT1FND RSENT1FRXD_FND

#define RSENT4OMS RSENT4MST_OMS
#define RSENT4NRS RSENT4CS_NRS
#define RSENT4NRC RSENT4CSC_NRC
#define RSENT4FRS RSENT4CS_FRS
#define RSENT4FND RSENT4FRXD_FND


#endif
