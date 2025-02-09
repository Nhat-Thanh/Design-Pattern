#include "MalaysianUser.h"
#include <iostream>

void MalaysianUser::Update(const float& price_in_USD) {
    std::cout << "Price update: " << price_in_USD * 4.5 << " Ringgit\n";
}

