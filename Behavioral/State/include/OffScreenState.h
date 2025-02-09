#ifndef OFFSCREEN_STATE_H
#define OFFSCREEN_STATE_H

#include "IScreenState.h"

class OffScreenState : public IScreenState {
  public:
    void DoubleTap() override;
};

#endif

