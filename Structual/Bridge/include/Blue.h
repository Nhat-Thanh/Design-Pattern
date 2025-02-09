#ifndef BLUE_H
#define BLUE_H

#include "IColor.h"

class Blue : public IColor {
  public:
    std::string GetColor() const override;
};

#endif

