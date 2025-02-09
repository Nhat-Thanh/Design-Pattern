#ifndef IHANDLER_H
#define IHANDLER_H

#include <string>

class IHandler {
  public:
    virtual void SetNext(IHandler* handler) = 0;
    virtual std::string Handle(const std::string& order) = 0;
};

#endif
