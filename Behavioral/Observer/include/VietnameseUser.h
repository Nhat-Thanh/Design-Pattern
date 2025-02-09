#ifndef VIETNAMESE_USER_H
#define VIETNAMESE_USER_H

#include "IUser.h"
#include <iostream>

class VietnameseUser : public IUser {
  public:
    void Update(const float& price_in_USD) override;
};

void VietnameseUser::Update(const float& price_in_USD) {
    std::cout << "Price update: " << price_in_USD * 23.552 << " VND\n";
}

#endif
