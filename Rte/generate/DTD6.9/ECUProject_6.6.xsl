<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD6.9\DVW.DTD" />
    
    <!-- Retain white space within all elements -->
    <xsl:preserve-space elements="*" />
    
    <!-- Root element rule -->
    <xsl:template match="/">
        <ECUProject>
            <xsl:apply-templates select="ECUProject" />
        </ECUProject>
    </xsl:template>

    <!-- ECUProject element rule -->
    <!-- Set DTD version to 6.9, No ItemConvert required  -->
    <xsl:template match="ECUProject">
        <xsl:copy-of select="@CMVersion | @CMState | @GUID | @Version | @RO" />
        <xsl:attribute name="DTDVersion">6.9</xsl:attribute>
        <xsl:copy-of select="@GenOutputLevel | @BSWMDFileCom | @BSWMDFileNvM | @BSWMDFileOs | @ECUCFile | @ECUCFileLastUpdate | @ECUCFileModificationTime | @AllowGenerationOfUnsavedData | @DPAFile | @SystemVersion | @ExtractVersion | @PackageLink" />
        <xsl:copy-of select="NAME | LONGNAME | DESC | CONTENT | ATTRLink | FileEntry | Task | TaskMap | NVMBlock | MemoryMap" />
        <xsl:apply-templates select="ECUSWComposition" />
        <xsl:copy-of select="ECUCommunication | ExternalTool | Generator | GenAttrList | OsApplication | ModuleChecksum | ECUCSplitter | ExternalFile" />
    </xsl:template>

    <!-- ECUSWComposition element rule -->
    <xsl:template match="ECUSWComposition">
        <ECUSWComposition>
            <xsl:copy-of select="@*" />
            <xsl:copy-of select="NAME | LONGNAME | DESC | ATTRLink | ComponentPrototype | PortConnector | PortPrototype | DataMapping | ServicePortConnector | GenAttrList" />
            <xsl:apply-templates select="E2EConfiguration" />
            <xsl:copy-of select="PortTerminator" />
        </ECUSWComposition>
    </xsl:template>

    <!-- E2EConfiguration element rule -->
    <xsl:template match="E2EConfiguration">
        <E2EConfiguration>
            <xsl:copy-of select="@*" />
            <xsl:copy-of select="NAME | LONGNAME | DESC | ATTRLink" />
            <xsl:apply-templates select="E2EConnection" />
        </E2EConfiguration>
    </xsl:template>

    <!-- E2EConnection element rule: remove old category attribute -->
    <xsl:template match="E2EConnection">
        <E2EConnection>
            <xsl:copy-of select = "@*[name() != 'Category']" />
            <xsl:copy-of select="node()" />
        </E2EConnection>
    </xsl:template>

</xsl:stylesheet>
