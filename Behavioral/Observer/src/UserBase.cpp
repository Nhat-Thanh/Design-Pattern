#include "UserBase.h"

void UserBase::Register(IServiceProvider* service_provider) {
    service_provider->Attach(this);
}

void UserBase::Unregister(IServiceProvider* service_provider) {
    service_provider->Remove(this);
}

