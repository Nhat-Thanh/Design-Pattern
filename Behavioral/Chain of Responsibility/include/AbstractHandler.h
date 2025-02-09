#ifndef _ABSTRACTHANDLER_H_
#define _ABSTRACTHANDLER_H_

#include "IHandler.h"

class AbstractHandler : public IHandler {
  protected:
    IHandler* m_Next;

  public:
    AbstractHandler();
    void SetNext(IHandler* handler) override;
    std::string Handle(const std::string& order) override;
};

#endif
