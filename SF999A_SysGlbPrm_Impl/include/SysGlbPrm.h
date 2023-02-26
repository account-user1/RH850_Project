/*****************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name: SysGlbPrm.h
* Module Description: System global parameter definitions
* Project           : CBD
* Author            : Sankardu Varadapureddi
*****************************************************************************
* Version Control:
* %version:           3 %
* %derived_by:        mzjphh %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 05/07/15  1        SV       Initial version                                                                  EA4#585
* 06/09/15  2        SV       Updated for FDD 'SF999A_SysGlbPrm_Design_1.2.0'		                           EA4#745
* 02/19/16  3        NS       Updated for FDD 'SF999A_SysGlbPrm_Design_1.4.0'                                  EA4#3935
******************************************************************************/

#ifndef SYSGLBPRM_H
#define SYSGLBPRM_H

/* Start of Constants */

/* Motor Torque Command High Limit */
#define SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32		(8.8F)
        
/* Motor Torque Command Lower Limit */
#define SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32		(-8.8F) 

/* Handwheel Angle High Limit */
#define SYSGLBPRM_HWAGHILIM_HWDEG_F32               (1440.0F)

/* Handwheel Angle Lower Limit */
#define SYSGLBPRM_HWAGLOLIM_HWDEG_F32               (-1440.0F)

#endif
