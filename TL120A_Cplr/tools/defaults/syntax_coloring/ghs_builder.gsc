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
	name = "GHS-Legacy-Builder"
	description = "GHS Legacy Project"
	# File extensions for the language
	extension = {"bld"}

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
	# ":" is not a separator.
	# "+" is not a separator, because it is used in keyword "C++".
	separator = "\\\"-*/<=>,;\'\t()[]^%!~|& {}.?"
    
	# Escape sequence leader: one character(like the one in C).
	#escape = "\\"

	# Is it possible to wrap line for the language?
	# The default value is true.
	line_wrappable = false
	# Draw wrap line for the language in Editor?
	# The default value is true.
	# draw_wrap_line = false
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.

	# Variable names
	name = {":variable_zero"}
	name += {":ada95_option"}
	name += {":ada_message"}
	name += {":oldc_option"}
	name += {":ec_option"}
	name += {":e_option"}
	name += {":cx_pch_option"}
	name += {":cx_e_option"}
	name += {":cx_l_option"}
	name += {":cx_option"}
	name += {":cx_template_option"}
	name += {":fortran_option"}
	name += {":pascal_option"}
	name += {":misra_c"}
	name += {":chorus_option"}
	name += {":threadx_option"}
	name += {":ose_option"}
	name += {":linux_option"}
	name += {":lynxos_option"}
	name += {":language"}
	name += {":debug_option"}
	name += {":optimize"}
	name += {":minoroptimize"}
	name += {":check"}
	name += {":compcheck"}
	name += {":asm_option"}
	name += {":asm_list_option"}
	name += {":lx_option"}
	name += {":lx_map_option"}
	name += {":elxr_option"}
	name += {":elxr_map_option"}
	name += {":a30_option"}
	name += {":a30_list_option"}
	name += {":l68_option"}
	name += {":l68_map_option"}
	name += {":5ess_option"}
	name += {":error_option"}
	name += {":i86_option"}
	name += {":m68_option"}
	name += {":v800_option"}
	name += {":i960_option"}
	name += {":arm_option"}
	name += {":ctran_option"}
	name += {":fp_option"}
	name += {":fr_option"}
	name += {":jav_option"}
	name += {":mips_option"}
	name += {":ncpu_option"}
	name += {":ndr_option"}
	name += {":ppc_option"}
	name += {":sh_option"}
	name += {":sparc_option"}
	name += {":sc_option"}
	name += {":tri_option"}
	name += {":cg_option"}
	name += {":configuration"}
	name += {":config_setting"}
	name += {":config_default"}
	name += {":integrity_option"}
	name += {":build_option"}
	name += {":dependency"}
	name += {":showset"}
	name += {":buildrevision"}
	name += {":driver_flags"}
	name += {":staticlink"}
	name += {":nolibraries"}
	name += {":passsource"}
	name += {":coverage"}
	name += {":showheaders"}
	name += {":showversions"}
	name += {":putversions"}
	name += {":ghsstdcall"}
	name += {":initpipointers"}
	name += {":keeptempfiles"}
	name += {":nofloatprintf"}
	name += {":cross"}
	name += {":nostrip"}
	name += {":relocatable_program"}
	name += {":relocatable_object"}
	name += {":parameter_check"}
	name += {":full_parameter_check"}
	name += {":no_misra_runtime"}
	name += {":dual_debug"}
	name += {":ignore_line"}
	name += {":use_vp_as_dbg_source_root"}
	name += {":dwarf"}
	name += {":asmsym"}
	name += {":asmsymc"}
	name += {":use_cpp"}
	name += {":use_asm_preproc"}
	name += {":preprocess_assembly"}
	name += {":one_instantiation_per_object"}
	name += {":hybrid_one_instantiation_per_object"}
	name += {":add_output_ext"}
	name += {":no_add_dot"}
	name += {":use_make"}
	name += {":auto_mvc"}
	name += {":target_os"}
	name += {":linux_version"}
	name += {":objectformat"}
	name += {":outputmode"}
	name += {":alignment"}
	name += {":processor"}
	name += {":fputype"}
