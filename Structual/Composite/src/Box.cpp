#include "Box.h"

void Box::Add(IComponent* product) {
    m_Products.push_back(product);
}

void Box::Remove(IComponent* product) {
    m_Products.remove(product);
}

float Box::GetPrice() const {
    float total_price = 0.0f;
    for (const IComponent* product : m_Products) {
        total_price += product->GetPrice();
    }
    return total_price;
}

