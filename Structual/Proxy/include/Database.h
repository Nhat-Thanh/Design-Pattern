#ifndef DATABASE_H
#define DATABASE_H

#include "IDatabase.h"
#include <map>

class Database : public IDatabase {
  private:
    std::map<int, int> m_Records;

  public:
    int Request(const int& id) const override;
    void Insert(const int& id, const int& value) override;
    void Delete(const int& id) override;
};

#endif

