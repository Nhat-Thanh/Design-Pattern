#include "WindowsButton.h"
#include <iostream>

void WindowsButton::Render() const {
    std::cout << "Render Windows button\n";
}

void WindowsButton::onClick() const {
    std::cout << "Click Windows button\n";
}

