#ifndef BLUE_H
#define BLUE_H

#include "IColor.h"

class Blue : public IColor {
  public:
    std::string GetColor() const override;
};

std::string Blue::GetColor() const {
    return std::string("Blue");
}

#endif