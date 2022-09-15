#ifndef HTML_BUTTON_H
#define HTML_BUTTON_H

#include "IButton.h"
#include <iostream>

class HTMLButton : public IButton {
  public:
    void Render() const override;
    void onClick() const override;
};

void HTMLButton::Render() const {
    std::cout << "Render HTML button\n";
}

void HTMLButton::onClick() const {
    std::cout << "Click HTML button\n";
}

#endif