#ifndef _USERBASE_H_
#define _USERBASE_H_

#include "IServiceProvider.h"
#include "IUser.h"

class UserBase : public IUser {
  public:
    void Register(IServiceProvider* service_provider);
    void Unregister(IServiceProvider* service_provider);
};

#endif

