# The file defines the GHS-style preprocessors, which are shared by some
# GHS internal languages.

language {

    general {
	# Is the language case-sensitive? If no explicit specification
	# for it, the default value is true.
	case_sensitive = true
    }

    preprocessor {
	name = {"%if"}
	name += {"%else"}
	name += {"%elif"}
	name += {"%elsif"}
	name += {"%elseif"}
	name += {"%endif"}
	name += {"%ifdef"}
	name += {"%ifndef"}
	name += {"%define"}
	name += {"%undef"}
	name += {"%info"}
	name += {"%error"}
	name += {"%warning"}
	name += {"%include"}
	name += {"%eval"}
	name += {"defined"}
	name += {"notempty"}
	name += {"streq"}
	name += {"env"}

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
