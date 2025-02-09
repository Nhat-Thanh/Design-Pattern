#include "MSI.h"

ILaptop* MSI::CreateLaptop() const {
    return new Laptop("MSI Laptop");
}

IMonitor* MSI::CreateMonitor() const {
    return new Monitor("MSI Monitor");
}

IVGA* MSI::CreateVGA() const {
    return new VGA("MSI RTX 3090");
}

