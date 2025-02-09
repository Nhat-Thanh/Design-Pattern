#ifndef RED_H
#define RED_H

#include "IColor.h"

class Red : public IColor {
  public:
    std::string GetColor() const override;
};

#endif

