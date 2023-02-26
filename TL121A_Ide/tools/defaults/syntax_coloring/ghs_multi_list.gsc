# The file define the syntax elements for various lists used internally
# by MULTI.

# Version of the language definition syntax used in the file
version = "1"

language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-MULTI-Internal-List"
	description = "GHS MULTI Internal List"
	# File extensions for the language
	# For specialized option database files, like for syntax coloring,
	# new project wizard etc., their extensions are listed in their
	# corresponding configuration files, here we just list the extensions
	# for the general option database files.
	extension = {"ini"}

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
	# Don't treat "/()"and space as separator
	separator = "\\\"+-*<=>:,;\'\t[]^!~|&{}.?"
    
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"

	# Is it possible to wrap line for the language?
	# The default value is true.
	line_wrappable = false
	# Draw wrap line for the language in Editor?
	# The default value is true.
	# draw_wrap_line = false
    }

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "["
	# If color is not defined for line_comment, default color is used.
	color = "#008080"
    }

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
	# case_sensitive = true
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
