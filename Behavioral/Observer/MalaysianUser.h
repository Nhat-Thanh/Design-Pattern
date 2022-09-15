#ifndef MALAYSIAN_USER_H
#define MALAYSIAN_USER_H

#include "IUser.h"
#include <iostream>

class MalaysianUser : public IUser {
  public:
    void Update(const float& price_in_USD) override;
};

void MalaysianUser::Update(const float& price_in_USD) {
    std::cout << "Price update: " << price_in_USD * 4.5 << " Ringgit\n";
}

#endif
