#ifndef DOG_HANDLER_H
#define DOG_HANDLER_H

#include "AbstractHandler.h"

class DogHandler : public AbstractHandler {
  public:
    std::string Handle(const std::string& order);
};

#endif
