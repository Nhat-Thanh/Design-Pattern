#ifndef NEWFILE_BUTTON_H
#define NEWFILE_BUTTON_H

#include "BaseButton.h"

class NewFileButton : public BaseButton {
  public:
    NewFileButton();
    NewFileButton(IMediator* mediator);
    void onClick() override;
    void Execute() override;
};

#endif
