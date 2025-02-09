#ifndef IBUTTONN_H
#define IBUTTONN_H

class IButton {
  public:
    virtual void Render() const = 0;
    virtual void onClick() const = 0;
};

#endif