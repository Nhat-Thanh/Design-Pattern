#ifndef ITECHFACTORY_H
#define ITECHFACTORY_H

#include "ILaptop.h"
#include "IMonitor.h"
#include "IVGA.h"

class ITechFactory {
  public:
    virtual ILaptop* CreateLaptop() const = 0;
    virtual IMonitor* CreateMonitor() const = 0;
    virtual IVGA* CreateVGA() const = 0;
};

#endif
