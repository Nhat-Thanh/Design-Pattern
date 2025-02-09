#include "LaptopBuilder.h"
#include <iostream>

void LaptopBuilder::BuildMainboard(const std::string& name) {
    m_Components["Mainboard"] = name;
}

void LaptopBuilder::BuildCPU(const std::string& name) {

    m_Components["CPU"] = name;
}

void LaptopBuilder::BuildPSU(const std::string& name) {
    m_Components["PSU"] = name;
}

void LaptopBuilder::BuildRAM(const std::string& name) {
    m_Components["RAM"] = name;
}

void LaptopBuilder::PrintComponents() const {
    for (const std::pair<std::string, std::string>& component : m_Components) {
        std::cout << component.first << ": " << component.second << '\n';
    }
}

