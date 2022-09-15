#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ColorShape.h"

class ColorTriangle : public ColorShape {
  public:
    ColorTriangle(IColor* color);
    std::string GetInfo() const override;
};

ColorTriangle::ColorTriangle(IColor* color) : ColorShape(color) {}

std::string ColorTriangle::GetInfo() const {
    std::string info(m_Color->GetColor());
    info.append(" ");
    info.append("Triangle");
    return info;
}

#endif