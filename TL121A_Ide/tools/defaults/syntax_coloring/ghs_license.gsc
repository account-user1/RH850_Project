# Version of the language definition syntax used in the file
version = "1"


# language specification for syntax coloring and
# auto-indention in MULTI's editor.
language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS License File"
	description = "GHS License File"
	# File extensions for the language
	extension = {"lck", "glk", "ghslic"}

	# The following are some other information about the language

	# Is the language case-sensitive? If no explicit specification
	# for it, the default value is true.
	case_sensitive = false

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
	# Don't treat / and \ be separators, because they may be used
	# in file path.
	separator = "#`\"+-*<=>:,;\'\t()[]^%!~|& {}.?"
    
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.

	# Reserved words
	name = {"version"}
	name += {"serial"}
	name += {"featurebits"}
	name += {"ethernet"}
	name += {"port"}
        name += {"platform"}
	name += {"key"}
	name += {"code"}
	name += {"licenses"}
	name += {"hostid"}
	name += {"expiration"}
	# The following item is only used in license cache file.
	name += {"server"}
	name += {"file"}

	# Some constants
	# Other special stuff
	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "#"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
	span_line_by_escape = false;
    }

    integer {
	# Support hex integer?
	hex = true
	# Case-sensitive for integer suffix? Default is true.
	#case_sensitive = true
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    customized {
        # Value of "platform".
        pattern += {"windows"}
        pattern += {"linux"}
        pattern += {"solaris2"}
    }
}

