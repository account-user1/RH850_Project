## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   GreenHillsProject.gpj.tpl
## * Module Description: Template for component green hills project file.  To be processed by the mako template engine.
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
##      component - main component object
##      source_paths - collection of strings
##      header_paths - collection of strings
##
#!gbuild

# *********************************************************************************************************************
# * Copyright 2016 Nexteer
# * Nexteer Confidential
# *
# * Module File Name:   ${component.name}.gpj
# * Module Description: Green Hills component (sub)project file.  Generated from TL109A_SwcSuprt.
# * Project:            CBD
# * Author:             Owen Tosh
# *********************************************************************************************************************

[Subproject]
% for source_path in source_paths:
..\src\${source_path}
% endfor
% for header_path in header_paths:
..\include\${header_path}
% endfor
