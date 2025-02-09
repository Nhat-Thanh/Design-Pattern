#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include "INotification.h"
#include <string>

class Notification : public INotification {
  protected:
    std::string m_Message;

  public:
    Notification();
    void SetMessage(const std::string& message);
    void Notify() const override;
};

#endif

