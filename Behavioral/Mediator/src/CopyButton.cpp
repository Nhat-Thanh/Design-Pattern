#include "CopyButton.h"
#include <iostream>

CopyButton::CopyButton() : BaseButton() {}
CopyButton::CopyButton(IMediator* mediator) : BaseButton(mediator) {}

void CopyButton::onClick() {
    m_Mediator->Notify(this, "copy");
}

void CopyButton::Execute() {
    std::cout << "Copy selected text\n";
}

