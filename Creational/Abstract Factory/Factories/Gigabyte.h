#ifndef GIGABYTE_H
#define GIGABYTE_H
#include "ITechFactory.h"
#include "Laptop.h"
#include "Monitor.h"
#include "VGA.h"

class Gigabyte : public ITechFactory {
  public:
    ILaptop* CreateLaptop() const override;
    IMonitor* CreateMonitor() const override;
    IVGA* CreateVGA() const override;
};

ILaptop* Gigabyte::CreateLaptop() const {
    return new Laptop("Gigabyte Laptop");
}

IMonitor* Gigabyte::CreateMonitor() const {
    return new Monitor("Gigabyte Monitor");
}

IVGA* Gigabyte::CreateVGA() const {
    return new VGA("Gigabyte RTX 3090");
}

#endif