#ifndef PRODUCT_H
#define PRODUCT_H

#include "IComponent.h"
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

#endif

