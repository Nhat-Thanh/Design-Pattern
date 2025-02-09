#include "HumanHandler.h"

std::string HumanHandler::Handle(const std::string& order) {
    if (order == "rice") {
        return std::string("Human");
    }
    return AbstractHandler::Handle(order);
}

