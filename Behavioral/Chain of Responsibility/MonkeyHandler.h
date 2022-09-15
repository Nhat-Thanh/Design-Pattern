#ifndef MONKEY_HANDLER_H
#define MONKEY_HANDLER_H

#include "IHandler.h"

class MonkeyHandler : public AbstractHandler {
  public:
    std::string Handle(const std::string& order);
};

std::string MonkeyHandler::Handle(const std::string& order) {
    if (order == "banana") {
        return std::string("Monkey");
    }
    return AbstractHandler::Handle(order);
}

#endif