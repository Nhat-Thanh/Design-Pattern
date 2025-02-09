#ifndef COPY_BUTTON_H
#define COPY_BUTTON_H

#include "BaseButton.h"

class CopyButton : public BaseButton {
  public:
    CopyButton();
    CopyButton(IMediator* mediator);
    void onClick() override;
    void Execute() override;
};

#endif
