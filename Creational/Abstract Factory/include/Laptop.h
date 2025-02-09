#ifndef LAPTOP_H
#define LAPTOP_H

#include "ILaptop.h"
#include <string>

class Laptop : public ILaptop {
  private:
    std::string m_Name;

  public:
    Laptop(const std::string& name);
    void PrintName() const override;
};

#endif

