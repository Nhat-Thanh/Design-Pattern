#ifndef IHANDLER_H
#define IHANDLER_H

#include <string>

class IHandler {
  public:
    virtual void SetNext(IHandler* handler) = 0;
    virtual std::string Handle(const std::string& order) = 0;
};

class AbstractHandler : public IHandler {
  protected:
    IHandler* m_Next;

  public:
    AbstractHandler();
    void SetNext(IHandler* handler) override;
    std::string Handle(const std::string& order) override;
};

AbstractHandler::AbstractHandler() : m_Next(nullptr) {}

void AbstractHandler::SetNext(IHandler* handler) {
    m_Next = handler;
}

std::string AbstractHandler::Handle(const std::string& order) {
    if (m_Next == nullptr) {
        return std::string("");
    }
    return m_Next->Handle(order);
}

#endif