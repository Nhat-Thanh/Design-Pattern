#ifndef ICOLOR_H
#define ICOLOR_H

#include <string>

class IColor {
  public:
    virtual std::string GetColor() const = 0;
};

#endif