#ifndef DESKTOP_BUILDER_H
#define DESKTOP_BUILDER_H

#include "IComputerBuilder.h"
#include <map>
#include <iostream>

class DesktopBuilder : public IComputerBuilder {
  private:
    std::map<std::string, std::string> m_Components;

  public:
    void BuildMainboard(const std::string& name) override;
    void BuildCPU(const std::string& name) override;
    void BuildPSU(const std::string& name) override;
    void BuildRAM(const std::string& name) override;
    void PrintComponents() const override;
};

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

#endif