#ifndef TICKET_H
#define TICKET_H

#include "NoDiscountStrategy.h"

class Ticket {
  private:
    float m_Price;
    IDiscountStrategy* m_DiscountStrategy;

  public:
    Ticket();
    void SetPrice(const float& price);
    void SetDiscount(IDiscountStrategy* strategy);
    float GetPrice() const;
};

Ticket::Ticket() : m_Price(0.0f), m_DiscountStrategy(nullptr) {}

void Ticket::SetPrice(const float& price) {
    if (price > 0.0f) {
        m_Price = price;
    }
}

void Ticket::SetDiscount(IDiscountStrategy* strategy) {
    m_DiscountStrategy = strategy;
}

float Ticket::GetPrice() const {
    if (m_DiscountStrategy != nullptr) {
        return m_DiscountStrategy->CalcDiscount(m_Price);
    }
    return m_Price;
}

#endif