#ifndef FIREFOX_H
#define FIREFOX_H

#include "IPrototype.h"
#include <string>

class Firefox : public IPrototype {
  private:
    std::string m_Version;

  public:
    Firefox(const std::string& version);
    IPrototype* Clone() const override;
    void PrintInfo() const override;
};

#endif

