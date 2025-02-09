#ifndef INOTIFICATION_H
#define INOTIFICATION_H

class INotification {
  public:
    virtual void Notify() const = 0;
};

#endif

