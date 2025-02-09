#include "SMSNotification.h"
#include <iostream>

SMSNotification::SMSNotification(Notification* notification) {
    m_Notification = notification;
    m_Message = "You have a new SMS message";
}

void SMSNotification::Notify() const {
    m_Notification->Notify();
    std::cout << "SMS: " << m_Message << '\n';
}

