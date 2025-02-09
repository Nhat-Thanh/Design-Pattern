#include "Gigabyte.h"
#include <iostream>

ILaptop* Gigabyte::CreateLaptop() const {
    return new Laptop("Gigabyte Laptop");
}

IMonitor* Gigabyte::CreateMonitor() const {
    return new Monitor("Gigabyte Monitor");
}

IVGA* Gigabyte::CreateVGA() const {
    return new VGA("Gigabyte RTX 3090");
}

