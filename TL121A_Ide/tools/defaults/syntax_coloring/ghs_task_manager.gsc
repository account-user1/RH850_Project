# The file define the syntax elements for GHS Task Manager.

# Version of the language definition syntax used in the file
version = "1"

%include "ghs_multi_list.gsc"

language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-Task-Manager"
	description = "GHS Task Manager"
	# File extensions for the language
	# For specialized option database files, like for syntax coloring,
	# new project wizard etc., their extensions are listed in their
	# corresponding configuration files, here we just list the extensions
	# for the general option database files.
	extension = {"tvc"}

	# Inherit the definition for the following general elements from
	# "ghs_multi_list.gsc":
	#	case_sensitive
	#	pascal_style_priority

	# Separator of the language to delimit syntax tokens
	separator = "\\\"+-*/<=>:,;\'\n\r\t()[]^%!~|& {}?"
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    # Inherit the definition for the following elements from
    # "ghs_multi_list.gsc":
    #		keyword 
    #		line_comment
    #		string
    #		character
    #		float 
    #		integer
    #		customized 
    #		autocomplete 

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	name += {"GHS_TVC_TASK"}
	name += {"GHS_TVC_SYNC"}
	name += {"GHS_TVC_INFO_PANE"}
	name += {"GHS_TVC_INFO_HEIGHT"}
    }

}
