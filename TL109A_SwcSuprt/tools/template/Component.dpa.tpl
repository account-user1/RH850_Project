## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Component.dpa.tpl
## * Module Description: Template for component DaVinci project file.  To be processed by the mako template engine.
## * Project:            TL109A_SwcSuprt
## * Author:             Owen Tosh
## ********************************************************************************************************************
## * Version Control:
## *-----------------------------------------------------------------------------------------------------------------
## * Date      Rev      Author    Change Description                                                         SCR #
## * --------  -------  --------  -------------------------------------------------------------------------  -------
## * 12/01/16   1       OT        Initial version
## * 01/30/17   2       OT		  SIP Id and TL101 path changed												 EA4#9522
## ********************************************************************************************************************
##
##  Expected template variables:
##      component - main component object
##      generation_script - string (=None if nothing to generate)
##      component_ecuc_file - string (=None if no component-specific ECUC file)
##
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<ProjectAssistant Version="5.10.21 SP2">
    <General>
        <Name>Component</Name>
        <Version>1.0</Version>
        <Author>SoftwareGroup</Author>
    </General>
    <Environment>
        <Platform>Canoeemu</Platform>
        <Derivative>RH850_1311</Derivative>
        <Compiler>GreenHills</Compiler>
        <SipIds>
            <SipId>CBD1400351_D05</SipId>
        </SipIds>
        <TargetType>Real Target</TargetType>
    </Environment>
    <Folders>
        <ECUC>local\autosar\ECUC</ECUC>
        <GenData>local\generate</GenData>
        <GenDataVtt>local\generate</GenDataVtt>
        <Source>local\generate</Source>
        <ServiceComponents>local\autosar</ServiceComponents>
        <Logs>.</Logs>
        <SIP>..\..\TL101A_CptRteGen\tools\Sip</SIP>
        <StartMenu></StartMenu>
        <ApplicationComponents>local\generate</ApplicationComponents>
        <BswInternalBehaviour>..\..\TL101A_CptRteGen\tools\InternalBehavior</BswInternalBehaviour>
        <McData>local\autosar</McData>
        <AddBswmds>
            <AddBswmd>..\autosar</AddBswmd>
            <AddBswmd>local\autosar</AddBswmd>
            <AddBswmd>..\..\TL101A_CptRteGen\tools\Sip\BSWMD\Rte</AddBswmd>
        </AddBswmds>
        <DefinitionRestriction>local\autosar</DefinitionRestriction>
        <AUTOSAR>local\autosar</AUTOSAR>
    </Folders>
    <Tools>
        <DEV>..\..\TL102A_Davinci\tools\Developer\Bin\DaVinciDEV.exe</DEV>
    </Tools>
    <Input/>
    <References>
        <DVWorkspace>..\autosar\${component.short_name}.dcf</DVWorkspace>
        <FlatMap>local\autosar\FlatMap.arxml</FlatMap>
        <FlatECUEX>local\autosar\FlatExtract.arxml</FlatECUEX>
    </References>
    <EcucSplitter>
        <Configuration>local\autosar\ECUC\Component.ecuc.arxml</Configuration>
        <Splitter File=".\local\autosar\ECUC\Component_Rte_ecuc.arxml">
            <Module Name="Rte"/>
        </Splitter>
% if component_ecuc_file is not None:
        <Splitter File=".\local\autosar\ECUC\${component_ecuc_file}">
            <Module Name="${component.short_name}"/>
        </Splitter>
% endif
        <OwnFolderForEachSplitter>false</OwnFolderForEachSplitter>
    </EcucSplitter>
    <PostBuildLoadable RTEDataFreezeChecksum="" CurrentConfigurationPhase="PRE_COMPILE"/>
    <ToolSettings>
        <Generators>
            <Settings Name="com.vector.cfg.gui.core.generators.CustomWorkflowStepOrder">
                <Setting Value="Local Headers Generation" Name="Order"/>
            </Settings>
            <Settings Name="com.vector.cfg.gui.core.generators.CustomWorkflowSteps">
                <Settings Name="Local Headers Generation">
                    <Setting Value="true" Name="Active"/>
                    <Setting Value="SWCSupport.bat" Name="CommandLine"/>
                    <Setting Value="IBM437" Name="CommandLineEncoding"/>
                    <Setting Value="" Name="Comment"/>
                    <Setting Value="generate_local_headers" Name="Parameters"/>
                    <Setting Value="" Name="RequiredAsVersion"/>
                    <Setting Value="false" Name="SpecificAsVersionRequired"/>
                    <Setting Value="" Name="TransformationOutput"/>
                    <Setting Value="false" Name="TransformationRequired"/>
                    <Setting Value="" Name="TransformationXsltFile"/>
                    <Setting Value="External" Name="Type"/>
                    <Setting Value="$(DpaProjectFolder)" Name="WorkingDir"/>
                </Settings>
            </Settings>
% if generation_script is not None:
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
                    <Setting Name="WorkingDir" Value="$(DpaProjectFolder)\template"/>
                    <Setting Name="CommandLine" Value="${generation_script}"/>
                </Settings>
            </Settings>
% endif
            <Settings Name="com.vector.cfg.gui.core.generators.GeneratedModules"/>
        </Generators>
        <Misc>
            <Settings Name="com.vector.cfg.gui.pse.pages.generators">
                <Settings Name="BuildVipProject"/>
                <Settings Name="CustomWorkflowExecution"/>
            </Settings>
            <Settings Name="com.vector.cfg.persistency.internal.folder">
                <Settings Name="TargetFolderManager"/>
            </Settings>
        </Misc>
    </ToolSettings>
    <TopDownServiceConfiguration>
        <NvM>false</NvM>
    </TopDownServiceConfiguration>
    <Miscellaneous>
        <AmdGenerateDebugData>false</AmdGenerateDebugData>
    </Miscellaneous>
    <SwctGeneration>
% if generation_script is not None:
        <Component Name="${component.short_name}" GenerationEnabled="true"/>
% endif
    </SwctGeneration>
</ProjectAssistant>
