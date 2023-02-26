# Version of the language definition syntax used in the file
version = "1"

%include "c_style_preprocessors_internal.gsc"
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
	name = "GHS-Linker"
	description = "GHS Linker Language"
	extension = {"ld", "lnk"}

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
	# "." is not treated as separator
	separator = "\\\"+-*/<=>:,;\'\n\r\t()[]^%!~|& {}?"

	# Escape sequence leader: one character(like the one in C).
	# escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.

	name += {"sec"}
	name += {"sections"}
	name += {"constants","defaults"}
	name += {"memory"}
	name += {"option"}
	# Expressions
	name += {"absolute"}
	name += {"addr"}
	name += {"align"}
	name += {"sizeof"}
	name += {"pack_or_align"}
	name += {"min"}
	name += {"max"}
	name += {"error"}
	name += {"isdefined"}
	name += {"final"}
	name += {"endaddr"}
	name += {"memaddr"}
	name += {"memendaddr"}
	name += {"memsizeof"}
	name += {"origin"}
	name += {"length"}
	# Section attributes
	name += {"abs"}
	name += {"clear"}
	name += {"noclear"}
	name += {"pad"}
	name += {"rom"}
	name += {"crom"}
	name += {"isrom"}
	name += {"min_size"}
	name += {"min_endaddress"}
	name += {"max_size"}
	name += {"max_endaddress"}
	name += {"at"}
	name += {"load"}
	name += {"noload"}
	name += {"nochecksum"}
	name += {"rom_nocopy"}
	name += {"rom_copy"}
	# Customized keywords

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
	2 = "#"
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
	case_sensitive = false
	decimal_suffix = {"k", "m"}
	hex_suffix = {"k", "m"}
	# If color is not defined for integer, default color is used.
	# color = "#008000"
    }

    float {
	# Support scientific float?
	scientific = true
	# Case-sensitive for float suffix? Default is true.
	# case_sensitive = false
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }

    customized {
        # special symbols (for arch with no extra _)
	pattern += {"__ghs_ramstart"}
	pattern += {"__ghs_ramend"}
	pattern += {"__ghs_romstart"}
	pattern += {"__ghs_romend"}
	pattern += {"__ghs_rambootcodestart"}
	pattern += {"__ghs_rambootcodeend"}
	pattern += {"__ghs_rombootcodestart"}
	pattern += {"__ghs_rombootcodeend"}
	pattern += {"__ghs_after_romcopy"}
	pattern += {"__ghs_main"}
        # special symbols (for arch with extra _)
	pattern += {"___ghs_ramstart"}
	pattern += {"___ghs_ramend"}
	pattern += {"___ghs_romstart"}
	pattern += {"___ghs_romend"}
	pattern += {"___ghs_rambootcodestart"}
	pattern += {"___ghs_rambootcodeend"}
	pattern += {"___ghs_rombootcodestart"}
	pattern += {"___ghs_rombootcodeend"}	
	pattern += {"___ghs_after_romcopy"}	
	pattern += {"___ghs_main"}
	# constants
	pattern += {"heap_reserve"}
	pattern += {"stack_reserve", "istack_reserve"}
	pattern += {"free_mem_reserve"}
	pattern += {"eventlog_reserve"}
	pattern += {"nfspool_reserve"}
        # normal memory segments
	pattern += {"dram_memory", "dram_rsvd1", "dram_rsvd2", "dram_rsvd3"}
	pattern += {"flash_memory", "flash_rsvd1", "flash_rsvd2", "flash_rsvd3"}
	pattern += {"dram_reset","dram_vector","alt_reset","alt_vector"}
	pattern += {"zero_memory", "sda_memory", "stack_memory"}
	pattern += {"ext_rom", "ext_rom_rsvd1", "ext_rom_rsvd2", "ext_rom_rsvd3"}
	pattern += {"sram_memory", "sram_rsvd1", "sram_rsvd2", "sram_rsvd3"}
	pattern += {"zda_memory", "zda_rsvd1", "zda_rsvd2", "zda_rsvd3"}
        # normal sections
	pattern += {".rodata"}
	pattern += {".text"}
	pattern += {".vletext"}
	pattern += {".boottext"}
	pattern += {".rodata1"}
	pattern += {".data"}
	pattern += {".data1"}
	pattern += {".data2"}
	pattern += {".sdata"}
	pattern += {".sdata2"}
	pattern += {".sbss"}
	pattern += {".bss"}
	pattern += {".startup"}
	pattern += {".syscall"}
	pattern += {".heap"}
	pattern += {".stack", ".istack"}
	pattern += {".eventlog"}
	pattern += {".free_mem"}
	pattern += {".nfspool"}
	pattern += {".tdata"}
	pattern += {".zdata"}
	pattern += {".zbss"}
	pattern += {".rozdata"}
	pattern += {".rosdata"}
	pattern += {".profile"}
	pattern += {".reset"}
	pattern += {".vector"}
	pattern += {".PPC.EMB.sdata0"}
	pattern += {".PPC.EMB.sbss0"}
        # More normal sections
	pattern += {".intercall"}
	pattern += {".interfunc"}
	pattern += {".secinfo"}
	pattern += {".fixaddr"}
	pattern += {".fixtype"}
	pattern += {".inmemtm"}
        # Base sections
	pattern += {".picbase"}
	pattern += {".pidbase"}
	pattern += {".sdabase"}
	pattern += {".robase"}
	
        # ROM/CROM sections
	pattern += {".ROM.text", ".CROM.text"}
	pattern += {".ROM.vletext", ".CROM.vletext"}
	pattern += {".ROM.boottext"}
	pattern += {".ROM.reset", ".CROM.reset"}
	pattern += {".ROM.vector", ".CROM.vector"}
	pattern += {".ROM.syscall", ".CROM.syscall"}
	pattern += {".ROM.data", ".CROM.data"}
	pattern += {".ROM.tdata", ".CROM.tdata"}
	pattern += {".ROM.zdata", ".CROM.zdata"}
	pattern += {".ROM.rozdata", ".CROM.rozdata"}
	pattern += {".ROM.rosdata", ".CROM.rosdata"}
	pattern += {".ROM.sdata", ".CROM.sdata"}
	pattern += {".ROM.rosdata", ".CROM.rosdata"}
	pattern += {".ROM.profile", ".CROM.profile"}
	pattern += {".ROM.PPC.EMB.sdata0",".CROM.PPC.EMB.sdata0"}
	pattern += {".ROM.PPC.EMB.sbss0",".CROM.PPC.EMB.sbss0"}

	# Flash sections
	pattern += {".flashdevchipbase",".flashdevstart", ".flashdevend"}
	
	# More customized stuff.
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
