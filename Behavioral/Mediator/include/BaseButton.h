#ifndef BASE_BUTTON_H
#define BASE_BUTTON_H

#include "IMediator.h"

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

#endif
