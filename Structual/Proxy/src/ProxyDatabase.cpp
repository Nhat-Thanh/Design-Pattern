#include "ProxyDatabase.h"

ProxyDatabase::ProxyDatabase(IDatabase* db) : m_Database(db), m_IsAccess(false) {}

bool ProxyDatabase::isAccessed() const {
    return m_IsAccess;
}

int ProxyDatabase::Request(const int& id) const {
    return m_Database->Request(id);
}

void ProxyDatabase::Insert(const int& id, const int& value) {
    m_Database->Insert(id, value);
}

void ProxyDatabase::Delete(const int& id) {
    m_Database->Delete(id);
}

