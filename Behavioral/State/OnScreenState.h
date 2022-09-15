#ifndef ONSCREEN_STATE_H
#define ONSCREEN_STATE_H

#include "IScreenState.h"
#include <iostream>

class OnScreenState : public IScreenState {
  public:
    void DoubleTap() override;
};

void OnScreenState::DoubleTap() {
    std::cout << "On screen state -> Do nothing\n";
}

#endif