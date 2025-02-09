#include "HTMLButton.h"
#include <iostream>

void HTMLButton::Render() const {
    std::cout << "Render HTML button\n";
}

void HTMLButton::onClick() const {
    std::cout << "Click HTML button\n";
}

