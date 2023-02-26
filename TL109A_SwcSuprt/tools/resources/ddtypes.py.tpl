## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   ddtypes.py.tpl
## * Module Description: Template for types.py file in datadict Python module.
## * Project:            TL109A_SwcSuprt
## * Author:             Owen Tosh
## ********************************************************************************************************************
## * Version Control:
## *------------------------------------------------------------------------------------------------------------------
## * Date      Rev      Author    Change Description                                                          SCR #
## * --------  -------  --------  --------------------------------------------------------------------------  -------
## * 12/01/16   1       OT        Initial version
## ********************************************************************************************************************
##
##  Expected template variables:
##      numeric_types - collection of dictionaries, each containing:
##          name - string
##          c_type - string
##      fixed_point_types - collection of strings
##      enum_types - collection of dictionaries, each containing:
##          name - string
##          enums - collection of dictionaries, each containing:
##              name - string
##              val - string
##      struct_types - collection of dictionaries, each containing:
##          name - string
##          elements - collection of dictionaries, each containing:
##              name - string
##              type - string
##              min - string
##              max - string
##
#! python

# *********************************************************************************************************************
# * Copyright 2016 Nexteer
# * Nexteer Confidential
# *
# * Module File Name:   ddtypes.py
# * Module Description: Data types for data dictionaries.  Generated from TL109_SwcSuprt/tools/resources/updatedd.py.
# * Project:            TL109_SwcSuprt
# * Author:             Owen Tosh
# *********************************************************************************************************************

numeric_types = {
% for type in numeric_types:
    '${type['name']}': '${type['c_type']}',
% endfor
}

fixed_point_types = [
% for type in fixed_point_types:
    '${type}',
% endfor
]

enum_types = {
% for type in enum_types:
    '${type['name']}': {
%  for enum in type['enums']:
        '${enum['name']}': ${enum['val']},
%  endfor
    },
% endfor
}

struct_types = {
% for type in struct_types:
    '${type['name']}': {
%  for element in type['elements']:
        '${element['name']}': {'type': '${element['type']}', 'min': ${element['min']}, 'max': ${element['max']}},
%  endfor
    },
% endfor
}
