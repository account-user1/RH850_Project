#include <list>
#include <set>
#include <string>
#include "labels.h"

class Device;
class Bus;

typedef std::list<Device*> DeviceList;
typedef std::list<Bus*> BusList;

class Device {
public:
    std::string deviceName;
    int deviceID;

    Device(const char* name);
    void addOutputBus(Bus* output);
    void addInputBus(Bus* input);

protected:
    BusList _inputs;
    BusList _outputs;
};

class Bus {
public:
    std::string busName;
    int busID;

    Bus(const char* name);
    void addOutputDevice(Device* output);
    void addInputDevice(Device* input);

protected:
    DeviceList _inputs;
    DeviceList _outputs;
    
};

Device::Device(const char* name)
{
    static int currID = 0;
    deviceID = currID++;
    deviceName = name;
}

// Hook the output of this device up to a bus
void Device::addOutputBus(Bus* output)
{
    _outputs.push_back(output);
    output->addInputDevice(this);
}

// Hook the input of this device up to a bus
void Device::addInputBus(Bus* input)
{
    _inputs.push_back(input);
    input->addOutputDevice(this);
}

Bus::Bus(const char* name)
{
    static int currID = 0;
    busID = currID++;
    busName = name;
}

void Bus::addOutputDevice(Device* output)
{
    _outputs.push_back(output);
}

void Bus::addInputDevice(Device* input)
{
    _inputs.push_back(input);
}

int main (int argc, char** argv)
{
    Bus busA("Bus A");
    Bus busB("Bus B");
    Bus busC("Bus C");
    Bus busD("Bus D");

    Device deviceA("Device A");
    Device deviceB("Device B");
    Device deviceC("Device C");
    Device deviceD("Device D");
    Device deviceE("Device E");
    Device deviceF("Device F");
    Device deviceG("Device G");
    Device deviceH("Device H");
    Device deviceI("Device I");

    // Create the graph of devices
    deviceA.addOutputBus(&busA);
    deviceA.addOutputBus(&busB);

    deviceB.addInputBus(&busA);
    deviceB.addOutputBus(&busB);

    deviceC.addInputBus(&busB);
    deviceC.addInputBus(&busA);

    deviceD.addOutputBus(&busC);

    deviceE.addInputBus(&busC);
    deviceE.addInputBus(&busB);
    deviceE.addInputBus(&busA);

    deviceF.addInputBus(&busC);

    deviceG.addOutputBus(&busC);

    deviceH.addInputBus(&busC);
    deviceH.addOutputBus(&busD);

    deviceI.addInputBus(&busD);
    deviceI.addOutputBus(&busD);

ViewGraph:
    return 0;
}
