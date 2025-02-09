#include "DogHandler.h"

std::string DogHandler::Handle(const std::string& order) {
    if (order == "bone") {
        return std::string("Dog");
    }
    return AbstractHandler::Handle(order);
}

