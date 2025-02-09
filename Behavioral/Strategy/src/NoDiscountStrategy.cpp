


#include "IDiscountStrategy.h"

class NoDiscountStrategy : public IDiscountStrategy {
  public:
    float CalcDiscount(const float& price) override;
};

float NoDiscountStrategy::CalcDiscount(const float& price) {
    return price;
}

