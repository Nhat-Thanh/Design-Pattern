#ifndef SQUARE_H
#define SQUARE_H

#include "ColorShape.h"

class ColorSquare : public ColorShape {
  public:
    ColorSquare(IColor* color);
    std::string GetInfo() const override;
};

ColorSquare::ColorSquare(IColor* color) : ColorShape(color) {}

std::string ColorSquare::GetInfo() const {
    std::string info(m_Color->GetColor());
    info.append(" ");
    info.append("Square");
    return info;
}

#endif