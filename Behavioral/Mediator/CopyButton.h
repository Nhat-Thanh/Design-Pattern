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

CopyButton::CopyButton() : BaseButton() {}
CopyButton::CopyButton(IMediator* mediator) : BaseButton(mediator) {}

void CopyButton::onClick() {
    m_Mediator->Notify(this, "copy");
}

void CopyButton::Execute() {
    std::cout << "Copy selected text\n";
}

#endif