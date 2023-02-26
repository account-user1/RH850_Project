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
	name = "Python"
	description = "Python"
	# File extensions for the language
	extension = {"py"}

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
	# Don't treat \ as separator, because it is used in regular
	# expression.
	separator = "`\"+-*/<=>:,;\'\t()[]^%!~|& {}?"
    
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	# The keyword list is not complete
	name += {"and"}
	name += {"as"}
	name += {"assert"}

	name += {"break"}

	name += {"class"}
	name += {"continue"}

	name += {"def"}
	name += {"del"}

	name += {"elif"}
	name += {"else"}
	name += {"except"}
	name += {"exec"}

	name += {"finally"}
	name += {"for"}
	name += {"from"}

	name += {"global"}

	name += {"if"}
	name += {"import"}
	name += {"in"}
	name += {"is"}

	name += {"lambda"}

	name += {"not"}

	name += {"or"}

	name += {"pass"}
	name += {"print"}

	name += {"raise"}
	name += {"return"}

	name += {"try"}

	name += {"while"}

	name += {"yield"}

	# Built-in functions
	name += {"abs"}
	name += {"basestring"}
	name += {"bool"}
	name += {"callable"}
	name += {"chr"}
	name += {"classmethod"}
	name += {"cmp"}
	name += {"compile"}
	name += {"complex"}
	name += {"delattr"}
	name += {"dict"}
	name += {"dir"}
	name += {"divmod"}
	name += {"enumerate"}
	name += {"eval"}
	name += {"execfile"}
	name += {"file"}
	name += {"filter"}
	name += {"float"}
	name += {"getattr"}
	name += {"globals"}
	name += {"hasattr"}
	name += {"hash"}
	name += {"help"}
	name += {"hex"}
	name += {"id"}
	name += {"input"}
	name += {"int"}
	name += {"isinstance"}
	name += {"issubclass"}
	name += {"iter"}
	name += {"len"}
	name += {"list"}
	name += {"locals"}
	name += {"long"}
	name += {"map"}
	name += {"max"}
	name += {"min"}
	name += {"object"}
	name += {"oct"}
	name += {"open"}
	name += {"ord"}
	name += {"pow"}
	name += {"property"}
	name += {"range"}
	name += {"raw_input"}
	name += {"reduce"}
	name += {"reload"}
	name += {"repr"}
	name += {"round"}
	name += {"setattr"}
	name += {"slice"}
	name += {"staticmethod"}
	name += {"str"}
	name += {"sum"}
	name += {"super"}
	name += {"tuple"}
	name += {"type"}
	name += {"unichr"}
	name += {"unicode"}
	name += {"vars"}
	name += {"xrange"}
	name += {"zip"}
	# Non-essential Built-in Functions
	name += {"apply"}
	name += {"buffer"}
	name += {"coerce"}
	name += {"intern"}
	# Built-in numeric Types
	name += {"int"}
	name += {"long"}
	# Iterator Types
	name += {"next"}
	# String types
	# File Objects
	name += {"close"}
	name += {"flush"}
	name += {"fileno"}
	name += {"isatty"}
	name += {"read"}
	name += {"readline"}
	name += {"readlines"}
	name += {"xreadlines"}
	name += {"seek"}
	name += {"tell"}
	name += {"truncate"}
	name += {"write"}
	name += {"writelines"}
	name += {"closed"}
	name += {"encoding"}
	name += {"mode"}
	name += {"name"}
	name += {"newlines"}
	name += {"softspace"}
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
    }

    block {
	1 { begin = "\"\"\""; end = "\"\"\"" }
	2 { begin = "\'\'\'"; end = "\'\'\'" }
	# If color is not defined for block, default color is used.
	color = "#800000"
    }

    string {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\""; end = "\""}
	2 { begin = "'"; end = "'"}
	# If color is not defined for string, default color is used.
	# color = "#008000"
    }

    character {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "`"; end = "`" }
	# If color is not defined for character, default color is used.
	# color = "#008000"
    }

    integer {
	# Support hex integer?
	case_sensitive = false;
	hex = true
	hex_suffix = {"l"}
	decimal_suffix = {"l"}
	# Case-sensitive for integer suffix? Default is true.
	#case_sensitive = true
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    float {
	# Support scientific float?
	#scientific = true
	# Case-sensitive for float suffix? Default is true.
	#case_sensitive = false
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }

    customized {
	pattern += {"_*"}
	pattern += {"True"}
	pattern += {"False"}
	pattern += {"None"}
	pattern += {"self"}
	pattern += {"Ellipsis"}
	pattern += {"NotImplemented"}
	# Built-in exceptions
	pattern += {"Exception"}
	pattern += {"StandardError"}
	pattern += {"ArithmeticError"}
	pattern += {"LookupError"}
	pattern += {"EnvironmentError"}
	pattern += {"AssertionError"}
	pattern += {"AttributeError"}
	pattern += {"EOFError"}
	pattern += {"FloatingPointError"}
	pattern += {"IOError"}
	pattern += {"ImportError"}
	pattern += {"IndexError"}
	pattern += {"KeyError"}
	pattern += {"KeyboardInterrupt"}
	pattern += {"MemoryError"}
	pattern += {"NameError"}
	pattern += {"NotImplementedError"}
	pattern += {"OSError"}
	pattern += {"OverflowError"}
	pattern += {"ReferenceError"}
	pattern += {"RuntimeError"}
	pattern += {"StopIteration"}
	pattern += {"SyntaxError"}
	pattern += {"SystemError"}
	pattern += {"SystemExit"}
	pattern += {"TypeError"}
	pattern += {"UnboundLocalError"}
	pattern += {"UnicodeError"}
	pattern += {"UnicodeEncodeError"}
	pattern += {"UnicodeDecodeError"}
	pattern += {"UnicodeTranslateError"}
	pattern += {"ValueError"}
	pattern += {"WindowsError"}
	pattern += {"ZeroDivisionError"}
	pattern += {"Warning"}
	pattern += {"UserWarning"}
	pattern += {"DeprecationWarning"}
	pattern += {"PendingDeprecationWarning"}
	pattern += {"SyntaxWarning"}
	pattern += {"RuntimeWarning"}
	pattern += {"FutureWarning"}
	
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
	#name = {"main"}
    }
}

