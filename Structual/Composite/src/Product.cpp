#include "Product.h"

Product::Product(const std::string& name, const float& price) {
    if (price >= 0.0f) {
        m_Price = price;
        m_Name = name;
    }
}

float Product::GetPrice() const {
    return m_Price;
}

void Product::SetPrice(const float& price) {
    if (price >= 0.0f) {
        m_Price = price;
    }
}

