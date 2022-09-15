#ifndef IDATABASE_H
#define IDATABASE_H

class IDatabase {
  public:
    virtual int Request(const int& id) const = 0;
    virtual void Insert(const int& id, const int& value) = 0;
    virtual void Delete(const int& id) = 0;
};

#endif