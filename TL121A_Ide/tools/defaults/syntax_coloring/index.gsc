#
# This file is used by the MULTI Editor to provide language sensitive
# customizations. Each entry in this file provides information about
# a different language. This information includes how to identify
# the language by file extension and/or the first line of the file, and
# which customization file to use.
#
# The order of these entries determines the order in which each
# language will appear in the MULTI Editor menu "View->Language"
# or one of its submenus. You may prevent a language from appearing
# in the menus by setting the "hide" attribute to "true". See below.
#
# The tag of each entry is the corresponding language's official
# name, like
# 	C/C++/Java/Ada/Perl
# or
# 	GHS-Script/GHS-Linker/GHS-LanguageDefinition etc.
# If a language name contains any non-alphanumeric characters, you 
# must enclose the name in quotation marks (e.g., "C++").
#
# Each entry has the following attributes:
#
# 1. File extensions for the language
#
#        The extensions will be used by MULTI Editor to identify the
#    language for a file.
#
# 2. Description for the language
#
#        The decription will be shown in the MULTI editor's
#    "View->Language" menu.
#        In the description string, "&" indicates that the following
#    character is the hot key for the entry(in the corresponding menu).
#        As a special case, you can use description value "\x01" to
#    create a menu separator.
#
#    Note: different separators should have different names.
#
# 3. Language syntax definition file
#
#       The file defines the corresponding language's detail syntax
#    information.
# 	MULTI will search for the file under your local configuration
#    or site configuration directory's "syntax_coloring" sub-directory
#    if the file name specified in the field is not an absolute name.
#
# 4. Hidden or shown
#
#       The attribute indicate whether to hide the corresponding entry
#    in MULTI Editor's "View->Language" menu.
#	If an entry is hidden, it is not shown in the menu, but it is
#    still used by MULTI Editor to color the files written in the
#    corresponding language, and a special entry is added to the menu
#    for all hidden entries.
#       The default value for the attribute is false.
#
# 5. Sub-menu name
#
#	You can group some languages into a group and put them into
#    a sub-menu of MULTI Editor's "View->Langauge" menu.
#
# 6. Patterns
#
#       You can specify the regular expressions for the characteristics
#    of a language file's first non-blank line. MULTI Editor will use 
#    them to smartly identify a file's language when the Editor can not
#    figure it out from the file's extension.
#
#    Note: please be sure to double escape leader("\") in the
#    regular expressions, because MULTI's syntax coloring configuration
#    language(in which THIS file is written) supports escape sequence.
#

#####################################################################
#
# The following are the high-level programming languages supported
# by GHS.
#
#####################################################################

# The first menu separator separates the rest languages from the built-in
# language "None".
# If you don't like the separator, delete it.

"GHS-Sep0" {
    description = "\x01"
}

# C++
"C++" {
    extension = {"cc", "cpp", "c++", "C", "cxx", "cp", "idl", "hh"}
    extension += {"h", "H", "h++", "hxx", "hpp"}
    extension += {"pst"} # For Bison yacc's post action
    description = "C&++"
    definition_file = "cpp.gsc"
    first_line_pattern += {"-\\*-[\\s]*[Cc]\\+\\+[\\s]*-\\*-"} # RegExpr: -\*-[\s]*[cC]\+\+[\s]*-\*-
    first_line_pattern += {"-\\*-[\\s]*[cC][pP]{2}[\\s]*-\\*-"} # RegExpr: -\*-[\s]*[cC][pP]{2}[\s]*-\*-
    first_line_pattern += {"-\\*-[\\s]*[iI][dD][lL][\\s]*-\\*-"} # RegExpr: -\*-[\s]*[iI][dD][lL][\s]*-\*-
    first_line_pattern += {"^[\\s]*//"} # RegExpr: ^[\s]*//
    first_line_pattern += {"^[\\s]*/\\*"} # RegExpr: ^[\s]*/\*
}

