#ifndef ISHARED_OBJECT_H
#define ISHARED_OBJECT_H

#include <ostream>
#include <string>

class ISharedObject {
  public:
    virtual std::string GetKey() const = 0;
    virtual std::string GetName() const = 0;
};

#endif
