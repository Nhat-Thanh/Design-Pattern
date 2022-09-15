#ifndef FIREFOX_H
#define FIREFOX_H

#include "IPrototype.h"
#include <iostream>

class Firefox : public IPrototype {
  private:
    std::string m_Version;

  public:
    Firefox(const std::string& version);
    IPrototype* Clone() const override;
    void PrintInfo() const override;
};

Firefox::Firefox(const std::string& version) {
    m_Version = version;
}

IPrototype* Firefox::Clone() const {
    return new Firefox(*this);
}

void Firefox::PrintInfo() const {
    std::cout << "I'm Moliza Firefox - version: " << m_Version << '\n';
}

#endif
