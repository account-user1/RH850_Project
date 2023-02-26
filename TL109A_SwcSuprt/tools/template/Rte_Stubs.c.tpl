## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Rte_Stubs.c.tpl
## * Module Description: Template for RTE stubs file.  To be processed by the mako template engine.
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
##      clients - list of dictionaries, each containing (see below):
##      servers - list of dictionaries, each containing:
##          name - string
##          return - stub dictionary (see below) - if None, no return value
##          args - list of stub dictionaries (see below)
##      irvs - list of stub dictionaries (see below)
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
* Module File Name:   Rte_Stubs.c
* Module Description: Stubs for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


% if rte_header:
#include "${rte_header}"
% endif
#include "float.h"


% for irv in irvs:
%  if len(irv['array_dim']) > 0:
/*** IRV Stub ***/

FUNC(void, RTE_CODE) Rte_Stub_MemCpy(void * destination, const void * source, unsigned long length)
{
    unsigned char * dst = (unsigned char *)destination;
    unsigned char * src = (unsigned char *)source;
    unsigned long i;
    for(i = 0UL; i < length; i++)
    {
        dst[i] = src[i];
    }
}

<% break %>
%  endif
% endfor
% if len(servers) > 0:
/*** Server Port Stubs ***/

%  for srv in servers:
## start function signature
FUNC(\
## return type
%   if srv['return']:
${srv['return']['type']}\
%    if srv['return']['array_dim']:
 *\
%    endif
%   else:
## assume standard return type if no other is given
Std_ReturnType\
%   endif
, RTE_CODE) ${srv['name']}(<% comma = '' %>\
## function arguments
%   for arg in srv['args']:
${comma}\
%    if arg['pass_ref'] and 'Out' not in arg['direction']:
const 
%    endif
${arg['type']}\
%    if arg['pass_ref']:
 *\
%    endif
 ${arg['rte_name']}<% comma = ', ' %>\
%   endfor
)
## start function definition
{<% dim = 0 %>
%   for arg in srv['args']:
%    if len(arg['array_dim']) > 0 and dim == 0:
    unsigned short i;<% dim = 1 %>
%    endif
%    if len(arg['array_dim']) > 1 and dim == 1:
    unsigned short j;<% dim = 2 %>
%    endif
%   endfor
%   for arg in srv['args']:
%    if 'In' in arg['direction']:
%     if len(arg['array_dim']) > 0:
    for(i = 0; i < ${arg['array_dim'][0]}; i++)
    {
%      if len(arg['array_dim']) > 1:
        for(j = 0; j < ${arg['array_dim'][1]}; j++)
        {
            ${arg['sym_name']}[i][j] = (*${arg['rte_name']})[i][j];
        }
%      else:
        ${arg['sym_name']}[i] = (*${arg['rte_name']})[i];
%      endif
    }
%     else:
%      if arg['pass_ref']:
    ${arg['sym_name']} = *${arg['rte_name']};
%      else:
    ${arg['sym_name']} = ${arg['rte_name']};
%      endif
%     endif
%    endif
%   endfor
%   for arg in srv['args']:
%    if 'Out' in arg['direction']:
%     if len(arg['array_dim']) > 0:
    for(i = 0; i < ${arg['array_dim'][0]}U; i++)
    {
%      if len(arg['array_dim']) > 1:
        for(j = 0; j < ${arg['array_dim'][1]}U; j++)
        {
            (*${arg['rte_name']})[i][j] = ${arg['sym_name']}[i][j];
        }
%      else:
        (*${arg['rte_name']})[i] = ${arg['sym_name']}[i];
%      endif
    }
%     else:
    *${arg['rte_name']} = ${arg['sym_name']};
%     endif
%    endif
%   endfor
%   if srv['return']:
%    if len(srv['return']['array_dim']) > 0:
    return &(${srv['return']['sym_name']}${'[0]' * len(srv['return']['array_dim'])});
%    else:
    return ${srv['return']['sym_name']};
%    endif
%   else:
    return (Std_ReturnType)0U;
%   endif
}

%  endfor

% endif
% if len(clients) > 0:
/*** Client Port Stubs ***/

FUNC(void, AUTOMATIC) Rte_Stub(void)
{
%  for cli in clients:
    \
%   if cli['return']:
${cli['return']['sym_name']} = \
%   endif
${cli['name']}(<% comma = '' %>\
%   for arg in cli['args']:
${comma}<% comma = ', ' %>\
%    if arg['pass_ref']:
&\
%    endif
${arg['sym_name']}\
%    for dim in arg['array_dim']:
[0]\
%    endfor
%   endfor
);
%  endfor
}

% endif
