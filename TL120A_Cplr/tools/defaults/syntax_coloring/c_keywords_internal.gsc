# The file defines the C's keywords.

language {
    keyword {
	# You can define keyword name list, the color to show the
	# keywords(optional), and indicate if to auto-complete keywords
	# when the auto-completion mechanism is on.
	# C-keywords
	name += {"do"}
	name += {"if"}
	name += {"for"}
	name += {"int"}
	name += {"auto"}
	name += {"case"}
	name += {"char"}
	name += {"else"}
	name += {"enum"}
	name += {"goto"}
	name += {"long"}
	name += {"void"}
	name += {"break"}
	name += {"const"}
	name += {"float"}
	name += {"short"}
	name += {"union"}
	name += {"while"}
	name += {"double"}
	name += {"extern"}
	name += {"return"}
	name += {"signed"}
	name += {"sizeof"}
	name += {"static"}
	name += {"struct"}
	name += {"switch"}
	name += {"default"}
	name += {"typedef"}
	name += {"continue"}
	name += {"register"}
	name += {"unsigned"}
	name += {"volatile"}
	# Customized keywords, like
	name += {"true"}
	name += {"false"}
        # C99
        name += {"inline"}
        name += {"restrict"}
        name += {"_Bool"}
        name += {"_Complex"}
        name += {"_Imaginary"}
    }
}
