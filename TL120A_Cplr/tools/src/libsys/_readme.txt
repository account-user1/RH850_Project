
	Green Hills Software Low-Level System Library Source

These source files contain low level routines that can be customized for the
user's target environment.

The Green Hills Building Applications manual contains a section, "Customizing
the Run-Time Environment Libraries and Object Modules," that describes
in detail the runtime environment and library system implemented by these
modules.

These source files are built into the libsys.a, which is linked with the
application when building a stand-alone embedded application.

libsys.a is the low-level system library. This library includes
routines such as open(), write(), and exit() which provide a basic
runtime environment.
