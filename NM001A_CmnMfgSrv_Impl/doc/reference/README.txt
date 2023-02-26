Overview
------------------------------------------------------------------------------------------------------------------------
The files in this folder are used by TL110A_NxtrMfgSuprt\tools\OdxGen.py during generation of the manufacturing service
reference document to create the "Overview" section of the document.  The tool performs a search there for all files
that have a "*.md" (Markdown) extension, sorts them according to a number perpended to the file name, removes the
aforementioned number, runs the contents through a Markdown to HTML converter, and adds them into the reference
document.


Filenames
------------------------------------------------------------------------------------------------------------------------
Filenames must end in a .md extension to be recognized by the tool.  The filename will be used as the heading for the
corresponding section in the document.


Ordering
------------------------------------------------------------------------------------------------------------------------
The ordering of the sections within the document is determined by the number applied to the beginning of the filename.
This number, subsequent period and space before the first letter will automatically be removed when the filename is
converted into a section heading.


Syntax
------------------------------------------------------------------------------------------------------------------------
The Syntax of the reference files is [Markdown](https://daringfireball.net/projects/markdown/syntax).  The tool also
supports [Markdown Extra](https://michelf.ca/projects/php-markdown/extra/).  For reference, this README is written in
Markdown format.  The intent is to allow simple text with ASCII markup to be used to render nicely formated HTML
documents.


Limits
------------------------------------------------------------------------------------------------------------------------
There are no limits imposed by the tool.  Any number of files may be added and content may be divided into as many parts
as seen fit to properly provide the information.