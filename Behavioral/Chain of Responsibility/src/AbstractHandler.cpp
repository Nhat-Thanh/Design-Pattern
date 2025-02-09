#include "AbstractHandler.h"

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

