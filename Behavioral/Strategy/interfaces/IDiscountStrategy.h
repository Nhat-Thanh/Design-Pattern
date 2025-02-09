#ifndef IDISCOUNT_STRATEGY_H
#define IDISCOUNT_STRATEGY_H

class IDiscountStrategy {
  public:
    virtual float CalcDiscount(const float& price) = 0;
};

#endif