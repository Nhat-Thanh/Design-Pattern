#ifndef JAPANESE_H
#define JAPANESE_H

#include "AbstractPerson.h"

class Japanese : public AbstractPerson {
  protected:
    void Go(const std::string& destination) override;
};

#endif

