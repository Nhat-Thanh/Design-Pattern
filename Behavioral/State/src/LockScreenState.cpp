


#include "IScreenState.h"
#include <iostream>

class LockScreenState : public IScreenState {
  public:
    void DoubleTap() override;
};

void LockScreenState::DoubleTap() {
    std::cout << "Lock screen state -> Turn off screen\n";
}

