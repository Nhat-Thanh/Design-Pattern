#include "EmailNotification.h"
#include "FacebookNotification.h"
#include "Notification.h"
#include "SMSNotification.h"

int main() {
    Notification* notification = new Notification();
    notification->SetMessage("Hello Nhat Thanh");
    EmailNotification* email = new EmailNotification(notification);
    FacebookNotification* fb = new FacebookNotification(email);
    SMSNotification* sms = new SMSNotification(fb);
    sms->Notify();

    delete sms;
    delete fb;
    delete email;
    delete notification;

    return 0;
}
