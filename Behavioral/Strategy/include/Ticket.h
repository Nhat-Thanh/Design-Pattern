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

#endif

