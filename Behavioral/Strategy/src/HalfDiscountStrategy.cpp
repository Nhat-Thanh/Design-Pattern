


#include "IDiscountStrategy.h"

class HalfDiscountStrategy : public IDiscountStrategy {
  public:
    float CalcDiscount(const float& price) override;
};

float HalfDiscountStrategy::CalcDiscount(const float& price) {
    return price / 2;
}

