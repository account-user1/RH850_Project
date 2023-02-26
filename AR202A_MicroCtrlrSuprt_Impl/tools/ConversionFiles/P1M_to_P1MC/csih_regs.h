/**********************************************************************************************************************
* Module File Name  : csih_regs.h
* Module Description: This file is intended to provide conversion macros from the the P1M header files to the new
*                     header files used on P1XC devices.  This is to allow using the new header files on a project
*                     that is including source code that is assuming the older P1M style header files.  Note that the
*                     macros defined in this file only include the redefinition of any registers that were currently
*                     used by components at the time of development of this converter file.
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description
* -------   -------  --------  ----------------------------------------------------------------------------------------
* 07/18/17  1        LWW       Initial conversion file
**********************************************************************************************************************/

#ifndef CSIH_REGS_H
#define CSIH_REGS_H

#include "CSIH0_RegDefns.h"
#include "CSIH1_RegDefns.h"
#include "CSIH2_RegDefns.h"
#include "CSIH3_RegDefns.h"

#define CSIH1RCB1 CSIH1CFG1CSIH1RCB1
#define CSIH1BRS CSIH1BRS0CSIH1BRS0
#define CSIH3BRS CSIH3BRS0CSIH3BRS0
#define CSIH3RCB1 CSIH3CFG1CSIH3RCB1

#endif
