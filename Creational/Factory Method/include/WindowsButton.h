#ifndef WINDOWS_BUTTON_H
#define WINDOWS_BUTTON_H

#include "IButton.h"

class WindowsButton : public IButton {
  public:
    void Render() const override;
    void onClick() const override;
};

#endif

