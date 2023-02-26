import os
import sys

ghs_tools_path = None
# You can specify the default path to your MULTI IDE installation by replacing
# the "None" above with a full path such as this:
#   ghs_tools_path = "c:/GHS/arm423"


def timemachine_api_error_path_unspecified():
    print "*** timemachine_api.py"
    print "*** The path to the MULTI IDE installation was not specified"
    print "*** and auto-detection was unsuccessful.  Specify the correct"
    print "*** path in the ghs_tools_path variable which is defined in the"
    print "*** timemachine_api.py file."
    sys.exit(1)
#timemachine_api_error_path_unspecified()

def timemachine_api_find_ghs_tools_path():
    global ghs_tools_path
    try:
	# Discover the path from arguments added by MULTI.
	ghs_tools_path = sys.argv[sys.argv.index("-__tmapi_tools_dir") + 1]
    except ValueError:
	# Discover the Multi IDE installation path when this
	# timemachine_api module is located in a subdirectory
	# of the $INSTALL_DIR directory.
	path = __file__
	for i in range(100):
	    (path, entry) = os.path.split(path)
	    if(path == None):
		timemachine_api_error_path_unspecified()
	    elif(os.path.isfile("%s/timemachine_api.dll" % path)):
		ghs_tools_path = path
		break
	    elif(os.path.isfile("%s/timemachine_api.so" % path)):
		ghs_tools_path = path
		break
	    elif(entry == None):
		timemachine_api_error_path_unspecified()
#timemachine_api_find_ghs_tools_path()

try:
    from ctypes import *
except ImportError:
    print "Current python installation does not have ctypes installed."
    print "To use the TimeMachine API, you may use the python provided by"
    print "Green Hills, install the ctypes library into your python"
    print "installation, or use a python installation of version 2.5 or newer."
    raise


