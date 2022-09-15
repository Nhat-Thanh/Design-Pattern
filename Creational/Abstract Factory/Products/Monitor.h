#ifndef MONITOR_H
#define MONITOR_H

#include "IMonitor.h"
#include <iostream>
#include <string>

class Monitor : public IMonitor {
  private:
    std::string m_Name;

  public:
    Monitor(const std::string& name);
    void PrintName() const override;
};

Monitor::Monitor(const std::string& name) {
    m_Name = name;
}

void Monitor::PrintName() const {
    std::cout << m_Name << '\n';
}

#endif