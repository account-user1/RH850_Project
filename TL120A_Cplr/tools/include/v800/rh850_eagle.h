
/*
 *                          Copyright 2011-2013
 *                         Green Hills Software                      
 *
 *    This program is the property of Green Hills Software, its
 *    contents are proprietary information and no part of it is to be
 *    disclosed to anyone except employees of Green Hills Software,
 *    or as agreed in writing signed by the President of Green Hills
 *    Software.
 *
 */

//==========================================================================//
//									    //
//		E A G L E   A P I   D O C U M E N T A T I O N		    //
//									    //
//==========================================================================//
//
//======================//
// INSTRUMENTATION TAGS //
//======================//
//
// An instrumentation 'tag' is a user-selected symbol that identifies,
// categorizes and provides control over instrumentation calls throughout
// your application. Tag names must begin with a letter and contain only
// letters, digits and underscores. Tag names are case sensitive.
// By convention, we recommend you organized your tag namespace hierarchically,
// delimiting levels with a double underscore and separating words within a
// level with a single underscore (e.g., WHITE_HOUSE__VISITOR_COUNT).
// The number of levels is up to you, but you must limit your names to 31
// characters or fewer. Names that begin or end with an underscore are reserved.
//
// The primary purpose of a tag is to control whether or not data will
// be recorded. If a tag is enabled, instrumentation calls that use that
// tag will record data when they are executed. If a tag is disabled,
// instrumentation calls that use that tag will neither record data, nor
// evaluate their arguments.
//
// The secondary purpose of a tag is to name a variable you wish to track.
// Care should be exercised when using the same tag for multiple
// instrumentation calls. If a tag is used only to control printing
// messages, re-using a tag name that appears elsewhere will have the
// expected behavior. However, if you use a tag name to track a variable,
// the tag name serves also as the variable name. In this way you can
// report changes to a single logical variable in multiple locations within
// your application. If your intention was for two instrumentation calls
// to track two distinct variables, then you must use distinct tag names.
// 
//=======================//
// CONFIGURATION OPTIONS //
//=======================//
//
// All instrumentation is enabled by default. If you do not take any special
// action, code will be generated for every call you make to the EAGLE API.
//
// If you want to disable instrumentation, but still have the option of
// turning it on at run-time, you should define EAGLE_CONFIG_LOGGING to be 1.
// This configuration generates instrumentation, but leaves instrumentation
// in a latent state. If you want to remove all instrumentation completely,
// but do not want to delete all of the EAGLE API calls from your souce code,
// you may define EAGLE_CONFIG_LOGGING to be 0. This is the same as placing
// #if 0's around your EAGLE API calls.
//
//		     EAGLE_CONFIG_LOGGING Defined Values
//
//  VALUE  CODE	  INSTRUMENTATION
//  ----+-------+-----------------------------------------------------------
// |  0	|  NO	| No code generated					    |
// |  1	|  YES	| Generated but initially disabled			    |
// |  2	|  YES	| Generated and initially enabled (this is the default)	    |
// |  3	|  YES	| Generated, initial state determined on a per-tag basis    |
//  ----+-------+-----------------------------------------------------------
//
// The mnemonic names for these values are: EAGLE_LOGGING_DISABLE (0),
// EAGLE_LOGGING_OFF_BY_DEFAULT (1), EAGLE_LOGGING_ON_BY_DEFAULT (2), and
// EAGLE_LOGGING_USE_TAG_NAMES (3).
//
// Advanced users may choose to selectively enable and disable instrumentation
// on a per-tag basis. To do this, define EAGLE_CONFIG_LOGGING to be 3. You
// must also specify the initial state of every tag used in the current source
// file. Failure to do so will result in a compilation error. To define a tag,
// add a line that takes the form
//
//	#define EAGLE_TAG_<tag_name> <initial_state>
//
// where <tag_name> is the name of your tag as it appears in EAGLE API calls,
// and <initial_state> is either zero (disabled) or non-zero (enabled). This
// configuration is also useful if you wish to manage your tag names and detect
// misspelled tags at compile time.
//
// Your instrumentation configuration does not need to be consistent across
// your entire application. You may vary your settings for each compiled source
// file.
//
// If you want full printf-style logging, you must #include <stdio.h> before
// including <rh850_eagle.h>.
//
// Once you have defined your configuration and optionally included <stdio.h>,
// you must include <rh850_eagle.h>.
//
// EXAMPLES:
//
// To get normal instrumentation, simply include <rh850_eagle.h>:
//
//	#include <rh850_eagle.h>
//
// To get full printf-style logging also, include <stdio.h> first:
//
//	#include <stdio.h>
//	#include <rh850_eagle.h>
//
// To suppress instrumentation code from being generated, specify
// -DEAGLE_CONFIG_LOGGING=0 in your build file, or add the following inside
// your source code:
//
//	#define EAGLE_CONFIG_LOGGING 0
//	#include <rh850_eagle.h>
//
// The example code fragment below demonstrates use of the advanced per-tag
// configuration option.
//
//	/* Define per-tag initial states */
//	#define EAGLE_TAG_ENGINE_GAS_MILEAGE	1
//	...
//
//	#define EAGLE_CONFIG_LOGGING		3
//	#include <rh850_eagle.h>
//	
//	void update_front_display_fuel_economy(uint8_t mpg)
//	{
//	    EAGLE_LogU32(ENGINE_GAS_MILEAGE, mpg);
//	    ...
//	}
//
// If you want to override the default configuration, but do not want to
// modify any of your exiting source files, you may specify a configuration
// file that EAGLE will include towards the top of <rh850_eagle.h>. This is
// very useful if you choose to use per-tag configuration or if you want to
// enable prinf()-style logging. For example, if you create a file named
// "my_config.h" which contains the following:
//
//	#define EAGLE_CONFIG_LOGGING 		3
//	#define EAGLE_TAG_TRAINS		1
//	#define EAGLE_TAG_PLANES		1
//	#define EAGLE_TAG_AUTOMOBILES		0
//	#include <stdio.h>
//
// Then the source code below could be enabled without modifying any files
// by defining -DEAGLE_CONFIG_FILE="my_config.h" on the command line:
//
//	#include <rh850_eagle.h>
//
//	int train_counter = 0;
//
//	void observe_train_passing(void)
//	{
//	    EAGLE_LogPrintf(TRAINS, "Train %d just passed", ++train_counter);
//	}
//
//================//
// BASIC USER API //
//================//
//
// Users are encouraged to use the BASIC USER API as described here. The
// ADVANCED USER API described further below is intended for use with
// automatically generated code and advanced users with unusual requirements.
//
// Instrumentation is implemented using complex preprocessor macros, compiler
// intrinsics, inline assembly and other advanced compiler, assembler and linker 
// features. When something goes wrong, the tools warnings or errors will be 
// difficult to understand. We apologize in advance and encourage you to not
// make any mistakes. :-)
//
// Most API calls follow this format:
//
//	<function_name>(<tag_name>, <expression>);
//
// For example,
//
//	EAGLE_LogPrint(POST__PROGRESS, "Begin Memory Test");
//	EAGLE_LogU32(POST__STATS__DRAM_Size, Get_DRAM_Size());
//
// The <function_name> indicates the type of data being recorded, and the
// number and type of arguments you may pass to the function.
//
// The <tag_name> is user-selected tag name as described above in the
// above section titled INSTRUMENTATION TAGS.
//
// Because most API calls are implemented using the C preprocess, your
// <expression> will be evaluated ONLY if the tag is enabled at the time
// the instrumentation call is executed. So similar to assertion statements,
// you must not write code that relies on the expression being evaluated.
// You can, however, rely on the conditional expression evaluation for
// performance considerations.
//
// Printing Messages
// =================
//
// Sometimes all you want to do is record that execution made it to a
// particular source line or that your program has entered some particular
// phase or component of your code. A simple text message can be recorded
// using one of the two instrumentation calls.
//
//	Types of Data		Instrumentation Call
//	=============		=======================
//	one string		EAGLE_LogPrint(tag,message)
//	various types		EAGLE_LogPrintf(tag,format,arg1,arg2...)
//
// Both instrumentation calls take a tag name and a string as their first two
// arguments, and both calls encode data that is meant to be a human readable
// message. However, the performance difference between the two is dramatic.
// EAGLE_Print() is fast and EAGLE_Printf() is relatively slow. At the cost of
// performance, EAGLE_Printf() gives you greater flexibility. For example,
//
//	EAGLE_LogPrint(PHASE, "Start of phase 6");
//	EAGLE_LogPrintf(PHASE, "Start of phase %d", GetCurrentPhase());
//
// NOTE: In order to enable printf-style logging, you must #include <stdio.h>
// before you #include <rh850_eagle.h>. EAGLE_LogPrintf() requires parts of the
// standard I/O library to be pulled into you application. The size and
// performance characteristics may not be suitable to all types of embedded
// programming. In contrast, EAGLE_LogPrint() is suitable for all environments
// and does NOT require <stdio.h> or the standard I/O library.
//
// Tracking Variables
// ==================
//
// Another common practice is to record the different values of a variable over
// time. A 'variable' is any logical property that you wish to monitor as it
// changes. A variable must be one of the basic types supported by EAGLE,
// which include: integer (either 32- or 64-bit), pointer, string or boolean.
// You must select a tag name that uniquely identifies your variable within
// your application. Multiple instrumentation calls can report changes to a
// logical variable by using its unique tag name, but care should be taken to
// remain consistent about the underlying basic type.
//
//	Basic Types		Instrumentation Call
//	===========		=======================
//	uint32_t		EAGLE_LogU32 (tag,expr)
//	uint64_t		EAGLE_LogU64 (tag,expr)
//	uintptr_t		EAGLE_LogPtr (tag,expr)
//	void*			EAGLE_LogPtr (tag,expr)
//	string			EAGLE_LogStr (tag,expr)
//	boolean			EAGLE_LogBool(tag,expr)
//
// If you wish to log an array element or object field whose value is one
// of the basic types, you may use the indexed versions of the above functions.
// An index may be a uintptr_t or a pointer value.
//
//	Basic Types		Instrumentation Call
//	===========		================================
//	uint32_t		EAGLE_LogNdxU32 (tag,index,expr)
//	uint64_t		EAGLE_LogNdxU64 (tag,index,expr)
//	uintptr_t		EAGLE_LogNdxPtr (tag,index,expr)
//	void*			EAGLE_LogNdxPtr (tag,index,expr)
//	string			EAGLE_LogNdxStr (tag,index,expr)
//	boolean			EAGLE_LogNdxBool(tag,index,expr)
//
// Alignment and Bounds
// ====================
//
// EAGLE instrumentation may copy your data using 32-bit word reads. Bytes
// before and after your data, up to the next 32-bit word boundary may be
// read for data that is not 32-bit word aligned and/or not an even multiple
// of four bytes in length.
// 
// Truncation
// ==========
//
// Value truncation may occur if you pass a value that is too large for the
// basic type you specify. For example,
//
//	void update_national_debt(uint64_t new_debt_value)
//	{
//	    /* Value truncation: someone was optimistic! */
//	    EAGLE_LogU32(NATIONAL_DEBT, new_debt_value);
//	    ...
//	}
//
// Data truncation may also occur if you try to record data that is too long.
//
//	void execute_command(const char* command_string)
//	{
//	    /* Long strings may be truncated */
//	    EAGLE_LogStr(COMMANDS, command_string);
//	    ...
//	}
//

