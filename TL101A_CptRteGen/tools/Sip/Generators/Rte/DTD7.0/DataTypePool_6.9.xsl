<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD7.0\DVW.DTD" />
    
    <!-- Retain white space within all elements -->
    <xsl:preserve-space elements="*" />
    
    <!-- Root element rule -->
    <xsl:template match="/">
        <DataTypePool>
            <xsl:apply-templates select="DataTypePool" />
        </DataTypePool>
    </xsl:template>
    
	<xsl:template match="DataTypePool">
    <!-- DO NOT Set DTD version to 7.0, call of item convert required  -->
    <xsl:copy-of select="@*" />
    <xsl:apply-templates select="DataType" />
	</xsl:template>
	
	<!-- DataType element rule -->
	<xsl:template match="DataType">
    <DataType>
      <!-- DO NOT Set DTD version to 7.0, call of item convert required  -->
      <xsl:copy-of select="@*" />
      <xsl:copy-of select="node()" />
    </DataType>
	</xsl:template>
	
</xsl:stylesheet>
