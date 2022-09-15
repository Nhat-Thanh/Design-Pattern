#ifndef LAPTOP_BUILDER_H
#define LAPTOP_BUILDER_H

#include "IComputerBuilder.h"
#include <map>
#include <iostream>

class LaptopBuilder : public IComputerBuilder {
  private:
    std::map<std::string, std::string> m_Components;

  public:
    void BuildMainboard(const std::string& name) override;
    void BuildCPU(const std::string& name) override;
    void BuildPSU(const std::string& name) override;
    void BuildRAM(const std::string& name) override;
    void PrintComponents() const override;
};

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

#endif