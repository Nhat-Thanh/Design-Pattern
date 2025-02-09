#ifndef COLOR_SHAPE_H
#define COLOR_SHAPE_H

#include "IColor.h"
#include <string>

class ColorShape {
  protected:
    IColor* m_Color;

  public:
    ColorShape(IColor* color);
    void SetColor(IColor* color);
    virtual std::string GetInfo() const = 0;
};

#endif

