#ifndef IUSER_H
#define IUSER_H

#include "IServiceProvider.h"

class IUser {
  public:
    virtual void Update(const float& price_in_USD) = 0;
};

#endif

