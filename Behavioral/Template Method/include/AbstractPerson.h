#ifndef ABSTRACT_PERSON_H
#define ABSTRACT_PERSON_H

#include <iostream>
#include <string>

class AbstractPerson {
  protected:
    void Prepare();
    virtual void Go(const std::string& destination) = 0;

  public:
    void GotoVietnam();
};

void AbstractPerson::Prepare() {
    std::cout << "Preparing\n";
}

void AbstractPerson::GotoVietnam() {
    Prepare();
    Go("Vietnam");
}

#endif