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
