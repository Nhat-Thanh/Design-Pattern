#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include "INotification.h"
#include <iostream>

class Notification : public INotification {
  protected:
    std::string m_Message;

  public:
    Notification();
    void SetMessage(const std::string& message);
    void Notify() const override;
};

Notification::Notification() : m_Message("") {}

void Notification::SetMessage(const std::string& message) {
    m_Message = message;
}

void Notification::Notify() const {
    std::cout << m_Message << '\n';
}

#endif
