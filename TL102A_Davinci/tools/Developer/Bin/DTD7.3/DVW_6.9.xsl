<?xml version="1.0" encoding="utf-8" standalone="no"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD7.3\DVW.DTD"/>

<!-- Root element rule -->
  <xsl:template match="/">
  <DVW>
    <xsl:apply-templates select="DVW"/>
  </DVW>
  </xsl:template>

<!-- DVW element rule -->
  <!-- Set DTD version to 7.3, no external conversion required  -->
  <!-- Remove CompatibleVersions because DTD 7.2 in incompatible -->

    <xsl:template match="DVW">
        <xsl:attribute name="DTDVersion">7.3</xsl:attribute>
        <xsl:copy-of select="@CMVersion | @CMState | @GUID | @Version | @RO | @InstVers | @SpecialBuild | @AUTOSARVersion | @AttrDefSetLink"/>
        <xsl:copy-of select ="NAME | LONGNAME | ATTRLink | AttrDefSetLink | ConstantLink | DataTypeLink | ComponentTypeLink | ECUProjectLink | PortInterfaceLink | ModeDclrGroupLink | PackageLink | BaseTypeLink | UnitLink | CompuMethodLink | DataConstrLink | MappingSetLink | ConstMappingSetLink"/>
    </xsl:template>

</xsl:stylesheet>

