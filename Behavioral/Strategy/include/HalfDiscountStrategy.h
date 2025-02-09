#ifndef HALF_DISCOUNT_STRATEGY_H
#define HALF_DISCOUNT_STRATEGY_H

#include "IDiscountStrategy.h"

class HalfDiscountStrategy : public IDiscountStrategy {
  public:
    float CalcDiscount(const float& price) override;
};

#endif

