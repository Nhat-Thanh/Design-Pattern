#ifndef AMERIAN_H
#define AMERIAN_H

#include "AbstractPerson.h"

class American : public AbstractPerson {
  protected:
    void Go(const std::string& destination) override;
};

#endif

