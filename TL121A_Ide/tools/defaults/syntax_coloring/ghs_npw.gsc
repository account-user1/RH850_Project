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
	name = "GHS-New-Project"
	description = "GHS New Project Wizard"
	# File extensions for the language
	extension = {"npw"}

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
	# NPW specific keywords:
	# From build_new_project_database.cc
	name += {"os"}
	name += {"language"}
	name += {"supported_language"}
	name += {"projects_npw_file"}
	name += {"npw_file"}
	name += {"options_npw_file"}
	name += {"generic"}
	name += {"exports"}
	name += {"npw_file"}
	name += {"actions"}
	name += {"options"}
	name += {"endian"}
	name += {"little_endian"}
	name += {"big_endian"}
	name += {"no_resource_bld"}
	name += {"no_default_con"}
	name += {"resource_readme_file"}
	name += {"startupcode_readme_file"}
	name += {"board_readme_file"}
	name += {"main_bld_file_type"}
	name += {"integrity_type"}
	name += {"integrity_as_bld_file_name"}
	name += {"integrity_c_file_name"}
	name += {"source_dir"}
	name += {"src_dir"}
	name += {"dst_dir"}
	name += {"after_gui_actions"}
	name += {"main_bld_file_renames"}
	name += {"main_bld_file_sub_renames"}
	name += {"integrity_app"}
	#name += {"integrity"}
	name += {"integrity_app_mono"}
	name += {"_kernel"}
	name += {"integrity_kernel_bld_file_name"}
	name += {"integrity_kernel_c_file_name"}
	name += {"integrity_global_table_file_name"}
	name += {"bldmod"}
	name += {"bldsubmod"}
	name += {"bldact"}
	name += {"bldsubact"}
	name += {"bldset"}
	name += {"bldsubset"}
	name += {"bldren"}
	name += {"bldsubren"}
	name += {"bldrem"}
	name += {"bldsubrem"}
	name += {"echo"}
	name += {"customize"}
	name += {"libstartup"}
	name += {"libsys"}
	name += {"lib_build_options"}
	name += {"num_as"}
	name += {"intfile"}
	name += {"kernelbldmod"}
	name += {"integrity_app_dd"}
	name += {"integrity_kernel"}
	name += {"program"}
	# From build_new_project_wizard.cc
	name += {"display_name"}
	name += {"display_sort_key"}
	name += {"sub_tree"}
	name += {"default_proj_name"}
	name += {"name"}
	name += {"value"}
	name += {"unchecked_value"}
	name += {"default"}
	name += {"tooltip"}
	name += {"disabled"}
	name += {"required"}
	name += {"is_dir"}
	name += {"is_linux_dir"}
        name += {"is_threadx_dir"}
	name += {"plc_name"}
	name += {"dlg_name"}
	name += {"dlg_info"}
	name += {"title"}
	name += {"warning_messages"}
	name += {"info_messages"}
	name += {"stored_value"}
	# Where are they used?
	# generic/options.npw
	name += {"optimization_mode"}
	name += {"rtec_mode"}
	name += {"full"}
	name += {"memrtec_mode"}
	name += {"alloc"}
	name += {"memory"}
	name += {"profiling_mode"}
	name += {"calls"}

	name += {"project_files"}
	name += {"is_empty_project"}
	name += {"files"}
        name += {"opt_files"}
	name += {"is_framework_project"}
	name += {"no_simulator_functionality"}

	# Component & Template Definition keywords
	name += {"component"}
	name += {"component_template"}
	name += {"default_filters"}
	name += {"parent_context_types"}
	name += {"parent_context_filetypes"}
	name += {"context_types"}
	name += {"tags"}
	name += {"provides"}
	name += {"requires"}
	name += {"requires_choices"}
	name += {"mutually_exclusive"}
	name += {"filters"}
	name += {"documentation_files"}
	name += {"doc_anchor_ids"}
	name += {"the_default_component_type"}
	name += {"default_for_filetypes"}
	name += {"hidden"}
	name += {"use_template"}
	name += {"display_type_name"}
	name += {"display_object_name"}
	name += {"display_group"}
	name += {"description"}
	name += {"description_html"}
	name += {"top_file_type"}
	name += {"default_base_name"}
	name += {"is_nameable"}		# used?
	name += {"root_file"}		# used?
	name += {"is_parent"}		# used?
	name += {"visible"}
	name += {"default_select"}
	name += {"bg_color"}		# used?
	name += {"fg_color"}		# used?
	name += {"shade_light_color"}	# used?
	name += {"shade_dark_color"}	# used?
	name += {"icon_name"}
	name += {"start_contracted"}
	name += {"sort_key"}
	name += {"display_group_sort_key"}
	name += {"disabled"}
	name += {"show_gui_item"}

	name += {"actions"}
	name += {"intermediate"}
	name += {"standard"}
	name += {"add"}
	name += {"edit"}
	name += {"delete"}
	name += {"readin"}
	name += {"copy_link"}
	name += {"paste_link"}
	name += {"copy_local"}
	name += {"paste_local"}
	name += {"paste_parent_local"}
	name += {"resolve_requires"}
	name += {"back"}
	name += {"comment"}		# used?
	name += {"uncomment"}		# used?
	name += {"remove"}
	name += {"reload"}

	name += {"attributes"}
	name += {"display_name"}
	name += {"default"}
	name += {"type"}
	name += {"choices"}
	name += {"refreshNode"}
	name += {"build_file_setting"}
	name += {"build_file_setting_suffix"}
	name += {"tags_list"}
	name += {"attribute_name_list"}
	name += {"attribute_type_list"}
	name += {"defaults"}
	name += {"dimmed"}
	name += {"sanity_check_action"}
	name += {"dlg_info"}
	name += {"menu_str"}
	name += {"cmd_str"}
	name += {"dlg_filelist"}
	name += {"dlg_namelist"}
	name += {"dlg_cmdlist"}
	name += {"dlg_title"}
	name += {"variable_defs"}
	name += {"auto_import"}
	name += {"allow_dim_next"}
	name += {"unique_names"}
	name += {"basename"}
	name += {"base_suffix"}
	name += {"copy_define_to_instance"}
	name += {"right_click_list"}
	name += {"fill_with_instances"}
	name += {"same_object_dialogs"}
	name += {"separator"}
	name += {"pre_populate_action"}
	name += {"host_filename"}
	name += {"condition"}
	name += {"requirement"}
	name += {"conditional_requires"}
	name += {"default_module_filename"}
    }

    customized {
	# For OSes
	pattern += {"integrity"}
%if 0
	pattern += {"integrityappdd"}
	pattern += {"integrityappmono"}
	pattern += {"integritykernel"}
	pattern += {"shared_objs"}
	pattern += {"custom_int_file"}
	pattern += {"layout_mode"}
	pattern += {"kernel_libs"}
%endif

	pattern += {"vxworks"}
	pattern += {"vxsim"}

	pattern += {"threadx"}
%if 0
	pattern += {"tx_lib_mode"}
	pattern += {"tx_options"}
	pattern += {"txlib_location"}
	pattern += {"tx_num_vas"}
	pattern += {"tx_names_vas"}
	pattern += {"use_event_analyzer"}
%endif

	pattern += {"solaris2"}

	pattern += {"linux"}

	pattern += {"standalone"}

	pattern += {"func_no_prototype"}

	# For languages
	pattern += {"c"}
	pattern += {"LANG_C"}
	pattern += {"lang_c"}
	pattern += {"c_mode"}
	pattern += {"c_opts"}

	pattern += {"cxx"}
	pattern += {"LANG_CXX"}
	pattern += {"lang_cxx"}
	pattern += {"cxx_mode"}
	pattern += {"cxx_template_mode"}
	pattern += {"cxx_opts"}

	pattern += {"ada"}
	pattern += {"LANG_ADA"}
	pattern += {"lang_ada"}
	pattern += {"ada_mode"}
	pattern += {"ada_opts"}
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

