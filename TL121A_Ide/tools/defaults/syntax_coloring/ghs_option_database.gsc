# The file define the syntax elements for GHS Option Database.

# Version of the language definition syntax used in the file
version = "1"

%include "ghs_style_preprocessors.gsc"

language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-Option-Database"
	description = "GHS Option Database"
	# File extensions for the language
	# For specialized option database files, like for syntax coloring,
	# new project wizard etc., their extensions are listed in their
	# corresponding configuration files, here we just list the extensions
	# for the general option database files.
	extension = {"dd", "opt", "odb", "udb"}

	# The following are some other information about the language

	# Inherit the definition for the following general elements from
	# "ghs_style_preprocessors.gsc":
	#	case_sensitive

	# Priority conflict solution.
	# Comment, string and character have the same priority.
	# When preprocessor conflicts with them, some language, like
	# C/C++, let comment, string and character have higher priority,
	# other language, like PASCAL, do the other choice.
	# We choose the behavior of C/C++ as the default behavior.
	# If you want to change, like for PASCAL, use the following 
	# statement:
	# pascal_style_priority = true

	# Separator of the language to delimit syntax tokens
	# Don't treat . as separator, because it could be used in
	# a path specification, like V800_AllocateEP.disabled.
	separator = "\\\"+-*/<=>:,;\'\t()[]^!~|& {}?"
    
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	name += {"yes"}
	name += {"on"}
	name += {"true"}
	name += {"no"}
	name += {"off"}
	name += {"false"}

# The following keywords are used in quoted strings.
%if 0
	name += {"__DIR__"}
	name += {"__MULTI_DIR__"}
	name += {"_MULTI_DIR"}
%endif
    }

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "#"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    # General comment: no

    string {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\""; end = "\"" }
	# If color is not defined for string, default color is used.
	# color = "#008000"
    }

    # Character: no

    integer {
	# Support hex integer?
	hex = true
	# Case-sensitive for integer suffix? Default is true.
        case_sensitive = false
        decimal_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
        hex_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    # Float: no

    customized {
	#pattern = {"$*"}
	# More customized stuff.
	# If auto-completion is not explicitly specified, it is true
	# by default
	# autocomplete = false
	# If color is not defined for customized items, default color is used.
	# color = "#0080a0"
    }
}
