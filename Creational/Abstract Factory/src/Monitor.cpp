#include "Monitor.h"
#include <iostream>

Monitor::Monitor(const std::string& name) {
    m_Name = name;
}

void Monitor::PrintName() const {
    std::cout << m_Name << '\n';
}

