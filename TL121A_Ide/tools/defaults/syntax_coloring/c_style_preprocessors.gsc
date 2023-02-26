# This is now just a wrapper around c_style_preprocessors_internal.gsc for
# backwards compatibility with INTEGRITY 10 which expects to find
# c_style_preprocessors.gsc in the ide installation rather than the toolchain.

%if defined(__TOOLS_DEFAULTS_DIR__)
% include "${__TOOLS_DEFAULTS_DIR__}/syntax_coloring/c_style_preprocessors_internal.gsc"
%elsif file_exists("${__DIR__}/c_style_preprocessors_internal.gsc")
% include "${__DIR__}/c_style_preprocessors_internal.gsc"
%else

# Contents of c_style_preprocessors_internal.gsc as of 11/10/2010 in case
# neither of the above files can be found.


# The file defines the C-style preprocessors, which are shared by a lot of
# languages supported by MULTI Editor for syntax-coloring purpose.

language {

    preprocessor {
	name = {"#if"}
	name += {"#else"}
	name += {"#elif"}
	name += {"#endif"}
	name += {"#ifdef"}
	name += {"#ifndef"}
	name += {"#define"}
	name += {"#undef"}
	name += {"defined"}
	name += {"#include"}
	name += {"#error"}
	name += {"#warning"}
	name += {"#line"}
	name += {"#pragma"}
	
	# If color is not defined for preprocessor, default color is used.
	# color = "#008080"
	# If auto-completion is not explicitly specified, it is true
	# by default.
	# autocomplete = false
	# Is the preprocessor case-sensitive? If no explicit specification
	# for it, the default value is the language's case-sensitive
	# attribute.
    }
}


%endif
