#ifndef NO_DISCOUNT_STRATEGY_H
#define NO_DISCOUNT_STRATEGY_H

#include "IDiscountStrategy.h"

class NoDiscountStrategy : public IDiscountStrategy {
  public:
    float CalcDiscount(const float& price) override;
};

float NoDiscountStrategy::CalcDiscount(const float& price) {
    return price;
}

#endif