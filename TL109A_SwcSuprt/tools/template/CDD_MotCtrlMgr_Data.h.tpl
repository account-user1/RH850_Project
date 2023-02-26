## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   CDD_MotCtrlMgr_Data.h.tpl
## * Module Description: Template for MotCtrl stub header.  To be processed by the mako template engine.
## * Project:            TL109A_SwcSuprt
## * Author:             Owen Tosh
## ********************************************************************************************************************
## * Version Control:
## *-----------------------------------------------------------------------------------------------------------------
## * Date      Rev      Author    Change Description                                                       SCR #
## * --------  -------  --------  -----------------------------------------------------------------------  ---------
## * 12/01/16   1       OT        Initial version                                                          EA4#
## ********************************************************************************************************************
##
##  Expected template variables:
##      rte_header - string
##      globals = list of stub dictionaries (see below)
##
##  Each stub dictionary contains:
##      sym_name - string
##      rte_name - string
##      type - string
##      array_dim - list of string
##      direction - string
##      pass_ref - boolean
##
/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_MotCtrlMgr_Data.h
* Module Description: Stub header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H


#include "${rte_header}"


/*** Extern Statements ***/

%  for obj in globals:
extern VAR(${obj['type']}, AUTOMATIC) ${obj['sym_name']}\
%   for dim in obj['array_dim']:
[${dim}]\
%   endfor
;
%  endfor

#endif
