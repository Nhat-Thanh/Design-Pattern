#ifndef MONITOR_H
#define MONITOR_H

#include "IMonitor.h"
#include <string>

class Monitor : public IMonitor {
  private:
    std::string m_Name;

  public:
    Monitor(const std::string& name);
    void PrintName() const override;
};

#endif

