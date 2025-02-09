#ifndef MONKEY_HANDLER_H
#define MONKEY_HANDLER_H

#include "AbstractHandler.h"

class MonkeyHandler : public AbstractHandler {
  public:
    std::string Handle(const std::string& order);
};

#endif
