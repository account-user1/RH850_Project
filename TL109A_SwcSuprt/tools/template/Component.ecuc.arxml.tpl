## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Component.ecuc.arxml.tpl
## * Module Description: Template for component bswmd file.  To be processed by the mako template engine.
## * Project:            TL109A_SwcSuprt
## * Author:             Owen Tosh
## ********************************************************************************************************************
## * Version Control:
## *-----------------------------------------------------------------------------------------------------------------
## * Date      Rev      Author    Change Description                                                         SCR #
## * --------  -------  --------  -------------------------------------------------------------------------  -------
## * 12/01/16   1       OT        Initial version
## ********************************************************************************************************************
##
##  Expected template variables:
##      splitter_components - collection of strings
##
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!--
	*******************************************************************************************************************
	* Copyright 2016 Nexteer
	* Nexteer Confidential
	*
	* Module File Name:   Component.ecuc.arxml
	* Module Description: Main component ECUC.arxml file.  Generated from TL109A_SwcSuprt.
	* Project:            CBD
	* Author:             Owen Tosh
	*******************************************************************************************************************
-->
<AUTOSAR xmlns="http://autosar.org/schema/r4.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://autosar.org/schema/r4.0 AUTOSAR_4-0-3.xsd">
  <AR-PACKAGES>
    <AR-PACKAGE UUID="B7EDD042-4044-414C-9970-1C2313A88AC7">
      <SHORT-NAME>ActiveEcuC</SHORT-NAME>
      <ELEMENTS>
        <ECUC-VALUE-COLLECTION>
          <SHORT-NAME>ActiveEcuC</SHORT-NAME>
          <ECU-EXTRACT-REF DEST="SYSTEM">/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/SYSTEM</ECU-EXTRACT-REF>
          <ECUC-VALUES>
% for splitter_component in splitter_components:
            <ECUC-MODULE-CONFIGURATION-VALUES-REF-CONDITIONAL>
              <ECUC-MODULE-CONFIGURATION-VALUES-REF DEST="ECUC-MODULE-CONFIGURATION-VALUES">/ActiveEcuC/${splitter_component}</ECUC-MODULE-CONFIGURATION-VALUES-REF>
            </ECUC-MODULE-CONFIGURATION-VALUES-REF-CONDITIONAL>
% endfor
          </ECUC-VALUES>
        </ECUC-VALUE-COLLECTION>
      </ELEMENTS>
    </AR-PACKAGE>
  </AR-PACKAGES>
</AUTOSAR>
