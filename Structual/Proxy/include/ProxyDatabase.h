#ifndef PROXY_DATABASE_H
#define PROXY_DATABASE_H

#include "IDatabase.h"

class ProxyDatabase {
  private:
    bool m_IsAccess;
    IDatabase* m_Database;

  public:
    ProxyDatabase(IDatabase* db);
    bool isAccessed() const;
    int Request(const int& id) const;
    void Insert(const int& id, const int& value);
    void Delete(const int& id);
};

#endif
