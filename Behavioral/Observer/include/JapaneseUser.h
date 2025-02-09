#ifndef JAPANESE_USER_H
#define JAPANESE_USER_H

#include "UserBase.h"

class JapaneseUser : public UserBase {
  public:
    void Update(const float& price_in_USD) override;
};

#endif

