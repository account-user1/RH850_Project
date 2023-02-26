#!/usr/bin/env python

import os
import sys
from timemachine_api import *

# Example data access function - prints values from the TS_Packet structure
def print_packets(packets, num):
    for i in range(0, num):
	print "Packet %d: " % i,
	if packets[i].type == TS_Packet.TSP_Instruction:
	    print "Instr   PC   = 0x%08x" % packets[i].address
	elif packets[i].type == TS_Packet.TSP_Data:
	    access_string = ""
	    if packets[i].u.data.access & TS_PacketData.TSPA_Read:
		access_string += "R"
	    if packets[i].u.data.access & TS_PacketData.TSPA_Write:
		access_string += "W"
	    print "Data%-3s Addr = 0x%08x   Value = 0x%08x   Size=%d" \
		% (access_string, packets[i].address, \
		   packets[i].u.data.value, packets[i].u.data.size)
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
#  TimeMachine API - File interface python example
# ------------------------------------------------------------------------------

# Load and initialize the TimeMachine API
my_timemachine_api = timemachine_api()

# Open the TimeMachine data file
trace_filename = "timemachine_api_file_test.trs"
trace_file = my_timemachine_api.trace_file_open(trace_filename)

if not trace_file:
    print "%s: error: failed to open trace file: %s" \
	% (os.path.basename(sys.argv[0]), trace_filename)
    sys.exit(1)

# Print some properties of the data in the file
info = trace_file.get_info()

timebase_names = { TM_DATA_INFO.TM_TIMEBASE_INSTRUCTIONS: "instructions",
		   TM_DATA_INFO.TM_TIMEBASE_CYCLE_COUNTS: "cycle counts",
		   TM_DATA_INFO.TM_TIMEBASE_PICOSECONDS:  "picoseconds" }
print "Cycle counts:   ", info.has_cycle_counts
print "Cache misses:   ", info.has_cache_misses
print "Timebase:       ", timebase_names[info.timebase]
print "Data addresses: ", info.has_data_addresses
print "Data values:    ", info.has_data_values
print "Unexecuted instructions:      ", info.has_unexecuted
print "Variable length instructions: ", info.has_variable_length_instructions

# Print the number of trace packets stored in the file
num_packets = trace_file.get_num_packets()
print "Num Packets: ", num_packets

if num_packets:
    # Create a TS_Packet array
    packet_array_type = TS_Packet * num_packets
    packets = packet_array_type()

    # Buffer all of the trace packets in python's memory
    trace_file.get_packets(0, num_packets, packets)

    # Print out the first 100 packets
    print_packets(packets, min(100, num_packets))

    # Compute and print some statistics on the packets
    print_stats(packets, num_packets)

# Close the file
trace_file.close()

