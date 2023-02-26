/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Uart0CfgAndUse.h
 * Module Description: Uart0 Configuration And Use Function
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          1 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/06/17  1        KByrski   Initial Version                                                               EA4#12170
 *********************************************************************************************************************/

#ifndef CDD_UART0CFGANDUSE_H
#define CDD_UART0CFGANDUSE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/***************************************************** Typedefs ******************************************************/
typedef uint8 Ary1D_u8_2048_Uart0CfgAndUse[2048];

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(void, CDD_Uart0CfgAndUse_CODE) Uart0CfgAndUseInin(void);

#endif /* CDD_UART0CFGANDUSE_H */
