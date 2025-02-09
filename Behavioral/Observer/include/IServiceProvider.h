#ifndef ISERVICE_PROVIDER_H
#define ISERVICE_PROVIDER_H

class IUser;

class IServiceProvider {
  public:
    virtual void Attach(IUser* user) = 0;
    virtual void Remove(IUser* user) = 0;
    virtual void Notify() = 0;
};

#endif