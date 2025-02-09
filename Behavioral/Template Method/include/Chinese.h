#ifndef CHINESE_H
#define CHINESE_H

#include "AbstractPerson.h"

class Chinese : public AbstractPerson {
  protected:
    void Go(const std::string& destination) override;
};

void Chinese::Go(const std::string& destination) {
    std::cout << "Go to " << destination << " by car\n";
}

#endif