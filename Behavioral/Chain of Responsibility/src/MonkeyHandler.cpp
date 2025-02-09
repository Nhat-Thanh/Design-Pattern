#include "MonkeyHandler.h"

std::string MonkeyHandler::Handle(const std::string& order) {
    if (order == "banana") {
        return std::string("Monkey");
    }
    return AbstractHandler::Handle(order);
}

