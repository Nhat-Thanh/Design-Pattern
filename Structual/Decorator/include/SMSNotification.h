#ifndef SMS_NOTIFICATION_H
#define SMS_NOTIFICATION_H

#include "Notification.h"

class SMSNotification : public Notification {
  private:
    Notification* m_Notification;

  public:
    SMSNotification(Notification* notification);
    void Notify() const override;
};

SMSNotification::SMSNotification(Notification* notification) {
    m_Notification = notification;
    m_Message = "You have a new SMS message";
}

void SMSNotification::Notify() const {
    m_Notification->Notify();
    std::cout << "SMS: " << m_Message << '\n';
}

#endif
