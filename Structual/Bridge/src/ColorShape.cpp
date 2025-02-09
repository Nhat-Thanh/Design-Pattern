#include "ColorShape.h"

ColorShape::ColorShape(IColor* color) : m_Color(color) {}

void ColorShape::SetColor(IColor* color) {
    m_Color = color;
}

