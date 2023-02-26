<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD7.2\DVW.DTD" />
    
    <!-- Retain white space within all elements -->
    <xsl:preserve-space elements="*" />

    <!-- set dtd version --><!--
    <xsl:template match="@DTDVersion">
        <xsl:attribute name="DTDVersion">7.1</xsl:attribute>
    </xsl:template>-->

    <!-- EVAL00101916: AR4: mapped signal should reference a base type/compu method (BOs)
        - remove obsolete DataDefProps-Attributes
    -->
    <xsl:template match="DataDefProps">
        <xsl:copy>
            <xsl:copy-of select="@GUID"/>
            <xsl:copy-of select="@Length"/>
        </xsl:copy>
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
