#include "EmailNotification.h"
#include <iostream>

EmailNotification::EmailNotification(Notification* notification) {
    m_Notification = notification;
    m_Message = "You have a new email";
}

void EmailNotification::Notify() const {
    m_Notification->Notify();
    std::cout << "Email: " << m_Message << '\n';
}

