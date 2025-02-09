#include "ColorTriangle.h"

ColorTriangle::ColorTriangle(IColor* color) : ColorShape(color) {}

std::string ColorTriangle::GetInfo() const {
    std::string info(m_Color->GetColor());
    info.append(" ");
    info.append("Triangle");
    return info;
}

