#include "Singleton.h"

Singleton* Singleton::m_Singleton = nullptr;

Singleton::Singleton() : m_Value(0) {}

Singleton* Singleton::GetInstance() {
    if (m_Singleton == nullptr) {
        m_Singleton = new Singleton;
    }
    return m_Singleton;
}

int Singleton::GetValue() const {
    return m_Value;
}

void Singleton::SetValue(const int& value) {
    m_Value = value;
}

