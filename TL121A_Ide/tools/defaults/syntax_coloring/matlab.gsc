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
	name = "MATLAB"
	description = "MATLAB"
	# File extensions for the language
	extension = {"m"}

	# The following are some other information about the language

	# Is the language case-sensitive? If no explicit specification
	# for it, the default value is true.
	case_sensitive = true

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
	separator = "\\\"+-*/<=>:,;\'\t()[]^%!~|& {}.?"

	# Escape sequence leader: one character(like the one in C).
	# escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	# Todo: make the list complete.
	# MATLAB as a programming language
	name = {"builtin"}
	name += {"eval"}
	name += {"evalc"}
	name += {"evalin"}
	name += {"feval"}
	name += {"function"}
	name += {"global"}
	name += {"nargchk"}
	name += {"persistent"}
	name += {"script"}
	# Control flow
	name += {"break"}
	name += {"case"}
	name += {"catch"}
	name += {"else"}
	name += {"elseif"}
	name += {"end"}
	name += {"error"}
	name += {"for"}
	name += {"if"}
	name += {"otherwise"}
	name += {"return"}
	name += {"switch"}
	name += {"try"}
	name += {"warning"}
	name += {"while"}
	# Interactive input
	name += {"input"}
	name += {"keyboard"}
	name += {"menu"}
	name += {"pause"}
	# Object-oriented programming
	name += {"class"}
	name += {"double"}
	name += {"inferiorto"}
	name += {"inline"}
	name += {"int8"}
	name += {"int16"}
	name += {"int32"}
	name += {"isa"}
	name += {"loadobj"}
	name += {"saveobj"}
	name += {"single"}
	name += {"superiorto"}
	name += {"uint8"}
	name += {"uint16"}
	name += {"uint32"}
	# Debugging
	name += {"dbclear"}
	name += {"dbcont"}
	name += {"dbdown"}
	name += {"dbmex"}
	name += {"dbquit"}
	name += {"dbstack"}
	name += {"dbstatus"}
	name += {"dbstep"}
	name += {"dbstop"}
	name += {"dbtype"}
	name += {"dbup"}
        # Todo: put in the full list of keywords for MATLAB.
	name += {"result"}
	# Customized keywords, like
	name += {"true"}
	name += {"false"}

	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    # preprocessor: no

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "%"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    comment {
	# Because multiple pairs of comment delimiters can be defined,
	# use a index for each of them.
	#1 { begin = "/*"; end = "*/" }
	# If color is not defined for comment, default color is used.
	# color = "#008000"
    }

    string {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\'"; end = "\'" }
	2 { begin = "\""; end = "\"" }
	# If color is not defined for string, default color is used.
	# color = "#008000"
    }

    # character: no

    integer {
	# Support hex integer?
	# hex = true
	# Case-sensitive for integer suffix? Default is true.
	# case_sensitive = true
	# decimal_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# hex_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    float {
	# Support scientific float?
	# scientific = true
	# Case-sensitive for float suffix? Default is true.
	# case_sensitive = false
	# suffix = {"f", "l", "fl", "fl"}
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }

    customized {
	# pattern = {"gen_*"}
	# More customized stuff.
	# If auto-completion is not explicitly specified, it is true
	# by default
	# autocomplete = false
	# If color is not defined for customized items, default color is used.
	# color = "#0080a0"
    }

    autocomplete {
	# "match" is used to defined match algorithm, it has 
	# the following values:
	#	"best" - default value
	#	"first"
	# As an example, if there are 3 strings for auto-completion:
	# 	"main", "mail" and "misc"
	# When you type in "m", "best match" will not auto-complete it,
	# because the 3 strings do not have a common prefix beginning with
	# "m", but "first match" will auto-complete it into "main".
	# When you type in "ma", "best match" will auto-complete it
	# into "mai", but "first match" will still auto-complete it
	# into "main".
	match = "best"
	
	# By default, you can use the following key-strokes in MULTI Editor
	# to manually find an auto-completed string for the string ending
	# at the caret:
	# 1. "ctrl+]": navigate to the next matched string.
	# 2. "ctrl+[": navigate to the previous matched string.
	# You can continuously press the keys to scan the matched
	# string list until you find the one you want.
	# 3. "ctrl+/": launch a popup menu to show a list of matched
	# strings(up to a certain number configured by option "max_match").
	# Then you can pick what you want form the popup menu.
	# 4. "ctrl+'": launch a popup menu to show a list of matched
	# function prototypes(up to a certain number configured by option
	# "max_match"). Then you can pick what you want form the popup menu.

	# If to automatically grab function prototypes dynamically in Editor.
	# Default setting is false.
	# grab_prototype = true

	# If to show function prototype when user types in.
	# Default setting is false.
	# show_prototype = true

	# The separator between auto-completed object name and its prototype
	# or value. Default separator is ";"
	# name_value_separator = "#"

	# Max number of strings to match when user types "ctrl+/".
	# The default value is 10. Use the following statement to change it.
	# max_match = 15

	# Minimum length for a string to which auto-completion can be applied.
	# The default value is 1. Use the following statement to change it.
	min_string_length = 3

	# "autocomplete" let you can turn on/off the whole
	# auto-completion mechanism. The default value is true.
	# When the setting here is true, you can still turn on/off
	# about if using keywords, preprocessors or customized items
	# not containing wild card as the auto-completion source.
	# autocomplete = false

	# Define extra auto-completion items in addition to
	# 1. keywords
	# 2. preprocessors
	# 3. customized items not containing wild card

	# Auto-complete strings
	# name = {"main"}
	# name += {"strcasecmp"}
	# More stuff from library for auto-completion
	
	# More stuff from GHS-library for auto-completion
    }
}