class timemachine_api:
    def __init__(self, multi_dir = ghs_tools_path):
	if(multi_dir == None):
	    if(ghs_tools_path == None):
		timemachine_api_find_ghs_tools_path()
	    multi_dir = ghs_tools_path;
	if(sys.platform == "win32" or sys.platform == "cygwin"):
	    _timemachine_api = windll.LoadLibrary("%s/timemachine_api.dll" % multi_dir)
	else:
	    _timemachine_api = cdll.LoadLibrary("%s/timemachine_api.so" % multi_dir)
	# The TimeMachine File Interface
	self.file_open            = _timemachine_api.tm_file_open
	self.file_create          = _timemachine_api.tm_file_create
	self.file_get_info        = _timemachine_api.tm_file_get_info
	self.file_get_num_packets = _timemachine_api.tm_file_get_num_packets
	self.file_get_packets     = _timemachine_api.tm_file_get_packets
	self.file_set_info        = _timemachine_api.tm_file_set_info
	self.file_append_packet   = _timemachine_api.tm_file_append_packet
	self.file_save            = _timemachine_api.tm_file_save
	self.file_close           = _timemachine_api.tm_file_close
	# The TimeMachine Interface
	self.init              = _timemachine_api.tm_init
	self._init_arg         = _timemachine_api.tm_init_arg
	self.connect           = _timemachine_api.tm_connect
	self.disconnect        = _timemachine_api.tm_disconnect
        self.next_id           = _timemachine_api.tm_next_id
	self.mprint            = _timemachine_api.tm_mprint
	self.get_info          = _timemachine_api.tm_get_info
	self.get_num_packets   = _timemachine_api.tm_get_num_packets
	self.get_packets       = _timemachine_api.tm_get_packets
	self._get_event_name   = _timemachine_api.tm_get_event_name
	self.select_packet     = _timemachine_api.tm_select_packet
	self.register_callback = _timemachine_api.tm_register_callback
	self.process_events    = _timemachine_api.tm_process_events
	# Symbol table functions
	self.initialize_symbol_table     = _timemachine_api.tm_initialize_symbol_table
	self.is_symbol_table_initialized = _timemachine_api.tm_is_symbol_table_initialized
	self._get_instruction_symbol     = _timemachine_api.tm_get_instruction_symbol
	self.get_data_symbol             = _timemachine_api.tm_get_data_symbol
	self.get_address_from_symbol     = _timemachine_api.tm_get_address_from_symbol

	self.init_arg() or self.init(multi_dir)

    TM_TIMEBASE_INSTRUCTIONS = 1
    TM_TIMEBASE_CYCLE_COUNTS = 2
    TM_TIMEBASE_PICOSECONDS  = 3

    TM_CALLBACK_FUNCTION = CFUNCTYPE(None, c_void_p, POINTER(c_uint))
    TM_CALLBACK_TRACE_START        = 0
    TM_CALLBACK_TRACE_STOP         = 1
    TM_CALLBACK_SELECT_PACKET      = 2
    TM_CALLBACK_DATA_CLEAR         = 3
    TM_CALLBACK_NEW_DATA_AVAILABLE = 4

    #####################################################################
    # TS_Packet packet types
    TSP_Instruction    = 0
    TSP_Data           = 1
    TSP_Event          = 2
    TSP_RawData        = 3
    TSP_RawData_Start  = 4
    TSP_PID            = 5
    TSP_ExtendedOpcode = 6
    TSP_LASample       = 7
    TSP_RegVal         = 8
    TSP_RawTracePacket = 9

    #####################################################################
    # TS_Packet data access types
    TSPA_Read               =   1
    TSPA_Write              =   2
    TSPA_Fetch              =   4
    TSPA_DataUnavailable    =   8
    TSPA_AddressUnavailable =  16
    TSPA_AddressPartial     =  32
    TSPA_Coprocessor        =  64
    TSPA_CacheMiss          = 128

    #####################################################################
    # TS_Packet event packet types
    # You can call get_event_name() to get the event string associated
    # with each event type listed below.
    TSPE_Trigger                      =  0
    TSPE_TraceDisabled                =  1
    TSPE_FifoOverflow                 =  2
    TSPE_DebugMode                    =  3
    TSPE_Reset                        =  4
    TSPE_UndefinedInstruction         =  5
    TSPE_SoftwareInterrupt            =  6
    TSPE_PrefetchAbort                =  7
    TSPE_DataAbort                    =  8
    TSPE_UnknownException             =  9
    TSPE_IRQ                          = 10
    TSPE_FIQ                          = 11
    TSPE_Invalid5PacketAddress        = 12
    TSPE_NoFullBroadcast              = 13
    TSPE_DataMismatch                 = 14
    TSPE_DataMismatch2                = 15
    TSPE_UndefinedEvent               = 16
    TSPE_CheckMultiVersion            = 17
    TSPE_FailedToReadCTR              = 18
    TSPE_BranchError                  = 19
    TSPE_InvalidData                  = 20
    TSPE_IRQError                     = 21
    TSPE_IRQError2                    = 22
    TSPE_UnconditionalBranchNotTaken  = 23
    TSPE_NoBranchToTake               = 24
    TSPE_Interrupt                    = 25
    TSPE_OutOfSequenceError           = 26
    TSPE_JavaMode                     = 27
    TSPE_PCChanged                    = 28
    TSPE_UnconditionalNotExecuted     = 29
    TSPE_TraceDisabledByContextSwitch = 30
    TSPE_OutOfSync                    = 31
    TSPE_UnknownAddressSpace          = 32
    TSPE_NotByteAligned               = 33
    TSPE_UnrecognizedPacket           = 34
    TSPE_UnrecognizedPheader          = 35
    TSPE_ImpreciseDataAbort           = 36
    TSPE_UncorrelatedDataStart        = 37
    TSPE_UncorrelatedDataEnd          = 38
    TSPE_InvalidDataPacket            = 39
    TSPE_Hidden                       = 40

    def init_arg(self):
	# Prepare arguments
	c_argc = pointer(c_int(len(sys.argv)))
	c_argv_type = c_char_p * len(sys.argv)
	c_argv = c_argv_type(* sys.argv)
	# Call init_arg
	ret = self._init_arg(c_argc, c_argv)
	# Update arguments
	sys.argv = c_argv[0:c_argc.contents.value]
	# Return success/failure
	return (ret == 0)

    def live_connect(self, sessionid=0):
	# Attempt to establish a connection, letting the API choose the ID
	connection = self.connect(sessionid)
	# Return a timemachine_live_connection instance if connected
	if(bool(connection)):
	    return timemachine_live_connection(self, connection)
	else:
	    return None

    def trace_file_open(self, filename):
	# Attempt to open the specified file
	tm_file = self.file_open(filename)
	# Return a timemachine_trace_file instance if the file was opened
	if(bool(tm_file)):
	    return timemachine_trace_file(self, tm_file, False)
	else:
	    print
	    return None

    # This function creates a new trace file for writing and appending.
    # NOTE: Trace files created by this function use a different file format
    # than trace session files (.trs) saved by MULTI 5.x and later. Files
    # created by this function are saved in the older .tra format used by
    # MULTI 4.x.  Current and future versions of MULTI can still load .tra
    # files, but they are not as user friendly as .trs files. Files created by
    # this function do not include ELF file(s) that were traced or their
    # associated debug information. Therefore in order to load files generated
    # by this function in MULTI you must already be debugging the
    # corresponding ELF file. You will also need to connect to your target or
    # to a simulator for the traced CPU.
    # NOTE2: Trace files created by this function also do not include
    # information about the state of tasks and AddressSpaces on the target.
    # Therefore this function is not capable of creating trace files for
    # INTEGRITY systems with virtual AddressSpaces and it cannot create trace
    # files which include task context switch markers.
    def trace_file_create(self, filename):
	# Attempt to create the specified file
	tm_file = self.file_create(filename)
	# Return a timemachine_trace_file instance if the file was created
	if(bool(tm_file)):
	    return timemachine_trace_file(self, tm_file, True)
	else:
	    return None

    def get_instruction_symbol(self, conn, address):
	maxlen = 80
	isym = create_string_buffer('\000' * maxlen)
	src_line = c_int()
	offset = c_int()
	ret = self._get_instruction_symbol(conn, c_int(address), isym,
					   c_int(maxlen), byref(src_line),
					   byref(offset))
	if(ret == -1):
	    return None
	return "%s+0x%x"% (isym.value, offset.value)

    # This function is implemented in this class to call the associated
    # DLL function to handle the conversion from C strings to Python
    # strings seamlessly.
    def get_event_name(self, event):
	c_s = c_char_p(self._get_event_name(event))
	return c_s.value
