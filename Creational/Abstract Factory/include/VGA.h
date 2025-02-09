#ifndef VGA_H
#define VGA_H

#include "IVGA.h"
#include <string>

class VGA : public IVGA {
  private:
    std::string m_Name;

  public:
    VGA(const std::string& name);
    void PrintName() const override;
};

#endif

