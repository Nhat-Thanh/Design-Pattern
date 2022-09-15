#ifndef DOG_HANDLER_H
#define DOG_HANDLER_H

#include "IHandler.h"

class DogHandler : public AbstractHandler {
  public:
    std::string Handle(const std::string& order);
};

std::string DogHandler::Handle(const std::string& order) {
    if (order == "bone") {
        return std::string("Dog");
    }
    return AbstractHandler::Handle(order);
}

#endif