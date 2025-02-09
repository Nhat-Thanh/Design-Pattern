#ifndef EMAIL_NOTIFICATION_H
#define EMAIL_NOTIFICATION_H

#include "Notification.h"

class EmailNotification : public Notification {
  private:
    Notification* m_Notification;

  public:
    EmailNotification(Notification* notification);
    void Notify() const override;
};

#endif

