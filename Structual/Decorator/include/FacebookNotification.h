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

FacebookNotification::FacebookNotification(Notification* notification) {
    m_Notification = notification;
    m_Message = "You have a new facebook notification";
}

void FacebookNotification::Notify() const {
    m_Notification->Notify();
    std::cout << "Facebook: " << m_Message << '\n';
}

#endif
