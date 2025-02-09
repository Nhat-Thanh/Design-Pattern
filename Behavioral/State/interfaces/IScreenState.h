#ifndef ISTATE_H
#define ISTATE_H

#include <string>

class IScreenState {
  public:
    virtual void DoubleTap() = 0;
};

#endif