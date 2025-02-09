#ifndef FACEBOOK_NOTIFICATION_H
#define FACEBOOK_NOTIFICATION_H

#include "Notification.h"

class FacebookNotification : public Notification {
  private:
    Notification* m_Notification;

  public:
    FacebookNotification(Notification* notification);
    void Notify() const override;
};

#endif

