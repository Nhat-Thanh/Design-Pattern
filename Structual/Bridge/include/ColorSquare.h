#ifndef SQUARE_H
#define SQUARE_H

#include "ColorShape.h"

class ColorSquare : public ColorShape {
  public:
    ColorSquare(IColor* color);
    std::string GetInfo() const override;
};

#endif