#timemachine_api


class timemachine_live_connection:
    def __init__(self, api, connection):
	self._api  = api
	self._conn = connection
	self._print = None
	self._trace_start_callbacks        = []
	self._trace_stop_callbacks         = []
	self._select_packet_callbacks      = []
	self._data_clear_callbacks         = []
	self._new_data_available_callbacks = []
        # We maintain a list of function objects we've passed to the C
        # tm_register_callback function in _api_callbacks to prevent them
        # from being garbage collected.
        self._api_callbacks = []
	self._trace_start_callback_installed        = False
	self._trace_stop_callback_installed         = False
	self._select_packet_callback_installed      = False
	self._data_clear_callback_installed         = False
	self._new_data_available_callback_installed = False
	self.process_events = self._api.process_events

    # The truth value of a connection is its connected state
    def __nonzero__(self):
	if(self.is_connected()):
	    return 1
	else:
	    return 0

    def __del__(self):
	self.disconnect()

    def is_connected(self):
	return self._api != None

    def disconnect(self):
	# Ignore call if this connection has already been closed
	if(not self.is_connected()):
	    return
	# Disconnect the connection
	self._api.disconnect(self._conn)
	# Mark this connection object as closed
	self._api = None
	# Remove output capturing
	if(self._print != None):
	    sys.stdout = sys.__stdout__
	    self._print = None

    def capture_output_to_multi(self):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return False
	# Re-install any previously-installed output channels
	if(self._print != None):
	    sys.stdout = self._print
	    return True
	# Create a new output capturer
	sys.stdout = self._print = multi_printer(self._api, self._conn)
	return True

    def mprint(self, str):
	# Fail silently if this connection has been closed
	if(not self.is_connected()):
	    return
	# Call into the API
	self._api.mprint(self._conn, str)

    def get_info(self, info):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return False
	# Call into the API and check for a successful response
	return 0 == self._api.get_info(self._conn, byref(info), sizeof(info))

    def get_num_packets(self):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return False
	# Call into the API
	return self._api.get_num_packets(self._conn)

    # Gets an array of 'num' packets starting at 'start' and stores them in a
    # TS_Packet array provided ('packets')
    def get_packets(self, start, num, packets):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return 0
	# Reduce the number of packets requested if the 'packets' argument is
	# smaller than the number requested
	if(len(packets) < num):
	    num = len(packets)
	# Call into the API and return the number of packets fetched
	return self._api.get_packets(self._conn, c_longlong(start), num, \
				     packets)

    def initialize_symbol_table(self, exec_name):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return False
	# Call into the API and check for a successful response
	return 0 == self._api.initialize_symbol_table(self._conn, exec_name)

    def is_symbol_table_initialized(self):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return False
	# Call into the API and check for a successful response
	return 0 != self._api.is_symbol_table_initialized(self._conn)

    def get_instruction_symbol(self, address):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return None
	# Call the timemachine_api and return the string (None on failure)
	return self._api.get_instruction_symbol(self._conn, address)

    def get_data_symbol(self, address):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return None
	# Prepare arguments for the API call
	maxlen = 80
	dsym = create_string_buffer('\000' * maxlen)
	# Call the timemachine_api
	ret = self._api.get_data_symbol(self._conn, address, dsym, maxlen)
	# Return the query result (None on failure)
	if(ret == -1):
	    return None
	return dsym.value

    def get_address_from_symbol(self, symbol):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return (0, -1)
	# Prepare arguments for the API call
	addr = c_int()
	size = c_int()
	# Call the timemachine_api
	ret = self._api.get_address_from_symbol(self._conn, symbol, \
						byref(addr), byref(size))
	# Return the query result
	if(ret == -1):
	    return (0, -1)
	return (addr.value, size.value)

    def select_packet(self, packet_number):
	# Fail if this connection has been closed
	if(not self.is_connected()):
	    return
	# Call the timemachine_api
	self._api.select_packet(self._conn, c_longlong(packet_number))

    def add_trace_start_callback(self, callback):
	if self._trace_start_callback_installed == False:
	    self._install_callback(self._trace_start_callbacks, \
				   self._api.TM_CALLBACK_TRACE_START)
	    self._trace_start_callback_installed = True
	self._trace_start_callbacks.append(callback)

    def remove_trace_start_callback(self, callback):
	if callback in self._trace_start_callbacks:
	    self._trace_start_callbacks.remove(callback)

    def add_trace_stop_callback(self, callback):
	if self._trace_stop_callback_installed == False:
	    self._install_callback(self._trace_stop_callbacks, \
				   self._api.TM_CALLBACK_TRACE_STOP)
	    self._trace_stop_callback_installed = True
	self._trace_stop_callbacks.append(callback)

    def remove_trace_stop_callback(self, callback):
	if callback in self._trace_stop_callbacks:
	    self._trace_stop_callbacks.remove(callback)

    def add_select_packet_callback(self, callback):
	if self._select_packet_callback_installed == False:
	    self._install_callback32(self._select_packet_callbacks, \
				     self._api.TM_CALLBACK_SELECT_PACKET)
	    self._select_packet_callback_installed = True
	self._select_packet_callbacks.append(callback)

    def remove_select_packet_callback(self, callback):
	if callback in self._select_packet_callbacks:
	    self._select_packet_callbacks.remove(callback)

    def add_data_clear_callback(self, callback):
	if self._data_clear_callback_installed == False:
	    self._install_callback(self._data_clear_callbacks, \
				   self._api.TM_CALLBACK_DATA_CLEAR)
	    self._data_clear_callback_installed = True
	self._data_clear_callbacks.append(callback)

    def remove_data_clear_callback(self, callback):
	if callback in self._data_clear_callbacks:
	    self._data_clear_callbacks.remove(callback)

    def add_new_data_available_callback(self, callback):
	if self._new_data_available_callback_installed == False:
	    self._install_callback(self._new_data_available_callbacks, \
				   self._api.TM_CALLBACK_NEW_DATA_AVAILABLE)
	    self._new_data_available_callback_installed = True
	self._new_data_available_callbacks.append(callback)

    def remove_new_data_available_callback(self, callback):
	if callback in self._new_data_available_callbacks:
	    self._new_data_available_callbacks.remove(callback)

    def _install_callback(self, callback_list, callback_num):
	api_callback = self._api.TM_CALLBACK_FUNCTION(lambda s,x: \
		self._call_callback(callback_list))
        self._api_callbacks.append(api_callback)
	self._api.register_callback(self._conn, callback_num, api_callback)

    def _install_callback32(self, callback_list, callback_num):
	api_callback = self._api.TM_CALLBACK_FUNCTION(lambda s,x: \
		self._call_callback32(callback_list, x[0]))
        self._api_callbacks.append(api_callback)
	self._api.register_callback(self._conn, callback_num, api_callback)

    def _call_callback(self, callback_list):
	for callback in callback_list:
	    callback(self)

    def _call_callback32(self, callback_list, arg32):
	for callback in callback_list:
	    callback(self, arg32)