# C
C {
    extension = {"c", "h"}
    description = "&C"
    definition_file = "c.gsc"
    first_line_pattern += {"-\\*-[\\s]*[cC][\\s]*-\\*-"} # RegExpr: -\*-[\s]*[cC][\s]*-\*-
    first_line_pattern += {"-\\*-[\\s]*[oO][bB][jJ][cC][\\s]*-\\*-"} # RegExpr: -\*-[\s]*[oO][bB][jJ][cC][\s]*-\*-
    first_line_pattern += {"^[\\s]*/\\*"} # RegExpr: ^[\s]*/\*
}

# Ada
Ada {
    extension = {"ad", "ada", "spc", "bdy", "dat", "dep", "sub", "adb", "ads"}
    extension += {"adt", "AD", "ADA", "SPC", "BDY", "DAT", "DEP", "SUB", "ADB"}
    extension += {"ADS", "ADT"}
    description = "A&da"
    definition_file = "ada.gsc"
    first_line_pattern += {"-\\*-[\\s]*[aA][dD][aA][\\s]*-\\*-"} # RegExpr: -\*-[\s]*[aA][dD][aA][\s]*-\*-
}

# Java
Java {
    extension = {"java", "jav", "j"}
    description = "&Java"
    definition_file = "java.gsc"
    first_line_pattern += {"-\\*-[\\s]*[jJ][aA][vV][aA][\\s]*-\\*-"} # RegExpr: -\*-[\s]*[jJ][aA][vV][aA][\s]*-\*-
}

#####################################################################
#
# The following are some often used shell/script languages.
# You can group them into a sub-menu.
#
#####################################################################

# GHS Menu Separator
"GHS-Sep1" {
    description = "\x01"
}

# bsh
bsh {
    extension = {"sh", "profile", "login", "bash", "bshrc", "bashrc", "xinitrc", "list"}
    description = "&bsh"
    definition_file = "bsh.gsc"
    first_line_pattern += {"^[\\s]*:"} # RegExpr: ^[\s]*:
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*bin[/\\\\](b|ba|k)?sh"} # RegExpr: ^[\s]*#![\w /\\]*bin[/\\](b|ba|k)?sh
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[\\w]+[\\s]+(b|ba|k)?sh"} # RegExpr: ^[\s]*#![\w /\\]*[\w]+[\s]+(b|ba|k)?sh
}

# csh
csh {
    extension = {"sh", "cshrc"}
    description = "c&sh"
    definition_file = "csh.gsc"
    first_line_pattern += {"^[\\s]*:"} # RegExpr: ^[\s]*:
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*bin[/\\\\][t]?csh"} # RegExpr: ^[\s]*#![\w /\\]*bin[/\\]csh
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[\\w]+[\\s]+[t]?csh"} # RegExpr: ^[\s]*#![\w /\\]*[\w]+[\s]+csh
}

# Perl
Perl {
    extension = {"p", "pl", "ph", "pm"}
    description = "Per&l"
    definition_file = "perl.gsc"
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[/\\\\]perl"} # RegExpr: ^[\s]*#![\w /\\]*[/\\]perl
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[\\w]+[\\s]+perl"} # RegExpr: ^[\s]*#![\w /\\]*[\w]+[\s]+perl
}

# Python
Python {
    extension = {"py"}
    description = "Pytho&n"
    definition_file = "python.gsc"
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[/\\\\]python"} # RegExpr: ^[\s]*#![\w /\\]*[/\\]python
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[\\w]+[\\s]+python"} # RegExpr: ^[\s]*#![\w /\\]*[\w]+[\s]+python
}

# Python
GHS_Python {
    extension = {"gpy"}
    description = "M&ULTI Python"
    definition_file = "ghs_python.gsc"
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[/\\\\]python"} # RegExpr: ^[\s]*#![\w /\\]*[/\\]python
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[\\w]+[\\s]+python"} # RegExpr: ^[\s]*#![\w /\\]*[\w]+[\s]+python
}

