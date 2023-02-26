# Version of the language definition syntax used in the file
version = "1"

%include "ghs_option_database.gsc"

# language specification for syntax coloring and
# auto-indention in MULTI's editor.
language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-Register-Information-Database"
	description = "GHS Register Information Database"
	# File extensions for the language
	extension = {"grd"}

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

	# First-level keys
	name += {"general"}
	name += {"enum"}
	name += {"struct"}
	name += {"structure"}
	name += {"bitfield"}
	name += {"register"}
	name += {"group"}

	# Sub-keys in General scope
	name += {"version"}
	name += {"byte_endian"}
	name += {"bit_endian"}		# depreciated
	name += {"msb_with_index_0"}	# depreciated
	name += {"bit_0_is_msb"}
	name += {"pad_bitfield"}
	name += {"register_offset"}
	name += {"register_width"}
	name += {"multi_command"}

	# Shared sub-keys
	name += {"long_name"}
	name += {"ln"}
	name += {"short_name"}
	name += {"sn"}
	name += {"description"}
	name += {"desc"}
	name += {"help_key"}
	name += {"hk"}
	name += {"auto_value_desc"}	# by Enum and Bitfield

	# Sub-keys in Enum scope
	name += {"value"}

	# Sub-keys in Bitfield scope
	name += {"loc"}

	# Sub-keys in struct scope
	name += {"type"}

	# Sub-keys in Register scope
	name += {"hide"}
	name += {"width"}
	name += {"permission"}
	name += {"address"}
	name += {"access"}
	name += {"offset"}
	name += {"read_length"}
	name += {"write_length"}
	name += {"address_port"}
	name += {"control_mask"}
	name += {"data_port"}
	name += {"gui_tab"}
	name += {"alias"}
	name += {"cache_value"}
	name += {"memory_space"}

	# Sub-keys in Group scope
	name += {"top_level_index"}
	name += {"collapse"}

#	# Data types: they are enclosed in "", can not colored as keywords.
#	name += {"void"}
#	name += {"char"}
#	name += {"short"}
#	name += {"int"}
#	name += {"long"}
#	name += {"float"}
#	name += {"double"}
#	name += {"signed"}
#	name += {"unsigned"}
#	name += {"hex"}
#	name += {"code"}
	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    customized {
	# More customized stuff.
	pattern += {"_TARGET"}
	pattern += {"_TARGET_FAMILY"}
	pattern += {"_TARGET_MINOR"}
	pattern += {"_TARGET_SERIES"}
	pattern += {"_TARGET_COPROCESSOR"}
	pattern += {"_TARGET_OS"}
	pattern += {"_TARGET_MINOR_OS"}
	pattern += {"_TARGET_SHORTNAME"}
	pattern += {"_HOSTOS"}
	pattern += {"_TARGET_IS_BIGENDIAN"}
	pattern += {"_TIMEMACHINE"}
	pattern += {"_GHS_MAJOR_VERSION"}
	pattern += {"_MULTI_MAJOR_VERSION"}
	pattern += {"_GHS_MINOR_VERSION"}
	pattern += {"_MULTI_MINOR_VERSION"}
	pattern += {"_GHS_MICRO_VERSION"}
	pattern += {"_MULTI_MICRO_VERSION"}
	pattern += {"__regadr"}
	pattern += {"pvr_address*"}
	pattern += {"pvr_mask*"}
	pattern += {"pvr_value*"}
	pattern += {"pvr_info*"}
	pattern += {"bcr_address*"}
	pattern += {"bcr_mask*"}
	pattern += {"bcr_value*"}
	pattern += {"bcr_info*"}
	pattern += {"_PROCESSOR_VERSION*"}	# Depreciated
	pattern += {"_BOARD_CONFIG*"}		# Depreciated
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

