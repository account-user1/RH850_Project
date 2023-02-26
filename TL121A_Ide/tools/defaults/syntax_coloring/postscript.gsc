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
	name = "PostScript"
	description = "PostScript"
	# File extensions for the language
	extension = {"ps"}

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
	# Don't treat / as separator
	separator = "\\\"+-*<=>:,;\'\t()[]^%!~|& {}.?"

	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# Stack manipulation Operators
	name += {"pop"}
	name += {"exch"}
	name += {"dup"}
	name += {"copy"}
	name += {"index"}
	name += {"roll"}
	name += {"clear"}
	name += {"count"}
	name += {"mark"}
	name += {"cleartomark"}
	name += {"counttomark"}
	# Arithmatic and Math Operators 
	name += {"add"}
	name += {"div"}
	name += {"idiv"}
	name += {"mod"}
	name += {"mul"}
	name += {"sub"}
	name += {"abs"}
	name += {"neg"}
	name += {"ceiling"}
	name += {"floor"}
	name += {"round"}
	name += {"truncate"}
	name += {"sqrt"}
	name += {"atan"}
	name += {"cos"}
	name += {"sin"}
	name += {"exp"}
	name += {"ln"}
	name += {"log"}
	name += {"rand"}
	name += {"srand"}
	name += {"rrand"}
	# Array Operators
	name += {"array"}
	name += {"length"}
	name += {"get"}
	name += {"put"}
	name += {"getinterval"}
	name += {"putinterval"}
	name += {"astore"}
	name += {"aload"}
	name += {"copy"}
	name += {"forall"}
	# Packed Array Operators
	name += {"packedarray"}
	name += {"currentpacking"}
	name += {"setpacking"}
	# Dictionary Operators
	name += {"dict"}
	name += {"maxlength"}
	name += {"begin"}
	name += {"end"}
	name += {"def"}
	name += {"load"}
	name += {"store"}
	name += {"undef"}
	name += {"known"}
	name += {"where"}
	name += {"currentdict"}
	name += {"errordict"}
	name += {"$error"}
	name += {"systendict"}
	name += {"userdict"}
	name += {"globaldict"}
	name += {"statusdict"}
	name += {"countdictstack"}
	name += {"dictstack"}
	name += {"cleardictstack"}
	# String Operators
	name += {"string"}
	name += {"anchorsearch"}
	name += {"search"}
	name += {"token"}
	# Relatinal, Boolean and Bitwise Operators
	name += {"eq"}
	name += {"ne"}
	name += {"ge"}
	name += {"gt"}
	name += {"le"}
	name += {"lt"}
	name += {"and"}
	name += {"not"}
	name += {"or"}
	name += {"xor"}
	name += {"true"}
	name += {"false"}
	name += {"bitshift"}
	# Control Operators
	name += {"exec"}
	name += {"if"}
	name += {"ifelse"}
	name += {"for"}
	name += {"repeat"}
	name += {"loop"}
	name += {"exit"}
	name += {"stop"}
	name += {"stopped"}
	name += {"countexecstack"}
	name += {"execstack"}
	name += {"quit"}
	name += {"start"}
	# TYpe, Attribute and Conversion Operators
	name += {"type"}
	name += {"cvlit"}
	name += {"cvx"}
	name += {"xcheck"}
	name += {"executeonly"}
	name += {"noaccess"}
	name += {"readonly"}
	name += {"rcheck"}
	name += {"wcheck"}
	name += {"cvi"}
	name += {"cvn"}
	name += {"cvr"}
	name += {"cvrs"}
	name += {"cvs"}
	# File Operators
	name += {"file"}
	name += {"filter"}
	name += {"closefile"}
	name += {"read"}
	name += {"write"}
	name += {"readhexstring"}
	name += {"writehexstring"}
	name += {"readstring"}
	name += {"writestring"}
	name += {"readline"}