#ifndef _RH850_EAGLE_H
#define _RH850_EAGLE_H

#include <stdint.h>

/****************************************************************************/
/*		C O N F I G U R A T I O N   N A M E S			    */
/****************************************************************************/

#define EAGLE_LOGGING_DISABLED		0
#define EAGLE_LOGGING_OFF_BY_DEFAULT	1
#define EAGLE_LOGGING_ON_BY_DEFAULT	2
#define EAGLE_LOGGING_USE_TAG_NAMES	3

/****************************************************************************/
/*              C O N F I G U R A T I O N   D E F A U L T S                 */
/****************************************************************************/

#ifndef EAGLE_CONFIG_LOGGING
#define EAGLE_CONFIG_LOGGING		EAGLE_LOGGING_ON_BY_DEFAULT
#endif

/****************************************************************************/
/*		C O N F I G U R A T I O N   C H E C K S			    */
/****************************************************************************/

#if   EAGLE_CONFIG_LOGGING == EAGLE_LOGGING_OFF_BY_DEFAULT
#define EAGLE_LOGGING(tag)		(0)
#elif EAGLE_CONFIG_LOGGING == EAGLE_LOGGING_ON_BY_DEFAULT
#define EAGLE_LOGGING(tag)		(1)
#elif EAGLE_CONFIG_LOGGING == EAGLE_LOGGING_USE_TAG_NAMES
#define EAGLE_LOGGING(tag)		(EAGLE_TAG_##tag)
#elif EAGLE_CONFIG_LOGGING != EAGLE_LOGGING_DISABLED
#error EAGLE_CONFIG_LOGGING is out of range.
#endif

