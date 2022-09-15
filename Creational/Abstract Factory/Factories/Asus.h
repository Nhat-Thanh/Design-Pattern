#ifndef ASUS_H
#define ASUS_H
#include "ITechFactory.h"
#include "Laptop.h"
#include "Monitor.h"
#include "VGA.h"

class ASUS : public ITechFactory {
  public:
    ILaptop* CreateLaptop() const override;
    IMonitor* CreateMonitor() const override;
    IVGA* CreateVGA() const override;
};

ILaptop* ASUS::CreateLaptop() const {
    return new Laptop("ASUS Laptop");
}

IMonitor* ASUS::CreateMonitor() const {
    return new Monitor("ASUS Monitor");
}

IVGA* ASUS::CreateVGA() const {
    return new VGA("ASUS RTX 3090");
}

#endif