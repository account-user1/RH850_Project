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

def packet_selected(conn, packet_number):
    print "Selected packet", packet_number, "on", conn

def started(conn):
    print "Trace started"

def stopped(conn):
    print "Trace stopped"

def print_it(msg):
    print msg

def pm1(message):
    return lambda x: print_it(message)

def pm2(message):
    return lambda x,y: print_it(message)

live_connection.add_select_packet_callback(packet_selected)
live_connection.add_select_packet_callback(pm2("Packet selected"))
live_connection.add_trace_stop_callback(stopped)
live_connection.add_trace_start_callback(started)

for x in range(20):
    live_connection.process_events()
    sleep(1)

print "==="

live_connection.remove_select_packet_callback(packet_selected)
live_connection.remove_trace_stop_callback(stopped)
live_connection.remove_trace_start_callback(started)

for x in range(20):
    live_connection.process_events()
    sleep(1)

print "==="
live_connection.disconnect()
