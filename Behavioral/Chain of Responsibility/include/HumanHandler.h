#ifndef HUMAN_HANDLER_H
#define HUMAN_HANDLER_H

#include "AbstractHandler.h"

class HumanHandler : public AbstractHandler {
  public:
    std::string Handle(const std::string& order);
};

#endif
