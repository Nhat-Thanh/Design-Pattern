#include "Ticket.h"

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

