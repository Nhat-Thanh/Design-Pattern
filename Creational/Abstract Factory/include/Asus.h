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

#endif

