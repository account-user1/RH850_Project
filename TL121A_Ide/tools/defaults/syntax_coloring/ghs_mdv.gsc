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
	name = "GHS-Data-Visualization"
	description = "GHS Data Visualization"
	# File extensions for the language
	extension = {"mdv"}

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
    #		line_comment
    #		string
    #		character
    #		integer
    #		float

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	#
	name += {"signature"}
	name += {"required_fields"}
	name += {"type"}
	name += {"size"}
	name += {"begin_iter"}
	name += {"next_iter"}
        name += {"direct_iter"}
	name += {"value_from_iter"}
	name += {"use_for_print_and_view"}

	name += {"fields"}
	name += {"next"}
	name += {"prev"}
	name += {"name"}
	name += {"value"}
	name += {"mutable"}
	name += {"replace_self"}

	name += {"functions"}
	#name += {"name"}
	name += {"arguments"}
	name += {"body"}
	name += {"current"}
	name += {"front"}
	name += {"back"}
	name += {"deref"}

	# singleton definitions
	name += {"instance"}

	# graph node definitions
	name += {"predicate"}
	name += {"node_text"}
        name += {"color"}
	name += {"children"}
	name += {"parents"}
	name += {"next_sibling"}
	name += {"max_display_size"}
	name += {"container_of_children"}
	name += {"is_container"}
	name += {"is_array"}
	name += {"array_len"}
	name += {"vertical_layout"}
        name += {"tree_layout"}
	
	name += {"replace_with"}

	# profile
	name += {"profile_name"}
	name += {"parent_profile"}
	name += {"default_root"}
	name += {"data_descriptions"}
	name += {"add_siblings_of_root"}

	#view
	name += {"initial_pane"}
	name += {"tab_name"}
	name += {"panes"}
	name += {"child_pane"}
	
    }

    customized {
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

