# The file define the syntax elements for GHS Option Database.

language {
    general {
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
	# ~ is used in some keywords, so don't treat it as separator
	separator = "\\\"+-*/<=>:,;\'\t()[]^%!|& {}.?"
    
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	name = {"~define"}
	name += {"~include"}
	name += {"~sysinclude"}
	name += {"%EVAL"}
	name += {"if"}
	name += {"else"}
	#name += {"define"}
	name += {"version"}
    }
}
