#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ColorShape.h"

class ColorRectangle : public ColorShape {
  public:
    ColorRectangle(IColor* color);
    std::string GetInfo() const override;
};

#endif

