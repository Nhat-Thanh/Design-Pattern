#ifndef HUMAN_HANDLER_H
#define HUMAN_HANDLER_H

#include "IHandler.h"

class HumanHandler : public AbstractHandler {
  public:
    std::string Handle(const std::string& order);
};

std::string HumanHandler::Handle(const std::string& order) {
    if (order == "rice") {
        return std::string("Human");
    }
    return AbstractHandler::Handle(order);
}

#endif