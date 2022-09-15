#ifndef IMEDITATOR_H
#define IMEDITATOR_H

#include "BaseButton.h"
#include <string>

class BaseButton;
class IMediator {
  public:
    virtual void Notify(BaseButton* button, const std::string& event) = 0;
};

#endif