/****************************************************************************/
/*		N A M E D   C O N S T A N T S				    */
/****************************************************************************/

#define EAGLE_MAX_LINE			128	/* Max printf() line	    */

/****************************************************************************/
/*		E A G L E  I N T E R N A L S				    */
/****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif
void __DBCP(void);
void __DBPUSH_VAL32(uint32_t);
void __DBPUSH_VAL64(uint64_t);
void __v850_eagle_log_u32(int32_t, const char *, uint32_t);
void __v850_eagle_log_u64(int32_t, const char *, uint64_t);
void __v850_eagle_log_str(int32_t, const char *, const char *);
void __v850_eagle_log_ndx_u32(int32_t, const char *, uint32_t, uint32_t);
void __v850_eagle_log_ndx_u64(int32_t, const char *, uint32_t, uint64_t);
//void __gh_dbpush_string(uintptr_t, const char *, int32_t len);
void __gh_dbpush_string(uintptr_t address, const char *str, int do_index, int index);
#ifdef __cplusplus
}
#endif

#define EAGLE_STRING_0(x)		#x
#define EAGLE_STRING(x)			EAGLE_STRING_0(x)

#define EAGLE_LOG_U32(tag,expr,fmt) __v850_eagle_log_u32(EAGLE_LOGGING(tag), \
	(EAGLE_STRING(tag)" "fmt), (expr))

#define EAGLE_LOG_U64(tag,expr,fmt) __v850_eagle_log_u64(EAGLE_LOGGING(tag), \
	(EAGLE_STRING(tag)" "fmt), (expr))

#define EAGLE_LOG_PTR(tag,expr,fmt) __v850_eagle_log_u32(EAGLE_LOGGING(tag), \
	(EAGLE_STRING(tag)" "fmt), (expr))

#define EAGLE_LOG_BOOL(tag,expr,fmt) __v850_eagle_log_u32(EAGLE_LOGGING(tag), \
	(EAGLE_STRING(tag)" "fmt), (expr))

#define EAGLE_LOG_TEXT(tag,expr,fmt)				\
    do {							\
	void *desc;						\
	if (desc=__ghs_eagle_tag(EAGLE_LOGGING(tag),		\
		(EAGLE_STRING(tag)" "fmt))) {			\
	    __gh_dbpush_string((uintptr_t)desc, (expr), 0, 0);	\
	}							\
    } while(0)

#define EAGLE_LOG_STR(tag, expr, fmt) do { 			\
	if (__builtin_constant_p(expr)) { 			\
	    __v850_eagle_log_str(EAGLE_LOGGING(tag), 		\
	    (EAGLE_STRING(tag)" "fmt), (expr));			\
	} else {						\
	    EAGLE_LOG_TEXT(tag,expr,fmt);			\
	}							\
    } while(0)

#define EAGLE_LOG_PRINT(tag, expr) do { 			\
	if (__builtin_constant_p(expr)) { 			\
	    __v850_eagle_log_str(EAGLE_LOGGING(tag), 		\
	    (EAGLE_STRING(tag) " P"), (expr));			\
	} else {						\
	    EAGLE_LOG_TEXT(tag,expr,"P");			\
	}							\
    } while(0)

#ifdef _STDIO_H
#define EAGLE_LOG_PRINTF(tag,fmt,...)				\
    do {							\
	void* desc;						\
	if (desc=__ghs_eagle_tag(EAGLE_LOGGING(tag),		\
		(EAGLE_STRING(tag) " P"))) {			\
	    char _buf[EAGLE_MAX_LINE];				\
	    snprintf(_buf,EAGLE_MAX_LINE,		\
		fmt, ##__VA_ARGS__);				\
	    __gh_dbpush_string((uintptr_t)desc, _buf, 0, 0);	\
	}							\
    } while(0)
#else
#define EAGLE_LOG_PRINTF(tag,fmt,...) EAGLE_LogPrintf_REQUIRES_STDIO_H
#endif

#define EAGLE_LOG_NDX_U32(tag,ndx,expr,fmt) __v850_eagle_log_ndx_u32(EAGLE_LOGGING(tag), \
	(EAGLE_STRING(tag)" "fmt), (ndx), (expr))

#define EAGLE_LOG_NDX_U64(tag,ndx,expr,fmt) __v850_eagle_log_ndx_u64(EAGLE_LOGGING(tag), \
	(EAGLE_STRING(tag)" "fmt), (ndx), (expr))

#define EAGLE_LOG_NDX_STR(tag,ndx,expr,fmt) 			\
    do {							\
	void *desc;						\
	if (desc=__ghs_eagle_tag(EAGLE_LOGGING(tag),		\
		(EAGLE_STRING(tag)" "fmt))) {			\
	    __gh_dbpush_string((uintptr_t)desc, (expr), 1, ndx);	\
	}							\
    } while(0)

/****************************************************************************/
/*									    */
/*		E A G L E  B A S I C   U S E R   A P I			    */
/*									    */
/****************************************************************************/

