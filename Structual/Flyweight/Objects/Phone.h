#ifndef PHONE_H
#define PHONE_H

#include "ISharedObject.h"

class Phone : public ISharedObject {
  private:
    std::string m_Brand;

  public:
    Phone(const std::string& name);
    std::string GetKey() const override;
    std::string GetName() const override;
};

Phone::Phone(const std::string& name) : m_Brand(name) {}

std::string Phone::GetKey() const {
    return m_Brand;
}

std::string Phone::GetName() const {
    std::string name("[");
    name.append(m_Brand);
    name.append("]");
    return name;
}

#endif
