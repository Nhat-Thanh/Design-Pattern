#ifndef BASE_BUTTON_H
#define BASE_BUTTON_H

#include "IMediator.h"
#include <iostream>

class BaseButton {
  protected:
    IMediator* m_Mediator;

  public:
    BaseButton();
    BaseButton(IMediator* mediator);
    void SetMediator(IMediator* mediator);
    virtual void onClick() = 0;
    virtual void Execute() = 0;
};

BaseButton::BaseButton() : m_Mediator(nullptr) {}
BaseButton::BaseButton(IMediator* mediator) : m_Mediator(mediator) {}

void BaseButton::SetMediator(IMediator* mediator) {
    m_Mediator = mediator;
}

#endif