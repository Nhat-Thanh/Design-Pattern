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

#endif

