#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ColorShape.h"

class ColorRectangle : public ColorShape {
  public:
    ColorRectangle(IColor* color);
    std::string GetInfo() const override;
};

ColorRectangle::ColorRectangle(IColor* color) : ColorShape(color) {}

std::string ColorRectangle::GetInfo() const {
    std::string info(m_Color->GetColor());
    info.append(" ");
    info.append("Rectangle");
    return info;
}

#endif