#ifndef BOTTLE_H
#define BOTTLE_H

#include "ISharedObject.h"

class Bottle : public ISharedObject {
  private:
    std::string m_Name;
    float m_Volume;

  public:
    Bottle(const std::string& name, const float& volume);
    std::string GetKey() const override;
    std::string GetName() const override;
};

#endif

