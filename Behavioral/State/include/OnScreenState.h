#ifndef ONSCREEN_STATE_H
#define ONSCREEN_STATE_H

#include "IScreenState.h"

class OnScreenState : public IScreenState {
  public:
    void DoubleTap() override;
};

#endif

