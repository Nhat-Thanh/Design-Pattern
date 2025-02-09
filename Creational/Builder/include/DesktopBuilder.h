#ifndef DESKTOP_BUILDER_H
#define DESKTOP_BUILDER_H

#include "IComputerBuilder.h"
#include <map>

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

#endif

