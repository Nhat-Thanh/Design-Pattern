#ifndef LOCKSCREEN_STATE_H
#define LOCKSCREEN_STATE_H

#include "IScreenState.h"

class LockScreenState : public IScreenState {
  public:
    void DoubleTap() override;
};

#endif

