


#include "IDiscountStrategy.h"

class QuarterDiscountStrategy : public IDiscountStrategy {
  public:
    float CalcDiscount(const float& price) override;
};

float QuarterDiscountStrategy::CalcDiscount(const float& price) {
    return price * 0.75;
}

