# The file is auto-grabbed on Mon Jul 11 14:38:04 2011, 
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
	name = "GHS-INT-CONFIG"
	description = "GHS INTEGRITY Configuration"
	# File extensions for the language
	extension = {"int"}

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

	# Separator of the language to delimit syntax tokens.
	# '\\' and '/' are used in file name, so don't use them as
	# separators.
	separator = "\"-*<=>:,;\'\t()[]^%!~|& {}.?"

	# Escape sequence leader: one character(like the one in C).
	# escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	name += {"activity"}
	name += {"address"}
	name += {"addressspace"}
	name += {"addressspacealignment"}
	name += {"addressspacelist"}
	name += {"alarm"}
	name += {"alignmentvalue"}
	name += {"architectedpagesize"}
	name += {"arguments"}
	name += {"attribute"}
	name += {"backgroundmaxpriority"}
	name += {"boottablelength"}
	name += {"bspmemoryregion"}
	name += {"clear"}
	name += {"clock"}
	name += {"collection"}
	name += {"connection"}
	name += {"crcaddress"}
	name += {"crcendlocation"}
	name += {"crcexcluderange"}
	name += {"crctableaddress"}
	name += {"createextravirtualmemoryregions"}
	name += {"datatracebuffer"}
	name += {"datatracebuffersize"}
	name += {"defaultheapextensionreservedsize"}
	name += {"defaultheapsize"}
	name += {"defaultkernelfilename"}
	name += {"defaultmaxpriority"}
	name += {"defaultmaxweight"}
	name += {"defaultmemoryregionsize"}
	name += {"defaultpriority"}
	name += {"defaultstacklength"}
	name += {"defaultstartit"}
	name += {"defaultweight"}
	name += {"endaddressspace"}
	name += {"endaddressspacelist"}
	name += {"endclock"}
	name += {"endcollection"}
	name += {"endcrcexcluderange"}
	name += {"endiospace"}
	name += {"endkernel"}
	name += {"endmoduleoptions"}
	name += {"endobject"}
	name += {"endpartition"}
	name += {"endpartitionschedule"}
	name += {"endprocessor"}
	name += {"endrelocatable"}
	name += {"endschedule"}
	name += {"endtarget"}
	name += {"endtask"}
	name += {"enduserdata"}
	name += {"enduserdatafile"}
	name += {"endvariables"}
	name += {"entrypoint"}
	name += {"exectime"}
	name += {"execute"}
	name += {"extendedmemorypoolsize"}
	name += {"fastpacketcache"}
	name += {"filename"}
	name += {"fillunusedvalue"}
	name += {"flashbank"}
	name += {"flashbank0crcendlocation"}
	name += {"flashbank0crcstartaddress"}
	name += {"flashbank0endaddress"}
	name += {"flashbank0startaddress"}
	name += {"flashbank1crcendlocation"}
	name += {"flashbank1crcstartaddress"}
	name += {"flashbank1endaddress"}
	name += {"flashbank1indicatoraddress"}
	name += {"flashbank1startaddress"}
	name += {"framereleasenotificationname"}
	name += {"framereleasenotificationnumber"}
	name += {"headerfilename"}
	name += {"heapextensionreservedsize"}
	name += {"heapsize"}
	name += {"identification"}
	name += {"initialkernelobjects"}
	name += {"initialvalue"}
	name += {"inlogfile"}
	name += {"interrupt"}
	name += {"iocoherent"}
	name += {"iodevice"}
	name += {"iospace"}
	name += {"isversionid"}
	name += {"kernel"}
	name += {"language"}
	name += {"length"}
	name += {"library"}
	name += {"link"}
	name += {"logfilename"}
	name += {"majorframeperiod"}
	name += {"mapto"}
	name += {"maximumaddress"}
	name += {"maximumdeviceaddress"}
	name += {"maximumdownloadaddress"}
	name += {"maximumiospaceaddress"}
	name += {"maximumpriority"}
	name += {"maximumromaddress"}
	name += {"maximumstorageaddress"}
	name += {"maximumweight"}
	name += {"memorypoolmemoryregionname"}
	name += {"memorypoolsize"}
	name += {"memoryprotectionenabled"}
	name += {"memoryregion"}
	name += {"minimumaddress"}
	name += {"minimumdeviceaddress"}
	name += {"minimumdownloadaddress"}
	name += {"minimumiospaceaddress"}
	name += {"minimumromaddress"}
	name += {"minimumstorageaddress"}
	name += {"moduleoptions"}
	name += {"name"}
	name += {"numberofobjects"}
	name += {"object"}
	name += {"offset"}
	name += {"oneway"}
	name += {"onewaysend"}
	name += {"optional"}
	name += {"orderingtype"}
	name += {"otherobjectname"}
	name += {"otherobjectnumber"}
	name += {"paged"}
	name += {"pagesize"}
	name += {"partition"}
	name += {"partitionreleasenotificationname"}
	name += {"partitionreleasenotificationnumber"}
	name += {"partitionschedule"}
	name += {"preferredpagesize"}
	name += {"priority"}
	name += {"processor"}
	name += {"protectiontableaddress"}
	name += {"protectiontableentries"}
	name += {"protectiontablefilename"}
	name += {"read"}
	name += {"readexecuteindependent"}
	name += {"readtime"}
	name += {"relocatable"}
	name += {"schedule"}
	name += {"section"}
	name += {"semaphore"}
	name += {"settime"}
	name += {"shadow"}
	name += {"sizeofaddress"}
	name += {"stacklength"}
	name += {"stackmemoryregionname"}
	name += {"stackmemoryregionnumber"}
	name += {"stacksegment"}
	name += {"stacksize"}
	name += {"start"}
	name += {"startit"}
	name += {"substring"}
	name += {"target"}
	name += {"task"}
	name += {"timeslice"}
	name += {"uncacheable"}
	name += {"uninitializedobjects"}
	name += {"unmapped"}
	name += {"unmappedlibrary"}
	name += {"userdata"}
	name += {"userdatafile"}
	name += {"value"}
	name += {"variables"}
	name += {"volatile"}
	name += {"weight"}
	name += {"write"}
	name += {"writethroughwithallocate"}
	name += {"writethroughwithoutallocate"}
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
	1 = "#"
	# If color is not defined for line_comment, default color is used.
	# color = "#008000"
    }

    comment {
	# Because multiple pairs of comment delimiters can be defined,
	# use a index for each of them.
	# 1 { begin = "/*"; end = "*/" }
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

# If don't want to color integer, change the following 1 into 0.
%if 1
    integer {
	# Support hex integer?
	hex = true
	# Case-sensitive for integer suffix? Default is true.
	# case_sensitive = true
	# decimal_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# hex_suffix = {"l", "u", "lu", "ul", "llu", "lul", "ull"}
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }
%endif

# If don't want to color float, change the following 1 into 0.
%if 1
    float {
	# Support scientific float?
	# scientific = true
	# Case-sensitive for float suffix? Default is true.
	# case_sensitive = false
	# suffix = {"f", "l", "fl", "fl"}
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }
%endif

    customized {
	# Values for the keywords
	pattern += {"DynamicDownload"}
	pattern += {"__"}
	pattern += {"__ghs_extendedmemorypoolphysicalmemoryregions"}
	pattern += {"__ghs_extendedmemorypoolphysicalmemoryregionsarraymax"}
	pattern += {"__ghs_named_object_table_"}
	pattern += {"__ghs_preferredpagesize"}
	pattern += {"_start"}
	pattern += {"activity"}
	pattern += {"ada"}
	pattern += {"addressspace"}
	pattern += {"as"}
	pattern += {"aslist"}
	pattern += {"binary"}
	pattern += {"bspmemoryregion"}
	pattern += {"c"}
	pattern += {"c++"}
	pattern += {"clock"}
	pattern += {"collection"}
	pattern += {"connection"}
	pattern += {"counting"}
	pattern += {"default"}
	pattern += {"false"}
	pattern += {"fifo"}
	pattern += {"highestlocker"}
	pattern += {"highrestimer"}
	pattern += {"image"}
	pattern += {"initial"}
	pattern += {"intbinfo_copy"}
	pattern += {"inteinfo_copy"}
	pattern += {"iodevice"}
	pattern += {"iospace"}
	pattern += {"kernel"}
	pattern += {"kernelspace"}
	pattern += {"link"}
	pattern += {"main"}
	pattern += {"memregion"}
	pattern += {"none"}
	pattern += {"null"}
	pattern += {"partition"}
	pattern += {"primary"}
	pattern += {"priority"}
	pattern += {"ps"}
	pattern += {"realtimeclock"}
	pattern += {"semaphore"}
	pattern += {"standardtick"}
	pattern += {"task"}
	pattern += {"true"}
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