#	name += {"token"}
	name += {"bytesavailable"}
	name += {"flush"}
	name += {"flushfile"}
	name += {"resetfile"}
	name += {"status"}
	name += {"run"}
	name += {"currentfile"}
	name += {"deletefile"}
	name += {"renamefile"}
	name += {"filenameforall"}
	name += {"setfileposition"}
	name += {"fileposition"}
	name += {"print"}
	name += {"stack"}
	name += {"pstack"}
	name += {"printobject"}
	name += {"writeobject"}
	name += {"setobjectformat"}
	name += {"currentobjectformat"}
	# Resource Operators
	name += {"defineresource"}
	name += {"undefineresource"}
	name += {"findresource"}
	name += {"resourcestatus"}
	name += {"resourceforall"}
	# Virtual Memory Operators
	name += {"save"}
	name += {"restore"}
	name += {"setglobal"}
	name += {"currentglobal"}
	name += {"gcheck"}
	name += {"startjob"}
	name += {"defineuserobject"}
	name += {"execuserobject"}
	name += {"undefineuserobject"}
	name += {"UserObjects"}
	# Miscellaneous Operators
	name += {"bind"}
	name += {"null"}
	name += {"version"}
	name += {"realtime"}
	name += {"usertime"}
	name += {"languagelevel"}
	name += {"product"}
	name += {"revision"}
	name += {"serialnumber"}
	name += {"executive"}
	name += {"echo"}
	name += {"prompt"}
	# Graphics State Operators - Device Independent
	name += {"gsave"}
	name += {"grestore"}
	name += {"grestoreall"}
	name += {"initgraphics"}
	name += {"gstate"}
	name += {"setgstate"}
	name += {"currentgstate"}
	name += {"setlinewidth"}
	name += {"currentlinewidth"}
	name += {"setlinecap"}
	name += {"currentlinecap"}
	name += {"setlinejoin"}
	name += {"currentlinejoin"}
	name += {"setmiterline"}
	name += {"currentmiterline"}
	name += {"setstrokeadjust"}
	name += {"currentstrokeadjust"}
	name += {"setdash"}
	name += {"currentdash"}
	name += {"setcolorspace"}
	name += {"currentcolorspace"}
	name += {"setcolor"}
	name += {"currentcolor"}
	name += {"setgray"}
	name += {"currentgray"}
	name += {"sethsbcolor"}
	name += {"currenthsbcolor"}
	name += {"setrgbcolor"}
	name += {"currentrgbcolor"}
	name += {"setcmykcolor"}
	name += {"currentcmykcolor"}
	# Graphics State Operators - Device Independent
	name += {"sethalftone"}
	name += {"currenthalftone"}
	name += {"setscreen"}
	name += {"currentscreen"}
	name += {"setcolorscreen"}
	name += {"currentcolorscreen"}
	name += {"settransfer"}
	name += {"currenttransfer"}
	name += {"setcolortransfer"}
	name += {"currentcolortransfer"}
	name += {"setbackgeneration"}
	name += {"currentbackgeneration"}
	name += {"setundercolormoval"}
	name += {"currentundercolormoval"}
	name += {"setcolorrendering"}
	name += {"currentcolorrendering"}
	name += {"setflat"}
	name += {"currentflat"}
	name += {"setoverprint"}
	name += {"currentoverprint"}
	# Coordinate System and Matrix Operators
	name += {"matrix"}
	name += {"initmatrix"}
	name += {"indentmatrix"}
	name += {"defaultmatrix"}
	name += {"currentmatrix"}
	name += {"setmatrix"}
	name += {"translate"}
	name += {"scale"}
	name += {"rotate"}
	name += {"concat"}
	name += {"concatmatrix"}
	name += {"transform"}
	name += {"dtransform"}
	name += {"itransform"}
	name += {"idtransform"}
	name += {"invertmatrix"}
	# Path Construction Operators
	name += {"newpath"}
	name += {"currentpoint"}
	name += {"moveto"}
	name += {"rmoveto"}
	name += {"lineto"}
	name += {"rlineto"}
	name += {"arc"}
	name += {"arcn"}
	name += {"arct"}
	name += {"arcto"}
	name += {"curveto"}
	name += {"rcurveto"}
	name += {"closepath"}
	name += {"flattenpath"}
	name += {"reversepath"}
	name += {"strokepath"}
	name += {"ustrokepath"}
	name += {"charpath"}
	name += {"uappend"}
	name += {"clippath"}
	name += {"setbox"}
	name += {"pathbbox"}
	name += {"pathforall"}
	name += {"upath"}
	name += {"initclip"}
	name += {"clip"}
	name += {"eoclip"}
	name += {"rectclip"}
	name += {"ucache"}
	# Painting Operators
	name += {"erasepage"}
	name += {"fill"}
	name += {"eofill"}
	name += {"stroke"}
	name += {"ufill"}
	name += {"ueofill"}
	name += {"ustroke"}
	name += {"rectfill"}
	name += {"rectstroke"}
	name += {"image"}
	name += {"colorimage"}
	name += {"imagemask"}
	# Insideness Testing Operators
	name += {"infill"}
	name += {"ineofill"}
	name += {"inufill"}
	name += {"inueofill"}
	name += {"instroke"}
	name += {"inustroke"}
	# Form and Pattern Operators
	name += {"makepattern"}
	name += {"setpattern"}
	name += {"execform"}
	# Device Setup and Output Operators
	name += {"showpage"}
	name += {"copypage"}
	name += {"setpagedevice"}
	name += {"currentpagedevice"}
	name += {"nulldevice"}
	# Character and Font Operators
	name += {"definefont"}
	name += {"undefinefont"}
	name += {"findfont"}
	name += {"scalefont"}
	name += {"makefont"}
	name += {"setfont"}
	name += {"currentfont"}
	name += {"rootfont"}
	name += {"selectfont"}
	name += {"show"}
	name += {"ashow"}
	name += {"withshow"}
	name += {"awithshow"}
	name += {"xshow"}
	name += {"xyshow"}
	name += {"yshow"}
	name += {"glyphshow"}
	name += {"stringwidth"}
	name += {"cshow"}
	name += {"kshow"}
	name += {"FontDirectory"}
	name += {"GlobalFontDirectory"}
	name += {"StandardEncoding"}
	name += {"ISOLatin1Encoding"}
	name += {"findencoding"}
	name += {"setcachedevice"}
	name += {"setcachedevice2"}
	name += {"setcharwidth"}
	# Interpreter Parameter Operators
	name += {"setsystemparams"}
	name += {"currentsystemparams"}
	name += {"setuserparams"}
	name += {"currentuserparams"}
	name += {"setdevparams"}
	name += {"currentdevparams"}
	name += {"vmreclaim"}
	name += {"setvmthreshold"}
	name += {"vmstatus"}
	name += {"setcachelimit"}
	name += {"setcacheparams"}
	name += {"currentcacheparams"}
	name += {"setucacheparams"}
	name += {"ucachestatus"}
	# Display PostScript Operators
	name += {"currentcontext"}
	name += {"fork"}
	name += {"join"}
	name += {"detach"}
	name += {"lock"}
	name += {"monitor"}
	name += {"lock"}
	name += {"monitor"}
	name += {"condition"}
	name += {"wait"}
	name += {"notify"}
	name += {"yield"}
	name += {"defineusername"}
	name += {"viewclip"}
	name += {"eoviewclip"}
	name += {"rectviewclip"}
	name += {"initviewclip"}
	name += {"viewclippath"}
	name += {"deviceinfo"}
	name += {"wtranslation"}
	name += {"sethalftonephase"}
	name += {"currenthalftonephase"}
	# Errors Operators
	name += {"configurationerror"}
	name += {"dictfull"}
	name += {"dictstackoverflow"}
	name += {"dictstackunderflow"}
	name += {"execstackoverflow"}
	name += {"handleerror"}
	name += {"interrupt"}
	name += {"invalidaccess"}
	name += {"invalidcontext"}
	name += {"invalidexit"}
	name += {"invalidfileaccess"}
	name += {"invalidfont"}
	name += {"invalidid"}
	name += {"invalidrestore"}
	name += {"ioerror"}
	name += {"limitcheck"}
	name += {"nocurrrentpoint"}
	name += {"rangecheck"}
	name += {"stackoverflow"}
	name += {"stackunderflow"}
	name += {"syntaxerror"}
	name += {"timeout"}
	name += {"typecheck"}
	name += {"undefined"}
	name += {"undefinedfilename"}
	name += {"undefinedresource"}
	name += {"undefinedresult"}
	name += {"unmatchedmark"}
	name += {"unregistered"}
	name += {"VMerror"}

	# If color is not defined for keyword, default color is used.
	# color = "#0000ff"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
    }

    # preprocessor: no

    line_comment {
	# Because multiple line comment leaders can be defined,
	# use an index for each of them.
	1 = "%"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    comment {
	# Because multiple pairs of comment delimiters can be defined,
	# use a index for each of them.
	#1 { begin = "/*"; end = "*/" }
	# If color is not defined for comment, default color is used.
	# color = "#008000"
    }

    string {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "("; end = ")" }
	# If color is not defined for string, default color is used.
	# color = "#008000"
    }

    # character: no

    integer {
	# Support hex integer?
	# hex = true
	# Case-sensitive for integer suffix? Default is true.
	# case_sensitive = true
	# decimal_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# hex_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    float {
	# Support scientific float?
	# scientific = true
	# Case-sensitive for float suffix? Default is true.
	# case_sensitive = false
	# suffix = {"f", "l", "fl", "fl"}
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }

    customized {
	pattern = {"/*"}
	# More customized stuff.
	# If auto-completion is not explicitly specified, it is true
	# by default
	# autocomplete = false
	# If color is not defined for customized items, default color is used.
	color = "#004080"
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
	# grab_prototype = true

	# If to show function prototype when user types in.
	# Default setting is false.
	# show_prototype = true

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
	# name = {"main"}
	# name += {"strcasecmp"}
	# More stuff from library for auto-completion
	
	# More stuff from GHS-library for auto-completion
    }
}
