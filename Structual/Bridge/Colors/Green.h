#ifndef GREEN_H
#define GREEN_H

#include "IColor.h"

class Green : public IColor {
  public:
    std::string GetColor() const override;
};

std::string Green::GetColor() const {
    return std::string("Green");
}

#endif