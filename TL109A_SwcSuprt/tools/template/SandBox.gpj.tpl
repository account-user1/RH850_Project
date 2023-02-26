## ********************************************************************************************************************
## * Copyright 2017 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Sandbox.gpj.tpl
## * Module Description: Template for component green hills project file.  To be processed by the mako template engine.
## * Project:            TL109A_SwcSuprt
## * Author:             Matt Leser
## ********************************************************************************************************************
## * Version Control:
## *------------------------------------------------------------------------------------------------------------------
## * Date      Rev      Author    Change Description                                                          SCR #
## * --------  -------  --------  --------------------------------------------------------------------------  -------
## * 03/27/17   1       ML        Initial version
## ********************************************************************************************************************
##
##  Expected template variables:
##      component - main component object
##
#!gbuild 

# *********************************************************************************************************************
# * Copyright 2017 Nexteer
# * Nexteer Confidential
# *
# * Module File Name:   Sandbox_${component.short_name}.gpj
# * Module Description: Sandbox (sub)project file.  Generated from TL109A_SwcSuprt.
# * Project:            CBD
# * Author:             Matt Leser
# *********************************************************************************************************************

primaryTarget=v800_standalone.tgt 
[Program] 
    --short_enum
    -dual_debug
    -shorten_loads
    -shorten_moves
    -g
    -sda=all
    -prepare_dispose
    -inline_prologue
    -delete
    -ignore_callt_state_in_interrupts
    -nofloatio
    -large_sda
    --no_commons
    -no_callt
    -reserve_r2
    -cpu=rh850g3m
    -fhard
    -Ogeneral
	-I.\${component.name}\generate\ 
	-I.\${component.name}\include\
	-I.\${component.name}\tools\local\generate\ 
	-I.\${component.name}\tools\local\include\     
	-I.\TL103A_CplrSuprt\include\2013.5.5\ansi\ 
	-I.\AR202A_MicroCtrlrSuprt_Impl\include\P1M\R7F701311\ 
	-I.\AR200A_ArSuprt_Impl\include\ASR4.0.3\ 
	-I.\AR200A_ArSuprt_Impl\tools\contract\ 
	-I.\AR201A_ArCplrSuprt_Impl\include\ASR4.0.3\ 
	-I.\AR201A_ArCplrSuprt_Impl\tools\contract\ 
	-I.\AR100A_NxtrMath_Impl\include\ 
	-I.\AR101A_NxtrIntrpn_Impl\include\ 
	-I.\AR104A_NxtrFil_Impl\include\ 
	-I.\AR102A_NxtrTi_Impl\include\ 
	-I.\AR103A_NxtrFixdPt_Impl\include\ 
	-I.\AR999A_ArchGlbPrm_Impl\include\ 
	-I.\ES999A_ElecGlbPrm_Impl\include\ 
	-I.\SF999A_SysGlbPrm_Impl\include\ 
	-object_dir=.\SandboxOutput\${component.short_name} 
.\${component.name}\tools\${component.name}.gpj 
