#ifndef JAPANESE_USER_H
#define JAPANESE_USER_H

#include "IUser.h"
#include <iostream>

class JapaneseUser : public IUser {
  public:
    void Update(const float& price_in_USD) override;
};

void JapaneseUser::Update(const float& price_in_USD) {
    std::cout << "Price update: " << price_in_USD * 143.98 << " Yen\n";
}

#endif
