## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Rte_Stubs.h.tpl
## * Module Description: Template for RTE stubs header.  To be processed by the mako template engine.
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
##      stubs - dictionary, containing:
##          ip - list of stub dictionaries (see below)
##          op - list of stub dictionaries (see below)
##          cal - list of stub dictionaries (see below)
##          pim - list of stub dictionaries (see below)
##          irv - list of stub dictionaries (see below)
##      clients - list of dictionaries, each containing (see below):
##      servers - list of dictionaries, each containing:
##          server_name - string
##          ret - stub dictionary (see below) - if None, no return value
##          args - list of stub dictionaries (see below)
##
##  Each stub dictionary contains:
##      sym_name - string
##      rte_name - string
##      type - string
##      array_dim - list of strings
##      direction - string
##      pass_ref - boolean
##      read_func - list of strings
##      write_func - list of strings
##
/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H


/*** Extern Statements ***/

% if len(stubs['ip']) > 0:
/* Inputs */
%  for obj in stubs['ip']:
extern VAR(${obj['type']}, AUTOMATIC) ${obj['sym_name']};
%  endfor

% endif
% if len(stubs['op']) > 0:
/* Outputs */
%  for obj in stubs['op']:
extern VAR(${obj['type']}, AUTOMATIC) ${obj['sym_name']};
%  endfor

% endif
% if len(stubs['cal']) > 0:
/* Calibrations */
%  for obj in stubs['cal']:
extern CONST(${obj['type']}, AUTOMATIC) ${obj['sym_name']}\
%   for dim in obj['array_dim']:
[${dim}]\
%   endfor
;
%  endfor

% endif
% if len(stubs['pim']) > 0:
/* PIMs */
%  for obj in stubs['pim']:
extern VAR(${obj['type']}, AUTOMATIC) ${obj['sym_name']}\
%   for dim in obj['array_dim']:
[${dim}]\
%   endfor
;
%  endfor

% endif
% if len(stubs['irv']) > 0:
/* IRVs */
%  for obj in stubs['irv']:
extern VAR(${obj['type']}, AUTOMATIC) ${obj['sym_name']}\
%   for dim in obj['array_dim']:
[${dim}]\
%   endfor
;
%  endfor

% endif
% if len(servers) > 0 or len(clients) > 0:
/* Arguments and Returns */
%  for srv in servers:
%   for obj in srv['args']:
extern VAR(${obj['type']}, AUTOMATIC) ${obj['sym_name']}\
%    for dim in obj['array_dim']:
[${dim}]\
%    endfor
;
%   endfor
%   if srv['return']:
extern VAR(${srv['return']['type']}, AUTOMATIC) ${srv['return']['sym_name']}\
%    for dim in srv['return']['array_dim']:
[${dim}]\
%    endfor
;
%   endif
%  endfor
%  for cli in clients:
%   for obj in cli['args']:
extern VAR(${obj['type']}, AUTOMATIC) ${obj['sym_name']}\
%    for dim in obj['array_dim']:
[${dim}]\
%    endfor
;
%   endfor
%   if cli['return']:
extern VAR(${cli['return']['type']}\
%    if len(cli['return']['array_dim']) > 0:
 *\
%    endif
, AUTOMATIC) ${cli['return']['sym_name']};
%   endif
%  endfor

% endif

% if len(stubs['ip']) > 0:
/*** Input Stubs ***/

%  for obj in stubs['ip']:
#ifdef ${obj['rte_name']}
# undef ${obj['rte_name']}
#endif
#define ${obj['rte_name']}(data) (*(data) = ${obj['sym_name']})

%  endfor

% endif
% if len(stubs['op']) > 0:
/*** Output Stubs ***/

%  for obj in stubs['op']:
#ifdef ${obj['rte_name']}
# undef ${obj['rte_name']}
#endif
#define ${obj['rte_name']}(data) (${obj['sym_name']} = (data))

%  endfor

% endif
% if len(stubs['cal']) > 0:
/*** Calibration Stubs ***/

%  for obj in stubs['cal']:
#ifdef ${obj['rte_name']}
# undef ${obj['rte_name']}
#endif
#define ${obj['rte_name']}() \
%   if len(obj['array_dim']) > 0:
(&(${obj['sym_name']}${'[0]' * len(obj['array_dim'])}))
%   else:
(${obj['sym_name']})
%   endif

%  endfor

% endif
% if len(stubs['pim']) > 0:
/*** PIM Stubs ***/

%  for obj in stubs['pim']:
#ifdef ${obj['rte_name']}
# undef ${obj['rte_name']}
#endif
#define ${obj['rte_name']}() \
%   if len(obj['array_dim']) > 0:
(&(${obj['sym_name']}${'[0]' * len(obj['array_dim'])}))
%   else:
(&${obj['sym_name']})
%   endif

%  endfor

% endif
% if len(stubs['irv']) > 0:
/*** IRV Stubs ***/

%  for obj in stubs['irv']:
%   for func in obj['read_func']:
#ifdef Rte_IrvRead_${func}_${obj['rte_name']}
# undef Rte_IrvRead_${func}_${obj['rte_name']}
#endif
%    if len(obj['array_dim']) > 0:
#define Rte_IrvRead_${func}_${obj['rte_name']}(ptr) Rte_Stub_MemCpy((void *)(ptr), (const void *)${obj['sym_name']}, (unsigned long)sizeof(${obj['type']})\
%     for dim in obj['array_dim']:
 * ${dim}UL\
%     endfor
)
%    else:
#define Rte_IrvRead_${func}_${obj['rte_name']}() (${obj['sym_name']})
%    endif

%   endfor
%   for func in obj['write_func']:
#ifdef Rte_IrvWrite_${func}_${obj['rte_name']}
# undef Rte_IrvWrite_${func}_${obj['rte_name']}
#endif
%    if len(obj['array_dim']) > 0:
#define Rte_IrvWrite_${func}_${obj['rte_name']}(ptr) Rte_Stub_MemCpy((void *)${obj['sym_name']}, (const void *)(ptr), (unsigned long)sizeof(${obj['type']})\
%     for dim in obj['array_dim']:
 * ${dim}UL\
%     endfor
)
%    else:
#define Rte_IrvWrite_${func}_${obj['rte_name']}(data) (${obj['sym_name']} = (data))
%    endif

%   endfor
%  endfor

% endif
% if len(clients) > 0:
/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


% endif
#endif
