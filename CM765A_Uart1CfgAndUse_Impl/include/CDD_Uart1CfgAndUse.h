/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Uart1CfgAndUse.h
 * Module Description: Uart1 Configuration And Use Function
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          1 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 06/13/17  1        KByrski   Initial Version                                                               EA4#12174
 *********************************************************************************************************************/

#ifndef CDD_UART1CFGANDUSE_H
#define CDD_UART1CFGANDUSE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/***************************************************** Typedefs ******************************************************/
typedef uint8 Ary1D_u8_2048_Uart1CfgAndUse[2048];

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(void, CDD_Uart1CfgAndUse_CODE) Uart1CfgAndUseInin(void);

#endif /* CDD_UART1CFGANDUSE_H */