#timemachine_live_connection


class timemachine_trace_file:
    def __init__(self, api, file, save_on_close):
	self._api  = api
	self._file = file
	self._save_on_close = save_on_close

    # The truth value of a file is true if it is still open
    def __nonzero__(self):
	if(self.is_open()):
	    return 1
	else:
	    return 0

    def __del__(self):
	self.close()

    def is_open(self):
	return self._file != None

    def close(self):
	# Ignore call if this file has already been closed
	if(not self.is_open()):
	    return
	# Save the file if necessary
	if(self._save_on_close):
	    self._api.file_save(self._file)
	# Close the file
	self._api.file_close(self._file)
	# Mark this connection object as closed
	self._file = None

    def get_info(self):
	# Fail if this file has been closed
	if(not self.is_open()):
	    return False
	# Prepare arguments for the API call
	data_info = TM_DATA_INFO()
	# Call the timemachine_api
	ret = self._api.file_get_info(self._file, byref(data_info), \
				      sizeof(data_info))
	# Return the query result (None on failure)
	if(ret == -1):
	    return None
	return data_info

    def set_info(self, data_info):
	# Fail if this file has been closed
	if(not self.is_open()):
	    return False
	# Call into the API and check for a successful response
	return 0 == self._api.file_set_info(self._file, byref(data_info), \
					    sizeof(data_info))

    def get_num_packets(self):
	# Fail if this file has been closed
	if(not self.is_open()):
	    return False
	# Call into the API
	return self._api.file_get_num_packets(self._file)

    # Gets an array of 'num' packets starting at 'start' and stores them in a
    # TS_Packet array provided ('packets')
    def get_packets(self, start, num, packets):
	# Fail if this file has been closed
	if(not self.is_open()):
	    return 0
	# Reduce the number of packets requested if the 'packets' argument is
	# smaller than the number requested
	if(len(packets) < num):
	    num = len(packets)
	# Call into the API and check for a successful response
	return 0 == self._api.file_get_packets(self._file, c_longlong(start), \
					       num, packets)

    def append_packet(self, packet):
	# Fail if this file has been closed
	if(not self.is_open()):
	    return False
	# Call into the API and check for a successful response
	return 0 == self._api.file_append_packet(self._file, byref(packet))
