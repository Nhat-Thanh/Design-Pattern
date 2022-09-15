#include "Asus.h"
#include "Gigabyte.h"
#include "MSI.h"

void run(const ITechFactory* factory) {
    IMonitor* monitor = factory->CreateMonitor();
    IVGA* vga = factory->CreateVGA();
    ILaptop* laptop = factory->CreateLaptop();

    monitor->PrintName();
    vga->PrintName();
    laptop->PrintName();

    delete monitor;
    delete vga;
    delete laptop;
}

int main() {
    ITechFactory* factory = new ASUS;
    run(factory);
    delete factory;

    factory = new Gigabyte();
    run(factory);
    delete factory;

    factory = new MSI();
    run(factory);
    delete factory;

    return 0;
}