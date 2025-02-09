


#include "Notification.h"

class EmailNotification : public Notification {
  private:
    Notification* m_Notification;

  public:
    EmailNotification(Notification* notification);
    void Notify() const override;
};

EmailNotification::EmailNotification(Notification* notification) {
    m_Notification = notification;
    m_Message = "You have a new email";
}

void EmailNotification::Notify() const {
    m_Notification->Notify();
    std::cout << "Email: " << m_Message << '\n';
}


