# Version of the language definition syntax used in the file
version = "1"

%include "python.gsc"

# language specification for syntax coloring and
# auto-indention in MULTI's editor.
language {
    general {
	# Official name for the language, like
	# 	C/C++/Pascal/Java/Ada/Fortran
	# or
	# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
	name = "GHS-MULTI-Python"
	description = "MULTI Python"
	# File extensions for the language
	extension = {"gpy"}

	# Inherit the definition for the following general elements from
	# "python.gsc":
	#	case_sensitive
	#	pascal_style_priority
	#	escape
	#	separator
    }

    # Inherit the definition for the following elements from
    # "python.gsc":
    #		keyword 
    #		line_comment
    #		comment 
    #		string
    #		character
    #		float 
    #		integer
    #		autocomplete 

    customized {
	# Speial variables
	pattern += {"__ghs_multi_dir"}
	pattern += {"__ghs_python_class_dir"}
	pattern += {"__ghs_user_ver_config_dir"}
	pattern += {"__ghs_user_ver_config_python_dir"}
	pattern += {"__ghs_user_config_dir"}
	pattern += {"__ghs_user_config_python_dir"}
	pattern += {"__ghs_site_config_dir"}
	pattern += {"__ghs_site_config_python_dir"}
	pattern += {"__ghs_site_default_dir"}
	pattern += {"__ghs_site_default_python_dir"}
	pattern += {"__ghs_display_width"}
	pattern += {"__ghs_display_height"}
	pattern += {"__ghs_major_version"}
	pattern += {"__ghs_minor_version"}
	pattern += {"__ghs_micro_version"}

	pattern += {"__ghs_internal_sys_args_stack"}
	pattern += {"__ghs_tmp_argv"}

	pattern += {"__ghs_simulate_delay"}

	# MULTI-Python integration classes (normal case and low-case versions)
	pattern += {"GHS_WindowClassNames"}
	pattern += {"GHS_ObjectMasks"}
	pattern += {"GHS_TargetIds"}
	pattern += {"GHS_OsTypes"}
	pattern += {"GHS_MemorySpaces"}
	pattern += {"GHS_IdeObject"}
	#pattern += {"ghs_ideobject"}
	pattern += {"GHS_Window"}
	#pattern += {"ghs_window"}
	#pattern += {"Ghs_Window"}
	#pattern += {"GHS_WINDOW"}

	pattern += {"GHS_LauncherWindow"}

	pattern += {"GHS_EditorWindow"}
	#pattern += {"ghs_editorwindow"}
	#pattern += {"Ghs_EditorWindow"}
	#pattern += {"GHS_EDITORWINDOW"}

	pattern += {"GHS_EventAnalyzerWindow"}
	#pattern += {"ghs_eventanalyzerwindow"}
	#pattern += {"Ghs_EventAnalyzerWindow"}
	#pattern += {"GHS_EVENTANALYZERWINDOW"}

	pattern += {"GHS_BuilderWindow"}
	pattern += {"GHS_ProjectManagerWindow"}
	#pattern += {"ghs_builderwindow"}
	#pattern += {"Ghs_BuilderWindow"}
	#pattern += {"GHS_BUILDERWINDOW"}

	pattern += {"GHS_TeminalWindow"}

	pattern += {"GHS_DebuggerApi"}
	pattern += {"GHS_DebuggerWindow"}

	pattern += {"GHS_CoBrowseWindow"}

	pattern += {"GHS_DiffViewWindow"}

	pattern += {"GHS_HexEditorWindow"}

	pattern += {"GHS_TraceWindow"}

	pattern += {"GHS_TaskManagerWindow"}

	pattern += {"GHS_OsaWindow"}

	pattern += {"GHS_HelpViewerWindow"}

	pattern += {"GHS_ConnectionOrganizerWindow"}

	pattern += {"GHS_TerminalWindow"}

	pattern += {"GHS_WindowRegister"}
	pattern += {"ghs_windowregister"}
	pattern += {"GHS_Launcher"}
	pattern += {"ghs_launcher"}
	pattern += {"GHS_Editor"}
	pattern += {"ghs_editor"}
	pattern += {"GHS_Task"}
	pattern += {"ghs_task"}
	pattern += {"GHS_DebugServer"}
	pattern += {"ghs_debugserver"}
	pattern += {"GHS_Debugger"}
	pattern += {"ghs_debugger"}
	pattern += {"GHS_Builder"}
	pattern += {"ghs_builder"}
	pattern += {"GHS_ProjectManager"}
	pattern += {"ghs_projectmanager"}
	pattern += {"GHS_PythonGui"}
	pattern += {"ghs_pythongui"}
	pattern += {"GHS_EventAnalyzer"}
	pattern += {"ghs_eventanalyzer"}
	pattern += {"GHS_Terminal"}
	pattern += {"ghs_terminal"}
	pattern += {"GHS_CoBrowse"}
	pattern += {"ghs_cobrowse"}
	pattern += {"GHS_DiffView"}
	pattern += {"ghs_diffview"}
	pattern += {"GHS_HexEditor"}
	pattern += {"ghs_hexeditor"}
	# MULTI-Python integration pre-created objects
	pattern += {"winreg"}
	#pattern += {"mb"}
	#pattern += {"pygui"}
	pattern += {"editor"}
	pattern += {"builder"}
	pattern += {"projmgr"}
	pattern += {"debugger"}
	pattern += {"self_dbw"}
	pattern += {"self_dbs"}
	# Objects for constants.
	pattern += {"winClassNames"}
	pattern += {"objMasks"}
	pattern += {"targetIds"}
	pattern += {"osTypes"}
	pattern += {"msIds"}
	# Special functions
	pattern += {"GHS_ExecFile"}
	pattern += {"ghs_execfile"}
#	pattern += {"GHS_PrintList"}
#	pattern += {"ghs_printlist"}
#	pattern += {"GHS_PrintDict"}
#	pattern += {"ghs_printdict"}
	pattern += {"GHS_PrintObject"}
	pattern += {"ghs_printobject"}
	pattern += {"GHS_RunShellCommands"}
	pattern += {"ghs_runshellcommands"}
	pattern += {"GHS_Shell"}
	pattern += {"ghs_shell"}
	pattern += {"GHS_System"}
	pattern += {"ghs_system"}

	pattern += {"ghs_ExecBsScript"}
	pattern += {"ghs_execbsscript"}
	pattern += {"GHS_RunBsScript"}
	pattern += {"ghs_runbsscript"}
	# More customized stuff.
	# If auto-completion is not explicitly specified, it is true
	# by default
	# autocomplete = false
	# If color is not defined for customized items, default color is used.
	# color = "#0080a0"
    }
}
