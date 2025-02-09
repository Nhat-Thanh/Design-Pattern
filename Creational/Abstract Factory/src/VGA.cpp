#include "VGA.h"
#include <iostream>

VGA::VGA(const std::string& name) {
    m_Name = name;
}

void VGA::PrintName() const {
    std::cout << m_Name << '\n';
}

