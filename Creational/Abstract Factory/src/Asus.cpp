#include "Asus.h"
#include <iostream>

ILaptop* ASUS::CreateLaptop() const {
    return new Laptop("ASUS Laptop");
}

IMonitor* ASUS::CreateMonitor() const {
    return new Monitor("ASUS Monitor");
}

IVGA* ASUS::CreateVGA() const {
    return new VGA("ASUS RTX 3090");
}

