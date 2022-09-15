#ifndef WINDOWS_BUTTON_H
#define WINDOWS_BUTTON_H

#include "IButton.h"
#include <iostream>

class WindowsButton : public IButton {
  public:
    void Render() const override;
    void onClick() const override;
};

void WindowsButton::Render() const {
    std::cout << "Render Windows button\n";
}

void WindowsButton::onClick() const {
    std::cout << "Click Windows button\n";
}

#endif