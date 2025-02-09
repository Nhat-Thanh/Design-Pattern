#include "JapaneseUser.h"
#include <iostream>

void JapaneseUser::Update(const float& price_in_USD) {
    std::cout << "Price update: " << price_in_USD * 143.98 << " Yen\n";
}

