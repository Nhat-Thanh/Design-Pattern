#ifndef PHONE_H
#define PHONE_H

#include "IScreenState.h"
#include <iostream>

class Phone {
  private:
    IScreenState* m_ScreenState;

  public:
    Phone(IScreenState* state);
    void SetScreenState(IScreenState* state);
    void DoubleTap();
};

Phone::Phone(IScreenState* state) : m_ScreenState(state) {}

void Phone::SetScreenState(IScreenState* state) {
    m_ScreenState = state;
}

void Phone::DoubleTap() {
    if (m_ScreenState != nullptr) {
        m_ScreenState->DoubleTap();
    }
}

#endif