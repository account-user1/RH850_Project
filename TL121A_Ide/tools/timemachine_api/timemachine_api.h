/***************************************************************************
 * timemachine_api.h
 *--------------------------------------------------------------------------
 * This file defines the Green Hills TimeMachine API.
 *
 *          Copyright 2006-2011 Green Hills Software
 *
 *    This program is the property of Green Hills Software,
 *    its contents are proprietary information and no part of it
 *    is to be disclosed to anyone except employees of Green Hills
 *    Software, or as agreed in writing signed by the President
 *    of Green Hills Software.
 **************************************************************************/

#ifndef __TIMEMACHINE_API_H__
#define __TIMEMACHINE_API_H__


/***************************************************************************
 * TYPEDEFS
 *--------------------------------------------------------------------------
 * These typedefs may need to be changed for different architectures.  These
 * are the most common types that correspond to 8, 16, 32 and 64 bit
 * numbers, but this may differ on various compilers.  If these types do not
 * work correctly on your compiler, change these typedefs to correctly
 * define the types that correspond to each size.
 **************************************************************************/
typedef	signed char		int8;
typedef	signed short		int16;
typedef	signed int 		int32;
typedef	unsigned char		uint8;
typedef	unsigned short		uint16;
typedef	unsigned int 		uint32;

/* 64-bit types are a little trickier */
#if defined(_WIN32) && !defined(__ghs__)
/* Some compilers use a non-standard name for their 64 bit type. */
typedef	__int64                 int64;
typedef	unsigned __int64        uint64;
#else
typedef	long long		int64;
typedef	unsigned long long	uint64;
#endif

/***************************************************************************
 * INCLUDES
 *--------------------------------------------------------------------------
 * Include the TS_Packet type.
 **************************************************************************/
#include <ts_packet.h>


