#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ColorShape.h"

class ColorTriangle : public ColorShape {
  public:
    ColorTriangle(IColor* color);
    std::string GetInfo() const override;
};

#endif

