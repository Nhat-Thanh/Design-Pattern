#ifndef FAN_H
#define FAN_H

#include <iostream>

class Fan {
    public:
      void TurnOn();
      void TurnOff();
};

void Fan::TurnOff() {
    std::cout << "Turn off Fan\n";
}

void Fan::TurnOn() {
    std::cout << "Turn on Fan\n";
}

#endif