#	name += {":xfputype"}
#	name += {":yfputype"}
	name += {":i86_cputype"}
	name += {":m68_cputype"}
	name += {":m68_picode"}
	name += {":m68_pidata"}
	name += {":v800_cputype"}
	name += {":xda_thresholdkind"}
	name += {":v800_tda"}
	name += {":i960_cputype"}
	name += {":arm_cputype"}
	name += {":bf_cputype"}
	name += {":ctran_cputype"}
	name += {":fp_cputype"}
	name += {":fr_cputype"}
	name += {":jav_cputype"}
	name += {":mips_cputype"}
	name += {":mips_rh32_fpu"}
	name += {":mips16_level"}
	name += {":ncpu_cputype"}
	name += {":ndr_cputype"}
	name += {":ppc_cputype"}
	name += {":sh_cputype"}
	name += {":sparc_cputype"}
	name += {":sc_cputype"}
	name += {":tri_cputype"}
	name += {":tri_library"}
	name += {":toolchain"}
	name += {":toolasm"}
	name += {":stage"}
	name += {":wchartype"}
	name += {":sourcekanji"}
	name += {":targetkanji"}
	name += {":char_bits"}
	name += {":shortsize"}
	name += {":intsize"}
	name += {":longsize"}
	name += {":longlongsize"}
	name += {":pointersize"}
	name += {":packing"}
	name += {":struct_min_alignment"}
	name += {":ada_library"}
	name += {":ada_listing"}
	name += {":ada_list_format"}
	name += {":c_mode"}
	name += {":ec_mode"}
	name += {":prototype_mode"}
	name += {":asm_mode"}
	name += {":unknown_pragma"}
	name += {":incorrect_pragma"}
	name += {":misra_required_diag_level"}
	name += {":misra_advisory_diag_level"}
	name += {":cxx_conflict"}
	name += {":cx_mode"}
	name += {":cx_lib"}
	name += {":cx_gnu_mode"}
	name += {":fortran_mode"}
	name += {":pascal_mode"}
	name += {":compilation"}
	name += {":progress"}
	name += {":debuglevel"}
	name += {":profilelevel"}
	name += {":showlevel"}
	name += {":memcheck"}
	name += {":optimizestrategy"}
	name += {":cx_template"}
	name += {":cx_inline"}
	name += {":cx_enum"}
	name += {":cx_virtual"}
	name += {":cx_xref_level"}
	name += {":cx_link_style"}
	name += {":link_output_mode"}
	name += {":program_layout"}
	name += {":lx_overlap"}
	name += {":elxr_overlap"}
	name += {":a30_br_size"}
	name += {":win32_threading"}
	name += {":win32_subsystem"}
	name += {":directivedir"}
	name += {":work_dir"}
	name += {":mvc_dir"}
	name += {":temp_dir"}
	name += {":startfile_dir"}
	name += {":projectpath"}
	name += {":outputname"}
	name += {":object_dir"}
	name += {":originalname"}
	name += {":asmsymname"}
	name += {":asmsymcname"}
	name += {":section_prefix"}
	name += {":section_suffix"}
	name += {":builder"}
	name += {":tools_dir"}
	name += {":alternate_tools_dir"}
	name += {":os_dir"}
	name += {":os_demo_dir"}
	name += {":target"}
	name += {":descriptive_name"}
	name += {":comment"}
	name += {":remote"}
	name += {":crossname"}
	name += {":bspname"}
	name += {":integrate_filename"}
	name += {":alternate_libsys"}
	name += {":ada_main_program"}
	name += {":commentstring"}
	name += {":start_address"}
	name += {":ident_string"}
	name += {":error_columns"}
	name += {":error_limit"}
	name += {":stderr_filename"}
	name += {":ada_page_length"}
	name += {":ada_page_width"}
	name += {":ada_info_directory"}
	name += {":ada_xref_directory"}
	name += {":ada_list_directory"}
	name += {":ada_xlist_directory"}
	name += {":cx_suffix"}
	name += {":cx_create_pch"}
	name += {":cx_pch_dir"}
	name += {":cx_elimit"}
	name += {":cx_xref"}
	name += {":cx_list"}
	name += {":cx_list_dir"}
	name += {":instantiation_dir"}
	name += {":assembler_list"}
	name += {":assembler_list_dir"}
	name += {":assembler_cref"}
	name += {":linker_map"}
	name += {":linker_map_dir"}
	name += {":linker_cref"}
	name += {":call_graph_file"}
	name += {":xda_threshold"}
	name += {":sda_threshold"}
	name += {":tda_threshold"}
	name += {":zda_threshold"}
	name += {":m68_cref"}
	name += {":stack_reserve"}
	name += {":stack_commit"}
	name += {":stack_limit"}
	name += {":globalreg"}
	name += {":globalfpreg"}
	name += {":buildvar"}
	name += {":driver_opts"}
	name += {":option_files"}
	name += {":cx_use_pch"}
	name += {":cx_silent"}
	name += {":cx_remark"}
	name += {":cx_warning"}
	name += {":cx_error"}
	name += {":opt_inlines"}
	name += {":opt_loops"}
	name += {":opt_noalias"}
	name += {":opt_exprs"}
	name += {":opt_delete"}
	name += {":opt_small"}
	name += {":opt_fast"}
	name += {":assembler_cmd"}
	name += {":assembler_defineds"}
	name += {":assembler_opts"}
	name += {":linker_cmd"}
	name += {":linker_defineds"}
	name += {":linker_undefineds"}
	name += {":linker_abs_against"}
	name += {":linker_opts"}
	name += {":linker_follow_sections"}
	name += {":late_linker_opts"}
	name += {":prelink_against"}
	name += {":startfiles"}
	name += {":endfiles"}
	name += {":dbgdirs"}
	name += {":adalibdirs"}
	name += {":includefiles"}
	name += {":sourcedirs"}
	name += {":dbg_source_root"}
	name += {":cxxincdirs"}
	name += {":stdcxxincdirs"}
	name += {":defincdirs"}
	name += {":sysincdirs"}
	name += {":runlibdirs"}
	name += {":libdirs"}
	name += {":elaborationdirs"}
	name += {":deflibdirs"}
	name += {":syslibdirs"}
	name += {":libraries"}
	name += {":deflibraries"}
	name += {":syslibraries"}
	name += {":undefines"}
	name += {":defines"}
	name += {":assertions"}
	name += {":xswitches"}
	name += {":depends"}
	name += {":nodepends"}
	name += {":select"}
	name += {":preexec"}
	name += {":postexec"}
	name += {":preexecsafe"}
	name += {":postexecsafe"}
	name += {":ada_compiler"}
	name += {":cxx_compiler"}
	name += {":ec_compiler"}
	name += {":fortran_compiler"}
	name += {":pascal_compiler"}
	name += {":oldc_compiler"}
	name += {":nativeccompiler"}
	name += {":ada_preprocessor"}
	name += {":c_preprocessor"}
	name += {":m4_preprocessor"}
	name += {":assembler"}
	name += {":archiver"}
	name += {":ranlib"}
	name += {":linker"}
	name += {":sharedlinker"}
	name += {":intex"}
	name += {":nm_utility"}
	name += {":ax_archiver"}
	name += {":mtrans"}
	name += {":dblink"}
	name += {":dwarf2dbo"}
	name += {":strip"}
	name += {":coff2sr_utility"}
	name += {":gecoff_utility"}
	name += {":coff2tekhex_utility"}
	name += {":coff2memory_utility"}
	name += {":coff695_utility"}
	name += {":gstack"}
	name += {":cxxfe"}
	name += {":prelink"}
	name += {":cxxmunch"}
	name += {":decode"}
	name += {":adaprelx"}
	name += {":adareg"}
	name += {":adaopts"}
	name += {":custom_processor"}
	name += {":register_definition_file"}
	name += {":variable_max"}
	name += {":rtos_lib_dirs"}
	name += {":rtos_inc_dirs"}

	# Project kind
	name += {"unknown"}
	name += {"nobuild"}
	name += {"options_file"}
	name += {"board_target"}
	name += {"program"}
	name += {"subproject"}
	name += {"select_one"}
	name += {"single_file_lib"}
	name += {"library"}
	name += {"shared_library"}
	name += {"include_file"}
	name += {"script"}
	name += {"C"}
	name += {"Fortran"}
	name += {"Pascal"}
	name += {"C++"}
	name += {"Ada"}
	name += {"object_file"}
	name += {"linker_file"}
	name += {"assembly"}
	name += {"Fortran-90"}
	name += {"assembly"}
	name += {"integrity_app"}
	name += {"integrate_file"}
	name += {"bsp_description"}
	name += {"Custom"}
	name += {"documentation"}
	name += {"connections"}
	name += {"board_setup"}
	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    preprocessor {	
	# If color is not defined for preprocessor, default color is used.
	# color = "#008080"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
	# Is the preprocessor case-sensitive? If no explicit specification
	# for it, the default value is the language's case-sensitive
	# attribute.
    }

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "#"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    comment {
	# Because multiple pairs of comment delimiters can be defined,
	# use a index for each of them.
	#1 { begin = "<comment>"; end = "</comment>" }
	# If color is not defined for comment, default color is used.
	# color = "#008000"
    }

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
	#1 { begin = "\'"; end = "\'" }
	# If color is not defined for character, default color is used.
	# color = "#008000"
    }

# Because we don't want to color any number
%if 0
    integer {
	# Support hex integer?
	#hex = true
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
%endif

    customized {
	#pattern = {"gen_*"}
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

