#ifndef LAPTOP_H
#define LAPTOP_H

#include "ILaptop.h"
#include <iostream>
#include <string>

class Laptop : public ILaptop {
  private:
    std::string m_Name;

  public:
    Laptop(const std::string& name);
    void PrintName() const override;
};

Laptop::Laptop(const std::string& name) {
    m_Name = name;
}

void Laptop::PrintName() const {
    std::cout << m_Name << '\n';
}

#endif