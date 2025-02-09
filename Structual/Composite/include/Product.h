#ifndef PRODUCT_H
#define PRODUCT_H

#include "IComponent.h"
#include <stdexcept>
#include <string>

class Product : public IComponent {
  private:
    std::string m_Name;
    float m_Price;

  public:
    Product(const std::string& name, const float& price);
    float GetPrice() const override;
    void SetPrice(const float& price);
};

Product::Product(const std::string& name, const float& price) {
    if (price < 0.0f) {
        std::logic_error("price must be greater than or equal 0\n");
    }
    m_Price = price;
    m_Name = name;
}

float Product::GetPrice() const {
    return m_Price;
}

void Product::SetPrice(const float& price) {
    if (price < 0.0f) {
        std::logic_error("price must be greater than or equal 0\n");
    }
    m_Price = price;
}

#endif
