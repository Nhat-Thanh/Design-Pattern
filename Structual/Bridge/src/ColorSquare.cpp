#include "ColorSquare.h"

ColorSquare::ColorSquare(IColor* color) : ColorShape(color) {}

std::string ColorSquare::GetInfo() const {
    std::string info(m_Color->GetColor());
    info.append(" ");
    info.append("Square");
    return info;
}

