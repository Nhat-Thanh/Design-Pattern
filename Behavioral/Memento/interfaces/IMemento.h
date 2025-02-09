#ifndef IMEMENTO_H
#define IMEMENTO_H

#include <string>

class IMemento {
  public:
    virtual std::string GetState() const = 0;
};

#endif