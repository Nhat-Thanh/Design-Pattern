#ifndef AMERIAN_H
#define AMERIAN_H

#include "AbstractPerson.h"

class Amerian : public AbstractPerson {
  protected:
    void Go(const std::string& destination) override;
};

void Amerian::Go(const std::string& destination) {
    std::cout << "Go to " << destination << " by plane\n";
}

#endif