#include "BaseButton.h"

BaseButton::BaseButton() : m_Mediator(nullptr) {}
BaseButton::BaseButton(IMediator* mediator) : m_Mediator(mediator) {}

void BaseButton::SetMediator(IMediator* mediator) {
    m_Mediator = mediator;
}

