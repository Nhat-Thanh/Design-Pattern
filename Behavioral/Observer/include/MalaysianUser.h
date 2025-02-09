#ifndef MALAYSIAN_USER_H
#define MALAYSIAN_USER_H

#include "UserBase.h"

class MalaysianUser : public UserBase {
  public:
    void Update(const float& price_in_USD) override;
};

#endif

