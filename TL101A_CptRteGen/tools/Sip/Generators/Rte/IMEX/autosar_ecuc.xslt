<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:output method="xml" version="1.0" encoding="UTF-8" indent="yes"/>

	<xsl:template match="/">
		<xsl:copy>
			<xsl:apply-templates/>
		</xsl:copy>
	</xsl:template>
  
	<!-- basic identity template, MSXML generates opening and closing tags for empty tags if children are processed by the template -->
	<xsl:template match="*|@*|text()">
		<xsl:copy>
			<xsl:apply-templates select="*|@*|text()">
			 </xsl:apply-templates>
		</xsl:copy>
	</xsl:template>
	
	<!-- generate short form of empty tags, MSXML generates short form if children are not processed by the template -->
	<xsl:template match="*[count(node())=0]">
		<xsl:copy>
			<xsl:apply-templates select="@*"/>
		</xsl:copy>
</xsl:template>

</xsl:stylesheet>