import os
import sys
from timemachine_api import *

# ------------------------------------------------------------------------------
#  TimeMachine API - Second python example
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
else:
    sys.argv.remove("-nooutputcapture")

# Load the Tkinter python module
try:
    import Tkinter
except ImportError, error:
    script_name = os.path.basename(sys.argv[0])
    print "%s: error: failed to import the Tkinter python library" % script_name
    print "%s:" % script_name, error
    live_connection.disconnect()
    sys.exit(1)

# Setup the Tk window and its contents
root = Tkinter.Tk()
root.title('TimeMachine API Python TK Test')

info_frame = Tkinter.Frame(root);
info_frame.pack(fill=Tkinter.X, side=Tkinter.BOTTOM)

num_packets = live_connection.get_num_packets()

Tkinter.Label(info_frame, text="Packets: %d" % num_packets, width=20).pack( \
    side=Tkinter.TOP)

# Load the first 10 packets
num = 10
pkts = TS_Packet * num
packets = pkts()
num = live_connection.get_packets(0, num, packets)

# Display the addresses of the first few instruction packets.
for i in range(0, num):
    if packets[i].type == TS_Packet.TSP_Instruction:
        Tkinter.Label(info_frame, text="0x%08x (%s)" % (packets[i].address, \
	    live_connection.get_instruction_symbol(packets[i].address)), \
	    width=50).pack()

# Run the Tk window
root.mainloop()

# Disconnect from the MULTI Debugger
live_connection.disconnect()

