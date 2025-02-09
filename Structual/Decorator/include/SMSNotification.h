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

#endif

