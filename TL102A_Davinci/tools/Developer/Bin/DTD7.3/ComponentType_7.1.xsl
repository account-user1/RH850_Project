<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD7.3\DVW.DTD" />

  <!-- Retain white space within all elements -->
  <xsl:preserve-space elements="*" />

  <!-- DO NOT Set DTD version to 7.3, call of item convert required  -->
  <!--<xsl:template match="@DTDVersion">
        <xsl:attribute name="DTDVersion">7.3</xsl:attribute>
    </xsl:template>-->

  <!-- EVAL00095927: AR4: service needs adaptations (BOs)
        ~ replace portprototype-links with rolebasedportprotototypeassignments
    -->
  <xsl:template match="NvMBlockNeed/PortPrototypeLink | ComMUserNeed/PortPrototypeLink | EcuMUserNeed/PortPrototypeLink | FunctionInhibitionNeed/PortPrototypeLink | DiagEventNeed/PortPrototypeLink | DiagCommunicationNeed/PortPrototypeLink | SupervisedEntityNeed/PortPrototypeLink  ">
    <xsl:element name="RoleBasedPortAssignment">
      <xsl:element name="ATTRLink">
        <xsl:attribute name="LinkName">PortPrototype</xsl:attribute>
        <xsl:copy-of select="@*"/>
        <xsl:copy-of select="*"/>
      </xsl:element>
    </xsl:element>
  </xsl:template>

  <!-- default handling: copy elements and attributes -->
  <xsl:template match="@*">
    <xsl:copy-of select="."/>
  </xsl:template>

  <xsl:template match="*">
    <xsl:copy>
      <xsl:apply-templates select="@*"/>
      <xsl:apply-templates/>
    </xsl:copy>
  </xsl:template>

</xsl:stylesheet>
