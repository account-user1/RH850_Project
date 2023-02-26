# Version of the language definition syntax used in the file
version = "1"

# language specification for syntax coloring and
# auto-indention in MULTI's editor.

%include "c.gsc"

language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "C++"
	description = "ANSI C++ with GHS Extensions"
	# File extensions for the language
	extension = {"cc", "cpp", "c++", "C", "cxx", "cp", "idl", "hh"}
	extension += {"h", "H", "h++", "hxx", "hpp"}

	# Inherit the definition for the following general elements from
	# "c.gsc":
	#	case_sensitive
	#	pascal_style_priority
	#	escape
	#	separator

    }

    # Inherit the definition for the following elements from
    # "c.gsc":
    #		keyword 
    #		line_comment
    #		string
    #		character
    #		float 
    #		integer

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	# C++ keywords
	name += {"and"}
	name += {"and_eq"}
	name += {"asm"}
	name += {"bitand"}
	name += {"bitor"}
	name += {"bool"}
	name += {"catch"}
	name += {"class"}
	name += {"compl"}
	name += {"const_cast"}
	name += {"delete"}
	name += {"dynamic_cast"}
	name += {"explicit"}
	name += {"export"}
	# Already defined in c.gsc
	#name += {"false"}
	name += {"friend"}
	name += {"inline"}
	name += {"mutable"}
	name += {"namespace"}
	name += {"new"}
	name += {"not"}
	name += {"not_eq"}
	name += {"operator"}
	name += {"or"}
	name += {"or_eq"}
	name += {"private"}
	name += {"protected"}
	name += {"public"}
	name += {"reinterpret_cast"}
	name += {"static_cast"}
	name += {"template"}
	name += {"this"}
	name += {"throw"}
	# Already defined in c.gsc
	#name += {"true"}
	name += {"try"}
	name += {"typeid"}
	name += {"typename"}
	name += {"using"}
	name += {"virtual"}
	name += {"wchar_t"}
	name += {"xor"}
	name += {"xor_eq"}

	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

# At present, the line comment is defined in "c.gsc".
%if 0
    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "//"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }
%endif

    customized {
	#pattern = {"gen_*"}
	# More customized stuff.
	# If auto-completion is not explicitly specified, it is true
	# by default
	# autocomplete = false
	# If color is not defined for customized items, default color is used.
	color = "#0080a0"
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
	grab_prototype = true

	# If to show function prototype when user types in.
	# Default setting is false.
	show_prototype = true

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
	#name = {"main"}
    }
}

# Auto-complete functions in GHS library.
#%include "ghs_lib_ac.gsc"

# Auto-complete functions in C-library.
#%include "clib_ac.gsc"
# Syntax color C-librarya functions
#%include "clib_cust.gsc"

# Auto-complete functions in C++-library.
#%include "cpp_lib_ac.gsc"

# Auto-complete and color INTEGRITY API/Types.
#%include "integrity_ac.gsc"
#%include "integrity_cust.gsc"

# Auto-complete and color u-velOSity API/Types.
#%include "uvelosity_ac.gsc"
#%include "uvelosity_cust.gsc"

# Auto-complete and color ThreadX API/Types.
#%include "threadx_ac.gsc"
#%include "threadx_cust.gsc"

