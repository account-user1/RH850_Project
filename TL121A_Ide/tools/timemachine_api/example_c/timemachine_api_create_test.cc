/*
 * timemachine_api_create_test.cc
 *
 * An example program demonstrating writing of trace files using the
 * TimeMachine API.  It should be launched from the Windows command prompt
 * or a Unix shell.
 *
 * The file interface is used to create "*.tra" files containing trace data
 * from an external source which are to be viewed and analyzed in
 * TimeMachine.  A "*.tra" file can be loaded into TimeMachine by entering
 * the "traceload filename" command at the MULTI command prompt where
 * "filename" is the name of the "*.tra" file to be loaded.
 */

#include "timemachine_api.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_usage(const char *progname) {
    printf("Usage: %s [-tools_dir <tools_directory>] [<output_filename>]\n"
            "If the tools directory is not specified the current working\n"
            "directory will be used.\n"
            "If an output filename is not specified timemachine_api_example.tra\n"
            "will be used.\n", progname);
}

int main(int argc, char **argv)
{
    // Defaults
    char *tools_dir = ".";
    char *filename = "timemachine_api_example.tra";
    
    // Parse arguments.
    bool found_filename = false;
    for(int i=1; i<argc; i++) {
        if(strcmp(argv[i], "-tools_dir") == 0 && (i + 1) < argc) {
            tools_dir = argv[++i];
        } else if(!found_filename) {
            found_filename = true;
            filename = argv[i];
        } else {
            print_usage(argv[0]);
        }
    }
    
    // Initialize the TimeMachine API
    if(tm_init(tools_dir) == -1)
	return 1;

    // Create a file
    TM_FILE file = tm_file_create(filename);
    if(file == NULL) {
	printf("Error in creating the file for saving trace packets into\n");
	return 1;
    }

    // Fill the file with some packets
    TS_Packet packet;
    packet.type = TSP_Instruction;
    packet.address = 0x1000a8;
    packet.u.instr.opcode = 0xe92d4730;
    tm_file_append_packet(file, &packet);

    packet.address = 0x1000ac;
    packet.u.instr.opcode = 0xe59f219c;
    tm_file_append_packet(file, &packet);

    packet.address = 0x1000b0;
    packet.u.instr.opcode = 0xe5921000;
    tm_file_append_packet(file, &packet);

    packet.address = 0x1000b4;
    packet.u.instr.opcode = 0xe2811001;
    tm_file_append_packet(file, &packet);

    packet.address = 0x1000b8;
    packet.u.instr.opcode = 0xe5821000;
    tm_file_append_packet(file, &packet);

    packet.address = 0x1000bc;
    packet.u.instr.opcode = 0xe59f218c;
    tm_file_append_packet(file, &packet);

    packet.address = 0x1000c0;
    packet.u.instr.opcode = 0xe5921000;
    tm_file_append_packet(file, &packet);

    packet.address = 0x1000c4;
    packet.u.instr.opcode = 0xe2811001;
    tm_file_append_packet(file, &packet);

    // Save the file - after all packets have been added, and only once
    tm_file_save(file);

    // Close the file
    tm_file_close(file);

    return 0;
}

