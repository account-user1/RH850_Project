#include <stdlib.h>
#include "labels.h"

struct Device;
struct Bus;

/* Structure definitions */
struct DeviceList {
    struct Device* data;
    struct DeviceList* next;
};

struct BusList {
    struct Bus* data;
    struct BusList* next;
};

struct Device {
    const char* name;
    int id;
    struct BusList* inputs;
    struct BusList* outputs;
};

struct Bus {
    const char* name;
    int id;
    struct DeviceList* inputs;
    struct DeviceList* outputs;
};

/* Structure creators */
struct DeviceList* createDeviceListElt(struct Device* d)
{
    struct DeviceList* elt =
	(struct DeviceList*) malloc(sizeof(struct DeviceList));
    elt->data = d;
    elt->next = NULL;
    return elt;
}

struct BusList* createBusListElt(struct Bus* b)
{
    struct BusList* elt =
	(struct BusList*) malloc(sizeof(struct BusList));
    elt->data = b;
    elt->next = NULL;
    return elt;
}

struct Device* createDevice(const char* name)
{
    static int currID = 0;
    struct Device* d = (struct Device*) malloc(sizeof(struct Device));
    d->name = name;
    d->id = currID++;
    d->inputs = NULL;
    d->outputs = NULL;

    return d;
}

struct Bus* createBus(const char* name)
{
    static int currID = 0;
    struct Bus* b = (struct Bus*) malloc(sizeof(struct Bus));
    b->name = name;
    b->id = currID++;
    b->inputs = NULL;
    b->outputs = NULL;

    return b;
}

/* Add a Device to the Bus's outputs */
void Bus_addOutputDevice(struct Bus* b, struct Device* d)
{
    struct DeviceList* elt = createDeviceListElt(d);
    elt->next = b->outputs;
    b->outputs = elt;
}

/* Add a Device to the Bus's inputs */
void Bus_addInputDevice(struct Bus* b, struct Device* d)
{
    struct DeviceList* elt = createDeviceListElt(d);
    elt->next = b->inputs;
    b->inputs = elt;
}

/* Add a Bus to the Device's outputs */
void Device_addOutputBus(struct Device* d, struct Bus* b)
{
    struct BusList* elt = createBusListElt(b);
    elt->next = d->outputs;
    d->outputs = elt;

    Bus_addInputDevice(b, d);
}

/* Add a Bus to the Device's inputs */
void Device_addInputBus(struct Device* d, struct Bus* b)
{
    struct BusList* elt = createBusListElt(b);
    elt->next = d->inputs;
    d->inputs = elt;

    Bus_addOutputDevice(b, d);
}

/* Structure destroyers */
void destroyDevice(struct Device* d)
{
    struct BusList* curr, *next;

    curr = d->inputs;
    while (curr) {
	next = curr->next;
	free(curr);
	curr = next;
    }

    curr = d->outputs;
    while (curr) {
	next = curr->next;
	free(curr);
	curr = next;
    }

    d->inputs = NULL;
    d->outputs = NULL;
    
    free(d);
}

void destroyBus(struct Bus* b)
{
    struct DeviceList* curr, *next;

    curr = b->inputs;
    while (curr) {
	next = curr->next;
	free(curr);
	curr = next;
    }

    curr = b->outputs;
    while (curr) {
	next = curr->next;
	free(curr);
	curr = next;
    }

    b->inputs = NULL;
    b->outputs = NULL;

    free(b);
}

struct Bus* busA;
struct Bus* busB;
struct Bus* busC;
struct Bus* busD;

struct Device* deviceA;
struct Device* deviceB;
struct Device* deviceC;
struct Device* deviceD;
struct Device* deviceE;
struct Device* deviceF;
struct Device* deviceG;
struct Device* deviceH;
struct Device* deviceI;

void destroyAll()
{
    destroyBus(busA);
    destroyBus(busB);
    destroyBus(busC);
    destroyBus(busD);

    destroyDevice(deviceA);
    destroyDevice(deviceB);
    destroyDevice(deviceC);
    destroyDevice(deviceD);
    destroyDevice(deviceE);
    destroyDevice(deviceF);
    destroyDevice(deviceG);
    destroyDevice(deviceH);
    destroyDevice(deviceI);
}

int main (int argc, char** argv)
{
    /* Create my set of nodes */
    busA = createBus("Bus A");
    busB = createBus("Bus B");
    busC = createBus("Bus C");
    busD = createBus("Bus D");

    deviceA = createDevice("Device A");
    deviceB = createDevice("Device B");
    deviceC = createDevice("Device C");
    deviceD = createDevice("Device D");
    deviceE = createDevice("Device E");
    deviceF = createDevice("Device F");
    deviceG = createDevice("Device G");
    deviceH = createDevice("Device H");
    deviceI = createDevice("Device I");

    /* Create the graph of devices and buses */
    Device_addOutputBus(deviceA, busA);
    Device_addOutputBus(deviceA, busB);

    Device_addInputBus(deviceB, busA);
    Device_addOutputBus(deviceB, busB);

    Device_addInputBus(deviceC, busA);
    Device_addInputBus(deviceC, busB);

    Device_addOutputBus(deviceD, busC);
    
    Device_addInputBus(deviceE, busA);
    Device_addInputBus(deviceE, busB);
    Device_addInputBus(deviceE, busC);

    Device_addInputBus(deviceF, busC);

    Device_addOutputBus(deviceG, busC);
    
    Device_addInputBus(deviceH, busC);
    Device_addOutputBus(deviceH, busD);

    Device_addInputBus(deviceI, busD);
    Device_addOutputBus(deviceI, busD);

ViewGraph:
    destroyAll();

    return 0;
}
