#include "FacebookNotification.h"
#include <iostream>

FacebookNotification::FacebookNotification(Notification* notification) {
    m_Notification = notification;
    m_Message = "You have a new facebook notification";
}

void FacebookNotification::Notify() const {
    m_Notification->Notify();
    std::cout << "Facebook: " << m_Message << '\n';
}

