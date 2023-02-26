# Version of the language definition syntax used in the file
version = "1"

%include "ghs_python.gsc"

# language specification for syntax coloring and
# auto-indention in MULTI's editor.
language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-MULTI-PythonPane"
	description = "MULTI Python Pane"
	# File extensions for the language
	extension = {"ghspp"}

	# Inherit the definition for the following general elements from
	# "python.gsc":
	#	case_sensitive
	#	pascal_style_priority
	#	escape
	#	separator
    }

    # Inherit the definition for the following elements from
    # "python.gsc":
    #		keyword 
    #		line_comment
    #		comment 
    #		string
    #		character
    #		float 
    #		integer
    #		autocomplete 

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	"CommandOutput" { lead = "\x01CmdOut:"; color = "#808080"}
	"PythonOutput"  { lead = "\x01Py Out:"; color = "#000080"}
	"PythonError"   { lead = "\x01Py Err:"; color = "#c00000"}
    }

    customized {
	pattern += {"$*"}
	# More customized stuff.
	# If auto-completion is not explicitly specified, it is true
	# by default
	# autocomplete = false
	# If color is not defined for customized items, default color is used.
	# color = "#0080a0"
    }
}
