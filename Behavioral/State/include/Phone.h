#ifndef PHONE_H
#define PHONE_H

#include "IScreenState.h"

class Phone : public IScreenState {
  private:
    IScreenState* m_ScreenState;

  public:
    Phone(IScreenState* state);
    void SetScreenState(IScreenState* state);
    void DoubleTap();
};

#endif

