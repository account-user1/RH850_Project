<?xml version="1.0" encoding="utf-8" standalone="no"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD7.7\DVW.DTD"/>

<!-- Root element rule -->
  <xsl:template match="/">
  <DVW>
    <xsl:apply-templates select="DVW"/>
  </DVW>
  </xsl:template>

<!-- DVW element rule -->
    <!-- DO NOT Set DTD version to 7.7; Stylesheet used to trigger the ObjectServer conversion  -->
    <!-- Remove CompatibleVersions because external converter in DTD 6.7 -->

    <xsl:template match="DVW">
        <xsl:copy-of select="@*"/>
        <xsl:copy-of select ="NAME | LONGNAME | ATTRLink | SignalGroupLink | AttrDefSetLink | SignalLink | SignalTypeLink | ConstantLink | DataTypeLink | ComponentTypeLink | CANBusLink | LINBusLink | FlexRayClusterLink | VehicleProjectLink | ECUProjectLink | PortInterfaceLink | ModeDclrGroupLink | PDU"/>
    </xsl:template>

</xsl:stylesheet>

