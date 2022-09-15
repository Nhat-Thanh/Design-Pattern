#ifndef VGA_H
#define VGA_H

#include "IVGA.h"
#include <iostream>
#include <string>

class VGA : public IVGA {
  private:
    std::string m_Name;

  public:
    VGA(const std::string& name);
    void PrintName() const override;
};

VGA::VGA(const std::string& name) {
    m_Name = name;
}

void VGA::PrintName() const {
    std::cout << m_Name << '\n';
}

#endif