#ifndef RED_H
#define RED_H

#include "IColor.h"

class Red : public IColor {
  public:
    std::string GetColor() const override;
};

std::string Red::GetColor() const {
    return std::string("Red");
}

#endif