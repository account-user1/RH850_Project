## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Settings.xml.tpl
## * Module Description: Template for component settings file.  To be processed by the mako template engine.
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
##
<?xml version="1.0" encoding="UTF-8" standalone="no" ?>
<!--
	*******************************************************************************************************************
	* Copyright 2016 Nexteer
	* Nexteer Confidential
	*
	* Module File Name:   Settings_${component.short_name}.xml
	* Module Description: Used to generate the component configuration files.  Generated from TL109A_SwcSuprt.
	* Project:            CBD
	* Author:             Owen Tosh
	*******************************************************************************************************************
-->
<Settings>
	<Settings Name="com.vector.cfg.gui.core.generators.ExtGenSteps">
		<Settings Name="${component.short_name}">
			<Setting Name="GenerationParameters" Value="$(ProcessingEcuCFile) $(GenDataFolder)"/>
			<Setting Name="ValidationParameters" Value=""/>
			<Setting Name="SupportsStandAloneValidation" Value="false"/>
			<Setting Name="Active" Value="true"/>
			<Setting Name="RequiredAsVersion" Value=""/>
			<Setting Name="TransformationRequired" Value=""/>
			<Setting Name="TransformationXsltFile" Value=""/>
			<Setting Name="TransformationOutput" Value=""/>
			<Setting Name="ExecutionType" Value="Parallel"/>
			<Setting Name="SpecificAsVersionRequired" Value="false"/>
			<Setting Name="WorkingDir" Value="$(DpaProjectFolder)\..\..\${component.name}\tools\template"/>
			<Setting Name="CommandLine" Value="${component.short_name}_Generate.bat"/>
		</Settings>
	</Settings>
</Settings>
