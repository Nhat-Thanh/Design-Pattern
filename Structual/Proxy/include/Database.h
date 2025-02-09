#ifndef DATABASE_H
#define DATABASE_H

#include "IDatabase.h"
#include <map>
#include <stdexcept>

class Database : public IDatabase {
  private:
    std::map<int, int> m_Records;

  public:
    int Request(const int& id) const override;
    void Insert(const int& id, const int& value) override;
    void Delete(const int& id) override;
};

int Database::Request(const int& id) const {
    if (m_Records.find(id) == m_Records.end()) {
        std::out_of_range("ID does not have in database\n");
    }
    return m_Records.at(id);
}

void Database::Insert(const int& id, const int& value) {
    m_Records[id] = value;
}

void Database::Delete(const int& id) {
    m_Records.erase(id);
}

#endif
