#include "Notification.h"
#include <iostream>

Notification::Notification() : m_Message("") {}

void Notification::SetMessage(const std::string& message) {
    m_Message = message;
}

void Notification::Notify() const {
    std::cout << m_Message << '\n';
}

