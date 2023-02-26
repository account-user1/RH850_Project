import os
import sys
from timemachine_api import *
from time import sleep

print "---"

# Load and initialize the TimeMachine API
my_timemachine_api = timemachine_api()

# Connect to the MULTI Debugger which started this script
live_connection = my_timemachine_api.live_connect()

if not live_connection:
    script_name = os.path.basename(sys.argv[0])
    print "%s: error: failed to connect to MULTI Debugger" % script_name
    sys.exit(1)

# Capture output of this script to the command pane of the MULTI Debugger
#   (unless this script is run with the "-nooutputcapture" argument)
if not "-nooutputcapture" in sys.argv:
    live_connection.capture_output_to_multi()

trace_filename = sys.argv[1]

trace_file = my_timemachine_api.trace_file_create(trace_filename)

if trace_file == None:
    print "%s: error: file could not be created" % script_name
    sys.exit(1)

info = TM_DATA_INFO()
if not live_connection.get_info(info):
    print "%s: error: getting connection info failed" % script_name
    sys.exit(1)

if not trace_file.set_info(info):
    print "%s: error: setting file info failed" % script_name
    sys.exit(1)


max_packetnum = live_connection.get_num_packets()

packet_buffer_type = TS_Packet * 3000
packet_buffer = packet_buffer_type()
offset = 0
while offset < max_packetnum:
    to_get = max(3000, max_packetnum-offset)
    num_fetched = live_connection.get_packets(offset, to_get, packet_buffer)
    for i in range(num_fetched):
	trace_file.append_packet(packet_buffer[i])
    offset += num_fetched
    if num_fetched == 0:
	print "got zero error"
	break

print "saved %d packets" % max_packetnum

trace_file.close()
live_connection.disconnect()

