


#include "IScreenState.h"
#include <iostream>

class OffScreenState : public IScreenState {
  public:
    void DoubleTap() override;
};

void OffScreenState::DoubleTap() {
    std::cout << "Off screen state -> Turn on screen\n";
}