#timemachine_trace_file


class TM_DATA_INFO(Structure):
    _fields_ = [("has_cycle_counts",		     c_uint),
		("has_cache_misses",		     c_uint),
		("timebase",			     c_uint),
		("has_data_addresses",		     c_uint),
		("has_data_values",		     c_uint),
		("has_unexecuted",		     c_uint),
		("has_variable_length_instructions", c_uint),
                ("identifier",                       c_char*32)]

    # Values of the "timebase" enumeration
    TM_TIMEBASE_INSTRUCTIONS = 1
    TM_TIMEBASE_CYCLE_COUNTS = 2
    TM_TIMEBASE_PICOSECONDS  = 3

class TS_PacketInstruction(Structure):
    _fields_ = [("timetag",  c_ulonglong),
		("opcode",   c_uint),
		("is16bit",  c_byte),
		("executed", c_byte),
		("cycles",   c_ushort)]

class TS_PacketData(Structure):
    _fields_ = [("value",	 c_ulonglong),
		("access",	 c_ubyte),
		("size",	 c_ubyte),
		("uncorrelated", c_ubyte)]

    # Values of the "access" bitfield of data TS_Packets
    TSPA_Read               =   1
    TSPA_Write              =   2
    TSPA_Fetch              =   4
    TSPA_DataUnavailable    =   8
    TSPA_AddressUnavailable =  16
    TSPA_AddressPartial     =  32
    TSPA_Coprocessor        =  64
    TSPA_CacheMiss          = 128