#ifdef __cplusplus
extern "C" {
#endif


/***************************************************************************
 * HOST-SPECIFIC DEFINES
 *--------------------------------------------------------------------------
 * These defines will automatically work when using Green Hills Compilers.
 * With third-party compilers, you may need to modify these to work with
 * Microsoft Windows.
 **************************************************************************/
#if defined(_WIN32) && !defined(TIMEMACHINE_API_DIRECT)
#  define STDCALL __stdcall
#  ifdef TIMEMACHINE_API_DLL
#    define EXPORT __declspec(dllexport)
#  else
#    define EXPORT __declspec(dllimport)
#  endif
#else
#  define STDCALL
#  define EXPORT
#endif


/***************************************************************************
 * TIMEMACHINE API TYPES
 **************************************************************************/

/***************************************************************************
 * TM_FILE
 *--------------------------------------------------------------------------
 * A TM_FILE is an opaque pointer that represents an open trace file from
 * which you can read data.
 */
typedef struct __TM_FILE *TM_FILE;


/***************************************************************************
 * TM_CONNECTION
 *--------------------------------------------------------------------------
 * A TM_CONNECTION is an opaque pointer that represents a connection to an
 * active traceserv client.  It enables you to read trace data as well as
 * control tracing and other operations.
 */
typedef struct __TM_CONNECTION *TM_CONNECTION;


/***************************************************************************
 * TM_CALLBACK_FUNCTION
 *--------------------------------------------------------------------------
 * This type is used for callbacks for trace events.
 * The void* pointer passed to the callback will depend on the event type.
 *     TM_CALLBACK_TRACE_START:        NULL
 *     TM_CALLBACK_TRACE_STOP:         NULL
 *     TM_CALLBACK_SELECT_PACKET:      int* ; points to selected packet #
 *     TM_CALLBACK_DATA_CLEAR:         NULL
 *     TM_CALLBACK_NEW_DATA_AVAILABLE: NULL
 */
typedef void (*TM_CALLBACK_FUNCTION)(TM_CONNECTION conn, void *data);


/***************************************************************************
 * TM_CALLBACK
 *--------------------------------------------------------------------------
 * This enumeration defines the types of events that you can register
 * callbacks for.
 *
 * NOTE: If you register a callback you must make regular calls to
 * tm_process_events().
 */
typedef enum {
	TM_CALLBACK_TRACE_START,
	TM_CALLBACK_TRACE_STOP,
	TM_CALLBACK_SELECT_PACKET,
	TM_CALLBACK_DATA_CLEAR,
	TM_CALLBACK_NEW_DATA_AVAILABLE,
	
	TM_CALLBACK_NUM
} TM_CALLBACK;


/***************************************************************************
 * TM_TIMEBASE
 *--------------------------------------------------------------------------
 * This enumeration defines the potential time bases for the timetag field
 * for each instruction.
 */
typedef enum {
    TM_TIMEBASE_INSTRUCTIONS = 1,
    TM_TIMEBASE_CYCLE_COUNTS = 2,
    TM_TIMEBASE_PICOSECONDS = 3
} TM_TIMEBASE;


/***************************************************************************
 * TM_DATA_INFO
 *--------------------------------------------------------------------------
 * This structure defines a number of properties about the trace data
 * associated with either a TM_FILE or TM_CONNECTION.
 */
typedef struct {
    /* This field is non-zero if the trace data has cycle count information
     * for each instruction. */
    unsigned int has_cycle_counts;
    /* This field is non-zero if the trace data contains information about
     * cache hits/misses. */
    unsigned int has_cache_misses;
    /* This field determines what type of information is stored in each
     * instruction's timetag field. */
    TM_TIMEBASE timebase;
    /* This field is non-zero if the trace data contains the addresses of
     * data reads and writes in each data packet */
    unsigned int has_data_addresses;
    /* This field is non-zero if the trace data contains the values of data
     * reads and writes in each data packet */
    unsigned int has_data_values;
    /* This field is non-zero if the trace data contains both executed and
     * unexecuted instructions and the executed field is set in each
     * instruction packet to indicate whether the instruction was
     * executed. */
    unsigned int has_unexecuted;
    /* This field is non-zero if the trace data contains instructions of
     * varying length. */
    unsigned int has_variable_length_instructions;    
    /* This field indicates what the source of this trace data was as a
     * NULL-terminated string. */
    char identifier[32];
} TM_DATA_INFO;


/***************************************************************************
 ***************************************************************************
 * TIMEMACHINE FILE INTERFACE
 ***************************************************************************
 **************************************************************************/

/***************************************************************************
 * tm_file_create()
 *--------------------------------------------------------------------------
 * This function creates a new trace file for writing and appending.
 * NOTE: Trace files created by this function use a different file format
 * than trace session files (.trs) saved by MULTI 5.x and later. Files created
 * by this function are saved in the older .tra format used by MULTI 4.x.
 * Current and future versions of MULTI can still load .tra files, but they
 * are not as user friendly as .trs files. Files created by this function do
 * not include ELF file(s) that were traced or their associated debug
 * information. Therefore in order to load files generated by this function in
 * MULTI you must already be debugging the corresponding ELF file. You will
 * also need to connect to your target or to a simulator for the traced CPU.
 * NOTE2: Trace files created by this function also do not include information
 * about the state of tasks and AddressSpaces on the target. Therefore this
 * function is not capable of creating trace files for INTEGRITY systems with
 * virtual AddressSpaces and it cannot create trace files which include
 * task context switch markers.
 * Parameters:
 *    filename: Path to the file to create.
 * Return:
 *    A TM_FILE that contains information about the requested trace file.
 *    This function will return NULL if it is unable to open the requested
 *    file.
 */
EXPORT TM_FILE STDCALL tm_file_create(const char *filename);


/***************************************************************************
 * tm_file_append_packet()
 *--------------------------------------------------------------------------
 * This function appends a single packet onto the end of a trace file.
 * Parameters:
 *    file: A TM_FILE obtained by calling tm_file_create.
 *    packet: Pointer to a single packet that is to be appended to the trace
 *             file.
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_file_append_packet(TM_FILE file,
	TS_Packet *packet);


/***************************************************************************
 * tm_file_save()
 *--------------------------------------------------------------------------
 * Saves a file that was previously created by tm_file_create.  This should
 * be called only once and only after all desired packets have been added
 * to the file using tm_file_append_packet.
 * Parameters:
 *    file: A TM_FILE obtained by calling tm_file_create.
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_file_save(TM_FILE file);


/***************************************************************************
 * tm_file_open()
 *--------------------------------------------------------------------------
 * This function opens a saved trace file for reading.
 * Parameters:
 *    filename: Path to the file to open.
 * Return:
 *    A TM_FILE that contains information about the requested trace file.
 *    This function will return NULL if it is unable to open the requested
 *    file.
 */
EXPORT TM_FILE STDCALL tm_file_open(const char *filename);


/***************************************************************************
 * tm_file_get_info()
 *--------------------------------------------------------------------------
 * This function fills in a TM_DATA_INFO structure with information about
 * the trace data associated with a trace file.
 * Parameters:
 *    file: A TM_FILE obtained by calling tm_file_open.
 *    info: A pointer to a TM_DATA_INFO structure.
 *    info_size: The size of the TM_DATA_INFO structure (for cross-version
 *               compatibility).
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_file_get_info(TM_FILE file,
	TM_DATA_INFO *info, int info_size);


/***************************************************************************
 * tm_file_set_info()
 *--------------------------------------------------------------------------
 * This function applies the properties in a TM_DATA_INFO structure to the
 * trace data associated with a trace file.
 * Parameters:
 *    file: A TM_FILE obtained by calling tm_file_create.
 *    info: A pointer to a TM_DATA_INFO structure.
 *    info_size: The size of the TM_DATA_INFO structure (for cross-version
 *               compatibility).
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_file_set_info(TM_FILE file,
	TM_DATA_INFO *info, int info_size);


/***************************************************************************
 * tm_file_get_num_packets()
 *--------------------------------------------------------------------------
 * This function returns the number of packets in the trace file.
 * Parameters:
 *    file: A TM_FILE obtained by calling tm_file_open or
 *    tm_file_create.
 * Return:
 *    The number of packets in the trace file, or 0xFFFFFFFF_FFFFFFFF on
 *    error
 */
EXPORT uint64 STDCALL tm_file_get_num_packets(TM_FILE file);


/***************************************************************************
 * tm_file_get_packets()
 *--------------------------------------------------------------------------
 * This function retrieves a buffer of packets from file and stores them
 * into packets.  The start and extent of the buffer are controlled by
 * start_num and num_packets.
 * Parameters:
 *    file: A TM_FILE obtained by calling tm_file_open.
 *    start_num: The start packet number to read.
 *    num_packets: The number of packets to copy into the buffer.
 *    packets: Pointer to a buffer that will contain the packets after this
 *             call.  This buffer must be at least sizeof(TS_Packet) * 
 *             num_packets bytes.
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_file_get_packets(TM_FILE file, uint64 start_num,
	int num_packets, TS_Packet *packets);


/***************************************************************************
 * tm_file_close()
 *--------------------------------------------------------------------------
 * Closes a file that was previously opened by tm_file_open.  You should
 * call this function to free the resources associated with each file that
 * you open to prevent resource leakage.
 * Parameters:
 *    file: A TM_FILE obtained by calling tm_file_open.
 * Return:
 *    NONE
 */
EXPORT void STDCALL tm_file_close(TM_FILE file);


/***************************************************************************
 ***************************************************************************
 * TIMEMACHINE LIVE INTERFACE
 ***************************************************************************
 **************************************************************************/

/***************************************************************************
 * tm_init()
 *--------------------------------------------------------------------------
 * This function initializes everything so that you can successfully connect
 * to a running trace process to get and analyze trace data.  You must pass
 * in the path to your MULTI installation directory so that the TimeMachine
 * API can successfully connect to your running MULTI session.
 * Parameters:
 *    multi_dir: The MULTI installation directory of the tools you want to
 *               connect to.
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_init(const char *multi_dir);


/***************************************************************************
 * tm_init_arg()
 *--------------------------------------------------------------------------
 * This function initializes the TimeMachine API when launched from MULTI so
 * that you can successfully connect to a running trace process to get and
 * analyze trace data.  After the TimeMachine API initializes with the
 * values MULTI provided as program arguments, these program arguments will
 * be removed to leave only the user-specified arguments.
 * Parameters:
 *    argc: A pointer to the number of command line arguments in addition to
 *          the program name which was provided to this program's main
 *          function by way of MULTI executing this program.  This value
 *          will be reduced by the number of arguments that were used to
 *          initialize the TimeMachine API.
 *    argv: A pointer to the array of pointers to the command line
 *          arguments and program name string.  Arguments that are used to
 *          initialize the TimeMachine API will be removed from this array
 *          to leave only the user-specified arguments.
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_init_arg(int *argc, char **argv);


/***************************************************************************
 * tm_next_id()
 *--------------------------------------------------------------------------
 * This function returns the next valid session id after id.
 * Parameters:
 *    id: A valid session id, or 0.
 * Return:
 *    When id is 0, return the first traceserv session id. Otherwise return
 *    the next valid traceserv session id after id. If there are no more valid
 *    traceserv session ids, then 0 is returned.
 */
EXPORT int STDCALL tm_next_id(int id);


/***************************************************************************
 * tm_connect()
 *--------------------------------------------------------------------------
 * This function connects to an existing traceserv session.  If this
 * application was launched by MULTI and the TimeMachine API was initialized
 * with the tm_init_arg() function, the traceserv session id number will
 * have been provided by MULTI and will be used if the id argument is 0.
 * After successfully connecting to your running MULTI session, this
 * function queries MULTI for the executable that is currently loaded and
 * attempts to initialize the symbol table for this executable.  You can use
 * the symbol table functions to determine whether this was successful.  If
 * it fails, you can attempt to initialize the symbol table with the path to
 * the executable that corresponds to the trace session.
 * Parameters:
 *    id: The traceserv id of the trace session to attach to, or 0 to attach
 *        to the session specified by MULTI when it lauched this
 *        application.  When this application is launched outside of
 *        MULTI, a valid id must be specified, which will always be 1 or
 *        greater.
 * Return:
 *    A new TM_CONNECTION object which can be passed to any of the other
 *    TimeMachine functions on success, NULL on error
 */
EXPORT TM_CONNECTION STDCALL tm_connect(int id);


/***************************************************************************
 * tm_disconnect()
 *--------------------------------------------------------------------------
 * This function disconnects from traceserv for the selected connection and
 * frees all associated data structures.  You should call this for every
 * connection that you open to prevent resources from being leaked.
 * Parameters:
 *    conn: The connection to disconnect from.
 * Return:
 *    NONE
 */
EXPORT void STDCALL tm_disconnect(TM_CONNECTION conn);


/***************************************************************************
 * tm_get_info()
 *--------------------------------------------------------------------------
 * This function fills in a TM_DATA_INFO structure with information
 * about the trace data associated with a trace connection.
 * Parameters:
 *    conn: The TM_CONNECTION to read from.
 *    info: A pointer to a TM_DATA_INFO structure.
 *    info_size: The size of the TM_DATA_INFO structure (for cross-version
 *               compatibility).
 * Return:
 *    0 on success, -1 on error
 */
EXPORT int STDCALL tm_get_info(TM_CONNECTION conn,
	TM_DATA_INFO *info, int info_size);


/***************************************************************************
 * tm_get_num_packets()
 *--------------------------------------------------------------------------
 * This function retrieves the number of packets in the current trace
 * session buffer and returns this value.
 * Parameters:
 *    conn: The TM_CONNECTION to read from.
 * Return:
 *    The number of packets in the current trace session buffer.
 */
EXPORT uint64 STDCALL tm_get_num_packets(TM_CONNECTION conn);


/***************************************************************************
 * tm_get_packets()
 *--------------------------------------------------------------------------
 * This function gets a buffer of packets.  The start and stop packet
 * numbers are determined by 'start' and 'num.'  The results are copied into
 * 'packets.'
 * Parameters:
 *   conn: The TM_CONNECTION to read from.
 *   start: The first packet number to read.
 *   num: The number of packets to read.
 *   packets: The destination buffer.  This buffer must be at least
 *            num * sizeof(TS_Packet) bytes in size.
 * Return:
 *   The number of packets that were copied into the packets output
 *   parameter or -1 on failure.
 */
EXPORT int STDCALL tm_get_packets(TM_CONNECTION conn, uint64 start,
	int num, TS_Packet *packets);


/***************************************************************************
 * tm_initialize_symbol_table()
 *--------------------------------------------------------------------------
 * This function initializes the symbol table for a given executable.  This
 * function will automatically be called when you connect to a running MULTI
 * session, however, if this fails, you can manually attempt to initialize
 * the symbol table with this function.
 * Parameters:
 *    conn: The TM_CONNECTION to read from.
 *    exec_name: The path to the executable to use to initialize the symbol
 *               table.
 * Return:
 *    0 on success, -1 on failure
 */
EXPORT int STDCALL tm_initialize_symbol_table(TM_CONNECTION conn,
	const char *exec_name);


/***************************************************************************
 * tm_is_symbol_table_initialized()
 *--------------------------------------------------------------------------
 * This function allows you to determine whether the symbol table has been
 * successfully initialized.  It returns 0 if the symbol table is not
 * initialized and non-zero if it is.
 * Parameters:
 *    conn: The TM_CONNECTION to read from.
 * Return:
 *    non-zero if the symbol table has been successfully initialized,
 *    0 otherwise
 */
EXPORT int STDCALL tm_is_symbol_table_initialized(TM_CONNECTION conn);


/***************************************************************************
 * tm_get_instruction_symbol()
 *--------------------------------------------------------------------------
 * This function retrieves the symbol of an address by looking at the table
 * of functions to determine what function a given address resides in.
 * Parameters:
 *   conn: The TM_CONNECTION to read from.
 *   address: The address to look up a symbol for.
 *   buf: The buffer to copy the symbol name into.  This must be a pre-
 *        allocated array of size maxlen.
 *   maxlen: The length of the array passed into buf.
 *   source_line: For addresses that have associated source code, this
 *                output parameter will contain the source line number.  For
 *                addresses that do not have associated source code, this
 *                output parameter will contain the value -1.
 *   function_offset: This output parameter will contain the offset into the
 *                    function of the address passed in.
 * Return:
 *   -1 on error, 0 if buf is NULL and otherwise the number of characters
 *   copied into the buffer
 */
EXPORT int STDCALL tm_get_instruction_symbol(TM_CONNECTION conn,
	uint32 address, char *buf, int maxlen, int *source_line,
	int *function_offset);


/***************************************************************************
 * tm_get_data_symbol()
 *--------------------------------------------------------------------------
 * This function retrieves the symbol of an address by looking at the symbol
 * table for a data variable associated with a given address.  It will
 * return the name of the section that contains the variable if there is no
 * associated symbol.
 * Parameters:
 *   conn: The TM_CONNECTION to read from.
 *   address: The address to look up a symbol for.
 *   buf: The buffer to copy the symbol name into.  This must be a pre-
 *        allocated array of size maxlen.
 *   maxlen: The length of the array passed into buf.
 * Return:
 *   -1 on error, 0 if buf is NULL and otherwise the number of characters
 *   copied into the buffer
 */
EXPORT int STDCALL tm_get_data_symbol(TM_CONNECTION conn,
	uint32 address, char *buf, int maxlen);


/***************************************************************************
 * tm_get_address_from_symbol()
 *--------------------------------------------------------------------------
 * This function returns the address associated with a symbol.
 * NOTE: The symbol must be a fully qualified symbol name. This means that C++
 * function symbols must include all argument types.
 * Parameters:
 *   conn: The TM_CONNECTION to read from.
 *   symbol: The symbol to look up in the executable
 *   address: Output parameter will contain the address of the symbol passed
 *            into this function.
 *   size: Output parameter will contain the size of the symbol passed in.
 * Return:
 *   0 on success, -1 on failure
 */
EXPORT int STDCALL tm_get_address_from_symbol(TM_CONNECTION conn,
	const char *symbol, uint32 *address, uint32 *size);


/***************************************************************************
 * tm_get_event_name()
 *--------------------------------------------------------------------------
 * This function returns an ASCII string that represents the event type
 * passed in.
 * Parameters:
 *   type: The type of event to get a string for.
 * Return:
 *   A string representing the event type passed into this function.  NULL
 *   if the event type is invalid.
 */
EXPORT const char * STDCALL tm_get_event_name(TSP_EventType type);


/***************************************************************************
 * tm_start_trace()
 *--------------------------------------------------------------------------
 * This function starts trace collection for the selected connection.
 * Parameters:
 *    conn: The TM_CONNECTION to start trace for.
 * Return:
 *    NONE
 */
EXPORT void STDCALL tm_start_trace(TM_CONNECTION conn);


/***************************************************************************
 * tm_stop_trace()
 *--------------------------------------------------------------------------
 * This function stops trace collection for the selected connection.  Trace
 * data that has been collected will be downloaded automatically after trace
 * collection is stopped.
 * Parameters:
 *    conn: The TM_CONNECTION to stop trace for.
 * Return:
 *    NONE
 */
EXPORT void STDCALL tm_stop_trace(TM_CONNECTION conn);


/***************************************************************************
 * tm_select_packet()
 *--------------------------------------------------------------------------
 * This function selects a trace packet and synchronizes all other tools to
 * this packet.
 * Parameters:
 *    conn: The TM_CONNECTION to select a packet from.
 *    packet_num: The packet number to select.
 * Return:
 *    NONE
 */
EXPORT void STDCALL tm_select_packet(TM_CONNECTION conn,
	uint64 packet_num);


/***************************************************************************
 * tm_register_callback()
 *--------------------------------------------------------------------------
 * This function allows you to register a callback function for various
 * events.
 * NOTE: If you register a callback you must make regular calls to
 * tm_process_events().
 * Parameters:
 *    conn: The TM_CONNECTION to register a callback for.
 *    event: The event to register a callback for.
 *    function: The callback function that is called when the specified
 *              event occurs.
 * Return:
 *    NONE
 */
EXPORT void STDCALL tm_register_callback(TM_CONNECTION conn,
	TM_CALLBACK event, TM_CALLBACK_FUNCTION function);


/***************************************************************************
 * tm_process_events()
 *--------------------------------------------------------------------------
 * This function causes events to be processed and callbacks to be called if
 * events are pending.
 * NOTE: This function MUST be called regularly by all TimeMachine API
 * live connection programs which run for any significant period of time.
 * If your program maintains a live TimeMachine API connection, but does not
 * call tm_process_events() regularly it will cause the MULTI debugger to
 * appear hung. Generally this function should be called by the main event
 * loop of every TimeMachine API application which is connected to a MULTI
 * debugger.
 * Parameters:
 *    NONE
 * Return:
 *    NONE
 */
EXPORT void STDCALL tm_process_events();


/***************************************************************************
 * tm_mprintf()
 *--------------------------------------------------------------------------
 * This function prints the provided formatted string to the MUTLI command
 * pane as output.  The text from each call to this function is buffered
 * until a complete line is buffered.  All complete lines are flushed to the
 * MULTI command pane for each call to this function.  Lines are completed
 * by a '\n' character.
 * Parameters:
 *   conn: The TM_CONNECTION to print with
 *   format: A Null-terminated text string to be printed to the Multi
 *           command pane
 * Return:
 *   0 on success, -1 on failure
 */
EXPORT int STDCALL tm_mprintf(TM_CONNECTION conn, const char *format, ...);


/***************************************************************************
 * tm_mprint()
 *--------------------------------------------------------------------------
 * This function prints the provided string to the MUTLI command pane as
 * output.  Multiple lines can be printed with a single call by separating
 * the lines in the string with '\n' characters.  Each call to this function
 * is printed on a new line, so all the text desired to be printed on a
 * single line should be buffered before given to this function.
 * Parameters:
 *   conn: The TM_CONNECTION to print with
 *   string: A Null-terminated text string to be printed to the Multi
 *           command pane
 * Return:
 *   0 on success, -1 on failure
 */
EXPORT int STDCALL tm_mprint(TM_CONNECTION conn, const char *string);


#ifdef __cplusplus
}
#endif


#endif /* __TIMEMACHINE_API_H__ */

