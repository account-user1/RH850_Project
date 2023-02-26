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
	name = "Perl"
	description = "Perl"
	# File extensions for the language
	extension = {"p", "pl", "ph", "pm"}

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
	# Don't treat \ as separator, because it is used in regular
	# expression.
	# Also don't treat < and > as separator.
	separator = "`\"+-*/=:,;\'\t()[]^%!~|& {}.?"
    
	# Escape sequence leader: one character(like the one in C).
	escape = "\\"
    }

    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	name = {"__FILE__"}
	name += {"__LINE__"}
	name += {"__PACKAGE__"}
	name += {"__DATA__"}
	name += {"__END__"}
	name += {"AUTOLOAD"}
	name += {"and"}
	name += {"abs"}
	name += {"alarm"}
	name += {"atan2"}
	name += {"accept"}
	name += {"BEGIN"}
	name += {"bless"}
	name += {"bind"}
	name += {"binmode"}
	name += {"CORE"}
	name += {"CHECK"}
	name += {"cmp"}
	name += {"chr"}
	name += {"cos"}
	name += {"chop"}
	name += {"close"}
	name += {"chdir"}
	name += {"chomp"}
	name += {"chmod"}
	name += {"chown"}
	name += {"crypt"}
	name += {"chroot"}
	name += {"caller"}
	name += {"connect"}
	name += {"closedir"}
	name += {"continue"}
	name += {"DESTROY"}
	name += {"do"}
	name += {"die"}
	name += {"dump"}
	name += {"delete"}
	name += {"defined"}
	name += {"dbmopen"}
	name += {"dbmclose"}
	name += {"EQ"}
	name += {"END"}
	name += {"eq"}
	name += {"eof"}
	name += {"exp"}
	name += {"else"}
	name += {"exit"}
	name += {"eval"}
	name += {"exec"}
	name += {"each"}
	name += {"elsif"}
	name += {"exists"}
	name += {"elseif"}
	name += {"endgrent"}
	name += {"endpwent"}
	name += {"endnetent"}
	name += {"endhostent"}
	name += {"endservent"}
	name += {"endprotoent"}
	name += {"for"}
	name += {"fork"}
	name += {"fcntl"}
	name += {"flock"}
	name += {"format"}
	name += {"fileno"}
	name += {"foreach"}
	name += {"formline"}
	name += {"GT"}
	name += {"GE"}
	name += {"getppid"}
	name += {"getpgrp"}
	name += {"getpwent"}
	name += {"getpwnam"}
	name += {"getpwuid"}
	name += {"getpeername"}
	name += {"getprotoent"}
	name += {"getpriority"}
	name += {"getprotobyname"}
	name += {"getprotobynumber"}
	name += {"gethostbyname"}
	name += {"gethostbyaddr"}
	name += {"gethostent"}
	name += {"getnetbyname"}
	name += {"getnetbyaddr"}
	name += {"getnetent"}
	name += {"getservbyname"}
	name += {"getservbyport"}
	name += {"getservent"}
	name += {"getsockname"}
	name += {"getsockopt"}
	name += {"getgrent"}
	name += {"getgrnam"}
	name += {"getgrgid"}
	name += {"getlogin"}
	name += {"getc"}
	name += {"gt"}
	name += {"ge"}
	name += {"grep"}
	name += {"goto"}
	name += {"glob"}
	name += {"gmtime"}
	name += {"hex"}
	name += {"INIT"}
	name += {"if"}
	name += {"int"}
	name += {"index"}
	name += {"ioctl"}
	name += {"join"}
	name += {"keys"}
	name += {"kill"}
	name += {"LT"}
	name += {"LE"}
	name += {"lt"}
	name += {"le"}
	name += {"lc"}
	name += {"log"}
	name += {"last"}
	name += {"link"}
	name += {"lock"}
	name += {"local"}
	name += {"lstat"}
	name += {"length"}
	name += {"listen"}
	name += {"lcfirst"}
	name += {"localtime"}
	name += {"m"}
	name += {"my"}
	name += {"map"}
	name += {"mkdir"}
	name += {"msgctl"}
	name += {"msgget"}
	name += {"msgrcv"}
	name += {"msgsnd"}
	name += {"NE"}
	name += {"next"}
	name += {"ne"}
	name += {"not"}
	name += {"no"}
	name += {"or"}
	name += {"ord"}
	name += {"oct"}
	name += {"our"}
	name += {"open"}
	name += {"opendir"}
	name += {"pop"}
	name += {"pos"}
	name += {"push"}
	name += {"pack"}
	name += {"pipe"}
	name += {"print"}
	name += {"printf"}
	name += {"package"}
	name += {"prototype"}
	name += {"q"}
	name += {"qr"}
	name += {"qq"}
	name += {"qw"}
	name += {"qx"}
	name += {"quotemeta"}
	name += {"ref"}
	name += {"read"}
	name += {"rand"}
	name += {"recv"}
	name += {"redo"}
	name += {"rmdir"}
	name += {"reset"}
	name += {"return"}
	name += {"rename"}
	name += {"rindex"}
	name += {"require"}
	name += {"reverse"}
	name += {"readdir"}
	name += {"readlink"}
	name += {"readline"}
	name += {"readpipe"}
	name += {"rewinddir"}
	name += {"s"}
	name += {"scalar"}
	name += {"seek"}
	name += {"send"}
	name += {"semop"}
	name += {"select"}
	name += {"semctl"}
	name += {"semget"}
	name += {"setpgrp"}
	name += {"seekdir"}
	name += {"setpwent"}
	name += {"setgrent"}
	name += {"setnetent"}
	name += {"setsockopt"}
	name += {"sethostent"}
	name += {"setservent"}
	name += {"setpriority"}
	name += {"setprotoent"}
	name += {"shift"}
	name += {"shmctl"}
	name += {"shmget"}
	name += {"shmread"}
	name += {"shmwrite"}
	name += {"shutdown"}
	name += {"sin"}
	name += {"sleep"}
	name += {"sort"}
	name += {"socket"}
	name += {"socketpair"}
	name += {"split"}
	name += {"sprintf"}
	name += {"splice"}
	name += {"sqrt"}
	name += {"srand"}
	name += {"stat"}
	name += {"study"}
	name += {"substr"}
	name += {"sub"}
	name += {"system"}
	name += {"symlink"}
	name += {"syscall"}
	name += {"sysopen"}
	name += {"sysread"}
	name += {"sysseek"}
	name += {"syswrite"}
	name += {"tr"}
	name += {"tie"}
	name += {"tell"}
	name += {"tied"}
	name += {"time"}
	name += {"times"}
	name += {"telldir"}
	name += {"truncate"}
	name += {"uc"}
	name += {"use"}
	name += {"undef"}
	name += {"until"}
	name += {"untie"}
	name += {"utime"}
	name += {"umask"}
	name += {"unless"}
	name += {"unpack"}
	name += {"unlink"}
	name += {"unshift"}
	name += {"ucfirst"}
	name += {"values"}
	name += {"vec"}
	name += {"warn"}
	name += {"wait"}
	name += {"while"}
	name += {"write"}
	name += {"waitpid"}
	name += {"wantarray"}
	name += {"x"}
	name += {"xor"}
	name += {"y"}

	# Some constants
	name += {"STDOUT"}
	name += {"STDERR"}
	name += {"STDIN"}
	# Other special stuff
	name += {"$_"}
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
	# 1 { begin = "<comment>"; end = "</comment>" }
	# If color is not defined for comment, default color is used.
	# color = "#008000"
    }

    string {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "\""; end = "\""; span_line = true}
	2 { begin = "'"; end = "'"; span_line = true}
	# If color is not defined for string, default color is used.
	# color = "#008000"
    }

    character {
	# Because multiple pair of string delimiters can be defined,
	# use an index for each of them.
	1 { begin = "`"; end = "`"}
	# If color is not defined for character, default color is used.
	# color = "#008000"
    }

    block {
	1 { begin = "<<EOF"; end = "EOF" }
	2 { begin = "\x01="; end = "\x01=cut" }
	# If color is not defined for block, default color is used.
	# color = "#0080a0"
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
	#scientific = true
	# Case-sensitive for float suffix? Default is true.
	#case_sensitive = false
	# If color is not defined for float, default color is used.
	# color = "#008000"
    }

    customized {
	#pattern = {"EOF"}
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

