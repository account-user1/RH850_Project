/*****************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: Swp.h
* Module Description: Fault Injection definitions
* Project           : CBD
* Author            : Krishna Anne
*******************************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date       Rev      Author         Change Description                                                          SCR #
* -------  -------  --------  ---------------------------------------------------------------------------   ----------
* 09/14/15   1        KK       		Initial version                                                            EA4#968
********************************************************************************************************************************/

#ifndef SWP_H
#define SWP_H

#include "Std_Types.h"

/* Sweep Enable */
/* This is false for production builds.  It is set to true at compile time
   only for s/w special builds with Sweep active. */
#define SWPENA		(STD_OFF)

#endif