# Tcl
Tcl {
    extension = {"tcl"}
    description = "&Tcl"
    definition_file = "tcl.gsc"
    first_line_pattern += {"^[\\s]*#![\\w /\\\\]*[/\\\\]tclsh"} # RegExpr: ^[\s]*#![\w /\\]*[/\\]tclsh
}

# YACC
YACC {
    extension = {"y"}
    description = "&YACC"
    definition_file = "yacc.gsc"
}

# makefile
makefile {
    extension = {"mak", "mrc"}
    description = "ma&kefile"
    definition_file = "makefile.gsc"
    first_line_pattern += {"^[\\s]*#[\\s]*[mM][aA][kK][eE][fF][iI][lL][eE]"} # RegExpr: ^[\s]*#[\s]*[mM][aA][kK][eE][fF][iI][lL][eE]
}

# PostScript
PostScript {
    extension = {"ps"}
    description = "P&ostScript"
    definition_file = "postscript.gsc"
    first_line_pattern += {"^[\\s]*%!"} # RegExpr: ^[\s]*%!
}

#####################################################################
#
# The following are some often used markup languages.
# You can group them into a sub-menu.
#
#####################################################################

# GHS Menu Separator
"GHS-Sep2" {
    description = "\x01"
}

# XML
XML {
    extension = {"xml"}
    description = "&XML"
    definition_file = "xml.gsc"
    first_line_pattern += {"^[\\s]*<\\?xml version=.*>"} # RegExpr: ^[\s]*<\?xml version=.*>
}

# HTML
HTML {
    extension = {"html", "htm"}
    description = "&HTML"
    definition_file = "html.gsc"
    first_line_pattern += {"^[\\s]*<html>"} # RegExpr: ^[\s]*<html>
}

#####################################################################
#
# The following are GHS internal languages, which are grouped into a
# sub-menu.
#
#####################################################################

# GHS Menu Separator
"GHS-Sep3" {
    description = "\x01"
}

# GHS Tools Component Manager File
"GHS-Component-Manager" {
    extension = {"gcm"}
    description = "GHS Component Manager"
    definition_file = "ghs_component_mgr.gsc"
    hide = true
    submenu = "&GHS Languages"
    first_line_pattern += {"^# This file lists the manager of each component in the MULTI IDE.$"}
}

# GHS INTEGRITY Component Manager File
"GHS-INTEGRITY-Component-Manager" {
    extension = {"icm"}
    description = "GHS INTEGRITY Component Manager"
    definition_file = "ghs_int_cmp_mgr.gsc"
    hide = true
    submenu = "&GHS Languages"
    first_line_pattern += {"^# Component			:Owner:		Notes/info$"}
}