#if EAGLE_CONFIG_LOGGING > EAGLE_LOGGING_DISABLED

#define EAGLE_LogPrint(tag,expr)	EAGLE_LOG_PRINT(tag,expr)
#define EAGLE_LogPrintf(tag,fmt,...)	EAGLE_LOG_PRINTF(tag,fmt,##__VA_ARGS__)
#define EAGLE_LogU32(tag,expr)		EAGLE_LOG_U32(tag,expr,"#")
#define EAGLE_LogU64(tag,expr)		EAGLE_LOG_U64(tag,expr,"&")
#define EAGLE_LogPtr(tag,expr)		EAGLE_LOG_PTR(tag,(uintptr_t)(expr),"*")
#define EAGLE_LogStr(tag,expr)		EAGLE_LOG_STR(tag,expr,"$")
#define EAGLE_LogBool(tag,expr)		EAGLE_LOG_U32(tag,!!(expr),"?")

#define EAGLE_LogNdxU32(tag,ndx,expr)	EAGLE_LOG_NDX_U32(tag, ndx, expr, ":_<#>#")

#define EAGLE_LogNdxU64(tag,ndx,expr)	EAGLE_LOG_NDX_U64(tag, ndx, expr, ":_<#>&")

#define EAGLE_LogNdxPtr(tag,ndx,expr)	EAGLE_LOG_NDX_U32(tag, ndx, (uintptr_t)(expr), ":_<#>*")

#define EAGLE_LogNdxBool(tag,ndx,expr)	EAGLE_LOG_NDX_U32(tag, ndx, expr, ":_<#>?")

#define EAGLE_LogNdxStr(tag,ndx,expr)	EAGLE_LOG_NDX_STR(tag, ndx, expr, ":_<#>$")


#else  /*-------------------------------------------------------------------*/

#define EAGLE_LogPrint(tag,expr)
#define EAGLE_LogPrintf(tag,fmt,...)
#define EAGLE_LogU32(tag,expr)
#define EAGLE_LogU64(tag,expr)
#define EAGLE_LogPtr(tag,expr)
#define EAGLE_LogStr(tag,str)
#define EAGLE_LogBool(tag,expr)
#define EAGLE_LogNdxU32(tag,ndx,expr)
#define EAGLE_LogNdxU64(tag,ndx,expr)
#define EAGLE_LogNdxPtr(tag,ndx,expr)
#define EAGLE_LogNdxStr(tag,ndx,expr)
#define EAGLE_LogNdxBool(tag,ndx,expr)

#endif

/****************************************************************************/

#endif /* _RH850_EAGLE_H */
