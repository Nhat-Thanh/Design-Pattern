#include "Laptop.h"
#include <iostream>

Laptop::Laptop(const std::string& name) {
    m_Name = name;
}

void Laptop::PrintName() const {
    std::cout << m_Name << '\n';
}

