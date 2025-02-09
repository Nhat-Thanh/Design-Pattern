#include "ColorRectangle.h"

ColorRectangle::ColorRectangle(IColor* color) : ColorShape(color) {}

std::string ColorRectangle::GetInfo() const {
    std::string info(m_Color->GetColor());
    info.append(" ");
    info.append("Rectangle");
    return info;
}