# GHS Builder File
"GHS-Legacy-Builder" {
    extension = {"bld"}
    description = "GHS Legacy Project"
    definition_file = "ghs_builder.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Builder File
"GHS-Project" {
    extension = {"gpj","auto"}
    description = "GHS Project"
    definition_file = "ghs_project.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Builder Rules
"GHS-Builder-Rule" {
    extension = {"bod","tgt"}
    description = "GHS Builder Rules"
    definition_file = "ghs_builder_rule.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Connection Configuration File
"GHS-Connection" {
    extension = {"con"}
    description = "GHS Connection Configuration"
    definition_file = "ghs_connection.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Connection Organizer Script File
"GHS-Connection-Organizer-GUI-Script" {
    extension = {"pscript"}
    description = "GHS Connection Organizer Script"
    definition_file = "ghs_co.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Data-Visualization
"GHS-Data-Visualization" {
    extension = {"mdv"}
    description = "GHS Data Visualization"
    definition_file = "ghs_mdv.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Editor Source Directory Definition Language
"GHS-Editor-Source-Directory-Definition" {
    extension = {"gsd"}
    description = "GHS Editor Source Directory"
    definition_file = "ghs_editor_source.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Validation File for Grandcom 
"GHS-GRANDCOM-FILE" {
    extension = {"gc"}
    description = "GHS Grandcom Script"
    definition_file = "ghs_grandcom.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Kernel Information Database
"GHS-INTEGRITY-Object-Names" {
    extension = {"odb"}
    description = "GHS INTEGRITY Object Name Configuration"
    definition_file = "ghs_int_obj_name.gsc"
    hide = true
    submenu = "&GHS Languages"
    first_line_pattern += {"^#[\\s]*INTEGRITY Object Name Configuration[\\s]*"} # RegExpr: ^[\s]*INTEGRITY Object Name Configuration[\s]*
}

# GHS Kernel Information Database
"GHS-Kernel-Information-Database" {
    extension = {"gki"}
    description = "GHS Kernel Information"
    definition_file = "ghs_gki.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Linker Option File
"GHS-Linker" {
    extension = {"ld", "lnk"}
    description = "GHS Linker"
    definition_file = "ghs_linker.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Memory Description File
"GHS-Memory-Description" {
    extension = {"gmd"}
    description = "GHS Memory Description"
    definition_file = "ghs_memory_description.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS MScriptDbg Output Pane
"GHS-MScriptDbg-OutputPane" {
    extension = {"msdpane"}
    description = "GHS MScriptDbg Output Pane"
    definition_file = "ghs_mscriptdbg_outputpane.gsc"
    hide = true
}

# GHS MULTI Configuration File
"GHS-MULTI-Configuration" {
    extension = {"cfg"}
    description = "GHS MULTI Configuration"
    definition_file = "ghs_multi_config.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS MULTI Command Pane
"GHS-MULTI-CommandPane" {
    extension = {"cmdpane"}
    description = "GHS MULTI Command Pane"
    definition_file = "ghs_multi_commandpane.gsc"
    hide = true
}

# GHS MULTI Python Pane
"GHS-MULTI-PythonPane" {
    extension = {"ghspp"}
    description = "GHS MULTI Python Pane"
    definition_file = "ghs_multi_pythonpane.gsc"
    hide = true
}

# GHS MULTI Traffic Pane
"GHS-MULTI-TrafficPane" {
    extension = {"ghstfc"}
    description = "GHS MULTI Traffic Pane"
    definition_file = "ghs_multi_trafficpane.gsc"
    hide = true
}

# GHS Event-analyzer
"GHS-Event-Analyzer" {
    extension = {"mc"}
    description = "GHS MULTI EventAnalyzer"
    definition_file = "ghs_event_analyzer.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS MULTI Bar Configuration
"GHS-MULTI-Bar" {
    extension = {"gmb"}
    description = "GHS MULTI Bar"
    definition_file = "ghs_multi_bar.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS MULTI Bar Configuration
"GHS-MULTI-Bar-Progress" {
    extension = {"mbp"}
    description = "GHS MULTI Bar Progress"
    definition_file = "ghs_multi_bar_progress.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS MULTI Internal Lists
"GHS-MULTI-Internal-List" {
    extension = {"ini"}
    description = "GHS MULTI Internal List"
    definition_file = "ghs_multi_list.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Script for MULTI commands
"GHS-Script" {
    extension = {"multirc", "ghs", "rc", "irc", "bps", "mbs", "prc"}
    description = "GHS MULTI Script"
    definition_file = "ghs_multi_script.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS New Project Wizard File
"GHS-New-Project" {
    extension = {"npw"}
    description = "GHS New Project Wizard"
    definition_file = "ghs_npw.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Option-Database
"GHS-Option-Database" {
    # For specialized option database files, like for syntax coloring,
    # new project wizard etc., their extensions are listed in their
    # corresponding configuration files, here we just list the extensions
    # for the general option database files.
    extension = {"dd", "opt", "odb", "udb", "desc"}
    description = "GHS Option Database"
    definition_file = "ghs_option_database.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Object-Awareness
"GHS-OS-Awareness" {
    extension = {"osa", "kac"}
    description = "GHS OS Awareness"
    definition_file = "ghs_osa.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Placer File
"GHS-Placer" {
    extension = {"plc"}
    description = "GHS Placer"
    definition_file = "ghs_placer.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Placer File
"GHS-C++-Placer" {
    extension = {"cxplc"}
    description = "GHS C++ Placer"
    definition_file = "ghs_cpp_placer.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Product File
"GHS-Product-File" {
    extension = {"all"}
    description = "GHS Product File"
    definition_file = "ghs_product_file.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Register Change Mask File
"GHS-Register-Change-Mask" {
    extension = {"rcm"}
    description = "GHS Register Change Mask"
    definition_file = "ghs_regchg_mask.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Register Definition File
"GHS-Register-Definition" {
    extension = {"rdf", "m4"}
    description = "GHS Register Definition"
    definition_file = "ghs_rdf.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Register Help
"GHS-Register-Help" {
    extension = {"ghsRegHelp"}
    description = "GHS Register Help"
    definition_file = "ghs_register_help.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Register Information Database
"GHS-Register-Information-Database" {
    extension = {"grd", "typ"}
    description = "GHS Register Information Database"
    definition_file = "ghs_grd.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Register Structure Definition File
"GHS-Register-Structure-Definition" {
    extension = {"sdf"}
    description = "GHS Register Structure Definition"
    definition_file = "ghs_sdf.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Register Value File
"GHS-Register-Value" {
    extension = {"grv"}
    description = "GHS Register Value"
    definition_file = "ghs_register_value.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Service Configuration File
"GHS-Service-Configuration" {
    extension = {"gsv"}
    description = "GHS Service Configuration"
    definition_file = "ghs_service_config.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Syntax Coloring and Auto-completion Definition Language
"GHS-LanguageDefinition" {
    extension = {"gsc"}
    description = "GHS Syntax Coloring"
    definition_file = "ghs_syntax_coloring.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Task Manager
"GHS-Task-Manager" {
    extension = {"tvc"}
    description = "GHS Task Manager"
    definition_file = "ghs_task_manager.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Color Rule File for "gcolor"
"GHS-Color-Rule" {
    extension = {"rul"}
    description = "GHS Text Filter Color Rule"
    definition_file = "ghs_color_rule.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Tip Definition file
"GHS-Tip-Definition" {
    extension = {"tdf"}
    description = "GHS Tip Definition"
    definition_file = "ghs_tips.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

"GHS-Transport-Protocol-Script" {
    extension = {"stp"}
    description = "GHS Transport Protocol Script"
    definition_file = "ghs_stp.gsc"
#    hide = true
    submenu = "&GHS Languages"
}
# GHS Transport Protocol Script
"GHS-Old-Transport-Protocol-Script" {
    extension = {"stpspec"}
    description = "GHS Transport Protocol Script"
    definition_file = "ghs_tp.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Trace Configuration File: trace data->Function profile
"GHS-Trace-Function-Profile" {
    extension = {"tfc"}
    description = "GHS Configuration from Trace Data into Function Profile"
    definition_file = "ghs_trace_function_prof.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS Trace Configuration File: trace data->OS events
"GHS-Trace-OS-Event" {
    extension = {"tsc"}
    description = "GHS Configuration from Trace Data into OS Events"
    definition_file = "ghs_trace_os_event.gsc"
    hide = true
    submenu = "&GHS Languages"
}



# GHS Validation Output
"GHS-Validation-Output" {
    extension = {"outs", "out", "vals", "errs"}
    description = "GHS Validation Output"
    definition_file = "ghs_validation_output.gsc"
    hide = true
    submenu = "&GHS Languages"
    first_line_pattern += {"^\\+---------------------------$"} # RegExpr: ^+---------------------------$ 
}

# GHS Log file between Debugger and Debug Server
"GHS-DEBUG-DEBUG-SERVER-LOG" {
    extension = {"mlg"}
    description = "GHS DEBUGGER and DEBUG SERVER LOG"
    definition_file = "ghs_multi_dbserv_log.gsc"
    hide = true
    submenu = "&GHS Languages"
    first_line_pattern += {"^[\\.\\:0-9]*[ ]*SEND: .*$"} # RegExpr: ^[\.\:0-9]*[ ]*SEND: .*$ 
    first_line_pattern += {"^[\\.\\:0-9]*[ ]*RECV: .*$"} # RegExpr: ^[\.\:0-9]*[ ]*RECV: .*$ 
}

# GHS Window Manager Configuration File
"GHS-Window-Manager" {
    extension = {"wmc"}
    description = "GHS Window Manager"
    definition_file = "ghs_window_manager.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS license file
"GHS-License-File" {
    extension = {"lck", "glk", "ghslic"}
    description = "GHS License File"
    definition_file = "ghs_license.gsc"
    hide = true
    submenu = "&GHS Languages"
}

# GHS license access configuration file
"GHS-License-Access-Configuration-File" {
    extension = {"ghslac"}
    description = "GHS License Access Configuration File"
    definition_file = "ghs_license_access_config.gsc"
    hide = true
    submenu = "&GHS Languages"
}


# GHS Menu Separator
"GHS-Sep4" {
    description = "\x01"
    submenu = "&GHS Languages"
}

# GHS OCD Script
"GHS-OCD-Script" {
    extension = {"ocd", "dbs"}
    description = "GHS OCD Script"
    definition_file = "ghs_ocd.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

# GHS Menu Separator
"GHS-Sep5" {
    description = "\x01"
    submenu = "&GHS Languages"
}

%if 0
# GHS INTEGRITY BSP Configuration File
"GHS-INT-BSP" {
    extension = {"bsp"}
    description = "GHS INTEGRITY BSP"
    definition_file = "ghs_int_bsp.gsc"
#    hide = true
    submenu = "&GHS Languages"
}
%endif

# GHS INTEGRITY BSP Configuration File
"GHS-INT-CONFIGURATION" {
    extension = {"int", "bsp"}
    description = "GHS INTEGRITY Configuration"
    definition_file = "ghs_int_config.gsc"
#    hide = true
    submenu = "&GHS Languages"
}

"GHS-INT-VALIDATION" {
    extension = {"tst"}
    description = "GHS INTEGRITY Validation description"
    definition_file = "ghs_intval.gsc"
    hide = true
    submenu = "&GHS Languages"
}

"GHS-DML" {
    extension = {"dml"}
    description = "Dan\'s Markup Language"
    definition_file = "ghs_dml.gsc"
    hide = true
    submenu = "&GHS Languages"
}

"GHS-Debug-Server-Options" {
    extension = {"gdo"}
    description = "GHS Debug Server Options"
    definition_file = "ghs_gdo.gsc"
    hide = true
    submenu = "&GHS Languages"
}

"GHS-Demo-Instruction" {
    extension = {"gdi"}
    description = "GHS Demo Instruction"
    definition_file = "ghs_gdi.gsc"
    hide = true
    submenu = "&GHS Languages"
}

"GHS-EventAnalyzer-CodeMapping" {
    extension = {"gec"}
    description = "GHS EventAnalyzer Code Mapping"
    definition_file = "ghs_gec.gsc"
    hide = true
    submenu = "&GHS Languages"
}

"GHS-MPX-Config" {
    extension = {"mpx"}
    description = "Multi-core Simulator Configuration"
    definition_file = "ghs_mpx.gsc"
    hide = true
    submenu = "&GHS Languages"
}

"GHS-BugView-Config" {
    extension = {"gbv"}
    description = "GHS Bug View Configuration"
    definition_file = "ghs_gbv.gsc"
    hide = true
    submenu = "&GHS Languages"
}

"GHS-Desc-File" {
    extension = {"desc"}
    description = "GHS Arcchitecture Description"
    definition_file = "ghs_option_database.gsc"
    hide = true
}

# GHS DoubleCheck Configuration
"GHS-DoubleCheckConfiguration" {
    extension = {"dcc"}
    description = "GHS DoubleCheck Configuration"
    definition_file = "ghs_dcc.gsc"
    hide = true
    submenu = "&GHS Languages"
}

#####################################################################
#
# The following are assembly languages, which are grouped into a
# sub-menu.
#
# The entries are sorted according to their description.
#
#####################################################################

# GHS Menu Separator
"GHS-Sep6" {
    description = "\x01"
}

# MetaWare ARC Assembly Language
"METAWARE-ARC" {
    extension = {"s", "asm", "arc"}
    description = "ARC Assemb&ly Language"
    definition_file = "metaware_arc.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*arc "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*arc
}

# GHS ARM Assembly Language
"GHS-ARM" {
    extension = {"s", "asm", "arm", "thm"}
    description = "&ARM Assembly Language"
    definition_file = "ghs_arm.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*arm "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*arm 
}

# Blackfin Assembly Language
"ADI-BF" {
    extension = {"s", "asm", "bf"}
    description = "&Blackfin Assembly Language"
    definition_file = "adi_bf.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*bf "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*bf 
}

# GHS FireFly Assembly Language
"GHS-FIREFLY" {
    extension = {"s", "asm", "fly"}
    description = "FireFl&y Assembly Language"
    definition_file = "ghs_firefly.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*fly "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*fly 
}

# GHS FirePath Assembly Language
"GHS-FIREPATH" {
    extension = {"s", "asm", "fp"}
    description = "Fir&ePath Assembly Language"
    definition_file = "ghs_firepath.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*fp "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*fp 
}

# GHS FR20 Assembly Language
"GHS-FR" {
    extension = {"s", "asm", "fr"}
    description = "&FR Assembly Language"
    definition_file = "ghs_fr.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*fr "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*fr 
}

# GHS Hitachi SH Assembly Language
"GHS-SH" {
    extension = {"s", "asm", "sh"}
    description = "Hi&tachi SH Assembly Language"
    definition_file = "ghs_sh.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;"} # RegExpr: ^[\s]*;
    first_line_pattern += {"^[\\s]*//"} # RegExpr: ^[\s]*//
    first_line_pattern += {"^[\\s]*/\\*"} # RegExpr: ^[\s]*/\*
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*sh "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*sh 
}

# GHS Intel x86 Assembly Language
"GHS-X86" {
    extension = {"s", "asm", "86"}
    description = "Intel &x86 Assembly Language"
    definition_file = "ghs_x86.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*86 "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*86 
}

%if 0
# GHS Javelin Assembly Language
"GHS-JAVELIN" {
    extension = {"s", "asm", "jav"}
    description = "&Javelin Assembly Language"
    definition_file = "ghs_javelin.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*#"} # RegExpr: ^[\s]*#
    first_line_pattern += {"^[\\s]*;"} # RegExpr: ^[\s]*;
}
%endif

# GHS MCORE Assembly Language
"GHS-MCORE" {
    extension = {"s", "asm", "mco"}
    description = "&MCORE Assembly Language"
    definition_file = "ghs_mcore.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*mcore "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*mcore 
}

# GHS MIPS Assembly Language
"GHS-MIPS" {
    extension = {"s", "asm", "mip"}
    description = "MIP&S Assembly Language"
    definition_file = "ghs_mips.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*mips "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*mips 
    first_line_pattern += {"^[\\s]*#Driver Command:[\\s]*[\\w]*mips "} # RegExpr: ^[\s]*#Driver Command:[\s]*[\w]*mips 
}

# GHS Motorola 68k Assembly Language
"GHS-M68K" {
    extension = {"s", "asm", "68","cf"}
    description = "Motorola &68k Assembly Language"
    definition_file = "ghs_m68.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*68 "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*68 
}

# GHS NCPU Assembly Language
"GHS-NCPU" {
    extension = {"s", "asm", "ncp"}
    description = "&NCPU Assembly Language"
    definition_file = "ghs_ncpu.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*ncp "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*ncp 
}

# GHS NEC 8xx Assembly Language
"GHS-NECV8" {
    extension = {"s", "asm", "800", "810", "830", "850"}
    description = "NEC &V8xx Assembly Language"
    definition_file = "ghs_v8xx.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*v810 "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*v810 
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*v830 "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*v830 
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*v840 "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*v840 
}

# GHS NipponDenso NDR Assembly Language
"GHS-NDR" {
    extension = {"s", "asm", "ndr"}
    description = "N&ipponDenso NDR Assembly Language"
    definition_file = "ghs_ndr.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*ndr "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*ndr 
}

# GHS PPC Assembly Language
"GHS-PPC" {
    extension = {"s", "asm", "ppc"}
    description = "&PPC Assembly Language"
    definition_file = "ghs_ppc.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*ppc "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*ppc 
}

# GHS StarCore Assembly Language
"GHS-STARCORE" {
    extension = {"s", "asm", "sc"}
    description = "Star&Core Assembly Language"
    definition_file = "ghs_starcore.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*sc "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*sc 
}

# GHS SPARC Assembly Language
"GHS-SPARC" {
    extension = {"s", "asm", "spa"}
    description = "Sun SPA&RC Assembly Language"
    definition_file = "ghs_sparc.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*spc "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*spc 
}

# GHS TriCore Assembly Language
"GHS-TRICORE" {
    extension = {"s", "asm", "tri"}
    description = "TriC&ore Assembly Language"
    definition_file = "ghs_tricore.gsc"
#    hide = true
    submenu = "&Assembly Languages"
    first_line_pattern += {"^[\\s]*;Driver Command:[\\s]*[\\w]*tri "} # RegExpr: ^[\s]*;Driver Command:[\s]*[\w]*tri 
}

#####################################################################
#
# The following are Matlab script languages, which are grouped into a
# sub-menu.
#
# The entries are sorted according to their description.
#
#####################################################################

# GHS Menu Separator
"GHS-Sep7" {
    description = "\x01"
}

# MATLAB
"MATLAB-M" {
    extension = {"m"}
    description = "&M-file"
    definition_file = "matlab.gsc"
    submenu = "&MATLAB Languages"
}

# MATLAB-TLC
"MATLAB-TLC" {
    extension = {"tlc"}
    description = "&TLC"
    definition_file = "matlab_tlc.gsc"
    submenu = "&MATLAB Languages"	
}

# MATLAB-TMF
"MATLAB-TMF" {
    extension = {"tmf"}
    description = "Template Ma&kefile"
    definition_file = "matlab_tmf.gsc"
    submenu = "&MATLAB Languages"	
}

# More to come - e.g. rtw, cm, mdl

# GHS Menu Separator
"GHS-Sep8" {
    description = "\x01"
}

# VHDL
"VHDL" {
    extension = {"vhdl", "vhd"}
    description = "&VHDL"
    definition_file = "vhdl.gsc"
}


#####################################################################
#
# The following are other miscellaneous languages.  For now these
# should be hidden.  We can put them somewhere better if there are \
# more.
#
# The entries are sorted according to their description.
#
#####################################################################

# TI Linker Option File; uses similar syntax to GHS linker files
"TI-Linker" {
    extension = {"cmd"}
    description = "TI Linker"
    definition_file = "ghs_linker.gsc"
    hide = true
}
