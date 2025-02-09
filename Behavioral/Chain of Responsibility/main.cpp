#include "DogHandler.h"
#include "HumanHandler.h"
#include "MonkeyHandler.h"
#include <array>
#include <iostream>

int main() {
    DogHandler dog_handler;
    MonkeyHandler monkey_handler;
    HumanHandler human_handler;
    dog_handler.SetNext(&monkey_handler);
    monkey_handler.SetNext(&human_handler);

    std::array<std::string, 5> food = {"banana", "nut", "bone", "mouse", "rice"};
    for (const std::string& order : food) {
        std::string result = dog_handler.Handle(order);
        if (result.empty()) {
            std::cout << "Can not handle " << order << " order\n";
            continue;
        }
        std::cout << order << " - " << result << '\n';
    }

    return 0;
}
