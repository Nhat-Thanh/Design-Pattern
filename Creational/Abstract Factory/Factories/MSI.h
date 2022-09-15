#ifndef MSI_H
#define MSI_H
#include "ITechFactory.h"
#include "Laptop.h"
#include "Monitor.h"
#include "VGA.h"

class MSI : public ITechFactory {
  public:
    ILaptop* CreateLaptop() const override;
    IMonitor* CreateMonitor() const override;
    IVGA* CreateVGA() const override;
};

ILaptop* MSI::CreateLaptop() const {
    return new Laptop("MSI Laptop");
}

IMonitor* MSI::CreateMonitor() const {
    return new Monitor("MSI Monitor");
}

IVGA* MSI::CreateVGA() const {
    return new VGA("MSI RTX 3090");
}

#endif