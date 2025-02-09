#include "VietnameseUser.h"
#include <iostream>

void VietnameseUser::Update(const float& price_in_USD) {
    std::cout << "Price update: " << price_in_USD * 23.552 << " VND\n";
}

