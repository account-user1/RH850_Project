<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="yes" indent="yes"/>

	<!-- keep in sync with the schema element order -->
	<!-- Note: list must end with an | -->
	<xsl:variable name="sortOrder">NAME|ATTRDEF|PROFILESETTINGS|PROJECTASSISTANT|SETTINGS|FILEREF|EXTERNALFILEREF|</xsl:variable>
	<xsl:template name="SortElements">
		<xsl:param name="sortList"/>
		<xsl:variable name="element" select="substring-before ($sortList, '|')"/>
		<xsl:if test="$element != ''">
			<xsl:apply-templates select="/DCF/*[local-name()= $element]">
				<xsl:sort select="ARXML" order="ascending"/>
				<xsl:sort select="PATH" order="ascending"/>
			</xsl:apply-templates>
			<xsl:call-template name="SortElements">
				<xsl:with-param name="sortList" select="substring-after ($sortList, '|')"/>
			</xsl:call-template>
		</xsl:if>
	</xsl:template>

	<xsl:template match="/">
		<xsl:text disable-output-escaping="yes">
&lt;!DOCTYPE DCF [
	&lt;!ELEMENT DCF ((NAME,ATTRDEF?,PROFILESETTINGS?,PROJECTASSISTANT?,SETTINGS?,FILEREF*,EXTERNALFILEREF*)?)>
	&lt;!ATTLIST DCF
	ARSCHEMA (21XSDREV0017|30XSDREV0003|31XSDREV0004|314DAI4|32XSDREV0001|32XSDREV0002|403|412|413|421|422|430) "21XSDREV0017"&gt;
	&lt;!ELEMENT NAME (#PCDATA)&gt;
	&lt;!ELEMENT ATTRDEF (#PCDATA)&gt;
	&lt;!ELEMENT FILEREF (ARXML, DCB?, ECUC?, GENATTR?)&gt;
	&lt;!ELEMENT ARXML (#PCDATA)&gt;
	&lt;!ATTLIST ARXML TYPE CDATA "" 
    ROOTITEM (CONSTANT|DATATYPE|PORTINTERFACE|SIGNAL|COMPONENTTYPE|ECUPROJECT|VEHICLEPROJECT|PACKAGE|BLUEPRINT) #REQUIRED &gt;
	&lt;!ELEMENT DCB (#PCDATA)&gt;
	&lt;!ELEMENT ECUC (#PCDATA)&gt;
  &lt;!ELEMENT GENATTR (#PCDATA)&gt;
  &lt;!ELEMENT PROFILESETTINGS (#PCDATA)&gt;
  &lt;!ELEMENT PROJECTASSISTANT (#PCDATA)&gt;
  &lt;!ELEMENT SETTINGS (EXTSSWCSUPPORT?)&gt;
  &lt;!ELEMENT EXTSSWCSUPPORT EMPTY&gt;
  &lt;!ATTLIST EXTSSWCSUPPORT VALUE (true|false) #REQUIRED &gt;
  &lt;!ELEMENT EXTERNALFILEREF (PATH)&gt;
  &lt;!ELEMENT PATH (#PCDATA)&gt;
]&gt;
</xsl:text>
		<xsl:apply-templates/>
	</xsl:template>

	<xsl:template match="DCF">
		<xsl:copy>
			<xsl:apply-templates select="@*"/>
			<xsl:variable name="elements" select="/DCF/*"/>
			<xsl:call-template name="SortElements">
				<xsl:with-param name="sortList" select="$sortOrder"/>
			</xsl:call-template>
		</xsl:copy>
	</xsl:template>

	<xsl:template match="@*|node()">
		<xsl:copy>
			<xsl:apply-templates select="*|@*|node()"/>
		</xsl:copy>
	</xsl:template>
</xsl:stylesheet>
