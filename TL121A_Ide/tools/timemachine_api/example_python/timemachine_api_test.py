import os
import sys
import time
from timemachine_api import *

# Example data access function - prints values from the TS_Packet structure
def print_packets(packets, num):
    for i in range(0, num):
	print "Packet %d: " % i,
	if packets[i].type == TS_Packet.TSP_Instruction:
	    print "Instr   PC   = 0x%08x" % packets[i].address
	elif packets[i].type == TS_Packet.TSP_Data:
	    access_string = ""
            addr_string = ""
            value_string = ""
	    if packets[i].u.data.access & TS_PacketData.TSPA_Read:
		access_string += "R"
	    if packets[i].u.data.access & TS_PacketData.TSPA_Write:
		access_string += "W"
            if packets[i].u.data.access & TS_PacketData.TSPA_AddressUnavailable:
                addr_string = "Unknown   "
            else:
                addr_string = "0x%08x" % packets[i].address
            if packets[i].u.data.access & TS_PacketData.TSPA_DataUnavailable:
                value_string = "Unknown   "
            else:
                value_string = "0x%08x" % packets[i].u.data.value
	    print "Data%-3s Addr = %s   Value = %s   Size=%d" \
		% (access_string, addr_string, value_string, \
		   packets[i].u.data.size)
	else:
	    print "Unknown packet type %d" % packets[i].type

# Example analysis function - counts instructions and memory accesses
def print_stats(packets, num):
    num_instructions = num_reads = num_writes = 0
    for i in range(0, num):
	if packets[i].type == TS_Packet.TSP_Instruction:
	    num_instructions = num_instructions + 1
	elif packets[i].type == TS_Packet.TSP_Data:
	    if packets[i].u.data.access & TS_PacketData.TSPA_Read:
		num_reads = num_reads + 1
	    if packets[i].u.data.access & TS_PacketData.TSPA_Write:
		num_writes = num_writes + 1
    print "Num packets: %d" % num
    print "Num Instructions: %d" % num_instructions
    print "Num Accesses: %d" % (num_reads + num_writes)
    print "    Reads:  %d" % num_reads
    print "    Writes: %d" % num_writes


# ------------------------------------------------------------------------------
#  TimeMachine API - First python example
# ------------------------------------------------------------------------------

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

# Print the number of trace packets currently collected
num_packets = live_connection.get_num_packets()
print "Num Packets: ", num_packets

if num_packets:
    # Create a TS_Packet array
    packet_array_type = TS_Packet * num_packets
    packets = packet_array_type()

    # Load all of the trace packets into RAM
    # Note that this is generally not a safe thing to do. There could be an
    # arbitrarily large number of packets and this could easily exhaust
    # virtual memory. To be robust a TimeMachine API application should
    # limit the number of packets loaded into RAM at once.
    num_packets = live_connection.get_packets(0, num_packets, packets)

    # Print out the first 100 packets
    print_packets(packets, min(100, num_packets))

    # Compute and print some statistics on the packets
    print_stats(packets, num_packets)

time.sleep(1)

# Disconnect from the MULTI Debugger
live_connection.disconnect()

