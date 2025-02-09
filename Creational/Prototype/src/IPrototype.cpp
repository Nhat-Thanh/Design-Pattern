


class IPrototype {
  public:
    virtual IPrototype* Clone() const = 0;
    virtual void PrintInfo() const = 0;
};

