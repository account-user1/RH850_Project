<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD7.4\DVW.DTD" />
    
    <!-- Retain white space within all elements -->
    <xsl:preserve-space elements="*" />
    
    <!-- Root element rule -->
    <xsl:template match="/">
        <ConstantPool>
            <xsl:apply-templates select="ConstantPool" />
        </ConstantPool>
    </xsl:template>
    
	<xsl:template match="ConstantPool">
    <!-- DO NOT Set DTD version to 7.4, call of item convert required  -->
    <xsl:copy-of select="@*" />
    <xsl:apply-templates select="Constant" />
	</xsl:template>
	
	<!-- Constant element rule -->
	<xsl:template match="Constant">
    <Constant>
      <!-- DO NOT Set DTD version to 7.4, call of item convert required  -->
      <xsl:copy-of select="@*" />
      <xsl:copy-of select="node()" />
    </Constant>
	</xsl:template>
	
</xsl:stylesheet>
