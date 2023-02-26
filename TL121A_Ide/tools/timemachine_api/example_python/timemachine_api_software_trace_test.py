import sys
import re
from timemachine_api import *

# ------------------------------------------------------------------------------
#  TimeMachine API - Python example to display software trace events
#
#  This example lists the following software trace events, if they are present
#  in the trace stream:
#    Function entry/exit
#    Data logging
#    Address logging
#
#  If run from within MULTI with no arguments, it will display the output in
#  the MULTI command pane.  If run with a filename argument, it will write the
#  information to that file.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# Utility functions for extracting the software trace events from the trace
# stream.
# ------------------------------------------------------------------------------

# This allows iteration over all of the packets.  It returns a TS_Packet
# object. The number of packets that are read into memory at a time is
# controlled by chunk_size
def GetPackets(connection, chunk_size = 1024):    
    packet_array_type = TS_Packet * chunk_size;
    packets = packet_array_type()

    remaining = connection.get_num_packets()
    start = 0
    while (remaining > 0):
	num = min(chunk_size, remaining)
	connection.get_packets(start, num, packets);
	remaining -= num
	start += num

	for index in range(0, num):
	    yield packets[index]


SWT_FuncEvent = 0
SWT_LogEventInt  = 1
SWT_LogEventStr  = 2
SWT_LogEventLoad  = 3
class SoftwareTrace_FuncEvent(object):
    def __init__(self, timestamp, pc, function, isentry):
	self.event_type = SWT_FuncEvent
	self.timestamp = timestamp
	self.pc = pc
	self.function = function
	self.isentry = isentry

class SoftwareTrace_LogEvent(object):
    def __init__(self, timestamp, pc, logtype, tag, value):
	if logtype == "STRING":
	    self.event_type = SWT_LogEventStr
	elif tag == "GHS_LOAD_ADDRESS":
	    # This is a special log event of the address of a load
	    self.event_type = SWT_LogEventLoad
	else:
	    self.event_type = SWT_LogEventInt
	self.timestamp = timestamp
	self.pc = pc
	self.type = logtype
	self.tag = tag
	self.value = value

# This allows iteration over all of the software trace events.  It returns
# a software trace event and hides the internal details of how they are
# represented in the trace packets (a single software trace event may
# consist of many trace packets, for example).
def GetSoftwareTraceEvents(connection, chunk_size = 1024):
    last_sync_timestamp = 0
    last_sync_address = 0
    do_raw_packet = False
    raw_packet_string = None
    for packet in GetPackets(connection, chunk_size):
	if do_raw_packet:
	    if (packet.type == TS_Packet.TSP_RawData):
		raw_packet_string += packet.u.rawdata
		continue
	    else:
		# handle the raw packet
		m = re.match("USER (.*): (.*) = (.*)", raw_packet_string);
		if m:
		    logtype = m.group(1)
		    tag = m.group(2)
		    if logtype == "STRING":
			val = m.group(3)
		    else:
			val = int(m.group(3), 16)
		    yield SoftwareTrace_LogEvent(last_sync_timestamp, last_sync_address, logtype, tag, val)

		# and proceed to handle the new packet
		do_raw_packet = False
	if (packet.type == TS_Packet.TSP_FunctionEvent):
	    func = connection.get_instruction_symbol(packet.address).split('+')[0]
	    yield SoftwareTrace_FuncEvent(packet.u.fn_event.timetag, packet.address, func, (packet.u.fn_event.type == TS_PacketFunctionEvent.TSPF_Entry))
	elif (packet.type == TS_Packet.TSP_AddressSync):
	    last_sync_timestamp = packet.u.addr_sync.timetag;
	    last_sync_address = packet.address;
	elif (packet.type == TS_Packet.TSP_RawData_Start):
	    do_raw_packet = True
	    raw_packet_string = packet.u.rawdata

# ------------------------------------------------------------------------------

# Load and initialize the TimeMachine API
my_timemachine_api = timemachine_api()

# Connect to the MULTI Debugger which started this script
live_connection = my_timemachine_api.live_connect()

if not live_connection:
    script_name = os.path.basename(sys.argv[0])
    print "%s: error: failed to connect to MULTI Debugger" % script_name
    sys.exit(1)

output = None

if (len(sys.argv) > 1):
    outputfile = sys.argv[1]
    try:
	output = open(sys.argv[1], "w")
    except IOError, e:
	live_connection.mprint(e.__str__())
	sys.exit(1)
    sys.stdout = output;
    live_connection.mprint("Writing software trace information to '%s'" % sys.argv[1])
else:
    live_connection.capture_output_to_multi()

# Iterate through all of the software trace events and print them out
for e in GetSoftwareTraceEvents(live_connection):
    if e.event_type == SWT_FuncEvent:
	print "FuncEvent: pc=%08x, time=%08x, func=%s, entry=%d (%s)" % (e.pc, e.timestamp, e.function, e.isentry, ("LEAVE", "ENTER")[e.isentry]);
    elif e.event_type == SWT_LogEventLoad:
	print "LoadEvent: pc=%08x, time=%08x, load_address=0x%08x" % (e.pc, e.timestamp, (e.value&0xffffffffL))
    elif e.event_type == SWT_LogEventInt:
	print "LogEvent:  pc=%08x, time=%08x, type=%s, tag=%s, value=0x%016x" % (e.pc, e.timestamp, e.type, e.tag, e.value)
    elif e.event_type == SWT_LogEventStr:
	print "LogEvent:  pc=%08x, time=%08x, type=%s, tag=%s, value=%s" % (e.pc, e.timestamp, e.type, e.tag, e.value)
    else:
	print "Unknown software trace event (type=%d)" % e.event_type

# Disconnect from the MULTI Debugger
live_connection.disconnect()

if output:
    output.close()
    sys.stdout=sys.__stdout__

