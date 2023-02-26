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
	name = "Ada"
	description = "Ada 95"
	# File extensions for the language
	extension = {"ad", "ada", "spc", "bdy", "dat", "dep", "sub", "adb", "ads"}
	extension += {"adt", "AD", "ADA", "SPC", "BDY", "DAT", "DEP", "SUB", "ADB"}
	extension += {"ADS", "ADT"}

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
	separator = "\\\"+-*/<=>:,;\'\t()[]^%!~|& {}.@?"
    
	# Escape sequence leader: one character(like the one in C).
	# escape = "\\"
    }

    keyword {
	name = {"at"}
	name += {"do"}
	name += {"if"}
	name += {"in"}
	name += {"is"}
	name += {"of"}
	name += {"or"}
	name += {"abs"}
	name += {"all"}
	name += {"and"}
	name += {"end"}
	name += {"for"}
	name += {"mod"}
	name += {"new"}
	name += {"not"}
	name += {"out"}
	name += {"rem"}
	name += {"use"}
	name += {"xor"}
	name += {"body"}
	name += {"case"}
	name += {"else"}
	name += {"exit"}
	name += {"goto"}
	name += {"loop"}
	name += {"null"}
	name += {"task"}
	name += {"then"}
	name += {"type"}
	name += {"when"}
	name += {"with"}
	name += {"abort"}
	name += {"array"}
	name += {"begin"}
	name += {"delay"}
	name += {"delta"}
	name += {"elsif"}
	name += {"entry"}
	name += {"raise"}
	name += {"range"}
	name += {"until"}
	name += {"while"}
	name += {"accept"}
	name += {"access"}
	name += {"digits"}
	name += {"others"}
	name += {"pragma"}
	name += {"record"}
	name += {"return"}
	name += {"select"}
	name += {"tagged"}
	name += {"aliased"}
	name += {"declare"}
	name += {"generic"}
	name += {"limited"}
	name += {"package"}
	name += {"private"}
	name += {"renames"}
	name += {"requeue"}
	name += {"reverse"}
	name += {"subtype"}
	name += {"abstract"}
	name += {"constant"}
	name += {"function"}
	name += {"separate"}
	name += {"exception"}
	name += {"procedure"}
	name += {"protected"}
	name += {"terminate"}
	# Customized keywords
	# name += {"true"}
	# name += {"false"}

	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    # Preprocessor list: no

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "--"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    # No general comment

    string {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\""; end = "\"" }
	# If color is not defined for string, default color is used.
	# color = "#008000"
    }

    character {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\'"; end = "\'" }
	# If color is not defined for character, default color is used.
	# color = "#008000"
    }

    integer {
	# Support hex integer?
	hex = true
	# Case-sensitive for integer suffix? Default is true.
	# case_sensitive = true
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    float {
	# Support scientific float?
	scientific = true
	# Case-sensitive for float suffix? Default is true.
	# case_sensitive = false
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
	# More stuff from library for auto-completion
	
	# More stuff from GHS-library for auto-completion	
    }
}

