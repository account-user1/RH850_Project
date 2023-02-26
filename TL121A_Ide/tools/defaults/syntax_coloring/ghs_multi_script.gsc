# The file is auto-grabbed on Tue Nov  8 16:36:04 2011, 
# please don't manually change it.

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
	name = "GHS-Script"
	description = "GHS Script Language"
	# File extensions for the language
	extension = {"multirc", "ghs", "rc", "irc", "bps", "mbs", "prc"}

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
	separator = "#\\\"+-*/<=>:,;\'\t()[]^%!~|& {}?"

	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
#	name += {"+"}
#	name += {"-"}
#	name += {"->"}
#	name += {"/"}
#	name += {"<"}
#	name += {">"}
#	name += {">>"}
#	name += {"?"}
	name += {"A"}
	name += {"B"}
	name += {"D"}
	name += {"E"}
	name += {"FindComp"}
	name += {"FindDec"}
	name += {"FindUse"}
	name += {"H"}
	name += {"P"}
	name += {"Q"}
	name += {"R"}
	name += {"Rb"}
	name += {"S"}
	name += {"ShowCall"}
	name += {"ShowDep"}
	name += {"ShowTypeGrph"}
	name += {"Si"}
	name += {"Sl"}
	name += {"Tog"}
	name += {"__assume"}
	name += {"__attach"}
	name += {"__autocheck_size"}
	name += {"__autocomplete"}
	name += {"__bline"}
	name += {"__bookmark"}
	name += {"__bpmove"}
	name += {"__changeDialogFlag"}
	name += {"__check_condition"}
	name += {"__checkunsafeinstforclpc"}
	name += {"__clear_selection"}
	name += {"__cmdlog"}
	name += {"__code_metrics"}
	name += {"__complete"}
	name += {"__cpulog"}
	name += {"__debugflag"}
	name += {"__debuggernewprocess"}
	name += {"__dimwhilerunning"}
	name += {"__dumpgui"}
	name += {"__dumphier"}
	name += {"__dumpprinfo"}
	name += {"__dumptcs"}
	name += {"__dumpwidget"}
	name += {"__dyndataclear"}
	name += {"__dyndatareglist"}
	name += {"__dyndataregtl"}
	name += {"__dyndataregtree"}
	name += {"__dyndataview"}
	name += {"__editnewprocess"}
	name += {"__endtime"}
	name += {"__fillGuiWithObjs"}
	name += {"__find_and_set_runmode_partner"}
	name += {"__getenv"}
	name += {"__gethostname"}
	name += {"__getlicense"}
	name += {"__globsymbolexists"}
	name += {"__graphview"}
	name += {"__haltmsg"}
	name += {"__importOldMenuCfg"}
	name += {"__importToolbar"}
	name += {"__loadconfigfrom"}
	name += {"__mevdump"}
	name += {"__modgui"}
	name += {"__mscriptdbg"}
	name += {"__multidir"}
	name += {"__multifragments"}
	name += {"__new_options_dialog"}
	name += {"__nop"}
	name += {"__ntwcommand"}
	name += {"__openmanual"}
	name += {"__opt_vc"}
	name += {"__outtolunch"}
	name += {"__pess_vc"}
	name += {"__playdead"}
	name += {"__preprocessstring"}
	name += {"__printincludes"}
	name += {"__printinheritedtype"}
	name += {"__raisewindow"}
	name += {"__readMenuFile"}
	name += {"__readToolbarFile"}
	name += {"__regDialogCmd"}
	name += {"__remotename"}
	name += {"__saveconfigas"}
	name += {"__select_word"}
	name += {"__selftrace"}
	name += {"__setup_runmode_partner"}
	name += {"__shellredir"}
	name += {"__sleep"}
	name += {"__specialdirs"}
	name += {"__sr_debug"}
	name += {"__sr_debug_now"}
	name += {"__sr_dumppluginlog"}
	name += {"__sr_log"}
	name += {"__sr_stop_debug"}
	name += {"__start_runmode_partner"}
	name += {"__starttime"}
	name += {"__sync_rc"}
	name += {"__targetdiskcomp"}
	name += {"__test_dvlist"}
	name += {"__tlbview"}
	name += {"__tracearchid"}
	name += {"__tracebnch"}
	name += {"__traceisdone"}
	name += {"__tracenull"}
	name += {"__traceswitch"}
	name += {"__tracetoggle"}
	name += {"__tracewait"}
	name += {"__unregDialogCmd"}
	name += {"__validate"}
	name += {"__wkspc_restore"}
	name += {"__wkspc_save"}
	name += {"_osaFillGuiWithObj"}
	name += {"a"}
	name += {"about"}
	name += {"aboutlic"}
	name += {"addhook"}
	name += {"alertdialog"}
	name += {"alias"}
	name += {"asdebugmode"}
	name += {"asm"}
	name += {"assem"}
	name += {"assert"}
	name += {"attach"}
	name += {"b"}
	name += {"bA"}
	name += {"bI"}
	name += {"bR"}
	name += {"bU"}
	name += {"bX"}
	name += {"ba"}
	name += {"backhistory"}
	name += {"backhistorysrch"}
	name += {"bat"}
	name += {"bc"}
	name += {"bcU"}
	name += {"be"}
	name += {"bg"}
	name += {"bi"}
	name += {"bif"}
	name += {"bpload"}
	name += {"bprev"}
	name += {"bpsave"}
	name += {"bpview"}
	name += {"br"}
	name += {"break"}
	name += {"breakpoints"}
	name += {"browse"}
	name += {"browseprocsinfile"}
	name += {"browseref"}
	name += {"bs"}
	name += {"bsearch"}
	name += {"bsi"}
	name += {"bt"}
	name += {"bu"}
	name += {"bugreport"}
	name += {"build"}
	name += {"builder"}
	name += {"button"}
	name += {"bx"}
	name += {"c"}
	name += {"cU"}
	name += {"cachefind"}
	name += {"caches"}
	name += {"cacheview"}
	name += {"call"}
	name += {"callpsfunction"}
	name += {"calls"}
	name += {"callsview"}
	name += {"cat"}
	name += {"cb"}
	name += {"cedit"}
	name += {"cf"}
	name += {"cfb"}
	name += {"change_binding"}
	name += {"changegroup"}
	name += {"checktargetinit"}
	name += {"chgcase"}
	name += {"chooseconnection"}
	name += {"clear"}
	name += {"clearconfig"}
	name += {"clearhooks"}
	name += {"codereplay"}
	name += {"comeback"}
	name += {"compare"}
	name += {"compareb"}
	name += {"completeselection"}
	name += {"components"}
	name += {"configoptions"}
	name += {"configure"}
	name += {"configurefile"}
	name += {"connect"}
	name += {"connection"}
	name += {"connectionview"}
	name += {"continue"}
	name += {"copy"}
	name += {"copyb"}
	name += {"createcontrol"}
	name += {"creategroup"}
	name += {"cu"}
	name += {"customizemenus"}
	name += {"customizetoolbar"}
	name += {"cvconfig"}
	name += {"d"}
	name += {"datadescription"}
	name += {"dataview"}
	name += {"dbnew"}
	name += {"dbprint"}
	name += {"de"}
	name += {"debug"}
	name += {"debugbutton"}
	name += {"debugpane"}
	name += {"debugsplitter"}
	name += {"define"}
	name += {"destroygroup"}
	name += {"detach"}
	name += {"dialog"}
	name += {"dialogsearch"}
	name += {"dialogue"}
	name += {"diff"}
	name += {"directorydialog"}
	name += {"disassemble"}
	name += {"disconnect"}
	name += {"do"}
	name += {"dspbp"}
	name += {"dspshow"}
	name += {"dualtrace"}
	name += {"dumpfile"}
	name += {"dvclear"}
	name += {"dvedit"}
	name += {"dvexplore"}
	name += {"dvlist"}
	name += {"dvload"}
	name += {"dvprofile"}
	name += {"dz"}
	name += {"e"}
	name += {"echo"}
	name += {"edit"}
	name += {"editbutton"}
	name += {"editfile"}
	name += {"edithwbp"}
	name += {"editswbp"}
	name += {"edittp"}
	name += {"editview"}
	name += {"else"}
	name += {"error"}
	name += {"eval"}
	name += {"evaltosocket"}
	name += {"ex"}
	name += {"examine"}
	name += {"filedialog"}
	name += {"filedialogue"}
	name += {"fileextensions"}
	name += {"fill"}
	name += {"fillb"}
	name += {"find"}
	name += {"findb"}
	name += {"findleaks"}
	name += {"flash"}
	name += {"fontsize"}
	name += {"for"}
	name += {"forwardhistory"}
	name += {"forwardhistorysrch"}
	name += {"fsearch"}
	name += {"g"}
	name += {"getargs"}
	name += {"goaway"}
	name += {"grep"}
	name += {"groupaction"}
	name += {"gtrace"}
	name += {"h"}
	name += {"halt"}
	name += {"hardbrk"}
	name += {"heapview"}
	name += {"help"}
	name += {"hover"}
	name += {"icacheview"}
	name += {"if"}
	name += {"imagename"}
	name += {"indexnext"}
	name += {"indexprev"}
	name += {"info"}
	name += {"inspect"}
	name += {"iobuffer"}
	name += {"isearch"}
	name += {"isearchadd"}
	name += {"isearchreturn"}
	name += {"k"}
	name += {"kacmd"}
	name += {"katask"}
	name += {"keybind"}
	name += {"l"}
	name += {"launcher"}
	name += {"listgroup"}
	name += {"listhooks"}
	name += {"load"}
	name += {"loadconfigfromfile"}
	name += {"loaddialogfile"}
	name += {"loaddialoguefile"}
	name += {"loadsym"}
	name += {"localsview"}
	name += {"macrotrace"}
	name += {"make"}
	name += {"map"}
	name += {"mark"}
	name += {"markdel"}
	name += {"memdump"}
	name += {"memfilter"}
	name += {"memfilterinfo"}
	name += {"memfilterload"}
	name += {"memfilterreload"}
	name += {"memfilterunload"}
	name += {"memload"}
	name += {"memread"}
	name += {"memtest"}
	name += {"memview"}
	name += {"memwrite"}
	name += {"menu"}
	name += {"menumodify"}
	name += {"mev"}
	name += {"monitor"}
	name += {"mouse"}
	name += {"mprintf"}
	name += {"mrulist"}
	name += {"mrv"}
	name += {"mslprint"}
	name += {"multibar"}
	name += {"mute"}
	name += {"n"}
	name += {"new"}
	name += {"ni"}
	name += {"nl"}
	name += {"notedel"}
	name += {"noteedit"}
	name += {"notelist"}
	name += {"notestate"}
	name += {"noteview"}
	name += {"obr"}
	name += {"obrfreeze"}
	name += {"obrinvoke"}
	name += {"osacmd"}
	name += {"osaexplorer"}
	name += {"osainject"}
	name += {"osasetup"}
	name += {"osatask"}
	name += {"osaview"}
	name += {"output"}
	name += {"p"}
	name += {"passive"}
	name += {"pci"}
	name += {"pipeview"}
	name += {"prepare_target"}
	name += {"print"}
	name += {"printline"}
	name += {"printphys"}
	name += {"printsearch"}
	name += {"printwindow"}
	name += {"profdump"}
	name += {"profile"}
	name += {"profilemode"}
	name += {"profilereport"}
	name += {"pwd"}
	name += {"py"}
	name += {"python"}
	name += {"pywin"}
	name += {"q"}
	name += {"quit"}
	name += {"quitall"}
	name += {"r"}
	name += {"rb"}
	name += {"refresh"}
	name += {"regadd"}
	name += {"regappend"}
	name += {"regbasefile"}
	name += {"registers"}
	name += {"regload"}
	name += {"regtab"}
	name += {"regunload"}
	name += {"regvalload"}
	name += {"regvalsave"}
	name += {"regview"}
	name += {"remote"}
	name += {"reset"}
	name += {"restart"}
	name += {"restore"}
	name += {"resume"}
	name += {"return"}
	name += {"rload"}
	name += {"rominithbp"}
	name += {"romverify"}
	name += {"route"}
	name += {"rundir"}
	name += {"runpanel"}
	name += {"runtask"}
	name += {"runtohere"}
	name += {"s"}
	name += {"save"}
	name += {"saveconfig"}
	name += {"saveconfigtofile"}
	name += {"savedebugpane"}
	name += {"sb"}
	name += {"sc"}
	name += {"scrollcommand"}
	name += {"serialconnect"}
	name += {"serialdisconnect"}
	name += {"set_runmode_partner"}
	name += {"setargs"}
	name += {"setbrk"}
	name += {"sethbp"}
	name += {"setintegritydir"}
	name += {"setpspdentries"}
	name += {"setpswindowname"}
	name += {"setsync"}
	name += {"setup"}
	name += {"setuvelositydir"}
	name += {"shell"}
	name += {"showdef"}
	name += {"showfds"}
	name += {"showhistory"}
	name += {"showsync"}
	name += {"si"}
	name += {"signal"}
	name += {"sl"}
	name += {"socket"}
	name += {"source"}
	name += {"sourceroot"}
	name += {"stepinto"}
	name += {"stopif"}
	name += {"stopifi"}
	name += {"substitute"}
	name += {"switch"}
	name += {"syncolor"}
	name += {"target"}
	name += {"targetinput"}
	name += {"targetwindow"}
	name += {"taskaction"}
	name += {"taskwindow"}
	name += {"tbrowse"}
	name += {"timemachine"}
	name += {"tlist"}
	name += {"tog"}
	name += {"top"}
	name += {"tpdel"}
	name += {"tpenable"}
	name += {"tplist"}
	name += {"tpprint"}
	name += {"tppurge"}
	name += {"tpreset"}
	name += {"tpset"}
	name += {"trace"}
	name += {"tracebrowse"}
	name += {"tracedata"}
	name += {"tracefpro"}
	name += {"tracefunction"}
	name += {"traceline"}
	name += {"traceload"}
	name += {"traceloadsession"}
	name += {"tracemevsys"}
	name += {"tracepath"}
	name += {"tracepro"}
	name += {"tracesave"}
	name += {"tracesavesession"}
	name += {"tracesavetext"}
	name += {"tracesetutdl"}
	name += {"tracestart"}
	name += {"tracestop"}
	name += {"tracesubfunction"}
	name += {"unalias"}
	name += {"unload"}
	name += {"unloadsym"}
	name += {"update"}
	name += {"uptosource"}
	name += {"usage"}
	name += {"verify"}
	name += {"view"}
	name += {"viewcommand"}
	name += {"viewdel"}
	name += {"viewlist"}
	name += {"vremote"}
	name += {"wait"}
	name += {"watchpoint"}
	name += {"wgutils"}
	name += {"while"}
	name += {"window"}
	name += {"windowcopy"}
	name += {"windowpaste"}
	name += {"windowspaste"}
	name += {"xmit"}
	name += {"xmitio"}
	name += {"xref"}
	name += {"zignal"}
#	name += {"{"}
#	name += {"}"}
#	name += {"~"}
	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "//"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    comment {
	# Because multiple pairs of comment delimiters can be defined,
	# use a index for each of them.
	1 { begin = "/*"; end = "*/" }
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
	1 { begin = "\'"; end = "\'" }
	# If color is not defined for character, default color is used.
	# color = "#008000"
    }

    integer {
	# Support hex integer?
	hex = true
	# Case-sensitive for integer suffix? Default is true.
	#case_sensitive = true
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    float {
	# Support scientific float?
	scientific = true
	# Case-sensitive for float suffix? Default is true.
	#case_sensitive = false
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }

    customized {
	pattern = {"kacmd", "katask"}
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
	# name += {"strcasecmp"}
	# More stuff from library for auto-completion
	
	# More stuff from GHS-library for auto-completion
    }
}
