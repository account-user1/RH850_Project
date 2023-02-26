/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_ExcpnHndlg.h 
* Module Description: Private constants for CM101B ExcpnHndlg
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 11/21/17  1        AJM       Initial Version                                                                EA4#12706
* 01/05/18  1        AJM       Corrected Backup RAM size                                                      EA4#16355
**********************************************************************************************************************/
#ifndef CDD_EXCPNHNDLG_PRIVATE_H
#define CDD_EXCPNHNDLG_PRIVATE_H

/* Back up RAM is 1KB hence uint32 of 256 size */
#define MAXBACKUPRAMSIZE_CNT_U16        ((uint16)256U)

extern uint16 ExcpnHndlgOsErrCod_C;
extern uint32 BackUpRam_C[MAXBACKUPRAMSIZE_CNT_U16];

#define BACKUPRAM0      (BackUpRam_C[0])
#define BACKUPRAM1      (BackUpRam_C[1])
#define BACKUPRAM2      (BackUpRam_C[2])
#define BACKUPRAM3      (BackUpRam_C[3])

#endif
