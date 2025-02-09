#ifndef INTERNET_SERVICE_PROVIDER_H
#define INTERNET_SERVICE_PROVIDER_H

#include "IServiceProvider.h"
#include "IUser.h"
#include <list>

class InternetServiceProvider : public IServiceProvider {
  private:
    std::list<IUser*> m_Users;
    float m_PriceInUSD;

  public:
    InternetServiceProvider();
    void Attach(IUser* user) override;
    void Remove(IUser* user) override;
    void Notify() override;
    void set_price(const float& price_in_USD);
};

#endif

