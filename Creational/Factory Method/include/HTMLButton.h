#ifndef HTML_BUTTON_H
#define HTML_BUTTON_H

#include "IButton.h"

class HTMLButton : public IButton {
  public:
    void Render() const override;
    void onClick() const override;
};

#endif

