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
	name = "GHS-MULTI-Configuration"
	description = "GHS MULTI Configuration"
	# File extensions for the language
	extension = {"cfg"}

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
	# '.' is not separator.
	separator = "\\\"+-*/<=>,;\'\t()[]^%!~|: {}?"
    
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	name += {"minviewsize"}
	name += {"maxviewsize"}
	name += {"minwindowsize"}
	name += {"maxwindowsize"}
	name += {"firstposition"}
	name += {"builderposition"}

	name += {"background"}
	name += {"foreground"}
	name += {"controlcolor"}
	name += {"select"}
	name += {"assembly"}
	name += {"breakcolor"}
	name += {"pointercolor"}
	name += {"bdotcolor"}
	name += {"comment"}
	name += {"deadcode"}
	name += {"keyword"}
	name += {"string"}
	name += {"number"}
	name += {"character"}
	name += {"customized"}
	name += {"nobuild"}
	name += {"program"}
	name += {"subprogram"}
	name += {"source"}
	name += {"header"}
	name += {"documentation"}
	name += {"library"}
	name += {"object"}
	name += {"singlelibrary"}
	name += {"script"}
	name += {"other"}
	name += {"TBFunctionNormalFG"}
	name += {"TBFunctionNoInfoFG"}
	name += {"TBFunctionRecursiveFG"}
	name += {"TBFunctionAdrTakenFG"}
	name += {"TBDynNormalFG"}
	name += {"TBDynNoInfoFG"}
	name += {"TBFileNormalFG"}
	name += {"TBFileNoInfoFG"}
	name += {"TBClassUnionFG"}
	name += {"TBClassEnumFG"}
	name += {"TBClassStructFG"}
	name += {"TBClassClassFG"}
	name += {"TBClassNoInfoFG"}
	name += {"TBFunctionNormalBG"}
	name += {"TBFunctionNoInfoBG"}
	name += {"TBFunctionRecursiveBG"}
	name += {"TBFunctionAdrTakenBG"}
	name += {"TBDynNormalBG"}
	name += {"TBDynNoInfoBG"}
	name += {"TBFileNormalBG"}
	name += {"TBFileNoInfoBG"}
	name += {"TBClassUnionBG"}
	name += {"TBClassEnumBG"}
	name += {"TBClassStructBG"}
	name += {"TBClassClassBG"}
	name += {"TBClassNoInfoBG"}
	name += {"fileRelLineBG"}
	name += {"procRelLineBG"}
	name += {"useFileRelLineBG"}
	name += {"useProcRelLineBG"}
	name += {"startedConnectionFG"}
	name += {"diffHighlight"}
	name += {"PathAnalyzerFg0"}
	name += {"PathAnalyzerFg1"}
	name += {"PathAnalyzerFg2"}
	name += {"PathAnalyzerFg3"}
	name += {"PathAnalyzerFg4"}
	name += {"PathAnalyzerFg5"}
	name += {"PathAnalyzerFg6"}
	name += {"PathAnalyzerFg7"}
	name += {"PathAnalyzerFg8"}
	name += {"PathAnalyzerBg0"}
	name += {"PathAnalyzerBg1"}
	name += {"PathAnalyzerBg2"}
	name += {"PathAnalyzerBg3"}
	name += {"PathAnalyzerBg4"}
	name += {"PathAnalyzerBg5"}
	name += {"PathAnalyzerBg6"}
	name += {"PathAnalyzerBg7"}
	name += {"PathAnalyzerBg8"}
	name += {"PathAnalyzerTask0"}
	name += {"PathAnalyzerTask1"}
	name += {"PathAnalyzerTask2"}
	name += {"PathAnalyzerTask3"}
	name += {"PathAnalyzerTask4"}
	name += {"PathAnalyzerTask5"}
	name += {"PathAnalyzerTask6"}
	name += {"PathAnalyzerTask7"}
	name += {"PathAnalyzerTask8"}

	name += {"adaindentsize"}
	name += {"adacontinuationsize"}
	name += {"wordwrap"}
	name += {"wrapcolumn"}
	name += {"wrapindent"}
	name += {"drawwrapline"}
	name += {"fillparagraphcolumn"}
	name += {"editindent"}
	name += {"tabsize"}
	name += {"editwidth"}
	name += {"editheight"}
	name += {"editincrfrequency"}
	name += {"editparenmatch"}
	name += {"editsomesize"}
	name += {"cppCommentsInC"}
	name += {"editorbackups"}
	name += {"exactcase"}
	name += {"editprint2column"}
	name += {"draganddrop"}
	name += {"tabsarespaces"}
	name += {"preventautocheckout"}
	name += {"rememberwindowpositions"}
	name += {"closebuttonontitlebar"}
	name += {"openfilesinnewbuffers"}
	name += {"autoGrabHeadFiles"}
	name += {"AIimplicitindent"}
	name += {"AIimplicitindentincomments"}
	name += {"AIimplicitonlyatinitial"}
	name += {"AIparenindentmode"}
	name += {"AIadaparenindentmode"}
	name += {"AIswitchintwo"}
	name += {"AItouchcomments"}
	name += {"AIcommentsstayflushleft"}
	name += {"AIcharslikestarincomment"}
	name += {"usealternateeditor"}
	name += {"SelectionMarginWidth"}
	name += {"allowmiddleclick"}
	name += {"allowovertypemode"}
	name += {"isearchreturn"}

	name += {"LongjmpStepMode"}
	name += {"backgroundmode"}
	name += {"viewsarechildrenmode"}
	name += {"ImplicitEvalEcho"}
	name += {"shellconfirm"}
	name += {"sharedsymbols"}
	name += {"procRelativeLines"}
	name += {"interleavedOutput"}
	name += {"bufferlogs"}
	name += {"StepToBpIgnoresResumeInBpCmd"}
	name += {"QualifyingLabelDenotesImmediatelyFollowingBlock"}
	name += {"ProcQualifiedLocalImpliesOutermostBlock"}
	name += {"WarnOnBpReplacement"}
	name += {"WarnOnCmdAdrLinePromotion"}
	name += {"DownloadWindow"}
	name += {"grabtimeout"}
	name += {"blockstep"}
	name += {"blockrun"}
	name += {"lowbandwidthtovc"}
	name += {"dontusemvc"}
	name += {"viewunsignedcharasint"}
	name += {"hexmode"}
	name += {"paddedhex"}
	name += {"BPSyntaxChecking"}
	name += {"AssertionSyntaxChecking"}
	name += {"leaveTypeDef"}
	name += {"VERIFYHALT"}
	name += {"ShowPosInNoDisplayMode"}
	name += {"rememberbreakpoints"}
	name += {"rememberbaseaddrs"}
	name += {"SaveCommandHistory"}
	name += {"SaveDebugServer"}
	name += {"SaveViewWindows"}
	name += {"SaveRunArguments"}
	name += {"SaveDebuggerWindowPos"}
	name += {"OverwriteScriptBreakpoints"}
	name += {"DerefPointer"}
	name += {"PrintSocketCommandStatus"}
	name += {"ContinuePlaybackFileOnError"}
	name += {"AllowExecutionInBpCommand"}
	name += {"AllowExecutionInAssertionCommand"}
	name += {"AllowProcCallInOsaTask"}
	name += {"AllowProcCallInExamine"}
	name += {"SilentlyReloadSymbols"}
	name += {"SimpleDisplayOfUnknownProcs"}
	name += {"GotoHitsBpAtTargetAddress"}
	name += {"ShowTargetWindows"}
	name += {"cwindlines"}
	name += {"ctextsize"}
	name += {"history"}
	name += {"servertimeout"}
	name += {"serverscalefactor"}
	name += {"ServerPollInterval"}
	name += {"linenumbermode"}
	name += {"disasmStyle"}
	name += {"prompt"}
	name += {"debugbuttonsloc"}
	name += {"haltonattach"}
	name += {"QuietTogCmd"}
	name += {"OSATaskAutoAttachLimit"}
	name += {"OSASwitchToUserTaskAutomatically"}
	name += {"RunRCScripts"}
	name += {"FormatStringMaxLength"}
	name += {"FormatStringMaxDepth"}
	name += {"LoadLongArraysOnViewWinCreation"}
	name += {"EchoCommandsFromPlaybackFiles"}
	name += {"RecordCommentedCommandsFromMacros"}
	name += {"PrintReturnValues"}
	name += {"RequireExplicitDownload"}
	name += {"TaskMatchCriteria"}
	name += {"DeleteDeadTaskFromGroup"}
	name += {"RequestOsaPackage"}
	name += {"maxContainerDisplaySize"}
	name += {"containerSizeIncrement"}
	name += {"autoDwarf2dbo"}
	name += {"autoStabs2dbo"}
	name += {"preferredTranslationTmpDir"}
	name += {"GlobalHeading"}
	name += {"ViewWindowDefaultToTree"}
	name += {"UnifyViewWindows"}
	name += {"SetBPAtAdrInitWhenExecing"}
	name += {"ShowTraceOSAWindows"}
	name += {"DismissMenuOnWindowConfigure"}
	name += {"PciCARBigEndian"}
	name += {"PciCDRBigEndian"}
	name += {"ReloadAllCores"}
	name += {"PrepareAllCores"}
	name += {"OSAStartAutomatically"}
	name += {"OSAExplorerRefreshTargetList"}

	name += {"UseLowPriority"}
	name += {"UseLockFiles"}
	name += {"ToolCommands"}
	name += {"NumParallelBuildProcesses"}
	name += {"NumberOfParallelProcesses"}
	name += {"AutoDetectNumParallel"}
	name += {"BuildType"}
	name += {"autoediterrors"}
	name += {"autoeditwarnings"}
	name += {"alwaysusemetofixbuilderrors"}
	name += {"beepOnBuildCompletion"}
	name += {"tooltips"}
	name += {"nodecoration"}
	name += {"takefocus"}
	name += {"focusonraise"}
	name += {"ignoremotion"}
	name += {"scrolllocation"}
	name += {"scrollhlocation"}
	name += {"showprogress"}
	name += {"warppointer"}
	name += {"warppointer"}
	name += {"PromptQuitDebugger"}
	name += {"autocomplete"}
	name += {"synchronous"}
	name += {"moon"}
	name += {"colorsyntax"}
	name += {"colorbuilder"}
	name += {"usewmpositioning"}
	name += {"usewmhinting"}
	name += {"blackwhite"}
	name += {"blinkingcursor"}
	name += {"scrollbarwidth"}
	name += {"scrollbarwidth"}
	name += {"linesnonoverlapped"}
	name += {"menudelay"}
	name += {"tempFileDir"}
	name += {"font"}
	name += {"buttonfont"}
	name += {"guifont"}
	name += {"kanjifont"}
	name += {"sjiscode"}
	name += {"sjiscode"}
	name += {"kanjiconv"}
	name += {"CheckBookEditor"}
	name += {"rememberdirs"}
	name += {"showversioncontrol"}
	name += {"genfilesdir"}
	name += {"sourcefilesdir"}
	name += {"buildfilesdir"}
	name += {"execfilesdir"}
	name += {"debugserversdir"}
	name += {"genfileset"}
	name += {"sourcefileset"}
	name += {"buildfileset"}
	name += {"execfileset"}
	name += {"debugserverset"}

	name += {"browserCommand"}
	name += {"clickpause"}
	name += {"configdir"}
	name += {"configure"}
	name += {"configurefile"}
	name += {"autorecord"}
	name += {"configsavemode"}
	name += {"clearbuttons"}
	name += {"button"}
	name += {"debugbutton"}
	name += {"editbutton"}
	name += {"cleareditbuttons"}
	name += {"clearkeys"}
	name += {"key"}
	name += {"keybind"}
	name += {"clearmice"}
	name += {"mouse"}
	name += {"geometry"}
	name += {"icongeometry"}
	name += {"dumpResources"}
	name += {"dialoguefile"}
	name += {"menu"}
	name += {"clearmenus"}
	name += {"iconify"}
	name += {"viewdef"}
	name += {"printcommand"}
	name += {"beep"}
	name += {"saveEvents"}
	name += {"restoreEvents"}
	name += {"view.vbase"}
	name += {"view.base"}
	name += {"view.in"}
	name += {"view.virtuals"}
	name += {"view.nonatomic"}
	name += {"button.ok"}
	name += {"button.cancel"}
	name += {"button.yes"}
	name += {"button.no"}
	name += {"button.all"}
	name += {"button.none"}
	name += {"button.close"}
	name += {"button.pop"}
	name += {"button.help"}
	name += {"button.shrink"}
	name += {"button.dup"}
	name += {"button.freeze"}
	name += {"button.thaw"}
	name += {"button.quit"}
	name += {"button.really"}
	name += {"button.file1"}
	name += {"button.file2"}
	name += {"button.base"}
	name += {"button.abort"}
	name += {"button.proceed"}
	name += {"button.auto"}
	name += {"button.merge"}
	name += {"button.12"}
	name += {"button.1base"}
	name += {"button.2base"}
	name += {"button.both"}
	name += {"button.bothcontrol"}
	name += {"button.setcb"}
	name += {"button.startsword"}
	name += {"button.endsword"}
	name += {"button.startsline"}
	name += {"button.endsline"}
	name += {"button.searchtype"}
	name += {"button.normal"}
	name += {"button.wildcards"}
	name += {"button.re"}
	name += {"button.edit"}
	name += {"label.copyfrom"}
	name += {"label.sync"}
	name += {"label.sync2"}
	name += {"label.before"}
	name += {"label.between"}
	name += {"label.after"}
	name += {"label.precedes"}
	name += {"label.insert"}
	name += {"msg.merge"}
	name += {"msg.prefix"}
	name += {"button.find"}
	name += {"button.replace"}
	name += {"button.rplthenfind"}
	name += {"button.findthenrpl"}
	name += {"button.allrpl"}
	name += {"button.undo"}
	name += {"button.case"}
	name += {"button.forward"}
	name += {"button.backward"}
	name += {"button.exact"}
	name += {"button.either"}
	name += {"status.srchabrt"}
	name += {"status.srchsrch"}
	name += {"status.srchre"}
	name += {"status.srchwild"}
	name += {"status.srchline"}
	name += {"status.srchword"}
	name += {"status.failed"}
	name += {"status.readonly"}
	name += {"button.mkdir"}
	name += {"button.updir"}
	name += {"button.pwd"}
	name += {"button.delete"}
	name += {"dialogue.reallykill"}
	name += {"dialogue.nonptr"}
	name += {"dialogue.regname"}
	name += {"dialogue.openindex"}
	name += {"dialogue.openfield"}
	name += {"dialogue.newaddr"}
	name += {"dialogue.newtype"}
	name += {"dialogue.path"}
	name += {"dialogue.newcommand"}
	name += {"dialogue.delbrk"}
	name += {"dialogue.brk"}
	name += {"dialogue.peruse"}
	name += {"dialogue.bif"}
	name += {"dialogue.edit"}
	name += {"dialogue.call"}
	name += {"dialogue.cast"}
	name += {"dialogue.addvar"}
	name += {"status.source"}
	name += {"status.nosource"}
	name += {"status.noprogram"}
	name += {"status.noprocess"}
	name += {"status.stopped"}
	name += {"status.stoppedin"}
	name += {"status.running"}
	name += {"status.dying"}
	name += {"status.forking"}
	name += {"status.execing"}
	name += {"status.continuing"}
	name += {"status.zombie"}
	name += {"status.csrch"}
	name += {"status.ssrch"}
	name += {"status.srch"}
	name += {"status.replacing"}
	name += {"status.file"}
	name += {"status.target"}
	name += {"status.proc"}
	name += {"message.running"}
	name += {"message.stoppedby"}
	name += {"message.on"}
	name += {"message.read"}
	name += {"message.write"}
	name += {"message.execute"}
	name += {"message.mask"}
	name += {"message.behalf"}
	name += {"message.hardware"}
	name += {"multiWinPreName"}
	name += {"multiIconPreName"}
	name += {"autoConnectionMode"}
	name += {"hovervalues"}

	name += {"tracegui.name"}

	name += {"integrate.intexname"}
	name += {"integrate.asbindir"}
	name += {"integrate.taskfuncname"}
	name += {"integrate.targetfilename"}
	name += {"integrate.kernelfilename"}
	name += {"integrate.outputfilename"}
	name += {"integrate.canvaswidth"}
	name += {"integrate.canvasheight"}
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
	1 { begin = "\'"; end = "\'" }
	# If color is not defined for character, default color is used.
	# color = "#008000"
    }

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

    customized {
	pattern += {"On"}

	pattern += {"Normal"}
	pattern += {"Always"}
	pattern += {"Never"}

	pattern += {"AcrossReload"}
	pattern += {"AcrossSessions"}

	pattern += {"IgnoreRunAway"}
	pattern += {"MinimizeTempStops"}
	pattern += {"MaximizeStepSpeed"}

	pattern += {"Off"}
	pattern += {"Offset"}
	pattern += {"Preset"}

	pattern += {"Warnings"}
	pattern += {"Errors"}

	pattern += {"AskIfChanged"}
	pattern += {"IfChanged"}

	pattern += {"Children"}
	pattern += {"Toplevel"}
	pattern += {"KeepFocus"}

	pattern += {"Yes"}
	pattern += {"No"}
	pattern += {"AsWordWrap"}

	pattern += {"parallel"}
	pattern += {"singlethread"}

	pattern += {"auto"}
	pattern += {"custom"}
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
