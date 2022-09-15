#ifndef JAPANESE_H
#define JAPANESE_H

#include "AbstractPerson.h"

class Japanese : public AbstractPerson {
  protected:
    void Go(const std::string& destination) override;
};

void Japanese::Go(const std::string& destination) {
    std::cout << "Go to " << destination << " by ship\n";
}

#endif