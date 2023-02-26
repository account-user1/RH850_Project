# The file defines the C-library functions.

language {
    autocomplete {
	# String functions
	name += {"strcasecmp"}
	name += {"strncasecmp"}
	name += {"strcat"}
	name += {"strncat"}
	name += {"strlcat"}
	name += {"strchr"}
	name += {"strrchr"}
	name += {"strcmp"}
	name += {"strncmp"}
	name += {"strcpy"}
	name += {"strncpy"}
	name += {"strlcpy"}
	name += {"strcspn"}
	name += {"strspn"}
	name += {"strdup"}
	name += {"strlen"}
	name += {"strpbrk"}
	name += {"strstr"}
	# String conversion functions
	name += {"strtok"}
	name += {"strtok_r"}
	name += {"strtol"}
	name += {"strtoll"}
	name += {"atol"}
	name += {"atoll"}
	name += {"atoi"}
	name += {"lltostr"}
	name += {"ulltostr"}
	# I/O functions
	name += {"printf"}
	name += {"fprintf"}
	name += {"sprintf"}
	name += {"snprintf"}
	name += {"prefixrput"}
	name += {"prefixwput"}
	name += {"put"}
	name += {"get"}
	name += {"read"}
	name += {"close"}
	name += {"open"}
	name += {"tell"}
	name += {"fopen"}
	name += {"fclose"}
	name += {"fread"}
	name += {"ftell"}
	name += {"ftello"}
	# Memory functions
	name += {"memccpy"}
	name += {"memchr"}
	name += {"memcmp"}
	name += {"memcpy"}
	name += {"memmove"}
	name += {"memset"}
	# More stuff from C-library for auto-completion
    }
}
