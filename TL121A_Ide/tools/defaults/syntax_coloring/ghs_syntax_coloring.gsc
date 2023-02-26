# Version of the language definition syntax used in the file
version = "1"

%include "ghs_option_database.gsc"
# To define the color for preprocessors, use a statement like the
# following one, otherwise, the default color is used:
# language.preprocessor.color = "#008080"

# language specification for syntax coloring and
# auto-indention in MULTI's editor.
language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-SyntaxColoring"
	description = "GHS Syntax Coloring"
	# File extensions for the language
	extension = {"gsc"}

	# Inherit the definition for the following general elements from
	# "ghs_option_database.gsc":
	#	case_sensitive
	#	pascal_style_priority
	#	separator
	#	escape 
    }

    # Inherit the definition for the following elements from
    # "ghs_option_database.gsc":
    #		keyword
    #           preprocessor 
    #		line_comment
    #		comment
    #		string
    #		character
    #		float 
    #		integer 

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.

	name += {"version"}
	name += {"language"}
	# General information
	name += {"general"}
	name += {"name"}
	name += {"description"}
	name += {"case_sensitive"}
	name += {"extension"}
	name += {"separator"}
	name += {"escape"}
	name += {"pascal_style_priority"}
	name += {"line_wrappable"}
	name += {"draw_wrap_line"}
	# Keyword information
	name += {"keyword"}
	name += {"color"}
	# Preprocessor information
	name += {"preprocessor"}
	# Comment information
	name += {"comment"}
	name += {"begin"}
	name += {"end"}
	# Line comment information
	name += {"line_comment"}
	name += {"span_line_by_escape"}
	# String information
	name += {"string"}
	name += {"span_line"}
	# Character information
	name += {"character"}
	# General block information
	name += {"block"}
	# Integer information
	name += {"integer"}
	name += {"hex"}
	name += {"decimal_suffix"}
	name += {"hex_suffix"}
	# Float information
	name += {"float"}
	name += {"scientific"}
        name += {"hex_scientific"}
	name += {"suffix"}
	# Other information
	name += {"customized"}
	name += {"pattern"}
	name += {"autocomplete"}
	name += {"match"}
	name += {"max_match"}
	name += {"min_string_length"}
	name += {"name_value_separator"}
	name += {"grab_prototype"}
	name += {"show_prototype"}
	# Some values
	#name += {"true"}
	#name += {"false"}
	name += {"first"}
	name += {"best"}
	# Auto-indention
	name += {"indention"}
	# Keyword for index file
	name += {"definition_file"}
	name += {"hide"}
	name += {"submenu"}
	name += {"first_line_pattern"}

	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
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
	# strings(up to a certain number configured by the following option).
	# Then you can pick what you want form the popup menu.

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
