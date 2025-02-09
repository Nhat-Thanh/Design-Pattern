#ifndef CHINESE_H
#define CHINESE_H

#include "AbstractPerson.h"

class Chinese : public AbstractPerson {
  protected:
    void Go(const std::string& destination) override;
};

#endif