class TS_PacketPID(Structure):
    _fields_ = [("tid",        c_ulonglong),
		("aid",        c_ulonglong)]

class TS_PacketExtendedOpcode(Structure):
    _fields_ = [("num_bytes", c_ulong),
		("data",      c_char * 12)]

class TS_PacketLASample(Structure):
    _fields_ = [("sample_data",    c_ubyte),
		("sample_timetag", c_ulonglong)]

class TS_PacketRegisterValue(Structure):
    _fields_ = [("size",   c_ubyte),
		("regnum", c_ulong),
		("value",  c_ulonglong)]

class TS_PacketRawTrace(Structure):
    _fields_ = [("timetag", c_ulonglong),
		("size",    c_ubyte),
		("data",    c_ubyte*7)]

class TS_PacketFunctionEvent(Structure):
    _fields_ = [("type",    c_ulong),
		("timetag", c_ulonglong)]

    # Values of the "type" bitfield of function event TS_Packets
    TSPF_Entry	= 0
    TSPF_Exit	= 1

class TS_PacketAddressSync(Structure):
    _fields_ = [("timetag", c_ulonglong)]
    
class TS_PacketUnion(Union):
    _fields_ = [("instr",           TS_PacketInstruction),
		("data",            TS_PacketData),
		("event",           c_ulong),
		("rawdata",         c_char * 16),
		("pid",             TS_PacketPID),
		("extended_opcode", TS_PacketExtendedOpcode),
		("la_sample",       TS_PacketLASample),
		("regval",          TS_PacketRegisterValue),
		("raw_trace_packet",TS_PacketRawTrace),
		("fn_event",        TS_PacketFunctionEvent),
		("addr_sync",       TS_PacketAddressSync)]

class TS_Packet(Structure):
    _fields_ = [("type",          c_byte),
		("reconstructed", c_byte),
		("address",       c_ulonglong),
		("u",             TS_PacketUnion)]

    # Values of the "type" field of TS_Packets
    TSP_Instruction	= 0
    TSP_Data		= 1
    TSP_Event		= 2
    TSP_RawData		= 3
    TSP_RawData_Start	= 4
    TSP_PID		= 5
    TSP_ExtendedOpcode	= 6
    TSP_LASample	= 7
    TSP_RegVal		= 8
    TSP_RawTracePacket  = 9
    TSP_FunctionEvent	= 10
    TSP_AddressSync	= 11


class multi_printer:
    def __init__(self, api, connection):
	self._api  = api
	self._conn = connection
	self._line = ""
    def write(self, str):
	self._line = self._line + str
	while(self._line.find("\n") != -1):
	    (full_line, self._line) = self._line.split("\n", 1)
	    self._api.mprint(self._conn, full_line + "\n")
# multi_printer

