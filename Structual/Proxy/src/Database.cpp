#include "Database.h"

int Database::Request(const int& id) const {
    if (m_Records.find(id) != m_Records.end()) {
        return m_Records.at(id);
    }
    return 0;
}

void Database::Insert(const int& id, const int& value) {
    m_Records[id] = value;
}

void Database::Delete(const int& id) {
    m_Records.erase(id);
}

