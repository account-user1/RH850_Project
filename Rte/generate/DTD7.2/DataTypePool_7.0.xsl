<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD7.2\DVW.DTD" />

    <!-- Retain white space within all elements -->
    <xsl:preserve-space elements="*" />

    <xsl:template match="@DTDVersion">
        <xsl:attribute name="DTDVersion">7.2</xsl:attribute>
    </xsl:template>

    <!-- EVAL00113237 - AR4-569: Support AUTOSAR 4.x RfCs required by GM (RfC 52752 InvalidValue)
        + if UseInvalidValue is true (-1), a local constant element with value <StrInvalidValue> has to be created
        - remove obsolete attributes UseInvalidValue + StrInvalidValue
    -->
    <xsl:template match="Boolean4Primitive|NumericApp4Primitive|NumericImpl4Primitive">
        <xsl:copy>
			<xsl:copy-of select="@*[local-name()!='UseInvalidValue' and local-name()!='InvalidValue']"/>
			<xsl:copy-of select="*"/>
            <xsl:if test="@UseInvalidValue='-1'">
			    <xsl:element name="Constant">
                    <xsl:attribute name="Value">
                        <xsl:value-of select="@InvalidValue"/>
                    </xsl:attribute>
                    <xsl:if test="local-name()='Boolean4Primitive' or local-name()='NumericApp4Primitive'">
					    <xsl:attribute name="ValueSpec">AppValue</xsl:attribute>
                    </xsl:if>
                    <xsl:if test="local-name()='NumericImpl4Primitive'">
					    <xsl:choose>
						    <xsl:when test="number(@InvalidValue) = @InvalidValue">
							    <xsl:attribute name="ValueSpec">Numeric</xsl:attribute>
						    </xsl:when>
						    <xsl:otherwise>
							    <xsl:attribute name="ValueSpec">Text</xsl:attribute>
						    </xsl:otherwise>
					    </xsl:choose>
				    </xsl:if>
                    <xsl:element name="NAME">ValueSpec_Reserved</xsl:element>
                </xsl:element>
            </xsl:if>
        </xsl:copy>
    </xsl:template>

    <!-- EVAL00108441 - remove obsolete AR4 data type DTD attributes 
        - remove obsolete attributes CalAccess (+ AdditionalNativeTypeQualifier) for RecElementApp/Impl
    -->
    <xsl:template match="RecElementApp4/@CalAccess|RecElementImpl4/@AdditionalNativeTypeQualifier|RecElementImpl4/@CalAccess"/>

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
