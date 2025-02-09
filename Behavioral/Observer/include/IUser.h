#ifndef IUSER_H
#define IUSER_H

#include "IServiceProvider.h"

class IUser {
  public:
    void Register(IServiceProvider* service_provider);
    void Unregister(IServiceProvider* service_provider);
    virtual void Update(const float& price_in_USD) = 0;
};

void IUser::Register(IServiceProvider* service_provider) {
    service_provider->Attach(this);
}

void IUser::Unregister(IServiceProvider* service_provider) {
    service_provider->Remove(this);
}

#endif