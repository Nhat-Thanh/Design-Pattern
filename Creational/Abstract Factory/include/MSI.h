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

#endif

