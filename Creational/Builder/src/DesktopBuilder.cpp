#include "DesktopBuilder.h"
#include <iostream>

void DesktopBuilder::BuildMainboard(const std::string& name) {
    m_Components["Mainboard"] = name;
}

void DesktopBuilder::BuildCPU(const std::string& name) {

    m_Components["CPU"] = name;
}

void DesktopBuilder::BuildPSU(const std::string& name) {
    m_Components["PSU"] = name;
}

void DesktopBuilder::BuildRAM(const std::string& name) {
    m_Components["RAM"] = name;
}

void DesktopBuilder::PrintComponents() const {
    for (const std::pair<std::string, std::string>& component : m_Components) {
        std::cout << component.first << ": " << component.second << '\n';
    }
}

