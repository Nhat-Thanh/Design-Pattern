#ifndef VIETNAMESE_USER_H
#define VIETNAMESE_USER_H

#include "UserBase.h"

class VietnameseUser : public UserBase {
  public:
    void Update(const float& price_in_USD) override;
};

#endif

