#ifndef IPROTOTYPE_H
#define IPROTOTYPE_H

class IPrototype {
  public:
    virtual IPrototype* Clone() const = 0;
    virtual void PrintInfo() const = 0;
};

#endif